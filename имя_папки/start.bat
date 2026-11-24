@echo off
setlocal EnableExtensions EnableDelayedExpansion
set "ROOT=%~dp0"
if "%ROOT:~-1%"=="\" set "ROOT=%ROOT:~0,-1%"
set "WORK=%TEMP%\robrun"
set "NO_CLIENT="
set "FIX_BLOCKLIST="
for /f %%a in ('copy /Z "%~f0" nul') do set "CR=%%a"
for /f %%a in ('echo prompt $E^| cmd') do set "ESC=%%a"

set "ELEVATED_FLAG="
set "PASS_ARGS="
:parse
if "%~1"=="" goto after_parse
if /i "%~1"=="--uac" set "ELEVATED_FLAG=1" & shift & goto parse
if /i "%~1"=="--n" set "NO_CLIENT=1" & set "PASS_ARGS=!PASS_ARGS! --n" & shift & goto parse
if /i "%~1"=="--b" set "FIX_BLOCKLIST=1" & set "PASS_ARGS=!PASS_ARGS! --b" & shift & goto parse
if /i "%~1"=="--r" goto do_clean
if /i "%~1"=="-h" goto usage
if /i "%~1"=="--help" goto usage
echo unknown option: %~1
goto usage

:after_parse
fltmc >nul 2>&1 && goto admin_ok
net session >nul 2>&1 && goto admin_ok
whoami /groups 2>nul | findstr /c:"S-1-16-12288" >nul 2>&1 && goto admin_ok
if defined ELEVATED_FLAG goto fail
where powershell >nul 2>&1
if not errorlevel 1 (
    set "ROBRUN_SELF=%~f0"
    powershell -NoProfile -ExecutionPolicy Bypass -Command "Start-Process -FilePath 'cmd.exe' -ArgumentList ('/c \"\"' + $env:ROBRUN_SELF + '\" --uac' + $env:PASS_ARGS + '\"') -Verb RunAs" >nul 2>&1
    exit /b
)
echo Set sh = CreateObject("Shell.Application") > "%TEMP%\robrun-uac.vbs"
echo sh.ShellExecute "cmd.exe", "/c """"%~f0"""" --uac!PASS_ARGS!", "", "runas", 1 >> "%TEMP%\robrun-uac.vbs"
cscript //nologo "%TEMP%\robrun-uac.vbs" >nul 2>&1
del /f /q "%TEMP%\robrun-uac.vbs" >nul 2>&1
exit /b

:admin_ok
title by govno leak
call :need "%ROOT%\driver.sys"
call :need "%ROOT%\123.sys"
call :need "%ROOT%\mapper.exe"
call :need "%ROOT%\123.exe"
call :need "%ROOT%\robrun_menu.dll"
call :need "%ROOT%\core_2b34_4387625.dll"
if defined MISSING goto fail

if not defined FIX_BLOCKLIST goto blocklist_check
reg add "HKLM\SYSTEM\CurrentControlSet\Control\CI\Config" /v VulnerableDriverBlocklistEnable /t REG_DWORD /d 0 /f >nul 2>&1
if errorlevel 1 echo blocklist: reg write failed
echo reboot, then run again
goto blocklist_check
:blocklist_check
reg query "HKLM\SYSTEM\CurrentControlSet\Control\CI\Config" /v VulnerableDriverBlocklistEnable 2>nul | findstr /i "0x0" >nul
if errorlevel 1 echo blocklist is on
if defined FIX_BLOCKLIST exit /b 0

taskkill /f /im 123.exe >nul 2>&1
taskkill /f /im mapper.exe >nul 2>&1
if exist "%WORK%" rmdir /s /q "%WORK%"
mkdir "%WORK%" || goto fail
copy /y "%ROOT%\driver.sys" "%WORK%\driver.sys" >nul || goto fail
copy /y "%ROOT%\123.sys" "%WORK%\123.sys" >nul || goto fail
copy /y "%ROOT%\mapper.exe" "%WORK%\mapper.exe" >nul || goto fail
copy /y "%ROOT%\123.exe" "%WORK%\123.exe" >nul || goto fail
copy /y "%ROOT%\robrun_menu.dll" "%WORK%\robrun_menu.dll" >nul || goto fail
copy /y "%ROOT%\core_2b34_4387625.dll" "%WORK%\core_2b34_4387625.dll" >nul || goto fail
if exist "%ROOT%\assets" robocopy "%ROOT%\assets" "%WORK%\assets" /E /NFL /NDL /NJH /NJS /nc /ns /np >nul
if exist "%TEMP%\focus.key" del /f /q "%TEMP%\focus.key" >nul 2>&1

set "CHOICE=%LOCALAPPDATA%\robrun\visit.txt"
set "VISIT=0"
if exist "%CHOICE%" goto saved_choice
call :banner
echo     Хотите ли вы посетить страницы авторов?
echo     [Y/Д] да    [N/Н] нет
set "ANS="
set /p "ANS=    "
if /i "!ANS!"=="Y" set "VISIT=1"
if /i "!ANS!"=="YES" set "VISIT=1"
if "!ANS!"=="Д" set "VISIT=1"
if "!ANS!"=="д" set "VISIT=1"
if "!ANS!"=="ДА" set "VISIT=1"
if "!ANS!"=="да" set "VISIT=1"
if "!ANS!"=="Да" set "VISIT=1"
echo.
echo     Сохранить выбор на будущее?
echo     [Y/Д] да    [N/Н] нет
set "KEEP="
set /p "KEEP=    "
if /i "!KEEP!"=="Y" goto save_choice
if /i "!KEEP!"=="YES" goto save_choice
if "!KEEP!"=="Д" goto save_choice
if "!KEEP!"=="д" goto save_choice
if "!KEEP!"=="ДА" goto save_choice
if "!KEEP!"=="да" goto save_choice
if "!KEEP!"=="Да" goto save_choice
goto fresh_screen
:save_choice
if not exist "%LOCALAPPDATA%\robrun" mkdir "%LOCALAPPDATA%\robrun"
if "!VISIT!"=="1" echo yes>"%CHOICE%"
if not "!VISIT!"=="1" echo no>"%CHOICE%"
goto fresh_screen
:saved_choice
set "SAVED="
set /p SAVED=<"%CHOICE%"
if /i "!SAVED!"=="yes" set "VISIT=1"
:fresh_screen
cls
call :banner
if not "!VISIT!"=="1" goto pages_done
start "" "https://yougame.biz/cash/"
start "" "https://yougame.biz/work/"
start "" "https://t.me/fakeanul"
:pages_done
start "" /b /d "%WORK%" cmd /c "mapper.exe 123.sys driver.sys >mapper.log 2>&1"

set "tick=0"
:wait
if exist "%TEMP%\focus.key" goto ready
set /a tick+=1
if !tick! GTR 16 set /a tick=1
set "fill="
for /l %%i in (1,1,!tick!) do set "fill=!fill!$"
set "show=!fill!................"
set "show=!show:~0,16!"
<nul set /p "=!ESC![92m    preparing  !show!    !ESC![0m!CR!"
timeout /t 1 /nobreak >nul
if exist "%TEMP%\focus.key" goto ready
tasklist /fi "imagename eq mapper.exe" 2>nul | find /i "mapper.exe" >nul
if errorlevel 1 (
    if exist "%TEMP%\focus.key" goto ready
    echo.
    if exist "%WORK%\mapper.log" type "%WORK%\mapper.log"
    goto fail
)
goto wait
:ready
echo.
echo !ESC![92m    ready      $$$$$$$$$$$$$$$$
echo.
echo !ESC![33m    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
echo !ESC![93m    $                                                               $
echo !ESC![93m    $   Поддержать проект                                           $
echo !ESC![93m    $   для скорейшего выпуска новых кряков                         $
echo !ESC![93m    $                                                               $
echo !ESC![93m    $   TRtMKz8R4dzetkCkTZVkZdsE6zdYKrBkRr                          $
echo !ESC![93m    $   USDT    TRC20    TRON                                       $
echo !ESC![93m    $                                                               $
echo !ESC![33m    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
echo !ESC![0m
goto launch
:launch
if defined NO_CLIENT goto hold
tasklist /fi "imagename eq 123.exe" 2>nul | find /i "123.exe" >nul
if not errorlevel 1 goto hold
start "" /d "%WORK%" "%WORK%\123.exe"

:hold
ping -n 86400 127.0.0.1 >nul
goto hold

:banner
echo.
echo !ESC![93m    $$$  $  $       $$$  $$$ $  $ $  $  $$$      $    $$$   $$  $  $ 
echo !ESC![93m    $  $  $$       $    $  $ $  $ $$ $ $  $      $    $    $  $ $ $  
echo !ESC![93m    $$$    $       $ $$ $  $ $  $ $ $$ $  $      $    $$$  $$$$ $$   
echo !ESC![93m    $  $   $       $  $ $  $  $$  $  $ $  $      $    $    $  $ $ $  
echo !ESC![93m    $$$    $        $$$  $$$  $$  $  $  $$$      $$$  $$$  $  $ $  $ 
echo.
echo !ESC![33m    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
echo !ESC![93m    $                         by govno leak                         $
echo !ESC![33m    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
echo.
echo !ESC![0m
exit /b 0

:need
if exist "%~1" exit /b 0
echo missing: %~1
set "MISSING=1"
exit /b 1

:do_clean
if exist "%WORK%" rmdir /s /q "%WORK%"
if exist "%TEMP%\focus.key" del /f /q "%TEMP%\focus.key" >nul 2>&1
exit /b 0

:usage
echo.
echo   start.bat
echo   start.bat --n    driver only
echo   start.bat --b    blocklist off, then reboot
echo   start.bat --r    delete the temp session
echo.
exit /b 1

:fail
echo.
echo     failed
pause
exit /b 1


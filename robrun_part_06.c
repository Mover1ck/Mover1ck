
{
  longlong lVar1;
  longlong *plVar2;

  lVar1 = FUN_1800568c0();
  if (lVar1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    lVar1 = FUN_180056d70();
    plVar2 = *(longlong **)(lVar1 + 0xa0);
    if (plVar2 != (longlong *)0x0) goto LAB_1800a2c42;
  }
  FID_conflict__assert
            (L"bd != nullptr && \"No renderer backend to shutdown, or already shutdown?\"",
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\backends\\imgui_impl_dx11.cpp"
             ,0x25c);
LAB_1800a2c42:
  lVar1 = FUN_180056d70();
  FUN_1800a1dd0();
  if ((longlong *)plVar2[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar2[2] + 0x10))();
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar2 + 0x10))();
  }
  if ((longlong *)plVar2[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar2[1] + 0x10))();
  }
  *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) & 0xfffffff7;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  FUN_18005b5c0((longlong)plVar2);
  return;
}


void FUN_1800a2cb0(longlong param_1,uint param_2,char param_3,uint param_4,uint param_5)

{
  FUN_18004c120(param_1,param_2,param_3);
  FUN_180067420(param_1,param_2,(ulonglong)param_4,(ulonglong)param_5,0xffffffff);
  return;
}


undefined1 FUN_1800a2d00(void)

{
  ulonglong uVar1;

  uVar1 = GetMessageExtraInfo();
  if ((uVar1 & 0xffffff80) == 0xff515700) {
    return 2;
  }
  return (uVar1 & 0xffffff80) == 0xff515780;
}


void FUN_1800a2d40(undefined8 param_1)

{
  FUN_1800a2d50(param_1);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800a2d50(undefined8 param_1)

{
  undefined8 uVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 *puVar5;
  HKL pHVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStackY_98 [32];
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  char *local_38 [4];
  char *local_18;
  ulonglong local_10;

  local_10 = DAT_180112300 ^ (ulonglong)auStackY_98;
  lVar4 = FUN_180056d70();
  FUN_1800527c0(0x1800deea0,0xbd8,0x490,8,0x10,0x14,2);
  if (*(longlong *)(lVar4 + 0x98) != 0) {
    FID_conflict__assert
              (L"io.BackendPlatformUserData == nullptr && \"Already initialized a platform backend!\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\backends\\imgui_impl_win32.cpp"
               ,0x9e);
  }
  BVar2 = QueryPerformanceFrequency(&local_48);
  uVar8 = CONCAT44(extraout_var,BVar2);
  if (BVar2 != 0) {
    BVar2 = QueryPerformanceCounter(&local_40);
    uVar8 = CONCAT44(extraout_var_00,BVar2);
    if (BVar2 != 0) {
      puVar5 = (undefined8 *)FUN_18005b560(0x50);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
      }
      *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 6;
      *(char **)(lVar4 + 0x88) = "imgui_impl_win32";
      *(undefined8 **)(lVar4 + 0x98) = puVar5;
      *puVar5 = param_1;
      *(_struct_19 *)(puVar5 + 4) = local_48.s;
      *(_struct_19 *)(puVar5 + 3) = local_40.s;
      *(undefined4 *)(puVar5 + 5) = 0xb;
      lVar4 = *(longlong *)(lVar4 + 0x98);
      pHVar6 = GetKeyboardLayout(0);
      iVar3 = GetLocaleInfoA((uint)((ulonglong)pHVar6 >> 0x10) & 0xffff,0x20001004,
                             (LPSTR)(lVar4 + 0x2c),4);
      if (iVar3 == 0) {
        *(undefined4 *)(lVar4 + 0x2c) = 0;
      }
      lVar4 = FUN_1800571f0();
      uVar1 = *puVar5;
      uVar8 = 0;
      *(undefined8 *)(lVar4 + 0x30) = uVar1;
      *(undefined8 *)(lVar4 + 0x28) = uVar1;
      local_38[0] = "xinput1_4.dll";
      local_38[1] = "xinput1_3.dll";
      local_38[2] = "xinput9_1_0.dll";
      local_38[3] = "xinput1_2.dll";
      local_18 = "xinput1_1.dll";
      *(undefined1 *)((longlong)puVar5 + 0x31) = 1;
      do {
        hModule = LoadLibraryA(local_38[uVar8]);
        if (hModule != (HMODULE)0x0) {
          puVar5[7] = hModule;
          pFVar7 = GetProcAddress(hModule,"XInputGetCapabilities");
          puVar5[8] = pFVar7;
          pFVar7 = GetProcAddress(hModule,"XInputGetState");
          puVar5[9] = pFVar7;
          return CONCAT71((int7)((ulonglong)pFVar7 >> 8),1);
        }
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
      } while ((int)uVar9 < 5);
      return 1;
    }
  }
  return uVar8 & 0xffffffffffffff00;
}


undefined8 FUN_1800a2f80(longlong param_1,undefined8 param_2)

{
  if ((param_1 == 0xd) && (((ushort)((ulonglong)param_2 >> 0x10) >> 8 & 1) != 0)) {
    return 0x273;
  }
  switch(param_1) {
  case 8:
    return 0x20b;
  case 9:
    return 0x200;
  case 0xd:
    return 0x20d;
  case 0x13:
    return 0x263;
  case 0x14:
    return 0x25f;
  case 0x1b:
    return 0x20e;
  case 0x20:
    return 0x20c;
  case 0x21:
    return 0x205;
  case 0x22:
    return 0x206;
  case 0x23:
    return 0x208;
  case 0x24:
    return 0x207;
  case 0x25:
    return 0x201;
  case 0x26:
    return 0x203;
  case 0x27:
    return 0x202;
  case 0x28:
    return 0x204;
  case 0x2c:
    return 0x262;
  case 0x2d:
    return 0x209;
  case 0x2e:
    return 0x20a;
  case 0x30:
    return 0x218;
  case 0x31:
    return 0x219;
  case 0x32:
    return 0x21a;
  case 0x33:
    return 0x21b;
  case 0x34:
    return 0x21c;
  case 0x35:
    return 0x21d;
  case 0x36:
    return 0x21e;
  case 0x37:
    return 0x21f;
  case 0x38:
    return 0x220;
  case 0x39:
    return 0x221;
  case 0x41:
    return 0x222;
  case 0x42:
    return 0x223;
  case 0x43:
    return 0x224;
  case 0x44:
    return 0x225;
  case 0x45:
    return 0x226;
  case 0x46:
    return 0x227;
  case 0x47:
    return 0x228;
  case 0x48:
    return 0x229;
  case 0x49:
    return 0x22a;
  case 0x4a:
    return 0x22b;
  case 0x4b:
    return 0x22c;
  case 0x4c:
    return 0x22d;
  case 0x4d:
    return 0x22e;
  case 0x4e:
    return 0x22f;
  case 0x4f:
    return 0x230;
  case 0x50:
    return 0x231;
  case 0x51:
    return 0x232;
  case 0x52:
    return 0x233;
  case 0x53:
    return 0x234;
  case 0x54:
    return 0x235;
  case 0x55:
    return 0x236;
  case 0x56:
    return 0x237;
  case 0x57:
    return 0x238;
  case 0x58:
    return 0x239;
  case 0x59:
    return 0x23a;
  case 0x5a:
    return 0x23b;
  case 0x5b:
    return 0x212;
  case 0x5c:
    return 0x216;
  case 0x5d:
    return 0x217;
  case 0x60:
    return 0x264;
  case 0x61:
    return 0x265;
  case 0x62:
    return 0x266;
  case 99:
    return 0x267;
  case 100:
    return 0x268;
  case 0x65:
    return 0x269;
  case 0x66:
    return 0x26a;
  case 0x67:
    return 0x26b;
  case 0x68:
    return 0x26c;
  case 0x69:
    return 0x26d;
  case 0x6a:
    return 0x270;
  case 0x6b:
    return 0x272;
  case 0x6d:
    return 0x271;
  case 0x6e:
    return 0x26e;
  case 0x6f:
    return 0x26f;
  case 0x70:
    return 0x23c;
  case 0x71:
    return 0x23d;
  case 0x72:
    return 0x23e;
  case 0x73:
    return 0x23f;
  case 0x74:
    return 0x240;
  case 0x75:
    return 0x241;
  case 0x76:
    return 0x242;
  case 0x77:
    return 0x243;
  case 0x78:
    return 0x244;
  case 0x79:
    return 0x245;
  case 0x7a:
    return 0x246;
  case 0x7b:
    return 0x247;
  case 0x7c:
    return 0x248;
  case 0x7d:
    return 0x249;
  case 0x7e:
    return 0x24a;
  case 0x7f:
    return 0x24b;
  case 0x80:
    return 0x24c;
  case 0x81:
    return 0x24d;
  case 0x82:
    return 0x24e;
  case 0x83:
    return 0x24f;
  case 0x84:
    return 0x250;
  case 0x85:
    return 0x251;
  case 0x86:
    return 0x252;
  case 0x87:
    return 0x253;
  case 0x90:
    return 0x261;
  case 0x91:
    return 0x260;
  case 0xa0:
    return 0x210;
  case 0xa1:
    return 0x214;
  case 0xa2:
    return 0x20f;
  case 0xa3:
    return 0x213;
  case 0xa4:
    return 0x211;
  case 0xa5:
    return 0x215;
  case 0xa6:
    return 0x275;
  case 0xa7:
    return 0x276;
  case 0xbc:
switchD_1800a2fc2_caseD_bc:
    return 0x255;
  case 0xbe:
switchD_1800a2fc2_caseD_be:
    return 599;
  }
  switch((uint)((ulonglong)param_2 >> 0x10) & 0xff) {
  case 0xc:
    return 0x256;
  case 0xd:
    return 0x25a;
  default:
    return 0;
  case 0x1a:
    return 0x25b;
  case 0x1b:
    return 0x25d;
  case 0x27:
    return 0x259;
  case 0x28:
    return 0x254;
  case 0x29:
    return 0x25e;
  case 0x2b:
    return 0x25c;
  case 0x33:
    goto switchD_1800a2fc2_caseD_bc;
  case 0x34:
    goto switchD_1800a2fc2_caseD_be;
  case 0x35:
    return 600;
  case 0x56:
    return 0x277;
  }
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a35a0(void)

{
  longlong *plVar1;
  SHORT SVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  HWND pHVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStackY_68 [32];
  tagPOINT local_38;
  LARGE_INTEGER local_30;
  tagRECT local_28;
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStackY_68;
  lVar5 = FUN_1800568c0();
  if (lVar5 == 0) {
    puVar9 = (undefined8 *)0x0;
LAB_1800a35dd:
    FID_conflict__assert
              (L"bd != nullptr && \"Context or backend not initialized? Did you call ImGui_ImplWin32_Init()?\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\backends\\imgui_impl_win32.cpp"
               ,0x18a);
  }
  else {
    lVar5 = FUN_180056d70();
    puVar9 = *(undefined8 **)(lVar5 + 0x98);
    if (puVar9 == (undefined8 *)0x0) goto LAB_1800a35dd;
  }
  pbVar6 = (byte *)FUN_180056d70();
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetClientRect((HWND)*puVar9,&local_28);
  *(float *)(pbVar6 + 0xc) = (float)(local_28.bottom - local_28.top);
  *(float *)(pbVar6 + 8) = (float)(local_28.right - local_28.left);
  local_30.QuadPart = 0;
  QueryPerformanceCounter(&local_30);
  *(float *)(pbVar6 + 0x10) = (float)(local_30.QuadPart - puVar9[3]) / (float)(longlong)puVar9[4];
  *(_struct_19 *)(puVar9 + 3) = local_30.s;
  plVar1 = *(longlong **)(pbVar6 + 0x98);
  if (*plVar1 == 0) {
    FID_conflict__assert
              (L"bd->hWnd != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\backends\\imgui_impl_win32.cpp"
               ,0x134);
  }
  pHVar7 = GetForegroundWindow();
  if (pHVar7 == (HWND)*plVar1) {
    if (pbVar6[0xb3] != 0) {
      local_38.x = (LONG)(float)*(undefined8 *)(pbVar6 + 0xe0);
      local_38.y = (LONG)(float)((ulonglong)*(undefined8 *)(pbVar6 + 0xe0) >> 0x20);
      BVar3 = ClientToScreen((HWND)*plVar1,&local_38);
      if (BVar3 != 0) {
        SetCursorPos(local_38.x,local_38.y);
      }
      if (pbVar6[0xb3] != 0) goto LAB_1800a3737;
    }
    if ((((int)plVar1[2] == 0) && (BVar3 = GetCursorPos(&local_38), BVar3 != 0)) &&
       (BVar3 = ScreenToClient((HWND)*plVar1,&local_38), BVar3 != 0)) {
      FUN_18004c3a0((longlong)pbVar6,(float)local_38.x,(float)local_38.y);
    }
  }
LAB_1800a3737:
  uVar8 = FUN_180059840(0x210);
  iVar4 = -1;
  if (((char)uVar8 != '\0') && (SVar2 = GetKeyState(0xa0), -1 < SVar2)) {
    FUN_18004c120((longlong)pbVar6,0x210,'\0');
    FUN_180067420(pbVar6,0x210,0xa0,0xffffffff,0xffffffff);
  }
  uVar8 = FUN_180059840(0x214);
  if (((char)uVar8 != '\0') && (SVar2 = GetKeyState(0xa1), -1 < SVar2)) {
    FUN_18004c120((longlong)pbVar6,0x214,'\0');
    FUN_180067420(pbVar6,0x214,0xa1,0xffffffff,0xffffffff);
  }
  uVar8 = FUN_180059840(0x212);
  if (((char)uVar8 != '\0') && (SVar2 = GetKeyState(0x5b), -1 < SVar2)) {
    FUN_18004c120((longlong)pbVar6,0x212,'\0');
    FUN_180067420(pbVar6,0x212,0x5b,0xffffffff,0xffffffff);
  }
  uVar8 = FUN_180059840(0x216);
  if (((char)uVar8 != '\0') && (SVar2 = GetKeyState(0x5c), -1 < SVar2)) {
    FUN_18004c120((longlong)pbVar6,0x216,'\0');
    FUN_180067420(pbVar6,0x216,0x5c,0xffffffff,0xffffffff);
  }
  if (pbVar6[0x57] == 0) {
    iVar4 = FUN_1800572b0();
  }
  if (*(int *)(puVar9 + 5) != iVar4) {
    *(int *)(puVar9 + 5) = iVar4;
    FUN_1800a3e50(pbVar6,iVar4);
  }
  FUN_1800a3930((longlong)pbVar6);
  return;
}


void FUN_1800a38a0(void)

{
  longlong lVar1;
  longlong lVar2;

  lVar1 = FUN_1800568c0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_180056d70();
    lVar1 = *(longlong *)(lVar1 + 0x98);
    if (lVar1 != 0) goto LAB_1800a38e2;
  }
  FID_conflict__assert
            (L"bd != nullptr && \"No platform backend to shutdown, or already shutdown?\"",
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\backends\\imgui_impl_win32.cpp"
             ,0xde);
LAB_1800a38e2:
  lVar2 = FUN_180056d70();
  if (*(HMODULE *)(lVar1 + 0x38) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(lVar1 + 0x38));
  }
  *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) & 0xfffffff8;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  FUN_18005b5c0(lVar1);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a3930(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  byte local_84;
  byte local_82;
  byte local_81;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;

  local_60 = DAT_180112300 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (*(char *)(lVar1 + 0x31) != '\0') {
    bVar3 = false;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if (*(code **)(lVar1 + 0x40) != (code *)0x0) {
      iVar2 = (**(code **)(lVar1 + 0x40))(0,1,&local_78);
      bVar3 = iVar2 == 0;
    }
    *(bool *)(lVar1 + 0x30) = bVar3;
    *(undefined1 *)(lVar1 + 0x31) = 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  if (((*(char *)(lVar1 + 0x30) != '\0') && (*(code **)(lVar1 + 0x48) != (code *)0x0)) &&
     (iVar2 = (**(code **)(lVar1 + 0x48))(0,local_88), iVar2 == 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    FUN_18004c120(param_1,0x278,local_84 >> 4 & 1);
    FUN_18004c120(param_1,0x279,local_84 >> 5 & 1);
    FUN_18004c120(param_1,0x27a,(byte)((ushort)_local_84 >> 0xe) & 1);
    FUN_18004c120(param_1,0x27b,(byte)((ushort)_local_84 >> 0xd) & 1);
    FUN_18004c120(param_1,0x27c,(byte)((ushort)_local_84 >> 0xf));
    FUN_18004c120(param_1,0x27d,(byte)((ushort)_local_84 >> 0xc) & 1);
    FUN_18004c120(param_1,0x27e,local_84 >> 2 & 1);
    FUN_18004c120(param_1,0x27f,local_84 >> 3 & 1);
    FUN_18004c120(param_1,0x280,local_84 & 1);
    FUN_18004c120(param_1,0x281,local_84 >> 1 & 1);
    FUN_18004c120(param_1,0x282,(byte)((ushort)_local_84 >> 8) & 1);
    FUN_18004c120(param_1,0x283,(byte)((ushort)_local_84 >> 9) & 1);
    fVar6 = 0.0;
    fVar4 = (float)(int)(local_82 - 0x1e) / 225.0;
    if (0.0 <= fVar4) {
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_18004be80(param_1,0x284,0.1 < fVar4,fVar5);
    fVar4 = (float)(int)(local_81 - 0x1e) / 225.0;
    if (0.0 <= fVar4) {
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_18004be80(param_1,0x285,0.1 < fVar4,fVar5);
    FUN_18004c120(param_1,0x286,local_84 >> 6 & 1);
    FUN_18004c120(param_1,0x287,local_84 >> 7);
    fVar4 = (float)(local_80 + 0x1ea9) / -24919.0;
    if (0.0 <= fVar4) {
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_18004be80(param_1,0x288,0.1 < fVar4,fVar5);
    fVar4 = (float)(local_80 + -0x1ea9) / 24918.0;
    if (0.0 <= fVar4) {
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_18004be80(param_1,0x289,0.1 < fVar4,fVar5);
    fVar4 = (float)(local_7e + -0x1ea9) / 24918.0;
    if (0.0 <= fVar4) {
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_18004be80(param_1,0x28a,0.1 < fVar4,fVar5);
    fVar4 = (float)(local_7e + 0x1ea9) / -24919.0;
    if (0.0 <= fVar4) {
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_18004be80(param_1,0x28b,0.1 < fVar4,fVar5);
    fVar4 = (float)(local_7c + 0x1ea9) / -24919.0;
    if (0.0 <= fVar4) {
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_18004be80(param_1,0x28c,0.1 < fVar4,fVar5);
    fVar4 = (float)(local_7c + -0x1ea9) / 24918.0;
    if (0.0 <= fVar4) {
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_18004be80(param_1,0x28d,0.1 < fVar4,fVar5);
    fVar4 = (float)(local_7a + -0x1ea9) / 24918.0;
    if (0.0 <= fVar4) {
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
    }
    else {
      fVar5 = 0.0;
    }
    FUN_18004be80(param_1,0x28e,0.1 < fVar4,fVar5);
    fVar4 = (float)(local_7a + 0x1ea9) / -24919.0;
    if ((0.0 <= fVar4) && (fVar6 = 1.0, fVar4 <= 1.0)) {
      fVar6 = fVar4;
    }
    FUN_18004be80(param_1,0x28f,0.1 < fVar4,fVar6);
  }
  return;
}


void FUN_1800a3e10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  HKL pHVar3;

  lVar1 = *(longlong *)(param_1 + 0x98);
  pHVar3 = GetKeyboardLayout(0);
  iVar2 = GetLocaleInfoA((uint)((ulonglong)pHVar3 >> 0x10) & 0xffff,0x20001004,(LPSTR)(lVar1 + 0x2c)
                         ,4);
  if (iVar2 == 0) {
    *(undefined4 *)(lVar1 + 0x2c) = 0;
  }
  return;
}


longlong FUN_1800a3e50(byte *param_1,int param_2)

{
  HCURSOR pHVar1;
  LPCSTR lpCursorName;

  if ((*param_1 & 0x20) != 0) {
    return (ulonglong)(uint7)(int7)(int3)((uint)param_2 >> 8) << 8;
  }
  if ((param_2 == -1) || (param_1[0x57] != 0)) {
    pHVar1 = SetCursor((HCURSOR)0x0);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  }
  lpCursorName = (LPCSTR)0x7f00;
  switch(param_2) {
  case 1:
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f01);
    pHVar1 = SetCursor(pHVar1);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  case 2:
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f86);
    pHVar1 = SetCursor(pHVar1);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  case 3:
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f85);
    pHVar1 = SetCursor(pHVar1);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  case 4:
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f84);
    pHVar1 = SetCursor(pHVar1);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  case 5:
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f83);
    pHVar1 = SetCursor(pHVar1);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  case 6:
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f82);
    pHVar1 = SetCursor(pHVar1);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  case 7:
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f89);
    pHVar1 = SetCursor(pHVar1);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  case 8:
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
    pHVar1 = SetCursor(pHVar1);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  case 9:
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f8a);
    pHVar1 = SetCursor(pHVar1);
    return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
  case 10:
    lpCursorName = (LPCSTR)0x7f88;
  }
  pHVar1 = LoadCursorA((HINSTANCE)0x0,lpCursorName);
  pHVar1 = SetCursor(pHVar1);
  return CONCAT71((int7)((ulonglong)pHVar1 >> 8),1);
}


void FUN_1800a4000(HWND param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  byte *pbVar2;

  lVar1 = FUN_1800568c0();
  if (lVar1 == 0) {
    return;
  }
  pbVar2 = (byte *)FUN_180056d70();
  FUN_1800a4050(param_1,param_2,param_3,param_4,pbVar2);
  return;
}


undefined8
FUN_1800a4050(HWND param_1,uint param_2,ulonglong param_3,ulonglong param_4,byte *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  SHORT SVar5;
  BOOL BVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  HWND pHVar9;
  undefined7 extraout_var_01;
  ulonglong uVar10;
  char cVar11;
  short sVar12;
  uint uVar13;
  bool bVar14;
  ulonglong local_res18 [2];
  tagPOINT local_80;
  tagTRACKMOUSEEVENT local_78;
  tagTRACKMOUSEEVENT local_60;

  pbVar3 = param_5;
  lVar1 = *(longlong *)(param_5 + 0x98);
  if (lVar1 == 0) {
    return 0;
  }
  local_res18[0] = param_3;
  if (0x200 < param_2) {
    sVar12 = (short)(param_3 >> 0x10);
    switch(param_2) {
    case 0x201:
    case 0x203:
    case 0x204:
    case 0x206:
    case 0x207:
    case 0x209:
    case 0x20b:
    case 0x20d:
      uVar4 = FUN_1800a2d00();
      param_5._0_2_ = (ushort)CONCAT71(extraout_var_00,uVar4);
      param_5._2_2_ = (undefined2)((uint7)extraout_var_00 >> 8);
      if ((param_2 == 0x204) || (uVar13 = 0, param_2 == 0x206)) {
        uVar13 = 1;
      }
      if ((param_2 - 0x207 & 0xfffffffd) == 0) {
        uVar13 = 2;
      }
      if ((param_2 - 0x20b & 0xfffffffd) == 0) {
        uVar13 = ((short)(local_res18[0] >> 0x10) != 1) + 3;
      }
      if ((*(int *)(lVar1 + 0x14) == 0) && (pHVar9 = GetCapture(), pHVar9 == (HWND)0x0)) {
        SetCapture(param_1);
      }
      *(uint *)(lVar1 + 0x14) = *(uint *)(lVar1 + 0x14) | 1 << uVar13;
      FUN_18004c580((longlong)pbVar3,CONCAT22(param_5._2_2_,(ushort)param_5));
      FUN_18004c150((longlong)pbVar3,uVar13,CONCAT71((int7)(param_3 >> 8),1),param_4);
      return 0;
    case 0x202:
    case 0x205:
    case 0x208:
    case 0x20c:
      uVar4 = FUN_1800a2d00();
      uVar13 = (uint)(param_2 == 0x205);
      if (param_2 == 0x208) {
        uVar13 = 2;
      }
      else if (param_2 == 0x20c) {
        uVar13 = ((short)(local_res18[0] >> 0x10) != 1) + 3;
      }
      uVar7 = *(uint *)(lVar1 + 0x14) & ~(1 << uVar13);
      *(uint *)(lVar1 + 0x14) = uVar7;
      if ((uVar7 == 0) && (pHVar9 = GetCapture(), pHVar9 == param_1)) {
        ReleaseCapture();
      }
      FUN_18004c580((longlong)pbVar3,(int)CONCAT71(extraout_var_01,uVar4));
      FUN_18004c150((longlong)pbVar3,uVar13,0,param_4);
      return 0;
    case 0x20a:
      FUN_18004c5f0((longlong)param_5,0.0,(float)(int)sVar12 / 120.0);
      return 0;
    case 0x20e:
      FUN_18004c5f0((longlong)param_5,-(float)(int)sVar12 / 120.0,0.0);
      return 0;
    default:
      return 0;
    case 0x219:
      if ((int)param_3 == 7) {
        *(undefined1 *)(lVar1 + 0x31) = 1;
        return 0;
      }
      return 0;
    case 0x2a2:
    case 0x2a3:
      goto switchD_1800a45a1_caseD_2a2;
    }
  }
  if (param_2 == 0x200) {
switchD_1800a410c_caseD_a0:
    uVar4 = FUN_1800a2d00();
    *(HWND *)(lVar1 + 8) = param_1;
    param_5._0_4_ = (param_2 != 0x200) + 1;
    if (*(int *)(lVar1 + 0x10) != (int)param_5) {
      local_78.cbSize = 0x18;
      local_78.dwFlags = 0x80000000;
      local_60.dwFlags = 2;
      if (param_2 != 0x200) {
        local_60.dwFlags = 0x12;
      }
      local_78.dwHoverTime = 0;
      local_60.cbSize = 0x18;
      local_60.dwHoverTime = 0;
      local_78.hwndTrack = param_1;
      local_60.hwndTrack = param_1;
      if (*(int *)(lVar1 + 0x10) != 0) {
        TrackMouseEvent(&local_78);
      }
      TrackMouseEvent(&local_60);
      *(int *)(lVar1 + 0x10) = (int)param_5;
    }
    local_80.x = (LONG)(short)param_4;
    local_80.y = (LONG)(short)(param_4 >> 0x10);
    if (param_2 == 0xa0) {
      BVar6 = ScreenToClient(param_1,&local_80);
      if (BVar6 == 0) {
        return 0;
      }
    }
    FUN_18004c580((longlong)pbVar3,(int)CONCAT71(extraout_var,uVar4));
    FUN_18004c3a0((longlong)pbVar3,(float)local_80.x,(float)local_80.y);
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 != 7) {
      if (param_2 != 2) {
        return 0;
      }
      if (*(HWND *)(lVar1 + 8) != param_1) {
        return 0;
      }
      if (*(int *)(lVar1 + 0x10) == 0) {
        return 0;
      }
      local_78.dwHoverTime = 0;
      local_78.cbSize = 0x18;
      local_78.dwFlags = 0x80000000;
      local_78.hwndTrack = param_1;
      TrackMouseEvent(&local_78);
      goto LAB_1800a45c2;
    }
LAB_1800a43e5:
    FUN_18004bb80((longlong)param_5,param_2 == 7);
  }
  else {
    switch(param_2) {
    case 8:
      goto LAB_1800a43e5;
    case 0x20:
      if (((short)param_4 == 1) &&
         (uVar8 = FUN_1800a3e50(param_5,*(int *)(lVar1 + 0x28)), (char)uVar8 != '\0')) {
        return 1;
      }
      break;
    case 0x51:
      FUN_1800a3e10((longlong)param_5);
      break;
    case 0xa0:
      goto switchD_1800a410c_caseD_a0;
    case 0x100:
    case 0x101:
    case 0x104:
    case 0x105:
      bVar14 = (param_2 - 0x100 & 0xfffffffb) == 0;
      if (0xff < param_3) {
        return 0;
      }
      SVar5 = GetKeyState(0x11);
      FUN_18004c120((longlong)pbVar3,0x1000,(byte)((ushort)SVar5 >> 0xf));
      SVar5 = GetKeyState(0x10);
      FUN_18004c120((longlong)pbVar3,0x2000,(byte)((ushort)SVar5 >> 0xf));
      SVar5 = GetKeyState(0x12);
      FUN_18004c120((longlong)pbVar3,0x4000,(byte)((ushort)SVar5 >> 0xf));
      SVar5 = GetKeyState(0x5b);
      if ((SVar5 < 0) || (SVar5 = GetKeyState(0x5c), SVar5 < 0)) {
        cVar11 = '\x01';
      }
      else {
        cVar11 = '\0';
      }
      FUN_18004c120((longlong)pbVar3,0x8000,cVar11);
      uVar2 = local_res18[0];
      uVar8 = FUN_1800a2f80(local_res18[0],param_4);
      uVar13 = (uint)uVar8;
      uVar10 = param_4 >> 0x10 & 0xff;
      uVar7 = (uint)uVar2;
      if (uVar13 == 0x262) {
        if (!bVar14) {
          FUN_1800a2cb0((longlong)pbVar3,0x262,'\x01',uVar7,(uint)uVar10);
        }
LAB_1800a4201:
        FUN_1800a2cb0((longlong)pbVar3,uVar13,bVar14,uVar7,(uint)uVar10);
      }
      else if (uVar13 != 0) goto LAB_1800a4201;
      if (uVar7 == 0x10) {
        SVar5 = GetKeyState(0xa0);
        if ((bool)-(char)(SVar5 >> 0xf) == bVar14) {
          FUN_18004c120((longlong)pbVar3,0x210,bVar14);
          FUN_180067420(pbVar3,0x210,0xa0,uVar10,0xffffffff);
        }
        SVar5 = GetKeyState(0xa1);
        if ((bool)-(char)(SVar5 >> 0xf) == bVar14) {
          FUN_18004c120((longlong)pbVar3,0x214,bVar14);
          FUN_180067420(pbVar3,0x214,0xa1,uVar10,0xffffffff);
        }
      }
      else if (uVar7 == 0x11) {
        SVar5 = GetKeyState(0xa2);
        if ((bool)-(char)(SVar5 >> 0xf) == bVar14) {
          FUN_18004c120((longlong)pbVar3,0x20f,bVar14);
          FUN_180067420(pbVar3,0x20f,0xa2,uVar10,0xffffffff);
        }
        SVar5 = GetKeyState(0xa3);
        if ((bool)-(char)(SVar5 >> 0xf) == bVar14) {
          FUN_18004c120((longlong)pbVar3,0x213,bVar14);
          FUN_180067420(pbVar3,0x213,0xa3,uVar10,0xffffffff);
        }
      }
      else if (uVar7 == 0x12) {
        SVar5 = GetKeyState(0xa4);
        if ((bool)-(char)(SVar5 >> 0xf) == bVar14) {
          FUN_18004c120((longlong)pbVar3,0x211,bVar14);
          FUN_180067420(pbVar3,0x211,0xa4,uVar10,0xffffffff);
        }
        SVar5 = GetKeyState(0xa5);
        if ((bool)-(char)(SVar5 >> 0xf) == bVar14) {
          FUN_18004c120((longlong)pbVar3,0x215,bVar14);
          FUN_180067420(pbVar3,0x215,0xa5,uVar10,0xffffffff);
        }
      }
      break;
    case 0x102:
      BVar6 = IsWindowUnicode(param_1);
      if (BVar6 == 0) {
        param_5._0_2_ = 0;
        MultiByteToWideChar(*(UINT *)(lVar1 + 0x2c),1,(LPCSTR)local_res18,1,(LPWSTR)&param_5,1);
        FUN_18004bcd0((longlong)pbVar3,(uint)(ushort)param_5);
      }
      else if (local_res18[0] - 1 < 0xffff) {
        FUN_18004bdd0((longlong)pbVar3,(ushort)local_res18[0]);
      }
    }
  }
  return 0;
switchD_1800a45a1_caseD_2a2:
  if (*(int *)(lVar1 + 0x10) != (param_2 != 0x2a3) + 1) {
    return 0;
  }
  if (*(HWND *)(lVar1 + 8) != param_1) goto LAB_1800a45c6;
LAB_1800a45c2:
  *(undefined8 *)(lVar1 + 8) = 0;
LAB_1800a45c6:
  *(undefined4 *)(lVar1 + 0x10) = 0;
  FUN_18004c3a0((longlong)pbVar3,-3.4028235e+38,-3.4028235e+38);
  return 0;
}


void D3D11CreateDevice(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800a4950. Too many branches
                    // WARNING: Treating indirect jump as call
  D3D11CreateDevice();
  return;
}


undefined1 (*) [32]
FUN_1800a4960(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];

  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_180112354 & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_180112354 & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_1800a4a01;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar7));
      uVar5 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_1800a4a01:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}


undefined1 (*) [32]
FUN_1800a4a60(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  uint uVar11;
  undefined1 (*pauVar12) [32];
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];

  uVar13 = (longlong)param_2 - (longlong)param_1;
  pauVar12 = param_2;
  if (((uVar13 & 0xffffffffffffffe0) == 0) || ((DAT_180112354 & 0x20) == 0)) {
    if (((uVar13 & 0xfffffffffffffff0) != 0) && ((DAT_180112354 & 4) != 0)) {
      do {
        pauVar3 = pauVar12 + -1;
        pauVar4 = pauVar12 + -1;
        pauVar5 = pauVar12 + -1;
        pauVar6 = pauVar12 + -1;
        pauVar7 = pauVar12 + -1;
        pauVar8 = pauVar12 + -1;
        pauVar9 = pauVar12 + -1;
        pauVar10 = pauVar12 + -1;
        pauVar12 = (undefined1 (*) [32])(pauVar12[-1] + 0x10);
        auVar15._0_2_ = -(ushort)(*(short *)(*pauVar3 + 0x10) == param_3);
        auVar15._2_2_ = -(ushort)(*(short *)(*pauVar4 + 0x12) == param_3);
        auVar15._4_2_ = -(ushort)(*(short *)(*pauVar5 + 0x14) == param_3);
        auVar15._6_2_ = -(ushort)(*(short *)(*pauVar6 + 0x16) == param_3);
        auVar15._8_2_ = -(ushort)(*(short *)(*pauVar7 + 0x18) == param_3);
        auVar15._10_2_ = -(ushort)(*(short *)(*pauVar8 + 0x1a) == param_3);
        auVar15._12_2_ = -(ushort)(*(short *)(*pauVar9 + 0x1c) == param_3);
        auVar15._14_2_ = -(ushort)(*(short *)(*pauVar10 + 0x1e) == param_3);
        uVar1 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auVar15._14_2_ >> 7) & 1) << 0xe | auVar15._14_2_ & 0x8000;
        if (uVar1 != 0) {
          uVar11 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> uVar11 == 0; uVar11 = uVar11 - 1) {
            }
          }
          return (undefined1 (*) [32])(pauVar12[-1] + (ulonglong)uVar11 + 0x1f);
        }
      } while (pauVar12 != (undefined1 (*) [32])((longlong)param_2 - (uVar13 & 0xfffffffffffffff0)))
      ;
    }
  }
  else {
    auVar15 = vpunpcklwd_avx(ZEXT416((uint)(int)param_3),ZEXT416((uint)(int)param_3));
    auVar15 = vpshufd_avx(auVar15,0);
    auVar16._16_16_ = auVar15;
    auVar16._0_16_ = auVar15;
    do {
      auVar2 = vpcmpeqw_avx2(auVar16,pauVar12[-1]);
      pauVar12 = pauVar12 + -1;
      uVar11 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) goto LAB_1800a4b1b;
    } while (pauVar12 != (undefined1 (*) [32])((longlong)param_2 - (uVar13 & 0xffffffffffffffe0)));
    uVar14 = (ulonglong)((uint)uVar13 & 0x1c);
    if ((uVar13 & 0x1c) != 0) {
      pauVar12 = (undefined1 (*) [32])((longlong)pauVar12 - uVar14);
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar14),*pauVar12);
      auVar16 = vpcmpeqw_avx2(auVar2,auVar16);
      auVar16 = vpand_avx2(auVar16,*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar14));
      uVar11 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar16 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) {
LAB_1800a4b1b:
        return (undefined1 (*) [32])(pauVar12[-1] + (ulonglong)(0x1f - LZCOUNT(uVar11)) + 0x1f);
      }
    }
  }
  do {
    if (pauVar12 == param_1) {
      return param_2;
    }
    pauVar12 = (undefined1 (*) [32])(pauVar12[-1] + 0x1e);
  } while (*(short *)*pauVar12 != param_3);
  return pauVar12;
}


ulonglong FUN_1800a4b90(longlong param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];

  uVar6 = 0;
  if ((DAT_180112354 & 0x20) == 0) {
    if ((DAT_180112354 & 4) == 0) goto joined_r0x0001800a4c5b;
    uVar8 = param_3 * 2 & 0xfffffffffffffff0;
    if (uVar8 != 0) {
      do {
        pcVar1 = (char *)(param_1 + uVar6);
        auVar2 = *(undefined1 (*) [16])(param_2 + uVar6);
        auVar10[0] = -(*pcVar1 == auVar2[0]);
        auVar10[1] = -(pcVar1[1] == auVar2[1]);
        auVar10[2] = -(pcVar1[2] == auVar2[2]);
        auVar10[3] = -(pcVar1[3] == auVar2[3]);
        auVar10[4] = -(pcVar1[4] == auVar2[4]);
        auVar10[5] = -(pcVar1[5] == auVar2[5]);
        auVar10[6] = -(pcVar1[6] == auVar2[6]);
        auVar10[7] = -(pcVar1[7] == auVar2[7]);
        auVar10[8] = -(pcVar1[8] == auVar2[8]);
        auVar10[9] = -(pcVar1[9] == auVar2[9]);
        auVar10[10] = -(pcVar1[10] == auVar2[10]);
        auVar10[0xb] = -(pcVar1[0xb] == auVar2[0xb]);
        auVar10[0xc] = -(pcVar1[0xc] == auVar2[0xc]);
        auVar10[0xd] = -(pcVar1[0xd] == auVar2[0xd]);
        auVar10[0xe] = -(pcVar1[0xe] == auVar2[0xe]);
        auVar10[0xf] = -(pcVar1[0xf] == auVar2[0xf]);
        uVar7 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
        if (uVar7 != 0) {
          uVar3 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          return uVar6 + uVar3 >> 1;
        }
        uVar6 = uVar6 + 0x10;
      } while (uVar6 != uVar8);
    }
  }
  else {
    uVar8 = param_3 * 2;
    if ((uVar8 & 0xffffffffffffffe0) != 0) {
      do {
        auVar4 = vpcmpeqb_avx2(*(undefined1 (*) [32])(uVar6 + param_2),
                               *(undefined1 (*) [32])(uVar6 + param_1));
        uVar7 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
        if (uVar7 != 0) goto LAB_1800a4c74;
        uVar6 = uVar6 + 0x20;
      } while (uVar6 != (uVar8 & 0xffffffffffffffe0));
    }
    uVar9 = (ulonglong)((uint)uVar8 & 0x1c);
    if ((uVar8 & 0x1c) != 0) {
      auVar4 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar9),
                               *(undefined1 (*) [32])(uVar6 + param_2));
      auVar5 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar9),
                               *(undefined1 (*) [32])(uVar6 + param_1));
      auVar4 = vpcmpeqb_avx2(auVar5,auVar4);
      uVar7 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
      if (uVar7 != 0) {
LAB_1800a4c74:
        uVar3 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return uVar6 + uVar3 >> 1;
      }
      uVar6 = uVar6 + uVar9;
    }
  }
  uVar6 = uVar6 >> 1;
joined_r0x0001800a4c5b:
  for (; (uVar6 != param_3 && (*(short *)(param_1 + uVar6 * 2) == *(short *)(param_2 + uVar6 * 2)));
      uVar6 = uVar6 + 1) {
  }
  return uVar6;
}


undefined1 (*) [32]
thunk_FUN_1800a4a60(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  uint uVar11;
  undefined1 (*pauVar12) [32];
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];

  uVar13 = (longlong)param_2 - (longlong)param_1;
  pauVar12 = param_2;
  if (((uVar13 & 0xffffffffffffffe0) == 0) || ((DAT_180112354 & 0x20) == 0)) {
    if (((uVar13 & 0xfffffffffffffff0) != 0) && ((DAT_180112354 & 4) != 0)) {
      do {
        pauVar3 = pauVar12 + -1;
        pauVar4 = pauVar12 + -1;
        pauVar5 = pauVar12 + -1;
        pauVar6 = pauVar12 + -1;
        pauVar7 = pauVar12 + -1;
        pauVar8 = pauVar12 + -1;
        pauVar9 = pauVar12 + -1;
        pauVar10 = pauVar12 + -1;
        pauVar12 = (undefined1 (*) [32])(pauVar12[-1] + 0x10);
        auVar15._0_2_ = -(ushort)(*(short *)(*pauVar3 + 0x10) == param_3);
        auVar15._2_2_ = -(ushort)(*(short *)(*pauVar4 + 0x12) == param_3);
        auVar15._4_2_ = -(ushort)(*(short *)(*pauVar5 + 0x14) == param_3);
        auVar15._6_2_ = -(ushort)(*(short *)(*pauVar6 + 0x16) == param_3);
        auVar15._8_2_ = -(ushort)(*(short *)(*pauVar7 + 0x18) == param_3);
        auVar15._10_2_ = -(ushort)(*(short *)(*pauVar8 + 0x1a) == param_3);
        auVar15._12_2_ = -(ushort)(*(short *)(*pauVar9 + 0x1c) == param_3);
        auVar15._14_2_ = -(ushort)(*(short *)(*pauVar10 + 0x1e) == param_3);
        uVar1 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auVar15._14_2_ >> 7) & 1) << 0xe | auVar15._14_2_ & 0x8000;
        if (uVar1 != 0) {
          uVar11 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> uVar11 == 0; uVar11 = uVar11 - 1) {
            }
          }
          return (undefined1 (*) [32])(pauVar12[-1] + (ulonglong)uVar11 + 0x1f);
        }
      } while (pauVar12 != (undefined1 (*) [32])((longlong)param_2 - (uVar13 & 0xfffffffffffffff0)))
      ;
    }
  }
  else {
    auVar15 = vpunpcklwd_avx(ZEXT416((uint)(int)param_3),ZEXT416((uint)(int)param_3));
    auVar15 = vpshufd_avx(auVar15,0);
    auVar16._16_16_ = auVar15;
    auVar16._0_16_ = auVar15;
    do {
      auVar2 = vpcmpeqw_avx2(auVar16,pauVar12[-1]);
      pauVar12 = pauVar12 + -1;
      uVar11 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) goto LAB_1800a4b1b;
    } while (pauVar12 != (undefined1 (*) [32])((longlong)param_2 - (uVar13 & 0xffffffffffffffe0)));
    uVar14 = (ulonglong)((uint)uVar13 & 0x1c);
    if ((uVar13 & 0x1c) != 0) {
      pauVar12 = (undefined1 (*) [32])((longlong)pauVar12 - uVar14);
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar14),*pauVar12);
      auVar16 = vpcmpeqw_avx2(auVar2,auVar16);
      auVar16 = vpand_avx2(auVar16,*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar14));
      uVar11 = (uint)(SUB321(auVar16 >> 7,0) & 1) | (uint)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar16 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar16 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar16 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar16 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar16 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar16 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar16 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar16[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) {
LAB_1800a4b1b:
        return (undefined1 (*) [32])(pauVar12[-1] + (ulonglong)(0x1f - LZCOUNT(uVar11)) + 0x1f);
      }
    }
  }
  do {
    if (pauVar12 == param_1) {
      return param_2;
    }
    pauVar12 = (undefined1 (*) [32])(pauVar12[-1] + 0x1e);
  } while (*(short *)*pauVar12 != param_3);
  return pauVar12;
}


undefined1 (*) [32]
thunk_FUN_1800a4960(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];

  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_180112354 & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_180112354 & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_1800a4a01;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar7));
      uVar5 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_1800a4a01:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}


ulonglong thunk_FUN_1800a4b90(longlong param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];

  uVar6 = 0;
  if ((DAT_180112354 & 0x20) == 0) {
    if ((DAT_180112354 & 4) == 0) goto joined_r0x0001800a4c5b;
    uVar8 = param_3 * 2 & 0xfffffffffffffff0;
    if (uVar8 != 0) {
      do {
        pcVar1 = (char *)(param_1 + uVar6);
        auVar2 = *(undefined1 (*) [16])(param_2 + uVar6);
        auVar10[0] = -(*pcVar1 == auVar2[0]);
        auVar10[1] = -(pcVar1[1] == auVar2[1]);
        auVar10[2] = -(pcVar1[2] == auVar2[2]);
        auVar10[3] = -(pcVar1[3] == auVar2[3]);
        auVar10[4] = -(pcVar1[4] == auVar2[4]);
        auVar10[5] = -(pcVar1[5] == auVar2[5]);
        auVar10[6] = -(pcVar1[6] == auVar2[6]);
        auVar10[7] = -(pcVar1[7] == auVar2[7]);
        auVar10[8] = -(pcVar1[8] == auVar2[8]);
        auVar10[9] = -(pcVar1[9] == auVar2[9]);
        auVar10[10] = -(pcVar1[10] == auVar2[10]);
        auVar10[0xb] = -(pcVar1[0xb] == auVar2[0xb]);
        auVar10[0xc] = -(pcVar1[0xc] == auVar2[0xc]);
        auVar10[0xd] = -(pcVar1[0xd] == auVar2[0xd]);
        auVar10[0xe] = -(pcVar1[0xe] == auVar2[0xe]);
        auVar10[0xf] = -(pcVar1[0xf] == auVar2[0xf]);
        uVar7 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
        if (uVar7 != 0) {
          uVar3 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          return uVar6 + uVar3 >> 1;
        }
        uVar6 = uVar6 + 0x10;
      } while (uVar6 != uVar8);
    }
  }
  else {
    uVar8 = param_3 * 2;
    if ((uVar8 & 0xffffffffffffffe0) != 0) {
      do {
        auVar4 = vpcmpeqb_avx2(*(undefined1 (*) [32])(uVar6 + param_2),
                               *(undefined1 (*) [32])(uVar6 + param_1));
        uVar7 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
        if (uVar7 != 0) goto LAB_1800a4c74;
        uVar6 = uVar6 + 0x20;
      } while (uVar6 != (uVar8 & 0xffffffffffffffe0));
    }
    uVar9 = (ulonglong)((uint)uVar8 & 0x1c);
    if ((uVar8 & 0x1c) != 0) {
      auVar4 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar9),
                               *(undefined1 (*) [32])(uVar6 + param_2));
      auVar5 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1800f31d0 + -uVar9),
                               *(undefined1 (*) [32])(uVar6 + param_1));
      auVar4 = vpcmpeqb_avx2(auVar5,auVar4);
      uVar7 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
      if (uVar7 != 0) {
LAB_1800a4c74:
        uVar3 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return uVar6 + uVar3 >> 1;
      }
      uVar6 = uVar6 + uVar9;
    }
  }
  uVar6 = uVar6 >> 1;
joined_r0x0001800a4c5b:
  for (; (uVar6 != param_3 && (*(short *)(param_1 + uVar6 * 2) == *(short *)(param_2 + uVar6 * 2)));
      uVar6 = uVar6 + 1) {
  }
  return uVar6;
}


undefined8 * FUN_1800a4cc0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}


undefined8 * FUN_1800a4cf0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1800a61c0((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}


undefined8 * FUN_1800a4d30(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;

  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_1800a61c0(&local_18,param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}


undefined8 * FUN_1800a4d80(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1800a61c0((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::logic_error::vftable;
  return param_1;
}


undefined8 * FUN_1800a4dc0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1800a61c0((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}


undefined8 * FUN_1800a4e00(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;

  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_1800a61c0(&local_18,param_1 + 1);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}


void FUN_1800a4e50(longlong param_1)

{
  longlong local_28 [5];

  FUN_1800a4d30(local_28,param_1);
                    // WARNING: Subroutine does not return
  FUN_1800a62a0(local_28,&DAT_18010fd58);
}


void FUN_1800a4e80(longlong param_1)

{
  longlong local_28 [5];

  FUN_1800a4e00(local_28,param_1);
                    // WARNING: Subroutine does not return
  FUN_1800a62a0(local_28,&DAT_18010fdc0);
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800a4eb0(longlong param_1,longlong param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;

  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    (*(code *)param_4)(param_1);
    param_1 = param_1 + param_2;
  }
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800a4f30(longlong param_1,longlong param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;

  lVar1 = param_2 * param_3 + param_1;
  while( true ) {
    if (param_3 == 0) break;
    lVar1 = lVar1 - param_2;
    (*(code *)param_4)(lVar1);
    param_3 = param_3 + -1;
  }
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800a4fb0(longlong param_1,longlong param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;

  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    (*(code *)param_4)(param_1);
  }
  return;
}


void FUN_1800a5010(ulonglong param_1)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  undefined7 extraout_var;

  pvVar3 = _malloc_base(param_1);
  while( true ) {
    if (pvVar3 != (LPVOID)0x0) {
      return;
    }
    bVar2 = FUN_1800c06e0(param_1);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) break;
    pvVar3 = _malloc_base(param_1);
  }
  if (param_1 == 0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  FUN_1800a5ed0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


void thunk_FUN_1800c3030(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;

  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_180116728,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_1800c2210(DVar2);
    p_Var4 = FUN_1800c2350();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}


ulonglong FUN_1800a5070(void)

{
  bool bVar1;
  undefined7 extraout_var;
  void *pvVar2;

  bVar1 = FUN_1800a5f00();
  pvVar2 = (void *)CONCAT71(extraout_var,bVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = (void *)0x0;
    LOCK();
    bVar1 = DAT_180115c58 == (void *)0x0;
    if (bVar1) {
      DAT_180115c58 = StackBase;
    }
    else {
      pvVar2 = DAT_180115c58;
    }
    UNLOCK();
    while (!bVar1) {
      if (StackBase == pvVar2) {
        return CONCAT71((int7)((ulonglong)pvVar2 >> 8),1);
      }
      pvVar2 = (void *)0x0;
      LOCK();
      bVar1 = DAT_180115c58 == (void *)0x0;
      if (bVar1) {
        DAT_180115c58 = StackBase;
      }
      else {
        pvVar2 = DAT_180115c58;
      }
      UNLOCK();
    }
  }
  return (ulonglong)pvVar2 & 0xffffffffffffff00;
}


undefined8 FUN_1800a50c0(void)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  undefined4 extraout_var_00;

  bVar1 = FUN_1800a5f00();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    uVar3 = FUN_1800a5890();
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  uVar3 = FUN_1800a5ef0();
  iVar2 = FUN_1800c0e18((int)uVar3);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_1800c0f98();
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return CONCAT44(extraout_var_00,iVar2) & 0xffffffffffffff00;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1800a5100(void)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;

  if (DAT_180115c61 == '\0') {
    bVar1 = FUN_1800a5f00();
    in_RAX = CONCAT71(extraout_var,bVar1);
    if ((int)in_RAX == 0) {
      DAT_180115c68 = 0xffffffffffffffff;
      uRam0000000180115c70 = 0xffffffffffffffff;
      _DAT_180115c78 = 0xffffffffffffffff;
      _DAT_180115c80 = 0xffffffffffffffff;
      uRam0000000180115c88 = 0xffffffffffffffff;
      _DAT_180115c90 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180115c68);
      if ((int)in_RAX != 0) {
LAB_1800a5136:
        return in_RAX & 0xffffffffffffff00;
      }
      in_RAX = _initialize_onexit_table((longlong *)&DAT_180115c80);
      if ((int)in_RAX != 0) goto LAB_1800a5136;
    }
    DAT_180115c61 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


undefined1 FUN_1800a5180(void)

{
  bool bVar1;

  bVar1 = FUN_1800a78a0();
  if (bVar1) {
    bVar1 = FUN_1800c1760();
    if (bVar1) {
      return 1;
    }
    FUN_1800a78c0();
  }
  return 0;
}


undefined1 FUN_1800a51b0(void)

{
  FUN_1800c1774();
  FUN_1800a78c0();
  return 1;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800a51d0(undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,int param_5,
                  undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;

  bVar1 = FUN_1800a5f00();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)param_4)(param_1,0,param_3);
  }
  FUN_1800c07dc(param_5,param_6);
  return;
}


void FUN_1800a5220(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;

  bVar1 = FUN_1800a5f00();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_1800c1538(&DAT_180115c68);
    return;
  }
  iVar2 = FUN_1800c0bf0();
  if (iVar2 == 0) {
    FUN_1800c0bd4();
    return;
  }
  return;
}


void FUN_1800a5260(void)

{
  FUN_1800c17bc();
  FUN_1800a78f0();
  return;
}


ulonglong FUN_1800a5280(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  uint7 extraout_var;
  ulonglong uVar3;

  if (param_1 == 0) {
    DAT_180115c60 = 1;
  }
  FUN_1800a5890();
  uVar1 = FUN_1800a7870();
  uVar3 = CONCAT44(extraout_var_00,uVar1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_1800c174c();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    FUN_1800a78d0('\0');
    uVar3 = (ulonglong)extraout_var << 8;
  }
  return uVar3 & 0xffffffffffffff00;
}


// WARNING: Removing unreachable block (ram,0x0001800a5346)
// WARNING: Enum "SectionFlags": Some values do not have unique names

IMAGE_SECTION_HEADER * FUN_1800a52c0(longlong param_1)

{
  IMAGE_SECTION_HEADER *pIVar1;

  pIVar1 = &IMAGE_SECTION_HEADER_180000200;
  while( true ) {
    if (pIVar1 == (IMAGE_SECTION_HEADER *)&DAT_1800002f0) {
      return &IMAGE_SECTION_HEADER_180000200;
    }
    if (((ulonglong)(uint)pIVar1->VirtualAddress <= param_1 - 0x180000000U) &&
       (param_1 - 0x180000000U <
        (ulonglong)((pIVar1->Misc).PhysicalAddress + pIVar1->VirtualAddress))) break;
    pIVar1 = pIVar1 + 1;
  }
  if ((int)pIVar1->Characteristics < 0) {
    return (IMAGE_SECTION_HEADER *)((ulonglong)pIVar1 & 0xffffffffffffff00);
  }
  return (IMAGE_SECTION_HEADER *)CONCAT71((int7)((ulonglong)pIVar1 >> 8),1);
}


undefined8 FUN_1800a5360(char param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;

  bVar2 = FUN_1800a5f00();
  uVar1 = DAT_180115c58;
  uVar3 = CONCAT71(extraout_var,bVar2);
  if (((int)uVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180115c58 = 0;
    UNLOCK();
    uVar3 = uVar1;
  }
  return uVar3;
}


undefined8 FUN_1800a5390(bool param_1,char param_2)

{
  longlong in_RAX;
  uint7 extraout_var;

  if ((DAT_180115c60 == '\0') || (param_2 == '\0')) {
    FUN_1800c1784(param_1);
    FUN_1800a78d0(param_1);
    in_RAX = (ulonglong)extraout_var << 8;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


int FUN_1800a53c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;

  if (DAT_180115c68 == -1) {
    iVar1 = FUN_1800c1528(param_1);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180115c68,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}


void FUN_1800a5400(undefined4 *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180115ca0);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180115ca0);
                    // WARNING: Could not recover jumptable at 0x0001800a5435. Too many branches
                    // WARNING: Treating indirect jump as call
  WakeAllConditionVariable(&DAT_180115c98);
  return;
}


// Library Function - Single Match
//  _Init_thread_footer
//
// Library: Visual Studio 2019 Release

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;

  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180115ca0);
  uVar1 = (ulonglong)_tls_index;
  DAT_1801122c4 = DAT_1801122c4 + 1;
  *param_1 = DAT_1801122c4;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_1801122c4;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180115ca0);
                    // WARNING: Could not recover jumptable at 0x0001800a54a2. Too many branches
                    // WARNING: Treating indirect jump as call
  WakeAllConditionVariable(&DAT_180115c98);
  return;
}


void FUN_1800a54b0(int *param_1)

{
  int iVar1;

  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180115ca0);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      *param_1 = -1;
                    // WARNING: Could not recover jumptable at 0x0001800a54de. Too many branches
                    // WARNING: Treating indirect jump as call
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180115ca0);
      return;
    }
    if (iVar1 != -1) break;
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_180115c98,(PSRWLOCK)&DAT_180115ca0,0xffffffff,0);
    iVar1 = *param_1;
  }
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
       DAT_1801122c4;
                    // WARNING: Could not recover jumptable at 0x0001800a5547. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180115ca0);
  return;
}


void FUN_1800a5550(void)

{
  code *pcVar1;

  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}


undefined8 FUN_1800a5560(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_1800a5580(param_2,param_4);
  return 1;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a5580(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 unaff_R15;

  pbVar6 = (byte *)(*(longlong *)(param_2 + 8) +
                   (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8));
  bVar4 = pbVar6[3];
  if (2 < (*pbVar6 & 7)) {
    uVar8 = bVar4 & 0x1f;
    if ((bVar4 & 0x1f) != 0) {
      if ((*pbVar6 & 0x40) == 0) {
        lVar3 = (ulonglong)uVar8 + 4;
      }
      else {
        lVar3 = (ulonglong)uVar8 * 2 + 5;
      }
      pbVar6 = pbVar6 + lVar3;
      uVar5 = 0;
      pbVar7 = pbVar6;
      if (bVar4 >> 5 != 0) {
        do {
          pbVar6 = pbVar7 + 3;
          bVar2 = *pbVar7 >> 3;
          if (bVar2 != 0) {
            if ((*pbVar7 & 2) == 0) {
              pbVar6 = pbVar7 + (ulonglong)bVar2 + 6;
            }
            else {
              pbVar6 = pbVar6 + (ulonglong)bVar2 * 2 + 4;
            }
          }
          uVar5 = uVar5 + 1;
          pbVar7 = pbVar6;
        } while (uVar5 < bVar4 >> 5);
      }
      uVar5 = 0;
      if ((bVar4 & 0x1f) != 0) {
        do {
          bVar4 = *pbVar6;
          if (bVar4 < 4) {
LAB_1800a569f:
            if (bVar4 == 0) {
              return;
            }
            if (0x20 < bVar4) goto switchD_1800a56bf_caseD_4;
          }
          else {
            bVar2 = bVar4 & 0xf;
            if (((byte)((bVar4 & 0xf) - 8) < 3) || (bVar2 = bVar4 & 7, (byte)((bVar4 & 7) - 4) < 4))
            {
              bVar4 = bVar2;
              goto LAB_1800a569f;
            }
            if ((bVar4 & 0x3f) != 0x20) goto switchD_1800a56bf_caseD_4;
            bVar4 = 0x20;
          }
                    // WARNING (jumptable): Sanity check requires truncation of jumptable
                    // WARNING: Could not find normalized switch variable to match jumptable
          switch(*(undefined1 *)((longlong)&UINT_1800a5738 + (ulonglong)bVar4)) {
          case 0:
            lVar3 = 2;
            break;
          case 1:
            lVar3 = 5;
            break;
          case 2:
            lVar3 = 3;
            break;
          case 3:
            lVar3 = 1;
            break;
          case 4:
switchD_1800a56bf_caseD_4:
            FUN_1800a5550();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          case 5:
            uRam0000000000000088 = unaff_R15;
            return;
          }
          pbVar6 = pbVar6 + lVar3;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar8);
      }
    }
  }
  return;
}


undefined8 FUN_1800a5760(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;

  uVar1 = param_4[7];
  FUN_1800a5580(param_2,(longlong)param_4);
  if ((*(uint *)(uVar1 + 4) & ((*(byte *)(param_1 + 1) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar2 = FUN_1800a7110(param_1,param_2,param_3,param_4);
  return uVar2;
}


// WARNING: This is an inlined function
// Library Function - Single Match
//  __chkstk
//
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];

  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}


// WARNING: This is an inlined function

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180112300) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_1800a5550();
  return;
}


undefined8 * FUN_1800a5860(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1800c3030(param_1);
  }
  return param_1;
}


// WARNING: Removing unreachable block (ram,0x0001800a5997)
// WARNING: Removing unreachable block (ram,0x0001800a5985)
// WARNING: Removing unreachable block (ram,0x0001800a5973)
// WARNING: Removing unreachable block (ram,0x0001800a594c)
// WARNING: Removing unreachable block (ram,0x0001800a58c7)
// WARNING: Removing unreachable block (ram,0x0001800a58a2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1800a5890(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong in_XCR0;

  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_180112358 = 0x8000;
    DAT_180112360 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180115cac = DAT_180115cac | 1;
    }
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar4 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar1[1];
    uVar10 = piVar1[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_180115cac = DAT_180115cac | 2;
    }
    if (0 < *piVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar13 = *(uint *)(lVar3 + 8);
    }
    if (0x23 < iVar4) {
      lVar3 = cpuid(0x24);
      uVar8 = *(uint *)(lVar3 + 4);
    }
    if (0x28 < iVar4) {
      lVar3 = cpuid(0x29);
      uVar11 = *(uint *)(lVar3 + 4);
    }
  }
  DAT_180112350 = 1;
  DAT_180112354 = 2;
  uVar6 = DAT_180112368 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_180112350 = 2;
    DAT_180112354 = 6;
    uVar6 = DAT_180112368 & 0xffffffffffffffee;
  }
  DAT_180112368 = uVar6;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar6 = xinuse(0);
  uVar9 = in_XCR0 & uVar6 & 0xffffffff;
  uVar6 = DAT_180112368;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar7 = (byte)uVar9, (bVar7 & 6) != 6)) goto LAB_1800a5b04;
  DAT_180112350 = 3;
  uVar5 = DAT_180112354 | 8;
  if ((uVar12 & 0x20) == 0) {
LAB_1800a5aaa:
    DAT_180112368 = uVar6;
    DAT_180112354 = uVar5;
    uVar5 = DAT_180112354;
    uVar6 = DAT_180112368;
  }
  else {
    DAT_180112350 = 5;
    uVar5 = DAT_180112354 | 0x28;
    uVar6 = DAT_180112368 & 0xfffffffffffffffd;
    if ((uVar12 & 0xd0030000) == 0xd0030000) {
      if ((bVar7 & 0xe0) != 0xe0) goto LAB_1800a5aaa;
      DAT_180112354 = DAT_180112354 | 0x68;
      DAT_180112350 = 6;
      uVar5 = DAT_180112354;
      uVar6 = DAT_180112368 & 0xffffffffffffffd9;
    }
  }
  DAT_180112368 = uVar6;
  DAT_180112354 = uVar5;
  if ((uVar10 >> 0x17 & 1) != 0) {
    DAT_180112368 = DAT_180112368 & 0xfffffffffeffffff;
  }
  uVar6 = DAT_180112368;
  if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
    _DAT_180115cb0 = uVar8 & 0xff;
    uVar6 = DAT_180112368 & 0xfffffffffeffffd0;
    if (1 < _DAT_180115cb0) {
      uVar6 = DAT_180112368 & 0xfffffffffeffff90;
    }
  }
LAB_1800a5b04:
  DAT_180112368 = uVar6;
  if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
    DAT_180112368 = DAT_180112368 & 0xffffffffffffff7f;
  }
  return 0;
}


ulonglong FUN_1800a5b40(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;

  if (param_2 == 0) {
    uVar2 = FUN_1800a5cb0(param_3 != 0);
    return uVar2;
  }
  if (param_2 == 1) {
    uVar2 = FUN_1800a5ba0(param_1,param_3);
    return uVar2;
  }
  if (param_2 == 2) {
    bVar1 = FUN_1800a5180();
    return (ulonglong)bVar1;
  }
  if (param_2 == 3) {
    bVar1 = FUN_1800a51b0();
    return (ulonglong)bVar1;
  }
  return 1;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1800a5ba0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  IMAGE_SECTION_HEADER *pIVar6;

  uVar3 = FUN_1800a5280(0);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_1800a5070();
    bVar2 = true;
    if (DAT_180115c50 != 0) {
      FUN_1800a5f20(7);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    DAT_180115c50 = 1;
    uVar4 = FUN_1800a5100();
    if ((char)uVar4 != '\0') {
      FUN_1800a6040();
      FUN_1800a5ff0();
      FUN_1800a6010();
      uVar4 = FUN_1800c1804((undefined8 *)&DAT_1800d7560,(undefined8 *)&DAT_1800d7588);
      if ((int)uVar4 == 0) {
        uVar4 = FUN_1800a50c0();
        if ((char)uVar4 != '\0') {
          FUN_1800c17cc((undefined8 *)&DAT_1800d7510,(undefined8 *)&DAT_1800d7558);
          DAT_180115c50 = 2;
          bVar2 = false;
        }
      }
    }
    FUN_1800a5360((char)uVar3);
    if (!bVar2) {
      plVar5 = (longlong *)FUN_1800a6030();
      if (*plVar5 != 0) {
        pIVar6 = FUN_1800a52c0((longlong)plVar5);
        if ((char)pIVar6 != '\0') {
          (*(code *)*plVar5)(param_1,2,param_2);
        }
      }
      DAT_180115cb4 = DAT_180115cb4 + 1;
      return 1;
    }
  }
  return 0;
}


ulonglong FUN_1800a5cb0(bool param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;

  if (DAT_180115cb4 < 1) {
    return 0;
  }
  DAT_180115cb4 = DAT_180115cb4 + -1;
  uVar2 = FUN_1800a5070();
  if (DAT_180115c50 == 2) {
    FUN_1800a5220();
    FUN_1800a6000();
    FUN_1800a6090();
    DAT_180115c50 = 0;
    FUN_1800a5360((char)uVar2);
    uVar3 = FUN_1800a5390(param_1,'\0');
    FUN_1800a5260();
    return uVar3 & 0xff;
  }
  FUN_1800a5f20(7);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x0001800a5e19)
// WARNING: Removing unreachable block (ram,0x0001800a5daa)
// WARNING: Removing unreachable block (ram,0x0001800a5e5a)

ulonglong FUN_1800a5d50(undefined8 param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;

  if ((param_2 == 0) && (DAT_180115cb4 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    uVar1 = FUN_1800a5b40(param_1,param_2,param_3);
    if ((int)uVar1 == 0) {
      return uVar1 & 0xffffffff;
    }
  }
  uVar1 = FUN_1800a5ef0();
  uVar2 = uVar1 & 0xffffffff;
  if ((param_2 == 1) && ((int)uVar1 == 0)) {
    FUN_1800a5ef0();
    FUN_1800a5cb0(param_3 != 0);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    uVar1 = FUN_1800a5b40(param_1,param_2,param_3);
    uVar2 = uVar1 & 0xffffffff;
    if ((int)uVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


void entry(undefined8 param_1,int param_2,longlong param_3)

{
  if (param_2 == 1) {
    FUN_1800a5f30();
  }
  FUN_1800a5d50(param_1,param_2,param_3);
  return;
}


void FUN_1800a5ed0(void)

{
  longlong local_28 [5];

  FUN_1800a4cc0(local_28);
                    // WARNING: Subroutine does not return
  FUN_1800a62a0(local_28,&DAT_18010fcf8);
}


undefined8 FUN_1800a5ef0(void)

{
  return 1;
}


bool FUN_1800a5f00(void)

{
  return DAT_180116758 != 0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800a5f10(void)

{
  _DAT_180115cb8 = 0;
  return;
}


void FUN_1800a5f20(undefined4 param_1)

{
  code *pcVar1;

  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800a5f30(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10 [3];
  _FILETIME local_18 [2];

  if (DAT_180112300 != 0x2b992ddfa232) {
    _DAT_180112340 = ~DAT_180112300;
    return;
  }
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res8);
  local_18[0] = local_res8;
  DVar1 = GetCurrentThreadId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res10);
  DAT_180112300 =
       (local_res10[0].QuadPart << 0x20 ^ local_res10[0].QuadPart ^ (ulonglong)local_18[0] ^
       (ulonglong)local_18) & 0xffffffffffff;
  if (DAT_180112300 == 0x2b992ddfa232) {
    DAT_180112300 = 0x2b992ddfa233;
  }
  _DAT_180112340 = ~DAT_180112300;
  return;
}


void FUN_1800a5ff0(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800a5ff7. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_180115cc0);
  return;
}


void FUN_1800a6000(void)

{
  FUN_1800a7930((PSLIST_HEADER)&DAT_180115cc0);
  return;
}


void FUN_1800a6010(void)

{
  ulonglong *puVar1;

  puVar1 = (ulonglong *)FUN_180049100();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_180049110();
  *puVar1 = *puVar1 | 2;
  return;
}


undefined * FUN_1800a6030(void)

{
  return &DAT_180116750;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x0001800a6060)
// WARNING: Removing unreachable block (ram,0x0001800a6068)
// WARNING: Removing unreachable block (ram,0x0001800a606e)

void FUN_1800a6040(void)

{
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x0001800a60b0)
// WARNING: Removing unreachable block (ram,0x0001800a60b8)
// WARNING: Removing unreachable block (ram,0x0001800a60be)

void FUN_1800a6090(void)

{
  return;
}


HIMC __stdcall ImmGetContext(HWND param_1)

{
  HIMC pHVar1;

                    // WARNING: Could not recover jumptable at 0x0001800a60e0. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = ImmGetContext(param_1);
  return pHVar1;
}


BOOL __stdcall ImmReleaseContext(HWND param_1,HIMC param_2)

{
  BOOL BVar1;

                    // WARNING: Could not recover jumptable at 0x0001800a60f0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ImmReleaseContext(param_1,param_2);
  return BVar1;
}


BOOL __stdcall ImmSetCompositionWindow(HIMC param_1,LPCOMPOSITIONFORM lpCompForm)

{
  BOOL BVar1;

                    // WARNING: Could not recover jumptable at 0x0001800a6100. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ImmSetCompositionWindow(param_1,lpCompForm);
  return BVar1;
}


BOOL __stdcall ImmSetCandidateWindow(HIMC param_1,LPCANDIDATEFORM lpCandidate)

{
  BOOL BVar1;

                    // WARNING: Could not recover jumptable at 0x0001800a6110. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ImmSetCandidateWindow(param_1,lpCandidate);
  return BVar1;
}


void D3DCompile(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800a6120. Too many branches
                    // WARNING: Treating indirect jump as call
  D3DCompile();
  return;
}


char * FUN_1800a6130(ulonglong param_1,char param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;

  pcVar17 = (char *)(param_1 & 0xfffffffffffffff0);
  auVar21 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
  auVar23[0] = -(*pcVar17 == '\0');
  auVar23[1] = -(pcVar17[1] == '\0');
  auVar23[2] = -(pcVar17[2] == '\0');
  auVar23[3] = -(pcVar17[3] == '\0');
  auVar23[4] = -(pcVar17[4] == '\0');
  auVar23[5] = -(pcVar17[5] == '\0');
  auVar23[6] = -(pcVar17[6] == '\0');
  auVar23[7] = -(pcVar17[7] == '\0');
  auVar23[8] = -(pcVar17[8] == '\0');
  auVar23[9] = -(pcVar17[9] == '\0');
  auVar23[10] = -(pcVar17[10] == '\0');
  auVar23[0xb] = -(pcVar17[0xb] == '\0');
  auVar23[0xc] = -(pcVar17[0xc] == '\0');
  auVar23[0xd] = -(pcVar17[0xd] == '\0');
  auVar23[0xe] = -(pcVar17[0xe] == '\0');
  auVar23[0xf] = -(pcVar17[0xf] == '\0');
  cVar24 = auVar21[0];
  auVar20[0] = -(*pcVar17 == cVar24);
  cVar25 = auVar21[1];
  auVar20[1] = -(pcVar17[1] == cVar25);
  cVar26 = auVar21[2];
  auVar20[2] = -(pcVar17[2] == cVar26);
  cVar27 = auVar21[3];
  auVar20[3] = -(pcVar17[3] == cVar27);
  auVar20[4] = -(pcVar17[4] == cVar24);
  auVar20[5] = -(pcVar17[5] == cVar25);
  auVar20[6] = -(pcVar17[6] == cVar26);
  auVar20[7] = -(pcVar17[7] == cVar27);
  auVar20[8] = -(pcVar17[8] == cVar24);
  auVar20[9] = -(pcVar17[9] == cVar25);
  auVar20[10] = -(pcVar17[10] == cVar26);
  auVar20[0xb] = -(pcVar17[0xb] == cVar27);
  auVar20[0xc] = -(pcVar17[0xc] == cVar24);
  auVar20[0xd] = -(pcVar17[0xd] == cVar25);
  auVar20[0xe] = -(pcVar17[0xe] == cVar26);
  auVar20[0xf] = -(pcVar17[0xf] == cVar27);
  auVar20 = auVar20 | auVar23;
  uVar19 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
  while (uVar19 == 0) {
    pcVar18 = pcVar17 + 0x10;
    pcVar2 = pcVar17 + 0x11;
    pcVar3 = pcVar17 + 0x12;
    pcVar4 = pcVar17 + 0x13;
    pcVar5 = pcVar17 + 0x14;
    pcVar6 = pcVar17 + 0x15;
    pcVar7 = pcVar17 + 0x16;
    pcVar8 = pcVar17 + 0x17;
    pcVar9 = pcVar17 + 0x18;
    pcVar10 = pcVar17 + 0x19;
    pcVar11 = pcVar17 + 0x1a;
    pcVar12 = pcVar17 + 0x1b;
    pcVar13 = pcVar17 + 0x1c;
    pcVar14 = pcVar17 + 0x1d;
    pcVar15 = pcVar17 + 0x1e;
    pcVar16 = pcVar17 + 0x1f;
    pcVar17 = pcVar17 + 0x10;
    auVar21[0] = -(*pcVar18 == '\0');
    auVar21[1] = -(*pcVar2 == '\0');
    auVar21[2] = -(*pcVar3 == '\0');
    auVar21[3] = -(*pcVar4 == '\0');
    auVar21[4] = -(*pcVar5 == '\0');
    auVar21[5] = -(*pcVar6 == '\0');
    auVar21[6] = -(*pcVar7 == '\0');
    auVar21[7] = -(*pcVar8 == '\0');
    auVar21[8] = -(*pcVar9 == '\0');
    auVar21[9] = -(*pcVar10 == '\0');
    auVar21[10] = -(*pcVar11 == '\0');
    auVar21[0xb] = -(*pcVar12 == '\0');
    auVar21[0xc] = -(*pcVar13 == '\0');
    auVar21[0xd] = -(*pcVar14 == '\0');
    auVar21[0xe] = -(*pcVar15 == '\0');
    auVar21[0xf] = -(*pcVar16 == '\0');
    auVar22[0] = -(*pcVar18 == cVar24);
    auVar22[1] = -(*pcVar2 == cVar25);
    auVar22[2] = -(*pcVar3 == cVar26);
    auVar22[3] = -(*pcVar4 == cVar27);
    auVar22[4] = -(*pcVar5 == cVar24);
    auVar22[5] = -(*pcVar6 == cVar25);
    auVar22[6] = -(*pcVar7 == cVar26);
    auVar22[7] = -(*pcVar8 == cVar27);
    auVar22[8] = -(*pcVar9 == cVar24);
    auVar22[9] = -(*pcVar10 == cVar25);
    auVar22[10] = -(*pcVar11 == cVar26);
    auVar22[0xb] = -(*pcVar12 == cVar27);
    auVar22[0xc] = -(*pcVar13 == cVar24);
    auVar22[0xd] = -(*pcVar14 == cVar25);
    auVar22[0xe] = -(*pcVar15 == cVar26);
    auVar22[0xf] = -(*pcVar16 == cVar27);
    auVar22 = auVar22 | auVar21;
    uVar19 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
  }
  uVar1 = 0;
  if (uVar19 != 0) {
    for (; (uVar19 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pcVar18 = (char *)0x0;
  if (pcVar17[uVar1] == param_2) {
    pcVar18 = pcVar17 + uVar1;
  }
  return pcVar18;
}


void FUN_1800a61c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;

  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(*param_1 + 1 + lVar2) != '\0');
  pcVar3 = _malloc_base(lVar2 + 2U);
  if (pcVar3 != (char *)0x0) {
    FUN_1800c1840(pcVar3,lVar2 + 2U,*param_1);
    *param_2 = (longlong)pcVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  thunk_FUN_1800c3030((LPVOID)0x0);
  return;
}


void FUN_1800a6260(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  thunk_FUN_1800c3030((LPVOID)*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800a62a0(longlong *param_1,byte *param_2)

{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  longlong *local_28;
  byte *local_20;
  PVOID local_18;

  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (**(code **)(*(longlong *)(*param_1 + -8) + 0x40))();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1800a6350(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  PVOID pvVar1;
  undefined4 *local_28;
  undefined8 local_20;

  local_28 = param_1;
  local_20 = param_3;
  pvVar1 = FUN_1800a79f0();
  (**(code **)((longlong)pvVar1 + 0x10))(*param_1,&local_28);
  return 0;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1800a63a0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  PVOID pvVar1;
  undefined4 *local_28;
  undefined8 local_20;

  local_28 = param_1;
  local_20 = param_3;
  pvVar1 = FUN_1800a79f0();
  (**(code **)((longlong)pvVar1 + 0x10))(*param_1,&local_28);
  return 0;
}


longlong FUN_1800a63f0(byte *param_1,byte *param_2,longlong param_3,int param_4,char param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;

  bVar1 = *param_1;
  pbVar8 = param_1 + 1;
  *param_2 = bVar1;
  if ((bVar1 & 4) != 0) {
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + -(longlong)(char)(&DAT_1800f3270)[bVar2 & 0xf];
    *(uint *)(param_2 + 4) = *(uint *)(pbVar8 + -4) >> ((&DAT_1800f3280)[bVar2 & 0xf] & 0x1f);
  }
  if ((bVar1 & 8) != 0) {
    uVar3 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    *(undefined4 *)(param_2 + 8) = uVar3;
  }
  if ((bVar1 & 0x10) != 0) {
    uVar3 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar3;
  }
  pbVar7 = pbVar8 + 4;
  if ((param_5 == '\0') && ((bVar1 & 2) != 0)) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (*(int *)pbVar8 == 0) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(7);
    }
    else {
      pbVar8 = (byte *)(*(int *)pbVar8 + param_3);
      uVar5 = *pbVar8 & 0xf;
      pbVar8 = pbVar8 + -(longlong)(char)(&DAT_1800f3270)[uVar5];
      uVar6 = 0;
      uVar5 = *(uint *)(pbVar8 + -4) >> ((&DAT_1800f3280)[uVar5] & 0x1f);
      if (uVar5 != 0) {
        do {
          if (*(int *)pbVar8 == param_4) {
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pbVar8 + 4);
            break;
          }
          pbVar8 = pbVar8 + 8;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar8;
  }
  if ((bVar1 & 1) != 0) {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1800f3270)[bVar1 & 0xf];
    *(uint *)(param_2 + 0x14) = *(uint *)(pbVar7 + -4) >> ((&DAT_1800f3280)[bVar1 & 0xf] & 0x1f);
  }
  return (longlong)pbVar7 - (longlong)param_1;
}


bool FUN_1800a6500(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  PVOID pvVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;

  iVar1 = FUN_1800a7d60(param_2,param_1);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar5 = (ulonglong)uVar4;
  do {
    if (uVar4 == 0) {
      lVar3 = 0;
      break;
    }
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
    pvVar2 = FUN_1800a79f0();
    lVar3 = (longlong)*(int *)(param_2 + 0x10) +
            *(longlong *)((longlong)pvVar2 + 0x60) + uVar5 * 0x14;
  } while ((iVar1 <= *(int *)(lVar3 + 4)) || (*(int *)(lVar3 + 8) < iVar1));
  return lVar3 != 0;
}


byte FUN_1800a6570(undefined8 param_1,byte *param_2)

{
  return *param_2 & 1;
}


void FUN_1800a6580(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  PVOID pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong local_res8;
  ulonglong local_res18 [2];

  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  iVar2 = FUN_1800a7d60(param_3,param_2);
  local_res8 = *param_1;
  do {
    do {
      if (uVar9 == 0) goto LAB_1800a6645;
      uVar9 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar9;
      lVar7 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 8) < iVar2));
    p_Var4 = RtlLookupFunctionEntry(*param_2,local_res18,(PUNWIND_HISTORY_TABLE)0x0);
    lVar11 = (longlong)*(int *)(lVar7 + 0x10) + local_res18[0];
    uVar1 = *(uint *)(lVar7 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((longlong)*(int *)(lVar11 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
        goto LAB_1800a6630;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint)uVar5);
LAB_1800a6630:
  local_res8 = *(longlong *)((longlong)*(int *)(lVar11 + 0x10 + uVar5 * 0x14) + *param_1);
LAB_1800a6645:
  iVar2 = FUN_1800a7d60(param_3,param_2);
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  do {
    if (uVar9 == 0) {
      iVar10 = -1;
      break;
    }
    pvVar6 = FUN_1800a79f0();
    uVar9 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar9;
    lVar7 = (longlong)*(int *)(param_3 + 0x10) + *(longlong *)((longlong)pvVar6 + 0x60);
    iVar10 = *(int *)(lVar7 + 4 + uVar8 * 0x14);
  } while ((iVar2 <= iVar10) || (*(int *)(lVar7 + 8 + uVar8 * 0x14) < iVar2));
  FUN_1800aa630(&local_res8,param_2,param_3,iVar10);
  return;
}


void FUN_1800a66b0(longlong *param_1,ulonglong *param_2,byte *param_3)

{
  longlong local_res8 [4];

  local_res8[0] = *param_1;
  if ((*param_3 & 1) != 0) {
    local_res8[0] = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_1800aa7e0(local_res8,param_2,(longlong)param_3,-1);
  return;
}


longlong * FUN_1800a66f0(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res8;

  uVar7 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar7;
  iVar2 = FUN_1800a7d60(param_3,param_2);
  *param_4 = *param_1;
  if (uVar7 == 0) {
    return param_4;
  }
  do {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    if ((*(int *)(lVar6 + 4) < iVar2) && (iVar2 <= *(int *)(lVar6 + 8))) {
      p_Var4 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
      lVar9 = (longlong)*(int *)(lVar6 + 0x10) + local_res8;
      uVar1 = *(uint *)(lVar6 + 0xc);
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          if ((longlong)*(int *)(lVar9 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
          goto LAB_1800a67a0;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar1);
      }
      if ((uint)uVar5 < uVar1) {
LAB_1800a67a0:
        *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
        return param_4;
      }
    }
    if (uVar7 == 0) {
      return param_4;
    }
  } while( true );
}


longlong * FUN_1800a67f0(longlong *param_1,undefined8 param_2,byte *param_3,longlong *param_4)

{
  *param_4 = *param_1;
  if ((*param_3 & 1) != 0) {
    *param_4 = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}


undefined8 *
FUN_1800a6820(undefined8 *param_1,undefined8 param_2,int param_3,ulonglong *param_4,longlong param_5
             )

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_3c;

  uVar3 = *(uint *)(param_5 + 0xc);
  iVar2 = FUN_1800a7d60(param_5,param_4);
  if (uVar3 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  uVar4 = param_4[1];
  uVar7 = 0xffffffff;
  lVar6 = (longlong)*(int *)(param_5 + 0x10);
  uVar9 = 0xffffffff;
  lVar1 = uVar4 + lVar6;
  uVar5 = uVar3;
  while( true ) {
    uVar8 = uVar5 - 1;
    if ((*(int *)(uVar4 + (ulonglong)uVar8 * 0x14 + 4 + lVar6) < iVar2) &&
       (iVar2 <= *(int *)(lVar1 + 8 + (ulonglong)uVar8 * 0x14))) break;
    uVar5 = uVar8;
    if (uVar8 == 0) {
      lVar6 = 0;
LAB_1800a68ac:
      uVar8 = 0;
      uVar5 = uVar8;
      do {
        uVar4 = (ulonglong)uVar5;
        if ((((lVar6 == 0) ||
             ((*(int *)(lVar6 + 4) < *(int *)(lVar1 + uVar4 * 0x14) &&
              (*(int *)(lVar1 + 4 + uVar4 * 0x14) <= *(int *)(lVar6 + 8))))) &&
            (*(int *)(lVar1 + uVar4 * 0x14) <= param_3)) &&
           (param_3 <= *(int *)(lVar1 + 4 + uVar4 * 0x14))) {
          uVar9 = uVar5;
          if (uVar7 == 0xffffffff) {
            uVar7 = uVar5;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
      *param_1 = param_2;
      param_1[2] = param_2;
      uVar3 = uVar8;
      if (uVar7 != 0xffffffff) {
        uVar3 = uVar7;
      }
      *(uint *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
      if (uVar7 != 0xffffffff) {
        uVar8 = uVar9 + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_3c;
      *(uint *)(param_1 + 3) = uVar8;
      return param_1;
    }
  }
  lVar6 = uVar4 + (ulonglong)(uVar5 - 1) * 0x14 + lVar6;
  goto LAB_1800a68ac;
}


undefined8 * FUN_1800a6950(undefined8 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int *local_38;
  int local_30;
  undefined4 local_2c;

  uVar6 = local_2c;
  iVar7 = 0;
  local_30 = 0;
  iVar11 = 0;
  local_38 = param_2;
  FUN_1800a6d80((longlong)param_2,(longlong)&local_38);
  if (*param_2 != 0) {
    uVar10 = param_2[6];
    iVar9 = 0;
    pbVar12 = *(byte **)(param_2 + 2);
    iVar11 = 0;
    do {
      if (((int)uVar10 <= param_3) && (param_3 <= param_2[7])) {
        iVar11 = iVar9;
        if (iVar7 == 0) {
          iVar11 = iVar7;
        }
        iVar7 = iVar11;
        iVar11 = iVar9;
      }
      iVar9 = iVar9 + 1;
      lVar8 = (longlong)(char)(&DAT_1800f3270)[*pbVar12 & 0xf];
      bVar1 = (&DAT_1800f3280)[*pbVar12 & 0xf];
      pbVar5 = pbVar12 + -lVar8;
      uVar10 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      uVar10 = uVar10 >> (bVar1 & 0x1f);
      param_2[6] = uVar10;
      cVar2 = (&DAT_1800f3270)[*pbVar5 & 0xf];
      bVar1 = (&DAT_1800f3280)[*pbVar5 & 0xf];
      pbVar5 = pbVar12 + (-lVar8 - (longlong)cVar2);
      uVar3 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      param_2[7] = uVar3 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1800f3280)[*pbVar5 & 0xf];
      pbVar12 = pbVar12 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_1800f3270)[*pbVar5 & 0xf]) -
                          lVar8);
      uVar3 = *(uint *)(pbVar12 + -4);
      *(byte **)(param_2 + 2) = pbVar12;
      param_2[8] = uVar3 >> (bVar1 & 0x1f);
      iVar4 = *(int *)pbVar12;
      pbVar12 = pbVar12 + 4;
      *(byte **)(param_2 + 2) = pbVar12;
      param_2[9] = iVar4;
    } while (iVar9 != *param_2);
    uVar6 = local_2c;
  }
  local_38 = param_2;
  local_30 = iVar7;
  local_2c = uVar6;
  FUN_1800a6d80((longlong)param_2,(longlong)&local_38);
  *(int *)(param_1 + 3) = iVar11 + 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_2c;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar7;
  param_1[2] = param_2;
  return param_1;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a6ad0(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStackY_e8;
  local_b8.ExceptionCode = 0x80000029;
  local_b8.ExceptionFlags = 1;
  local_b8.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_b8.ExceptionAddress = (PVOID)0x0;
  local_b8.NumberParameters = 0xf;
  local_b8._28_4_ = 0;
  local_b8.ExceptionInformation[9] = 0;
  local_b8.ExceptionInformation[10] = 0;
  local_b8.ExceptionInformation[0xb] = 0;
  local_b8.ExceptionInformation[0xe] = 0;
  local_b8.ExceptionInformation[0xc]._0_4_ = 0;
  local_b8.ExceptionInformation[0xc]._4_4_ = 0;
  local_b8.ExceptionInformation[0xd]._0_4_ = 0;
  local_b8.ExceptionInformation[0xd]._4_4_ = 0;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_1800a9f70;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[5] = param_6;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a6c00(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,undefined8 param_6,int param_7,int param_8,longlong param_9,
                  undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStackY_e8;
  local_b8.ExceptionCode = 0x80000029;
  local_b8.ExceptionFlags = 1;
  local_b8.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_1800aa180;
  local_b8.ExceptionAddress = (PVOID)0x0;
  local_b8.NumberParameters = 0xf;
  local_b8._28_4_ = 0;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[5] = *(longlong *)(param_9 + 0x18) + param_10[1];
  local_b8.ExceptionInformation[9] = *(longlong *)(param_9 + 0x20) + param_10[1];
  local_b8.ExceptionInformation[0xb] = (ULONG_PTR)param_8;
  local_b8.ExceptionInformation[10] = 0;
  local_b8.ExceptionInformation[0xc]._0_4_ = 0;
  local_b8.ExceptionInformation[0xc]._4_4_ = 0;
  local_b8.ExceptionInformation[0xd]._0_4_ = 0;
  local_b8.ExceptionInformation[0xd]._4_4_ = 0;
  local_b8.ExceptionInformation[0xe] = 0;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}


void FUN_1800a6d80(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;

  pbVar9 = *(byte **)(param_1 + 0x10);
  iVar3 = *(int *)(param_2 + 8);
  *(byte **)(param_1 + 8) = pbVar9;
  iVar6 = 0;
  pbVar7 = pbVar9 + -(longlong)(char)(&DAT_1800f3270)[*pbVar9 & 0xf];
  *(uint *)(param_1 + 0x18) = *(uint *)(pbVar7 + -4) >> ((&DAT_1800f3280)[*pbVar9 & 0xf] & 0x1f);
  *(byte **)(param_1 + 8) = pbVar7;
  bVar1 = (&DAT_1800f3280)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1800f3270)[*pbVar7 & 0xf];
  uVar4 = *(uint *)(pbVar7 + -4);
  *(byte **)(param_1 + 8) = pbVar7;
  *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
  bVar1 = (&DAT_1800f3280)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1800f3270)[*pbVar7 & 0xf];
  uVar4 = *(uint *)(pbVar7 + -4);
  pbVar9 = pbVar7 + 4;
  *(byte **)(param_1 + 8) = pbVar7;
  *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
  uVar5 = *(undefined4 *)pbVar7;
  *(byte **)(param_1 + 8) = pbVar9;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  if (iVar3 != 0) {
    do {
      iVar6 = iVar6 + 1;
      lVar8 = (longlong)(char)(&DAT_1800f3270)[*pbVar9 & 0xf];
      bVar1 = (&DAT_1800f3280)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_1800f3270)[*pbVar7 & 0xf];
      bVar1 = (&DAT_1800f3280)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1800f3280)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_1800f3270)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      lVar8 = (longlong)(char)(&DAT_1800f3270)[*pbVar9 & 0xf];
      bVar1 = (&DAT_1800f3280)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_1800f3270)[*pbVar7 & 0xf];
      bVar1 = (&DAT_1800f3280)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1800f3280)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_1800f3270)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
    } while (iVar6 != iVar3);
  }
  return;
}


// Library Function - Single Match
//  _CreateFrameInfo
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  PVOID pvVar1;
  undefined8 uVar2;

  *param_1 = param_2;
  pvVar1 = FUN_1800a79f0();
  if (param_1 < *(undefined8 **)((longlong)pvVar1 + 0x58)) {
    pvVar1 = FUN_1800a79f0();
    uVar2 = *(undefined8 *)((longlong)pvVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  pvVar1 = FUN_1800a79f0();
  *(undefined8 **)((longlong)pvVar1 + 0x58) = param_1;
  return param_1;
}


void FUN_1800a6fb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  PVOID pvVar3;
  bool bVar4;

  pvVar3 = FUN_1800a79f0();
  if (param_1 == *(longlong *)((longlong)pvVar3 + 0x58)) {
    pvVar3 = FUN_1800a79f0();
    lVar2 = *(longlong *)((longlong)pvVar3 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar4 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar4) {
        pvVar3 = FUN_1800a79f0();
        *(longlong *)((longlong)pvVar3 + 0x58) = lVar1;
        return;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1800c18c0();
}


undefined8 FUN_1800a7010(void)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a79f0();
  return *(undefined8 *)((longlong)pvVar1 + 0x60);
}


undefined8 FUN_1800a7030(void)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a79f0();
  return *(undefined8 *)((longlong)pvVar1 + 0x68);
}


void FUN_1800a7050(undefined8 param_1)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar1 + 0x60) = param_1;
  return;
}


void FUN_1800a7070(undefined8 param_1)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar1 + 0x68) = param_1;
  return;
}


void FUN_1800a7090(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  longlong local_res8 [4];

  uVar1 = param_4[1];
  local_res8[0] = param_2;
  pvVar3 = FUN_1800a79f0();
  *(ulonglong *)((longlong)pvVar3 + 0x60) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  pvVar3 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar3 + 0x68) = uVar2;
  pvVar3 = FUN_1800a79f0();
  FUN_1800a9da0(param_1,local_res8,param_3,param_4,
                (uint *)((ulonglong)*(uint *)param_4[7] + *(longlong *)((longlong)pvVar3 + 0x60)),0,
                0,0);
  return;
}


void FUN_1800a7110(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  longlong local_res8;
  byte local_38 [4];
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;

  uVar1 = param_4[1];
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_38[0] = 0;
  local_res8 = param_2;
  pvVar3 = FUN_1800a79f0();
  *(ulonglong *)((longlong)pvVar3 + 0x60) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  pvVar3 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar3 + 0x68) = uVar2;
  pvVar3 = FUN_1800a79f0();
  FUN_1800a63f0((byte *)((ulonglong)*(uint *)param_4[7] + *(longlong *)((longlong)pvVar3 + 0x60)),
                local_38,param_4[1],*(int *)param_4[2],'\0');
  FUN_1800a9db0(param_1,&local_res8,param_3,param_4,local_38,0,0,0);
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// Library Function - Single Match
//  __DestructExceptionObject
//
// Library: Visual Studio 2019 Release

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;

  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && ((longlong *)**(longlong **)(param_1 + 10) != (longlong *)0x0))
      {
        (**(code **)(*(longlong *)**(longlong **)(param_1 + 10) + 0x10))();
      }
    }
    else {
      FUN_1800a7240(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}


void FUN_1800a7240(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    // WARNING: Could not recover jumptable at 0x0001800a7240. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


undefined8 FUN_1800a7250(longlong param_1)

{
  longlong *plVar1;
  PVOID pvVar2;

  pvVar2 = FUN_1800a79f0();
  plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}


longlong FUN_1800a7290(longlong param_1,int *param_2)

{
  int iVar1;

  iVar1 = param_2[1];
  if (iVar1 < 0) {
    return *param_2 + param_1;
  }
  return (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(iVar1 + param_1)) + (longlong)iVar1
         + *param_2 + param_1;
}


undefined8 FUN_1800a72c0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  PVOID pvVar4;

  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    pvVar4 = FUN_1800a79f0();
    if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
      pvVar4 = FUN_1800a79f0();
      *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    pvVar4 = FUN_1800a79f0();
    *(int **)((longlong)pvVar4 + 0x20) = piVar2;
    uVar3 = param_1[1];
    pvVar4 = FUN_1800a79f0();
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar3;
                    // WARNING: Subroutine does not return
    FUN_1800c06c0();
  }
  return 0;
}


longlong FUN_1800a7330(void)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a79f0();
  return (longlong)pvVar1 + 0x20;
}


longlong FUN_1800a7350(void)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a79f0();
  return (longlong)pvVar1 + 0x28;
}


void Unwind_1800a7370(void)

{
                    // WARNING: Subroutine does not return
  FUN_1800c06c0();
}


undefined1 (*) [16] FUN_1800a7380(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;

  bVar1 = (*param_2)[0];
  if (bVar1 == 0) {
    return param_1;
  }
  if (1 < DAT_180112350) {
    if (((uint)param_2 & 0xfff) < 0xff1) {
      auVar10 = *param_2;
    }
    else {
      auVar10 = ZEXT816(0);
      iVar7 = 4;
      pauVar4 = param_2;
      bVar6 = bVar1;
      do {
        auVar14._0_8_ = auVar10._1_8_;
        uVar5 = auVar10._8_8_ >> 8 | (ulonglong)bVar6 << 0x38;
        auVar14._8_8_ = uVar5;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        auVar15._0_8_ = auVar14._1_8_;
        uVar5 = uVar5 >> 8 | (ulonglong)bVar6 << 0x38;
        auVar15._8_8_ = uVar5;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        auVar16._0_8_ = auVar15._1_8_;
        uVar5 = uVar5 >> 8 | (ulonglong)bVar6 << 0x38;
        auVar16._8_8_ = uVar5;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        auVar10._0_8_ = auVar16._1_8_;
        auVar10._8_8_ = uVar5 >> 8 | (ulonglong)bVar6 << 0x38;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    do {
      while( true ) {
        uVar3 = (uint)param_1 & 0xfff;
        if (uVar3 < 0xff1) break;
        if ((*param_1)[0] == 0) {
          return (undefined1 (*) [16])0x0;
        }
        if ((*param_1)[0] == bVar1) goto LAB_1800a75c5;
LAB_1800a761e:
        param_1 = (undefined1 (*) [16])(*param_1 + 1);
      }
      pcmpistri(auVar10,*param_1,0xc);
      if (uVar3 < 0xff1) {
        if (0xfef < uVar3) {
          return (undefined1 (*) [16])0x0;
        }
        iVar7 = pcmpistri(auVar10,*param_1,0xc);
        param_1 = (undefined1 (*) [16])(*param_1 + iVar7);
LAB_1800a75c5:
        pauVar4 = param_1;
        pauVar8 = param_2;
LAB_1800a75d0:
        do {
          if (((uint)pauVar4 & 0xfff) < 0xff1) {
            uVar5 = (ulonglong)((uint)pauVar8 & 0xfff);
            if (uVar5 < 0xff1) {
              pcmpistri(*pauVar8,*pauVar4,0xc);
              if (SBORROW8(uVar5,0xff0)) {
                if ((longlong)(uVar5 - 0xff0) < 0) {
                  return param_1;
                }
                pauVar4 = pauVar4 + 1;
                pauVar8 = pauVar8 + 1;
                goto LAB_1800a75d0;
              }
              goto LAB_1800a761e;
            }
          }
          if ((*pauVar8)[0] == '\0') {
            return param_1;
          }
          if ((*pauVar4)[0] != (*pauVar8)[0]) goto LAB_1800a761e;
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        } while( true );
      }
      param_1 = param_1 + 1;
    } while( true );
  }
  auVar10 = pshuflw(in_XMM1,ZEXT216(CONCAT11(bVar1,bVar1)),0);
LAB_1800a73d0:
  do {
    if (((uint)param_1 & 0xfff) < 0xff1) {
      cVar17 = auVar10[0];
      auVar9[0] = -((*param_1)[0] == cVar17);
      cVar18 = auVar10[1];
      auVar9[1] = -((*param_1)[1] == cVar18);
      cVar19 = auVar10[2];
      auVar9[2] = -((*param_1)[2] == cVar19);
      cVar20 = auVar10[3];
      auVar9[3] = -((*param_1)[3] == cVar20);
      auVar9[4] = -((*param_1)[4] == cVar17);
      auVar9[5] = -((*param_1)[5] == cVar18);
      auVar9[6] = -((*param_1)[6] == cVar19);
      auVar9[7] = -((*param_1)[7] == cVar20);
      auVar9[8] = -((*param_1)[8] == cVar17);
      auVar9[9] = -((*param_1)[9] == cVar18);
      auVar9[10] = -((*param_1)[10] == cVar19);
      auVar9[0xb] = -((*param_1)[0xb] == cVar20);
      auVar9[0xc] = -((*param_1)[0xc] == cVar17);
      auVar9[0xd] = -((*param_1)[0xd] == cVar18);
      auVar9[0xe] = -((*param_1)[0xe] == cVar19);
      auVar9[0xf] = -((*param_1)[0xf] == cVar20);
      auVar11[0] = -((*param_1)[0] == '\0');
      auVar11[1] = -((*param_1)[1] == '\0');
      auVar11[2] = -((*param_1)[2] == '\0');
      auVar11[3] = -((*param_1)[3] == '\0');
      auVar11[4] = -((*param_1)[4] == '\0');
      auVar11[5] = -((*param_1)[5] == '\0');
      auVar11[6] = -((*param_1)[6] == '\0');
      auVar11[7] = -((*param_1)[7] == '\0');
      auVar11[8] = -((*param_1)[8] == '\0');
      auVar11[9] = -((*param_1)[9] == '\0');
      auVar11[10] = -((*param_1)[10] == '\0');
      auVar11[0xb] = -((*param_1)[0xb] == '\0');
      auVar11[0xc] = -((*param_1)[0xc] == '\0');
      auVar11[0xd] = -((*param_1)[0xd] == '\0');
      auVar11[0xe] = -((*param_1)[0xe] == '\0');
      auVar11[0xf] = -((*param_1)[0xf] == '\0');
      auVar11 = auVar11 | auVar9;
      uVar2 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar11[0xf] >> 7) << 0xf;
      if (uVar2 == 0) {
        param_1 = param_1 + 1;
        goto LAB_1800a73d0;
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      param_1 = (undefined1 (*) [16])(*param_1 + uVar3);
    }
    if ((*param_1)[0] == 0) {
      return (undefined1 (*) [16])0x0;
    }
    if (bVar1 == (*param_1)[0]) {
      pauVar4 = param_2;
      pauVar8 = param_1;
LAB_1800a7420:
      for (; (((uint)pauVar4 & 0xfff) < 0xff1 && (((uint)pauVar8 & 0xfff) < 0xff1));
          pauVar8 = pauVar8 + 1) {
        auVar12[0] = -((*pauVar4)[0] == '\0');
        auVar12[1] = -((*pauVar4)[1] == '\0');
        auVar12[2] = -((*pauVar4)[2] == '\0');
        auVar12[3] = -((*pauVar4)[3] == '\0');
        auVar12[4] = -((*pauVar4)[4] == '\0');
        auVar12[5] = -((*pauVar4)[5] == '\0');
        auVar12[6] = -((*pauVar4)[6] == '\0');
        auVar12[7] = -((*pauVar4)[7] == '\0');
        auVar12[8] = -((*pauVar4)[8] == '\0');
        auVar12[9] = -((*pauVar4)[9] == '\0');
        auVar12[10] = -((*pauVar4)[10] == '\0');
        auVar12[0xb] = -((*pauVar4)[0xb] == '\0');
        auVar12[0xc] = -((*pauVar4)[0xc] == '\0');
        auVar12[0xd] = -((*pauVar4)[0xd] == '\0');
        auVar12[0xe] = -((*pauVar4)[0xe] == '\0');
        auVar12[0xf] = -((*pauVar4)[0xf] == '\0');
        auVar13[0] = -((*pauVar4)[0] != (*pauVar8)[0]);
        auVar13[1] = -((*pauVar4)[1] != (*pauVar8)[1]);
        auVar13[2] = -((*pauVar4)[2] != (*pauVar8)[2]);
        auVar13[3] = -((*pauVar4)[3] != (*pauVar8)[3]);
        auVar13[4] = -((*pauVar4)[4] != (*pauVar8)[4]);
        auVar13[5] = -((*pauVar4)[5] != (*pauVar8)[5]);
        auVar13[6] = -((*pauVar4)[6] != (*pauVar8)[6]);
        auVar13[7] = -((*pauVar4)[7] != (*pauVar8)[7]);
        auVar13[8] = -((*pauVar4)[8] != (*pauVar8)[8]);
        auVar13[9] = -((*pauVar4)[9] != (*pauVar8)[9]);
        auVar13[10] = -((*pauVar4)[10] != (*pauVar8)[10]);
        auVar13[0xb] = -((*pauVar4)[0xb] != (*pauVar8)[0xb]);
        auVar13[0xc] = -((*pauVar4)[0xc] != (*pauVar8)[0xc]);
        auVar13[0xd] = -((*pauVar4)[0xd] != (*pauVar8)[0xd]);
        auVar13[0xe] = -((*pauVar4)[0xe] != (*pauVar8)[0xe]);
        auVar13[0xf] = -((*pauVar4)[0xf] != (*pauVar8)[0xf]);
        auVar13 = auVar13 | auVar12;
        uVar2 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar13[0xf] >> 7) << 0xf;
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + uVar3);
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + uVar3);
          break;
        }
        pauVar4 = pauVar4 + 1;
      }
      if ((*pauVar4)[0] == '\0') {
        return param_1;
      }
      if ((*pauVar8)[0] == (*pauVar4)[0]) {
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        goto LAB_1800a7420;
      }
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
  } while( true );
}


undefined8 FUN_1800a7650(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_58;
  longlong local_50;

  __except_validate_context_record(param_3);
  lVar1 = param_4[1];
  puVar2 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar1;
  uVar9 = *(uint *)(param_4 + 9);
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_58 = param_1;
    local_50 = param_3;
    if (uVar9 < *puVar2) {
      do {
        if (((puVar2[(ulonglong)uVar9 * 4 + 1] <= uVar11) &&
            (uVar11 < puVar2[(ulonglong)uVar9 * 4 + 2])) && (puVar2[(ulonglong)uVar9 * 4 + 4] != 0))
        {
          if (puVar2[(ulonglong)uVar9 * 4 + 3] != 1) {
            iVar3 = (*(code *)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 3] + lVar1))
                              (&local_58,param_2);
            if (iVar3 < 0) {
              return 0;
            }
            if (iVar3 < 1) goto LAB_1800a776b;
          }
          if ((param_1->ExceptionCode == 0xe06d7363) &&
             (uVar4 = FUN_1800d1710(0x1800f33c8), (int)uVar4 != 0)) {
            __DestructExceptionObject((int *)param_1);
          }
          FUN_1800ab1d0();
          RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 4] + lVar1),param_1,
                      (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                      (PUNWIND_HISTORY_TABLE)param_4[8]);
          FUN_1800ab200();
        }
LAB_1800a776b:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar2);
    }
  }
  else {
    uVar10 = *puVar2;
    if (uVar9 < uVar10) {
      uVar4 = param_4[4] - lVar1;
      do {
        uVar5 = (ulonglong)uVar9;
        if ((puVar2[uVar5 * 4 + 1] <= uVar11) && (uVar11 < puVar2[uVar5 * 4 + 2])) {
          uVar8 = param_1->ExceptionFlags & 0x20;
          if (uVar8 != 0) {
            uVar7 = 0;
            if (uVar10 != 0) {
              do {
                if ((((puVar2[uVar7 * 4 + 1] <= uVar4) && (uVar4 < puVar2[uVar7 * 4 + 2])) &&
                    (puVar2[uVar7 * 4 + 4] == puVar2[uVar5 * 4 + 4])) &&
                   (puVar2[uVar7 * 4 + 3] == puVar2[uVar5 * 4 + 3])) break;
                uVar6 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar6;
              } while (uVar6 < uVar10);
            }
            if ((uint)uVar7 != *puVar2) {
              return 1;
            }
          }
          if (puVar2[uVar5 * 4 + 4] == 0) {
            *(uint *)(param_4 + 9) = uVar9 + 1;
            (*(code *)((ulonglong)puVar2[uVar5 * 4 + 3] + lVar1))(1);
          }
          else if ((uVar4 == puVar2[uVar5 * 4 + 4]) && (uVar8 != 0)) {
            return 1;
          }
        }
        uVar10 = *puVar2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  return 1;
}


uint FUN_1800a7870(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint3 extraout_var;

  uVar1 = FUN_1800ab250();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_1800a7bb0();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    FUN_1800ab2e0();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}


bool FUN_1800a78a0(void)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a7ad0();
  return pvVar1 != (PVOID)0x0;
}


undefined1 FUN_1800a78c0(void)

{
  FUN_1800a7990();
  return 1;
}


undefined1 FUN_1800a78d0(char param_1)

{
  if (param_1 == '\0') {
    FUN_1800a7c20();
    FUN_1800ab2e0();
  }
  return 1;
}


undefined1 FUN_1800a78f0(void)

{
  FUN_1800a7c20();
  return 1;
}


uint FUN_1800a7900(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;

  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}


void FUN_1800a7930(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;

  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_1800c3030(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}


void FUN_1800a7970(undefined *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;

  if ((param_1 == (undefined *)0x0) || (param_1 == &DAT_180115ce0)) {
    return;
  }
  if ((param_1 != (undefined *)0x0) && (BVar1 = HeapFree(DAT_180116728,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_1800c2210(DVar2);
    p_Var4 = FUN_1800c2350();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}


void FUN_1800a7990(void)

{
  undefined *puVar1;

  if (DAT_180112370 != 0xffffffff) {
    puVar1 = FlsGetValue(DAT_180112370);
    FlsSetValue(DAT_180112370,(PVOID)0x0);
    if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_180115ce0)) {
      thunk_FUN_1800c3030(puVar1);
      return;
    }
  }
  return;
}


PVOID FUN_1800a79f0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;

  if (DAT_180112370 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_180112370);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_1800a7a88:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_180112370,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = _calloc_base(1,0x80);
        if (lpFlsData == (LPVOID)0x0) {
          FlsSetValue(DAT_180112370,(PVOID)0x0);
          lpFlsData = (LPVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_180112370,lpFlsData);
          if (BVar1 != 0) {
            *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_1800c3030((LPVOID)0x0);
            goto LAB_1800a7a88;
          }
          FlsSetValue(DAT_180112370,(PVOID)0x0);
        }
        thunk_FUN_1800c3030(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    // WARNING: Subroutine does not return
  FUN_1800c18c0();
}


PVOID FUN_1800a7ad0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  LPVOID pvVar2;
  LPVOID lpFlsData;
  LPVOID pvVar3;

  if (DAT_180112370 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar2 = FlsGetValue(DAT_180112370);
  if (pvVar2 != (PVOID)0xffffffffffffffff) {
    if (pvVar2 != (PVOID)0x0) goto LAB_1800a7b87;
    BVar1 = FlsSetValue(DAT_180112370,(PVOID)0xffffffffffffffff);
    if (BVar1 != 0) {
      lpFlsData = _calloc_base(1,0x80);
      if ((lpFlsData == (LPVOID)0x0) || (BVar1 = FlsSetValue(DAT_180112370,lpFlsData), BVar1 == 0))
      {
        FlsSetValue(DAT_180112370,(PVOID)0x0);
        pvVar2 = (PVOID)0x0;
        pvVar3 = lpFlsData;
      }
      else {
        *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
        pvVar3 = (LPVOID)0x0;
        pvVar2 = lpFlsData;
      }
      thunk_FUN_1800c3030(pvVar3);
      goto LAB_1800a7b87;
    }
  }
  pvVar2 = (PVOID)0x0;
LAB_1800a7b87:
  SetLastError(dwErrCode);
  return pvVar2;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1800a7bb0(void)

{
  uint dwFlsIndex;
  BOOL BVar1;

  dwFlsIndex = FlsAlloc(FUN_1800a7970);
  DAT_180112370 = dwFlsIndex;
  if (dwFlsIndex != 0xffffffff) {
    BVar1 = FlsSetValue(dwFlsIndex,&DAT_180115ce0);
    if (BVar1 != 0) {
      _DAT_180115d58 = 0xfffffffe;
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
    dwFlsIndex = 0;
    if (DAT_180112370 != 0xffffffff) {
      dwFlsIndex = FlsFree(DAT_180112370);
      DAT_180112370 = 0xffffffff;
    }
  }
  return dwFlsIndex & 0xffffff00;
}


undefined1 FUN_1800a7c20(void)

{
  if (DAT_180112370 != 0xffffffff) {
    FlsFree(DAT_180112370);
    DAT_180112370 = 0xffffffff;
  }
  return 1;
}


int FUN_1800a7c50(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;

  iVar2 = *(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1);
  if (iVar2 != -2) {
    return iVar2;
  }
  uVar3 = param_2[1];
  lVar1 = uVar3 + (longlong)*(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  if (*(uint *)(param_3 + 0x14) != 0) {
    uVar5 = 0;
    do {
      if (*param_2 < (longlong)*(int *)(lVar1 + uVar5 * 8) + uVar3) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_3 + 0x14));
    if ((int)uVar5 != 0) {
      return *(int *)(uVar3 + (ulonglong)((int)uVar5 - 1) * 8 + 4 +
                     (longlong)*(int *)(param_3 + 0x18));
    }
  }
  return -1;
}


// Library Function - Multiple Matches With Same Base Name
//  public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
// _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
//  int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
// __ptr64,struct _s_FuncInfo const * __ptr64)
//
// Library: Visual Studio

undefined4 GetUnwindTryBlock(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];

  plVar1 = FUN_1800a66f0(param_1,param_2,param_3,local_res18);
  return *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}


void FUN_1800a7d10(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + *param_1) = param_4;
  return;
}


// Library Function - Multiple Matches With Same Base Name
//  public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
// _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
//  void __cdecl __SetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
// __ptr64,struct _s_FuncInfo const * __ptr64,int)
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void SetUnwindTryBlock(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong local_res18 [2];

  plVar1 = FUN_1800a66f0(param_1,param_2,param_3,local_res18);
  if (*(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) < param_4) {
    *(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) = param_4;
  }
  return;
}


undefined4 FUN_1800a7d60(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;

  if (param_1 != 0) {
    uVar2 = param_2[1];
    lVar1 = uVar2 + (longlong)*(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (*param_2 < (longlong)*(int *)(lVar1 + uVar4 * 8) + uVar2) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (uVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1800c18c0();
}


int FUN_1800a7dd0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    return -1;
  }
  uVar1 = param_2[1];
  uVar2 = *(byte *)(uVar1 + (longlong)iVar5) & 0xf;
  pbVar3 = (byte *)((uVar1 + (longlong)iVar5) - (longlong)(char)(&DAT_1800f3270)[uVar2]);
  uVar2 = *(uint *)(pbVar3 + -4) >> ((&DAT_1800f3280)[uVar2] & 0x1f);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar7 = 0;
    iVar5 = -1;
    do {
      pbVar4 = pbVar3 + -(longlong)(char)(&DAT_1800f3270)[*pbVar3 & 0xf];
      uVar7 = uVar7 + (*(uint *)(pbVar4 + -4) >> ((&DAT_1800f3280)[*pbVar3 & 0xf] & 0x1f));
      if (*param_2 < (ulonglong)uVar7 + *(uint *)param_2[2] + uVar1) break;
      uVar6 = uVar6 + 1;
      pbVar3 = pbVar4 + -(longlong)(char)(&DAT_1800f3270)[*pbVar4 & 0xf];
      iVar5 = (*(uint *)(pbVar3 + -4) >> ((&DAT_1800f3280)[*pbVar4 & 0xf] & 0x1f)) - 1;
    } while (uVar6 < uVar2);
    if (uVar6 != 0) {
      return iVar5;
    }
  }
  return -1;
}


undefined4 FUN_1800a7ed0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;

  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = lVar2 + *(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar1 + uVar4 * 8) + lVar2)) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (lVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1800c18c0();
}


int FUN_1800a7f40(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;

  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    lVar1 = *(longlong *)(param_2 + 8);
    uVar2 = *(byte *)(lVar1 + iVar3) & 0xf;
    pbVar4 = (byte *)((lVar1 + iVar3) - (longlong)(char)(&DAT_1800f3270)[uVar2]);
    uVar2 = *(uint *)(pbVar4 + -4) >> ((&DAT_1800f3280)[uVar2] & 0x1f);
    if (uVar2 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      iVar3 = -1;
      do {
        pbVar5 = pbVar4 + -(longlong)(char)(&DAT_1800f3270)[*pbVar4 & 0xf];
        uVar7 = uVar7 + (*(uint *)(pbVar5 + -4) >> ((&DAT_1800f3280)[*pbVar4 & 0xf] & 0x1f));
        if (param_3 < (ulonglong)uVar7 + (ulonglong)**(uint **)(param_2 + 0x10) + lVar1) break;
        uVar6 = uVar6 + 1;
        pbVar4 = pbVar5 + -(longlong)(char)(&DAT_1800f3270)[*pbVar5 & 0xf];
        iVar3 = (*(uint *)(pbVar4 + -4) >> ((&DAT_1800f3280)[*pbVar5 & 0xf] & 0x1f)) - 1;
      } while (uVar6 < uVar2);
      if (uVar6 == 0) {
        iVar3 = -1;
      }
      return iVar3;
    }
  }
  return -1;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

char FUN_1800a8030(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;

  uVar1 = param_3[1];
  if ((uVar1 != 0) && (lVar4 = FUN_1800a7010(), lVar4 + (int)uVar1 != 0)) {
    uVar1 = param_3[1];
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_1800a7010();
      lVar4 = lVar4 + (int)uVar1;
    }
    if ((*(char *)(lVar4 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVar1 = *param_3;
      if (-1 < (int)uVar1) {
        param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
      }
      if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_180115cd0 != 0)) {
        lVar4 = (*(code *)DAT_180115cd0)();
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
          FUN_1800c18c0();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1800a7290(lVar4,(int *)(param_4 + 8));
        *param_2 = lVar4;
      }
      else if ((uVar1 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar2 = *(int *)(param_4 + 0x18);
          if (iVar2 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_1800a7030();
            lVar4 = lVar4 + iVar2;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (lVar4 != 0) {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0 ||
                (lVar4 = FUN_1800a7030(), lVar4 + iVar2 == 0)))) {
                    // WARNING: Subroutine does not return
              FUN_1800c18c0();
            }
            return ((*param_4 & 4) != 0) + '\x01';
          }
          if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
            FUN_1800c18c0();
          }
          iVar2 = *(int *)(param_4 + 0x14);
          puVar5 = (undefined8 *)FUN_1800a7290(lVar3,(int *)(param_4 + 8));
          FUN_1800d1c20(param_2,puVar5,(longlong)iVar2);
        }
        else {
          if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) ||
             (param_2 == (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
            FUN_1800c18c0();
          }
          FUN_1800d1c20(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14))
          ;
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar4 = FUN_1800a7290(*param_2,(int *)(param_4 + 8));
            *param_2 = lVar4;
          }
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
          FUN_1800c18c0();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1800a7290(lVar4,(int *)(param_4 + 8));
        *param_2 = lVar4;
      }
      return '\0';
    }
  }
  return '\0';
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

char FUN_1800a8210(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;

  iVar1 = *(int *)(param_3 + 8);
  if ((iVar1 != 0) && (lVar4 = FUN_1800a7010(), lVar4 + iVar1 != 0)) {
    iVar1 = *(int *)(param_3 + 8);
    if (iVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_1800a7010();
      lVar4 = lVar4 + iVar1;
    }
    if ((*(char *)(lVar4 + 0x10) != '\0') &&
       ((*(uint *)(param_3 + 0xc) != 0 || (*(int *)(param_3 + 4) < 0)))) {
      uVar2 = *(uint *)(param_3 + 4);
      if (-1 < (int)uVar2) {
        param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
      }
      if ((((char)uVar2 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_180115cd0 != 0)) {
        lVar4 = (*(code *)DAT_180115cd0)();
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
          FUN_1800c18c0();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1800a7290(lVar4,(int *)(param_4 + 8));
        *param_2 = lVar4;
      }
      else if ((uVar2 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar1 = *(int *)(param_4 + 0x18);
          if (iVar1 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_1800a7030();
            lVar4 = lVar4 + iVar1;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (lVar4 != 0) {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar1 = *(int *)(param_4 + 0x18), iVar1 == 0 ||
                (lVar4 = FUN_1800a7030(), lVar4 + iVar1 == 0)))) {
                    // WARNING: Subroutine does not return
              FUN_1800c18c0();
            }
            return ((*param_4 & 4) != 0) + '\x01';
          }
          if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
            FUN_1800c18c0();
          }
          iVar1 = *(int *)(param_4 + 0x14);
          puVar5 = (undefined8 *)FUN_1800a7290(lVar3,(int *)(param_4 + 8));
          FUN_1800d1c20(param_2,puVar5,(longlong)iVar1);
        }
        else {
          if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) ||
             (param_2 == (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
            FUN_1800c18c0();
          }
          FUN_1800d1c20(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14))
          ;
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar4 = FUN_1800a7290(*param_2,(int *)(param_4 + 8));
            *param_2 = lVar4;
          }
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
          FUN_1800c18c0();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1800a7290(lVar4,(int *)(param_4 + 8));
        *param_2 = lVar4;
      }
      return '\0';
    }
  }
  return '\0';
}


void FUN_1800a8400(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;

  if ((int)*param_3 < 0) {
    plVar6 = param_2;
  }
  else {
    plVar6 = (longlong *)((longlong)(int)param_3[2] + *param_2);
  }
  cVar1 = FUN_1800a8030(param_1,param_2,param_3,param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    lVar3 = FUN_1800a7290(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_1800a7030();
      puVar5 = (undefined *)(lVar4 + iVar2);
    }
    FUN_1800aaeb0(plVar6,puVar5,lVar3);
  }
  else if (iVar2 == 2) {
    lVar3 = FUN_1800a7290(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_1800a7030();
      puVar5 = (undefined *)(lVar4 + iVar2);
    }
    FUN_1800aaec0(plVar6,puVar5,lVar3,1);
  }
  return;
}


void FUN_1800a84c0(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;

  if (*(int *)(param_3 + 4) < 0) {
    plVar6 = param_2;
  }
  else {
    plVar6 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  cVar1 = FUN_1800a8210(param_1,param_2,param_3,param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    lVar3 = FUN_1800a7290(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_1800a7030();
      puVar5 = (undefined *)(lVar4 + iVar2);
    }
    FUN_1800aaeb0(plVar6,puVar5,lVar3);
  }
  else if (iVar2 == 2) {
    lVar3 = FUN_1800a7290(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_1800a7030();
      puVar5 = (undefined *)(lVar4 + iVar2);
    }
    FUN_1800aaec0(plVar6,puVar5,lVar3,1);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a8580(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5
                  ,byte param_6)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  PVOID pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int *piVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_138 [32];
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar16;
  int local_d8;
  ULONG_PTR local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  int local_bc;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  uint *local_a0;
  ulonglong local_98;
  longlong *local_90;
  uint local_88;
  uint local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStackY_138;
  local_b8 = param_2;
  local_d8 = FUN_1800a7d60((longlong)param_5,param_4);
  FUN_1800a66f0(param_2,param_4,(longlong)param_5,(longlong *)&local_c8);
  iVar5 = GetUnwindTryBlock(param_2,param_4,(longlong)param_5);
  if (iVar5 < local_d8) {
    FUN_1800a7d10((longlong *)&local_c8,param_4,(longlong)param_5,local_d8);
    SetUnwindTryBlock(param_2,param_4,(longlong)param_5,local_d8);
  }
  else {
    local_d8 = GetUnwindTryBlock(param_2,param_4,(longlong)param_5);
  }
  if ((-2 < local_d8) && (local_d8 < (int)param_5[1])) {
    local_d0 = param_3;
    if ((*param_1 == -0x1f928c9d) &&
       (((param_1[6] == 4 && (param_1[8] + 0xe66cfae0U < 3)) && (*(longlong *)(param_1 + 0xc) == 0))
       )) {
      pvVar6 = FUN_1800a79f0();
      if (*(longlong *)((longlong)pvVar6 + 0x20) == 0) {
        return;
      }
      pvVar6 = FUN_1800a79f0();
      param_1 = *(int **)((longlong)pvVar6 + 0x20);
      pvVar6 = FUN_1800a79f0();
      local_d0 = *(ULONG_PTR *)((longlong)pvVar6 + 0x28);
      FUN_1800a7070(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_1800a8b21;
      pvVar6 = FUN_1800a79f0();
      if (*(longlong *)((longlong)pvVar6 + 0x38) != 0) {
        pvVar6 = FUN_1800a79f0();
        piVar12 = *(int **)((longlong)pvVar6 + 0x38);
        pvVar6 = FUN_1800a79f0();
        *(undefined8 *)((longlong)pvVar6 + 0x38) = 0;
        cVar3 = FUN_1800aac70((longlong)param_1,piVar12);
        if (cVar3 == '\0') {
          uVar7 = FUN_1800aad80(piVar12);
          if ((char)uVar7 == '\0') {
                    // WARNING: Subroutine does not return
            FUN_1800c06c0();
          }
          __DestructExceptionObject(param_1);
          FUN_1800a9f40(&local_70);
                    // WARNING: Subroutine does not return
          FUN_1800a62a0(&local_70,&DAT_18010fe28);
        }
      }
    }
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
    local_98 = param_4[1];
    local_a0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (param_5[3] != 0) {
        FUN_1800a6820(&local_90,&local_a0,local_d8,param_4,(longlong)param_5);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
        local_c8 = local_90;
        uVar14 = local_88;
        if (local_88 < local_78) {
          do {
            lVar11 = local_90[1];
            lVar8 = (longlong)*(int *)(*local_90 + 0x10) + (ulonglong)uVar14 * 0x14;
            local_bc = *(int *)(lVar8 + lVar11);
            if (local_bc <= local_d8) {
              if (local_d8 <= *(int *)(lVar8 + 4 + lVar11)) {
                local_c0 = *(undefined4 *)(lVar8 + 8 + lVar11);
                uVar7 = 0;
                uVar1 = *(uint *)(lVar8 + 0xc + lVar11);
                local_b0 = (longlong)*(int *)(lVar8 + 0x10 + lVar11) + param_4[1];
                if (uVar1 != 0) {
                  do {
                    plVar10 = (longlong *)(local_b0 + uVar7 * 0x14);
                    local_70 = *plVar10;
                    uStack_68 = plVar10[1];
                    local_60 = *(undefined4 *)(local_b0 + 0x10 + uVar7 * 0x14);
                    iVar5 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar8 = FUN_1800a7030();
                    piVar12 = (int *)((longlong)iVar5 + lVar8 + 4);
                    iVar5 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar8 = FUN_1800a7030();
                    local_90 = local_c8;
                    for (iVar5 = *(int *)(lVar8 + iVar5); local_c8 = local_90, 0 < iVar5;
                        iVar5 = iVar5 + -1) {
                      iVar2 = *piVar12;
                      lVar8 = FUN_1800a7030();
                      pbVar13 = (byte *)(iVar2 + lVar8);
                      uVar9 = FUN_1800a96b0((byte *)&local_70,pbVar13,*(uint **)(param_1 + 0xc));
                      param_2 = local_b8;
                      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
                      if ((int)uVar9 != 0) {
                        plVar10 = FUN_1800a66f0(local_b8,param_4,(longlong)param_5,&local_a8);
                        if (pbVar13 != (byte *)0x0) {
                          FUN_1800a8400((longlong)param_1,plVar10,(uint *)&local_70,pbVar13);
                        }
                        lVar11 = (longlong)uStack_68._4_4_;
                        lVar8 = FUN_1800a7010();
                        in_stack_ffffffffffffff00 = CONCAT44(uVar16,local_c0);
                        FUN_1800a6ad0(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar10,
                                      lVar8 + lVar11,(ULONG_PTR)param_5,local_bc,
                                      in_stack_ffffffffffffff00,&local_70,param_4,param_6);
                        local_90 = local_c8;
                        goto LAB_1800a8976;
                      }
                      piVar12 = piVar12 + 1;
                      local_90 = local_c8;
                    }
                    uVar15 = (int)uVar7 + 1;
                    uVar7 = (ulonglong)uVar15;
                  } while (uVar15 != uVar1);
                }
                param_2 = local_b8;
              }
            }
LAB_1800a8976:
            uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
            uVar14 = uVar14 + 1;
          } while (uVar14 < local_78);
        }
      }
      if ((0x19930520 < (*param_5 & 0x1fffffff)) &&
         (((uVar14 = param_5[8], uVar14 != 0 && (lVar8 = FUN_1800a7010(), lVar8 + (int)uVar14 != 0))
          || (((param_5[9] & 4) != 0 && (bVar4 = FUN_1800a6500(param_4,(longlong)param_5), !bVar4)))
          ))) {
        if ((param_5[9] & 4) != 0) {
          pvVar6 = FUN_1800a79f0();
          *(int **)((longlong)pvVar6 + 0x20) = param_1;
          pvVar6 = FUN_1800a79f0();
          *(ULONG_PTR *)((longlong)pvVar6 + 0x28) = local_d0;
                    // WARNING: Subroutine does not return
          FUN_1800c06c0();
        }
        uVar14 = param_5[8];
        if (uVar14 == 0) {
          piVar12 = (int *)0x0;
        }
        else {
          lVar8 = FUN_1800a7010();
          piVar12 = (int *)((int)uVar14 + lVar8);
        }
        cVar3 = FUN_1800aac70((longlong)param_1,piVar12);
        if (cVar3 == '\0') {
          plVar10 = FUN_1800a66f0(param_2,param_4,(longlong)param_5,&local_a8);
          FUN_1800a6ad0(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar10,0,(ULONG_PTR)param_5,
                        -1,CONCAT44(uVar16,0xffffffff),0,param_4,param_6);
        }
      }
    }
    else if (param_5[3] != 0) {
      if (param_6 != 0) goto LAB_1800a8b21;
      FUN_1800a90e0(param_1,param_2,local_d0,param_4,(ULONG_PTR)param_5,local_d8);
    }
    pvVar6 = FUN_1800a79f0();
    if (*(longlong *)((longlong)pvVar6 + 0x38) == 0) {
      return;
    }
  }
LAB_1800a8b21:
                    // WARNING: Subroutine does not return
  FUN_1800c18c0();
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a8b30(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,byte *param_5
                  ,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  PVOID pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  undefined1 auStackY_1a8 [32];
  ULONG_PTR local_140;
  longlong local_118;
  uint local_110;
  uint local_100;
  longlong local_f8;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined4 local_80;
  uint local_78 [10];
  ulonglong local_50;

  local_50 = DAT_180112300 ^ (ulonglong)auStackY_1a8;
  iVar7 = FUN_1800aabc0(param_2,param_4,(longlong)param_5);
  if (-2 < iVar7) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar13 = 0;
    }
    else {
      pbVar20 = (byte *)(param_4[1] + (longlong)*(int *)(param_5 + 8));
      uVar13 = *pbVar20 & 0xf;
      uVar13 = *(uint *)(pbVar20 + (-4 - (longlong)(char)(&DAT_1800f3270)[uVar13])) >>
               ((&DAT_1800f3280)[uVar13] & 0x1f);
    }
    if (iVar7 < (int)uVar13) {
      local_140 = param_3;
      if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) &&
         (*(longlong *)(param_1 + 0xc) == 0)) {
        pvVar8 = FUN_1800a79f0();
        if (*(longlong *)((longlong)pvVar8 + 0x20) == 0) {
          return;
        }
        pvVar8 = FUN_1800a79f0();
        param_1 = *(int **)((longlong)pvVar8 + 0x20);
        pvVar8 = FUN_1800a79f0();
        local_140 = *(ULONG_PTR *)((longlong)pvVar8 + 0x28);
        FUN_1800a7070(*(undefined8 *)(param_1 + 0xe));
        if ((param_1 == (int *)0x0) ||
           (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
            ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
        goto LAB_1800a90da;
        pvVar8 = FUN_1800a79f0();
        if (*(longlong *)((longlong)pvVar8 + 0x38) != 0) {
          pvVar8 = FUN_1800a79f0();
          piVar18 = *(int **)((longlong)pvVar8 + 0x38);
          pvVar8 = FUN_1800a79f0();
          *(undefined8 *)((longlong)pvVar8 + 0x38) = 0;
          cVar5 = FUN_1800aac70((longlong)param_1,piVar18);
          if (cVar5 == '\0') {
            uVar9 = FUN_1800aad80(piVar18);
            if ((char)uVar9 == '\0') {
                    // WARNING: Subroutine does not return
              FUN_1800c06c0();
            }
            __DestructExceptionObject(param_1);
            FUN_1800a9f40(&local_118);
                    // WARNING: Subroutine does not return
            FUN_1800a62a0(&local_118,&DAT_18010fe28);
          }
        }
      }
      FUN_1800a9e10(local_78,(longlong)param_5,param_4[1]);
      if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
        if ((local_78[0] != 0) &&
           (FUN_1800a6950(&local_118,(int *)local_78,iVar7), uVar13 = local_110,
           local_110 < local_100)) {
          do {
            iVar1 = *(int *)(local_118 + 0x18);
            if ((iVar1 <= iVar7) && (iVar7 <= *(int *)(local_118 + 0x1c))) {
              iVar2 = *(int *)(local_118 + 0x20);
              uVar21 = 0;
              iVar16 = *(int *)(local_118 + 0x24);
              local_88 = param_4[1];
              local_c0 = 0;
              local_b8 = 0;
              local_b0 = 0;
              local_80 = *(undefined4 *)param_4[2];
              local_ac = 0;
              local_a4 = 0;
              local_98 = 0;
              uStack_90 = 0;
              if (iVar16 == 0) {
                local_c8[0] = 0;
              }
              else {
                uVar19 = *(byte *)(local_88 + (longlong)iVar16) & 0xf;
                local_c0 = (local_88 - (longlong)(char)(&DAT_1800f3270)[uVar19]) + (longlong)iVar16;
                local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_1800f3280)[uVar19] & 0x1f);
                local_b8 = local_c0;
                FUN_1800aa3e0((longlong)local_c8);
              }
              uVar19 = local_c8[0];
              if (local_c8[0] != 0) {
                do {
                  local_f0 = local_b0;
                  local_ef = local_af;
                  local_ed = local_ad;
                  local_ec = (undefined4)local_ac;
                  local_e8 = local_ac._4_4_;
                  local_e4 = (undefined4)local_a4;
                  local_e0 = local_a4._4_4_;
                  local_dc = local_9c;
                  local_d8 = local_98;
                  local_d0 = uStack_90;
                  iVar16 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar10 = FUN_1800a7030();
                  piVar18 = (int *)((longlong)iVar16 + lVar10 + 4);
                  iVar16 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar10 = FUN_1800a7030();
                  for (iVar16 = *(int *)(lVar10 + iVar16); 0 < iVar16; iVar16 = iVar16 + -1) {
                    iVar3 = *piVar18;
                    lVar10 = FUN_1800a7030();
                    pbVar20 = (byte *)(iVar3 + lVar10);
                    uVar11 = FUN_1800a97e0((longlong)&local_f0,pbVar20,*(uint **)(param_1 + 0xc));
                    if ((int)uVar11 != 0) {
                      plVar12 = FUN_1800a67f0(param_2,param_4,param_5,&local_f8);
                      if (pbVar20 != (byte *)0x0) {
                        FUN_1800a84c0((longlong)param_1,plVar12,(longlong)&local_f0,pbVar20);
                      }
                      lVar17 = (longlong)local_e0;
                      lVar10 = FUN_1800a7010();
                      FUN_1800a6c00(param_2,(ULONG_PTR)param_1,local_140,(ULONG_PTR)plVar12,
                                    lVar10 + lVar17,param_5,iVar1,iVar2,(longlong)&local_f0,param_4,
                                    param_6);
                      goto LAB_1800a8eca;
                    }
                    piVar18 = piVar18 + 1;
                  }
                  FUN_1800aa3e0((longlong)local_c8);
                  uVar21 = uVar21 + 1;
                } while (uVar21 != uVar19);
              }
            }
LAB_1800a8eca:
            pbVar20 = *(byte **)(local_118 + 8);
            uVar13 = uVar13 + 1;
            lVar10 = (longlong)(char)(&DAT_1800f3270)[*pbVar20 & 0xf];
            bVar6 = (&DAT_1800f3280)[*pbVar20 & 0xf];
            pbVar14 = pbVar20 + -lVar10;
            uVar21 = *(uint *)(pbVar14 + -4);
            *(byte **)(local_118 + 8) = pbVar14;
            *(uint *)(local_118 + 0x18) = uVar21 >> (bVar6 & 0x1f);
            cVar5 = (&DAT_1800f3270)[*pbVar14 & 0xf];
            pbVar15 = pbVar20 + (-lVar10 - (longlong)cVar5);
            *(uint *)(local_118 + 0x1c) =
                 *(uint *)(pbVar15 + -4) >> ((&DAT_1800f3280)[*pbVar14 & 0xf] & 0x1f);
            *(byte **)(local_118 + 8) = pbVar15;
            pbVar20 = pbVar20 + ((-(longlong)cVar5 -
                                 (longlong)(char)(&DAT_1800f3270)[*pbVar15 & 0xf]) - lVar10);
            *(uint *)(local_118 + 0x20) =
                 *(uint *)(pbVar20 + -4) >> ((&DAT_1800f3280)[*pbVar15 & 0xf] & 0x1f);
            *(byte **)(local_118 + 8) = pbVar20;
            uVar4 = *(undefined4 *)pbVar20;
            *(byte **)(local_118 + 8) = pbVar20 + 4;
            *(undefined4 *)(local_118 + 0x24) = uVar4;
          } while (uVar13 < local_100);
        }
        if (((*param_5 & 0x40) != 0) && (bVar6 = FUN_1800a6570(param_4,param_5), bVar6 == 0)) {
          pvVar8 = FUN_1800a79f0();
          *(int **)((longlong)pvVar8 + 0x20) = param_1;
          pvVar8 = FUN_1800a79f0();
          *(ULONG_PTR *)((longlong)pvVar8 + 0x28) = local_140;
                    // WARNING: Subroutine does not return
          FUN_1800c06c0();
        }
      }
      else if (local_78[0] != 0) {
        if (param_6 != 0) goto LAB_1800a90da;
        FUN_1800a9340(param_1,param_2,local_140,param_4,param_5,iVar7);
      }
      pvVar8 = FUN_1800a79f0();
      if (*(longlong *)((longlong)pvVar8 + 0x38) == 0) {
        return;
      }
    }
  }
LAB_1800a90da:
                    // WARNING: Subroutine does not return
  FUN_1800c18c0();
}


void FUN_1800a90e0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,
                  ULONG_PTR param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PVOID pvVar4;
  PVOID pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  uint uVar10;
  int *piVar11;
  undefined4 in_stack_ffffffffffffff64;
  longlong local_70;
  ULONG_PTR local_68;
  ulonglong local_60;
  longlong *local_58;
  uint local_50;
  uint local_40;

  if (*param_1 != -0x7ffffffd) {
    pvVar4 = FUN_1800a79f0();
    if (*(longlong *)((longlong)pvVar4 + 0x10) != 0) {
      pvVar4 = FUN_1800a79f0();
      pvVar4 = *(PVOID *)((longlong)pvVar4 + 0x10);
      pvVar5 = EncodePointer((PVOID)0x0);
      if ((((pvVar4 != pvVar5) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (uVar6 = FUN_1800a6350(param_1,param_2,param_3), (int)uVar6 != 0)) {
        return;
      }
    }
    local_60 = param_4[1];
    local_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1800c18c0();
    }
    FUN_1800a6820(&local_58,&local_68,param_6,param_4,param_5);
    uVar10 = local_50;
    if (local_50 < local_40) {
      do {
        piVar11 = (int *)((longlong)*(int *)(*local_58 + 0x10) + (ulonglong)uVar10 * 0x14 +
                         local_58[1]);
        iVar1 = *piVar11;
        if ((iVar1 <= param_6) && (param_6 <= piVar11[1])) {
          iVar2 = piVar11[2];
          pbVar9 = (byte *)((param_4[1] - 0x14) +
                           (longlong)piVar11[4] + (ulonglong)(uint)piVar11[3] * 0x14);
          iVar3 = *(int *)(pbVar9 + 4);
          if ((iVar3 != 0) && (lVar7 = FUN_1800a7010(), lVar7 + iVar3 != 0)) {
            iVar3 = *(int *)(pbVar9 + 4);
            if (iVar3 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = FUN_1800a7010();
              lVar7 = lVar7 + iVar3;
            }
            if (*(char *)(lVar7 + 0x10) != '\0') goto LAB_1800a92ed;
          }
          if ((*pbVar9 & 0x40) == 0) {
            plVar8 = FUN_1800a66f0(param_2,param_4,param_5,&local_70);
            lVar7 = FUN_1800a7010();
            FUN_1800a6ad0(param_2,(ULONG_PTR)param_1,param_3,(ULONG_PTR)plVar8,
                          *(int *)(pbVar9 + 0xc) + lVar7,param_5,iVar1,
                          CONCAT44(in_stack_ffffffffffffff64,iVar2),pbVar9,param_4,0);
          }
        }
LAB_1800a92ed:
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_40);
    }
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a9340(int *param_1,longlong *param_2,ULONG_PTR param_3,undefined8 *param_4,
                  byte *param_5,int param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  PVOID pvVar7;
  PVOID pvVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  longlong lVar16;
  byte *pbVar17;
  undefined1 auStackY_178 [32];
  uint local_118;
  longlong local_f0;
  uint local_e8;
  uint local_d8;
  longlong local_d0;
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  uint local_78 [10];
  ulonglong local_50;

  local_50 = DAT_180112300 ^ (ulonglong)auStackY_178;
  if (*param_1 != -0x7ffffffd) {
    pvVar7 = FUN_1800a79f0();
    if (*(longlong *)((longlong)pvVar7 + 0x10) != 0) {
      pvVar7 = FUN_1800a79f0();
      pvVar7 = *(PVOID *)((longlong)pvVar7 + 0x10);
      pvVar8 = EncodePointer((PVOID)0x0);
      if ((((pvVar7 != pvVar8) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (uVar9 = FUN_1800a63a0(param_1,param_2,param_3), (int)uVar9 != 0)) {
        return;
      }
    }
    FUN_1800a9e10(local_78,(longlong)param_5,param_4[1]);
    if (local_78[0] == 0) {
                    // WARNING: Subroutine does not return
      FUN_1800c18c0();
    }
    FUN_1800a6950(&local_f0,(int *)local_78,param_6);
    local_118 = local_e8;
    if (local_e8 < local_d8) {
      do {
        lVar11 = 0;
        iVar3 = *(int *)(local_f0 + 0x18);
        if ((iVar3 <= param_6) && (param_6 <= *(int *)(local_f0 + 0x1c))) {
          iVar4 = *(int *)(local_f0 + 0x20);
          iVar5 = *(int *)(local_f0 + 0x24);
          local_88 = param_4[1];
          local_80 = *(undefined4 *)param_4[2];
          local_c0 = 0;
          local_b8 = 0;
          local_b0[0] = 0;
          local_ac = 0;
          local_a4 = 0;
          local_98 = 0;
          uStack_90 = 0;
          if (iVar5 == 0) {
            local_c8[0] = 0;
          }
          else {
            uVar13 = *(byte *)(iVar5 + local_88) & 0xf;
            local_c0 = ((longlong)iVar5 - (longlong)(char)(&DAT_1800f3270)[uVar13]) + local_88;
            local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_1800f3280)[uVar13] & 0x1f);
            local_b8 = local_c0;
            FUN_1800aa3e0((longlong)local_c8);
          }
          FUN_1800aafb0((longlong)local_c8,0);
          FUN_1800aafb0((longlong)local_c8,local_c8[0] - 1);
          lVar16 = (longlong)local_ac._4_4_;
          if ((local_ac._4_4_ != 0) && (lVar10 = FUN_1800a7010(), lVar10 + lVar16 != 0)) {
            lVar16 = (longlong)local_ac._4_4_;
            if (local_ac._4_4_ != 0) {
              lVar11 = FUN_1800a7010();
              lVar11 = lVar11 + lVar16;
            }
            if (*(char *)(lVar11 + 0x10) != '\0') goto LAB_1800a95c6;
          }
          if ((local_ac & 0x40) == 0) {
            plVar12 = FUN_1800a67f0(param_2,param_4,param_5,&local_d0);
            lVar16 = (longlong)local_a4._4_4_;
            lVar11 = FUN_1800a7010();
            FUN_1800a6c00(param_2,(ULONG_PTR)param_1,param_3,(ULONG_PTR)plVar12,lVar11 + lVar16,
                          param_5,iVar3,iVar4,(longlong)local_b0,param_4,0);
          }
        }
LAB_1800a95c6:
        pbVar17 = *(byte **)(local_f0 + 8);
        lVar11 = (longlong)(char)(&DAT_1800f3270)[*pbVar17 & 0xf];
        bVar1 = (&DAT_1800f3280)[*pbVar17 & 0xf];
        pbVar14 = pbVar17 + -lVar11;
        uVar13 = *(uint *)(pbVar14 + -4);
        *(byte **)(local_f0 + 8) = pbVar14;
        *(uint *)(local_f0 + 0x18) = uVar13 >> (bVar1 & 0x1f);
        cVar2 = (&DAT_1800f3270)[*pbVar14 & 0xf];
        pbVar15 = pbVar17 + (-lVar11 - (longlong)cVar2);
        *(uint *)(local_f0 + 0x1c) =
             *(uint *)(pbVar15 + -4) >> ((&DAT_1800f3280)[*pbVar14 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar15;
        pbVar17 = pbVar17 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_1800f3270)[*pbVar15 & 0xf]) -
                            lVar11);
        *(uint *)(local_f0 + 0x20) =
             *(uint *)(pbVar17 + -4) >> ((&DAT_1800f3280)[*pbVar15 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar17;
        uVar6 = *(undefined4 *)pbVar17;
        *(byte **)(local_f0 + 8) = pbVar17 + 4;
        local_118 = local_118 + 1;
        *(undefined4 *)(local_f0 + 0x24) = uVar6;
      } while (local_118 < local_d8);
    }
  }
  return;
}


undefined8 FUN_1800a96b0(byte *param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;

  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_1800a7010();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1800a7010();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*param_1 & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1800a7010();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_1800a7030();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1800a7010();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_1800a7030();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*param_1 & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*param_1 & 2) != 0)))) {
    return 1;
  }
  return 0;
}


undefined8 FUN_1800a97e0(longlong param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;

  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_1800a7010();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1800a7010();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*(byte *)(param_1 + 4) & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1800a7010();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_1800a7030();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1800a7010();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_1800a7030();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*(byte *)(param_1 + 4) & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*(byte *)(param_1 + 4) & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*(byte *)(param_1 + 4) & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*(byte *)(param_1 + 4) & 2) != 0)))) {
    return 1;
  }
  return 0;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8
FUN_1800a9910(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  uint uVar1;
  int iVar2;
  PVOID pvVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar8;

  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  __except_validate_context_record(param_3);
  pvVar3 = FUN_1800a79f0();
  if ((*(int *)((longlong)pvVar3 + 0x40) == 0) && (iVar2 = *param_1, iVar2 != -0x1f928c9d)) {
    if (iVar2 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar7 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_1800a9969;
      }
    }
    else {
      bVar7 = iVar2 == -0x7fffffda;
LAB_1800a9969:
      if (bVar7) goto LAB_1800a9983;
    }
    if ((0x19930521 < (*param_5 & 0x1fffffff)) && ((param_5[9] & 1) != 0)) {
      return 1;
    }
  }
LAB_1800a9983:
  if ((param_1[1] & 0x66U) == 0) {
    if ((param_5[3] == 0) &&
       ((((*param_5 & 0x1fffffff) < 0x19930521 || (uVar1 = param_5[8], uVar1 == 0)) ||
        (lVar4 = FUN_1800a7010(), lVar4 + (int)uVar1 == 0)))) {
      if ((*param_5 & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5[9] & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        (iVar2 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar2 != 0)))) {
      lVar4 = FUN_1800a7030();
      pcVar5 = (code *)(lVar4 + iVar2);
      if (pcVar5 != (code *)0x0) {
        uVar6 = (*pcVar5)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                          CONCAT44(uVar8,(uint)param_8));
        return uVar6;
      }
    }
    FUN_1800a8580(param_1,param_2,param_3,param_4,param_5,param_8);
    return 1;
  }
  if (param_5[1] == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((param_1[1] & 0x20U) == 0) {
LAB_1800a9a1d:
    FUN_1800a6580(param_2,param_4,(longlong)param_5);
    return 1;
  }
  if (*param_1 == -0x7fffffda) {
    iVar2 = FUN_1800a7ed0((longlong)param_5,(longlong)param_4,param_4[4]);
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_1800aa630(param_2,param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
  else {
    if (*param_1 != -0x7fffffd7) goto LAB_1800a9a1d;
    iVar2 = param_1[0xe];
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_1800aa630(*(longlong **)(param_1 + 10),param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1800c18c0();
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8
FUN_1800a9b40(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,byte *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  int iVar1;
  PVOID pvVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar9;
  uint local_68 [14];

  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  __except_validate_context_record(param_3);
  pvVar2 = FUN_1800a79f0();
  if ((*(int *)((longlong)pvVar2 + 0x40) == 0) && (iVar1 = *param_1, iVar1 != -0x1f928c9d)) {
    if (iVar1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar8 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_1800a9b9c;
      }
    }
    else {
      bVar8 = iVar1 == -0x7fffffda;
LAB_1800a9b9c:
      if (bVar8) goto LAB_1800a9ba7;
    }
    if ((*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_1800a9ba7:
  if ((param_1[1] & 0x66U) == 0) {
    FUN_1800a9e10(local_68,(longlong)param_5,param_4[1]);
    if ((local_68[0] != 0) || ((*param_5 & 0x40) != 0)) {
      if ((*param_1 == -0x1f928c9d) &&
         (((2 < (uint)param_1[6] && (0x19930522 < (uint)param_1[8])) &&
          (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)))) {
        lVar3 = FUN_1800a7030();
        pcVar4 = (code *)(lVar3 + iVar1);
        if (pcVar4 != (code *)0x0) {
          uVar5 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                            CONCAT44(uVar9,(uint)param_8));
          return uVar5;
        }
      }
      FUN_1800a8b30(param_1,param_2,param_3,param_4,param_5,param_8);
    }
  }
  else if (((*(int *)(param_5 + 8) != 0) &&
           (pbVar7 = (byte *)(param_4[1] + (longlong)*(int *)(param_5 + 8)), uVar6 = *pbVar7 & 0xf,
           *(uint *)(pbVar7 + (-4 - (longlong)(char)(&DAT_1800f3270)[uVar6])) >>
           ((&DAT_1800f3280)[uVar6] & 0x1f) != 0)) && (param_6 == 0)) {
    if ((param_1[1] & 0x20U) != 0) {
      if (*param_1 == -0x7fffffda) {
        iVar1 = FUN_1800a7f40((longlong)param_5,(longlong)param_4,param_4[4]);
        if ((-2 < iVar1) &&
           (uVar6 = FUN_1800aac30((longlong)param_4,(longlong)param_5), iVar1 < (int)uVar6)) {
          FUN_1800aa7e0(param_2,param_4,(longlong)param_5,iVar1);
          return 1;
        }
LAB_1800a9d93:
                    // WARNING: Subroutine does not return
        FUN_1800c18c0();
      }
      if (*param_1 == -0x7fffffd7) {
        iVar1 = param_1[0xe];
        if ((-2 < iVar1) &&
           (uVar6 = FUN_1800aac30((longlong)param_4,(longlong)param_5), iVar1 < (int)uVar6)) {
          FUN_1800aa7e0(*(longlong **)(param_1 + 10),param_4,(longlong)param_5,iVar1);
          return 1;
        }
        goto LAB_1800a9d93;
      }
    }
    FUN_1800a66b0(param_2,param_4,param_5);
  }
  return 1;
}


void FUN_1800a9da0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5
                  ,int param_6,undefined8 param_7,byte param_8)

{
  FUN_1800a9910(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


ulonglong FUN_1800a9db0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,
                       byte *param_5,int param_6,undefined8 param_7,byte param_8)

{
  ulonglong uVar1;
  PVOID pvVar2;

  uVar1 = FUN_1800a9b40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pvVar2 = FUN_1800a79f0();
  *(undefined4 *)((longlong)pvVar2 + 0x78) = 0xfffffffe;
  return uVar1 & 0xffffffff;
}


uint * FUN_1800a9e10(uint *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint *puVar5;

  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    *param_1 = 0;
    return param_1;
  }
  pbVar3 = (byte *)(param_3 + *(int *)(param_2 + 0xc));
  *(byte **)(param_1 + 2) = pbVar3;
  bVar1 = (&DAT_1800f3280)[*pbVar3 & 0xf];
  pbVar3 = pbVar3 + -(longlong)(char)(&DAT_1800f3270)[*pbVar3 & 0xf];
  uVar2 = *(uint *)(pbVar3 + -4);
  *(byte **)(param_1 + 2) = pbVar3;
  *param_1 = uVar2 >> (bVar1 & 0x1f);
  *(byte **)(param_1 + 4) = pbVar3;
  bVar1 = (&DAT_1800f3280)[*pbVar3 & 0xf];
  pbVar3 = pbVar3 + -(longlong)(char)(&DAT_1800f3270)[*pbVar3 & 0xf];
  uVar2 = *(uint *)(pbVar3 + -4);
  *(byte **)(param_1 + 2) = pbVar3;
  param_1[6] = uVar2 >> (bVar1 & 0x1f);
  pbVar4 = pbVar3 + -(longlong)(char)(&DAT_1800f3270)[*pbVar3 & 0xf];
  param_1[7] = *(uint *)(pbVar4 + -4) >> ((&DAT_1800f3280)[*pbVar3 & 0xf] & 0x1f);
  *(byte **)(param_1 + 2) = pbVar4;
  puVar5 = (uint *)(pbVar4 + -(longlong)(char)(&DAT_1800f3270)[*pbVar4 & 0xf]);
  param_1[8] = puVar5[-1] >> ((&DAT_1800f3280)[*pbVar4 & 0xf] & 0x1f);
  *(uint **)(param_1 + 2) = puVar5;
  uVar2 = *puVar5;
  *(uint **)(param_1 + 2) = puVar5 + 1;
  param_1[9] = uVar2;
  return param_1;
}


undefined8 * FUN_1800a9f00(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1800a61c0((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}


undefined8 * FUN_1800a9f40(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}


undefined8 FUN_1800a9f70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  PVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_48 [2];

  pvVar7 = FUN_1800a79f0();
  uVar1 = *(undefined8 *)((longlong)pvVar7 + 0x28);
  pvVar7 = FUN_1800a79f0();
  uVar2 = *(undefined8 *)((longlong)pvVar7 + 0x20);
  piVar3 = *(int **)(param_1 + 0x50);
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar5 = *(longlong *)(param_1 + 0x40);
  plVar6 = *(longlong **)(param_1 + 0x28);
  __except_validate_context_record(lVar5);
  pvVar7 = FUN_1800a79f0();
  *(int **)((longlong)pvVar7 + 0x20) = piVar3;
  pvVar7 = FUN_1800a79f0();
  *(longlong *)((longlong)pvVar7 + 0x28) = lVar5;
  pvVar7 = FUN_1800a79f0();
  puVar8 = _CreateFrameInfo(local_48,*(undefined8 *)(*(longlong *)((longlong)pvVar7 + 0x20) + 0x28))
  ;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1800a79f0();
  }
  uVar9 = _CallSettingFrame();
  FUN_1800a6fb0((longlong)puVar8);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (uVar10 = FUN_1800a7250(*(longlong *)(piVar3 + 10)), (int)uVar10 != 0)) {
    __DestructExceptionObject(piVar3);
  }
  pvVar7 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar7 + 0x20) = uVar2;
  pvVar7 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar7 + 0x28) = uVar1;
  *(undefined8 *)((longlong)*(int *)(lVar4 + 0x1c) + *plVar6) = 0xfffffffffffffffe;
  return uVar9;
}


longlong FUN_1800aa180(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  PVOID pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_60 [5];

  pvVar5 = FUN_1800a79f0();
  uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x28);
  pvVar5 = FUN_1800a79f0();
  uVar3 = *(undefined8 *)((longlong)pvVar5 + 0x20);
  piVar4 = *(int **)(param_1 + 0x50);
  lVar7 = *(longlong *)(param_1 + 0x40);
  local_60[0] = *(longlong *)(param_1 + 0x48);
  local_60[1] = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  __except_validate_context_record(lVar7);
  pvVar5 = FUN_1800a79f0();
  *(int **)((longlong)pvVar5 + 0x20) = piVar4;
  pvVar5 = FUN_1800a79f0();
  *(longlong *)((longlong)pvVar5 + 0x28) = lVar7;
  pvVar5 = FUN_1800a79f0();
  puVar6 = _CreateFrameInfo(local_60 + 2,
                            *(undefined8 *)(*(longlong *)((longlong)pvVar5 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1800a79f0();
  }
  lVar7 = FUN_1800ab3b0();
  if ((lVar7 < 2) && (lVar7 = local_60[lVar7], lVar7 == 0)) {
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  FUN_1800ab3e0();
  FUN_1800a6fb0((longlong)puVar6);
  if ((((*piVar4 == -0x1f928c9d) && (piVar4[6] == 4)) && (piVar4[8] + 0xe66cfae0U < 3)) &&
     (uVar8 = FUN_1800a7250(*(longlong *)(piVar4 + 10)), (int)uVar8 != 0)) {
    __DestructExceptionObject(piVar4);
  }
  pvVar5 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar5 + 0x20) = uVar3;
  pvVar5 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar5 + 0x28) = uVar2;
  pvVar5 = FUN_1800a79f0();
  *(undefined4 *)((longlong)pvVar5 + 0x78) = uVar1;
  pvVar5 = FUN_1800a79f0();
  *(undefined4 *)((longlong)pvVar5 + 0x78) = 0xfffffffe;
  return lVar7;
}


void FUN_1800aa3e0(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;

  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  bVar1 = **(byte **)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 8) + 1;
  *(byte *)(param_1 + 0x18) = bVar1;
  *(byte **)(param_1 + 8) = pbVar6;
  if ((bVar1 & 1) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1800f3270)[bVar5 & 0xf];
    *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar6 + -4) >> ((&DAT_1800f3280)[bVar5 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar6;
  }
  if ((bVar1 & 2) != 0) {
    uVar2 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    *(byte **)(param_1 + 8) = pbVar6;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  if ((bVar1 & 4) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1800f3270)[bVar5 & 0xf];
    *(uint *)(param_1 + 0x24) = *(uint *)(pbVar6 + -4) >> ((&DAT_1800f3280)[bVar5 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar6;
  }
  pbVar7 = pbVar6 + 4;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)pbVar6;
  bVar5 = bVar1 & 0x30;
  *(byte **)(param_1 + 8) = pbVar7;
  if ((bVar1 & 8) == 0) {
    if (bVar5 == 0x10) {
      bVar1 = (&DAT_1800f3280)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(((longlong)pbVar7 - (longlong)(char)(&DAT_1800f3270)[*pbVar7 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar7 - (longlong)(char)(&DAT_1800f3270)[*pbVar7 & 0xf];
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      return;
    }
    if (bVar5 == 0x20) {
      bVar1 = (&DAT_1800f3280)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1800f3270)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      bVar1 = (&DAT_1800f3280)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(((longlong)pbVar7 - (longlong)(char)(&DAT_1800f3270)[*pbVar7 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar7 - (longlong)(char)(&DAT_1800f3270)[*pbVar7 & 0xf];
      *(ulonglong *)(param_1 + 0x38) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
    }
  }
  else {
    if (bVar5 == 0x10) {
      iVar3 = *(int *)pbVar7;
      *(byte **)(param_1 + 8) = pbVar6 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
      return;
    }
    if (bVar5 == 0x20) {
      iVar3 = *(int *)pbVar7;
      *(byte **)(param_1 + 8) = pbVar6 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
      iVar3 = *(int *)(pbVar6 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 0xc;
      *(longlong *)(param_1 + 0x38) = (longlong)iVar3;
      return;
    }
  }
  return;
}


undefined8 FUN_1800aa570(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  PVOID pvVar2;

  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      pvVar2 = FUN_1800a79f0();
      *(undefined4 *)((longlong)pvVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}


// Library Function - Single Match
//  int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
// __ptr64,int,int * __ptr64)
//
// Library: Visual Studio 2019 Release

int __cdecl
ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  PVOID pvVar2;

  uVar1 = FUN_1800aa570(&param_1->ExceptionRecord,(longlong)param_2,param_4);
  if ((int)uVar1 == 0) {
    pvVar2 = FUN_1800a79f0();
    *(int *)((longlong)pvVar2 + 0x78) = param_3;
  }
  return (int)uVar1;
}


void FUN_1800aa630(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  longlong lVar5;
  longlong lVar6;

  uVar3 = FUN_1800a7010();
  iVar2 = FUN_1800a7c50(param_1,param_2,param_3);
  pvVar4 = FUN_1800a79f0();
  *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
                    // WARNING: Subroutine does not return
      FUN_1800c18c0();
    }
    lVar5 = FUN_1800a7010();
    lVar6 = (longlong)iVar2 * 8;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + lVar6 + lVar5);
    iVar1 = *(int *)(param_3 + 8);
    lVar5 = FUN_1800a7010();
    if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar5 = FUN_1800a7010();
      iVar1 = *(int *)(lVar5 + iVar1 + 4 + lVar6);
      lVar5 = FUN_1800a7010();
      if (lVar5 + iVar1 != 0) {
        FUN_1800a7d10(param_1,param_2,param_3,iVar2);
        iVar1 = *(int *)(param_3 + 8);
        lVar5 = FUN_1800a7010();
        if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
          FUN_1800a7010();
          FUN_1800a7010();
        }
        _CallSettingFrame();
        FUN_1800a7050(uVar3);
      }
    }
  }
  pvVar4 = FUN_1800a79f0();
  if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
    pvVar4 = FUN_1800a79f0();
    *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  FUN_1800a7d10(param_1,param_2,param_3,iVar2);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800aa7e0(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  PVOID pvVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 auStackY_138 [32];
  uint *local_f8;
  byte *pbStack_f0;
  uint local_e8;
  ulonglong *local_e0;
  int local_d8;
  uint *local_d0;
  byte *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  byte *local_90;
  uint *local_88;
  byte *local_80;
  uint *local_78;
  byte *pbStack_70;
  uint local_68 [2];
  byte *local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_138;
  local_e0 = param_2;
  local_d8 = param_4;
  local_b8 = param_1;
  local_a0 = param_1;
  local_98 = param_2;
  uVar6 = FUN_1800a7010();
  local_c0 = uVar6;
  iVar5 = FUN_1800aabc0(param_1,param_2,param_3);
  pvVar7 = FUN_1800a79f0();
  *(int *)((longlong)pvVar7 + 0x30) = *(int *)((longlong)pvVar7 + 0x30) + 1;
  local_60 = (byte *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    local_68[0] = 0;
  }
  else {
    local_60 = (byte *)(param_2[1] + (longlong)*(int *)(param_3 + 8));
    uVar9 = *local_60 & 0xf;
    local_60 = local_60 + -(longlong)(char)(&DAT_1800f3270)[uVar9];
    local_68[0] = *(uint *)(local_60 + -4) >> ((&DAT_1800f3280)[uVar9] & 0x1f);
  }
  local_f8 = local_68;
  local_88 = local_68;
  pbVar10 = local_60 + -1;
  bVar2 = false;
  bVar3 = false;
  iVar14 = 0;
  pbVar12 = local_60;
  pbVar8 = pbVar10;
  if (0 < (int)local_68[0]) {
    do {
      if (iVar14 == iVar5) {
        pbVar10 = pbVar12;
        bVar2 = true;
      }
      if (iVar14 == param_4) {
        pbVar8 = pbVar12;
        bVar3 = true;
      }
      if ((bVar2) && (bVar3)) break;
      pbVar11 = pbVar12 + -(longlong)(char)(&DAT_1800f3270)[*pbVar12 & 0xf];
      uVar9 = *(uint *)(pbVar11 + -4) >> ((&DAT_1800f3280)[*pbVar12 & 0xf] & 0x1f);
      local_58 = CONCAT44(uVar9,uVar9 >> 2) & 0x3ffffffff;
      if ((uVar9 & 3) - 1 < 2) {
        pbVar12 = pbVar11 + (4 - (longlong)(char)(&DAT_1800f3270)[pbVar11[4] & 0xf]);
        uStack_50 = CONCAT44(*(uint *)(pbVar12 + -4) >> ((&DAT_1800f3280)[pbVar11[4] & 0xf] & 0x1f),
                             *(undefined4 *)pbVar11);
      }
      else {
        pbVar12 = pbVar11;
        if ((uVar9 & 3) == 3) {
          pbVar12 = pbVar11 + 4;
          uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)pbVar11);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)local_68[0]);
    param_2 = local_e0;
  }
  pbStack_f0 = pbVar10;
  local_b0 = param_1;
  local_a8 = uVar6;
  local_90 = pbVar8;
  local_80 = pbVar8;
  while( true ) {
    local_d0 = local_68;
    local_c8 = local_60;
    if ((pbVar10 < local_60) || (pbVar10 <= pbVar8)) break;
    FUN_1800aae10((longlong)local_f8,(longlong *)&pbStack_f0);
    puVar4 = local_f8;
    uVar9 = local_f8[5];
    uVar1 = local_f8[6];
    local_e0 = (ulonglong *)CONCAT44(local_e0._4_4_,local_f8[7]);
    local_78 = local_f8;
    pbStack_f0 = pbVar10;
    pbStack_70 = pbVar10;
    FUN_1800aae10((longlong)local_f8,(longlong *)&pbStack_f0);
    pbVar10 = pbVar10 + -(ulonglong)puVar4[4];
    pbStack_f0 = pbVar10;
    iVar5 = FUN_1800aaed0((longlong *)&local_88,param_4,(longlong)&local_78,iVar5,
                          (longlong *)&local_f8);
    local_d0 = (uint *)CONCAT44(local_d0._4_4_,iVar5);
    local_e8 = 0;
    if (uVar9 != 0) {
      local_e8 = uVar1;
    }
    if (local_e8 != 0) {
      *(int *)(param_2 + 9) = iVar5 + 2;
      if (uVar9 - 1 < 2) {
        puVar13 = (undefined8 *)(((ulonglong)local_e0 & 0xffffffff) + *local_b0);
        if (uVar9 == 2) {
          puVar13 = (undefined8 *)*puVar13;
        }
        _CallSettingFrameEncoded(param_2[1] + (longlong)(int)local_e8,*local_b0,puVar13);
      }
      else {
        _CallSettingFrame();
      }
      FUN_1800a7050(local_c0);
    }
  }
  pvVar7 = FUN_1800a79f0();
  if (0 < *(int *)((longlong)pvVar7 + 0x30)) {
    pvVar7 = FUN_1800a79f0();
    *(int *)((longlong)pvVar7 + 0x30) = *(int *)((longlong)pvVar7 + 0x30) + -1;
  }
  return;
}


int FUN_1800aabc0(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  PVOID pvVar2;

  iVar1 = FUN_1800a7dd0(param_3,param_2);
  if ((int)param_2[9] == 0) {
    pvVar2 = FUN_1800a79f0();
    if (*(int *)((longlong)pvVar2 + 0x78) != -2) {
      pvVar2 = FUN_1800a79f0();
      iVar1 = *(int *)((longlong)pvVar2 + 0x78);
      pvVar2 = FUN_1800a79f0();
      *(undefined4 *)((longlong)pvVar2 + 0x78) = 0xfffffffe;
    }
    return iVar1;
  }
  pvVar2 = FUN_1800a79f0();
  if (*(int *)((longlong)pvVar2 + 0x78) != -2) {
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  return (int)param_2[9] + -2;
}


uint FUN_1800aac30(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;

  if (*(int *)(param_2 + 8) == 0) {
    return 0;
  }
  pbVar2 = (byte *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_2 + 8));
  uVar1 = *pbVar2 & 0xf;
  return *(uint *)(pbVar2 + (-4 - (longlong)(char)(&DAT_1800f3270)[uVar1])) >>
         ((&DAT_1800f3280)[uVar1] & 0x1f);
}


undefined1 FUN_1800aac70(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  undefined1 local_res10;

  if (param_2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  uVar8 = 0;
  iVar10 = 0;
  local_res10 = 0;
  if (0 < *param_2) {
    do {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_1800a7030();
      piVar9 = (int *)((longlong)iVar7 + lVar4 + 4);
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_1800a7030();
      iVar7 = *(int *)(lVar4 + iVar7);
      if (0 < iVar7) {
        do {
          iVar1 = *piVar9;
          lVar4 = FUN_1800a7030();
          puVar3 = *(uint **)(param_1 + 0x30);
          iVar2 = param_2[1];
          lVar5 = FUN_1800a7010();
          uVar6 = FUN_1800a96b0((byte *)(lVar5 + (longlong)iVar10 * 0x14 + (longlong)iVar2),
                                (byte *)(iVar1 + lVar4),puVar3);
          if ((int)uVar6 != 0) {
            uVar8 = 1;
            local_res10 = 1;
            goto LAB_1800aad3c;
          }
          iVar7 = iVar7 + -1;
          piVar9 = piVar9 + 1;
        } while (0 < iVar7);
        uVar8 = local_res10;
      }
LAB_1800aad3c:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *param_2);
  }
  return uVar8;
}


ulonglong FUN_1800aad80(int *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined4 extraout_var;
  int iVar4;

  iVar4 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[1];
      lVar3 = FUN_1800a7010();
      if (*(int *)(lVar3 + iVar1 + 4 + (longlong)iVar4 * 0x14) == 0) {
        lVar3 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar3 = FUN_1800a7010();
        iVar1 = *(int *)(lVar3 + (longlong)iVar4 * 0x14 + 4 + (longlong)iVar1);
        lVar3 = FUN_1800a7010();
        lVar3 = lVar3 + iVar1;
      }
      uVar2 = FUN_1800a7900(lVar3 + 8,0x180112e80);
      in_RAX = CONCAT44(extraout_var,uVar2);
      if (uVar2 == 0) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_1);
  }
  return in_RAX & 0xffffffffffffff00;
}


void FUN_1800aae10(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;

  uVar3 = *(byte *)*param_2 & 0xf;
  lVar5 = *param_2 - (longlong)(char)(&DAT_1800f3270)[uVar3];
  uVar3 = *(uint *)(lVar5 + -4) >> ((&DAT_1800f3280)[uVar3] & 0x1f);
  *param_2 = lVar5;
  uVar4 = uVar3 & 3;
  *(uint *)(param_1 + 0x10) = uVar3 >> 2;
  *(uint *)(param_1 + 0x14) = uVar4;
  if (uVar4 - 1 < 2) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar3 = *(byte *)*param_2 & 0xf;
    bVar1 = (&DAT_1800f3280)[uVar3];
    lVar5 = *param_2 - (longlong)(char)(&DAT_1800f3270)[uVar3];
    uVar3 = *(uint *)(lVar5 + -4);
    *param_2 = lVar5;
    *(uint *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
  }
  else if (uVar4 == 3) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}


void FUN_1800aaeb0(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    // WARNING: Could not recover jumptable at 0x0001800aaeb6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}


void FUN_1800aaec0(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3,
                  undefined4 param_4)

{
                    // WARNING: Could not recover jumptable at 0x0001800aaecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}


int FUN_1800aaed0(longlong *param_1,int param_2,longlong param_3,int param_4,longlong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_10;

  uVar1 = *(ulonglong *)(param_3 + 8);
  uVar2 = param_5[1];
  if ((uVar1 < uVar2) || (local_10 = param_1[1], uVar2 < local_10)) {
    return -1;
  }
  if ((longlong)(uVar2 - local_10) < (longlong)(uVar1 - uVar2)) {
    lVar3 = *param_1;
    if (local_10 < uVar2) {
      do {
        FUN_1800aae10(lVar3,(longlong *)&local_10);
        param_2 = param_2 + 1;
      } while (local_10 < (ulonglong)param_5[1]);
    }
  }
  else {
    lVar3 = *param_5;
    param_2 = param_4;
    local_10 = uVar2;
    if (uVar2 < uVar1) {
      while( true ) {
        FUN_1800aae10(lVar3,(longlong *)&local_10);
        param_2 = param_4 + -1;
        if (*(ulonglong *)(param_3 + 8) <= local_10) break;
        param_4 = param_2;
      }
    }
  }
  return param_2;
}


void FUN_1800aafb0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;

  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  FUN_1800aa3e0(param_1);
  uVar10 = 0;
  if (param_2 != 0) {
    do {
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      bVar2 = **(byte **)(param_1 + 8);
      pbVar9 = *(byte **)(param_1 + 8) + 1;
      *(byte *)(param_1 + 0x18) = bVar2;
      *(byte **)(param_1 + 8) = pbVar9;
      if ((bVar2 & 1) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(longlong)(char)(&DAT_1800f3270)[bVar7 & 0xf];
        *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar9 + -4) >> ((&DAT_1800f3280)[bVar7 & 0xf] & 0x1f)
        ;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      if ((bVar2 & 2) != 0) {
        uVar4 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        *(byte **)(param_1 + 8) = pbVar9;
        *(undefined4 *)(param_1 + 0x20) = uVar4;
      }
      if ((bVar2 & 4) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(longlong)(char)(&DAT_1800f3270)[bVar7 & 0xf];
        *(uint *)(param_1 + 0x24) = *(uint *)(pbVar9 + -4) >> ((&DAT_1800f3280)[bVar7 & 0xf] & 0x1f)
        ;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      pbVar1 = pbVar9 + 4;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)pbVar9;
      bVar7 = bVar2 & 0x30;
      *(byte **)(param_1 + 8) = pbVar1;
      if ((bVar2 & 8) == 0) {
        if (bVar7 == 0x10) {
          bVar2 = (&DAT_1800f3280)[*pbVar1 & 0xf];
          uVar6 = *(uint *)(((longlong)pbVar1 - (longlong)(char)(&DAT_1800f3270)[*pbVar1 & 0xf]) +
                           -4);
          *(longlong *)(param_1 + 8) =
               (longlong)pbVar1 - (longlong)(char)(&DAT_1800f3270)[*pbVar1 & 0xf];
          *(ulonglong *)(param_1 + 0x30) =
               (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
        }
        else if (bVar7 == 0x20) {
          cVar3 = (&DAT_1800f3270)[*pbVar1 & 0xf];
          bVar2 = (&DAT_1800f3280)[*pbVar1 & 0xf];
          pbVar9 = pbVar1 + -(longlong)cVar3;
          uVar6 = *(uint *)(pbVar9 + -4);
          *(byte **)(param_1 + 8) = pbVar9;
          *(ulonglong *)(param_1 + 0x30) =
               (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          bVar2 = (&DAT_1800f3280)[*pbVar9 & 0xf];
          uVar6 = *(uint *)(pbVar1 + (-(longlong)cVar3 -
                                     (longlong)(char)(&DAT_1800f3270)[*pbVar9 & 0xf]) + -4);
          *(byte **)(param_1 + 8) =
               pbVar1 + (-(longlong)cVar3 - (longlong)(char)(&DAT_1800f3270)[*pbVar9 & 0xf]);
          uVar8 = (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          goto LAB_1800ab170;
        }
      }
      else if (bVar7 == 0x10) {
        iVar5 = *(int *)pbVar1;
        *(byte **)(param_1 + 8) = pbVar9 + 8;
        *(longlong *)(param_1 + 0x30) = (longlong)iVar5;
      }
      else if (bVar7 == 0x20) {
        iVar5 = *(int *)pbVar1;
        *(byte **)(param_1 + 8) = pbVar9 + 8;
        *(longlong *)(param_1 + 0x30) = (longlong)iVar5;
        uVar8 = (ulonglong)*(int *)(pbVar9 + 8);
        *(byte **)(param_1 + 8) = pbVar9 + 0xc;
LAB_1800ab170:
        *(ulonglong *)(param_1 + 0x38) = uVar8;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2);
  }
  return;
}


void FUN_1800ab1d0(void)

{
  FUN_1800ab1f0();
  return;
}


void FUN_1800ab1f0(void)

{
  return;
}


void FUN_1800ab200(void)

{
  return;
}


// WARNING: Removing unreachable block (ram,0x0001800ab223)
// WARNING: Removing unreachable block (ram,0x0001800ab239)
// WARNING: Removing unreachable block (ram,0x0001800ab23f)
// Library Function - Single Match
//  __except_validate_context_record
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __except_validate_context_record(longlong param_1)

{
  return;
}


undefined4 FUN_1800ab250(void)

{
  BOOL BVar1;
  uint extraout_EAX;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;

  uVar4 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_180115d60 + uVar4 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar4 = (ulonglong)DAT_180115d88;
      uVar2 = 0;
      uVar3 = DAT_180115d88;
      while (uVar3 != 0) {
        uVar3 = (int)uVar4 - 1;
        uVar4 = (ulonglong)uVar3;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180115d60 + uVar4 * 0x28));
        DAT_180115d88 = DAT_180115d88 - 1;
        uVar2 = extraout_EAX;
      }
      return uVar2 & 0xffffff00;
    }
    DAT_180115d88 = DAT_180115d88 + 1;
    uVar2 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}


undefined1 FUN_1800ab2e0(void)

{
  uint uVar1;
  ulonglong uVar2;

  uVar2 = (ulonglong)DAT_180115d88;
  uVar1 = DAT_180115d88;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180115d60 + uVar2 * 0x28));
    DAT_180115d88 = DAT_180115d88 - 1;
  }
  return 1;
}


// Library Function - Single Match
//  _CallSettingFrame
//
// Library: Visual Studio

void _CallSettingFrame(void)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_1800ab1d0();
  (*pcVar1)();
  FUN_1800ab200();
  FUN_1800ab1d0();
  return;
}


void FUN_1800ab3b0(void)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_1800ab1d0();
  (*pcVar1)();
  FUN_1800ab200();
  return;
}


void FUN_1800ab3e0(void)

{
  FUN_1800ab1d0();
  return;
}


// Library Function - Single Match
//  _CallSettingFrameEncoded
//
// Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
// Studio 2019 Release

void _CallSettingFrameEncoded(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_1800ab1d0();
  (*pcVar1)(param_3);
  FUN_1800ab200();
  FUN_1800ab1d0();
  return;
}


// Library Function - Single Match
//  isalnum
//
// Library: Visual Studio 2019 Release

int __cdecl isalnum(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];

  if (DAT_180115f2c == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1801124a0 + (longlong)_C * 2) & 0x107;
    }
  }
  else {
    lVar2 = FUN_1800c1eb8();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,(longlong *)local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 0x107;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,0x107,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}


// Library Function - Single Match
//  isspace
//
// Library: Visual Studio 2019 Release

int __cdecl isspace(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];

  if (DAT_180115f2c == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1801124a0 + (longlong)_C * 2) & 8;
    }
  }
  else {
    lVar2 = FUN_1800c1eb8();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,(longlong *)local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 8;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,8,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}


// Library Function - Single Match
//  public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
// __ptr64
//
// Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
// Studio 2019 Release

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  this[0x18] = (_LocaleUpdate)0x0;
  p_Var1 = this + 8;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    if (DAT_180115f2c != 0) {
      lVar3 = FUN_1800c1eb8();
      *(longlong *)this = lVar3;
      *(longlong *)p_Var1 = *(longlong *)(lVar3 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar3 + 0x88);
      __acrt_update_locale_info(lVar3,(longlong *)p_Var1);
      FUN_1800c20f0(*(longlong *)this,(longlong *)(this + 0x10));
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) == 0) {
        *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
        this[0x18] = (_LocaleUpdate)0x1;
        return this;
      }
      return this;
    }
    uVar4 = PTR_PTR_1801125f8._0_4_;
    uVar5 = PTR_PTR_1801125f8._4_4_;
    uVar6 = PTR_DAT_180112600._0_4_;
    uVar7 = PTR_DAT_180112600._4_4_;
  }
  else {
    uVar4 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)p_Var1 = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x14) = uVar7;
  return this;
}


uint FUN_1800ab654(uint param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  uint uVar3;
  char local_res8;
  char local_res9;
  undefined1 local_resa;
  undefined2 local_res18;
  undefined1 local_res1a;
  longlong local_28;
  longlong *local_20 [2];
  char local_10;

  uVar3 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    if (param_1 < 0x100) {
      uVar3 = (uint)*(byte *)(local_20[0][0x22] + (ulonglong)(param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      local_resa = 0;
      if (((int)local_20[0][1] < 2) ||
         (-1 < *(short *)(*local_20[0] + (ulonglong)((int)param_1 >> 8 & 0xff) * 2))) {
        p_Var2 = FUN_1800c2350();
        iVar1 = 1;
        *(undefined4 *)p_Var2 = 0x2a;
        local_res9 = '\0';
        local_res8 = (char)param_1;
      }
      else {
        iVar1 = 2;
        local_res8 = (char)(param_1 >> 8);
        local_res9 = (char)param_1;
      }
      local_res18 = 0;
      local_res1a = 0;
      iVar1 = __acrt_LCMapStringA((__crt_locale_pointers *)local_20,(ushort *)local_20[0][0x27],
                                  0x100,&local_res8,iVar1,&local_res18,3,
                                  *(UINT *)((longlong)local_20[0] + 0xc),1);
      if (iVar1 != 0) {
        param_1 = (uint)(byte)local_res18;
        if (iVar1 != 1) {
          param_1 = (uint)CONCAT11((byte)local_res18,local_res18._1_1_);
        }
      }
      uVar3 = param_1;
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar3;
}


// Library Function - Single Match
//  tolower
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl tolower(int _C)

{
  if (DAT_180115f2c == 0) {
    if (_C - 0x41U < 0x1a) {
      _C = _C + 0x20;
    }
  }
  else {
    _C = FUN_1800ab654(_C,(__crt_locale_pointers *)0x0);
  }
  return _C;
}


undefined4 FUN_1800ab7c0(char *param_1,longlong param_2,char *param_3,longlong param_4)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;

  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1800ab7fd;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_1800ab7fd;
  if (param_2 != 0) {
    pcVar3 = param_1;
    lVar4 = param_2;
    if ((param_4 == 0) || (param_3 != (char *)0x0)) {
      do {
        if (*pcVar3 == '\0') {
          lVar5 = param_4;
          if (param_4 != -1) goto joined_r0x0001800ab85a;
          lVar5 = (longlong)param_3 - (longlong)pcVar3;
          goto LAB_1800ab840;
        }
        pcVar3 = pcVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *param_1 = '\0';
    }
    else {
      *param_1 = '\0';
    }
  }
LAB_1800ab7fd:
  p_Var2 = FUN_1800c2350();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1800c2ac4();
  return 0x16;
joined_r0x0001800ab85a:
  if (lVar5 == 0) goto LAB_1800ab881;
  cVar1 = *param_3;
  param_3 = param_3 + 1;
  *pcVar3 = cVar1;
  pcVar3 = pcVar3 + 1;
  if (cVar1 == '\0') {
    return 0;
  }
  lVar4 = lVar4 + -1;
  if (lVar4 == 0) goto LAB_1800ab881;
  lVar5 = lVar5 + -1;
  goto joined_r0x0001800ab85a;
LAB_1800ab881:
  if (lVar5 == 0) {
    *pcVar3 = '\0';
  }
  goto LAB_1800ab889;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
LAB_1800ab840:
    cVar1 = pcVar3[lVar5];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') break;
  }
LAB_1800ab889:
  if (lVar4 != 0) {
    return 0;
  }
  if (param_4 == -1) {
    param_1[param_2 + -1] = '\0';
    return 0x50;
  }
  *param_1 = '\0';
  p_Var2 = FUN_1800c2350();
  *(undefined4 *)p_Var2 = 0x22;
  FUN_1800c2ac4();
  return 0x22;
}


// Library Function - Single Match
//  struct _iobuf * __ptr64 __cdecl common_fsopen<wchar_t>(wchar_t const * __ptr64 const,wchar_t
// const * __ptr64 const,int)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  __acrt_ptd *p_Var1;
  _iobuf *p_Var2;
  undefined8 *local_res8;

  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
  }
  else if (*param_1 == L'\0') {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
  }
  else {
    FUN_1800c2b2c(&local_res8);
    if (local_res8 != (undefined8 *)0x0) {
      p_Var2 = (_iobuf *)FUN_1800c2f90((char *)param_1,param_2,param_3,local_res8);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      FUN_1800bdb78((longlong)local_res8);
      return p_Var2;
    }
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x18;
  }
  return (_iobuf *)0x0;
}


void FUN_1800ab9a0(wchar_t *param_1,wchar_t *param_2)

{
  common_fsopen<wchar_t>(param_1,param_2,0x40);
  return;
}


// Library Function - Single Match
//  _wfopen_s
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

errno_t __cdecl _wfopen_s(FILE **_File,wchar_t *_Filename,wchar_t *_Mode)

{
  __acrt_ptd *p_Var1;
  _iobuf *p_Var2;
  errno_t eVar3;

  eVar3 = 0;
  if (_File == (FILE **)0x0) {
    p_Var1 = FUN_1800c2350();
    eVar3 = 0x16;
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
  }
  else {
    p_Var2 = common_fsopen<wchar_t>(_Filename,_Mode,0x80);
    *_File = p_Var2;
    if (p_Var2 == (_iobuf *)0x0) {
      p_Var1 = FUN_1800c2350();
      eVar3 = *(errno_t *)p_Var1;
    }
  }
  return eVar3;
}


// Library Function - Multiple Matches With Same Base Name
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
// __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
// <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
// <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
// <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
// __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
// <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
// <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
// <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
// __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
// <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
// <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
// <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
// __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
// <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
// <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
// <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
//   36 names - too many to list
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 operator()<>(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;

  plVar2 = param_3;
  FUN_1800bdb6c(*param_2);
  uVar1 = FUN_1800adaa4(param_3,param_2,plVar2);
  FUN_1800bdb78(*param_4);
  return uVar1;
}


// Library Function - Multiple Matches With Same Base Name
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
// __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
// <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
// <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
// <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
// __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
// <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
// <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
// <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
// __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
// <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
// <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
// <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
// __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
// <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
// <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
// <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
//   36 names - too many to list
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 operator()<>(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;

  FUN_1800bdb6c(*param_2);
  uVar1 = FUN_1800ad988(param_3);
  FUN_1800bdb78(*param_4);
  return uVar1;
}


bool FUN_1800aba88(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  bool bVar3;

  if (param_2 < 0x8000000000000000) {
    uVar1 = param_2 * 2;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 < 0x401)) ||
       (uVar1 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar3 = true;
    }
    else {
      pvVar2 = _malloc_base(uVar1);
      bVar3 = pvVar2 != (LPVOID)0x0;
      if (bVar3) {
        FUN_1800c3030(*(LPVOID *)(param_1 + 0x408));
        *(LPVOID *)(param_1 + 0x408) = pvVar2;
        *(ulonglong *)(param_1 + 0x400) = uVar1;
      }
      FUN_1800c3030((LPVOID)0x0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar3 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar3;
}


bool FUN_1800abb30(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  bool bVar3;

  if (param_2 < 0x4000000000000000) {
    uVar1 = param_2 * 4;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 < 0x401)) ||
       (uVar1 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar3 = true;
    }
    else {
      pvVar2 = _malloc_base(uVar1);
      bVar3 = pvVar2 != (LPVOID)0x0;
      if (bVar3) {
        FUN_1800c3030(*(LPVOID *)(param_1 + 0x408));
        *(LPVOID *)(param_1 + 0x408) = pvVar2;
        *(ulonglong *)(param_1 + 0x400) = uVar1;
      }
      FUN_1800c3030((LPVOID)0x0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar3 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar3;
}


// Library Function - Single Match
//  bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(unsigned
// __int64,wchar_t,enum __crt_stdio_output::length_modifier)
//
// Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
// Studio 2019 Release

bool __cdecl
__crt_stdio_output::is_wide_character_specifier<wchar_t>
          (__uint64 param_1,wchar_t param_2,length_modifier param_3)

{
  bool bVar1;

  if (param_3 == 2) {
    bVar1 = false;
  }
  else {
    if (((param_3 == 3) || (param_3 == 0xc)) || (param_3 == 0xd)) {
      return true;
    }
    bVar1 = (param_1 & 4) != 0;
    if ((param_2 + L'ﾝ' & 0xffefU) != 0) {
      return (param_1 & 4) == 0;
    }
  }
  return bVar1;
}


uint FUN_1800abc1c(longlong *param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  __acrt_ptd *p_Var8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  char *pcVar12;
  char cVar13;
  uint uVar14;

  pcVar2 = (char *)*param_2;
  uVar4 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
    p_Var8 = FUN_1800c2350();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_1800c2ac4();
LAB_1800abc8d:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_1800abc8d;
  }
  cVar13 = *pcVar2;
  pcVar12 = pcVar2 + 1;
  *param_2 = (longlong)pcVar12;
  bVar10 = param_4 | 2;
  if ((cVar13 == '-') || (bVar10 = param_4, cVar13 == '+')) {
    param_4 = bVar10;
    cVar13 = *pcVar12;
    pcVar12 = pcVar2 + 2;
    *param_2 = (longlong)pcVar12;
  }
  uVar9 = uVar4;
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      iVar6 = cVar13 + -0x30;
LAB_1800abd13:
      if (iVar6 != 0) goto LAB_1800abd61;
      cVar1 = *pcVar12;
      *param_2 = (longlong)(pcVar12 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar12;
        uVar9 = 8;
        if (param_3 != 0) {
          uVar9 = uVar4;
        }
        if ((cVar1 != '\0') && (*pcVar12 != cVar1)) {
          p_Var8 = FUN_1800c2350();
          *(undefined4 *)p_Var8 = 0x16;
          FUN_1800c2ac4();
        }
        goto LAB_1800abd6d;
      }
      cVar13 = pcVar12[1];
      *param_2 = (longlong)(pcVar12 + 2);
      uVar9 = 0x10;
    }
    else {
      if ((byte)(cVar13 + 0x9fU) < 0x1a) {
        iVar6 = cVar13 + -0x57;
        goto LAB_1800abd13;
      }
      if ((byte)(cVar13 + 0xbfU) < 0x1a) {
        iVar6 = cVar13 + -0x37;
        goto LAB_1800abd13;
      }
LAB_1800abd61:
      uVar9 = 10;
    }
    if (param_3 != 0) {
      uVar9 = uVar4;
    }
  }
LAB_1800abd6d:
  pcVar12 = (char *)*param_2;
  uVar14 = 0;
  while( true ) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      uVar11 = (int)cVar13 - 0x30;
    }
    else if ((byte)(cVar13 + 0x9fU) < 0x1a) {
      uVar11 = (int)cVar13 - 0x57;
    }
    else if ((byte)(cVar13 + 0xbfU) < 0x1a) {
      uVar11 = (int)cVar13 - 0x37;
    }
    else {
      uVar11 = 0xffffffff;
    }
    if ((uint)uVar9 <= uVar11) break;
    cVar13 = *pcVar12;
    uVar7 = uVar14 * (uint)uVar9;
    uVar11 = uVar7 + uVar11;
    param_4 = param_4 | (uVar11 < uVar7 || (uint)(0xffffffff / uVar9) < uVar14) << 2 | 8U;
    pcVar12 = pcVar12 + 1;
    *param_2 = (longlong)pcVar12;
    uVar14 = uVar11;
  }
  *param_2 = (longlong)(pcVar12 + -1);
  if ((cVar13 != '\0') && (pcVar12[-1] != cVar13)) {
    p_Var8 = FUN_1800c2350();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_1800c2ac4();
  }
  if ((param_4 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) == 0) {
      if ((param_4 & 2) == 0) goto LAB_1800abea1;
LAB_1800abe9e:
      uVar14 = -uVar14;
      goto LAB_1800abea1;
    }
    if ((param_4 & 2) == 0) {
      if (uVar14 < 0x80000000) goto LAB_1800abea1;
    }
    else if (uVar14 < 0x80000001) goto LAB_1800abe9e;
    bVar10 = 1;
    bVar5 = param_4;
  }
  else {
    bVar10 = param_4;
    bVar5 = 1;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
  if ((bVar5 & bVar10) != 0) {
    plVar3 = (longlong *)param_2[1];
    if ((param_4 & 2) == 0) {
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = *param_2;
      }
      return 0x7fffffff;
    }
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = *param_2;
    }
    return 0x80000000;
  }
  uVar14 = 0xffffffff;
LAB_1800abea1:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar14;
}


uint FUN_1800abed0(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  ushort *puVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  int iVar6;
  __acrt_ptd *p_Var7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  int local_a8;
  int local_a0;
  int local_98;
  int local_90;
  int local_88;
  int local_80;
  int local_78;
  int local_70;
  int local_68;
  int local_60;

  puVar2 = (ushort *)*param_2;
  if (puVar2 == (ushort *)0x0) {
    p_Var7 = FUN_1800c2350();
    *(undefined4 *)p_Var7 = 0x16;
    FUN_1800c2ac4();
LAB_1800abf49:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_1800abf49;
  }
  uVar10 = *puVar2;
  *param_2 = (longlong)(puVar2 + 1);
  uVar11 = param_4 & 0xff | 2;
  if (uVar10 != 0x2d) {
    uVar11 = param_4 & 0xff;
  }
  if ((uVar10 - 0x2b & 0xfffd) == 0) {
    uVar10 = puVar2[1];
    *param_2 = (longlong)(puVar2 + 2);
  }
  local_a8 = 0xae6;
  iVar6 = 0x30;
  local_a0 = 0xb66;
  local_98 = 0xc66;
  local_90 = 0xce6;
  local_88 = 0xd66;
  local_80 = 0xe50;
  local_78 = 0xed0;
  local_70 = 0xf20;
  local_68 = 0x1040;
  local_60 = 0x17e0;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1800ac30d;
  if (uVar10 < 0x30) goto LAB_1800ac25e;
  if (uVar10 < 0x3a) {
LAB_1800ac0a3:
    iVar6 = (uint)uVar10 - iVar6;
LAB_1800ac259:
    if (iVar6 == -1) goto LAB_1800ac25e;
LAB_1800ac284:
    if (iVar6 != 0) goto LAB_1800ac2fe;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar8 = 8;
      if (param_3 != 0) {
        uVar8 = param_3;
      }
      param_3 = uVar8;
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        p_Var7 = FUN_1800c2350();
        *(undefined4 *)p_Var7 = 0x16;
        FUN_1800c2ac4();
      }
      goto LAB_1800ac30d;
    }
    uVar10 = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar8 = 0x10;
  }
  else {
    if (uVar10 < 0xff10) {
      if (0x65f < uVar10) {
        if (uVar10 < 0x66a) {
          iVar6 = uVar10 - 0x660;
          goto LAB_1800ac259;
        }
        if (0x6ef < uVar10) {
          if (uVar10 < 0x6fa) {
            iVar6 = uVar10 - 0x6f0;
            goto LAB_1800ac259;
          }
          if (0x965 < uVar10) {
            if (uVar10 < 0x970) {
              iVar6 = uVar10 - 0x966;
              goto LAB_1800ac259;
            }
            if (0x9e5 < uVar10) {
              if (uVar10 < 0x9f0) {
                iVar6 = uVar10 - 0x9e6;
                goto LAB_1800ac259;
              }
              if (0xa65 < uVar10) {
                if (uVar10 < 0xa70) {
                  iVar6 = uVar10 - 0xa66;
                  goto LAB_1800ac259;
                }
                iVar6 = 0xae6;
                if ((0xae5 < uVar10) &&
                   ((uVar10 < 0xaf0 ||
                    ((iVar6 = 0xb66, 0xb65 < uVar10 &&
                     ((uVar10 < 0xb70 ||
                      ((iVar6 = 0xc66, 0xc65 < uVar10 &&
                       ((uVar10 < 0xc70 ||
                        ((iVar6 = 0xce6, 0xce5 < uVar10 &&
                         ((uVar10 < 0xcf0 ||
                          ((iVar6 = 0xd66, 0xd65 < uVar10 &&
                           ((uVar10 < 0xd70 ||
                            ((iVar6 = 0xe50, 0xe4f < uVar10 &&
                             ((uVar10 < 0xe5a ||
                              ((iVar6 = 0xed0, 0xecf < uVar10 &&
                               ((uVar10 < 0xeda ||
                                ((iVar6 = 0xf20, 0xf1f < uVar10 &&
                                 ((uVar10 < 0xf2a ||
                                  ((iVar6 = 0x1040, 0x103f < uVar10 &&
                                   ((uVar10 < 0x104a ||
                                    ((iVar6 = 0x17e0, 0x17df < uVar10 &&
                                     ((uVar10 < 0x17ea ||
                                      (iVar6 = 0x1810, (ushort)(uVar10 + 0xe7f0) < 10)))))))))))))))
                               ))))))))))))))))))))))))) goto LAB_1800ac0a3;
              }
            }
          }
        }
      }
    }
    else if (uVar10 < 0xff1a) {
      iVar6 = uVar10 - 0xff10;
      goto LAB_1800ac259;
    }
LAB_1800ac25e:
    uVar8 = (uint)uVar10;
    if ((uVar10 - 0x41 < 0x1a) || (uVar10 - 0x61 < 0x1a)) {
      if (uVar10 - 0x61 < 0x1a) {
        uVar8 = uVar10 - 0x20;
      }
      iVar6 = uVar8 - 0x37;
      goto LAB_1800ac284;
    }
LAB_1800ac2fe:
    uVar8 = 10;
  }
  if (param_3 != 0) {
    uVar8 = param_3;
  }
  param_3 = uVar8;
LAB_1800ac30d:
  uVar8 = 0;
  do {
    if (uVar10 < 0x30) goto LAB_1800ac4da;
    if (uVar10 < 0x3a) {
      uVar9 = uVar10 - 0x30;
LAB_1800ac4d5:
      if (uVar9 == 0xffffffff) goto LAB_1800ac4da;
    }
    else {
      if (uVar10 < 0xff10) {
        if (0x65f < uVar10) {
          if (uVar10 < 0x66a) {
            uVar9 = uVar10 - 0x660;
            goto LAB_1800ac4d5;
          }
          if (0x6ef < uVar10) {
            if (uVar10 < 0x6fa) {
              uVar9 = uVar10 - 0x6f0;
              goto LAB_1800ac4d5;
            }
            if (0x965 < uVar10) {
              iVar6 = 0x966;
              if (uVar10 < 0x970) {
LAB_1800ac3a1:
                uVar9 = (uint)uVar10 - iVar6;
                goto LAB_1800ac4d5;
              }
              if (0x9e5 < uVar10) {
                iVar6 = 0x9e6;
                if (uVar10 < 0x9f0) goto LAB_1800ac3a1;
                if (0xa65 < uVar10) {
                  iVar6 = 0xa66;
                  if (uVar10 < 0xa70) goto LAB_1800ac3a1;
                  if (0xae5 < uVar10) {
                    iVar6 = local_a8;
                    if (uVar10 < 0xaf0) goto LAB_1800ac3a1;
                    if (0xb65 < uVar10) {
                      iVar6 = local_a0;
                      if (uVar10 < 0xb70) goto LAB_1800ac3a1;
                      if (0xc65 < uVar10) {
                        iVar6 = local_98;
                        if (uVar10 < 0xc70) goto LAB_1800ac3a1;
                        if (0xce5 < uVar10) {
                          iVar6 = local_90;
                          if (uVar10 < 0xcf0) goto LAB_1800ac3a1;
                          if (0xd65 < uVar10) {
                            iVar6 = local_88;
                            if (uVar10 < 0xd70) goto LAB_1800ac3a1;
                            if (0xe4f < uVar10) {
                              iVar6 = local_80;
                              if (uVar10 < 0xe5a) goto LAB_1800ac3a1;
                              if (0xecf < uVar10) {
                                iVar6 = local_78;
                                if (uVar10 < 0xeda) goto LAB_1800ac3a1;
                                if (0xf1f < uVar10) {
                                  iVar6 = local_70;
                                  if (uVar10 < 0xf2a) goto LAB_1800ac3a1;
                                  if (0x103f < uVar10) {
                                    iVar6 = local_68;
                                    if (uVar10 < 0x104a) goto LAB_1800ac3a1;
                                    if (0x17df < uVar10) {
                                      iVar6 = local_60;
                                      if (uVar10 < 0x17ea) goto LAB_1800ac3a1;
                                      if ((ushort)(uVar10 + 0xe7f0) < 10) {
                                        uVar9 = uVar10 - 0x1810;
                                        goto LAB_1800ac4d5;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (uVar10 < 0xff1a) {
        uVar9 = uVar10 - 0xff10;
        goto LAB_1800ac4d5;
      }
LAB_1800ac4da:
      uVar9 = (uint)uVar10;
      if (((uVar10 < 0x41) || (0x5a < uVar10)) && ((uVar9 < 0x61 || (0x7a < uVar10)))) {
        uVar9 = 0xffffffff;
      }
      else {
        if ((ushort)(uVar10 - 0x61) < 0x1a) {
          uVar9 = uVar9 - 0x20;
        }
        uVar9 = uVar9 - 0x37;
      }
    }
    puVar4 = (ushort *)*param_2;
    if (param_3 <= uVar9) break;
    uVar10 = *puVar4;
    uVar9 = uVar8 * param_3 + uVar9;
    *param_2 = (longlong)(puVar4 + 1);
    uVar11 = uVar11 | (uint)(uVar9 < uVar8 * param_3 ||
                            (uint)(0xffffffff / (ulonglong)param_3) < uVar8) << 2 | 8;
    uVar8 = uVar9;
  } while( true );
  *param_2 = (longlong)(puVar4 + -1);
  if ((uVar10 != 0) && (puVar4[-1] != uVar10)) {
    p_Var7 = FUN_1800c2350();
    *(undefined4 *)p_Var7 = 0x16;
    FUN_1800c2ac4();
  }
  if ((uVar11 & 8) == 0) {
    *param_2 = (longlong)puVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = puVar2;
    return 0;
  }
  if ((uVar11 & 4) == 0) {
    if ((uVar11 & 1) == 0) {
      if ((uVar11 & 2) == 0) goto LAB_1800ac5d7;
LAB_1800ac5f6:
      uVar8 = -uVar8;
      goto LAB_1800ac5d7;
    }
    if ((uVar11 & 2) == 0) {
      if (uVar8 < 0x80000000) goto LAB_1800ac5d7;
    }
    else if (uVar8 < 0x80000001) goto LAB_1800ac5f6;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
  if ((uVar11 & 1) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar11 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 == (longlong *)0x0) {
      return 0x7fffffff;
    }
    *plVar5 = *param_2;
    return 0x7fffffff;
  }
  uVar8 = 0xffffffff;
LAB_1800ac5d7:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar8;
}


ulonglong FUN_1800ac63c(longlong param_1)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;

  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1800ac6ba;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1800ac6ba;
        }
        goto LAB_1800ac68a;
      }
LAB_1800ac78f:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1800ac6ba;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1800ac68a:
    if (iVar9 == 1) goto LAB_1800ac78f;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1800ac6ba:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1800aba88(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1800ad5f0(param_1,uVar7);
  }
  else {
    FUN_1800ad26c(param_1,(uint)uVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}


ulonglong FUN_1800ac840(longlong param_1)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;

  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1800ac8be;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1800ac8be;
        }
        goto LAB_1800ac88e;
      }
LAB_1800ac993:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1800ac8be;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1800ac88e:
    if (iVar9 == 1) goto LAB_1800ac993;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1800ac8be:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1800abb30(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (lVar8 == 8) {
    FUN_1800ad660(param_1,uVar7);
  }
  else {
    FUN_1800ad2dc(param_1,(uint)uVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  psVar5 = (short *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (psVar5 = *(short **)(param_1 + 0x40), *psVar5 != 0x30)))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    **(undefined2 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}


ulonglong FUN_1800aca4c(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;

  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1800acaca;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1800acaca;
        }
        goto LAB_1800aca9a;
      }
LAB_1800acb9f:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1800acaca;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1800aca9a:
    if (iVar9 == 1) goto LAB_1800acb9f;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1800acaca:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1800aba88(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1800ad6e8(param_1,uVar7,param_2);
  }
  else {
    FUN_1800ad360(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}


ulonglong FUN_1800acc50(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;

  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1800accce;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1800accce;
        }
        goto LAB_1800acc9e;
      }
LAB_1800acda3:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1800accce;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1800acc9e:
    if (iVar9 == 1) goto LAB_1800acda3;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1800accce:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1800abb30(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (lVar8 == 8) {
    FUN_1800ad798(param_1,uVar7,param_2);
  }
  else {
    FUN_1800ad40c(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  psVar5 = (short *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (psVar5 = *(short **)(param_1 + 0x40), *psVar5 != 0x30)))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    **(undefined2 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}


ulonglong FUN_1800ace5c(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;

  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1800aceda;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1800aceda;
        }
        goto LAB_1800aceaa;
      }
LAB_1800acfaf:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1800aceda;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1800aceaa:
    if (iVar9 == 1) goto LAB_1800acfaf;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1800aceda:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1800aba88(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1800ad85c(param_1,uVar7,param_2);
  }
  else {
    FUN_1800ad4cc(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}


ulonglong FUN_1800ad060(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;

  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1800ad0de;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1800ad0de;
        }
        goto LAB_1800ad0ae;
      }
LAB_1800ad1b3:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1800ad0de;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1800ad0ae:
    if (iVar9 == 1) goto LAB_1800ad1b3;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1800ad0de:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1800abb30(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (lVar8 == 8) {
    FUN_1800ad8e0(param_1,uVar7,param_2);
  }
  else {
    FUN_1800ad550(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  psVar5 = (short *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (psVar5 = *(short **)(param_1 + 0x40), *psVar5 != 0x30)))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    **(undefined2 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}


void FUN_1800ad26c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;

  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}


void FUN_1800ad2dc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;

  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x100;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar3 = (short *)(lVar2 + uVar1 * 2 + -2);
  *(short **)(param_1 + 0x40) = psVar3;
  psVar4 = psVar3;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *psVar4 = ((ushort)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar4 = *(short **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar3 - (longlong)psVar4 >> 1);
  *(short **)(param_1 + 0x40) = psVar4 + 1;
  return;
}


void FUN_1800ad360(longlong param_1,uint param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;

  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
    param_2 = (uint)((ulonglong)param_2 / 10);
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}


void FUN_1800ad40c(longlong param_1,uint param_2,byte param_3)

{
  short *psVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  short *psVar5;

  lVar4 = *(longlong *)(param_1 + 0x458);
  if (lVar4 == 0) {
    uVar2 = 0x100;
    lVar4 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar1 = (short *)(lVar4 + (uVar2 - 1) * 2);
  *(short **)(param_1 + 0x40) = psVar1;
  psVar5 = psVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    uVar3 = (short)param_2 + (short)((ulonglong)param_2 / 10) * -10 + 0x30;
    param_2 = (uint)((ulonglong)param_2 / 10);
    if (0x39 < uVar3) {
      uVar3 = (ushort)(char)((param_3 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *psVar5 = (short)(char)uVar3;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar5 = *(short **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar1 - (longlong)psVar5 >> 1);
  *(short **)(param_1 + 0x40) = psVar5 + 1;
  return;
}


void FUN_1800ad4cc(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;

  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}


void FUN_1800ad550(longlong param_1,uint param_2,byte param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;

  lVar4 = *(longlong *)(param_1 + 0x458);
  if (lVar4 == 0) {
    uVar2 = 0x100;
    lVar4 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  puVar1 = (ushort *)(lVar4 + (uVar2 - 1) * 2);
  *(ushort **)(param_1 + 0x40) = puVar1;
  puVar5 = puVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    uVar3 = (ushort)param_2;
    param_2 = param_2 >> 4;
    uVar3 = (uVar3 & 0xf) + 0x30;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    if (0x39 < uVar3) {
      uVar3 = (ushort)(byte)((param_3 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    puVar5 = *(ushort **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)puVar1 - (longlong)puVar5 >> 1);
  *(ushort **)(param_1 + 0x40) = puVar5 + 1;
  return;
}


void FUN_1800ad5f0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;

  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}


void FUN_1800ad660(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;

  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x100;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar3 = (short *)(lVar2 + uVar1 * 2 + -2);
  *(short **)(param_1 + 0x40) = psVar3;
  psVar4 = psVar3;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *psVar4 = ((ushort)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar4 = *(short **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar3 - (longlong)psVar4 >> 1);
  *(short **)(param_1 + 0x40) = psVar4 + 1;
  return;
}


void FUN_1800ad6e8(longlong param_1,ulonglong param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;

  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}


void FUN_1800ad798(longlong param_1,ulonglong param_2,byte param_3)

{
  short *psVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  short *psVar5;

  lVar4 = *(longlong *)(param_1 + 0x458);
  if (lVar4 == 0) {
    uVar2 = 0x100;
    lVar4 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar1 = (short *)(lVar4 + (uVar2 - 1) * 2);
  *(short **)(param_1 + 0x40) = psVar1;
  psVar5 = psVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    uVar3 = (short)param_2 + (short)(param_2 / 10) * -10 + 0x30;
    if (0x39 < uVar3) {
      uVar3 = (ushort)(char)((param_3 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *psVar5 = (short)(char)uVar3;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar5 = *(short **)(param_1 + 0x40);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar1 - (longlong)psVar5 >> 1);
  *(short **)(param_1 + 0x40) = psVar5 + 1;
  return;
}


void FUN_1800ad85c(longlong param_1,ulonglong param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;

  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}


void FUN_1800ad8e0(longlong param_1,ulonglong param_2,byte param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;

  lVar4 = *(longlong *)(param_1 + 0x458);
  if (lVar4 == 0) {
    uVar2 = 0x100;
    lVar4 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  puVar1 = (ushort *)(lVar4 + (uVar2 - 1) * 2);
  *(ushort **)(param_1 + 0x40) = puVar1;
  puVar5 = puVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    uVar3 = (ushort)param_2;
    param_2 = param_2 >> 4;
    uVar3 = (uVar3 & 0xf) + 0x30;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    if (0x39 < uVar3) {
      uVar3 = (ushort)(byte)((param_3 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    puVar5 = *(ushort **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)puVar1 - (longlong)puVar5 >> 1);
  *(ushort **)(param_1 + 0x40) = puVar5 + 1;
  return;
}


undefined8 * FUN_1800ad980(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined4 FUN_1800ad988(undefined8 *param_1)

{
  longlong *plVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_4b8 [32];
  ulonglong local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined2 local_460;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_48;
  LPVOID pvStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStack_4b8;
  plVar1 = (longlong *)param_1[1];
  pFVar2 = *(FILE **)*param_1;
  uVar4 = FUN_1800c4988(pFVar2);
  local_480 = *(undefined8 *)param_1[4];
  local_38 = *(undefined8 *)*param_1;
  local_488 = *(undefined8 *)param_1[3];
  local_498 = *(ulonglong *)param_1[2];
  local_490 = param_1[1];
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0;
  local_450 = 0;
  local_30 = 0;
  local_474 = 0;
  local_44c = 0;
  local_48 = 0;
  pvStack_40 = (LPVOID)0x0;
  uVar3 = FUN_1800addb8(&local_498);
  FUN_1800c3030(pvStack_40);
  pvStack_40 = (LPVOID)0x0;
  FUN_1800c4a50((char)uVar4,pFVar2,plVar1);
  return uVar3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined4 FUN_1800adaa4(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_4c8 [32];
  ulonglong local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined1 local_484;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_470;
  undefined2 local_46e;
  undefined4 local_460;
  undefined1 local_45c;
  undefined8 local_58;
  LPVOID pvStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;

  local_38 = DAT_180112300 ^ (ulonglong)auStack_4c8;
  plVar1 = (longlong *)param_1[1];
  pFVar2 = *(FILE **)*param_1;
  uVar4 = FUN_1800c4988(pFVar2);
  local_490 = *(undefined8 *)param_1[4];
  local_48 = *(undefined8 *)*param_1;
  local_498 = *(undefined8 *)param_1[3];
  local_4a8 = *(ulonglong *)param_1[2];
  local_4a0 = param_1[1];
  local_488 = 0;
  local_484 = 0;
  local_480 = 0;
  local_478 = 0;
  local_470 = 0;
  local_46e = 0;
  local_460 = 0;
  local_45c = 0;
  local_58 = 0;
  pvStack_50 = (LPVOID)0x0;
  local_40 = 0;
  uVar3 = FUN_1800ae4ac(&local_4a8,param_2,param_3);
  FUN_1800c3030(pvStack_50);
  pvStack_50 = (LPVOID)0x0;
  FUN_1800c4a50((char)uVar4,pFVar2,plVar1);
  return uVar3;
}


void FUN_1800adbc0(char *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;

  cVar1 = *param_1;
  if (cVar1 != '\0') {
    do {
      if (cVar1 == *(char *)**(undefined8 **)(*param_2 + 0xf8)) break;
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
  }
  if (cVar1 != '\0') {
    do {
      param_1 = param_1 + 1;
      pcVar2 = param_1;
      if (*param_1 == '\0') break;
    } while ((*param_1 + 0xbbU & 0xdf) != 0);
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    pcVar3 = pcVar3 + -2;
    if (*pcVar2 != *(char *)**(undefined8 **)(*param_2 + 0xf8)) {
      pcVar3 = pcVar2;
    }
    lVar4 = (longlong)param_1 - (longlong)pcVar3;
    do {
      cVar1 = pcVar3[lVar4];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}


longlong FUN_1800adc30(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];

  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      lVar2 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_1800c1fa8(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
    if (p_Var1 == (__acrt_ptd *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_1800c18c0();
    }
  }
  return *param_1;
}


undefined1 FUN_1800adc98(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;

  plVar1 = *(longlong **)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 1;
  uVar2 = *(undefined8 *)((longlong)plVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_1800abc1c(plVar1,(longlong *)&local_18,10,1);
  *param_2 = uVar3;
  uVar4 = 0;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (*(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (*(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)((longlong)plVar1 + 0x2c) = uVar2;
  return uVar4;
}


undefined1 FUN_1800add28(longlong param_1,uint *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;

  plVar1 = *(longlong **)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 2;
  uVar2 = *(undefined8 *)((longlong)plVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_1800abed0(plVar1,(longlong *)&local_18,10,CONCAT31((int3)((uint)param_4 >> 8),1));
  *param_2 = uVar3;
  uVar4 = 0;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (*(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (*(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)((longlong)plVar1 + 0x2c) = uVar2;
  return uVar4;
}


undefined4 FUN_1800addb8(ulonglong *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  char *pcVar8;
  ulonglong *puVar9;
  longlong *plVar10;

  plVar10 = (longlong *)param_1[1];
  if ((_iobuf *)param_1[0x8c] == (_iobuf *)0x0) {
    *(undefined1 *)(plVar10 + 6) = 1;
    *(undefined4 *)((longlong)plVar10 + 0x2c) = 0x16;
  }
  else {
    bVar2 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      ((_iobuf *)param_1[0x8c]);
    if (!bVar2) {
      return 0xffffffff;
    }
    pcVar8 = (char *)param_1[2];
    if (pcVar8 != (char *)0x0) {
      iVar4 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar4;
      do {
        if (iVar4 == 2) {
          return (int)param_1[4];
        }
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        cVar3 = *pcVar8;
        while( true ) {
          pcVar8 = pcVar8 + 1;
          param_1[2] = (ulonglong)pcVar8;
          *(char *)((longlong)param_1 + 0x39) = cVar3;
          if ((cVar3 == '\0') || ((int)param_1[4] < 0)) break;
          if ((byte)(cVar3 - 0x20U) < 0x5b) {
            bVar7 = (&DAT_1800f41c1)[(ulonglong)((int)cVar3 - 0x20U & 0x7f) * 2];
          }
          else {
            bVar7 = 0;
          }
          bVar7 = (&DAT_1800f41c0)
                  [(ulonglong)((uint)*(byte *)((longlong)param_1 + 0x24) + (uint)bVar7 * 8 & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar7;
          if (7 < bVar7) {
LAB_1800ae108:
            uVar6 = param_1[1];
            *(undefined1 *)(uVar6 + 0x30) = 1;
            *(undefined4 *)(uVar6 + 0x2c) = 0x16;
            plVar10 = (longlong *)param_1[1];
            goto LAB_1800ae120;
          }
          if (bVar7 == 0) {
            plVar10 = (longlong *)param_1[1];
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
            if ((char)plVar10[5] == '\0') {
              FUN_1800b0fd0(plVar10);
            }
            bVar7 = *(byte *)((longlong)param_1 + 0x39);
            if ((-2 < (char)bVar7) &&
               ((*(ushort *)(*(longlong *)plVar10[3] + (longlong)(char)bVar7 * 2) & 0x8000) != 0)) {
              if ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) == 0) ||
                  (*(longlong *)(param_1[0x8c] + 8) != 0)) &&
                 (uVar6 = FUN_1800c4924(bVar7,(FILE *)param_1[0x8c],param_1[1]), (int)uVar6 == -1))
              {
                *(undefined4 *)(param_1 + 4) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              }
              bVar7 = *(byte *)param_1[2];
              param_1[2] = (ulonglong)((byte *)param_1[2] + 1);
              *(byte *)((longlong)param_1 + 0x39) = bVar7;
              if (bVar7 == 0) {
                uVar6 = param_1[1];
                *(undefined1 *)(uVar6 + 0x30) = 1;
                *(undefined4 *)(uVar6 + 0x2c) = 0x16;
                FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                              (longlong *)param_1[1]);
                goto LAB_1800ae108;
              }
            }
            if ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(param_1[0x8c] + 8) != 0)) &&
               (uVar6 = FUN_1800c4924(bVar7,(FILE *)param_1[0x8c],param_1[1]), (int)uVar6 == -1)) {
              *(undefined4 *)(param_1 + 4) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 4) = (int)param_1[4] + 1;
            }
          }
          else if (bVar7 == 1) {
            param_1[5] = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar7 == 2) {
            if (cVar3 == ' ') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (cVar3 == '#') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (cVar3 == '+') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (cVar3 == '-') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (cVar3 == '0') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else {
            if (bVar7 == 3) {
              if (cVar3 == '*') {
                piVar1 = (int *)param_1[3];
                param_1[3] = (ulonglong)(piVar1 + 2);
                iVar4 = *piVar1;
                *(int *)((longlong)param_1 + 0x2c) = iVar4;
                if (iVar4 < 0) {
                  *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                  *(int *)((longlong)param_1 + 0x2c) = -iVar4;
                }
LAB_1800adf49:
                cVar3 = '\x01';
              }
              else {
                puVar9 = (ulonglong *)((longlong)param_1 + 0x2c);
LAB_1800adef3:
                cVar3 = FUN_1800adc98((longlong)param_1,(uint *)puVar9);
              }
            }
            else {
              if (bVar7 == 4) {
                *(undefined4 *)(param_1 + 6) = 0;
                goto LAB_1800ae0a5;
              }
              if (bVar7 == 5) {
                if (cVar3 == '*') {
                  piVar1 = (int *)param_1[3];
                  param_1[3] = (ulonglong)(piVar1 + 2);
                  iVar4 = *piVar1;
                  *(int *)(param_1 + 6) = iVar4;
                  if (iVar4 < 0) {
                    *(undefined4 *)(param_1 + 6) = 0xffffffff;
                  }
                  goto LAB_1800adf49;
                }
                puVar9 = param_1 + 6;
                goto LAB_1800adef3;
              }
              if (bVar7 == 6) {
                uVar6 = FUN_1800aea30(param_1);
                cVar3 = (char)uVar6;
              }
              else {
                if (bVar7 != 7) {
                  return 0xffffffff;
                }
                uVar5 = FUN_1800af0a0(param_1);
                cVar3 = (char)uVar5;
              }
            }
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1800ae0a5:
          pcVar8 = (char *)param_1[2];
          cVar3 = *pcVar8;
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar4 = (int)param_1[0x8d];
      } while( true );
    }
    uVar6 = param_1[1];
    *(undefined1 *)(uVar6 + 0x30) = 1;
    *(undefined4 *)(uVar6 + 0x2c) = 0x16;
    plVar10 = (longlong *)param_1[1];
  }
LAB_1800ae120:
  FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar10);
  return 0xffffffff;
}


undefined4 FUN_1800ae13c(ulonglong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  char *pcVar7;
  ulonglong *puVar8;
  longlong *plVar9;

  plVar9 = (longlong *)param_1[1];
  if (param_1[0x8c] == 0) {
    *(undefined1 *)(plVar9 + 6) = 1;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x16;
  }
  else {
    pcVar7 = (char *)param_1[2];
    if (pcVar7 != (char *)0x0) {
      iVar3 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar3;
      do {
        if (iVar3 == 2) {
          return (int)param_1[4];
        }
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        cVar2 = *pcVar7;
        while( true ) {
          pcVar7 = pcVar7 + 1;
          param_1[2] = (ulonglong)pcVar7;
          *(char *)((longlong)param_1 + 0x39) = cVar2;
          if ((cVar2 == '\0') || ((int)param_1[4] < 0)) break;
          if ((byte)(cVar2 - 0x20U) < 0x5b) {
            bVar6 = (&DAT_1800f41c1)[(ulonglong)((int)cVar2 - 0x20U & 0x7f) * 2];
          }
          else {
            bVar6 = 0;
          }
          bVar6 = (&DAT_1800f41c0)
                  [(ulonglong)((uint)*(byte *)((longlong)param_1 + 0x24) + (uint)bVar6 * 8 & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar6;
          if (7 < bVar6) {
LAB_1800ae48d:
            uVar5 = param_1[1];
            *(undefined1 *)(uVar5 + 0x30) = 1;
            *(undefined4 *)(uVar5 + 0x2c) = 0x16;
            plVar9 = (longlong *)param_1[1];
            goto LAB_1800ae197;
          }
          if (bVar6 == 0) {
            plVar9 = (longlong *)param_1[1];
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
            if ((char)plVar9[5] == '\0') {
              FUN_1800b0fd0(plVar9);
            }
            cVar2 = *(char *)((longlong)param_1 + 0x39);
            if ((-2 < cVar2) &&
               ((*(ushort *)(*(longlong *)plVar9[3] + (longlong)cVar2 * 2) & 0x8000) != 0)) {
              uVar5 = param_1[0x8c];
              if (*(longlong *)(uVar5 + 0x10) == *(longlong *)(uVar5 + 8)) {
                if (*(char *)(uVar5 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 4) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
                }
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
                *(longlong *)(uVar5 + 0x10) = *(longlong *)(uVar5 + 0x10) + 1;
                **(char **)param_1[0x8c] = cVar2;
                *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
              }
              cVar2 = *(char *)param_1[2];
              param_1[2] = (ulonglong)((char *)param_1[2] + 1);
              *(char *)((longlong)param_1 + 0x39) = cVar2;
              if (cVar2 == '\0') {
                uVar5 = param_1[1];
                *(undefined1 *)(uVar5 + 0x30) = 1;
                *(undefined4 *)(uVar5 + 0x2c) = 0x16;
                FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                              (longlong *)param_1[1]);
                goto LAB_1800ae48d;
              }
            }
            uVar5 = param_1[0x8c];
            if (*(longlong *)(uVar5 + 0x10) == *(longlong *)(uVar5 + 8)) {
              if (*(char *)(uVar5 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 4) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              }
            }
            else {
              *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              *(longlong *)(uVar5 + 0x10) = *(longlong *)(uVar5 + 0x10) + 1;
              **(char **)param_1[0x8c] = cVar2;
              *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
            }
          }
          else if (bVar6 == 1) {
            param_1[5] = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar6 == 2) {
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else {
            if (bVar6 == 3) {
              if (cVar2 == '*') {
                piVar1 = (int *)param_1[3];
                param_1[3] = (ulonglong)(piVar1 + 2);
                iVar3 = *piVar1;
                *(int *)((longlong)param_1 + 0x2c) = iVar3;
                if (iVar3 < 0) {
                  *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                  *(int *)((longlong)param_1 + 0x2c) = -iVar3;
                }
LAB_1800ae2d3:
                cVar2 = '\x01';
              }
              else {
                puVar8 = (ulonglong *)((longlong)param_1 + 0x2c);
LAB_1800ae27d:
                cVar2 = FUN_1800adc98((longlong)param_1,(uint *)puVar8);
              }
            }
            else {
              if (bVar6 == 4) {
                *(undefined4 *)(param_1 + 6) = 0;
                goto LAB_1800ae414;
              }
              if (bVar6 == 5) {
                if (cVar2 == '*') {
                  piVar1 = (int *)param_1[3];
                  param_1[3] = (ulonglong)(piVar1 + 2);
                  iVar3 = *piVar1;
                  *(int *)(param_1 + 6) = iVar3;
                  if (iVar3 < 0) {
                    *(undefined4 *)(param_1 + 6) = 0xffffffff;
                  }
                  goto LAB_1800ae2d3;
                }
                puVar8 = param_1 + 6;
                goto LAB_1800ae27d;
              }
              if (bVar6 == 6) {
                uVar5 = FUN_1800aebb8(param_1);
                cVar2 = (char)uVar5;
              }
              else {
                if (bVar6 != 7) {
                  return 0xffffffff;
                }
                uVar4 = FUN_1800af5d8(param_1);
                cVar2 = (char)uVar4;
              }
            }
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1800ae414:
          pcVar7 = (char *)param_1[2];
          cVar2 = *pcVar7;
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar3 = (int)param_1[0x8d];
      } while( true );
    }
    *(undefined1 *)(plVar9 + 6) = 1;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x16;
    plVar9 = (longlong *)param_1[1];
  }
LAB_1800ae197:
  FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar9);
  return 0xffffffff;
}


undefined4 FUN_1800ae4ac(ulonglong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  WCHAR WVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  WCHAR *pWVar8;
  ulonglong *puVar9;
  longlong *plVar10;

  plVar10 = (longlong *)param_1[1];
  if (param_1[0x8c] == 0) {
    *(undefined1 *)(plVar10 + 6) = 1;
    *(undefined4 *)((longlong)plVar10 + 0x2c) = 0x16;
  }
  else {
    pWVar8 = (WCHAR *)param_1[2];
    if (pWVar8 != (WCHAR *)0x0) {
      iVar4 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar4;
      do {
        if (iVar4 == 2) {
          return (int)param_1[4];
        }
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        WVar3 = *pWVar8;
        while( true ) {
          pWVar8 = pWVar8 + 1;
          param_1[2] = (ulonglong)pWVar8;
          *(WCHAR *)((longlong)param_1 + 0x3a) = WVar3;
          if ((WVar3 == L'\0') || ((int)param_1[4] < 0)) break;
          if ((ushort)(WVar3 + L'￠') < 0x5b) {
            bVar7 = (&DAT_1800f41c1)[(ulonglong)((ushort)WVar3 - 0x20 & 0x7f) * 2];
          }
          else {
            bVar7 = 0;
          }
          bVar7 = (&DAT_1800f41c0)
                  [(ulonglong)((uint)*(byte *)((longlong)param_1 + 0x24) + (uint)bVar7 * 8 & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar7;
          if (7 < bVar7) {
            uVar6 = param_1[1];
            *(undefined1 *)(uVar6 + 0x30) = 1;
            *(undefined4 *)(uVar6 + 0x2c) = 0x16;
            plVar10 = (longlong *)param_1[1];
            goto LAB_1800ae507;
          }
          if (bVar7 == 0) {
            param_3 = (longlong *)param_1[1];
            *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
            if ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(param_1[0x8c] + 8) != 0)) &&
               (WVar3 = FUN_1800c4790(WVar3,(FILE *)param_1[0x8c],param_3), WVar3 == L'\xffff')) {
              *(undefined4 *)(param_1 + 4) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 4) = (int)param_1[4] + 1;
            }
          }
          else if (bVar7 == 1) {
            param_1[5] = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar7 == 2) {
            if (WVar3 == L' ') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (WVar3 == L'#') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (WVar3 == L'+') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (WVar3 == L'-') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (WVar3 == L'0') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else {
            if (bVar7 == 3) {
              if (WVar3 == L'*') {
                piVar1 = (int *)param_1[3];
                param_1[3] = (ulonglong)(piVar1 + 2);
                iVar4 = *piVar1;
                *(int *)((longlong)param_1 + 0x2c) = iVar4;
                if (iVar4 < 0) {
                  *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                  *(int *)((longlong)param_1 + 0x2c) = -iVar4;
                }
LAB_1800ae650:
                cVar2 = '\x01';
              }
              else {
                puVar9 = (ulonglong *)((longlong)param_1 + 0x2c);
LAB_1800ae5f9:
                cVar2 = FUN_1800add28((longlong)param_1,(uint *)puVar9,param_3,(uint)(ushort)WVar3);
              }
            }
            else {
              if (bVar7 == 4) {
                *(undefined4 *)(param_1 + 6) = 0;
                goto LAB_1800ae6fc;
              }
              if (bVar7 == 5) {
                if (WVar3 == L'*') {
                  piVar1 = (int *)param_1[3];
                  param_1[3] = (ulonglong)(piVar1 + 2);
                  iVar4 = *piVar1;
                  *(int *)(param_1 + 6) = iVar4;
                  if (iVar4 < 0) {
                    *(undefined4 *)(param_1 + 6) = 0xffffffff;
                  }
                  goto LAB_1800ae650;
                }
                puVar9 = param_1 + 6;
                goto LAB_1800ae5f9;
              }
              if (bVar7 == 6) {
                uVar6 = FUN_1800aed40(param_1);
                cVar2 = (char)uVar6;
              }
              else {
                if (bVar7 != 7) {
                  return 0xffffffff;
                }
                uVar5 = FUN_1800afa48(param_1);
                cVar2 = (char)uVar5;
              }
            }
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1800ae6fc:
          pWVar8 = (WCHAR *)param_1[2];
          WVar3 = *pWVar8;
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar4 = (int)param_1[0x8d];
      } while( true );
    }
    *(undefined1 *)(plVar10 + 6) = 1;
    *(undefined4 *)((longlong)plVar10 + 0x2c) = 0x16;
    plVar10 = (longlong *)param_1[1];
  }
LAB_1800ae507:
  FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar10);
  return 0xffffffff;
}


undefined4 FUN_1800ae76c(__uint64 *param_1)

{
  ushort uVar1;
  int *piVar2;
  __uint64 _Var3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  ushort *puVar9;
  __uint64 *p_Var10;
  longlong *plVar11;

  plVar11 = (longlong *)param_1[1];
  if (param_1[0x8c] == 0) {
    *(undefined1 *)(plVar11 + 6) = 1;
    *(undefined4 *)((longlong)plVar11 + 0x2c) = 0x16;
  }
  else {
    puVar9 = (ushort *)param_1[2];
    if (puVar9 != (ushort *)0x0) {
      iVar5 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar5;
      do {
        if (iVar5 == 2) {
          return (int)param_1[4];
        }
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        uVar1 = *puVar9;
        while( true ) {
          puVar9 = puVar9 + 1;
          param_1[2] = (__uint64)puVar9;
          *(ushort *)((longlong)param_1 + 0x3a) = uVar1;
          if ((uVar1 == 0) || (iVar5 = (int)param_1[4], iVar5 < 0)) break;
          if ((ushort)(uVar1 - 0x20) < 0x5b) {
            bVar8 = (&DAT_1800f41c1)[(ulonglong)(uVar1 - 0x20 & 0x7f) * 2];
          }
          else {
            bVar8 = 0;
          }
          bVar8 = (&DAT_1800f41c0)
                  [(ulonglong)((uint)*(byte *)((longlong)param_1 + 0x24) + (uint)bVar8 * 8 & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar8;
          if (7 < bVar8) {
            _Var3 = param_1[1];
            *(undefined1 *)(_Var3 + 0x30) = 1;
            *(undefined4 *)(_Var3 + 0x2c) = 0x16;
            plVar11 = (longlong *)param_1[1];
            goto LAB_1800ae7c7;
          }
          if (bVar8 == 0) {
            *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
            _Var3 = param_1[0x8c];
            if (*(longlong *)(_Var3 + 0x10) == *(longlong *)(_Var3 + 8)) {
              if (*(char *)(_Var3 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 4) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 4) = iVar5 + 1;
              }
            }
            else {
              *(int *)(param_1 + 4) = iVar5 + 1;
              *(longlong *)(_Var3 + 0x10) = *(longlong *)(_Var3 + 0x10) + 1;
              **(ushort **)param_1[0x8c] = uVar1;
              *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 2;
            }
          }
          else if (bVar8 == 1) {
            param_1[5] = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar8 == 2) {
            if (uVar1 == 0x20) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (uVar1 == 0x23) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (uVar1 == 0x2b) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (uVar1 == 0x2d) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (uVar1 == 0x30) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else {
            if (bVar8 == 3) {
              if (uVar1 == 0x2a) {
                piVar2 = (int *)param_1[3];
                param_1[3] = (__uint64)(piVar2 + 2);
                iVar5 = *piVar2;
                *(int *)((longlong)param_1 + 0x2c) = iVar5;
                if (iVar5 < 0) {
                  *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                  *(int *)((longlong)param_1 + 0x2c) = -iVar5;
                }
LAB_1800ae914:
                cVar4 = '\x01';
              }
              else {
                p_Var10 = (__uint64 *)((longlong)param_1 + 0x2c);
LAB_1800ae8bd:
                cVar4 = FUN_1800add28((longlong)param_1,(uint *)p_Var10,(ulonglong)uVar1,iVar5);
              }
            }
            else {
              if (bVar8 == 4) {
                *(undefined4 *)(param_1 + 6) = 0;
                goto LAB_1800ae9c3;
              }
              if (bVar8 == 5) {
                if (uVar1 == 0x2a) {
                  piVar2 = (int *)param_1[3];
                  param_1[3] = (__uint64)(piVar2 + 2);
                  iVar5 = *piVar2;
                  *(int *)(param_1 + 6) = iVar5;
                  if (iVar5 < 0) {
                    *(undefined4 *)(param_1 + 6) = 0xffffffff;
                  }
                  goto LAB_1800ae914;
                }
                p_Var10 = param_1 + 6;
                goto LAB_1800ae8bd;
              }
              if (bVar8 == 6) {
                uVar7 = FUN_1800aeef0(param_1);
                cVar4 = (char)uVar7;
              }
              else {
                if (bVar8 != 7) {
                  return 0xffffffff;
                }
                uVar6 = FUN_1800b0044(param_1);
                cVar4 = (char)uVar6;
              }
            }
            if (cVar4 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1800ae9c3:
          puVar9 = (ushort *)param_1[2];
          uVar1 = *puVar9;
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar5 = (int)param_1[0x8d];
      } while( true );
    }
    *(undefined1 *)(plVar11 + 6) = 1;
    *(undefined4 *)((longlong)plVar11 + 0x2c) = 0x16;
    plVar11 = (longlong *)param_1[1];
  }
LAB_1800ae7c7:
  FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar11);
  return 0xffffffff;
}


ulonglong FUN_1800aea30(ulonglong *param_1)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined7 uVar6;
  ulonglong uVar4;
  char *pcVar5;

  cVar1 = *(char *)((longlong)param_1 + 0x39);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)CONCAT71(uVar6,cVar1);
  if (cVar1 == 'F') {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 7;
      uVar4 = FUN_1800af0a0(param_1);
      return uVar4;
    }
  }
  else if (cVar1 == 'N') {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 8;
LAB_1800aea62:
      uVar4 = param_1[1];
      *(undefined1 *)(uVar4 + 0x30) = 1;
      *(undefined4 *)(uVar4 + 0x2c) = 0x16;
      uVar4 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1])
      ;
      return uVar4 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0) goto LAB_1800aea62;
    if (cVar1 == 'I') {
      pcVar2 = (char *)param_1[2];
      cVar1 = *pcVar2;
      pcVar5 = (char *)CONCAT71(uVar6,cVar1);
      if ((cVar1 == '3') && (pcVar2[1] == '2')) {
        pcVar5 = pcVar2 + 2;
        *(undefined4 *)((longlong)param_1 + 0x34) = 10;
        param_1[2] = (ulonglong)pcVar5;
      }
      else if (cVar1 == '6') {
        if (pcVar2[1] == '4') {
          pcVar5 = pcVar2 + 2;
          *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
          param_1[2] = (ulonglong)pcVar5;
        }
      }
      else {
        bVar3 = cVar1 + 0xa8;
        pcVar5 = (char *)CONCAT71(uVar6,bVar3);
        if ((bVar3 < 0x21) && ((0x120821001U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 9;
        }
      }
    }
    else if (cVar1 == 'L') {
      *(undefined4 *)((longlong)param_1 + 0x34) = 8;
    }
    else if (cVar1 == 'T') {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xd;
    }
    else {
      if (cVar1 == 'h') {
        if (*(char *)param_1[2] == 'h') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x1;
        }
        else {
          pcVar5 = (char *)0x2;
        }
      }
      else {
        if (cVar1 == 'j') {
          *(undefined4 *)((longlong)param_1 + 0x34) = 5;
          goto LAB_1800aebb0;
        }
        if (cVar1 != 'l') {
          if (cVar1 == 't') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 7;
          }
          else if (cVar1 == 'w') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
          }
          else if (cVar1 == 'z') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 6;
          }
          goto LAB_1800aebb0;
        }
        if (*(char *)param_1[2] == 'l') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x4;
        }
        else {
          pcVar5 = (char *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x34) = (int)pcVar5;
    }
  }
LAB_1800aebb0:
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}


ulonglong FUN_1800aebb8(ulonglong *param_1)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined7 uVar6;
  ulonglong uVar4;
  char *pcVar5;

  cVar1 = *(char *)((longlong)param_1 + 0x39);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)CONCAT71(uVar6,cVar1);
  if (cVar1 == 'F') {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 7;
      uVar4 = FUN_1800af5d8(param_1);
      return uVar4;
    }
  }
  else if (cVar1 == 'N') {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 8;
LAB_1800aebea:
      uVar4 = param_1[1];
      *(undefined1 *)(uVar4 + 0x30) = 1;
      *(undefined4 *)(uVar4 + 0x2c) = 0x16;
      uVar4 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1])
      ;
      return uVar4 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0) goto LAB_1800aebea;
    if (cVar1 == 'I') {
      pcVar2 = (char *)param_1[2];
      cVar1 = *pcVar2;
      pcVar5 = (char *)CONCAT71(uVar6,cVar1);
      if ((cVar1 == '3') && (pcVar2[1] == '2')) {
        pcVar5 = pcVar2 + 2;
        *(undefined4 *)((longlong)param_1 + 0x34) = 10;
        param_1[2] = (ulonglong)pcVar5;
      }
      else if (cVar1 == '6') {
        if (pcVar2[1] == '4') {
          pcVar5 = pcVar2 + 2;
          *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
          param_1[2] = (ulonglong)pcVar5;
        }
      }
      else {
        bVar3 = cVar1 + 0xa8;
        pcVar5 = (char *)CONCAT71(uVar6,bVar3);
        if ((bVar3 < 0x21) && ((0x120821001U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 9;
        }
      }
    }
    else if (cVar1 == 'L') {
      *(undefined4 *)((longlong)param_1 + 0x34) = 8;
    }
    else if (cVar1 == 'T') {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xd;
    }
    else {
      if (cVar1 == 'h') {
        if (*(char *)param_1[2] == 'h') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x1;
        }
        else {
          pcVar5 = (char *)0x2;
        }
      }
      else {
        if (cVar1 == 'j') {
          *(undefined4 *)((longlong)param_1 + 0x34) = 5;
          goto LAB_1800aed38;
        }
        if (cVar1 != 'l') {
          if (cVar1 == 't') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 7;
          }
          else if (cVar1 == 'w') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
          }
          else if (cVar1 == 'z') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 6;
          }
          goto LAB_1800aed38;
        }
        if (*(char *)param_1[2] == 'l') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x4;
        }
        else {
          pcVar5 = (char *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x34) = (int)pcVar5;
    }
  }
LAB_1800aed38:
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}


ulonglong FUN_1800aed40(ulonglong *param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  ulonglong uVar4;
  short *psVar5;

  uVar1 = *(ushort *)((longlong)param_1 + 0x3a);
  psVar5 = (short *)(ulonglong)uVar1;
  if (uVar1 == 0x46) {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 7;
      uVar4 = FUN_1800afa48(param_1);
      return uVar4;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 8;
LAB_1800aed77:
      uVar4 = param_1[1];
      *(undefined1 *)(uVar4 + 0x30) = 1;
      *(undefined4 *)(uVar4 + 0x2c) = 0x16;
      uVar4 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1])
      ;
      return uVar4 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0) goto LAB_1800aed77;
    if (uVar1 == 0x49) {
      psVar3 = (short *)param_1[2];
      sVar2 = *psVar3;
      if ((sVar2 == 0x33) && (psVar3[1] == 0x32)) {
        psVar5 = psVar3 + 2;
        *(undefined4 *)((longlong)param_1 + 0x34) = 10;
        param_1[2] = (ulonglong)psVar5;
      }
      else if (sVar2 == 0x36) {
        psVar5 = (short *)0x0;
        if (psVar3[1] == 0x34) {
          psVar5 = psVar3 + 2;
          *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
          param_1[2] = (ulonglong)psVar5;
        }
      }
      else {
        psVar5 = (short *)(ulonglong)(ushort)(sVar2 - 0x58U);
        if (((ushort)(sVar2 - 0x58U) < 0x21) &&
           ((0x120821001U >> ((ulonglong)psVar5 & 0x3f) & 1) != 0)) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 9;
        }
      }
    }
    else if (uVar1 == 0x4c) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 8;
    }
    else if (uVar1 == 0x54) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xd;
    }
    else {
      if (uVar1 == 0x68) {
        if (*(short *)param_1[2] == 0x68) {
          param_1[2] = (ulonglong)((short *)param_1[2] + 1);
          psVar5 = (short *)0x1;
        }
        else {
          psVar5 = (short *)0x2;
        }
      }
      else {
        if (uVar1 == 0x6a) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 5;
          goto LAB_1800aeee6;
        }
        if (uVar1 != 0x6c) {
          if (uVar1 == 0x74) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 7;
          }
          else if (uVar1 == 0x77) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
          }
          else if (uVar1 == 0x7a) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 6;
          }
          goto LAB_1800aeee6;
        }
        if (*(short *)param_1[2] == 0x6c) {
          param_1[2] = (ulonglong)((short *)param_1[2] + 1);
          psVar5 = (short *)0x4;
        }
        else {
          psVar5 = (short *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x34) = (int)psVar5;
    }
  }
LAB_1800aeee6:
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}


ulonglong FUN_1800aeef0(__uint64 *param_1)

{
  ushort uVar1;
  short sVar2;
  __uint64 _Var3;
  short *psVar4;
  ulonglong uVar5;
  short *psVar6;

  uVar1 = *(ushort *)((longlong)param_1 + 0x3a);
  psVar6 = (short *)(ulonglong)uVar1;
  if (uVar1 == 0x46) {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 7;
      uVar5 = FUN_1800b0044(param_1);
      return uVar5;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 8;
LAB_1800aef27:
      _Var3 = param_1[1];
      *(undefined1 *)(_Var3 + 0x30) = 1;
      *(undefined4 *)(_Var3 + 0x2c) = 0x16;
      uVar5 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1])
      ;
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0) goto LAB_1800aef27;
    if (uVar1 == 0x49) {
      psVar4 = (short *)param_1[2];
      sVar2 = *psVar4;
      if ((sVar2 == 0x33) && (psVar4[1] == 0x32)) {
        psVar6 = psVar4 + 2;
        *(undefined4 *)((longlong)param_1 + 0x34) = 10;
        param_1[2] = (__uint64)psVar6;
      }
      else if (sVar2 == 0x36) {
        psVar6 = (short *)0x0;
        if (psVar4[1] == 0x34) {
          psVar6 = psVar4 + 2;
          *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
          param_1[2] = (__uint64)psVar6;
        }
      }
      else {
        psVar6 = (short *)(ulonglong)(ushort)(sVar2 - 0x58U);
        if (((ushort)(sVar2 - 0x58U) < 0x21) &&
           ((0x120821001U >> ((ulonglong)psVar6 & 0x3f) & 1) != 0)) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 9;
        }
      }
    }
    else if (uVar1 == 0x4c) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 8;
    }
    else if (uVar1 == 0x54) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xd;
    }
    else {
      if (uVar1 == 0x68) {
        if (*(short *)param_1[2] == 0x68) {
          param_1[2] = (__uint64)((short *)param_1[2] + 1);
          psVar6 = (short *)0x1;
        }
        else {
          psVar6 = (short *)0x2;
        }
      }
      else {
        if (uVar1 == 0x6a) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 5;
          goto LAB_1800af096;
        }
        if (uVar1 != 0x6c) {
          if (uVar1 == 0x74) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 7;
          }
          else if (uVar1 == 0x77) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
          }
          else if (uVar1 == 0x7a) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 6;
          }
          goto LAB_1800af096;
        }
        if (*(short *)param_1[2] == 0x6c) {
          param_1[2] = (__uint64)((short *)param_1[2] + 1);
          psVar6 = (short *)0x4;
        }
        else {
          psVar6 = (short *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x34) = (int)psVar6;
    }
  }
LAB_1800af096:
  return CONCAT71((int7)((ulonglong)psVar6 >> 8),1);
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800af0a0(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  WCHAR WVar4;
  longlong *plVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 extraout_var;
  byte bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  WCHAR *pWVar16;
  int iVar17;
  undefined1 auStackY_88 [32];
  undefined8 local_50;
  undefined8 local_48;
  byte local_40 [8];
  ulonglong local_38;

  local_48 = 0xfffffffffffffffe;
  uVar9 = DAT_180112300 ^ (ulonglong)auStackY_88;
  cVar3 = *(char *)((longlong)param_1 + 0x39);
  bVar12 = 0x78;
  local_38 = uVar9;
  if (cVar3 < 'e') {
    if (cVar3 == 'd') {
LAB_1800af183:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_1800af187:
      uVar9 = FUN_1800aca4c((longlong)param_1,0);
    }
    else if (cVar3 < 'T') {
      if (cVar3 == 'S') {
LAB_1800af1c9:
        uVar9 = FUN_1800b0dd4((longlong)param_1);
      }
      else {
        if (cVar3 != 'A') {
          if (cVar3 == 'C') {
LAB_1800af13d:
            uVar9 = FUN_1800b0b84((longlong)param_1);
            goto LAB_1800af1eb;
          }
          if (((cVar3 != 'E') && (cVar3 != 'F')) && (cVar3 != 'G')) goto LAB_1800af1f2;
        }
LAB_1800af114:
        uVar9 = FUN_1800b06ac(param_1);
      }
    }
    else {
      if (cVar3 == 'X') goto LAB_1800af1e1;
      if (cVar3 != 'Z') {
        if (cVar3 != 'a') {
          if (cVar3 != 'c') goto LAB_1800af1f2;
          goto LAB_1800af13d;
        }
        goto LAB_1800af114;
      }
      uVar9 = FUN_1800b05bc((longlong)param_1);
    }
  }
  else if (cVar3 < 'p') {
    if (cVar3 == 'o') {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      uVar9 = FUN_1800ac63c((longlong)param_1);
    }
    else {
      if (((cVar3 == 'e') || (cVar3 == 'f')) || (cVar3 == 'g')) goto LAB_1800af114;
      if (cVar3 == 'i') goto LAB_1800af183;
      if (cVar3 != 'n') goto LAB_1800af1f2;
      uVar9 = FUN_1800b0d1c((longlong)param_1);
    }
  }
  else {
    if (cVar3 == 'p') {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_1800af1e1:
      bVar11 = 1;
    }
    else {
      if (cVar3 == 's') goto LAB_1800af1c9;
      if (cVar3 == 'u') goto LAB_1800af187;
      if (cVar3 != 'x') goto LAB_1800af1f2;
      bVar11 = 0;
    }
    uVar9 = FUN_1800ace5c((longlong)param_1,bVar11);
  }
LAB_1800af1eb:
  if ((char)uVar9 == '\0') {
LAB_1800af1f2:
    return uVar9 & 0xffffffffffffff00;
  }
  if ((char)param_1[7] != '\0') goto LAB_1800af5ac;
  local_50 = local_50 & 0xffffffffff000000;
  lVar15 = 0;
  uVar8 = (uint)param_1[5];
  if ((uVar8 >> 4 & 1) != 0) {
    if ((uVar8 >> 6 & 1) == 0) {
      if ((param_1[5] & 1) == 0) {
        if ((uVar8 >> 1 & 1) == 0) goto LAB_1800af247;
        local_50 = CONCAT71(local_50._1_7_,0x20);
      }
      else {
        local_50 = CONCAT71(local_50._1_7_,0x2b);
      }
    }
    else {
      local_50 = CONCAT71(local_50._1_7_,0x2d);
    }
    lVar15 = 1;
  }
LAB_1800af247:
  cVar3 = *(char *)((longlong)param_1 + 0x39);
  if (((cVar3 + 0xa8U & 0xdf) != 0) || (bVar6 = true, (uVar8 >> 5 & 1) == 0)) {
    bVar6 = false;
  }
  if ((bVar6) || ((cVar3 + 0xbfU & 0xdf) == 0)) {
    local_40[lVar15 + -0x10] = 0x30;
    if ((cVar3 == 'X') || (cVar3 == 'A')) {
      bVar12 = 0x58;
    }
    local_40[lVar15 + -0xf] = bVar12;
    lVar15 = lVar15 + 2;
  }
  iVar14 = (int)lVar15;
  iVar17 = (*(int *)((longlong)param_1 + 0x2c) - (int)param_1[9]) - iVar14;
  if ((uVar8 & 0xc) == 0) {
    uVar9 = param_1[1];
    iVar13 = 0;
    if (0 < iVar17) {
      while ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(param_1[0x8c] + 8) == 0)) ||
             (uVar10 = FUN_1800c4924(0x20,(FILE *)param_1[0x8c],uVar9), (int)uVar10 != -1))) {
        uVar10 = param_1[4];
        *(int *)(param_1 + 4) = (int)uVar10 + 1;
        if (((int)uVar10 == -2) || (iVar13 = iVar13 + 1, iVar17 <= iVar13)) goto LAB_1800af2fc;
      }
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
    }
  }
LAB_1800af2fc:
  puVar2 = param_1 + 0x8c;
  puVar1 = param_1 + 4;
  if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*puVar2 + 8) != 0)) {
    FUN_1800b1230((longlong *)puVar2,(byte *)&local_50,iVar14,(int *)puVar1,param_1[1]);
  }
  else {
    *(int *)puVar1 = (int)*puVar1 + iVar14;
  }
  if ((((uint)param_1[5] >> 3 & 1) != 0) && (((uint)param_1[5] >> 2 & 1) == 0)) {
    uVar9 = param_1[1];
    iVar14 = 0;
    if (0 < iVar17) {
      while ((((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*puVar2 + 8) == 0)) ||
             (uVar10 = FUN_1800c4924(0x30,(FILE *)*puVar2,uVar9), (int)uVar10 != -1))) {
        uVar10 = *puVar1;
        *(int *)puVar1 = (int)uVar10 + 1;
        if (((int)uVar10 == -2) || (iVar14 = iVar14 + 1, iVar17 <= iVar14)) goto LAB_1800af3a3;
      }
      *(int *)puVar1 = -1;
    }
  }
LAB_1800af3a3:
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') || ((int)param_1[9] < 1)) {
    puVar2 = param_1 + 0x8c;
    puVar1 = param_1 + 4;
    if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) ||
       (uVar9 = *puVar2, *(longlong *)(uVar9 + 8) != 0)) {
      uVar9 = FUN_1800b1230((longlong *)puVar2,(byte *)param_1[8],(int)param_1[9],(int *)puVar1,
                            param_1[1]);
    }
    else {
      *(int *)puVar1 = (int)*puVar1 + (int)param_1[9];
    }
  }
  else {
    plVar5 = (longlong *)param_1[1];
    if ((char)plVar5[5] == '\0') {
      FUN_1800b0fd0(plVar5);
    }
    pWVar16 = (WCHAR *)param_1[8];
    uVar9 = plVar5[3];
    if (*(int *)(uVar9 + 0xc) == 0xfde9) {
      local_50 = 0;
      iVar14 = 0;
      if ((int)param_1[9] != 0) {
        puVar1 = param_1 + 4;
        puVar2 = param_1 + 0x8c;
        do {
          WVar4 = *pWVar16;
          pWVar16 = pWVar16 + 1;
          lVar15 = FUN_1800c44ac(local_40,(uint)(ushort)WVar4,(int *)&local_50,param_1[1]);
          if (lVar15 == -1) {
            *(int *)puVar1 = -1;
            uVar9 = 0xffffffffffffffff;
            break;
          }
          if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) ||
             (uVar9 = *puVar2, *(longlong *)(uVar9 + 8) != 0)) {
            uVar9 = FUN_1800b1230((longlong *)puVar2,local_40,(int)lVar15,(int *)puVar1,param_1[1]);
          }
          else {
            *(int *)puVar1 = (int)*puVar1 + (int)lVar15;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != (int)param_1[9]);
      }
    }
    else {
      iVar14 = 0;
      if ((int)param_1[9] != 0) {
        puVar1 = param_1 + 0x8c;
        do {
          local_50 = local_50 & 0xffffffff00000000;
          WVar4 = *pWVar16;
          pWVar16 = pWVar16 + 1;
          iVar13 = FUN_1800c3ee8((int *)&local_50,(undefined1 (*) [32])local_40,6,WVar4,
                                 (longlong *)param_1[1]);
          uVar9 = CONCAT44(extraout_var,iVar13);
          if ((iVar13 != 0) || ((int)local_50 == 0)) {
            *(undefined4 *)(param_1 + 4) = 0xffffffff;
            break;
          }
          if (((*(uint *)(*puVar1 + 0x14) >> 0xc & 1) == 0) ||
             (uVar9 = *puVar1, *(longlong *)(uVar9 + 8) != 0)) {
            uVar9 = FUN_1800b1230((longlong *)puVar1,local_40,(int)local_50,(int *)(param_1 + 4),
                                  param_1[1]);
          }
          else {
            *(int *)(param_1 + 4) = (int)param_1[4] + (int)local_50;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != (int)param_1[9]);
      }
    }
  }
  if ((-1 < (int)param_1[4]) &&
     (uVar8 = (uint)param_1[5] >> 2, uVar9 = (ulonglong)uVar8, (uVar8 & 1) != 0)) {
    uVar10 = param_1[1];
    iVar14 = 0;
    if (0 < iVar17) {
      while ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(param_1[0x8c] + 8) == 0)) ||
             (uVar9 = FUN_1800c4924(0x20,(FILE *)param_1[0x8c],uVar10), (int)uVar9 != -1))) {
        uVar7 = param_1[4];
        uVar8 = (int)uVar7 + 1;
        uVar9 = (ulonglong)uVar8;
        *(uint *)(param_1 + 4) = uVar8;
        if (((int)uVar7 == -2) || (iVar14 = iVar14 + 1, iVar17 <= iVar14)) goto LAB_1800af5ac;
      }
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
    }
  }
LAB_1800af5ac:
  return CONCAT71((int7)(uVar9 >> 8),1);
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_1800af5d8(ulonglong *param_1)

{
  ulonglong *puVar1;
  string_output_adapter<char> *this;
  char cVar2;
  WCHAR WVar3;
  ulonglong uVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *extraout_RAX;
  undefined4 extraout_var;
  ulonglong *extraout_RAX_00;
  ulonglong *extraout_RAX_01;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  longlong lVar13;
  int iVar14;
  WCHAR *pWVar15;
  undefined1 auStackY_88 [32];
  undefined4 local_48;
  int local_40 [2];
  ulonglong *local_38;

  puVar8 = (ulonglong *)(DAT_180112300 ^ (ulonglong)auStackY_88);
  cVar2 = *(char *)((longlong)param_1 + 0x39);
  uVar12 = 0x78;
  local_38 = puVar8;
  if (cVar2 < 'e') {
    if (cVar2 == 'd') {
LAB_1800af6aa:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_1800af6ae:
      puVar8 = (ulonglong *)FUN_1800aca4c((longlong)param_1,0);
    }
    else if (cVar2 < 'T') {
      if (cVar2 == 'S') {
LAB_1800af6ed:
        puVar8 = (ulonglong *)FUN_1800b0dd4((longlong)param_1);
      }
      else {
        if (cVar2 != 'A') {
          if (cVar2 == 'C') {
LAB_1800af66d:
            puVar8 = (ulonglong *)FUN_1800b0b84((longlong)param_1);
            goto LAB_1800af709;
          }
          if (((cVar2 != 'E') && (cVar2 != 'F')) && (cVar2 != 'G')) goto LAB_1800af70d;
        }
LAB_1800af647:
        puVar8 = (ulonglong *)FUN_1800b06ac(param_1);
      }
    }
    else {
      if (cVar2 == 'X') goto LAB_1800af702;
      if (cVar2 != 'Z') {
        if (cVar2 != 'a') {
          if (cVar2 != 'c') goto LAB_1800af70d;
          goto LAB_1800af66d;
        }
        goto LAB_1800af647;
      }
      puVar8 = (ulonglong *)FUN_1800b05bc((longlong)param_1);
    }
  }
  else if (cVar2 < 'p') {
    if (cVar2 == 'o') {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      puVar8 = (ulonglong *)FUN_1800ac63c((longlong)param_1);
    }
    else {
      if (((cVar2 == 'e') || (cVar2 == 'f')) || (cVar2 == 'g')) goto LAB_1800af647;
      if (cVar2 == 'i') goto LAB_1800af6aa;
      if (cVar2 != 'n') goto LAB_1800af70d;
      puVar8 = (ulonglong *)FUN_1800b0d1c((longlong)param_1);
    }
  }
  else {
    if (cVar2 == 'p') {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_1800af702:
      bVar9 = 1;
    }
    else {
      if (cVar2 == 's') goto LAB_1800af6ed;
      if (cVar2 == 'u') goto LAB_1800af6ae;
      if (cVar2 != 'x') goto LAB_1800af70d;
      bVar9 = 0;
    }
    puVar8 = (ulonglong *)FUN_1800ace5c((longlong)param_1,bVar9);
  }
LAB_1800af709:
  if ((char)puVar8 == '\0') {
LAB_1800af70d:
    return (ulonglong)puVar8 & 0xffffffffffffff00;
  }
  if ((char)param_1[7] != '\0') goto LAB_1800afa1e;
  local_48 = (uint)local_48._3_1_ << 0x18;
  lVar13 = 0;
  uVar7 = (uint)param_1[5];
  if ((uVar7 >> 4 & 1) != 0) {
    if ((uVar7 >> 6 & 1) == 0) {
      if ((param_1[5] & 1) == 0) {
        if ((uVar7 >> 1 & 1) == 0) goto LAB_1800af763;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVar13 = 1;
  }
LAB_1800af763:
  cVar2 = *(char *)((longlong)param_1 + 0x39);
  if (((cVar2 + 0xa8U & 0xdf) == 0) && ((uVar7 >> 5 & 1) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((bVar6) || ((cVar2 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)local_40 + lVar13 + -8) = 0x30;
    if ((cVar2 == 'X') || (cVar2 == 'A')) {
      uVar12 = 0x58;
    }
    *(undefined1 *)((longlong)local_40 + lVar13 + -7) = uVar12;
    lVar13 = lVar13 + 2;
  }
  iVar11 = (*(int *)((longlong)param_1 + 0x2c) - (int)lVar13) - (int)param_1[9];
  if (((uVar7 & 0xc) == 0) && (iVar14 = 0, 0 < iVar11)) {
    iVar10 = (int)param_1[4];
    do {
      uVar4 = param_1[0x8c];
      if (*(longlong *)(uVar4 + 0x10) == *(longlong *)(uVar4 + 8)) {
        if (*(char *)(uVar4 + 0x18) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *(int *)(param_1 + 4) = iVar10;
      }
      else {
        *(int *)(param_1 + 4) = iVar10 + 1;
        *(longlong *)(uVar4 + 0x10) = *(longlong *)(uVar4 + 0x10) + 1;
        **(undefined1 **)param_1[0x8c] = 0x20;
        *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
      }
      iVar10 = (int)param_1[4];
    } while ((iVar10 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar11));
  }
  this = (string_output_adapter<char> *)(param_1 + 0x8c);
  puVar1 = param_1 + 4;
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_48,(int)lVar13,(int *)puVar1,
             (__crt_deferred_errno_cache *)param_1[1]);
  if ((((uint)param_1[5] >> 3 & 1) != 0) &&
     ((((uint)param_1[5] >> 2 & 1) == 0 && (iVar14 = 0, 0 < iVar11)))) {
    iVar10 = (int)*puVar1;
    do {
      lVar13 = *(longlong *)this;
      if (*(longlong *)(lVar13 + 0x10) == *(longlong *)(lVar13 + 8)) {
        if (*(char *)(lVar13 + 0x18) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *(int *)puVar1 = iVar10;
      }
      else {
        *(int *)puVar1 = iVar10 + 1;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 1;
      }
      iVar10 = (int)*puVar1;
    } while ((iVar10 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar11));
  }
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') || ((int)param_1[9] < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this,(char *)param_1[8],(int)param_1[9],(int *)puVar1,
               (__crt_deferred_errno_cache *)param_1[1]);
    puVar8 = extraout_RAX_01;
  }
  else {
    plVar5 = (longlong *)param_1[1];
    if ((char)plVar5[5] == '\0') {
      FUN_1800b0fd0(plVar5);
    }
    pWVar15 = (WCHAR *)param_1[8];
    puVar8 = (ulonglong *)plVar5[3];
    iVar14 = 0;
    if (*(int *)((longlong)puVar8 + 0xc) == 0xfde9) {
      local_40[0] = 0;
      local_40[1] = 0;
      if ((int)param_1[9] != 0) {
        do {
          WVar3 = *pWVar15;
          pWVar15 = pWVar15 + 1;
          puVar8 = (ulonglong *)
                   FUN_1800c44ac((byte *)&local_48,(uint)(ushort)WVar3,local_40,param_1[1]);
          if (puVar8 == (ulonglong *)0xffffffffffffffff) goto LAB_1800af92e;
          __crt_stdio_output::string_output_adapter<char>::write_string
                    (this,(char *)&local_48,(int)puVar8,(int *)puVar1,
                     (__crt_deferred_errno_cache *)param_1[1]);
          iVar14 = iVar14 + 1;
          puVar8 = extraout_RAX;
        } while (iVar14 != (int)param_1[9]);
      }
    }
    else if ((int)param_1[9] != 0) {
      do {
        local_48 = 0;
        WVar3 = *pWVar15;
        pWVar15 = pWVar15 + 1;
        iVar10 = FUN_1800c3ee8(&local_48,(undefined1 (*) [32])local_40,6,WVar3,
                               (longlong *)param_1[1]);
        puVar8 = (ulonglong *)CONCAT44(extraout_var,iVar10);
        if ((iVar10 != 0) || (local_48 == 0)) goto LAB_1800af92e;
        __crt_stdio_output::string_output_adapter<char>::write_string
                  (this,(char *)local_40,local_48,(int *)puVar1,
                   (__crt_deferred_errno_cache *)param_1[1]);
        iVar14 = iVar14 + 1;
        puVar8 = extraout_RAX_00;
      } while (iVar14 != (int)param_1[9]);
    }
  }
  goto LAB_1800af9ac;
LAB_1800af92e:
  *(int *)puVar1 = -1;
LAB_1800af9ac:
  iVar14 = (int)param_1[4];
  if ((-1 < iVar14) &&
     (uVar7 = (uint)param_1[5] >> 2, puVar8 = (ulonglong *)(ulonglong)uVar7, (uVar7 & 1) != 0)) {
    puVar1 = param_1 + 4;
    iVar10 = 0;
    if (0 < iVar11) {
      do {
        uVar4 = param_1[0x8c];
        if (*(longlong *)(uVar4 + 0x10) == *(longlong *)(uVar4 + 8)) {
          if (*(char *)(uVar4 + 0x18) == '\0') {
            iVar14 = -1;
          }
          else {
            iVar14 = iVar14 + 1;
          }
          *(int *)puVar1 = iVar14;
          puVar8 = puVar1;
        }
        else {
          *(int *)puVar1 = iVar14 + 1;
          *(longlong *)(uVar4 + 0x10) = *(longlong *)(uVar4 + 0x10) + 1;
          **(undefined1 **)param_1[0x8c] = 0x20;
          puVar8 = (ulonglong *)param_1[0x8c];
          *puVar8 = *puVar8 + 1;
        }
        iVar14 = (int)*puVar1;
      } while ((iVar14 != -1) && (iVar10 = iVar10 + 1, iVar10 < iVar11));
    }
  }
LAB_1800afa1e:
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_1800afa48(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  short sVar3;
  longlong *plVar4;
  bool bVar5;
  ushort uVar6;
  WCHAR WVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined4 extraout_var_03;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  byte bVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  byte *pbVar17;
  undefined1 auStackY_88 [32];
  uint local_50 [2];
  ulonglong local_48 [2];
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;

  local_48[1] = 0xfffffffffffffffe;
  uVar9 = DAT_180112300 ^ (ulonglong)auStackY_88;
  uVar6 = *(ushort *)((longlong)param_1 + 0x3a);
  uVar12 = 0x78;
  local_30 = uVar9;
  if (uVar6 < 0x65) {
    if (uVar6 == 100) {
LAB_1800afb33:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_1800afb37:
      uVar9 = FUN_1800acc50((longlong)param_1,0);
    }
    else if (uVar6 < 0x54) {
      if (uVar6 == 0x53) {
LAB_1800afb79:
        uVar9 = FUN_1800b0e70(param_1);
      }
      else {
        if (uVar6 != 0x41) {
          if (uVar6 == 0x43) {
LAB_1800afaed:
            uVar9 = FUN_1800b0c58(param_1);
            goto LAB_1800afb9b;
          }
          if (((uVar6 != 0x45) && (uVar6 != 0x46)) && (uVar6 != 0x47)) goto LAB_1800afba2;
        }
LAB_1800afac4:
        uVar9 = FUN_1800b0908(param_1);
      }
    }
    else {
      if (uVar6 == 0x58) goto LAB_1800afb91;
      if (uVar6 != 0x5a) {
        if (uVar6 != 0x61) {
          if (uVar6 != 99) goto LAB_1800afba2;
          goto LAB_1800afaed;
        }
        goto LAB_1800afac4;
      }
      uVar9 = FUN_1800b0638(param_1);
    }
  }
  else if (uVar6 < 0x70) {
    if (uVar6 == 0x6f) {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      uVar9 = FUN_1800ac840((longlong)param_1);
    }
    else {
      if (((uVar6 == 0x65) || (uVar6 == 0x66)) || (uVar6 == 0x67)) goto LAB_1800afac4;
      if (uVar6 == 0x69) goto LAB_1800afb33;
      if (uVar6 != 0x6e) goto LAB_1800afba2;
      uVar9 = FUN_1800b0d1c((longlong)param_1);
    }
  }
  else {
    if (uVar6 == 0x70) {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_1800afb91:
      bVar11 = 1;
    }
    else {
      if (uVar6 == 0x73) goto LAB_1800afb79;
      if (uVar6 == 0x75) goto LAB_1800afb37;
      if (uVar6 != 0x78) goto LAB_1800afba2;
      bVar11 = 0;
    }
    uVar9 = FUN_1800ad060((longlong)param_1,bVar11);
  }
LAB_1800afb9b:
  if ((char)uVar9 == '\0') {
LAB_1800afba2:
    return uVar9 & 0xffffffffffffff00;
  }
  if ((char)param_1[7] != '\0') goto LAB_1800b0018;
  local_38 = 0;
  local_34 = 0;
  lVar15 = 0;
  uVar8 = (uint)param_1[5];
  if ((uVar8 >> 4 & 1) != 0) {
    if ((uVar8 >> 6 & 1) == 0) {
      if ((param_1[5] & 1) != 0) {
        uVar6 = 0x2b;
        goto LAB_1800afbde;
      }
      if ((uVar8 >> 1 & 1) == 0) goto LAB_1800afc03;
      local_38 = 0x20;
    }
    else {
      uVar6 = 0x2d;
LAB_1800afbde:
      local_38 = (uint)uVar6;
    }
    lVar15 = 1;
  }
LAB_1800afc03:
  sVar3 = *(short *)((longlong)param_1 + 0x3a);
  if (((sVar3 - 0x58U & 0xffdf) != 0) || (bVar5 = true, (uVar8 >> 5 & 1) == 0)) {
    bVar5 = false;
  }
  if ((bVar5) || ((sVar3 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)local_48 + lVar15 * 2 + 0x10) = 0x30;
    if ((sVar3 == 0x58) || (sVar3 == 0x41)) {
      uVar12 = 0x58;
    }
    *(undefined2 *)((longlong)local_48 + lVar15 * 2 + 0x12) = uVar12;
    lVar15 = lVar15 + 2;
  }
  iVar14 = (int)lVar15;
  iVar16 = (*(int *)((longlong)param_1 + 0x2c) - (int)param_1[9]) - iVar14;
  if ((uVar8 & 0xc) == 0) {
    plVar4 = (longlong *)param_1[1];
    iVar13 = 0;
    if (0 < iVar16) {
      while ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(param_1[0x8c] + 8) == 0)) ||
             (WVar7 = FUN_1800c4790(L' ',(FILE *)param_1[0x8c],plVar4), WVar7 != L'\xffff'))) {
        uVar9 = param_1[4];
        *(int *)(param_1 + 4) = (int)uVar9 + 1;
        if (((int)uVar9 == -2) || (iVar13 = iVar13 + 1, iVar16 <= iVar13)) goto LAB_1800afce0;
      }
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
    }
  }
LAB_1800afce0:
  puVar2 = param_1 + 0x8c;
  puVar1 = param_1 + 4;
  if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*puVar2 + 8) != 0)) {
    FUN_1800b1300((longlong *)puVar2,(WCHAR *)&local_38,iVar14,(int *)puVar1,(longlong *)param_1[1])
    ;
  }
  else {
    *(int *)puVar1 = (int)*puVar1 + iVar14;
  }
  if ((((uint)param_1[5] >> 3 & 1) != 0) && (((uint)param_1[5] >> 2 & 1) == 0)) {
    plVar4 = (longlong *)param_1[1];
    iVar14 = 0;
    if (0 < iVar16) {
      while ((((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*puVar2 + 8) == 0)) ||
             (WVar7 = FUN_1800c4790(L'0',(FILE *)*puVar2,plVar4), WVar7 != L'\xffff'))) {
        uVar9 = *puVar1;
        *(int *)puVar1 = (int)uVar9 + 1;
        if (((int)uVar9 == -2) || (iVar14 = iVar14 + 1, iVar16 <= iVar14)) goto LAB_1800afd91;
      }
      *(int *)puVar1 = -1;
    }
  }
LAB_1800afd91:
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') && (0 < (int)param_1[9])) {
    plVar4 = (longlong *)param_1[1];
    if ((char)plVar4[5] == '\0') {
      FUN_1800b0fd0(plVar4);
    }
    uVar9 = plVar4[3];
    if (*(int *)(uVar9 + 0xc) == 0xfde9) {
      uVar9 = param_1[8];
      local_50[0] = 0;
      local_50[1] = 0;
      iVar14 = 0;
      local_48[0] = uVar9;
      if ((int)param_1[9] != 0) {
        do {
          local_38 = 0;
          uVar10 = FUN_1800c4598((ushort *)&local_38,local_48,2,local_50,param_1[1]);
          uVar9 = uVar10;
          if (uVar10 == 0xffffffffffffffff) goto LAB_1800afebb;
          if (((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) == 0) ||
             (uVar9 = param_1[0x8c], *(longlong *)(uVar9 + 8) != 0)) {
            WVar7 = FUN_1800c4790((WCHAR)local_38,(FILE *)param_1[0x8c],(longlong *)param_1[1]);
            uVar9 = CONCAT62(extraout_var,WVar7);
            if (WVar7 != L'\xffff') goto LAB_1800afe4c;
            *(undefined4 *)(param_1 + 4) = 0xffffffff;
          }
          else {
LAB_1800afe4c:
            *(int *)(param_1 + 4) = (int)param_1[4] + 1;
          }
          if (uVar10 == 2) {
            if (((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) == 0) ||
               (uVar9 = param_1[0x8c], *(longlong *)(uVar9 + 8) != 0)) {
              WVar7 = FUN_1800c4790(local_38._2_2_,(FILE *)param_1[0x8c],(longlong *)param_1[1]);
              uVar9 = CONCAT62(extraout_var_00,WVar7);
              if (WVar7 != L'\xffff') goto LAB_1800afea0;
              *(undefined4 *)(param_1 + 4) = 0xffffffff;
            }
            else {
LAB_1800afea0:
              *(int *)(param_1 + 4) = (int)param_1[4] + 1;
            }
            iVar14 = iVar14 + 1;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != (int)param_1[9]);
      }
    }
    else {
      plVar4 = (longlong *)param_1[1];
      if ((char)plVar4[5] == '\0') {
        uVar9 = FUN_1800b0fd0(plVar4);
      }
      pbVar17 = (byte *)param_1[8];
      iVar14 = 0;
      if ((int)param_1[9] != 0) {
        do {
          local_38 = local_38 & 0xffff0000;
          iVar13 = FUN_1800c4098((LPWSTR)&local_38,pbVar17,(longlong)*(int *)(plVar4[3] + 8),
                                 (longlong *)param_1[1]);
          uVar9 = CONCAT44(extraout_var_03,iVar13);
          if (iVar13 < 1) goto LAB_1800afebb;
          if (((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) == 0) ||
             (uVar9 = param_1[0x8c], *(longlong *)(uVar9 + 8) != 0)) {
            WVar7 = FUN_1800c4790((WCHAR)local_38,(FILE *)param_1[0x8c],(longlong *)param_1[1]);
            uVar9 = CONCAT62(extraout_var_01,WVar7);
            if (WVar7 != L'\xffff') goto LAB_1800aff49;
            *(undefined4 *)(param_1 + 4) = 0xffffffff;
          }
          else {
LAB_1800aff49:
            *(int *)(param_1 + 4) = (int)param_1[4] + 1;
          }
          pbVar17 = pbVar17 + iVar13;
          iVar14 = iVar14 + 1;
        } while (iVar14 != (int)param_1[9]);
      }
    }
  }
  else {
    puVar2 = param_1 + 0x8c;
    puVar1 = param_1 + 4;
    if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) ||
       (uVar9 = *puVar2, *(longlong *)(uVar9 + 8) != 0)) {
      uVar9 = FUN_1800b1300((longlong *)puVar2,(WCHAR *)param_1[8],(int)param_1[9],(int *)puVar1,
                            (longlong *)param_1[1]);
    }
    else {
      *(int *)puVar1 = (int)*puVar1 + (int)param_1[9];
    }
  }
  goto LAB_1800affa3;
LAB_1800afebb:
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
LAB_1800affa3:
  if ((-1 < (int)param_1[4]) &&
     (uVar8 = (uint)param_1[5] >> 2, uVar9 = (ulonglong)uVar8, (uVar8 & 1) != 0)) {
    plVar4 = (longlong *)param_1[1];
    iVar14 = 0;
    if (0 < iVar16) {
      do {
        if (((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) == 0) ||
           (*(longlong *)(param_1[0x8c] + 8) != 0)) {
          WVar7 = FUN_1800c4790(L' ',(FILE *)param_1[0x8c],plVar4);
          uVar9 = CONCAT62(extraout_var_02,WVar7);
          if (WVar7 == L'\xffff') {
            *(undefined4 *)(param_1 + 4) = 0xffffffff;
            break;
          }
        }
        uVar10 = param_1[4];
        uVar8 = (int)uVar10 + 1;
        uVar9 = (ulonglong)uVar8;
        *(uint *)(param_1 + 4) = uVar8;
        if (((int)uVar10 == -2) || (iVar14 = iVar14 + 1, iVar16 <= iVar14)) break;
      } while( true );
    }
  }
LAB_1800b0018:
  return CONCAT71((int7)(uVar9 >> 8),1);
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_1800b0044(__uint64 *param_1)

{
  __uint64 *p_Var1;
  string_output_adapter<wchar_t> *this;
  ushort uVar2;
  short sVar3;
  __uint64 _Var4;
  longlong *plVar5;
  bool bVar6;
  undefined2 uVar7;
  uint uVar8;
  __uint64 *p_Var9;
  __uint64 *p_Var10;
  undefined4 extraout_var;
  __uint64 *extraout_RAX;
  byte bVar11;
  int iVar12;
  undefined2 uVar13;
  longlong lVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 auStackY_88 [32];
  undefined4 local_58;
  __uint64 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  __uint64 *local_38;

  local_48 = 0xfffffffffffffffe;
  p_Var9 = (__uint64 *)(DAT_180112300 ^ (ulonglong)auStackY_88);
  uVar2 = *(ushort *)((longlong)param_1 + 0x3a);
  uVar13 = 0x78;
  local_38 = p_Var9;
  if (uVar2 < 0x65) {
    if (uVar2 == 100) {
LAB_1800b0125:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_1800b0129:
      p_Var9 = (__uint64 *)FUN_1800acc50((longlong)param_1,0);
    }
    else if (uVar2 < 0x54) {
      if (uVar2 == 0x53) {
LAB_1800b0169:
        p_Var9 = (__uint64 *)FUN_1800b0e70(param_1);
      }
      else {
        if (uVar2 != 0x41) {
          if (uVar2 == 0x43) {
LAB_1800b00e8:
            p_Var9 = (__uint64 *)FUN_1800b0c58(param_1);
            goto LAB_1800b0186;
          }
          if (((uVar2 != 0x45) && (uVar2 != 0x46)) && (uVar2 != 0x47)) goto LAB_1800b018d;
        }
LAB_1800b00c3:
        p_Var9 = (__uint64 *)FUN_1800b0908(param_1);
      }
    }
    else {
      if (uVar2 == 0x58) goto LAB_1800b017e;
      if (uVar2 != 0x5a) {
        if (uVar2 != 0x61) {
          if (uVar2 != 99) goto LAB_1800b018d;
          goto LAB_1800b00e8;
        }
        goto LAB_1800b00c3;
      }
      p_Var9 = (__uint64 *)FUN_1800b0638(param_1);
    }
  }
  else if (uVar2 < 0x70) {
    if (uVar2 == 0x6f) {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      p_Var9 = (__uint64 *)FUN_1800ac840((longlong)param_1);
    }
    else {
      if (((uVar2 == 0x65) || (uVar2 == 0x66)) || (uVar2 == 0x67)) goto LAB_1800b00c3;
      if (uVar2 == 0x69) goto LAB_1800b0125;
      if (uVar2 != 0x6e) goto LAB_1800b018d;
      p_Var9 = (__uint64 *)FUN_1800b0d1c((longlong)param_1);
    }
  }
  else {
    if (uVar2 == 0x70) {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_1800b017e:
      bVar11 = 1;
    }
    else {
      if (uVar2 == 0x73) goto LAB_1800b0169;
      if (uVar2 == 0x75) goto LAB_1800b0129;
      if (uVar2 != 0x78) goto LAB_1800b018d;
      bVar11 = 0;
    }
    p_Var9 = (__uint64 *)FUN_1800ad060((longlong)param_1,bVar11);
  }
LAB_1800b0186:
  if ((char)p_Var9 == '\0') {
LAB_1800b018d:
    return (ulonglong)p_Var9 & 0xffffffffffffff00;
  }
  if ((char)param_1[7] != '\0') goto LAB_1800b058c;
  local_40 = (ulonglong)local_40._6_2_ << 0x30;
  lVar14 = 0;
  uVar8 = (uint)param_1[5];
  if ((uVar8 >> 4 & 1) != 0) {
    if ((uVar8 >> 6 & 1) == 0) {
      if ((param_1[5] & 1) != 0) {
        uVar7 = 0x2b;
        goto LAB_1800b01cb;
      }
      if ((uVar8 >> 1 & 1) == 0) goto LAB_1800b01ef;
      local_40 = CONCAT62(local_40._2_6_,0x20);
    }
    else {
      uVar7 = 0x2d;
LAB_1800b01cb:
      local_40 = CONCAT62(local_40._2_6_,uVar7);
    }
    lVar14 = 1;
  }
LAB_1800b01ef:
  sVar3 = *(short *)((longlong)param_1 + 0x3a);
  if (((sVar3 - 0x58U & 0xffdf) != 0) || (bVar6 = true, (uVar8 >> 5 & 1) == 0)) {
    bVar6 = false;
  }
  if ((bVar6) || ((sVar3 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_40 + lVar14 * 2) = 0x30;
    if ((sVar3 == 0x58) || (sVar3 == 0x41)) {
      uVar13 = 0x58;
    }
    *(undefined2 *)((longlong)&local_40 + (lVar14 + 1) * 2) = uVar13;
    lVar14 = lVar14 + 2;
  }
  iVar17 = (*(int *)((longlong)param_1 + 0x2c) - (int)lVar14) - (int)param_1[9];
  if (((uVar8 & 0xc) == 0) && (iVar15 = 0, 0 < iVar17)) {
    iVar12 = (int)param_1[4];
    do {
      _Var4 = param_1[0x8c];
      if (*(longlong *)(_Var4 + 0x10) == *(longlong *)(_Var4 + 8)) {
        if (*(char *)(_Var4 + 0x18) == '\0') {
          iVar12 = -1;
        }
        else {
          iVar12 = iVar12 + 1;
        }
        *(int *)(param_1 + 4) = iVar12;
      }
      else {
        *(int *)(param_1 + 4) = iVar12 + 1;
        *(longlong *)(_Var4 + 0x10) = *(longlong *)(_Var4 + 0x10) + 1;
        **(undefined2 **)param_1[0x8c] = 0x20;
        *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 2;
      }
      iVar12 = (int)param_1[4];
    } while ((iVar12 != -1) && (iVar15 = iVar15 + 1, iVar15 < iVar17));
  }
  this = (string_output_adapter<wchar_t> *)(param_1 + 0x8c);
  p_Var1 = param_1 + 4;
  __crt_stdio_output::string_output_adapter<wchar_t>::write_string
            (this,(wchar_t *)&local_40,(int)lVar14,(int *)p_Var1,
             (__crt_deferred_errno_cache *)param_1[1]);
  if ((((uint)param_1[5] >> 3 & 1) != 0) &&
     ((((uint)param_1[5] >> 2 & 1) == 0 && (iVar15 = 0, 0 < iVar17)))) {
    iVar12 = (int)*p_Var1;
    do {
      lVar14 = *(longlong *)this;
      if (*(longlong *)(lVar14 + 0x10) == *(longlong *)(lVar14 + 8)) {
        if (*(char *)(lVar14 + 0x18) == '\0') {
          iVar12 = -1;
        }
        else {
          iVar12 = iVar12 + 1;
        }
        *(int *)p_Var1 = iVar12;
      }
      else {
        *(int *)p_Var1 = iVar12 + 1;
        *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 2;
      }
      iVar12 = (int)*p_Var1;
    } while ((iVar12 != -1) && (iVar15 = iVar15 + 1, iVar15 < iVar17));
  }
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') && (0 < (int)param_1[9])) {
    plVar5 = (longlong *)param_1[1];
    if ((char)plVar5[5] == '\0') {
      FUN_1800b0fd0(plVar5);
    }
    p_Var9 = (__uint64 *)plVar5[3];
    if (*(int *)((longlong)p_Var9 + 0xc) == 0xfde9) {
      p_Var9 = (__uint64 *)param_1[8];
      local_40 = 0;
      iVar15 = 0;
      local_50 = p_Var9;
      if ((int)param_1[9] != 0) {
        do {
          local_58 = 0;
          p_Var10 = (__uint64 *)
                    FUN_1800c4598((ushort *)&local_58,&local_50,2,(uint *)&local_40,param_1[1]);
          p_Var9 = p_Var10;
          if (p_Var10 == (__uint64 *)0xffffffffffffffff) goto LAB_1800b04ed;
          lVar14 = *(longlong *)this;
          p_Var9 = *(__uint64 **)(lVar14 + 8);
          if (*(__uint64 **)(lVar14 + 0x10) == p_Var9) {
            if (*(char *)(lVar14 + 0x18) == '\0') {
              *(int *)p_Var1 = -1;
            }
            else {
              *(int *)p_Var1 = (int)*p_Var1 + 1;
            }
          }
          else {
            *(int *)p_Var1 = (int)*p_Var1 + 1;
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 1;
            *(WCHAR *)**(undefined8 **)this = (WCHAR)local_58;
            p_Var9 = *(__uint64 **)this;
            *p_Var9 = *p_Var9 + 2;
          }
          if (p_Var10 == (__uint64 *)0x2) {
            lVar14 = *(longlong *)this;
            p_Var9 = *(__uint64 **)(lVar14 + 8);
            if (*(__uint64 **)(lVar14 + 0x10) == p_Var9) {
              if (*(char *)(lVar14 + 0x18) == '\0') {
                *(int *)p_Var1 = -1;
              }
              else {
                *(int *)p_Var1 = (int)*p_Var1 + 1;
              }
            }
            else {
              *(int *)p_Var1 = (int)*p_Var1 + 1;
              *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 1;
              *(undefined2 *)**(undefined8 **)this = local_58._2_2_;
              p_Var9 = *(__uint64 **)this;
              *p_Var9 = *p_Var9 + 2;
            }
            iVar15 = iVar15 + 1;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != (int)param_1[9]);
      }
    }
    else {
      plVar5 = (longlong *)param_1[1];
      if ((char)plVar5[5] == '\0') {
        p_Var9 = (__uint64 *)FUN_1800b0fd0(plVar5);
      }
      pbVar16 = (byte *)param_1[8];
      iVar15 = 0;
      if ((int)param_1[9] != 0) {
        do {
          local_58 = local_58 & 0xffff0000;
          iVar12 = FUN_1800c4098((LPWSTR)&local_58,pbVar16,(longlong)*(int *)(plVar5[3] + 8),
                                 (longlong *)param_1[1]);
          p_Var9 = (__uint64 *)CONCAT44(extraout_var,iVar12);
          if (iVar12 < 1) goto LAB_1800b04ed;
          lVar14 = *(longlong *)this;
          p_Var9 = *(__uint64 **)(lVar14 + 8);
          if (*(__uint64 **)(lVar14 + 0x10) == p_Var9) {
            if (*(char *)(lVar14 + 0x18) == '\0') {
              *(int *)p_Var1 = -1;
            }
            else {
              *(int *)p_Var1 = (int)*p_Var1 + 1;
            }
          }
          else {
            *(int *)p_Var1 = (int)*p_Var1 + 1;
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 1;
            *(WCHAR *)**(undefined8 **)this = (WCHAR)local_58;
            p_Var9 = *(__uint64 **)this;
            *p_Var9 = *p_Var9 + 2;
          }
          pbVar16 = pbVar16 + iVar12;
          iVar15 = iVar15 + 1;
        } while (iVar15 != (int)param_1[9]);
      }
    }
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              (this,(wchar_t *)param_1[8],(int)param_1[9],(int *)p_Var1,
               (__crt_deferred_errno_cache *)param_1[1]);
    p_Var9 = extraout_RAX;
  }
  goto LAB_1800b050f;
LAB_1800b04ed:
  *(int *)p_Var1 = -1;
LAB_1800b050f:
  iVar15 = (int)param_1[4];
  if ((-1 < iVar15) &&
     (uVar8 = (uint)param_1[5] >> 2, p_Var9 = (__uint64 *)(ulonglong)uVar8, (uVar8 & 1) != 0)) {
    p_Var1 = param_1 + 4;
    iVar12 = 0;
    if (0 < iVar17) {
      do {
        _Var4 = param_1[0x8c];
        if (*(longlong *)(_Var4 + 0x10) == *(longlong *)(_Var4 + 8)) {
          if (*(char *)(_Var4 + 0x18) == '\0') {
            iVar15 = -1;
          }
          else {
            iVar15 = iVar15 + 1;
          }
          *(int *)p_Var1 = iVar15;
          p_Var9 = p_Var1;
        }
        else {
          *(int *)p_Var1 = iVar15 + 1;
          *(longlong *)(_Var4 + 0x10) = *(longlong *)(_Var4 + 0x10) + 1;
          **(undefined2 **)param_1[0x8c] = 0x20;
          p_Var9 = (__uint64 *)param_1[0x8c];
          *p_Var9 = *p_Var9 + 2;
        }
        iVar15 = (int)*p_Var1;
      } while ((iVar15 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar17));
    }
  }
LAB_1800b058c:
  return CONCAT71((int7)((ulonglong)p_Var9 >> 8),1);
}


undefined8 FUN_1800b05bc(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  bool bVar6;

  puVar3 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar3 + 1;
  puVar4 = (ushort *)*puVar3;
  if ((puVar4 == (ushort *)0x0) || (*(longlong *)(puVar4 + 4) == 0)) {
    uVar5 = 6;
    *(undefined **)(param_1 + 0x40) = &DAT_1800e0e98;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 2) {
LAB_1800b0606:
      bVar6 = false;
    }
    else if ((iVar2 == 3) || (iVar2 == 0xc)) {
      bVar6 = true;
    }
    else {
      if (*(int *)(param_1 + 0x34) == 0xd) goto LAB_1800b0606;
      bVar6 = (*(char *)(param_1 + 0x39) + 0x9dU & 0xef) != 0;
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(puVar4 + 4);
    uVar1 = *puVar4;
    uVar5 = (ulonglong)uVar1;
    if (bVar6) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      uVar5 = (ulonglong)(uVar1 >> 1);
      goto LAB_1800b0632;
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
LAB_1800b0632:
  *(int *)(param_1 + 0x48) = (int)uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}


undefined8 FUN_1800b0638(__uint64 *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  bool bVar4;
  ulonglong uVar5;

  puVar2 = (undefined8 *)param_1[3];
  param_1[3] = (__uint64)(puVar2 + 1);
  puVar3 = (ushort *)*puVar2;
  if ((puVar3 == (ushort *)0x0) || (*(__uint64 *)(puVar3 + 4) == 0)) {
    uVar5 = 6;
    param_1[8] = (__uint64)&DAT_1800e0e98;
  }
  else {
    param_1[8] = *(__uint64 *)(puVar3 + 4);
    uVar1 = *puVar3;
    uVar5 = (ulonglong)uVar1;
    bVar4 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                      (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                       *(length_modifier *)((longlong)param_1 + 0x34));
    if (bVar4) {
      *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
      uVar5 = (ulonglong)(uVar1 >> 1);
      goto LAB_1800b069b;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
LAB_1800b069b:
  *(int *)(param_1 + 9) = (int)uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}


undefined8 FUN_1800b06ac(ulonglong *param_1)

{
  double *pdVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 (*pauVar10) [16];
  byte *pbVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  double local_res8;

  *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
  iVar6 = (int)param_1[6];
  if (iVar6 < 0) {
    iVar6 = (-(uint)((*(char *)((longlong)param_1 + 0x39) + 0xbfU & 0xdf) != 0) & 0xfffffff9) + 0xd;
    *(int *)(param_1 + 6) = iVar6;
  }
  else if ((iVar6 == 0) &&
          ((*(char *)((longlong)param_1 + 0x39) == 'g' ||
           (*(char *)((longlong)param_1 + 0x39) == 'G')))) {
    *(undefined4 *)(param_1 + 6) = 1;
    iVar6 = 1;
  }
  bVar3 = FUN_1800aba88((longlong)(param_1 + 10),(longlong)(iVar6 + 0x15d),param_1[1]);
  uVar16 = 0x200;
  if (bVar3) {
    uVar14 = (uint)param_1[6];
  }
  else {
    if (param_1[0x8b] == 0) {
      iVar6 = 0x200;
    }
    else {
      iVar6 = (int)(param_1[0x8a] >> 1);
    }
    uVar14 = iVar6 - 0x15d;
    *(uint *)(param_1 + 6) = uVar14;
  }
  puVar7 = (ulonglong *)param_1[0x8b];
  if ((ulonglong *)param_1[0x8b] == (ulonglong *)0x0) {
    puVar7 = param_1 + 10;
  }
  param_1[8] = (ulonglong)puVar7;
  pdVar1 = (double *)param_1[3];
  param_1[3] = (ulonglong)(pdVar1 + 1);
  pauVar10 = (undefined1 (*) [16])param_1[0x8b];
  local_res8 = *pdVar1;
  if (pauVar10 == (undefined1 (*) [16])0x0) {
    puVar7 = param_1 + 0x4a;
    pauVar10 = (undefined1 (*) [16])(param_1 + 10);
    uVar8 = 0x200;
  }
  else {
    puVar7 = (ulonglong *)(*pauVar10 + (param_1[0x8a] >> 1));
    uVar8 = param_1[0x8a] >> 1;
    uVar16 = param_1[0x8a] >> 1;
  }
  FUN_1800c3c00(&local_res8,pauVar10,uVar16,(char *)puVar7,uVar8,
                (int)*(char *)((longlong)param_1 + 0x39),uVar14,*param_1,1,(longlong *)param_1[1]);
  uVar14 = (uint)param_1[5] >> 5;
  uVar16 = (ulonglong)uVar14;
  if (((uVar14 & 1) != 0) && ((int)param_1[6] == 0)) {
    plVar2 = (longlong *)param_1[1];
    if ((char)plVar2[5] == '\0') {
      FUN_1800b0fd0(plVar2);
    }
    pbVar15 = (byte *)param_1[8];
    plVar2 = (longlong *)plVar2[3];
    uVar8 = (ulonglong)*pbVar15;
    if (*(char *)(uVar8 + plVar2[0x22]) != 'e') {
      do {
        pbVar15 = pbVar15 + 1;
        uVar8 = (ulonglong)*pbVar15;
      } while ((*(byte *)(*plVar2 + uVar8 * 2) & 4) != 0);
    }
    bVar3 = *(char *)(uVar8 + plVar2[0x22]) == 'x';
    if (bVar3) {
      uVar8 = (ulonglong)pbVar15[2];
    }
    pbVar11 = pbVar15 + 2;
    if (!bVar3) {
      pbVar11 = pbVar15;
    }
    bVar4 = **(byte **)plVar2[0x1f];
    uVar16 = CONCAT71((int7)((ulonglong)plVar2[0x1f] >> 8),bVar4);
    *pbVar11 = bVar4;
    do {
      pbVar11 = pbVar11 + 1;
      bVar4 = *pbVar11;
      uVar16 = CONCAT71((int7)(uVar16 >> 8),bVar4);
      bVar13 = (byte)uVar8;
      *pbVar11 = bVar13;
      uVar8 = (ulonglong)bVar4;
    } while (bVar13 != 0);
  }
  bVar4 = *(char *)((longlong)param_1 + 0x39) + 0xb9;
  uVar16 = CONCAT71((int7)(uVar16 >> 8),bVar4);
  if (((bVar4 & 0xdf) == 0) &&
     (uVar14 = (uint)param_1[5] >> 5, uVar16 = (ulonglong)uVar14, (uVar14 & 1) == 0)) {
    plVar2 = (longlong *)param_1[1];
    if ((char)plVar2[5] == '\0') {
      FUN_1800b0fd0(plVar2);
    }
    uVar16 = FUN_1800adbc0((char *)param_1[8],plVar2 + 3);
  }
  pcVar9 = (char *)param_1[8];
  cVar5 = *pcVar9;
  if (cVar5 == '-') {
    *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x40;
    pcVar9 = pcVar9 + 1;
    param_1[8] = (ulonglong)pcVar9;
    cVar5 = *pcVar9;
  }
  if (((byte)(cVar5 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((ulonglong)(byte)(cVar5 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = (uint)param_1[5] & 0xfffffff7;
    *(undefined1 *)((longlong)param_1 + 0x39) = 0x73;
  }
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (pcVar9[lVar12] != '\0');
  *(int *)(param_1 + 9) = (int)lVar12;
  return CONCAT71((int7)(uVar16 >> 8),1);
}


undefined8 FUN_1800b0908(ulonglong *param_1)

{
  byte bVar1;
  double *pdVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 (*pauVar11) [16];
  byte *pbVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  double local_res8;

  *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
  iVar7 = (int)param_1[6];
  if (iVar7 < 0) {
    iVar7 = (-(uint)((*(short *)((longlong)param_1 + 0x3a) - 0x41U & 0xffdf) != 0) & 0xfffffff9) +
            0xd;
    *(int *)(param_1 + 6) = iVar7;
  }
  else if ((iVar7 == 0) &&
          ((*(short *)((longlong)param_1 + 0x3a) == 0x67 ||
           (*(short *)((longlong)param_1 + 0x3a) == 0x47)))) {
    *(undefined4 *)(param_1 + 6) = 1;
    iVar7 = 1;
  }
  bVar4 = FUN_1800aba88((longlong)(param_1 + 10),(longlong)(iVar7 + 0x15d),param_1[1]);
  uVar17 = 0x200;
  if (bVar4) {
    uVar15 = (uint)param_1[6];
  }
  else {
    if (param_1[0x8b] == 0) {
      iVar7 = 0x200;
    }
    else {
      iVar7 = (int)(param_1[0x8a] >> 1);
    }
    uVar15 = iVar7 - 0x15d;
    *(uint *)(param_1 + 6) = uVar15;
  }
  puVar8 = (ulonglong *)param_1[0x8b];
  if ((ulonglong *)param_1[0x8b] == (ulonglong *)0x0) {
    puVar8 = param_1 + 10;
  }
  param_1[8] = (ulonglong)puVar8;
  pdVar2 = (double *)param_1[3];
  param_1[3] = (ulonglong)(pdVar2 + 1);
  pauVar11 = (undefined1 (*) [16])param_1[0x8b];
  local_res8 = *pdVar2;
  if (pauVar11 == (undefined1 (*) [16])0x0) {
    puVar8 = param_1 + 0x4a;
    pauVar11 = (undefined1 (*) [16])(param_1 + 10);
    uVar9 = 0x200;
  }
  else {
    puVar8 = (ulonglong *)(*pauVar11 + (param_1[0x8a] >> 1));
    uVar9 = param_1[0x8a] >> 1;
    uVar17 = param_1[0x8a] >> 1;
  }
  FUN_1800c3c00(&local_res8,pauVar11,uVar17,(char *)puVar8,uVar9,
                (int)*(char *)((longlong)param_1 + 0x3a),uVar15,*param_1,1,(longlong *)param_1[1]);
  if ((((uint)param_1[5] >> 5 & 1) != 0) && ((int)param_1[6] == 0)) {
    plVar3 = (longlong *)param_1[1];
    if ((char)plVar3[5] == '\0') {
      FUN_1800b0fd0(plVar3);
    }
    pbVar16 = (byte *)param_1[8];
    plVar3 = (longlong *)plVar3[3];
    uVar17 = (ulonglong)*pbVar16;
    if (*(char *)(uVar17 + plVar3[0x22]) != 'e') {
      do {
        pbVar16 = pbVar16 + 1;
        uVar17 = (ulonglong)*pbVar16;
      } while ((*(byte *)(*plVar3 + uVar17 * 2) & 4) != 0);
    }
    bVar4 = *(char *)(uVar17 + plVar3[0x22]) == 'x';
    if (bVar4) {
      uVar17 = (ulonglong)pbVar16[2];
    }
    pbVar12 = pbVar16 + 2;
    if (!bVar4) {
      pbVar12 = pbVar16;
    }
    *pbVar12 = **(byte **)plVar3[0x1f];
    do {
      pbVar12 = pbVar12 + 1;
      bVar1 = *pbVar12;
      bVar14 = (byte)uVar17;
      *pbVar12 = bVar14;
      uVar17 = (ulonglong)bVar1;
    } while (bVar14 != 0);
  }
  uVar6 = *(short *)((longlong)param_1 + 0x3a) - 0x47;
  uVar17 = (ulonglong)uVar6;
  if (((uVar6 & 0xffdf) == 0) &&
     (uVar15 = (uint)param_1[5] >> 5, uVar17 = (ulonglong)uVar15, (uVar15 & 1) == 0)) {
    plVar3 = (longlong *)param_1[1];
    if ((char)plVar3[5] == '\0') {
      FUN_1800b0fd0(plVar3);
    }
    uVar17 = FUN_1800adbc0((char *)param_1[8],plVar3 + 3);
  }
  pcVar10 = (char *)param_1[8];
  cVar5 = *pcVar10;
  if (cVar5 == '-') {
    *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x40;
    pcVar10 = pcVar10 + 1;
    param_1[8] = (ulonglong)pcVar10;
    cVar5 = *pcVar10;
  }
  if (((byte)(cVar5 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((ulonglong)(byte)(cVar5 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = (uint)param_1[5] & 0xfffffff7;
    *(undefined2 *)((longlong)param_1 + 0x3a) = 0x73;
  }
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (pcVar10[lVar13] != '\0');
  *(int *)(param_1 + 9) = (int)lVar13;
  return CONCAT71((int7)(uVar17 >> 8),1);
}


undefined8 FUN_1800b0b84(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  WCHAR *pWVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [32];
  undefined1 *puVar9;
  ulonglong uVar10;

  iVar5 = *(int *)(param_1 + 0x34);
  if ((iVar5 == 2) ||
     (((iVar5 != 3 && (iVar5 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    puVar4 = *(undefined1 **)(param_1 + 0x18);
    puVar1 = puVar4 + 8;
    puVar9 = *(undefined1 **)(param_1 + 0x458);
    if (*(undefined1 **)(param_1 + 0x458) == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)(param_1 + 0x50);
    }
    *(undefined1 **)(param_1 + 0x18) = puVar1;
    uVar2 = *puVar4;
    uVar6 = CONCAT71((int7)((ulonglong)puVar1 >> 8),uVar2);
    *puVar9 = uVar2;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
    pWVar3 = *(WCHAR **)(param_1 + 0x18);
    *(WCHAR **)(param_1 + 0x18) = pWVar3 + 4;
    pauVar8 = *(undefined1 (**) [32])(param_1 + 0x458);
    if (pauVar8 == (undefined1 (*) [32])0x0) {
      pauVar8 = (undefined1 (*) [32])(param_1 + 0x50);
      uVar10 = 0x200;
    }
    else {
      uVar10 = *(ulonglong *)(param_1 + 0x450) >> 1;
    }
    iVar5 = FUN_1800c3ee8((int *)(param_1 + 0x48),pauVar8,uVar10,*pWVar3,*(longlong **)(param_1 + 8)
                         );
    uVar6 = CONCAT44(extraout_var,iVar5);
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x458) == 0) {
    lVar7 = param_1 + 0x50;
  }
  *(longlong *)(param_1 + 0x40) = lVar7;
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}


undefined8 FUN_1800b0c58(__uint64 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined4 extraout_var_00;
  LPWSTR pWVar6;
  __uint64 *p_Var7;
  byte local_res8;
  undefined1 local_res9;

  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  puVar2 = (undefined2 *)param_1[3];
  param_1[3] = (__uint64)(puVar2 + 4);
  uVar1 = *puVar2;
  local_res9 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                         (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                          *(length_modifier *)((longlong)param_1 + 0x34));
  uVar5 = CONCAT71(extraout_var,local_res9);
  if ((bool)local_res9) {
    p_Var7 = (__uint64 *)param_1[0x8b];
    if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
      p_Var7 = param_1 + 10;
    }
    *(undefined2 *)p_Var7 = uVar1;
  }
  else {
    local_res8 = (byte)uVar1;
    plVar3 = (longlong *)param_1[1];
    if ((char)plVar3[5] == '\0') {
      FUN_1800b0fd0(plVar3);
    }
    pWVar6 = (LPWSTR)param_1[0x8b];
    if ((LPWSTR)param_1[0x8b] == (LPWSTR)0x0) {
      pWVar6 = (LPWSTR)(param_1 + 10);
    }
    iVar4 = FUN_1800c4098(pWVar6,&local_res8,(longlong)*(int *)(plVar3[3] + 8),plVar3);
    uVar5 = CONCAT44(extraout_var_00,iVar4);
    if (iVar4 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  *(undefined4 *)(param_1 + 9) = 1;
  p_Var7 = (__uint64 *)param_1[0x8b];
  if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
    p_Var7 = param_1 + 10;
  }
  param_1[8] = (__uint64)p_Var7;
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}


ulonglong FUN_1800b0d1c(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined7 extraout_var;
  ulonglong uVar5;
  int iVar6;

  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar1 + 1;
  puVar2 = (ulonglong *)*puVar1;
  bVar4 = FUN_1800c4778();
  if ((int)CONCAT71(extraout_var,bVar4) == 0) goto LAB_1800b0d41;
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 < 6) {
    if (iVar6 != 5) {
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          uVar5 = CONCAT71(extraout_var,*(undefined1 *)(param_1 + 0x20));
          *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x20);
          goto LAB_1800b0dba;
        }
        iVar6 = iVar6 + -2;
        if (iVar6 == 0) {
          uVar5 = (ulonglong)*(ushort *)(param_1 + 0x20);
          *(ushort *)puVar2 = *(ushort *)(param_1 + 0x20);
          goto LAB_1800b0dba;
        }
        goto LAB_1800b0da9;
      }
LAB_1800b0dcb:
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
      *(uint *)puVar2 = *(uint *)(param_1 + 0x20);
      goto LAB_1800b0dba;
    }
  }
  else if (((iVar6 != 6) && (iVar6 != 7)) && (iVar6 = iVar6 + -9, iVar6 != 0)) {
LAB_1800b0da9:
    if (iVar6 == 1) goto LAB_1800b0dcb;
    if (iVar6 != 2) {
LAB_1800b0d41:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x20);
  *puVar2 = uVar5;
LAB_1800b0dba:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return CONCAT71((int7)(uVar5 >> 8),1);
}


undefined8 FUN_1800b0dd4(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  int iVar5;

  plVar2 = *(longlong **)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar2 + 1;
  pwVar4 = (wchar_t *)*plVar2;
  iVar5 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar5 == -1) {
    iVar5 = 0x7fffffff;
  }
  *(wchar_t **)(param_1 + 0x40) = pwVar4;
  if ((iVar1 == 2) ||
     (((iVar1 != 3 && (iVar1 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    if ((undefined1 (*) [32])pwVar4 == (undefined1 (*) [32])0x0) {
      pwVar4 = (wchar_t *)&DAT_1800e0e98;
      *(undefined **)(param_1 + 0x40) = &DAT_1800e0e98;
    }
    uVar3 = FUN_1800bd4a0((undefined1 (*) [32])pwVar4,(longlong)iVar5);
  }
  else {
    if ((undefined1 (*) [32])pwVar4 == (undefined1 (*) [32])0x0) {
      pwVar4 = L"(null)";
      *(wchar_t **)(param_1 + 0x40) = L"(null)";
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    uVar3 = FUN_1800bd780((undefined1 (*) [32])pwVar4,(longlong)iVar5);
  }
  *(int *)(param_1 + 0x48) = (int)uVar3;
  return CONCAT71((int7)(uVar3 >> 8),1);
}


undefined8 FUN_1800b0e70(__uint64 *param_1)

{
  __uint64 *p_Var1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  wchar_t *pwVar5;

  p_Var1 = (__uint64 *)param_1[3];
  param_1[3] = (__uint64)(p_Var1 + 1);
  iVar3 = (int)param_1[6];
  pwVar5 = (wchar_t *)*p_Var1;
  if (iVar3 == -1) {
    iVar3 = 0x7fffffff;
  }
  param_1[8] = (__uint64)pwVar5;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                     *(length_modifier *)((longlong)param_1 + 0x34));
  if (bVar2) {
    if ((undefined1 (*) [32])pwVar5 == (undefined1 (*) [32])0x0) {
      pwVar5 = L"(null)";
      param_1[8] = (__uint64)L"(null)";
    }
    *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
    uVar4 = FUN_1800bd780((undefined1 (*) [32])pwVar5,(longlong)iVar3);
  }
  else {
    if ((undefined1 (*) [32])pwVar5 == (undefined1 (*) [32])0x0) {
      param_1[8] = (__uint64)&DAT_1800e0e98;
    }
    iVar3 = FUN_1800b0f0c((longlong)param_1,iVar3);
    uVar4 = CONCAT44(extraout_var,iVar3);
  }
  *(int *)(param_1 + 9) = (int)uVar4;
  return CONCAT71((int7)(uVar4 >> 8),1);
}


int FUN_1800b0f0c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;

  plVar1 = *(longlong **)(param_1 + 8);
  if ((char)plVar1[5] == '\0') {
    FUN_1800b0fd0(plVar1);
  }
  pbVar7 = *(byte **)(param_1 + 0x40);
  if (*(int *)(plVar1[3] + 0xc) == 0xfde9) {
    iVar8 = 0;
    if (0 < param_2) {
      do {
        if (*pbVar7 == 0) break;
        uVar3 = FUN_1800c42b4(pbVar7);
        iVar2 = (int)uVar3;
        lVar6 = (longlong)iVar2;
        if (3 < iVar2 - 1U) {
          lVar6 = 1;
        }
        iVar4 = iVar8 + 1;
        if (iVar2 != 4) {
          iVar4 = iVar8;
        }
        iVar8 = iVar4 + 1;
        pbVar7 = pbVar7 + lVar6;
      } while (iVar8 < param_2);
    }
  }
  else {
    iVar8 = 0;
    if (0 < param_2) {
      do {
        if (*pbVar7 == 0) break;
        pbVar5 = pbVar7 + 1;
        if (-1 < *(short *)(*(longlong *)plVar1[3] + (ulonglong)*pbVar7 * 2)) {
          pbVar5 = pbVar7;
        }
        pbVar7 = pbVar5 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_2);
    }
  }
  return iVar8;
}


void FUN_1800b0fd0(longlong *param_1)

{
  longlong lVar1;

  lVar1 = FUN_1800adc30(param_1);
  param_1[3] = *(longlong *)(lVar1 + 0x90);
  param_1[4] = *(longlong *)(lVar1 + 0x88);
  FUN_1800c20b8(lVar1,param_1 + 3,param_1[1]);
  FUN_1800c2124(lVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}


// Library Function - Single Match
//  public: static bool __cdecl
// __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(struct _iobuf * __ptr64
// const)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

bool __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(_iobuf *param_1)

{
  bool bVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  undefined *puVar4;
  undefined *puVar5;

  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    puVar5 = &DAT_180112620;
    if (uVar2 + 2 < 2) {
      puVar4 = &DAT_180112620;
    }
    else {
      puVar4 = (undefined *)
               ((&DAT_180115f70)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    if (puVar4[0x39] == '\0') {
      if (1 < uVar2 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_180115f70)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_1800b10dc;
    }
    p_Var3 = FUN_1800c2350();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_1800c2ac4();
    bVar1 = false;
  }
  else {
LAB_1800b10dc:
    bVar1 = true;
  }
  return bVar1;
}


// Library Function - Single Match
//  public: void __cdecl __crt_stdio_output::string_output_adapter<char>::write_string(char const *
// __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const __ptr64
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall
__crt_stdio_output::string_output_adapter<char>::write_string
          (string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;

  if (param_2 != 0) {
    uVar4 = (ulonglong)param_2;
    puVar1 = *(undefined8 **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar3 = uVar4;
      if (uVar2 < uVar4) {
        uVar3 = uVar2;
      }
      FUN_1800d1c20((undefined8 *)*puVar1,(undefined8 *)param_1,uVar3);
      **(longlong **)this = **(longlong **)this + uVar3;
      *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar3;
      if (*(char *)(*(longlong *)this + 0x18) == '\0') {
        if (uVar3 == uVar4) {
          *param_3 = *param_3 + (int)uVar3;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}


// Library Function - Single Match
//  public: void __cdecl __crt_stdio_output::string_output_adapter<wchar_t>::write_string(wchar_t
// const * __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const
// __ptr64
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall
__crt_stdio_output::string_output_adapter<wchar_t>::write_string
          (string_output_adapter<wchar_t> *this,wchar_t *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;

  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    puVar1 = *(undefined8 **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar4 = uVar3;
      if (uVar2 < uVar3) {
        uVar4 = uVar2;
      }
      FUN_1800d1c20((undefined8 *)*puVar1,(undefined8 *)param_1,uVar4 * 2);
      **(longlong **)this = **(longlong **)this + uVar4 * 2;
      *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar4;
      if (*(char *)(*(longlong *)this + 0x18) == '\0') {
        if (uVar4 == uVar3) {
          *param_3 = *param_3 + (int)uVar4;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}


void FUN_1800b1230(longlong *param_1,byte *param_2,int param_3,int *param_4,longlong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  byte *pbVar3;

  pbVar3 = param_2 + param_3;
  uVar1 = *(undefined8 *)(param_5 + 0x2c);
  do {
    if (param_2 == pbVar3) {
LAB_1800b12e2:
      *(undefined8 *)(param_5 + 0x2c) = uVar1;
      return;
    }
    if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*param_1 + 8) != 0)) &&
       (uVar2 = FUN_1800c4924(*param_2,(FILE *)*param_1,param_5), (int)uVar2 == -1)) {
      if ((*(char *)(param_5 + 0x30) == '\0') || (*(int *)(param_5 + 0x2c) != 0x2a)) {
        *param_4 = -1;
        goto LAB_1800b12e2;
      }
      if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) != 0) && (*(longlong *)(*param_1 + 8) == 0)) ||
         (uVar2 = FUN_1800c4924(0x3f,(FILE *)*param_1,param_5), (int)uVar2 != -1))
      goto LAB_1800b12ce;
      *param_4 = -1;
    }
    else {
LAB_1800b12ce:
      *param_4 = *param_4 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}


void FUN_1800b1300(longlong *param_1,WCHAR *param_2,int param_3,int *param_4,longlong *param_5)

{
  WCHAR *pWVar1;
  undefined8 uVar2;
  WCHAR WVar3;

  uVar2 = *(undefined8 *)((longlong)param_5 + 0x2c);
  pWVar1 = param_2 + param_3;
  do {
    if (param_2 == pWVar1) {
LAB_1800b13c4:
      *(undefined8 *)((longlong)param_5 + 0x2c) = uVar2;
      return;
    }
    if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*param_1 + 8) != 0)) &&
       (WVar3 = FUN_1800c4790(*param_2,(FILE *)*param_1,param_5), WVar3 == L'\xffff')) {
      if (((char)param_5[6] == '\0') || (*(int *)((longlong)param_5 + 0x2c) != 0x2a)) {
        *param_4 = -1;
        goto LAB_1800b13c4;
      }
      if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) != 0) && (*(longlong *)(*param_1 + 8) == 0)) ||
         (WVar3 = FUN_1800c4790(L'?',(FILE *)*param_1,param_5), WVar3 != L'\xffff'))
      goto LAB_1800b13ab;
      *param_4 = -1;
    }
    else {
LAB_1800b13ab:
      *param_4 = *param_4 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}


undefined4
FUN_1800b13f0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;

  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180115f2c != 0) goto LAB_1800b1439;
    local_80 = PTR_PTR_1801125f8._0_4_;
    uStack_7c = PTR_PTR_1801125f8._4_4_;
    uStack_78 = PTR_DAT_180112600._0_4_;
    uStack_74 = PTR_DAT_180112600._4_4_;
  }
  else {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
  }
  local_70 = '\x01';
LAB_1800b1439:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar2 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1800adc30(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1800adc30(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}


undefined4
FUN_1800b1514(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;

  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180115f2c != 0) goto LAB_1800b155d;
    local_80 = PTR_PTR_1801125f8._0_4_;
    uStack_7c = PTR_PTR_1801125f8._4_4_;
    uStack_78 = PTR_DAT_180112600._0_4_;
    uStack_74 = PTR_DAT_180112600._4_4_;
  }
  else {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
  }
  local_70 = '\x01';
LAB_1800b155d:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar2 = operator()<>(&param_5,&local_50,(longlong *)&local_48,&local_58);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1800adc30(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1800adc30(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800b1640(ulonglong param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,
                       undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStackY_548 [32];
  undefined1 *local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined1 local_500;
  undefined4 local_4ff;
  undefined2 local_4fb;
  undefined1 local_4f9;
  longlong local_4f8 [2];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  char local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  undefined4 local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined2 local_480;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  LPVOID pvStack_60;
  undefined1 **local_58;
  undefined4 local_50;
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    if (DAT_180115f2c == 0) {
      local_4e0 = PTR_PTR_1801125f8._0_4_;
      uStack_4dc = PTR_PTR_1801125f8._4_4_;
      uStack_4d8 = PTR_DAT_180112600._0_4_;
      uStack_4d4 = PTR_DAT_180112600._4_4_;
      goto LAB_1800b16af;
    }
  }
  else {
    local_4e0 = *param_5;
    uStack_4dc = param_5[1];
    uStack_4d8 = param_5[2];
    uStack_4d4 = param_5[3];
LAB_1800b16af:
    local_4d0 = '\x01';
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    local_4c8 = '\x01';
    local_4cc = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_4f8);
  }
  else {
    local_4ff = 0;
    local_4fb = 0;
    local_4f9 = 0;
    local_508 = 0;
    if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (undefined1 *)0x0)) {
      local_500 = 1;
    }
    local_4b0 = local_4f8;
    local_498 = 0;
    local_58 = &local_518;
    local_494 = 0;
    local_4a0 = param_6;
    local_490 = 0;
    local_488 = 0;
    local_480 = 0;
    local_470 = 0;
    local_46c = 0;
    local_68 = 0;
    pvStack_60 = (LPVOID)0x0;
    local_50 = 0;
    local_518 = param_2;
    local_510 = param_3;
    local_4b8 = param_1;
    local_4a8 = param_4;
    iVar2 = FUN_1800ae13c(&local_4b8);
    uVar4 = (ulonglong)iVar2;
    if (param_2 == (undefined1 *)0x0) {
LAB_1800b1822:
      FUN_1800c3030(pvStack_60);
      goto LAB_1800b182e;
    }
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar2 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_1800b181e;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_1800b1822;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_1800c3030(pvStack_60);
          uVar4 = 0xfffffffe;
          goto LAB_1800b182e;
        }
        goto LAB_1800b181e;
      }
    }
    else if ((param_3 != 0) || (iVar2 == 0)) {
      if (local_508 != param_3) {
LAB_1800b181e:
        param_2[local_508] = 0;
        goto LAB_1800b1822;
      }
      if ((iVar2 < 0) || (uVar4 <= param_3)) goto LAB_1800b1822;
    }
    FUN_1800c3030(pvStack_60);
  }
  uVar4 = 0xffffffff;
LAB_1800b182e:
  uVar1 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar3 = FUN_1800adc30(local_4f8);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_4c0 != '\0') {
    lVar3 = FUN_1800adc30(local_4f8);
    *(undefined4 *)(lVar3 + 0x24) = local_4c4;
  }
  return uVar4 & 0xffffffff;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800b18a0(ulonglong param_1,undefined2 *param_2,ulonglong param_3,longlong param_4,
                       undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStackY_548 [32];
  undefined2 *local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined1 local_500;
  undefined4 local_4ff;
  undefined2 local_4fb;
  undefined1 local_4f9;
  longlong local_4f8 [2];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  char local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  undefined4 local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined1 local_480;
  undefined2 local_47e;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  LPVOID pvStack_60;
  undefined2 **local_58;
  undefined4 local_50;
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    if (DAT_180115f2c == 0) {
      local_4e0 = PTR_PTR_1801125f8._0_4_;
      uStack_4dc = PTR_PTR_1801125f8._4_4_;
      uStack_4d8 = PTR_DAT_180112600._0_4_;
      uStack_4d4 = PTR_DAT_180112600._4_4_;
      goto LAB_1800b190f;
    }
  }
  else {
    local_4e0 = *param_5;
    uStack_4dc = param_5[1];
    uStack_4d8 = param_5[2];
    uStack_4d4 = param_5[3];
LAB_1800b190f:
    local_4d0 = '\x01';
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined2 *)0x0)))) {
    local_4c8 = '\x01';
    local_4cc = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_4f8);
  }
  else {
    local_4ff = 0;
    local_4fb = 0;
    local_4f9 = 0;
    local_508 = 0;
    if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (undefined2 *)0x0)) {
      local_500 = 1;
    }
    local_4b0 = local_4f8;
    local_498 = 0;
    local_58 = &local_518;
    local_494 = 0;
    local_4a0 = param_6;
    local_490 = 0;
    local_488 = 0;
    local_480 = 0;
    local_47e = 0;
    local_470 = 0;
    local_46c = 0;
    local_68 = 0;
    pvStack_60 = (LPVOID)0x0;
    local_50 = 0;
    local_518 = param_2;
    local_510 = param_3;
    local_4b8 = param_1;
    local_4a8 = param_4;
    iVar2 = FUN_1800ae76c(&local_4b8);
    uVar4 = (ulonglong)iVar2;
    if (param_2 == (undefined2 *)0x0) {
LAB_1800b1a8a:
      FUN_1800c3030(pvStack_60);
      goto LAB_1800b1a96;
    }
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar2 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_1800b1a85;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_1800b1a8a;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_1800c3030(pvStack_60);
          uVar4 = 0xfffffffe;
          goto LAB_1800b1a96;
        }
        goto LAB_1800b1a85;
      }
    }
    else if ((param_3 != 0) || (iVar2 == 0)) {
      if (local_508 != param_3) {
LAB_1800b1a85:
        param_2[local_508] = 0;
        goto LAB_1800b1a8a;
      }
      if ((iVar2 < 0) || (uVar4 <= param_3)) goto LAB_1800b1a8a;
    }
    FUN_1800c3030(pvStack_60);
  }
  uVar4 = 0xffffffff;
LAB_1800b1a96:
  uVar1 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar3 = FUN_1800adc30(local_4f8);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_4c0 != '\0') {
    lVar3 = FUN_1800adc30(local_4f8);
    *(undefined4 *)(lVar3 + 0x24) = local_4c4;
  }
  return uVar4 & 0xffffffff;
}


ulonglong FUN_1800b1afc(FILE *param_1,longlong *param_2)

{
  ulonglong uVar1;

  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
      FUN_1800bdb6c((longlong)param_1);
      uVar1 = FUN_1800b1b78(param_1,param_2);
      FUN_1800bdb78((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}


ulonglong FUN_1800b1b78(FILE *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;

  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) {
      uVar2 = FUN_1800bdda4(param_1,param_2);
      uVar2 = uVar2 & 0xffffffff;
      __acrt_stdio_free_buffer_nolock(&param_1->_ptr);
      uVar1 = _fileno(param_1);
      uVar3 = FUN_1800c4d98(uVar1,param_2);
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_1800c3030(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar2;
}


ulonglong FUN_1800b1c20(FILE *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_180115f2c == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801125f8;
    puStack_28 = PTR_DAT_180112600;
  }
  uVar1 = FUN_1800b1afc(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1 & 0xffffffff;
}


char * FUN_1800b1cb8(char *param_1,int param_2,_iobuf *param_3)

{
  bool bVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;

  if ((param_1 != (char *)0x0) || (bVar1 = false, param_2 == 0)) {
    bVar1 = true;
  }
  if (((bVar1) && (-1 < param_2)) && (param_3 != (_iobuf *)0x0)) {
    if (param_2 != 0) {
      FUN_1800bdb6c((longlong)param_3);
      bVar1 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(param_3);
      pcVar5 = (char *)0x0;
      if (bVar1) {
        pcVar4 = param_1;
        for (iVar6 = 1; iVar6 != param_2; iVar6 = iVar6 + 1) {
          uVar3 = _fgetc_nolock(param_3);
          if ((int)uVar3 == -1) {
            if (pcVar4 == param_1) goto LAB_1800b1d7e;
            break;
          }
          *pcVar4 = (char)uVar3;
          pcVar4 = pcVar4 + 1;
          if ((char)uVar3 == '\n') break;
        }
        *pcVar4 = '\0';
        pcVar5 = param_1;
      }
LAB_1800b1d7e:
      FUN_1800bdb78((longlong)param_3);
      return pcVar5;
    }
  }
  else {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
  }
  return (char *)0x0;
}


char * thunk_FUN_1800b1cb8(char *param_1,int param_2,_iobuf *param_3)

{
  bool bVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;

  if ((param_1 != (char *)0x0) || (bVar1 = false, param_2 == 0)) {
    bVar1 = true;
  }
  if (((bVar1) && (-1 < param_2)) && (param_3 != (_iobuf *)0x0)) {
    if (param_2 != 0) {
      FUN_1800bdb6c((longlong)param_3);
      bVar1 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(param_3);
      pcVar5 = (char *)0x0;
      if (bVar1) {
        pcVar4 = param_1;
        for (iVar6 = 1; iVar6 != param_2; iVar6 = iVar6 + 1) {
          uVar3 = _fgetc_nolock(param_3);
          if ((int)uVar3 == -1) {
            if (pcVar4 == param_1) goto LAB_1800b1d7e;
            break;
          }
          *pcVar4 = (char)uVar3;
          pcVar4 = pcVar4 + 1;
          if ((char)uVar3 == '\n') break;
        }
        *pcVar4 = '\0';
        pcVar5 = param_1;
      }
LAB_1800b1d7e:
      FUN_1800bdb78((longlong)param_3);
      return pcVar5;
    }
  }
  else {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
  }
  return (char *)0x0;
}


// Library Function - Multiple Matches With Same Base Name
//  public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
// <lambda_2831f20263db5b546e098b45503eb778>,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &
// __ptr64,class <lambda_0838d7e100fbcbd261b69cfea6abb102> >(class
// <lambda_2831f20263db5b546e098b45503eb778> && __ptr64,class
// <lambda_5856287d7ecd2be6c9197bb4007c3f6e> & __ptr64,class
// <lambda_0838d7e100fbcbd261b69cfea6abb102> && __ptr64) __ptr64
//  public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
// <lambda_5d4c3fee44080f75d5d9762853974fe0>,class <lambda_532e024f4337e6fc7ad266c2bef9f4ed> &
// __ptr64,class <lambda_c87bdc10097eb2402edb8ba9bdf0697b> >(class
// <lambda_5d4c3fee44080f75d5d9762853974fe0> && __ptr64,class
// <lambda_532e024f4337e6fc7ad266c2bef9f4ed> & __ptr64,class
// <lambda_c87bdc10097eb2402edb8ba9bdf0697b> && __ptr64) __ptr64
//  public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
// <lambda_bdbcead8b570fa3d5ec6d9679862a6e5>,class <lambda_96f4279ff90247a4c5c5d9824f56f8c1> &
// __ptr64,class <lambda_4606be27f17b5e5579e09050fab91818> >(class
// <lambda_bdbcead8b570fa3d5ec6d9679862a6e5> && __ptr64,class
// <lambda_96f4279ff90247a4c5c5d9824f56f8c1> & __ptr64,class
// <lambda_4606be27f17b5e5579e09050fab91818> && __ptr64) __ptr64
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong operator()<>(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong uVar1;

  FUN_1800bdb6c(*param_2);
  uVar1 = FUN_1800b1dd8(param_3);
  FUN_1800bdb78(*param_4);
  return uVar1;
}


ulonglong FUN_1800b1dd8(undefined8 *param_1)

{
  longlong *plVar1;
  FILE *pFVar2;
  undefined8 uVar3;
  ulonglong uVar4;

  plVar1 = (longlong *)param_1[1];
  pFVar2 = *(FILE **)*param_1;
  uVar3 = FUN_1800c4988(pFVar2);
  uVar4 = FUN_1800b1f08(*(WCHAR **)param_1[2],*(ulonglong *)param_1[3],*(ulonglong *)param_1[4],
                        *(FILE **)*param_1,(longlong *)param_1[1]);
  FUN_1800c4a50((char)uVar3,pFVar2,plVar1);
  return uVar4;
}


undefined8 FUN_1800b1e58(longlong *param_1)

{
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),(*(uint *)(*param_1 + 0x14) & 0x4c0) != 0);
}


ulonglong FUN_1800b1e6c(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong *param_5)

{
  ulonglong uVar1;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_48 [8];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 *local_20;
  longlong *local_18;
  longlong *local_10;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_4 != 0) {
      local_30 = &local_res20;
      local_28 = param_5;
      local_20 = &local_res8;
      local_18 = &local_res10;
      local_10 = &local_res18;
      local_40 = param_4;
      local_38 = param_4;
      uVar1 = operator()<>(local_48,&local_38,&local_30,&local_40);
      return uVar1;
    }
    *(undefined1 *)(param_5 + 6) = 1;
    *(undefined4 *)((longlong)param_5 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  return 0;
}


ulonglong FUN_1800b1f08(WCHAR *param_1,ulonglong param_2,ulonglong param_3,FILE *param_4,
                       longlong *param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;

  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (WCHAR *)0x0 && (param_3 <= 0xffffffffffffffff / param_2)))) {
      if (((ulonglong)param_4->_base & 0x4c000000000) == 0) {
        uVar8 = 0x1000;
      }
      else {
        uVar8 = param_4->_charbuf;
      }
      uVar6 = param_2 * param_3;
      do {
        if (uVar6 == 0) {
          return param_3;
        }
        if ((((ulonglong)param_4->_base & 0xc000000000) == 0) || (*(int *)&param_4->_base == 0)) {
          if (uVar8 <= uVar6) {
            if ((((ulonglong)param_4->_base & 0xc000000000) != 0) &&
               (uVar3 = FUN_1800bdda4(param_4,param_5), (int)uVar3 != 0)) goto LAB_1800b20bf;
            uVar4 = uVar6;
            if (uVar8 != 0) {
              uVar4 = uVar6 - uVar6 % (ulonglong)uVar8;
            }
            uVar7 = 0xfffffffe;
            if (uVar4 < 0xfffffffe) {
              uVar7 = (uint)uVar4;
            }
            uVar2 = _fileno(param_4);
            uVar2 = FUN_1800c5918(uVar2,param_1,uVar7,param_5);
            if (uVar2 != 0xffffffff) {
              uVar5 = uVar2;
              if (uVar7 < uVar2) {
                uVar5 = uVar7;
              }
              uVar4 = (ulonglong)uVar5;
              uVar6 = uVar6 - uVar4;
              if (uVar7 <= uVar2) goto LAB_1800b2106;
            }
LAB_1800b20ba:
            LOCK();
            puVar1 = (uint *)((longlong)&param_4->_base + 4);
            *puVar1 = *puVar1 | 0x10;
            UNLOCK();
LAB_1800b20bf:
            return (param_2 * param_3 - uVar6) / param_2;
          }
          uVar4 = FUN_1800c5fe4((byte)*param_1,param_4,param_5);
          if ((int)uVar4 == -1) goto LAB_1800b20bf;
          uVar8 = param_4->_charbuf;
          uVar6 = uVar6 - 1;
          if ((int)uVar8 < 1) {
            uVar8 = 1;
            uVar4 = 1;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          if (*(int *)&param_4->_base < 0) goto LAB_1800b20ba;
          if (((ulonglong)param_4->_base & 0x100000000) != 0) goto LAB_1800b20bf;
          uVar4 = uVar6;
          if ((ulonglong)(longlong)*(int *)&param_4->_base <= uVar6) {
            uVar4 = (longlong)*(int *)&param_4->_base;
          }
          FUN_1800d1c20((undefined8 *)param_4->_ptr,(undefined8 *)param_1,uVar4);
          *(int *)&param_4->_base = *(int *)&param_4->_base - (int)uVar4;
          uVar6 = uVar6 - uVar4;
          param_4->_ptr = param_4->_ptr + uVar4;
        }
LAB_1800b2106:
        param_1 = (WCHAR *)((longlong)param_1 + uVar4);
      } while( true );
    }
    *(undefined1 *)(param_5 + 6) = 1;
    *(undefined4 *)((longlong)param_5 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  return 0;
}


ulonglong FUN_1800b2120(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_180115f2c == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801125f8;
    puStack_28 = PTR_DAT_180112600;
  }
  uVar1 = FUN_1800b1e6c(param_1,param_2,param_3,param_4,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}


// Library Function - Multiple Matches With Same Base Name
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
// __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
// <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
// <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
// <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
// __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
// <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
// <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
// <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_1c23a5dd5e46d7c5fbe45428cfdcd388>,class <lambda_ad9c22e73f4850e44729a5f831ae9ec1> &
// __ptr64,class <lambda_13a597834fd3cef18bd4341e137232db> >(class
// <lambda_1c23a5dd5e46d7c5fbe45428cfdcd388> && __ptr64,class
// <lambda_ad9c22e73f4850e44729a5f831ae9ec1> & __ptr64,class
// <lambda_13a597834fd3cef18bd4341e137232db> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_2647abb55a408a205467c4169a724277>,class <lambda_576477a770bb5ab586b2d9569451c7f7> &
// __ptr64,class <lambda_c2b006f504a10a4cf14b9a1fbce2a01e> >(class
// <lambda_2647abb55a408a205467c4169a724277> && __ptr64,class
// <lambda_576477a770bb5ab586b2d9569451c7f7> & __ptr64,class
// <lambda_c2b006f504a10a4cf14b9a1fbce2a01e> && __ptr64) __ptr64
//   22 names - too many to list
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 operator()<>(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;

  FUN_1800bdb6c(*param_2);
  uVar1 = FUN_1800b57a0(param_3);
  FUN_1800bdb78(*param_4);
  return uVar1;
}


ulonglong FUN_1800b2204(byte param_1,ulonglong param_2)

{
  ulonglong in_RAX;

  if ((param_1 & 4) != 0) {
LAB_1800b2236:
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 2) == 0) {
      return CONCAT71(0x7fffffffffffff,0x7fffffffffffffff < param_2);
    }
    in_RAX = 0x8000000000000000;
    if (0x8000000000000000 < param_2) goto LAB_1800b2236;
  }
  return in_RAX & 0xffffffffffffff00;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// Library Function - Multiple Matches With Same Base Name
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,float>(struct __crt_locale_pointers * __ptr64 const,class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,float * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,double>(struct __crt_locale_pointers * __ptr64 const,class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,double * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
// const,class __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
// __ptr64 const,class __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
//   12 names - too many to list
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong parse_floating_point<>(_locale_t param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  undefined1 auStack_348 [32];
  floating_point_string local_328 [784];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_348;
  if ((param_3 == (uint *)0x0) || (param_1 == (_locale_t)0x0)) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1800b24dc(param_1,param_2,(int *)local_328);
    uVar3 = FUN_1800b3f08(uVar1,local_328,param_3);
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
  }
  return uVar3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// Library Function - Multiple Matches With Same Base Name
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,float>(struct __crt_locale_pointers * __ptr64 const,class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,float * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,double>(struct __crt_locale_pointers * __ptr64 const,class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,double * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
// const,class __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
// __ptr64 const,class __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
//   12 names - too many to list
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong parse_floating_point<>(_locale_t param_1,longlong *param_2,ulonglong *param_3)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  undefined1 auStack_348 [32];
  floating_point_string local_328 [784];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_348;
  if ((param_3 == (ulonglong *)0x0) || (param_1 == (_locale_t)0x0)) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1800b24dc(param_1,param_2,(int *)local_328);
    uVar3 = FUN_1800b4070(uVar1,local_328,param_3);
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
  }
  return uVar3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// Library Function - Multiple Matches With Same Base Name
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,float>(struct __crt_locale_pointers * __ptr64 const,class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,float * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,double>(struct __crt_locale_pointers * __ptr64 const,class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,double * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
// const,class __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
// __ptr64 const,class __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
//   12 names - too many to list
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong parse_floating_point<>(_locale_t param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  undefined1 auStack_348 [32];
  floating_point_string local_328 [784];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_348;
  if ((param_3 == (uint *)0x0) || (param_1 == (_locale_t)0x0)) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1800b2cbc(param_1,param_2,(int *)local_328);
    uVar3 = FUN_1800b3f08(uVar1,local_328,param_3);
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
  }
  return uVar3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// Library Function - Multiple Matches With Same Base Name
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,float>(struct __crt_locale_pointers * __ptr64 const,class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,float * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,double>(struct __crt_locale_pointers * __ptr64 const,class
// __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
// >,double * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
// const,class __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
// __ptr64 const,class __crt_strtox::input_adapter_character_source<class
// __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
//   12 names - too many to list
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong parse_floating_point<>(_locale_t param_1,longlong *param_2,ulonglong *param_3)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  undefined1 auStack_348 [32];
  floating_point_string local_328 [784];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_348;
  if ((param_3 == (ulonglong *)0x0) || (param_1 == (_locale_t)0x0)) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1800b2cbc(param_1,param_2,(int *)local_328);
    uVar3 = FUN_1800b4070(uVar1,local_328,param_3);
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
  }
  return uVar3;
}


uint FUN_1800b24dc(_locale_t param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  __acrt_ptd *p_Var12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  char cVar17;
  int iVar18;
  int *piVar19;
  byte local_res10 [8];
  int *local_res18;
  byte local_res20;
  int local_74;
  longlong local_68;
  longlong *local_60;
  byte *local_58;
  longlong *local_50;

  puVar4 = (undefined8 *)*param_2;
  local_res18 = param_3;
  if ((puVar4 == (undefined8 *)0x0) || (param_2[3] == 0)) {
    p_Var12 = FUN_1800c2350();
    *(undefined4 *)p_Var12 = 0x16;
    FUN_1800c2ac4();
    return 7;
  }
  local_68 = param_2[2];
  param_2[2] = local_68 + 1U;
  if (((param_2[1] == 0) || (local_68 + 1U <= (ulonglong)param_2[1])) &&
     (uVar13 = _fgetc_nolock((FILE *)*puVar4), (int)uVar13 != -1)) {
    puVar4[1] = puVar4[1] + 1;
  }
  else {
    uVar13 = 0;
  }
  local_58 = local_res10;
  local_50 = &local_68;
  local_60 = param_2;
  while( true ) {
    local_res10[0] = (byte)uVar13;
    uVar10 = FUN_1800b9554((uint)uVar13 & 0xff,8,param_1);
    if (uVar10 == 0) break;
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      if ((int)uVar13 == -1) goto LAB_1800b25a6;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1800b25a6:
      uVar13 = 0;
    }
  }
  uVar13 = (ulonglong)local_res10[0];
  piVar2 = param_3 + 0xc2;
  *(bool *)piVar2 = local_res10[0] == 0x2d;
  if ((local_res10[0] - 0x2b & 0xfd) == 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar14 = _fgetc_nolock((FILE *)*puVar4);
      uVar13 = uVar14 & 0xffffffff;
      if ((int)uVar14 == -1) goto LAB_1800b2607;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1800b2607:
      uVar13 = 0;
    }
    local_res10[0] = (byte)uVar13;
  }
  if (((int)uVar13 - 0x49U & 0xdf) == 0) {
    uVar10 = FUN_1800b3480((char *)local_res10,param_2,local_68);
    return uVar10;
  }
  if (((int)uVar13 - 0x4eU & 0xdf) == 0) {
    uVar10 = FUN_1800b3804((char *)local_res10,param_2,local_68);
    return uVar10;
  }
  local_res20 = 0;
  if ((char)uVar13 == '0') {
    lVar5 = param_2[2];
    uVar14 = lVar5 + 1;
    param_2[2] = uVar14;
    if ((param_2[1] == 0) || (uVar14 <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      iVar18 = (int)uVar13;
      if (iVar18 == -1) {
        uVar13 = (ulonglong)local_res10[0];
        goto LAB_1800b26ae;
      }
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      if ((iVar18 - 0x58U & 0xdf) == 0) {
        lVar6 = param_2[2];
        local_res20 = 1;
        param_2[2] = lVar6 + 1U;
        if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          uVar13 = _fgetc_nolock((FILE *)*puVar4);
          if ((int)uVar13 == -1) goto LAB_1800b2698;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_1800b2698:
          uVar13 = 0;
        }
        local_res10[0] = (byte)uVar13;
        uVar13 = uVar13 & 0xff;
        local_68 = lVar5;
        goto LAB_1800b26eb;
      }
      uVar13 = (ulonglong)local_res10[0];
    }
    else {
LAB_1800b26ae:
      iVar18 = 0;
    }
    lVar5 = param_2[2];
    param_2[2] = lVar5 - 1U;
    if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
       (cVar9 = (char)iVar18, 1 < (byte)(cVar9 + 1U))) {
      puVar4 = (undefined8 *)*param_2;
      if ((int)cVar9 != 0xffffffff) {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + -1;
        FUN_1800c6228((int)cVar9,(FILE *)*puVar4);
        uVar13 = (ulonglong)local_res10[0];
      }
    }
  }
LAB_1800b26eb:
  piVar19 = param_3 + 2;
  bVar7 = false;
  local_74 = 0;
  if ((char)uVar13 == '0') {
    bVar7 = true;
    do {
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) {
LAB_1800b2736:
        uVar13 = 0;
        local_res10[0] = 0;
        break;
      }
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      if ((int)uVar13 == -1) goto LAB_1800b2736;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      local_res10[0] = (byte)uVar13;
      uVar13 = uVar13 & 0xff;
    } while (local_res10[0] == 0x30);
  }
  uVar10 = (-(uint)(local_res20 != 0) & 6) + 9;
  while( true ) {
    cVar9 = (char)uVar13;
    if ((byte)(cVar9 - 0x30U) < 10) {
      uVar11 = (int)cVar9 - 0x30;
    }
    else if ((byte)(cVar9 + 0x9fU) < 0x1a) {
      uVar11 = (int)cVar9 - 0x57;
    }
    else if ((byte)(cVar9 + 0xbfU) < 0x1a) {
      uVar11 = (int)cVar9 - 0x37;
    }
    else {
      uVar11 = 0xffffffff;
    }
    if (uVar10 < uVar11) break;
    bVar7 = true;
    if (piVar19 != piVar2) {
      *(char *)piVar19 = (char)uVar11;
      piVar19 = (int *)((longlong)piVar19 + 1);
    }
    lVar5 = param_2[2];
    local_74 = local_74 + 1;
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      if ((int)uVar13 == -1) goto LAB_1800b27c0;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1800b27c0:
      uVar13 = 0;
    }
    local_res10[0] = (byte)uVar13;
    uVar13 = uVar13 & 0xff;
  }
  if (cVar9 == **(char **)param_1->locinfo->ctype1_refcount) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      local_res10[0] = (byte)uVar13;
      if ((int)uVar13 == -1) goto LAB_1800b2816;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1800b2816:
      local_res10[0] = 0;
    }
    uVar14 = (ulonglong)local_res10[0];
    uVar13 = (ulonglong)local_res10[0];
    if ((piVar19 == local_res18 + 2) && (local_res10[0] == 0x30)) {
      bVar7 = true;
      local_res10[0] = 0x30;
      do {
        local_74 = local_74 + -1;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) {
LAB_1800b286e:
          uVar13 = 0;
          local_res10[0] = 0;
          uVar14 = 0;
          break;
        }
        puVar4 = (undefined8 *)*param_2;
        uVar13 = _fgetc_nolock((FILE *)*puVar4);
        if ((int)uVar13 == -1) goto LAB_1800b286e;
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
        local_res10[0] = (byte)uVar13;
        uVar14 = uVar13 & 0xff;
      } while (local_res10[0] == 0x30);
    }
    uVar16 = uVar13 & 0xff;
    while( true ) {
      cVar9 = (char)uVar14;
      if (((char)uVar13 < '0') || ('9' < (char)uVar16)) {
        if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          uVar11 = (int)cVar9 - 0x57;
        }
        else if ((byte)(cVar9 + 0xbfU) < 0x1a) {
          uVar11 = (int)cVar9 - 0x37;
        }
        else {
          uVar11 = 0xffffffff;
        }
      }
      else {
        uVar11 = (int)cVar9 - 0x30;
      }
      if (uVar10 < uVar11) break;
      bVar7 = true;
      if (piVar19 != piVar2) {
        *(char *)piVar19 = (char)uVar11;
        piVar19 = (int *)((longlong)piVar19 + 1);
      }
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar4 = (undefined8 *)*param_2;
        uVar13 = _fgetc_nolock((FILE *)*puVar4);
        uVar16 = uVar13 & 0xffffffff;
        if ((int)uVar13 == -1) goto LAB_1800b28ec;
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
      }
      else {
LAB_1800b28ec:
        uVar16 = 0;
      }
      local_res10[0] = (byte)uVar16;
      uVar14 = uVar16 & 0xff;
      uVar13 = uVar16 & 0xff;
    }
  }
  if (!bVar7) {
    uVar15 = FUN_1800b56c4((longlong *)&local_60);
    if (((char)uVar15 == '\0') || (local_res20 == 0)) {
      return 7;
    }
    return 2;
  }
  lVar5 = param_2[2];
  param_2[2] = lVar5 - 1U;
  if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar9 + 1U))) {
    puVar4 = (undefined8 *)*param_2;
    if ((int)cVar9 != 0xffffffff) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_1800c6228((int)cVar9,(FILE *)*puVar4);
    }
  }
  local_68 = param_2[2];
  param_2[2] = local_68 + 1U;
  if ((param_2[1] == 0) || (local_68 + 1U <= (ulonglong)param_2[1])) {
    puVar4 = (undefined8 *)*param_2;
    uVar13 = _fgetc_nolock((FILE *)*puVar4);
    uVar10 = (uint)uVar13;
    local_res10[0] = (byte)uVar13;
    if (uVar10 != 0xffffffff) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      if (local_res10[0] == 0x45) {
LAB_1800b29ac:
        bVar8 = local_res20 ^ 1;
      }
      else if (local_res10[0] == 0x50) {
LAB_1800b29a7:
        bVar8 = local_res20;
      }
      else {
        if (local_res10[0] == 0x65) goto LAB_1800b29ac;
        bVar8 = 0;
        if (local_res10[0] == 0x70) goto LAB_1800b29a7;
      }
      iVar18 = 0;
      if (bVar8 == 0) goto LAB_1800b2bd2;
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar4 = (undefined8 *)*param_2;
        uVar13 = _fgetc_nolock((FILE *)*puVar4);
        uVar14 = uVar13 & 0xffffffff;
        if ((int)uVar13 != -1) {
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
          local_res10[0] = (byte)uVar13;
          if ((local_res10[0] == 0x2b) || (local_res10[0] == 0x2d)) {
            lVar5 = param_2[2];
            param_2[2] = lVar5 + 1U;
            if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
              puVar4 = (undefined8 *)*param_2;
              uVar13 = _fgetc_nolock((FILE *)*puVar4);
              if ((int)uVar13 == -1) goto LAB_1800b2a31;
              plVar1 = puVar4 + 1;
              *plVar1 = *plVar1 + 1;
            }
            else {
LAB_1800b2a31:
              uVar13 = 0;
            }
            local_res10[0] = (byte)uVar13;
          }
          iVar18 = 0;
          uVar16 = uVar13 & 0xff;
          bVar7 = false;
          cVar9 = (char)uVar13;
          if (cVar9 != '0') goto LAB_1800b2a90;
          bVar7 = true;
          do {
            lVar5 = param_2[2];
            param_2[2] = lVar5 + 1U;
            if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) goto LAB_1800b2a85;
            puVar4 = (undefined8 *)*param_2;
            uVar13 = _fgetc_nolock((FILE *)*puVar4);
            if ((int)uVar13 == -1) goto LAB_1800b2a85;
            plVar1 = puVar4 + 1;
            *plVar1 = *plVar1 + 1;
            local_res10[0] = (byte)uVar13;
            uVar16 = uVar13 & 0xff;
          } while (local_res10[0] == 0x30);
          goto LAB_1800b2a8e;
        }
      }
      bVar7 = false;
      uVar14 = 0;
LAB_1800b2a85:
      iVar18 = 0;
      uVar16 = 0;
      uVar13 = 0;
      local_res10[0] = 0;
LAB_1800b2a8e:
      while( true ) {
        cVar9 = (char)uVar13;
LAB_1800b2a90:
        cVar17 = (char)uVar16;
        if ((cVar9 < '0') || ('9' < cVar17)) {
          if ((byte)(cVar17 + 0x9fU) < 0x1a) {
            uVar10 = (int)cVar17 - 0x57;
          }
          else {
            if (0x19 < (byte)(cVar17 + 0xbfU)) goto LAB_1800b2b0d;
            uVar10 = (int)cVar17 - 0x37;
          }
        }
        else {
          uVar10 = (int)cVar17 - 0x30;
        }
        if (9 < uVar10) goto LAB_1800b2b0d;
        bVar7 = true;
        iVar18 = uVar10 + iVar18 * 10;
        if (0x1450 < iVar18) break;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          uVar13 = _fgetc_nolock((FILE *)*puVar4);
          if ((int)uVar13 == -1) goto LAB_1800b2afe;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_1800b2afe:
          uVar13 = 0;
        }
        local_res10[0] = (byte)uVar13;
        uVar16 = uVar13 & 0xff;
      }
      iVar18 = 0x1451;
LAB_1800b2b0d:
      do {
        uVar10 = (uint)uVar16;
        cVar9 = (char)uVar16;
        if ((byte)(cVar9 - 0x30U) < 10) {
          uVar11 = (int)cVar9 - 0x30;
        }
        else if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          uVar11 = (int)cVar9 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar9 + 0xbfU)) goto LAB_1800b2b74;
          uVar11 = (int)cVar9 - 0x37;
        }
        if (9 < uVar11) goto LAB_1800b2b74;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          uVar16 = _fgetc_nolock((FILE *)*puVar4);
          if ((int)uVar16 == -1) goto LAB_1800b2b6a;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_1800b2b6a:
          uVar16 = 0;
        }
        local_res10[0] = (byte)uVar16;
        uVar16 = uVar16 & 0xff;
      } while( true );
    }
  }
  uVar10 = 0;
  iVar18 = 0;
  local_res10[0] = 0;
  goto LAB_1800b2bd2;
LAB_1800b2b74:
  if ((char)uVar14 == '-') {
    iVar18 = -iVar18;
  }
  if (bVar7) goto LAB_1800b2bd2;
  uVar15 = FUN_1800b56c4((longlong *)&local_60);
  if ((char)uVar15 == '\0') {
    return 7;
  }
  lVar5 = param_2[2];
  param_2[2] = lVar5 + 1U;
  if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
    puVar4 = (undefined8 *)*param_2;
    uVar13 = _fgetc_nolock((FILE *)*puVar4);
    uVar10 = (uint)uVar13;
    if (uVar10 == 0xffffffff) goto LAB_1800b2bbf;
    plVar1 = puVar4 + 1;
    *plVar1 = *plVar1 + 1;
  }
  else {
LAB_1800b2bbf:
    uVar10 = 0;
  }
  local_res10[0] = (byte)uVar10;
  uVar10 = uVar10 & 0xff;
LAB_1800b2bd2:
  lVar5 = param_2[2];
  param_2[2] = lVar5 - 1U;
  if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
     (cVar9 = (char)uVar10, 1 < (byte)(cVar9 + 1U))) {
    puVar4 = (undefined8 *)*param_2;
    if ((int)cVar9 != 0xffffffff) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_1800c6228((int)cVar9,(FILE *)*puVar4);
    }
  }
  piVar2 = local_res18 + 2;
  if (piVar19 != piVar2) {
    do {
      piVar3 = (int *)((longlong)piVar19 + -1);
      if (*(char *)piVar3 != '\0') break;
      piVar19 = piVar3;
    } while (piVar3 != piVar2);
    if (piVar19 != piVar2) {
      if (0x1450 < iVar18) {
        return 9;
      }
      if (-0x1451 < iVar18) {
        iVar18 = iVar18 + ((-(uint)(local_res20 != 0) & 3) + 1) * local_74;
        if (0x1450 < iVar18) {
          return 9;
        }
        if (-0x1451 < iVar18) {
          *local_res18 = iVar18;
          local_res18[1] = (int)piVar19 - (int)piVar2;
          return (uint)local_res20;
        }
      }
      return 8;
    }
  }
  return 2;
}


uint FUN_1800b2cbc(_locale_t param_1,longlong *param_2,int *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  byte *pbVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  __acrt_ptd *p_Var12;
  undefined8 uVar13;
  char cVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  byte local_res10 [24];
  longlong local_58;
  longlong *local_50;
  byte *local_48;
  longlong *local_40;

  iVar17 = 0;
  lVar4 = *param_2;
  if ((lVar4 == 0) || (param_2[3] == 0)) {
    p_Var12 = FUN_1800c2350();
    *(undefined4 *)p_Var12 = 0x16;
    FUN_1800c2ac4();
    return 7;
  }
  local_58 = param_2[2];
  param_2[2] = local_58 + 1U;
  if (((param_2[1] == 0) || (local_58 + 1U <= (ulonglong)param_2[1])) &&
     (pbVar8 = *(byte **)(lVar4 + 0x10), pbVar8 != *(byte **)(lVar4 + 8))) {
    local_res10[0] = *pbVar8;
    *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
  }
  else {
    local_res10[0] = 0;
  }
  local_48 = local_res10;
  local_40 = &local_58;
  local_50 = param_2;
  while (uVar11 = FUN_1800b9554((uint)local_res10[0],8,param_1), uVar11 != 0) {
    lVar4 = param_2[2];
    param_2[2] = lVar4 + 1U;
    if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
      lVar4 = *param_2;
      pbVar8 = *(byte **)(lVar4 + 0x10);
      if (pbVar8 == *(byte **)(lVar4 + 8)) goto LAB_1800b2d6c;
      local_res10[0] = *pbVar8;
      *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
    }
    else {
LAB_1800b2d6c:
      local_res10[0] = 0;
    }
  }
  piVar3 = param_3 + 0xc2;
  *(bool *)piVar3 = local_res10[0] == 0x2d;
  if ((local_res10[0] - 0x2b & 0xfd) == 0) {
    lVar4 = param_2[2];
    param_2[2] = lVar4 + 1U;
    if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
      lVar4 = *param_2;
      pbVar8 = *(byte **)(lVar4 + 0x10);
      if (pbVar8 != *(byte **)(lVar4 + 8)) {
        local_res10[0] = *pbVar8;
        *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
        goto LAB_1800b2dea;
      }
    }
    local_res10[0] = 0;
  }
LAB_1800b2dea:
  if ((local_res10[0] + 0xb7 & 0xdf) == 0) {
    uVar11 = FUN_1800b3654((char *)local_res10,param_2,local_58);
    return uVar11;
  }
  if ((local_res10[0] + 0xb2 & 0xdf) == 0) {
    uVar11 = FUN_1800b3a7c((char *)local_res10,param_2,local_58);
    return uVar11;
  }
  bVar18 = 0;
  if (local_res10[0] == 0x30) {
    lVar4 = param_2[2];
    uVar1 = lVar4 + 1;
    param_2[2] = uVar1;
    if ((param_2[1] == 0) || (uVar1 <= (ulonglong)param_2[1])) {
      lVar5 = *param_2;
      pcVar6 = *(char **)(lVar5 + 0x10);
      if (pcVar6 == *(char **)(lVar5 + 8)) goto LAB_1800b2e24;
      cVar14 = *pcVar6;
      *(char **)(lVar5 + 0x10) = pcVar6 + 1;
      if ((cVar14 == 'x') || (cVar14 == 'X')) {
        lVar5 = param_2[2];
        bVar18 = 1;
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
          lVar5 = *param_2;
          pbVar8 = *(byte **)(lVar5 + 0x10);
          if (pbVar8 == *(byte **)(lVar5 + 8)) goto LAB_1800b2e9c;
          local_res10[0] = *pbVar8;
          *(byte **)(lVar5 + 0x10) = pbVar8 + 1;
        }
        else {
LAB_1800b2e9c:
          local_res10[0] = 0;
        }
        local_58 = lVar4;
        goto LAB_1800b2ebe;
      }
    }
    else {
LAB_1800b2e24:
      cVar14 = '\0';
    }
    lVar4 = param_2[2];
    param_2[2] = lVar4 - 1U;
    if (((param_2[1] == 0) || (lVar4 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar14 + 1U))) {
      plVar7 = (longlong *)*param_2;
      if (plVar7[2] != *plVar7) {
        plVar7[2] = plVar7[2] + -1;
      }
    }
  }
LAB_1800b2ebe:
  piVar2 = param_3 + 2;
  bVar9 = false;
  if (local_res10[0] == 0x30) {
    bVar9 = true;
    do {
      lVar4 = param_2[2];
      param_2[2] = lVar4 + 1U;
      if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar4 + 1U)) {
LAB_1800b2f0a:
        local_res10[0] = 0;
        break;
      }
      lVar4 = *param_2;
      pbVar8 = *(byte **)(lVar4 + 0x10);
      if (pbVar8 == *(byte **)(lVar4 + 8)) goto LAB_1800b2f0a;
      local_res10[0] = *pbVar8;
      *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
    } while (local_res10[0] == 0x30);
  }
  piVar15 = piVar2;
  while( true ) {
    if ((byte)(local_res10[0] - 0x30) < 10) {
      uVar11 = (int)(char)local_res10[0] - 0x30;
    }
    else if ((byte)(local_res10[0] + 0x9f) < 0x1a) {
      uVar11 = (int)(char)local_res10[0] - 0x57;
    }
    else if ((byte)(local_res10[0] + 0xbf) < 0x1a) {
      uVar11 = (int)(char)local_res10[0] - 0x37;
    }
    else {
      uVar11 = 0xffffffff;
    }
    if ((-(uint)(bVar18 != 0) & 6) + 9 < uVar11) break;
    bVar9 = true;
    if (piVar15 != piVar3) {
      *(char *)piVar15 = (char)uVar11;
      piVar15 = (int *)((longlong)piVar15 + 1);
    }
    lVar4 = param_2[2];
    iVar17 = iVar17 + 1;
    param_2[2] = lVar4 + 1U;
    if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
      lVar4 = *param_2;
      pbVar8 = *(byte **)(lVar4 + 0x10);
      if (pbVar8 == *(byte **)(lVar4 + 8)) goto LAB_1800b2f7c;
      local_res10[0] = *pbVar8;
      *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
    }
    else {
LAB_1800b2f7c:
      local_res10[0] = 0;
    }
  }
  if (local_res10[0] == **(byte **)param_1->locinfo->ctype1_refcount) {
    lVar4 = param_2[2];
    param_2[2] = lVar4 + 1U;
    if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
      lVar4 = *param_2;
      pbVar8 = *(byte **)(lVar4 + 0x10);
      if (pbVar8 == *(byte **)(lVar4 + 8)) goto LAB_1800b2fc8;
      local_res10[0] = *pbVar8;
      *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
    }
    else {
LAB_1800b2fc8:
      local_res10[0] = 0;
    }
    if ((piVar15 == piVar2) && (local_res10[0] == 0x30)) {
      bVar9 = true;
      do {
        lVar4 = param_2[2];
        iVar17 = iVar17 + -1;
        param_2[2] = lVar4 + 1U;
        if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar4 + 1U)) {
LAB_1800b3031:
          local_res10[0] = 0;
          break;
        }
        lVar4 = *param_2;
        pbVar8 = *(byte **)(lVar4 + 0x10);
        if (pbVar8 == *(byte **)(lVar4 + 8)) goto LAB_1800b3031;
        local_res10[0] = *pbVar8;
        *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
      } while (local_res10[0] == 0x30);
    }
    while( true ) {
      if (((char)local_res10[0] < '0') || ('9' < (char)local_res10[0])) {
        if ((byte)(local_res10[0] + 0x9f) < 0x1a) {
          uVar11 = (int)(char)local_res10[0] - 0x57;
        }
        else if ((byte)(local_res10[0] + 0xbf) < 0x1a) {
          uVar11 = (int)(char)local_res10[0] - 0x37;
        }
        else {
          uVar11 = 0xffffffff;
        }
      }
      else {
        uVar11 = (int)(char)local_res10[0] - 0x30;
      }
      if ((-(uint)(bVar18 != 0) & 6) + 9 < uVar11) break;
      bVar9 = true;
      if (piVar15 != piVar3) {
        *(char *)piVar15 = (char)uVar11;
        piVar15 = (int *)((longlong)piVar15 + 1);
      }
      lVar4 = param_2[2];
      param_2[2] = lVar4 + 1U;
      if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
        lVar4 = *param_2;
        pbVar8 = *(byte **)(lVar4 + 0x10);
        if (pbVar8 == *(byte **)(lVar4 + 8)) goto LAB_1800b30ab;
        local_res10[0] = *pbVar8;
        *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
      }
      else {
LAB_1800b30ab:
        local_res10[0] = 0;
      }
    }
  }
  if (!bVar9) {
    uVar13 = FUN_1800b573c((longlong *)&local_50);
    if (((char)uVar13 == '\0') || (bVar18 == 0)) {
      return 7;
    }
    return 2;
  }
  lVar4 = param_2[2];
  param_2[2] = lVar4 - 1U;
  if (((param_2[1] == 0) || (lVar4 - 1U <= (ulonglong)param_2[1])) &&
     (1 < (byte)(local_res10[0] + 1))) {
    plVar7 = (longlong *)*param_2;
    if (plVar7[2] != *plVar7) {
      plVar7[2] = plVar7[2] + -1;
    }
  }
  local_58 = param_2[2];
  param_2[2] = local_58 + 1U;
  if ((param_2[1] == 0) || (local_58 + 1U <= (ulonglong)param_2[1])) {
    lVar4 = *param_2;
    pbVar8 = *(byte **)(lVar4 + 0x10);
    if (pbVar8 != *(byte **)(lVar4 + 8)) {
      local_res10[0] = *pbVar8;
      *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
      if (local_res10[0] == 0x45) {
LAB_1800b318b:
        bVar10 = bVar18 ^ 1;
      }
      else if (local_res10[0] == 0x50) {
LAB_1800b3186:
        bVar10 = bVar18;
      }
      else {
        if (local_res10[0] == 0x65) goto LAB_1800b318b;
        bVar10 = 0;
        if (local_res10[0] == 0x70) goto LAB_1800b3186;
      }
      iVar16 = 0;
      if (bVar10 == 0) goto LAB_1800b33ab;
      lVar4 = param_2[2];
      param_2[2] = lVar4 + 1U;
      if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
        lVar4 = *param_2;
        pbVar8 = *(byte **)(lVar4 + 0x10);
        if (pbVar8 != *(byte **)(lVar4 + 8)) {
          bVar10 = *pbVar8;
          *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
          if ((bVar10 == 0x2b) || (local_res10[0] = bVar10, bVar10 == 0x2d)) {
            lVar4 = param_2[2];
            param_2[2] = lVar4 + 1U;
            if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
              lVar4 = *param_2;
              pbVar8 = *(byte **)(lVar4 + 0x10);
              if (pbVar8 != *(byte **)(lVar4 + 8)) {
                local_res10[0] = *pbVar8;
                *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
                goto LAB_1800b321b;
              }
            }
            local_res10[0] = 0;
          }
LAB_1800b321b:
          bVar9 = false;
          if (local_res10[0] == 0x30) {
            bVar9 = true;
            do {
              lVar4 = param_2[2];
              param_2[2] = lVar4 + 1U;
              if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar4 + 1U)) goto LAB_1800b3264;
              lVar4 = *param_2;
              iVar16 = 0;
              pbVar8 = *(byte **)(lVar4 + 0x10);
              if (pbVar8 == *(byte **)(lVar4 + 8)) goto LAB_1800b3264;
              local_res10[0] = *pbVar8;
              *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
            } while (local_res10[0] == 0x30);
          }
          goto LAB_1800b326f;
        }
      }
      bVar10 = 0;
      bVar9 = false;
LAB_1800b3264:
      iVar16 = 0;
      local_res10[0] = 0;
LAB_1800b326f:
      while( true ) {
        if (((char)local_res10[0] < '0') || ('9' < (char)local_res10[0])) {
          if ((byte)(local_res10[0] + 0x9f) < 0x1a) {
            uVar11 = (int)(char)local_res10[0] - 0x57;
          }
          else {
            if (0x19 < (byte)(local_res10[0] + 0xbf)) goto LAB_1800b32e8;
            uVar11 = (int)(char)local_res10[0] - 0x37;
          }
        }
        else {
          uVar11 = (int)(char)local_res10[0] - 0x30;
        }
        if (9 < uVar11) goto LAB_1800b32e8;
        bVar9 = true;
        iVar16 = uVar11 + iVar16 * 10;
        if (0x1450 < iVar16) break;
        lVar4 = param_2[2];
        param_2[2] = lVar4 + 1U;
        if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
          lVar4 = *param_2;
          pbVar8 = *(byte **)(lVar4 + 0x10);
          if (pbVar8 == *(byte **)(lVar4 + 8)) goto LAB_1800b32c4;
          local_res10[0] = *pbVar8;
          *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
        }
        else {
LAB_1800b32c4:
          local_res10[0] = 0;
        }
      }
      iVar16 = 0x1451;
LAB_1800b32e8:
      if ((byte)(local_res10[0] - 0x30) < 10) {
        uVar11 = (int)(char)local_res10[0] - 0x30;
      }
      else if ((byte)(local_res10[0] + 0x9f) < 0x1a) {
        uVar11 = (int)(char)local_res10[0] - 0x57;
      }
      else {
        if (0x19 < (byte)(local_res10[0] + 0xbf)) goto LAB_1800b334f;
        uVar11 = (int)(char)local_res10[0] - 0x37;
      }
      if (9 < uVar11) goto LAB_1800b334f;
      lVar4 = param_2[2];
      param_2[2] = lVar4 + 1U;
      if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
        lVar4 = *param_2;
        pbVar8 = *(byte **)(lVar4 + 0x10);
        if (pbVar8 == *(byte **)(lVar4 + 8)) goto LAB_1800b332f;
        local_res10[0] = *pbVar8;
        *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
      }
      else {
LAB_1800b332f:
        local_res10[0] = 0;
      }
      goto LAB_1800b32e8;
    }
  }
  local_res10[0] = 0;
  iVar16 = 0;
LAB_1800b33ab:
  lVar4 = param_2[2];
  param_2[2] = lVar4 - 1U;
  if (((param_2[1] == 0) || (lVar4 - 1U <= (ulonglong)param_2[1])) &&
     (1 < (byte)(local_res10[0] + 1))) {
    plVar7 = (longlong *)*param_2;
    if (plVar7[2] != *plVar7) {
      plVar7[2] = plVar7[2] + -1;
    }
  }
  if (piVar15 != piVar2) {
    do {
      piVar3 = (int *)((longlong)piVar15 + -1);
      if (*(char *)piVar3 != '\0') break;
      piVar15 = piVar3;
    } while (piVar3 != piVar2);
    if (piVar15 != piVar2) {
      if (0x1450 < iVar16) {
        return 9;
      }
      if (-0x1451 < iVar16) {
        iVar16 = iVar16 + ((-(uint)(bVar18 != 0) & 3) + 1) * iVar17;
        if (0x1450 < iVar16) {
          return 9;
        }
        if (-0x1451 < iVar16) {
          *param_3 = iVar16;
          param_3[1] = (int)piVar15 - (int)piVar2;
          return (uint)bVar18;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_1800b334f:
  if (bVar10 == 0x2d) {
    iVar16 = -iVar16;
  }
  if (!bVar9) {
    uVar13 = FUN_1800b573c((longlong *)&local_50);
    if ((char)uVar13 == '\0') {
      return 7;
    }
    lVar4 = param_2[2];
    param_2[2] = lVar4 + 1U;
    if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
      lVar4 = *param_2;
      pbVar8 = *(byte **)(lVar4 + 0x10);
      if (pbVar8 != *(byte **)(lVar4 + 8)) {
        local_res10[0] = *pbVar8;
        *(byte **)(lVar4 + 0x10) = pbVar8 + 1;
        goto LAB_1800b33ab;
      }
    }
    local_res10[0] = 0;
  }
  goto LAB_1800b33ab;
}


int FUN_1800b3480(char *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong local_res18 [2];
  longlong *local_38;
  char *local_30;
  longlong *local_28;

  local_28 = local_res18;
  lVar8 = 0;
  local_res18[0] = param_3;
  local_38 = param_2;
  local_30 = param_1;
  do {
    if ((*param_1 != (&DAT_1800f4f78)[lVar8]) && (*param_1 != (&DAT_1800f4f7c)[lVar8])) {
      FUN_1800b56c4((longlong *)&local_38);
      return 7;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      uVar4 = _fgetc_nolock((FILE *)*puVar3);
      cVar7 = (char)uVar4;
      if ((int)uVar4 == -1) goto LAB_1800b3502;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1800b3502:
      cVar7 = '\0';
    }
    lVar8 = lVar8 + 1;
    *param_1 = cVar7;
  } while (lVar8 != 3);
  lVar8 = param_2[2];
  param_2[2] = lVar8 - 1U;
  if (((param_2[1] == 0) || (lVar8 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar7 + 1U))) {
    puVar3 = (undefined8 *)*param_2;
    if ((int)cVar7 != 0xffffffff) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_1800c6228((int)cVar7,(FILE *)*puVar3);
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    puVar3 = (undefined8 *)*param_2;
    uVar4 = _fgetc_nolock((FILE *)*puVar3);
    if ((int)uVar4 != -1) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
      goto LAB_1800b358f;
    }
  }
  uVar4 = 0;
LAB_1800b358f:
  *param_1 = (char)uVar4;
  lVar8 = 0;
  do {
    if (((char)uVar4 != "INITY"[lVar8]) && ((char)uVar4 != "inity"[lVar8])) {
      uVar6 = FUN_1800b56c4((longlong *)&local_38);
      return ((uint)uVar6 & 0xff ^ 1) * 4 + 3;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      uVar5 = _fgetc_nolock((FILE *)*puVar3);
      uVar4 = uVar5 & 0xffffffff;
      if ((int)uVar5 == -1) goto LAB_1800b35dc;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1800b35dc:
      uVar4 = 0;
    }
    lVar8 = lVar8 + 1;
    cVar7 = (char)uVar4;
    *param_1 = cVar7;
    uVar4 = uVar4 & 0xff;
    if (lVar8 == 5) {
      lVar8 = param_2[2];
      param_2[2] = lVar8 - 1U;
      if (((param_2[1] == 0) || (lVar8 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar7 + 1U)))
      {
        puVar3 = (undefined8 *)*param_2;
        if ((int)cVar7 != 0xffffffff) {
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_1800c6228((int)cVar7,(FILE *)*puVar3);
        }
      }
      return 3;
    }
  } while( true );
}


int FUN_1800b3654(char *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong local_res18 [2];
  longlong *local_28;
  char *local_20;
  longlong *local_18;

  local_18 = local_res18;
  lVar6 = 0;
  do {
    local_28 = param_2;
    local_20 = param_1;
    if ((*param_1 != (&DAT_1800f4f58)[lVar6]) && (*param_1 != (&DAT_1800f4f5c)[lVar6])) {
      local_res18[0] = param_3;
      FUN_1800b573c((longlong *)&local_28);
      return 7;
    }
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar3 = *(char **)(lVar1 + 0x10);
      if (pcVar3 == *(char **)(lVar1 + 8)) goto LAB_1800b36b2;
      cVar5 = *pcVar3;
      *(char **)(lVar1 + 0x10) = pcVar3 + 1;
    }
    else {
LAB_1800b36b2:
      cVar5 = '\0';
    }
    lVar6 = lVar6 + 1;
    *param_1 = cVar5;
  } while (lVar6 != 3);
  lVar6 = param_2[2];
  param_2[2] = lVar6 - 1U;
  if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar5 + 1U))) {
    plVar2 = (longlong *)*param_2;
    if (plVar2[2] != *plVar2) {
      plVar2[2] = plVar2[2] + -1;
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    lVar6 = *param_2;
    pcVar3 = *(char **)(lVar6 + 0x10);
    if (pcVar3 != *(char **)(lVar6 + 8)) {
      cVar5 = *pcVar3;
      *(char **)(lVar6 + 0x10) = pcVar3 + 1;
      goto LAB_1800b3755;
    }
  }
  cVar5 = '\0';
LAB_1800b3755:
  *param_1 = cVar5;
  lVar6 = 0;
  do {
    if ((cVar5 != "INITY"[lVar6]) && (cVar5 != "inity"[lVar6])) {
      uVar4 = FUN_1800b573c((longlong *)&local_28);
      return ((uint)uVar4 & 0xff ^ 1) * 4 + 3;
    }
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar3 = *(char **)(lVar1 + 0x10);
      if (pcVar3 == *(char **)(lVar1 + 8)) goto LAB_1800b3786;
      cVar5 = *pcVar3;
      *(char **)(lVar1 + 0x10) = pcVar3 + 1;
    }
    else {
LAB_1800b3786:
      cVar5 = '\0';
    }
    lVar6 = lVar6 + 1;
    *param_1 = cVar5;
    if (lVar6 == 5) {
      lVar6 = param_2[2];
      param_2[2] = lVar6 - 1U;
      if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar5 + 1U)))
      {
        plVar2 = (longlong *)*param_2;
        if (plVar2[2] != *plVar2) {
          plVar2[2] = plVar2[2] + -1;
        }
      }
      return 3;
    }
  } while( true );
}


int FUN_1800b3804(char *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_res18 [2];
  longlong *local_38;
  char *local_30;
  longlong *local_28;

  local_28 = local_res18;
  lVar10 = 0;
  local_res18[0] = param_3;
  local_38 = param_2;
  local_30 = param_1;
  do {
    if ((*param_1 != (&DAT_1800f4f90)[lVar10]) && (*param_1 != (&DAT_1800f4f94)[lVar10])) {
      FUN_1800b56c4((longlong *)&local_38);
      return 7;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      uVar5 = _fgetc_nolock((FILE *)*puVar3);
      iVar4 = (int)uVar5;
      if (iVar4 == -1) goto LAB_1800b3885;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1800b3885:
      iVar4 = 0;
    }
    lVar10 = lVar10 + 1;
    cVar8 = (char)iVar4;
    *param_1 = cVar8;
  } while (lVar10 != 3);
  lVar10 = param_2[2];
  param_2[2] = lVar10 - 1U;
  if (((param_2[1] == 0) || (lVar10 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar8 + 1U))) {
    puVar3 = (undefined8 *)*param_2;
    if ((int)cVar8 != 0xffffffff) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_1800c6228((int)cVar8,(FILE *)*puVar3);
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    puVar3 = (undefined8 *)*param_2;
    uVar5 = _fgetc_nolock((FILE *)*puVar3);
    if ((int)uVar5 != -1) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
      *param_1 = (char)uVar5;
      if ((char)uVar5 != '(') goto LAB_1800b3a51;
      lVar10 = param_2[2];
      param_2[2] = lVar10 + 1U;
      if ((param_2[1] == 0) || (lVar10 + 1U <= (ulonglong)param_2[1])) {
        puVar3 = (undefined8 *)*param_2;
        uVar5 = _fgetc_nolock((FILE *)*puVar3);
        if ((int)uVar5 == -1) goto LAB_1800b394d;
        plVar1 = puVar3 + 1;
        *plVar1 = *plVar1 + 1;
      }
      else {
LAB_1800b394d:
        uVar5 = 0;
      }
      *param_1 = (char)uVar5;
      uVar6 = FUN_1800b3df4(param_1,param_2);
      if ((char)uVar6 != '\0') {
        lVar10 = param_2[2];
        cVar8 = *param_1;
        param_2[2] = lVar10 - 1U;
        if ((((param_2[1] == 0) || (lVar10 - 1U <= (ulonglong)param_2[1])) &&
            (1 < (byte)(cVar8 + 1U))) && (puVar3 = (undefined8 *)*param_2, (int)cVar8 != 0xffffffff)
           ) {
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_1800c6228((int)cVar8,(FILE *)*puVar3);
        }
        return 5;
      }
      uVar6 = FUN_1800b3ce0(param_1,param_2);
      cVar8 = *param_1;
      uVar9 = (uint)cVar8;
      uVar5 = (ulonglong)uVar9;
      if ((char)uVar6 != '\0') {
        lVar10 = param_2[2];
        param_2[2] = lVar10 - 1U;
        if (((param_2[1] == 0) || (lVar10 - 1U <= (ulonglong)param_2[1])) &&
           ((1 < (byte)(cVar8 + 1U) && (puVar3 = (undefined8 *)*param_2, uVar9 != 0xffffffff)))) {
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_1800c6228(uVar9,(FILE *)*puVar3);
        }
        return 6;
      }
      while( true ) {
        cVar8 = (char)uVar5;
        if (cVar8 == ')') {
          return 4;
        }
        if ((cVar8 == '\0') ||
           ((((9 < (byte)(cVar8 - 0x30U) && (0x19 < (byte)(cVar8 + 0x9fU))) &&
             (0x19 < (byte)(cVar8 + 0xbfU))) && (cVar8 != '_')))) break;
        lVar10 = param_2[2];
        param_2[2] = lVar10 + 1U;
        if ((param_2[1] == 0) || (lVar10 + 1U <= (ulonglong)param_2[1])) {
          puVar3 = (undefined8 *)*param_2;
          uVar7 = _fgetc_nolock((FILE *)*puVar3);
          uVar5 = uVar7 & 0xffffffff;
          if ((int)uVar7 == -1) goto LAB_1800b3a3e;
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_1800b3a3e:
          uVar5 = 0;
        }
        *param_1 = (char)uVar5;
      }
      goto LAB_1800b3a51;
    }
  }
  *param_1 = '\0';
LAB_1800b3a51:
  uVar6 = FUN_1800b56c4((longlong *)&local_38);
  return (-(uint)((char)uVar6 != '\0') & 0xfffffffd) + 7;
}


int FUN_1800b3a7c(char *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong local_res18 [2];
  longlong *local_28;
  char *local_20;
  longlong *local_18;

  local_18 = local_res18;
  lVar6 = 0;
  do {
    local_28 = param_2;
    local_20 = param_1;
    if ((*param_1 != (&DAT_1800f4f70)[lVar6]) && (*param_1 != (&DAT_1800f4f74)[lVar6])) {
      local_res18[0] = param_3;
      FUN_1800b573c((longlong *)&local_28);
      return 7;
    }
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar3 = *(char **)(lVar1 + 0x10);
      if (pcVar3 == *(char **)(lVar1 + 8)) goto LAB_1800b3add;
      cVar5 = *pcVar3;
      *(char **)(lVar1 + 0x10) = pcVar3 + 1;
    }
    else {
LAB_1800b3add:
      cVar5 = '\0';
    }
    lVar6 = lVar6 + 1;
    *param_1 = cVar5;
  } while (lVar6 != 3);
  lVar6 = param_2[2];
  param_2[2] = lVar6 - 1U;
  if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar5 + 1U))) {
    plVar2 = (longlong *)*param_2;
    if (plVar2[2] != *plVar2) {
      plVar2[2] = plVar2[2] + -1;
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    lVar6 = *param_2;
    pcVar3 = *(char **)(lVar6 + 0x10);
    if (pcVar3 != *(char **)(lVar6 + 8)) {
      cVar5 = *pcVar3;
      *(char **)(lVar6 + 0x10) = pcVar3 + 1;
      *param_1 = cVar5;
      if (cVar5 != '(') goto LAB_1800b3b87;
      lVar6 = param_2[2];
      param_2[2] = lVar6 + 1U;
      if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
        lVar6 = *param_2;
        pcVar3 = *(char **)(lVar6 + 0x10);
        if (pcVar3 == *(char **)(lVar6 + 8)) goto LAB_1800b3bb8;
        cVar5 = *pcVar3;
        *(char **)(lVar6 + 0x10) = pcVar3 + 1;
      }
      else {
LAB_1800b3bb8:
        cVar5 = '\0';
      }
      *param_1 = cVar5;
      uVar4 = FUN_1800b3e8c(param_1,param_2);
      if ((char)uVar4 != '\0') {
        lVar6 = param_2[2];
        cVar5 = *param_1;
        param_2[2] = lVar6 - 1U;
        if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar5 + 1U))
           ) {
          plVar2 = (longlong *)*param_2;
          if (plVar2[2] != *plVar2) {
            plVar2[2] = plVar2[2] + -1;
          }
        }
        return 5;
      }
      uVar4 = FUN_1800b3d78(param_1,param_2);
      cVar5 = *param_1;
      if ((char)uVar4 != '\0') {
        lVar6 = param_2[2];
        param_2[2] = lVar6 - 1U;
        if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar5 + 1U))
           ) {
          plVar2 = (longlong *)*param_2;
          if (plVar2[2] != *plVar2) {
            plVar2[2] = plVar2[2] + -1;
          }
        }
        return 6;
      }
      while( true ) {
        if (cVar5 == ')') {
          return 4;
        }
        if ((cVar5 == '\0') ||
           ((((9 < (byte)(cVar5 - 0x30U) && (0x19 < (byte)(cVar5 + 0x9fU))) &&
             (0x19 < (byte)(cVar5 + 0xbfU))) && (cVar5 != '_')))) break;
        lVar6 = param_2[2];
        param_2[2] = lVar6 + 1U;
        if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
          lVar6 = *param_2;
          pcVar3 = *(char **)(lVar6 + 0x10);
          if (pcVar3 == *(char **)(lVar6 + 8)) goto LAB_1800b3cad;
          cVar5 = *pcVar3;
          *(char **)(lVar6 + 0x10) = pcVar3 + 1;
        }
        else {
LAB_1800b3cad:
          cVar5 = '\0';
        }
        *param_1 = cVar5;
      }
      goto LAB_1800b3b87;
    }
  }
  *param_1 = '\0';
LAB_1800b3b87:
  uVar4 = FUN_1800b573c((longlong *)&local_28);
  return (-(uint)((char)uVar4 != '\0') & 0xfffffffd) + 7;
}


undefined8 FUN_1800b3ce0(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong in_RAX;
  undefined1 uVar4;
  longlong lVar5;

  uVar4 = 0;
  lVar5 = 0;
  do {
    cVar2 = *param_1;
    in_RAX = CONCAT71((int7)(in_RAX >> 8),cVar2);
    if ((cVar2 != (&DAT_1800f4fc0)[lVar5]) && (cVar2 != (&DAT_1800f4fc4)[lVar5]))
    goto LAB_1800b3d5b;
    in_RAX = param_2[2] + 1;
    param_2[2] = in_RAX;
    if ((param_2[1] == 0) || (in_RAX <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      in_RAX = _fgetc_nolock((FILE *)*puVar3);
      if ((int)in_RAX == -1) goto LAB_1800b3d4b;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1800b3d4b:
      in_RAX = in_RAX & 0xffffffffffffff00;
    }
    lVar5 = lVar5 + 1;
    *param_1 = (char)in_RAX;
  } while (lVar5 != 4);
  uVar4 = 1;
LAB_1800b3d5b:
  return CONCAT71((int7)(in_RAX >> 8),uVar4);
}


undefined8 FUN_1800b3d78(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char *in_RAX;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;

  uVar3 = 0;
  lVar4 = 0;
  do {
    cVar2 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
    if ((cVar2 != "IND)ind)SNAN)"[lVar4]) && (cVar2 != "IND)ind)SNAN)"[lVar4 + 4]))
    goto LAB_1800b3de8;
    in_RAX = (char *)(param_2[2] + 1);
    param_2[2] = (longlong)in_RAX;
    if ((param_2[1] == 0) || (in_RAX <= (char *)param_2[1])) {
      lVar1 = *param_2;
      in_RAX = *(char **)(lVar1 + 0x10);
      if (in_RAX == *(char **)(lVar1 + 8)) goto LAB_1800b3dbe;
      cVar2 = *in_RAX;
      in_RAX = in_RAX + 1;
      *(char **)(lVar1 + 0x10) = in_RAX;
    }
    else {
LAB_1800b3dbe:
      cVar2 = '\0';
    }
    lVar4 = lVar4 + 1;
    *param_1 = cVar2;
  } while (lVar4 != 4);
  uVar3 = 1;
LAB_1800b3de8:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
}


undefined8 FUN_1800b3df4(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong in_RAX;
  undefined1 uVar4;
  longlong lVar5;

  uVar4 = 0;
  lVar5 = 0;
  do {
    cVar2 = *param_1;
    in_RAX = CONCAT71((int7)(in_RAX >> 8),cVar2);
    if ((cVar2 != "IND)ind)SNAN)"[lVar5 + 8]) && (cVar2 != (&DAT_1800f4fb8)[lVar5]))
    goto LAB_1800b3e6f;
    in_RAX = param_2[2] + 1;
    param_2[2] = in_RAX;
    if ((param_2[1] == 0) || (in_RAX <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      in_RAX = _fgetc_nolock((FILE *)*puVar3);
      if ((int)in_RAX == -1) goto LAB_1800b3e5f;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1800b3e5f:
      in_RAX = in_RAX & 0xffffffffffffff00;
    }
    lVar5 = lVar5 + 1;
    *param_1 = (char)in_RAX;
  } while (lVar5 != 5);
  uVar4 = 1;
LAB_1800b3e6f:
  return CONCAT71((int7)(in_RAX >> 8),uVar4);
}


undefined8 FUN_1800b3e8c(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char *in_RAX;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;

  uVar3 = 0;
  lVar4 = 0;
  do {
    cVar2 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
    if ((cVar2 != (&DAT_1800f4f98)[lVar4]) && (cVar2 != (&DAT_1800f4fa0)[lVar4]))
    goto LAB_1800b3efc;
    in_RAX = (char *)(param_2[2] + 1);
    param_2[2] = (longlong)in_RAX;
    if ((param_2[1] == 0) || (in_RAX <= (char *)param_2[1])) {
      lVar1 = *param_2;
      in_RAX = *(char **)(lVar1 + 0x10);
      if (in_RAX == *(char **)(lVar1 + 8)) goto LAB_1800b3ed2;
      cVar2 = *in_RAX;
      in_RAX = in_RAX + 1;
      *(char **)(lVar1 + 0x10) = in_RAX;
    }
    else {
LAB_1800b3ed2:
      cVar2 = '\0';
    }
    lVar4 = lVar4 + 1;
    *param_1 = cVar2;
  } while (lVar4 != 5);
  uVar3 = 1;
LAB_1800b3efc:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
}


ulonglong FUN_1800b3f08(int param_1,floating_point_string *param_2,uint *param_3)

{
  SLD_STATUS SVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  uint uVar3;
  uint *local_18;
  undefined1 local_10;

  if (param_1 < 6) {
    if (param_1 == 5) {
      uVar3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7f800000 |
              *param_3 & 0x7f800000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 0;
        uVar2 = FUN_1800b5fd0((uint *)param_2,&local_18);
        return uVar2;
      }
      if (param_1 == 1) {
        local_10 = 0;
        SVar1 = __crt_strtox::convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return CONCAT44(extraout_var,SVar1);
      }
      if (param_1 == 2) {
        uVar3 = -(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000;
      }
      else if (param_1 == 3) {
        uVar3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7f800000 |
                *param_3 & 0x7f800000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVar3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7fffffff;
      }
    }
    *param_3 = uVar3;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) +
                     0x7f800000 | *param_3 & 0x7f800000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xffc00000;
  }
  return 0;
}


ulonglong FUN_1800b4070(int param_1,floating_point_string *param_2,ulonglong *param_3)

{
  SLD_STATUS SVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong *local_18;
  undefined1 local_10;

  if (param_1 < 6) {
    if (param_1 == 5) {
      uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
              0x7ff0000000000000 | *param_3 & 0x7ff0000000000000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 1;
        uVar2 = FUN_1800b5fd0((uint *)param_2,&local_18);
        return uVar2;
      }
      if (param_1 == 1) {
        local_10 = 1;
        SVar1 = __crt_strtox::convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return CONCAT44(extraout_var,SVar1);
      }
      if (param_1 == 2) {
        uVar2 = -(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000;
      }
      else if (param_1 == 3) {
        uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
                0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
                0x7fffffffffffffff;
      }
    }
    *param_3 = uVar2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000
          ;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) &
                     0x8000000000000000) + 0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xfff8000000000000;
  }
  return 0;
}


ulonglong FUN_1800b4248(longlong *param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  __acrt_ptd *p_Var9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;

  puVar2 = (undefined8 *)*param_2;
  if ((puVar2 == (undefined8 *)0x0) || (param_2[3] == 0)) {
    p_Var9 = FUN_1800c2350();
    *(undefined4 *)p_Var9 = 0x16;
    FUN_1800c2ac4();
LAB_1800b42c7:
    puVar3 = (undefined1 *)param_2[3];
    if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *puVar3 = 0;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_1800b42c7;
  }
  lVar4 = param_2[2];
  uVar10 = lVar4 + 1;
  param_2[2] = uVar10;
  if ((param_2[1] == 0) || (uVar10 <= (ulonglong)param_2[1])) {
    uVar10 = _fgetc_nolock((FILE *)*puVar2);
    uVar11 = uVar10 & 0xffffffff;
    if ((int)uVar10 == -1) goto LAB_1800b4319;
    puVar2[1] = puVar2[1] + 1;
  }
  else {
LAB_1800b4319:
    uVar11 = 0;
  }
  if ((char)param_1[5] == '\0') {
    FUN_1800b0fd0(param_1);
  }
  while( true ) {
    uVar7 = FUN_1800b9554((uint)uVar11 & 0xff,8,(_locale_t)(param_1 + 3));
    if (uVar7 == 0) break;
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar2 = (undefined8 *)*param_2;
      uVar11 = _fgetc_nolock((FILE *)*puVar2);
      if ((int)uVar11 == -1) goto LAB_1800b435c;
      plVar1 = puVar2 + 1;
      *plVar1 = *plVar1 + 1;
      uVar11 = uVar11 & 0xff;
    }
    else {
LAB_1800b435c:
      uVar11 = 0;
    }
  }
  bVar15 = param_4 | 2;
  if ((char)uVar11 != '-') {
    bVar15 = param_4;
  }
  if (((uint)uVar11 - 0x2b & 0xfd) == 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar2 = (undefined8 *)*param_2;
      uVar11 = _fgetc_nolock((FILE *)*puVar2);
      if ((int)uVar11 != -1) {
        plVar1 = puVar2 + 1;
        *plVar1 = *plVar1 + 1;
        uVar11 = uVar11 & 0xff;
        goto LAB_1800b43bd;
      }
    }
    uVar11 = 0;
  }
LAB_1800b43bd:
  uVar7 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1800b44cd;
  cVar6 = (char)uVar11;
  if ((byte)(cVar6 - 0x30U) < 10) {
    iVar8 = cVar6 + -0x30;
LAB_1800b43fb:
    if (iVar8 == 0) {
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar2 = (undefined8 *)*param_2;
        uVar10 = _fgetc_nolock((FILE *)*puVar2);
        iVar8 = (int)uVar10;
        if (iVar8 == -1) goto LAB_1800b4479;
        plVar1 = puVar2 + 1;
        *plVar1 = *plVar1 + 1;
        if ((iVar8 - 0x58U & 0xdf) == 0) {
          uVar7 = 0x10;
          if (param_3 != 0) {
            uVar7 = param_3;
          }
          lVar5 = param_2[2];
          param_2[2] = lVar5 + 1U;
          if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
            puVar2 = (undefined8 *)*param_2;
            uVar11 = _fgetc_nolock((FILE *)*puVar2);
            if ((int)uVar11 != -1) {
              plVar1 = puVar2 + 1;
              *plVar1 = *plVar1 + 1;
              uVar11 = uVar11 & 0xff;
              goto LAB_1800b44cd;
            }
          }
          uVar11 = 0;
          goto LAB_1800b44cd;
        }
      }
      else {
LAB_1800b4479:
        iVar8 = 0;
      }
      uVar7 = 8;
      if (param_3 != 0) {
        uVar7 = param_3;
      }
      lVar5 = param_2[2];
      param_2[2] = lVar5 - 1U;
      if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
         (cVar6 = (char)iVar8, 1 < (byte)(cVar6 + 1U))) {
        puVar2 = (undefined8 *)*param_2;
        if ((int)cVar6 != 0xffffffff) {
          plVar1 = puVar2 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_1800c6228((int)cVar6,(FILE *)*puVar2);
        }
      }
      goto LAB_1800b44cd;
    }
  }
  else {
    if ((byte)(cVar6 + 0x9fU) < 0x1a) {
      iVar8 = cVar6 + -0x57;
      goto LAB_1800b43fb;
    }
    if ((byte)(cVar6 + 0xbfU) < 0x1a) {
      iVar8 = cVar6 + -0x37;
      goto LAB_1800b43fb;
    }
  }
  uVar7 = 10;
  if (param_3 != 0) {
    uVar7 = param_3;
  }
LAB_1800b44cd:
  uVar10 = 0;
  do {
    while( true ) {
      cVar6 = (char)uVar11;
      uVar16 = (uint)cVar6;
      if ((byte)(cVar6 - 0x30U) < 10) {
        uVar13 = uVar16 - 0x30;
      }
      else if ((byte)(cVar6 + 0x9fU) < 0x1a) {
        uVar13 = uVar16 - 0x57;
      }
      else if ((byte)(cVar6 + 0xbfU) < 0x1a) {
        uVar13 = uVar16 - 0x37;
      }
      else {
        uVar13 = 0xffffffff;
      }
      if (uVar7 <= uVar13) {
        lVar5 = param_2[2];
        param_2[2] = lVar5 - 1U;
        if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
           ((1 < (byte)(cVar6 + 1U) && (puVar2 = (undefined8 *)*param_2, uVar16 != 0xffffffff)))) {
          plVar1 = puVar2 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_1800c6228(uVar16,(FILE *)*puVar2);
        }
        if ((bVar15 & 8) == 0) {
          if (lVar4 != param_2[2]) {
            *(undefined1 *)param_2[3] = 0;
          }
          if ((undefined1 *)param_2[3] == (undefined1 *)0x0) {
            return 0;
          }
          if (param_2[2] == 0) {
            *(undefined1 *)param_2[3] = 0;
            return 0;
          }
          return 0;
        }
        uVar12 = FUN_1800b2204(bVar15,uVar10);
        if ((char)uVar12 == '\0') {
          if ((bVar15 & 2) != 0) {
            uVar10 = -uVar10;
          }
        }
        else {
          *(undefined1 *)(param_1 + 6) = 1;
          *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
          if ((bVar15 & 1) != 0) {
            puVar3 = (undefined1 *)param_2[3];
            if ((bVar15 & 2) == 0) {
              if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
                *puVar3 = 0;
              }
              return 0x7fffffffffffffff;
            }
            if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
              *puVar3 = 0;
            }
            return 0x8000000000000000;
          }
          uVar10 = 0xffffffffffffffff;
        }
        if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
          *(undefined1 *)param_2[3] = 0;
        }
        return uVar10;
      }
      uVar11 = (longlong)(int)uVar7 * uVar10;
      uVar14 = uVar13 + uVar11;
      lVar5 = param_2[2];
      bVar15 = bVar15 | (uVar14 < uVar11 ||
                        0xffffffffffffffffU / (ulonglong)(longlong)(int)uVar7 < uVar10) << 2 | 8U;
      param_2[2] = lVar5 + 1U;
      uVar10 = uVar14;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) break;
LAB_1800b456c:
      uVar11 = 0;
    }
    puVar2 = (undefined8 *)*param_2;
    uVar11 = _fgetc_nolock((FILE *)*puVar2);
    if ((int)uVar11 == -1) goto LAB_1800b456c;
    plVar1 = puVar2 + 1;
    *plVar1 = *plVar1 + 1;
    uVar11 = uVar11 & 0xff;
  } while( true );
}


ulonglong FUN_1800b4680(undefined4 *param_1,longlong *param_2,uint param_3,byte param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_1 == (undefined4 *)0x0) {
    if (DAT_180115f2c != 0) goto LAB_1800b46db;
    local_30 = PTR_PTR_1801125f8._0_4_;
    uStack_2c = PTR_PTR_1801125f8._4_4_;
    uStack_28 = PTR_DAT_180112600._0_4_;
    uStack_24 = PTR_DAT_180112600._4_4_;
  }
  else {
    local_30 = *param_1;
    uStack_2c = param_1[1];
    uStack_28 = param_1[2];
    uStack_24 = param_1[3];
  }
  local_20 = '\x01';
LAB_1800b46db:
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = param_2[3];
  param_2[3] = 0;
  *param_2 = 0;
  uVar1 = FUN_1800b4248(local_48,&local_68,param_3,param_4);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
    *(undefined1 *)param_2[3] = 0;
  }
  return uVar1;
}


ulonglong FUN_1800b4780(longlong *param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  __acrt_ptd *p_Var7;
  byte *pbVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  char cVar15;
  ulonglong uVar16;

  lVar1 = *param_2;
  if ((lVar1 == 0) || (param_2[3] == 0)) {
    p_Var7 = FUN_1800c2350();
    *(undefined4 *)p_Var7 = 0x16;
    FUN_1800c2ac4();
LAB_1800b47ff:
    puVar2 = (undefined1 *)param_2[3];
    if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *puVar2 = 0;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_1800b47ff;
  }
  lVar3 = param_2[2];
  uVar16 = lVar3 + 1;
  param_2[2] = uVar16;
  if (((param_2[1] == 0) || (uVar16 <= (ulonglong)param_2[1])) &&
     (pbVar8 = *(byte **)(lVar1 + 0x10), pbVar8 != *(byte **)(lVar1 + 8))) {
    uVar10 = (uint)*pbVar8;
    *(byte **)(lVar1 + 0x10) = pbVar8 + 1;
  }
  else {
    uVar10 = 0;
  }
  if ((char)param_1[5] == '\0') {
    FUN_1800b0fd0(param_1);
  }
  while( true ) {
    uVar5 = FUN_1800b9554(uVar10,8,(_locale_t)(param_1 + 3));
    if (uVar5 == 0) break;
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pbVar8 = *(byte **)(lVar1 + 0x10);
      if (pbVar8 == *(byte **)(lVar1 + 8)) goto LAB_1800b4876;
      uVar10 = (uint)*pbVar8;
      *(byte **)(lVar1 + 0x10) = pbVar8 + 1;
    }
    else {
LAB_1800b4876:
      uVar10 = 0;
    }
  }
  bVar14 = param_4 | 2;
  if ((char)uVar10 != '-') {
    bVar14 = param_4;
  }
  if ((uVar10 - 0x2b & 0xfd) == 0) {
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pbVar8 = *(byte **)(lVar1 + 0x10);
      if (pbVar8 != *(byte **)(lVar1 + 8)) {
        uVar10 = (uint)*pbVar8;
        *(byte **)(lVar1 + 0x10) = pbVar8 + 1;
        goto LAB_1800b48f3;
      }
    }
    uVar10 = 0;
  }
LAB_1800b48f3:
  uVar5 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1800b4a0a;
  cVar15 = (char)uVar10;
  if ((byte)(cVar15 - 0x30U) < 10) {
    iVar6 = cVar15 + -0x30;
LAB_1800b4939:
    if (iVar6 == 0) {
      uVar16 = param_2[1];
      uVar12 = param_2[2] + 1;
      param_2[2] = uVar12;
      if ((uVar16 == 0) || (uVar12 <= uVar16)) {
        lVar1 = *param_2;
        pcVar4 = *(char **)(lVar1 + 0x10);
        if (pcVar4 == *(char **)(lVar1 + 8)) goto LAB_1800b4967;
        cVar15 = *pcVar4;
        *(char **)(lVar1 + 0x10) = pcVar4 + 1;
        uVar12 = param_2[2];
        uVar16 = param_2[1];
        if ((cVar15 != 'x') && (cVar15 != 'X')) goto LAB_1800b498a;
        uVar5 = 0x10;
        if (param_3 != 0) {
          uVar5 = param_3;
        }
        param_2[2] = uVar12 + 1;
        if ((uVar16 != 0) && (uVar16 < uVar12 + 1)) {
LAB_1800b49e4:
          uVar10 = 0;
          goto LAB_1800b4a0a;
        }
        plVar11 = (longlong *)*param_2;
        pbVar8 = (byte *)plVar11[2];
        if (pbVar8 == (byte *)plVar11[1]) goto LAB_1800b49e4;
        uVar10 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      }
      else {
LAB_1800b4967:
        cVar15 = '\0';
LAB_1800b498a:
        uVar5 = 8;
        if (param_3 != 0) {
          uVar5 = param_3;
        }
        param_2[2] = uVar12 - 1;
        if (((uVar16 != 0) && (uVar16 < uVar12 - 1)) || ((byte)(cVar15 + 1U) < 2))
        goto LAB_1800b4a0a;
        plVar11 = (longlong *)*param_2;
        if (plVar11[2] == *plVar11) goto LAB_1800b4a0a;
        pbVar8 = (byte *)(plVar11[2] + -1);
      }
      plVar11[2] = (longlong)pbVar8;
      goto LAB_1800b4a0a;
    }
  }
  else {
    if ((byte)(cVar15 + 0x9fU) < 0x1a) {
      iVar6 = cVar15 + -0x57;
      goto LAB_1800b4939;
    }
    if ((byte)(cVar15 + 0xbfU) < 0x1a) {
      iVar6 = cVar15 + -0x37;
      goto LAB_1800b4939;
    }
  }
  uVar5 = 10;
  if (param_3 != 0) {
    uVar5 = param_3;
  }
LAB_1800b4a0a:
  uVar16 = 0;
  do {
    while( true ) {
      cVar15 = (char)uVar10;
      if ((byte)(cVar15 - 0x30U) < 10) {
        uVar10 = (int)cVar15 - 0x30;
      }
      else if ((byte)(cVar15 + 0x9fU) < 0x1a) {
        uVar10 = (int)cVar15 - 0x57;
      }
      else if ((byte)(cVar15 + 0xbfU) < 0x1a) {
        uVar10 = (int)cVar15 - 0x37;
      }
      else {
        uVar10 = 0xffffffff;
      }
      if (uVar5 <= uVar10) {
        lVar1 = param_2[2];
        param_2[2] = lVar1 - 1U;
        if (((param_2[1] == 0) || (lVar1 - 1U <= (ulonglong)param_2[1])) &&
           (1 < (byte)(cVar15 + 1U))) {
          plVar11 = (longlong *)*param_2;
          if (plVar11[2] != *plVar11) {
            plVar11[2] = plVar11[2] + -1;
          }
        }
        if ((bVar14 & 8) == 0) {
          if (lVar3 != param_2[2]) {
            *(undefined1 *)param_2[3] = 0;
          }
          if ((undefined1 *)param_2[3] == (undefined1 *)0x0) {
            return 0;
          }
          if (param_2[2] == 0) {
            *(undefined1 *)param_2[3] = 0;
            return 0;
          }
          return 0;
        }
        uVar9 = FUN_1800b2204(bVar14,uVar16);
        if ((char)uVar9 == '\0') {
          if ((bVar14 & 2) != 0) {
            uVar16 = -uVar16;
          }
        }
        else {
          *(undefined1 *)(param_1 + 6) = 1;
          *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
          if ((bVar14 & 1) != 0) {
            puVar2 = (undefined1 *)param_2[3];
            if ((bVar14 & 2) == 0) {
              if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
                *puVar2 = 0;
              }
              return 0x7fffffffffffffff;
            }
            if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
              *puVar2 = 0;
            }
            return 0x8000000000000000;
          }
          uVar16 = 0xffffffffffffffff;
        }
        if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
          *(undefined1 *)param_2[3] = 0;
        }
        return uVar16;
      }
      uVar12 = (longlong)(int)uVar5 * uVar16;
      uVar13 = uVar10 + uVar12;
      lVar1 = param_2[2];
      bVar14 = bVar14 | (uVar13 < uVar12 ||
                        0xffffffffffffffffU / (ulonglong)(longlong)(int)uVar5 < uVar16) << 2 | 8U;
      param_2[2] = lVar1 + 1U;
      uVar16 = uVar13;
      if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) break;
LAB_1800b4a95:
      uVar10 = 0;
    }
    lVar1 = *param_2;
    pbVar8 = *(byte **)(lVar1 + 0x10);
    if (pbVar8 == *(byte **)(lVar1 + 8)) goto LAB_1800b4a95;
    uVar10 = (uint)*pbVar8;
    *(byte **)(lVar1 + 0x10) = pbVar8 + 1;
  } while( true );
}


ulonglong FUN_1800b4bb4(undefined4 *param_1,longlong *param_2,uint param_3,byte param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_1 == (undefined4 *)0x0) {
    if (DAT_180115f2c != 0) goto LAB_1800b4c0f;
    local_30 = PTR_PTR_1801125f8._0_4_;
    uStack_2c = PTR_PTR_1801125f8._4_4_;
    uStack_28 = PTR_DAT_180112600._0_4_;
    uStack_24 = PTR_DAT_180112600._4_4_;
  }
  else {
    local_30 = *param_1;
    uStack_2c = param_1[1];
    uStack_28 = param_1[2];
    uStack_24 = param_1[3];
  }
  local_20 = '\x01';
LAB_1800b4c0f:
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = param_2[3];
  param_2[3] = 0;
  *param_2 = 0;
  uVar1 = FUN_1800b4780(local_48,&local_68,param_3,param_4);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
    *(undefined1 *)param_2[3] = 0;
  }
  return uVar1;
}


bool FUN_1800b4cb4(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  __acrt_ptd *p_Var4;
  bool bVar5;
  char local_res8 [8];
  uint local_res10 [2];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;

  local_res10[0] = 0;
  local_28 = param_1 + 8;
  local_20 = *(undefined8 *)(param_1 + 0x38);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  uVar3 = parse_floating_point<>(*(_locale_t *)(param_1 + 0x70),&local_28,local_res10);
  if ((local_res8[0] == '\0') || ((int)uVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x32) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x78);
    *(longlong **)(param_1 + 0x78) = plVar1 + 1;
    puVar2 = (uint *)*plVar1;
    bVar5 = puVar2 != (uint *)0x0;
    if (bVar5) {
      *puVar2 = local_res10[0];
    }
    else {
      p_Var4 = FUN_1800c2350();
      *(undefined4 *)p_Var4 = 0x16;
      FUN_1800c2ac4();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}


bool FUN_1800b4d50(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  __acrt_ptd *p_Var4;
  bool bVar5;
  char local_res8 [8];
  uint local_res10 [2];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;

  local_res10[0] = 0;
  local_28 = param_1 + 8;
  local_20 = *(undefined8 *)(param_1 + 0x40);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  uVar3 = parse_floating_point<>(*(_locale_t *)(param_1 + 0x78),&local_28,local_res10);
  if ((local_res8[0] == '\0') || ((int)uVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x3a) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x80);
    *(longlong **)(param_1 + 0x80) = plVar1 + 1;
    puVar2 = (uint *)*plVar1;
    bVar5 = puVar2 != (uint *)0x0;
    if (bVar5) {
      *puVar2 = local_res10[0];
    }
    else {
      p_Var4 = FUN_1800c2350();
      *(undefined4 *)p_Var4 = 0x16;
      FUN_1800c2ac4();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}


bool FUN_1800b4df4(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  __acrt_ptd *p_Var4;
  bool bVar5;
  char local_res8 [8];
  ulonglong local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;

  local_28 = param_1 + 8;
  local_res8[0] = '\x01';
  local_20 = *(undefined8 *)(param_1 + 0x38);
  local_10 = local_res8;
  local_res10 = 0;
  local_18 = 0;
  uVar3 = parse_floating_point<>(*(_locale_t *)(param_1 + 0x70),&local_28,&local_res10);
  if ((local_res8[0] == '\0') || ((int)uVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x32) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x78);
    *(longlong **)(param_1 + 0x78) = plVar1 + 1;
    puVar2 = (ulonglong *)*plVar1;
    bVar5 = puVar2 != (ulonglong *)0x0;
    if (bVar5) {
      *puVar2 = local_res10;
    }
    else {
      p_Var4 = FUN_1800c2350();
      *(undefined4 *)p_Var4 = 0x16;
      FUN_1800c2ac4();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}


bool FUN_1800b4e98(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  __acrt_ptd *p_Var4;
  bool bVar5;
  char local_res8 [8];
  ulonglong local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;

  local_28 = param_1 + 8;
  local_res8[0] = '\x01';
  local_20 = *(undefined8 *)(param_1 + 0x40);
  local_10 = local_res8;
  local_res10 = 0;
  local_18 = 0;
  uVar3 = parse_floating_point<>(*(_locale_t *)(param_1 + 0x78),&local_28,&local_res10);
  if ((local_res8[0] == '\0') || ((int)uVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x3a) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x80);
    *(longlong **)(param_1 + 0x80) = plVar1 + 1;
    puVar2 = (ulonglong *)*plVar1;
    bVar5 = puVar2 != (ulonglong *)0x0;
    if (bVar5) {
      *puVar2 = local_res10;
    }
    else {
      p_Var4 = FUN_1800c2350();
      *(undefined4 *)p_Var4 = 0x16;
      FUN_1800c2ac4();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}


ulonglong FUN_1800b4f40(byte *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  __acrt_ptd *in_RAX;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  bool bVar10;

  pbVar7 = (byte *)0x0;
  if (param_1[0x32] == 0) {
    in_RAX = *(__acrt_ptd **)(param_1 + 0x78);
    p_Var4 = in_RAX + 8;
    *(__acrt_ptd **)(param_1 + 0x78) = p_Var4;
    pbVar7 = *(byte **)in_RAX;
    if (pbVar7 == (byte *)0x0) {
      p_Var4 = FUN_1800c2350();
      *(undefined4 *)p_Var4 = 0x16;
      in_RAX = (__acrt_ptd *)FUN_1800c2ac4();
      goto LAB_1800b4f8e;
    }
    if ((*param_1 & 1) != 0) {
      in_RAX = in_RAX + 0x10;
      *(__acrt_ptd **)(param_1 + 0x78) = in_RAX;
      uVar5 = (ulonglong)*(uint *)p_Var4;
      if (uVar5 == 0) {
        if ((*param_1 & 4) != 0) {
          uVar5 = _fgetc_nolock(*(FILE **)(param_1 + 8));
          if ((int)uVar5 != -1) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          }
LAB_1800b4fd8:
          *pbVar7 = 0;
        }
LAB_1800b4fdb:
        in_RAX = FUN_1800c2350();
        *(undefined4 *)in_RAX = 0xc;
        goto LAB_1800b4f8e;
      }
      goto LAB_1800b4fec;
    }
  }
  uVar5 = 0xffffffffffffffff;
LAB_1800b4fec:
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar9 = uVar5;
  if ((param_2 != 0) && (uVar5 != 0xffffffffffffffff)) {
    uVar9 = uVar5 - 1;
  }
  lVar6 = 0;
  pbVar8 = pbVar7;
  do {
    if ((lVar1 != 0) && (lVar6 == lVar1)) goto LAB_1800b508b;
    in_RAX = (__acrt_ptd *)_fgetc_nolock(*(FILE **)(param_1 + 8));
    uVar3 = (uint)in_RAX;
    bVar2 = (byte)in_RAX;
    if (uVar3 == 0xffffffff) goto LAB_1800b508b;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    if (param_2 != 0) {
      if (param_2 == 1) {
        in_RAX = (__acrt_ptd *)(ulonglong)(uVar3 - 9);
        if (uVar3 - 9 < 5) break;
        bVar10 = uVar3 == 0x20;
      }
      else {
        if (param_2 != 8) break;
        in_RAX = (__acrt_ptd *)(((ulonglong)in_RAX & 0xff) >> 3);
        bVar10 = ((byte)(in_RAX + 0x4c)[(longlong)param_1] & (byte)(1 << (bVar2 & 7))) == 0;
      }
      if (bVar10) break;
    }
    if (param_1[0x32] == 0) {
      if (uVar9 == 0) {
        if (uVar5 == 0xffffffffffffffff) goto LAB_1800b4fdb;
        goto LAB_1800b4fd8;
      }
      *pbVar8 = bVar2;
      pbVar8 = pbVar8 + 1;
      uVar9 = uVar9 - 1;
    }
    lVar6 = lVar6 + 1;
  } while( true );
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  uVar3 = FUN_1800c6228(uVar3,*(FILE **)(param_1 + 8));
  in_RAX = (__acrt_ptd *)CONCAT44(extraout_var,uVar3);
LAB_1800b508b:
  if ((lVar6 != 0) && (((param_2 != 0 || (lVar6 == lVar1)) || ((*param_1 & 4) != 0)))) {
    if ((param_1[0x32] == 0) && (param_2 != 0)) {
      *pbVar8 = 0;
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
LAB_1800b4f8e:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


ulonglong FUN_1800b50d0(byte *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  __acrt_ptd *in_RAX;
  __acrt_ptd *p_Var3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  bool bVar11;

  pbVar4 = (byte *)0x0;
  if (param_1[0x3a] == 0) {
    in_RAX = *(__acrt_ptd **)(param_1 + 0x80);
    p_Var3 = in_RAX + 8;
    *(__acrt_ptd **)(param_1 + 0x80) = p_Var3;
    pbVar4 = *(byte **)in_RAX;
    if (pbVar4 == (byte *)0x0) {
      p_Var3 = FUN_1800c2350();
      *(undefined4 *)p_Var3 = 0x16;
      in_RAX = (__acrt_ptd *)FUN_1800c2ac4();
      goto LAB_1800b5122;
    }
    if ((*param_1 & 1) == 0) goto LAB_1800b517d;
    in_RAX = in_RAX + 0x10;
    *(__acrt_ptd **)(param_1 + 0x80) = in_RAX;
    uVar9 = (ulonglong)*(uint *)p_Var3;
    if (uVar9 == 0) {
      if ((*param_1 & 4) != 0) {
        if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x10)) {
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
        }
LAB_1800b516d:
        *pbVar4 = 0;
      }
LAB_1800b5170:
      in_RAX = FUN_1800c2350();
      *(undefined4 *)in_RAX = 0xc;
      goto LAB_1800b5122;
    }
  }
  else {
LAB_1800b517d:
    uVar9 = 0xffffffffffffffff;
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar5 = uVar9;
  if ((param_2 != 0) && (uVar9 != 0xffffffffffffffff)) {
    uVar5 = uVar9 - 1;
  }
  lVar6 = 0;
  pbVar10 = pbVar4;
  while( true ) {
    if ((lVar2 != 0) && (lVar6 == lVar2)) goto LAB_1800b523f;
    pbVar7 = *(byte **)(param_1 + 0x18);
    if (pbVar7 == *(byte **)(param_1 + 0x10)) break;
    bVar1 = *pbVar7;
    uVar8 = (uint)bVar1;
    pbVar7 = pbVar7 + 1;
    *(byte **)(param_1 + 0x18) = pbVar7;
    if (param_2 != 0) {
      if (param_2 == 1) {
        in_RAX = (__acrt_ptd *)(ulonglong)(bVar1 - 9);
        if (bVar1 - 9 < 5) goto LAB_1800b5225;
        bVar11 = uVar8 == 0x20;
      }
      else {
        if (param_2 != 8) goto LAB_1800b5225;
        in_RAX = (__acrt_ptd *)(ulonglong)(bVar1 >> 3);
        bVar11 = ((byte)(in_RAX + 0x54)[(longlong)param_1] & (byte)(1 << (bVar1 & 7))) == 0;
      }
      if (bVar11) goto LAB_1800b5225;
    }
    if (param_1[0x3a] == 0) {
      if (uVar5 == 0) {
        if (uVar9 == 0xffffffffffffffff) goto LAB_1800b5170;
        goto LAB_1800b516d;
      }
      *pbVar10 = bVar1;
      pbVar10 = pbVar10 + 1;
      uVar5 = uVar5 - 1;
    }
    lVar6 = lVar6 + 1;
  }
  uVar8 = 0xffffffff;
LAB_1800b5225:
  if ((pbVar7 != *(byte **)(param_1 + 8)) &&
     ((pbVar7 != *(byte **)(param_1 + 0x10) || (uVar8 != 0xffffffff)))) {
    in_RAX = (__acrt_ptd *)(pbVar7 + -1);
    *(__acrt_ptd **)(param_1 + 0x18) = in_RAX;
  }
LAB_1800b523f:
  if ((lVar6 != 0) && (((param_2 != 0 || (lVar6 == lVar2)) || ((*param_1 & 4) != 0)))) {
    if ((param_1[0x3a] == 0) && (param_2 != 0)) {
      *pbVar10 = 0;
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
LAB_1800b5122:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


ulonglong FUN_1800b5274(input_processor<> *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  __acrt_ptd *in_RAX;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  __uint64 _Var6;
  wchar_t *pwVar7;
  __uint64 _Var8;
  longlong lVar9;
  bool bVar10;
  __uint64 local_res8;
  wchar_t *local_res20;

  pwVar7 = (wchar_t *)0x0;
  if (param_1[0x32] == (input_processor<>)0x0) {
    in_RAX = *(__acrt_ptd **)(param_1 + 0x78);
    p_Var4 = in_RAX + 8;
    *(__acrt_ptd **)(param_1 + 0x78) = p_Var4;
    pwVar7 = *(wchar_t **)in_RAX;
    if (pwVar7 == (wchar_t *)0x0) {
      p_Var4 = FUN_1800c2350();
      *(undefined4 *)p_Var4 = 0x16;
      in_RAX = (__acrt_ptd *)FUN_1800c2ac4();
      goto LAB_1800b52be;
    }
    if (((byte)*param_1 & 1) != 0) {
      in_RAX = in_RAX + 0x10;
      *(__acrt_ptd **)(param_1 + 0x78) = in_RAX;
      _Var8 = (__uint64)*(uint *)p_Var4;
      if (_Var8 == 0) {
        if (((byte)*param_1 & 4) != 0) {
          uVar5 = _fgetc_nolock(*(FILE **)(param_1 + 8));
          if ((int)uVar5 != -1) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          }
LAB_1800b5300:
          *pwVar7 = L'\0';
        }
LAB_1800b5304:
        in_RAX = FUN_1800c2350();
        *(undefined4 *)in_RAX = 0xc;
        goto LAB_1800b52be;
      }
      goto LAB_1800b5315;
    }
  }
  _Var8 = 0xffffffffffffffff;
LAB_1800b5315:
  lVar1 = *(longlong *)(param_1 + 0x38);
  local_res8 = _Var8;
  if ((param_2 != 0) && (_Var8 != 0xffffffffffffffff)) {
    local_res8 = _Var8 - 1;
  }
  lVar9 = 0;
  _Var6 = local_res8;
  local_res20 = pwVar7;
  do {
    if ((lVar1 != 0) && (lVar9 == lVar1)) goto LAB_1800b53f7;
    in_RAX = (__acrt_ptd *)_fgetc_nolock(*(FILE **)(param_1 + 8));
    uVar3 = (uint)in_RAX;
    bVar2 = (byte)in_RAX;
    if (uVar3 == 0xffffffff) goto LAB_1800b53f7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    if (param_2 != 0) {
      if (param_2 == 1) {
        in_RAX = (__acrt_ptd *)(ulonglong)(uVar3 - 9);
        if (uVar3 - 9 < 5) break;
        bVar10 = uVar3 == 0x20;
      }
      else {
        if (param_2 != 8) break;
        in_RAX = (__acrt_ptd *)(((ulonglong)in_RAX & 0xff) >> 3);
        bVar10 = ((byte)(in_RAX + 0x4c)[(longlong)param_1] & (byte)(1 << (bVar2 & 7))) == 0;
      }
      if (bVar10) break;
    }
    if (param_1[0x32] == (input_processor<>)0x0) {
      if (_Var6 == 0) {
        if (_Var8 == 0xffffffffffffffff) goto LAB_1800b5304;
        goto LAB_1800b5300;
      }
      bVar10 = __crt_stdio_input::input_processor<>::write_character
                         (param_1,pwVar7,_Var8,&local_res20,&local_res8,bVar2);
      in_RAX = (__acrt_ptd *)CONCAT71(extraout_var,bVar10);
      if (!bVar10) goto LAB_1800b53f7;
      _Var6 = local_res8;
    }
    lVar9 = lVar9 + 1;
  } while( true );
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  uVar3 = FUN_1800c6228(uVar3,*(FILE **)(param_1 + 8));
  in_RAX = (__acrt_ptd *)CONCAT44(extraout_var_00,uVar3);
LAB_1800b53f7:
  if ((lVar9 != 0) && (((param_2 != 0 || (lVar9 == lVar1)) || (((byte)*param_1 & 4) != 0)))) {
    if ((param_1[0x32] == (input_processor<>)0x0) && (param_2 != 0)) {
      *local_res20 = L'\0';
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
LAB_1800b52be:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


ulonglong FUN_1800b5440(input_processor<> *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  __acrt_ptd *in_RAX;
  __acrt_ptd *p_Var3;
  undefined7 extraout_var;
  longlong lVar4;
  wchar_t *pwVar5;
  __uint64 _Var6;
  byte *pbVar7;
  uint uVar8;
  __uint64 _Var9;
  bool bVar10;
  __uint64 local_res8;
  wchar_t *local_res20;

  pwVar5 = (wchar_t *)0x0;
  if (param_1[0x3a] == (input_processor<>)0x0) {
    in_RAX = *(__acrt_ptd **)(param_1 + 0x80);
    p_Var3 = in_RAX + 8;
    *(__acrt_ptd **)(param_1 + 0x80) = p_Var3;
    pwVar5 = *(wchar_t **)in_RAX;
    if (pwVar5 == (wchar_t *)0x0) {
      p_Var3 = FUN_1800c2350();
      *(undefined4 *)p_Var3 = 0x16;
      in_RAX = (__acrt_ptd *)FUN_1800c2ac4();
      goto LAB_1800b5496;
    }
    if (((byte)*param_1 & 1) == 0) goto LAB_1800b54ed;
    in_RAX = in_RAX + 0x10;
    *(__acrt_ptd **)(param_1 + 0x80) = in_RAX;
    _Var6 = (__uint64)*(uint *)p_Var3;
    if (_Var6 == 0) {
      if (((byte)*param_1 & 4) != 0) {
        if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x10)) {
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
        }
LAB_1800b54dc:
        *pwVar5 = L'\0';
      }
LAB_1800b54e0:
      in_RAX = FUN_1800c2350();
      *(undefined4 *)in_RAX = 0xc;
      goto LAB_1800b5496;
    }
  }
  else {
LAB_1800b54ed:
    _Var6 = 0xffffffffffffffff;
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  local_res8 = _Var6;
  if ((param_2 != 0) && (_Var6 != 0xffffffffffffffff)) {
    local_res8 = _Var6 - 1;
  }
  lVar4 = 0;
  _Var9 = local_res8;
  local_res20 = pwVar5;
  while( true ) {
    if ((lVar2 != 0) && (lVar4 == lVar2)) goto LAB_1800b55e6;
    pbVar7 = *(byte **)(param_1 + 0x18);
    if (pbVar7 == *(byte **)(param_1 + 0x10)) break;
    bVar1 = *pbVar7;
    uVar8 = (uint)bVar1;
    pbVar7 = pbVar7 + 1;
    *(byte **)(param_1 + 0x18) = pbVar7;
    if (param_2 != 0) {
      if (param_2 == 1) {
        in_RAX = (__acrt_ptd *)(ulonglong)(bVar1 - 9);
        if (bVar1 - 9 < 5) goto LAB_1800b55cc;
        bVar10 = uVar8 == 0x20;
      }
      else {
        if (param_2 != 8) goto LAB_1800b55cc;
        in_RAX = (__acrt_ptd *)(ulonglong)(bVar1 >> 3);
        bVar10 = ((byte)(in_RAX + 0x54)[(longlong)param_1] & (byte)(1 << (bVar1 & 7))) == 0;
      }
      if (bVar10) goto LAB_1800b55cc;
    }
    if (param_1[0x3a] == (input_processor<>)0x0) {
      if (_Var9 == 0) {
        if (_Var6 == 0xffffffffffffffff) goto LAB_1800b54e0;
        goto LAB_1800b54dc;
      }
      bVar10 = __crt_stdio_input::input_processor<>::write_character
                         (param_1,pwVar5,_Var6,&local_res20,&local_res8,bVar1);
      in_RAX = (__acrt_ptd *)CONCAT71(extraout_var,bVar10);
      if (!bVar10) goto LAB_1800b55e6;
      _Var9 = local_res8;
    }
    lVar4 = lVar4 + 1;
  }
  uVar8 = 0xffffffff;
LAB_1800b55cc:
  if ((pbVar7 != *(byte **)(param_1 + 8)) &&
     ((pbVar7 != *(byte **)(param_1 + 0x10) || (uVar8 != 0xffffffff)))) {
    in_RAX = (__acrt_ptd *)(pbVar7 + -1);
    *(__acrt_ptd **)(param_1 + 0x18) = in_RAX;
  }
LAB_1800b55e6:
  if ((lVar4 != 0) && (((param_2 != 0 || (lVar4 == lVar2)) || (((byte)*param_1 & 4) != 0)))) {
    if ((param_1[0x3a] == (input_processor<>)0x0) && (param_2 != 0)) {
      *local_res20 = L'\0';
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
LAB_1800b5496:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


// Library Function - Single Match
//  int __cdecl __crt_stdio_input::skip_whitespace<class
// __crt_stdio_input::stream_input_adapter,char>(class __crt_stdio_input::stream_input_adapter<char>
// & __ptr64,struct __crt_locale_pointers * __ptr64 const)
//
// Library: Visual Studio 2019 Release

int __cdecl
__crt_stdio_input::skip_whitespace<>
          (stream_input_adapter<char> *param_1,__crt_locale_pointers *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;

  do {
    uVar3 = _fgetc_nolock(*(FILE **)param_1);
    uVar1 = (uint)uVar3;
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    uVar2 = FUN_1800b9554(uVar1 & 0xff,8,(_locale_t)param_2);
  } while (uVar2 != 0);
  return uVar1;
}


ulonglong FUN_1800b5670(longlong param_1,_locale_t param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;

  do {
    pbVar2 = *(byte **)(param_1 + 0x10);
    if (pbVar2 == *(byte **)(param_1 + 8)) {
      return 0xffffffff;
    }
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x10) = pbVar2 + 1;
    uVar3 = FUN_1800b9554((uint)bVar1,8,param_2);
  } while (uVar3 != 0);
  return (ulonglong)bVar1;
}


undefined8 FUN_1800b56c4(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  bool bVar6;

  plVar2 = (longlong *)*param_1;
  cVar1 = *(char *)param_1[1];
  lVar3 = plVar2[2];
  plVar2[2] = lVar3 - 1U;
  if ((((plVar2[1] == 0) || (lVar3 - 1U <= (ulonglong)plVar2[1])) && (1 < (byte)(cVar1 + 1U))) &&
     (puVar4 = (undefined8 *)*plVar2, (int)cVar1 != 0xffffffff)) {
    plVar2 = puVar4 + 1;
    *plVar2 = *plVar2 + -1;
    FUN_1800c6228((int)cVar1,(FILE *)*puVar4);
  }
  *(undefined1 *)param_1[1] = 0;
  puVar5 = *(undefined1 **)(*param_1 + 0x10);
  bVar6 = *(undefined1 **)param_1[2] == puVar5;
  if (!bVar6) {
    puVar5 = *(undefined1 **)(*param_1 + 0x18);
    *puVar5 = 0;
  }
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),bVar6);
}


undefined8 FUN_1800b573c(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  bool bVar5;

  plVar2 = (longlong *)*param_1;
  cVar1 = *(char *)param_1[1];
  lVar3 = plVar2[2];
  plVar2[2] = lVar3 - 1U;
  if (((plVar2[1] == 0) || (lVar3 - 1U <= (ulonglong)plVar2[1])) && (1 < (byte)(cVar1 + 1U))) {
    plVar2 = (longlong *)*plVar2;
    if (plVar2[2] != *plVar2) {
      plVar2[2] = plVar2[2] + -1;
    }
  }
  *(undefined1 *)param_1[1] = 0;
  puVar4 = *(undefined1 **)(*param_1 + 0x10);
  bVar5 = *(undefined1 **)param_1[2] == puVar4;
  if (!bVar5) {
    puVar4 = *(undefined1 **)(*param_1 + 0x18);
    *puVar4 = 0;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),bVar5);
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800b57a0(undefined8 *param_1)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined1 local_c0 [16];
  char local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_f8;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_c8,*(__crt_locale_pointers **)*param_1);
  local_30 = *(undefined8 *)param_1[4];
  local_88 = *(undefined8 *)param_1[3];
  local_a8 = *(undefined8 *)param_1[2];
  uStack_d0 = 0;
  local_d8 = *(undefined8 *)param_1[1];
  local_38 = local_c0;
  uStack_98 = 0;
  local_80 = 0;
  local_5c = 0;
  uStack_54 = 0;
  local_78 = 0;
  local_4c = 0;
  uStack_44 = 0;
  local_76 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_28 = 0;
  local_a0 = local_d8;
  local_90 = local_a8;
  FUN_1800b82c0((input_processor<> *)&local_a8);
  if (local_b0 != '\0') {
    *(uint *)(local_c8 + 0x3a8) = *(uint *)(local_c8 + 0x3a8) & 0xfffffffd;
  }
  return;
}


ulonglong FUN_1800b5878(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  ushort *in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 uVar6;

  if (*(int *)(param_1 + 0x10) != 0) goto LAB_1800b58bc;
  in_RAX = *(ushort **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((byte)*in_RAX == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    goto LAB_1800b58bc;
  }
  iVar5 = isspace((uint)(byte)*in_RAX);
  pbVar3 = *(byte **)(param_1 + 8);
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    iVar5 = isspace((uint)*pbVar3);
    uVar6 = 1;
    in_RAX = (ushort *)CONCAT44(extraout_var,iVar5);
    while ((int)in_RAX != 0) {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      iVar5 = isspace((uint)**(byte **)(param_1 + 8));
      in_RAX = (ushort *)CONCAT44(extraout_var_00,iVar5);
    }
    goto LAB_1800b5905;
  }
  if ((*pbVar3 != 0x25) || (pbVar1 = pbVar3 + 1, *pbVar1 == 0x25)) {
    *(undefined4 *)(param_1 + 0x14) = 3;
    uVar6 = 1;
    *(byte *)(param_1 + 0x18) = *pbVar3;
    *(byte **)(param_1 + 8) = pbVar3 + (ulonglong)(*pbVar3 == 0x25) + 1;
    in_RAX = __pctype_func();
    if ((short)in_RAX[*(byte *)(param_1 + 0x18)] < 0) {
      in_RAX = *(ushort **)(param_1 + 8);
      uVar4 = *in_RAX;
      if ((byte)uVar4 == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0x2a;
        uVar6 = 0;
        *(undefined2 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x1a) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else {
        in_RAX = (ushort *)((longlong)in_RAX + 1);
        *(byte *)(param_1 + 0x19) = (byte)uVar4;
        *(ushort **)(param_1 + 8) = in_RAX;
      }
    }
    goto LAB_1800b5905;
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  uVar6 = 1;
  *(byte **)(param_1 + 8) = pbVar1;
  if (*pbVar1 == 0x2a) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    *(byte **)(param_1 + 8) = pbVar3 + 2;
  }
  in_RAX = (ushort *)FUN_1800b8e3c(param_1);
  if ((char)in_RAX == '\0') goto LAB_1800b58bc;
  FUN_1800b8edc(param_1);
  cVar2 = **(char **)(param_1 + 8);
  if (cVar2 == 'w') {
    *(char **)(param_1 + 8) = *(char **)(param_1 + 8) + 1;
LAB_1800b5972:
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  else if ((cVar2 + 0xbdU & 0xef) == 0) goto LAB_1800b5972;
  in_RAX = (ushort *)FUN_1800b8c70(param_1);
  if ((char)in_RAX != '\0') {
    in_RAX = (ushort *)&DAT_1800f4ee0;
    if ((&DAT_1800f4ee0)
        [(longlong)*(int *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 0xc] != '\0') {
LAB_1800b5905:
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar6);
    }
    *(undefined8 *)(param_1 + 0x10) = 0x16;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_1800b58bc:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


undefined8 FUN_1800b5a40(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
                    // WARNING: Subroutine does not return
    _invoke_watson(L"_is_double",L"__crt_strtox::floating_point_value::as_double",
                   L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1db,0);
  }
  return *param_1;
}


undefined8 FUN_1800b5a7c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
                    // WARNING: Subroutine does not return
    _invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                   L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
  }
  return *param_1;
}


undefined8
FUN_1800b5ab8(ulonglong param_1,int param_2,longlong param_3,char param_4,undefined8 *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;

  lVar2 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = (int)param_3;
  if (param_1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)lVar2 + 1;
  }
  cVar10 = *(char *)(param_5 + 1);
  iVar7 = ((-(uint)(cVar10 != '\0') & 0x1d) + 0x18) - iVar7;
  iVar11 = param_2 - iVar7;
  iVar12 = (-(uint)(cVar10 != '\0') & 0x380) + 0x7f;
  if (iVar12 < iVar11) goto LAB_1800b5d92;
  bVar5 = (byte)param_3;
  if (iVar11 < (int)((-(uint)(cVar10 != '\0') & 0xfffffc80) - 0x7e)) {
    iVar14 = param_2 + -1 + iVar12;
    iVar11 = -iVar12;
    if (iVar14 < 0) {
      if ((uint)-iVar14 < 0x40) {
        bVar6 = (byte)-iVar14;
        uVar13 = 1L << (bVar6 - 1 & 0x3f);
        uVar9 = uVar13 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar13 - 1) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((uVar9 != 0) || (bVar4)) {
          iVar12 = fegetround();
          if (iVar12 == 0) {
            if ((uVar9 == 0) || ((!bVar4 && ((1L << (bVar6 & 0x3f) & param_1) == 0))))
            goto LAB_1800b5c1e;
            bVar5 = 1;
          }
          else if (iVar12 != 0x100) {
            if (iVar12 != 0x200) goto LAB_1800b5c1e;
            bVar5 = bVar5 ^ 1;
          }
        }
        else {
LAB_1800b5c1e:
          bVar5 = 0;
        }
        param_1 = (param_1 >> (bVar6 & 0x3f)) + (ulonglong)bVar5;
      }
      else {
        param_1 = 0;
      }
      cVar10 = *(char *)(param_5 + 1);
      if (param_1 == 0) {
        if (cVar10 == '\0') {
          *(int *)*param_5 = iVar3 << 0x1f;
        }
        else {
          *(longlong *)*param_5 = param_3 << 0x3f;
        }
        return 2;
      }
      if ((-(ulonglong)(cVar10 != '\0') & 0xfffffff800000) + 0x7fffff < param_1) {
        iVar11 = ((param_2 - iVar14) - iVar7) + -1;
      }
      goto LAB_1800b5dd0;
    }
    iVar7 = iVar14;
  }
  else {
    if (iVar7 < 0) {
      if ((uint)-iVar7 < 0x40) {
        bVar6 = (byte)-iVar7;
        uVar13 = 1L << (bVar6 - 1 & 0x3f);
        uVar9 = uVar13 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar13 - 1) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((uVar9 != 0) || (bVar4)) {
          iVar7 = fegetround();
          if (iVar7 == 0) {
            if ((uVar9 == 0) || ((!bVar4 && ((1L << (bVar6 & 0x3f) & param_1) == 0))))
            goto LAB_1800b5d3f;
            bVar5 = 1;
          }
          else if (iVar7 != 0x100) {
            if (iVar7 != 0x200) goto LAB_1800b5d3f;
            bVar5 = bVar5 ^ 1;
          }
        }
        else {
LAB_1800b5d3f:
          bVar5 = 0;
        }
        param_1 = (param_1 >> (bVar6 & 0x3f)) + (ulonglong)bVar5;
      }
      else {
        param_1 = 0;
      }
      cVar10 = *(char *)(param_5 + 1);
      if ((-(ulonglong)(cVar10 != '\0') & 0x1fffffff000000) + 0xffffff < param_1) {
        param_1 = param_1 >> 1;
        iVar11 = iVar11 + 1;
        if ((int)((-(uint)(cVar10 != '\0') & 0x380) + 0x7f) < iVar11) {
LAB_1800b5d92:
          if (cVar10 == '\0') {
            *(uint *)*param_5 = iVar3 << 0x1f | 0x7f800000;
          }
          else {
            *(ulonglong *)*param_5 = param_3 << 0x3f | 0x7ff0000000000000;
          }
          return 3;
        }
      }
      goto LAB_1800b5dd0;
    }
    if (iVar7 < 1) goto LAB_1800b5dd0;
  }
  param_1 = param_1 << ((byte)iVar7 & 0x3f);
LAB_1800b5dd0:
  puVar1 = (ulonglong *)*param_5;
  uVar13 = (-(ulonglong)(cVar10 != '\0') & 0xfffffff800000) + 0x7fffff & param_1;
  if (cVar10 == '\0') {
    uVar8 = iVar3 << 0x1f | (uint)*puVar1 & 0x7fffffff;
    uVar8 = ((iVar11 + 0x7f) * 0x800000 ^ uVar8) & 0x7f800000 ^ uVar8;
    *(uint *)puVar1 = (uVar8 ^ (uint)uVar13) & 0x7fffff ^ uVar8;
  }
  else {
    uVar9 = (longlong)(iVar11 + 0x3ff) << 0x34;
    *puVar1 = (param_3 << 0x3f ^ uVar9) & 0x8000000000000000 ^ uVar9 | uVar13;
  }
  return 0;
}


void FUN_1800b5e70(uint *param_1,uint param_2,longlong param_3,byte param_4,undefined8 *param_5)

{
  sbyte sVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;

  uVar7 = 0;
  iVar4 = (-(uint)(*(char *)(param_5 + 1) != '\0') & 0x1d) + 0x17;
  if (param_2 < 0x41) {
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulonglong)param_1[1];
      if (1 < *param_1) {
        uVar7 = param_1[2];
      }
    }
    bVar10 = param_4 ^ 1;
    uVar3 = ((ulonglong)uVar7 << 0x20) + uVar3;
  }
  else {
    uVar6 = param_2 >> 5;
    uVar5 = uVar6 - 2;
    uVar7 = param_1[(ulonglong)uVar5 + 1];
    uVar8 = param_2 & 0x1f;
    uVar9 = 0;
    if (uVar8 == 0) {
      iVar4 = iVar4 + uVar5 * 0x20;
      uVar3 = CONCAT44(param_1[(ulonglong)(uVar6 - 1) + 1],uVar7);
      bVar10 = param_4 ^ 1;
      uVar7 = 0;
      if (uVar5 != 0) {
        do {
          uVar9 = 0;
          if (param_1[(ulonglong)uVar7 + 1] == 0) {
            uVar9 = (ulonglong)bVar10;
          }
          uVar7 = uVar7 + 1;
          bVar10 = (byte)uVar9;
        } while (uVar7 != uVar5);
      }
    }
    else {
      sVar1 = (sbyte)uVar8;
      iVar4 = uVar5 * 0x20 + uVar8 + iVar4;
      uVar8 = (1 << sVar1) - 1;
      uVar3 = ((ulonglong)param_1[(ulonglong)(uVar6 - 1) + 1] << (-sVar1 + 0x20U & 0x3f)) +
              ((ulonglong)(param_1[(ulonglong)uVar6 + 1] & uVar8) << (-sVar1 + 0x40U & 0x3f)) +
              (ulonglong)((~uVar8 & uVar7) >> sVar1);
      if ((param_4 != 0) || (bVar10 = 1, (uVar8 & uVar7) != 0)) {
        bVar10 = 0;
      }
      uVar7 = 0;
      if (uVar5 != 0) {
        do {
          uVar9 = (ulonglong)uVar7;
          bVar2 = 0;
          if (param_1[uVar9 + 1] == 0) {
            bVar2 = bVar10;
          }
          bVar10 = bVar2;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar5);
      }
    }
    param_3 = CONCAT71((int7)(uVar9 >> 8),(char)param_3);
  }
  FUN_1800b5ab8(uVar3,iVar4,param_3,bVar10,param_5);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_1800b5fd0(uint *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  __acrt_ptd *p_Var8;
  ulonglong *puVar9;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined7 uVar24;
  uint uVar25;
  uint *puVar26;
  rsize_t rVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auStackY_d78 [32];
  uint local_cf4 [115];
  undefined4 local_b28;
  undefined1 local_b24 [460];
  uint local_958;
  uint local_954 [115];
  uint local_788;
  uint local_784 [115];
  uint local_5b8;
  uint local_5b4 [115];
  uint local_3e8;
  undefined8 local_3e4;
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_d78;
  uVar29 = *param_1;
  uVar5 = param_1[1];
  uVar4 = (-(uint)(*(char *)(param_2 + 1) != '\0') & 0x1d) + 0x19;
  local_788 = 0;
  puVar28 = param_1 + 2;
  uVar20 = 0;
  if ((int)uVar29 < 0) {
    uVar29 = 0;
  }
  uVar32 = 0;
  uVar25 = 0;
  uVar31 = uVar29;
  if (uVar5 <= uVar29) {
    uVar31 = uVar5;
  }
  uVar29 = uVar29 - uVar31;
  puVar26 = (uint *)((longlong)param_1 + (ulonglong)uVar31 + 8);
  puVar7 = (uint *)((longlong)param_1 + (ulonglong)uVar5 + 8);
  uVar5 = (int)puVar7 - (int)puVar26;
  if (puVar28 != puVar26) {
    do {
      uVar31 = (uint)uVar32;
      if (uVar25 == 9) {
        if (uVar20 != 0) {
          uVar23 = 0;
          uVar15 = 0;
          do {
            uVar25 = (int)uVar15 + 1;
            uVar14 = (ulonglong)local_784[uVar15] * 1000000000 + uVar23;
            local_784[uVar15] = (uint)uVar14;
            uVar23 = uVar14 >> 0x20;
            uVar15 = (ulonglong)uVar25;
          } while (uVar25 != uVar20);
          uVar20 = (uint)(uVar14 >> 0x20);
          if (uVar20 == 0) {
            uVar20 = local_788;
          }
          else if (local_788 < 0x73) {
            local_784[local_788] = uVar20;
            local_788 = local_788 + 1;
            uVar20 = local_788;
          }
          else {
            local_788 = 0;
            uVar20 = 0;
          }
        }
        if (uVar31 != 0) {
          uVar15 = 0;
          uVar25 = 0;
          if (uVar20 != 0) {
            do {
              uVar20 = (int)uVar15 + 1;
              uVar23 = local_784[uVar15] + uVar32;
              local_784[uVar15] = (uint)uVar23;
              uVar32 = uVar23 >> 0x20;
              uVar31 = (uint)(uVar23 >> 0x20);
              uVar15 = (ulonglong)uVar20;
            } while (uVar20 != local_788);
            uVar20 = local_788;
            uVar25 = local_788;
            if (uVar31 == 0) goto LAB_1800b617b;
          }
          if (uVar25 < 0x73) {
            local_784[uVar25] = uVar31;
            uVar20 = local_788 + 1;
            local_788 = uVar20;
          }
          else {
            uVar20 = 0;
            local_788 = 0;
          }
        }
LAB_1800b617b:
        uVar31 = 0;
        uVar25 = 0;
      }
      uVar30 = *puVar28;
      uVar25 = uVar25 + 1;
      puVar28 = (uint *)((longlong)puVar28 + 1);
      uVar31 = (uint)(byte)uVar30 + uVar31 * 10;
      uVar32 = (ulonglong)uVar31;
    } while (puVar28 != puVar26);
    if (uVar25 != 0) {
      for (uVar30 = uVar25 / 10; uVar30 != 0; uVar30 = uVar30 - uVar18) {
        uVar18 = uVar30;
        if (0x26 < uVar30) {
          uVar18 = 0x26;
        }
        uVar22 = uVar18 - 1;
        bVar11 = (&DAT_1800f4cb2)[(ulonglong)uVar22 * 4];
        bVar1 = (&DAT_1800f4cb3)[(ulonglong)uVar22 * 4];
        local_218 = (uint)bVar1 + (uint)bVar11;
        FUN_1800d22d0((undefined1 (*) [32])local_214,0,(ulonglong)bVar11 * 4);
        FUN_1800d1c20((undefined8 *)(local_214 + bVar11),
                      (undefined8 *)
                      (&DAT_1800f43a0 +
                      (ulonglong)*(ushort *)(&DAT_1800f4cb0 + (ulonglong)uVar22 * 4) * 4),
                      (ulonglong)bVar1 << 2);
        uVar22 = local_784[0];
        if (local_218 < 2) {
          uVar15 = (ulonglong)local_214[0];
          if (local_214[0] == 0) {
LAB_1800b624c:
            local_788 = 0;
            uVar20 = 0;
            goto LAB_1800b656a;
          }
          if ((local_214[0] == 1) || (uVar20 == 0)) goto LAB_1800b656a;
          uVar14 = 0;
          uVar23 = 0;
          do {
            uVar6 = (int)uVar23 + 1;
            uVar16 = local_784[uVar23] * uVar15 + uVar14;
            local_784[uVar23] = (uint)uVar16;
            uVar14 = uVar16 >> 0x20;
            uVar22 = (uint)(uVar16 >> 0x20);
            uVar23 = (ulonglong)uVar6;
          } while (uVar6 != uVar20);
LAB_1800b629f:
          uVar20 = 0;
          if (uVar22 == 0) {
            uVar20 = local_788;
            goto LAB_1800b656a;
          }
          if (local_788 < 0x73) {
            local_784[local_788] = uVar22;
            local_788 = local_788 + 1;
            uVar20 = local_788;
            goto LAB_1800b656a;
          }
          local_788 = 0;
          bVar33 = false;
        }
        else {
          if (uVar20 < 2) {
            uVar15 = (ulonglong)local_784[0];
            uVar23 = (ulonglong)local_218 * 4;
            local_788 = local_218;
            if ((ulonglong)local_218 != 0) {
              if (uVar23 < 0x1cd) {
                FUN_1800d1c20((undefined8 *)local_784,(undefined8 *)local_214,uVar23);
              }
              else {
                FUN_1800d22d0((undefined1 (*) [32])local_784,0,0x1cc);
                p_Var8 = FUN_1800c2350();
                *(undefined4 *)p_Var8 = 0x22;
                FUN_1800c2ac4();
              }
            }
            if (uVar22 == 0) goto LAB_1800b624c;
            uVar20 = local_788;
            if ((uVar22 != 1) && (local_788 != 0)) {
              uVar14 = 0;
              uVar23 = 0;
              do {
                uVar20 = (int)uVar23 + 1;
                uVar16 = local_784[uVar23] * uVar15 + uVar14;
                local_784[uVar23] = (uint)uVar16;
                uVar14 = uVar16 >> 0x20;
                uVar22 = (uint)(uVar16 >> 0x20);
                uVar23 = (ulonglong)uVar20;
              } while (uVar20 != local_788);
              goto LAB_1800b629f;
            }
          }
          else {
            puVar28 = local_784;
            puVar17 = local_214;
            if (uVar20 <= local_218) {
              uVar22 = uVar20;
            }
            else {
              puVar17 = local_784;
              uVar22 = local_218;
              puVar28 = local_214;
            }
            local_5b8 = 0;
            uVar15 = 0;
            uVar6 = local_218;
            if (uVar20 > local_218) {
              uVar6 = uVar20;
            }
            local_788 = 0;
            if (uVar22 != 0) {
              do {
                uVar19 = (uint)uVar15;
                uVar20 = puVar28[uVar15];
                if (uVar20 == 0) {
                  if (uVar19 == local_788) {
                    local_788 = uVar19 + 1;
                    local_5b4[uVar15] = 0;
                    local_5b8 = local_788;
                  }
                }
                else {
                  uVar23 = 0;
                  uVar21 = uVar19;
                  if (uVar6 != 0) {
                    do {
                      uVar21 = (uint)uVar15;
                      uVar14 = uVar15;
                      if (uVar21 == 0x73) break;
                      if (uVar21 == local_788) {
                        local_5b4[uVar15] = 0;
                        local_5b8 = uVar21 + 1;
                      }
                      uVar14 = (ulonglong)(uVar21 + 1);
                      uVar23 = (ulonglong)puVar17[-uVar19 + uVar21] * (ulonglong)uVar20 + uVar23 +
                               (ulonglong)local_5b4[uVar15];
                      local_5b4[uVar15] = (uint)uVar23;
                      uVar23 = uVar23 >> 0x20;
                      uVar15 = uVar14;
                      local_788 = local_5b8;
                    } while (-uVar19 + uVar21 + 1 != uVar6);
                    uVar21 = (uint)uVar14;
                    uVar20 = (uint)uVar23;
                    while (uVar20 != 0) {
                      uVar21 = (uint)uVar14;
                      if (uVar21 == 0x73) goto LAB_1800b663c;
                      if (uVar21 == local_788) {
                        local_5b4[uVar14] = 0;
                        local_5b8 = uVar21 + 1;
                      }
                      uVar20 = local_5b4[uVar14];
                      uVar21 = uVar21 + 1;
                      local_5b4[uVar14] = (uint)(uVar20 + uVar23);
                      uVar20 = (uint)(uVar20 + uVar23 >> 0x20);
                      uVar23 = (ulonglong)uVar20;
                      uVar14 = (ulonglong)uVar21;
                      local_788 = local_5b8;
                    }
                  }
                  if (uVar21 == 0x73) goto LAB_1800b663c;
                }
                uVar15 = (ulonglong)(uVar19 + 1);
              } while (uVar19 + 1 != uVar22);
            }
            uVar15 = (ulonglong)local_788 * 4;
            if ((ulonglong)local_788 != 0) {
              if (uVar15 < 0x1cd) {
                FUN_1800d1c20((undefined8 *)local_784,(undefined8 *)local_5b4,uVar15);
              }
              else {
                FUN_1800d22d0((undefined1 (*) [32])local_784,0,0x1cc);
                p_Var8 = FUN_1800c2350();
                *(undefined4 *)p_Var8 = 0x22;
                FUN_1800c2ac4();
              }
            }
            uVar20 = local_788;
          }
LAB_1800b656a:
          bVar33 = true;
        }
        if (!bVar33) goto LAB_1800b663c;
      }
      if (uVar25 % 10 != 0) {
        uVar25 = *(uint *)(&DAT_1800f4d48 + (ulonglong)(uVar25 % 10 - 1) * 4);
        if (uVar25 == 0) {
LAB_1800b663c:
          local_788 = 0;
          uVar20 = 0;
        }
        else if ((uVar25 != 1) && (uVar20 != 0)) {
          uVar23 = 0;
          uVar15 = 0;
          do {
            uVar30 = (int)uVar15 + 1;
            uVar14 = (ulonglong)local_784[uVar15] * (ulonglong)uVar25 + uVar23;
            local_784[uVar15] = (uint)uVar14;
            uVar23 = uVar14 >> 0x20;
            uVar15 = (ulonglong)uVar30;
          } while (uVar30 != uVar20);
          uVar20 = (uint)(uVar14 >> 0x20);
          if (uVar20 == 0) {
            uVar20 = local_788;
          }
          else {
            if (0x72 < local_788) goto LAB_1800b663c;
            local_784[local_788] = uVar20;
            local_788 = local_788 + 1;
            uVar20 = local_788;
          }
        }
      }
      if (uVar31 != 0) {
        uVar15 = 0;
        uVar25 = 0;
        if (uVar20 != 0) {
          do {
            uVar25 = (int)uVar15 + 1;
            uVar20 = local_784[uVar15];
            local_784[uVar15] = (uint)(uVar20 + uVar32);
            uVar31 = (uint)(uVar20 + uVar32 >> 0x20);
            uVar32 = (ulonglong)uVar31;
            uVar15 = (ulonglong)uVar25;
          } while (uVar25 != local_788);
          uVar20 = local_788;
          uVar25 = local_788;
          if (uVar31 == 0) goto LAB_1800b66c8;
        }
        if (uVar25 < 0x73) {
          local_784[uVar25] = uVar31;
          uVar20 = local_788 + 1;
          local_788 = uVar20;
        }
        else {
          uVar20 = 0;
          local_788 = 0;
        }
      }
    }
  }
LAB_1800b66c8:
  if (uVar29 == 0) {
LAB_1800b6bf9:
    if (uVar20 == 0) goto LAB_1800b6bfe;
    iVar13 = 0x1f;
    bVar33 = local_784[uVar20 - 1] == 0;
    if (!bVar33) {
      for (; local_784[uVar20 - 1] >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (bVar33) {
      iVar13 = 0;
    }
    else {
      iVar13 = iVar13 + 1;
    }
    uVar29 = (uVar20 - 1) * 0x20 + iVar13;
  }
  else {
    for (uVar31 = uVar29 / 10; uVar31 != 0; uVar31 = uVar31 - uVar25) {
      uVar25 = uVar31;
      if (0x26 < uVar31) {
        uVar25 = 0x26;
      }
      uVar30 = uVar25 - 1;
      bVar11 = (&DAT_1800f4cb2)[(ulonglong)uVar30 * 4];
      bVar1 = (&DAT_1800f4cb3)[(ulonglong)uVar30 * 4];
      local_218 = (uint)bVar1 + (uint)bVar11;
      FUN_1800d22d0((undefined1 (*) [32])local_214,0,(ulonglong)bVar11 * 4);
      FUN_1800d1c20((undefined8 *)(local_214 + bVar11),
                    (undefined8 *)
                    (&DAT_1800f43a0 +
                    (ulonglong)*(ushort *)(&DAT_1800f4cb0 + (ulonglong)uVar30 * 4) * 4),
                    (ulonglong)bVar1 << 2);
      uVar30 = local_784[0];
      if (local_218 < 2) {
        uVar32 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
LAB_1800b678b:
          local_788 = 0;
          uVar20 = 0;
          goto LAB_1800b6a98;
        }
        if ((local_214[0] == 1) || (uVar20 == 0)) goto LAB_1800b6a98;
        uVar23 = 0;
        uVar15 = 0;
        do {
          uVar18 = (int)uVar15 + 1;
          uVar14 = local_784[uVar15] * uVar32 + uVar23;
          local_784[uVar15] = (uint)uVar14;
          uVar23 = uVar14 >> 0x20;
          uVar30 = (uint)(uVar14 >> 0x20);
          uVar15 = (ulonglong)uVar18;
        } while (uVar18 != uVar20);
LAB_1800b67de:
        uVar20 = 0;
        if (uVar30 == 0) {
          uVar20 = local_788;
          goto LAB_1800b6a98;
        }
        if (local_788 < 0x73) {
          local_784[local_788] = uVar30;
          local_788 = local_788 + 1;
          uVar20 = local_788;
          goto LAB_1800b6a98;
        }
        local_788 = 0;
        bVar33 = false;
      }
      else {
        if (uVar20 < 2) {
          uVar32 = (ulonglong)local_784[0];
          uVar15 = (ulonglong)local_218 * 4;
          local_788 = local_218;
          if ((ulonglong)local_218 != 0) {
            if (uVar15 < 0x1cd) {
              FUN_1800d1c20((undefined8 *)local_784,(undefined8 *)local_214,uVar15);
            }
            else {
              FUN_1800d22d0((undefined1 (*) [32])local_784,0,0x1cc);
              p_Var8 = FUN_1800c2350();
              *(undefined4 *)p_Var8 = 0x22;
              FUN_1800c2ac4();
            }
          }
          if (uVar30 == 0) goto LAB_1800b678b;
          uVar20 = local_788;
          if ((uVar30 != 1) && (local_788 != 0)) {
            uVar23 = 0;
            uVar15 = 0;
            do {
              uVar20 = (int)uVar15 + 1;
              uVar14 = local_784[uVar15] * uVar32 + uVar23;
              local_784[uVar15] = (uint)uVar14;
              uVar23 = uVar14 >> 0x20;
              uVar30 = (uint)(uVar14 >> 0x20);
              uVar15 = (ulonglong)uVar20;
            } while (uVar20 != local_788);
            goto LAB_1800b67de;
          }
        }
        else {
          puVar28 = local_784;
          puVar17 = local_214;
          if (uVar20 <= local_218) {
            uVar30 = uVar20;
          }
          else {
            puVar17 = local_784;
            uVar30 = local_218;
            puVar28 = local_214;
          }
          local_5b8 = 0;
          uVar32 = 0;
          uVar18 = local_218;
          if (uVar20 > local_218) {
            uVar18 = uVar20;
          }
          local_788 = 0;
          if (uVar30 != 0) {
            do {
              uVar22 = (uint)uVar32;
              uVar20 = puVar28[uVar32];
              if (uVar20 == 0) {
                if (uVar22 == local_788) {
                  local_788 = uVar22 + 1;
                  local_5b4[uVar32] = 0;
                  local_5b8 = local_788;
                }
              }
              else {
                uVar15 = 0;
                uVar6 = uVar22;
                if (uVar18 != 0) {
                  do {
                    uVar6 = (uint)uVar32;
                    uVar23 = uVar32;
                    if (uVar6 == 0x73) break;
                    if (uVar6 == local_788) {
                      local_5b4[uVar32] = 0;
                      local_5b8 = uVar6 + 1;
                    }
                    uVar23 = (ulonglong)(uVar6 + 1);
                    uVar15 = (ulonglong)puVar17[-uVar22 + uVar6] * (ulonglong)uVar20 + uVar15 +
                             (ulonglong)local_5b4[uVar32];
                    local_5b4[uVar32] = (uint)uVar15;
                    uVar15 = uVar15 >> 0x20;
                    uVar32 = uVar23;
                    local_788 = local_5b8;
                  } while (-uVar22 + uVar6 + 1 != uVar18);
                  uVar6 = (uint)uVar23;
                  uVar20 = (uint)uVar15;
                  while (uVar20 != 0) {
                    uVar6 = (uint)uVar23;
                    if (uVar6 == 0x73) goto LAB_1800b6b72;
                    if (uVar6 == local_788) {
                      local_5b4[uVar23] = 0;
                      local_5b8 = uVar6 + 1;
                    }
                    uVar20 = local_5b4[uVar23];
                    uVar6 = uVar6 + 1;
                    local_5b4[uVar23] = (uint)(uVar15 + uVar20);
                    uVar20 = (uint)(uVar15 + uVar20 >> 0x20);
                    uVar15 = (ulonglong)uVar20;
                    uVar23 = (ulonglong)uVar6;
                    local_788 = local_5b8;
                  }
                }
                if (uVar6 == 0x73) goto LAB_1800b6b72;
              }
              uVar32 = (ulonglong)(uVar22 + 1);
            } while (uVar22 + 1 != uVar30);
          }
          uVar32 = (ulonglong)local_788 * 4;
          if ((ulonglong)local_788 != 0) {
            if (uVar32 < 0x1cd) {
              FUN_1800d1c20((undefined8 *)local_784,(undefined8 *)local_5b4,uVar32);
            }
            else {
              FUN_1800d22d0((undefined1 (*) [32])local_784,0,0x1cc);
              p_Var8 = FUN_1800c2350();
              *(undefined4 *)p_Var8 = 0x22;
              FUN_1800c2ac4();
            }
          }
          uVar20 = local_788;
        }
LAB_1800b6a98:
        bVar33 = true;
      }
      if (!bVar33) goto LAB_1800b6b72;
    }
    if (uVar29 % 10 == 0) goto LAB_1800b6bf9;
    uVar29 = *(uint *)(&DAT_1800f4d48 + (ulonglong)(uVar29 % 10 - 1) * 4);
    if (uVar29 == 0) {
      local_788 = 0;
      uVar20 = 0;
      goto LAB_1800b6bf9;
    }
    if (uVar29 == 1) goto LAB_1800b6bf9;
    if (uVar20 != 0) {
      uVar15 = 0;
      uVar32 = 0;
      do {
        uVar31 = (int)uVar32 + 1;
        uVar23 = (ulonglong)local_784[uVar32] * (ulonglong)uVar29 + uVar15;
        local_784[uVar32] = (uint)uVar23;
        uVar15 = uVar23 >> 0x20;
        uVar32 = (ulonglong)uVar31;
      } while (uVar31 != uVar20);
      uVar29 = (uint)(uVar23 >> 0x20);
      if (uVar29 == 0) {
        uVar20 = local_788;
      }
      else {
        if (0x72 < local_788) {
LAB_1800b6b72:
          puVar9 = (ulonglong *)*param_2;
          if (*(char *)(param_2 + 1) == '\0') {
            *(uint *)puVar9 =
                 (-(uint)((char)param_1[0xc2] != '\0') & 0x80000000) + 0x7f800000 |
                 (uint)*puVar9 & 0x7f800000;
          }
          else {
            *puVar9 = (-(ulonglong)((char)param_1[0xc2] != '\0') & 0x8000000000000000) +
                      0x7ff0000000000000 | *puVar9 & 0x7ff0000000000000;
          }
          return 3;
        }
        local_784[local_788] = uVar29;
        local_788 = local_788 + 1;
        uVar20 = local_788;
      }
      goto LAB_1800b6bf9;
    }
LAB_1800b6bfe:
    uVar29 = 0;
  }
  uVar24 = (undefined7)((ulonglong)param_1 >> 8);
  if ((uVar29 < uVar4) && (uVar31 = 0, uVar5 != 0)) {
    uVar30 = 0;
    uVar32 = 0;
    local_958 = 0;
    uVar25 = uVar31;
    if (puVar26 != puVar7) {
      do {
        uVar18 = (uint)uVar32;
        if (uVar25 == 9) {
          if (uVar30 != 0) {
            uVar23 = 0;
            uVar15 = 0;
            do {
              uVar25 = (int)uVar15 + 1;
              uVar14 = (ulonglong)local_954[uVar15] * 1000000000 + uVar23;
              local_954[uVar15] = (uint)uVar14;
              uVar23 = uVar14 >> 0x20;
              uVar15 = (ulonglong)uVar25;
            } while (uVar25 != uVar30);
            uVar25 = (uint)(uVar14 >> 0x20);
            if (uVar25 != 0) {
              if (local_958 < 0x73) {
                local_954[local_958] = uVar25;
                local_958 = local_958 + 1;
                uVar30 = local_958;
                goto LAB_1800b6d02;
              }
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
            }
            uVar30 = local_958;
          }
LAB_1800b6d02:
          if (uVar18 != 0) {
            uVar25 = uVar31;
            uVar22 = 0;
            if (uVar30 != 0) {
              do {
                uVar30 = uVar25 + 1;
                uVar15 = local_954[uVar25] + uVar32;
                local_954[uVar25] = (uint)uVar15;
                uVar32 = uVar15 >> 0x20;
                uVar18 = (uint)(uVar15 >> 0x20);
                uVar25 = uVar30;
              } while (uVar30 != local_958);
              uVar22 = local_958;
              uVar30 = local_958;
              if (uVar18 == 0) goto LAB_1800b6d99;
            }
            if (uVar22 < 0x73) {
              local_954[uVar22] = uVar18;
              local_958 = local_958 + 1;
              uVar30 = local_958;
            }
            else {
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
              uVar30 = local_958;
            }
          }
LAB_1800b6d99:
          uVar18 = 0;
          uVar25 = uVar31;
        }
        uVar22 = *puVar26;
        uVar25 = uVar25 + 1;
        puVar26 = (uint *)((longlong)puVar26 + 1);
        uVar18 = (uint)(byte)uVar22 + uVar18 * 10;
        uVar32 = (ulonglong)uVar18;
      } while (puVar26 != puVar7);
      if (uVar25 != 0) {
        for (uVar31 = uVar25 / 10; uVar31 != 0; uVar31 = uVar31 - uVar22) {
          uVar22 = uVar31;
          if (0x26 < uVar31) {
            uVar22 = 0x26;
          }
          uVar15 = (ulonglong)(uVar22 - 1);
          bVar11 = (&DAT_1800f4cb2)[uVar15 * 4];
          bVar1 = (&DAT_1800f4cb3)[uVar15 * 4];
          local_218 = (uint)bVar1 + (uint)bVar11;
          FUN_1800d22d0((undefined1 (*) [32])local_214,0,(ulonglong)bVar11 * 4);
          FUN_1800d1c20((undefined8 *)(local_214 + bVar11),
                        (undefined8 *)
                        (&DAT_1800f43a0 + (ulonglong)*(ushort *)(&DAT_1800f4cb0 + uVar15 * 4) * 4),
                        (ulonglong)bVar1 << 2);
          uVar6 = local_954[0];
          if (local_218 < 2) {
            uVar15 = (ulonglong)local_214[0];
            if (local_214[0] == 0) goto LAB_1800b6e6f;
            if ((local_214[0] == 1) || (uVar30 == 0)) goto LAB_1800b714f;
            uVar14 = 0;
            uVar23 = 0;
            do {
              uVar6 = (int)uVar23 + 1;
              uVar16 = local_954[uVar23] * uVar15 + uVar14;
              local_954[uVar23] = (uint)uVar16;
              uVar14 = uVar16 >> 0x20;
              uVar19 = (uint)(uVar16 >> 0x20);
              uVar23 = (ulonglong)uVar6;
            } while (uVar6 != uVar30);
LAB_1800b6ecf:
            if (uVar19 == 0) goto LAB_1800b7148;
            if (local_958 < 0x73) {
              local_954[local_958] = uVar19;
              local_958 = local_958 + 1;
              uVar30 = local_958;
              goto LAB_1800b714f;
            }
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            bVar33 = false;
            uVar30 = local_958;
          }
          else {
            puVar28 = local_214;
            puVar7 = local_954;
            if (uVar30 < 2) {
              local_958 = local_218;
              memcpy_s(puVar7,0x1cc,puVar28,(ulonglong)local_218 << 2);
              if (uVar6 != 0) {
                uVar30 = local_958;
                if ((uVar6 != 1) && (local_958 != 0)) {
                  uVar23 = 0;
                  uVar15 = 0;
                  do {
                    uVar30 = (int)uVar15 + 1;
                    uVar14 = (ulonglong)local_954[uVar15] * (ulonglong)uVar6 + uVar23;
                    local_954[uVar15] = (uint)uVar14;
                    uVar23 = uVar14 >> 0x20;
                    uVar19 = (uint)(uVar14 >> 0x20);
                    uVar15 = (ulonglong)uVar30;
                  } while (uVar30 != local_958);
                  goto LAB_1800b6ecf;
                }
                goto LAB_1800b714f;
              }
LAB_1800b6e6f:
              local_218 = 0;
              puVar28 = local_214;
              local_958 = 0;
              rVar27 = 0;
            }
            else {
              if (uVar30 <= local_218) {
                uVar6 = uVar30;
              }
              else {
                puVar28 = local_954;
                puVar7 = local_214;
                uVar6 = local_218;
              }
              uVar15 = 0;
              local_958 = 0;
              uVar19 = local_218;
              if (uVar30 > local_218) {
                uVar19 = uVar30;
              }
              local_5b8 = 0;
              if (uVar6 != 0) {
                do {
                  uVar21 = (uint)uVar15;
                  uVar30 = puVar7[uVar15];
                  if (uVar30 == 0) {
                    if (uVar21 == local_958) {
                      local_958 = uVar21 + 1;
                      local_5b4[uVar15] = 0;
                      local_5b8 = local_958;
                    }
                  }
                  else {
                    uVar23 = 0;
                    if (uVar19 == 0) {
                      uVar30 = uVar21;
                    }
                    else {
                      do {
                        uVar12 = (uint)uVar15;
                        uVar14 = uVar15;
                        if (uVar12 == 0x73) break;
                        if (uVar12 == local_958) {
                          local_5b4[uVar15] = 0;
                          local_5b8 = uVar12 + 1;
                        }
                        uVar14 = (ulonglong)(uVar12 + 1);
                        uVar23 = (ulonglong)puVar28[-uVar21 + uVar12] * (ulonglong)uVar30 +
                                 (ulonglong)local_5b4[uVar15] + uVar23;
                        local_5b4[uVar15] = (uint)uVar23;
                        uVar23 = uVar23 >> 0x20;
                        uVar15 = uVar14;
                        local_958 = local_5b8;
                      } while (-uVar21 + uVar12 + 1 != uVar19);
                      uVar30 = (uint)uVar14;
                      uVar12 = (uint)uVar23;
                      while (uVar12 != 0) {
                        uVar30 = (uint)uVar14;
                        if (uVar30 == 0x73) goto LAB_1800b7212;
                        if (uVar30 == local_958) {
                          local_5b4[uVar14] = 0;
                          local_5b8 = uVar30 + 1;
                        }
                        uVar12 = local_5b4[uVar14];
                        uVar30 = uVar30 + 1;
                        local_5b4[uVar14] = (uint)(uVar12 + uVar23);
                        uVar12 = (uint)(uVar12 + uVar23 >> 0x20);
                        uVar23 = (ulonglong)uVar12;
                        uVar14 = (ulonglong)uVar30;
                        local_958 = local_5b8;
                      }
                    }
                    if (uVar30 == 0x73) {
LAB_1800b7212:
                      local_b28 = 0;
                      local_958 = 0;
                      memcpy_s(local_954,0x1cc,local_b24,0);
                      goto LAB_1800b7239;
                    }
                  }
                  uVar15 = (ulonglong)(uVar21 + 1);
                } while (uVar21 + 1 != uVar6);
              }
              puVar28 = local_5b4;
              rVar27 = (ulonglong)local_958 << 2;
            }
            memcpy_s(local_954,0x1cc,puVar28,rVar27);
LAB_1800b7148:
            uVar30 = local_958;
LAB_1800b714f:
            bVar33 = true;
          }
          if (!bVar33) goto LAB_1800b7239;
        }
        if (uVar25 % 10 != 0) {
          uVar31 = *(uint *)(&DAT_1800f4d48 + (ulonglong)(uVar25 % 10 - 1) * 4);
          if (uVar31 == 0) {
LAB_1800b7239:
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
LAB_1800b725a:
            uVar30 = local_958;
          }
          else if ((uVar31 != 1) && (uVar30 != 0)) {
            uVar23 = 0;
            uVar15 = 0;
            do {
              uVar25 = (int)uVar15 + 1;
              uVar14 = (ulonglong)local_954[uVar15] * (ulonglong)uVar31 + uVar23;
              local_954[uVar15] = (uint)uVar14;
              uVar23 = uVar14 >> 0x20;
              uVar15 = (ulonglong)uVar25;
            } while (uVar25 != uVar30);
            uVar31 = (uint)(uVar14 >> 0x20);
            if (uVar31 == 0) goto LAB_1800b725a;
            if (0x72 < local_958) goto LAB_1800b7239;
            local_954[local_958] = uVar31;
            local_958 = local_958 + 1;
            uVar30 = local_958;
          }
        }
        if (uVar18 != 0) {
          uVar15 = 0;
          uVar31 = 0;
          if (uVar30 != 0) {
            do {
              uVar25 = (int)uVar15 + 1;
              uVar31 = local_954[uVar15];
              local_954[uVar15] = (uint)(uVar31 + uVar32);
              uVar18 = (uint)(uVar31 + uVar32 >> 0x20);
              uVar32 = (ulonglong)uVar18;
              uVar15 = (ulonglong)uVar25;
            } while (uVar25 != local_958);
            uVar31 = local_958;
            uVar30 = local_958;
            if (uVar18 == 0) goto LAB_1800b72f6;
          }
          if (uVar31 < 0x73) {
            local_954[uVar31] = uVar18;
            local_958 = local_958 + 1;
            uVar30 = local_958;
          }
          else {
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVar30 = local_958;
          }
        }
      }
    }
LAB_1800b72f6:
    if ((int)*param_1 < 0) {
      uVar5 = uVar5 - *param_1;
    }
    uVar25 = 1;
    local_3e4 = 1;
    local_3e8 = 1;
    for (uVar31 = uVar5 / 10; uVar31 != 0; uVar31 = uVar31 - uVar18) {
      uVar18 = uVar31;
      if (0x26 < uVar31) {
        uVar18 = 0x26;
      }
      uVar32 = (ulonglong)(uVar18 - 1);
      bVar11 = (&DAT_1800f4cb2)[uVar32 * 4];
      bVar1 = (&DAT_1800f4cb3)[uVar32 * 4];
      local_218 = (uint)bVar1 + (uint)bVar11;
      FUN_1800d22d0((undefined1 (*) [32])local_214,0,(ulonglong)bVar11 * 4);
      FUN_1800d1c20((undefined8 *)(local_214 + bVar11),
                    (undefined8 *)
                    (&DAT_1800f43a0 + (ulonglong)*(ushort *)(&DAT_1800f4cb0 + uVar32 * 4) * 4),
                    (ulonglong)bVar1 << 2);
      if (local_218 < 2) {
        uVar32 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
LAB_1800b73f3:
          uVar25 = local_3e8;
LAB_1800b73fa:
          bVar33 = true;
        }
        else {
          if ((local_214[0] == 1) || (uVar25 == 0)) goto LAB_1800b73fa;
          uVar23 = 0;
          uVar15 = 0;
          do {
            uVar22 = (int)uVar15 + 1;
            uVar14 = local_5b4[uVar15 + 0x74] * uVar32 + uVar23;
            local_5b4[uVar15 + 0x74] = (uint)uVar14;
            uVar23 = uVar14 >> 0x20;
            uVar15 = (ulonglong)uVar22;
          } while (uVar22 != uVar25);
          uVar25 = (uint)(uVar14 >> 0x20);
          if (uVar25 == 0) goto LAB_1800b73f3;
          if (local_3e8 < 0x73) {
            local_5b4[(ulonglong)local_3e8 + 0x74] = uVar25;
            uVar25 = local_3e8 + 1;
            local_3e8 = uVar25;
            goto LAB_1800b73fa;
          }
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          bVar33 = false;
          uVar25 = local_3e8;
        }
      }
      else {
        puVar28 = local_214;
        puVar7 = (uint *)&local_3e4;
        if (uVar25 < 2) {
          uVar25 = (uint)local_3e4;
          uVar32 = local_3e4 & 0xffffffff;
          local_3e8 = local_218;
          memcpy_s(puVar7,0x1cc,puVar28,(ulonglong)local_218 << 2);
          if (uVar25 == 0) {
            puVar28 = local_cf4;
            local_3e8 = 0;
            rVar27 = 0;
            goto LAB_1800b771a;
          }
          if ((uVar25 != 1) && (local_3e8 != 0)) {
            uVar23 = 0;
            uVar15 = 0;
            do {
              uVar25 = (int)uVar15 + 1;
              uVar14 = local_5b4[uVar15 + 0x74] * uVar32 + uVar23;
              local_5b4[uVar15 + 0x74] = (uint)uVar14;
              uVar23 = uVar14 >> 0x20;
              uVar15 = (ulonglong)uVar25;
            } while (uVar25 != local_3e8);
            uVar25 = (uint)(uVar14 >> 0x20);
            if (uVar25 != 0) {
              if (0x72 < local_3e8) {
                local_3e8 = 0;
                memcpy_s(&local_3e4,0x1cc,local_cf4,0);
                bVar33 = false;
                uVar25 = local_3e8;
                goto LAB_1800b7732;
              }
              local_5b4[(ulonglong)local_3e8 + 0x74] = uVar25;
              local_3e8 = local_3e8 + 1;
            }
          }
        }
        else {
          if (local_218 < uVar25) {
            puVar28 = (uint *)&local_3e4;
            uVar22 = local_218;
            puVar7 = local_214;
          }
          else {
            uVar22 = uVar25;
          }
          uVar32 = 0;
          uVar6 = 0;
          uVar19 = local_218;
          if (local_218 < uVar25) {
            uVar19 = uVar25;
          }
          local_5b8 = 0;
          if (uVar22 != 0) {
            do {
              uVar21 = (uint)uVar32;
              uVar25 = puVar7[uVar32];
              if (uVar25 == 0) {
                if (uVar21 == uVar6) {
                  uVar6 = uVar21 + 1;
                  local_5b4[uVar32] = 0;
                  local_5b8 = uVar6;
                }
              }
              else {
                uVar15 = 0;
                if (uVar19 == 0) {
                  uVar25 = uVar21;
                }
                else {
                  do {
                    uVar12 = (uint)uVar32;
                    uVar23 = uVar32;
                    if (uVar12 == 0x73) break;
                    if (uVar12 == uVar6) {
                      local_5b4[uVar32] = 0;
                      local_5b8 = uVar12 + 1;
                    }
                    uVar23 = (ulonglong)(uVar12 + 1);
                    uVar15 = (ulonglong)puVar28[-uVar21 + uVar12] * (ulonglong)uVar25 + uVar15 +
                             (ulonglong)local_5b4[uVar32];
                    local_5b4[uVar32] = (uint)uVar15;
                    uVar15 = uVar15 >> 0x20;
                    uVar32 = uVar23;
                    uVar6 = local_5b8;
                  } while (-uVar21 + uVar12 + 1 != uVar19);
                  uVar25 = (uint)uVar23;
                  uVar12 = (uint)uVar15;
                  while (uVar12 != 0) {
                    uVar25 = (uint)uVar23;
                    if (uVar25 == 0x73) goto LAB_1800b77ad;
                    if (uVar25 == uVar6) {
                      local_5b4[uVar23] = 0;
                      local_5b8 = uVar25 + 1;
                    }
                    uVar6 = local_5b4[uVar23];
                    uVar25 = uVar25 + 1;
                    local_5b4[uVar23] = (uint)(uVar6 + uVar15);
                    uVar12 = (uint)(uVar6 + uVar15 >> 0x20);
                    uVar15 = (ulonglong)uVar12;
                    uVar23 = (ulonglong)uVar25;
                    uVar6 = local_5b8;
                  }
                }
                if (uVar25 == 0x73) {
LAB_1800b77ad:
                  local_b28 = 0;
                  local_3e8 = 0;
                  memcpy_s(&local_3e4,0x1cc,local_b24,0);
                  goto LAB_1800b7853;
                }
              }
              uVar32 = (ulonglong)(uVar21 + 1);
            } while (uVar21 + 1 != uVar22);
          }
          puVar28 = local_5b4;
          rVar27 = (ulonglong)uVar6 << 2;
          local_3e8 = uVar6;
LAB_1800b771a:
          memcpy_s(&local_3e4,0x1cc,puVar28,rVar27);
        }
        bVar33 = true;
        uVar25 = local_3e8;
      }
LAB_1800b7732:
      if (!bVar33) goto LAB_1800b7853;
    }
    uVar31 = 0;
    if (uVar5 % 10 != 0) {
      uVar5 = *(uint *)(&DAT_1800f4d48 + (ulonglong)(uVar5 % 10 - 1) * 4);
      if (uVar5 == 0) {
        local_3e8 = 0;
        memcpy_s(&local_3e4,0x1cc,local_cf4,0);
LAB_1800b7796:
        uVar25 = local_3e8;
      }
      else if ((uVar5 != 1) && (uVar25 != 0)) {
        uVar15 = 0;
        uVar32 = 0;
        do {
          uVar18 = (int)uVar32 + 1;
          uVar23 = (ulonglong)local_5b4[uVar32 + 0x74] * (ulonglong)uVar5 + uVar15;
          local_5b4[uVar32 + 0x74] = (uint)uVar23;
          uVar15 = uVar23 >> 0x20;
          uVar32 = (ulonglong)uVar18;
        } while (uVar18 != uVar25);
        uVar5 = (uint)(uVar23 >> 0x20);
        if (uVar5 == 0) goto LAB_1800b7796;
        if (0x72 < local_3e8) {
LAB_1800b7853:
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          uVar29 = param_1[0xc2];
          if (*(char *)(param_2 + 1) == '\0') {
            puVar28 = (uint *)FUN_1800b5a7c(param_2);
            *puVar28 = -(uint)((char)uVar29 != '\0') & 0x80000000;
          }
          else {
            puVar9 = (ulonglong *)FUN_1800b5a40(param_2);
            *puVar9 = -(ulonglong)((char)uVar29 != '\0') & 0x8000000000000000;
          }
          return 2;
        }
        local_5b4[(ulonglong)local_3e8 + 0x74] = uVar5;
        uVar25 = local_3e8 + 1;
        local_3e8 = uVar25;
      }
    }
    if (uVar30 == 0) {
      uVar5 = 0;
    }
    else {
      iVar13 = 0x1f;
      bVar33 = local_954[uVar30 - 1] == 0;
      if (!bVar33) {
        for (; local_954[uVar30 - 1] >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (bVar33) {
        uVar5 = uVar31;
      }
      else {
        uVar5 = iVar13 + 1;
      }
      uVar5 = (uVar30 - 1) * 0x20 + uVar5;
    }
    if (uVar25 != 0) {
      iVar13 = 0x1f;
      bVar33 = local_5b4[(ulonglong)(uVar25 - 1) + 0x74] == 0;
      if (!bVar33) {
        for (; local_5b4[(ulonglong)(uVar25 - 1) + 0x74] >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (!bVar33) {
        uVar31 = iVar13 + 1;
      }
      uVar31 = (uVar25 - 1) * 0x20 + uVar31;
    }
    uVar5 = -(uint)(uVar5 < uVar31) & uVar31 - uVar5;
    uVar31 = uVar30;
    if (uVar5 != 0) {
      sVar3 = (sbyte)(uVar5 & 0x1f);
      bVar11 = 0x20 - sVar3;
      uVar22 = uVar5 >> 5;
      uVar18 = (int)(1L << (bVar11 & 0x3f)) - 1;
      iVar13 = 0x1f;
      bVar33 = local_954[uVar30 - 1] == 0;
      if (!bVar33) {
        for (; local_954[uVar30 - 1] >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (bVar33) {
        iVar13 = 0;
      }
      else {
        iVar13 = iVar13 + 1;
      }
      if ((uVar22 + uVar30 < 0x74) &&
         (uVar31 = (0x20U - iVar13 < (uVar5 & 0x1f)) + uVar22 + uVar30, uVar31 < 0x74)) {
        uVar6 = uVar31 - 1;
        if (uVar6 != uVar22 - 1) {
          while( true ) {
            uVar19 = uVar6 - uVar22;
            if (uVar19 < uVar30) {
              uVar21 = local_954[uVar19];
            }
            else {
              uVar21 = 0;
            }
            if (uVar19 - 1 < uVar30) {
              uVar30 = local_954[uVar19 - 1];
            }
            else {
              uVar30 = 0;
            }
            local_954[uVar6] = (uVar30 & ~uVar18) >> (bVar11 & 0x1f) | (uVar21 & uVar18) << sVar3;
            uVar6 = uVar6 - 1;
            if (uVar6 == uVar22 - 1) break;
            uVar30 = local_958;
          }
        }
        uVar30 = 0;
        if (uVar22 != 0) {
          do {
            uVar32 = (ulonglong)uVar30;
            uVar30 = uVar30 + 1;
            local_954[uVar32] = 0;
          } while (uVar30 != uVar22);
        }
        local_958 = uVar31;
      }
      else {
        local_958 = 0;
        memcpy_s(local_954,0x1cc,local_cf4,0);
        uVar31 = local_958;
      }
    }
    uVar4 = uVar4 - uVar29;
    uVar30 = uVar4;
    if (uVar29 != 0) {
      if (uVar4 < uVar5) {
        bVar33 = true;
        goto LAB_1800b7c84;
      }
      uVar30 = uVar4 - uVar5;
    }
    if (uVar25 < uVar31) {
LAB_1800b7aa2:
      bVar33 = false;
    }
    else {
      uVar18 = uVar31;
      if (uVar31 < uVar25) {
        bVar33 = true;
      }
      else {
        do {
          uVar18 = uVar18 - 1;
          if (uVar18 == 0xffffffff) goto LAB_1800b7aa2;
        } while (local_954[uVar18] == local_5b4[(ulonglong)uVar18 + 0x74]);
        bVar33 = local_954[uVar18] <= local_5b4[(ulonglong)uVar18 + 0x74];
      }
    }
    if (bVar33) {
      uVar5 = uVar5 + 1;
    }
    uVar18 = uVar30 >> 5;
    sVar3 = (sbyte)(uVar30 & 0x1f);
    bVar11 = 0x20 - sVar3;
    uVar25 = (int)(1L << (bVar11 & 0x3f)) - 1;
    iVar13 = 0x1f;
    bVar33 = local_954[uVar31 - 1] == 0;
    if (!bVar33) {
      for (; local_954[uVar31 - 1] >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (bVar33) {
      iVar13 = 0;
    }
    else {
      iVar13 = iVar13 + 1;
    }
    if ((uVar18 + uVar31 < 0x74) &&
       (uVar30 = (0x20U - iVar13 < (uVar30 & 0x1f)) + uVar18 + uVar31, uVar30 < 0x74)) {
      uVar22 = uVar30 - 1;
      if (uVar22 != uVar18 - 1) {
        while( true ) {
          uVar6 = uVar22 - uVar18;
          if (uVar6 < uVar31) {
            uVar19 = local_954[uVar6];
          }
          else {
            uVar19 = 0;
          }
          if (uVar6 - 1 < uVar31) {
            uVar31 = local_954[uVar6 - 1];
          }
          else {
            uVar31 = 0;
          }
          local_954[uVar22] = (uVar31 & ~uVar25) >> (bVar11 & 0x1f) | (uVar19 & uVar25) << sVar3;
          uVar22 = uVar22 - 1;
          if (uVar22 == uVar18 - 1) break;
          uVar31 = local_958;
        }
      }
      uVar31 = 0;
      if (uVar18 != 0) {
        do {
          uVar32 = (ulonglong)uVar31;
          uVar31 = uVar31 + 1;
          local_954[uVar32] = 0;
        } while (uVar31 != uVar18);
      }
      local_958 = uVar30;
    }
    else {
      local_958 = 0;
      memcpy_s(local_954,0x1cc,local_cf4,0);
    }
    uVar32 = FUN_1800b7d80(&local_958,&local_3e8);
    bVar33 = local_958 == 0;
    lVar2 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar32 == 0) {
      uVar31 = 0;
    }
    else {
      uVar31 = (int)lVar2 + 1;
    }
    if (uVar4 < uVar31) {
      bVar11 = (char)uVar31 - (byte)uVar4;
      if ((!bVar33) || (bVar33 = true, (uVar32 & (1L << (bVar11 & 0x3f)) - 1U) != 0)) {
        bVar33 = false;
      }
      uVar32 = uVar32 >> (bVar11 & 0x3f);
    }
    uVar31 = 0;
    if (uVar20 != 0) {
      uVar31 = local_784[0];
    }
    uVar15 = 0;
    if (1 < uVar20) {
      uVar15 = (ulonglong)local_784[1];
    }
    uVar5 = ~uVar5;
    if (uVar29 != 0) {
      uVar5 = uVar29 - 2;
    }
    uVar10 = FUN_1800b5ab8(uVar32 + ((uVar15 << 0x20) + (ulonglong)uVar31 << ((byte)uVar4 & 0x3f)),
                           uVar5,CONCAT71(uVar24,(char)param_1[0xc2]),bVar33,param_2);
  }
  else {
    bVar33 = uVar5 != 0;
LAB_1800b7c84:
    uVar10 = FUN_1800b5e70(&local_788,uVar29,CONCAT71(uVar24,(char)param_1[0xc2]),bVar33,param_2);
  }
  return uVar10;
}


// Library Function - Single Match
//  enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type_common(struct
// __crt_strtox::floating_point_string const & __ptr64,class __crt_strtox::floating_point_value
// const & __ptr64)
//
// Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
// Studio 2019 Release

SLD_STATUS __cdecl
__crt_strtox::convert_hexadecimal_string_to_floating_type_common
          (floating_point_string *param_1,floating_point_value *param_2)

{
  floating_point_string fVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  floating_point_string *pfVar4;
  bool bVar5;
  int iVar6;
  floating_point_string *pfVar7;

  uVar3 = 0;
  pfVar4 = param_1 + 8;
  pfVar7 = param_1 + (ulonglong)*(uint *)(param_1 + 4) + 8;
  iVar6 = (-(uint)(param_2[8] != (floating_point_value)0x0) & 0x1d) + 0x17 + *(int *)param_1;
  if (pfVar4 != pfVar7) {
    do {
      if ((-(ulonglong)(param_2[8] != (floating_point_value)0x0) & 0x1fffffff000000) + 0xffffff <
          uVar3) break;
      fVar1 = *pfVar4;
      iVar6 = iVar6 + -4;
      pfVar4 = pfVar4 + 1;
      uVar3 = uVar3 * 0x10 + (ulonglong)(byte)fVar1;
    } while (pfVar4 != pfVar7);
  }
  bVar5 = true;
  while ((pfVar4 != pfVar7 && (bVar5 != false))) {
    fVar1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    bVar5 = fVar1 == (floating_point_string)0x0;
  }
  uVar2 = FUN_1800b5ab8(uVar3,iVar6,CONCAT71((int7)((ulonglong)pfVar4 >> 8),param_1[0x308]),bVar5,
                        (undefined8 *)param_2);
  return (SLD_STATUS)uVar2;
}


ulonglong FUN_1800b7d80(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte local_res8;
  uint local_res18;
  undefined8 local_238;
  ulonglong local_228;
  undefined1 local_214 [468];

  if ((*param_1 == 0) || (uVar4 = *param_2, uVar4 == 0)) {
    return 0;
  }
  uVar14 = *param_1 - 1;
  uVar15 = (ulonglong)uVar14;
  uVar13 = uVar4 - 1;
  if (uVar13 == 0) {
    uVar4 = param_2[1];
    if (uVar4 == 1) {
      uVar4 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      return (ulonglong)uVar4;
    }
    if (uVar14 == 0) {
      uVar13 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      uVar14 = uVar13 % uVar4;
      param_1[1] = uVar14;
      *param_1 = (uint)(uVar14 != 0);
      return (ulonglong)uVar13 / (ulonglong)uVar4;
    }
    uVar9 = 0;
    uVar16 = 0;
    uVar13 = 0;
    while (uVar14 != 0xffffffff) {
      lVar6 = uVar15 + 1;
      uVar14 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar14;
      uVar2 = (ulonglong)param_1[lVar6] | uVar16 << 0x20;
      uVar16 = uVar2 % (ulonglong)uVar4;
      uVar13 = (uint)uVar16;
      uVar9 = (uVar9 << 0x20) + (uVar2 / uVar4 & 0xffffffff);
    }
    *param_1 = 0;
    memcpy_s(param_1 + 1,0x1cc,local_214,0);
    param_1[1] = uVar13;
    param_1[2] = 0;
    *param_1 = 1;
    return uVar9;
  }
  if (uVar14 < uVar13) {
    return 0;
  }
  lVar6 = (longlong)(int)uVar14;
  iVar10 = uVar14 - uVar13;
  lVar8 = (longlong)iVar10;
  if (lVar8 <= lVar6) {
    puVar5 = param_1 + lVar6 + 1;
    uVar12 = uVar14;
    do {
      if (*(uint *)((longlong)param_2 + (lVar8 * -4 - (longlong)param_1) + (longlong)puVar5) !=
          *puVar5) {
        if (param_1[(longlong)(int)uVar12 + 1] <= param_2[(longlong)(int)(uVar12 - iVar10) + 1])
        goto LAB_1800b7f0b;
        break;
      }
      uVar12 = uVar12 - 1;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + -1;
    } while (lVar8 <= lVar6);
  }
  iVar10 = iVar10 + 1;
LAB_1800b7f0b:
  if (iVar10 == 0) {
    return 0;
  }
  uVar13 = param_2[(ulonglong)uVar13 + 1];
  local_res18 = param_2[(ulonglong)(uVar4 - 2) + 1];
  iVar7 = 0x1f;
  if (uVar13 != 0) {
    for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if (uVar13 == 0) {
    iVar7 = 0x20;
    local_res8 = 0;
  }
  else {
    iVar7 = 0x1f - iVar7;
    local_res8 = 0x20 - (char)iVar7;
    if (iVar7 == 0) goto LAB_1800b7fa2;
  }
  uVar12 = local_res18 >> (local_res8 & 0x1f);
  local_res18 = local_res18 << ((byte)iVar7 & 0x1f);
  uVar13 = uVar12 | uVar13 << ((byte)iVar7 & 0x1f);
  if (2 < uVar4) {
    local_res18 = local_res18 | param_2[(ulonglong)(uVar4 - 3) + 1] >> (local_res8 & 0x1f);
  }
LAB_1800b7fa2:
  iVar10 = iVar10 + -1;
  local_228 = 0;
  uVar9 = 0;
  if (-1 < iVar10) {
    uVar16 = (ulonglong)uVar13;
    uVar13 = iVar10 + uVar4;
    do {
      if ((uint)uVar15 < uVar13) {
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[(ulonglong)uVar13 + 1];
      }
      uVar12 = param_1[(ulonglong)(uVar13 - 2) + 1];
      uVar9 = (ulonglong)uVar12;
      local_238 = CONCAT44(uVar14,param_1[(ulonglong)(uVar13 - 1) + 1]);
      if (iVar7 != 0) {
        local_238 = (ulonglong)(uVar12 >> (local_res8 & 0x3f)) | local_238 << ((byte)iVar7 & 0x3f);
        uVar12 = uVar12 << ((byte)iVar7 & 0x1f);
        uVar9 = (ulonglong)uVar12;
        if (2 < uVar13) {
          uVar9 = (ulonglong)(uVar12 | param_1[(ulonglong)(uVar13 - 3) + 1] >> (local_res8 & 0x1f));
        }
      }
      uVar2 = local_238 / uVar16;
      local_238 = local_238 % uVar16;
      if (0xffffffff < uVar2) {
        lVar6 = uVar2 - 0xffffffff;
        uVar2 = 0xffffffff;
        local_238 = local_238 + lVar6 * uVar16;
      }
      if (local_238 < 0x100000000) {
        uVar3 = local_res18 * uVar2;
        do {
          if (uVar3 <= (local_238 << 0x20 | uVar9)) break;
          uVar2 = uVar2 - 1;
          uVar3 = uVar3 - local_res18;
          local_238 = local_238 + uVar16;
        } while (local_238 < 0x100000000);
      }
      if (uVar2 != 0) {
        uVar15 = 0;
        uVar12 = 0;
        if (uVar4 != 0) {
          puVar5 = param_2;
          do {
            puVar5 = puVar5 + 1;
            uVar15 = uVar15 + *puVar5 * uVar2;
            uVar1 = uVar12 + iVar10;
            uVar9 = uVar15 >> 0x20;
            uVar11 = (uint)uVar15;
            uVar15 = uVar9 + 1;
            if (uVar11 <= param_1[(ulonglong)uVar1 + 1]) {
              uVar15 = uVar9;
            }
            uVar12 = uVar12 + 1;
            param_1[(ulonglong)uVar1 + 1] = param_1[(ulonglong)uVar1 + 1] - uVar11;
          } while (uVar12 < uVar4);
        }
        if (uVar14 < uVar15) {
          uVar14 = 0;
          if (uVar4 != 0) {
            uVar15 = 0;
            puVar5 = param_2;
            do {
              puVar5 = puVar5 + 1;
              uVar12 = uVar14 + iVar10;
              uVar14 = uVar14 + 1;
              uVar15 = uVar15 + param_1[(ulonglong)uVar12 + 1] + (ulonglong)*puVar5;
              param_1[(ulonglong)uVar12 + 1] = (uint)uVar15;
              uVar15 = uVar15 >> 0x20;
            } while (uVar14 < uVar4);
          }
          uVar2 = uVar2 - 1;
        }
        uVar15 = (ulonglong)(uVar13 - 1);
      }
      uVar14 = (uint)uVar15;
      uVar13 = uVar13 - 1;
      uVar9 = (local_228 << 0x20) + (uVar2 & 0xffffffff);
      iVar10 = iVar10 + -1;
      local_228 = uVar9;
    } while (-1 < iVar10);
  }
  uVar14 = uVar14 + 1;
  uVar4 = uVar14;
  if (uVar14 < *param_1) {
    do {
      uVar15 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_1[uVar15 + 1] = 0;
    } while (uVar4 < *param_1);
  }
  *param_1 = uVar14;
  while ((uVar14 != 0 && (uVar14 = uVar14 - 1, param_1[(ulonglong)uVar14 + 1] == 0))) {
    *param_1 = uVar14;
  }
  return uVar9;
}


char FUN_1800b820c(longlong param_1)

{
  char cVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 6) {
    if (iVar2 != 5) {
      if ((iVar2 == 0) || (iVar2 == 1)) {
LAB_1800b826e:
        return (*(char *)(param_1 + 0x2c) != '\0') + '\x01';
      }
      if ((iVar2 != 2) && (iVar2 = iVar2 + -3, iVar2 != 0)) goto LAB_1800b8266;
    }
LAB_1800b822c:
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < 6) {
      if (iVar2 != 5) {
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            return '\x01';
          }
          if (iVar2 == 2) {
            return '\x02';
          }
          iVar2 = iVar2 + -3;
          goto LAB_1800b8247;
        }
        goto LAB_1800b8296;
      }
    }
    else if ((iVar2 != 6) && (iVar2 != 7)) {
      iVar2 = iVar2 + -9;
LAB_1800b8247:
      if (iVar2 == 0) goto LAB_1800b8296;
      if (iVar2 != 1) {
        return '\0';
      }
    }
    cVar1 = '\b';
  }
  else {
    if (iVar2 == 6) goto LAB_1800b822c;
    if (iVar2 != 7) {
      iVar2 = iVar2 + -8;
      if (iVar2 == 0) goto LAB_1800b826e;
LAB_1800b8266:
      if (iVar2 != 1) {
        return '\0';
      }
      goto LAB_1800b822c;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      cVar1 = '\b';
      if (iVar2 == 3) {
        return '\b';
      }
      if (iVar2 != 8) {
        cVar1 = '\0';
      }
      return cVar1;
    }
LAB_1800b8296:
    cVar1 = '\x04';
  }
  return cVar1;
}


ulonglong FUN_1800b82c0(input_processor<> *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;

  if (*(_iobuf **)(param_1 + 8) != (_iobuf *)0x0) {
    bVar3 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(param_1 + 8));
    if (!bVar3) {
      return 0xffffffffffffffff;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      do {
        uVar5 = FUN_1800b5878((longlong)(param_1 + 0x18));
        if ((char)uVar5 == '\0') break;
        uVar7 = FUN_1800b8a00(param_1);
      } while ((char)uVar7 != '\0');
      uVar1 = *(uint *)(param_1 + 0x80);
      uVar7 = (ulonglong)uVar1;
      if ((*(longlong *)(param_1 + 0x80) == 0) && (*(int *)(param_1 + 0x2c) != 1)) {
        uVar6 = _fgetc_nolock(*(FILE **)(param_1 + 8));
        uVar7 = 0xffffffffffffffff;
        if ((uint)uVar6 != 0xffffffff) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          FUN_1800c6228((uint)uVar6,*(FILE **)(param_1 + 8));
          uVar7 = (ulonglong)uVar1;
        }
      }
      if ((((byte)*param_1 & 1) != 0) && (iVar2 = *(int *)(param_1 + 0x28), iVar2 != 0)) {
        p_Var4 = FUN_1800c2350();
        *(int *)p_Var4 = iVar2;
        FUN_1800c2ac4();
      }
      return uVar7 & 0xffffffff;
    }
  }
  p_Var4 = FUN_1800c2350();
  *(undefined4 *)p_Var4 = 0x16;
  FUN_1800c2ac4();
  return 0xffffffffffffffff;
}


undefined4 FUN_1800b8388(input_processor<> *param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;

  if ((*(ulonglong *)(param_1 + 0x18) == 0) ||
     (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x18))) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    uVar7 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      p_Var2 = FUN_1800c2350();
      uVar7 = 0xffffffff;
      *(undefined4 *)p_Var2 = 0x16;
    }
    else {
      do {
        uVar4 = FUN_1800b5878((longlong)(param_1 + 0x20));
        if ((char)uVar4 == '\0') break;
        uVar3 = FUN_1800b8aac(param_1);
      } while ((char)uVar3 != '\0');
      uVar7 = *(undefined4 *)(param_1 + 0x88);
      if ((*(longlong *)(param_1 + 0x88) == 0) && (*(int *)(param_1 + 0x34) != 1)) {
        pbVar5 = *(byte **)(param_1 + 0x18);
        if (pbVar5 == *(byte **)(param_1 + 0x10)) {
          uVar6 = 0xffffffff;
          uVar7 = 0xffffffff;
        }
        else {
          uVar6 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          *(byte **)(param_1 + 0x18) = pbVar5;
        }
        if ((pbVar5 != *(byte **)(param_1 + 8)) &&
           ((pbVar5 != *(byte **)(param_1 + 0x10) || (uVar6 != 0xffffffff)))) {
          *(byte **)(param_1 + 0x18) = pbVar5 + -1;
        }
      }
      if ((((byte)*param_1 & 1) == 0) || (iVar1 = *(int *)(param_1 + 0x30), iVar1 == 0)) {
        return uVar7;
      }
      p_Var2 = FUN_1800c2350();
      *(int *)p_Var2 = iVar1;
    }
    FUN_1800c2ac4();
  }
  return uVar7;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::stream_input_adapter<char> >::process_conversion_specifier(void) __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::process_conversion_specifier(input_processor<> *this)

{
  char cVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined7 extraout_var_00;
  int iVar5;
  uint uVar6;

  iVar5 = *(int *)(this + 0x48);
  if (iVar5 < 6) {
    if (iVar5 != 5) {
      if (iVar5 == 0) {
        cVar1 = FUN_1800b820c((longlong)(this + 0x18));
        if (CONCAT71(extraout_var,cVar1) != 1) {
          if (CONCAT71(extraout_var,cVar1) != 2) {
            return false;
          }
          iVar5 = 0;
          goto LAB_1800b84f6;
        }
        iVar5 = 0;
        goto LAB_1800b8505;
      }
      if (iVar5 == 1) {
        bVar2 = process_string_specifier(this,1);
        return bVar2;
      }
      if (iVar5 == 2) {
        uVar6 = 0;
      }
      else {
        if (iVar5 != 3) {
          if (iVar5 != 4) {
            return false;
          }
          uVar6 = 8;
          goto LAB_1800b8583;
        }
        uVar6 = 10;
      }
      bVar2 = true;
      goto LAB_1800b8586;
    }
    uVar6 = 10;
  }
  else {
    if (iVar5 != 6) {
      if (iVar5 == 7) {
        bVar2 = process_floating_point_specifier(this);
        return bVar2;
      }
      if (iVar5 != 8) {
        if (iVar5 != 9) {
          return false;
        }
        if (this[0x32] == (input_processor<>)0x0) {
          uVar4 = FUN_1800b92b0((longlong)this,*(undefined8 *)(this + 0x10));
          return (bool)(char)uVar4;
        }
        return true;
      }
      cVar1 = FUN_1800b820c((longlong)(this + 0x18));
      if (CONCAT71(extraout_var_00,cVar1) != 1) {
        if (CONCAT71(extraout_var_00,cVar1) != 2) {
          return false;
        }
        iVar5 = 8;
LAB_1800b84f6:
        uVar3 = FUN_1800b5274(this,iVar5);
        return (bool)(char)uVar3;
      }
      iVar5 = 8;
LAB_1800b8505:
      uVar3 = FUN_1800b4f40((byte *)this,iVar5);
      return (bool)(char)uVar3;
    }
    uVar6 = 0x10;
  }
LAB_1800b8583:
  bVar2 = false;
LAB_1800b8586:
  bVar2 = process_integer_specifier(this,uVar6,bVar2);
  return bVar2;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::string_input_adapter<char> >::process_conversion_specifier(void) __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::process_conversion_specifier(input_processor<> *this)

{
  char cVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined7 extraout_var_00;
  int iVar5;
  uint uVar6;

  iVar5 = *(int *)(this + 0x50);
  if (iVar5 < 6) {
    if (iVar5 != 5) {
      if (iVar5 == 0) {
        cVar1 = FUN_1800b820c((longlong)(this + 0x20));
        if (CONCAT71(extraout_var,cVar1) != 1) {
          if (CONCAT71(extraout_var,cVar1) != 2) {
            return false;
          }
          iVar5 = 0;
          goto LAB_1800b8612;
        }
        iVar5 = 0;
        goto LAB_1800b8621;
      }
      if (iVar5 == 1) {
        bVar2 = process_string_specifier(this,1);
        return bVar2;
      }
      if (iVar5 == 2) {
        uVar6 = 0;
      }
      else {
        if (iVar5 != 3) {
          if (iVar5 != 4) {
            return false;
          }
          uVar6 = 8;
          goto LAB_1800b86a3;
        }
        uVar6 = 10;
      }
      bVar2 = true;
      goto LAB_1800b86a6;
    }
    uVar6 = 10;
  }
  else {
    if (iVar5 != 6) {
      if (iVar5 == 7) {
        bVar2 = process_floating_point_specifier(this);
        return bVar2;
      }
      if (iVar5 != 8) {
        if (iVar5 != 9) {
          return false;
        }
        if (this[0x3a] == (input_processor<>)0x0) {
          uVar4 = FUN_1800b9324((longlong)this,*(longlong *)(this + 0x18) - *(longlong *)(this + 8))
          ;
          return (bool)(char)uVar4;
        }
        return true;
      }
      cVar1 = FUN_1800b820c((longlong)(this + 0x20));
      if (CONCAT71(extraout_var_00,cVar1) != 1) {
        if (CONCAT71(extraout_var_00,cVar1) != 2) {
          return false;
        }
        iVar5 = 8;
LAB_1800b8612:
        uVar3 = FUN_1800b5440(this,iVar5);
        return (bool)(char)uVar3;
      }
      iVar5 = 8;
LAB_1800b8621:
      uVar3 = FUN_1800b50d0((byte *)this,iVar5);
      return (bool)(char)uVar3;
    }
    uVar6 = 0x10;
  }
LAB_1800b86a3:
  bVar2 = false;
LAB_1800b86a6:
  bVar2 = process_integer_specifier(this,uVar6,bVar2);
  return bVar2;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::stream_input_adapter<char> >::process_floating_point_specifier(void) __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::process_floating_point_specifier(input_processor<> *this)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 extraout_var_00;

  uVar3 = skip_whitespace<>((stream_input_adapter<char> *)(this + 8),
                            *(__crt_locale_pointers **)(this + 0x70));
  if (uVar3 != 0xffffffff) {
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
    FUN_1800c6228(uVar3,*(FILE **)(this + 8));
  }
  cVar1 = FUN_1800b820c((longlong)(this + 0x18));
  if (CONCAT44(extraout_var_00,CONCAT31(extraout_var,cVar1)) == 4) {
    bVar2 = FUN_1800b4cb4((longlong)this);
  }
  else if (CONCAT44(extraout_var_00,CONCAT31(extraout_var,cVar1)) == 8) {
    bVar2 = FUN_1800b4df4((longlong)this);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::string_input_adapter<char> >::process_floating_point_specifier(void) __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::process_floating_point_specifier(input_processor<> *this)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined7 extraout_var;

  uVar4 = FUN_1800b5670((longlong)(this + 8),*(_locale_t *)(this + 0x78));
  lVar1 = *(longlong *)(this + 0x18);
  if ((lVar1 != *(longlong *)(this + 8)) &&
     ((lVar1 != *(longlong *)(this + 0x10) || ((int)uVar4 != -1)))) {
    *(longlong *)(this + 0x18) = lVar1 + -1;
  }
  cVar2 = FUN_1800b820c((longlong)(this + 0x20));
  if (CONCAT71(extraout_var,cVar2) == 4) {
    bVar3 = FUN_1800b4d50((longlong)this);
  }
  else if (CONCAT71(extraout_var,cVar2) == 8) {
    bVar3 = FUN_1800b4e98((longlong)this);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::stream_input_adapter<char> >::process_integer_specifier(unsigned int,bool)
// __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::process_integer_specifier
          (input_processor<> *this,uint param_1,bool param_2)

{
  stream_input_adapter<char> *psVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  char local_res8 [8];
  stream_input_adapter<char> *local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;

  psVar1 = (stream_input_adapter<char> *)(this + 8);
  uVar3 = skip_whitespace<>(psVar1,*(__crt_locale_pointers **)(this + 0x70));
  if (uVar3 != 0xffffffff) {
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
    FUN_1800c6228(uVar3,*(FILE **)psVar1);
  }

  local_20 = *(undefined8 *)(this + 0x38);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  local_28 = psVar1;
  uVar4 = FUN_1800b4680(*(undefined4 **)(this + 0x70),(longlong *)&local_28,param_1,param_2);
  if (local_res8[0] == '\0') {
    uVar2 = 0;
  }
  else if (this[0x32] == (input_processor<>)0x0) {
    uVar4 = FUN_1800b92b0((longlong)this,uVar4);
    uVar2 = (undefined1)uVar4;
  }
  else {
    uVar2 = 1;
  }
  return (bool)uVar2;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::string_input_adapter<char> >::process_integer_specifier(unsigned int,bool)
// __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::process_integer_specifier
          (input_processor<> *this,uint param_1,bool param_2)

{
  input_processor<> *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  char local_res8 [8];
  input_processor<> *local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;

  piVar1 = this + 8;
  uVar4 = FUN_1800b5670((longlong)piVar1,*(_locale_t *)(this + 0x78));
  lVar2 = *(longlong *)(this + 0x18);
  if ((lVar2 != *(longlong *)piVar1) &&
     ((lVar2 != *(longlong *)(this + 0x10) || ((int)uVar4 != -1)))) {
    *(longlong *)(this + 0x18) = lVar2 + -1;
  }
  local_20 = *(undefined8 *)(this + 0x40);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  local_28 = piVar1;
  uVar4 = FUN_1800b4bb4(*(undefined4 **)(this + 0x78),(longlong *)&local_28,param_1,param_2);
  if (local_res8[0] == '\0') {
    uVar3 = 0;
  }
  else if (this[0x3a] == (input_processor<>)0x0) {
    uVar4 = FUN_1800b9324((longlong)this,uVar4);
    uVar3 = (undefined1)uVar4;
  }
  else {
    uVar3 = 1;
  }
  return (bool)uVar3;
}


undefined8 FUN_1800b88f0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  uint uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;

  puVar3 = __pctype_func();
  if ((short)puVar3[param_2] < 0) {
    uVar4 = _fgetc_nolock(*(FILE **)(param_1 + 8));
    plVar1 = (longlong *)(param_1 + 0x10);
    uVar2 = (uint)uVar4;
    if (uVar2 != 0xffffffff) {
      *plVar1 = *plVar1 + 1;
    }
    puVar3 = (ushort *)0x0;
    if (uVar2 != *(byte *)(param_1 + 0x31)) {
      if (uVar2 != 0xffffffff) {
        *plVar1 = *plVar1 + -1;
        uVar2 = FUN_1800c6228(uVar2,*(FILE **)(param_1 + 8));
        puVar3 = (ushort *)CONCAT44(extraout_var,uVar2);
      }
      if ((int)(char)param_2 != 0xffffffff) {
        *plVar1 = *plVar1 + -1;
        uVar2 = FUN_1800c6228((int)(char)param_2,*(FILE **)(param_1 + 8));
        puVar3 = (ushort *)CONCAT44(extraout_var_00,uVar2);
      }
      return (ulonglong)puVar3 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}


undefined8 FUN_1800b8978(longlong param_1,byte param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;

  puVar2 = __pctype_func();
  if (-1 < (short)puVar2[param_2]) {
LAB_1800b89f0:
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
  puVar4 = *(ushort **)(param_1 + 0x18);
  puVar1 = *(ushort **)(param_1 + 0x10);
  if (puVar4 == puVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)(byte)*puVar4;
    puVar4 = (ushort *)((longlong)puVar4 + 1);
    *(ushort **)(param_1 + 0x18) = puVar4;
  }
  puVar2 = (ushort *)0x0;
  if (uVar3 == *(byte *)(param_1 + 0x39)) goto LAB_1800b89f0;
  if (puVar4 == *(ushort **)(param_1 + 8)) {
LAB_1800b89d0:
    puVar2 = puVar4;
    if (puVar2 == *(ushort **)(param_1 + 8)) goto LAB_1800b89ec;
    puVar4 = puVar2;
    if (puVar2 == puVar1) goto LAB_1800b89de;
  }
  else {
    if ((puVar4 != puVar1) || (uVar3 != 0xffffffff)) {
      *(ushort **)(param_1 + 0x18) = (ushort *)((longlong)puVar4 + -1);
      puVar4 = (ushort *)((longlong)puVar4 + -1);
      goto LAB_1800b89d0;
    }
LAB_1800b89de:
    if (param_2 == 0xff) goto LAB_1800b89ec;
  }
  puVar2 = (ushort *)((longlong)puVar4 + -1);
  *(ushort **)(param_1 + 0x18) = puVar2;
LAB_1800b89ec:
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}


ulonglong FUN_1800b8a00(input_processor<> *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar4;
  undefined4 extraout_var_01;
  undefined8 uVar5;
  undefined4 extraout_var_02;

  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 2) {
    uVar3 = __crt_stdio_input::skip_whitespace<>
                      ((stream_input_adapter<char> *)(param_1 + 8),
                       *(__crt_locale_pointers **)(param_1 + 0x70));
    uVar5 = CONCAT44(extraout_var_01,uVar3);
    if (uVar3 != 0xffffffff) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      uVar3 = FUN_1800c6228(uVar3,*(FILE **)(param_1 + 8));
      uVar5 = CONCAT44(extraout_var_02,uVar3);
    }
    uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  else {
    if (iVar1 == 3) {
      in_RAX = _fgetc_nolock(*(FILE **)(param_1 + 8));
      uVar3 = (uint)in_RAX;
      if (uVar3 != 0xffffffff) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        if (uVar3 == (byte)param_1[0x30]) {
          uVar4 = FUN_1800b88f0((longlong)param_1,(byte)in_RAX);
          return uVar4;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        uVar3 = FUN_1800c6228(uVar3,*(FILE **)(param_1 + 8));
        in_RAX = CONCAT44(extraout_var_00,uVar3);
      }
    }
    else if (iVar1 == 4) {
      bVar2 = __crt_stdio_input::input_processor<>::process_conversion_specifier(param_1);
      if (((bVar2) && (*(int *)(param_1 + 0x48) != 9)) && (param_1[0x32] == (input_processor<>)0x0))
      {
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 1;
      }
      return CONCAT71(extraout_var,bVar2);
    }
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  return uVar4;
}


ulonglong FUN_1800b8aac(input_processor<> *param_1)

{
  input_processor<> iVar1;
  int iVar2;
  input_processor<> *piVar3;
  bool bVar4;
  input_processor<> *in_RAX;
  undefined7 extraout_var;
  ulonglong uVar5;
  longlong lVar6;

  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 2) {
    uVar5 = FUN_1800b5670((longlong)(param_1 + 8),*(_locale_t *)(param_1 + 0x78));
    lVar6 = *(longlong *)(param_1 + 0x18);
    if ((lVar6 != *(longlong *)(param_1 + 8)) &&
       ((lVar6 != *(longlong *)(param_1 + 0x10) || ((int)uVar5 != -1)))) {
      lVar6 = lVar6 + -1;
      *(longlong *)(param_1 + 0x18) = lVar6;
    }
    uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
  else {
    if (iVar2 == 3) {
      piVar3 = *(input_processor<> **)(param_1 + 0x18);
      if (piVar3 != *(input_processor<> **)(param_1 + 0x10)) {
        iVar1 = *piVar3;
        *(input_processor<> **)(param_1 + 0x18) = piVar3 + 1;
        if (iVar1 == param_1[0x38]) {
          uVar5 = FUN_1800b8978((longlong)param_1,(byte)iVar1);
          return uVar5;
        }
        in_RAX = (input_processor<> *)0x0;
        if (piVar3 + 1 != *(input_processor<> **)(param_1 + 8)) {
          *(input_processor<> **)(param_1 + 0x18) = piVar3;
          in_RAX = piVar3;
        }
      }
    }
    else if (iVar2 == 4) {
      bVar4 = __crt_stdio_input::input_processor<>::process_conversion_specifier(param_1);
      if (((bVar4) && (*(int *)(param_1 + 0x50) != 9)) && (param_1[0x3a] == (input_processor<>)0x0))
      {
        *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
      }
      return CONCAT71(extraout_var,bVar4);
    }
    uVar5 = (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  return uVar5;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::stream_input_adapter<char> >::process_string_specifier(enum
// __crt_stdio_input::conversion_mode) __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::process_string_specifier
          (input_processor<> *this,conversion_mode param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined7 extraout_var;
  undefined8 uVar4;

  if (param_1 == 1) {
    uVar3 = skip_whitespace<>((stream_input_adapter<char> *)(this + 8),
                              *(__crt_locale_pointers **)(this + 0x70));
    if (uVar3 != 0xffffffff) {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
      FUN_1800c6228(uVar3,*(FILE **)(this + 8));
    }
  }
  cVar1 = FUN_1800b820c((longlong)(this + 0x18));
  if (CONCAT71(extraout_var,cVar1) == 1) {
    uVar4 = FUN_1800b4f40((byte *)this,param_1);
    uVar2 = (undefined1)uVar4;
  }
  else if (CONCAT71(extraout_var,cVar1) == 2) {
    uVar4 = FUN_1800b5274(this,param_1);
    uVar2 = (undefined1)uVar4;
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::string_input_adapter<char> >::process_string_specifier(enum
// __crt_stdio_input::conversion_mode) __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::process_string_specifier
          (input_processor<> *this,conversion_mode param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined7 extraout_var;
  undefined8 uVar5;

  if (param_1 == 1) {
    uVar4 = FUN_1800b5670((longlong)(this + 8),*(_locale_t *)(this + 0x78));
    lVar1 = *(longlong *)(this + 0x18);
    if ((lVar1 != *(longlong *)(this + 8)) &&
       ((lVar1 != *(longlong *)(this + 0x10) || ((int)uVar4 != -1)))) {
      *(longlong *)(this + 0x18) = lVar1 + -1;
    }
  }
  cVar2 = FUN_1800b820c((longlong)(this + 0x20));
  if (CONCAT71(extraout_var,cVar2) == 1) {
    uVar5 = FUN_1800b50d0((byte *)this,param_1);
    uVar3 = (undefined1)uVar5;
  }
  else if (CONCAT71(extraout_var,cVar2) == 2) {
    uVar5 = FUN_1800b5440(this,param_1);
    uVar3 = (undefined1)uVar5;
  }
  else {
    uVar3 = 0;
  }
  return (bool)uVar3;
}


ulonglong FUN_1800b8c70(longlong param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;

  pbVar3 = *(byte **)(param_1 + 8);
  bVar1 = *pbVar3;
  if (bVar1 < 0x65) {
    if (bVar1 == 100) {
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    else if (bVar1 < 0x4a) {
      if (bVar1 == 0x49) {
LAB_1800b8daa:
        *(undefined4 *)(param_1 + 0x30) = 2;
      }
      else {
        if (bVar1 != 0x41) {
          if (bVar1 == 0x43) {
LAB_1800b8ce9:
            pbVar4 = (byte *)0x0;
            if (*(longlong *)(param_1 + 0x20) == 0) {
              *(undefined8 *)(param_1 + 0x20) = 1;
            }
            iVar2 = *(int *)(param_1 + 0x28);
            if (iVar2 == 2) {
              *(undefined1 *)(param_1 + 0x2c) = 0;
            }
            else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
              *(undefined1 *)(param_1 + 0x2c) = 1;
            }
            *(undefined4 *)(param_1 + 0x30) = 0;
            *(byte **)(param_1 + 8) = pbVar3 + 1;
            goto LAB_1800b8e36;
          }
          if (((bVar1 != 0x45) && (bVar1 != 0x46)) && (bVar1 != 0x47)) goto LAB_1800b8dcd;
        }
LAB_1800b8cb8:
        *(undefined4 *)(param_1 + 0x30) = 7;
      }
    }
    else {
      if (bVar1 != 0x53) {
        if (bVar1 == 0x58) goto LAB_1800b8e27;
        if (bVar1 == 0x5b) {
          iVar2 = *(int *)(param_1 + 0x28);
          if (iVar2 == 2) {
            *(undefined1 *)(param_1 + 0x2c) = 0;
          }
          else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
            *(undefined1 *)(param_1 + 0x2c) = 1;
          }
          *(undefined4 *)(param_1 + 0x30) = 8;
          *(byte **)(param_1 + 8) = pbVar3 + 1;
          uVar5 = FUN_1800b8fec(param_1);
          return uVar5;
        }
        if (bVar1 != 0x61) {
          if (bVar1 != 99) goto LAB_1800b8dcd;
          goto LAB_1800b8ce9;
        }
        goto LAB_1800b8cb8;
      }
LAB_1800b8df5:
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 2) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  else if (bVar1 < 0x70) {
    if (bVar1 == 0x6f) {
      *(undefined4 *)(param_1 + 0x30) = 4;
    }
    else {
      if (((bVar1 == 0x65) || (bVar1 == 0x66)) || (bVar1 == 0x67)) goto LAB_1800b8cb8;
      if (bVar1 == 0x69) goto LAB_1800b8daa;
      if (bVar1 != 0x6e) {
LAB_1800b8dcd:
        *(undefined8 *)(param_1 + 0x10) = 0x16;
        *(undefined2 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x1a) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 9;
    }
  }
  else {
    if (bVar1 == 0x70) {
      *(undefined4 *)(param_1 + 0x28) = 10;
    }
    else {
      if (bVar1 == 0x73) goto LAB_1800b8df5;
      if (bVar1 == 0x75) {
        *(undefined4 *)(param_1 + 0x30) = 5;
        goto LAB_1800b8e2e;
      }
      if (bVar1 != 0x78) goto LAB_1800b8dcd;
    }
LAB_1800b8e27:
    *(undefined4 *)(param_1 + 0x30) = 6;
  }
LAB_1800b8e2e:
  pbVar4 = pbVar3 + 1;
  *(byte **)(param_1 + 8) = pbVar4;
LAB_1800b8e36:
  return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
}


undefined8 FUN_1800b8e3c(longlong param_1)

{
  char *pcVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  longlong local_res8 [4];

  pcVar1 = *(char **)(param_1 + 8);
  if ((byte)(*pcVar1 - 0x30U) < 10) {
    uVar2 = (ulonglong)((int)*pcVar1 - 0x30);
  }
  else if ((byte)(*pcVar1 + 0x9fU) < 0x1a) {
    uVar2 = (ulonglong)((int)*pcVar1 - 0x57);
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*pcVar1 + 0xbfU);
    if (0x19 < (byte)(*pcVar1 + 0xbfU)) goto LAB_1800b8eaa;
    uVar2 = (ulonglong)((int)*pcVar1 - 0x37);
  }
  if ((uint)uVar2 < 10) {
    local_res8[0] = 0;
    uVar2 = FUN_1800ba8b4((longlong)pcVar1,local_res8,10);
    if ((uVar2 == 0) || (local_res8[0] == *(longlong *)(param_1 + 8))) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0x16;
      return uVar2 & 0xffffffffffffff00;
    }
    *(ulonglong *)(param_1 + 0x20) = uVar2;
    *(longlong *)(param_1 + 8) = local_res8[0];
  }
LAB_1800b8eaa:
  return CONCAT71((int7)(uVar2 >> 8),1);
}


void FUN_1800b8edc(longlong param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar4 = *(char **)(param_1 + 8);
  cVar1 = *pcVar4;
  if (cVar1 == 'I') {
    cVar1 = pcVar4[1];
    if ((cVar1 == '3') && (pcVar4[2] == '2')) {
      pcVar4 = pcVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 9;
      goto LAB_1800b8fe4;
    }
    if (cVar1 == '6') {
      if (pcVar4[2] != '4') {
        return;
      }
      pcVar4 = pcVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 10;
      goto LAB_1800b8fe4;
    }
    if (0x20 < (byte)(cVar1 + 0xa8U)) {
      return;
    }
    if ((0x120821001U >> ((ulonglong)(byte)(cVar1 + 0xa8U) & 0x3f) & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 10;
  }
  else if (cVar1 == 'L') {
    *(undefined4 *)(param_1 + 0x28) = 8;
  }
  else if (cVar1 == 'T') {
    *(undefined4 *)(param_1 + 0x28) = 0xb;
  }
  else {
    if (cVar1 == 'h') {
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar3;
      if (cVar1 == 'h') {
        pcVar3 = pcVar4 + 2;
      }
      *(char **)(param_1 + 8) = pcVar3;
      iVar2 = (cVar1 != 'h') + 1;
LAB_1800b8f7c:
      *(int *)(param_1 + 0x28) = iVar2;
      return;
    }
    if (cVar1 == 'j') {
      *(undefined4 *)(param_1 + 0x28) = 5;
    }
    else {
      if (cVar1 == 'l') {
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar3;
        if (cVar1 == 'l') {
          pcVar3 = pcVar4 + 2;
        }
        *(char **)(param_1 + 8) = pcVar3;
        iVar2 = 4 - (uint)(cVar1 != 'l');
        goto LAB_1800b8f7c;
      }
      if (cVar1 == 't') {
        *(undefined4 *)(param_1 + 0x28) = 7;
      }
      else {
        if (cVar1 != 'z') {
          return;
        }
        *(undefined4 *)(param_1 + 0x28) = 6;
      }
    }
  }
  pcVar4 = pcVar4 + 1;
LAB_1800b8fe4:
  *(char **)(param_1 + 8) = pcVar4;
  return;
}


ulonglong FUN_1800b8fec(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;

  pbVar6 = (byte *)(param_1 + 0x34);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0xc;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6[4] = 0;
    pbVar6[5] = 0;
    pbVar6[6] = 0;
    pbVar6[7] = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    pbVar2 = *(byte **)(param_1 + 8);
    bVar1 = *pbVar2;
    bVar3 = bVar1;
    if (bVar1 == 0x5e) {
      pbVar2 = pbVar2 + 1;
      *(byte **)(param_1 + 8) = pbVar2;
      bVar3 = *pbVar2;
    }
    if (bVar3 == 0x5d) {
      pbVar2 = pbVar2 + 1;
      *(byte **)(param_1 + 8) = pbVar2;
      *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) | 0x20;
    }
    pbVar5 = (byte *)0x0;
    register0x00000020 = (BADSPACEBASE *)pbVar2;
    if (*pbVar2 != 0x5d) {
      bVar3 = *pbVar2;
      do {
        if (bVar3 == 0) break;
        if ((((bVar3 == 0x2d) && ((byte *)((longlong)register0x00000020 + -1) != pbVar5)) &&
            ((byte *)register0x00000020 != pbVar2)) &&
           (*(byte *)((longlong)register0x00000020 + 1) != 0x5d)) {
          bVar3 = *(byte *)((longlong)register0x00000020 + -1);
          pbVar5 = (byte *)((longlong)register0x00000020 + 1);
          bVar4 = bVar3;
          bVar7 = *(byte *)((longlong)register0x00000020 + 1);
          if (bVar3 <= *(byte *)((longlong)register0x00000020 + 1)) {
            bVar4 = *(byte *)((longlong)register0x00000020 + 1);
            bVar7 = bVar3;
          }
          for (; bVar7 != (byte)(bVar4 + 1); bVar7 = bVar7 + 1) {
            *(byte *)((ulonglong)(bVar7 >> 3) + 0x34 + param_1) =
                 *(byte *)((ulonglong)(bVar7 >> 3) + 0x34 + param_1) | (byte)(1 << (bVar7 & 7));
          }
        }
        else {
          *(byte *)((ulonglong)(bVar3 >> 3) + 0x34 + param_1) =
               *(byte *)((ulonglong)(bVar3 >> 3) + 0x34 + param_1) | (byte)(1 << (bVar3 & 7));
        }
        register0x00000020 = (BADSPACEBASE *)(*(longlong *)(param_1 + 8) + 1);
        *(BADSPACEBASE **)(param_1 + 8) = register0x00000020;
        bVar3 = *(byte *)register0x00000020;
      } while (bVar3 != 0x5d);
    }
    if (*(byte *)register0x00000020 != 0) {
      if (bVar1 == 0x5e) {
        for (; pbVar6 != (byte *)(param_1 + 0x54); pbVar6 = pbVar6 + 1) {
          *pbVar6 = ~*pbVar6;
        }
      }
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      return CONCAT71((int7)((ulonglong)register0x00000020 >> 8),1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0x16;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::stream_input_adapter<char> >::write_character(wchar_t __unaligned * __ptr64
// const,unsigned __int64,wchar_t __unaligned * __ptr64 & __ptr64,unsigned __int64 & __ptr64,char)
// __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::write_character
          (input_processor<> *this,wchar_t *param_1,__uint64 param_2,wchar_t **param_3,
          __uint64 *param_4,char param_5)

{
  char cVar1;
  ushort *puVar2;
  ulonglong uVar3;
  WCHAR local_res8 [4];
  undefined1 uStack0000000000000031;

  cVar1 = param_5;
  uStack0000000000000031 = 0;
  puVar2 = __pctype_func();
  if ((short)puVar2[(byte)cVar1] < 0) {
    uVar3 = _fgetc_nolock(*(FILE **)(this + 8));
    if ((int)uVar3 != -1) {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + 1;
    }
    uStack0000000000000031 = (undefined1)uVar3;
  }
  local_res8[0] = L'?';
  FUN_1800c4210(local_res8,(byte *)&param_5,(longlong)*(int *)(**(longlong **)(this + 0x70) + 8),
                (undefined4 *)*(longlong **)(this + 0x70));
  **param_3 = (short)cVar1;
  *param_3 = *param_3 + 1;
  *param_4 = *param_4 - 1;
  return true;
}


// Library Function - Single Match
//  private: bool __cdecl __crt_stdio_input::input_processor<char,class
// __crt_stdio_input::string_input_adapter<char> >::write_character(wchar_t __unaligned * __ptr64
// const,unsigned __int64,wchar_t __unaligned * __ptr64 & __ptr64,unsigned __int64 & __ptr64,char)
// __ptr64
//
// Library: Visual Studio 2019 Release

bool __thiscall
__crt_stdio_input::input_processor<>::write_character
          (input_processor<> *this,wchar_t *param_1,__uint64 param_2,wchar_t **param_3,
          __uint64 *param_4,char param_5)

{
  undefined1 *puVar1;
  char cVar2;
  ushort *puVar3;
  WCHAR local_res8 [4];
  undefined1 uStack0000000000000031;

  cVar2 = param_5;
  uStack0000000000000031 = 0;
  puVar3 = __pctype_func();
  if ((short)puVar3[(byte)cVar2] < 0) {
    puVar1 = *(undefined1 **)(this + 0x18);
    if (puVar1 == *(undefined1 **)(this + 0x10)) {
      uStack0000000000000031 = 0xff;
    }
    else {
      uStack0000000000000031 = *puVar1;
      *(undefined1 **)(this + 0x18) = puVar1 + 1;
    }
  }
  local_res8[0] = L'?';
  FUN_1800c4210(local_res8,(byte *)&param_5,(longlong)*(int *)(**(longlong **)(this + 0x78) + 8),
                (undefined4 *)*(longlong **)(this + 0x78));
  **param_3 = (short)cVar2;
  *param_3 = *param_3 + 1;
  *param_4 = *param_4 - 1;
  return true;
}


ulonglong FUN_1800b92b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  undefined7 extraout_var;
  longlong lVar6;

  plVar1 = *(longlong **)(param_1 + 0x78);
  *(longlong **)(param_1 + 0x78) = plVar1 + 1;
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    p_Var4 = FUN_1800c2350();
    *(undefined4 *)p_Var4 = 0x16;
    uVar5 = FUN_1800c2ac4();
LAB_1800b92e1:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    cVar3 = FUN_1800b820c(param_1 + 0x18);
    lVar6 = CONCAT71(extraout_var,cVar3);
    if (lVar6 == 1) {
      *(char *)puVar2 = (char)param_2;
      uVar5 = 0;
    }
    else if (lVar6 == 2) {
      *(short *)puVar2 = (short)param_2;
      uVar5 = 0;
    }
    else {
      uVar5 = lVar6 - 4;
      if (uVar5 == 0) {
        *(int *)puVar2 = (int)param_2;
      }
      else {
        if (uVar5 != 4) goto LAB_1800b92e1;
        *puVar2 = param_2;
      }
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  return uVar5;
}


ulonglong FUN_1800b9324(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  undefined7 extraout_var;
  longlong lVar6;

  plVar1 = *(longlong **)(param_1 + 0x80);
  *(longlong **)(param_1 + 0x80) = plVar1 + 1;
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    p_Var4 = FUN_1800c2350();
    *(undefined4 *)p_Var4 = 0x16;
    uVar5 = FUN_1800c2ac4();
LAB_1800b935b:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    cVar3 = FUN_1800b820c(param_1 + 0x20);
    lVar6 = CONCAT71(extraout_var,cVar3);
    if (lVar6 == 1) {
      *(char *)puVar2 = (char)param_2;
      uVar5 = 0;
    }
    else if (lVar6 == 2) {
      *(short *)puVar2 = (short)param_2;
      uVar5 = 0;
    }
    else {
      uVar5 = lVar6 - 4;
      if (uVar5 == 0) {
        *(int *)puVar2 = (int)param_2;
      }
      else {
        if (uVar5 != 4) goto LAB_1800b935b;
        *puVar2 = param_2;
      }
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  return uVar5;
}


// Library Function - Multiple Matches With Different Base Names
//  __stdio_common_vfscanf
//  __stdio_common_vfwscanf
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4
FID_conflict___stdio_common_vfwscanf
          (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  longlong *local_28;
  undefined8 *local_20;
  longlong *local_18;
  undefined8 *local_10;

  local_48 = param_5;
  local_res8 = param_4;
  local_res10 = param_2;
  local_res18 = param_1;
  local_res20 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    uVar1 = 0xffffffff;
  }
  else {
    local_30 = &local_res8;
    local_28 = &local_res10;
    local_20 = &local_res18;
    local_18 = &local_res20;
    local_10 = &local_48;
    local_40 = param_2;
    local_38 = param_2;
    uVar1 = operator()<>(&param_5,&local_38,&local_30,&local_40);
  }
  return uVar1;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined4
FUN_1800b9430(undefined8 param_1,undefined1 (*param_2) [32],ulonglong param_3,longlong param_4,
             __crt_locale_pointers *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  undefined1 auStack_118 [32];
  undefined1 (*local_f8) [32];
  undefined1 *puStack_f0;
  undefined1 (*local_e8) [32];
  longlong local_e0;
  undefined1 local_d8 [16];
  char local_c8;
  undefined8 local_b8;
  undefined1 (*local_b0) [32];
  undefined1 *puStack_a8;
  undefined1 (*local_a0) [32];
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStack_118;
  if ((param_2 == (undefined1 (*) [32])0x0) || (param_4 == 0)) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    uVar1 = 0xffffffff;
  }
  else {
    uVar3 = FUN_1800bd4a0(param_2,param_3);
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_e0,param_5);
    local_88 = 0;
    puStack_f0 = *param_2 + uVar3;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_30 = 0;
    local_40 = local_d8;
    local_64 = 0;
    uStack_5c = 0;
    local_54 = 0;
    uStack_4c = 0;
    local_7e = 0;
    local_6c = 0;
    local_38 = param_6;
    local_f8 = param_2;
    local_e8 = param_2;
    local_b8 = param_1;
    local_b0 = param_2;
    puStack_a8 = puStack_f0;
    local_a0 = param_2;
    local_98 = param_1;
    local_90 = param_4;
    uVar1 = FUN_1800b8388((input_processor<> *)&local_b8);
    if (local_c8 != '\0') {
      *(uint *)(local_e0 + 0x3a8) = *(uint *)(local_e0 + 0x3a8) & 0xfffffffd;
    }
  }
  return uVar1;
}


uint FUN_1800b9554(int param_1,uint param_2,_locale_t param_3)

{
  ushort *puVar1;
  uint uVar2;

  uVar2 = 0;
  if (param_3 == (_locale_t)0x0) {
    puVar1 = __pctype_func();
    if (param_1 + 1U < 0x101) {
      uVar2 = puVar1[param_1] & param_2;
    }
  }
  else if (param_1 + 1U < 0x101) {
    uVar2 = *(ushort *)(*(longlong *)param_3->locinfo + (longlong)param_1 * 2) & param_2;
  }
  else if ((int)param_3->locinfo->lc_collate_cp < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = _isctype_l(param_1,param_2,param_3);
  }
  return uVar2;
}


// Library Function - Single Match
//  memcpy_s
//
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  __acrt_ptd *p_Var1;
  errno_t eVar2;

  if (_MaxCount == 0) {
LAB_1800b95e9:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_1800b95f2:
      p_Var1 = FUN_1800c2350();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_1800d1c20(_Dst,_Src,_MaxCount);
        goto LAB_1800b95e9;
      }
      FUN_1800d22d0(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_1800b95f2;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      p_Var1 = FUN_1800c2350();
      eVar2 = 0x22;
    }
    *(errno_t *)p_Var1 = eVar2;
    FUN_1800c2ac4();
  }
  return eVar2;
}


// Library Function - Multiple Matches With Same Base Name
//  double __cdecl common_atof_l<char>(char const * __ptr64 const,struct __crt_locale_pointers *
// __ptr64 const)
//  double __cdecl common_atof_l<wchar_t>(wchar_t const * __ptr64 const,struct __crt_locale_pointers
// * __ptr64 const)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong common_atof_l<>(longlong param_1,__crt_locale_pointers *param_2)

{
  __acrt_ptd *p_Var1;
  ulonglong local_res8 [4];
  longlong local_38 [2];
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;

  if (param_1 == 0) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
    local_res8[0] = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    local_38[1] = 0;
    local_res8[0] = 0;
    local_38[0] = param_1;
    parse_floating_point<>(&local_20,local_38,local_res8);
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return local_res8[0];
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// Library Function - Multiple Matches With Same Base Name
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::c_string_character_source<char>,double>(struct __crt_locale_pointers * __ptr64
// const,class __crt_strtox::c_string_character_source<char>,double * __ptr64 const)
//  enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
// __crt_strtox::c_string_character_source<wchar_t>,double>(struct __crt_locale_pointers * __ptr64
// const,class __crt_strtox::c_string_character_source<wchar_t>,double * __ptr64 const)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong parse_floating_point<>(_locale_t param_1,longlong *param_2,ulonglong *param_3)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  undefined1 auStack_348 [32];
  floating_point_string local_328 [784];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_348;
  if ((param_3 == (ulonglong *)0x0) || (param_1 == (_locale_t)0x0)) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_1800b9768(param_1,param_2,(int *)local_328);
    uVar2 = FUN_1800b4070((int)uVar2,local_328,param_3);
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
  }
  return uVar2;
}


ulonglong FUN_1800b9768(_locale_t param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  __acrt_ptd *p_Var8;
  byte *pbVar9;
  ulonglong uVar10;
  char cVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  byte bVar15;
  int *piVar16;
  byte *pbVar17;
  int local_res10 [2];
  int *local_res18;

  pbVar17 = (byte *)*param_2;
  local_res18 = param_3;
  if (pbVar17 == (byte *)0x0) {
    p_Var8 = FUN_1800c2350();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_1800c2ac4();
    return 7;
  }
  bVar6 = *pbVar17;
  *param_2 = (longlong)(pbVar17 + 1);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar6);
  uVar7 = FUN_1800b9554((uint)bVar6,8,param_1);
  if (uVar7 != 0) {
    do {
      bVar6 = *(byte *)*param_2;
      *param_2 = (longlong)((byte *)*param_2 + 1);
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar6);
      uVar7 = FUN_1800b9554((uint)bVar6,8,param_1);
    } while (uVar7 != 0);
  }
  *(bool *)(param_3 + 0xc2) = bVar6 == 0x2d;
  if ((bVar6 == 0x2d) || (bVar6 == 0x2b)) {
    bVar6 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar6);
  }
  if ((bVar6 == 0x49) || (bVar6 == 0x69)) {
    uVar10 = FUN_1800b9c2c((char *)local_res10,param_2,(char *)pbVar17);
    return uVar10;
  }
  if ((bVar6 + 0xb2 & 0xdf) == 0) {
    uVar10 = FUN_1800b9d70((char *)local_res10,param_2,(char *)pbVar17);
    return uVar10;
  }
  bVar15 = 0;
  if (bVar6 == 0x30) {
    pbVar9 = (byte *)*param_2;
    bVar2 = *pbVar9;
    *param_2 = (longlong)(pbVar9 + 1);
    if ((bVar2 + 0xa8 & 0xdf) == 0) {
      bVar6 = pbVar9[1];
      *param_2 = (longlong)(pbVar9 + 2);
      bVar15 = 1;
      pbVar17 = pbVar9;
    }
    else {
      *param_2 = (longlong)pbVar9;
      if ((bVar2 != 0) && (*pbVar9 != bVar2)) {
        p_Var8 = FUN_1800c2350();
        *(undefined4 *)p_Var8 = 0x16;
        FUN_1800c2ac4();
      }
    }
  }
  piVar16 = param_3 + 2;
  local_res10[0] = 0;
  bVar5 = false;
  if (bVar6 == 0x30) {
    bVar5 = true;
    do {
      bVar6 = *(byte *)*param_2;
      *param_2 = (longlong)((byte *)*param_2 + 1);
    } while (bVar6 == 0x30);
  }
  piVar13 = piVar16;
  while( true ) {
    if ((byte)(bVar6 - 0x30) < 10) {
      uVar7 = (int)(char)bVar6 - 0x30;
    }
    else if ((byte)(bVar6 + 0x9f) < 0x1a) {
      uVar7 = (int)(char)bVar6 - 0x57;
    }
    else if ((byte)(bVar6 + 0xbf) < 0x1a) {
      uVar7 = (int)(char)bVar6 - 0x37;
    }
    else {
      uVar7 = 0xffffffff;
    }
    if ((-(uint)(bVar15 != 0) & 6) + 9 < uVar7) break;
    bVar5 = true;
    if (piVar13 != local_res18 + 0xc2) {
      *(char *)piVar13 = (char)uVar7;
      piVar13 = (int *)((longlong)piVar13 + 1);
    }
    local_res10[0] = local_res10[0] + 1;
    bVar6 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  if (bVar6 == **(byte **)param_1->locinfo->ctype1_refcount) {
    bVar6 = *(byte *)*param_2;
    pbVar9 = (byte *)*param_2 + 1;
    *param_2 = (longlong)pbVar9;
    if ((piVar13 == piVar16) && (bVar6 == 0x30)) {
      bVar5 = true;
      do {
        bVar6 = *pbVar9;
        local_res10[0] = local_res10[0] + -1;
        pbVar9 = pbVar9 + 1;
        *param_2 = (longlong)pbVar9;
      } while (bVar6 == 0x30);
    }
    while( true ) {
      if (((char)bVar6 < '0') || ('9' < (char)bVar6)) {
        if ((byte)(bVar6 + 0x9f) < 0x1a) {
          uVar7 = (int)(char)bVar6 - 0x57;
        }
        else if ((byte)(bVar6 + 0xbf) < 0x1a) {
          uVar7 = (int)(char)bVar6 - 0x37;
        }
        else {
          uVar7 = 0xffffffff;
        }
      }
      else {
        uVar7 = (int)(char)bVar6 - 0x30;
      }
      if ((-(uint)(bVar15 != 0) & 6) + 9 < uVar7) break;
      bVar5 = true;
      if (piVar13 != local_res18 + 0xc2) {
        *(char *)piVar13 = (char)uVar7;
        piVar13 = (int *)((longlong)piVar13 + 1);
      }
      bVar6 = *(byte *)*param_2;
      *param_2 = (longlong)((byte *)*param_2 + 1);
    }
  }
  pbVar9 = (byte *)(*param_2 + -1);
  *param_2 = (longlong)pbVar9;
  if (!bVar5) {
    if ((bVar6 != 0) && (*pbVar9 != bVar6)) {
      p_Var8 = FUN_1800c2350();
      *(undefined4 *)p_Var8 = 0x16;
      FUN_1800c2ac4();
    }
    *param_2 = (longlong)pbVar17;
    if (bVar15 == 0) {
      return 7;
    }
    return 2;
  }
  if ((bVar6 != 0) && (*pbVar9 != bVar6)) {
    p_Var8 = FUN_1800c2350();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_1800c2ac4();
  }
  pcVar4 = (char *)*param_2;
  cVar11 = *pcVar4;
  pcVar14 = pcVar4 + 1;
  *param_2 = (longlong)pcVar14;
  if (cVar11 == 'E') {
LAB_1800b9a41:
    bVar6 = bVar15 ^ 1;
  }
  else if (cVar11 == 'P') {
LAB_1800b9a3c:
    bVar6 = bVar15;
  }
  else {
    if (cVar11 == 'e') goto LAB_1800b9a41;
    bVar6 = 0;
    if (cVar11 == 'p') goto LAB_1800b9a3c;
  }
  iVar12 = 0;
  if (bVar6 != 0) {
    cVar3 = *pcVar14;
    pcVar14 = pcVar4 + 2;
    *param_2 = (longlong)pcVar14;
    if ((cVar3 == '+') || (cVar11 = cVar3, cVar3 == '-')) {
      cVar11 = *pcVar14;
      pcVar14 = pcVar4 + 3;
      *param_2 = (longlong)pcVar14;
    }
    bVar5 = false;
    if (cVar11 != '0') goto LAB_1800b9aa3;
    do {
      cVar11 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      *param_2 = (longlong)pcVar14;
    } while (cVar11 == '0');
    while( true ) {
      bVar5 = true;
LAB_1800b9aa3:
      if ((cVar11 < '0') || ('9' < cVar11)) {
        if ((byte)(cVar11 + 0x9fU) < 0x1a) {
          uVar7 = (int)cVar11 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar11 + 0xbfU)) goto LAB_1800b9af3;
          uVar7 = (int)cVar11 - 0x37;
        }
      }
      else {
        uVar7 = (int)cVar11 - 0x30;
      }
      if (9 < uVar7) goto LAB_1800b9af3;
      bVar5 = true;
      iVar12 = uVar7 + iVar12 * 10;
      if (0x1450 < iVar12) break;
      cVar11 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      *param_2 = (longlong)pcVar14;
    }
    iVar12 = 0x1451;
LAB_1800b9af3:
    do {
      if ((byte)(cVar11 - 0x30U) < 10) {
        uVar7 = (int)cVar11 - 0x30;
      }
      else if ((byte)(cVar11 + 0x9fU) < 0x1a) {
        uVar7 = (int)cVar11 - 0x57;
      }
      else {
        if (0x19 < (byte)(cVar11 + 0xbfU)) goto LAB_1800b9b30;
        uVar7 = (int)cVar11 - 0x37;
      }
      if (9 < uVar7) goto LAB_1800b9b30;
      cVar11 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      *param_2 = (longlong)pcVar14;
    } while( true );
  }
LAB_1800b9b66:
  *param_2 = (longlong)(pcVar14 + -1);
  if ((cVar11 != '\0') && (pcVar14[-1] != cVar11)) {
    p_Var8 = FUN_1800c2350();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_1800c2ac4();
  }
  if (piVar13 != piVar16) {
    do {
      piVar1 = (int *)((longlong)piVar13 + -1);
      if (*(char *)piVar1 != '\0') break;
      piVar13 = piVar1;
    } while (piVar1 != piVar16);
    if (piVar13 != piVar16) {
      if (0x1450 < iVar12) {
        return 9;
      }
      if (-0x1451 < iVar12) {
        iVar12 = iVar12 + ((-(uint)(bVar15 != 0) & 3) + 1) * local_res10[0];
        if (0x1450 < iVar12) {
          return 9;
        }
        if (-0x1451 < iVar12) {
          *local_res18 = iVar12;
          local_res18[1] = (int)piVar13 - (int)piVar16;
          return (ulonglong)bVar15;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_1800b9b30:
  if (cVar3 == '-') {
    iVar12 = -iVar12;
  }
  if (!bVar5) {
    *param_2 = (longlong)(pcVar14 + -1);
    if ((cVar11 != '\0') && (pcVar14[-1] != cVar11)) {
      p_Var8 = FUN_1800c2350();
      *(undefined4 *)p_Var8 = 0x16;
      FUN_1800c2ac4();
    }
    *param_2 = (longlong)pcVar4;
    pcVar14 = pcVar4 + 1;
    cVar11 = *pcVar4;
  }
  goto LAB_1800b9b66;
}


undefined8 FUN_1800b9c2c(char *param_1,longlong *param_2,char *param_3)

{
  __acrt_ptd *p_Var1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;

  lVar3 = 0;
  uVar4 = 3;
  while ((cVar2 = *param_1, cVar2 == (&DAT_1800f4fc8)[lVar3] || (cVar2 == (&DAT_1800f4fcc)[lVar3])))
  {
    lVar3 = lVar3 + 1;
    cVar2 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar2;
    if (lVar3 == 3) {
      lVar3 = *param_2;
      *param_2 = lVar3 + -1;
      if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
        p_Var1 = FUN_1800c2350();
        *(undefined4 *)p_Var1 = 0x16;
        FUN_1800c2ac4();
      }
      param_3 = (char *)*param_2;
      lVar3 = 0;
      cVar2 = *param_3;
      *param_2 = (longlong)(param_3 + 1);
      *param_1 = cVar2;
      while ((cVar2 == "INITY"[lVar3] || (cVar2 == "inity"[lVar3]))) {
        lVar3 = lVar3 + 1;
        cVar2 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        *param_1 = cVar2;
        if (lVar3 == 5) {
          lVar3 = *param_2;
          *param_2 = lVar3 + -1;
          if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
            p_Var1 = FUN_1800c2350();
            *(undefined4 *)p_Var1 = 0x16;
            FUN_1800c2ac4();
          }
          return 3;
        }
      }
      *param_2 = *param_2 + -1;
      if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
        p_Var1 = FUN_1800c2350();
        *(undefined4 *)p_Var1 = 0x16;
        FUN_1800c2ac4();
      }
LAB_1800b9d66:
      *param_1 = '\0';
      *param_2 = (longlong)param_3;
      return uVar4;
    }
  }
  *param_2 = *param_2 + -1;
  if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
  }
  uVar4 = 7;
  goto LAB_1800b9d66;
}


// WARNING: Removing unreachable block (ram,0x0001800b9f3a)

undefined8 FUN_1800b9d70(char *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  char *pcVar2;
  __acrt_ptd *p_Var3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;

  lVar1 = 0;
  do {
    lVar5 = lVar1;
    cVar6 = *param_1;
    if ((cVar6 != (&DAT_1800f4fe0)[lVar5]) && (cVar6 != (&DAT_1800f4fe4)[lVar5])) {
      *param_2 = *param_2 + -1;
      if ((cVar6 != '\0') && (*(char *)*param_2 != cVar6)) {
        p_Var3 = FUN_1800c2350();
        *(undefined4 *)p_Var3 = 0x16;
        FUN_1800c2ac4();
      }
      uVar4 = 7;
      goto LAB_1800b9f4f;
    }
    cVar6 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar6;
    lVar1 = lVar5 + 1;
  } while (lVar5 + 1 != 3);
  lVar1 = *param_2;
  iVar7 = (int)lVar5 + 0x14;
  *param_2 = lVar1 + -1;
  if ((cVar6 != '\0') && (*(char *)(lVar1 + -1) != cVar6)) {
    p_Var3 = FUN_1800c2350();
    *(int *)p_Var3 = iVar7;
    FUN_1800c2ac4();
  }
  param_3 = (char *)*param_2;
  cVar6 = *param_3;
  *param_2 = (longlong)(param_3 + 1);
  *param_1 = cVar6;
  pcVar2 = (char *)*param_2;
  if (cVar6 == '(') {
    cVar6 = *pcVar2;
    *param_2 = (longlong)(pcVar2 + 1);
    *param_1 = cVar6;
    uVar4 = FUN_1800b9fa4(param_1,param_2);
    if ((char)uVar4 != '\0') {
      lVar1 = *param_2;
      cVar6 = *param_1;
      *param_2 = lVar1 + -1;
      if ((cVar6 != '\0') && (*(char *)(lVar1 + -1) != cVar6)) {
        p_Var3 = FUN_1800c2350();
        *(int *)p_Var3 = iVar7;
        FUN_1800c2ac4();
      }
      return 5;
    }
    uVar4 = FUN_1800b9f5c(param_1,param_2);
    cVar6 = *param_1;
    if ((char)uVar4 != '\0') {
      lVar1 = *param_2;
      *param_2 = lVar1 + -1;
      if ((cVar6 != '\0') && (*(char *)(lVar1 + -1) != cVar6)) {
        p_Var3 = FUN_1800c2350();
        *(int *)p_Var3 = iVar7;
        FUN_1800c2ac4();
      }
      return 6;
    }
    if (cVar6 != ')') {
      do {
        if (cVar6 == '\0') {
          *param_2 = *param_2 + -1;
LAB_1800b9f4a:
          uVar4 = 4;
LAB_1800b9f4f:
          *param_1 = '\0';
          *param_2 = (longlong)param_3;
          return uVar4;
        }
        if ((((9 < (byte)(cVar6 - 0x30U)) && (0x19 < (byte)(cVar6 + 0x9fU))) &&
            (0x19 < (byte)(cVar6 + 0xbfU))) && (cVar6 != '_')) {
          *param_2 = *param_2 + -1;
          if (*(char *)*param_2 != cVar6) {
            p_Var3 = FUN_1800c2350();
            *(int *)p_Var3 = iVar7;
            FUN_1800c2ac4();
          }
          goto LAB_1800b9f4a;
        }
        cVar6 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        *param_1 = cVar6;
      } while (cVar6 != ')');
    }
  }
  else {
    *param_2 = (longlong)(pcVar2 + -1);
    if ((cVar6 != '\0') && (pcVar2[-1] != cVar6)) {
      p_Var3 = FUN_1800c2350();
      *(int *)p_Var3 = iVar7;
      FUN_1800c2ac4();
    }
    *param_1 = '\0';
    *param_2 = (longlong)param_3;
  }
  return 4;
}


undefined8 FUN_1800b9f5c(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *in_RAX;
  undefined1 uVar2;
  longlong lVar3;

  uVar2 = 0;
  lVar3 = 0;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_1800f4ff8)[lVar3]) && (cVar1 != (&DAT_1800f4ffc)[lVar3]))
    goto LAB_1800b9f9d;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 4);
  uVar2 = 1;
LAB_1800b9f9d:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
}


undefined8 FUN_1800b9fa4(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *in_RAX;
  undefined1 uVar2;
  longlong lVar3;

  uVar2 = 0;
  lVar3 = 0;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_1800f4fe8)[lVar3]) && (cVar1 != (&DAT_1800f4ff0)[lVar3]))
    goto LAB_1800b9fe5;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 5);
  uVar2 = 1;
LAB_1800b9fe5:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
}


void FUN_1800b9ff0(longlong param_1)

{
  common_atof_l<>(param_1,(__crt_locale_pointers *)0x0);
  return;
}


float FUN_1800ba000(float param_1,float param_2)

{
  uint uVar1;

  uVar1 = FUN_1800c6370((uint)param_1);
  if (((short)uVar1 != 2) &&
     ((uVar1 = FUN_1800c6370((uint)param_2), (short)uVar1 == 2 ||
      ((param_2 <= param_1 && ((param_1 != param_2 || (-1 < (int)param_1)))))))) {
    return param_1;
  }
  return param_2;
}


float FUN_1800ba070(float param_1,float param_2)

{
  uint uVar1;

  uVar1 = FUN_1800c6370((uint)param_1);
  if (((short)uVar1 != 2) &&
     (((uVar1 = FUN_1800c6370((uint)param_2), (short)uVar1 == 2 || (param_1 < param_2)) ||
      ((param_1 == param_2 && ((int)param_1 < 0)))))) {
    return param_1;
  }
  return param_2;
}


int FUN_1800ba0e0(uint param_1)

{
  short sVar1;
  uint uVar2;
  float fVar3;

  uVar2 = FUN_1800c6370(param_1);
  sVar1 = (short)uVar2;
  if (sVar1 != 0) {
    if ((sVar1 != 1) && (sVar1 != 2)) {
      fVar3 = (float)FUN_1800ba150(param_1);
      if ((-2.1474836e+09 <= fVar3) && (fVar3 <= 2.1474836e+09)) {
        return (int)fVar3;
      }
    }
    FUN_1800c63b0(1);
  }
  return 0;
}


uint FUN_1800ba150(uint param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;

  uVar3 = param_1 & 0x7fffffff;
  if (uVar3 < 0x4b000000) {
    if (uVar3 < 0x3f800000) {
      param_1 = param_1 & 0x80000000;
      if (0x3effffff < uVar3) {
        param_1 = param_1 | 0x3f800000;
      }
    }
    else {
      uVar5 = 0x96 - (uVar3 >> 0x17);
      bVar4 = (byte)uVar5;
      bVar2 = bVar4 & 0x1f;
      bVar1 = (uVar5 & 0x1f) == 0;
      param_1 = (param_1 >> bVar2) +
                (uint)(byte)(bVar1 * (0x96 < uVar3 >> 0x17) |
                            !bVar1 * ((param_1 >> bVar2 - 1 & 1) != 0)) << (bVar4 & 0x1f);
    }
  }
  return param_1;
}


uint FUN_1800ba194(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  __acrt_ptd *p_Var10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;

  pbVar2 = (byte *)*param_2;
  uVar12 = (ulonglong)param_3;
  if (pbVar2 == (byte *)0x0) {
    p_Var10 = FUN_1800c2350();
    *(undefined4 *)p_Var10 = 0x16;
    FUN_1800c2ac4();
LAB_1800ba209:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_1800ba209;
  }
  uVar13 = (uint)*pbVar2;
  *param_2 = (longlong)(pbVar2 + 1);
  if ((char)param_1[5] == '\0') {
    FUN_1800b0fd0(param_1);
  }
  while (uVar7 = FUN_1800b9554(uVar13,8,(_locale_t)(param_1 + 3)), uVar7 != 0) {
    uVar13 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  uVar7 = param_4 & 0xff | 2;
  if ((char)uVar13 != '-') {
    uVar7 = param_4 & 0xff;
  }
  if ((uVar13 - 0x2b & 0xfd) == 0) {
    uVar13 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) == 0) {
    cVar1 = (char)uVar13;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar8 = cVar1 + -0x30;
LAB_1800ba2b9:
      if (iVar8 != 0) goto LAB_1800ba30a;
      pcVar3 = (char *)*param_2;
      cVar1 = *pcVar3;
      *param_2 = (longlong)(pcVar3 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar3;
        uVar14 = 8;
        if (param_3 != 0) {
          uVar14 = param_3;
        }
        uVar12 = (ulonglong)uVar14;
        if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
          p_Var10 = FUN_1800c2350();
          *(undefined4 *)p_Var10 = 0x16;
          FUN_1800c2ac4();
        }
        goto LAB_1800ba316;
      }
      uVar13 = (uint)(byte)pcVar3[1];
      *param_2 = (longlong)(pcVar3 + 2);
      uVar14 = 0x10;
    }
    else {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        iVar8 = cVar1 + -0x57;
        goto LAB_1800ba2b9;
      }
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        iVar8 = cVar1 + -0x37;
        goto LAB_1800ba2b9;
      }
LAB_1800ba30a:
      uVar14 = 10;
    }
    if (param_3 != 0) {
      uVar14 = param_3;
    }
    uVar12 = (ulonglong)uVar14;
  }
LAB_1800ba316:
  uVar14 = 0;
  while( true ) {
    bVar6 = (byte)uVar13;
    if ((byte)(bVar6 - 0x30) < 10) {
      uVar11 = (int)(char)bVar6 - 0x30;
    }
    else if ((byte)(bVar6 + 0x9f) < 0x1a) {
      uVar11 = (int)(char)bVar6 - 0x57;
    }
    else if ((byte)(bVar6 + 0xbf) < 0x1a) {
      uVar11 = (int)(char)bVar6 - 0x37;
    }
    else {
      uVar11 = 0xffffffff;
    }
    pbVar4 = (byte *)*param_2;
    if ((uint)uVar12 <= uVar11) break;
    uVar13 = (uint)*pbVar4;
    uVar9 = uVar14 * (uint)uVar12;
    uVar11 = uVar9 + uVar11;
    *param_2 = (longlong)(pbVar4 + 1);
    uVar7 = uVar7 | (uint)(uVar11 < uVar9 || (uint)(0xffffffff / uVar12) < uVar14) << 2 | 8;
    uVar14 = uVar11;
  }
  *param_2 = (longlong)(pbVar4 + -1);
  if ((bVar6 != 0) && (pbVar4[-1] != bVar6)) {
    p_Var10 = FUN_1800c2350();
    *(undefined4 *)p_Var10 = 0x16;
    FUN_1800c2ac4();
  }
  if ((uVar7 & 8) == 0) {
    *param_2 = (longlong)pbVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pbVar2;
    return 0;
  }
  if ((uVar7 & 4) == 0) {
    if ((uVar7 & 1) == 0) {
      if ((uVar7 & 2) == 0) goto LAB_1800ba405;
LAB_1800ba426:
      uVar14 = -uVar14;
      goto LAB_1800ba405;
    }
    if ((uVar7 & 2) == 0) {
      if (uVar14 < 0x80000000) goto LAB_1800ba405;
    }
    else if (uVar14 < 0x80000001) goto LAB_1800ba426;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
  if ((uVar7 & 1) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar7 & 2) != 0) {
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
  uVar14 = 0xffffffff;
LAB_1800ba405:
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    return uVar14;
  }
  *(longlong *)param_2[1] = *param_2;
  return uVar14;
}


ulonglong FUN_1800ba470(longlong *param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  __acrt_ptd *p_Var9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  byte bVar16;

  pbVar2 = (byte *)*param_2;
  if (pbVar2 == (byte *)0x0) {
    p_Var9 = FUN_1800c2350();
    *(undefined4 *)p_Var9 = 0x16;
    FUN_1800c2ac4();
LAB_1800ba4e5:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_1800ba4e5;
  }
  uVar15 = (uint)*pbVar2;
  *param_2 = (longlong)(pbVar2 + 1);
  if ((char)param_1[5] == '\0') {
    FUN_1800b0fd0(param_1);
  }
  while (uVar7 = FUN_1800b9554(uVar15,8,(_locale_t)(param_1 + 3)), uVar7 != 0) {
    uVar15 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  bVar16 = param_4 | 2;
  if ((char)uVar15 != '-') {
    bVar16 = param_4;
  }
  if ((uVar15 - 0x2b & 0xfd) == 0) {
    uVar15 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  uVar7 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1800ba5f7;
  cVar1 = (char)uVar15;
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar8 = cVar1 + -0x30;
LAB_1800ba59a:
    if (iVar8 != 0) goto LAB_1800ba5eb;
    pcVar3 = (char *)*param_2;
    cVar1 = *pcVar3;
    *param_2 = (longlong)(pcVar3 + 1);
    if ((cVar1 + 0xa8U & 0xdf) != 0) {
      *param_2 = (longlong)pcVar3;
      uVar7 = 8;
      if (param_3 != 0) {
        uVar7 = param_3;
      }
      if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
        p_Var9 = FUN_1800c2350();
        *(undefined4 *)p_Var9 = 0x16;
        FUN_1800c2ac4();
      }
      goto LAB_1800ba5f7;
    }
    uVar15 = (uint)(byte)pcVar3[1];
    *param_2 = (longlong)(pcVar3 + 2);
    uVar7 = 0x10;
  }
  else {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      iVar8 = cVar1 + -0x57;
      goto LAB_1800ba59a;
    }
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      iVar8 = cVar1 + -0x37;
      goto LAB_1800ba59a;
    }
LAB_1800ba5eb:
    uVar7 = 10;
  }
  if (param_3 != 0) {
    uVar7 = param_3;
  }
LAB_1800ba5f7:
  uVar14 = 0;
  while( true ) {
    bVar6 = (byte)uVar15;
    if ((byte)(bVar6 - 0x30) < 10) {
      uVar12 = (int)(char)bVar6 - 0x30;
    }
    else if ((byte)(bVar6 + 0x9f) < 0x1a) {
      uVar12 = (int)(char)bVar6 - 0x57;
    }
    else if ((byte)(bVar6 + 0xbf) < 0x1a) {
      uVar12 = (int)(char)bVar6 - 0x37;
    }
    else {
      uVar12 = 0xffffffff;
    }
    pbVar4 = (byte *)*param_2;
    if (uVar7 <= uVar12) break;
    uVar15 = (uint)*pbVar4;
    uVar10 = (longlong)(int)uVar7 * uVar14;
    uVar13 = uVar12 + uVar10;
    *param_2 = (longlong)(pbVar4 + 1);
    bVar16 = bVar16 | (uVar13 < uVar10 ||
                      0xffffffffffffffffU / (ulonglong)(longlong)(int)uVar7 < uVar14) << 2 | 8U;
    uVar14 = uVar13;
  }
  *param_2 = (longlong)(pbVar4 + -1);
  if ((bVar6 != 0) && (pbVar4[-1] != bVar6)) {
    p_Var9 = FUN_1800c2350();
    *(undefined4 *)p_Var9 = 0x16;
    FUN_1800c2ac4();
  }
  if ((bVar16 & 8) == 0) {
    *param_2 = (longlong)pbVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pbVar2;
    return 0;
  }
  uVar11 = FUN_1800b2204(bVar16,uVar14);
  if ((char)uVar11 == '\0') {
    if ((bVar16 & 2) != 0) {
      uVar14 = -uVar14;
    }
  }
  else {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
    if ((bVar16 & 1) != 0) {
      plVar5 = (longlong *)param_2[1];
      if ((bVar16 & 2) == 0) {
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = *param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x8000000000000000;
    }
    uVar14 = 0xffffffffffffffff;
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar14;
}


uint FUN_1800ba750(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong local_58 [4];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_58[2] = 0;
  local_20 = DAT_180115f2c == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801125f8;
    puStack_28 = PTR_DAT_180112600;
  }
  local_58[1] = 0;
  local_58[0] = param_1;
  uVar1 = FUN_1800ba194(local_58 + 2,local_58,10,CONCAT31((int3)((uint)param_4 >> 8),1));
  if (local_20 == '\x02') {
    *(uint *)(local_58[2] + 0x3a8) = *(uint *)(local_58[2] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1800adc30(local_58 + 2);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1800adc30(local_58 + 2);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}


uint FUN_1800ba800(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong local_58;
  longlong *local_50;
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
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_1800ba194(local_48,&local_58,param_3,0);
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


ulonglong FUN_1800ba8b4(longlong param_1,longlong *param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_58;
  longlong *local_50;
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
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_1800ba470(local_48,&local_58,param_3,0);
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


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800ba968(short *param_1,short *param_2,long param_3,LPCWSTR param_4)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStackY_4d8 [32];
  WCHAR local_4a8 [576];
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStackY_4d8;
  FUN_1800d22d0((undefined1 (*) [32])local_4a8,0,0x480);
  FUN_1800baa2c(local_4a8,0x240,param_1,param_2,param_3,param_4);
  uVar3 = FUN_1800c6e74(local_4a8,L"Microsoft Visual C++ Runtime Library",0x12012);
  iVar2 = (int)uVar3;
  if (iVar2 == 3) {
    FUN_1800c7210(0x16);
                    // WARNING: Subroutine does not return
    FUN_1800c0be4(3);
  }
  if (iVar2 == 4) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iVar2 != 5) {
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800baa2c(short *param_1,ulonglong param_2,short *param_3,short *param_4,long param_5,
                  LPCWSTR param_6)

{
  short sVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  errno_t eVar5;
  undefined8 uVar6;
  __acrt_ptd *p_Var7;
  undefined1 (*pauVar8) [32];
  short *psVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_2d2 [4];
  undefined2 local_2ce [15];
  undefined *puStackY_2b0;
  undefined1 auStackY_2a8 [32];
  HMODULE local_278 [2];
  WCHAR local_268 [264];
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStackY_2a8;
  puStackY_2b0 = (undefined *)0x1800baa72;
  uVar6 = FUN_1800c6a70(param_1,param_2,0x1800f50c0);
  if ((int)uVar6 != 0) goto LAB_1800baf13;
  puStackY_2b0 = (undefined *)0x1800baa8f;
  uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52ac);
  if ((int)uVar6 != 0) goto LAB_1800baf13;
  puStackY_2b0 = (undefined *)0x1800baaa9;
  uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f50e8);
  if ((int)uVar6 != 0) goto LAB_1800baf13;
  puStackY_2b0 = (undefined *)0x1800baac5;
  FUN_1800d22d0((undefined1 (*) [32])local_268,0,0x20a);
  local_278[0] = (HMODULE)0x0;
  puStackY_2b0 = (undefined *)0x1800baadc;
  BVar2 = GetModuleHandleExW(6,param_6,local_278);
  if (BVar2 == 0) {
    local_278[0] = (HMODULE)0x0;
  }
  puStackY_2b0 = (undefined *)0x1800bab02;
  DVar3 = GetModuleFileNameW(local_278[0],local_268,0x105);
  if (DVar3 == 0) {
    puStackY_2b0 = (undefined *)0x1800bab19;
    uVar6 = FUN_1800c6a70(local_268,0x105,0x1800f52b8);
    if ((int)uVar6 != 0) goto LAB_1800baf13;
  }
  lVar12 = -1;
  pauVar8 = (undefined1 (*) [32])local_268;
  lVar11 = -1;
  do {
    lVar10 = lVar11;
    lVar11 = lVar10 + 1;
  } while (local_268[lVar11] != L'\0');
  if (0x40 < lVar10 + 0xcU) {
    uVar13 = 0x20a - (lVar11 * 2 + -0x6a);
    pauVar8 = (undefined1 (*) [32])(local_2d2 + lVar11 * 2);
    if (pauVar8 == (undefined1 (*) [32])0x0) {
      puStackY_2b0 = (undefined *)0x1800bab60;
      p_Var7 = FUN_1800c2350();
      *(undefined4 *)p_Var7 = 0x16;
    }
    else {
      if (5 < uVar13) {
        *(undefined4 *)*pauVar8 = 0x2e002e;
        local_2ce[lVar11] = 0x2e;
        goto LAB_1800bab89;
      }
      puStackY_2b0 = (undefined *)0x1800bac96;
      FUN_1800d22d0(pauVar8,0,uVar13);
      puStackY_2b0 = (undefined *)0x1800bac9b;
      p_Var7 = FUN_1800c2350();
      *(undefined4 *)p_Var7 = 0x22;
    }
    puStackY_2b0 = (undefined *)0x1800baca6;
    FUN_1800c2ac4();
    goto LAB_1800baf13;
  }
LAB_1800bab89:
  puStackY_2b0 = (undefined *)0x1800bab97;
  uVar6 = FUN_1800c69e0(param_1,param_2,(longlong)pauVar8);
  if ((int)uVar6 != 0) goto LAB_1800baf13;
  puStackY_2b0 = (undefined *)0x1800babb1;
  uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52a8);
  if ((int)uVar6 != 0) goto LAB_1800baf13;
  puStackY_2b0 = (undefined *)0x1800babcb;
  uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f5100);
  if ((int)uVar6 != 0) goto LAB_1800baf13;
  lVar11 = -1;
  do {
    lVar10 = lVar11;
    lVar11 = lVar10 + 1;
  } while (param_4[lVar11] != 0);
  if (lVar10 + 9U < 0x41) {
LAB_1800bad7f:
    puStackY_2b0 = (undefined *)0x1800bad8a;
    uVar6 = FUN_1800c69e0(param_1,param_2,(longlong)param_4);
    iVar4 = (int)uVar6;
  }
  else {
    uVar13 = 0xffffffffffffffff;
    do {
      uVar14 = uVar13;
      uVar13 = uVar14 + 1;
    } while (param_4[uVar13] != 0);
    sVar1 = param_4[uVar14];
    uVar15 = 1;
    if (sVar1 != 0x5c) {
      psVar9 = param_4 + uVar14;
      do {
        if ((sVar1 == 0x2f) || (uVar13 <= uVar15)) break;
        psVar9 = psVar9 + -1;
        uVar15 = uVar15 + 1;
        sVar1 = *psVar9;
      } while (sVar1 != 0x5c);
    }
    uVar16 = uVar13 - uVar15;
    if (0x26 < uVar16) {
      if (0x11 < uVar15) goto LAB_1800bad03;
      puStackY_2b0 = (undefined *)0x1800bac5e;
      uVar6 = FUN_1800c6b00(param_1,param_2,param_4,0x35 - uVar15);
      if ((int)uVar6 != 0) goto LAB_1800baf13;
      puStackY_2b0 = (undefined *)0x1800bac7b;
      uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52a0);
      if ((int)uVar6 != 0) goto LAB_1800baf13;
      param_4 = param_4 + uVar16;
      goto LAB_1800bad7f;
    }
    if (0x25 < uVar16) {
LAB_1800bad03:
      puStackY_2b0 = (undefined *)0x1800bad17;
      uVar6 = FUN_1800c6b00(param_1,param_2,param_4,0x23);
      if ((int)uVar6 != 0) goto LAB_1800baf13;
      puStackY_2b0 = (undefined *)0x1800bad34;
      uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52a0);
      if ((int)uVar6 != 0) goto LAB_1800baf13;
      puStackY_2b0 = (undefined *)0x1800bad4f;
      uVar6 = FUN_1800c6b00(param_1,param_2,param_4 + uVar16,8);
      if ((int)uVar6 != 0) goto LAB_1800baf13;
      puStackY_2b0 = (undefined *)0x1800bad69;
      uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52a0);
      if ((int)uVar6 != 0) goto LAB_1800baf13;
      param_4 = param_4 + (uVar14 - 6);
      goto LAB_1800bad7f;
    }
    puStackY_2b0 = (undefined *)0x1800bacc7;
    uVar6 = FUN_1800c6b00(param_1,param_2,param_4,0x35 - (uVar15 >> 1));
    if ((int)uVar6 != 0) goto LAB_1800baf13;
    puStackY_2b0 = (undefined *)0x1800bace1;
    uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52a0);
    if ((int)uVar6 != 0) goto LAB_1800baf13;
    puStackY_2b0 = (undefined *)0x1800bacfb;
    uVar6 = FUN_1800c69e0(param_1,param_2,(longlong)(param_4 + (uVar13 - (uVar15 >> 1))));
    iVar4 = (int)uVar6;
  }
  if (iVar4 == 0) {
    puStackY_2b0 = (undefined *)0x1800bada4;
    uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52a8);
    if ((int)uVar6 == 0) {
      puStackY_2b0 = (undefined *)0x1800badbe;
      uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f5110);
      if ((int)uVar6 == 0) {
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (param_1[lVar11] != 0);
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (param_1[lVar10] != 0);
        puStackY_2b0 = (undefined *)0x1800badfc;
        eVar5 = FID_conflict__ltow_s(param_5,param_1 + lVar10,param_2 - lVar11,10);
        if (eVar5 == 0) {
          puStackY_2b0 = (undefined *)0x1800bae16;
          uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52ac);
          if ((int)uVar6 == 0) {
            puStackY_2b0 = (undefined *)0x1800bae30;
            uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f5120);
            if ((int)uVar6 == 0) {
              lVar11 = -1;
              do {
                lVar10 = lVar11;
                lVar11 = lVar10 + 1;
              } while (param_1[lVar11] != 0);
              lVar10 = lVar10 + 0xb1;
              do {
                lVar12 = lVar12 + 1;
              } while (param_3[lVar12] != 0);
              if (param_2 < (ulonglong)(lVar12 + lVar10)) {
                puStackY_2b0 = (undefined *)0x1800bae76;
                uVar6 = FUN_1800c6b00(param_1,param_2,param_3,(param_2 - lVar10) + -3);
                if ((int)uVar6 != 0) goto LAB_1800baf13;
                param_3 = (short *)&DAT_1800f52a0;
              }
              puStackY_2b0 = (undefined *)0x1800bae90;
              uVar6 = FUN_1800c69e0(param_1,param_2,(longlong)param_3);
              if ((int)uVar6 == 0) {
                puStackY_2b0 = (undefined *)0x1800baea6;
                uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52ac);
                if ((int)uVar6 == 0) {
                  puStackY_2b0 = (undefined *)0x1800baebc;
                  uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f5140);
                  if ((int)uVar6 == 0) {
                    puStackY_2b0 = (undefined *)0x1800baed2;
                    uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f52ac);
                    if ((int)uVar6 == 0) {
                      puStackY_2b0 = (undefined *)0x1800baee8;
                      uVar6 = FUN_1800c69e0(param_1,param_2,0x1800f5220);
                      if ((int)uVar6 == 0) {
                        return;
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
LAB_1800baf13:
                    // WARNING: Subroutine does not return
  puStackY_2b0 = &UNK_1800baf27;
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


void FUN_1800baf28(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FILE *_File;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  wchar_t *local_res20;
  undefined *local_18 [3];

  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_1800baff4(param_1);
  puVar1 = FUN_1800bdaf0(2);
  plVar2 = FUN_1800ad980(&local_res20,puVar1);
  uVar3 = FUN_1800b1e58(plVar2);
  if ((char)uVar3 == '\0') {
    puVar1 = FUN_1800bdaf0(2);
    FUN_1800c7040((longlong)puVar1,0,4,0);
  }
  local_res20 = FUN_1800bb0c8();
  local_18[0] = FUN_1800bdaf0(2);
  ftprintf<>((longlong *)local_18,(longlong *)&local_res20,&local_res8,&local_res10);
  _File = (FILE *)FUN_1800bdaf0(2);
  fflush(_File);
                    // WARNING: Subroutine does not return
  FUN_1800c18c0();
}


// Library Function - Multiple Matches With Same Base Name
//  public: static int __cdecl __crt_char_traits<char>::ftprintf<struct _iobuf * __ptr64,char const
// * __ptr64,char const * __ptr64 const & __ptr64,char const * __ptr64 const & __ptr64,unsigned int
// const & __ptr64>(struct _iobuf * __ptr64 && __ptr64,char const * __ptr64 && __ptr64,char const *
// __ptr64 const & __ptr64,char const * __ptr64 const & __ptr64,unsigned int const & __ptr64)
//  public: static int __cdecl __crt_char_traits<wchar_t>::ftprintf<struct _iobuf * __ptr64,wchar_t
// const * __ptr64,wchar_t const * __ptr64 const & __ptr64,wchar_t const * __ptr64 const &
// __ptr64,unsigned int const & __ptr64>(struct _iobuf * __ptr64 && __ptr64,wchar_t const * __ptr64
// && __ptr64,wchar_t const * __ptr64 const & __ptr64,wchar_t const * __ptr64 const &
// __ptr64,unsigned int const & __ptr64)
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void ftprintf<>(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_1800bb144(*param_1,*param_2,*param_3,*param_4);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800baff4(undefined8 param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  HANDLE hFile;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStackY_4e8 [32];
  DWORD local_4b8 [4];
  short local_4a8 [576];
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStackY_4e8;
  hFile = GetStdHandle(0xfffffff4);
  if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
    DVar1 = GetFileType(hFile);
    if (DVar1 == 2) {
      uVar3 = FUN_180049220(local_4a8,0x240,0x1800f5010,param_1);
      if (-1 < (int)uVar3) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (local_4a8[lVar4] != 0);
        local_4b8[0] = 0;
        BVar2 = WriteConsoleW(hFile,local_4a8,(DWORD)lVar4,local_4b8,(LPVOID)0x0);
        if (BVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_1800c18c0();
        }
      }
    }
  }
  return;
}


wchar_t * FUN_1800bb0c8(void)

{
  return L"Assertion failed: %Ts, file %Ts, line %d\n";
}


// Library Function - Multiple Matches With Different Base Names
//  _assert
//  _wassert
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl FID_conflict__assert(wchar_t *_Message,wchar_t *_File,uint _Line)

{
  code *pcVar1;
  int iVar2;
  LPCWSTR unaff_retaddr;

  iVar2 = FUN_1800c698c(3);
  if (iVar2 == 1) {
LAB_1800bb134:
    FUN_1800baf28(_Message,_File,_Line);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iVar2 == 0) {
    iVar2 = FUN_1800c6824();
    if (iVar2 == 1) goto LAB_1800bb134;
  }
  FUN_1800ba968(_Message,_File,_Line,unaff_retaddr);
  return;
}


void FUN_1800bb144(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;

  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_180049100();
  FUN_1800b1514(*puVar1,param_1,param_2,(undefined4 *)0x0,&local_res18);
  return;
}


double FUN_1800bb190(void)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];

  dVar4 = in_XMM0._0_8_;
  if (1 < DAT_180112350) {
    auVar5 = roundsd(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  dVar1 = ABS(dVar4);
  uVar3 = (ulonglong)dVar1 >> 0x34;
  dVar2 = dVar4;
  if (uVar3 < 0x433) {
    if (uVar3 < 0x3ff) {
      if (dVar1 != 0.0) {
        if (dVar4 != dVar1) {
          return -0.0;
        }
        return 1.0;
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)uVar3 & 0x3f)) - 1U) & (ulonglong)dVar4);
      if ((dVar4 == dVar1) && (dVar2 != dVar4)) {
        dVar2 = dVar2 + 1.0;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar4 = (double)FUN_1800c7800((ulonglong)dVar4);
    return dVar4;
  }
  return dVar2;
}


ulonglong FUN_1800bb260(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 extraout_var [12];
  undefined1 auVar5 [16];

  uVar4 = in_XMM0._0_8_;
  if (1 < DAT_180112350) {
    auVar5 = roundss(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  fVar3 = in_XMM0._0_4_;
  fVar1 = ABS(fVar3);
  if ((uint)fVar1 < 0x4b000000) {
    if ((uint)fVar1 < 0x3f800000) {
      if (fVar1 != 0.0) {
        if (fVar3 != fVar1) {
          return SUB168(ZEXT416(0x80000000),0);
        }
        return 0x3f800000;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint)fVar1 >> 0x17) & 0x1f) & (uint)fVar3);
      uVar4 = (ulonglong)(uint)fVar2;
      if ((fVar3 == fVar1) && (fVar3 != fVar2)) {
        uVar4 = (ulonglong)(uint)(fVar2 + 1.0);
      }
    }
  }
  else if (0x7f800000 < (uint)fVar1) {
    auVar5._0_4_ = FUN_1800c7820((uint)fVar3);
    auVar5._4_12_ = extraout_var;
    return auVar5._0_8_;
  }
  return uVar4;
}


undefined8 FUN_1800bb300(float param_1)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 in_register_00001204 [12];
  undefined1 auVar7 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;

  fVar1 = ABS(param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar6 = FUN_1800c7c20(param_1);
    return uVar6;
  }
  auVar7._8_8_ = in_register_00001204._4_8_;
  auVar7._0_8_ = (double)param_1;
  dVar4 = ABS(auVar7._0_8_);
  if ((uint)fVar1 < 0x3f490fdc) {
    uVar2 = 0;
  }
  else if ((uint)fVar1 < 0x48f42400) {
    uVar5 = (uint)(dVar4 * 0.6366197723675814 + 0.5);
    dVar9 = (double)(int)uVar5;
    dVar11 = dVar4 - dVar9 * 1.5707963267341256;
    uVar2 = (ulonglong)uVar5;
    dVar10 = dVar11 - dVar9 * 6.077100506506192e-11;
    uVar3 = (ulonglong)ABS(dVar10) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar4 >> 0x34) - uVar3)) {
      dVar10 = dVar11 - dVar9 * 6.077100506303966e-11;
      dVar10 = dVar10 - (dVar9 * 2.0222662487959506e-21 -
                        ((dVar11 - dVar10) - dVar9 * 6.077100506303966e-11));
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar10;
    if (uVar3 < 0x3f2) {
      if (uVar3 < 0x3df) {
        if ((uVar5 & 1) == 0) {
          auVar7 = ZEXT816(0x3ff0000000000000);
        }
      }
      else if ((uVar5 & 1) == 0) {
        auVar7._0_8_ = 1.0 - dVar10 * dVar10 * 0.5;
        auVar7._8_8_ = 0;
      }
      else {
        auVar7._0_8_ = dVar10 - dVar10 * 0.16666666666666666 * dVar10 * dVar10;
        auVar7._8_8_ = 0;
      }
      goto LAB_1800bb574;
    }
  }
  else {
    uVar2 = FUN_1800c7860((ulonglong)dVar4);
    auVar7 = extraout_XMM0;
  }
  dVar4 = auVar7._0_8_;
  dVar10 = dVar4 * dVar4;
  uVar5 = (uint)uVar2;
  if ((uVar2 & 1) == 0) {
    auVar7._0_8_ = dVar10 * -0.5 + 1.0 +
                   ((dVar10 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar10 * dVar10 +
                   dVar10 * -0.0013888888888888887 + 0.041666666666666664) * dVar10 * dVar10;
    auVar7._8_8_ = 0;
  }
  else {
    auVar7._0_8_ = dVar4 + ((dVar10 * 2.7557319223985893e-06 + -0.0001984126984126984) *
                            dVar10 * dVar10 + dVar10 * 0.008333333333333333 + -0.16666666666666666)
                           * dVar4 * dVar10;
  }
LAB_1800bb574:
  if ((uVar5 + 1 & 2) != 0) {
    dVar4 = auVar7._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = 0.0 - dVar4;
  }
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = (float)auVar7._0_8_;
  return auVar8._0_8_;
}


undefined8 FUN_1800bb5a0(void)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  float fVar5;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar6;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 in_ZMM2 [64];
  ulonglong uVar23;
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 in_ZMM4 [64];
  double dVar26;

  fVar5 = in_ZMM0._0_4_;
  auVar9._8_56_ = in_ZMM0._8_56_;
  auVar10._16_48_ = in_ZMM0._16_48_;
  auVar24._16_48_ = in_ZMM4._16_48_;
  if (DAT_1801163a0 != 0) {
    fVar1 = ABS(fVar5);
    if (0x7f7fffff < (uint)fVar1) {
      uVar6 = FUN_1800c7c20(fVar5);
      return uVar6;
    }
    dVar26 = (double)fVar5;
    dVar4 = ABS(dVar26);
    if (0x3f490fdb < (uint)fVar1) {
      if ((uint)fVar1 < 0x4f490fdb) {
        auVar7 = vpmovsxdq_avx(ZEXT416((uint)(int)(ABS(dVar4) * 0.6366197723675814 + 0.5)));
        uVar23 = auVar7._0_8_ & 3;
        auVar7 = vshufps_avx(auVar7,auVar7,8);
        auVar7 = vcvtdq2pd_avx(auVar7);
        dVar4 = (-(auVar7._0_8_ * 1.5707963267341256) + dVar4) -
                auVar7._0_8_ * 6.077100506506192e-11;
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((uint)fVar1 < 0x4f490fdb) {
          uVar2 = FUN_1800c7ba0(dVar4);
          uVar23 = (ulonglong)uVar2;
        }
        else {
          uVar23 = FUN_1800c79b0((ulonglong)dVar4);
        }
      }
      if ((uVar23 & 1) == 0) {
        dVar4 = dVar4 * dVar4;
        dVar4 = (dVar4 * (dVar4 * (dVar4 * -2.755731922398589e-07 + 2.4801587301587298e-05) +
                         -0.0013888888888888887) + 0.041666666666666664) * dVar4 * dVar4 +
                (1.0 - dVar4 * 0.5);
        uVar6 = 0;
      }
      else {
        dVar26 = dVar4 * dVar4;
        dVar4 = (dVar26 * (dVar26 * (dVar26 * 2.7557319223985893e-06 + -0.0001984126984126984) +
                          0.008333333333333333) + -0.16666666666666666) * dVar4 * dVar26 + dVar4;
      }
      auVar7._0_8_ = (double)((ulonglong)dVar4 ^ (uVar23 + 1 >> 1) << 0x3f);
      auVar7._8_8_ = uVar6;
      auVar8._0_4_ = (float)auVar7._0_8_;
      auVar8._4_12_ = auVar7._4_12_;
      return auVar8._0_8_;
    }
    if (0x3bffffff < (uint)fVar1) {
      dVar26 = dVar26 * dVar26;
      dVar26 = (dVar26 * (dVar26 * (dVar26 * -2.755731922398589e-07 + 2.4801587301587298e-05) +
                         -0.0013888888888888887) + 0.041666666666666664) * dVar26 * dVar26 +
               (1.0 - dVar26 * 0.5);
      return CONCAT44((int)((ulonglong)dVar26 >> 0x20),(float)dVar26);
    }
    if ((uint)fVar1 < 0x39000000) {
      return SUB648(ZEXT464(0x3f800000),0);
    }
    dVar26 = -(dVar26 * dVar26 * 0.5) + 1.0;
    return CONCAT44((int)((ulonglong)dVar26 >> 0x20),(float)dVar26);
  }
  auVar18._16_48_ = in_ZMM2._16_48_;
  auVar18._0_16_ = ZEXT816(0);
  fVar1 = ABS(fVar5);
  if (0x7f7fffff < (uint)fVar1) {
    uVar6 = FUN_1800c7c20(fVar5);
    return uVar6;
  }
  auVar9._0_8_ = (double)fVar5;
  dVar26 = ABS(auVar9._0_8_);
  if ((uint)fVar1 < 0x3f490fdc) {
    auVar17._8_8_ = in_ZMM0._8_8_;
    auVar17._0_8_ = auVar9._0_8_;
    auVar17._16_48_ = auVar18._16_48_;
    auVar18._8_56_ = auVar17._8_56_;
    auVar18._0_8_ = auVar9._0_8_ * auVar9._0_8_;
    uVar23 = 0;
    auVar10 = auVar9;
  }
  else {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar26;
    if ((uint)fVar1 < 0x48f42400) {
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar26;
      uVar2 = (uint)(dVar26 * 0.6366197723675814 + 0.5);
      auVar18._0_8_ = (double)(int)uVar2;
      auVar18._8_8_ = 0;
      auVar25._8_56_ = auVar24._8_56_;
      auVar25._0_8_ = dVar26 - auVar18._0_8_ * 1.5707963267341256;
      uVar23 = (ulonglong)uVar2;
      auVar11._0_16_ = auVar25._0_16_;
      auVar11._16_48_ = auVar10._16_48_;
      auVar12._8_56_ = auVar11._8_56_;
      auVar12._0_8_ = auVar25._0_8_ - auVar18._0_8_ * 6.077100506506192e-11;
      uVar3 = (ulonglong)ABS(auVar12._0_8_) >> 0x34;
      if (0xf < (longlong)(((ulonglong)dVar26 >> 0x34) - uVar3)) {
        dVar26 = auVar25._0_8_ - auVar18._0_8_ * 6.077100506303966e-11;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = dVar26;
        auVar13._16_48_ = auVar10._16_48_;
        auVar12._8_56_ = auVar13._8_56_;
        auVar12._0_8_ =
             dVar26 - (auVar18._0_8_ * 2.0222662487959506e-21 -
                      ((auVar25._0_8_ - dVar26) - auVar18._0_8_ * 6.077100506303966e-11));
      }
      auVar10 = auVar12;
      if (uVar3 < 0x3f2) {
        auVar14._16_48_ = auVar12._16_48_;
        if (uVar3 < 0x3df) {
          if ((uVar2 & 1) == 0) {
            auVar12._0_16_ = ZEXT816(0x3ff0000000000000);
            auVar12._16_48_ = auVar14._16_48_;
          }
        }
        else {
          dVar26 = auVar12._0_8_;
          auVar19._0_16_ = auVar12._0_16_;
          auVar19._16_48_ = auVar18._16_48_;
          auVar18._8_56_ = auVar19._8_56_;
          auVar18._0_8_ = dVar26 * dVar26;
          if ((uVar2 & 1) == 0) {
            auVar14._0_16_ = ZEXT816(0x3ff0000000000000);
            auVar18._0_8_ = auVar18._0_8_ * 0.5;
            auVar12._8_56_ = auVar14._8_56_;
            auVar12._0_8_ = 1.0 - auVar18._0_8_;
          }
          else {
            auVar12._0_8_ = dVar26 - dVar26 * 0.16666666666666666 * auVar18._0_8_;
          }
        }
        goto LAB_1800bb574;
      }
    }
    else {
      uVar23 = FUN_1800c7860((ulonglong)dVar26);
    }
  }
  dVar26 = auVar10._0_8_;
  auVar20._16_48_ = auVar18._16_48_;
  auVar20._0_16_ = auVar10._0_16_;
  auVar18._8_56_ = auVar20._8_56_;
  auVar18._0_8_ = dVar26 * dVar26;
  uVar2 = (uint)uVar23;
  auVar12._8_56_ = auVar10._8_56_;
  if ((uVar23 & 1) == 0) {
    auVar15._16_48_ = auVar10._16_48_;
    auVar15._0_16_ = ZEXT816(0xbfe0000000000000);
    auVar12._8_56_ = auVar15._8_56_;
    auVar12._0_8_ =
         auVar18._0_8_ * -0.5 + 1.0 +
         ((auVar18._0_8_ * -2.755731922398589e-07 + 2.4801587301587298e-05) *
          auVar18._0_8_ * auVar18._0_8_ +
         auVar18._0_8_ * -0.0013888888888888887 + 0.041666666666666664) *
         auVar18._0_8_ * auVar18._0_8_;
  }
  else {
    auVar12._0_8_ =
         dVar26 + ((auVar18._0_8_ * 2.7557319223985893e-06 + -0.0001984126984126984) *
                   auVar18._0_8_ * auVar18._0_8_ +
                  auVar18._0_8_ * 0.008333333333333333 + -0.16666666666666666) *
                  dVar26 * auVar18._0_8_;
  }
LAB_1800bb574:
  if ((uVar2 + 1 & 2) != 0) {
    auVar21._16_48_ = auVar18._16_48_;
    auVar21._0_16_ = ZEXT816(0);
    auVar22._8_56_ = auVar21._8_56_;
    auVar22._0_8_ = 0.0 - auVar12._0_8_;
    auVar12._0_16_ = auVar22._0_16_;
  }
  auVar16._4_60_ = auVar12._4_60_;
  auVar16._0_4_ = (float)auVar12._0_8_;
  return auVar16._0_8_;
}


undefined8 FUN_1800bb7c0(undefined8 param_1)

{
  float fVar2;
  float fVar1;
  double dVar3;
  double in_XMM0_Qb;
  double dVar9;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 extraout_var [12];
  undefined1 auVar6 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar7 [16];
  undefined1 extraout_var_01 [12];
  undefined1 auVar8 [16];
  uint uVar10;

  fVar2 = (float)param_1;
  fVar1 = ABS(fVar2);
  if (0x42afffff < (uint)fVar1) {
    if (0x7f7fffff < (uint)fVar1) {
      if (fVar2 == INFINITY) {
        return param_1;
      }
      if (fVar2 == -INFINITY) {
        return 0;
      }
      auVar8._0_4_ = FUN_1800c7ef0(fVar2,(float)((uint)fVar2 | 0x400000),1);
      auVar8._4_12_ = extraout_var_01;
      return auVar8._0_8_;
    }
    if (8192.0 <= fVar2 * 92.33248) {
      auVar7._0_4_ = FUN_1800c7ef0(fVar1,INFINITY,3);
      auVar7._4_12_ = extraout_var_00;
      return auVar7._0_8_;
    }
    if (fVar2 * 92.33248 < -9600.0) {
      auVar6._0_4_ = FUN_1800c7ef0(fVar1,0.0,2);
      auVar6._4_12_ = extraout_var;
      return auVar6._0_8_;
    }
  }
  uVar10 = (uint)(fVar2 * 92.33248);
  dVar3 = (double)fVar2 - (double)(int)uVar10 * 0.010830424696249145;
  dVar9 = in_XMM0_Qb - 0.0;
  auVar4._0_8_ = ((dVar3 * dVar3 * (dVar3 * 0.16666666666666666 + 0.5) + dVar3) *
                  *(double *)(&DAT_1800f8050 + (ulonglong)(uVar10 & 0x3f) * 8) +
                 *(double *)(&DAT_1800f8050 + (ulonglong)(uVar10 & 0x3f) * 8)) *
                 (double)((ulonglong)(uint)((int)(uVar10 - (uVar10 & 0x3f)) >> 6) + 0x3ff << 0x34);
  auVar4._8_8_ = ((dVar9 * dVar9 * (dVar9 * 0.0 + 0.0) + dVar9) * 0.0 + 0.0) * 0.0;
  auVar5._4_12_ = auVar4._4_12_;
  auVar5._0_4_ = (float)auVar4._0_8_;
  return auVar5._0_8_;
}


undefined8 FUN_1800bb930(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar14;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 extraout_var [60];
  undefined1 auVar8 [64];
  undefined1 extraout_var_00 [60];
  undefined1 auVar9 [64];
  undefined1 extraout_var_01 [60];
  undefined1 auVar10 [64];
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var_02 [60];
  undefined1 auVar11 [64];
  undefined1 extraout_var_03 [60];
  undefined1 auVar12 [64];
  undefined1 extraout_var_04 [60];
  undefined1 auVar13 [64];
  undefined1 auVar15 [16];

  fVar4 = in_ZMM0._0_4_;
  auVar6._16_48_ = in_ZMM0._16_48_;
  if (DAT_1801163a0 == 0) {
    fVar3 = ABS(fVar4);
    if (0x42afffff < (uint)fVar3) {
      if (0x7f7fffff < (uint)fVar3) {
        if (fVar4 == INFINITY) {
          return in_ZMM0._0_8_;
        }
        if (fVar4 == -INFINITY) {
          return 0;
        }
        auVar10._0_4_ = FUN_1800c7ef0(fVar4,(float)((uint)fVar4 | 0x400000),1);
        auVar10._4_60_ = extraout_var_01;
        return auVar10._0_8_;
      }
      if (8192.0 <= fVar4 * 92.33248) {
        auVar9._0_4_ = FUN_1800c7ef0(fVar3,INFINITY,3);
        auVar9._4_60_ = extraout_var_00;
        return auVar9._0_8_;
      }
      if (fVar4 * 92.33248 < -9600.0) {
        auVar8._0_4_ = FUN_1800c7ef0(fVar3,0.0,2);
        auVar8._4_60_ = extraout_var;
        return auVar8._0_8_;
      }
    }
    uVar2 = (uint)(fVar4 * 92.33248);
    dVar5 = (double)fVar4 - (double)(int)uVar2 * 0.010830424696249145;
    dVar14 = in_ZMM0._8_8_ - 0.0;
    auVar6._0_8_ = ((dVar5 * dVar5 * (dVar5 * 0.16666666666666666 + 0.5) + dVar5) *
                    *(double *)(&DAT_1800f8050 + (ulonglong)(uVar2 & 0x3f) * 8) +
                   *(double *)(&DAT_1800f8050 + (ulonglong)(uVar2 & 0x3f) * 8)) *
                   (double)((ulonglong)(uint)((int)(uVar2 - (uVar2 & 0x3f)) >> 6) + 0x3ff << 0x34);
    auVar6._8_8_ = ((dVar14 * dVar14 * (dVar14 * 0.0 + 0.0) + dVar14) * 0.0 + 0.0) * 0.0;
    auVar7._4_60_ = auVar6._4_60_;
    auVar7._0_4_ = (float)auVar6._0_8_;
    return auVar7._0_8_;
  }
  fVar3 = ABS(fVar4);
  if ((uint)fVar3 < 0x42b00000) {
    dVar5 = (double)fVar4 * 92.33248261689366;
  }
  else {
    if (0x7f7fffff < (uint)fVar3) {
      if (fVar4 == INFINITY) {
        return in_ZMM0._0_8_;
      }
      if (fVar4 == -INFINITY) {
        return 0;
      }
      auVar13._0_4_ = FUN_1800c7ef0(fVar4,(float)((uint)fVar4 | 0x400000),1);
      auVar13._4_60_ = extraout_var_04;
      return auVar13._0_8_;
    }
    dVar5 = (double)fVar4 * 92.33248261689366;
    if (8192.0 <= dVar5) {
      auVar12._0_4_ = FUN_1800c7ef0(fVar3,INFINITY,3);
      auVar12._4_60_ = extraout_var_03;
      return auVar12._0_8_;
    }
    if (dVar5 < -9600.0) {
      auVar11._0_4_ = FUN_1800c7ef0(fVar3,0.0,2);
      auVar11._4_60_ = extraout_var_02;
      return auVar11._0_8_;
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar5;
  auVar1 = vcvtpd2dq_avx(auVar15);
  auVar15 = vcvtdq2pd_avx(auVar1);
  dVar5 = -(auVar15._0_8_ * 0.010830424696249145) + (double)fVar4;
  uVar2 = auVar1._0_4_ & 0x3f;
  dVar5 = (*(double *)(&DAT_1800f8050 + (ulonglong)uVar2 * 8) *
           ((dVar5 * 0.16666666666666666 + 0.5) * dVar5 * dVar5 + dVar5) +
          *(double *)(&DAT_1800f8050 + (ulonglong)uVar2 * 8)) *
          (double)((ulonglong)(uint)((int)(auVar1._0_4_ - uVar2) >> 6) + 0x3ff << 0x34);
  return CONCAT44((int)((ulonglong)dVar5 >> 0x20),(float)dVar5);
}


ulonglong FUN_1800bba90(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 extraout_var [12];
  undefined1 auVar5 [16];

  uVar4 = in_XMM0._0_8_;
  if (1 < DAT_180112350) {
    auVar5 = roundss(in_XMM0,in_XMM0,9);
    return auVar5._0_8_;
  }
  fVar3 = in_XMM0._0_4_;
  fVar1 = ABS(fVar3);
  if ((uint)fVar1 < 0x4b000000) {
    if ((uint)fVar1 < 0x3f800000) {
      if (fVar1 != 0.0) {
        if (fVar3 != fVar1) {
          return 0xbf800000;
        }
        return 0;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint)fVar1 >> 0x17) & 0x1f) & (uint)fVar3);
      uVar4 = (ulonglong)(uint)fVar2;
      if ((fVar3 != fVar1) && (fVar3 != fVar2)) {
        uVar4 = (ulonglong)(uint)(fVar2 - 1.0);
      }
    }
  }
  else if (0x7f800000 < (uint)fVar1) {
    auVar5._0_4_ = FUN_1800c7820((uint)fVar3);
    auVar5._4_12_ = extraout_var;
    return auVar5._0_8_;
  }
  return uVar4;
}


ulonglong FUN_1800bbb20(ulonglong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined8 uVar14;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 extraout_var [12];
  undefined1 auVar11 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar12 [16];
  undefined1 extraout_var_01 [12];
  undefined1 auVar13 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined4 in_stack_ffffffffffffffc4;

  fVar8 = (float)param_1;
  dVar15 = (double)fVar8;
  dVar16 = (double)param_2;
  dVar6 = ABS(dVar15);
  uVar2 = (uint)((ulonglong)dVar15 >> 0x34) & 0x7ff;
  dVar7 = ABS(dVar16);
  uVar4 = (uint)((ulonglong)dVar16 >> 0x34) & 0x7ff;
  if (uVar2 == 0) {
LAB_1800bbdd3:
    if (uVar2 < 0x7ff) {
      if (0x7fe < uVar4) {
        if (((ulonglong)dVar16 & 0xfffffffffffff) == 0) {
          return param_1;
        }
        auVar12._0_4_ = FUN_1800c7820((uint)param_2);
        auVar12._4_12_ = extraout_var_00;
        return auVar12._0_8_;
      }
      if ((uVar2 == 0) && (uVar4 != 0)) {
        return param_1;
      }
      goto LAB_1800bbe33;
    }
  }
  else if (uVar2 < 0x7ff) {
    if (uVar4 - 1 < 0x7fe) {
      if (dVar6 == dVar7) {
        return (ulonglong)(uint)(float)(double)((ulonglong)dVar15 & 0x8000000000000000);
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar6;
      if ((ulonglong)dVar6 < (ulonglong)dVar7) {
        if (fVar8 < 0.0) {
          dVar6 = -dVar6;
        }
        return (ulonglong)(uint)(float)dVar6;
      }
      if (uVar4 < uVar2) {
        iVar5 = 0;
        iVar1 = (int)(uVar2 - uVar4) / 0x18;
        dVar7 = dVar7 * (double)((longlong)(iVar1 * 0x18 + 0x3ff) << 0x34);
        if (7 < iVar1) {
          uVar2 = (iVar1 - 8U >> 3) + 1;
          uVar3 = (ulonglong)uVar2;
          iVar5 = uVar2 * 8;
          do {
            uVar14 = auVar17._8_8_;
            dVar15 = dVar7 * 5.9604644775390625e-08;
            dVar6 = auVar17._0_8_ - (double)(int)(auVar17._0_8_ / dVar7) * dVar7;
            dVar7 = dVar15 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar15) * dVar15;
            dVar15 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar15 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar15) * dVar15;
            dVar15 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar15 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar15) * dVar15;
            dVar15 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar15 * 5.9604644775390625e-08;
            auVar17._0_8_ = dVar6 - (double)(int)(dVar6 / dVar15) * dVar15;
            auVar17._8_8_ = uVar14;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if (iVar5 < iVar1) {
          uVar3 = (ulonglong)(uint)(iVar1 - iVar5);
          do {
            uVar14 = auVar17._8_8_;
            dVar6 = (double)(int)(auVar17._0_8_ / dVar7) * dVar7;
            dVar7 = dVar7 * 5.9604644775390625e-08;
            auVar17._0_8_ = auVar17._0_8_ - dVar6;
            auVar17._8_8_ = uVar14;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      auVar9._0_8_ = auVar17._0_8_ - (double)(int)(auVar17._0_8_ / dVar7) * dVar7;
      auVar9._8_8_ = auVar17._8_8_;
      if (fVar8 < 0.0) {
        auVar9._0_8_ = -auVar9._0_8_;
        auVar9._8_4_ = auVar17._8_4_;
        auVar9._12_4_ = auVar17._12_4_ ^ 0x80000000;
      }
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = (float)auVar9._0_8_;
      return auVar10._0_8_;
    }
    goto LAB_1800bbdd3;
  }
  if (((ulonglong)dVar15 & 0xfffffffffffff) != 0) {
    auVar11._0_4_ = FUN_1800c7820((uint)fVar8);
    auVar11._4_12_ = extraout_var;
    return auVar11._0_8_;
  }
LAB_1800bbe33:
  auVar13._0_4_ =
       FUN_1800c76c0("fmodf",0x16,-NAN,1,8,CONCAT44(in_stack_ffffffffffffffc4,0x21),fVar8,param_2,2)
  ;
  auVar13._4_12_ = extraout_var_01;
  return auVar13._0_8_;
}


// WARNING: Removing unreachable block (ram,0x0001800bc34f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1800bbe80(void)

{
  undefined1 auVar1 [60];
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 in_ZMM0 [64];
  undefined4 uVar33;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 extraout_var [60];
  undefined1 auVar10 [64];
  undefined1 extraout_var_00 [60];
  undefined1 auVar11 [64];
  undefined1 extraout_var_01 [60];
  undefined1 auVar12 [64];
  undefined1 extraout_var_02 [60];
  undefined1 auVar13 [64];
  undefined1 extraout_var_03 [60];
  undefined1 auVar14 [64];
  undefined1 extraout_var_04 [60];
  undefined1 auVar15 [64];
  undefined1 extraout_var_05 [60];
  undefined1 auVar16 [64];
  undefined1 extraout_var_06 [60];
  undefined1 auVar17 [64];
  undefined1 extraout_var_07 [60];
  undefined1 auVar18 [64];
  undefined1 extraout_var_08 [60];
  undefined1 auVar19 [64];
  undefined1 extraout_var_09 [60];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 extraout_var_10 [60];
  undefined1 auVar22 [64];
  undefined1 extraout_var_11 [60];
  undefined1 auVar23 [64];
  undefined1 extraout_var_12 [60];
  undefined1 auVar24 [64];
  undefined1 extraout_var_13 [60];
  undefined1 auVar25 [64];
  undefined1 extraout_var_14 [60];
  undefined1 auVar26 [64];
  undefined1 extraout_var_15 [60];
  undefined1 auVar27 [64];
  undefined1 extraout_var_16 [60];
  undefined1 auVar28 [64];
  undefined1 extraout_var_17 [60];
  undefined1 auVar29 [64];
  undefined1 extraout_var_18 [60];
  undefined1 auVar30 [64];
  undefined1 extraout_var_19 [60];
  undefined1 auVar31 [64];
  undefined1 extraout_var_20 [60];
  undefined1 auVar32 [64];
  float fVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar39 [64];
  undefined1 auVar38 [64];
  undefined1 auVar37 [64];
  float fVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar47 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;

  fVar40 = in_ZMM0._0_4_;
  auVar21._16_48_ = in_ZMM0._16_48_;
  auVar43 = in_ZMM2._0_16_;
  if (DAT_1801163a0 != 0) {
    auVar36 = vpunpckldq_avx(in_ZMM1._0_16_,in_ZMM0._0_16_);
    auVar44 = (undefined1  [16])0x0;
    uVar6 = 0;
    fVar34 = auVar36._0_4_;
    fVar2 = ABS(fVar34);
    fVar3 = ABS(fVar40);
    if ((uint)fVar2 < 0x7f800000) {
      if ((uint)fVar2 < 0x3f800001) {
        if (fVar2 == 0.0) {
          if ((0x7f800000 < (uint)fVar3) && ((uint)fVar3 < 0x7fc00000)) {
            auVar24._0_4_ = FUN_1800c7fb0(fVar40,fVar34,(float)((uint)fVar3 | 0x400000),3);
            auVar24._4_60_ = extraout_var_12;
            return auVar24._0_8_;
          }
          goto LAB_1800bcb50;
        }
        if (fVar34 == 1.0) {
          if ((uint)fVar3 < 0x7f800001) {
            return in_ZMM0._0_8_;
          }
          auVar23._0_4_ = FUN_1800c7fb0(fVar40,1.0,(float)((uint)fVar40 | 0x400000),3);
          auVar23._4_60_ = extraout_var_11;
          return auVar23._0_8_;
        }
      }
      if ((uint)fVar3 < 0x7f800000) {
        auVar45 = vcvtps2pd_avx(auVar36);
        auVar21 = ZEXT1664(auVar45);
        if ((int)fVar40 < 0x3f880000) {
          if ((int)fVar40 < 1) {
            if (fVar3 == 0.0) {
              fVar2 = fVar34;
              if ((int)fVar34 < 0) {
                fVar2 = INFINITY;
              }
              iVar5 = 0;
              if ((int)fVar34 < 0) {
                iVar5 = 0x7f800000;
              }
              if (0 < (int)fVar34) {
                fVar2 = 0.0;
              }
              if (((uint)fVar34 & 0x7f800000) < 0x4b000001) {
                auVar43 = vroundss_avx(auVar43,auVar36,8);
                if (auVar43._0_4_ == fVar34) {
                  if (((int)ROUND(fVar34) & 1U) == 0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = (uint)fVar40 & 0x80000000;
                  }
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                uVar4 = 0;
              }
              fVar2 = (float)(uVar4 | (uint)fVar2);
              if (iVar5 == 0) {
                return (ulonglong)(uint)fVar2;
              }
              auVar22._0_4_ = FUN_1800c7fb0(fVar2,fVar34,fVar2,2);
              auVar22._4_60_ = extraout_var_10;
              return auVar22._0_8_;
            }
            if (((uint)fVar34 & 0x7f800000) < 0x4b000001) {
              auVar43 = vroundss_avx(auVar43,auVar36,8);
              if (auVar43._0_4_ != fVar34) {
                auVar32._0_4_ = FUN_1800c7fb0(auVar45._0_4_,fVar34,-NAN,6);
                auVar32._4_60_ = extraout_var_20;
                return auVar32._0_8_;
              }
              if (((int)ROUND(fVar34) & 1U) != 0) {
                auVar44 = SUB6416(ZEXT464(0x80000000),0);
              }
            }
          }
          uVar6 = auVar44._0_8_;
          auVar43 = vpshufd_avx(auVar45,0xee);
          dVar35 = auVar43._0_8_ - 1.0;
          if ((ulonglong)ABS(dVar35) < 0x3fb0000000000000) {
            vpshufd_avx(auVar44,0x44);
            dVar51 = dVar35 / (dVar35 + 2.0);
            dVar41 = dVar51 + dVar51;
            dVar46 = dVar41 * dVar41;
            auVar43._8_8_ = 0;
            auVar43._0_8_ = dVar46;
            auVar43 = vpshufd_avx(auVar43,0x44);
            auVar36._8_8_ = 0;
            auVar36._0_8_ = dVar46 * dVar46 * dVar41 * dVar46;
            auVar44._8_8_ = 0;
            auVar44._0_8_ = dVar41 * dVar46;
            auVar36 = vunpcklpd_avx(auVar44,auVar36);
            auVar45._0_8_ =
                 auVar36._0_8_ * (auVar43._0_8_ * 0.012500000003771751 + 0.08333333333333179);
            auVar45._8_8_ =
                 auVar36._8_8_ * (auVar43._8_8_ * 0.0004348877777076146 + 0.0022321399879194482);
            auVar43 = vpshufd_avx(auVar45,0xee);
            fVar40 = auVar43._0_4_;
            auVar50._8_8_ = 0;
            auVar50._0_8_ = dVar51 * dVar35;
            auVar36 = vpshufd_avx(auVar50,0xee);
            uVar6 = auVar36._0_8_;
            dVar35 = dVar35 + ((auVar43._0_8_ + auVar45._0_8_) - dVar51 * dVar35);
            goto LAB_1800bbf7e;
          }
        }
        auVar43 = vpshufd_avx(auVar45,0xee);
        auVar43 = vpand_avx(auVar43,_DAT_1800f5580);
        uVar4 = (auVar43._4_4_ >> 0xc) + (uint)((auVar43._0_8_ >> 0x2b & 1) != 0);
        auVar36 = vpor_avx(auVar43,_DAT_1800f5560);
        auVar43 = vpshufd_avx(auVar36,0xee);
        auVar43 = vpsrlq_avx(auVar43,0x34);
        auVar43 = vpsubq_avx(auVar43,_DAT_1800f5570);
        auVar43 = vcvtdq2pd_avx(auVar43);
        dVar35 = ((double)((ulonglong)(uVar4 | 0x3fe00) << 0x2c) - auVar36._0_8_) *
                 *(double *)(&DAT_1800f8260 + (ulonglong)uVar4 * 8);
        dVar35 = dVar35 * (dVar35 * (dVar35 * 0.3333333333333333 + 0.5) + 1.0);
        dVar41 = auVar45._0_8_ *
                 ((auVar43._0_8_ * 0.6931471805599453 +
                  *(double *)(&DAT_1800f5590 + (ulonglong)uVar4 * 8)) - dVar35);
        fVar40 = SUB84(dVar35,0);
        if (88.72283935546875 < dVar41) {
          auVar31._0_4_ =
               FUN_1800c7fb0(SUB84(dVar41,0),fVar40,(float)((uint)(float)uVar6 | 0x7f800000),9);
          auVar31._4_60_ = extraout_var_19;
          return auVar31._0_8_;
        }
        if (-103.2789306640625 < dVar41) {
          auVar47._0_8_ = dVar41 * 92.33248261689366;
          auVar47._8_8_ = 0;
          auVar36 = vcvtpd2dq_avx(auVar47);
          auVar43 = vcvtdq2pd_avx(auVar36);
          dVar41 = -(auVar43._0_8_ * 0.010830424696249145) + dVar41;
          auVar7._0_8_ = *(double *)(&DAT_1800f8050 + (ulonglong)(auVar36._0_4_ & 0x3f) * 8) *
                         dVar41 * (dVar41 * (dVar41 * 0.16666666666666666 + 0.5) + 1.0) +
                         *(double *)(&DAT_1800f8050 + (ulonglong)(auVar36._0_4_ & 0x3f) * 8);
          auVar7._8_8_ = 0;
          auVar43 = vpsrad_avx(auVar36,6);
          auVar43 = vpsllq_avx(auVar43,0x34);
          auVar43 = vpaddq_avx(auVar43,auVar7);
          return CONCAT44((int)((ulonglong)auVar7._0_8_ >> 0x20),(float)auVar43._0_8_) | uVar6;
        }
        auVar30._0_4_ = FUN_1800c7fb0(SUB84(dVar41,0),fVar40,(float)uVar6,7);
        auVar30._4_60_ = extraout_var_18;
        return auVar30._0_8_;
      }
      if (fVar2 == 0.0) goto LAB_1800bcb50;
      if (fVar40 == INFINITY) {
        if ((int)fVar34 < 0) {
          return 0;
        }
        goto LAB_1800bcbb0;
      }
      if (fVar40 == -INFINITY) {
        fVar40 = fVar34;
        if ((int)fVar34 < 0) {
          fVar40 = 0.0;
        }
        if (0 < (int)fVar34) {
          fVar40 = INFINITY;
        }
        uVar4 = 0x80000000;
        if (((uint)fVar34 & 0x7f800000) < 0x4b000001) {
          auVar43 = vroundss_avx(auVar43,auVar36,8);
          if (auVar43._0_4_ == fVar34) {
            if (((int)ROUND(fVar34) & 1U) == 0) {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
        return (ulonglong)(uVar4 | (uint)fVar40);
      }
    }
    else {
      if (0x7f800000 < (uint)fVar2) {
        if (0x7f800000 < (uint)fVar3) {
          if (fVar40 == -NAN) {
            auVar29._0_4_ = FUN_1800c7fb0(-NAN,fVar34,(float)((uint)fVar34 | 0x400000),5);
            auVar29._4_60_ = extraout_var_17;
            return auVar29._0_8_;
          }
          auVar28._0_4_ = FUN_1800c7fb0(fVar40,fVar34,(float)((uint)fVar40 | 0x400000),5);
          auVar28._4_60_ = extraout_var_16;
          return auVar28._0_8_;
        }
        if (fVar40 != 1.0) {
          auVar27._0_4_ = FUN_1800c7fb0(fVar34,fVar34,(float)((uint)fVar34 | 0x400000),4);
          auVar27._4_60_ = extraout_var_15;
          return auVar27._0_8_;
        }
        if ((uint)fVar2 < 0x7fc00000) {
          auVar25._0_4_ = FUN_1800c7fb0(1.0,fVar34,1.0,4);
          auVar25._4_60_ = extraout_var_13;
          return auVar25._0_8_;
        }
LAB_1800bcb50:
        return SUB648(ZEXT464(0x3f800000),0);
      }
      if ((uint)fVar3 < 0x7f800001) {
        if (fVar3 == 1.0) {
          return SUB648(ZEXT464(0x3f800000),0);
        }
        if ((int)fVar34 < 0) {
          uVar4 = 0;
          if ((uint)fVar3 < 0x3f800000) {
            uVar4 = 0x7f800000;
          }
          return (ulonglong)uVar4;
        }
        if ((uint)fVar3 < 0x3f800000) {
          return 0;
        }
LAB_1800bcbb0:
        return SUB648(ZEXT464(0x7f800000),0);
      }
    }
    auVar26._0_4_ = FUN_1800c7fb0(fVar40,fVar34,(float)((uint)fVar40 | 0x400000),3);
    auVar26._4_60_ = extraout_var_14;
    return auVar26._0_8_;
  }
  auVar39._16_48_ = in_ZMM1._16_48_;
  auVar39._0_12_ = in_ZMM1._0_12_;
  auVar39._12_4_ = in_ZMM0._4_4_;
  auVar38._12_52_ = auVar39._12_52_;
  auVar38._0_8_ = in_ZMM1._0_8_;
  auVar38._8_4_ = in_ZMM1._4_4_;
  auVar37._8_56_ = auVar38._8_56_;
  auVar37._0_4_ = in_ZMM1._0_4_;
  auVar37._4_4_ = fVar40;
  uVar6 = 0;
  fVar2 = ABS(auVar37._0_4_);
  fVar3 = ABS(fVar40);
  auVar36 = auVar37._0_16_;
  if (0x7f7fffff < (uint)fVar2) {
    if (0x7f800000 < (uint)fVar2) {
      if (0x7f800000 < (uint)fVar3) {
        if (fVar40 == -NAN) {
          auVar17._0_4_ =
               FUN_1800c7fb0(-NAN,auVar37._0_4_,(float)((uint)auVar37._0_4_ | 0x400000),5);
          auVar17._4_60_ = extraout_var_06;
          return auVar17._0_8_;
        }
        auVar16._0_4_ = FUN_1800c7fb0(fVar40,auVar37._0_4_,(float)((uint)fVar40 | 0x400000),5);
        auVar16._4_60_ = extraout_var_05;
        return auVar16._0_8_;
      }
      if (fVar40 != 1.0) {
        auVar15._0_4_ =
             FUN_1800c7fb0(fVar40,auVar37._0_4_,(float)((uint)auVar37._0_4_ | 0x400000),4);
        auVar15._4_60_ = extraout_var_04;
        return auVar15._0_8_;
      }
      if ((uint)fVar2 < 0x7fc00000) {
        auVar13._0_4_ = FUN_1800c7fb0(1.0,auVar37._0_4_,1.0,4);
        auVar13._4_60_ = extraout_var_02;
        return auVar13._0_8_;
      }
LAB_1800bc470:
      return SUB168(ZEXT416(0x3f800000),0);
    }
    if ((uint)fVar3 < 0x7f800001) {
      if (fVar3 == 1.0) {
        return SUB168(ZEXT416(0x3f800000),0);
      }
      if ((int)auVar37._0_4_ < 0) {
        if (fVar3 != 0.0) {
          uVar4 = 0;
          if ((uint)fVar3 < 0x3f800000) {
            uVar4 = 0x7f800000;
          }
                    // WARNING: Read-only address (ram,0x0001800f5560) is written
                    // WARNING: Read-only address (ram,0x0001800f5570) is written
                    // WARNING: Read-only address (ram,0x0001800f5580) is written
          return (ulonglong)uVar4;
        }
      }
      else if ((uint)fVar3 < 0x3f800000) {
        return 0;
      }
LAB_1800bc4d0:
      return SUB168(ZEXT416(0x7f800000),0);
    }
LAB_1800bc4f0:
    auVar14._0_4_ = FUN_1800c7fb0(fVar40,auVar37._0_4_,(float)((uint)fVar40 | 0x400000),3);
    auVar14._4_60_ = extraout_var_03;
    return auVar14._0_8_;
  }
  if ((uint)fVar2 < 0x3f800001) {
    if (fVar2 == 0.0) {
      if ((0x7f800000 < (uint)fVar3) && ((uint)fVar3 < 0x7fc00000)) {
        auVar12._0_4_ = FUN_1800c7fb0(fVar40,auVar37._0_4_,(float)((uint)fVar3 | 0x400000),3);
        auVar12._4_60_ = extraout_var_01;
        return auVar12._0_8_;
      }
      goto LAB_1800bc470;
    }
    if (auVar37._0_4_ == 1.0) {
      if ((uint)ABS(fVar40) < 0x7f800001) {
        return in_ZMM0._0_8_;
      }
      auVar11._0_4_ = FUN_1800c7fb0(fVar40,1.0,(float)((uint)fVar40 | 0x400000),3);
      auVar11._4_60_ = extraout_var_00;
      return auVar11._0_8_;
    }
  }
  if (0x7f7fffff < (uint)fVar3) {
    if (fVar2 == 0.0) goto LAB_1800bc470;
    if (fVar40 == INFINITY) {
      if ((int)auVar37._0_4_ < 0) {
        return 0;
      }
      goto LAB_1800bc4d0;
    }
    if (fVar40 == -INFINITY) {
      fVar40 = auVar37._0_4_;
      if ((int)auVar37._0_4_ < 0) {
        fVar40 = 0.0;
      }
      if (0 < (int)auVar37._0_4_) {
        fVar40 = INFINITY;
      }
      uVar4 = 0x80000000;
      if (((uint)auVar37._0_4_ & 0x7f800000) < 0x4b000001) {
        if (DAT_180112350 < 2) {
          fVar2 = (float)(int)ROUND(auVar37._0_4_);
        }
        else {
          auVar43 = roundss(auVar43,auVar36,8);
          fVar2 = auVar43._0_4_;
        }
        if (fVar2 == auVar37._0_4_) {
          if (((int)ROUND(auVar37._0_4_) & 1U) == 0) {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
      return (ulonglong)(uVar4 | (uint)fVar40);
    }
    goto LAB_1800bc4f0;
  }
  auVar21._0_8_ = (double)auVar37._0_4_;
  auVar21._8_8_ = (double)fVar40;
  uVar33 = (undefined4)((ulonglong)auVar21._8_8_ >> 0x20);
  if ((int)fVar40 < 0x3f880000) {
    if ((int)fVar40 < 1) {
      if (fVar3 == 0.0) {
        fVar2 = auVar37._0_4_;
        if ((int)auVar37._0_4_ < 0) {
          fVar2 = INFINITY;
        }
        iVar5 = 0;
        if ((int)auVar37._0_4_ < 0) {
          iVar5 = 0x7f800000;
        }
        if (0 < (int)auVar37._0_4_) {
          fVar2 = 0.0;
        }
        if (((uint)auVar37._0_4_ & 0x7f800000) < 0x4b000001) {
          if (DAT_180112350 < 2) {
            fVar3 = (float)(int)ROUND(auVar37._0_4_);
          }
          else {
            auVar43 = roundss(auVar43,auVar36,8);
            fVar3 = auVar43._0_4_;
          }
          if (fVar3 == auVar37._0_4_) {
            if (((int)ROUND(auVar37._0_4_) & 1U) == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = (uint)fVar40 & 0x80000000;
            }
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
        fVar2 = (float)(uVar4 | (uint)fVar2);
        uVar6 = (ulonglong)(uint)fVar2;
        if (iVar5 != 0) {
          auVar10._0_4_ = FUN_1800c7fb0(fVar2,auVar37._0_4_,fVar2,2);
          auVar10._4_60_ = extraout_var;
          uVar6 = auVar10._0_8_;
        }
                    // WARNING: Read-only address (ram,0x0001800f5560) is written
                    // WARNING: Read-only address (ram,0x0001800f5570) is written
                    // WARNING: Read-only address (ram,0x0001800f5580) is written
        return uVar6;
      }
      if (((uint)auVar37._0_4_ & 0x7f800000) < 0x4b000001) {
        if (DAT_180112350 < 2) {
          fVar40 = (float)(int)ROUND(auVar37._0_4_);
        }
        else {
          auVar43 = roundss(auVar43,auVar36,8);
          fVar40 = auVar43._0_4_;
        }
        if (fVar40 != auVar37._0_4_) {
          auVar20._0_4_ = FUN_1800c7fb0(SUB84(auVar21._0_8_,0),auVar37._0_4_,-NAN,6);
          auVar20._4_60_ = extraout_var_09;
          return auVar20._0_8_;
        }
        if (((int)ROUND(auVar37._0_4_) & 1U) != 0) {
          uVar6 = 0x80000000;
        }
      }
    }
    auVar48._8_4_ = SUB84(auVar21._8_8_,0);
    auVar48._0_8_ = auVar21._8_8_;
    auVar48._16_48_ = in_ZMM3._16_48_;
    auVar48._12_4_ = uVar33;
    in_ZMM3._8_56_ = auVar48._8_56_;
    in_ZMM3._0_8_ = auVar21._8_8_ - 1.0;
    if ((ulonglong)ABS(in_ZMM3._0_8_) < 0x3fb0000000000000) {
      dVar51 = in_ZMM3._0_8_ / (in_ZMM3._0_8_ + 2.0);
      dVar41 = dVar51 + dVar51;
      dVar35 = dVar41 * dVar41;
      auVar49._8_4_ = SUB84(dVar35,0);
      auVar49._0_8_ = dVar35;
      auVar49._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      dVar46 = dVar35 * dVar35 * dVar41 * dVar35 *
               (auVar49._8_8_ * 0.0004348877777076146 + 0.0022321399879194482);
      fVar40 = SUB84(dVar46,0);
      dVar35 = in_ZMM3._0_8_ +
               ((dVar41 * dVar35 * (dVar35 * 0.012500000003771751 + 0.08333333333333179) + dVar46) -
               dVar51 * in_ZMM3._0_8_);
      goto LAB_1800bbf7e;
    }
  }
  auVar42._8_4_ = SUB84(auVar21._8_8_,0);
  auVar42._0_8_ = auVar21._8_8_;
  auVar42._12_4_ = uVar33;
  auVar42 = auVar42 & _DAT_1800f5580;
  uVar4 = (auVar42._4_4_ >> 0xc) + (uint)((auVar42._0_8_ >> 0x2b & 1) != 0);
  auVar1._4_56_ = in_ZMM3._8_56_;
  auVar1._0_4_ = SUB164(auVar42 | _DAT_1800f5560,0xc);
  dVar35 = ((double)((ulonglong)(uVar4 | 0x3fe00) << 0x2c) - SUB168(auVar42 | _DAT_1800f5560,0)) *
           *(double *)(&DAT_1800f8260 + (ulonglong)uVar4 * 8);
  dVar35 = dVar35 * dVar35 * (dVar35 * 0.3333333333333333 + 0.5) + dVar35;
  fVar40 = SUB84(dVar35,0);
  dVar35 = ((double)(int)(((auVar1._0_8_ & 0xffffffff) >> 0x14) - 0x3ff) * 0.6931471805599453 +
           *(double *)(&DAT_1800f5590 + (ulonglong)uVar4 * 8)) - dVar35;
LAB_1800bbf7e:
  auVar8._8_56_ = auVar21._8_56_;
  dVar35 = auVar21._0_8_ * dVar35;
  if (88.72283935546875 < dVar35) {
    auVar19._0_4_ = FUN_1800c7fb0(SUB84(dVar35,0),fVar40,(float)((uint)(float)uVar6 | 0x7f800000),9)
    ;
    auVar19._4_60_ = extraout_var_08;
    return auVar19._0_8_;
  }
  if (-103.2789306640625 < dVar35) {
    uVar4 = (uint)(dVar35 * 92.33248261689366);
    dVar35 = dVar35 - (double)(int)uVar4 * 0.010830424696249145;
    auVar8._0_8_ = (dVar35 * dVar35 * (dVar35 * 0.16666666666666666 + 0.5) + dVar35) *
                   *(double *)(&DAT_1800f8050 + (ulonglong)(uVar4 & 0x3f) * 8) +
                   *(double *)(&DAT_1800f8050 + (ulonglong)(uVar4 & 0x3f) * 8);
    auVar9._4_60_ = auVar8._4_60_;
    auVar9._0_4_ = (float)(double)(((ulonglong)(uint)((int)uVar4 >> 6) << 0x34) +
                                  (longlong)auVar8._0_8_);
    return auVar9._0_8_ | uVar6;
  }
  auVar18._0_4_ = FUN_1800c7fb0(SUB84(dVar35,0),fVar40,(float)uVar6,7);
  auVar18._4_60_ = extraout_var_07;
  return auVar18._0_8_;
}


undefined8 FUN_1800bcd40(undefined8 param_1)

{
  undefined8 uVar1;
  float fVar2;
  ulonglong uVar3;
  double dVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint local_38 [2];
  double local_30 [6];

  fVar7 = (float)param_1;
  fVar2 = ABS(fVar7);
  if (0x7f7fffff < (uint)fVar2) {
    uVar1 = FUN_1800c7cb0(fVar7);
    return uVar1;
  }
  dVar8 = (double)fVar7;
  dVar4 = ABS(dVar8);
  if ((uint)fVar2 < 0x3f490fdc) {
    if ((uint)fVar2 < 0x3c000000) {
      if ((uint)fVar2 < 0x39000000) {
        return param_1;
      }
      dVar8 = dVar8 - dVar8 * dVar8 * dVar8 * 0.16666666666666666;
    }
    else {
      dVar4 = dVar8 * dVar8;
      dVar8 = dVar8 + ((dVar4 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar4 * dVar4 +
                      dVar4 * 0.008333333333333333 + -0.16666666666666666) * dVar8 * dVar4;
    }
    goto LAB_1800bd096;
  }
  bVar6 = dVar8 != dVar4;
  if (bVar6) {
    dVar8 = 0.0 - dVar8;
  }
  if ((uint)fVar2 < 0x4b742400) {
    local_38[0] = (uint)(dVar8 * 0.6366197723675814 + 0.5);
    dVar9 = (double)(int)local_38[0];
    dVar10 = dVar8 - dVar9 * 1.5707963267341256;
    dVar8 = dVar10 - dVar9 * 6.077100506506192e-11;
    uVar3 = (ulonglong)ABS(dVar8) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar4 >> 0x34) - uVar3)) {
      dVar8 = dVar10 - dVar9 * 6.077100506303966e-11;
      dVar8 = dVar8 - (dVar9 * 2.0222662487959506e-21 -
                      ((dVar10 - dVar8) - dVar9 * 6.077100506303966e-11));
    }
    if (0x3f1 < uVar3) goto LAB_1800bcfbe;
    if (uVar3 < 0x3df) {
      if ((local_38[0] & 1) != 0) {
        dVar8 = 1.0;
      }
    }
    else if ((local_38[0] & 1) == 0) {
      dVar8 = dVar8 - dVar8 * 0.16666666666666666 * dVar8 * dVar8;
    }
    else {
      dVar8 = 1.0 - dVar8 * dVar8 * 0.5;
    }
  }
  else {
    dVar8 = (double)__remainder_piby2d2f_forC((ulonglong)dVar8,local_30,local_38);
LAB_1800bcfbe:
    dVar4 = dVar8 * dVar8;
    if ((local_38[0] & 1) == 0) {
      dVar8 = dVar8 + ((dVar4 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar4 * dVar4 +
                      dVar4 * 0.008333333333333333 + -0.16666666666666666) * dVar8 * dVar4;
    }
    else {
      dVar8 = dVar4 * -0.5 + 1.0 +
              ((dVar4 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar4 * dVar4 +
              dVar4 * -0.0013888888888888887 + 0.041666666666666664) * dVar4 * dVar4;
    }
  }
  uVar5 = (uint)bVar6;
  if ((local_38[0] >> 1 & uVar5) == 0 && (~(local_38[0] >> 1) & ~uVar5 & 1) == 0) {
    dVar8 = 0.0 - dVar8;
  }
LAB_1800bd096:
  return CONCAT44((int)((ulonglong)dVar8 >> 0x20),(float)dVar8);
}


undefined8 FUN_1800bd0b0(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  sbyte sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar24;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 extraout_var [56];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 in_ZMM0 [64];
  double dVar38;
  undefined1 auVar39 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 in_ZMM4 [64];
  double dVar43;
  uint auStack_38 [2];
  double adStack_30 [6];

  fVar23 = in_ZMM0._0_4_;
  auVar41._16_48_ = in_ZMM4._16_48_;
  auVar29._16_48_ = in_ZMM0._16_48_;
  if (DAT_1801163a0 != 0) {
    fVar9 = ABS(fVar23);
    if (0x7f7fffff < (uint)fVar9) {
      uVar24 = FUN_1800c7cb0(fVar23);
      return uVar24;
    }
    dVar43 = (double)fVar23;
    dVar18 = ABS(dVar43);
    if ((uint)fVar9 < 0x3f490fdc) {
      if ((uint)fVar9 < 0x3c000000) {
        if ((uint)fVar9 < 0x39000000) {
          return in_ZMM0._0_8_;
        }
        auVar25._0_8_ = -(dVar43 * dVar43 * dVar43 * 0.16666666666666666) + dVar43;
        auVar25._8_8_ = 0;
      }
      else {
        dVar18 = dVar43 * dVar43;
        auVar25._8_8_ = in_ZMM0._8_8_;
        auVar25._0_8_ =
             (dVar18 * (dVar18 * (dVar18 * 2.7557319223985893e-06 + -0.0001984126984126984) +
                       0.008333333333333333) + -0.16666666666666666) * dVar43 * dVar18 + dVar43;
      }
    }
    else {
      if ((uint)fVar9 < 0x4b800456) {
        auVar7 = vpmovsxdq_avx(ZEXT416((uint)(int)(dVar18 * 0.6366197723675814 + 0.5)));
        auVar40._0_8_ = auVar7._0_8_ & 3;
        auVar40._8_8_ = auVar7._8_8_ & 3;
        auVar7 = vshufps_avx(auVar7,auVar7,8);
        auVar7 = vcvtdq2pd_avx(auVar7);
        dVar18 = (-(auVar7._0_8_ * 1.5707963267341256) + dVar18) -
                 auVar7._0_8_ * 6.077100506506192e-11;
      }
      else {
        uVar22 = ((ulonglong)dVar18 >> 0x34) - 0x3ff;
        lVar19 = -((uVar22 >> 3) - 0x86);
        uVar14 = (ulonglong)dVar43 & 0xfffffffffffff | 0x10000000000000;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(&DAT_1800f8a80 + lVar19);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar14;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = SUB168(auVar7 * auVar4,8);
        uVar10 = SUB168(auVar7 * auVar4,0);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(&UNK_1800f8a88 + lVar19);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar22 = uVar22 & 7;
        auVar8 = auVar2 * auVar5 + auVar8;
        uVar11 = auVar8._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(&UNK_1800f8a90 + lVar19);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        uVar20 = auVar8._8_8_ + SUB168(auVar3 * auVar6,0);
        uVar17 = 0;
        bVar13 = (byte)(0x36 - uVar22) & 0x3f;
        uVar14 = uVar20 >> bVar13;
        bVar1 = (bool)(((0x36 - uVar22 & 0x3f) != 0) * ((uVar20 >> bVar13 - 1 & 1) != 0));
        if (bVar1) {
          uVar20 = ~uVar20;
          uVar11 = ~uVar11;
          uVar10 = ~uVar10;
          uVar17 = 0x8000000000000000;
        }
        auVar40 = ZEXT416((int)uVar14 + (uint)bVar1 & 3);
        sVar12 = (char)uVar22 + 10;
        uVar14 = (uVar20 << sVar12) >> sVar12;
        lVar15 = uVar22 - 0x36;
        lVar19 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar20 = uVar11;
        if (uVar14 == 0) {
          lVar19 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          lVar15 = uVar22 - 0x76;
          uVar20 = uVar10;
          uVar14 = uVar11;
        }
        lVar16 = lVar19 + -0x34;
        if (lVar16 < 0) {
          bVar13 = -(byte)lVar16;
          uVar14 = uVar14 << (bVar13 & 0x3f) | uVar20 >> (-(bVar13 - 0x40) & 0x3f);
        }
        else if (lVar16 != 0) {
          uVar14 = uVar14 >> ((byte)lVar16 & 0x3f);
        }
        dVar18 = (double)(uVar14 & 0xffefffffffffffff | uVar17 | lVar15 + lVar19 + 0x3ff << 0x34) *
                 1.5707963267948966;
      }
      uVar10 = auVar40._0_8_;
      if ((uVar10 & 1) == 1) {
        uVar11 = 0x3ff0000000000000;
        dVar18 = dVar18 * dVar18;
        dVar18 = (dVar18 * (dVar18 * (dVar18 * -2.755731922398589e-07 + 2.4801587301587298e-05) +
                           -0.0013888888888888887) + 0.041666666666666664) * dVar18 * dVar18 +
                 dVar18 * -0.5 + 1.0;
      }
      else {
        dVar38 = dVar18 * dVar18;
        dVar18 = (dVar38 * (dVar38 * (dVar38 * 2.7557319223985893e-06 + -0.0001984126984126984) +
                           0.008333333333333333) + -0.16666666666666666) * dVar18 * dVar38 + dVar18;
        uVar11 = 0;
      }
      auVar25._0_8_ =
           (double)(~(ulonglong)dVar43 & 0x8000000000000000 ^
                   (ulonglong)dVar18 ^
                   ~-(ulonglong)(uVar10 == 2 || uVar10 == 3) & 0x8000000000000000);
      auVar25._8_8_ =
           ~in_ZMM0._8_8_ & 0x8000000000000000 ^
           uVar11 ^ ~-(ulonglong)(auVar40._8_8_ == 2 || auVar40._8_8_ == 3) & 0x8000000000000000;
    }
    auVar26._0_4_ = (float)auVar25._0_8_;
    auVar26._4_12_ = auVar25._4_12_;
    return auVar26._0_8_;
  }
  auVar30._16_48_ = in_ZMM2._16_48_;
  auVar30._0_16_ = ZEXT816(0);
  fVar9 = ABS(fVar23);
  if (0x7f7fffff < (uint)fVar9) {
    uVar24 = FUN_1800c7cb0(fVar23);
    return uVar24;
  }
  auVar27._8_56_ = in_ZMM0._8_56_;
  auVar27._0_8_ = (double)fVar23;
  dVar18 = ABS(auVar27._0_8_);
  auVar39._8_56_ = auVar30._8_56_;
  if ((uint)fVar9 < 0x3f490fdc) {
    if ((uint)fVar9 < 0x3c000000) {
      if ((uint)fVar9 < 0x39000000) {
        return in_ZMM0._0_8_;
      }
      auVar28._0_8_ =
           auVar27._0_8_ - auVar27._0_8_ * auVar27._0_8_ * auVar27._0_8_ * 0.16666666666666666;
      auVar28._8_56_ = auVar27._8_56_;
    }
    else {
      dVar18 = auVar27._0_8_ * auVar27._0_8_;
      auVar28._0_8_ =
           auVar27._0_8_ +
           ((dVar18 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar18 * dVar18 +
           dVar18 * 0.008333333333333333 + -0.16666666666666666) * auVar27._0_8_ * dVar18;
      auVar28._8_56_ = auVar27._8_56_;
    }
    goto LAB_1800bd096;
  }
  auVar30 = auVar27;
  if (auVar27._0_8_ != dVar18) {
    auVar39._0_8_ = 0.0 - auVar27._0_8_;
    auVar29._0_16_ = auVar39._0_16_;
    auVar30 = auVar29;
  }
  dVar43 = auVar30._0_8_;
  if ((uint)fVar9 < 0x4b742400) {
    auVar41._0_16_ = auVar30._0_16_;
    auStack_38[0] = (uint)(dVar43 * 0.6366197723675814 + 0.5);
    auVar31._16_48_ = auVar30._16_48_;
    dVar38 = (double)(int)auStack_38[0];
    auVar42._8_56_ = auVar41._8_56_;
    auVar42._0_8_ = dVar43 - dVar38 * 1.5707963267341256;
    auVar31._0_16_ = auVar42._0_16_;
    auVar32._8_56_ = auVar31._8_56_;
    auVar32._0_8_ = auVar42._0_8_ - dVar38 * 6.077100506506192e-11;
    uVar10 = (ulonglong)ABS(auVar32._0_8_) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar18 >> 0x34) - uVar10)) {
      dVar43 = auVar42._0_8_ - dVar38 * 6.077100506303966e-11;
      auVar33._8_8_ = auVar30._8_8_;
      auVar33._0_8_ = dVar43;
      auVar33._16_48_ = auVar31._16_48_;
      auVar32._8_56_ = auVar33._8_56_;
      auVar32._0_8_ =
           dVar43 - (dVar38 * 2.0222662487959506e-21 -
                    ((auVar42._0_8_ - dVar43) - dVar38 * 6.077100506303966e-11));
    }
    if (0x3f1 < uVar10) goto LAB_1800bcfbe;
    auVar34._16_48_ = auVar32._16_48_;
    if (uVar10 < 0x3df) {
      if ((auStack_38[0] & 1) != 0) {
        auVar32._0_16_ = ZEXT816(0x3ff0000000000000);
        auVar32._16_48_ = auVar34._16_48_;
      }
    }
    else {
      dVar43 = auVar32._0_8_;
      if ((auStack_38[0] & 1) == 0) {
        auVar32._0_8_ = dVar43 - dVar43 * 0.16666666666666666 * dVar43 * dVar43;
      }
      else {
        auVar34._0_16_ = ZEXT816(0x3ff0000000000000);
        auVar32._8_56_ = auVar34._8_56_;
        auVar32._0_8_ = 1.0 - dVar43 * dVar43 * 0.5;
      }
    }
  }
  else {
    auVar32._0_8_ = (double)__remainder_piby2d2f_forC((ulonglong)dVar43,adStack_30,auStack_38);
    auVar32._8_56_ = extraout_var;
LAB_1800bcfbe:
    dVar43 = auVar32._0_8_;
    dVar38 = dVar43 * dVar43;
    if ((auStack_38[0] & 1) == 0) {
      auVar32._0_8_ =
           dVar43 + ((dVar38 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar38 * dVar38 +
                    dVar38 * 0.008333333333333333 + -0.16666666666666666) * dVar43 * dVar38;
    }
    else {
      auVar35._16_48_ = auVar32._16_48_;
      auVar35._0_16_ = ZEXT816(0xbfe0000000000000);
      auVar32._8_56_ = auVar35._8_56_;
      auVar32._0_8_ =
           dVar38 * -0.5 + 1.0 +
           ((dVar38 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar38 * dVar38 +
           dVar38 * -0.0013888888888888887 + 0.041666666666666664) * dVar38 * dVar38;
    }
  }
  uVar21 = (uint)(auVar27._0_8_ != dVar18);
  auVar28 = auVar32;
  if ((auStack_38[0] >> 1 & uVar21) == 0 && (~(auStack_38[0] >> 1) & ~uVar21 & 1) == 0) {
    auVar36._16_48_ = auVar32._16_48_;
    auVar36._0_16_ = ZEXT816(0);
    auVar28._8_56_ = auVar36._8_56_;
    auVar28._0_8_ = 0.0 - auVar32._0_8_;
  }
LAB_1800bd096:
  auVar37._4_60_ = auVar28._4_60_;
  auVar37._0_4_ = (float)auVar28._0_8_;
  return auVar37._0_8_;
}


float FUN_1800bd400(float param_1)

{
  float fVar1;
  undefined4 in_stack_ffffffffffffffd4;

  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    if (((uint)param_1 & 0x7fffff) != 0) {
      fVar1 = (float)FUN_1800c7820((uint)param_1);
      return fVar1;
    }
    if ((int)param_1 < 0) goto LAB_1800bd437;
  }
  if (-1 < (int)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_1800bd437:
  fVar1 = FUN_1800c76c0("sqrtf",5,-NAN,1,8,CONCAT44(in_stack_ffffffffffffffd4,0x21),param_1,0.0,1);
  return fVar1;
}


ulonglong FUN_1800bd4a0(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  undefined1 (*pauVar4) [32];
  ulonglong uVar5;
  undefined1 auVar6 [16];

  if (4 < DAT_180112350) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = 0x20 - uVar3;
    }
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (pauVar2 = param_1;
        (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1;
    if (uVar3 == uVar5) {
      pauVar4 = (undefined1 (*) [32])
                ((longlong)pauVar2 +
                ((param_2 - uVar5) - (ulonglong)((uint)(param_2 - uVar5) & 0x1f)));
      while ((pauVar2 != pauVar4 &&
             (auVar1 = vpcmpeqb_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar2 = pauVar2 + 1;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1;
    }
    return uVar3;
  }
  pauVar2 = param_1;
  if (DAT_180112350 < 1) {
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
  }
  else {
    uVar3 = (ulonglong)((uint)param_1 & 0xf);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = 0x10 - uVar3;
    }
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    if ((longlong)pauVar2 - (longlong)param_1 != uVar5) {
      return (longlong)pauVar2 - (longlong)param_1;
    }
    pauVar4 = (undefined1 (*) [32])
              ((longlong)pauVar2 + ((param_2 - uVar5) - (ulonglong)((uint)(param_2 - uVar5) & 0xf)))
    ;
    while ((pauVar2 != pauVar4 &&
           (auVar6[0] = -((*pauVar2)[0] == '\0'), auVar6[1] = -((*pauVar2)[1] == '\0'),
           auVar6[2] = -((*pauVar2)[2] == '\0'), auVar6[3] = -((*pauVar2)[3] == '\0'),
           auVar6[4] = -((*pauVar2)[4] == '\0'), auVar6[5] = -((*pauVar2)[5] == '\0'),
           auVar6[6] = -((*pauVar2)[6] == '\0'), auVar6[7] = -((*pauVar2)[7] == '\0'),
           auVar6[8] = -((*pauVar2)[8] == '\0'), auVar6[9] = -((*pauVar2)[9] == '\0'),
           auVar6[10] = -((*pauVar2)[10] == '\0'), auVar6[0xb] = -((*pauVar2)[0xb] == '\0'),
           auVar6[0xc] = -((*pauVar2)[0xc] == '\0'), auVar6[0xd] = -((*pauVar2)[0xd] == '\0'),
           auVar6[0xe] = -((*pauVar2)[0xe] == '\0'), auVar6[0xf] = -((*pauVar2)[0xf] == '\0'),
           (((((((((((((((SUB161(auVar6 >> 7,0) & 1) == 0 && (SUB161(auVar6 >> 0xf,0) & 1) == 0) &&
                       (SUB161(auVar6 >> 0x17,0) & 1) == 0) && (SUB161(auVar6 >> 0x1f,0) & 1) == 0)
                     && (SUB161(auVar6 >> 0x27,0) & 1) == 0) && (SUB161(auVar6 >> 0x2f,0) & 1) == 0)
                   && (SUB161(auVar6 >> 0x37,0) & 1) == 0) && (SUB161(auVar6 >> 0x3f,0) & 1) == 0)
                 && (SUB161(auVar6 >> 0x47,0) & 1) == 0) && (SUB161(auVar6 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar6 >> 0x57,0) & 1) == 0) && (SUB161(auVar6 >> 0x5f,0) & 1) == 0) &&
             (SUB161(auVar6 >> 0x67,0) & 1) == 0) && (SUB161(auVar6 >> 0x6f,0) & 1) == 0) &&
           (SUB161(auVar6 >> 0x77,0) & 1) == 0) && -1 < auVar6[0xf]))) {
      pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
    }
    if (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2)) {
      while ((*pauVar2)[0] != '\0') {
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
        if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2)) {
          return (longlong)pauVar2 - (longlong)param_1;
        }
      }
    }
  }
  return (longlong)pauVar2 - (longlong)param_1;
}


ulonglong FUN_1800bd630(undefined1 (*param_1) [32])

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];

  if (DAT_180112350 < 5) {
    pauVar2 = param_1;
    if (DAT_180112350 < 1) {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
             (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar3 != uVar4 >> 1) {
        return uVar3;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
      while( true ) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar2 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar2 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar2 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar2 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar2 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar2 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar2 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar2 + 0xe) == 0);
        if ((((((((((((((((SUB161(auVar5 >> 7,0) & 1) != 0 || (SUB161(auVar5 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar5 >> 0x17,0) & 1) != 0) || (SUB161(auVar5 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar5 >> 0x27,0) & 1) != 0) || (SUB161(auVar5 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar5 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar5 >> 0x3f,0) & 1) != 0) || (SUB161(auVar5 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar5 >> 0x4f,0) & 1) != 0) || (SUB161(auVar5 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || (SUB161(auVar5 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar5 >> 0x6f,0) & 1) != 0) || (auVar5._14_2_ >> 7 & 1) != 0) ||
            (auVar5._14_2_ & 0x8000) != 0) break;
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
      }
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (((ulonglong)param_1 & 1) == 0) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0x20 - uVar3;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
           (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
    if (uVar3 != uVar4 >> 1) {
      return uVar3;
    }
    pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
    while (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
          (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                       (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                            (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                           (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                          (SUB321(auVar1 >> 0x77,0) & 1) == 0) && SUB321(auVar1 >> 0x7f,0) == '\0')
                        && (SUB321(auVar1 >> 0x87,0) & 1) == 0) &&
                       (SUB321(auVar1 >> 0x8f,0) & 1) == 0) && (SUB321(auVar1 >> 0x97,0) & 1) == 0)
                     && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0)
                   && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                 && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
               (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
             (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
           (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
          -1 < auVar1[0x1f]) {
      pauVar2 = pauVar2 + 1;
    }
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}


ulonglong FUN_1800bd780(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  short *psVar5;
  undefined1 auVar6 [16];

  if (4 < DAT_180112350) {
    if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0x1f);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x20 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (pauVar2 = param_1;
          (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar4 * 2);
      while ((pauVar2 !=
              (undefined1 (*) [32])
              ((longlong)param_1 +
              (((param_2 - uVar3) - (ulonglong)((uint)(param_2 - uVar3) & 0x1f)) + uVar4) * 2) &&
             (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar2 = pauVar2 + 1;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0))
          ; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      pauVar2 = param_1;
      if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
        while (*(short *)*pauVar2 != 0) {
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2);
          if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
            return (longlong)pauVar2 - (longlong)param_1 >> 1;
          }
        }
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (DAT_180112350 < 1) {
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      for (psVar5 = (short *)(*param_1 + uVar4 * 2);
          psVar5 != (short *)((longlong)param_1 +
                             (((param_2 - uVar3) - (ulonglong)((uint)(param_2 - uVar3) & 0xf)) +
                             uVar4) * 2); psVar5 = psVar5 + 8) {
        auVar6._0_2_ = -(ushort)(*psVar5 == 0);
        auVar6._2_2_ = -(ushort)(psVar5[1] == 0);
        auVar6._4_2_ = -(ushort)(psVar5[2] == 0);
        auVar6._6_2_ = -(ushort)(psVar5[3] == 0);
        auVar6._8_2_ = -(ushort)(psVar5[4] == 0);
        auVar6._10_2_ = -(ushort)(psVar5[5] == 0);
        auVar6._12_2_ = -(ushort)(psVar5[6] == 0);
        auVar6._14_2_ = -(ushort)(psVar5[7] == 0);
        if ((((((((((((((((SUB161(auVar6 >> 7,0) & 1) != 0 || (SUB161(auVar6 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar6 >> 0x17,0) & 1) != 0) || (SUB161(auVar6 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar6 >> 0x27,0) & 1) != 0) || (SUB161(auVar6 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar6 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar6 >> 0x3f,0) & 1) != 0) || (SUB161(auVar6 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar6 >> 0x4f,0) & 1) != 0) || (SUB161(auVar6 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar6 >> 0x5f,0) & 1) != 0) || (SUB161(auVar6 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar6 >> 0x6f,0) & 1) != 0) || (auVar6._14_2_ >> 7 & 1) != 0) ||
            (auVar6._14_2_ & 0x8000) != 0) break;
      }
      for (; (psVar5 != (short *)(*param_1 + param_2 * 2) && (*psVar5 != 0)); psVar5 = psVar5 + 1) {
      }
      return (longlong)psVar5 - (longlong)param_1 >> 1;
    }
    if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
      while (*(short *)*pauVar2 != 0) {
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2);
        if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
          return (longlong)pauVar2 - (longlong)param_1 >> 1;
        }
      }
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}


// Library Function - Single Match
//  wcsncmp
//
// Library: Visual Studio 2005 Release

int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount == 0) {
    return 0;
  }
  for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
      _Str1 = _Str1 + 1) {
    _Str2 = _Str2 + 1;
  }
  return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
}


undefined8 FUN_1800bd9d0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined *puVar5;

  lVar1 = 0;
  lVar4 = 3;
  if (DAT_180115d98 == 0) {
    DAT_180115d98 = 0x200;
  }
  else if (DAT_180115d98 < 3) {
    DAT_180115d98 = 3;
  }
  DAT_180115da0 = _calloc_base((longlong)DAT_180115d98,8);
  FUN_1800c3030((LPVOID)0x0);
  if (DAT_180115da0 == (LPVOID)0x0) {
    DAT_180115d98 = 3;
    DAT_180115da0 = _calloc_base(3,8);
    FUN_1800c3030((LPVOID)0x0);
    if (DAT_180115da0 == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  lVar2 = 0;
  puVar3 = &DAT_180112398;
  puVar5 = &DAT_180112380;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + 0x30),4000,0);
    *(undefined **)(lVar1 + (longlong)DAT_180115da0) = puVar5;
    if (*(longlong *)((&DAT_180115f70)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar5 = puVar5 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 0;
}


undefined * FUN_1800bdaf0(ulonglong param_1)

{
  return &DAT_180112380 + (param_1 & 0xffffffff) * 0x58;
}


// Library Function - Single Match
//  __acrt_uninitialize_stdio
//
// Library: Visual Studio 2019 Release

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;

  common_flush_all(param_1);
  FUN_1800c8a94();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_180115da0));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_180115da0) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_1800c3030(DAT_180115da0);
  DAT_180115da0 = (LPVOID)0x0;
  return;
}


void FUN_1800bdb6c(longlong param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800bdb70. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}


void FUN_1800bdb78(longlong param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800bdb7c. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}


void FUN_1800bdb84(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;

  FUN_1800bdb6c(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_1800bde30(*(FILE **)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_1800bdb78(*param_4);
  return;
}


void FUN_1800bdc20(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  int *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  local_res20 = param_4;
  __acrt_lock(*param_2);
  plVar1 = DAT_180115da0 + DAT_180115d98;
  for (plVar3 = DAT_180115da0; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_1800bdb84(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}


int FUN_1800bdd04(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;

  FUN_1800bdb6c(*param_2);
  iVar1 = FUN_1800bde30(*(FILE **)*param_3);
  FUN_1800bdb78(*param_4);
  return iVar1;
}


// Library Function - Single Match
//  int __cdecl common_flush_all(bool)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  int *local_20;
  char *local_18;
  int *local_10;

  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28[0] = 8;
  local_28[1] = 8;
  local_res8[0] = param_1;
  FUN_1800bdc20(local_res10,local_28 + 1,&local_20,local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}


undefined8 FUN_1800bdda4(FILE *param_1,longlong *param_2)

{
  uint *puVar1;
  WCHAR *pWVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = *(uint *)((longlong)&param_1->_base + 4);
  if ((((byte)uVar4 & 3) == 2) && ((uVar4 & 0xc0) != 0)) {
    uVar4 = *(int *)&param_1->_ptr - param_1->_cnt;
    *(undefined4 *)&param_1->_base = 0;
    pWVar2 = *(WCHAR **)&param_1->_cnt;
    param_1->_ptr = (char *)pWVar2;
    if (0 < (int)uVar4) {
      uVar3 = _fileno(param_1);
      uVar3 = FUN_1800c5918(uVar3,pWVar2,uVar4,param_2);
      if (uVar4 != uVar3) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) != 0) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}


int FUN_1800bde30(FILE *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  if (param_1 == (FILE *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_1800bdeb5;
  }
  uVar2 = FUN_1800bdda4(param_1,local_48);
  if ((int)uVar2 == 0) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xb & 1) != 0) {
      iVar1 = _fileno(param_1);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_1800bde90;
    }
    iVar1 = 0;
  }
  else {
LAB_1800bde90:
    iVar1 = -1;
  }
LAB_1800bdeb5:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar3 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar3 + 0x24) = local_14;
  }
  return iVar1;
}


int __cdecl common_flush_all(bool param_1)

{
  int iVar1;

  iVar1 = common_flush_all(true);
  return iVar1;
}


// Library Function - Single Match
//  fflush
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl fflush(FILE *_File)

{
  uint uVar1;
  int iVar2;
  undefined1 local_res8 [8];
  FILE *local_res10;
  FILE *local_res18;
  FILE **local_res20;
  FILE *local_18 [3];

  local_res10 = _File;
  if (_File == (FILE *)0x0) {
    iVar2 = common_flush_all(false);
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4);
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      local_res20 = &local_res10;
      local_res18 = _File;
      local_18[0] = _File;
      iVar2 = FUN_1800bdd04(local_res8,(longlong *)local_18,&local_res20,(longlong *)&local_res18);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}


ulonglong FUN_1800bdf78(undefined1 (*param_1) [32],ulonglong param_2,ulonglong param_3,
                       ulonglong param_4,FILE *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [32];

  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_1 != (undefined1 (*) [32])0x0) {
      if ((param_5 != (FILE *)0x0) && (param_4 <= 0xffffffffffffffff / param_3)) {
LAB_1800be013:
        if (((ulonglong)param_5->_base & 0x4c000000000) == 0) {
          uVar8 = 0x1000;
        }
        else {
          uVar8 = param_5->_charbuf;
        }
        uVar7 = param_3 * param_4;
        pauVar9 = param_1;
        uVar6 = param_2;
        do {
          while( true ) {
            if (uVar7 == 0) {
              return param_4;
            }
            if (((ulonglong)param_5->_base & 0x4c000000000) != 0) break;
LAB_1800be0f1:
            if (uVar8 <= uVar7) {
              uVar5 = uVar7 & 0xffffffff;
              if (0x7fffffff < uVar7) {
                uVar5 = 0x7fffffff;
              }
              if (uVar8 != 0) {
                uVar5 = (ulonglong)(uint)((int)uVar5 - (int)(uVar5 % (ulonglong)uVar8));
              }
              if (uVar5 <= uVar6) {
                *(undefined4 *)&param_5->_base = 0;
                param_5->_ptr = *(char **)&param_5->_cnt;
                uVar2 = _fileno(param_5);
                iVar3 = FUN_1800c9380(uVar2,(LPWSTR)pauVar9,(uint)uVar5);
                if (iVar3 == 0) {
                  LOCK();
                  puVar1 = (uint *)((longlong)&param_5->_base + 4);
                  *puVar1 = *puVar1 | 8;
                  UNLOCK();
                  goto LAB_1800be1d2;
                }
                if (-1 < iVar3) {
                  uVar5 = (ulonglong)iVar3;
                  goto LAB_1800be0e1;
                }
                goto LAB_1800be1c6;
              }
              goto LAB_1800be1a3;
            }
            uVar5 = FUN_1800c97e0(param_5);
            if ((int)uVar5 == -1) goto LAB_1800be1d2;
            if (uVar6 == 0) goto LAB_1800be1a3;
            (*pauVar9)[0] = (char)uVar5;
            uVar7 = uVar7 - 1;
            uVar8 = param_5->_charbuf;
            pauVar9 = (undefined1 (*) [32])(*pauVar9 + 1);
            uVar6 = uVar6 - 1;
          }
          uVar2 = *(uint *)&param_5->_base;
          if (uVar2 == 0) goto LAB_1800be0f1;
          if ((int)uVar2 < 0) {
LAB_1800be1c6:
            LOCK();
            puVar1 = (uint *)((longlong)&param_5->_base + 4);
            *puVar1 = *puVar1 | 0x10;
            UNLOCK();
LAB_1800be1d2:
            return (param_3 * param_4 - uVar7) / param_3;
          }
          if (uVar7 < (ulonglong)(longlong)(int)uVar2) {
            uVar2 = (uint)uVar7;
          }
          if (uVar6 < uVar2) {
LAB_1800be1a3:
            if (param_2 != 0xffffffffffffffff) {
              FUN_1800d22d0(param_1,0,param_2);
            }
            p_Var4 = FUN_1800c2350();
            *(undefined4 *)p_Var4 = 0x22;
            goto LAB_1800bdfbc;
          }
          if (uVar2 != 0) {
            if (pauVar9 != (undefined1 (*) [32])0x0) {
              if (param_5->_ptr != (char *)0x0) {
                FUN_1800d1c20((undefined8 *)pauVar9,(undefined8 *)param_5->_ptr,(ulonglong)uVar2);
                goto LAB_1800be0c8;
              }
              FUN_1800d22d0(pauVar9,0,uVar6);
            }
            p_Var4 = FUN_1800c2350();
            *(undefined4 *)p_Var4 = 0x16;
            FUN_1800c2ac4();
          }
LAB_1800be0c8:
          *(uint *)&param_5->_base = *(int *)&param_5->_base - uVar2;
          uVar5 = (ulonglong)uVar2;
          param_5->_ptr = param_5->_ptr + uVar2;
LAB_1800be0e1:
          uVar7 = uVar7 - uVar5;
          pauVar9 = (undefined1 (*) [32])(*pauVar9 + uVar5);
          uVar6 = uVar6 - uVar5;
        } while( true );
      }
      if (param_2 != 0xffffffffffffffff) {
        FUN_1800d22d0(param_1,0,param_2);
      }
      if ((param_5 != (FILE *)0x0) && (param_4 <= 0xffffffffffffffff / param_3)) goto LAB_1800be013;
    }
    p_Var4 = FUN_1800c2350();
    *(undefined4 *)p_Var4 = 0x16;
LAB_1800bdfbc:
    FUN_1800c2ac4();
  }
  return 0;
}


// Library Function - Single Match
//  fread
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;

  sVar1 = fread_s(_DstBuf,0xffffffffffffffff,_ElementSize,_Count,_File);
  return sVar1;
}


// Library Function - Single Match
//  fread_s
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;

  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_1800bdb6c((longlong)_File);
      uVar2 = FUN_1800bdf78(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_1800bdb78((longlong)_File);
      return uVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_1800d22d0(_DstBuf,0,_DstSize);
    }
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
  }
  return 0;
}


int FUN_1800be2b8(FILE *param_1,LARGE_INTEGER param_2,uint param_3,longlong *param_4)

{
  int iVar1;

  if ((param_1 == (FILE *)0x0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    iVar1 = -1;
  }
  else {
    FUN_1800bdb6c((longlong)param_1);
    iVar1 = FUN_1800be450(param_1,param_2,param_3,param_4);
    FUN_1800bdb78((longlong)param_1);
  }
  return iVar1;
}


ulonglong FUN_1800be354(longlong *param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;

  if ((((param_3 != 2) &&
       (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
       (*(uint *)((longlong)param_1 + 0x14) & 0x4c0) != 0)) &&
      (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
      (*(uint *)((longlong)param_1 + 0x14) & 6) == 0)) && (0 < (int)param_1[2])) {
    uVar1 = *(uint *)(param_1 + 3);
    in_RAX = (longlong)(int)uVar1 >> 6;
    if ((-1 < *(char *)((&DAT_180115f70)[in_RAX] + 0x38 + (ulonglong)(uVar1 & 0x3f) * 0x48)) &&
       (*(char *)((&DAT_180115f70)[in_RAX] + 0x39 + (ulonglong)(uVar1 & 0x3f) * 0x48) == '\0')) {
      if (param_3 == 0) {
        in_RAX = FUN_1800c9bc0(uVar1,(LARGE_INTEGER)0x0,1);
        if ((longlong)in_RAX < 0) goto LAB_1800be43c;
        lVar3 = in_RAX - (longlong)(int)param_1[2];
        in_RAX = param_2 - lVar3;
        iVar2 = (int)((longlong)param_2 >> 0x3f);
        if ((-iVar2 != -(int)(lVar3 >> 0x3f)) && (-(uint)(0x7fffffffffffffff < in_RAX) != iVar2))
        goto LAB_1800be43c;
        param_2 = in_RAX;
      }
      if ((param_1[1] - *param_1 <= (longlong)param_2) &&
         ((longlong)param_2 <= (longlong)(int)param_1[2])) {
        *param_1 = *param_1 + param_2;
        *(int *)(param_1 + 2) = (int)param_1[2] - (int)param_2;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_1800be43c:
  return in_RAX & 0xffffffffffffff00;
}


int FUN_1800be450(FILE *param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;

  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) == 0) {
    *(undefined1 *)(param_4 + 6) = 1;
    iVar2 = -1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
  }
  else {
    LOCK();
    puVar1 = (uint *)((longlong)&param_1->_base + 4);
    *puVar1 = *puVar1 & 0xfffffff7;
    UNLOCK();
    uVar3 = FUN_1800be354((longlong *)param_1,param_2.QuadPart,param_3);
    if ((char)uVar3 == '\0') {
      if (param_3 == 1) {
        uVar3 = thunk_FUN_1800be66c(param_1,param_4);
        param_2.QuadPart = param_2.QuadPart + uVar3;
        param_3 = 0;
      }
      FUN_1800bdda4(param_1,param_4);
      param_1->_ptr = *(char **)&param_1->_cnt;
      *(undefined4 *)&param_1->_base = 0;
      if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) == 0) {
        if ((((byte)*(undefined4 *)((longlong)&param_1->_base + 4) & 0x41) == 0x41) &&
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x200;
        }
      }
      else {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffc;
        UNLOCK();
      }
      lVar4 = thunk_FUN_1800c9a6c(param_1->_flag,param_2,param_3,(longlong)param_4);
      iVar2 = (lVar4 != -1) - 1;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}


int FUN_1800be540(FILE *param_1,int param_2,uint param_3)

{
  int iVar1;
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
  iVar1 = FUN_1800be2b8(param_1,(LARGE_INTEGER)(longlong)param_2,param_3,local_48);
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
  return iVar1;
}


ulonglong FUN_1800be5dc(FILE *param_1,longlong *param_2)

{
  ulonglong uVar1;

  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_1800bdb6c((longlong)param_1);
    uVar1 = FUN_1800be66c(param_1,param_2);
    if (0x7fffffff < (longlong)uVar1) {
      *(undefined1 *)(param_2 + 6) = 1;
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
      uVar1 = 0xffffffff;
    }
    FUN_1800bdb78((longlong)param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}


ulonglong FUN_1800be66c(FILE *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  LARGE_INTEGER LVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;

  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    uVar2 = _fileno(param_1);
    if (*(int *)&param_1->_base < 0) {
      *(undefined4 *)&param_1->_base = 0;
    }
    LVar3.QuadPart = thunk_FUN_1800c994c(uVar2,(LARGE_INTEGER)0x0,1,param_2);
    if (-1 < LVar3.QuadPart) {
      if (((ulonglong)param_1->_base & 0xc000000000) == 0) {
        return LVar3.QuadPart - *(int *)&param_1->_base;
      }
      uVar6 = (longlong)param_1->_ptr - *(longlong *)&param_1->_cnt;
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_180115f70)[lVar5] + 0x39 + uVar4 * 0x48);
      if (((ulonglong)param_1->_base & 0x300000000) == 0) {
        if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 6) = 1;
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)((&DAT_180115f70)[lVar5] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          LVar3 = FUN_1800be918(param_1,LVar3,param_2);
          return LVar3.QuadPart;
        }
        if (*(char *)((&DAT_180115f70)[lVar5] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = FUN_1800beaa0(*(short **)&param_1->_cnt,(short *)param_1->_ptr,cVar1);
          uVar6 = uVar6 + lVar5;
        }
      }
      if (LVar3.QuadPart == 0) {
        return uVar6;
      }
      if (((ulonglong)param_1->_base & 0x100000000) != 0) {
        LVar3 = FUN_1800be7bc(param_1,LVar3,uVar6,param_2);
        return LVar3.QuadPart;
      }
      if (cVar1 == '\x01') {
        uVar6 = uVar6 >> 1;
      }
      return uVar6 + LVar3.QuadPart;
    }
  }
  return 0xffffffffffffffff;
}


LARGE_INTEGER FUN_1800be7bc(FILE *param_1,LARGE_INTEGER param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  bool bVar8;

  uVar2 = _fileno(param_1);
  uVar4 = (ulonglong)(uVar2 & 0x3f);
  cVar1 = *(char *)((&DAT_180115f70)[(longlong)(int)uVar2 >> 6] + 0x39 + uVar4 * 0x48);
  lVar7 = (ulonglong)(cVar1 == '\x01') + 1;
  if (*(int *)&param_1->_base != 0) {
    pcVar6 = param_1->_ptr + ((longlong)*(int *)&param_1->_base - *(longlong *)&param_1->_cnt);
    if (*(char *)((&DAT_180115f70)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) < '\0') {
      lVar3 = thunk_FUN_1800c994c(uVar2,(LARGE_INTEGER)0x0,2,param_4);
      if (lVar3 == param_2.QuadPart) {
        lVar3 = FUN_1800beaa0(*(short **)&param_1->_cnt,
                              (short *)((longlong)*(short **)&param_1->_cnt + (longlong)pcVar6),
                              cVar1);
        pcVar5 = pcVar6 + lVar3;
        bVar8 = (*(uint *)((longlong)&param_1->_base + 4) >> 5 & 1) == 0;
      }
      else {
        lVar3 = thunk_FUN_1800c994c(uVar2,param_2,0,param_4);
        if (lVar3 == -1) {
          return (LARGE_INTEGER)-1;
        }
        pcVar5 = (char *)0x200;
        if (((0x200 < (longlong)pcVar6) ||
            ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) == 0)) ||
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) != 0)) {
          pcVar5 = (char *)(longlong)param_1->_charbuf;
        }
        bVar8 = (*(byte *)((&DAT_180115f70)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) & 4)
                == 0;
      }
      pcVar6 = pcVar5;
      if (!bVar8) {
        pcVar6 = pcVar5 + (ulonglong)((byte)(cVar1 - 1U) < 2) + 1;
      }
    }
    param_2.QuadPart = (param_3 / lVar7 - (longlong)pcVar6 / lVar7) + param_2.QuadPart;
  }
  return param_2;
}


// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

LARGE_INTEGER FUN_1800be918(FILE *param_1,LARGE_INTEGER param_2,longlong *param_3)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined1 auStackY_1088 [32];
  DWORD local_1058 [3];
  byte abStack_1049 [4097];
  ulonglong local_48;
  undefined8 uStack_40;

  uStack_40 = 0x1800be932;
  local_48 = DAT_180112300 ^ (ulonglong)auStackY_1088;
  uVar1 = _fileno(param_1);
  lVar8 = 0;
  if (*(int *)&param_1->_base != 0) {
    uVar6 = (ulonglong)(uVar1 & 0x3f);
    lVar3 = ((longlong)param_1->_ptr - *(longlong *)&param_1->_cnt) / 2;
    lVar4 = thunk_FUN_1800c994c(uVar1,(LARGE_INTEGER)
                                      *(_struct_19 *)
                                       ((&DAT_180115f70)[(longlong)(int)uVar1 >> 6] + 0x30 +
                                       uVar6 * 0x48),0,param_3);
    if (lVar4 == *(longlong *)((&DAT_180115f70)[(longlong)(int)uVar1 >> 6] + 0x30 + uVar6 * 0x48)) {
      local_1058[0] = 0;
      BVar2 = ReadFile(*(HANDLE *)
                        ((&DAT_180115f70)[(longlong)(int)uVar1 >> 6] + 0x28 + uVar6 * 0x48),
                       abStack_1049 + 1,0x1000,local_1058,(LPOVERLAPPED)0x0);
      if (((BVar2 != 0) && (lVar5 = thunk_FUN_1800c994c(uVar1,param_2,0,param_3), -1 < lVar5)) &&
         (uVar6 = (ulonglong)local_1058[0], lVar3 <= (longlong)uVar6)) {
        pbVar7 = abStack_1049 + 1;
        if (lVar3 != 0) {
          do {
            if (abStack_1049 + uVar6 + 1 <= pbVar7) break;
            if (*pbVar7 == 0xd) {
              if ((pbVar7 < abStack_1049 + uVar6) && (pbVar7[1] == 10)) {
                pbVar7 = pbVar7 + 1;
              }
            }
            else {
              pbVar7 = pbVar7 + (char)(&DAT_180112680)[*pbVar7];
            }
            lVar8 = lVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (lVar8 != lVar3);
        }
        return (LARGE_INTEGER)(LONGLONG)(pbVar7 + (lVar4 - (longlong)(abStack_1049 + 1)));
      }
    }
    param_2.QuadPart = -1;
  }
  return param_2;
}


longlong FUN_1800beaa0(short *param_1,short *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;

  if ((byte)(param_3 - 1U) < 2) {
    lVar2 = 0;
    for (; param_1 != param_2; param_1 = param_1 + 1) {
      lVar1 = lVar2 + 1;
      if (*param_1 != 10) {
        lVar1 = lVar2;
      }
      lVar2 = lVar1;
    }
    return lVar2 * 2;
  }
  lVar2 = 0;
  for (; param_1 != param_2; param_1 = (short *)((longlong)param_1 + 1)) {
    lVar1 = lVar2 + 1;
    if ((char)*param_1 != '\n') {
      lVar1 = lVar2;
    }
    lVar2 = lVar1;
  }
  return lVar2;
}


ulonglong thunk_FUN_1800be66c(FILE *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  LARGE_INTEGER LVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;

  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    uVar2 = _fileno(param_1);
    if (*(int *)&param_1->_base < 0) {
      *(undefined4 *)&param_1->_base = 0;
    }
    LVar3.QuadPart = thunk_FUN_1800c994c(uVar2,(LARGE_INTEGER)0x0,1,param_2);
    if (-1 < LVar3.QuadPart) {
      if (((ulonglong)param_1->_base & 0xc000000000) == 0) {
        return LVar3.QuadPart - *(int *)&param_1->_base;
      }
      uVar6 = (longlong)param_1->_ptr - *(longlong *)&param_1->_cnt;
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_180115f70)[lVar5] + 0x39 + uVar4 * 0x48);
      if (((ulonglong)param_1->_base & 0x300000000) == 0) {
        if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 6) = 1;
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)((&DAT_180115f70)[lVar5] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          LVar3 = FUN_1800be918(param_1,LVar3,param_2);
          return LVar3.QuadPart;
        }
        if (*(char *)((&DAT_180115f70)[lVar5] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = FUN_1800beaa0(*(short **)&param_1->_cnt,(short *)param_1->_ptr,cVar1);
          uVar6 = uVar6 + lVar5;
        }
      }
      if (LVar3.QuadPart == 0) {
        return uVar6;
      }
      if (((ulonglong)param_1->_base & 0x100000000) != 0) {
        LVar3 = FUN_1800be7bc(param_1,LVar3,uVar6,param_2);
        return LVar3.QuadPart;
      }
      if (cVar1 == '\x01') {
        uVar6 = uVar6 >> 1;
      }
      return uVar6 + LVar3.QuadPart;
    }
  }
  return 0xffffffffffffffff;
}


ulonglong FUN_1800beb00(FILE *param_1)

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
  uVar1 = FUN_1800be5dc(param_1,local_48);
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


LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;

  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_180116728,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_1800cdf00();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1800c06e0(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_1800c2350();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800bebc0(undefined1 *param_1,ulonglong param_2,ulonglong param_3,undefined *param_4)

{
  undefined1 uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined8 local_438 [62];
  undefined8 local_248 [62];
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (undefined *)0x0)) {
    p_Var3 = FUN_1800c2350();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_1800c2ac4();
  }
  else {
    FUN_1800c9c64();
    FUN_1800d22d0((undefined1 (*) [32])local_438,0,0x1f0);
    FUN_1800d22d0((undefined1 (*) [32])local_248,0,0x1f0);
    if (1 < param_2) {
      local_448 = 0;
      puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_1800bec80:
      uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1;
      if (8 < uVar9) {
        lVar5 = (uVar9 >> 1) * param_3;
        puVar4 = param_1 + lVar5;
        iVar2 = (*(code *)param_4)(param_1,puVar4);
        if (0 < iVar2) {
          puVar6 = puVar4;
          uVar9 = param_3;
          if (param_1 != puVar4) {
            do {
              uVar1 = puVar6[-lVar5];
              puVar6[-lVar5] = *puVar6;
              *puVar6 = uVar1;
              uVar9 = uVar9 - 1;
              puVar6 = puVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        iVar2 = (*(code *)param_4)(param_1,puVar10);
        if ((0 < iVar2) && (param_1 != puVar10)) {
          puVar6 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar6[(longlong)param_1 - (longlong)puVar10];
            puVar6[(longlong)param_1 - (longlong)puVar10] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar2 = (*(code *)param_4)(puVar4);
        if ((0 < iVar2) && (puVar4 != puVar10)) {
          puVar6 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar6[(longlong)puVar4 - (longlong)puVar10];
            puVar6[(longlong)puVar4 - (longlong)puVar10] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar6 = param_1;
        puVar8 = puVar10;
        do {
          if (puVar6 < puVar4) {
            do {
              puVar6 = puVar6 + param_3;
              if (puVar4 <= puVar6) goto LAB_1800bee10;
              iVar2 = (*(code *)param_4)(puVar6);
            } while (iVar2 < 1);
          }
          else {
LAB_1800bee10:
            do {
              puVar6 = puVar6 + param_3;
              if (puVar10 < puVar6) break;
              iVar2 = (*(code *)param_4)(puVar6);
            } while (iVar2 < 1);
          }
          do {
            puVar7 = puVar8;
            puVar8 = puVar7 + -param_3;
            if (puVar8 <= puVar4) break;
            iVar2 = (*(code *)param_4)(puVar8);
          } while (0 < iVar2);
          if (puVar8 < puVar6) goto LAB_1800bee7a;
          if (puVar8 != puVar6) {
            puVar7 = puVar8;
            uVar9 = param_3;
            do {
              uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar8];
              puVar7[(longlong)puVar6 - (longlong)puVar8] = *puVar7;
              *puVar7 = uVar1;
              puVar7 = puVar7 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar7 = puVar6;
          if (puVar4 != puVar8) {
            puVar7 = puVar4;
          }
          puVar4 = puVar7;
        } while( true );
      }
      puVar6 = param_1;
      puVar4 = param_1;
      if (param_1 < puVar10) {
        do {
          while( true ) {
            puVar8 = puVar6;
            puVar4 = puVar4 + param_3;
            if (puVar10 < puVar4) break;
            iVar2 = (*(code *)param_4)(puVar4,puVar8);
            puVar6 = puVar4;
            if (iVar2 < 1) {
              puVar6 = puVar8;
            }
          }
          if (puVar8 != puVar10) {
            puVar4 = puVar10;
            uVar9 = param_3;
            do {
              uVar1 = puVar4[(longlong)puVar8 - (longlong)puVar10];
              puVar4[(longlong)puVar8 - (longlong)puVar10] = *puVar4;
              *puVar4 = uVar1;
              puVar4 = puVar4 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar10 = puVar10 + -param_3;
          puVar6 = param_1;
          puVar4 = param_1;
        } while (param_1 < puVar10);
      }
      goto LAB_1800bed03;
    }
  }
  return;
LAB_1800bee7a:
  if (puVar4 < puVar7) {
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= puVar4) goto LAB_1800bee97;
      iVar2 = (*(code *)param_4)(puVar7);
    } while (iVar2 == 0);
  }
  else {
LAB_1800bee97:
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= param_1) break;
      iVar2 = (*(code *)param_4)(puVar7);
    } while (iVar2 == 0);
  }
  if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar6) {
    if (puVar6 < puVar10) {
      local_438[local_448] = puVar6;
      local_248[local_448] = puVar10;
      local_448 = local_448 + 1;
    }
    if (param_1 < puVar7) {
      puVar10 = puVar7;
      goto LAB_1800bec80;
    }
  }
  else {
    if (param_1 < puVar7) {
      local_438[local_448] = param_1;
      local_248[local_448] = puVar7;
      local_448 = local_448 + 1;
    }
    if (puVar6 < puVar10) {
      param_1 = puVar6;
      goto LAB_1800bec80;
    }
  }
LAB_1800bed03:
  local_448 = local_448 + -1;
  if (local_448 < 0) {
    return;
  }
  param_1 = (undefined1 *)local_438[local_448];
  puVar10 = (undefined1 *)local_248[local_448];
  goto LAB_1800bec80;
}


ulonglong FUN_1800bef60(float param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined1 extraout_var [60];
  undefined1 auVar5 [64];
  undefined1 extraout_var_00 [60];
  undefined1 auVar6 [64];
  undefined1 extraout_var_01 [60];
  undefined1 auVar7 [64];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 in_stack_ffffffffffffffc4;

  if (((byte)DAT_1801163a0 & 3) != 3) {
    auVar5._0_4_ = FUN_1800bef80(param_1);
    auVar5._4_60_ = extraout_var;
    return auVar5._0_8_;
  }
  uVar4 = (uint)param_1 >> 0x17 & 0xff;
  fVar8 = 0.0;
  if (0x7f800000 < (uint)ABS(param_1)) {
    auVar6._0_4_ = FUN_1800cff20((uint)param_1);
    auVar6._4_60_ = extraout_var_00;
    return auVar6._0_8_;
  }
  if (uVar4 < 0x65) {
    FUN_1800c7e00(0x20);
    return SUB648(ZEXT464(0x3fc90fdb),0);
  }
  if (0x7e < uVar4) {
    if (param_1 == 1.0) {
      return 0;
    }
    if (param_1 == -1.0) {
      FUN_1800c7e00(0x20);
      return SUB648(ZEXT464(0x40490fdb),0);
    }
    auVar7._0_4_ = FUN_1800c76c0("acosf",0xd,-NAN,1,8,CONCAT44(in_stack_ffffffffffffffc4,0x21),
                                 param_1,0.0,1);
    auVar7._4_60_ = extraout_var_01;
    return auVar7._0_8_;
  }
  fVar9 = param_1;
  if ((int)param_1 < 0) {
    fVar9 = -param_1;
  }
  if (uVar4 < 0x7e) {
    fVar2 = fVar9 * fVar9;
  }
  else {
    fVar2 = (1.0 - fVar9) * 0.5;
    fVar9 = SQRT(fVar2);
    fVar8 = fVar9;
  }
  fVar10 = ((fVar2 * (fVar2 * (-(fVar2 * 0.0039613745) + -0.013381929) - 0.05652987) + 0.1841616) *
           fVar2) / (-(fVar2 * 0.8364113) + 1.1049696);
  if (uVar4 < 0x7e) {
    dVar1 = 1.5707963267948966 -
            ((double)param_1 - (6.123233995736766e-17 - (double)(fVar10 * param_1)));
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
  if ((int)param_1 < 0) {
    dVar1 = ((double)(fVar9 * fVar10) - 6.123233995736766e-17) + (double)fVar8;
    dVar1 = 3.141592653589793 - (dVar1 + dVar1);
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
  fVar3 = (float)((uint)fVar8 & 0xffff0000);
  fVar8 = (-(fVar3 * fVar3) + fVar2) / (fVar3 + fVar8);
  return (ulonglong)(uint)(fVar10 * (fVar9 + fVar9) + fVar8 + fVar8 + fVar3 + fVar3);
}


float FUN_1800bef80(float param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_stack_ffffffffffffffc4;

  fVar5 = 0.0;
  uVar2 = (uint)param_1 >> 0x17 & 0xff;
  if (0x7f800000 < (uint)ABS(param_1)) {
    fVar5 = (float)FUN_1800c7820((uint)param_1);
    return fVar5;
  }
  if (uVar2 < 0x65) {
    FUN_1800c7e00(0x20);
    return 1.5707964;
  }
  if (uVar2 < 0x7f) {
    fVar3 = param_1;
    if ((int)param_1 < 0) {
      fVar3 = -param_1;
    }
    if (uVar2 < 0x7e) {
      fVar4 = fVar3 * fVar3;
    }
    else {
      fVar4 = (1.0 - fVar3) * 0.5;
      fVar5 = SQRT(fVar4);
      fVar3 = fVar5;
    }
    fVar6 = ((((-0.013381929 - fVar4 * 0.0039613745) * fVar4 - 0.05652987) * fVar4 + 0.1841616) *
            fVar4) / (1.1049696 - fVar4 * 0.8364113);
    if (uVar2 < 0x7e) {
      return 1.5707964 - (param_1 - (6.123234e-17 - fVar6 * param_1));
    }
    if ((int)param_1 < 0) {
      fVar5 = (fVar3 * fVar6 - 6.123234e-17) + fVar5;
      return 3.1415927 - (fVar5 + fVar5);
    }
    fVar1 = (float)((uint)fVar5 & 0xffff0000);
    fVar5 = (fVar4 - fVar1 * fVar1) / (fVar1 + fVar5);
    return (fVar3 + fVar3) * fVar6 + fVar5 + fVar5 + fVar1 + fVar1;
  }
  if (param_1 == 1.0) {
    return 0.0;
  }
  if (param_1 == -1.0) {
    FUN_1800c7e00(0x20);
    return 3.1415927;
  }
  fVar5 = FUN_1800c76c0("acosf",0xd,-NAN,1,8,CONCAT44(in_stack_ffffffffffffffc4,0x21),param_1,0.0,1)
  ;
  return fVar5;
}


undefined8 FUN_1800bf1a0(float param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  double dVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_register_00001204 [60];
  undefined1 extraout_var [60];
  undefined1 extraout_var_00 [60];
  undefined1 in_register_00001244 [60];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  double dVar19;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];

  if (((byte)DAT_1801163a0 & 3) != 3) {
    auVar23._0_4_ = FUN_1800bf1c0(param_1,param_2);
    auVar23._4_60_ = extraout_var;
    return auVar23._0_8_;
  }
  auVar24._0_8_ = (double)param_2;
  auVar24._8_8_ = in_register_00001244._4_8_;
  auVar26 = ZEXT1664(auVar24);
  auVar20._0_8_ = (double)param_1;
  auVar20._8_8_ = in_register_00001204._4_8_;
  auVar23 = ZEXT1664(auVar20);
  iVar6 = ((uint)((ulonglong)auVar20._0_8_ >> 0x34) & 0x7ff) -
          ((uint)((ulonglong)auVar24._0_8_ >> 0x34) & 0x7ff);
  dVar8 = ABS(auVar24._0_8_);
  dVar5 = ABS(auVar20._0_8_);
  if (0x7ff0000000000000 < (ulonglong)dVar8) {
LAB_1800c9f09:
    auVar26._0_4_ = FUN_1800cff20((uint)param_2);
    auVar26._4_60_ = extraout_var_00;
    return auVar26._0_8_;
  }
  if (0x7ff0000000000000 < (ulonglong)dVar5) {
    param_2 = param_1;
    goto LAB_1800c9f09;
  }
  if (dVar5 == 0.0) {
    if (-1 < (longlong)auVar24._0_8_) {
      auVar9._4_12_ = auVar20._4_12_;
      auVar9._0_4_ = param_1;
      return auVar9._0_8_;
    }
  }
  else {
    auVar22 = auVar20;
    auVar11 = auVar24;
    if (dVar8 == 0.0) {
      FUN_1800c7e00(0x20);
      auVar11 = auVar26._0_16_;
      auVar22 = auVar23._0_16_;
      if ((longlong)auVar20._0_8_ < 0) goto LAB_1800c9f6e;
    }
    if (0x1a < iVar6) {
      FUN_1800c7e00(0x20);
      if (-1 < (longlong)auVar20._0_8_) {
        return SUB648(ZEXT464(0x3fc90fdb),0);
      }
LAB_1800c9f6e:
      return SUB648(ZEXT464(0xbfc90fdb),0);
    }
    dVar19 = auVar22._0_8_;
    dVar14 = auVar11._0_8_;
    if ((iVar6 < -0xd) && (-1 < (longlong)auVar24._0_8_)) {
      if (-0x97 < iVar6) {
        if (-0x7f < iVar6) {
          auVar11._0_8_ = dVar19 / dVar14;
          auVar11._8_8_ = auVar22._8_8_;
          auVar12._0_4_ = (float)auVar11._0_8_;
          auVar12._4_12_ = auVar11._4_12_;
          return auVar12._0_8_;
        }
        dVar14 = (dVar19 * 1.2676506002282294e+30) / dVar14;
        uVar3 = (uint)((ulonglong)ABS(dVar14) >> 0x20);
        uVar2 = uVar3 >> 0x14;
        uVar3 = uVar3 >> 0x14;
        if (uVar2 < 0x65) {
          if ((int)(0x65 - uVar2) < 0x37) {
            uVar4 = ((ulonglong)dVar14 & 0x1fffffffffffff | 0x10000000000000) >>
                    (100 - (ulonglong)uVar3 & 0x3f);
            uVar4 = (uVar4 >> 1) + (ulonglong)((uint)uVar4 & 1);
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = (ulonglong)uVar3 - 100 << 0x34 | (ulonglong)dVar14 & 0xfffffffffffff;
        }
        uVar7 = (ulonglong)dVar14 & 0x8000000000000000 | uVar4;
        auVar23 = ZEXT864(uVar7);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar7;
        if ((uVar4 & 0x7ff0000000000000) == 0) {
          FUN_1800c7e00(0x30);
          auVar21 = auVar23._0_16_;
        }
        auVar10._0_4_ = (float)auVar21._0_8_;
        auVar10._4_12_ = auVar21._4_12_;
        return auVar10._0_8_;
      }
      FUN_1800c7e00(0x30);
      if ((longlong)auVar20._0_8_ < 0) {
        return SUB648(ZEXT464(0x80000000),0);
      }
      return 0;
    }
    if ((-0x1b < iVar6) || (-1 < (longlong)auVar24._0_8_)) {
      if ((dVar5 != INFINITY) || (dVar8 != INFINITY)) {
        auVar25 = auVar11;
        if ((longlong)auVar24._0_8_ < 0) {
          auVar25._0_8_ = -dVar14;
          auVar25._8_8_ = auVar11._8_8_;
        }
        if ((longlong)auVar20._0_8_ < 0) {
          auVar22._0_8_ = -dVar19;
        }
        bVar1 = auVar25._0_8_ < auVar22._0_8_;
        auVar15._0_8_ = -(ulonglong)!bVar1;
        auVar15._8_8_ = 0xffffffffffffffff;
        auVar11 = vblendvpd_avx(auVar25,auVar22,auVar15);
        auVar16._0_8_ = -(ulonglong)!bVar1;
        auVar16._8_8_ = 0xffffffffffffffff;
        auVar22 = vblendvpd_avx(auVar22,auVar25,auVar16);
        dVar5 = auVar22._0_8_;
        dVar8 = auVar11._0_8_;
        auVar17._0_8_ = dVar8 / dVar5;
        auVar17._8_8_ = auVar11._8_8_;
        if (auVar17._0_8_ <= 0.0625) {
          if (0.0001 <= auVar17._0_8_) {
            dVar5 = auVar17._0_8_ * auVar17._0_8_;
            auVar17._0_8_ =
                 -(dVar5 * auVar17._0_8_ *
                  (-(dVar5 * (-(dVar5 * 0.1428571356180717) + 0.19999999999393223)) +
                  0.3333333333333317)) + auVar17._0_8_;
          }
        }
        else {
          uVar3 = (uint)(auVar17._0_8_ * 256.0 + 0.5);
          dVar14 = (double)uVar3;
          dVar5 = (dVar8 * 256.0 - dVar5 * dVar14) / (dVar8 * dVar14 + dVar5 * 256.0);
          auVar17._0_8_ =
               -(dVar5 * dVar5 * dVar5 * 0.33333333333224097) +
               dVar5 + *(double *)(&DAT_1800f93c0 + (ulonglong)(uVar3 - 0x10) * 8);
          auVar17._8_8_ = 0;
        }
        if (bVar1) {
          dVar5 = auVar17._0_8_;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = 1.5707963267948966 - dVar5;
        }
        if ((longlong)auVar24._0_8_ < 0) {
          dVar5 = auVar17._0_8_;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = 3.141592653589793 - dVar5;
        }
        auVar18 = auVar17;
        if ((longlong)auVar20._0_8_ < 0) {
          auVar18._0_8_ = auVar17._0_8_ ^ 0x8000000000000000;
          auVar18._8_8_ = auVar17._8_8_;
        }
        auVar13._0_4_ = (float)auVar18._0_8_;
        auVar13._4_12_ = auVar18._4_12_;
        return auVar13._0_8_;
      }
      FUN_1800c7e00(0x20);
      if (-1 < (longlong)auVar24._0_8_) {
        if ((longlong)auVar20._0_8_ < 0) {
          return SUB648(ZEXT464(0xbf490fdb),0);
        }
        return SUB648(ZEXT464(0x3f490fdb),0);
      }
      if ((longlong)auVar20._0_8_ < 0) {
        return SUB648(ZEXT464(0xc016cbe4),0);
      }
      return SUB648(ZEXT464(0x4016cbe4),0);
    }
  }
  FUN_1800c7e00(0x20);
  if ((longlong)auVar20._0_8_ < 0) {
    return SUB648(ZEXT464(0xc0490fdb),0);
  }
  return SUB648(ZEXT464(0x40490fdb),0);
}


float FUN_1800bf1c0(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uVar12;
  uint uVar13;

  dVar9 = (double)param_2;
  uVar12 = SUB84(dVar9,0);
  uVar13 = (uint)((ulonglong)dVar9 >> 0x20);
  dVar11 = (double)param_1;
  iVar6 = ((uint)((ulonglong)dVar11 >> 0x34) & 0x7ff) - (uVar13 >> 0x14 & 0x7ff);
  dVar7 = ABS(dVar9);
  dVar5 = ABS(dVar11);
  if ((0x7ff0000000000000 < (ulonglong)dVar7) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar5)) {
    fVar8 = (float)FUN_1800c7820((uint)param_2);
    return fVar8;
  }
  if (dVar5 == 0.0) {
    if ((longlong)dVar9 < 0) {
joined_r0x0001800bf3f5:
      if ((longlong)dVar11 < 0) {
        FUN_1800c7e00(0x20);
        return -3.1415927;
      }
      FUN_1800c7e00(0x20);
      return 3.1415927;
    }
LAB_1800bf3d2:
    return (float)dVar11;
  }
  if (dVar7 == 0.0) {
    if ((longlong)dVar11 < 0) goto LAB_1800bf2ae;
    FUN_1800c7e00(0x20);
  }
  if (0x1a < iVar6) {
    if (-1 < (longlong)dVar11) {
      FUN_1800c7e00(0x20);
      return 1.5707964;
    }
LAB_1800bf2ae:
    FUN_1800c7e00(0x20);
    return -1.5707964;
  }
  if ((iVar6 < -0xd) && (-1 < (longlong)dVar9)) {
    if (iVar6 < -0x96) {
      FUN_1800c7e00(0x30);
      if ((longlong)dVar11 < 0) {
        return -0.0;
      }
      return 0.0;
    }
    if (-0x7f < iVar6) {
      return (float)(dVar11 / dVar9);
    }
    dVar9 = (dVar11 * 1.2676506002282294e+30) / dVar9;
    uVar13 = (uint)((ulonglong)ABS(dVar9) >> 0x20);
    uVar3 = uVar13 >> 0x14;
    if (uVar3 < 0x65) {
      if ((int)(0x65 - (uVar13 >> 0x14)) < 0x37) {
        uVar4 = ((ulonglong)dVar9 & 0x1fffffffffffff | 0x10000000000000) >>
                (100U - (char)uVar3 & 0x3f);
        uVar4 = (uVar4 >> 1) + (ulonglong)((uint)uVar4 & 1);
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = (ulonglong)uVar3 - 100 << 0x34 | (ulonglong)dVar9 & 0xfffffffffffff;
    }
    dVar11 = (double)((ulonglong)dVar9 & 0x8000000000000000 | uVar4);
    if ((uVar4 & 0x7ff0000000000000) == 0) {
      FUN_1800c7e00(0x30);
    }
    goto LAB_1800bf3d2;
  }
  if ((iVar6 < -0x1a) && ((longlong)dVar9 < 0)) goto joined_r0x0001800bf3f5;
  if ((dVar5 == INFINITY) && (dVar7 == INFINITY)) {
    FUN_1800c7e00(0x20);
    if (-1 < (longlong)dVar9) {
      if ((longlong)dVar11 < 0) {
        return -0.7853982;
      }
      return 0.7853982;
    }
    if ((longlong)dVar11 < 0) {
      return -2.3561945;
    }
    return 2.3561945;
  }
  if ((longlong)dVar9 < 0) {
    uVar13 = uVar13 ^ 0x80000000;
  }
  dVar5 = dVar11;
  if ((longlong)dVar11 < 0) {
    dVar5 = -dVar11;
  }
  bVar1 = dVar5 != (double)CONCAT44(uVar13,uVar12);
  bVar2 = (double)CONCAT44(uVar13,uVar12) <= dVar5;
  uVar10 = uVar12;
  uVar3 = uVar13;
  if (bVar2 && bVar1) {
    uVar10 = SUB84(dVar5,0);
    uVar3 = (uint)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)CONCAT44(uVar13,uVar12);
  }
  dVar7 = dVar5 / (double)CONCAT44(uVar3,uVar10);
  if (dVar7 <= 0.0625) {
    if (dVar7 < 0.0001) goto LAB_1800bf55b;
    dVar5 = dVar7 * dVar7;
    dVar5 = (0.3333333333333317 - (0.19999999999393223 - dVar5 * 0.1428571356180717) * dVar5) *
            dVar5 * dVar7;
  }
  else {
    uVar13 = (uint)(dVar7 * 256.0 + 0.5);
    dVar7 = (double)uVar13;
    dVar5 = (dVar5 * 256.0 - dVar7 * (double)CONCAT44(uVar3,uVar10)) /
            (dVar7 * dVar5 + (double)CONCAT44(uVar3,uVar10) * 256.0);
    dVar7 = dVar5 + *(double *)(&DAT_1800f5f20 + (ulonglong)(uVar13 - 0x10) * 8);
    dVar5 = dVar5 * dVar5 * dVar5 * 0.33333333333224097;
  }
  dVar7 = dVar7 - dVar5;
LAB_1800bf55b:
  if (bVar2 && bVar1) {
    dVar7 = 1.5707963267948966 - dVar7;
  }
  if ((longlong)dVar9 < 0) {
    dVar7 = 3.141592653589793 - dVar7;
  }
  if ((longlong)dVar11 < 0) {
    dVar7 = -dVar7;
  }
  return (float)dVar7;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

double FUN_1800bf5c0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 in_ZMM0 [64];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;

  dVar3 = in_ZMM0._0_8_;
  auVar4 = in_ZMM0._0_16_;
  if (DAT_1801163a0 == 0) {
    if ((ulonglong)ABS(dVar3) < 0x7ff0000000000000) {
      dVar11 = (double)(int)(((ulonglong)dVar3 >> 0x34) - 0x3ff);
      dVar6 = (double)((ulonglong)dVar3 & (ulonglong)DAT_1800f6750);
      dVar5 = dVar3;
      if (dVar11 == -1023.0) {
        dVar6 = (double)((ulonglong)dVar6 | DAT_1800f67b0) - 1.0;
        dVar5 = (double)((ulonglong)dVar6 & (ulonglong)DAT_1800f6750);
        dVar11 = (double)(int)((uint)((ulonglong)dVar6 >> 0x34) - 0x7fd);
        dVar6 = dVar5;
      }
      uVar1 = ((ulonglong)dVar5 & 0xff00000000000) + ((ulonglong)dVar5 & 0x80000000000) * 2;
      if (ABS(dVar3 - 1.0) < 0.0625) {
        dVar3 = dVar3 - 1.0;
        dVar5 = dVar3 / (dVar3 + 2.0);
        dVar6 = dVar5 + dVar5;
        dVar11 = dVar6 * dVar6;
        dVar7 = dVar11 * dVar6;
        return dVar3 + (((dVar11 * 0.012500000003771751 + 0.08333333333333179) * dVar7 +
                        (dVar11 * 0.0004348877777076146 + 0.0022321399879194482) *
                        dVar7 * dVar7 * dVar6) - dVar3 * dVar5);
      }
      uVar2 = uVar1 >> 0x2c;
      if (0.0 < dVar3) {
        dVar5 = ((double)(uVar1 | (ulonglong)DAT_1800f67e0) -
                (double)((ulonglong)dVar6 | (ulonglong)DAT_1800f67e0)) *
                *(double *)(&DAT_1800f8260 + uVar2 * 8);
        dVar3 = dVar5 * dVar5;
        return *(double *)(&DAT_1800f9b50 + uVar2 * 8) + dVar11 * 0.6931471228599548 +
               *(double *)(&DAT_1800fa360 + uVar2 * 8) +
               (dVar11 * 5.7699990475432854e-08 -
               ((dVar5 * 0.3333333333333333 + 0.5) * dVar3 + dVar5 +
               ((dVar5 * 0.16666666666666666 + 0.2) * dVar5 + 0.25) * dVar3 * dVar3));
      }
      if (dVar3 == 0.0) {
        dVar3 = (double)FUN_1800ca280(dVar3,0xfff0000000000000,1);
        return dVar3;
      }
    }
    else {
      if (dVar3 == INFINITY) {
        return INFINITY;
      }
      if (dVar3 != -INFINITY) {
        return (double)((ulonglong)dVar3 | 0x8000000000000);
      }
    }
    dVar3 = (double)FUN_1800ca280(dVar3,0xfff8000000000000,2);
                    // WARNING: Read-only address (ram,0x0001800f6710) is written
                    // WARNING: Read-only address (ram,0x0001800f6750) is written
                    // WARNING: Read-only address (ram,0x0001800f6760) is written
                    // WARNING: Read-only address (ram,0x0001800f6780) is written
                    // WARNING: Read-only address (ram,0x0001800f6790) is written
                    // WARNING: Read-only address (ram,0x0001800f67b0) is written
                    // WARNING: Read-only address (ram,0x0001800f67e0) is written
                    // WARNING: Read-only address (ram,0x0001800f6870) is written
                    // WARNING: Read-only address (ram,0x0001800f6890) is written
    return dVar3;
  }
  auVar8 = vpsrlq_avx(auVar4,0x34);
  auVar8 = vpsubq_avx(auVar8,_DAT_1800f6760);
  auVar8 = vcvtdq2pd_avx(auVar8);
  dVar5 = auVar8._0_8_;
  auVar8 = vpand_avx(auVar4,_DAT_1800f6710);
  if (auVar8._0_8_ == INFINITY) {
    if (dVar3 != INFINITY) {
      if (dVar3 == -INFINITY) goto LAB_1800bfa90;
      dVar3 = (double)FUN_1800ca280(dVar3,(ulonglong)dVar3 | 0x8000000000000,3);
    }
    return dVar3;
  }
  if (0.0 < dVar3) {
    auVar8 = vpand_avx(auVar4,_DAT_1800f6750);
    if (dVar5 == -1023.0) {
      auVar4 = vpor_avx(auVar8,_DAT_1800f67b0);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar4._0_8_ - 1.0;
      auVar10 = vpsrlq_avx(auVar8,0x34);
      auVar4 = vpand_avx(auVar8,_DAT_1800f6750);
      auVar8 = vpsubd_avx(auVar10,_DAT_1800f6870);
      auVar8 = vcvtdq2pd_avx(auVar8);
      dVar5 = auVar8._0_8_;
      auVar8 = auVar4;
    }
    auVar10 = vpand_avx(auVar4,_DAT_1800f6780);
    auVar9 = vpand_avx(auVar4,_DAT_1800f6790);
    auVar9 = vpsllq_avx(auVar9,1);
    auVar10 = vpaddq_avx(auVar9,auVar10);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar3 - 1.0;
    auVar9 = vpand_avx(auVar9,_DAT_1800f6890);
    if (auVar9._0_8_ < 0.0625) {
      dVar11 = auVar4._0_8_ - 1.0;
      dVar7 = dVar11 / (dVar11 + 2.0);
      dVar3 = dVar7 + dVar7;
      dVar5 = dVar3 * dVar3;
      dVar6 = dVar5 * dVar3;
      return dVar11 + (((dVar5 * 0.0004348877777076146 + 0.0022321399879194482) *
                        dVar6 * dVar6 * dVar3 +
                       (dVar5 * 0.012500000003771751 + 0.08333333333333179) * dVar6) -
                      dVar11 * dVar7);
    }
    uVar1 = auVar10._0_8_ >> 0x2c;
    auVar4 = vpor_avx(auVar8,_DAT_1800f67e0);
    auVar8 = vpor_avx(auVar10,_DAT_1800f67e0);
    dVar3 = (auVar8._0_8_ - auVar4._0_8_) * *(double *)(&DAT_1800f8260 + uVar1 * 8);
    dVar6 = dVar3 * dVar3;
    return dVar5 * 0.6931471228599548 + *(double *)(&DAT_1800f9b50 + uVar1 * 8) +
           *(double *)(&DAT_1800fa360 + uVar1 * 8) +
           (dVar5 * 5.7699990475432854e-08 -
           ((dVar3 * (dVar3 * 0.16666666666666666 + 0.2) + 0.25) * dVar6 * dVar6 +
           (dVar3 * 0.3333333333333333 + 0.5) * dVar6 + dVar3));
  }
  if (dVar3 == 0.0) {
    dVar3 = (double)FUN_1800ca280(dVar3,0xfff0000000000000,1);
    return dVar3;
  }
LAB_1800bfa90:
  dVar3 = (double)FUN_1800ca280(dVar3,0xfff8000000000000,2);
  return dVar3;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1800bfaf0(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;

  uVar5 = in_XMM0._0_8_;
  fVar1 = in_XMM0._0_4_;
  if (0x7f7fffff < (uint)ABS(fVar1)) {
    if (fVar1 != INFINITY) {
      if (fVar1 == -INFINITY) goto LAB_1800bfc7a;
      uVar5 = (ulonglong)((uint)fVar1 | 0x400000);
    }
    return uVar5;
  }
  if (0.0 < fVar1) {
    uVar2 = (uint)fVar1 & 0x7fffff;
    uVar3 = (uint)ABS(fVar1) >> 0x17;
    if (uVar3 == 0) {
      fVar8 = (float)(uVar2 | 0x3f800000) - 1.0;
      uVar2 = (uint)fVar8 & 0x7fffff;
      iVar4 = ((uint)fVar8 >> 0x17) - 0xfd;
    }
    else {
      iVar4 = uVar3 - 0x7f;
    }
    auVar7._4_12_ = in_XMM0._4_12_;
    if (0.0625 <= ABS(fVar1 - 1.0)) {
      uVar3 = (uVar2 >> 0x10) + (uint)((uVar2 >> 0xf & 1) != 0);
      uVar5 = (ulonglong)uVar3;
      fVar1 = ((float)(uVar3 * 0x10000 | 0x3f000000) - (float)(uVar2 | 0x3f000000)) *
              *(float *)(&DAT_1800fafa0 + uVar5 * 4);
      auVar6._4_12_ = DAT_1800f69f0._4_12_;
      auVar6._0_4_ = (float)DAT_1800f69f0 * (float)iVar4 + *(float *)(&DAT_1800fab80 + uVar5 * 4) +
                     ((float)iVar4 * 3.1946183e-05 -
                     (fVar1 + (fVar1 * 0.33333334 + 0.5) * fVar1 * fVar1)) +
                     *(float *)(&DAT_1800fad90 + uVar5 * 4);
      return auVar6._0_8_;
    }
    fVar1 = fVar1 - 1.0;
    fVar8 = fVar1 / (fVar1 + 2.0);
    fVar9 = fVar8 + fVar8;
    auVar7._0_4_ = fVar1 + ((fVar9 * fVar9 * 0.0125 + 0.083333336) * fVar9 * fVar9 * fVar9 -
                           fVar1 * fVar8);
    return auVar7._0_8_;
  }
  if (fVar1 == 0.0) {
    uVar5 = FUN_1800ca340(fVar1,-INFINITY,1);
    return uVar5;
  }
LAB_1800bfc7a:
  uVar5 = FUN_1800ca340(fVar1,-NAN,2);
  return uVar5;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1800bfcb0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 in_ZMM0 [64];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];

  uVar4 = in_ZMM0._0_8_;
  fVar8 = in_ZMM0._0_4_;
  auVar5._16_48_ = in_ZMM0._16_48_;
  if (DAT_1801163a0 != 0) {
    if ((uint)ABS(fVar8) < 0x7f800000) {
      if (0.0 < fVar8) {
        uVar1 = (uint)fVar8 & 0x7fffff;
        uVar3 = (uint)ABS(fVar8) >> 0x17;
        if (uVar3 == 0) {
          auVar11 = vpor_avx(ZEXT416(uVar1),_DAT_1800f6910);
          auVar11 = ZEXT416((uint)(auVar11._0_4_ - DAT_1800f6910));
          auVar12 = vpsrld_avx(auVar11,0x17);
          auVar11 = vpand_avx(auVar11,_DAT_1800f6980);
          in_ZMM0 = ZEXT1664(auVar11);
          uVar1 = auVar11._0_4_;
          auVar11 = vpsubd_avx(auVar12,_DAT_1800f69a0);
          auVar11 = vcvtdq2ps_avx(auVar11);
          fVar8 = auVar11._0_4_;
        }
        else {
          auVar11 = vcvtdq2ps_avx(ZEXT416(uVar3 - 0x7f));
          fVar8 = auVar11._0_4_;
        }
        if (0.0625 <= ABS(in_ZMM0._0_4_ - 1.0)) {
          uVar3 = (uVar1 >> 0x10) + (uint)((uVar1 >> 0xf & 1) != 0);
          uVar4 = (ulonglong)uVar3;
          fVar9 = ((float)(uVar3 * 0x10000 | 0x3f000000) - (float)(uVar1 | 0x3f000000)) *
                  *(float *)(&DAT_1800fafa0 + uVar4 * 4);
          return (ulonglong)
                 (uint)(fVar8 * 0.69311523 + *(float *)(&DAT_1800fab80 + uVar4 * 4) +
                       (fVar8 * 3.1946183e-05 - ((fVar9 * 0.33333334 + 0.5) * fVar9 * fVar9 + fVar9)
                       ) + *(float *)(&DAT_1800fad90 + uVar4 * 4));
        }
        fVar9 = in_ZMM0._0_4_ - 1.0;
        fVar10 = fVar9 / (fVar9 + 2.0);
        fVar8 = fVar10 + fVar10;
        return (ulonglong)
               (uint)(fVar9 + (fVar8 * fVar8 * fVar8 * (fVar8 * fVar8 * 0.0125 + 0.083333336) -
                              fVar9 * fVar10));
      }
      if (fVar8 == 0.0) {
        uVar4 = FUN_1800ca340(fVar8,-INFINITY,1);
        return uVar4;
      }
    }
    else {
      if (fVar8 == INFINITY) {
        return uVar4;
      }
      if (fVar8 != -INFINITY) {
        uVar4 = FUN_1800ca340(fVar8,(float)((uint)fVar8 | 0x400000),3);
        return uVar4;
      }
    }
    uVar4 = FUN_1800ca340(fVar8,-NAN,2);
    return uVar4;
  }
  if (0x7f7fffff < (uint)ABS(fVar8)) {
    if (fVar8 != INFINITY) {
      if (fVar8 == -INFINITY) goto LAB_1800bfc7a;
      uVar4 = (ulonglong)((uint)fVar8 | 0x400000);
    }
    return uVar4;
  }
  if (0.0 < fVar8) {
    uVar1 = (uint)fVar8 & 0x7fffff;
    uVar3 = (uint)ABS(fVar8) >> 0x17;
    if (uVar3 == 0) {
      fVar9 = (float)(uVar1 | 0x3f800000) - 1.0;
      uVar1 = (uint)fVar9 & 0x7fffff;
      iVar2 = ((uint)fVar9 >> 0x17) - 0xfd;
    }
    else {
      iVar2 = uVar3 - 0x7f;
    }
    auVar7._4_60_ = in_ZMM0._4_60_;
    if (0.0625 <= ABS(fVar8 - 1.0)) {
      uVar3 = (uVar1 >> 0x10) + (uint)((uVar1 >> 0xf & 1) != 0);
      uVar4 = (ulonglong)uVar3;
      fVar8 = ((float)(uVar3 * 0x10000 | 0x3f000000) - (float)(uVar1 | 0x3f000000)) *
              *(float *)(&DAT_1800fafa0 + uVar4 * 4);
      auVar5._0_16_ = _DAT_1800f69f0;
      auVar6._4_60_ = auVar5._4_60_;
      auVar6._0_4_ = (float)DAT_1800f69f0 * (float)iVar2 + *(float *)(&DAT_1800fab80 + uVar4 * 4) +
                     ((float)iVar2 * 3.1946183e-05 -
                     (fVar8 + (fVar8 * 0.33333334 + 0.5) * fVar8 * fVar8)) +
                     *(float *)(&DAT_1800fad90 + uVar4 * 4);
      return auVar6._0_8_;
    }
    fVar8 = fVar8 - 1.0;
    fVar9 = fVar8 / (fVar8 + 2.0);
    fVar10 = fVar9 + fVar9;
    auVar7._0_4_ = fVar8 + ((fVar10 * fVar10 * 0.0125 + 0.083333336) * fVar10 * fVar10 * fVar10 -
                           fVar8 * fVar9);
    return auVar7._0_8_;
  }
  if (fVar8 == 0.0) {
    uVar4 = FUN_1800ca340(fVar8,-INFINITY,1);
    return uVar4;
  }
LAB_1800bfc7a:
  uVar4 = FUN_1800ca340(fVar8,-NAN,2);
  return uVar4;
}


double FUN_1800bfe80(double param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  undefined1 extraout_var [60];
  undefined1 auVar12 [64];
  undefined1 extraout_var_00 [60];
  undefined1 auVar13 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;

  if (((byte)DAT_1801163a0 & 3) != 3) {
    dVar11 = (double)FUN_1800bfea0(param_1);
    return dVar11;
  }
  uVar10 = (uint)((ulonglong)param_1 >> 0x20);
  uVar9 = uVar10 >> 0x14;
  uVar8 = 0;
  dVar4 = in_ZMM1._0_8_;
  uVar2 = in_ZMM1._4_4_;
  dVar11 = param_1;
  if ((0x7fd < (uVar10 >> 0x14) - 1) || (0x7f < (uVar2 >> 0x14 & 0x7ff) - 0x3be)) {
    uVar7 = (longlong)dVar4 * 2;
    if (0xffdffffffffffffe < uVar7 - 1) {
      if ((uVar7 == 0) || (dVar11 = dVar4, param_1 == 1.0)) {
        if (0xfff0000000000000 < ((ulonglong)dVar11 ^ 0x8000000000000) * 2) goto LAB_1800ca528;
      }
      else {
        uVar1 = (longlong)param_1 * 2;
        if ((0xffe0000000000000 < uVar1) || (0xffe0000000000000 < uVar7)) {
LAB_1800ca528:
          return param_1 + dVar4;
        }
        if (uVar1 != 0x7fe0000000000000) {
          if ((uint)(uVar1 < 0x7fe0000000000000) == (uVar2 >> 0x1f ^ 1)) {
            return 0.0;
          }
          return dVar4 * dVar4;
        }
      }
      return 1.0;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      dVar11 = param_1 * param_1;
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar10 = uVar2 >> 0x14 & 0x7ff, uVar10 - 0x3ff < 0x35)) &&
          (uVar7 = 1L << ((ulonglong)(0x433 - uVar10) & 0x3f), ((ulonglong)dVar4 & uVar7 - 1) == 0))
         && (((ulonglong)dVar4 & uVar7) != 0)) {
        dVar11 = -dVar11;
        uVar8 = 1;
      }
      if ((longlong)param_1 * 2 == 0) {
        if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
          return dVar11;
        }
        dVar11 = FUN_1800cac10(uVar8);
        return dVar11;
      }
      if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
        return dVar11;
      }
      return 1.0 / dVar11;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar8 = uVar2 >> 0x14 & 0x7ff;
      if (uVar8 < 0x3ff) {
LAB_1800ca6e4:
        dVar11 = FUN_1800cac70(param_1);
        return dVar11;
      }
      if (uVar8 < 0x434) {
        uVar7 = 1L << ((ulonglong)(0x433 - uVar8) & 0x3f);
        if (((ulonglong)dVar4 & uVar7 - 1) != 0) goto LAB_1800ca6e4;
        iVar3 = 2 - (uint)((uVar7 & (ulonglong)dVar4) != 0);
      }
      else {
        iVar3 = 2;
      }
      dVar11 = ABS(param_1);
      uVar9 = uVar10 >> 0x14 & 0x7ff;
      uVar8 = 0x80000;
      if (iVar3 != 1) {
        uVar8 = 0;
      }
    }
    uVar10 = uVar2 >> 0x14 & 0x7ff;
    if (0x7f < uVar10 - 0x3be) {
      if (dVar11 == 1.0) {
        return 1.0;
      }
      if (uVar10 < 0x3be) {
        if ((ulonglong)dVar11 < 0x3ff0000000000001) {
          return 1.0 - dVar4;
        }
        return dVar4 + 1.0;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar11 == uVar2 >> 0x14 < 0x800) {
        dVar11 = FUN_1800cacb0(0);
        return dVar11;
      }
      dVar11 = (double)FUN_1800cad00(0);
      return dVar11;
    }
    if (uVar9 == 0) {
      dVar11 = (double)((longlong)ABS(param_1 * 4503599627370496.0) + 0xfcc0000000000000);
    }
  }
  if (dVar4 == 1.0) {
    return param_1;
  }
  if (dVar11 == 1.0) {
    auVar15._0_8_ = -(ulonglong)(uVar8 == 0);
    auVar15._8_8_ = 0xffffffffffffffff;
    auVar15 = vblendvpd_avx(ZEXT816(0xbff0000000000000),ZEXT816(0x3ff0000000000000),auVar15);
    return auVar15._0_8_;
  }
  uVar10 = (uint)((longlong)dVar11 + 0xc0196aab00000000U >> 0x20);
  lVar5 = (ulonglong)(uVar10 >> 0xd & 0x7f) * 0x20;
  dVar19 = (double)((int)uVar10 >> 0x14);
  dVar17 = dVar19 * 0.6931471805598903 + *(double *)(&DAT_1800fc298 + lVar5);
  dVar18 = (double)((longlong)dVar11 - ((longlong)dVar11 + 0xc0196aab00000000U & 0xfff0000000000000)
                   ) * *(double *)(&DAT_1800fc288 + lVar5) + -1.0;
  dVar16 = dVar18 * -0.5 * dVar18;
  dVar11 = dVar17 + dVar18;
  dVar6 = dVar16 + dVar11;
  dVar17 = dVar16 * dVar18 *
           (dVar16 * (dVar16 * (dVar18 * 1.0000415263675542 + -1.142909628459501) +
                     dVar18 * -0.6666666663487739 + 0.7999999995323976) +
           dVar18 * 0.5000000000000007 + -0.6666666666666679) +
           dVar18 * dVar18 * -0.5 + -dVar16 +
           dVar19 * 5.497923018708371e-14 + *(double *)(&DAT_1800fc2a0 + lVar5) +
           (dVar17 - dVar11) + dVar18 + (dVar11 - dVar6) + dVar16;
  dVar11 = dVar17 + dVar6;
  dVar16 = dVar11 * dVar4;
  uVar10 = (uint)((ulonglong)dVar16 >> 0x34) & 0x7ff;
  if (0x3e < uVar10 - 0x3c9) {
    if (0x7fffffff < uVar10 - 0x3c9) {
      if (uVar8 == 0) {
        return dVar16 + 1.0;
      }
      return -(dVar16 + 1.0);
    }
    if (0x408 < uVar10) {
      if (((ulonglong)dVar16 & 0x8000000000000000) == 0) {
        dVar11 = FUN_1800cacb0(uVar8);
        return dVar11;
      }
      dVar11 = (double)FUN_1800cad00(uVar8);
      return dVar11;
    }
    uVar10 = 0;
  }
  dVar18 = dVar16 * 369.3299304675746 + 103079215104.5;
  uVar7 = (ulonglong)dVar18 >> 0x10;
  dVar18 = (double)(int)((ulonglong)dVar18 >> 0x10);
  dVar11 = dVar18 * 5.0411407304988844e-14 + dVar18 * -0.0027076061741126978 + dVar16 +
           dVar4 * ((dVar6 - dVar11) + dVar17) + dVar11 * dVar4 + -dVar16;
  dVar4 = dVar11 * dVar11;
  dVar6 = (double)((uVar8 + uVar7 << 0x2c) + *(longlong *)(&DAT_1800fb248 + (uVar7 & 0xff) * 0x10));
  dVar11 = dVar4 * dVar4 * (dVar11 * 0.008333335853047663 + 0.04166668084093659) +
           dVar4 * (dVar11 * 0.16666666666665886 + 0.49999999999996786) +
           dVar11 + *(double *)(&DAT_1800fb240 + (uVar7 & 0xff) * 0x10);
  if (uVar10 == 0) {
    if ((uVar7 & 0x80000000) == 0) {
      auVar12._0_4_ =
           FUN_1800caba0((dVar11 * (double)((longlong)dVar6 + -0x3f10000000000000) +
                         (double)((longlong)dVar6 + -0x3f10000000000000)) * 5.486124068793689e+303);
      auVar12._4_60_ = extraout_var;
      dVar6 = auVar12._0_8_;
    }
    else {
      dVar6 = (double)((longlong)dVar6 + 0x3fe0000000000000);
      dVar4 = dVar6 + dVar6 * dVar11;
      if (ABS(dVar4) < 1.0) {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = dVar4;
        auVar15 = vcmpsd_avx(auVar14,ZEXT816(0),1);
        auVar15 = vblendvpd_avx(ZEXT816(0x3ff0000000000000),ZEXT816(0xbff0000000000000),auVar15);
        dVar16 = auVar15._0_8_;
        dVar4 = ((dVar6 - dVar4) + dVar6 * dVar11 + (dVar16 - (dVar16 + dVar4)) + dVar4 +
                dVar16 + dVar4) - dVar16;
        if (dVar4 == 0.0) {
          dVar4 = (double)((ulonglong)dVar6 & 0x8000000000000000);
        }
      }
      auVar13._0_4_ = FUN_1800cabe0(dVar4 * 2.2250738585072014e-308);
      auVar13._4_60_ = extraout_var_00;
      dVar6 = auVar13._0_8_;
    }
  }
  else {
    dVar6 = dVar6 * dVar11 + dVar6;
  }
  return dVar6;
}


void FUN_1800bfea0(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  double dVar8;
  uint uVar9;
  double dVar10;
  undefined1 in_XMM1 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;

  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  uVar2 = uVar7 >> 0x14;
  uVar9 = 0;
  dVar13 = in_XMM1._0_8_;
  uVar17 = in_XMM1._4_4_;
  dVar4 = param_1;
  if ((0x7fd < (uVar7 >> 0x14) - 1) || (0x7f < (uVar17 >> 0x14 & 0x7ff) - 0x3be)) {
    if (0xffdffffffffffffe < (longlong)dVar13 * 2 - 1U) {
      return;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar7 = uVar17 >> 0x14 & 0x7ff, uVar7 - 0x3ff < 0x35)) &&
          (uVar6 = 1L << (0x33U - (char)uVar7 & 0x3f), ((ulonglong)dVar13 & uVar6 - 1) == 0)) &&
         (((ulonglong)dVar13 & uVar6) != 0)) {
        uVar9 = 1;
      }
      if ((longlong)param_1 * 2 != 0) {
        return;
      }
      if (((ulonglong)dVar13 & 0x8000000000000000) == 0) {
        return;
      }
      FUN_1800cac10(uVar9);
      return;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar2 = uVar17 >> 0x14 & 0x7ff;
      if (uVar2 < 0x3ff) {
LAB_1800c014b:
        FUN_1800cac70(param_1);
        return;
      }
      if (uVar2 < 0x434) {
        uVar6 = 1L << (0x33U - (char)uVar2 & 0x3f);
        if (((ulonglong)dVar13 & uVar6 - 1) != 0) goto LAB_1800c014b;
        iVar3 = 2 - (uint)((uVar6 & (ulonglong)dVar13) != 0);
      }
      else {
        iVar3 = 2;
      }
      dVar4 = ABS(param_1);
      uVar2 = uVar7 >> 0x14 & 0x7ff;
      uVar9 = 0x80000;
      if (iVar3 != 1) {
        uVar9 = 0;
      }
    }
    uVar7 = uVar17 >> 0x14 & 0x7ff;
    if (0x7f < uVar7 - 0x3be) {
      if (dVar4 == 1.0) {
        return;
      }
      if (uVar7 < 0x3be) {
        return;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar4 == uVar17 >> 0x14 < 0x800) {
        FUN_1800cacb0(0);
        return;
      }
      FUN_1800cad00(0);
      return;
    }
    if (uVar2 == 0) {
      dVar4 = (double)((longlong)ABS(param_1 * 4503599627370496.0) + 0xfcc0000000000000);
    }
  }
  if (dVar13 == 1.0) {
    return;
  }
  if (dVar4 == 1.0) {
    return;
  }
  uVar17 = 0x3ff00000;
  dVar8 = (double)((longlong)dVar4 - ((longlong)dVar4 + 0xc0196aab00000000U & 0xfff0000000000000));
  uVar7 = (uint)((longlong)dVar4 + 0xc0196aab00000000U >> 0x20);
  lVar5 = (ulonglong)(uVar7 >> 0xd & 0x7f) * 0x20;
  dVar14 = (double)((int)uVar7 >> 0x14);
  dVar4 = (double)((longlong)dVar8 + 0x80000000U & 0xffffffff00000000);
  dVar16 = (dVar8 - dVar4) * *(double *)(&DAT_1800fc288 + lVar5);
  dVar11 = dVar4 * *(double *)(&DAT_1800fc288 + lVar5) - 1.0;
  dVar4 = dVar14 * 0.6931471805598903 + *(double *)(&DAT_1800fc298 + lVar5);
  dVar8 = dVar16 + dVar11;
  dVar12 = dVar4 + dVar8;
  dVar15 = dVar11 * -0.5 * dVar11;
  dVar1 = dVar15 + dVar12;
  dVar10 = dVar8 * -0.5 * dVar8;
  dVar4 = (((dVar8 * 1.0000415263675542 + -1.142909628459501) * dVar10 +
           dVar8 * -0.6666666663487739 + 0.7999999995323976) * dVar10 +
          dVar8 * 0.5000000000000007 + -0.6666666666666679) * dVar10 * dVar8 +
          dVar14 * 5.497923018708371e-14 + *(double *)(&DAT_1800fc2a0 + lVar5) +
          (dVar4 - dVar12) + dVar8 + (dVar11 * -0.5 + dVar8 * -0.5) * dVar16 +
          (dVar12 - dVar1) + dVar15;
  dVar12 = dVar4 + dVar1;
  dVar8 = (double)((ulonglong)dVar12 & 0xfffffffff8000000);
  dVar14 = (double)(CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar12,0)) & 0xfffffffff8000000)
           * (double)((ulonglong)dVar13 & 0xfffffffff8000000);
  uVar7 = (uint)((ulonglong)dVar14 >> 0x34) & 0x7ff;
  if (0x3e < uVar7 - 0x3c9) {
    if (0x7fffffff < uVar7 - 0x3c9) {
      return;
    }
    if (0x408 < uVar7) {
      if (((ulonglong)dVar14 & 0x8000000000000000) == 0) {
        FUN_1800cacb0(uVar9);
        return;
      }
      FUN_1800cad00(uVar9);
      return;
    }
    uVar7 = 0;
  }
  dVar10 = dVar14 * 369.3299304675746 + 103079215104.5;
  uVar6 = (ulonglong)dVar10 >> 0x10;
  dVar10 = (double)(int)((ulonglong)dVar10 >> 0x10);
  lVar5 = (uVar9 + uVar6 << 0x2c) + *(longlong *)(&DAT_1800fb248 + (uVar6 & 0xff) * 0x10);
  dVar13 = dVar10 * -0.0027076061741126978 + dVar14 + dVar10 * 5.0411407304988844e-14 +
           ((dVar1 - dVar12) + dVar4 + (dVar12 - dVar8)) * dVar13 +
           (dVar13 - (double)((ulonglong)dVar13 & 0xfffffffff8000000)) * dVar8;
  dVar4 = dVar13 * dVar13;
  dVar4 = (dVar13 * 0.16666666666665886 + 0.49999999999996786) * dVar4 +
          *(double *)(&DAT_1800fb240 + (uVar6 & 0xff) * 0x10) + dVar13 +
          (dVar13 * 0.008333335853047663 + 0.04166668084093659) * dVar4 * dVar4;
  if (uVar7 == 0) {
    if ((uVar6 & 0x80000000) == 0) {
      dVar13 = (double)(lVar5 + -0x3f10000000000000);
      FUN_1800caba0((dVar13 * dVar4 + dVar13) * 5.486124068793689e+303);
    }
    else {
      dVar13 = (double)(lVar5 + 0x3fe0000000000000);
      dVar4 = dVar13 * dVar4;
      dVar8 = dVar13 + dVar4;
      if (ABS(dVar8) < 1.0) {
        if (dVar8 < 0.0) {
          uVar17 = 0xbff00000;
        }
        dVar12 = (double)((ulonglong)uVar17 << 0x20) + dVar8;
        dVar8 = ((dVar13 - dVar8) + dVar4 + ((double)((ulonglong)uVar17 << 0x20) - dVar12) + dVar8 +
                dVar12) - (double)((ulonglong)uVar17 << 0x20);
        if (dVar8 == 0.0) {
          dVar8 = (double)((ulonglong)dVar13 & 0x8000000000000000);
        }
      }
      FUN_1800cabe0(dVar8 * 2.2250738585072014e-308);
    }
  }
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800c06c0(void)

{
  longlong lVar1;

  lVar1 = FUN_1800c1eb8();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    // WARNING: Subroutine does not return
  FUN_1800c18c0();
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

bool FUN_1800c06e0(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;

  pcVar2 = (code *)FUN_1800c0730();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}


void FUN_1800c0720(undefined8 param_1)

{
  DAT_180115db0 = param_1;
  return;
}


ulonglong FUN_1800c0730(void)

{
  byte bVar1;
  ulonglong uVar2;

  __acrt_lock(0);
  bVar1 = (byte)DAT_180112300 & 0x3f;
  uVar2 = DAT_180115db0 ^ DAT_180112300;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}


// Library Function - Single Match
//  _set_new_handler
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;

  __acrt_lock(0);
  bVar2 = (byte)DAT_180112300 & 0x3f;
  uVar3 = DAT_180112300 ^ DAT_180115db0;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_180115db0 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_180112300;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}


undefined4 FUN_1800c07dc(int param_1,undefined8 param_2)

{
  undefined4 uVar1;

  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_1800c07f0(-0x1f928c9d,param_2);
    return uVar1;
  }
  return 0;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined4 FUN_1800c07f0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  __acrt_ptd *p_Var5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;

  p_Var5 = FUN_1800c1f18();
  if (p_Var5 != (__acrt_ptd *)0x0) {
    piVar2 = *(int **)p_Var5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        pcVar3 = *(code **)(piVar6 + 2);
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        if (pcVar3 == (code *)0x5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (pcVar3 != (code *)0x1) {
          uVar4 = *(undefined8 *)(p_Var5 + 8);
          *(undefined8 *)(p_Var5 + 8) = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(p_Var5 + 0x10);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_1800c092e:
              *(undefined4 *)(p_Var5 + 0x10) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_1800c092e;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_1800c092e;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_1800c092e;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_1800c092e;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_1800c092e;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_1800c092e;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_1800c092e;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_1800c092e;
              }
            }
            (*pcVar3)(8,uVar8);
            *(undefined4 *)(p_Var5 + 0x10) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*pcVar3)(piVar6[1]);
          }
          *(undefined8 *)(p_Var5 + 8) = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}


// Library Function - Multiple Matches With Same Base Name
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
// __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
// <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
// <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
// <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
// __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
// <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
// <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
// <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  FUN_1800c0994(param_3);
  __acrt_unlock(*param_4);
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800c0994(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;

  if (DAT_180115dc8 != '\0') {
    return;
  }
  LOCK();
  DAT_180115db8 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_180115dc0 != DAT_180112300) {
      bVar1 = (byte)DAT_180112300 & 0x3f;
      (*(code *)((DAT_180112300 ^ DAT_180115dc0) >> bVar1 |
                (DAT_180112300 ^ DAT_180115dc0) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_180115ef8;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_1800c0a03;
    puVar2 = &DAT_180115f10;
  }
  FUN_1800c1538(puVar2);
LAB_1800c0a03:
  if (*(int *)*param_1 == 0) {
    FUN_1800c17cc((undefined8 *)&DAT_1800d75a0,(undefined8 *)&DAT_1800d75c0);
  }
  FUN_1800c17cc((undefined8 *)&DAT_1800d75c8,(undefined8 *)&DAT_1800d75d0);
  if (*(int *)param_1[1] == 0) {
    DAT_180115dc8 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}


void FUN_1800c0a54(uint param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  HMODULE pHVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  int *piVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34 [3];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;

  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar3 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar3 != (HMODULE)0x0) && ((short)pHVar3->unused == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)&pHVar3->unused + (longlong)pHVar3[0xf].unused),
        *piVar5 == 0x4550)) &&
       ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_1800c0b68(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34[0] = 2;
  local_34[1] = 2;
  operator()<>(local_38,local_34 + 1,&local_20,local_34);
  if (local_res18[0] == 0) {
    bVar2 = FUN_1800cad98();
    if ((int)CONCAT71(extraout_var,bVar2) == 1) {
      bVar2 = false;
    }
    else {
      uVar4 = FUN_1800cad20();
      bVar2 = (char)uVar4 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_1800c0b38(param_1,bVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


void FUN_1800c0b38(uint param_1,char param_2)

{
  HANDLE hProcess;

  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_1800c0b68(param_1);
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800c0b68(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];

  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if ((BVar1 != 0) &&
     (pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*pFVar2)((ulonglong)param_1);
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}


void FUN_1800c0bcc(undefined8 param_1)

{
  DAT_180115dc0 = param_1;
  return;
}


void FUN_1800c0bd4(void)

{
  FUN_1800c0a54(0,0,1);
  return;
}


void FUN_1800c0be4(uint param_1)

{
  FUN_1800c0a54(param_1,2,0);
  return;
}


undefined4 FUN_1800c0bf0(void)

{
  return DAT_180115db8;
}


void FUN_1800c0bf8(char *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;

  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar2 = !bVar2;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = FUN_1800cc478((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_1800c0caa;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_1800c0caa:
  bVar2 = false;
  while (cVar3 = *pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar4 = uVar4 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar2) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar1 = false;
            bVar2 = !bVar2;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar2 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar1) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
        }
        iVar5 = FUN_1800cc478((int)*pcVar6);
        if (iVar5 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


// Library Function - Single Match
//  __acrt_allocate_buffer_for_argv
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

LPVOID __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  LPVOID pvVar1;

  if ((param_1 < 0x1fffffffffffffff) && (param_2 < 0xffffffffffffffff / param_3)) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar1 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_1800c3030((LPVOID)0x0);
      return pvVar1;
    }
  }
  return (LPVOID)0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1800c0e18(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  __acrt_ptd *p_Var3;
  longlong *plVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;

  iVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    p_Var3 = FUN_1800c2350();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_1800c2ac4();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_1800c6d50((HMODULE)0x0,&DAT_180115dd0,0x104);
  _DAT_1801166f8 = &DAT_180115dd0;
  if ((DAT_180116718 == (char *)0x0) || (pcVar6 = DAT_180116718, *DAT_180116718 == '\0')) {
    pcVar6 = &DAT_180115dd0;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_1800c0bf8(pcVar6,(undefined8 *)0x0,(char *)0x0,(longlong *)&local_res18,
                (longlong *)&local_res20);
  uVar5 = local_res18;
  plVar4 = __acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar4 == (longlong *)0x0) {
    p_Var3 = FUN_1800c2350();
    iVar7 = 0xc;
    *(undefined4 *)p_Var3 = 0xc;
  }
  else {
    FUN_1800c0bf8(pcVar6,plVar4,(char *)(plVar4 + uVar5),(longlong *)&local_res18,
                  (longlong *)&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      uVar5 = thunk_FUN_1800cb190(plVar4,&local_res10);
      plVar2 = local_res10;
      if ((int)uVar5 != 0) {
        FUN_1800c3030(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_1800c3030(plVar4);
        return (int)uVar5;
      }
      _DAT_180116700 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_180116700 = _DAT_180116700 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_180116708 = plVar2;
      FUN_1800c3030((LPVOID)0x0);
      local_res10 = (longlong *)0x0;
      goto LAB_1800c0f7d;
    }
    _DAT_180116700 = (int)local_res18 + -1;
    DAT_180116708 = plVar4;
  }
  plVar4 = (longlong *)0x0;
LAB_1800c0f7d:
  FUN_1800c3030(plVar4);
  return iVar7;
}


undefined8 FUN_1800c0f98(void)

{
  undefined8 uVar1;
  LPSTR pCVar2;
  undefined8 *puVar3;

  uVar1 = 0;
  if (DAT_180115ed8 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pCVar2 = FUN_1800cc628();
    if (pCVar2 == (LPSTR)0x0) {
      FUN_1800c3030((LPVOID)0x0);
      uVar1 = 0xffffffff;
    }
    else {
      puVar3 = FUN_1800c100c(pCVar2);
      if (puVar3 == (undefined8 *)0x0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_180115ed8 = puVar3;
        DAT_180115ef0 = puVar3;
      }
      FUN_1800c3030((LPVOID)0x0);
      FUN_1800c3030(pCVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


undefined8 * FUN_1800c100c(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;

  cVar6 = *param_1;
  lVar7 = 0;
  pcVar4 = param_1;
  while (cVar6 != '\0') {
    lVar1 = lVar7 + 1;
    if (cVar6 == '=') {
      lVar1 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar2 = lVar7;
      lVar7 = lVar2 + 1;
    } while (pcVar4[lVar7] != '\0');
    pcVar4 = pcVar4 + lVar2 + 2;
    lVar7 = lVar1;
    cVar6 = *pcVar4;
  }
  puVar3 = _calloc_base(lVar7 + 1,8);
  if (puVar3 == (undefined8 *)0x0) {
LAB_1800c106f:
    FUN_1800c3030((LPVOID)0x0);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar9 = puVar3;
    for (; *param_1 != '\0'; param_1 = param_1 + uVar8) {
      lVar7 = -1;
      do {
        lVar1 = lVar7;
        lVar7 = lVar1 + 1;
      } while (param_1[lVar7] != '\0');
      uVar8 = lVar1 + 2;
      if (*param_1 != '=') {
        pcVar4 = _calloc_base(uVar8,1);
        if (pcVar4 == (char *)0x0) {
          free_environment<>(puVar3);
          FUN_1800c3030((LPVOID)0x0);
          goto LAB_1800c106f;
        }
        uVar5 = FUN_1800c1840(pcVar4,uVar8,(longlong)param_1);
        if ((int)uVar5 != 0) {
                    // WARNING: Subroutine does not return
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *puVar9 = pcVar4;
        puVar9 = puVar9 + 1;
        FUN_1800c3030((LPVOID)0x0);
      }
    }
    FUN_1800c3030((LPVOID)0x0);
  }
  return puVar3;
}


// Library Function - Multiple Matches With Same Base Name
//  void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
//  void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void free_environment<>(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;

  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (LPVOID)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (LPVOID)0x0) {
      FUN_1800c3030(pvVar1);
      puVar2 = puVar2 + 1;
      pvVar1 = (LPVOID)*puVar2;
    }
    FUN_1800c3030(param_1);
  }
  return;
}


// Library Function - Multiple Matches With Same Base Name
//  void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
//  void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_180115ef0) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}


// Library Function - Multiple Matches With Same Base Name
//  void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
//  void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_180115ee8) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}


void FUN_1800c119c(void)

{
  uninitialize_environment_internal<>(&DAT_180115ed8);
  uninitialize_environment_internal<>((undefined8 *)&DAT_180115ee0);
  free_environment<>(DAT_180115ef0);
  free_environment<>(DAT_180115ee8);
  return;
}


undefined8 thunk_FUN_1800c0f98(void)

{
  undefined8 uVar1;
  LPSTR pCVar2;
  undefined8 *puVar3;

  uVar1 = 0;
  if (DAT_180115ed8 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pCVar2 = FUN_1800cc628();
    if (pCVar2 == (LPSTR)0x0) {
      FUN_1800c3030((LPVOID)0x0);
      uVar1 = 0xffffffff;
    }
    else {
      puVar3 = FUN_1800c100c(pCVar2);
      if (puVar3 == (undefined8 *)0x0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_180115ed8 = puVar3;
        DAT_180115ef0 = puVar3;
      }
      FUN_1800c3030((LPVOID)0x0);
      FUN_1800c3030(pCVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// Library Function - Multiple Matches With Same Base Name
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
// __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
// <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
// <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
// <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
// __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
// <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
// <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
// <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;

  __acrt_lock(*param_2);
  uVar1 = FUN_1800c1260(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}


// Library Function - Multiple Matches With Same Base Name
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
// __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
// <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
// <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
// <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
// __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
// <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
// <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
// <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_8b90c8310d35b3462fe809c44bbb350d>,class <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> &
// __ptr64,class <lambda_e797892004ba4c0bb152531b9d8c3715> >(class
// <lambda_8b90c8310d35b3462fe809c44bbb350d> && __ptr64,class
// <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> & __ptr64,class
// <lambda_e797892004ba4c0bb152531b9d8c3715> && __ptr64) __ptr64
//  public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
// <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
// __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
// <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
// <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
// <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
//   5 names - too many to list
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;

  __acrt_lock(*param_2);
  uVar1 = FUN_1800c1410(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}


undefined8 FUN_1800c1260(undefined8 *param_1)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  LPVOID pvVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;

  puVar5 = *(ulonglong **)*param_1;
  if (puVar5 == (ulonglong *)0x0) {
LAB_1800c13f2:
    uVar3 = 0xffffffff;
  }
  else {
    bVar4 = (byte)DAT_180112300 & 0x3f;
    pvVar7 = (LPVOID)((DAT_180112300 ^ *puVar5) >> bVar4 | (DAT_180112300 ^ *puVar5) << 0x40 - bVar4
                     );
    puVar10 = (ulonglong *)
              ((DAT_180112300 ^ puVar5[1]) >> bVar4 | (DAT_180112300 ^ puVar5[1]) << 0x40 - bVar4);
    puVar5 = (ulonglong *)
             ((DAT_180112300 ^ puVar5[2]) >> bVar4 | (DAT_180112300 ^ puVar5[2]) << 0x40 - bVar4);
    if (puVar10 == puVar5) {
      uVar6 = (longlong)puVar5 - (longlong)pvVar7 >> 3;
      uVar8 = uVar6;
      if (0x200 < uVar6) {
        uVar8 = 0x200;
      }
      uVar8 = uVar8 + uVar6;
      if (uVar8 == 0) {
        uVar8 = 0x20;
      }
      if (uVar8 < uVar6) {
LAB_1800c1302:
        uVar8 = uVar6 + 4;
        pvVar2 = _recalloc_base(pvVar7,uVar8,8);
        FUN_1800c3030((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_1800c13f2;
      }
      else {
        pvVar2 = _recalloc_base(pvVar7,uVar8,8);
        FUN_1800c3030((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_1800c1302;
      }
      pvVar7 = pvVar2;
      uVar1 = DAT_180112300;
      puVar10 = (ulonglong *)((longlong)pvVar7 + uVar6 * 8);
      puVar5 = (ulonglong *)((longlong)pvVar7 + uVar8 * 8);
      uVar8 = (ulonglong)((longlong)puVar5 + (7 - (longlong)puVar10)) >> 3;
      if (puVar5 < puVar10) {
        uVar8 = 0;
      }
      if (uVar8 != 0) {
        puVar9 = puVar10;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar9 = uVar1;
          puVar9 = puVar9 + 1;
        }
      }
    }
    bVar4 = -((byte)DAT_180112300 & 0x3f) & 0x3f;
    *puVar10 = (*(ulonglong *)param_1[1] >> bVar4 | *(ulonglong *)param_1[1] << 0x40 - bVar4) ^
               DAT_180112300;
    bVar4 = -((byte)DAT_180112300 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 =
         ((ulonglong)pvVar7 >> bVar4 | (longlong)pvVar7 << 0x40 - bVar4) ^ DAT_180112300;
    bVar4 = -((byte)DAT_180112300 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar10 + 1) >> bVar4 | (longlong)(puVar10 + 1) << 0x40 - bVar4) ^
         DAT_180112300;
    bVar4 = 0x40 - ((byte)DAT_180112300 & 0x3f) & 0x3f;
    uVar3 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar5 >> bVar4 | (longlong)puVar5 << 0x40 - bVar4) ^ DAT_180112300;
  }
  return uVar3;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1800c1410(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;

  uVar1 = DAT_180112300;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_180112300 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_180112300 ^ *puVar8) >> bVar5 | (DAT_180112300 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_180112300 ^ puVar8[1]) >> bVar5 | (DAT_180112300 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_180112300 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_180112300;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          uVar3 = *puVar8 ^ uVar3;
          *puVar8 = uVar1;
          (*(code *)(uVar3 >> (sbyte)uVar7 | uVar3 << 0x40 - (sbyte)uVar7))();
          uVar7 = (uint)DAT_180112300 & 0x3f;
          uVar11 = DAT_180112300 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_180112300 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_180112300;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_1800c3030(puVar10);
        uVar3 = DAT_180112300;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}


void FUN_1800c1528(undefined8 param_1)

{
  _register_onexit_function(&DAT_180115ef8,param_1);
  return;
}


void FUN_1800c1538(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_18;
  undefined8 local_10;

  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  return;
}


// Library Function - Single Match
//  _initialize_onexit_table
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;

  lVar1 = DAT_180112300;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_180112300;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}


// Library Function - Single Match
//  _register_onexit_function
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void _register_onexit_function(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;

  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}


undefined * FUN_1800c15f0(void)

{
  DAT_180115f30 = &PTR_DAT_1801124a0;
  return &DAT_180112401;
}


undefined8 FUN_1800c1610(void)

{
  undefined8 uVar1;

  _initialize_onexit_table((longlong *)&DAT_180115ef8);
  uVar1 = _initialize_onexit_table((longlong *)&DAT_180115f10);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}


undefined1 FUN_1800c1640(void)

{
  return 1;
}


undefined1 FUN_1800c1650(void)

{
  FUN_1800c119c();
  return 1;
}


undefined1 FUN_1800c1660(void)

{
  undefined8 uVar1;

  uVar1 = DAT_180112300;
  FUN_1800c2968(DAT_180112300);
  FUN_1800c0720(uVar1);
  FUN_1800c71f0(uVar1);
  FUN_1800cc940(uVar1);
  FUN_1800c0bcc(uVar1);
  return 1;
}


void FUN_1800c16a0(void)

{
  FUN_1800a78d0('\0');
  return;
}


undefined8 FUN_1800c16b0(void)

{
  uint uVar1;
  ulonglong uVar2;

  LOCK();
  uVar1 = *DAT_1801166e8;
  uVar2 = (ulonglong)uVar1;
  *DAT_1801166e8 = *DAT_1801166e8 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_1801166e8 != (uint *)&DAT_180112780)) {
    uVar2 = FUN_1800c3030(DAT_1801166e8);
    DAT_1801166e8 = (uint *)&DAT_180112780;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}


undefined1 FUN_1800c16f0(void)

{
  FUN_1800c3030(DAT_180115f60);
  DAT_180115f60 = (LPVOID)0x0;
  FUN_1800c3030(DAT_180115f68);
  DAT_180115f68 = (LPVOID)0x0;
  FUN_1800c3030(DAT_180116708);
  DAT_180116708 = (LPVOID)0x0;
  FUN_1800c3030(DAT_180116710);
  DAT_180116710 = (LPVOID)0x0;
  return 1;
}


void FUN_1800c174c(void)

{
  FUN_1800cc858(&PTR_FUN_1800f6c10,&PTR_DAT_1800f6d10);
  return;
}


bool FUN_1800c1760(void)

{
  __acrt_ptd *p_Var1;

  p_Var1 = FUN_1800c1f18();
  return p_Var1 != (__acrt_ptd *)0x0;
}


undefined1 FUN_1800c1774(void)

{
  FUN_1800c1e68();
  return 1;
}


undefined8 FUN_1800c1784(bool param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined8 uVar2;

  if (param_1) {
    if (DAT_180115da0 != 0) {
      iVar1 = common_flush_all(true);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_1800cc8d8(0x1800f6c10,0x1800f6d10);
  return uVar2;
}


undefined4 FUN_1800c17bc(void)

{
  undefined4 uVar1;

  uVar1 = FUN_1800c2060();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800c17cc(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1800c1804(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;

  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0))
    break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}


undefined8 FUN_1800c1840(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;

  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (longlong)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      p_Var2 = FUN_1800c2350();
      *(undefined4 *)p_Var2 = 0x22;
      FUN_1800c2ac4();
      return 0x22;
    }
    *param_1 = '\0';
  }
  p_Var2 = FUN_1800c2350();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1800c2ac4();
  return 0x16;
}


void FUN_1800c18c0(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];

  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_1800c7210(0x16);
  }
  puVar4 = auStack_28;
  if ((DAT_180112490 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1800c190b;
    FUN_1800c27f8(3,0x40000015,1);
  }
                    // WARNING: Subroutine does not return
  *(undefined **)(puVar4 + -8) = &UNK_1800c1915;
  FUN_1800c0be4(3);
}


LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;

  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_180116728,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_1800cdf00();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1800c06e0(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_1800c2350();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// Library Function - Single Match
//  _isctype_l
//
// Library: Visual Studio 2019 Release

int __cdecl _isctype_l(int _C,int _Type,_locale_t _Locale)

{
  BOOL BVar1;
  int iVar2;
  undefined1 auStackY_88 [32];
  CHAR local_48;
  CHAR local_47;
  undefined1 local_46;
  longlong local_40;
  longlong *local_38 [2];
  char local_28;
  ushort local_20 [4];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStackY_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,(__crt_locale_pointers *)_Locale);
  if (_C + 1U < 0x101) {
    local_20[0] = *(ushort *)(*local_38[0] + (longlong)_C * 2);
  }
  else {
    if (*(short *)(*local_38[0] + (ulonglong)(_C >> 8 & 0xff) * 2) < 0) {
      iVar2 = 2;
      local_46 = 0;
      local_48 = (CHAR)((uint)_C >> 8);
      local_47 = (CHAR)_C;
    }
    else {
      iVar2 = 1;
      local_47 = '\0';
      local_48 = (CHAR)_C;
    }
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    BVar1 = FUN_1800cc980((__crt_locale_pointers *)local_38,1,&local_48,iVar2,local_20,
                          *(UINT *)((longlong)local_38[0] + 0xc),1);
    if (BVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  return (uint)local_20[0] & _Type;
}


// Library Function - Multiple Matches With Same Base Name
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
// __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
// <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
// <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
// <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
// __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
// <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
// <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
// <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}


// Library Function - Multiple Matches With Same Base Name
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
// __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
// <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
// <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
// <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
// __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
// <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
// <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
// <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}


// Library Function - Multiple Matches With Same Base Name
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
// __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
// <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
// <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
// <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
// __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
// <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
// <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
// <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(undefined8 **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}


// Library Function - Multiple Matches With Same Base Name
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
// __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
// <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
// <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
// <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
// __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
// <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
// <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
// <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;

  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_180112780)) {
      FUN_1800c3030(piVar2);
    }
  }
  __acrt_unlock(*param_4);
  return;
}


// Library Function - Single Match
//  void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  undefined8 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined8 **local_10;

  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_180115f30;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_1800f6a70;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_180112780;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,local_38 + 1,&local_18,local_38);
  return;
}


void FUN_1800c1c30(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_1800c3030(param_1);
  }
  return;
}


// Library Function - Single Match
//  void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;

  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if (*(undefined **)param_1 != &DAT_1800f6a70) {
    FUN_1800c3030(*(undefined **)param_1);
  }
  FUN_1800c3030(*(LPVOID *)(local_20 + 0x70));
  FUN_1800c3030(*(LPVOID *)(local_20 + 0x58));
  FUN_1800c3030(*(LPVOID *)(local_20 + 0x60));
  FUN_1800c3030(*(LPVOID *)(local_20 + 0x68));
  FUN_1800c3030(*(LPVOID *)(local_20 + 0x48));
  FUN_1800c3030(*(LPVOID *)(local_20 + 0x50));
  FUN_1800c3030(*(LPVOID *)(local_20 + 0x78));
  FUN_1800c3030(*(LPVOID *)(local_20 + 0x80));
  FUN_1800c3030(*(LPVOID *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,local_28 + 1,&local_10,local_28);
  return;
}


__acrt_ptd * FUN_1800c1d48(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;

  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_180112494,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = _calloc_base(1,0x3c8);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_180112494,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_180112494,(PVOID)0x0);
        FUN_1800c3030(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_1800c3030((LPVOID)0x0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_180112494,(PVOID)0x0);
    FUN_1800c3030((LPVOID)0x0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}


// Library Function - Single Match
//  void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
// __crt_locale_data * __ptr64 const)
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;

  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_180115f30) && (ppuVar1 != &PTR_DAT_1801124a0)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref((longlong)param_2);
  }
  return;
}


void FUN_1800c1e68(void)

{
  __acrt_ptd *p_Var1;

  if (DAT_180112494 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_180112494);
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FlsSetValue(DAT_180112494,(PVOID)0x0);
    destroy_ptd_array(p_Var1);
    FUN_1800c3030(p_Var1);
  }
  return;
}


void FUN_1800c1eb8(void)

{
  __acrt_ptd *p_Var1;

  p_Var1 = FUN_1800c1f18();
  if (p_Var1 == (__acrt_ptd *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  return;
}


void FUN_1800c1ed4(void)

{
  PVOID pvVar1;
  __acrt_ptd *p_Var2;

  if (DAT_180112494 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_180112494);
  }
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
LAB_1800c1f10:
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  if (pvVar1 == (PVOID)0x0) {
    p_Var2 = FUN_1800c1d48();
    if (p_Var2 == (__acrt_ptd *)0x0) goto LAB_1800c1f10;
  }
  return;
}


__acrt_ptd * FUN_1800c1f18(void)

{
  DWORD dwErrCode;
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;

  p_Var2 = (__acrt_ptd *)0x0;
  if (DAT_180115f28 == '\0') {
    dwErrCode = GetLastError();
    if (DAT_180112494 == 0xffffffff) {
      p_Var1 = (__acrt_ptd *)0x0;
    }
    else {
      p_Var1 = FlsGetValue(DAT_180112494);
    }
    if (p_Var1 != (__acrt_ptd *)0xffffffffffffffff) {
      if (p_Var1 == (__acrt_ptd *)0x0) {
        p_Var1 = FUN_1800c1d48();
      }
      p_Var2 = p_Var1;
    }
    SetLastError(dwErrCode);
  }
  else {
    if (DAT_180112494 == 0xffffffff) {
      p_Var1 = (__acrt_ptd *)0x0;
    }
    else {
      p_Var1 = (__acrt_ptd *)FUN_1800c85d8();
    }
    if (p_Var1 != (__acrt_ptd *)0xffffffffffffffff) {
      if (p_Var1 == (__acrt_ptd *)0x0) {
        p_Var1 = FUN_1800c1d48();
      }
      p_Var2 = p_Var1;
    }
  }
  return p_Var2;
}


__acrt_ptd * FUN_1800c1fa8(undefined8 param_1,longlong param_2)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;

  p_Var2 = (__acrt_ptd *)0x0;
  if (DAT_180112494 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_180112494);
  }
  if (p_Var1 != (__acrt_ptd *)0xffffffffffffffff) {
    if ((p_Var1 == (__acrt_ptd *)0x0) && (p_Var1 = FUN_1800c1d48(), p_Var1 == (__acrt_ptd *)0x0)) {
      return (__acrt_ptd *)0x0;
    }
    p_Var2 = p_Var1 + param_2 * 0x3c8;
  }
  return p_Var2;
}


ulonglong FUN_1800c2010(void)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  undefined4 extraout_var_00;

  DAT_180115f28 = FUN_1800c8a0c();
  DAT_180112494 = FlsAlloc(FUN_1800c1c30);
  uVar2 = CONCAT44(extraout_var,DAT_180112494);
  if (DAT_180112494 != 0xffffffff) {
    p_Var3 = FUN_1800c1f18();
    if (p_Var3 != (__acrt_ptd *)0x0) {
      return CONCAT71((int7)((ulonglong)p_Var3 >> 8),1);
    }
    uVar1 = FUN_1800c2060();
    uVar2 = CONCAT44(extraout_var_00,uVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}


undefined4 FUN_1800c2060(void)

{
  BOOL in_EAX;

  if (DAT_180112494 != 0xffffffff) {
    in_EAX = FlsFree(DAT_180112494);
    DAT_180112494 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Library Function - Single Match
//  __acrt_update_locale_info
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;

  if ((*param_2 != DAT_180115f30) && ((DAT_180112cc0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}


void FUN_1800c20b8(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined **ppuVar1;

  if ((*param_2 != (&DAT_180115f30)[param_3]) && ((DAT_180112cc0 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}


void FUN_1800c20f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;

  if ((*param_2 != DAT_1801166e8) && ((DAT_180112cc0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_1800cc120();
    *param_2 = lVar1;
  }
  return;
}


void FUN_1800c2124(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;

  if ((*param_2 != (&DAT_1801166e8)[param_3]) && ((DAT_180112cc0 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_1800cc120();
    *param_2 = lVar1;
  }
  return;
}


// Library Function - Single Match
//  public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
// <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
// __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
// <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
// <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
// <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall
__crt_seh_guarded_call<void>::operator()<>
          (__crt_seh_guarded_call<void> *this,<> *param_1,<> *param_2,<> *param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;

  __acrt_lock(*(int *)param_1);
  for (plVar2 = &DAT_180115f30; plVar2 != &DAT_180115f38; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_1801124a0) {
      ppuVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_1801124a0);
      *plVar2 = (longlong)ppuVar1;
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}


undefined4 FUN_1800c21cc(void)

{
  undefined4 uVar1;

  uVar1 = DAT_180115f2c;
  LOCK();
  DAT_180115f2c = 1;
  UNLOCK();
  return uVar1;
}


// Library Function - Single Match
//  __acrt_uninitialize_locale
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_uninitialize_locale(void)

{
  <> local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];

  local_res10[0] = 4;
  local_res18[0] = 4;
  __crt_seh_guarded_call<void>::operator()<>
            ((__crt_seh_guarded_call<void> *)local_res8,(<> *)local_res18,local_res8,
             (<> *)local_res10);
  return;
}


uint FUN_1800c2210(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;

  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint *)(&DAT_1800f7394 + (ulonglong)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar9 = 0;
      uVar7 = 0x2c;
      do {
        uVar8 = uVar5 >> 1;
        if (uVar8 == 0) {
          if (uVar5 != 0) {
            puVar4 = (uint *)(&DAT_1800f7390 + uVar9 * 8);
            if (param_1 != *puVar4) {
              puVar4 = (uint *)0x0;
            }
LAB_1800c22b1:
            if (puVar4 != (uint *)0x0) {
              return puVar4[1];
            }
          }
          break;
        }
        uVar6 = uVar8 - 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar8;
        }
        lVar1 = uVar6 + uVar9;
        puVar4 = (uint *)(&DAT_1800f7390 + lVar1 * 8);
        if (param_1 == *puVar4) goto LAB_1800c22b1;
        uVar3 = lVar1 - 1;
        uVar5 = uVar6;
        if (*puVar4 <= param_1) {
          uVar9 = lVar1 + 1;
          uVar3 = uVar7;
          uVar5 = uVar8;
        }
        uVar7 = uVar3;
      } while (uVar9 <= uVar3);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      uVar2 = 8;
    }
  }
  return uVar2;
}


void FUN_1800c22e0(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;

  p_Var2 = FUN_1800c232c();
  *(uint *)p_Var2 = param_1;
  uVar1 = FUN_1800c2210(param_1);
  p_Var2 = FUN_1800c2350();
  *(uint *)p_Var2 = uVar1;
  return;
}


void FUN_1800c2308(uint param_1,longlong param_2)

{
  uint uVar1;

  *(undefined1 *)(param_2 + 0x38) = 1;
  *(uint *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_1800c2210(param_1);
  *(uint *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}


__acrt_ptd * FUN_1800c232c(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;

  p_Var1 = FUN_1800c1f18();
  p_Var2 = p_Var1 + 0x24;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_180112610;
  }
  return p_Var2;
}


__acrt_ptd * FUN_1800c2350(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;

  p_Var1 = FUN_1800c1f18();
  p_Var2 = p_Var1 + 0x20;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_18011260c;
  }
  return p_Var2;
}


// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800c2374(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                       undefined8 param_6,int param_7,UINT param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  LPCWSTR pWVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  LPCWSTR pWVar14;
  undefined1 auStackY_88 [32];
  undefined4 local_38 [2];
  ulonglong local_30;

  local_30 = DAT_180112300 ^ (ulonglong)local_38;
  iVar2 = param_5;
  if (0 < param_5) {
    sVar5 = __strncnt(param_4,(longlong)param_5);
    iVar4 = (int)sVar5;
    iVar2 = iVar4 + 1;
    if (param_5 <= iVar4) {
      iVar2 = iVar4;
    }
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  uVar6 = FUN_1800cc4b8(param_8,(-(uint)(param_9 != 0) & 8) + 1,param_4,iVar2,(LPWSTR)0x0,0);
  puVar12 = auStackY_88;
  uVar3 = (uint)uVar6;
  puVar13 = auStackY_88;
  if (uVar3 == 0) goto LAB_1800c267f;
  uVar6 = (longlong)(int)uVar3 * 2 + 0x10;
  uVar6 = -(ulonglong)((ulonglong)((longlong)(int)uVar3 * 2) < uVar6) & uVar6;
  if (uVar6 == 0) {
    pWVar9 = (LPCWSTR)0x0;
LAB_1800c2665:
    uVar6 = 0;
    if (pWVar9 != (LPCWSTR)0x0) goto LAB_1800c266c;
  }
  else {
    if (uVar6 < 0x401) {
      uVar8 = uVar6 + 0xf;
      if (uVar8 <= uVar6) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar8 & 0xfffffffffffffff0);
      puVar12 = auStackY_88 + lVar1;
      puVar10 = auStackY_88 + lVar1;
      puVar7 = (undefined4 *)((longlong)local_38 + lVar1);
      pWVar9 = (LPCWSTR)0x0;
      if (puVar7 == (undefined4 *)0x0) goto LAB_1800c2665;
      *puVar7 = 0xcccc;
LAB_1800c2480:
      pWVar9 = (LPCWSTR)(puVar7 + 4);
      puVar12 = puVar10;
    }
    else {
      puVar7 = _malloc_base(uVar6);
      puVar12 = auStackY_88;
      puVar10 = auStackY_88;
      pWVar9 = (LPCWSTR)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0xdddd;
        goto LAB_1800c2480;
      }
    }
    if (pWVar9 == (LPCWSTR)0x0) goto LAB_1800c2665;
    *(uint *)(puVar12 + 0x28) = uVar3;
    *(LPCWSTR *)(puVar12 + 0x20) = pWVar9;
    *(undefined8 *)(puVar12 + -8) = 0x1800c24aa;
    iVar2 = FUN_1800cc4b8(param_8,1,param_4,iVar2,*(LPWSTR *)(puVar12 + 0x20),
                          *(int *)(puVar12 + 0x28));
    if (iVar2 == 0) goto LAB_1800c2665;
    *(undefined8 *)(puVar12 + 0x40) = 0;
    *(undefined8 *)(puVar12 + 0x38) = 0;
    *(undefined8 *)(puVar12 + 0x30) = 0;
    *(undefined4 *)(puVar12 + 0x28) = 0;
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + -8) = 0x1800c24dd;
    iVar2 = FUN_1800c85f4(param_2,param_3,pWVar9,uVar3,*(LPWSTR *)(puVar12 + 0x20),
                          *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                          *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
    uVar6 = (ulonglong)iVar2;
    if (iVar2 == 0) goto LAB_1800c2665;
    if ((param_3 & 0x400) == 0) {
      uVar8 = uVar6 * 2 + 0x10;
      uVar8 = -(ulonglong)(uVar6 * 2 < uVar8) & uVar8;
      if (uVar8 == 0) {
        pWVar14 = (LPCWSTR)0x0;
        goto LAB_1800c2648;
      }
      if (uVar8 < 0x401) {
        uVar6 = uVar8 + 0xf;
        if (uVar6 <= uVar8) {
          uVar6 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar12 + -8) = 0x1800c2580;
        lVar1 = -(uVar6 & 0xfffffffffffffff0);
        puVar11 = puVar12 + lVar1;
        puVar7 = (undefined4 *)(puVar12 + lVar1 + 0x50);
        puVar12 = puVar12 + lVar1;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xcccc;
          puVar12 = puVar11;
LAB_1800c25ae:
          pWVar14 = (LPCWSTR)(puVar7 + 4);
          goto LAB_1800c25b2;
        }
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x1800c259e;
        puVar7 = _malloc_base(uVar8);
        pWVar14 = (LPCWSTR)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xdddd;
          goto LAB_1800c25ae;
        }
LAB_1800c25b2:
        if (pWVar14 != (LPCWSTR)0x0) {
          *(undefined8 *)(puVar12 + 0x40) = 0;
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          *(int *)(puVar12 + 0x28) = iVar2;
          *(LPCWSTR *)(puVar12 + 0x20) = pWVar14;
          *(undefined8 *)(puVar12 + -8) = 0x1800c25e4;
          iVar4 = FUN_1800c85f4(param_2,param_3,pWVar9,uVar3,*(LPWSTR *)(puVar12 + 0x20),
                                *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                                *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
          if (iVar4 != 0) {
            *(undefined8 *)(puVar12 + 0x38) = 0;
            *(undefined8 *)(puVar12 + 0x30) = 0;
            if (param_7 == 0) {
              *(undefined4 *)(puVar12 + 0x28) = 0;
              *(undefined8 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1800c2612;
              uVar3 = FUN_1800cc548(param_8,0,pWVar14,iVar2,*(LPSTR *)(puVar12 + 0x20),
                                    *(int *)(puVar12 + 0x28),*(LPCSTR *)(puVar12 + 0x30),
                                    *(LPBOOL *)(puVar12 + 0x38));
              if (uVar3 == 0) goto LAB_1800c2648;
            }
            else {
              *(int *)(puVar12 + 0x28) = param_7;
              *(undefined8 *)(puVar12 + 0x20) = param_6;
              *(undefined8 *)(puVar12 + -8) = 0x1800c262c;
              uVar3 = FUN_1800cc548(param_8,0,pWVar14,iVar2,*(LPSTR *)(puVar12 + 0x20),
                                    *(int *)(puVar12 + 0x28),*(LPCSTR *)(puVar12 + 0x30),
                                    *(LPBOOL *)(puVar12 + 0x38));
              if (uVar3 == 0) goto LAB_1800c264d;
            }
            uVar6 = (ulonglong)uVar3;
            if (*(int *)(pWVar14 + -8) == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x1800c2643;
              FUN_1800c3030(pWVar14 + -8);
            }
            goto LAB_1800c266c;
          }
LAB_1800c2648:
          if (pWVar14 != (LPCWSTR)0x0) {
LAB_1800c264d:
            if (*(int *)(pWVar14 + -8) == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x1800c265e;
              FUN_1800c3030(pWVar14 + -8);
            }
          }
        }
      }
      uVar6 = 0;
    }
    else if (param_7 != 0) {
      if (iVar2 <= param_7) {
        *(undefined8 *)(puVar12 + 0x40) = 0;
        *(undefined8 *)(puVar12 + 0x38) = 0;
        *(undefined8 *)(puVar12 + 0x30) = 0;
        *(int *)(puVar12 + 0x28) = param_7;
        *(undefined8 *)(puVar12 + 0x20) = param_6;
        *(undefined8 *)(puVar12 + -8) = 0x1800c2535;
        uVar3 = FUN_1800c85f4(param_2,param_3,pWVar9,uVar3,*(LPWSTR *)(puVar12 + 0x20),
                              *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                              *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
        uVar6 = (ulonglong)uVar3;
        if (uVar3 != 0) goto LAB_1800c266c;
      }
      goto LAB_1800c2665;
    }
LAB_1800c266c:
    if (*(int *)(pWVar9 + -8) == 0xdddd) {
      *(undefined8 *)(puVar12 + -8) = 0x1800c267d;
      FUN_1800c3030(pWVar9 + -8);
    }
  }
  uVar6 = uVar6 & 0xffffffff;
  puVar13 = puVar12;
LAB_1800c267f:
  *(undefined8 *)(puVar13 + -8) = 0x1800c268b;
  return uVar6;
}


// Library Function - Single Match
//  __acrt_LCMapStringA
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,ushort *param_2,uint param_3,char *param_4,
                        int param_5,undefined8 param_6,int param_7,UINT param_8,int param_9)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_1800c2374(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}


__acrt_ptd * FUN_1800c2740(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];

  p_Var1 = (__acrt_ptd *)*param_1;
  lVar2 = 0;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_1800c1fa8(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
  }
  return p_Var1;
}


longlong FUN_1800c27ac(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;

  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800c27f8(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 local_res8 [8];
  undefined1 auStackY_608 [32];
  ulonglong local_5c8 [2];
  PVOID local_5b8;
  _EXCEPTION_POINTERS local_5b0;
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_1800a5f10();
  }
  FUN_1800d22d0((undefined1 (*) [32])&local_598,0,0x98);
  FUN_1800d22d0((undefined1 (*) [32])&local_4f8,0,0x4d0);
  local_5c8[1] = 0;
  local_5b0.ExceptionRecord = &local_598;
  local_5c8[0] = 0;
  local_5b8 = (PVOID)0x0;
  local_5b0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8[0],local_4f8.Rip,FunctionEntry,&local_4f8,&local_5b8,local_5c8 + 1,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)local_res8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5b0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_1800a5f10();
  }
  return;
}


void FUN_1800c2968(undefined8 param_1)

{
  DAT_180115f38 = param_1;
  return;
}


void FUN_1800c2970(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  )

{
  longlong lVar1;
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
  FUN_1800c2a0c(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_1800adc30(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800c2a0c(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,longlong *param_6)

{
  __acrt_ptd *p_Var1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;

  p_Var1 = FUN_1800c2740(param_6);
  if ((p_Var1 == (__acrt_ptd *)0x0) || (pcVar4 = *(code **)(p_Var1 + 0x3b8), pcVar4 == (code *)0x0))
  {
    puVar2 = (ulonglong *)FUN_1800c27ac(0x180115f38,(longlong)param_6);
    bVar3 = (byte)DAT_180112300 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_180112300) >> bVar3 | (*puVar2 ^ DAT_180112300) << 0x40 - bVar3
                     );
    if (pcVar4 == (code *)0x0) {
                    // WARNING: Subroutine does not return
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}


void FUN_1800c2ac4(void)

{
  FUN_1800c2970((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}


// Library Function - Single Match
//  _invoke_watson
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];

  BVar2 = IsProcessorFeaturePresent(0x17);
  puVar3 = auStack_28;
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1800c2b12;
  FUN_1800c27f8(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x1800c2b18;
  hProcess = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x0001800c2b24. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(hProcess,0xc0000417);
  return;
}


undefined8 * FUN_1800c2b2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong local_res8 [4];

  *param_1 = 0;
  __acrt_lock(8);
  plVar2 = FUN_1800c2ba0(local_res8);
  puVar1 = (undefined8 *)*plVar2;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  __acrt_unlock(8);
  return param_1;
}


// Library Function - Single Match
//  void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl __acrt_stdio_free_stream(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return;
}


longlong * FUN_1800c2ba0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;

  plVar6 = (longlong *)(DAT_180115da0 + 0x18);
  plVar1 = plVar6 + (longlong)DAT_180115d98 + -3;
  do {
    if (plVar6 == plVar1) {
LAB_1800c2c1c:
      *param_1 = 0;
      return param_1;
    }
    lVar5 = *plVar6;
    if (lVar5 == 0) {
      pvVar4 = _calloc_base(1,0x58);
      *plVar6 = (longlong)pvVar4;
      FUN_1800c3030((LPVOID)0x0);
      if (*plVar6 != 0) {
        *(undefined4 *)(*plVar6 + 0x18) = 0xffffffff;
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(*plVar6 + 0x30),4000,0);
        lVar5 = *plVar6;
        LOCK();
        *(uint *)(lVar5 + 0x14) = *(uint *)(lVar5 + 0x14) | 0x2000;
        UNLOCK();
        FUN_1800bdb6c(lVar5);
LAB_1800c2c38:
        *param_1 = lVar5;
        return param_1;
      }
      goto LAB_1800c2c1c;
    }
    if ((*(uint *)(lVar5 + 0x14) >> 0xd & 1) == 0) {
      FUN_1800bdb6c(lVar5);
      uVar3 = *(uint *)(lVar5 + 0x14);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar5 + 0x14);
        bVar7 = uVar3 == uVar2;
        if (bVar7) {
          *(uint *)(lVar5 + 0x14) = uVar3 | 0x2000;
        }
        else {
          uVar3 = uVar2;
        }
        UNLOCK();
      } while (!bVar7);
      if ((~(byte)(uVar3 >> 0xd) & 1) != 0) goto LAB_1800c2c38;
      FUN_1800bdb78(lVar5);
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


// Library Function - Single Match
//  struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t const * __ptr64
// const)
//
// Library: Visual Studio 2019 Release

wchar_t * __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  __acrt_ptd *p_Var11;
  wchar_t *pwVar12;
  short *in_RDX;
  longlong lVar13;
  wchar_t *pwVar14;

  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  *(undefined4 *)(param_1 + 2) = DAT_180116740;
  sVar7 = *in_RDX;
  while (sVar7 == 0x20) {
    in_RDX = in_RDX + 1;
    sVar7 = *in_RDX;
  }
  if (sVar7 == 0x61) {
    param_1[0] = L'ĉ';
    param_1[1] = L'\0';
LAB_1800c2d02:
    param_1[2] = L'\x02';
    param_1[3] = L'\0';
  }
  else {
    if (sVar7 != 0x72) {
      if (sVar7 != 0x77) goto LAB_1800c2f60;
      param_1[0] = L'́';
      param_1[1] = L'\0';
      goto LAB_1800c2d02;
    }
    param_1[2] = L'\x01';
    param_1[3] = L'\0';
  }
  pwVar14 = in_RDX + 1;
  bVar5 = true;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar6 = false;
  lVar13 = 10;
LAB_1800c2d20:
  if (*pwVar14 == L'\0') goto LAB_1800c2e72;
  wVar1 = *pwVar14;
  if ((ushort)wVar1 < 0x54) {
    if (wVar1 == L'S') {
      if (bVar2) goto LAB_1800c2e50;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_1800c2dd1:
      bVar2 = true;
      bVar5 = true;
      goto LAB_1800c2e5d;
    }
    if (wVar1 == L' ') goto LAB_1800c2e5d;
    if (wVar1 == L'+') {
      if (!bVar3) {
        bVar3 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar5 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffc | 4;
          goto LAB_1800c2e5d;
        }
      }
    }
    else if (wVar1 == L',') {
      bVar6 = true;
    }
    else {
      if (wVar1 == L'D') {
        if ((*(uint *)param_1 & 0x40) == 0) {
          uVar8 = *(uint *)param_1 | 0x40;
          goto LAB_1800c2e59;
        }
        goto LAB_1800c2e50;
      }
      if (wVar1 == L'N') {
        *(uint *)param_1 = *(uint *)param_1 | 0x80;
        goto LAB_1800c2e5b;
      }
      if (wVar1 != L'R') goto LAB_1800c2f60;
      if (!bVar2) {
        *(uint *)param_1 = *(uint *)param_1 | 0x10;
        goto LAB_1800c2dd1;
      }
    }
  }
  else if (wVar1 == L'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar8 = *(uint *)param_1 | 0x1000;
      goto LAB_1800c2e59;
    }
  }
  else if (wVar1 == L'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x8000;
      goto LAB_1800c2e59;
    }
  }
  else if (wVar1 == L'c') {
    if (!bVar4) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x800;
LAB_1800c2e31:
      bVar4 = true;
      bVar5 = true;
      goto LAB_1800c2e5d;
    }
  }
  else if (wVar1 == L'n') {
    if (!bVar4) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffff7ff;
      goto LAB_1800c2e31;
    }
  }
  else if (wVar1 == L't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x4000;
      goto LAB_1800c2e59;
    }
  }
  else {
    if (wVar1 != L'x') goto LAB_1800c2f60;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar8 = *(uint *)param_1 | 0x400;
LAB_1800c2e59:
      *(uint *)param_1 = uVar8;
LAB_1800c2e5b:
      bVar5 = true;
      goto LAB_1800c2e5d;
    }
  }
LAB_1800c2e50:
  bVar5 = false;
LAB_1800c2e5d:
  pwVar14 = (wchar_t *)((longlong)pwVar14 + (ulonglong)(-(uint)bVar5 & 2));
  if (!bVar5) goto LAB_1800c2e72;
  goto LAB_1800c2d20;
LAB_1800c2e72:
  pwVar12 = pwVar14 + 1;
  if (!bVar6) {
    pwVar12 = pwVar14;
  }
  for (; *pwVar12 == L' '; pwVar12 = pwVar12 + 1) {
  }
  if (bVar6) {
    iVar9 = wcsncmp(pwVar12,L"ccs",3);
    if (iVar9 != 0) goto LAB_1800c2f60;
    for (pwVar12 = pwVar12 + 3; *pwVar12 == L' '; pwVar12 = pwVar12 + 1) {
    }
    if (*pwVar12 != L'=') goto LAB_1800c2f60;
    do {
      pwVar12 = pwVar12 + 1;
    } while (*pwVar12 == L' ');
    uVar10 = FUN_1800cd290(pwVar12,L"UTF-8",5);
    if ((int)uVar10 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      uVar10 = FUN_1800cd290(pwVar12,L"UTF-16LEUNICODE",8);
      if ((int)uVar10 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
        lVar13 = 0x10;
      }
      else {
        uVar10 = FUN_1800cd290(pwVar12,L"UNICODE",7);
        if ((int)uVar10 != 0) goto LAB_1800c2f60;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
        lVar13 = 0xe;
      }
    }
    for (pwVar12 = (wchar_t *)((longlong)pwVar12 + lVar13); wVar1 = *pwVar12, wVar1 == L' ';
        pwVar12 = pwVar12 + 1) {
    }
  }
  else {
    wVar1 = *pwVar12;
  }
  if (wVar1 == L'\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
LAB_1800c2f60:
  p_Var11 = FUN_1800c2350();
  *(undefined4 *)p_Var11 = 0x16;
  FUN_1800c2ac4();
  return param_1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800c2f90(char *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  errno_t eVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  wchar_t local_18 [8];

  puVar3 = (undefined8 *)__acrt_stdio_parse_mode<wchar_t>(local_18);
  uVar1 = *puVar3;
  puVar4 = (undefined8 *)0x0;
  if (*(char *)(puVar3 + 1) != '\0') {
    local_28 = (int)uVar1;
    local_res18[0] = 0;
    eVar2 = FID_conflict__sopen_s(local_res18,param_1,local_28,param_3,0x180);
    if (eVar2 == 0) {
      _DAT_180115da8 = _DAT_180115da8 + 1;
      uStack_24 = (uint)((ulonglong)uVar1 >> 0x20);
      LOCK();
      *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | uStack_24;
      UNLOCK();
      *(undefined4 *)(param_4 + 2) = 0;
      param_4[5] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      *(int *)(param_4 + 3) = local_res18[0];
      puVar4 = param_4;
    }
  }
  return puVar4;
}


void FUN_1800c3030(LPVOID param_1)

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


// Library Function - Single Match
//  _malloc_base
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;

  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_180116728,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_1800cdf00();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1800c06e0(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_1800c2350();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}


undefined8
FUN_1800c30f0(double *param_1,undefined1 (*param_2) [16],ulonglong param_3,char *param_4,
             longlong param_5,uint param_6,byte param_7,int param_8,__acrt_rounding_mode param_9,
             longlong *param_10)

{
  undefined1 (*pauVar1) [32];
  char *pcVar2;
  undefined1 (*pauVar3) [32];
  undefined1 uVar4;
  bool bVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [32];
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  short sVar13;
  short sVar14;
  undefined1 (*pauVar15) [32];
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;

  (*param_2)[0] = 0;
  uVar16 = 0;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  if (param_3 <= (ulonglong)(longlong)(int)(uVar16 + 0xb)) {
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x22;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
    return 0x22;
  }
  if (((ulonglong)*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
    uVar7 = FUN_1800c3484((ulonglong *)param_1,*param_2,param_3,param_4,param_5,uVar16,'\0',param_8,
                          param_9,param_10);
    if ((int)uVar7 != 0) {
      (*param_2)[0] = 0;
      return uVar7;
    }
    pauVar8 = FUN_1800d18d0(param_2,0x65);
    if (pauVar8 == (undefined1 (*) [16])0x0) {
      return 0;
    }
    (*pauVar8)[0] = (param_7 ^ 1) * ' ' + 'P';
    (*pauVar8)[3] = 0;
    return 0;
  }
  if ((longlong)*param_1 < 0) {
    (*param_2)[0] = 0x2d;
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
  }
  pauVar1 = (undefined1 (*) [32])(*param_2 + 1);
  uVar19 = 0x3ff;
  sVar14 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    (*param_2)[0] = 0x30;
    uVar19 = (ulonglong)(-(uint)(((ulonglong)*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
  }
  else {
    (*param_2)[0] = 0x31;
  }
  pauVar15 = (undefined1 (*) [32])(*param_2 + 2);
  if (uVar16 == 0) {
    uVar4 = 0;
  }
  else {
    if ((char)param_10[5] == '\0') {
      FUN_1800b0fd0(param_10);
    }
    uVar4 = *(undefined1 *)**(undefined8 **)(param_10[3] + 0xf8);
  }
  (*pauVar1)[0] = uVar4;
  if (((ulonglong)*param_1 & 0xfffffffffffff) != 0) {
    sVar13 = 0x30;
    uVar18 = 0xf000000000000;
    while (0 < (int)uVar16) {
      uVar6 = (short)(((ulonglong)*param_1 & uVar18) >> ((byte)sVar13 & 0x3f)) + 0x30;
      if (0x39 < uVar6) {
        uVar6 = uVar6 + sVar14;
      }
      (*pauVar15)[0] = (char)uVar6;
      uVar16 = uVar16 - 1;
      pauVar15 = (undefined1 (*) [32])(*pauVar15 + 1);
      uVar18 = uVar18 >> 4;
      sVar13 = sVar13 + -4;
      if (sVar13 < 0) goto LAB_1800c3342;
    }
    bVar5 = should_round_up(param_1,uVar18,sVar13,param_9);
    pauVar3 = pauVar15;
    if (!bVar5) goto LAB_1800c3368;
    while( true ) {
      pauVar9 = (undefined1 (*) [32])(pauVar3[-1] + 0x1f);
      cVar12 = (*pauVar9)[0];
      if ((cVar12 + 0xbaU & 0xdf) != 0) break;
      (*pauVar9)[0] = 0x30;
      pauVar3 = pauVar9;
    }
    if (pauVar9 == pauVar1) {
      pauVar3[-1][0x1e] = pauVar3[-1][0x1e] + '\x01';
    }
    else {
      if (cVar12 == '9') {
        cVar12 = (char)sVar14 + '9';
      }
      (*pauVar9)[0] = cVar12 + '\x01';
    }
  }
LAB_1800c3342:
  if (0 < (int)uVar16) {
    FUN_1800d22d0(pauVar15,0x30,(ulonglong)uVar16);
    pauVar15 = (undefined1 (*) [32])(*pauVar15 + uVar16);
  }
LAB_1800c3368:
  if ((*pauVar1)[0] == '\0') {
    pauVar15 = pauVar1;
  }
  (*pauVar15)[0] = (param_7 ^ 1) * ' ' + 'P';
  pcVar2 = *pauVar15 + 2;
  uVar16 = (uint)((ulonglong)*param_1 >> 0x34) & 0x7ff;
  lVar10 = uVar16 - uVar19;
  lVar11 = lVar10;
  if (lVar10 < 0) {
    lVar11 = uVar19 - uVar16;
  }
  uVar4 = 0x2b;
  if (lVar10 < 0) {
    uVar4 = 0x2d;
  }
  (*pauVar15)[1] = uVar4;
  *pcVar2 = '0';
  pcVar17 = pcVar2;
  if (lVar11 < 1000) {
LAB_1800c33ef:
    if (99 < lVar11) goto LAB_1800c33f5;
LAB_1800c3428:
    if (lVar11 < 10) goto LAB_1800c3459;
  }
  else {
    pcVar17 = *pauVar15 + 3;
    *pcVar2 = (char)(lVar11 / 1000) + '0';
    lVar11 = lVar11 % 1000;
    if (pcVar17 == pcVar2) goto LAB_1800c33ef;
LAB_1800c33f5:
    lVar10 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar11),8) + lVar11;
    lVar10 = (lVar10 >> 6) - (lVar10 >> 0x3f);
    *pcVar17 = (char)lVar10 + '0';
    pcVar17 = pcVar17 + 1;
    lVar11 = lVar11 + lVar10 * -100;
    if (pcVar17 == pcVar2) goto LAB_1800c3428;
  }
  *pcVar17 = (char)(lVar11 / 10) + '0';
  pcVar17 = pcVar17 + 1;
  lVar11 = lVar11 % 10;
LAB_1800c3459:
  *pcVar17 = (char)lVar11 + '0';
  pcVar17[1] = '\0';
  return 0;
}


void FUN_1800c3484(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,char *param_4,
                  longlong param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [4];

  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar2 = FUN_1800ce11c(*param_1,param_6 + 1,1,local_18,param_4,param_5);
  uVar3 = (param_3 - (0 < param_6)) - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == 0xffffffffffffffff) {
    uVar3 = 0xffffffffffffffff;
  }
  iVar1 = FUN_1800ce00c(param_2 + (ulonglong)(0 < param_6) + (ulonglong)(local_18[0] == 0x2d),uVar3,
                        param_6 + 1,local_18,(int)uVar2,param_9,param_10);
  if (iVar1 == 0) {
    FUN_1800c3588(param_2,param_3,param_6,param_7,param_8,local_18,0,param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}


undefined8
FUN_1800c3588(undefined1 *param_1,ulonglong param_2,int param_3,char param_4,int param_5,
             int *param_6,byte param_7,longlong *param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar7;
  longlong lVar6;

  iVar5 = 0;
  if (0 < param_3) {
    iVar5 = param_3;
  }
  if ((ulonglong)(longlong)(iVar5 + 9) < param_2) {
    if ((param_7 != 0) && (puVar2 = (undefined8 *)(param_1 + (*param_6 == 0x2d)), 0 < param_3)) {
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (*(char *)((longlong)puVar2 + lVar6) != '\0');
      FUN_1800d1c20((undefined8 *)((longlong)puVar2 + 1),puVar2,lVar7 + 2);
    }
    puVar3 = param_1;
    if (*param_6 == 0x2d) {
      *param_1 = 0x2d;
      puVar3 = param_1 + 1;
    }
    if (0 < param_3) {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      if ((char)param_8[5] == '\0') {
        FUN_1800b0fd0(param_8);
      }
      *puVar3 = *(undefined1 *)**(undefined8 **)(param_8[3] + 0xf8);
    }
    pcVar4 = puVar3 + ((ulonglong)param_7 ^ 1) + (longlong)param_3;
    puVar3 = param_1 + (param_2 - (longlong)pcVar4);
    if (param_2 == 0xffffffffffffffff) {
      puVar3 = (undefined1 *)0xffffffffffffffff;
    }
    uVar1 = FUN_1800c1840(pcVar4,(longlong)puVar3,0x1800f75fc);
    if ((int)uVar1 != 0) {
                    // WARNING: Subroutine does not return
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *pcVar4 = 'E';
    }
    if (**(char **)(param_6 + 2) != '0') {
      iVar5 = param_6[1] + -1;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        pcVar4[1] = '-';
      }
      if (99 < iVar5) {
        pcVar4[2] = pcVar4[2] + (char)(iVar5 / 100);
        iVar5 = iVar5 % 100;
      }
      if (9 < iVar5) {
        pcVar4[3] = pcVar4[3] + (char)(iVar5 / 10);
        iVar5 = iVar5 % 10;
      }
      pcVar4[4] = pcVar4[4] + (char)iVar5;
    }
    if ((param_5 == 2) && (pcVar4[2] == '0')) {
      FUN_1800d1c20((undefined8 *)(pcVar4 + 2),(undefined8 *)(pcVar4 + 3),3);
    }
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_8 + 6) = 1;
    *(undefined4 *)((longlong)param_8 + 0x2c) = 0x22;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_8);
    uVar1 = 0x22;
  }
  return uVar1;
}


void FUN_1800c376c(ulonglong *param_1,undefined8 *param_2,longlong param_3,char *param_4,
                  longlong param_5,int param_6,int param_7,longlong *param_8)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [4];

  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar2 = FUN_1800ce11c(*param_1,param_6,0,local_18,param_4,param_5);
  uVar3 = param_3 - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == -1) {
    uVar3 = 0xffffffffffffffff;
  }
  iVar1 = FUN_1800ce00c((char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2),uVar3,
                        local_18[1] + param_6,local_18,(int)uVar2,param_7,param_8);
  if (iVar1 == 0) {
    FUN_1800c3844(param_2,param_3,param_6,local_18,'\0',param_8);
  }
  else {
    *(undefined1 *)param_2 = 0;
  }
  return;
}


undefined8
FUN_1800c3844(undefined8 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5,
             longlong *param_6)

{
  undefined1 (*pauVar1) [32];
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;

  if ((param_5 != '\0') && (param_4[1] + -1 == param_3)) {
    *(undefined2 *)((longlong)param_1 + (longlong)param_4[1] + -1 + (ulonglong)(*param_4 == 0x2d)) =
         0x30;
  }
  if (*param_4 == 0x2d) {
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (undefined8 *)((longlong)param_1 + 1);
  }
  iVar3 = param_4[1];
  if (iVar3 < 1) {
    if ((iVar3 == 0) && (**(char **)(param_4 + 2) == '0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((param_5 == '\0') || (!bVar2)) {
      lVar6 = -1;
      do {
        lVar5 = lVar6;
        lVar6 = lVar5 + 1;
      } while (*(char *)((longlong)param_1 + lVar6) != '\0');
      FUN_1800d1c20((undefined8 *)((longlong)param_1 + 1),param_1,lVar5 + 2);
    }
    *(undefined1 *)param_1 = 0x30;
    puVar4 = (undefined8 *)((longlong)param_1 + 1);
  }
  else {
    puVar4 = (undefined8 *)((longlong)param_1 + (longlong)iVar3);
  }
  if (0 < param_3) {
    pauVar1 = (undefined1 (*) [32])((longlong)puVar4 + 1);
    lVar6 = -1;
    do {
      lVar5 = lVar6;
      lVar6 = lVar5 + 1;
    } while (*(char *)((longlong)puVar4 + lVar6) != '\0');
    FUN_1800d1c20((undefined8 *)pauVar1,puVar4,lVar5 + 2);
    if ((char)param_6[5] == '\0') {
      FUN_1800b0fd0(param_6);
    }
    *(undefined1 *)puVar4 = *(undefined1 *)**(undefined8 **)(param_6[3] + 0xf8);
    if (param_4[1] < 0) {
      iVar3 = -param_4[1];
      if ((param_5 != '\0') || (iVar3 < param_3)) {
        param_3 = iVar3;
      }
      lVar6 = -1;
      do {
        lVar5 = lVar6;
        lVar6 = lVar5 + 1;
      } while ((*pauVar1)[lVar6] != '\0');
      FUN_1800d1c20((undefined8 *)(*pauVar1 + param_3),(undefined8 *)pauVar1,lVar5 + 2);
      FUN_1800d22d0(pauVar1,0x30,(longlong)param_3);
    }
  }
  return 0;
}


void FUN_1800c3994(ulonglong *param_1,undefined8 *param_2,ulonglong param_3,char *param_4,
                  longlong param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  int local_18 [4];

  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar3 = FUN_1800ce11c(*param_1,param_6,0,local_18,param_4,param_5);
  uVar4 = param_3 - (local_18[0] == 0x2d);
  iVar6 = local_18[1] + -1;
  pcVar1 = (char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2);
  if (param_3 == 0xffffffffffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  iVar2 = FUN_1800ce00c(pcVar1,uVar4,param_6,local_18,(int)uVar3,param_9,param_10);
  if (iVar2 == 0) {
    iVar2 = local_18[1] + -1;
    if ((iVar2 < -4) || (param_6 <= iVar2)) {
      FUN_1800c3588((undefined1 *)param_2,param_3,param_6,param_7,param_8,local_18,1,param_10);
    }
    else {
      if (iVar6 < iVar2) {
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      FUN_1800c3844(param_2,param_3,param_6,local_18,'\x01',param_10);
    }
  }
  else {
    *(undefined1 *)param_2 = 0;
  }
  return;
}


// Library Function - Single Match
//  bool __cdecl should_round_up(double const * __ptr64 const,unsigned __int64,short,enum
// __acrt_rounding_mode)
//
// Library: Visual Studio 2019 Release

bool __cdecl
should_round_up(double *param_1,__uint64 param_2,short param_3,__acrt_rounding_mode param_4)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;

  bVar4 = (byte)param_3;
  uVar2 = (ushort)(((ulonglong)*param_1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
  if (param_4 == 0) {
    return 7 < uVar2;
  }
  iVar3 = fegetround();
  if (iVar3 == 0) {
    dVar1 = *param_1;
    uVar2 = (ushort)(((ulonglong)dVar1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
    if (8 < uVar2) {
      return true;
    }
    if (7 < uVar2) {
      if (((1L << (bVar4 & 0x3f)) - 1U & (ulonglong)dVar1 & 0xfffffffffffff) != 0) {
        return true;
      }
      if (param_3 == 0x30) {
        bVar4 = ((ulonglong)dVar1 & 0x7ff0000000000000) != 0;
      }
      else {
        bVar4 = (byte)(((ulonglong)dVar1 >> 4 & param_2 & 0xffffffffffff) >> (bVar4 & 0x3f));
      }
      return (bool)(bVar4 & 1);
    }
  }
  else if (iVar3 == 0x200) {
    if ((uVar2 != 0) && (-1 < (longlong)*param_1)) {
      return true;
    }
  }
  else {
    if (iVar3 != 0x100) {
      return false;
    }
    if ((uVar2 != 0) && ((longlong)*param_1 < 0)) {
      return true;
    }
  }
  return false;
}


undefined8
FUN_1800c3c00(double *param_1,undefined1 (*param_2) [16],ulonglong param_3,char *param_4,
             longlong param_5,int param_6,uint param_7,ulonglong param_8,
             __acrt_rounding_mode param_9,longlong *param_10)

{
  double dVar1;
  longlong lVar2;
  uint uVar3;
  __acrt_rounding_mode _Var4;
  byte bVar5;
  undefined8 uVar6;
  ulonglong uVar7;

  if (param_2 == (undefined1 (*) [16])0x0) {
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x16;
  }
  else {
    if (((param_3 != 0) && (param_4 != (char *)0x0)) && (param_5 != 0)) {
      if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      bVar5 = (byte)uVar3;
      if (((param_8 & 8) == 0) &&
         (dVar1 = *param_1, ((uint)((ulonglong)dVar1 >> 0x34) & 0x7ff) == 0x7ff)) {
        uVar6 = 0xc;
        if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) {
          lVar2 = 0;
        }
        else if (((longlong)dVar1 < 0) && (((ulonglong)dVar1 & 0xfffffffffffff) == 0x8000000000000))
        {
          lVar2 = 0xc;
        }
        else {
          lVar2 = (-(ulonglong)(((ulonglong)dVar1 & 0x8000000000000) != 0) & 0xfffffffffffffffc) + 8
          ;
        }
        if (param_3 < -((longlong)dVar1 >> 0x3f) + 4U) {
          (*param_2)[0] = 0;
        }
        else {
          uVar7 = 0xffffffffffffffff;
          if ((char)-((longlong)dVar1 >> 0x3f) != '\0') {
            (*param_2)[0] = 0x2d;
            param_2 = (undefined1 (*) [16])(*param_2 + 1);
            (*param_2)[0] = 0;
            if (param_3 != 0xffffffffffffffff) {
              param_3 = param_3 - 1;
            }
          }
          uVar3 = (uVar3 ^ 1) * 2;
          do {
            uVar7 = uVar7 + 1;
          } while ((&PTR_DAT_1800f7530)[(ulonglong)uVar3 + lVar2][uVar7] != '\0');
          uVar6 = FUN_1800c1840((char *)param_2,param_3,
                                (longlong)
                                (&PTR_DAT_1800f7530)
                                [(ulonglong)(uVar3 + (param_3 <= uVar7)) + lVar2]);
          if ((int)uVar6 != 0) {
                    // WARNING: Subroutine does not return
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar6 = 0;
        }
        return uVar6;
      }
      uVar3 = (uint)(param_8 >> 4);
      _Var4 = -(uint)((param_8 & 0x20) != 0) & param_9;
      if (param_6 == 0x41) {
LAB_1800c3e87:
        uVar6 = FUN_1800c30f0(param_1,param_2,param_3,param_4,param_5,param_7,bVar5,uVar3 & 1 | 2,
                              _Var4,param_10);
        return uVar6;
      }
      if (param_6 == 0x45) {
LAB_1800c3e4d:
        uVar6 = FUN_1800c3484((ulonglong *)param_1,*param_2,param_3,param_4,param_5,param_7,bVar5,
                              uVar3 & 1 | 2,_Var4,param_10);
        return uVar6;
      }
      if (param_6 == 0x46) {
LAB_1800c3e1c:
        uVar6 = FUN_1800c376c((ulonglong *)param_1,(undefined8 *)param_2,param_3,param_4,param_5,
                              param_7,_Var4,param_10);
        return uVar6;
      }
      if (param_6 != 0x47) {
        if (param_6 == 0x61) goto LAB_1800c3e87;
        if (param_6 == 0x65) goto LAB_1800c3e4d;
        if (param_6 == 0x66) goto LAB_1800c3e1c;
      }
      uVar6 = FUN_1800c3994((ulonglong *)param_1,(undefined8 *)param_2,param_3,param_4,param_5,
                            param_7,bVar5,uVar3 & 1 | 2,_Var4,param_10);
      return uVar6;
    }
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x16;
  }
  FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
  return 0x16;
}


undefined4
FUN_1800c3ee8(int *param_1,undefined1 (*param_2) [32],ulonglong param_3,WCHAR param_4,
             longlong *param_5)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong local_res10;
  WCHAR local_res20 [4];

  uVar5 = 0;
  if ((param_2 == (undefined1 (*) [32])0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if ((char)param_5[5] == '\0') {
      FUN_1800b0fd0(param_5);
    }
    uVar1 = *(uint *)(param_5[3] + 0xc);
    if (uVar1 == 0xfde9) {
      local_res10 = 0;
      uVar4 = FUN_1800cf39c((byte *)param_2,(uint)(ushort)local_res20[0],&local_res10,
                            (longlong)param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = (int)uVar4;
      }
      if ((int)uVar4 < 5) {
        return 0;
      }
      if ((char)param_5[6] != '\0') {
        uVar5 = *(undefined4 *)((longlong)param_5 + 0x2c);
      }
      return uVar5;
    }
    if (*(longlong *)(param_5[3] + 0x138) == 0) {
      if (0xff < (ushort)local_res20[0]) {
        if ((param_2 != (undefined1 (*) [32])0x0) && (param_3 != 0)) {
          FUN_1800d22d0(param_2,0,param_3);
        }
        goto LAB_1800c3fca;
      }
      if (param_2 == (undefined1 (*) [32])0x0) {
LAB_1800c3ff6:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        (*param_2)[0] = (char)local_res20[0];
        goto LAB_1800c3ff6;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVar2 = FUN_1800cc548(uVar1,0,local_res20,1,(LPSTR)param_2,(int)param_3,(LPCSTR)0x0,
                            (LPBOOL)&local_res10);
      if (iVar2 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar2;
          return 0;
        }
LAB_1800c3fca:
        *(undefined4 *)((longlong)param_5 + 0x2c) = 0x2a;
        *(undefined1 *)(param_5 + 6) = 1;
        return 0x2a;
      }
      DVar3 = GetLastError();
      if (DVar3 != 0x7a) goto LAB_1800c3fca;
      if ((param_2 != (undefined1 (*) [32])0x0) && (param_3 != 0)) {
        FUN_1800d22d0(param_2,0,param_3);
      }
    }
    uVar5 = 0x22;
  }
  else {
    uVar5 = 0x16;
  }
  *(undefined4 *)((longlong)param_5 + 0x2c) = uVar5;
  *(undefined1 *)(param_5 + 6) = 1;
  FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  return uVar5;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1800c4098(LPWSTR param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  UINT UVar1;
  longlong *plVar2;
  int iVar3;

  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_180115f40 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        FUN_1800b0fd0(param_4);
      }
      plVar2 = (longlong *)param_4[3];
      UVar1 = *(UINT *)((longlong)plVar2 + 0xc);
      if (UVar1 == 0xfde9) {
        iVar3 = FUN_1800c4550(param_1,param_2,param_3,(uint *)&DAT_180115f40,(longlong)param_4);
        if (iVar3 < 0) {
          return -1;
        }
        return iVar3;
      }
      if (plVar2[0x27] == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)*param_2;
        }
        return 1;
      }
      if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
        iVar3 = (int)plVar2[1];
        if ((((1 < iVar3) && (iVar3 <= (int)param_3)) &&
            (iVar3 = FUN_1800cc4b8(UVar1,9,(LPCSTR)param_2,iVar3,param_1,
                                   (uint)(param_1 != (LPWSTR)0x0)), iVar3 != 0)) ||
           (((ulonglong)(longlong)*(int *)(param_4[3] + 8) <= param_3 && (param_2[1] != 0)))) {
          return *(int *)(param_4[3] + 8);
        }
      }
      else {
        iVar3 = FUN_1800cc4b8(UVar1,9,(LPCSTR)param_2,1,param_1,(uint)(param_1 != (LPWSTR)0x0));
        if (iVar3 != 0) {
          return 1;
        }
      }
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
      return -1;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}


int FUN_1800c4210(LPWSTR param_1,byte *param_2,ulonglong param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
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
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180115f2c != 0) goto LAB_1800c425b;
    local_30 = PTR_PTR_1801125f8._0_4_;
    uStack_2c = PTR_PTR_1801125f8._4_4_;
    uStack_28 = PTR_DAT_180112600._0_4_;
    uStack_24 = PTR_DAT_180112600._4_4_;
  }
  else {
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
    uStack_24 = param_4[3];
  }
  local_20 = '\x01';
LAB_1800c425b:
  iVar1 = FUN_1800c4098(param_1,param_2,param_3,local_48);
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
  return iVar1;
}


ulonglong FUN_1800c42b4(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;

  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (ulonglong)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    return 3;
  }
  uVar2 = 0xffffffff;
  if ((bVar1 & 0xf8) == 0xf0) {
    uVar2 = 4;
  }
  return uVar2;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800c42ec(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,
                       longlong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStack_78;
  puVar5 = (uint *)&DAT_180115f48;
  if (param_4 != (uint *)0x0) {
    puVar5 = param_4;
  }
  pbVar6 = &DAT_1800d8c40;
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) {
LAB_1800c434e:
    uVar2 = 0xfffffffffffffffe;
  }
  else {
    if (*(short *)((longlong)puVar5 + 6) == 0) {
      uVar3 = FUN_1800c42b4(pbVar6);
      uVar4 = (uint)uVar3;
      uVar8 = (ulonglong)(int)uVar4;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (uVar4 < 2) {
        if (puVar10 != (uint *)0x0) {
          *puVar10 = (uint)bVar1;
        }
        return uVar8;
      }
      if (uVar4 - 2 < 3) {
        bVar7 = (byte)uVar3;
        uVar4 = (1 << (7 - bVar7 & 0x1f)) - 1U & (uint)bVar1;
LAB_1800c43d9:
        uVar9 = (ulonglong)bVar7;
        uVar3 = uVar9;
        if (uVar2 <= uVar9) {
          uVar3 = uVar2;
        }
        while ((ulonglong)((longlong)pbVar6 - (longlong)param_2) < uVar3) {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if ((bVar1 & 0xc0) != 0x80) goto LAB_1800c4482;
          uVar4 = bVar1 & 0x3f | uVar4 << 6;
        }
        if (uVar3 < uVar9) {
          *(ushort *)(puVar5 + 1) = (ushort)uVar8 & 0xff;
          *(ushort *)((longlong)puVar5 + 6) = (ushort)(byte)(bVar7 - (char)uVar3);
          *puVar5 = uVar4;
          goto LAB_1800c434e;
        }
        if ((0x7ff < uVar4 - 0xd800) && (uVar4 < 0x110000)) {
          auStack_60[2] = 0x80;
          auStack_60[3] = 0x800;
          auStack_60[4] = 0x10000;
          if (auStack_60[uVar8 & 0xff] <= uVar4) {
            if (puVar10 != (uint *)0x0) {
              *puVar10 = uVar4;
            }
            uVar2 = FUN_1800cf440(-(ulonglong)(uVar4 != 0) & uVar9,(undefined8 *)puVar5);
            return uVar2;
          }
        }
      }
    }
    else {
      bVar1 = (byte)puVar5[1];
      uVar8 = (ulonglong)bVar1;
      uVar4 = *puVar5;
      bVar7 = *(byte *)((longlong)puVar5 + 6);
      if ((((byte)(bVar1 - 2) < 3) && (bVar7 != 0)) && (bVar7 < bVar1)) goto LAB_1800c43d9;
    }
LAB_1800c4482:
    uVar2 = FUN_1800cf448((undefined8 *)puVar5,param_5);
  }
  return uVar2;
}


undefined8 FUN_1800c44ac(byte *param_1,uint param_2,int *param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_res18 [2];

  piVar3 = &DAT_180115f50;
  if (param_3 != (int *)0x0) {
    piVar3 = param_3;
  }
  uVar1 = (short)param_2 + 0x2400;
  if (*piVar3 == 0) {
    if (0x3ff < uVar1) {
      if ((ushort)((short)param_2 + 0x2800U) < 0x400) {
        *piVar3 = (param_2 & 0x27ff) * 0x400 + 0x10000;
        return 0;
      }
      uVar2 = FUN_1800cf39c(param_1,param_2 & 0xffff,(undefined8 *)piVar3,param_4);
      return uVar2;
    }
  }
  else if (uVar1 < 0x400) {
    local_res18[0] = 0;
    uVar2 = FUN_1800cf39c(param_1,(param_2 & 0x23ff) + *piVar3,local_res18,param_4);
    uVar2 = FUN_1800cf440(uVar2,(undefined8 *)piVar3);
    return uVar2;
  }
  uVar2 = FUN_1800cf448((undefined8 *)piVar3,param_4);
  return uVar2;
}


void FUN_1800c4550(undefined2 *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  uint local_18 [4];

  local_18[0] = 0;
  uVar1 = FUN_1800c42ec((ulonglong)local_18,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}


longlong FUN_1800c4598(ushort *param_1,undefined8 *param_2,ulonglong param_3,uint *param_4,
                      longlong param_5)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint local_res8 [2];

  pbVar4 = (byte *)*param_2;
  puVar2 = param_1;
  if (param_1 == (ushort *)0x0) {
    lVar3 = 0;
    while( true ) {
      if (*pbVar4 == 0) {
        uVar5 = 1;
      }
      else if (pbVar4[1] == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = (ulonglong)(pbVar4[2] != 0) + 3;
      }
      uVar5 = FUN_1800c42ec(0,pbVar4,uVar5,param_4,param_5);
      if (uVar5 == 0xffffffffffffffff) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (uVar5 == 0) break;
      pbVar4 = pbVar4 + uVar5;
      lVar1 = lVar3 + 1;
      if (uVar5 != 4) {
        lVar1 = lVar3;
      }
      lVar3 = lVar1 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pbVar4 == 0) {
        uVar5 = 1;
      }
      else if (pbVar4[1] == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = (ulonglong)(pbVar4[2] != 0) + 3;
      }
      local_res8[0] = 0;
      uVar5 = FUN_1800c42ec((ulonglong)local_res8,pbVar4,uVar5,param_4,param_5);
      if (uVar5 == 0xffffffffffffffff) {
        *param_2 = pbVar4;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (uVar5 == 0) {
        pbVar4 = (byte *)0x0;
        *puVar2 = 0;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar2 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar2 = puVar2 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar2 = (ushort)local_res8[0];
      pbVar4 = pbVar4 + uVar5;
      puVar2 = puVar2 + 1;
    }
    *param_2 = pbVar4;
    lVar3 = (longlong)puVar2 - (longlong)param_1 >> 1;
  }
  return lVar3;
}


// Library Function - Single Match
//  _fileno
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl _fileno(FILE *_File)

{
  int iVar1;
  __acrt_ptd *p_Var2;

  if (_File == (FILE *)0x0) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    iVar1 = -1;
  }
  else {
    iVar1 = _File->_flag;
  }
  return iVar1;
}


bool FUN_1800c4778(void)

{
  return DAT_180115f58 == (DAT_180112300 | 1);
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

WCHAR FUN_1800c4790(WCHAR param_1,FILE *param_2,longlong *param_3)

{
  char **ppcVar1;
  WCHAR WVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined1 auStackY_78 [32];
  int local_48;
  byte local_44 [12];
  ulonglong local_38;

  local_38 = DAT_180112300 ^ (ulonglong)auStackY_78;
  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    iVar3 = _fileno(param_2);
    puVar8 = &DAT_180112620;
    if ((iVar3 == -1) || (iVar3 = _fileno(param_2), iVar3 == -2)) {
      puVar6 = &DAT_180112620;
    }
    else {
      iVar3 = _fileno(param_2);
      uVar4 = _fileno(param_2);
      puVar6 = (undefined *)
               ((&DAT_180115f70)[(longlong)iVar3 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
    }
    if (1 < (byte)(puVar6[0x39] - 1)) {
      iVar3 = _fileno(param_2);
      if ((iVar3 != -1) && (iVar3 = _fileno(param_2), iVar3 != -2)) {
        iVar3 = _fileno(param_2);
        uVar4 = _fileno(param_2);
        puVar8 = (undefined *)
                 ((ulonglong)(uVar4 & 0x3f) * 0x48 + (&DAT_180115f70)[(longlong)iVar3 >> 6]);
      }
      iVar3 = 0;
      if ((char)puVar8[0x38] < '\0') {
        local_48 = 0;
        iVar5 = FUN_1800c3ee8(&local_48,(undefined1 (*) [32])local_44,5,param_1,param_3);
        if (iVar5 != 0) {
          return L'\xffff';
        }
        if (local_48 < 1) {
          return param_1;
        }
        pbVar9 = local_44;
        do {
          uVar7 = FUN_1800c4924(*pbVar9,param_2,(longlong)param_3);
          if ((int)uVar7 == -1) {
            return L'\xffff';
          }
          iVar3 = iVar3 + 1;
          pbVar9 = pbVar9 + 1;
        } while (iVar3 < local_48);
        return param_1;
      }
    }
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -2;
    if (-1 < *(int *)ppcVar1) {
      *(WCHAR *)param_2->_ptr = param_1;
      param_2->_ptr = param_2->_ptr + 2;
      return param_1;
    }
  }
  else {
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -2;
    if (-1 < *(int *)ppcVar1) {
      *(WCHAR *)param_2->_ptr = param_1;
      param_2->_ptr = param_2->_ptr + 2;
      return param_1;
    }
  }
  WVar2 = FUN_1800c60b0(param_1,param_2,param_3);
  return WVar2;
}


ulonglong FUN_1800c4924(byte param_1,FILE *param_2,longlong param_3)

{
  char **ppcVar1;
  uint *puVar2;
  bool bVar3;
  undefined8 uVar4;

  ppcVar1 = &param_2->_base;
  *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
  if (-1 < *(int *)ppcVar1) {
    *param_2->_ptr = param_1;
    param_2->_ptr = param_2->_ptr + 1;
    return (ulonglong)param_1;
  }
  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        bVar3 = FUN_1800c5f5c((longlong *)param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (!bVar3) goto LAB_1800c6016;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar2 = (uint *)((longlong)&param_2->_base + 4);
        *puVar2 = *puVar2 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 2;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
         (uVar4 = FUN_1800c493c(param_2), (char)uVar4 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
      }
      bVar3 = FUN_1800c5d68(param_1,param_2,(longlong *)param_3);
      if (bVar3) {
        return (ulonglong)param_1;
      }
      goto LAB_1800c6016;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x30) = 1;
LAB_1800c6016:
  LOCK();
  puVar2 = (uint *)((longlong)&param_2->_base + 4);
  *puVar2 = *puVar2 | 0x10;
  UNLOCK();
  return 0xffffffff;
}


ulonglong FUN_1800c493c(FILE *param_1)

{
  byte bVar1;
  uint uVar2;
  FILE *pFVar3;
  undefined7 extraout_var;
  ulonglong uVar4;

  pFVar3 = (FILE *)FUN_1800bdaf0(2);
  if (param_1 == pFVar3) {
    uVar4 = CONCAT71((int7)((ulonglong)pFVar3 >> 8),1);
  }
  else {
    pFVar3 = (FILE *)FUN_1800bdaf0(1);
    if (param_1 == pFVar3) {
      uVar2 = _fileno(param_1);
      bVar1 = FUN_1800cf45c(uVar2);
      uVar4 = CONCAT71(extraout_var,(int)CONCAT71(extraout_var,bVar1) != 0);
    }
    else {
      uVar4 = (ulonglong)pFVar3 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1800c4988(FILE *param_1)

{
  uint *puVar1;
  uint uVar2;
  FILE *pFVar3;
  LPVOID pvVar4;
  longlong *plVar5;

  pFVar3 = (FILE *)FUN_1800c493c(param_1);
  if ((char)pFVar3 != '\0') {
    pFVar3 = (FILE *)FUN_1800bdaf0(1);
    if (param_1 == pFVar3) {
      plVar5 = &DAT_180115f60;
    }
    else {
      pFVar3 = (FILE *)FUN_1800bdaf0(2);
      if (param_1 != pFVar3) goto LAB_1800c4a42;
      plVar5 = &DAT_180115f68;
    }
    _DAT_180115da8 = _DAT_180115da8 + 1;
    uVar2 = *(uint *)((longlong)&param_1->_base + 4);
    pFVar3 = (FILE *)(ulonglong)uVar2;
    if ((uVar2 & 0x4c0) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x282;
      UNLOCK();
      if (*plVar5 == 0) {
        pvVar4 = _malloc_base(0x1000);
        *plVar5 = (longlong)pvVar4;
        pFVar3 = (FILE *)FUN_1800c3030((LPVOID)0x0);
      }
      if (*plVar5 == 0) {
        *(undefined4 *)&param_1->_base = 2;
        *(int **)&param_1->_cnt = &param_1->_file;
        param_1->_ptr = (char *)&param_1->_file;
        param_1->_charbuf = 2;
      }
      else {
        *(longlong *)&param_1->_cnt = *plVar5;
        pFVar3 = (FILE *)*plVar5;
        param_1->_ptr = (char *)pFVar3;
        *(undefined4 *)&param_1->_base = 0x1000;
        param_1->_charbuf = 0x1000;
      }
      return CONCAT71((int7)((ulonglong)pFVar3 >> 8),1);
    }
  }
LAB_1800c4a42:
  return (ulonglong)pFVar3 & 0xffffffffffffff00;
}


void FUN_1800c4a50(char param_1,FILE *param_2,longlong *param_3)

{
  uint *puVar1;

  if ((param_1 != '\0') && ((*(uint *)((longlong)&param_2->_base + 4) >> 9 & 1) != 0)) {
    FUN_1800bdda4(param_2,param_3);
    LOCK();
    puVar1 = (uint *)((longlong)&param_2->_base + 4);
    *puVar1 = *puVar1 & 0xfffffd7f;
    UNLOCK();
    param_2->_charbuf = 0;
    *(undefined8 *)&param_2->_cnt = 0;
    param_2->_ptr = (char *)0x0;
  }
  return;
}


void FUN_1800c4a90(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;

  FUN_1800d22d0((undefined1 (*) [32])&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_180116370 < (int)uVar7) {
      uVar7 = DAT_180116370;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      lVar5 = 0;
      do {
        if (((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0)) {
          if ((*puVar6 & 8) == 0) {
            DVar2 = GetFileType(*(HANDLE *)pbVar4);
            if (DVar2 == 0) goto LAB_1800c4b5f;
          }
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_180115f70)[lVar5 >> 6];
          *(undefined8 *)(lVar1 + 0x28 + uVar3 * 0x48) = *(undefined8 *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
LAB_1800c4b5f:
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}


void FUN_1800c4b90(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;

  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_180115f70)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_1800c4c6e;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_180115da0 != 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + DAT_180115da0) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_1800c4c6e:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}


// Library Function - Single Match
//  __acrt_initialize_lowio
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

bool __acrt_initialize_lowio(void)

{
  int iVar1;

  __acrt_lock(7);
  iVar1 = __acrt_lowio_ensure_fh_exists(0);
  if (iVar1 == 0) {
    FUN_1800c4a90();
    FUN_1800c4b90();
  }
  __acrt_unlock(7);
  return iVar1 == 0;
}


// Library Function - Single Match
//  __acrt_uninitialize_lowio
//
// Library: Visual Studio 2019 Release

undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;

  uVar1 = 0;
  do {
    if (*(LPCRITICAL_SECTION *)((longlong)&DAT_180115f70 + uVar1) != (LPCRITICAL_SECTION)0x0) {
      __acrt_lowio_destroy_handle_array(*(LPCRITICAL_SECTION *)((longlong)&DAT_180115f70 + uVar1));
      *(undefined8 *)((longlong)&DAT_180115f70 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}


ulonglong FUN_1800c4d20(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;

  __acrt_lowio_lock_fh(*param_2);
  uVar1 = *(uint *)*param_3;
  lVar2 = param_3[1];
  if ((*(byte *)((&DAT_180115f70)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined4 *)(lVar2 + 0x2c) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_1800c4ef4(uVar1,lVar2);
    uVar3 = uVar3 & 0xffffffff;
  }
  __acrt_lowio_unlock_fh(*param_4);
  return uVar3;
}


ulonglong FUN_1800c4d98(uint param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong *local_18;

  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_180116370)) &&
       ((*(byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_1800c4d20(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}


ulonglong FUN_1800c4e5c(uint param_1)

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
  uVar1 = FUN_1800c4ef4(param_1,(longlong)local_48);
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


undefined8 FUN_1800c4ef4(uint param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;

  lVar3 = FUN_1800cf968(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_180115f70 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_180115f70 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_1800cf968(2);
      lVar4 = FUN_1800cf968(1);
      if (lVar4 == lVar3) goto LAB_1800c4f16;
    }
    hObject = (HANDLE)FUN_1800cf968(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_1800c4f74;
    }
  }
LAB_1800c4f16:
  DVar2 = 0;
LAB_1800c4f74:
  FUN_1800cf8ac(param_1);
  *(undefined1 *)
   ((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1800c2308(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// Library Function - Single Match
//  __acrt_stdio_free_buffer_nolock
//
// Library: Visual Studio 2019 Release

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_1800c3030((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}


// Library Function - Single Match
//  _fgetc_nolock
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong _fgetc_nolock(FILE *param_1)

{
  char **ppcVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;

  if (param_1 == (FILE *)0x0) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    uVar3 = 0xffffffff;
  }
  else {
    ppcVar1 = &param_1->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
    if (*(int *)ppcVar1 < 0) {
      uVar3 = FUN_1800c97e0(param_1);
      return uVar3;
    }
    uVar3 = (ulonglong)(byte)*param_1->_ptr;
    param_1->_ptr = param_1->_ptr + 1;
  }
  return uVar3;
}


ulonglong _fgetc_nolock(FILE *param_1)

{
  char **ppcVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;

  if (param_1 == (FILE *)0x0) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    uVar3 = 0xffffffff;
  }
  else {
    ppcVar1 = &param_1->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
    if (*(int *)ppcVar1 < 0) {
      uVar3 = FUN_1800c97e0(param_1);
      return uVar3;
    }
    uVar3 = (ulonglong)(byte)*param_1->_ptr;
    param_1->_ptr = param_1->_ptr + 1;
  }
  return uVar3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

DWORD * FUN_1800c5054(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong *param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  DWORD DVar8;
  CHAR *pCVar9;
  byte *pbVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  WCHAR local_c4 [2];
  DWORD local_c0 [2];
  byte *local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  uint local_88 [2];
  CHAR *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  CHAR local_58 [8];
  byte local_50;
  byte local_4f;
  CHAR local_48 [8];
  ulonglong local_40;

  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_180112300 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar14 = (longlong)(int)param_2 >> 6;
  uVar5 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_180115f70)[lVar14] + 0x28 + uVar5 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar14;
  local_a0 = GetConsoleOutputCP();
  iVar11 = 0;
  if ((char)local_b0[5] == '\0') {
    FUN_1800b0fd0(local_b0);
  }
  local_9c = *(int *)(local_b0[3] + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 + (param_4 & 0xffffffff) <= local_98) {
    return param_1;
  }
  DVar8 = 0;
  local_68 = lVar14;
  do {
    local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
    local_c4[0] = L'\0';
    local_c4[1] = L'\0';
    uVar3 = 1;
    if (local_9c == 0xfde9) {
      iVar7 = 0;
      lVar15 = 0;
      pcVar6 = (char *)(uVar5 * 0x48 + 0x3e + (&DAT_180115f70)[local_68]);
      do {
        if (*pcVar6 == '\0') break;
        iVar7 = iVar7 + 1;
        lVar15 = lVar15 + 1;
        pcVar6 = pcVar6 + 1;
      } while (lVar15 < 5);
      if (lVar15 < 1) {
        cVar1 = (&DAT_180112680)[*param_3];
        iVar7 = cVar1 + 1;
        lVar14 = (longlong)local_b8 - (longlong)param_3;
        if (lVar14 < iVar7) {
          if (0 < lVar14) {
            lVar15 = 0;
            do {
              *(byte *)(lVar15 + uVar5 * 0x48 + 0x3e + (&DAT_180115f70)[local_90]) = param_3[lVar15]
              ;
              iVar11 = iVar11 + 1;
              lVar15 = lVar15 + 1;
            } while (iVar11 < lVar14);
          }
          param_1[1] = param_1[1] + (int)lVar14;
          return param_1;
        }
        local_a8[0] = 0;
        local_a8[1] = 0;
        uVar3 = (iVar7 == 4) + 1;
        local_78 = param_3;
        lVar14 = FUN_1800c4598((ushort *)local_c4,&local_78,(ulonglong)uVar3,local_a8,
                               (longlong)local_b0);
        if (lVar14 == -1) {
          return param_1;
        }
        pbVar10 = param_3 + cVar1;
        lVar14 = local_90;
      }
      else {
        cVar1 = (&DAT_180112680)[*(byte *)((&DAT_180115f70)[lVar14] + 0x3e + uVar5 * 0x48)];
        iVar7 = (cVar1 + 1) - iVar7;
        local_a8[0] = iVar7;
        lVar12 = (longlong)local_b8 - (longlong)param_3;
        uVar13 = (ulonglong)iVar7;
        if (lVar12 < (longlong)uVar13) {
          if (0 < lVar12) {
            lVar16 = lVar15;
            do {
              *(byte *)(lVar16 + uVar5 * 0x48 + 0x3e + (&DAT_180115f70)[lVar14]) =
                   param_3[lVar16 - lVar15];
              iVar11 = iVar11 + 1;
              lVar16 = lVar16 + 1;
            } while (iVar11 < lVar12);
          }
          param_1[1] = param_1[1] + (int)lVar12;
          return param_1;
        }
        lVar12 = 0;
        pCVar9 = (CHAR *)(uVar5 * 0x48 + 0x3e + (&DAT_180115f70)[local_68]);
        do {
          local_48[lVar12 + -0x10] = *pCVar9;
          lVar12 = lVar12 + 1;
          pCVar9 = pCVar9 + 1;
        } while (lVar12 < lVar15);
        if (0 < (longlong)uVar13) {
          FUN_1800d1c20((undefined8 *)(local_48 + lVar15 + -0x10),(undefined8 *)param_3,uVar13);
        }
        lVar12 = 0;
        do {
          *(undefined1 *)(lVar12 + uVar5 * 0x48 + 0x3e + (&DAT_180115f70)[lVar14]) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar15);
        local_88[0] = 0;
        local_88[1] = 0;
        local_80 = local_58;
        uVar3 = (cVar1 + 1 == 4) + 1;
        lVar15 = FUN_1800c4598((ushort *)local_c4,&local_80,(ulonglong)uVar3,local_88,
                               (longlong)local_b0);
        if (lVar15 == -1) {
          return param_1;
        }
        pbVar10 = param_3 + (int)(local_a8[0] - 1);
      }
    }
    else {
      lVar15 = (&DAT_180115f70)[lVar14];
      bVar2 = *(byte *)(lVar15 + 0x3d + uVar5 * 0x48);
      if ((bVar2 & 4) == 0) {
        if (*(short *)(*(longlong *)local_b0[3] + (ulonglong)*param_3 * 2) < 0) {
          pbVar10 = param_3 + 1;
          if (local_b8 <= pbVar10) {
            *(byte *)(lVar15 + 0x3e + uVar5 * 0x48) = *param_3;
            pbVar10 = (byte *)((&DAT_180115f70)[lVar14] + 0x3d + uVar5 * 0x48);
            *pbVar10 = *pbVar10 | 4;
            param_1[1] = DVar8 + 1;
            return param_1;
          }
          iVar7 = FUN_1800c4098(local_c4,param_3,2,local_b0);
          if (iVar7 == -1) {
            return param_1;
          }
          goto LAB_1800c535c;
        }
        uVar13 = 1;
        pbVar10 = param_3;
      }
      else {
        local_50 = *(byte *)(lVar15 + 0x3e + uVar5 * 0x48);
        local_4f = *param_3;
        *(byte *)(lVar15 + 0x3d + uVar5 * 0x48) = bVar2 & 0xfb;
        uVar13 = 2;
        pbVar10 = &local_50;
      }
      iVar7 = FUN_1800c4098(local_c4,pbVar10,uVar13,local_b0);
      pbVar10 = param_3;
      if (iVar7 == -1) {
        return param_1;
      }
    }
LAB_1800c535c:
    param_3 = pbVar10 + 1;
    uVar3 = FUN_1800cc548(local_a0,0,local_c4,uVar3,local_48,5,(LPCSTR)0x0,(LPBOOL)0x0);
    hFile = local_70;
    if (uVar3 == 0) {
      return param_1;
    }
    local_c0[0] = 0;
    BVar4 = WriteFile(local_70,local_48,uVar3,local_c0,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
LAB_1800c54b5:
      DVar8 = GetLastError();
      *param_1 = DVar8;
      return param_1;
    }
    DVar8 = (param_1[2] - (int)local_98) + (int)param_3;
    param_1[1] = DVar8;
    if (local_c0[0] < uVar3) {
      return param_1;
    }
    if ((char)local_c8[0] == '\n') {
      local_c8[0] = 0xd;
      BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) goto LAB_1800c54b5;
      if (local_c0[0] == 0) {
        return param_1;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + 1;
      DVar8 = param_1[1];
    }
    if (local_b8 <= param_3) {
      return param_1;
    }
  } while( true );
}


// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

DWORD * FUN_1800c54e8(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint nNumberOfBytesToWrite;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 local_20;

  local_20 = 0x1800c5500;
  local_28 = DAT_180112300 ^ (ulonglong)auStackY_1468;
  pcVar5 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_180115f70)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (pcVar5 <= param_3) {
      return param_1;
    }
    pcVar4 = local_1428;
    do {
      if (pcVar5 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)pcVar4 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}


// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

DWORD * FUN_1800c55f0(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 local_20;

  local_20 = 0x1800c5608;
  local_28 = DAT_180112300 ^ (ulonglong)auStackY_1468;
  psVar5 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  hFile = *(HANDLE *)
           ((&DAT_180115f70)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (psVar5 <= param_3) {
      return param_1;
    }
    psVar4 = local_1428;
    do {
      if (psVar5 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)((longlong)psVar4 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}


// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

DWORD * FUN_1800c570c(DWORD *param_1,uint param_2,WCHAR *param_3,uint param_4)

{
  WCHAR WVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  WCHAR *pWVar7;
  WCHAR *pWVar8;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  WCHAR local_1448 [856];
  CHAR local_d98 [3424];
  ulonglong local_38;
  undefined8 local_30;

  local_30 = 0x1800c5728;
  local_38 = DAT_180112300 ^ (ulonglong)auStackY_1498;
  hFile = *(HANDLE *)
           ((&DAT_180115f70)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pWVar7 = param_3;
  do {
    if ((WCHAR *)((ulonglong)param_4 + (longlong)param_3) <= pWVar7) {
      return param_1;
    }
    pWVar8 = local_1448;
    do {
      if ((WCHAR *)((ulonglong)param_4 + (longlong)param_3) <= pWVar7) break;
      WVar1 = *pWVar7;
      pWVar7 = pWVar7 + 1;
      if (WVar1 == L'\n') {
        *pWVar8 = L'\r';
        pWVar8 = pWVar8 + 1;
      }
      *pWVar8 = WVar1;
      pWVar8 = pWVar8 + 1;
    } while (pWVar8 < local_1448 + 0x354);
    uVar2 = FUN_1800cc548(0xfde9,0,local_1448,(int)((longlong)pWVar8 - (longlong)local_1448 >> 1),
                          local_d98,0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
    if (uVar2 == 0) {
LAB_1800c5849:
      DVar4 = GetLastError();
      *param_1 = DVar4;
      return param_1;
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        local_1458[0] = 0;
        BVar3 = WriteFile(hFile,local_d98 + uVar6,uVar2 - (int)uVar6,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_1800c5849;
        uVar5 = (int)uVar6 + local_1458[0];
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar2);
    }
    param_1[1] = (int)pWVar7 - (int)param_3;
  } while( true );
}


int FUN_1800c5880(uint param_1,WCHAR *param_2,uint param_3)

{
  int iVar1;
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
  iVar1 = FUN_1800c5918(param_1,param_2,param_3,local_48);
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
  return iVar1;
}


int FUN_1800c5918(uint param_1,WCHAR *param_2,uint param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;

  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180116370 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          iVar2 = FUN_1800c5a38(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return iVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}


int FUN_1800c5a38(uint param_1,WCHAR *param_2,uint param_3,longlong *param_4)

{
  char cVar1;
  WCHAR WVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  WCHAR WVar6;
  short sVar7;
  BOOL BVar8;
  DWORD DVar9;
  int iVar10;
  ulonglong uVar11;
  undefined7 extraout_var;
  DWORD *pDVar12;
  DWORD DVar13;
  longlong lVar14;
  ulonglong uVar15;
  WCHAR *pWVar16;
  undefined8 local_70;
  DWORD local_68;
  undefined8 local_60;
  DWORD local_50 [4];

  DVar13 = 0;
  uVar15 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (WCHAR *)0x0) {
LAB_1800c5a68:
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  uVar11 = (ulonglong)(param_1 & 0x3f);
  lVar14 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_180115f70)[lVar14] + 0x39 + uVar11 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_1800c5a68;
  if ((*(byte *)((&DAT_180115f70)[lVar14] + 0x38 + uVar11 * 0x48) & 0x20) != 0) {
    thunk_FUN_1800c9a6c(param_1,(LARGE_INTEGER)0x0,2,(longlong)param_4);
  }
  local_60 = 0;
  bVar5 = FUN_1800cf45c(param_1);
  if (((int)CONCAT71(extraout_var,bVar5) == 0) ||
     (-1 < *(char *)((&DAT_180115f70)[lVar14] + 0x38 + uVar11 * 0x48))) {
LAB_1800c5c20:
    if (-1 < *(char *)((&DAT_180115f70)[lVar14] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar8 = WriteFile(*(HANDLE *)
                         ((&DAT_180115f70)[lVar14] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),
                        param_2,param_3,(LPDWORD)((longlong)&local_70 + 4),(LPOVERLAPPED)0x0);
      DVar13 = local_68;
      uVar4 = local_70;
      if (BVar8 == 0) {
        DVar13 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar13);
        DVar13 = local_68;
        uVar4 = local_70;
      }
      goto LAB_1800c5cd5;
    }
    if (cVar1 == '\0') {
      pDVar12 = FUN_1800c54e8((DWORD *)&local_70,param_1,(char *)param_2,uVar15);
    }
    else if (cVar1 == '\x01') {
      pDVar12 = FUN_1800c570c((DWORD *)&local_70,param_1,param_2,param_3);
    }
    else {
      uVar4 = local_60;
      if (cVar1 != '\x02') goto LAB_1800c5cd5;
      pDVar12 = FUN_1800c55f0((DWORD *)&local_70,param_1,param_2,uVar15);
    }
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_1800b0fd0(param_4);
    }
    if ((*(longlong *)(param_4[3] + 0x138) == 0) &&
       (*(char *)((&DAT_180115f70)[lVar14] + 0x39 + uVar11 * 0x48) == '\0')) goto LAB_1800c5c20;
    local_50[0] = 0;
    BVar8 = GetConsoleMode(*(HANDLE *)((&DAT_180115f70)[lVar14] + 0x28 + uVar11 * 0x48),local_50);
    if (BVar8 == 0) goto LAB_1800c5c20;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar4 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar4 = local_70;
        if (param_2 < (WCHAR *)((longlong)param_2 + uVar15)) {
          local_70._4_4_ = 0;
          pWVar16 = param_2;
          iVar10 = local_70._4_4_;
          do {
            WVar2 = *pWVar16;
            WVar6 = FUN_1800cf9e0(WVar2);
            if (WVar6 != WVar2) {
LAB_1800c5be8:
              DVar9 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar9);
              uVar4 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar10 + 2,(DWORD)local_70);
            iVar3 = iVar10 + 2;
            if (WVar2 == L'\n') {
              sVar7 = FUN_1800cf9e0(0xd);
              if (sVar7 != 0xd) goto LAB_1800c5be8;
              local_70 = CONCAT44(iVar10 + 3,(DWORD)local_70);
              DVar13 = DVar13 + 1;
              iVar3 = iVar10 + 3;
            }
            iVar10 = iVar3;
            pWVar16 = pWVar16 + 1;
            uVar4 = local_70;
          } while (pWVar16 < (WCHAR *)((longlong)param_2 + uVar15));
        }
      }
      goto LAB_1800c5cd5;
    }
    pDVar12 = FUN_1800c5054((DWORD *)&local_70,param_1,(byte *)param_2,uVar15,param_4);
  }
  DVar13 = pDVar12[2];
  uVar4 = *(undefined8 *)pDVar12;
LAB_1800c5cd5:
  local_60 = uVar4;
  iVar10 = (int)((ulonglong)local_60 >> 0x20);
  if (iVar10 != 0) {
    return iVar10 - DVar13;
  }
  if ((uint)local_60 != 0) {
    if ((uint)local_60 == 5) {
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 7) = 1;
      *(undefined4 *)((longlong)param_4 + 0x34) = 5;
      return -1;
    }
    FUN_1800c2308((uint)local_60,(longlong)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_180115f70)[lVar14] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) == 0
      ) || ((char)*param_2 != '\x1a')) {
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x1c;
    *(undefined1 *)(param_4 + 7) = 1;
    return -1;
  }
  return 0;
}


bool FUN_1800c5d68(undefined1 param_1,FILE *param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  bool bVar8;
  undefined1 local_res8 [8];

  local_res8[0] = param_1;
  uVar2 = _fileno(param_2);
  if (((ulonglong)param_2->_base & 0xc000000000) == 0) {
    iVar4 = FUN_1800c5918(uVar2,(WCHAR *)local_res8,1,param_3);
    bVar8 = iVar4 == 1;
  }
  else {
    uVar3 = 0;
    uVar7 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)((longlong)*(WCHAR **)&param_2->_cnt + 1);
    *(int *)&param_2->_base = param_2->_charbuf + -1;
    if ((int)uVar7 < 1) {
      if (uVar2 + 2 < 2) {
        puVar6 = &DAT_180112620;
      }
      else {
        puVar6 = (undefined *)
                 ((&DAT_180115f70)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if (((puVar6[0x38] & 0x20) != 0) &&
         (lVar5 = FUN_1800c9b1c(uVar2,(LARGE_INTEGER)0x0,2), lVar5 == -1)) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar3 = FUN_1800c5918(uVar2,*(WCHAR **)&param_2->_cnt,uVar7,param_3);
    }
    bVar8 = uVar3 == uVar7;
    **(undefined1 **)&param_2->_cnt = local_res8[0];
  }
  return bVar8;
}


bool FUN_1800c5e60(WCHAR param_1,FILE *param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  bool bVar8;
  WCHAR local_res8 [4];

  local_res8[0] = param_1;
  uVar2 = _fileno(param_2);
  if (((ulonglong)param_2->_base & 0xc000000000) == 0) {
    iVar4 = FUN_1800c5918(uVar2,local_res8,2,param_3);
    bVar8 = iVar4 == 2;
  }
  else {
    uVar3 = 0;
    uVar7 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(*(WCHAR **)&param_2->_cnt + 1);
    *(int *)&param_2->_base = param_2->_charbuf + -2;
    if ((int)uVar7 < 1) {
      if (uVar2 + 2 < 2) {
        puVar6 = &DAT_180112620;
      }
      else {
        puVar6 = (undefined *)
                 ((&DAT_180115f70)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if (((puVar6[0x38] & 0x20) != 0) &&
         (lVar5 = FUN_1800c9b1c(uVar2,(LARGE_INTEGER)0x0,2), lVar5 == -1)) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar3 = FUN_1800c5918(uVar2,*(WCHAR **)&param_2->_cnt,uVar7,param_3);
    }
    bVar8 = uVar3 == uVar7;
    **(WCHAR **)&param_2->_cnt = local_res8[0];
  }
  return bVar8;
}


bool FUN_1800c5f5c(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  HANDLE hFile;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];

  if ((*(uint *)((longlong)param_1 + 0x14) >> 3 & 1) == 0) {
    if ((((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
       (hFile = (HANDLE)FUN_1800cf968(*(uint *)(param_1 + 3)), hFile != (HANDLE)0xffffffffffffffff))
    {
      local_res10[0].QuadPart = 0;
      BVar2 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,local_res10,1);
      if (BVar2 != 0) {
        local_res8.QuadPart = 0;
        BVar2 = GetFileSizeEx(hFile,&local_res8);
        if (BVar2 != 0) {
          return local_res10[0].QuadPart == local_res8.QuadPart;
        }
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


ulonglong FUN_1800c5fe4(byte param_1,FILE *param_2,longlong *param_3)

{
  uint *puVar1;
  bool bVar2;
  undefined8 uVar3;

  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)((longlong)param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        bVar2 = FUN_1800c5f5c((longlong *)param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (!bVar2) goto LAB_1800c6016;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
         (uVar3 = FUN_1800c493c(param_2), (char)uVar3 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
      }
      bVar2 = FUN_1800c5d68(param_1,param_2,param_3);
      if (bVar2) {
        return (ulonglong)param_1;
      }
      goto LAB_1800c6016;
    }
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 6) = 1;
LAB_1800c6016:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return 0xffffffff;
}


WCHAR FUN_1800c60b0(WCHAR param_1,FILE *param_2,longlong *param_3)

{
  uint *puVar1;
  bool bVar2;
  undefined8 uVar3;

  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)((longlong)param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        bVar2 = FUN_1800c5f5c((longlong *)param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (!bVar2) goto LAB_1800c60e2;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
         (uVar3 = FUN_1800c493c(param_2), (char)uVar3 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
      }
      bVar2 = FUN_1800c5e60(param_1,param_2,param_3);
      if (bVar2) {
        return param_1;
      }
      goto LAB_1800c60e2;
    }
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 6) = 1;
LAB_1800c60e2:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return L'\xffff';
}


// Library Function - Single Match
//  __pctype_func
//
// Library: Visual Studio 2019 Release

ushort * __cdecl __pctype_func(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];

  lVar1 = FUN_1800c1eb8();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,(longlong *)local_res8);
  return (ushort *)*local_res8[0];
}


// Library Function - Single Match
//  _calloc_base
//
// Library: Visual Studio 2019 Release

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;

  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_180116728,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_1800cdf00();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1800c06e0(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_1800c2350();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}


uint FUN_1800c6228(uint param_1,FILE *param_2)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  __acrt_ptd *p_Var5;
  undefined *puVar6;
  undefined *puVar7;

  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    uVar4 = _fileno(param_2);
    puVar6 = &DAT_180112620;
    if (uVar4 + 2 < 2) {
      puVar7 = &DAT_180112620;
    }
    else {
      puVar7 = (undefined *)
               ((&DAT_180115f70)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
    }
    if (puVar7[0x39] == '\0') {
      if (1 < uVar4 + 2) {
        puVar6 = (undefined *)
                 ((&DAT_180115f70)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
      }
      if ((puVar6[0x3d] & 1) == 0) goto LAB_1800c62d4;
    }
    p_Var5 = FUN_1800c2350();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_1800c2ac4();
  }
  else {
LAB_1800c62d4:
    if ((param_1 != 0xffffffff) &&
       ((((ulonglong)param_2->_base & 0x100000000) != 0 ||
        (((byte)*(undefined4 *)((longlong)&param_2->_base + 4) & 6) == 6)))) {
      if (*(longlong *)&param_2->_cnt == 0) {
        __acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
      }
      if (param_2->_ptr == *(char **)&param_2->_cnt) {
        if (*(int *)&param_2->_base != 0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      uVar4 = *(uint *)((longlong)&param_2->_base + 4);
      pcVar3 = param_2->_ptr;
      pcVar1 = pcVar3 + -1;
      param_2->_ptr = pcVar1;
      if ((uVar4 >> 0xc & 1) == 0) {
        *pcVar1 = (char)param_1;
      }
      else if (*pcVar1 != (char)param_1) {
        param_2->_ptr = pcVar3;
        return 0xffffffff;
      }
      *(int *)&param_2->_base = *(int *)&param_2->_base + 1;
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}


// Library Function - Single Match
//  fegetround
//
// Library: Visual Studio 2019 Release

void fegetround(void)

{
  uint uVar1;

  uVar1 = FUN_1800cfaa0();
  FUN_1800cfa90(uVar1);
  return;
}


uint FUN_1800c6370(uint param_1)

{
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return (uint)(ushort)(((param_1 & 0x7fffff) != 0) + 1);
  }
  if ((param_1 & 0x7f800000) == 0) {
    return CONCAT22((short)(-(param_1 & 0x7fffffff) >> 0x10),-(ushort)((param_1 & 0x7fffffff) != 0))
           & 0xfffffffe;
  }
  return 0xffffffff;
}


void FUN_1800c63b0(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  uint uVar3;
  uint uVar4;
  uint local_res8 [2];
  uint local_res10 [2];

  local_res10[0] = 0;
  FUN_1800cfda0(local_res10,0x1f);
  local_res8[0] = local_res10[0];
  uVar4 = param_1 | 0x20;
  if ((param_1 & 0x18) == 0) {
    uVar4 = param_1;
  }
  uVar3 = uVar4 >> 5 & 1;
  uVar1 = uVar3 | 2;
  if ((uVar4 & 0x10) == 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 | 4;
  if ((uVar4 & 8) == 0) {
    uVar3 = uVar1;
  }
  uVar1 = uVar3 | 8;
  if ((uVar4 & 4) == 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 | 0x10;
  if ((uVar4 & 1) == 0) {
    uVar3 = uVar1;
  }
  uVar1 = FUN_1800cfb80(uVar3);
  local_res8[0] = local_res8[0] | uVar1;
  FUN_1800cfdf0(local_res8,0x1f);
  if ((uVar4 & 1) != 0) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x21;
    return;
  }
  if ((uVar4 & 0x1c) != 0) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x22;
  }
  return;
}


void FUN_1800c6480(uint *param_1,ulonglong *param_2,ulonglong param_3,int param_4,uint *param_5,
                  uint *param_6)

{
  FUN_1800c64b0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


void FUN_1800c64b0(uint *param_1,ulonglong *param_2,ulonglong param_3,int param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  DWORD dwExceptionCode;
  uint *local_res8;

  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~((uint)*param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVar1 = FUN_1800c7e20();
  if ((uVar1 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVar1 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVar1 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVar1 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVar1 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVar1 = (uint)*param_2 & 0x6000;
  if (uVar1 == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVar1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVar1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVar1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 ^ (param_4 << 5 ^ *local_res8) & 0x1ffe0;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 4) = *(undefined8 *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *param_6;
  }
  FUN_1800c7d40();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((local_res8[2] & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((local_res8[2] & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((local_res8[2] & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((local_res8[2] & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((local_res8[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVar1 = *local_res8 & 3;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVar1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *(undefined8 *)param_6 = *(undefined8 *)(local_res8 + 0x14);
  }
  else {
    *param_6 = local_res8[0x14];
  }
  return;
}


void FUN_1800c67c0(uint *param_1,ulonglong *param_2,ulonglong param_3,int param_4,uint *param_5,
                  uint *param_6)

{
  FUN_1800c64b0(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}


void FUN_1800c67f0(int param_1)

{
  __acrt_ptd *p_Var1;

  if (param_1 == 1) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x22;
    return;
  }
  return;
}


undefined4 FUN_1800c6824(void)

{
  return DAT_180116374;
}


undefined8 FUN_1800c682c(uint param_1,short *param_2,ulonglong param_3,uint param_4,char param_5)

{
  ulonglong uVar1;
  short *psVar2;
  short sVar3;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;

  psVar7 = param_2;
  if (param_5 != '\0') {
    *param_2 = 0x2d;
    psVar7 = param_2 + 1;
    param_1 = -param_1;
  }
  uVar6 = (ulonglong)(param_5 != '\0');
  psVar2 = psVar7;
  do {
    psVar8 = psVar2;
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / param_4;
    sVar3 = 0x57;
    if ((uint)(uVar1 % (ulonglong)param_4) < 10) {
      sVar3 = 0x30;
    }
    uVar6 = uVar6 + 1;
    *psVar8 = sVar3 + (short)(uVar1 % (ulonglong)param_4);
  } while ((param_1 != 0) && (psVar2 = psVar8 + 1, uVar6 < param_3));
  if (uVar6 < param_3) {
    psVar8[1] = 0;
    do {
      sVar3 = *psVar8;
      *psVar8 = *psVar7;
      psVar8 = psVar8 + -1;
      *psVar7 = sVar3;
      psVar7 = psVar7 + 1;
    } while (psVar7 < psVar8);
    uVar5 = 0;
  }
  else {
    *param_2 = 0;
    p_Var4 = FUN_1800c2350();
    *(undefined4 *)p_Var4 = 0x22;
    FUN_1800c2ac4();
    uVar5 = 0x22;
  }
  return uVar5;
}


// Library Function - Single Match
//  int __cdecl common_xtox_s<unsigned long,wchar_t>(unsigned long,wchar_t * __ptr64 const,unsigned
// __int64,unsigned int,bool)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl
common_xtox_s<>(ulong param_1,wchar_t *param_2,__uint64 param_3,uint param_4,bool param_5)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int iVar3;

  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
    if (param_3 <= (ulonglong)param_5 + 1) {
      p_Var1 = FUN_1800c2350();
      iVar3 = 0x22;
      goto LAB_1800c691a;
    }
    if (param_4 - 2 < 0x23) {
      uVar2 = FUN_1800c682c(param_1,param_2,param_3,param_4,param_5);
      return (int)uVar2;
    }
  }
  p_Var1 = FUN_1800c2350();
  iVar3 = 0x16;
LAB_1800c691a:
  *(int *)p_Var1 = iVar3;
  FUN_1800c2ac4();
  return iVar3;
}


// Library Function - Multiple Matches With Different Base Names
//  _itow_s
//  _ltow_s
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

errno_t __cdecl FID_conflict__ltow_s(long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix)

{
  bool bVar1;
  int iVar2;

  bVar1 = false;
  if ((_Radix == 10) && (_Val < 0)) {
    bVar1 = true;
  }
  iVar2 = common_xtox_s<>(_Val,_DstBuf,_SizeInWords,_Radix,bVar1);
  return iVar2;
}


int FUN_1800c698c(int param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;

  iVar1 = DAT_180116378;
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    DAT_180116378 = param_1;
  }
  else if (param_1 != 3) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    iVar1 = -1;
  }
  return iVar1;
}


undefined8 FUN_1800c69e0(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  longlong lVar4;

  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar3 = param_1;
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*psVar3 == 0) {
          lVar4 = param_3 - (longlong)psVar3;
          do {
            sVar1 = *(short *)(lVar4 + (longlong)psVar3);
            *psVar3 = sVar1;
            psVar3 = psVar3 + 1;
            if (sVar1 == 0) {
              return 0;
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
          *param_1 = 0;
          p_Var2 = FUN_1800c2350();
          *(undefined4 *)p_Var2 = 0x22;
          FUN_1800c2ac4();
          return 0x22;
        }
        psVar3 = psVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
    }
  }
  p_Var2 = FUN_1800c2350();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1800c2ac4();
  return 0x16;
}


undefined8 FUN_1800c6a70(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;

  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      psVar3 = param_1;
      do {
        sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar3);
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        if (sVar1 == 0) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
      p_Var2 = FUN_1800c2350();
      *(undefined4 *)p_Var2 = 0x22;
      FUN_1800c2ac4();
      return 0x22;
    }
    *param_1 = 0;
  }
  p_Var2 = FUN_1800c2350();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1800c2ac4();
  return 0x16;
}


undefined8 FUN_1800c6b00(short *param_1,longlong param_2,short *param_3,longlong param_4)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;

  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1800c6b4b;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1800c6b4b;
  if (param_2 != 0) {
    psVar3 = param_1;
    lVar4 = param_2;
    if ((param_4 == 0) || (param_3 != (short *)0x0)) {
      do {
        if (*psVar3 == 0) {
          lVar5 = param_4;
          if (param_4 != -1) goto joined_r0x0001800c6bbc;
          lVar5 = (longlong)param_3 - (longlong)psVar3;
          goto LAB_1800c6ba0;
        }
        lVar4 = lVar4 + -1;
        psVar3 = psVar3 + 1;
      } while (lVar4 != 0);
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
LAB_1800c6b4b:
  p_Var2 = FUN_1800c2350();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1800c2ac4();
  return 0x16;
joined_r0x0001800c6bbc:
  if (lVar5 == 0) goto LAB_1800c6be4;
  sVar1 = *param_3;
  param_3 = param_3 + 1;
  *psVar3 = sVar1;
  psVar3 = psVar3 + 1;
  if (sVar1 == 0) {
    return 0;
  }
  lVar4 = lVar4 + -1;
  if (lVar4 == 0) goto LAB_1800c6be4;
  lVar5 = lVar5 + -1;
  goto joined_r0x0001800c6bbc;
LAB_1800c6be4:
  if (lVar5 == 0) {
    *psVar3 = 0;
  }
  goto LAB_1800c6bed;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
LAB_1800c6ba0:
    sVar1 = *(short *)(lVar5 + (longlong)psVar3);
    *psVar3 = sVar1;
    psVar3 = psVar3 + 1;
    if (sVar1 == 0) break;
  }
LAB_1800c6bed:
  if (lVar4 != 0) {
    return 0;
  }
  if (param_4 == -1) {
    param_1[param_2 + -1] = 0;
    return 0x50;
  }
  *param_1 = 0;
  p_Var2 = FUN_1800c2350();
  *(undefined4 *)p_Var2 = 0x22;
  FUN_1800c2ac4();
  return 0x22;
}


undefined4 FUN_1800c6c34(LPCWSTR param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  __acrt_ptd *p_Var3;

  if (param_1 == (LPCWSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != L'\0') {
      iVar1 = FUN_1800cc548(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_1800c6c88;
        }
        iVar1 = FUN_1800cc548(param_4,0,param_1,-1,*(LPSTR *)(param_2 + 0x10),
                              (int)*(ulonglong *)(param_2 + 0x18),(LPCSTR)0x0,(LPBOOL)0x0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_1800c22e0(DVar2);
      p_Var3 = FUN_1800c2350();
      return *(undefined4 *)p_Var3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_1800c6c88:
      p_Var3 = FUN_1800c2350();
      *(undefined4 *)p_Var3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800c6d50(HMODULE param_1,undefined8 param_2,ulonglong param_3)

{
  DWORD DVar1;
  INT_PTR IVar2;
  uint uVar3;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined1 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_1800c22e0(DVar1);
    local_240 = 0;
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_280,(__crt_locale_pointers *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      IVar2 = FUN_1800c8574();
      if ((int)IVar2 == 0) {
        if (local_268 != (char)IVar2) {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_1800c6c34(local_228,(longlong)&local_260,local_288,uVar3);
    local_240 = local_240 & 0xffffffff;
  }
  return local_240;
}


ulonglong FUN_1800c6e74(LPCWSTR param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  INT_PTR IVar6;

  BVar2 = IsDebuggerPresent();
  if (BVar2 != 0) {
    if (param_1 != (LPCWSTR)0x0) {
      OutputDebugStringW(param_1);
    }
    iVar3 = FUN_1800cadc8();
    if (iVar3 != 1) {
      return 4;
    }
  }
  iVar3 = FUN_1800cad54();
  if ((iVar3 != 2) || (uVar4 = FUN_1800c87cc(), (char)uVar4 == '\0')) {
    return (ulonglong)((BVar2 != 0) + 3);
  }
  bVar1 = FUN_1800c8920();
  if (bVar1 == 0) {
    param_3 = param_3 | 0x200000;
    IVar6 = 0;
  }
  else {
    IVar6 = FUN_1800c8850();
  }
  uVar5 = FUN_1800c874c(IVar6,param_1,param_2,param_3);
  return uVar5;
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

ulonglong operator()<>(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong uVar1;

  FUN_1800bdb6c(*param_2);
  uVar1 = FUN_1800c6f58(param_3);
  FUN_1800bdb78(*param_4);
  return uVar1 & 0xffffffff;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1800c6f58(undefined8 *param_1)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;

  uVar1 = *(ulonglong *)*param_1;
  FUN_1800bdda4(*(FILE **)param_1[1],(longlong *)param_1[2]);
  __acrt_stdio_free_buffer_nolock(*(undefined8 **)param_1[1]);
  LOCK();
  *(uint *)(*(longlong *)param_1[1] + 0x14) = *(uint *)(*(longlong *)param_1[1] + 0x14) & 0xfffff81f
  ;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    lVar4 = *(longlong *)param_1[4];
    uVar5 = (undefined4)(uVar1 & 0xfffffffffffffffe);
    if (lVar4 == 0) {
      pvVar2 = _calloc_base(uVar1 & 0xfffffffffffffffe,1);
      FUN_1800c3030((LPVOID)0x0);
      if (pvVar2 == (LPVOID)0x0) {
        _DAT_180115da8 = _DAT_180115da8 + 1;
        return 0xffffffff;
      }
      plVar3 = *(longlong **)param_1[1];
      LOCK();
      *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x140;
      UNLOCK();
      *(undefined4 *)(plVar3 + 4) = uVar5;
      *plVar3 = (longlong)pvVar2;
      plVar3[1] = (longlong)pvVar2;
      goto LAB_1800c7029;
    }
    plVar3 = *(longlong **)param_1[1];
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x180;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = uVar5;
  }
  else {
    plVar3 = *(longlong **)param_1[1];
    lVar4 = (longlong)plVar3 + 0x1c;
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x400;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = 2;
  }
  *plVar3 = lVar4;
  plVar3[1] = lVar4;
LAB_1800c7029:
  *(undefined4 *)(plVar3 + 2) = 0;
  return 0;
}


ulonglong FUN_1800c7040(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined *local_80;
  undefined *puStack_78;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  int *local_28;
  undefined8 *local_20;

  local_98[0] = 0;
  local_70 = DAT_180115f2c == 0;
  local_88 = 0;
  local_68 = '\0';
  local_60 = '\0';
  if ((bool)local_70) {
    local_80 = PTR_PTR_1801125f8;
    puStack_78 = PTR_DAT_180112600;
  }
  local_res8[0] = param_3;
  local_res10 = param_4;
  local_res20 = param_1;
  local_58 = param_2;
  if ((param_1 == 0) ||
     ((param_3 != 4 && (((param_3 != 0 && (param_3 != 0x40)) || (0x7ffffffd < param_4 - 2U)))))) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_40 = &local_res10;
    local_38 = &local_res20;
    local_30 = local_98;
    local_28 = local_res8;
    local_20 = &local_58;
    local_50 = param_1;
    local_48 = param_1;
    uVar2 = operator()<>(local_res18,&local_48,&local_40,&local_50);
    uVar2 = uVar2 & 0xffffffff;
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


ulonglong FUN_1800c7178(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;

  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_180112300 & 0x3f;
  uVar2 = DAT_180116390 ^ DAT_180112300;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}


// Library Function - Single Match
//  __acrt_get_sigabrt_handler
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];

  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_1800c7178(local_res8,local_res18,local_res8,local_res10);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800c71f0(undefined8 param_1)

{
  _DAT_180116380 = param_1;
  _DAT_180116388 = param_1;
  DAT_180116390 = param_1;
  _DAT_180116398 = param_1;
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1800c7210(uint param_1)

{
  bool bVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  code *pcVar7;
  ulonglong *puVar8;
  undefined4 local_res10;

  p_Var2 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_1800c7267:
    if (param_1 == 2) {
      puVar8 = (ulonglong *)&DAT_180116380;
    }
    else if (param_1 == 6) {
LAB_1800c7309:
      puVar8 = &DAT_180116390;
    }
    else if (param_1 == 0xf) {
      puVar8 = (ulonglong *)&DAT_180116398;
    }
    else if (param_1 == 0x15) {
      puVar8 = (ulonglong *)&DAT_180116388;
    }
    else {
      if (param_1 == 0x16) goto LAB_1800c7309;
      puVar8 = (ulonglong *)0x0;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1800c7297;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_1800c72e9;
      }
      goto LAB_1800c7267;
    }
LAB_1800c7297:
    p_Var2 = FUN_1800c1f18();
    if (p_Var2 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar5 = *(longlong *)p_Var2;
    lVar3 = lVar5 + 0xc0;
    for (; lVar5 != lVar3; lVar5 = lVar5 + 0x10) {
      if (*(uint *)(lVar5 + 4) == param_1) goto LAB_1800c72e4;
    }
    lVar5 = 0;
LAB_1800c72e4:
    if (lVar5 == 0) {
LAB_1800c72e9:
      p_Var2 = FUN_1800c2350();
      *(undefined4 *)p_Var2 = 0x16;
      FUN_1800c2ac4();
      return 0xffffffff;
    }
    puVar8 = (ulonglong *)(lVar5 + 8);
    bVar1 = false;
  }
  lVar5 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar7 = (code *)*puVar8;
  if (bVar1) {
    bVar6 = (byte)DAT_180112300 & 0x3f;
    pcVar7 = (code *)(((ulonglong)pcVar7 ^ DAT_180112300) >> bVar6 |
                     ((ulonglong)pcVar7 ^ DAT_180112300) << 0x40 - bVar6);
  }
  if (pcVar7 == (code *)0x1) goto LAB_1800c73f2;
  if (pcVar7 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
                    // WARNING: Subroutine does not return
    FUN_1800c0be4(3);
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar5 = *(longlong *)(p_Var2 + 8);
    *(longlong *)(p_Var2 + 8) = 0;
    if (param_1 == 8) {
      lVar3 = FUN_1800c1eb8();
      local_res10 = *(undefined4 *)(lVar3 + 0x10);
      lVar3 = FUN_1800c1eb8();
      *(undefined4 *)(lVar3 + 0x10) = 0x8c;
      goto LAB_1800c73aa;
    }
  }
  else {
LAB_1800c73aa:
    if (param_1 == 8) {
      lVar3 = *(longlong *)p_Var2;
      for (lVar4 = lVar3 + 0x30; lVar4 != lVar3 + 0xc0; lVar4 = lVar4 + 0x10) {
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      goto LAB_1800c73f2;
    }
  }
  *puVar8 = DAT_180112300;
LAB_1800c73f2:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar7 != (code *)0x1) {
    if (param_1 == 8) {
      lVar3 = FUN_1800c1eb8();
      (*pcVar7)(8,*(undefined4 *)(lVar3 + 0x10));
    }
    else {
      (*pcVar7)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var2 + 8) = lVar5, param_1 == 8)) {
      lVar5 = FUN_1800c1eb8();
      *(undefined4 *)(lVar5 + 0x10) = local_res10;
    }
  }
  return 0;
}


uint FUN_1800c7470(uint param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined4 extraout_var;
  uint uVar2;
  ulonglong uVar3;

  uVar3 = 0;
  uVar2 = param_1 & 0x1f;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_1800c7de0();
    *param_2 = CONCAT44(extraout_var,uVar1);
    if (((param_1 & 8) == 0) || (-1 < (char)uVar1)) {
      if (((param_1 & 4) == 0) || ((uVar1 & 0x200) == 0)) {
        if (((param_1 & 1) == 0) || ((uVar1 & 0x400) == 0)) {
          if (((param_1 & 2) != 0) && ((uVar1 & 0x800) != 0)) {
            uVar2 = param_1 & 0x1d;
            uVar3 = (ulonglong)(param_1 & 0x10);
          }
        }
        else {
          uVar3 = 8;
          uVar2 = param_1 & 0x1e;
        }
      }
      else {
        uVar3 = 4;
        uVar2 = param_1 & 0x1b;
      }
    }
    else {
      uVar3 = 1;
      uVar2 = param_1 & 0x17;
    }
    if (((param_1 & 0x10) != 0) && ((uVar1 & 0x1000) != 0)) {
      uVar3 = uVar3 | 0x20;
      uVar2 = uVar2 & 0xffffffef;
    }
    if (uVar2 != 0) {
      FUN_1800c7d60(0x1f80,0xffc0);
    }
    if ((uVar3 != 0) && ((uVar3 & ~CONCAT44(extraout_var,uVar1)) != 0)) {
      if (uVar2 == 0) {
        FUN_1800c7df0(uVar1 | (uint)uVar3);
      }
      else {
        FUN_1800c7e00((uint)uVar3);
      }
    }
  }
  return uVar2;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8
FUN_1800c7580(undefined8 param_1,int param_2,undefined8 param_3,int param_4,uint param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStackY_128 [32];
  undefined8 local_f8;
  ulonglong local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_128;
  local_f0 = 0;
  local_f8 = param_3;
  uVar1 = FUN_1800c7470(param_5,&local_f0);
  uVar3 = param_8;
  if (uVar1 != 0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[8] = 0;
    local_b8[9] = 0;
    local_b8[10] = 0;
    local_b8[0xb] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = 3;
    }
    FUN_1800c6480(local_b8,&local_f0,(ulonglong)param_5,param_2,(uint *)&param_7,(uint *)&local_f8);
  }
  uVar2 = FUN_1800cc920();
  if (((char)uVar2 == '\0') || (param_4 == 0)) {
    FUN_1800c67f0(param_4);
    uVar4 = (undefined4)local_f8;
    uVar5 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    local_d8 = param_7;
    local_c8 = local_f8;
    local_e8[1] = 0;
    local_d0 = uVar3;
    local_e8[0] = param_4;
    local_e0 = param_1;
    uVar3 = FUN_1800cc950(local_e8);
    if ((int)uVar3 == 0) {
      FUN_1800c67f0(param_4);
    }
    uVar4 = (undefined4)local_c8;
    uVar5 = (undefined4)((ulonglong)local_c8 >> 0x20);
  }
  return CONCAT44(uVar5,uVar4);
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

float FUN_1800c76c0(undefined8 param_1,int param_2,float param_3,int param_4,uint param_5,
                   undefined8 param_6,float param_7,float param_8,int param_9)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStackY_128 [32];
  float local_f8 [2];
  ulonglong local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  uint local_b8 [12];
  ulonglong local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_128;
  local_f0 = 0;
  local_f8[0] = param_3;
  uVar2 = FUN_1800c7470(param_5,&local_f0);
  fVar1 = param_8;
  if (uVar2 != 0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[8] = 0;
    local_b8[9] = 0;
    local_b8[10] = 0;
    local_b8[0xb] = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      local_88 = (ulonglong)(uint)param_8;
    }
    local_78 = (ulonglong)(param_9 == 2);
    FUN_1800c67c0(local_b8,&local_f0,(ulonglong)param_5,param_2,(uint *)&param_7,(uint *)local_f8);
  }
  uVar3 = FUN_1800cc920();
  if (((char)uVar3 == '\0') || (param_4 == 0)) {
    FUN_1800c67f0(param_4);
  }
  else {
    local_d8 = (double)param_7;
    local_e8[1] = 0;
    local_d0 = (double)fVar1;
    local_c8 = (double)local_f8[0];
    local_e8[0] = param_4;
    local_e0 = param_1;
    uVar3 = FUN_1800cc950(local_e8);
    if ((int)uVar3 == 0) {
      FUN_1800c67f0(param_4);
    }
    local_f8[0] = (float)local_c8;
  }
  return local_f8[0];
}


ulonglong FUN_1800c7800(ulonglong param_1)

{
  return param_1 | 0x8000000000000;
}


uint FUN_1800c7820(uint param_1)

{
  return param_1 | 0x400000;
}


ulonglong FUN_1800c7860(ulonglong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  sbyte sVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;

  uVar14 = (param_1 >> 0x34) - 0x3ff;
  lVar12 = -((uVar14 >> 3) - 0x86);
  uVar10 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_1800f8a80 + lVar12);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar2 * auVar4,8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&UNK_1800f8a88 + lVar12);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar10;
  uVar14 = uVar14 & 7;
  auVar7 = auVar3 * auVar5 + auVar7;
  uVar8 = auVar7._0_8_;
  uVar13 = auVar7._8_8_ + *(longlong *)(&UNK_1800f8a90 + lVar12) * uVar10;
  uVar11 = 0x36 - uVar14;
  bVar6 = (byte)uVar11 & 0x3f;
  uVar10 = uVar13 >> bVar6;
  bVar1 = (bool)(((uVar11 & 0x3f) != 0) * ((uVar13 >> bVar6 - 1 & 1) != 0));
  if (bVar1) {
    uVar13 = ~uVar13;
    uVar8 = ~uVar8;
  }
  sVar9 = (char)uVar14 + 10;
  uVar11 = (uVar13 << sVar9) >> sVar9;
  lVar12 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  if ((uVar11 == 0) && (lVar12 = 0x3f, uVar8 != 0)) {
    for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  return uVar10 + bVar1 & 3;
}


ulonglong FUN_1800c79b0(ulonglong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  sbyte sVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];

  uVar14 = (param_1 >> 0x34) - 0x3ff;
  lVar12 = -((uVar14 >> 3) - 0x86);
  uVar10 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(ulonglong *)(&DAT_1800f8a80 + lVar12);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = SUB168(auVar15 * auVar3,8);
  uVar6 = SUB168(auVar15 * auVar3,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = SUB168(*(undefined1 (*) [16])(&UNK_1800f8a88 + lVar12),0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  uVar14 = uVar14 & 7;
  auVar15 = vpsrldq_avx(*(undefined1 (*) [16])(&UNK_1800f8a88 + lVar12),8);
  auVar5 = auVar2 * auVar4 + auVar5;
  uVar7 = auVar5._0_8_;
  uVar13 = auVar5._8_8_ + auVar15._0_8_ * uVar10;
  uVar11 = 0x36 - uVar14;
  bVar9 = (byte)uVar11 & 0x3f;
  uVar10 = uVar13 >> bVar9;
  bVar1 = (bool)(((uVar11 & 0x3f) != 0) * ((uVar13 >> bVar9 - 1 & 1) != 0));
  if (bVar1) {
    uVar13 = ~uVar13;
    uVar7 = ~uVar7;
    uVar6 = ~uVar6;
  }
  sVar8 = (char)uVar14 + 10;
  uVar11 = (uVar13 << sVar8) >> sVar8;
  lVar12 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  uVar13 = uVar6;
  uVar14 = uVar7;
  if (uVar11 == 0) {
    uVar13 = 0;
    lVar12 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = uVar6;
    uVar11 = uVar7;
  }
  lVar12 = lVar12 + -0x34;
  bVar9 = (byte)lVar12;
  if (lVar12 < 0) {
    uVar14 = uVar14 << (-bVar9 & 0x3f) | uVar13 >> (-(-bVar9 - 0x40) & 0x3f);
  }
  else if (lVar12 != 0) {
    uVar14 = uVar14 >> (bVar9 & 0x3f) | uVar11 << (-(bVar9 - 0x40) & 0x3f);
  }
  lVar12 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  return uVar10 + bVar1 & 3;
}


uint FUN_1800c7ba0(double param_1)

{
  return (int)((param_1 * 0.6366197723675814 + 6755399441055744.0) - 6755399441055744.0) & 3;
}


ulonglong FUN_1800c7c20(float param_1)

{
  ulonglong uVar1;
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  undefined4 in_stack_ffffffffffffffd4;

  auVar2._4_12_ = in_register_00001204;
  auVar2._0_4_ = param_1;
  uVar1 = auVar2._0_8_;
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    if (((uint)param_1 & 0x7fffff) == 0) {
      FUN_1800c76c0(&DAT_1800f7ff8,0x12,-NAN,1,8,CONCAT44(in_stack_ffffffffffffffd4,0x21),param_1,
                    0.0,1);
      return 0xffc00000;
    }
    uVar1 = (ulonglong)((uint)param_1 | 0x400000);
  }
  return uVar1;
}


ulonglong FUN_1800c7cb0(float param_1)

{
  ulonglong uVar1;
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  undefined4 in_stack_ffffffffffffffd4;

  auVar2._4_12_ = in_register_00001204;
  auVar2._0_4_ = param_1;
  uVar1 = auVar2._0_8_;
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    if (((uint)param_1 & 0x7fffff) == 0) {
      FUN_1800c76c0(&DAT_1800f7ff0,0x1e,-NAN,1,8,CONCAT44(in_stack_ffffffffffffffd4,0x21),param_1,
                    0.0,1);
      return 0xffc00000;
    }
    uVar1 = (ulonglong)((uint)param_1 | 0x400000);
  }
  return uVar1;
}


uint FUN_1800c7d40(void)

{
  uint uVar1;

  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}


uint FUN_1800c7d60(uint param_1,uint param_2)

{
  uint uVar1;

  uVar1 = MXCSR;
  MXCSR = (~param_2 | 0xffff807f) & MXCSR | param_1 & param_2;
  if ((DAT_180112670 == '\0') || ((MXCSR & 0x40) == 0)) {
    MXCSR = MXCSR & 0xffffffbf;
    return uVar1;
  }
  return uVar1;
}


undefined4 FUN_1800c7de0(void)

{
  return MXCSR;
}


void FUN_1800c7df0(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}


void FUN_1800c7e00(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}


uint FUN_1800c7e20(void)

{
  return MXCSR & 0x3f;
}


// WARNING: Removing unreachable block (ram,0x0001800c7eb0)
// WARNING: Removing unreachable block (ram,0x0001800c7ea2)
// WARNING: Removing unreachable block (ram,0x0001800c7e47)

undefined8 FUN_1800c7e30(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;

  DAT_1801163a0 = 0;
  DAT_1801163a4 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_1801163a0 = 1;
      DAT_1801163a4 = 1;
    }
    else {
      DAT_1801163a0 = 0;
    }
  }
  if ((DAT_1801163a0 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_1801163a4 = 3;
      DAT_1801163a0 = 3;
      return 0;
    }
  }
  return 0;
}


float FUN_1800c7ef0(float param_1,float param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_stack_ffffffffffffffc4;

  if (param_3 == 2) {
    iVar1 = 4;
    uVar2 = 0x12;
  }
  else {
    if (param_3 != 3) {
      return param_2;
    }
    uVar2 = 0x11;
    iVar1 = 3;
  }
  FUN_1800c76c0(&DAT_1800f8250,0x14,param_2,iVar1,uVar2,CONCAT44(in_stack_ffffffffffffffc4,0x22),
                param_1,0.0,1);
  return param_2;
}


float FUN_1800c7fb0(float param_1,float param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_stack_ffffffffffffffb4;

  switch(param_4) {
  case 1:
    iVar1 = 0;
    uVar4 = 0;
    uVar3 = 8;
    break;
  case 2:
    iVar1 = 2;
    uVar4 = 0x22;
    uVar3 = 4;
    break;
  case 3:
  case 4:
  case 5:
    fVar2 = (float)FUN_1800c7820((uint)param_3);
    return fVar2;
  case 6:
    iVar1 = 1;
    uVar4 = 0x21;
    uVar3 = 8;
    break;
  case 7:
    iVar1 = 4;
    uVar4 = 0x22;
    uVar3 = 0x12;
    break;
  default:
    goto switchD_1800c7fdb_caseD_8;
  case 9:
    iVar1 = 3;
    uVar4 = 0x22;
    uVar3 = 0x11;
  }
  FUN_1800c76c0(&DAT_1800f8a70,0x1d,param_3,iVar1,uVar3,CONCAT44(in_stack_ffffffffffffffb4,uVar4),
                param_1,param_2,2);
switchD_1800c7fdb_caseD_8:
  return param_3;
}


// Library Function - Single Match
//  __remainder_piby2d2f_forC
//
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __remainder_piby2d2f_forC(ulonglong param_1,double *param_2,uint *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  sbyte sVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;

  uVar19 = (param_1 >> 0x34) - 0x3ff;
  lVar17 = -((uVar19 >> 3) - 0x86);
  uVar13 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_1800f8b30 + lVar17);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar2 * auVar5,8);
  uVar9 = SUB168(auVar2 * auVar5,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&UNK_1800f8b38 + lVar17);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar13;
  uVar19 = uVar19 & 7;
  auVar8 = auVar3 * auVar6 + auVar8;
  uVar10 = auVar8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(&UNK_1800f8b40 + lVar17);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar13;
  uVar18 = auVar8._8_8_ + SUB168(auVar4 * auVar7,0);
  uVar16 = 0;
  bVar12 = (byte)(0x36 - uVar19) & 0x3f;
  uVar13 = uVar18 >> bVar12;
  bVar1 = (bool)(((0x36 - uVar19 & 0x3f) != 0) * ((uVar18 >> bVar12 - 1 & 1) != 0));
  if (bVar1) {
    uVar18 = ~uVar18;
    uVar10 = ~uVar10;
    uVar9 = ~uVar9;
    uVar16 = 0x8000000000000000;
  }
  *param_3 = (int)uVar13 + (uint)bVar1 & 3;
  sVar11 = (char)uVar19 + 10;
  uVar13 = (uVar18 << sVar11) >> sVar11;
  lVar14 = uVar19 - 0x36;
  lVar17 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  uVar18 = uVar10;
  if (uVar13 == 0) {
    lVar17 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    lVar14 = uVar19 - 0x76;
    uVar18 = uVar9;
    uVar13 = uVar10;
  }
  lVar15 = lVar17 + -0x34;
  if (lVar15 < 0) {
    bVar12 = -(byte)lVar15;
    uVar13 = uVar13 << (bVar12 & 0x3f) | uVar18 >> (-(bVar12 - 0x40) & 0x3f);
  }
  else if (lVar15 != 0) {
    uVar13 = uVar13 >> ((byte)lVar15 & 0x3f);
  }
  *param_2 = (double)(uVar13 & 0xffefffffffffffff | uVar16 | lVar14 + lVar17 + 0x3ff << 0x34) *
             1.5707963267948966;
  return;
}


FARPROC FUN_1800c82ac(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  HMODULE hLibModule;
  FARPROC pFVar6;
  FARPROC pFVar7;
  DWORD local_res18 [2];

  do {
    if (param_3 == param_4) {
      pFVar7 = (FARPROC)0x0;
LAB_1800c839e:
      __acrt_lock(0xe);
      local_res18[0] = 0;
      BVar5 = VirtualProtect(&DAT_180120000,0x100,4,local_res18);
      if (BVar5 != 0) {
        pFVar6 = pFVar7;
        if (pFVar7 == (FARPROC)0x0) {
          pFVar6 = (FARPROC)0xffffffffffffffff;
        }
        LOCK();
        (&DAT_180120000)[param_1] = pFVar6;
        UNLOCK();
        BVar5 = VirtualProtect(&DAT_180120000,0x100,2,local_res18);
        if (BVar5 != 0) {
          __acrt_unlock(0xe);
          return pFVar7;
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1800c18c0();
    }
    uVar2 = *param_3;
    hLibModule = (HMODULE)(&DAT_1801163b0)[uVar2];
    if (hLibModule == (HMODULE)0x0) {
      lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_1800f8bd0)[uVar2];
      hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if ((hLibModule != (HMODULE)0x0) ||
         ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
            (iVar4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
           (iVar4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
          (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0))))
      {
        LOCK();
        lVar1 = (&DAT_1801163b0)[uVar2];
        (&DAT_1801163b0)[uVar2] = hLibModule;
        UNLOCK();
        if (lVar1 != 0) {
          FreeLibrary(hLibModule);
        }
        goto LAB_1800c8444;
      }
      LOCK();
      (&DAT_1801163b0)[uVar2] = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_1800c8444:
      pFVar7 = GetProcAddress(hLibModule,param_2);
      goto LAB_1800c839e;
    }
    param_3 = param_3 + 1;
  } while( true );
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

INT_PTR FUN_1800c8460(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;

  if (DAT_1801200d0 == (FARPROC)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pFVar1 = DAT_1801200d0;
  if ((DAT_1801200d0 == (FARPROC)0x0) &&
     (pFVar1 = FUN_1800c82ac(0x1a,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_1800f933c,
                             (uint *)"AppPolicyGetProcessTerminationMethod"), pFVar1 == (FARPROC)0x0
     )) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

INT_PTR FUN_1800c84bc(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;

  if (DAT_1801200e0 == (FARPROC)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pFVar1 = DAT_1801200e0;
  if ((DAT_1801200e0 == (FARPROC)0x0) &&
     (pFVar1 = FUN_1800c82ac(0x1c,"AppPolicyGetShowDeveloperDiagnostic",(uint *)&DAT_1800f9368,
                             (uint *)&DAT_1800f936c), pFVar1 == (FARPROC)0x0)) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

INT_PTR FUN_1800c8518(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;

  if (DAT_1801200e8 == (FARPROC)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pFVar1 = DAT_1801200e8;
  if ((DAT_1801200e8 == (FARPROC)0x0) &&
     (pFVar1 = FUN_1800c82ac(0x1d,"AppPolicyGetWindowingModel",(uint *)&DAT_1800f9394,
                             (uint *)"AppPolicyGetWindowingModel"), pFVar1 == (FARPROC)0x0)) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

INT_PTR FUN_1800c8574(void)

{
  FARPROC pFVar1;
  INT_PTR IVar2;

  if (DAT_180120000 == (FARPROC)0xffffffffffffffff) {
    return 1;
  }
  pFVar1 = DAT_180120000;
  if ((DAT_180120000 == (FARPROC)0x0) &&
     (pFVar1 = FUN_1800c82ac(0,"AreFileApisANSI",(uint *)&DAT_1800f9228,(uint *)&DAT_1800f922c),
     pFVar1 == (FARPROC)0x0)) {
    return 1;
  }
  IVar2 = (*pFVar1)();
  return IVar2;
}


DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;

                    // WARNING: Could not recover jumptable at 0x0001800c85c0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}


BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;

                    // WARNING: Could not recover jumptable at 0x0001800c85c8. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}


PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;

                    // WARNING: Could not recover jumptable at 0x0001800c85d0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}


void FUN_1800c85d8(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800c85df. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_180120018)();
  return;
}


BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;

                    // WARNING: Could not recover jumptable at 0x0001800c85e4. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}


BOOL __stdcall
InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount,DWORD Flags)

{
  BOOL BVar1;

                    // WARNING: Could not recover jumptable at 0x0001800c85ec. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = InitializeCriticalSectionEx(lpCriticalSection,dwSpinCount,Flags);
  return BVar1;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800c85f4(ushort *param_1,uint param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;

  if (DAT_180120090 == (FARPROC)0xffffffffffffffff) {
LAB_1800c869f:
    Locale = FUN_1800c86e8(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pFVar1 = DAT_180120090;
    if (DAT_180120090 == (FARPROC)0x0) {
      pFVar1 = FUN_1800c82ac(0x12,"LCMapStringEx",(uint *)&DAT_1800f92d8,(uint *)"LCMapStringEx");
      if (pFVar1 == (FARPROC)0x0) goto LAB_1800c869f;
    }
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800c86e8(ushort *param_1,uint param_2)

{
  FARPROC pFVar1;

  if (DAT_1801200a0 == (FARPROC)0xffffffffffffffff) {
LAB_1800c8737:
    FUN_1800cfe70(param_1);
  }
  else {
    pFVar1 = DAT_1801200a0;
    if (DAT_1801200a0 == (FARPROC)0x0) {
      pFVar1 = FUN_1800c82ac(0x14,"LocaleNameToLCID",(uint *)&DAT_1800f92f0,
                             (uint *)"LocaleNameToLCID");
      if (pFVar1 == (FARPROC)0x0) goto LAB_1800c8737;
    }
    (*pFVar1)(param_1,(ulonglong)param_2);
  }
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800c874c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FARPROC pFVar1;

  if (DAT_1801200b8 == (FARPROC)0xffffffffffffffff) {
LAB_1800c87c6:
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  pFVar1 = DAT_1801200b8;
  if (DAT_1801200b8 == (FARPROC)0x0) {
    pFVar1 = FUN_1800c82ac(0x17,"MessageBoxW",(uint *)&DAT_1800f9328,(uint *)"MessageBoxW");
    if (pFVar1 == (FARPROC)0x0) goto LAB_1800c87c6;
  }
  (*pFVar1)(param_1,param_2,param_3,param_4);
  return;
}


undefined8 FUN_1800c87cc(void)

{
  int iVar1;
  undefined4 extraout_var;
  FARPROC pFVar2;
  FARPROC pFVar3;
  undefined1 uVar4;

  uVar4 = 0;
  iVar1 = FUN_1800cadc8();
  pFVar3 = (FARPROC)CONCAT44(extraout_var,iVar1);
  if ((iVar1 == 1) && (pFVar3 = DAT_1801200b0, DAT_1801200b0 != (FARPROC)0xffffffffffffffff)) {
    if (DAT_1801200b0 == (FARPROC)0x0) {
      pFVar2 = FUN_1800c82ac(0x16,"MessageBoxA",(uint *)&DAT_1800f9310,(uint *)"MessageBoxA");
      pFVar3 = (FARPROC)0x0;
      if (pFVar2 == (FARPROC)0x0) goto LAB_1800c8848;
    }
    pFVar3 = DAT_1801200b8;
    if (DAT_1801200b8 != (FARPROC)0xffffffffffffffff) {
      if (DAT_1801200b8 == (FARPROC)0x0) {
        pFVar3 = FUN_1800c82ac(0x17,"MessageBoxW",(uint *)&DAT_1800f9328,(uint *)"MessageBoxW");
        if (pFVar3 == (FARPROC)0x0) goto LAB_1800c8848;
      }
      uVar4 = 1;
    }
  }
LAB_1800c8848:
  return CONCAT71((int7)((ulonglong)pFVar3 >> 8),uVar4);
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

INT_PTR FUN_1800c8850(void)

{
  FARPROC pFVar1;
  INT_PTR IVar2;

  if ((DAT_180120020 == (FARPROC)0xffffffffffffffff) ||
     (((pFVar1 = DAT_180120020, DAT_180120020 == (FARPROC)0x0 &&
       (pFVar1 = FUN_1800c82ac(4,"GetActiveWindow",(uint *)&DAT_1800f9258,(uint *)"GetActiveWindow")
       , pFVar1 == (FARPROC)0x0)) || (IVar2 = (*pFVar1)(), IVar2 == 0)))) {
    return 0;
  }
  if ((DAT_180120048 == (FARPROC)0xffffffffffffffff) ||
     ((pFVar1 = DAT_180120048, DAT_180120048 == (FARPROC)0x0 &&
      (pFVar1 = FUN_1800c82ac(9,"GetLastActivePopup",(uint *)&DAT_1800f9270,
                              (uint *)"GetLastActivePopup"), pFVar1 == (FARPROC)0x0)))) {
    return IVar2;
  }
  IVar2 = (*pFVar1)(IVar2);
  return IVar2;
}


bool FUN_1800c88f0(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];

  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_180120000,0x100,2,local_res8);
  return BVar1 != 0;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

byte FUN_1800c8920(void)

{
  FARPROC pFVar1;
  FARPROC pFVar2;
  INT_PTR IVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_58;
  if (((DAT_180120058 == (FARPROC)0xffffffffffffffff) ||
      (((pFVar1 = DAT_180120058, DAT_180120058 == (FARPROC)0x0 &&
        (pFVar1 = FUN_1800c82ac(0xb,"GetProcessWindowStation",(uint *)&DAT_1800f9290,
                                (uint *)"GetProcessWindowStation"), pFVar1 == (FARPROC)0x0)) ||
       (DAT_180120078 == (FARPROC)0xffffffffffffffff)))) ||
     ((pFVar2 = DAT_180120078, DAT_180120078 == (FARPROC)0x0 &&
      (pFVar2 = FUN_1800c82ac(0xf,"GetUserObjectInformationW",(uint *)&DAT_1800f92b0,
                              (uint *)"GetUserObjectInformationW"), pFVar2 == (FARPROC)0x0)))) {
    return 1;
  }
  IVar3 = (*pFVar1)();
  if (IVar3 != 0) {
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    IVar3 = (*pFVar2)(IVar3,1,&local_28,0xc);
    if ((int)IVar3 != 0) {
      return (byte)local_20 & 1;
    }
  }
  return 0;
}


bool FUN_1800c8a0c(void)

{
  FARPROC pFVar1;
  bool bVar2;

  if (DAT_180120018 == -1) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    bVar2 = DAT_180120018 == 0;
    if (!bVar2) goto LAB_1800c8a46;
    pFVar1 = FUN_1800c82ac(3,"FlsGetValue2",(uint *)&DAT_1800f9240,(uint *)"FlsGetValue2");
  }
  bVar2 = pFVar1 == (FARPROC)0x0;
LAB_1800c8a46:
  return !bVar2;
}


// Library Function - Single Match
//  __acrt_uninitialize_winapi_thunks
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined *in_RAX;
  undefined8 *puVar1;

  if (param_1 == '\0') {
    puVar1 = &DAT_1801163b0;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_180116468;
    } while (puVar1 != (undefined8 *)&DAT_180116468);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


int FUN_1800c8a94(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_18;

  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_180115d98; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_180115da0 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_1800b1c20(*(FILE **)(DAT_180115da0 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_180115da0 + lVar4 * 8) + 0x30));
      FUN_1800c3030(*(LPVOID *)(DAT_180115da0 + lVar4 * 8));
      *(undefined8 *)(DAT_180115da0 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}


// Library Function - Single Match
//  __acrt_initialize_locks
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __acrt_initialize_locks(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  uint uVar3;

  uVar2 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_180116470 + uVar2 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar2 = __acrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_1801166c8 = DAT_1801166c8 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < 0xf);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}


// Library Function - Multiple Matches With Different Base Names
//  __acrt_lock
//  __acrt_unlock
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_lock(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800c8baa. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180116470 + (longlong)param_1 * 0x28));
  return;
}


// Library Function - Single Match
//  __acrt_uninitialize_locks
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8 __acrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;

  uVar1 = (ulonglong)DAT_1801166c8;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180116470 + uVar1 * 0x28));
    DAT_1801166c8 = DAT_1801166c8 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


// Library Function - Single Match
//  __acrt_unlock
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_unlock(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800c8c0a. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180116470 + (longlong)param_1 * 0x28));
  return;
}


undefined8 FUN_1800c8c14(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;

  __acrt_lowio_lock_fh(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_180115f70)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_1800cf968(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_1800c8c8b;
    DVar3 = GetLastError();
    p_Var4 = FUN_1800c232c();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_1800c2350();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_1800c8c8b:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar5;
}


// Library Function - Single Match
//  _commit
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl _commit(int _FileHandle)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int *local_18 [3];

  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180116370)) &&
       ((*(byte *)((&DAT_180115f70)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      uVar2 = FUN_1800c8c14(local_res10,local_res20,local_18,local_res18);
      return (int)uVar2;
    }
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 9;
    FUN_1800c2ac4();
  }
  return -1;
}


int FUN_1800c8d34(uint param_1,short *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  HANDLE hFile;
  short *psVar4;
  BOOL BVar5;
  ulonglong uVar6;
  short *psVar7;
  short sVar8;
  short *psVar9;
  longlong lVar10;
  longlong lVar11;
  short local_res8 [4];
  short local_res10 [4];
  DWORD local_res18 [2];

  lVar10 = 0;
  uVar6 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  lVar3 = (&DAT_180115f70)[lVar11];
  hFile = *(HANDLE *)(lVar3 + 0x28 + uVar6 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 | 4;
  }
  psVar9 = param_2;
  psVar4 = param_2;
  do {
    if (param_2 + param_3 <= psVar4) goto LAB_1800c8f0e;
    sVar8 = *psVar4;
    if (sVar8 == 0x1a) {
      bVar2 = *(byte *)((&DAT_180115f70)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48);
      if ((bVar2 & 0x40) != 0) {
        *psVar9 = 0x1a;
        goto LAB_1800c8f0b;
      }
      *(byte *)((&DAT_180115f70)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar2 | 2;
      goto LAB_1800c8f0e;
    }
    psVar7 = psVar4 + 1;
    if (sVar8 == 0xd) {
      if (param_2 + param_3 <= psVar7) {
        local_res8[0] = 0;
        local_res18[0] = 0;
        BVar5 = ReadFile(hFile,local_res8,2,local_res18,(LPOVERLAPPED)0x0);
        if ((BVar5 == 0) || (local_res18[0] == 0)) {
LAB_1800c8ed2:
          *psVar9 = 0xd;
          goto LAB_1800c8f0b;
        }
        if ((*(byte *)((&DAT_180115f70)[lVar11] + 0x38 + uVar6 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] != 10) || (psVar9 != param_2)) {
            FUN_1800c9bc0(param_1,(LARGE_INTEGER)0xfffffffffffffffe,1);
            if (local_res8[0] != 10) goto LAB_1800c8ed2;
            goto LAB_1800c8f0e;
          }
        }
        else if (local_res8[0] != 10) {
          local_res10[0] = local_res8[0];
          *psVar9 = 0xd;
          do {
            *(undefined1 *)
             ((&DAT_180115f70)[lVar11] + (ulonglong)(param_1 & 0x3f) * 0x48 + 0x3a + lVar10) =
                 *(undefined1 *)((longlong)local_res10 + lVar10);
            lVar10 = lVar10 + 1;
          } while (lVar10 < 2);
          *(undefined1 *)((&DAT_180115f70)[lVar11] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) = 10
          ;
LAB_1800c8f0b:
          psVar9 = psVar9 + 1;
LAB_1800c8f0e:
          return (int)((longlong)psVar9 - (longlong)param_2 >> 1) * 2;
        }
        *psVar9 = 10;
        goto LAB_1800c8f0b;
      }
      if (*psVar7 == 10) {
        psVar7 = psVar4 + 2;
        sVar8 = 10;
      }
    }
    *psVar9 = sVar8;
    psVar9 = psVar9 + 1;
    psVar4 = psVar7;
  } while( true );
}


int FUN_1800c8f30(uint param_1,byte *param_2,longlong param_3,LPWSTR param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  byte *pbVar5;
  __acrt_ptd *p_Var6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  char local_res8 [8];
  DWORD local_res10 [2];

  lVar13 = (longlong)(int)param_1 >> 6;
  uVar12 = (ulonglong)(param_1 & 0x3f);
  lVar2 = (&DAT_180115f70)[lVar13];
  hFile = *(HANDLE *)(lVar2 + 0x28 + uVar12 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar9 = (byte *)(lVar2 + 0x38 + uVar12 * 0x48);
    *pbVar9 = *pbVar9 & 0xfb;
  }
  else {
    pbVar9 = (byte *)(lVar2 + 0x38 + uVar12 * 0x48);
    *pbVar9 = *pbVar9 | 4;
  }
  pbVar9 = param_2;
  pbVar10 = param_2;
  do {
    if (param_2 + param_3 <= pbVar10) {
LAB_1800c909c:
      iVar7 = (int)pbVar9 - (int)param_2;
      if (iVar7 == 0) {
        return 0;
      }
      if (*(char *)((&DAT_180115f70)[lVar13] + 0x39 + uVar12 * 0x48) == '\0') {
        return iVar7;
      }
      pbVar9 = param_2 + iVar7;
      if ((char)pbVar9[-1] < '\0') {
        uVar11 = 1;
        for (pbVar9 = pbVar9 + -1;
            (((&DAT_180112680)[*pbVar9] == '\0' && (uVar11 < 5)) && (param_2 <= pbVar9));
            pbVar9 = pbVar9 + -1) {
          uVar11 = uVar11 + 1;
        }
        if ((char)(&DAT_180112680)[*pbVar9] == 0) {
          p_Var6 = FUN_1800c2350();
          *(undefined4 *)p_Var6 = 0x2a;
          return -1;
        }
        if ((int)(char)(&DAT_180112680)[*pbVar9] + 1U == uVar11) {
          pbVar9 = pbVar9 + uVar11;
        }
        else if ((*(byte *)((&DAT_180115f70)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) &
                 0x48) == 0) {
          FUN_1800c9bc0(param_1,(LARGE_INTEGER)(longlong)(int)-uVar11,1);
        }
        else {
          pbVar10 = pbVar9 + 1;
          *(byte *)((&DAT_180115f70)[lVar13] + 0x3a + (ulonglong)(param_1 & 0x3f) * 0x48) = *pbVar9;
          if (1 < uVar11) {
            bVar1 = *pbVar10;
            pbVar10 = pbVar9 + 2;
            *(byte *)((&DAT_180115f70)[lVar13] + 0x3b + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar1;
          }
          if (uVar11 == 3) {
            bVar1 = *pbVar10;
            pbVar10 = pbVar10 + 1;
            *(byte *)((&DAT_180115f70)[lVar13] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar1;
          }
          pbVar9 = pbVar10 + -(ulonglong)uVar11;
        }
      }
      iVar8 = (int)pbVar9 - (int)param_2;
      iVar7 = FUN_1800cc4b8(0xfde9,0,(LPCSTR)param_2,iVar8,param_4,param_5);
      if (iVar7 == 0) {
        DVar4 = GetLastError();
        FUN_1800c22e0(DVar4);
        return -1;
      }
      *(byte *)((&DAT_180115f70)[lVar13] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) =
           -(iVar7 != iVar8) & 2U |
           *(byte *)((&DAT_180115f70)[lVar13] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) & 0xfd;
      return iVar7 * 2;
    }
    bVar1 = *pbVar10;
    if (bVar1 == 0x1a) {
      bVar1 = *(byte *)((&DAT_180115f70)[lVar13] + 0x38 + uVar12 * 0x48);
      if ((bVar1 & 0x40) != 0) {
        *pbVar9 = 0x1a;
        goto LAB_1800c9099;
      }
      *(byte *)((&DAT_180115f70)[lVar13] + 0x38 + uVar12 * 0x48) = bVar1 | 2;
      goto LAB_1800c909c;
    }
    pbVar5 = pbVar10 + 1;
    if (bVar1 == 0xd) {
      if (param_2 + param_3 <= pbVar5) {
        local_res8[0] = '\0';
        local_res10[0] = 0;
        BVar3 = ReadFile(hFile,local_res8,1,local_res10,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (local_res10[0] == 0)) {
          *pbVar9 = 0xd;
        }
        else if ((*(byte *)((&DAT_180115f70)[lVar13] + 0x38 + uVar12 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] == '\n') && (pbVar9 == param_2)) goto LAB_1800c902a;
          FUN_1800c9bc0(param_1,(LARGE_INTEGER)0xffffffffffffffff,1);
          if (local_res8[0] == '\n') goto LAB_1800c909c;
          *pbVar9 = 0xd;
        }
        else if (local_res8[0] == '\n') {
LAB_1800c902a:
          *pbVar9 = 10;
        }
        else {
          *pbVar9 = 0xd;
          *(char *)((&DAT_180115f70)[lVar13] + 0x3a + uVar12 * 0x48) = local_res8[0];
        }
LAB_1800c9099:
        pbVar9 = pbVar9 + 1;
        goto LAB_1800c909c;
      }
      if (*pbVar5 != 10) goto LAB_1800c8fc9;
      pbVar5 = pbVar10 + 2;
      *pbVar9 = 10;
    }
    else {
LAB_1800c8fc9:
      *pbVar9 = bVar1;
    }
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar5;
  } while( true );
}


int FUN_1800c9260(uint param_1,LPWSTR param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  __acrt_ptd *p_Var3;

  if (param_1 == 0xfffffffe) {
    p_Var3 = FUN_1800c232c();
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = FUN_1800c2350();
    *(undefined4 *)p_Var3 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_180116370 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((*(byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        __acrt_lowio_lock_fh(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          p_Var3 = FUN_1800c2350();
          *(undefined4 *)p_Var3 = 9;
          p_Var3 = FUN_1800c232c();
          *(undefined4 *)p_Var3 = 0;
        }
        else {
          iVar2 = FUN_1800c9380(param_1,param_2,param_3);
        }
        __acrt_lowio_unlock_fh(param_1);
        return iVar2;
      }
      p_Var3 = FUN_1800c232c();
      *(undefined4 *)p_Var3 = 0;
      p_Var3 = FUN_1800c2350();
      *(undefined4 *)p_Var3 = 0x16;
      goto LAB_1800c92e6;
    }
  }
  p_Var3 = FUN_1800c232c();
  *(undefined4 *)p_Var3 = 0;
  p_Var3 = FUN_1800c2350();
  *(undefined4 *)p_Var3 = 9;
LAB_1800c92e6:
  FUN_1800c2ac4();
  return -1;
}


int FUN_1800c9380(uint param_1,LPWSTR param_2,uint param_3)

{
  WCHAR *pWVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  __acrt_ptd *p_Var9;
  ulonglong uVar10;
  undefined7 extraout_var;
  WCHAR WVar11;
  LPWSTR pWVar12;
  uint nNumberOfBytesToRead;
  ulonglong uVar13;
  longlong lVar14;
  LPWSTR pWVar15;
  DWORD local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  ulonglong local_58;
  ulonglong local_50;
  LPWSTR local_48;

  if (param_1 == 0xfffffffe) {
    p_Var9 = FUN_1800c232c();
    *(undefined4 *)p_Var9 = 0;
    p_Var9 = FUN_1800c2350();
    *(undefined4 *)p_Var9 = 9;
    return -1;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_180116370)) {
    uVar10 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar14 = (&DAT_180115f70)[local_58];
    if ((*(byte *)(lVar14 + 0x38 + uVar10 * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((*(byte *)(lVar14 + 0x38 + uVar10 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (LPWSTR)0x0) {
          local_60 = *(HANDLE *)(lVar14 + 0x28 + uVar10 * 0x48);
          pWVar12 = (LPWSTR)0x0;
          cVar3 = *(char *)(lVar14 + 0x39 + uVar10 * 0x48);
          if (cVar3 == '\x01') {
            if ((~param_3 & 1) == 0) goto LAB_1800c947a;
            uVar7 = param_3 >> 1;
            if (uVar7 < 4) {
              uVar7 = 4;
            }
            pWVar12 = _malloc_base((ulonglong)uVar7);
            FUN_1800c3030((LPVOID)0x0);
            FUN_1800c3030((LPVOID)0x0);
            if (pWVar12 != (LPWSTR)0x0) {
              lVar14 = FUN_1800c9bc0(param_1,(LARGE_INTEGER)0x0,1);
              *(longlong *)((&DAT_180115f70)[local_58] + 0x30 + uVar10 * 0x48) = lVar14;
              local_48 = pWVar12;
              goto LAB_1800c951c;
            }
            p_Var9 = FUN_1800c2350();
            *(undefined4 *)p_Var9 = 0xc;
            p_Var9 = FUN_1800c232c();
            *(undefined4 *)p_Var9 = 8;
          }
          else if ((cVar3 == '\x02') && ((~param_3 & 1) == 0)) {
LAB_1800c947a:
            p_Var9 = FUN_1800c232c();
            *(undefined4 *)p_Var9 = 0;
            p_Var9 = FUN_1800c2350();
            *(undefined4 *)p_Var9 = 0x16;
            FUN_1800c2ac4();
          }
          else {
            local_48 = param_2;
            uVar7 = param_3;
LAB_1800c951c:
            iVar8 = 0;
            pWVar15 = local_48;
            nNumberOfBytesToRead = uVar7;
            if ((((*(byte *)((&DAT_180115f70)[local_58] + 0x38 + uVar10 * 0x48) & 0x48) != 0) &&
                (cVar4 = *(char *)((&DAT_180115f70)[local_58] + 0x3a + uVar10 * 0x48), cVar4 != '\n'
                )) && (uVar7 != 0)) {
              *(char *)local_48 = cVar4;
              nNumberOfBytesToRead = uVar7 - 1;
              pWVar15 = (LPWSTR)((longlong)local_48 + 1);
              iVar8 = 1;
              *(undefined1 *)((&DAT_180115f70)[local_58] + 0x3a + uVar10 * 0x48) = 10;
              if (((cVar3 != '\0') &&
                  (cVar4 = *(char *)((&DAT_180115f70)[local_58] + 0x3b + uVar10 * 0x48),
                  cVar4 != '\n')) && (nNumberOfBytesToRead != 0)) {
                *(char *)pWVar15 = cVar4;
                iVar8 = 2;
                pWVar15 = local_48 + 1;
                nNumberOfBytesToRead = uVar7 - 2;
                *(undefined1 *)((&DAT_180115f70)[local_58] + 0x3b + uVar10 * 0x48) = 10;
                if (((cVar3 == '\x01') &&
                    (cVar4 = *(char *)((&DAT_180115f70)[local_58] + 0x3c + uVar10 * 0x48),
                    cVar4 != '\n')) && (nNumberOfBytesToRead != 0)) {
                  *(char *)pWVar15 = cVar4;
                  iVar8 = 3;
                  pWVar15 = (LPWSTR)((longlong)local_48 + 3);
                  nNumberOfBytesToRead = uVar7 - 3;
                  *(undefined1 *)((&DAT_180115f70)[local_58] + 0x3c + uVar10 * 0x48) = 10;
                }
              }
            }
            local_68[0] = 0;
            bVar5 = FUN_1800cf45c(param_1);
            if ((((int)CONCAT71(extraout_var,bVar5) == 0) ||
                (-1 < *(char *)((&DAT_180115f70)[local_58] + 0x38 + uVar10 * 0x48))) ||
               (BVar6 = GetConsoleMode(local_60,local_68), BVar6 == 0)) {
              local_50 = local_50 & 0xffffffffffffff00;
LAB_1800c9652:
              local_res20[0] = 0;
              BVar6 = ReadFile(local_60,pWVar15,nNumberOfBytesToRead,local_res20,(LPOVERLAPPED)0x0);
              if ((BVar6 != 0) && (local_res20[0] <= param_3)) {
                uVar7 = local_res20[0];
LAB_1800c9694:
                iVar8 = iVar8 + uVar7;
                if (*(char *)((&DAT_180115f70)[local_58] + 0x38 + uVar10 * 0x48) < '\0') {
                  if (cVar3 == '\x02') {
                    uVar13 = (ulonglong)(longlong)iVar8 >> 1;
                    if ((char)local_50 == '\0') {
                      iVar8 = FUN_1800c8d34(param_1,local_48,uVar13);
                    }
                    else {
                      pWVar1 = local_48;
                      for (pWVar15 = local_48; pWVar15 < local_48 + uVar13;
                          pWVar15 = (LPWSTR)((longlong)pWVar15 + lVar14)) {
                        WVar11 = *pWVar15;
                        if (WVar11 == L'\x1a') {
                          pbVar2 = (byte *)((&DAT_180115f70)[local_58] + 0x38 + uVar10 * 0x48);
                          *pbVar2 = *pbVar2 | 2;
                          break;
                        }
                        if (((WVar11 == L'\r') && (pWVar15 + 1 < local_48 + uVar13)) &&
                           (pWVar15[1] == L'\n')) {
                          WVar11 = L'\n';
                          lVar14 = 4;
                        }
                        else {
                          lVar14 = 2;
                        }
                        *pWVar1 = WVar11;
                        pWVar1 = pWVar1 + 1;
                      }
                      iVar8 = (int)((longlong)pWVar1 - (longlong)local_48 >> 1) * 2;
                    }
                  }
                  else {
                    iVar8 = FUN_1800c8f30(param_1,(byte *)pWVar15,(longlong)iVar8,param_2,
                                          param_3 >> 1);
                  }
                }
                goto LAB_1800c9632;
              }
              uVar7 = GetLastError();
              if (uVar7 != 5) {
                if (uVar7 == 0x6d) {
                  iVar8 = 0;
                  goto LAB_1800c9632;
                }
                goto LAB_1800c9628;
              }
              p_Var9 = FUN_1800c2350();
              *(undefined4 *)p_Var9 = 9;
              p_Var9 = FUN_1800c232c();
              *(undefined4 *)p_Var9 = 5;
            }
            else {
              if (cVar3 != '\x02') goto LAB_1800c9652;
              local_res20[0] = 0;
              BVar6 = ReadConsoleW(local_60,pWVar15,nNumberOfBytesToRead >> 1,local_res20,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar6 != 0) {
                uVar7 = local_res20[0] * 2;
                goto LAB_1800c9694;
              }
              uVar7 = GetLastError();
LAB_1800c9628:
              FUN_1800c22e0(uVar7);
            }
          }
          iVar8 = -1;
LAB_1800c9632:
          FUN_1800c3030(pWVar12);
          return iVar8;
        }
      }
      p_Var9 = FUN_1800c232c();
      *(undefined4 *)p_Var9 = 0;
      p_Var9 = FUN_1800c2350();
      *(undefined4 *)p_Var9 = 0x16;
      goto LAB_1800c97bf;
    }
  }
  p_Var9 = FUN_1800c232c();
  *(undefined4 *)p_Var9 = 0;
  p_Var9 = FUN_1800c2350();
  *(undefined4 *)p_Var9 = 9;
LAB_1800c97bf:
  FUN_1800c2ac4();
  return -1;
}


ulonglong FUN_1800c97e0(FILE *param_1)

{
  uint *puVar1;
  byte bVar2;
  LPWSTR pWVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  __acrt_ptd *p_Var7;
  undefined *puVar8;

  if (param_1 == (FILE *)0x0) {
    p_Var7 = FUN_1800c2350();
    *(undefined4 *)p_Var7 = 0x16;
    FUN_1800c2ac4();
  }
  else if (((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 1 & 1) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if (((ulonglong)param_1->_base & 0x4c000000000) == 0) {
        __acrt_stdio_allocate_buffer_nolock(&param_1->_ptr);
      }
      pWVar3 = *(LPWSTR *)&param_1->_cnt;
      uVar6 = param_1->_charbuf;
      param_1->_ptr = (char *)pWVar3;
      uVar4 = _fileno(param_1);
      iVar5 = FUN_1800c9260(uVar4,pWVar3,uVar6);
      *(int *)&param_1->_base = iVar5;
      if (1 < iVar5 + 1U) {
        if (((ulonglong)param_1->_base & 0x600000000) == 0) {
          iVar5 = _fileno(param_1);
          if ((iVar5 == -1) || (iVar5 = _fileno(param_1), iVar5 == -2)) {
            puVar8 = &DAT_180112620;
          }
          else {
            iVar5 = _fileno(param_1);
            uVar6 = _fileno(param_1);
            puVar8 = (undefined *)
                     ((&DAT_180115f70)[(longlong)iVar5 >> 6] + (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar8[0x38] & 0x82) == 0x82) {
            LOCK();
            puVar1 = (uint *)((longlong)&param_1->_base + 4);
            *puVar1 = *puVar1 | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_charbuf == 0x200) &&
            ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x1000;
        }
        *(int *)&param_1->_base = *(int *)&param_1->_base + -1;
        bVar2 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (ulonglong)bVar2;
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)&param_1->_base = 0;
    }
    else {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}


longlong FUN_1800c994c(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;

  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180116370 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          lVar2 = FUN_1800c9a6c(param_1,param_2,param_3,(longlong)param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return lVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}


longlong FUN_1800c9a6c(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];

  hFile = (HANDLE)FUN_1800cf968(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_1800c2308(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return local_18[0].QuadPart;
    }
  }
  return -1;
}


longlong FUN_1800c9b1c(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  longlong lVar1;
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
  lVar1 = FUN_1800c994c(param_1,param_2,param_3,local_48);
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
  return lVar1;
}


longlong thunk_FUN_1800c994c(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;

  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180116370 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          lVar2 = FUN_1800c9a6c(param_1,param_2,param_3,(longlong)param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return lVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}


longlong FUN_1800c9bc0(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  longlong lVar1;
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
  lVar1 = FUN_1800c9a6c(param_1,param_2,param_3,(longlong)local_48);
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
  return lVar1;
}


longlong thunk_FUN_1800c9a6c(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];

  hFile = (HANDLE)FUN_1800cf968(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    aLStack_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_1800c2308(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return aLStack_18[0].QuadPart;
    }
  }
  return -1;
}


void FUN_1800c9c64(void)

{
  _guard_check_icall();
  return;
}


ulonglong FUN_1800c9c80(float param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined1 extraout_var [60];
  undefined1 auVar5 [64];
  undefined1 extraout_var_00 [60];
  undefined1 auVar6 [64];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 in_stack_ffffffffffffffc4;

  uVar4 = (uint)param_1 >> 0x17 & 0xff;
  fVar7 = 0.0;
  if (0x7f800000 < (uint)ABS(param_1)) {
    auVar5._0_4_ = FUN_1800cff20((uint)param_1);
    auVar5._4_60_ = extraout_var;
    return auVar5._0_8_;
  }
  if (uVar4 < 0x65) {
    FUN_1800c7e00(0x20);
    return SUB648(ZEXT464(0x3fc90fdb),0);
  }
  if (uVar4 < 0x7f) {
    fVar8 = param_1;
    if ((int)param_1 < 0) {
      fVar8 = -param_1;
    }
    if (uVar4 < 0x7e) {
      fVar2 = fVar8 * fVar8;
    }
    else {
      fVar2 = (1.0 - fVar8) * 0.5;
      fVar8 = SQRT(fVar2);
      fVar7 = fVar8;
    }
    fVar9 = ((fVar2 * (fVar2 * (-(fVar2 * 0.0039613745) + -0.013381929) - 0.05652987) + 0.1841616) *
            fVar2) / (-(fVar2 * 0.8364113) + 1.1049696);
    if (uVar4 < 0x7e) {
      dVar1 = 1.5707963267948966 -
              ((double)param_1 - (6.123233995736766e-17 - (double)(fVar9 * param_1)));
      return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
    }
    if ((int)param_1 < 0) {
      dVar1 = ((double)(fVar8 * fVar9) - 6.123233995736766e-17) + (double)fVar7;
      dVar1 = 3.141592653589793 - (dVar1 + dVar1);
      return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
    }
    fVar3 = (float)((uint)fVar7 & 0xffff0000);
    fVar7 = (-(fVar3 * fVar3) + fVar2) / (fVar3 + fVar7);
    return (ulonglong)(uint)(fVar9 * (fVar8 + fVar8) + fVar7 + fVar7 + fVar3 + fVar3);
  }
  if (param_1 == 1.0) {
    return 0;
  }
  if (param_1 == -1.0) {
    FUN_1800c7e00(0x20);
    return SUB648(ZEXT464(0x40490fdb),0);
  }
  auVar6._0_4_ = FUN_1800c76c0("acosf",0xd,-NAN,1,8,CONCAT44(in_stack_ffffffffffffffc4,0x21),param_1
                               ,0.0,1);
  auVar6._4_60_ = extraout_var_00;
  return auVar6._0_8_;
}


undefined8 FUN_1800c9e80(float param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  double dVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_register_00001204 [60];
  undefined1 extraout_var [60];
  undefined1 in_register_00001244 [60];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  double dVar19;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];

  auVar24._0_8_ = (double)param_2;
  auVar24._8_8_ = in_register_00001244._4_8_;
  auVar26 = ZEXT1664(auVar24);
  auVar20._0_8_ = (double)param_1;
  auVar20._8_8_ = in_register_00001204._4_8_;
  auVar23 = ZEXT1664(auVar20);
  iVar6 = ((uint)((ulonglong)auVar20._0_8_ >> 0x34) & 0x7ff) -
          ((uint)((ulonglong)auVar24._0_8_ >> 0x34) & 0x7ff);
  dVar8 = ABS(auVar24._0_8_);
  dVar5 = ABS(auVar20._0_8_);
  if (0x7ff0000000000000 < (ulonglong)dVar8) {
LAB_1800c9f09:
    auVar23._0_4_ = FUN_1800cff20((uint)param_2);
    auVar23._4_60_ = extraout_var;
    return auVar23._0_8_;
  }
  if (0x7ff0000000000000 < (ulonglong)dVar5) {
    param_2 = param_1;
    goto LAB_1800c9f09;
  }
  if (dVar5 == 0.0) {
    if (-1 < (longlong)auVar24._0_8_) {
      auVar9._4_12_ = auVar20._4_12_;
      auVar9._0_4_ = param_1;
      return auVar9._0_8_;
    }
  }
  else {
    auVar22 = auVar20;
    auVar11 = auVar24;
    if (dVar8 == 0.0) {
      FUN_1800c7e00(0x20);
      auVar11 = auVar26._0_16_;
      auVar22 = auVar23._0_16_;
      if ((longlong)auVar20._0_8_ < 0) goto LAB_1800c9f6e;
    }
    if (0x1a < iVar6) {
      FUN_1800c7e00(0x20);
      if (-1 < (longlong)auVar20._0_8_) {
        return SUB648(ZEXT464(0x3fc90fdb),0);
      }
LAB_1800c9f6e:
      return SUB648(ZEXT464(0xbfc90fdb),0);
    }
    dVar19 = auVar22._0_8_;
    dVar14 = auVar11._0_8_;
    if ((iVar6 < -0xd) && (-1 < (longlong)auVar24._0_8_)) {
      if (-0x97 < iVar6) {
        if (-0x7f < iVar6) {
          auVar11._0_8_ = dVar19 / dVar14;
          auVar11._8_8_ = auVar22._8_8_;
          auVar12._0_4_ = (float)auVar11._0_8_;
          auVar12._4_12_ = auVar11._4_12_;
          return auVar12._0_8_;
        }
        dVar14 = (dVar19 * 1.2676506002282294e+30) / dVar14;
        uVar3 = (uint)((ulonglong)ABS(dVar14) >> 0x20);
        uVar2 = uVar3 >> 0x14;
        uVar3 = uVar3 >> 0x14;
        if (uVar2 < 0x65) {
          if ((int)(0x65 - uVar2) < 0x37) {
            uVar4 = ((ulonglong)dVar14 & 0x1fffffffffffff | 0x10000000000000) >>
                    (100 - (ulonglong)uVar3 & 0x3f);
            uVar4 = (uVar4 >> 1) + (ulonglong)((uint)uVar4 & 1);
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = (ulonglong)uVar3 - 100 << 0x34 | (ulonglong)dVar14 & 0xfffffffffffff;
        }
        uVar7 = (ulonglong)dVar14 & 0x8000000000000000 | uVar4;
        auVar23 = ZEXT864(uVar7);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar7;
        if ((uVar4 & 0x7ff0000000000000) == 0) {
          FUN_1800c7e00(0x30);
          auVar21 = auVar23._0_16_;
        }
        auVar10._0_4_ = (float)auVar21._0_8_;
        auVar10._4_12_ = auVar21._4_12_;
        return auVar10._0_8_;
      }
      FUN_1800c7e00(0x30);
      if ((longlong)auVar20._0_8_ < 0) {
        return SUB648(ZEXT464(0x80000000),0);
      }
      return 0;
    }
    if ((-0x1b < iVar6) || (-1 < (longlong)auVar24._0_8_)) {
      if ((dVar5 != INFINITY) || (dVar8 != INFINITY)) {
        auVar25 = auVar11;
        if ((longlong)auVar24._0_8_ < 0) {
          auVar25._0_8_ = -dVar14;
          auVar25._8_8_ = auVar11._8_8_;
        }
        if ((longlong)auVar20._0_8_ < 0) {
          auVar22._0_8_ = -dVar19;
        }
        bVar1 = auVar25._0_8_ < auVar22._0_8_;
        auVar15._0_8_ = -(ulonglong)!bVar1;
        auVar15._8_8_ = 0xffffffffffffffff;
        auVar11 = vblendvpd_avx(auVar25,auVar22,auVar15);
        auVar16._0_8_ = -(ulonglong)!bVar1;
        auVar16._8_8_ = 0xffffffffffffffff;
        auVar22 = vblendvpd_avx(auVar22,auVar25,auVar16);
        dVar5 = auVar22._0_8_;
        dVar8 = auVar11._0_8_;
        auVar17._0_8_ = dVar8 / dVar5;
        auVar17._8_8_ = auVar11._8_8_;
        if (auVar17._0_8_ <= 0.0625) {
          if (0.0001 <= auVar17._0_8_) {
            dVar5 = auVar17._0_8_ * auVar17._0_8_;
            auVar17._0_8_ =
                 -(dVar5 * auVar17._0_8_ *
                  (-(dVar5 * (-(dVar5 * 0.1428571356180717) + 0.19999999999393223)) +
                  0.3333333333333317)) + auVar17._0_8_;
          }
        }
        else {
          uVar3 = (uint)(auVar17._0_8_ * 256.0 + 0.5);
          dVar14 = (double)uVar3;
          dVar5 = (dVar8 * 256.0 - dVar5 * dVar14) / (dVar8 * dVar14 + dVar5 * 256.0);
          auVar17._0_8_ =
               -(dVar5 * dVar5 * dVar5 * 0.33333333333224097) +
               dVar5 + *(double *)(&DAT_1800f93c0 + (ulonglong)(uVar3 - 0x10) * 8);
          auVar17._8_8_ = 0;
        }
        if (bVar1) {
          dVar5 = auVar17._0_8_;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = 1.5707963267948966 - dVar5;
        }
        if ((longlong)auVar24._0_8_ < 0) {
          dVar5 = auVar17._0_8_;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = 3.141592653589793 - dVar5;
        }
        auVar18 = auVar17;
        if ((longlong)auVar20._0_8_ < 0) {
          auVar18._0_8_ = auVar17._0_8_ ^ 0x8000000000000000;
          auVar18._8_8_ = auVar17._8_8_;
        }
        auVar13._0_4_ = (float)auVar18._0_8_;
        auVar13._4_12_ = auVar18._4_12_;
        return auVar13._0_8_;
      }
      FUN_1800c7e00(0x20);
      if (-1 < (longlong)auVar24._0_8_) {
        if ((longlong)auVar20._0_8_ < 0) {
          return SUB648(ZEXT464(0xbf490fdb),0);
        }
        return SUB648(ZEXT464(0x3f490fdb),0);
      }
      if ((longlong)auVar20._0_8_ < 0) {
        return SUB648(ZEXT464(0xc016cbe4),0);
      }
      return SUB648(ZEXT464(0x4016cbe4),0);
    }
  }
  FUN_1800c7e00(0x20);
  if ((longlong)auVar20._0_8_ < 0) {
    return SUB648(ZEXT464(0xc0490fdb),0);
  }
  return SUB648(ZEXT464(0x40490fdb),0);
}


void FUN_1800ca260(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_1800ca2a0(param_1,param_2,param_3,0x1b,"log10");
  return;
}


void FUN_1800ca280(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_1800ca2a0(param_1,param_2,param_3,0x1a,&DAT_1800f7e34);
  return;
}


undefined8
FUN_1800ca2a0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffffffffffc4;

  if (param_3 == 1) {
    iVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return param_2;
    }
    uVar3 = 0x21;
    uVar2 = 8;
    iVar1 = 1;
  }
  FUN_1800c7580(param_5,param_4,param_2,iVar1,uVar2,CONCAT44(in_stack_ffffffffffffffc4,uVar3),
                param_1,0,1);
  return param_2;
}


void FUN_1800ca340(float param_1,float param_2,int param_3)

{
  FUN_1800ca360(param_1,param_2,param_3,0x1a,&DAT_1800fab70);
  return;
}


float FUN_1800ca360(float param_1,float param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffffffffffb4;

  if (param_3 == 1) {
    iVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return param_2;
    }
    uVar3 = 0x21;
    uVar2 = 8;
    iVar1 = 1;
  }
  FUN_1800c76c0(param_5,param_4,param_2,iVar1,uVar2,CONCAT44(in_stack_ffffffffffffffb4,uVar3),
                param_1,0.0,1);
  return param_2;
}


double FUN_1800ca410(double param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  undefined1 extraout_var [60];
  undefined1 auVar12 [64];
  undefined1 extraout_var_00 [60];
  undefined1 auVar13 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;

  uVar10 = (uint)((ulonglong)param_1 >> 0x20);
  uVar9 = uVar10 >> 0x14;
  uVar8 = 0;
  dVar4 = in_ZMM1._0_8_;
  uVar2 = in_ZMM1._4_4_;
  dVar11 = param_1;
  if ((0x7fd < (uVar10 >> 0x14) - 1) || (0x7f < (uVar2 >> 0x14 & 0x7ff) - 0x3be)) {
    uVar7 = (longlong)dVar4 * 2;
    if (0xffdffffffffffffe < uVar7 - 1) {
      if ((uVar7 == 0) || (dVar11 = dVar4, param_1 == 1.0)) {
        if (0xfff0000000000000 < ((ulonglong)dVar11 ^ 0x8000000000000) * 2) goto LAB_1800ca528;
      }
      else {
        uVar1 = (longlong)param_1 * 2;
        if ((0xffe0000000000000 < uVar1) || (0xffe0000000000000 < uVar7)) {
LAB_1800ca528:
          return param_1 + dVar4;
        }
        if (uVar1 != 0x7fe0000000000000) {
          if ((uint)(uVar1 < 0x7fe0000000000000) == (uVar2 >> 0x1f ^ 1)) {
            return 0.0;
          }
          return dVar4 * dVar4;
        }
      }
      return 1.0;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      dVar11 = param_1 * param_1;
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar10 = uVar2 >> 0x14 & 0x7ff, uVar10 - 0x3ff < 0x35)) &&
          (uVar7 = 1L << ((ulonglong)(0x433 - uVar10) & 0x3f), ((ulonglong)dVar4 & uVar7 - 1) == 0))
         && (((ulonglong)dVar4 & uVar7) != 0)) {
        dVar11 = -dVar11;
        uVar8 = 1;
      }
      if ((longlong)param_1 * 2 == 0) {
        if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
          return dVar11;
        }
        dVar11 = FUN_1800cac10(uVar8);
        return dVar11;
      }
      if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
        return dVar11;
      }
      return 1.0 / dVar11;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar8 = uVar2 >> 0x14 & 0x7ff;
      if (uVar8 < 0x3ff) {
LAB_1800ca6e4:
        dVar11 = FUN_1800cac70(param_1);
        return dVar11;
      }
      if (uVar8 < 0x434) {
        uVar7 = 1L << ((ulonglong)(0x433 - uVar8) & 0x3f);
        if (((ulonglong)dVar4 & uVar7 - 1) != 0) goto LAB_1800ca6e4;
        iVar3 = 2 - (uint)((uVar7 & (ulonglong)dVar4) != 0);
      }
      else {
        iVar3 = 2;
      }
      dVar11 = ABS(param_1);
      uVar9 = uVar10 >> 0x14 & 0x7ff;
      uVar8 = 0x80000;
      if (iVar3 != 1) {
        uVar8 = 0;
      }
    }
    uVar10 = uVar2 >> 0x14 & 0x7ff;
    if (0x7f < uVar10 - 0x3be) {
      if (dVar11 == 1.0) {
        return 1.0;
      }
      if (uVar10 < 0x3be) {
        if ((ulonglong)dVar11 < 0x3ff0000000000001) {
          return 1.0 - dVar4;
        }
        return dVar4 + 1.0;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar11 == uVar2 >> 0x14 < 0x800) {
        dVar11 = FUN_1800cacb0(0);
        return dVar11;
      }
      dVar11 = (double)FUN_1800cad00(0);
      return dVar11;
    }
    if (uVar9 == 0) {
      dVar11 = (double)((longlong)ABS(param_1 * 4503599627370496.0) + 0xfcc0000000000000);
    }
  }
  if (dVar4 == 1.0) {
    return param_1;
  }
  if (dVar11 == 1.0) {
    auVar15._0_8_ = -(ulonglong)(uVar8 == 0);
    auVar15._8_8_ = 0xffffffffffffffff;
    auVar15 = vblendvpd_avx(ZEXT816(0xbff0000000000000),ZEXT816(0x3ff0000000000000),auVar15);
    return auVar15._0_8_;
  }
  uVar10 = (uint)((longlong)dVar11 + 0xc0196aab00000000U >> 0x20);
  lVar5 = (ulonglong)(uVar10 >> 0xd & 0x7f) * 0x20;
  dVar19 = (double)((int)uVar10 >> 0x14);
  dVar17 = dVar19 * 0.6931471805598903 + *(double *)(&DAT_1800fc298 + lVar5);
  dVar18 = (double)((longlong)dVar11 - ((longlong)dVar11 + 0xc0196aab00000000U & 0xfff0000000000000)
                   ) * *(double *)(&DAT_1800fc288 + lVar5) + -1.0;
  dVar16 = dVar18 * -0.5 * dVar18;
  dVar11 = dVar17 + dVar18;
  dVar6 = dVar16 + dVar11;
  dVar17 = dVar16 * dVar18 *
           (dVar16 * (dVar16 * (dVar18 * 1.0000415263675542 + -1.142909628459501) +
                     dVar18 * -0.6666666663487739 + 0.7999999995323976) +
           dVar18 * 0.5000000000000007 + -0.6666666666666679) +
           dVar18 * dVar18 * -0.5 + -dVar16 +
           dVar19 * 5.497923018708371e-14 + *(double *)(&DAT_1800fc2a0 + lVar5) +
           (dVar17 - dVar11) + dVar18 + (dVar11 - dVar6) + dVar16;
  dVar11 = dVar17 + dVar6;
  dVar16 = dVar11 * dVar4;
  uVar10 = (uint)((ulonglong)dVar16 >> 0x34) & 0x7ff;
  if (0x3e < uVar10 - 0x3c9) {
    if (0x7fffffff < uVar10 - 0x3c9) {
      if (uVar8 == 0) {
        return dVar16 + 1.0;
      }
      return -(dVar16 + 1.0);
    }
    if (0x408 < uVar10) {
      if (((ulonglong)dVar16 & 0x8000000000000000) == 0) {
        dVar11 = FUN_1800cacb0(uVar8);
        return dVar11;
      }
      dVar11 = (double)FUN_1800cad00(uVar8);
      return dVar11;
    }
    uVar10 = 0;
  }
  dVar18 = dVar16 * 369.3299304675746 + 103079215104.5;
  uVar7 = (ulonglong)dVar18 >> 0x10;
  dVar18 = (double)(int)((ulonglong)dVar18 >> 0x10);
  dVar11 = dVar18 * 5.0411407304988844e-14 + dVar18 * -0.0027076061741126978 + dVar16 +
           dVar4 * ((dVar6 - dVar11) + dVar17) + dVar11 * dVar4 + -dVar16;
  dVar4 = dVar11 * dVar11;
  dVar6 = (double)((uVar8 + uVar7 << 0x2c) + *(longlong *)(&DAT_1800fb248 + (uVar7 & 0xff) * 0x10));
  dVar11 = dVar4 * dVar4 * (dVar11 * 0.008333335853047663 + 0.04166668084093659) +
           dVar4 * (dVar11 * 0.16666666666665886 + 0.49999999999996786) +
           dVar11 + *(double *)(&DAT_1800fb240 + (uVar7 & 0xff) * 0x10);
  if (uVar10 == 0) {
    if ((uVar7 & 0x80000000) == 0) {
      auVar12._0_4_ =
           FUN_1800caba0((dVar11 * (double)((longlong)dVar6 + -0x3f10000000000000) +
                         (double)((longlong)dVar6 + -0x3f10000000000000)) * 5.486124068793689e+303);
      auVar12._4_60_ = extraout_var;
      dVar6 = auVar12._0_8_;
    }
    else {
      dVar6 = (double)((longlong)dVar6 + 0x3fe0000000000000);
      dVar4 = dVar6 + dVar6 * dVar11;
      if (ABS(dVar4) < 1.0) {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = dVar4;
        auVar15 = vcmpsd_avx(auVar14,ZEXT816(0),1);
        auVar15 = vblendvpd_avx(ZEXT816(0x3ff0000000000000),ZEXT816(0xbff0000000000000),auVar15);
        dVar16 = auVar15._0_8_;
        dVar4 = ((dVar6 - dVar4) + dVar6 * dVar11 + (dVar16 - (dVar16 + dVar4)) + dVar4 +
                dVar16 + dVar4) - dVar16;
        if (dVar4 == 0.0) {
          dVar4 = (double)((ulonglong)dVar6 & 0x8000000000000000);
        }
      }
      auVar13._0_4_ = FUN_1800cabe0(dVar4 * 2.2250738585072014e-308);
      auVar13._4_60_ = extraout_var_00;
      dVar6 = auVar13._0_8_;
    }
  }
  else {
    dVar6 = dVar6 * dVar11 + dVar6;
  }
  return dVar6;
}


undefined4 FUN_1800caba0(double param_1)

{
  __acrt_ptd *p_Var1;

  if (INFINITY <= ABS(param_1)) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x22;
  }
  return SUB84(param_1,0);
}


undefined4 FUN_1800cabe0(double param_1)

{
  __acrt_ptd *p_Var1;

  if (param_1 == 0.0) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x22;
  }
  return SUB84(param_1,0);
}


double FUN_1800cac10(int param_1)

{
  __acrt_ptd *p_Var1;
  double dVar2;

  if (param_1 == 0) {
    dVar2 = 1.0;
  }
  else {
    dVar2 = -1.0;
  }
  p_Var1 = FUN_1800c2350();
  *(undefined4 *)p_Var1 = 0x22;
  return dVar2 * INFINITY;
}


double FUN_1800cac70(double param_1)

{
  __acrt_ptd *p_Var1;

  if (!NAN(param_1)) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x21;
  }
  return (param_1 - param_1) / (param_1 - param_1);
}


double FUN_1800cacb0(int param_1)

{
  __acrt_ptd *p_Var1;
  double dVar2;

  if (param_1 == 0) {
    dVar2 = 3.105036184601418e+231;
  }
  else {
    dVar2 = -3.105036184601418e+231;
  }
  p_Var1 = FUN_1800c2350();
  *(undefined4 *)p_Var1 = 0x22;
  return dVar2 * 3.105036184601418e+231;
}


undefined8 FUN_1800cad00(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return 0x8000000000000000;
}


ulonglong FUN_1800cad20(void)

{
  return (ulonglong)(uint3)((uint)*(undefined4 *)((longlong)ProcessEnvironmentBlock + 0xbc) >> 8) &
         0xffffffffffffff01;
}


uint FUN_1800cad3c(void)

{
  return *(uint *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x20) + 8) >> 0x1f;
}


void FUN_1800cad54(void)

{
  uint uVar1;
  int local_res8 [8];

  if (DAT_1801166cc == 0) {
    local_res8[0] = 1;
    uVar1 = FUN_1800cad3c();
    if ((char)uVar1 == '\0') {
      FUN_1800c84bc(local_res8);
    }
    DAT_1801166cc = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}


bool FUN_1800cad98(void)

{
  uint uVar1;
  int local_res8 [8];

  local_res8[0] = 0;
  uVar1 = FUN_1800cad3c();
  if ((char)uVar1 == '\0') {
    FUN_1800c8460(local_res8);
  }
  return local_res8[0] != 1;
}


int FUN_1800cadc8(void)

{
  uint uVar1;
  int iVar2;
  int local_res8 [8];

  if (DAT_1801166d0 != 0) {
    return DAT_1801166d0;
  }
  iVar2 = 2;
  local_res8[0] = 2;
  uVar1 = FUN_1800cad3c();
  if ((char)uVar1 == '\0') {
    FUN_1800c8518(local_res8);
  }
  if (local_res8[0] != 0) {
    if (local_res8[0] == 1) goto LAB_1800cae1d;
    if (local_res8[0] == 2) {
      iVar2 = 1;
      goto LAB_1800cae1d;
    }
    if (local_res8[0] == 3) {
      iVar2 = 3;
      goto LAB_1800cae1d;
    }
  }
  iVar2 = 4;
LAB_1800cae1d:
  LOCK();
  UNLOCK();
  DAT_1801166d0 = iVar2;
  return iVar2;
}


ulonglong FUN_1800cae30(ulonglong param_1,ulonglong param_2)

{
  if (param_1 < param_2) {
    return 0xffffffff;
  }
  return (ulonglong)(param_2 < param_1);
}


uint FUN_1800cae44(LPCSTR param_1,longlong param_2,undefined8 param_3,UINT param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;

  if (param_1 == (LPCSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_1800c3030(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = FUN_1800cc4b8(param_4,9,param_1,-1,(LPWSTR)0x0,0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_1800c3030(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = _malloc_base(uVar7 * 2);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar6 = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar7;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_1800cc4b8(param_4,9,param_1,-1,*(LPWSTR *)(param_2 + 0x10),(int)uVar6);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_1800c22e0(DVar2);
      p_Var4 = FUN_1800c2350();
      return *(uint *)p_Var4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_1800c3030(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = _malloc_base(2);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      bVar8 = pvVar3 != (LPVOID)0x0;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined2 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}


uint FUN_1800cafe4(LPCWSTR param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;

  if (param_1 == (LPCWSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_1800c3030(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != L'\0') {
      iVar1 = FUN_1800cc548(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_1800c3030(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = _malloc_base(uVar7);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar6 = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar7;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_1800cc548(param_4,0,param_1,-1,*(LPSTR *)(param_2 + 0x10),(int)uVar6,(LPCSTR)0x0
                              ,(LPBOOL)0x0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_1800c22e0(DVar2);
      p_Var4 = FUN_1800c2350();
      return *(uint *)p_Var4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_1800c3030(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = _malloc_base(1);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      bVar8 = pvVar3 != (LPVOID)0x0;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}


ulonglong FUN_1800cb190(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  byte *pbVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong local_res10;
  ulonglong local_res18;
  char *local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;

  if (param_2 == (undefined8 *)0x0) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    uVar11 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar3 = (byte *)*param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar8 = plStack_50, plVar9 = local_58, pbVar3 != (byte *)0x0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      pbVar3 = FUN_1800d0100(pbVar3,(byte *)&local_res10);
      if (pbVar3 == (byte *)0x0) {
        uVar7 = FUN_1800cb3cc((longlong)*param_1,0,0,(longlong *)&local_58);
        plVar9 = local_58;
        uVar11 = uVar7 & 0xffffffff;
        if ((int)uVar7 != 0) {
          plVar8 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_1800c3030((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_1800cb2df;
        }
      }
      else {
        uVar7 = FUN_1800cb550((uchar *)*param_1,pbVar3,(longlong *)&local_58);
        plVar9 = local_58;
        uVar11 = uVar7 & 0xffffffff;
        if ((int)uVar7 != 0) {
          plVar8 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_1800c3030((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_1800cb2df;
        }
      }
      param_1 = param_1 + 1;
      pbVar3 = (byte *)*param_1;
    }
    uVar7 = 0;
    local_res18 = 0;
    uVar11 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    plVar4 = local_58;
    if (local_58 != plStack_50) {
      do {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(*plVar4 + lVar6) != '\0');
        plVar4 = plVar4 + 1;
        uVar7 = uVar7 + 1 + lVar6;
      } while (plVar4 != plStack_50);
      local_res18 = uVar7;
    }
    pvVar5 = __acrt_allocate_buffer_for_argv(uVar11,local_res18,1);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_1800c3030((LPVOID)0x0);
      for (plVar4 = plVar9; plVar4 != plVar8; plVar4 = plVar4 + 1) {
        FUN_1800c3030((LPVOID)*plVar4);
      }
      uVar11 = 0xffffffff;
LAB_1800cb2df:
      FUN_1800c3030(plVar9);
    }
    else {
      pcVar10 = (char *)((longlong)pvVar5 + uVar11 * 8);
      local_res20 = pcVar10;
      if (plVar9 != plVar8) {
        local_res10 = (longlong)pvVar5 - (longlong)plVar9;
        plVar4 = plVar9;
        do {
          lVar6 = -1;
          do {
            lVar12 = lVar6;
            lVar6 = lVar12 + 1;
          } while (*(char *)(*plVar4 + lVar6) != '\0');
          lVar12 = lVar12 + 2;
          iVar1 = FUN_1800cff30(pcVar10,(longlong)(local_res20 + (local_res18 - (longlong)pcVar10)),
                                *plVar4,lVar12);
          if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(local_res10 + (longlong)plVar4) = pcVar10;
          pcVar10 = pcVar10 + lVar12;
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar8);
      }
      *param_2 = pvVar5;
      FUN_1800c3030((LPVOID)0x0);
      for (plVar4 = plVar9; plVar4 != plVar8; plVar4 = plVar4 + 1) {
        FUN_1800c3030((LPVOID)*plVar4);
      }
      FUN_1800c3030(plVar9);
      uVar11 = 0;
    }
  }
  return uVar11;
}


undefined8 FUN_1800cb3cc(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  char *pcVar2;
  LPVOID pvVar3;
  longlong lVar5;
  longlong lVar4;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;

  uVar7 = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_1 + lVar4) != '\0');
  uVar6 = lVar5 + 2;
  if (~param_3 < uVar6) {
    return 0xc;
  }
  uVar8 = param_3 + 1 + uVar6;
  pcVar2 = _calloc_base(uVar8,1);
  if (((param_3 != 0) && (iVar1 = FUN_1800cff30(pcVar2,uVar8,param_2,param_3), iVar1 != 0)) ||
     (iVar1 = FUN_1800cff30(pcVar2 + param_3,uVar8 - param_3,param_1,uVar6), iVar1 != 0)) {
                    // WARNING: Subroutine does not return
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_1800c3030((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_1800cb522;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_1800c3030((LPVOID)0x0);
          goto LAB_1800cb522;
        }
        FUN_1800c3030((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_1800c3030(pcVar2);
  }
  else {
LAB_1800cb522:
    *(char **)param_4[1] = pcVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_1800c3030((LPVOID)0x0);
  return uVar7;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800cb550(uchar *param_1,uchar *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  HANDLE hFindFile;
  INT_PTR IVar6;
  LPCWSTR lpFileName;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  UINT UVar11;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  LPCWSTR local_328;
  undefined8 local_320;
  undefined8 local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2f) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2f) & 0x3fU) & 1) == 0))))) {
    param_2 = (uchar *)FUN_1800d04b8(param_1,param_2);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    uVar5 = FUN_1800cb3cc((longlong)param_1,0,0,param_3);
  }
  else {
    bVar10 = *param_2 - 0x2f;
    if ((0x2d < bVar10) ||
       (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar10 & 0x3fU) & 1) == 0)) {
      bVar1 = 0;
    }
    uVar5 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar5;
    FUN_1800d22d0((undefined1 (*) [32])&local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      UVar11 = 0xfde9;
    }
    else {
      IVar6 = FUN_1800c8574();
      if ((int)IVar6 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        UVar11 = 1;
      }
      else {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        UVar11 = 0;
      }
    }
    uVar3 = FUN_1800cae44((LPCSTR)param_1,(longlong)&local_338,local_348,UVar11);
    lpFileName = local_328;
    if (uVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      uVar5 = FUN_1800cb3cc((longlong)param_1,0,0,param_3);
      uVar5 = uVar5 & 0xffffffff;
      if (local_310 != '\0') {
        FUN_1800c3030(local_328);
      }
    }
    else {
      lVar9 = param_3[1] - *param_3 >> 3;
      do {
        uVar3 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2e8,(__crt_locale_pointers *)0x0);
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
          uVar3 = 0xfde9;
        }
        else {
          IVar6 = FUN_1800c8574();
          if ((int)IVar6 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 1;
          }
          else if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        uVar3 = FUN_1800cafe4(local_298.cFileName,(longlong)&local_2c8,local_348,uVar3);
        pcVar2 = local_2b8;
        pcVar7 = local_2b8;
        if (uVar3 != 0) {
          pcVar7 = (char *)0x0;
        }
        if ((*pcVar7 == '.') && ((pcVar7[1] == '\0' || ((pcVar7[1] == '.' && (pcVar7[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_1800c3030(local_2b8);
          }
        }
        else {
          uVar5 = FUN_1800cb3cc((longlong)pcVar7,(longlong)param_1,uVar5,param_3);
          if ((int)uVar5 != 0) {
            if (local_2a0 != '\0') {
              FUN_1800c3030(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 != '\0') {
              FUN_1800c3030(local_328);
            }
            return uVar5 & 0xffffffff;
          }
          if (local_2a0 != (char)uVar5) {
            FUN_1800c3030(pcVar2);
          }
          uVar5 = local_340;
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar8 = param_3[1] - *param_3 >> 3;
      if (lVar9 != lVar8) {
        FUN_1800bebc0((undefined1 *)(*param_3 + lVar9 * 8),lVar8 - lVar9,8,FUN_1800cae30);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_1800c3030(local_328);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}


ulonglong thunk_FUN_1800cb190(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  byte *pbVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lStackX_10;
  ulonglong uStackX_18;
  char *pcStackX_20;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;

  if (param_2 == (undefined8 *)0x0) {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    uVar11 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar3 = (byte *)*param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar8 = plStack_50, plVar9 = plStack_58, pbVar3 != (byte *)0x0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      pbVar3 = FUN_1800d0100(pbVar3,(byte *)&lStackX_10);
      if (pbVar3 == (byte *)0x0) {
        uVar7 = FUN_1800cb3cc((longlong)*param_1,0,0,(longlong *)&plStack_58);
        plVar9 = plStack_58;
        uVar11 = uVar7 & 0xffffffff;
        if ((int)uVar7 != 0) {
          plVar8 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_1800c3030((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_1800cb2df;
        }
      }
      else {
        uVar7 = FUN_1800cb550((uchar *)*param_1,pbVar3,(longlong *)&plStack_58);
        plVar9 = plStack_58;
        uVar11 = uVar7 & 0xffffffff;
        if ((int)uVar7 != 0) {
          plVar8 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_1800c3030((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_1800cb2df;
        }
      }
      param_1 = param_1 + 1;
      pbVar3 = (byte *)*param_1;
    }
    uVar7 = 0;
    uStackX_18 = 0;
    uVar11 = ((longlong)plStack_50 - (longlong)plStack_58 >> 3) + 1;
    plVar4 = plStack_58;
    if (plStack_58 != plStack_50) {
      do {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(*plVar4 + lVar6) != '\0');
        plVar4 = plVar4 + 1;
        uVar7 = uVar7 + 1 + lVar6;
      } while (plVar4 != plStack_50);
      uStackX_18 = uVar7;
    }
    pvVar5 = __acrt_allocate_buffer_for_argv(uVar11,uStackX_18,1);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_1800c3030((LPVOID)0x0);
      for (plVar4 = plVar9; plVar4 != plVar8; plVar4 = plVar4 + 1) {
        FUN_1800c3030((LPVOID)*plVar4);
      }
      uVar11 = 0xffffffff;
LAB_1800cb2df:
      FUN_1800c3030(plVar9);
    }
    else {
      pcVar10 = (char *)((longlong)pvVar5 + uVar11 * 8);
      pcStackX_20 = pcVar10;
      if (plVar9 != plVar8) {
        lStackX_10 = (longlong)pvVar5 - (longlong)plVar9;
        plVar4 = plVar9;
        do {
          lVar6 = -1;
          do {
            lVar12 = lVar6;
            lVar6 = lVar12 + 1;
          } while (*(char *)(*plVar4 + lVar6) != '\0');
          lVar12 = lVar12 + 2;
          iVar1 = FUN_1800cff30(pcVar10,(longlong)(pcStackX_20 + (uStackX_18 - (longlong)pcVar10)),
                                *plVar4,lVar12);
          if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(lStackX_10 + (longlong)plVar4) = pcVar10;
          pcVar10 = pcVar10 + lVar12;
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar8);
      }
      *param_2 = pvVar5;
      FUN_1800c3030((LPVOID)0x0);
      for (plVar4 = plVar9; plVar4 != plVar8; plVar4 = plVar4 + 1) {
        FUN_1800c3030((LPVOID)*plVar4);
      }
      FUN_1800c3030(plVar9);
      uVar11 = 0;
    }
  }
  return uVar11;
}


void FUN_1800cb8b8(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  __acrt_ptd *p_Var5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  longlong lVar8;

  __acrt_lock(*param_2);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_1801166d8 == (undefined1 (*) [32])0x0) {
LAB_1800cb96b:
    p_Var5 = FUN_1800c2350();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_1800c2ac4();
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      FUN_1800d22d0(DAT_1801166d8,0,0x101);
      goto LAB_1800cb96b;
    }
    lVar8 = 2;
    pauVar7 = DAT_1801166d8;
    do {
      uVar3 = puVar4[1];
      *(undefined8 *)*pauVar7 = *puVar4;
      *(undefined8 *)(*pauVar7 + 8) = uVar3;
      uVar3 = puVar4[3];
      *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
      *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
      uVar3 = puVar4[5];
      *(undefined8 *)pauVar7[1] = puVar4[4];
      *(undefined8 *)(pauVar7[1] + 8) = uVar3;
      uVar3 = puVar4[7];
      *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
      *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
      uVar3 = puVar4[9];
      *(undefined8 *)pauVar7[2] = puVar4[8];
      *(undefined8 *)(pauVar7[2] + 8) = uVar3;
      uVar3 = puVar4[0xb];
      *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
      *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
      uVar3 = puVar4[0xd];
      *(undefined8 *)pauVar7[3] = puVar4[0xc];
      *(undefined8 *)(pauVar7[3] + 8) = uVar3;
      pauVar6 = pauVar7 + 4;
      uVar3 = puVar4[0xf];
      *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
      *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
      puVar4 = puVar4 + 0x10;
      lVar8 = lVar8 + -1;
      pauVar7 = pauVar6;
    } while (lVar8 != 0);
    (*pauVar6)[0] = *(undefined1 *)puVar4;
  }
  lVar8 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_1801166e0 != (undefined1 (*) [32])0x0) {
    pauVar7 = DAT_1801166e0;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar3 = puVar4[1];
        *(undefined8 *)*pauVar7 = *puVar4;
        *(undefined8 *)(*pauVar7 + 8) = uVar3;
        uVar3 = puVar4[3];
        *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
        *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
        uVar3 = puVar4[5];
        *(undefined8 *)pauVar7[1] = puVar4[4];
        *(undefined8 *)(pauVar7[1] + 8) = uVar3;
        uVar3 = puVar4[7];
        *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
        *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
        uVar3 = puVar4[9];
        *(undefined8 *)pauVar7[2] = puVar4[8];
        *(undefined8 *)(pauVar7[2] + 8) = uVar3;
        uVar3 = puVar4[0xb];
        *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
        *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
        uVar3 = puVar4[0xd];
        *(undefined8 *)pauVar7[3] = puVar4[0xc];
        *(undefined8 *)(pauVar7[3] + 8) = uVar3;
        uVar3 = puVar4[0xf];
        *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
        *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
        puVar4 = puVar4 + 0x10;
        lVar8 = lVar8 + -1;
        pauVar7 = pauVar7 + 4;
      } while (lVar8 != 0);
      goto LAB_1800cba1c;
    }
    FUN_1800d22d0(DAT_1801166e0,0,0x100);
  }
  p_Var5 = FUN_1800c2350();
  *(undefined4 *)p_Var5 = 0x16;
  FUN_1800c2ac4();
LAB_1800cba1c:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_180112780)) {
    FUN_1800c3030((LPVOID)**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}


// Library Function - Single Match
//  int __cdecl getSystemCP(int)
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_1801166f0 = 0;
  if (param_1 == -2) {
    DAT_1801166f0 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_1801166f0 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_1801166f0 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}


void FUN_1800cbb08(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;

  FUN_1800d22d0((undefined1 (*) [32])(param_1 + 0x18),0,0x101);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar3 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  lVar1 = 0;
  do {
    lVar4 = lVar1 + 1;
    *(undefined1 *)(param_1 + lVar1 + 0x18) = (&DAT_180112798)[lVar1];
    lVar1 = lVar4;
  } while (lVar4 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_180112899)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800cbba0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  CHAR *pCVar6;
  ulonglong uVar7;
  BYTE *pBVar8;
  WORD *pWVar9;
  longlong lVar10;
  undefined1 auStackY_788 [32];
  _cpinfo local_738;
  CHAR local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  WORD local_418 [512];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStackY_788;
  local_738.LeadByte[10] = '\0';
  local_738.LeadByte[0xb] = '\0';
  local_738._18_2_ = 0;
  local_738.MaxCharSize = 0;
  local_738.DefaultChar[0] = '\0';
  local_738.DefaultChar[1] = '\0';
  local_738.LeadByte[0] = '\0';
  local_738.LeadByte[1] = '\0';
  local_738.LeadByte[2] = '\0';
  local_738.LeadByte[3] = '\0';
  local_738.LeadByte[4] = '\0';
  local_738.LeadByte[5] = '\0';
  local_738.LeadByte[6] = '\0';
  local_738.LeadByte[7] = '\0';
  local_738.LeadByte[8] = '\0';
  local_738.LeadByte[9] = '\0';
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar3 == 0)) {
    uVar4 = 0;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = (char)uVar4 + 0x20;
      }
      else if (uVar4 - 0x61 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x20;
        bVar2 = (char)uVar4 - 0x20;
      }
      else {
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    pCVar6 = local_718;
    lVar10 = 0x100;
    do {
      *pCVar6 = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
      pCVar6 = pCVar6 + 1;
    } while (uVar4 < 0x100);
    pBVar8 = local_738.LeadByte;
    local_718[0] = ' ';
    bVar2 = local_738.LeadByte[0];
    while (bVar2 != 0) {
      bVar1 = pBVar8[1];
      uVar7 = (ulonglong)bVar2;
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = ' ';
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pBVar8 = pBVar8 + 2;
      bVar2 = *pBVar8;
    }
    FUN_1800cc980((__crt_locale_pointers *)0x0,1,local_718,0x100,local_418,*(UINT *)(param_1 + 4),0)
    ;
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x100,local_718,
                        0x100,local_618,0x100,*(UINT *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x200,local_718,
                        0x100,local_518,0x100,*(UINT *)(param_1 + 4),0);
    pWVar9 = local_418;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pWVar9 & 1) == 0) {
        if ((*pWVar9 & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = pbVar5[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = pbVar5[(longlong)(abStack_631 + -param_1)];
      }
      pbVar5[0x100] = bVar2;
      pWVar9 = pWVar9 + 1;
      pbVar5 = pbVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}


ulonglong FUN_1800cbd98(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  __acrt_ptd *p_Var13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  undefined1 local_268 [4];
  int local_264 [3];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  undefined8 local_248 [70];

  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar8 = getSystemCP(param_1);
  if (iVar8 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    uVar9 = 0;
  }
  else {
    puVar10 = _malloc_base(0x228);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_1800c3030((LPVOID)0x0);
      uVar9 = 0xffffffff;
    }
    else {
      lVar15 = 4;
      lVar16 = 4;
      puVar6 = *(undefined8 **)(local_res18 + 0x88);
      puVar7 = local_248;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar16 = lVar16 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar16 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      puVar6 = local_248;
      puVar7 = puVar10;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar15 = lVar15 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      *(undefined4 *)puVar10 = 0;
      uVar12 = FUN_1800cc13c(iVar8,(longlong)puVar10);
      uVar9 = uVar12 & 0xffffffff;
      if ((int)uVar12 == -1) {
        p_Var13 = FUN_1800c2350();
        *(undefined4 *)p_Var13 = 0x16;
        FUN_1800c3030(puVar10);
        uVar9 = 0xffffffff;
      }
      else {
        if (param_2 == '\0') {
          FUN_1800c21cc();
        }
        piVar2 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar8 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_180112780)) {
          FUN_1800c3030(*(undefined **)(local_res18 + 0x88));
        }
        *(undefined4 *)puVar10 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar10;
        if ((DAT_180112cc0 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264[0] = 5;
          local_264[1] = 5;
          FUN_1800cb8b8(local_268,local_264 + 1,&local_258,local_264);
          if (param_2 != '\0') {
            PTR_DAT_180112600 = *local_res20;
          }
        }
        FUN_1800c3030((LPVOID)0x0);
      }
    }
  }
  return uVar9;
}


// Library Function - Single Match
//  struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
// __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;

  if (((*(uint *)(param_1 + 0x3a8) & DAT_180112cc0) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_180112780)) {
          FUN_1800c3030(p_Var2);
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
  }
  if (p_Var2 == (__crt_multibyte_data *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1800c18c0();
  }
  return p_Var2;
}


// Library Function - Single Match
//  __acrt_initialize_multibyte
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8 __acrt_initialize_multibyte(void)

{
  ulonglong in_RAX;
  __acrt_ptd *p_Var1;

  if (DAT_1801166f4 == '\0') {
    DAT_1801166e0 = &DAT_180112ac0;
    DAT_1801166e8 = &DAT_180112780;
    DAT_1801166d8 = &DAT_1801129b0;
    p_Var1 = (__acrt_ptd *)FUN_1800c1ed4();
    in_RAX = FUN_1800cbd98(-3,'\x01',p_Var1,(__crt_multibyte_data **)&DAT_1801166e8);
    DAT_1801166f4 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


void FUN_1800cc120(void)

{
  __acrt_ptd *p_Var1;

  p_Var1 = (__acrt_ptd *)FUN_1800c1eb8();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_1801166e8);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_1800cc13c(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint *puVar6;
  byte *pbVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  BYTE *pBVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;

  local_30 = DAT_180112300 ^ (ulonglong)auStack_68;
  local_48.MaxCharSize = 0;
  local_48.DefaultChar[0] = '\0';
  local_48.DefaultChar[1] = '\0';
  local_48.LeadByte[0] = '\0';
  local_48.LeadByte[1] = '\0';
  local_48.LeadByte[2] = '\0';
  local_48.LeadByte[3] = '\0';
  local_48.LeadByte[4] = '\0';
  local_48.LeadByte[5] = '\0';
  local_48.LeadByte[6] = '\0';
  local_48.LeadByte[7] = '\0';
  local_48.LeadByte[8] = '\0';
  local_48.LeadByte[9] = '\0';
  local_48.LeadByte[10] = '\0';
  local_48.LeadByte[0xb] = '\0';
  local_48._18_2_ = 0;
  uVar4 = getSystemCP(param_1);
  pwVar8 = (wchar_t *)0x0;
  if (uVar4 == 0) {
LAB_1800cc3d4:
    FUN_1800cbb08(param_2);
    return 0;
  }
  uVar17 = 0;
  puVar6 = &DAT_180112bd0;
  uVar14 = 1;
  do {
    if (*puVar6 == uVar4) {
      FUN_1800d22d0((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
      pbVar18 = &DAT_180112bc0;
      lVar9 = 4;
      pbVar7 = &DAT_180112be0 + (ulonglong)uVar17 * 0x30;
      do {
        bVar2 = *pbVar7;
        pbVar12 = pbVar7;
        while ((bVar2 != 0 && (pbVar12[1] != 0))) {
          bVar2 = *pbVar12;
          uVar15 = (uint)bVar2;
          if (bVar2 <= pbVar12[1]) {
            uVar16 = (uint)bVar2;
            do {
              uVar16 = uVar16 + 1;
              if (0x100 < uVar16) break;
              uVar15 = uVar15 + 1;
              pbVar1 = (byte *)((ulonglong)uVar16 + 0x18 + param_2);
              *pbVar1 = *pbVar1 | *pbVar18;
            } while (uVar15 <= pbVar12[1]);
          }
          pbVar12 = pbVar12 + 2;
          bVar2 = *pbVar12;
        }
        pbVar7 = pbVar7 + 8;
        pbVar18 = pbVar18 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      *(uint *)(param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 8) = 1;
      if (uVar4 == 0x3a4) {
        pwVar8 = L"ja-JP";
      }
      else if (uVar4 == 0x3a8) {
        pwVar8 = L"zh-CN";
      }
      else if (uVar4 == 0x3b5) {
        pwVar8 = L"ko-KR";
      }
      else if (uVar4 == 0x3b6) {
        pwVar8 = L"zh-TW";
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar8;
      puVar13 = (undefined2 *)(param_2 + 0xc);
      lVar9 = 6;
      do {
        *puVar13 = *(undefined2 *)
                    (((ulonglong)uVar17 * 0x30 - param_2) + 0x180112bc8 + (longlong)puVar13);
        puVar13 = puVar13 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      goto LAB_1800cc3ca;
    }
    uVar17 = uVar17 + 1;
    puVar6 = puVar6 + 0xc;
  } while (uVar17 < 5);
  if ((uVar4 == 65000) || (BVar5 = IsValidCodePage(uVar4 & 0xffff), BVar5 == 0)) {
    return 0xffffffff;
  }
  if (uVar4 == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar5 = GetCPInfo(uVar4,&local_48);
    if (BVar5 == 0) {
      if (DAT_1801166f0 == 0) {
        return 0xffffffff;
      }
      goto LAB_1800cc3d4;
    }
    FUN_1800d22d0((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize == 2) {
      pBVar10 = local_48.LeadByte;
      bVar2 = local_48.LeadByte[0];
      while ((bVar2 != 0 && (pBVar10[1] != 0))) {
        bVar2 = *pBVar10;
        if ((uint)bVar2 <= (uint)pBVar10[1]) {
          uVar4 = (uint)bVar2;
          uVar11 = (ulonglong)(((uint)pBVar10[1] - (uint)bVar2) + 1);
          do {
            uVar4 = uVar4 + 1;
            pbVar7 = (byte *)((ulonglong)uVar4 + 0x18 + param_2);
            *pbVar7 = *pbVar7 | 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        pBVar10 = pBVar10 + 2;
        bVar2 = *pBVar10;
      }
      pbVar7 = (byte *)(param_2 + 0x1a);
      lVar9 = 0xfe;
      do {
        *pbVar7 = *pbVar7 | 8;
        pbVar7 = pbVar7 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 == 0x3a4) {
        pwVar8 = L"ja-JP";
      }
      else if (iVar3 == 0x3a8) {
        pwVar8 = L"zh-CN";
      }
      else if (iVar3 == 0x3b5) {
        pwVar8 = L"ko-KR";
      }
      else if (iVar3 == 0x3b6) {
        pwVar8 = L"zh-TW";
      }
      else {
        pwVar8 = (wchar_t *)0x0;
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar8;
    }
    else {
      uVar14 = 0;
    }
    *(undefined4 *)(param_2 + 8) = uVar14;
  }
  puVar13 = (undefined2 *)(param_2 + 0xc);
  for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
LAB_1800cc3ca:
  FUN_1800cbba0(param_2);
  return 0;
}


undefined8 FUN_1800cc404(__crt_locale_pointers *param_1,uint param_2,uint param_3,byte param_4)

{
  undefined8 uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  if (((*(byte *)((ulonglong)(param_2 & 0xff) + 0x19 + local_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_20 + (ulonglong)(param_2 & 0xff) * 2)) == 0)))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}


void FUN_1800cc478(uint param_1)

{
  FUN_1800cc404((__crt_locale_pointers *)0x0,param_1,0,4);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_1800cc490(void)

{
  DAT_180116718 = GetCommandLineA();
  _DAT_180116720 = GetCommandLineW();
  return 1;
}


void FUN_1800cc4b8(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  bool bVar1;

  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_1800cc505:
          if (!bVar1) goto LAB_1800cc509;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_1800cc543;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_1800cc505;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_1800cc509;
LAB_1800cc543:
    param_2 = param_2 & 8;
    goto LAB_1800cc509;
  }
  param_2 = 0;
LAB_1800cc509:
                    // WARNING: Could not recover jumptable at 0x0001800cc509. Too many branches
                    // WARNING: Treating indirect jump as call
  MultiByteToWideChar(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


void FUN_1800cc548(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,
                  LPCSTR param_7,LPBOOL param_8)

{
  int iVar1;
  DWORD dwFlags;
  LPBOOL lpUsedDefaultChar;
  bool bVar2;

  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar2 = param_1 == 0xc431;
          goto LAB_1800cc5de;
        }
      }
      else if ((param_1 != 0xc435) && (param_1 != 0xd698)) {
        iVar1 = param_1 - 0xdeaa;
        goto LAB_1800cc5d9;
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && (param_1 != 0xdeb3)))))) {
    iVar1 = param_1 - 65000;
LAB_1800cc5d9:
    if (iVar1 != 0) {
      bVar2 = iVar1 == 1;
LAB_1800cc5de:
      if (!bVar2) {
        dwFlags = param_2 & 0xffffff7f;
        goto LAB_1800cc5e8;
      }
    }
  }
  dwFlags = 0;
LAB_1800cc5e8:
  lpUsedDefaultChar = param_8;
  if (param_1 - 65000 < 2) {
    lpUsedDefaultChar = (LPBOOL)0x0;
    param_7 = (LPCSTR)0x0;
    if (param_8 != (LPBOOL)0x0) {
      *param_8 = 0;
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001800cc61f. Too many branches
                    // WARNING: Treating indirect jump as call
  WideCharToMultiByte(param_1,dwFlags,param_3,param_4,param_5,param_6,param_7,lpUsedDefaultChar);
  return;
}


LPSTR FUN_1800cc628(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar5;
  longlong lVar4;
  LPSTR pCVar6;
  int iVar7;
  WCHAR *pWVar8;

  pWVar3 = GetEnvironmentStringsW();
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    iVar7 = (int)((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1);
    iVar2 = FUN_1800cc548(0,0,pWVar3,iVar7,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar2 != 0) {
      pCVar6 = _malloc_base((longlong)iVar2);
      if (pCVar6 != (LPSTR)0x0) {
        iVar2 = FUN_1800cc548(0,0,pWVar3,iVar7,pCVar6,iVar2,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar2 == 0) {
          FUN_1800c3030(pCVar6);
          pCVar6 = (LPSTR)0x0;
        }
        else {
          FUN_1800c3030((LPVOID)0x0);
        }
        FreeEnvironmentStringsW(pWVar3);
        return pCVar6;
      }
      FUN_1800c3030((LPVOID)0x0);
    }
    FreeEnvironmentStringsW(pWVar3);
  }
  return (LPSTR)0x0;
}


// Library Function - Single Match
//  _recalloc_base
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

LPVOID _recalloc_base(LPVOID param_1,ulonglong param_2,ulonglong param_3)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;

  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (LPVOID)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _msize_base((longlong)param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = _realloc_base(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (uVar2 < uVar4)) {
      FUN_1800d22d0((undefined1 (*) [32])((longlong)pvVar3 + uVar2),0,uVar4 - uVar2);
    }
  }
  else {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}


bool FUN_1800cc800(void)

{
  DAT_180116728 = GetProcessHeap();
  return DAT_180116728 != (HANDLE)0x0;
}


undefined1 FUN_1800cc830(void)

{
  DAT_180116728 = 0;
  return 1;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1800cc858(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  undefined8 *puVar1;

  if (param_1 != param_2) {
    puVar1 = param_1;
    do {
      in_RAX = (undefined8 *)0x0;
      if (((code *)*puVar1 != (code *)0x0) &&
         (in_RAX = (undefined8 *)(*(code *)*puVar1)(), (char)in_RAX == '\0')) break;
      puVar1 = puVar1 + 2;
    } while (puVar1 != param_2);
    if (puVar1 != param_2) {
      if (puVar1 != param_1) {
        puVar1 = puVar1 + -1;
        do {
          if ((puVar1[-1] != 0) && ((code *)*puVar1 != (code *)0x0)) {
            (*(code *)*puVar1)(0);
          }
          in_RAX = puVar1 + -1;
          puVar1 = puVar1 + -2;
        } while (in_RAX != param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1800cc8d8(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;

  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    in_RAX = 0;
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      in_RAX = (**(code **)(param_2 + -8))(0);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


undefined8 FUN_1800cc920(void)

{
  byte bVar1;

  bVar1 = (byte)DAT_180112300 & 0x3f;
  return CONCAT71((int7)(DAT_180112300 >> 8),
                  (DAT_180116730 ^ DAT_180112300) >> bVar1 != 0 ||
                  (DAT_180116730 ^ DAT_180112300) << 0x40 - bVar1 != 0);
}


void FUN_1800cc940(undefined8 param_1)

{
  DAT_180116730 = param_1;
  return;
}


// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_1800cc950(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;

  bVar2 = (byte)DAT_180112300 & 0x3f;
  pcVar3 = (code *)((DAT_180116730 ^ DAT_180112300) >> bVar2 |
                   (DAT_180116730 ^ DAT_180112300) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Function: __chkstk replaced with injection: alloca_probe

BOOL FUN_1800cc980(__crt_locale_pointers *param_1,DWORD param_2,LPCSTR param_3,int param_4,
                  LPWORD param_5,UINT param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined1 (*lpSrcStr) [32];
  undefined1 *puVar7;
  undefined1 *puVar8;
  BOOL BVar9;
  undefined1 auStackY_88 [32];
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;

  local_30 = DAT_180112300 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_48 + 0xc);
  }
  iVar3 = FUN_1800cc4b8(param_6,(-(uint)(param_7 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,0);
  puVar8 = auStackY_88;
  if (iVar3 == 0) {
    BVar9 = 0;
    puVar8 = auStackY_88;
    goto LAB_1800ccad6;
  }
  uVar1 = (longlong)iVar3 * 2;
  uVar6 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar6 == 0) {
    lpSrcStr = (undefined1 (*) [32])0x0;
LAB_1800ccabe:
    BVar9 = 0;
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_1800ccad6;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar4 & 0xfffffffffffffff0);
      puVar8 = auStackY_88 + lVar2;
      puVar7 = auStackY_88 + lVar2;
      puVar5 = (undefined4 *)((longlong)local_58 + lVar2);
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_1800ccabe;
      *puVar5 = 0xcccc;
LAB_1800cca6c:
      lpSrcStr = (undefined1 (*) [32])(puVar5 + 4);
      puVar8 = puVar7;
    }
    else {
      puVar5 = _malloc_base(uVar6);
      puVar8 = auStackY_88;
      puVar7 = auStackY_88;
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_1800cca6c;
      }
    }
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_1800ccabe;
    *(undefined8 *)(puVar8 + -8) = 0x1800cca82;
    FUN_1800d22d0(lpSrcStr,0,uVar1);
    *(int *)(puVar8 + 0x28) = iVar3;
    *(undefined1 (**) [32])(puVar8 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar8 + -8) = 0x1800cca9e;
    iVar3 = FUN_1800cc4b8(param_6,1,param_3,param_4,*(LPWSTR *)(puVar8 + 0x20),
                          *(int *)(puVar8 + 0x28));
    if (iVar3 == 0) goto LAB_1800ccabe;
    *(undefined8 *)(puVar8 + -8) = 0x1800ccab8;
    BVar9 = GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar3,param_5);
  }
  if (*(int *)(lpSrcStr[-1] + 0x10) == 0xdddd) {
    *(undefined8 *)(puVar8 + -8) = 0x1800ccad6;
    FUN_1800c3030(lpSrcStr[-1] + 0x10);
  }
LAB_1800ccad6:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800ccaf5;
  return BVar9;
}


// Library Function - Single Match
//  __acrt_add_locale_ref
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;

  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_180112608) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  return;
}


// Library Function - Single Match
//  __acrt_free_locale
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_free_locale(LPVOID param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;

  if ((((*(undefined ***)((longlong)param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0xf8) != &PTR_DAT_180112cd0)) &&
      (*(int **)((longlong)param_1 + 0xe0) != (int *)0x0)) &&
     (**(int **)((longlong)param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)((longlong)param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_1800c3030(piVar1);
      __acrt_locale_free_monetary(*(longlong *)((longlong)param_1 + 0xf8));
    }
    piVar1 = *(int **)((longlong)param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_1800c3030(piVar1);
      __acrt_locale_free_numeric(*(undefined8 **)((longlong)param_1 + 0xf8));
    }
    FUN_1800c3030(*(LPVOID *)((longlong)param_1 + 0xe0));
    FUN_1800c3030(*(LPVOID *)((longlong)param_1 + 0xf8));
  }
  if ((*(int **)((longlong)param_1 + 0x100) != (int *)0x0) &&
     (**(int **)((longlong)param_1 + 0x100) == 0)) {
    FUN_1800c3030((LPVOID)(*(longlong *)((longlong)param_1 + 0x108) + -0xfe));
    FUN_1800c3030((LPVOID)(*(longlong *)((longlong)param_1 + 0x110) + -0x80));
    FUN_1800c3030((LPVOID)(*(longlong *)((longlong)param_1 + 0x118) + -0x80));
    FUN_1800c3030(*(LPVOID *)((longlong)param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined ***)((longlong)param_1 + 0x120));
  puVar3 = (undefined8 *)((longlong)param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x38);
  do {
    if ((((undefined *)puVar4[-2] != &DAT_180112608) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_1800c3030(piVar1);
      FUN_1800c3030((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_1800c3030(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1800c3030(param_1);
  return;
}


// Library Function - Single Match
//  __acrt_locale_add_lc_time_reference
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;

  if ((param_1 == (undefined **)0x0) || (param_1 == &PTR_DAT_1800f6d10)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}


// Library Function - Single Match
//  __acrt_locale_free_lc_time_if_unreferenced
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1800f6d10)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time(param_1);
    FUN_1800c3030(param_1);
  }
  return;
}


// Library Function - Single Match
//  __acrt_locale_release_lc_time_reference
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;

  if ((param_1 == (undefined **)0x0) || (param_1 == &PTR_DAT_1800f6d10)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2 + -1;
}


// Library Function - Single Match
//  __acrt_release_locale_ref
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;

  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_180112608) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  }
  return;
}


// Library Function - Single Match
//  __acrt_update_thread_locale_data
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined ** __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  undefined **ppuVar2;

  lVar1 = FUN_1800c1eb8();
  if (((DAT_180112cc0 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (ppuVar2 = *(undefined ***)(lVar1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_180115f30);
    __acrt_unlock(4);
    if (ppuVar2 == (undefined **)0x0) {
                    // WARNING: Subroutine does not return
      FUN_1800c18c0();
    }
  }
  return ppuVar2;
}


// Library Function - Single Match
//  _updatetlocinfoEx_nolock
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined ** _updatetlocinfoEx_nolock(undefined8 *param_1,undefined **param_2)

{
  undefined **ppuVar1;

  if ((param_2 == (undefined **)0x0) || (param_1 == (undefined8 *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_1801124a0)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}


// Library Function - Single Match
//  __acrt_locale_free_monetary
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_180112ce8) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_180112cf0) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_180112cf8) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_180112d00) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_180112d08) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_180112d10) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_180112d18) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_180112d38) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_180112d40) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_180112d48) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_180112d50) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_180112d58) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_180112d60) {
      FUN_1800c3030(*(undefined **)(param_1 + 0x90));
    }
  }
  return;
}


// Library Function - Single Match
//  __acrt_locale_free_numeric
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_locale_free_numeric(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_180112cd0) {
      FUN_1800c3030((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_180112cd8) {
      FUN_1800c3030((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_180112ce0) {
      FUN_1800c3030((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_180112d28) {
      FUN_1800c3030((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_180112d30) {
      FUN_1800c3030((undefined *)param_1[0xc]);
    }
  }
  return;
}


void FUN_1800cd094(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_1800c3030((LPVOID)*param_1);
  }
  return;
}


// Library Function - Single Match
//  __acrt_locale_free_time
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_locale_free_time(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1800cd094(param_1,7);
    FUN_1800cd094(param_1 + 7,7);
    FUN_1800cd094(param_1 + 0xe,0xc);
    FUN_1800cd094(param_1 + 0x1a,0xc);
    FUN_1800cd094(param_1 + 0x26,2);
    FUN_1800c3030((LPVOID)param_1[0x28]);
    FUN_1800c3030((LPVOID)param_1[0x29]);
    FUN_1800c3030((LPVOID)param_1[0x2a]);
    FUN_1800cd094(param_1 + 0x2c,7);
    FUN_1800cd094(param_1 + 0x33,7);
    FUN_1800cd094(param_1 + 0x3a,0xc);
    FUN_1800cd094(param_1 + 0x46,0xc);
    FUN_1800cd094(param_1 + 0x52,2);
    FUN_1800c3030((LPVOID)param_1[0x54]);
    FUN_1800c3030((LPVOID)param_1[0x55]);
    FUN_1800c3030((LPVOID)param_1[0x56]);
    FUN_1800c3030((LPVOID)param_1[0x57]);
  }
  return;
}


// Library Function - Single Match
//  __strncnt
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;

  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}


undefined8 FUN_1800cd1f0(longlong param_1,longlong param_2)

{
  __acrt_ptd *p_Var1;

  if ((param_1 == 0) || (param_2 == 0)) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
  }
  return 0x7fffffff;
}


int FUN_1800cd220(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;

  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    uVar3 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    uVar4 = (uint)uVar2;
    param_2 = param_2 + 1;
    if ((uint)uVar1 != (uint)uVar2) {
      uVar3 = uVar1 + 0x20;
      if (0x19 < uVar1 - 0x41) {
        uVar3 = (uint)uVar1;
      }
      uVar4 = uVar2 + 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar4 = (uint)uVar2;
      }
    }
  } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return uVar3 - uVar4;
}


ulonglong FUN_1800cd290(WCHAR *param_1,WCHAR *param_2,longlong param_3)

{
  WCHAR WVar1;
  WCHAR WVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  uint uVar5;
  uint uVar6;

  if (DAT_180115f2c != 0) {
    iVar3 = FUN_1800cd2c0(param_1,param_2,param_3,(undefined8 *)0x0);
    return CONCAT44(extraout_var,iVar3);
  }
  if ((param_1 == (WCHAR *)0x0) || (param_2 == (WCHAR *)0x0)) {
    uVar4 = FUN_1800cd1f0((longlong)param_1,(longlong)param_2);
    return uVar4;
  }
  if (param_3 == 0) {
    return 0;
  }
  do {
    WVar1 = *param_1;
    uVar5 = (uint)(ushort)WVar1;
    param_1 = param_1 + 1;
    WVar2 = *param_2;
    uVar6 = (uint)(ushort)WVar2;
    param_2 = param_2 + 1;
    if ((uint)(ushort)WVar1 != (uint)(ushort)WVar2) {
      uVar5 = (ushort)WVar1 + 0x20;
      if (0x19 < (ushort)WVar1 - 0x41) {
        uVar5 = (uint)(ushort)WVar1;
      }
      uVar6 = (ushort)WVar2 + 0x20;
      if (0x19 < (ushort)WVar2 - 0x41) {
        uVar6 = (uint)(ushort)WVar2;
      }
    }
  } while (((uVar5 - uVar6 == 0) && (uVar5 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return (ulonglong)(uVar5 - uVar6);
}


int FUN_1800cd2c0(WCHAR *param_1,WCHAR *param_2,longlong param_3,undefined8 *param_4)

{
  WCHAR WVar1;
  WCHAR WVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;

  if ((param_1 == (WCHAR *)0x0) || (param_2 == (WCHAR *)0x0)) {
    p_Var4 = FUN_1800c2350();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_1800c2ac4();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  local_20 = '\0';
  if (param_4 == (undefined8 *)0x0) {
    if (DAT_180115f2c == 0) {
      local_30 = PTR_PTR_1801125f8;
      puStack_28 = PTR_DAT_180112600;
    }
    else {
      local_38 = FUN_1800c1eb8();
      local_30 = *(undefined **)(local_38 + 0x90);
      puStack_28 = *(undefined **)(local_38 + 0x88);
      __acrt_update_locale_info(local_38,(longlong *)&local_30);
      FUN_1800c20f0(local_38,(longlong *)&puStack_28);
      if ((*(uint *)(local_38 + 0x3a8) & 2) == 0) {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) | 2;
        local_20 = '\x01';
      }
    }
  }
  else {
    local_30 = (undefined *)*param_4;
    puStack_28 = (undefined *)param_4[1];
  }
  puVar6 = local_30;
  if (*(longlong *)(local_30 + 0x138) == 0) {
    iVar3 = FUN_1800cd220((ushort *)param_1,(ushort *)param_2,param_3);
  }
  else {
    do {
      WVar1 = *param_1;
      param_1 = param_1 + 1;
      if ((ushort)WVar1 < 0x100) {
        uVar5 = (ulonglong)(byte)WVar1;
        if (((&DAT_1800f7c32)[uVar5 * 2] & 1) != 0) {
          uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(puVar6 + 0x110));
        }
        WVar1 = (WCHAR)uVar5;
      }
      else {
        WVar1 = FUN_1800d064c(WVar1,(__crt_locale_pointers *)&local_30);
        puVar6 = local_30;
      }
      WVar2 = *param_2;
      param_2 = param_2 + 1;
      if ((ushort)WVar2 < 0x100) {
        uVar5 = (ulonglong)(byte)WVar2;
        if (((&DAT_1800f7c32)[uVar5 * 2] & 1) != 0) {
          uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(puVar6 + 0x110));
        }
        WVar2 = (WCHAR)uVar5;
      }
      else {
        WVar2 = FUN_1800d064c(WVar2,(__crt_locale_pointers *)&local_30);
        puVar6 = local_30;
      }
      iVar3 = (uint)(ushort)WVar1 - (uint)(ushort)WVar2;
    } while (((iVar3 == 0) && ((ushort)WVar1 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  }
  if (local_20 != '\0') {
    *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
  }
  return iVar3;
}


// Library Function - Multiple Matches With Same Base Name
//  int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
// const,int)
//  int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
// __ptr64 const,int)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

int common_sopen_dispatch<>
              (LPCWSTR param_1,uint param_2,int param_3,ulonglong param_4,uint *param_5,int param_6)

{
  byte *pbVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  int local_18;
  int local_14;

  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == (LPCWSTR)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    p_Var3 = FUN_1800c2350();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_1800c2ac4();
    return 0x16;
  }
  local_18 = 0;
  local_14 = 0;
  iVar2 = FUN_1800cdab8(&local_18,param_5,param_1,param_2,param_3,(byte)param_4);
  if (local_18 != 0) {
    if (iVar2 != 0) {
      pbVar1 = (byte *)((&DAT_180115f70)[(longlong)(int)*param_5 >> 6] + 0x38 +
                       (ulonglong)(*param_5 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    local_14 = iVar2;
    __acrt_lowio_unlock_fh(*param_5);
  }
  if (iVar2 != 0) {
    *param_5 = 0xffffffff;
  }
  return iVar2;
}


undefined4 FUN_1800cd560(uint param_1,byte *param_2,uint param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_res8 [2];

  iVar6 = 0;
  *param_4 = '\0';
  if (-1 < *(char *)((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48)) {
    return 0;
  }
  if ((param_3 & 0x74000) == 0) {
    local_res8[0] = 0;
    uVar2 = FUN_1800d0748(local_res8);
    if ((int)uVar2 != 0) {
                    // WARNING: Subroutine does not return
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_res8[0] & 0x74000) == 0) {
      param_3 = param_3 | 0x4000;
    }
    else {
      param_3 = param_3 | local_res8[0] & 0x74000;
    }
  }
  uVar5 = param_3 & 0x74000;
  iVar7 = 2;
  if (uVar5 == 0x4000) {
    *param_4 = '\0';
  }
  else if ((uVar5 - 0x10000 & 0xffffbfff) == 0) {
    if ((param_3 & 0x301) == 0x301) goto LAB_1800cd627;
  }
  else if ((uVar5 - 0x20000 & 0xffffbfff) == 0) {
LAB_1800cd627:
    *param_4 = '\x02';
  }
  else if ((uVar5 - 0x40000 & 0xffffbfff) == 0) {
    *param_4 = '\x01';
  }
  if ((param_3 & 0x70000) == 0) {
    return 0;
  }
  if ((*param_2 & 0x40) != 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 4) & 0xc0000000;
  if (uVar5 == 0x40000000) {
LAB_1800cd66b:
    iVar1 = *(int *)(param_2 + 8);
    if ((iVar1 != 1) && (iVar1 != 2)) {
      if ((iVar1 == 3) || (iVar1 == 4)) {
        lVar3 = FUN_1800c9bc0(param_1,(LARGE_INTEGER)0x0,2);
        if (lVar3 != 0) {
          lVar3 = FUN_1800c9bc0(param_1,(LARGE_INTEGER)0x0,0);
          if (lVar3 == -1) goto LAB_1800cd6d4;
          if ((*(uint *)(param_2 + 4) & 0x80000000) == 0) {
            return 0;
          }
          goto LAB_1800cd6e9;
        }
      }
      else if (iVar1 != 5) {
        return 0;
      }
    }
    if (*param_4 == '\x01') {
      iVar7 = 3;
      local_res8[0] = 0xbfbbef;
    }
    else {
      if (*param_4 != '\x02') {
        return 0;
      }
      local_res8[0] = 0xfeff;
    }
    while (iVar1 = FUN_1800c5880(param_1,(WCHAR *)((longlong)local_res8 + (longlong)iVar6),
                                 iVar7 - iVar6), iVar1 != -1) {
      iVar6 = iVar6 + iVar1;
      if (iVar7 <= iVar6) {
        return 0;
      }
    }
    goto LAB_1800cd6d4;
  }
  if (uVar5 != 0x80000000) {
    if (uVar5 != 0xc0000000) {
      return 0;
    }
    goto LAB_1800cd66b;
  }
LAB_1800cd6e9:
  local_res8[0] = 0;
  iVar6 = FUN_1800c9380(param_1,(LPWSTR)local_res8,3);
  if (iVar6 == -1) goto LAB_1800cd6d4;
  if (iVar6 == 2) {
LAB_1800cd722:
    if ((local_res8[0] & 0xffff) == 0xfffe) {
      p_Var4 = FUN_1800c2350();
      *(undefined4 *)p_Var4 = 0x16;
      goto LAB_1800cd6d4;
    }
    if ((local_res8[0] & 0xffff) == 0xfeff) {
      lVar3 = FUN_1800c9bc0(param_1,(LARGE_INTEGER)0x2,0);
      if (lVar3 != -1) {
        *param_4 = '\x02';
        return 0;
      }
      goto LAB_1800cd6d4;
    }
  }
  else if (iVar6 == 3) {
    if (local_res8[0] == 0xbfbbef) {
      *param_4 = '\x01';
      return 0;
    }
    goto LAB_1800cd722;
  }
  lVar3 = FUN_1800c9bc0(param_1,(LARGE_INTEGER)0x0,0);
  if (lVar3 != -1) {
    return 0;
  }
LAB_1800cd6d4:
  p_Var4 = FUN_1800c2350();
  return *(undefined4 *)p_Var4;
}


byte * FUN_1800cd7e0(byte *param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  __acrt_ptd *p_Var3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int local_res10 [2];

  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar6 = 0xffffffff;
  uVar5 = param_2 & 3;
  if (uVar5 == 0) {
    iVar1 = -0x80000000;
  }
  else if (uVar5 == 1) {
    iVar1 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar5 == 2) {
    iVar1 = -0x40000000;
  }
  else {
    p_Var3 = FUN_1800c2350();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_1800c2ac4();
    iVar1 = -1;
  }
  *(int *)(param_1 + 4) = iVar1;
  uVar5 = param_2 & 0x700;
  if (uVar5 == 0) {
LAB_1800cd8cc:
    uVar2 = 3;
  }
  else if (uVar5 == 0x100) {
    uVar2 = 4;
  }
  else if (uVar5 == 0x200) {
LAB_1800cd8be:
    uVar2 = 5;
  }
  else if (uVar5 == 0x300) {
    uVar2 = 2;
  }
  else {
    if (uVar5 == 0x400) goto LAB_1800cd8cc;
    if (uVar5 != 0x500) {
      if (uVar5 == 0x600) goto LAB_1800cd8be;
      if (uVar5 != 0x700) {
        p_Var3 = FUN_1800c2350();
        *(undefined4 *)p_Var3 = 0x16;
        FUN_1800c2ac4();
        uVar2 = 0xffffffff;
        goto LAB_1800cd8d1;
      }
    }
    uVar2 = 1;
  }
LAB_1800cd8d1:
  *(undefined4 *)(param_1 + 8) = uVar2;
  if (param_3 == 0x10) {
    uVar6 = 0;
  }
  else if (param_3 == 0x20) {
    uVar6 = 1;
  }
  else if (param_3 == 0x30) {
    uVar6 = 2;
  }
  else if (param_3 == 0x40) {
    uVar6 = 3;
  }
  else if (param_3 == 0x80) {
    uVar6 = (uint)(*(int *)(param_1 + 4) == -0x80000000);
  }
  else {
    p_Var3 = FUN_1800c2350();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_1800c2ac4();
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  param_1[0x10] = 0x80;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((char)param_2 < '\0') {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x74000) == 0) {
      local_res10[0] = 0;
      uVar4 = FUN_1800d0748(local_res10);
      if ((int)uVar4 != 0) {
                    // WARNING: Subroutine does not return
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_res10[0] == 0x8000) goto LAB_1800cd968;
    }
    *param_1 = *param_1 | 0x80;
  }
LAB_1800cd968:
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_180116748 & param_4))) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x4000000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  if ((param_2 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if ((param_2 >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
  }
  return param_1;
}


// Library Function - Single Match
//  int __cdecl truncate_ctrl_z_if_present(int)
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  int iVar2;
  LARGE_INTEGER LVar3;
  __acrt_ptd *p_Var4;
  longlong lVar5;
  WCHAR local_res8 [4];

  bVar1 = *(byte *)((&DAT_180115f70)[(longlong)param_1 >> 6] + 0x38 +
                   (ulonglong)(param_1 & 0x3f) * 0x48);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    LVar3.QuadPart = FUN_1800c9bc0(param_1,(LARGE_INTEGER)0xffffffffffffffff,2);
    if (LVar3.QuadPart == -1) {
      p_Var4 = FUN_1800c232c();
      if (*(int *)p_Var4 == 0x83) goto LAB_1800cdaa3;
    }
    else {
      local_res8[0] = L'\0';
      iVar2 = FUN_1800c9380(param_1,local_res8,1);
      if ((iVar2 == 0) && (local_res8[0] == L'\x1a')) {
        iVar2 = FUN_1800d085c(param_1,LVar3);
        if (iVar2 == -1) goto LAB_1800cda56;
      }
      lVar5 = FUN_1800c9bc0(param_1,(LARGE_INTEGER)0x0,0);
      if (lVar5 != -1) goto LAB_1800cdaa3;
    }
LAB_1800cda56:
    p_Var4 = FUN_1800c2350();
    iVar2 = *(int *)p_Var4;
  }
  else {
LAB_1800cdaa3:
    iVar2 = 0;
  }
  return iVar2;
}


int FUN_1800cdab8(undefined4 *param_1,uint *param_2,LPCWSTR param_3,uint param_4,int param_5,
                 byte param_6)

{
  byte *pbVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  ulonglong *puVar5;
  __acrt_ptd *p_Var6;
  HANDLE pvVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  char local_c8 [4];
  DWORD local_c4;
  undefined8 local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  byte local_a8;
  _SECURITY_ATTRIBUTES local_a0;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  byte local_48 [32];

  puVar5 = (ulonglong *)FUN_1800cd7e0(local_48,param_4,param_5,param_6);
  local_c0 = *puVar5;
  uStack_b8 = puVar5[1];
  local_b0 = puVar5[2];
  local_78 = puVar5[1] >> 0x20;
  DVar3 = (DWORD)(puVar5[1] >> 0x20);
  local_88 = local_b0;
  local_68 = local_c0;
  uStack_60 = uStack_b8;
  if (DVar3 == 0xffffffff) {
    p_Var6 = FUN_1800c232c();
    *(undefined4 *)p_Var6 = 0;
    *param_2 = 0xffffffff;
    goto LAB_1800cdb37;
  }
  uVar2 = _alloc_osfhnd();
  *param_2 = uVar2;
  if (uVar2 == 0xffffffff) {
    p_Var6 = FUN_1800c232c();
    *(undefined4 *)p_Var6 = 0;
    *param_2 = 0xffffffff;
    p_Var6 = FUN_1800c2350();
    *(undefined4 *)p_Var6 = 0x18;
    goto LAB_1800cdb37;
  }
  local_c4 = (DWORD)uStack_60;
  *param_1 = 1;
  uVar2 = (uint)(local_b0 >> 0x20) | (uint)local_b0;
  local_80 = (ulonglong)uVar2;
  local_a0.bInheritHandle = ~(param_4 >> 7) & 1;
  local_a0.nLength = 0x18;
  local_a0._4_4_ = 0;
  local_a0._20_4_ = 0;
  local_a0.lpSecurityDescriptor = (LPVOID)0x0;
  pvVar7 = CreateFileW(param_3,(DWORD)(local_68 >> 0x20),DVar3,&local_a0,local_c4,uVar2,(HANDLE)0x0)
  ;
  if (pvVar7 == (HANDLE)0xffffffffffffffff) {
    uVar8 = (uint)(local_68 >> 0x20);
    if (((uVar8 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      local_c0 = CONCAT44(uVar8,(undefined4)local_c0) & 0x7fffffffffffffff;
      pvVar7 = CreateFileW(param_3,(DWORD)(local_c0 >> 0x20),DVar3,&local_a0,local_c4,uVar2,
                           (HANDLE)0x0);
      uVar2 = uVar8 & 0x7fffffff;
      if (pvVar7 != (HANDLE)0xffffffffffffffff) goto LAB_1800cdc71;
    }
    pbVar1 = (byte *)((&DAT_180115f70)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar3 = GetLastError();
    FUN_1800c22e0(DVar3);
  }
  else {
    uVar2 = local_c0._4_4_;
LAB_1800cdc71:
    DVar3 = GetFileType(pvVar7);
    if (DVar3 != 0) {
      if (DVar3 == 2) {
        bVar10 = (byte)local_c0 | 0x40;
      }
      else {
        bVar10 = (byte)local_c0;
        if (DVar3 == 3) {
          bVar10 = (byte)local_c0 | 8;
        }
      }
      FUN_1800cf684(*param_2,pvVar7);
      local_a8 = bVar10 | 1;
      local_c0 = CONCAT71(local_c0._1_7_,bVar10) | 1;
      *(byte *)((&DAT_180115f70)[(longlong)(int)*param_2 >> 6] + 0x38 +
               (ulonglong)(*param_2 & 0x3f) * 0x48) = local_a8;
      *(undefined1 *)
       ((&DAT_180115f70)[(longlong)(int)*param_2 >> 6] + 0x39 + (ulonglong)(*param_2 & 0x3f) * 0x48)
           = 0;
      if (((param_4 & 2) == 0) || (iVar4 = truncate_ctrl_z_if_present(*param_2), iVar4 == 0)) {
        local_68 = local_c0;
        uStack_60 = uStack_b8;
        local_c8[0] = '\0';
        local_58 = local_88;
        iVar4 = FUN_1800cd560(*param_2,(byte *)&local_68,param_4,local_c8);
        uVar8 = *param_2;
        if (iVar4 == 0) {
          *(char *)((&DAT_180115f70)[(longlong)(int)uVar8 >> 6] + 0x39 +
                   (ulonglong)(uVar8 & 0x3f) * 0x48) = local_c8[0];
          uVar9 = (ulonglong)(*param_2 & 0x3f);
          pbVar1 = (byte *)((&DAT_180115f70)[(longlong)(int)*param_2 >> 6] + 0x3d + uVar9 * 0x48);
          *pbVar1 = *pbVar1 ^ ((byte)(param_4 >> 0x10) ^
                              *(byte *)((&DAT_180115f70)[(longlong)(int)*param_2 >> 6] + 0x3d +
                                       uVar9 * 0x48)) & 1;
          if (((local_a8 & 0x48) == 0) && ((param_4 & 8) != 0)) {
            pbVar1 = (byte *)((&DAT_180115f70)[(longlong)(int)*param_2 >> 6] + 0x38 +
                             (ulonglong)(*param_2 & 0x3f) * 0x48);
            *pbVar1 = *pbVar1 | 0x20;
          }
          if (((uVar2 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
            CloseHandle(pvVar7);
            local_c0 = CONCAT44(uVar2,(undefined4)local_c0) & 0x7fffffffffffffff;
            pvVar7 = CreateFileW(param_3,(DWORD)(local_c0 >> 0x20),(DWORD)local_78,&local_a0,
                                 local_c4,(DWORD)local_80,(HANDLE)0x0);
            if (pvVar7 == (HANDLE)0xffffffffffffffff) {
              DVar3 = GetLastError();
              FUN_1800c22e0(DVar3);
              pbVar1 = (byte *)((&DAT_180115f70)[(longlong)(int)*param_2 >> 6] + 0x38 +
                               (ulonglong)(*param_2 & 0x3f) * 0x48);
              *pbVar1 = *pbVar1 & 0xfe;
              FUN_1800cf8ac(*param_2);
              goto LAB_1800cdb37;
            }
            *(HANDLE *)
             ((&DAT_180115f70)[(longlong)(int)*param_2 >> 6] + 0x28 +
             (ulonglong)(*param_2 & 0x3f) * 0x48) = pvVar7;
          }
          return 0;
        }
      }
      else {
        uVar8 = *param_2;
      }
      FUN_1800c4e5c(uVar8);
      return iVar4;
    }
    DVar3 = GetLastError();
    FUN_1800c22e0(DVar3);
    pbVar1 = (byte *)((&DAT_180115f70)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    CloseHandle(pvVar7);
    if (DVar3 == 0) {
      p_Var6 = FUN_1800c2350();
      *(undefined4 *)p_Var6 = 0xd;
    }
  }
LAB_1800cdb37:
  p_Var6 = FUN_1800c2350();
  return *(int *)p_Var6;
}


// Library Function - Multiple Matches With Different Base Names
//  _sopen_s
//  _wsopen_s
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

errno_t __cdecl
FID_conflict__sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  int iVar1;

  iVar1 = common_sopen_dispatch<>
                    ((LPCWSTR)_Filename,_OpenFlag,_ShareFlag,(ulonglong)(uint)_PermissionMode,
                     (uint *)_FileHandle,1);
  return iVar1;
}


undefined4 FUN_1800cdf00(void)

{
  return DAT_180116744;
}



uint FUN_1800cdf10(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;

  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = DAT_180116744;
    DAT_180116744 = param_1;
  }
  else {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1800c2ac4();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


bool FUN_1800cdf3c(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;

  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar1 = fegetround();
  if (iVar1 != 0) {
    if (iVar1 == 0x200) {
      if (param_4 != 0) {
        for (; *param_2 == '0'; param_2 = param_2 + 1) {
        }
        if (*param_2 == '\0') {
          return false;
        }
      }
      if (param_3 != 0x2d) {
        return true;
      }
    }
    else {
      if (iVar1 != 0x100) {
        return false;
      }
      if (param_4 != 0) {
        for (; *param_2 == '0'; param_2 = param_2 + 1) {
        }
        if (*param_2 == '\0') {
          return false;
        }
      }
      if (param_3 == 0x2d) {
        return true;
      }
    }
    return false;
  }
  if ('5' < *param_2) {
    return true;
  }
  if (*param_2 < '5') {
    return false;
  }
  pcVar2 = param_2;
  if (param_4 == 0) {
    return true;
  }
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 == '0');
  if (*pcVar2 != '\0') {
    return true;
  }
  if (param_2 == param_1) {
    return false;
  }
  return (bool)(param_2[-1] & 1);
}


undefined4
FUN_1800ce00c(char *param_1,ulonglong param_2,int param_3,int *param_4,int param_5,int param_6,
             longlong *param_7)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  longlong lVar9;

  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar5 = 0;
    if (0 < param_3) {
      iVar5 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar5 + 1)) {
      uVar7 = 0x22;
      goto LAB_1800ce030;
    }
    if (param_4 != (int *)0x0) {
      pcVar1 = *(char **)(param_4 + 2);
      *param_1 = '0';
      pcVar6 = pcVar1;
      pcVar8 = param_1;
      while( true ) {
        pcVar8 = pcVar8 + 1;
        if (param_3 < 1) break;
        cVar3 = *pcVar6;
        if (cVar3 == '\0') {
          cVar3 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar8 = cVar3;
        param_3 = param_3 + -1;
      }
      *pcVar8 = '\0';
      if ((-1 < param_3) && (bVar4 = FUN_1800cdf3c(pcVar1,pcVar6,*param_4,param_5,param_6), bVar4))
      {
        while( true ) {
          pcVar8 = pcVar8 + -1;
          if (*pcVar8 != '9') break;
          *pcVar8 = '0';
        }
        *pcVar8 = *pcVar8 + '\x01';
      }
      if (*param_1 == '1') {
        param_4[1] = param_4[1] + 1;
      }
      else {
        lVar2 = -1;
        do {
          lVar9 = lVar2;
          lVar2 = lVar9 + 1;
        } while (param_1[lVar9 + 2] != '\0');
        FUN_1800d1c20((undefined8 *)param_1,(undefined8 *)(param_1 + 1),lVar9 + 2);
      }
      return 0;
    }
  }
  uVar7 = 0x16;
LAB_1800ce030:
  *(undefined4 *)((longlong)param_7 + 0x2c) = uVar7;
  *(undefined1 *)(param_7 + 6) = 1;
  FUN_1800c2a0c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_7);
  return uVar7;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8
FUN_1800ce11c(ulonglong param_1,int param_2,uint param_3,undefined4 *param_4,char *param_5,
             longlong param_6)

{
  uint *puVar1;
  byte bVar2;
  sbyte sVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  __acrt_ptd *p_Var8;
  longlong lVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  ulonglong uVar22;
  uint uVar23;
  rsize_t _MaxCount;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  bool bVar27;
  double dVar28;
  undefined1 auStackY_828 [32];
  uint local_7f8;
  uint local_7f0;
  uint local_7ec;
  undefined8 local_7e8;
  uint local_7e0;
  uint local_7dc;
  uint local_7d8 [2];
  uint local_7d0;
  uint local_7cc;
  uint *local_7c8;
  ulonglong local_7c0;
  char local_7b8;
  uint *local_7b0;
  char *local_7a8;
  undefined4 *local_7a0;
  uint local_798;
  undefined8 local_794;
  uint local_5c8;
  uint local_5c4 [115];
  uint local_3f8;
  uint local_3f4 [115];
  uint local_228;
  uint local_224 [115];
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  FUN_1800d0b00((uint *)&local_7c0);
  uVar26 = 1;
  local_7b8 = ((byte)local_7c0 & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    FUN_1800d0b90(&local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVar4 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar4 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVar4;
  FUN_1800d0a90(local_7d8,0,0);
  uVar6 = param_1 >> 0x34 & 0x7ff;
  if (uVar6 == 0) {
    if (((param_1 & 0xfffffffffffff) != 0) && ((local_7d8[0] & 0x1000000) == 0)) goto LAB_1800ce2be;
    param_4[1] = 0;
    pcVar21 = "0";
  }
  else {
    if (uVar6 != 0x7ff) {
LAB_1800ce2be:
      local_7ec = 0;
      local_7cc = 0x8001f;
      FUN_1800d0a90(&local_7d0,0,0);
      FUN_1800d0a90(&local_7ec,0x8001f,local_7cc);
      local_7ec = param_2 + 1;
      uVar22 = (param_1 & 0x7fffffffffffffff) >> 0x34;
      uVar6 = (-(ulonglong)(uVar22 != 0) & 0x10000000000000) + (param_1 & 0xfffffffffffff);
      uVar25 = (2 - (uint)(uVar22 != 0)) + (uint)((param_1 & 0x7fffffffffffffff) >> 0x34);
      FUN_1800d0bf0();
      dVar28 = FUN_1800bb190();
      uVar5 = -(uint)(((int)dVar28 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar28;
      uVar18 = (uint)(uVar6 >> 0x20);
      local_794 = uVar6;
      uVar23 = (uint)(uVar18 != 0);
      uVar16 = uVar23 + 1;
      if (uVar25 < 0x434) {
        if (uVar25 == 0x36) {
LAB_1800ce754:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          puVar1 = (uint *)((longlong)&local_794 + (ulonglong)(-(uint)(uVar18 != 0) & 4));
          iVar12 = 0x1f;
          bVar27 = *puVar1 == 0;
          if (!bVar27) {
            for (; *puVar1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (bVar27) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          uVar23 = (iVar12 == 0x20) + uVar16;
          if (uVar23 < 0x74) {
            uVar18 = uVar23 - 1;
            if (uVar23 - 1 != 0xffffffff) {
              while( true ) {
                uVar24 = uVar18 - 1;
                if (uVar18 < uVar16) {
                  iVar12 = *(int *)((longlong)&local_794 + (ulonglong)uVar18 * 4);
                }
                else {
                  iVar12 = 0;
                }
                if (uVar24 < uVar16) {
                  uVar13 = *(uint *)((longlong)&local_794 + (ulonglong)uVar24 * 4);
                }
                else {
                  uVar13 = 0;
                }
                *(uint *)((longlong)&local_794 + (ulonglong)uVar18 * 4) =
                     uVar13 >> 0x1f | iVar12 * 2;
                if (uVar24 == 0xffffffff) break;
                uVar18 = uVar24;
              }
            }
          }
          else {
            uVar23 = 0;
          }
          uVar16 = 0x435 - uVar25 >> 5;
          local_798 = uVar23;
          FUN_1800d22d0((undefined1 (*) [32])local_3f4,0,(ulonglong)uVar16 * 4);
          local_3f4[uVar16] = 1 << ((byte)(0x435 - uVar25) & 0x1f);
        }
        else {
          local_3f4[1] = 0x100000;
          local_3f4[0] = 0;
          local_3f8 = 2;
          if (uVar18 == 0) goto LAB_1800ce754;
          uVar6 = 0;
          do {
            if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_1800ce754;
            uVar23 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar23;
          } while (uVar23 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          iVar12 = 0x1f;
          if (uVar18 != 0) {
            for (; uVar18 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (uVar18 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          local_798 = (0x20U - iVar12 < 2) + uVar16;
          if (local_798 < 0x74) {
            uVar23 = local_798 - 1;
            if (local_798 - 1 != 0xffffffff) {
              while( true ) {
                uVar18 = uVar23 - 1;
                if (uVar23 < uVar16) {
                  iVar12 = *(int *)((longlong)&local_794 + (ulonglong)uVar23 * 4);
                }
                else {
                  iVar12 = 0;
                }
                if (uVar18 < uVar16) {
                  uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)uVar18 * 4);
                }
                else {
                  uVar24 = 0;
                }
                *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4) =
                     uVar24 >> 0x1e | iVar12 * 4;
                if (uVar18 == 0xffffffff) break;
                uVar23 = uVar18;
              }
            }
          }
          else {
            local_3f8 = 0;
            local_798 = 0;
            memcpy_s(&local_794,0x1cc,local_3f4,0);
          }
          uVar23 = local_798;
          uVar16 = 0x436 - uVar25 >> 5;
          FUN_1800d22d0((undefined1 (*) [32])local_3f4,0,(ulonglong)uVar16 * 4);
          local_3f4[uVar16] = 1 << ((byte)(0x436 - uVar25) & 0x1f);
        }
        local_3f8 = uVar16 + 1;
        _MaxCount = (ulonglong)local_3f8 << 2;
      }
      else {
        local_3f4[1] = 0x100000;
        local_3f4[0] = 0;
        local_3f8 = 2;
        if (uVar18 == 0) {
LAB_1800ce515:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar24 = uVar25 - 0x433 & 0x1f;
          uVar25 = uVar25 - 0x433 >> 5;
          sVar3 = (sbyte)uVar24;
          bVar10 = 0x20 - sVar3;
          uVar18 = (int)(1L << (bVar10 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4);
          iVar12 = 0x1f;
          bVar27 = *puVar1 == 0;
          if (!bVar27) {
            for (; *puVar1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (bVar27) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          if ((uVar16 + uVar25 < 0x74) &&
             (local_798 = (0x20U - iVar12 < uVar24) + uVar16 + uVar25, local_798 < 0x74)) {
            uVar23 = local_798;
            while (uVar23 = uVar23 - 1, uVar23 != uVar25 - 1) {
              uVar24 = uVar23 - uVar25;
              if (uVar24 < uVar16) {
                uVar13 = *(uint *)((longlong)&local_794 + (ulonglong)uVar24 * 4);
              }
              else {
                uVar13 = 0;
              }
              if (uVar24 - 1 < uVar16) {
                uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar24 - 1) * 4);
              }
              else {
                uVar24 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4) =
                   (uVar24 & ~uVar18) >> (bVar10 & 0x1f) | (uVar13 & uVar18) << sVar3;
            }
            uVar6 = 0;
            if (uVar25 != 0) {
              do {
                *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
                uVar23 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar23;
              } while (uVar23 != uVar25);
            }
          }
          else {
            local_3f8 = 0;
            local_798 = 0;
            memcpy_s(&local_794,0x1cc,local_3f4,0);
          }
          local_3f4[0] = 2;
        }
        else {
          uVar6 = 0;
          do {
            if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_1800ce515;
            uVar18 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar18;
          } while (uVar18 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar24 = uVar25 - 0x432 & 0x1f;
          uVar25 = uVar25 - 0x432 >> 5;
          sVar3 = (sbyte)uVar24;
          bVar10 = 0x20 - sVar3;
          uVar18 = (int)(1L << (bVar10 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4);
          iVar12 = 0x1f;
          bVar27 = *puVar1 == 0;
          if (!bVar27) {
            for (; *puVar1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (bVar27) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          if ((uVar16 + uVar25 < 0x74) &&
             (local_798 = (0x20U - iVar12 < uVar24) + uVar16 + uVar25, local_798 < 0x74)) {
            uVar23 = local_798;
            while (uVar23 = uVar23 - 1, uVar23 != uVar25 - 1) {
              uVar24 = uVar23 - uVar25;
              if (uVar24 < uVar16) {
                uVar13 = *(uint *)((longlong)&local_794 + (ulonglong)uVar24 * 4);
              }
              else {
                uVar13 = 0;
              }
              if (uVar24 - 1 < uVar16) {
                uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar24 - 1) * 4);
              }
              else {
                uVar24 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4) =
                   (uVar24 & ~uVar18) >> (bVar10 & 0x1f) | (uVar13 & uVar18) << sVar3;
            }
            uVar6 = 0;
            if (uVar25 != 0) {
              do {
                *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
                uVar23 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar23;
              } while (uVar23 != uVar25);
            }
          }
          else {
            local_3f8 = 0;
            local_798 = 0;
            memcpy_s(&local_794,0x1cc,local_3f4,0);
          }
          local_3f4[0] = 4;
        }
        local_3f4[1] = 0;
        _MaxCount = 4;
        local_3f8 = 1;
        uVar23 = local_798;
      }
      uVar26 = 1;
      local_5c8 = local_3f8;
      memcpy_s(local_5c4,0x1cc,local_3f4,_MaxCount);
      if ((int)uVar5 < 0) {
        uVar16 = -uVar5;
        local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,uVar16);
        local_7f0 = uVar16 / 10;
        if (local_7f0 != 0) {
          do {
            local_7e0 = local_7f0;
            if (0x26 < local_7f0) {
              local_7e0 = 0x26;
            }
            uVar16 = local_7e0 - 1;
            bVar10 = (&DAT_1800f4cb2)[(ulonglong)uVar16 * 4];
            bVar2 = (&DAT_1800f4cb3)[(ulonglong)uVar16 * 4];
            local_3f8 = (uint)bVar2 + (uint)bVar10;
            FUN_1800d22d0((undefined1 (*) [32])local_3f4,0,(ulonglong)bVar10 * 4);
            FUN_1800d1c20((undefined8 *)(local_3f4 + bVar10),
                          (undefined8 *)
                          (&DAT_1800f43a0 +
                          (ulonglong)*(ushort *)(&DAT_1800f4cb0 + (ulonglong)uVar16 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            if (local_3f8 < 2) {
              uVar6 = (ulonglong)local_3f4[0];
              if (local_3f4[0] == 0) {
LAB_1800ceda1:
                local_798 = 0;
LAB_1800ceda4:
                uVar23 = local_798;
                goto LAB_1800cf067;
              }
              if ((local_3f4[0] == 1) || (uVar23 == 0)) goto LAB_1800cf067;
              uVar22 = 0;
              uVar15 = 0;
              do {
                uVar14 = *(uint *)((longlong)&local_794 + uVar15 * 4) * uVar6 + uVar22;
                *(int *)((longlong)&local_794 + uVar15 * 4) = (int)uVar14;
                uVar22 = uVar14 >> 0x20;
                iVar12 = (int)(uVar14 >> 0x20);
                uVar16 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar16;
              } while (uVar16 != uVar23);
LAB_1800cedeb:
              if (iVar12 == 0) goto LAB_1800cf063;
              if (local_798 < 0x73) {
                *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar12;
                local_798 = local_798 + 1;
                goto LAB_1800ceda4;
              }
              uVar23 = 0;
              local_798 = 0;
              bVar27 = false;
            }
            else {
              if (uVar23 < 2) {
                uVar16 = (uint)local_794;
                uVar6 = local_794 & 0xffffffff;
                uVar22 = (ulonglong)local_3f8 * 4;
                local_798 = local_3f8;
                if ((ulonglong)local_3f8 != 0) {
                  if (uVar22 < 0x1cd) {
                    FUN_1800d1c20(&local_794,(undefined8 *)local_3f4,uVar22);
                  }
                  else {
                    FUN_1800d22d0((undefined1 (*) [32])&local_794,0,0x1cc);
                    p_Var8 = FUN_1800c2350();
                    *(undefined4 *)p_Var8 = 0x22;
                    FUN_1800c2ac4();
                  }
                }
                if (uVar16 == 0) goto LAB_1800ceda1;
                uVar23 = local_798;
                if ((uVar16 != 1) && (local_798 != 0)) {
                  uVar22 = 0;
                  uVar15 = 0;
                  do {
                    uVar14 = *(uint *)((longlong)&local_794 + uVar15 * 4) * uVar6 + uVar22;
                    *(int *)((longlong)&local_794 + uVar15 * 4) = (int)uVar14;
                    uVar22 = uVar14 >> 0x20;
                    iVar12 = (int)(uVar14 >> 0x20);
                    uVar23 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar23;
                  } while (uVar23 != local_798);
                  goto LAB_1800cedeb;
                }
              }
              else {
                local_7b0 = local_3f4;
                local_7c8 = (uint *)&local_794;
                if (local_3f8 < uVar23) {
                  uVar16 = uVar23;
                  uVar23 = local_3f8;
                }
                else {
                  uVar16 = local_3f8;
                  local_7c8 = local_3f4;
                  local_7b0 = (uint *)&local_794;
                }
                uVar22 = 0;
                uVar6 = 0;
                local_228 = 0;
                if (uVar23 != 0) {
                  do {
                    uVar18 = local_7b0[uVar6];
                    iVar12 = (int)uVar6;
                    if (uVar18 == 0) {
                      if (iVar12 == (int)uVar22) {
                        local_224[uVar6] = 0;
                        uVar22 = (ulonglong)(iVar12 + 1U);
                        local_228 = iVar12 + 1U;
                      }
                    }
                    else {
                      uVar15 = 0;
                      if (uVar16 != 0) {
                        do {
                          iVar20 = (int)uVar6;
                          uVar14 = uVar6;
                          if (iVar20 == 0x73) break;
                          if (iVar20 == (int)uVar22) {
                            local_224[uVar6] = 0;
                            local_228 = iVar20 + 1;
                          }
                          uVar14 = (ulonglong)(iVar20 + 1U);
                          uVar15 = (ulonglong)local_7c8[(uint)(iVar20 + -iVar12)] *
                                   (ulonglong)uVar18 + uVar15 + (ulonglong)local_224[uVar6];
                          local_224[uVar6] = (uint)uVar15;
                          uVar22 = (ulonglong)local_228;
                          uVar15 = uVar15 >> 0x20;
                          uVar6 = uVar14;
                        } while (iVar20 + 1U + -iVar12 != uVar16);
                        uVar18 = (uint)uVar15;
                        uVar6 = uVar14;
                        while (uVar18 != 0) {
                          iVar20 = (int)uVar6;
                          if (iVar20 == 0x73) goto LAB_1800cf10e;
                          if (iVar20 == (int)uVar22) {
                            local_224[uVar6] = 0;
                            local_228 = iVar20 + 1;
                          }
                          uVar18 = local_224[uVar6];
                          local_224[uVar6] = (uint)(uVar18 + uVar15);
                          uVar22 = (ulonglong)local_228;
                          uVar18 = (uint)(uVar18 + uVar15 >> 0x20);
                          uVar15 = (ulonglong)uVar18;
                          uVar6 = (ulonglong)(iVar20 + 1);
                        }
                      }
                      if ((int)uVar6 == 0x73) goto LAB_1800cf10e;
                    }
                    uVar6 = (ulonglong)(iVar12 + 1U);
                  } while (iVar12 + 1U != uVar23);
                }
                local_798 = (uint)uVar22;
                uVar23 = 0;
                if (uVar22 != 0) {
                  if (uVar22 * 4 < 0x1cd) {
                    FUN_1800d1c20(&local_794,(undefined8 *)local_224,uVar22 * 4);
                  }
                  else {
                    FUN_1800d22d0((undefined1 (*) [32])&local_794,0,0x1cc);
                    p_Var8 = FUN_1800c2350();
                    *(undefined4 *)p_Var8 = 0x22;
                    FUN_1800c2ac4();
                  }
LAB_1800cf063:
                  uVar23 = local_798;
                }
              }
LAB_1800cf067:
              bVar27 = true;
            }
            if (!bVar27) goto LAB_1800cf10e;
            local_7f0 = local_7f0 - local_7e0;
          } while (local_7f0 != 0);
          uVar16 = (uint)local_7e8;
        }
        if (uVar16 % 10 != 0) {
          uVar16 = *(uint *)(&DAT_1800f4d48 + (ulonglong)(uVar16 % 10 - 1) * 4);
          if (uVar16 == 0) {
LAB_1800cf10e:
            local_798 = 0;
LAB_1800cf111:
            uVar23 = local_798;
          }
          else if ((uVar16 != 1) && (uVar23 != 0)) {
            uVar6 = 0;
            uVar22 = 0;
            do {
              uVar15 = (ulonglong)*(uint *)((longlong)&local_794 + uVar22 * 4) * (ulonglong)uVar16 +
                       uVar6;
              *(int *)((longlong)&local_794 + uVar22 * 4) = (int)uVar15;
              uVar6 = uVar15 >> 0x20;
              uVar18 = (int)uVar22 + 1;
              uVar22 = (ulonglong)uVar18;
            } while (uVar18 != uVar23);
            iVar12 = (int)(uVar15 >> 0x20);
            if (iVar12 != 0) {
              if (0x72 < local_798) goto LAB_1800cf10e;
              *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar12;
              local_798 = local_798 + 1;
              goto LAB_1800cf111;
            }
            uVar23 = local_798;
          }
        }
LAB_1800cf115:
        uVar16 = local_5c8;
      }
      else {
        local_7f8 = uVar5 / 10;
        uVar16 = local_5c8;
        uVar18 = local_5c8;
        if (local_7f8 != 0) {
          do {
            local_7e0 = local_7f8;
            if (0x26 < local_7f8) {
              local_7e0 = 0x26;
            }
            uVar16 = local_7e0 - 1;
            bVar10 = (&DAT_1800f4cb2)[(ulonglong)uVar16 * 4];
            bVar2 = (&DAT_1800f4cb3)[(ulonglong)uVar16 * 4];
            local_3f8 = (uint)bVar2 + (uint)bVar10;
            FUN_1800d22d0((undefined1 (*) [32])local_3f4,0,(ulonglong)bVar10 * 4);
            FUN_1800d1c20((undefined8 *)(local_3f4 + bVar10),
                          (undefined8 *)
                          (&DAT_1800f43a0 +
                          (ulonglong)*(ushort *)(&DAT_1800f4cb0 + (ulonglong)uVar16 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            uVar25 = local_5c4[0];
            if (local_3f8 < 2) {
              uVar6 = (ulonglong)local_3f4[0];
              if (local_3f4[0] == 0) {
LAB_1800ce8c1:
                local_5c8 = 0;
LAB_1800ce8c4:
                uVar16 = local_5c8;
                goto LAB_1800cec1c;
              }
              uVar16 = uVar18;
              if ((local_3f4[0] == 1) || (uVar18 == 0)) goto LAB_1800cec1c;
              uVar22 = 0;
              uVar15 = 0;
              do {
                uVar14 = local_5c4[uVar15] * uVar6 + uVar22;
                local_5c4[uVar15] = (uint)uVar14;
                uVar22 = uVar14 >> 0x20;
                uVar16 = (uint)(uVar14 >> 0x20);
                uVar25 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar25;
              } while (uVar25 != uVar18);
LAB_1800ce963:
              if (uVar16 == 0) goto LAB_1800cec15;
              if (local_5c8 < 0x73) {
                local_5c4[local_5c8] = uVar16;
                local_5c8 = local_5c8 + 1;
                goto LAB_1800ce8c4;
              }
              uVar16 = 0;
              local_5c8 = 0;
              bVar27 = false;
            }
            else {
              if (uVar18 < 2) {
                uVar6 = (ulonglong)local_5c4[0];
                uVar22 = (ulonglong)local_3f8 * 4;
                local_5c8 = local_3f8;
                if ((ulonglong)local_3f8 != 0) {
                  if (uVar22 < 0x1cd) {
                    FUN_1800d1c20((undefined8 *)local_5c4,(undefined8 *)local_3f4,uVar22);
                  }
                  else {
                    FUN_1800d22d0((undefined1 (*) [32])local_5c4,0,0x1cc);
                    p_Var8 = FUN_1800c2350();
                    *(undefined4 *)p_Var8 = 0x22;
                    FUN_1800c2ac4();
                  }
                }
                if (uVar25 == 0) goto LAB_1800ce8c1;
                uVar16 = local_5c8;
                if ((uVar25 != 1) && (local_5c8 != 0)) {
                  uVar22 = 0;
                  uVar15 = 0;
                  do {
                    uVar14 = local_5c4[uVar15] * uVar6 + uVar22;
                    local_5c4[uVar15] = (uint)uVar14;
                    uVar22 = uVar14 >> 0x20;
                    uVar16 = (uint)(uVar14 >> 0x20);
                    uVar18 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar18;
                  } while (uVar18 != local_5c8);
                  goto LAB_1800ce963;
                }
              }
              else {
                local_7c8 = local_5c4;
                local_7e8 = local_3f4;
                uVar25 = local_3f8;
                if (local_3f8 < uVar18) {
                  uVar25 = uVar18;
                  local_7e8 = local_5c4;
                  uVar18 = local_3f8;
                  local_7c8 = local_3f4;
                }
                uVar16 = 0;
                uVar6 = 0;
                local_228 = 0;
                if (uVar18 != 0) {
                  do {
                    uVar24 = local_7c8[uVar6];
                    uVar13 = (uint)uVar6;
                    if (uVar24 == 0) {
                      if (uVar13 == uVar16) {
                        local_224[uVar6] = 0;
                        uVar16 = uVar13 + 1;
                        local_228 = uVar16;
                      }
                    }
                    else {
                      uVar22 = 0;
                      if (uVar25 != 0) {
                        do {
                          uVar19 = (uint)uVar6;
                          uVar15 = uVar6;
                          if (uVar19 == 0x73) break;
                          if (uVar19 == uVar16) {
                            local_224[uVar6] = 0;
                            local_228 = uVar19 + 1;
                          }
                          uVar15 = (ulonglong)(uVar19 + 1);
                          uVar22 = (ulonglong)local_7e8[uVar19 + -uVar13] * (ulonglong)uVar24 +
                                   (ulonglong)local_224[uVar6] + uVar22;
                          local_224[uVar6] = (uint)uVar22;
                          uVar22 = uVar22 >> 0x20;
                          uVar6 = uVar15;
                          uVar16 = local_228;
                        } while (uVar19 + 1 + -uVar13 != uVar25);
                        uVar24 = (uint)uVar22;
                        uVar6 = uVar15;
                        while (uVar24 != 0) {
                          uVar19 = (uint)uVar6;
                          if (uVar19 == 0x73) goto LAB_1800cece6;
                          if (uVar19 == uVar16) {
                            local_224[uVar6] = 0;
                            local_228 = uVar19 + 1;
                          }
                          uVar16 = local_224[uVar6];
                          local_224[uVar6] = (uint)(uVar16 + uVar22);
                          uVar24 = (uint)(uVar16 + uVar22 >> 0x20);
                          uVar22 = (ulonglong)uVar24;
                          uVar6 = (ulonglong)(uVar19 + 1);
                          uVar16 = local_228;
                        }
                      }
                      if ((int)uVar6 == 0x73) goto LAB_1800cece6;
                    }
                    uVar6 = (ulonglong)(uVar13 + 1);
                  } while (uVar13 + 1 != uVar18);
                }
                uVar6 = (ulonglong)uVar16 * 4;
                local_5c8 = uVar16;
                if ((ulonglong)uVar16 != 0) {
                  if (uVar6 < 0x1cd) {
                    FUN_1800d1c20((undefined8 *)local_5c4,(undefined8 *)local_224,uVar6);
                  }
                  else {
                    FUN_1800d22d0((undefined1 (*) [32])local_5c4,0,0x1cc);
                    p_Var8 = FUN_1800c2350();
                    *(undefined4 *)p_Var8 = 0x22;
                    FUN_1800c2ac4();
                  }
LAB_1800cec15:
                  uVar16 = local_5c8;
                }
              }
LAB_1800cec1c:
              bVar27 = true;
            }
            if (!bVar27) goto LAB_1800cece6;
            local_7f8 = local_7f8 - local_7e0;
            uVar18 = uVar16;
          } while (local_7f8 != 0);
        }
        if (uVar5 % 10 != 0) {
          uVar18 = *(uint *)(&DAT_1800f4d48 + (ulonglong)(uVar5 % 10 - 1) * 4);
          if (uVar18 == 0) {
LAB_1800cece6:
            local_5c8 = 0;
          }
          else {
            if ((uVar18 == 1) || (uVar16 == 0)) goto LAB_1800cf11c;
            uVar6 = 0;
            uVar22 = 0;
            do {
              uVar15 = (ulonglong)local_5c4[uVar22] * (ulonglong)uVar18 + uVar6;
              local_5c4[uVar22] = (uint)uVar15;
              uVar6 = uVar15 >> 0x20;
              uVar25 = (int)uVar22 + 1;
              uVar22 = (ulonglong)uVar25;
            } while (uVar25 != uVar16);
            uVar16 = (uint)(uVar15 >> 0x20);
            if (uVar16 == 0) goto LAB_1800cf115;
            if (0x72 < local_5c8) goto LAB_1800cece6;
            local_5c4[local_5c8] = uVar16;
            local_5c8 = local_5c8 + 1;
          }
          uVar16 = local_5c8;
        }
      }
LAB_1800cf11c:
      pcVar21 = local_7a8;
      if (uVar23 != 0) {
        uVar6 = 0;
        uVar22 = 0;
        do {
          uVar15 = uVar6 + (ulonglong)*(uint *)((longlong)&local_794 + uVar22 * 4) * 10;
          *(int *)((longlong)&local_794 + uVar22 * 4) = (int)uVar15;
          uVar18 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar18;
          uVar6 = uVar15 >> 0x20;
        } while (uVar18 != uVar23);
        iVar12 = (int)(uVar15 >> 0x20);
        if (iVar12 != 0) {
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar12;
            local_798 = local_798 + 1;
          }
          else {
            local_798 = 0;
          }
        }
      }
      uVar6 = FUN_1800b7d80(&local_798,&local_5c8);
      if ((int)uVar6 == 10) {
        uVar5 = uVar5 + 1;
        *pcVar21 = '1';
        pcVar17 = pcVar21 + 1;
        if (uVar16 != 0) {
          uVar6 = 0;
          uVar22 = 0;
          do {
            uVar15 = uVar6 + (ulonglong)local_5c4[uVar22] * 10;
            local_5c4[uVar22] = (uint)uVar15;
            uVar23 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar23;
            uVar6 = uVar15 >> 0x20;
          } while (uVar23 != uVar16);
          uVar23 = (uint)(uVar15 >> 0x20);
          if (uVar23 != 0) {
            if (local_5c8 < 0x73) {
              local_5c4[local_5c8] = uVar23;
              local_5c8 = local_5c8 + 1;
            }
            else {
              local_5c8 = 0;
            }
          }
        }
      }
      else if ((int)uVar6 == 0) {
        uVar5 = uVar5 - 1;
        pcVar17 = pcVar21;
      }
      else {
        pcVar17 = pcVar21 + 1;
        *pcVar21 = (char)uVar6 + '0';
      }
      local_7a0[1] = uVar5;
      uVar23 = local_7ec;
      if (((-1 < (int)uVar5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
        uVar23 = local_7ec + uVar5;
      }
      uVar6 = (ulonglong)uVar23;
      if (param_6 - 1U < (ulonglong)uVar23) {
        uVar6 = param_6 - 1U;
      }
      pcVar21 = pcVar21 + uVar6;
      bVar27 = false;
      while ((pcVar17 != pcVar21 && (local_798 != 0))) {
        uVar6 = 0;
        uVar22 = 0;
        do {
          uVar15 = (ulonglong)*(uint *)((longlong)&local_794 + uVar22 * 4) * 1000000000 + uVar6;
          *(int *)((longlong)&local_794 + uVar22 * 4) = (int)uVar15;
          uVar6 = uVar15 >> 0x20;
          uVar23 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar23;
        } while (uVar23 != local_798);
        iVar12 = (int)(uVar15 >> 0x20);
        if (iVar12 != 0) {
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar12;
            local_798 = local_798 + 1;
          }
          else {
            local_798 = 0;
          }
        }
        uVar6 = FUN_1800b7d80(&local_798,&local_5c8);
        uVar23 = 8;
        do {
          uVar22 = (uVar6 & 0xffffffff) / 10;
          cVar11 = (char)uVar6 + (char)uVar22 * -10 + '0';
          if (uVar23 < (uint)((int)pcVar21 - (int)pcVar17)) {
            pcVar17[uVar23] = cVar11;
          }
          else if (cVar11 != '0') {
            bVar27 = true;
          }
          uVar23 = uVar23 - 1;
          uVar6 = uVar22;
        } while (uVar23 != 0xffffffff);
        lVar9 = (longlong)pcVar21 - (longlong)pcVar17;
        if (9 < lVar9) {
          lVar9 = 9;
        }
        pcVar17 = pcVar17 + lVar9;
      }
      *pcVar17 = '\0';
      if ((local_798 != 0) || (bVar27)) {
        uVar26 = 0;
      }
      local_7dc = 0;
      FUN_1800d0a90(&local_7dc,local_7d0,local_7cc);
      goto LAB_1800cf348;
    }
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar23 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar23 = 4;
    }
    else {
      uVar23 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar23 == 1) {
      uVar26 = FUN_1800c1840(param_5,param_6,0x1800fd2ec);
      if ((int)uVar26 != 0) goto LAB_1800cf385;
      uVar26 = 0;
      goto LAB_1800cf348;
    }
    if (uVar23 == 2) {
      pcVar21 = "1#QNAN";
    }
    else if (uVar23 == 3) {
      pcVar21 = "1#SNAN";
    }
    else {
      if (uVar23 != 4) goto LAB_1800ce2be;
      pcVar21 = "1#IND";
    }
  }
  uVar7 = FUN_1800c1840(param_5,param_6,(longlong)pcVar21);
  if ((int)uVar7 != 0) {
LAB_1800cf385:
                    // WARNING: Subroutine does not return
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_1800cf348:
  if (local_7b8 != '\0') {
    FUN_1800d0b20((uint *)&local_7c0);
  }
  return uVar26;
}


undefined8 FUN_1800cf39c(byte *param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;

  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar4 = 1;
        bVar3 = 0xc0;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_1800cf433:
          uVar2 = FUN_1800cf448(param_3,param_4);
          return uVar2;
        }
        lVar4 = 2;
        bVar3 = 0xe0;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_1800cf433;
        lVar4 = 3;
        bVar3 = 0xf0;
      }
      lVar5 = lVar4;
      do {
        bVar1 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar5] = bVar1 & 0x3f | 0x80;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *param_1 = bVar3 | (byte)param_2;
      uVar2 = FUN_1800cf440(lVar4 + 1,param_3);
      return uVar2;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}


undefined8 FUN_1800cf440(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}


undefined8 FUN_1800cf448(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}


byte FUN_1800cf45c(uint param_1)

{
  __acrt_ptd *p_Var1;

  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180116370)) {
      return *(byte *)((&DAT_180115f70)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 9;
    FUN_1800c2ac4();
  }
  return 0;
}


// Library Function - Single Match
//  __acrt_lowio_create_handle_array
//
// Library: Visual Studio 2019 Release

undefined8 * __acrt_lowio_create_handle_array(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;

  puVar3 = _calloc_base(0x40,0x48);
  puVar5 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3 != puVar3 + 0x240) {
      puVar5 = puVar3 + 6;
      do {
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + -6),4000,0);
        puVar5[-1] = 0xffffffffffffffff;
        puVar4 = (undefined1 *)((longlong)puVar5 + 0xe);
        *(byte *)((longlong)puVar5 + 0xd) = *(byte *)((longlong)puVar5 + 0xd) & 0xf8;
        uVar2 = 0;
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0xa0a0000;
        *(undefined1 *)((longlong)puVar5 + 0xc) = 10;
        do {
          *puVar4 = 0;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 < 5);
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 9;
      } while (puVar1 != puVar3 + 0x240);
    }
    puVar5 = puVar3;
  }
  FUN_1800c3030((LPVOID)0x0);
  return puVar5;
}


// Library Function - Single Match
//  __acrt_lowio_destroy_handle_array
//
// Library: Visual Studio 2019 Release

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;

  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_1800c3030(param_1);
  }
  return;
}


// Library Function - Single Match
//  __acrt_lowio_ensure_fh_exists
//
// Library: Visual Studio 2019 Release

undefined4 __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;

  if (param_1 < 0x2000) {
    uVar5 = 0;
    __acrt_lock(7);
    lVar4 = 0;
    iVar1 = DAT_180116370;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_180115f70)[lVar4] == 0) {
        puVar3 = __acrt_lowio_create_handle_array();
        (&DAT_180115f70)[lVar4] = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          uVar5 = 0xc;
          break;
        }
        iVar1 = DAT_180116370 + 0x40;
        DAT_180116370 = iVar1;
      }
      lVar4 = lVar4 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    p_Var2 = FUN_1800c2350();
    *(undefined4 *)p_Var2 = 9;
    FUN_1800c2ac4();
    uVar5 = 9;
  }
  return uVar5;
}


// Library Function - Single Match
//  __acrt_lowio_lock_fh
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_lowio_lock_fh(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800cf67c. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}


undefined8 FUN_1800cf684(uint param_1,HANDLE param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  DWORD nStdHandle;

  if ((-1 < (int)param_1) && (param_1 < DAT_180116370)) {
    if (*(longlong *)
         ((&DAT_180115f70)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
         (ulonglong)(param_1 & 0x3f) * 0x48) == -1) {
      iVar1 = FUN_1800c6824();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1800cf705;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1800cf705:
      *(HANDLE *)
       ((&DAT_180115f70)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
       (ulonglong)(param_1 & 0x3f) * 0x48) = param_2;
      return 0;
    }
  }
  p_Var2 = FUN_1800c2350();
  *(undefined4 *)p_Var2 = 9;
  p_Var2 = FUN_1800c232c();
  *(undefined4 *)p_Var2 = 0;
  return 0xffffffff;
}


// Library Function - Single Match
//  __acrt_lowio_unlock_fh
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_lowio_unlock_fh(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800cf764. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_180115f70)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}


// Library Function - Single Match
//  _alloc_osfhnd
//
// Library: Visual Studio 2019 Release

int __cdecl _alloc_osfhnd(void)

{
  LPCRITICAL_SECTION p_Var1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;

  __acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_1800cf883:
      __acrt_unlock(7);
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_180115f70)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      puVar2 = __acrt_lowio_create_handle_array();
      (&DAT_180115f70)[iVar4] = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        DAT_180116370 = DAT_180116370 + 0x40;
        uVar3 = iVar4 << 6;
        __acrt_lowio_lock_fh(uVar3);
        *(undefined1 *)((&DAT_180115f70)[(longlong)(int)uVar3 >> 6] + 0x38) = 1;
      }
      goto LAB_1800cf883;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
          uVar3 = (int)(((longlong)lpCriticalSection - (longlong)p_Var1) / 0x48) + iVar4 * 0x40;
          *(undefined1 *)
           ((&DAT_180115f70)[(longlong)(int)uVar3 >> 6] + 0x38 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               1;
          *(undefined8 *)
           ((&DAT_180115f70)[(longlong)(int)uVar3 >> 6] + 0x28 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               0xffffffffffffffff;
          goto LAB_1800cf883;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


undefined8 FUN_1800cf8ac(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  DWORD nStdHandle;

  if ((-1 < (int)param_1) && (param_1 < DAT_180116370)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_180115f70)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_180115f70)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_1800c6824();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1800cf92c;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1800cf92c:
      *(undefined8 *)
       ((&DAT_180115f70)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  p_Var3 = FUN_1800c2350();
  *(undefined4 *)p_Var3 = 9;
  p_Var3 = FUN_1800c232c();
  *(undefined4 *)p_Var3 = 0;
  return 0xffffffff;
}


undefined8 FUN_1800cf968(uint param_1)

{
  __acrt_ptd *p_Var1;

  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_1800c232c();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180116370)) {
      if ((*(byte *)((&DAT_180115f70)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_180115f70)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    p_Var1 = FUN_1800c232c();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 9;
    FUN_1800c2ac4();
  }
  return 0xffffffffffffffff;
}


undefined2 FUN_1800cf9e0(undefined2 param_1)

{
  bool bVar1;
  BOOL BVar2;
  undefined7 extraout_var;
  undefined2 local_res8 [4];
  DWORD local_res10 [6];

  local_res8[0] = param_1;
  bVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    local_res10[0] = 0;
    BVar2 = __dcrt_write_console(local_res8,1,local_res10);
    if (BVar2 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __acrt_stdio_allocate_buffer_nolock
//
// Library: Visual Studio 2019 Release

void __acrt_stdio_allocate_buffer_nolock(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined4 uVar2;

  _DAT_180115da8 = _DAT_180115da8 + 1;
  uVar2 = 0x1000;
  pvVar1 = _calloc_base(0x1000,1);
  param_1[1] = pvVar1;
  FUN_1800c3030((LPVOID)0x0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}


uint FUN_1800cfa90(uint param_1)

{
  return param_1 & 0x300;
}


uint FUN_1800cfaa0(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = (ushort)MXCSR & 0x8040;
  if (uVar1 == 0x8000) {
    uVar4 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar4 = 0x800;
  }
  else {
    uVar4 = 0;
    if (uVar1 == 0x8040) {
      uVar4 = 0x400;
    }
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 0x2000) {
    uVar3 = 0x100;
  }
  else if (uVar2 == 0x4000) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x300;
    if (uVar2 != 0x6000) {
      uVar3 = 0;
    }
  }
  uVar4 = ((((MXCSR >> 2 & 0x400 | MXCSR & 0x800) >> 2 | MXCSR & 0x400) >> 2 | MXCSR & 0x200) >> 3 |
          MXCSR & 0x180) >> 3 | uVar4 | uVar3;
  return (uVar3 | uVar4 * 4) << 0x16 | uVar4;
}


uint FUN_1800cfb80(uint param_1)

{
  return (param_1 & 0x3f) << 0x18 | param_1;
}


uint FUN_1800cfb90(void)

{
  uint uVar1;

  uVar1 = (((MXCSR & 0x3f) >> 2 & 8 | MXCSR & 0x10) >> 2 | MXCSR & 8) >> 1 |
          ((MXCSR & 2) << 3 | MXCSR & 4) * 2 | (MXCSR & 1) << 4;
  return uVar1 << 0x18 | uVar1;
}


void FUN_1800cfbf0(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;

  uVar5 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x16 & 0x300;
  uVar4 = param_1 & 0xc00;
  uVar7 = 0x400;
  uVar11 = 0x800;
  if (uVar4 == 0x400) {
    uVar9 = 0x8040;
  }
  else if (uVar4 == 0x800) {
    uVar9 = 0x40;
  }
  else if (uVar4 == 0xc00) {
    uVar9 = 0x8000;
  }
  else {
    uVar9 = 0;
  }
  uVar6 = 0x100;
  uVar10 = 0x200;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar8 = 0x2000;
      goto LAB_1800cfc8f;
    }
    if (uVar2 == 0x200) {
      uVar8 = 0x4000;
      goto LAB_1800cfc8f;
    }
    if (uVar2 == 0x300) {
      uVar8 = 0x6000;
      goto LAB_1800cfc8f;
    }
  }
  uVar8 = 0;
LAB_1800cfc8f:
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x1000;
  }
  if ((uVar5 & 2) == 0) {
    uVar11 = 0;
  }
  if ((uVar5 & 4) == 0) {
    uVar7 = 0;
  }
  if ((uVar5 & 8) == 0) {
    uVar10 = 0;
  }
  if ((uVar5 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  if ((uVar5 & 0x20) == 0) {
    uVar6 = 0;
  }
  MXCSR = MXCSR & 0xffff003f |
          (uint)(ushort)(uVar8 | uVar3 | uVar11 | uVar7 | uVar10 | uVar1 | uVar6 | uVar9);
  return;
}


void FUN_1800cfd20(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;

  uVar2 = param_1 >> 0x18;
  bVar3 = ((uVar2 & 0x3f) >> 4 & 1) != 0;
  uVar1 = (uint)bVar3;
  MXCSR = MXCSR & 0xffffffc0 |
          -(uint)((uVar2 & 1) != 0) & 0x20 | -(uint)((uVar2 & 2) != 0) & 0x10 |
          -(uint)((uVar2 & 4) != 0) & 8 | -(uint)((uVar2 & 8) != 0) & 4 | uVar1 |
          (uVar1 - bVar3) - (uint)((uVar2 & 0x20) != 0) & 2;
  return;
}


undefined8 FUN_1800cfda0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;

  if ((param_2 & 0x1f) == 0) {
    *param_1 = 0;
    return 0;
  }
  uVar1 = FUN_1800cfb90();
  uVar2 = FUN_1800cfb80(param_2 & 0x1f);
  *param_1 = uVar2 & uVar1;
  return 0;
}


bool FUN_1800cfdf0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if ((param_2 & 0x1f) == 0) {
    return false;
  }
  uVar1 = FUN_1800cfb80(param_2 & 0x1f);
  uVar2 = FUN_1800cfb80(0x3f);
  uVar4 = *param_1;
  uVar3 = FUN_1800cfb90();
  uVar1 = uVar3 & ~uVar1 | uVar2 & uVar4 & uVar1;
  FUN_1800cfd20(uVar1);
  uVar1 = uVar1 & 0x1f;
  uVar4 = FUN_1800d12d0(uVar1);
  return uVar4 != uVar1;
}


undefined4 FUN_1800cfe70(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (param_1 != (ushort *)0x0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_1800cd220(param_1,(ushort *)(&PTR_DAT_1800fed60)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_1800fed68 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if ((ulonglong)(longlong)iVar5 < 0xe4) {
          return *(undefined4 *)(&DAT_1800fd310 + (longlong)iVar5 * 0x10);
        }
        return 0;
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar4 <= iVar5);
  }
  return 0;
}


uint FUN_1800cff20(uint param_1)

{
  return param_1 | 0x400000;
}


undefined4 FUN_1800cff30(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;

  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1800cff89;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_1800cff89;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
          pcVar4 = pcVar4 + 1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *pcVar4 = '\0';
        }
      }
      if (lVar5 != 0) {
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
    *param_1 = '\0';
  }
LAB_1800cff89:
  p_Var2 = FUN_1800c2350();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1800c2ac4();
  return 0x16;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

byte * FUN_1800d0060(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte local_38 [56];

  bVar2 = *param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  local_38[0x13] = 0;
  local_38[0x14] = 0;
  local_38[0x15] = 0;
  local_38[0x16] = 0;
  local_38[0x17] = 0;
  local_38[0x18] = 0;
  local_38[0x19] = 0;
  local_38[0x1a] = 0;
  local_38[0x1b] = 0;
  local_38[0x1c] = 0;
  local_38[0x1d] = 0;
  local_38[0x1e] = 0;
  local_38[0x1f] = 0;
  while (bVar2 != 0) {
    local_38[(longlong)(int)(uint)bVar2 >> 3] =
         local_38[(longlong)(int)(uint)bVar2 >> 3] | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  bVar2 = *param_1;
  while( true ) {
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    if ((local_38[bVar2 >> 3] >> (bVar2 & 7) & 1) != 0) break;
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}


// WARNING: Removing unreachable block (ram,0x0001800d039c)
// WARNING: Removing unreachable block (ram,0x0001800d0395)
// WARNING: Removing unreachable block (ram,0x0001800d038e)
// WARNING: Removing unreachable block (ram,0x0001800d0387)
// WARNING: Removing unreachable block (ram,0x0001800d0380)
// WARNING: Removing unreachable block (ram,0x0001800d0379)
// WARNING: Removing unreachable block (ram,0x0001800d0372)
// WARNING: Removing unreachable block (ram,0x0001800d036b)
// WARNING: Removing unreachable block (ram,0x0001800d0364)
// WARNING: Removing unreachable block (ram,0x0001800d035d)
// WARNING: Removing unreachable block (ram,0x0001800d0356)
// WARNING: Removing unreachable block (ram,0x0001800d034f)
// WARNING: Removing unreachable block (ram,0x0001800d0348)
// WARNING: Removing unreachable block (ram,0x0001800d0341)
// WARNING: Removing unreachable block (ram,0x0001800d033a)
// WARNING: Removing unreachable block (ram,0x0001800d01fd)
// WARNING: Removing unreachable block (ram,0x0001800d020c)
// WARNING: Removing unreachable block (ram,0x0001800d021b)
// WARNING: Removing unreachable block (ram,0x0001800d022a)
// WARNING: Removing unreachable block (ram,0x0001800d0239)
// WARNING: Removing unreachable block (ram,0x0001800d0245)
// WARNING: Removing unreachable block (ram,0x0001800d0251)
// WARNING: Removing unreachable block (ram,0x0001800d025d)
// WARNING: Removing unreachable block (ram,0x0001800d0269)
// WARNING: Removing unreachable block (ram,0x0001800d0275)
// WARNING: Removing unreachable block (ram,0x0001800d0281)
// WARNING: Removing unreachable block (ram,0x0001800d028d)
// WARNING: Removing unreachable block (ram,0x0001800d0299)
// WARNING: Removing unreachable block (ram,0x0001800d02a5)
// WARNING: Removing unreachable block (ram,0x0001800d02b1)

byte * FUN_1800d0100(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte *pbVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];

  uVar21 = (ulonglong)((uint)param_2 & 0xf);
  pauVar20 = (undefined1 (*) [16])(param_2 + -uVar21);
  auVar33 = *pauVar20;
  switch(uVar21) {
  case 1:
    auVar33 = auVar33 >> 8;
    break;
  case 2:
    auVar33 = auVar33 >> 0x10;
    break;
  case 3:
    auVar33 = auVar33 >> 0x18;
    break;
  case 4:
    auVar33 = auVar33 >> 0x20;
    break;
  case 5:
    auVar33 = auVar33 >> 0x28;
    break;
  case 6:
    auVar33 = auVar33 >> 0x30;
    break;
  case 7:
    auVar33 = auVar33 >> 0x38;
    break;
  case 8:
    auVar33 = auVar33 >> 0x40;
    break;
  case 9:
    auVar33 = auVar33 >> 0x48;
    break;
  case 10:
    auVar33 = auVar33 >> 0x50;
    break;
  case 0xb:
    auVar33 = auVar33 >> 0x58;
    break;
  case 0xc:
    auVar33 = auVar33 >> 0x60;
    break;
  case 0xd:
    auVar33 = auVar33 >> 0x68;
    break;
  case 0xe:
    auVar33 = auVar33 >> 0x70;
    break;
  case 0xf:
    auVar33 = auVar33 >> 0x78;
  }
  auVar22[0] = -(auVar33[0] == '\0');
  auVar22[1] = -(auVar33[1] == '\0');
  auVar22[2] = -(auVar33[2] == '\0');
  auVar22[3] = -(auVar33[3] == '\0');
  auVar22[4] = -(auVar33[4] == '\0');
  auVar22[5] = -(auVar33[5] == '\0');
  auVar22[6] = -(auVar33[6] == '\0');
  auVar22[7] = -(auVar33[7] == '\0');
  auVar22[8] = -(auVar33[8] == '\0');
  auVar22[9] = -(auVar33[9] == '\0');
  auVar22[10] = -(auVar33[10] == '\0');
  auVar22[0xb] = -(auVar33[0xb] == '\0');
  auVar22[0xc] = -(auVar33[0xc] == '\0');
  auVar22[0xd] = -(auVar33[0xd] == '\0');
  auVar22[0xe] = -(auVar33[0xe] == '\0');
  auVar22[0xf] = -(auVar33[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar21 == 0) {
      if ((*pauVar20)[1] != '\0') {
        pbVar19 = FUN_1800d0060(param_1,param_2);
        return pbVar19;
      }
      goto LAB_1800d03a9;
    }
  }
  else {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    lVar25 = auVar33._8_8_;
    switch(-uVar2) {
    case 0:
      auVar33 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar26._0_8_ = auVar33._0_8_ << 8;
      auVar26._8_8_ = lVar25 << 8 | auVar33._0_8_ >> 0x38;
      auVar33 = auVar26 >> 8;
      break;
    case 0xfffffff2:
      auVar27._0_8_ = auVar33._0_8_ << 0x10;
      auVar27._8_8_ = lVar25 << 0x10 | auVar33._0_8_ >> 0x30;
      auVar33 = auVar27 >> 0x10;
      break;
    case 0xfffffff3:
      auVar28._0_8_ = auVar33._0_8_ << 0x18;
      auVar28._8_8_ = lVar25 << 0x18 | auVar33._0_8_ >> 0x28;
      auVar33 = auVar28 >> 0x18;
      break;
    case 0xfffffff4:
      auVar29._0_8_ = auVar33._0_8_ << 0x20;
      auVar29._8_8_ = lVar25 << 0x20 | auVar33._0_8_ >> 0x20;
      auVar33 = auVar29 >> 0x20;
      break;
    case 0xfffffff5:
      auVar30._0_8_ = auVar33._0_8_ << 0x28;
      auVar30._8_8_ = lVar25 << 0x28 | auVar33._0_8_ >> 0x18;
      auVar33 = auVar30 >> 0x28;
      break;
    case 0xfffffff6:
      auVar31._0_8_ = auVar33._0_8_ << 0x30;
      auVar31._8_8_ = lVar25 << 0x30 | auVar33._0_8_ >> 0x10;
      auVar33 = auVar31 >> 0x30;
      break;
    case 0xfffffff7:
      auVar32._0_8_ = auVar33._0_8_ << 0x38;
      auVar32._8_8_ = lVar25 << 0x38 | auVar33._0_8_ >> 8;
      auVar33 = auVar32 >> 0x38;
      break;
    case 0xfffffff8:
      auVar33._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar33._0_8_ << 8;
      auVar33 = (auVar4 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar33._0_8_ << 0x10;
      auVar33 = (auVar5 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar33._0_8_ << 0x18;
      auVar33 = (auVar6 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar33._0_8_ << 0x20;
      auVar33 = (auVar7 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar33._0_8_ << 0x28;
      auVar33 = (auVar8 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar33._0_8_ << 0x30;
      auVar33 = (auVar9 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar33._0_8_ << 0x38;
      auVar33 = (auVar10 << 0x40) >> 0x78;
    }
    if (uVar21 == 0 || (ulonglong)uVar2 < 0x10 - uVar21) goto LAB_1800d03a9;
  }
  auVar34 = pauVar20[1];
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  lVar25 = auVar34._8_8_;
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[0xb] = -(auVar34[0xb] == '\0');
  auVar23[0xc] = -(auVar34[0xc] == '\0');
  auVar23[0xd] = -(auVar34[0xd] == '\0');
  auVar23[0xe] = -(auVar34[0xe] == '\0');
  auVar23[0xf] = -(auVar34[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 - uVar21) + 0x10 < 0x11) {
      uVar21 = auVar34._0_8_;
      switch(-uVar2) {
      case 0:
        auVar34 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar34._0_8_ = uVar21 << 8;
        auVar34._8_8_ = lVar25 << 8 | uVar21 >> 0x38;
        break;
      case 0xfffffff2:
        auVar34._0_8_ = uVar21 << 0x10;
        auVar34._8_8_ = lVar25 << 0x10 | uVar21 >> 0x30;
        break;
      case 0xfffffff3:
        auVar34._0_8_ = uVar21 << 0x18;
        auVar34._8_8_ = lVar25 << 0x18 | uVar21 >> 0x28;
        break;
      case 0xfffffff4:
        auVar34._0_8_ = uVar21 << 0x20;
        auVar34._8_8_ = lVar25 << 0x20 | uVar21 >> 0x20;
        break;
      case 0xfffffff5:
        auVar34._0_8_ = uVar21 << 0x28;
        auVar34._8_8_ = lVar25 << 0x28 | uVar21 >> 0x18;
        break;
      case 0xfffffff6:
        auVar34._0_8_ = uVar21 << 0x30;
        auVar34._8_8_ = lVar25 << 0x30 | uVar21 >> 0x10;
        break;
      case 0xfffffff7:
        auVar34._0_8_ = uVar21 << 0x38;
        auVar34._8_8_ = lVar25 << 0x38 | uVar21 >> 8;
        break;
      case 0xfffffff8:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar21;
        auVar34 = auVar11 << 0x40;
        break;
      case 0xfffffff9:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar21 << 8;
        auVar34 = auVar12 << 0x40;
        break;
      case 0xfffffffa:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar21 << 0x10;
        auVar34 = auVar13 << 0x40;
        break;
      case 0xfffffffb:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar21 << 0x18;
        auVar34 = auVar14 << 0x40;
        break;
      case 0xfffffffc:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar21 << 0x20;
        auVar34 = auVar15 << 0x40;
        break;
      case 0xfffffffd:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar21 << 0x28;
        auVar34 = auVar16 << 0x40;
        break;
      case 0xfffffffe:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar21 << 0x30;
        auVar34 = auVar17 << 0x40;
        break;
      case 0xffffffff:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar21 << 0x38;
        auVar34 = auVar18 << 0x40;
      }
      auVar33 = auVar33 | auVar34;
LAB_1800d03a9:
      bVar1 = *param_1;
      while( true ) {
        if (bVar1 == 0) {
          return (byte *)0x0;
        }
        auVar24[0] = -(bVar1 == auVar33[0]);
        auVar24[1] = -(bVar1 == auVar33[1]);
        auVar24[2] = -(bVar1 == auVar33[2]);
        auVar24[3] = -(bVar1 == auVar33[3]);
        auVar24[4] = -(bVar1 == auVar33[4]);
        auVar24[5] = -(bVar1 == auVar33[5]);
        auVar24[6] = -(bVar1 == auVar33[6]);
        auVar24[7] = -(bVar1 == auVar33[7]);
        auVar24[8] = -(bVar1 == auVar33[8]);
        auVar24[9] = -(bVar1 == auVar33[9]);
        auVar24[10] = -(bVar1 == auVar33[10]);
        auVar24[0xb] = -(bVar1 == auVar33[0xb]);
        auVar24[0xc] = -(bVar1 == auVar33[0xc]);
        auVar24[0xd] = -(bVar1 == auVar33[0xd]);
        auVar24[0xe] = -(bVar1 == auVar33[0xe]);
        auVar24[0xf] = -(bVar1 == auVar33[0xf]);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        bVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
  pbVar19 = FUN_1800d0060(param_1,param_2);
  return pbVar19;
}


void FUN_1800d04b8(uchar *param_1,uchar *param_2)

{
  _mbsdec_l(param_1,param_2,(_locale_t)0x0);
  return;
}


// Library Function - Single Match
//  _mbsdec_l
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uchar * __cdecl _mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  __acrt_ptd *p_Var1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;

  if ((_Start == (uchar *)0x0) || (_Pos == (uchar *)0x0)) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
  }
  else if (_Start < _Pos) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = _Pos + (-1 - (ulonglong)((int)_Pos - (int)pbVar2 & 1));
    }
    if (local_10 != '\0') {
      *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    }
    return pbVar2;
  }
  return (uchar *)0x0;
}


uint FUN_1800d0560(void)

{
  undefined8 uVar1;

  uVar1 = __acrt_initialize_multibyte();
  return (uint)uVar1 & 0xff ^ 1;
}


// Library Function - Single Match
//  _msize_base
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8 _msize_base(longlong param_1)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;

  if (param_1 == 0) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
    return 0xffffffffffffffff;
  }
                    // WARNING: Could not recover jumptable at 0x0001800d05b2. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = HeapSize(DAT_180116728,0,param_1);
  return uVar2;
}


// Library Function - Single Match
//  _realloc_base
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  undefined7 extraout_var;

  if (param_1 == (LPVOID)0x0) {
    pvVar3 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_1800c3030(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar3 = HeapReAlloc(DAT_180116728,0,param_1,param_2);
          if (pvVar3 != (LPVOID)0x0) {
            return pvVar3;
          }
          iVar2 = FUN_1800cdf00();
        } while ((iVar2 != 0) &&
                (bVar1 = FUN_1800c06e0(param_2), (int)CONCAT71(extraout_var,bVar1) != 0));
      }
      p_Var4 = FUN_1800c2350();
      *(undefined4 *)p_Var4 = 0xc;
    }
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}


WCHAR FUN_1800d064c(WCHAR param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  byte bVar2;
  WCHAR local_res8 [4];
  WCHAR local_res18 [8];
  longlong local_28;
  longlong local_20;
  char local_10;

  if (param_1 == L'\xffff') {
    return L'\xffff';
  }
  local_res8[0] = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
  bVar2 = (byte)local_res8[0];
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if (0x7f < (ushort)local_res8[0]) {
LAB_1800d06ee:
      local_res18[0] = L'\0';
      iVar1 = __acrt_LCMapStringW(*(ushort **)(local_20 + 0x138),0x100,
                                  (undefined1 (*) [32])local_res8,1,local_res18,1);
      if (iVar1 != 0) {
        local_res8[0] = local_res18[0];
      }
      goto LAB_1800d0728;
    }
    if (((&DAT_1800f7c32)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_1800d0728;
    }
  }
  else {
    if (0xff < (ushort)local_res8[0]) {
      if (*(longlong *)(local_20 + 0x138) == 0) goto LAB_1800d0728;
      goto LAB_1800d06ee;
    }
    if (((&DAT_1800f7c32)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_1800d0728;
    }
  }
  local_res8[0] = (WCHAR)*(byte *)(*(longlong *)(local_20 + 0x110) + (ulonglong)bVar2);
LAB_1800d0728:
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return local_res8[0];
}


undefined8 FUN_1800d0748(undefined4 *param_1)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;

  if (param_1 == (undefined4 *)0x0) {
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_18011674c;
    uVar2 = 0;
  }
  return uVar2;
}


undefined8 FUN_1800d0778(uint param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;

  lVar6 = (longlong)(int)param_1 >> 6;
  uVar4 = (ulonglong)(param_1 & 0x3f);
  lVar3 = (&DAT_180115f70)[lVar6];
  bVar1 = *(byte *)(lVar3 + 0x38 + uVar4 * 0x48);
  cVar2 = *(char *)(lVar3 + 0x39 + uVar4 * 0x48);
  if (param_2 == 0x4000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_180115f70)[lVar6] + 0x39 + uVar4 * 0x48) = 0;
  }
  else if (param_2 == 0x8000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 & 0x7f;
  }
  else if ((param_2 - 0x10000U & 0xfffeffff) == 0) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_180115f70)[lVar6] + 0x39 + uVar4 * 0x48) = 2;
  }
  else if (param_2 == 0x40000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_180115f70)[lVar6] + 0x39 + uVar4 * 0x48) = 1;
  }
  if ((bVar1 & 0x80) == 0) {
    uVar5 = 0x8000;
  }
  else if (cVar2 == '\0') {
    uVar5 = 0x4000;
  }
  else {
    uVar5 = 0x10000;
    if (cVar2 == '\x01') {
      uVar5 = 0x40000;
    }
  }
  return uVar5;
}


undefined4 FUN_1800d085c(uint param_1,LARGE_INTEGER param_2)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1800d08f4(param_1,param_2,local_48);
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


undefined4 FUN_1800d08f4(uint param_1,LARGE_INTEGER param_2,longlong *param_3)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  LARGE_INTEGER LVar4;
  longlong lVar5;
  WCHAR *pWVar6;
  undefined8 uVar7;
  HANDLE hFile;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;

  LVar4.QuadPart = FUN_1800c9bc0(param_1,(LARGE_INTEGER)0x0,1);
  lVar5 = FUN_1800c9bc0(param_1,(LARGE_INTEGER)0x0,2);
  lVar8 = param_2.QuadPart - lVar5;
  if ((LVar4.QuadPart == -1) || (lVar5 == -1)) {
    if ((char)param_3[6] == '\0') {
      uVar9 = 0x16;
      goto LAB_1800d0a53;
    }
  }
  else {
    uVar9 = 0;
    if (0 < lVar8) {
      pWVar6 = _calloc_base(0x1000,1);
      if (pWVar6 == (WCHAR *)0x0) {
        uVar9 = 0xc;
        *(undefined1 *)(param_3 + 6) = 1;
        *(undefined4 *)((longlong)param_3 + 0x2c) = 0xc;
      }
      else {
        uVar7 = FUN_1800d0778(param_1,0x8000);
        do {
          uVar10 = (uint)lVar8;
          if (0xfff < lVar8) {
            uVar10 = 0x1000;
          }
          iVar1 = FUN_1800c5a38(param_1,pWVar6,uVar10,param_3);
          if (iVar1 == -1) {
            if (((char)param_3[7] != '\0') && (*(int *)((longlong)param_3 + 0x34) == 5)) {
              *(undefined1 *)(param_3 + 6) = 1;
              *(undefined4 *)((longlong)param_3 + 0x2c) = 0xd;
            }
            if ((char)param_3[6] != '\0') {
              uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
            }
            goto LAB_1800d09e5;
          }
          lVar8 = lVar8 - iVar1;
        } while (0 < lVar8);
        FUN_1800d0778(param_1,(int)uVar7);
      }
LAB_1800d09e5:
      FUN_1800c3030(pWVar6);
      goto LAB_1800d0a53;
    }
    if (-1 < lVar8) goto LAB_1800d0a53;
    lVar5 = FUN_1800c9bc0(param_1,param_2,0);
    if (lVar5 != -1) {
      hFile = (HANDLE)FUN_1800cf968(param_1);
      BVar2 = SetEndOfFile(hFile);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        *(undefined1 *)(param_3 + 7) = 1;
        uVar9 = 0xd;
        *(DWORD *)((longlong)param_3 + 0x34) = DVar3;
        *(undefined1 *)(param_3 + 6) = 1;
        *(undefined4 *)((longlong)param_3 + 0x2c) = 0xd;
      }
      goto LAB_1800d0a53;
    }
    if ((char)param_3[6] == '\0') goto LAB_1800d0a53;
  }
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
LAB_1800d0a53:
  FUN_1800c9bc0(param_1,LVar4,0);
  return uVar9;
}


undefined8 FUN_1800d0a90(uint *param_1,uint param_2,uint param_3)

{
  __acrt_ptd *p_Var1;
  uint uVar2;

  uVar2 = param_3 & 0xfff7ffff;
  if ((param_2 & uVar2 & 0xfcf0fce0) != 0) {
    if (param_1 != (uint *)0x0) {
      uVar2 = thunk_FUN_1800d1420(0,0);
      *param_1 = uVar2;
    }
    p_Var1 = FUN_1800c2350();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1800c2ac4();
    return 0x16;
  }
  if (param_1 == (uint *)0x0) {
    thunk_FUN_1800d1420(param_2,uVar2);
    return 0;
  }
  uVar2 = thunk_FUN_1800d1420(param_2,uVar2);
  *param_1 = uVar2;
  return 0;
}


undefined8 FUN_1800d0b00(uint *param_1)

{
  uint uVar1;

  uVar1 = FUN_1800cfaa0();
  *param_1 = uVar1;
  uVar1 = FUN_1800cfb90();
  param_1[1] = uVar1;
  return 0;
}


bool FUN_1800d0b20(uint *param_1)

{
  undefined8 uVar1;
  uint local_res8 [2];

  FUN_1800cfbf0(*param_1);
  FUN_1800cfd20(param_1[1]);
  local_res8[0] = 0;
  local_res8[1] = 0;
  uVar1 = FUN_1800d0b00(local_res8);
  if (((int)uVar1 == 0) && (*param_1 == local_res8[0])) {
    return param_1[1] != local_res8[1];
  }
  return true;
}


undefined8 FUN_1800d0b90(ulonglong *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  ulonglong local_res10 [3];

  local_res10[0] = 0;
  uVar3 = FUN_1800d0b00((uint *)local_res10);
  uVar1 = local_res10[0];
  if ((int)uVar3 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    bVar2 = FUN_1800d0b20((uint *)local_res10);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      FUN_1800d13a0();
      return 0;
    }
  }
  return 1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

double FUN_1800d0bf0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 in_ZMM0 [64];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;

  dVar3 = in_ZMM0._0_8_;
  auVar4 = in_ZMM0._0_16_;
  if (DAT_1801163a0 == 0) {
    if ((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY) {
      if (dVar3 == INFINITY) {
        return INFINITY;
      }
      if (dVar3 != -INFINITY) {
        return (double)((ulonglong)dVar3 | 0x8000000000000);
      }
    }
    else {
      dVar12 = (double)(int)(((ulonglong)dVar3 >> 0x34) - 0x3ff);
      if (0.0 < dVar3) {
        dVar6 = (double)((ulonglong)dVar3 & (ulonglong)DAT_180100660);
        dVar5 = dVar3;
        if (dVar12 == -1023.0) {
          dVar12 = (double)((ulonglong)dVar6 | DAT_1801006f0) - 1.0;
          dVar5 = (double)((ulonglong)dVar12 & (ulonglong)DAT_180100660);
          dVar12 = (double)(int)((uint)((ulonglong)dVar12 >> 0x34) - 0x7fd);
          dVar6 = dVar5;
        }
        uVar1 = ((ulonglong)dVar5 & 0xff00000000000) + ((ulonglong)dVar5 & 0x80000000000) * 2;
        if (ABS(dVar3 - 1.0) < 0.0625) {
          dVar3 = dVar3 - 1.0;
          dVar12 = dVar3 / (dVar3 + 2.0);
          dVar5 = dVar12 + dVar12;
          dVar6 = dVar5 * dVar5;
          dVar7 = dVar6 * dVar5;
          dVar8 = (double)((ulonglong)dVar3 & (ulonglong)DAT_180100830);
          dVar3 = (((dVar6 * 0.012500000003771751 + 0.08333333333333179) * dVar7 +
                   (dVar6 * 0.0004348877777076146 + 0.0022321399879194482) * dVar7 * dVar7 * dVar5)
                  - dVar3 * dVar12) + (dVar3 - dVar8);
          return dVar8 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
                 dVar3 * 0.4342937469482422 + dVar8 * 0.4342937469482422;
        }
        uVar2 = uVar1 >> 0x2c;
        dVar5 = ((double)(uVar1 | DAT_180100700) - (double)((ulonglong)dVar6 | DAT_180100700)) *
                *(double *)(&DAT_1800f8260 + uVar2 * 8);
        dVar3 = dVar5 * dVar5;
        return *(double *)(&DAT_180100860 + uVar2 * 8) + dVar12 * 0.3010299950838089 +
               *(double *)(&DAT_180101070 + uVar2 * 8) +
               (dVar12 * 5.801722962879576e-10 -
               ((dVar5 * 0.3333333333333333 + 0.5) * dVar3 + dVar5 +
               ((dVar5 * 0.16666666666666666 + 0.2) * dVar5 + 0.25) * dVar3 * dVar3) *
               0.4342944819032518);
      }
      if (dVar3 == 0.0) {
        dVar3 = (double)FUN_1800ca260(dVar3,0xfff0000000000000,1);
        return dVar3;
      }
    }
    dVar3 = (double)FUN_1800ca260(dVar3,0xfff8000000000000,2);
                    // WARNING: Read-only address (ram,0x000180100610) is written
                    // WARNING: Read-only address (ram,0x000180100640) is written
                    // WARNING: Read-only address (ram,0x000180100660) is written
                    // WARNING: Read-only address (ram,0x000180100670) is written
                    // WARNING: Read-only address (ram,0x000180100680) is written
                    // WARNING: Read-only address (ram,0x0001801006f0) is written
                    // WARNING: Read-only address (ram,0x000180100700) is written
                    // WARNING: Read-only address (ram,0x000180100790) is written
                    // WARNING: Read-only address (ram,0x0001801007e0) is written
                    // WARNING: Read-only address (ram,0x000180100830) is written
    return dVar3;
  }
  auVar9 = vpsrlq_avx(auVar4,0x34);
  auVar9 = vpsubq_avx(auVar9,_DAT_180100640);
  auVar9 = vcvtdq2pd_avx(auVar9);
  dVar12 = auVar9._0_8_;
  auVar9 = vpand_avx(auVar4,_DAT_180100610);
  if (auVar9._0_8_ == INFINITY) {
    if (dVar3 != INFINITY) {
      if (dVar3 == -INFINITY) goto LAB_1800d1140;
      dVar3 = (double)FUN_1800ca260(dVar3,(ulonglong)dVar3 | 0x8000000000000,3);
    }
    return dVar3;
  }
  if (0.0 < dVar3) {
    auVar9 = vpand_avx(auVar4,_DAT_180100660);
    if (dVar12 == -1023.0) {
      auVar4 = vpor_avx(auVar9,_DAT_1801006f0);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar4._0_8_ - 1.0;
      auVar11 = vpsrlq_avx(auVar9,0x34);
      auVar4 = vpand_avx(auVar9,_DAT_180100660);
      auVar9 = vpsubd_avx(auVar11,_DAT_180100790);
      auVar9 = vcvtdq2pd_avx(auVar9);
      dVar12 = auVar9._0_8_;
      auVar9 = auVar4;
    }
    auVar11 = vpand_avx(auVar4,_DAT_180100670);
    auVar10 = vpand_avx(auVar4,_DAT_180100680);
    auVar10 = vpsllq_avx(auVar10,1);
    auVar11 = vpaddq_avx(auVar10,auVar11);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar3 - 1.0;
    auVar10 = vpand_avx(auVar10,_DAT_1801007e0);
    if (auVar10._0_8_ < 0.0625) {
      dVar6 = auVar4._0_8_ - 1.0;
      dVar7 = dVar6 / (dVar6 + 2.0);
      dVar3 = dVar7 + dVar7;
      dVar12 = dVar3 * dVar3;
      dVar5 = dVar12 * dVar3;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar6;
      auVar4 = vpand_avx(auVar4,_DAT_180100830);
      dVar8 = auVar4._0_8_;
      dVar3 = (((dVar12 * 0.012500000003771751 + 0.08333333333333179) * dVar5 +
               (dVar12 * 0.0004348877777076146 + 0.0022321399879194482) * dVar5 * dVar5 * dVar3) -
              dVar6 * dVar7) + (dVar6 - dVar8);
      return dVar8 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
             dVar3 * 0.4342937469482422 + dVar8 * 0.4342937469482422;
    }
    uVar1 = auVar11._0_8_ >> 0x2c;
    auVar4 = vpor_avx(auVar9,_DAT_180100700);
    auVar9 = vpor_avx(auVar11,_DAT_180100700);
    dVar3 = (auVar9._0_8_ - auVar4._0_8_) * *(double *)(&DAT_1800f8260 + uVar1 * 8);
    dVar5 = dVar3 * dVar3;
    return dVar12 * 0.3010299950838089 + *(double *)(&DAT_180100860 + uVar1 * 8) +
           *(double *)(&DAT_180101070 + uVar1 * 8) +
           (dVar12 * 5.801722962879576e-10 -
           ((dVar3 * (dVar3 * 0.16666666666666666 + 0.2) + 0.25) * dVar5 * dVar5 +
           (dVar3 * 0.3333333333333333 + 0.5) * dVar5 + dVar3) * 0.4342944819032518);
  }
  if (dVar3 == 0.0) {
    dVar3 = (double)FUN_1800ca260(dVar3,0xfff0000000000000,1);
    return dVar3;
  }
LAB_1800d1140:
  dVar3 = (double)FUN_1800ca260(dVar3,0xfff8000000000000,2);
  return dVar3;
}


// Library Function - Single Match
//  __dcrt_lowio_ensure_console_output_initialized
//
// Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
// Studio 2019 Release

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_180112d70 == (HANDLE)0xfffffffffffffffe) {
    DAT_180112d70 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_180112d70 != (HANDLE)0xffffffffffffffff;
}


void FUN_1800d11f0(void)

{
  if (DAT_180112d70 < (HANDLE)0xfffffffffffffffe) {
    CloseHandle(DAT_180112d70);
  }
  return;
}


// Library Function - Single Match
//  __dcrt_write_console
//
// Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
// Studio 2019 Release

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;

  BVar1 = WriteConsoleW(DAT_180112d70,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_180112d70 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_180112d70);
      }
      DAT_180112d70 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_180112d70,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}


uint FUN_1800d12d0(uint param_1)

{
  uint local_res10 [6];

  local_res10[0] = 0;
  FUN_1800cfda0(local_res10,param_1);
  return local_res10[0] & 0x1f;
}


// Library Function - Single Match
//  __acrt_LCMapStringW
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __acrt_LCMapStringW(ushort *param_1,uint param_2,undefined1 (*param_3) [32],uint param_4,
                        LPWSTR param_5,int param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;

  uVar3 = param_4;
  if (0 < (int)param_4) {
    uVar2 = FUN_1800bd780(param_3,(longlong)(int)param_4);
    uVar1 = (uint)uVar2;
    uVar3 = uVar1 + 1;
    if ((int)param_4 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  FUN_1800c85f4(param_1,param_2,(LPCWSTR)param_3,uVar3,param_5,param_6,0,0,0);
  return;
}


undefined8 FUN_1800d1380(void)

{
  if (DAT_18011674c == 0) {
    DAT_18011674c = 0x4000;
  }
  return 0;
}


uint FUN_1800d13a0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = FUN_1800c7d40();
  if ((uVar1 & 0x3f) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = (uVar1 & 1) << 4;
    uVar2 = uVar3 | 8;
    if ((uVar1 & 4) == 0) {
      uVar2 = uVar3;
    }
    uVar3 = uVar2 | 4;
    if ((uVar1 & 8) == 0) {
      uVar3 = uVar2;
    }
    uVar4 = uVar3 | 2;
    if ((uVar1 & 0x10) == 0) {
      uVar4 = uVar3;
    }
    uVar2 = uVar4 | 1;
    if ((uVar1 & 0x20) == 0) {
      uVar2 = uVar4;
    }
    if ((uVar1 & 2) != 0) {
      return uVar2 | 0x80000;
    }
  }
  return uVar2;
}


uint thunk_FUN_1800d1420(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = FUN_1800c7de0();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar3 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar3 = uVar4;
    }
    uVar2 = uVar1 & 0x300;
    if (uVar2 != 0) {
      if (uVar2 == 0x100) {
        uVar3 = uVar3 | 0x2000;
      }
      else if (uVar2 == 0x200) {
        uVar3 = uVar3 | 0x4000;
      }
      else if (uVar2 == 0x300) {
        uVar3 = uVar3 | 0x6000;
      }
    }
    uVar1 = uVar1 & 0x3000000;
    if (uVar1 == 0x1000000) {
      uVar3 = uVar3 | 0x8040;
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = uVar3 | 0x40;
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((DAT_180112d78 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = uVar3 & 0xffffffbf;
      FUN_1800c7df0(uVar3);
    }
    else {
      FUN_1800c7df0(uVar3);
    }
    uVar1 = uVar3 >> 3 & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar3 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar3 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar3 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar3 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar3 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar3 & 0x6000;
    if (uVar1 != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar3 = uVar3 & 0x8040;
    if (uVar3 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar3 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar3 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}


uint FUN_1800d1420(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = FUN_1800c7de0();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar3 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar3 = uVar4;
    }
    uVar2 = uVar1 & 0x300;
    if (uVar2 != 0) {
      if (uVar2 == 0x100) {
        uVar3 = uVar3 | 0x2000;
      }
      else if (uVar2 == 0x200) {
        uVar3 = uVar3 | 0x4000;
      }
      else if (uVar2 == 0x300) {
        uVar3 = uVar3 | 0x6000;
      }
    }
    uVar1 = uVar1 & 0x3000000;
    if (uVar1 == 0x1000000) {
      uVar3 = uVar3 | 0x8040;
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = uVar3 | 0x40;
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((DAT_180112d78 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = uVar3 & 0xffffffbf;
      FUN_1800c7df0(uVar3);
    }
    else {
      FUN_1800c7df0(uVar3);
    }
    uVar1 = uVar3 >> 3 & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar3 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar3 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar3 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar3 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar3 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar3 & 0x6000;
    if (uVar1 != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar3 = uVar3 & 0x8040;
    if (uVar3 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar3 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar3 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}


longlong FUN_1800d16c0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;

  uVar3 = 0;
  lVar2 = *(int *)(param_1 + 0x3c) + param_1;
  lVar1 = (ulonglong)*(ushort *)(lVar2 + 0x14) + 0x18 + lVar2;
  if (*(ushort *)(lVar2 + 6) != 0) {
    do {
      if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVar1 + 8) + *(uint *)(lVar1 + 0xc))) {
        return lVar1;
      }
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar3 < *(ushort *)(lVar2 + 6));
  }
  return 0;
}


ulonglong FUN_1800d1710(longlong param_1)

{
  bool bVar1;
  undefined7 extraout_var;
  ulonglong uVar2;
  longlong lVar3;

  bVar1 = FUN_1800d1760((short *)&IMAGE_DOS_HEADER_180000000);
  uVar2 = CONCAT71(extraout_var,bVar1);
  if ((int)uVar2 != 0) {
    lVar3 = FUN_1800d16c0(0x180000000,param_1 - 0x180000000);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = (ulonglong)(~*(uint *)(lVar3 + 0x24) >> 0x1f);
    }
  }
  return uVar2;
}


bool FUN_1800d1760(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}


undefined8 FUN_1800d1790(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;

  puVar2 = (uint *)param_4[7];
  uVar1 = *puVar2;
  FUN_1800a5580(param_2,(longlong)param_4);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar3 = FUN_1800a7650(param_1,param_2,param_3,param_4);
  return uVar3;
}


undefined8 FUN_1800d1810(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;

  uVar1 = param_4[7];
  FUN_1800a5580(param_2,(longlong)param_4);
  if ((*(uint *)(uVar1 + 4) & ((*(byte *)(param_1 + 1) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar2 = FUN_1800a7090(param_1,param_2,param_3,param_4);
  return uVar2;
}


void FUN_1800d1880(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  PVOID pvVar2;

  uVar1 = FUN_1800a7650(param_1,param_2,param_3,param_4);
  if ((((param_1->ExceptionFlags & 0x66) == 0) && (param_1->ExceptionCode == 0xe06d7363)) &&
     ((int)uVar1 == 1)) {
    pvVar2 = FUN_1800a79f0();
    *(PEXCEPTION_RECORD *)((longlong)pvVar2 + 0x20) = param_1;
    pvVar2 = FUN_1800a79f0();
    *(longlong *)((longlong)pvVar2 + 0x28) = param_3;
                    // WARNING: Subroutine does not return
    FUN_1800c06c0();
  }
  return;
}


undefined1 (*) [16] FUN_1800d18d0(undefined1 (*param_1) [16],byte param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;

  if (param_2 == 0) {
    pcVar3 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar12[0] = -(*pcVar3 == '\0');
    auVar12[1] = -(pcVar3[1] == '\0');
    auVar12[2] = -(pcVar3[2] == '\0');
    auVar12[3] = -(pcVar3[3] == '\0');
    auVar12[4] = -(pcVar3[4] == '\0');
    auVar12[5] = -(pcVar3[5] == '\0');
    auVar12[6] = -(pcVar3[6] == '\0');
    auVar12[7] = -(pcVar3[7] == '\0');
    auVar12[8] = -(pcVar3[8] == '\0');
    auVar12[9] = -(pcVar3[9] == '\0');
    auVar12[10] = -(pcVar3[10] == '\0');
    auVar12[0xb] = -(pcVar3[0xb] == '\0');
    auVar12[0xc] = -(pcVar3[0xc] == '\0');
    auVar12[0xd] = -(pcVar3[0xd] == '\0');
    auVar12[0xe] = -(pcVar3[0xe] == '\0');
    auVar12[0xf] = -(pcVar3[0xf] == '\0');
    uVar4 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar12[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    while (uVar4 == 0) {
      auVar9[0] = -(pcVar3[0x10] == '\0');
      auVar9[1] = -(pcVar3[0x11] == '\0');
      auVar9[2] = -(pcVar3[0x12] == '\0');
      auVar9[3] = -(pcVar3[0x13] == '\0');
      auVar9[4] = -(pcVar3[0x14] == '\0');
      auVar9[5] = -(pcVar3[0x15] == '\0');
      auVar9[6] = -(pcVar3[0x16] == '\0');
      auVar9[7] = -(pcVar3[0x17] == '\0');
      auVar9[8] = -(pcVar3[0x18] == '\0');
      auVar9[9] = -(pcVar3[0x19] == '\0');
      auVar9[10] = -(pcVar3[0x1a] == '\0');
      auVar9[0xb] = -(pcVar3[0x1b] == '\0');
      auVar9[0xc] = -(pcVar3[0x1c] == '\0');
      auVar9[0xd] = -(pcVar3[0x1d] == '\0');
      auVar9[0xe] = -(pcVar3[0x1e] == '\0');
      auVar9[0xf] = -(pcVar3[0x1f] == '\0');
      pcVar3 = pcVar3 + 0x10;
      uVar4 = (uint)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar9[0xf] >> 7) << 0xf);
    }
    uVar6 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    return (undefined1 (*) [16])(pcVar3 + uVar6);
  }
  pauVar5 = (undefined1 (*) [16])0x0;
  if (DAT_180112350 < 2) {
    pcVar3 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    uVar6 = -1 << ((byte)param_1 & 0xf);
    auVar12 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    auVar10[0] = -(*pcVar3 == '\0');
    auVar10[1] = -(pcVar3[1] == '\0');
    auVar10[2] = -(pcVar3[2] == '\0');
    auVar10[3] = -(pcVar3[3] == '\0');
    auVar10[4] = -(pcVar3[4] == '\0');
    auVar10[5] = -(pcVar3[5] == '\0');
    auVar10[6] = -(pcVar3[6] == '\0');
    auVar10[7] = -(pcVar3[7] == '\0');
    auVar10[8] = -(pcVar3[8] == '\0');
    auVar10[9] = -(pcVar3[9] == '\0');
    auVar10[10] = -(pcVar3[10] == '\0');
    auVar10[0xb] = -(pcVar3[0xb] == '\0');
    auVar10[0xc] = -(pcVar3[0xc] == '\0');
    auVar10[0xd] = -(pcVar3[0xd] == '\0');
    auVar10[0xe] = -(pcVar3[0xe] == '\0');
    auVar10[0xf] = -(pcVar3[0xf] == '\0');
    cVar15 = auVar12[0];
    auVar14[0] = -(*pcVar3 == cVar15);
    cVar16 = auVar12[1];
    auVar14[1] = -(pcVar3[1] == cVar16);
    cVar17 = auVar12[2];
    auVar14[2] = -(pcVar3[2] == cVar17);
    cVar18 = auVar12[3];
    auVar14[3] = -(pcVar3[3] == cVar18);
    auVar14[4] = -(pcVar3[4] == cVar15);
    auVar14[5] = -(pcVar3[5] == cVar16);
    auVar14[6] = -(pcVar3[6] == cVar17);
    auVar14[7] = -(pcVar3[7] == cVar18);
    auVar14[8] = -(pcVar3[8] == cVar15);
    auVar14[9] = -(pcVar3[9] == cVar16);
    auVar14[10] = -(pcVar3[10] == cVar17);
    auVar14[0xb] = -(pcVar3[0xb] == cVar18);
    auVar14[0xc] = -(pcVar3[0xc] == cVar15);
    auVar14[0xd] = -(pcVar3[0xd] == cVar16);
    auVar14[0xe] = -(pcVar3[0xe] == cVar17);
    auVar14[0xf] = -(pcVar3[0xf] == cVar18);
    uVar4 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar14[0xf] >> 7) << 0xf) & uVar6;
    uVar6 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
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
                    (ushort)(auVar10[0xf] >> 7) << 0xf) & uVar6;
    while (uVar6 == 0) {
      uVar1 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      auVar13[0] = -(pcVar3[0x10] == '\0');
      auVar13[1] = -(pcVar3[0x11] == '\0');
      auVar13[2] = -(pcVar3[0x12] == '\0');
      auVar13[3] = -(pcVar3[0x13] == '\0');
      auVar13[4] = -(pcVar3[0x14] == '\0');
      auVar13[5] = -(pcVar3[0x15] == '\0');
      auVar13[6] = -(pcVar3[0x16] == '\0');
      auVar13[7] = -(pcVar3[0x17] == '\0');
      auVar13[8] = -(pcVar3[0x18] == '\0');
      auVar13[9] = -(pcVar3[0x19] == '\0');
      auVar13[10] = -(pcVar3[0x1a] == '\0');
      auVar13[0xb] = -(pcVar3[0x1b] == '\0');
      auVar13[0xc] = -(pcVar3[0x1c] == '\0');
      auVar13[0xd] = -(pcVar3[0x1d] == '\0');
      auVar13[0xe] = -(pcVar3[0x1e] == '\0');
      auVar13[0xf] = -(pcVar3[0x1f] == '\0');
      uVar6 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(auVar13[0xf] >> 7) << 0xf);
      bVar8 = uVar4 != 0;
      auVar11[0] = -(pcVar3[0x10] == cVar15);
      auVar11[1] = -(pcVar3[0x11] == cVar16);
      auVar11[2] = -(pcVar3[0x12] == cVar17);
      auVar11[3] = -(pcVar3[0x13] == cVar18);
      auVar11[4] = -(pcVar3[0x14] == cVar15);
      auVar11[5] = -(pcVar3[0x15] == cVar16);
      auVar11[6] = -(pcVar3[0x16] == cVar17);
      auVar11[7] = -(pcVar3[0x17] == cVar18);
      auVar11[8] = -(pcVar3[0x18] == cVar15);
      auVar11[9] = -(pcVar3[0x19] == cVar16);
      auVar11[10] = -(pcVar3[0x1a] == cVar17);
      auVar11[0xb] = -(pcVar3[0x1b] == cVar18);
      auVar11[0xc] = -(pcVar3[0x1c] == cVar15);
      auVar11[0xd] = -(pcVar3[0x1d] == cVar16);
      auVar11[0xe] = -(pcVar3[0x1e] == cVar17);
      auVar11[0xf] = -(pcVar3[0x1f] == cVar18);
      uVar4 = (uint)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(auVar11[0xf] >> 7) << 0xf);
      if (bVar8) {
        pauVar5 = (undefined1 (*) [16])(pcVar3 + uVar1);
      }
      pcVar3 = pcVar3 + 0x10;
    }
    uVar4 = (-uVar6 & uVar6) - 1 & uVar4;
    uVar6 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    if (uVar4 != 0) {
      pauVar5 = (undefined1 (*) [16])(pcVar3 + uVar6);
    }
  }
  else {
    for (; bVar8 = ((ulonglong)param_1 & 0xf) == 0, !bVar8;
        param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
      if ((*param_1)[0] == param_2) {
        pauVar5 = param_1;
      }
      if ((*param_1)[0] == 0) {
        return pauVar5;
      }
    }
    bVar7 = false;
    while( true ) {
      iVar2 = pcmpistri(ZEXT116(param_2),*param_1,0x40);
      if (bVar7) {
        pauVar5 = (undefined1 (*) [16])(*param_1 + iVar2);
        bVar8 = pauVar5 == (undefined1 (*) [16])0x0;
        pcmpistri(ZEXT116(param_2),*param_1,0x40);
      }
      if (bVar8) break;
      bVar7 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar8 = param_1 == (undefined1 (*) [16])0x0;
    }
  }
  return pauVar5;
}


// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;

                    // WARNING: Could not recover jumptable at 0x0001800d1a20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// WARNING: This is an inlined function
// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void _guard_dispatch_icall(void)

{
  code *in_RAX;

  (*in_RAX)();
  return;
}


// WARNING: This is an inlined function
// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void _guard_dispatch_icall(void)

{
  code *in_RAX;

  (*in_RAX)();
  return;
}


char * FUN_1800d1a80(char *param_1,byte param_2,char *param_3)

{
  ushort uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];

  iVar5 = (uint)param_2 * 0x1010101;
  pcVar2 = (char *)0x0;
  cVar4 = (char)iVar5;
  pcVar3 = param_1;
  if ((char *)0x1f < param_3) {
    if (((ulonglong)param_1 & 0xf) != 0) {
      pcVar2 = (char *)((ulonglong)((uint)param_1 & 0xf) - 0x10);
      param_3 = param_3 + (longlong)pcVar2;
      param_1 = param_1 + -(longlong)pcVar2;
      do {
        pcVar3 = param_1;
        if (cVar4 == param_1[(longlong)pcVar2]) goto LAB_1800d1b0c;
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 != (char *)0x0);
      if (param_3 < (char *)0x20) goto joined_r0x0001800d1afc;
    }
    do {
      auVar9[0] = -(*param_1 == cVar4);
      cVar6 = (char)((uint)iVar5 >> 8);
      auVar9[1] = -(param_1[1] == cVar6);
      cVar7 = (char)((uint)iVar5 >> 0x10);
      auVar9[2] = -(param_1[2] == cVar7);
      cVar8 = (char)((uint)iVar5 >> 0x18);
      auVar9[3] = -(param_1[3] == cVar8);
      auVar9[4] = -(param_1[4] == cVar4);
      auVar9[5] = -(param_1[5] == cVar6);
      auVar9[6] = -(param_1[6] == cVar7);
      auVar9[7] = -(param_1[7] == cVar8);
      auVar9[8] = -(param_1[8] == cVar4);
      auVar9[9] = -(param_1[9] == cVar6);
      auVar9[10] = -(param_1[10] == cVar7);
      auVar9[0xb] = -(param_1[0xb] == cVar8);
      auVar9[0xc] = -(param_1[0xc] == cVar4);
      auVar9[0xd] = -(param_1[0xd] == cVar6);
      auVar9[0xe] = -(param_1[0xe] == cVar7);
      auVar9[0xf] = -(param_1[0xf] == cVar8);
      uVar1 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf;
      pcVar2 = (char *)0x0;
      if (uVar1 != 0) {
        for (; (uVar1 >> (longlong)pcVar2 & 1) == 0; pcVar2 = pcVar2 + 1) {
        }
      }
      pcVar3 = param_1;
      if (uVar1 != 0) goto LAB_1800d1b0c;
      pcVar3 = param_1 + 0x10;
      auVar10[0] = -(param_1[0x10] == cVar4);
      auVar10[1] = -(param_1[0x11] == cVar6);
      auVar10[2] = -(param_1[0x12] == cVar7);
      auVar10[3] = -(param_1[0x13] == cVar8);
      auVar10[4] = -(param_1[0x14] == cVar4);
      auVar10[5] = -(param_1[0x15] == cVar6);
      auVar10[6] = -(param_1[0x16] == cVar7);
      auVar10[7] = -(param_1[0x17] == cVar8);
      auVar10[8] = -(param_1[0x18] == cVar4);
      auVar10[9] = -(param_1[0x19] == cVar6);
      auVar10[10] = -(param_1[0x1a] == cVar7);
      auVar10[0xb] = -(param_1[0x1b] == cVar8);
      auVar10[0xc] = -(param_1[0x1c] == cVar4);
      auVar10[0xd] = -(param_1[0x1d] == cVar6);
      auVar10[0xe] = -(param_1[0x1e] == cVar7);
      auVar10[0xf] = -(param_1[0x1f] == cVar8);
      uVar1 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf;
      pcVar2 = (char *)0x0;
      if (uVar1 != 0) {
        for (; (uVar1 >> (longlong)pcVar2 & 1) == 0; pcVar2 = pcVar2 + 1) {
        }
      }
      if (uVar1 != 0) goto LAB_1800d1b0c;
      param_1 = param_1 + 0x20;
      param_3 = param_3 + -0x20;
      pcVar3 = param_1;
    } while ((char *)0x1f < param_3);
  }
joined_r0x0001800d1afc:
  while( true ) {
    if (param_3 == (char *)0x0) {
      return pcVar2;
    }
    if (cVar4 == *pcVar3) break;
    param_3 = param_3 + -1;
    pcVar3 = pcVar3 + 1;
  }
LAB_1800d1b0c:
  return pcVar2 + (longlong)pcVar3;
}


// Library Function - Single Match
//  memcmp
//
// Library: Visual Studio

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;

  lVar3 = (longlong)_Buf2 - (longlong)_Buf1;
  if (7 < _Size) {
    for (; ((ulonglong)_Buf1 & 7) != 0; _Buf1 = (void *)((longlong)_Buf1 + 1)) {
      bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
      if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) goto LAB_1800d1b63;
      _Size = _Size - 1;
    }
    if (_Size >> 3 != 0) {
      uVar4 = _Size >> 5;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) goto LAB_1800d1bd4;
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 8);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 8)) {
LAB_1800d1bd0:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_1800d1bd4;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x10);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x10)) {
LAB_1800d1bcc:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_1800d1bd0;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x18);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x18)) {
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_1800d1bcc;
          }
          _Buf1 = (void *)((longlong)_Buf1 + 0x20);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 0x1f;
      }
      uVar4 = _Size >> 3;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) {
LAB_1800d1bd4:
            uVar4 = *(ulonglong *)(lVar3 + (longlong)_Buf1);
            uVar1 = (uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                            (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                            (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                          (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                           (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                           (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38));
            return (1 - uVar1) - (uint)(uVar1 != 0);
          }
          _Buf1 = (void *)((longlong)_Buf1 + 8);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 7;
      }
    }
  }
  while( true ) {
    if (_Size == 0) {
      return 0;
    }
    bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
    if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) break;
    _Buf1 = (void *)((longlong)_Buf1 + 1);
    _Size = _Size - 1;
  }
LAB_1800d1b63:
  return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
}


void FUN_1800d1c10(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


void FUN_1800d1c20(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined1 (*pauVar26) [32];
  undefined1 (*pauVar27) [32];
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;

  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar25;
    uVar12 = puVar25[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar25 = uVar11;
    puVar25[1] = uVar12;
    return;
  }
  puVar25 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar25 = param_1;
  }
  if (param_1 < puVar25) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (longlong)param_2 - (longlong)param_1;
    puVar25 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar25;
    uVar13 = puVar25[1];
    puVar28 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar25 = puVar28;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((ulonglong)puVar28 & 0xf) != 0) {
      puVar25 = (undefined8 *)((ulonglong)puVar28 & 0xfffffffffffffff0);
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
      *puVar28 = uVar12;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (longlong)puVar25 - (longlong)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar25 = uVar32;
      puVar25[1] = uVar33;
      puVar28 = puVar25;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar25 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x20);
        uVar13 = *puVar25;
        uVar32 = puVar25[1];
        puVar25 = puVar28 + -0x10;
        puVar28[-2] = *puVar1;
        puVar28[-1] = uVar12;
        puVar28[-4] = uVar13;
        puVar28[-3] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar28[-6] = *puVar1;
        puVar28[-5] = uVar12;
        puVar28[-8] = uVar13;
        puVar28[-7] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar28[-10] = *puVar1;
        puVar28[-9] = uVar12;
        puVar28[-0xc] = uVar13;
        puVar28[-0xb] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
        uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar28[-0xe] = uVar12;
        puVar28[-0xd] = uVar13;
        *puVar25 = uVar32;
        puVar28[-0xf] = uVar33;
        puVar28 = puVar25;
      }
      puVar28[-0xe] = uVar12;
      puVar28[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar25 = uVar32;
      puVar25[1] = uVar33;
      puVar25 = puVar25 + -2;
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    return;
  }
  if (DAT_180112350 < 3) {
    if ((param_3 < 0x801) || (((byte)DAT_180115cac & 2) == 0)) {
      if (0x80 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
        puVar25 = (undefined8 *)((longlong)param_1 - lVar30);
        puVar28 = (undefined8 *)((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x80 < param_3) {
          do {
            uVar10 = puVar28[1];
            uVar11 = puVar28[2];
            uVar12 = puVar28[3];
            uVar13 = puVar28[4];
            uVar32 = puVar28[5];
            uVar33 = puVar28[6];
            uVar14 = puVar28[7];
            *puVar25 = *puVar28;
            puVar25[1] = uVar10;
            puVar25[2] = uVar11;
            puVar25[3] = uVar12;
            puVar25[4] = uVar13;
            puVar25[5] = uVar32;
            puVar25[6] = uVar33;
            puVar25[7] = uVar14;
            uVar10 = puVar28[9];
            uVar11 = puVar28[10];
            uVar12 = puVar28[0xb];
            uVar13 = puVar28[0xc];
            uVar32 = puVar28[0xd];
            uVar33 = puVar28[0xe];
            uVar14 = puVar28[0xf];
            puVar25[8] = puVar28[8];
            puVar25[9] = uVar10;
            puVar25[10] = uVar11;
            puVar25[0xb] = uVar12;
            puVar25[0xc] = uVar13;
            puVar25[0xd] = uVar32;
            puVar25[0xe] = uVar33;
            puVar25[0xf] = uVar14;
            puVar25 = puVar25 + 0x10;
            puVar28 = puVar28 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    // WARNING: Could not recover jumptable at 0x0001800d2146. Too many branches
                    // WARNING: Treating indirect jump as call
      (*(code *)((ulonglong)*(uint *)(&DAT_180101a88 + (param_3 + 0xf >> 4) * 4) + 0x180000000))();
      return;
    }
FUN_1800d1c10:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  if ((0x2000 < param_3) && (param_3 < 0x180001)) {
    puVar25 = param_1 + 8;
    if (param_2 < param_1) {
      puVar25 = param_2;
    }
    if ((puVar25 <= param_2) && (((byte)DAT_180115cac & 2) != 0)) goto FUN_1800d1c10;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
  uVar32 = *puVar25;
  uVar33 = puVar25[1];
  uVar14 = puVar25[2];
  uVar15 = puVar25[3];
  if (0x100 < param_3) {
    lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
    pauVar26 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar27 = pauVar26;
          pauVar24 = pauVar23;
          auVar3 = pauVar27[1];
          auVar4 = pauVar27[2];
          auVar5 = pauVar27[3];
          auVar6 = vmovntdq_avx(*pauVar27);
          *pauVar24 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[3] = auVar3;
          auVar3 = pauVar27[5];
          auVar4 = pauVar27[6];
          auVar5 = pauVar27[7];
          auVar6 = vmovntdq_avx(pauVar27[4]);
          pauVar24[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[7] = auVar3;
          pauVar23 = pauVar24 + 8;
          pauVar26 = pauVar27 + 8;
          param_3 = uVar29 - 0x100;
        } while (0xff < uVar29 - 0x100);
        uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar29) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar27 + uVar31));
          *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[1] + uVar31));
          *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[2] + uVar31));
          *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[3] + uVar31));
          *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[4] + uVar31));
          *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[5] + uVar31));
          *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[6] + uVar31));
          *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
        default:
          puVar25 = (undefined8 *)(pauVar24[-1] + uVar29);
          *puVar25 = uVar32;
          puVar25[1] = uVar33;
          puVar25[2] = uVar14;
          puVar25[3] = uVar15;
        case 0x100:
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          return;
        }
      }
      do {
        uVar10 = *(undefined8 *)(*pauVar26 + 8);
        uVar11 = *(undefined8 *)(*pauVar26 + 0x10);
        uVar12 = *(undefined8 *)(*pauVar26 + 0x18);
        uVar13 = *(undefined8 *)pauVar26[1];
        uVar32 = *(undefined8 *)(pauVar26[1] + 8);
        uVar33 = *(undefined8 *)(pauVar26[1] + 0x10);
        uVar14 = *(undefined8 *)(pauVar26[1] + 0x18);
        uVar15 = *(undefined8 *)pauVar26[2];
        uVar16 = *(undefined8 *)(pauVar26[2] + 8);
        uVar17 = *(undefined8 *)(pauVar26[2] + 0x10);
        uVar18 = *(undefined8 *)(pauVar26[2] + 0x18);
        uVar19 = *(undefined8 *)pauVar26[3];
        uVar20 = *(undefined8 *)(pauVar26[3] + 8);
        uVar21 = *(undefined8 *)(pauVar26[3] + 0x10);
        uVar22 = *(undefined8 *)(pauVar26[3] + 0x18);
        *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar26;
        *(undefined8 *)(*pauVar23 + 8) = uVar10;
        *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
        *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
        *(undefined8 *)pauVar23[1] = uVar13;
        *(undefined8 *)(pauVar23[1] + 8) = uVar32;
        *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[2] = uVar15;
        *(undefined8 *)(pauVar23[2] + 8) = uVar16;
        *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[3] = uVar19;
        *(undefined8 *)(pauVar23[3] + 8) = uVar20;
        *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
        uVar10 = *(undefined8 *)(pauVar26[4] + 8);
        uVar11 = *(undefined8 *)(pauVar26[4] + 0x10);
        uVar12 = *(undefined8 *)(pauVar26[4] + 0x18);
        uVar13 = *(undefined8 *)pauVar26[5];
        uVar32 = *(undefined8 *)(pauVar26[5] + 8);
        uVar33 = *(undefined8 *)(pauVar26[5] + 0x10);
        uVar14 = *(undefined8 *)(pauVar26[5] + 0x18);
        uVar15 = *(undefined8 *)pauVar26[6];
        uVar16 = *(undefined8 *)(pauVar26[6] + 8);
        uVar17 = *(undefined8 *)(pauVar26[6] + 0x10);
        uVar18 = *(undefined8 *)(pauVar26[6] + 0x18);
        uVar19 = *(undefined8 *)pauVar26[7];
        uVar20 = *(undefined8 *)(pauVar26[7] + 8);
        uVar21 = *(undefined8 *)(pauVar26[7] + 0x10);
        uVar22 = *(undefined8 *)(pauVar26[7] + 0x18);
        *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar26[4];
        *(undefined8 *)(pauVar23[4] + 8) = uVar10;
        *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
        *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
        *(undefined8 *)pauVar23[5] = uVar13;
        *(undefined8 *)(pauVar23[5] + 8) = uVar32;
        *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[6] = uVar15;
        *(undefined8 *)(pauVar23[6] + 8) = uVar16;
        *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[7] = uVar19;
        *(undefined8 *)(pauVar23[7] + 8) = uVar20;
        *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
        pauVar23 = pauVar23 + 8;
        pauVar26 = pauVar26 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001800d1ea2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((ulonglong)*(uint *)(&DAT_180101a40 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
  return;
}


undefined8 FUN_1800d22c0(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}


undefined1 (*) [32] FUN_1800d22d0(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];

  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (undefined1)lVar11;
  uVar9 = (undefined2)lVar11;
  uVar10 = (undefined4)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(undefined1 (*) [16])*param_1 = auVar12;
    *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  if (DAT_180112350 < 3) {
    if ((param_3 <= DAT_180112358) || (((byte)DAT_180115cac & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      uVar6 = param_3 + lVar11;
      if (0x80 < uVar6) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          uVar6 = uVar6 - 0x80;
        } while (0x7f < uVar6);
      }
                    // WARNING: Could not recover jumptable at 0x0001800d2618. Too many branches
                    // WARNING: Treating indirect jump as call
      pauVar2 = (undefined1 (*) [32])
                (*(code *)((ulonglong)*(uint *)(&DAT_180101b38 + (uVar6 + 0xf >> 4) * 4) +
                          0x180000000))(pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_180112358) || (DAT_180112360 < param_3)) ||
          (((byte)DAT_180115cac & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar7 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar7);
    uVar6 = param_3 + lVar7;
    if (0x100 < uVar6) {
      if (DAT_180112360 < uVar6) {
        do {
          uVar5 = uVar6;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          uVar6 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar6 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(*pauVar3 + uVar6) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[1] + uVar6) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[2] + uVar6) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[3] + uVar6) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[4] + uVar6) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[5] + uVar6) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[6] + uVar6) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        uVar6 = uVar6 - 0x100;
      } while (0xff < uVar6);
    }
                    // WARNING: Could not recover jumptable at 0x0001800d2464. Too many branches
                    // WARNING: Treating indirect jump as call
    pauVar2 = (undefined1 (*) [32])
              (*(code *)((ulonglong)*(uint *)(&DAT_180101af0 + (uVar6 + 0x1f >> 5) * 4) +
                        0x180000000))(lVar11,uVar5 - lVar7);
    return pauVar2;
  }
  pauVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}


// Library Function - Single Match
//  strcmp
//
// Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

int __cdecl strcmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;

  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  while( true ) {
    if (((ulonglong)_Str1 & 7) == 0) {
      while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
             (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
        _Str1 = (char *)((longlong)_Str1 + 8);
        if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bVar1 = (byte)*(ulonglong *)_Str1;
    if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) break;
    _Str1 = (char *)((longlong)_Str1 + 1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
}


// Library Function - Single Match
//  strlen
//
// Library: Visual Studio

size_t __cdecl strlen(char *_Str)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;

  lVar3 = -(longlong)_Str;
  while (((ulonglong)_Str & 7) != 0) {
    uVar1 = *(ulonglong *)_Str;
    _Str = (char *)((longlong)_Str + 1);
    if ((char)uVar1 == '\0') goto LAB_1800d2768;
  }
  do {
    do {
      puVar2 = (ulonglong *)_Str;
      _Str = (char *)(puVar2 + 1);
    } while (((~*puVar2 ^ *puVar2 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVar1 = *puVar2;
    if ((char)uVar1 == '\0') {
      return (longlong)puVar2 + lVar3;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 1);
    }
    if ((char)(uVar1 >> 0x10) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 2);
    }
    if ((char)(uVar1 >> 0x18) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 3);
    }
    if ((char)(uVar1 >> 0x20) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 4);
    }
    if ((char)(uVar1 >> 0x28) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 5);
    }
    if ((char)(uVar1 >> 0x30) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 6);
    }
  } while ((char)(uVar1 >> 0x38) != '\0');
LAB_1800d2768:
  return (size_t)(char *)((longlong)_Str + lVar3 + -1);
}


// Library Function - Single Match
//  strncpy
//
// Library: Visual Studio

char * __cdecl strncpy(char *_Dest,char *_Source,size_t _Count)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong *puVar5;
  size_t sVar6;
  bool bVar7;

  if (_Count != 0) {
    lVar3 = (longlong)_Dest - (longlong)_Source;
    do {
      if (((ulonglong)_Source & 7) == 0) goto LAB_1800d27e8;
      uVar1 = *(ulonglong *)_Source;
      *(char *)((longlong)_Source + lVar3) = (char)uVar1;
      puVar5 = (ulonglong *)_Source;
      sVar6 = _Count;
      if ((char)uVar1 == '\0') goto LAB_1800d28b0;
      _Source = (char *)((longlong)_Source + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
  }
  return _Dest;
LAB_1800d27e8:
  while( true ) {
    uVar1 = *(ulonglong *)_Source;
    if ((_Count < 8 || _Count - 8 == 0) ||
       (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) != 0))
    break;
    *(ulonglong *)((longlong)_Source + lVar3) = uVar1;
    _Source = (char *)((longlong)_Source + 8);
    _Count = _Count - 8;
  }
  if (_Count == 0) {
    return _Dest;
  }
  *(char *)((longlong)_Source + lVar3) = (char)uVar1;
  puVar5 = (ulonglong *)_Source;
  sVar6 = _Count;
  if ((char)uVar1 == '\0') {
LAB_1800d28b0:
    pcVar4 = (char *)(lVar3 + (longlong)puVar5);
    if (0xf < sVar6) {
      while (((ulonglong)pcVar4 & 7) != 0) {
        pcVar4 = pcVar4 + 1;
        *pcVar4 = '\0';
        sVar6 = sVar6 - 1;
      }
      for (; 0x1f < sVar6; sVar6 = sVar6 - 0x20) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
        pcVar4[0x10] = '\0';
        pcVar4[0x11] = '\0';
        pcVar4[0x12] = '\0';
        pcVar4[0x13] = '\0';
        pcVar4[0x14] = '\0';
        pcVar4[0x15] = '\0';
        pcVar4[0x16] = '\0';
        pcVar4[0x17] = '\0';
        pcVar4[0x18] = '\0';
        pcVar4[0x19] = '\0';
        pcVar4[0x1a] = '\0';
        pcVar4[0x1b] = '\0';
        pcVar4[0x1c] = '\0';
        pcVar4[0x1d] = '\0';
        pcVar4[0x1e] = '\0';
        pcVar4[0x1f] = '\0';
        pcVar4 = pcVar4 + 0x20;
      }
      for (; 7 < sVar6; sVar6 = sVar6 - 8) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4 = pcVar4 + 8;
      }
    }
    while (bVar7 = sVar6 != 0, sVar6 = sVar6 - 1, bVar7) {
      *pcVar4 = '\0';
      pcVar4 = pcVar4 + 1;
    }
    return _Dest;
  }
  puVar5 = (ulonglong *)((longlong)_Source + 1);
  sVar6 = _Count - 1;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 8);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_1800d28b0;
  puVar5 = (ulonglong *)((longlong)_Source + 2);
  sVar6 = _Count - 2;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x10);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_1800d28b0;
  puVar5 = (ulonglong *)((longlong)_Source + 3);
  sVar6 = _Count - 3;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x18);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_1800d28b0;
  puVar5 = (ulonglong *)((longlong)_Source + 4);
  sVar6 = _Count - 4;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x20);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_1800d28b0;
  puVar5 = (ulonglong *)((longlong)_Source + 5);
  sVar6 = _Count - 5;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x28);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_1800d28b0;
  puVar5 = (ulonglong *)((longlong)_Source + 6);
  sVar6 = _Count - 6;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x30);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_1800d28b0;
  puVar5 = (ulonglong *)((longlong)_Source + 7);
  sVar6 = _Count - 7;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x38);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_1800d28b0;
  _Source = (char *)((longlong)_Source + 8);
  _Count = _Count - 8;
  if (_Count == 0) {
    return _Dest;
  }
  goto LAB_1800d27e8;
}


// Library Function - Single Match
//  strncmp
//
// Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;

  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    do {
      if (((ulonglong)_Str1 & 7) == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*(ulonglong *)_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
    } while ((_MaxCount != 0) && (bVar1 != 0));
  }
  return 0;
}


void FUN_1800d2d60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_180011650((longlong *)(param_2 + 0x130));
  }
  return;
}


void FUN_1800d2e10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x5c) & 1) != 0) {
    *(uint *)(param_2 + 0x5c) = *(uint *)(param_2 + 0x5c) & 0xfffffffe;
    FUN_180009c50(*(undefined8 **)(param_2 + 0x130));
  }
  return;
}


void FUN_1800d2f10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_180011650(*(longlong **)(param_2 + 0x28));
  }
  return;
}


void FUN_1800d2f80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_180011550(*(longlong **)(param_2 + 0x38));
  }
  return;
}


void FUN_1800d3090(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_180011650(*(longlong **)(param_2 + 0x38));
  }
  return;
}


void FUN_1800d30c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800115e0(*(longlong **)(param_2 + 0x80));
  }
  return;
}


void FUN_1800d5130(undefined8 param_1,longlong param_2)

{
  FUN_1800a4f30(param_2 + 0x50,0x28,0x20a,thunk_FUN_1800115e0);
  return;
}


void FUN_1800d5750(void)

{
  _guard_check_icall();
  return;
}


void FUN_1800d5860(void)

{
  _guard_check_icall();
  return;
}


void FUN_1800d5890(void)

{
  _guard_check_icall();
  return;
}


void FUN_1800d58d0(void)

{
  _guard_check_icall();
  return;
}


void FUN_1800d59f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1800a4fb0(*(longlong *)(param_2 + 0x50),*(longlong *)(param_2 + 0x58),
                  *(longlong *)(param_2 + 0x28),*(undefined **)(param_2 + 0x70));
  }
  return;
}


void FUN_1800d5a20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1800a4fb0(*(longlong *)(param_2 + 0x60),*(longlong *)(param_2 + 0x68),
                  *(longlong *)(param_2 + 0x70),*(undefined **)(param_2 + 0x78));
  }
  return;
}


undefined4 FUN_1800d5a50(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;

  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) == -0x1f928c9d) {
    puVar2 = (undefined8 *)FUN_1800a7330();
    *puVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    puVar2 = (undefined8 *)FUN_1800a7350();
    *puVar2 = uVar1;
                    // WARNING: Subroutine does not return
    FUN_1800c06c0();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}


bool FUN_1800d5ab0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}


void FUN_1800d5ad0(undefined8 param_1,longlong param_2)

{
  FUN_1800a5360(*(char *)(param_2 + 0x60));
  return;
}


void FUN_1800d5af0(undefined8 param_1,longlong param_2)

{
  FUN_1800a5360(*(char *)(param_2 + 0x20));
  return;
}


void FUN_1800d5b0a(void)

{
  FUN_1800a5260();
  return;
}


void FUN_1800d5b20(undefined8 *param_1,longlong param_2)

{
  FUN_1800a51d0(*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
                *(undefined8 *)(param_2 + 0x70),FUN_1800a5b40,*(int *)*param_1,param_1);
  return;
}


undefined4 FUN_1800d5b60(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  PVOID pvVar4;

  *(undefined8 *)(param_2 + 0x48) = param_1;
  pvVar4 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  puVar1 = *(ulonglong **)(param_2 + 0x98);
  uVar2 = puVar1[1];
  pvVar4 = FUN_1800a79f0();
  *(ulonglong *)((longlong)pvVar4 + 0x60) = uVar2;
  uVar3 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  pvVar4 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar3;
  FUN_1800a9da0((int *)**(undefined8 **)(param_2 + 0x48),*(longlong **)(param_2 + 0x88),
                *(ULONG_PTR *)(param_2 + 0x90),puVar1,*(uint **)(param_2 + 0xa0),0,0,1);
  pvVar4 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}


undefined4 FUN_1800d5c10(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  PVOID pvVar4;

  *(undefined8 *)(param_2 + 0x48) = param_1;
  pvVar4 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  puVar1 = *(ulonglong **)(param_2 + 0x98);
  uVar2 = puVar1[1];
  pvVar4 = FUN_1800a79f0();
  *(ulonglong *)((longlong)pvVar4 + 0x60) = uVar2;
  uVar3 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  pvVar4 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar3;
  pvVar4 = FUN_1800a79f0();
  *(undefined4 *)((longlong)pvVar4 + 0x78) = *(undefined4 *)(param_2 + 0xb8);
  FUN_1800a9db0((int *)**(undefined8 **)(param_2 + 0x48),*(longlong **)(param_2 + 0x88),
                *(ULONG_PTR *)(param_2 + 0x90),puVar1,*(byte **)(param_2 + 0xa0),0,0,1);
  pvVar4 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}


undefined4 FUN_1800d5cd0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  PVOID pvVar2;

  *(undefined8 *)(param_2 + 0x30) = param_1;
  if ((((*(char *)(param_2 + 0x58) != '\0') &&
       (*(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30),
       **(int **)(param_2 + 0x28) == -0x1f928c9d)) &&
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
     (((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
       (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521)) ||
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))) {
    pvVar2 = FUN_1800a79f0();
    *(undefined8 *)((longlong)pvVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    pvVar2 = FUN_1800a79f0();
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
                    // WARNING: Subroutine does not return
    FUN_1800c06c0();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}


void FUN_1800d5d70(void)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a79f0();
  *(undefined4 *)((longlong)pvVar1 + 0x78) = 0xfffffffe;
  return;
}


void FUN_1800d5d90(undefined8 *param_1,longlong param_2)

{
  FUN_1800aa570(param_1,*(longlong *)(param_2 + 0xd8),(undefined4 *)(param_2 + 0x20));
  return;
}


void FUN_1800d5db1(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  PVOID pvVar3;

  FUN_1800a6fb0(*(longlong *)(param_2 + 0x30));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    uVar2 = FUN_1800a7250(*(longlong *)(piVar1 + 10));
    if ((int)uVar2 != 0) {
      __DestructExceptionObject(piVar1);
    }
  }
  pvVar3 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar3 + 0x20) = *(undefined8 *)(param_2 + 0x70);
  pvVar3 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar3 + 0x28) = *(undefined8 *)(param_2 + 0x78);
  return;
}


void FUN_1800d5e40(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0x28),*(int *)(param_2 + 0xf0),
                     (int *)(param_2 + 0x20));
  return;
}


void FUN_1800d5e65(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  PVOID pvVar3;

  FUN_1800a6fb0(*(longlong *)(param_2 + 0x48));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0x28), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    uVar2 = FUN_1800a7250(*(longlong *)(piVar1 + 10));
    if ((int)uVar2 != 0) {
      __DestructExceptionObject(piVar1);
    }
  }
  pvVar3 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar3 + 0x20) = *(undefined8 *)(param_2 + 0x78);
  pvVar3 = FUN_1800a79f0();
  *(undefined8 *)((longlong)pvVar3 + 0x28) = *(undefined8 *)(param_2 + 0x80);
  pvVar3 = FUN_1800a79f0();
  *(undefined4 *)((longlong)pvVar3 + 0x78) = *(undefined4 *)(param_2 + 0x30);
  return;
}


void FUN_1800d5f00(undefined8 *param_1)

{
  FUN_1800a72c0(param_1);
  return;
}


void FUN_1800d5f16(void)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a79f0();
  if (0 < *(int *)((longlong)pvVar1 + 0x30)) {
    pvVar1 = FUN_1800a79f0();
    *(int *)((longlong)pvVar1 + 0x30) = *(int *)((longlong)pvVar1 + 0x30) + -1;
  }
  return;
}


void FUN_1800d5f40(undefined8 *param_1)

{
  FUN_1800a72c0(param_1);
  return;
}


void FUN_1800d5f56(void)

{
  PVOID pvVar1;

  pvVar1 = FUN_1800a79f0();
  if (0 < *(int *)((longlong)pvVar1 + 0x30)) {
    pvVar1 = FUN_1800a79f0();
    *(int *)((longlong)pvVar1 + 0x30) = *(int *)((longlong)pvVar1 + 0x30) + -1;
  }
  return;
}


void FUN_1800d5f79(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(undefined8 *)(param_2 + 0x40));
  }
  FUN_1800bdb78(*(longlong *)(param_2 + 0x40));
  return;
}


void FUN_1800d5fa4(undefined8 param_1,longlong param_2)

{
  FUN_1800bdb78(**(longlong **)(param_2 + 0x48));
  return;
}


void FUN_1800d5fbf(undefined8 param_1,longlong param_2)

{
  FUN_1800bdb78(*(longlong *)(param_2 + 0x40));
  return;
}


void FUN_1800d5fd7(undefined8 param_1,longlong param_2)

{
  FUN_1800bdb78(*(longlong *)(param_2 + 0x70));
  return;
}


void FUN_1800d5fef(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x98));
  return;
}


void FUN_1800d600c(undefined8 param_1,longlong param_2)

{
  FUN_1800bdb78(*(longlong *)(param_2 + 0x60));
  return;
}


void FUN_1800d6030(void)

{
  __acrt_unlock(0);
  return;
}


void FUN_1800d6046(void)

{
  __acrt_unlock(0);
  return;
}


void FUN_1800d605c(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}


undefined4 FUN_1800d6076(undefined8 *param_1,longlong param_2)

{
  int iVar1;

  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}


void FUN_1800d60a3(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x58));
  return;
}


void FUN_1800d60bd(void)

{
  __acrt_unlock(8);
  return;
}


void FUN_1800d60d6(void)

{
  __acrt_unlock(7);
  return;
}


void FUN_1800d60ef(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(**(uint **)(param_2 + 0x48));
  return;
}


void FUN_1800d6109(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(uint *)(param_2 + 0x60));
  return;
}


void FUN_1800d6120(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}


undefined8 FUN_1800d6150(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;

  *(undefined8 **)(param_2 + 0x10) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 8) = iVar1;
  if ((iVar1 == -0x3ffffffb) || (iVar1 == -0x3fffffe3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


void FUN_1800d617d(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(uint *)(param_2 + 0x40));
  return;
}


void FUN_1800d6194(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x68));
  return;
}


void FUN_1800d61ae(void)

{
  __acrt_unlock(5);
  return;
}


void FUN_1800d61c7(void)

{
  __acrt_unlock(4);
  return;
}


void FUN_1800d61e0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;

  if (*(int *)(param_2 + 0x40) != 0) {
    if (*(int *)(param_2 + 0x44) != 0) {
      puVar1 = *(uint **)(param_2 + 0x80);
      *(byte *)((&DAT_180115f70)[(longlong)(int)*puVar1 >> 6] + 0x38 +
               (ulonglong)(*puVar1 & 0x3f) * 0x48) =
           *(byte *)((&DAT_180115f70)[(longlong)(int)*puVar1 >> 6] + 0x38 +
                    (ulonglong)(*puVar1 & 0x3f) * 0x48) & 0xfe;
    }
    __acrt_lowio_unlock_fh(**(uint **)(param_2 + 0x80));
  }
  return;
}


// Library Function - Single Match
//  _ctrlfp$filt$0
//
// Library: Visual Studio 2005 Release

undefined8 _ctrlfp_filt_0(undefined8 *param_1)

{
  undefined8 uVar1;

  if ((*(int *)*param_1 == -0x3ffffffb) || (*(int *)*param_1 == -0x3fffffe3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


bool FUN_1800d6290(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}


void FUN_1800d62b0(void)

{
  FUN_180009380(&DAT_180115a30);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800d62c0(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;

  if (7 < DAT_180115888) {
    pvVar2 = (LPVOID)CONCAT62(DAT_180115870._2_6_,(undefined2)DAT_180115870);
    pvVar3 = pvVar2;
    if ((0xfff < DAT_180115888 * 2 + 2) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_1800c3030(pvVar3);
  }
  _DAT_180115880 = 0;
  DAT_180115870._0_2_ = 0;
  DAT_180115888 = 7;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800d6340(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;

  if (7 < DAT_1801158b0) {
    pvVar2 = (LPVOID)CONCAT62(DAT_180115898._2_6_,(undefined2)DAT_180115898);
    pvVar3 = pvVar2;
    if ((0xfff < DAT_1801158b0 * 2 + 2) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_1800c3030(pvVar3);
  }
  _DAT_1801158a8 = 0;
  DAT_180115898._0_2_ = 0;
  DAT_1801158b0 = 7;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800d63c0(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;

  if (7 < DAT_1801121a8) {
    pvVar2 = (LPVOID)CONCAT62(DAT_180112190._2_6_,(undefined2)DAT_180112190);
    pvVar3 = pvVar2;
    if ((0xfff < DAT_1801121a8 * 2 + 2) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_1800c3030(pvVar3);
  }
  _DAT_1801121a0 = 0;
  DAT_180112190._0_2_ = 0;
  DAT_1801121a8 = 7;
  return;
}


void FUN_1800d6440(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];

  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180112ee0 == (LPVOID)0x0) {
    return;
  }
  pvVar2 = DAT_180112ee0;
  if (0xfff < (ulonglong)(DAT_180112ef0 - (longlong)DAT_180112ee0)) {
    pvVar2 = *(LPVOID *)((longlong)DAT_180112ee0 + -8);
    if ((ulonglong)((longlong)DAT_180112ee0 + (-8 - (longlong)pvVar2)) < 0x20) goto LAB_1800d6484;
    pcVar1 = (code *)swi(0x29);
    pvVar2 = (LPVOID)(*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_1800d6484:
  *(undefined8 *)(puVar4 + -8) = 0x1800d6489;
  thunk_FUN_1800c3030(pvVar2);
  DAT_180112ef0 = 0;
  uRam0000000180112ee8 = 0;
  DAT_180112ee0 = (LPVOID)0x0;
  return;
}


void FUN_1800d64b0(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];

  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180114378 == (LPVOID)0x0) {
    return;
  }
  pvVar2 = DAT_180114378;
  if (0xfff < (ulonglong)((DAT_180114388 - (longlong)DAT_180114378 >> 2) * 4)) {
    pvVar2 = *(LPVOID *)((longlong)DAT_180114378 + -8);
    if ((ulonglong)((longlong)DAT_180114378 + (-8 - (longlong)pvVar2)) < 0x20) goto LAB_1800d6500;
    pvVar2 = (LPVOID)0x5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_1800d6500:
  *(undefined8 *)(puVar4 + -8) = 0x1800d6508;
  thunk_FUN_1800c3030(pvVar2);
  DAT_180114388 = 0;
  uRam0000000180114380 = 0;
  DAT_180114378 = (LPVOID)0x0;
  return;
}


void FUN_1800d6530(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  LPVOID pvVar3;

  FUN_180009b10(&DAT_1801142c0);
  FUN_180009b10((longlong *)&DAT_1801142a8);
  FUN_1800115e0((longlong *)&DAT_180114260);
  FUN_180011650((longlong *)&DAT_180114238);
  FUN_180009b10((longlong *)&DAT_1801141f0);
  FUN_180011550((longlong *)&DAT_1801141d8);
  FUN_180011650((longlong *)&DAT_1801141b8);
  FUN_180009380((longlong *)&DAT_180114178);
  puVar2 = DAT_180114168;
  *(undefined8 *)DAT_180114168[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_1800c3030(puVar2);
    puVar2 = puVar1;
  }
  thunk_FUN_1800c3030(DAT_180114168);
  FUN_180009380((longlong *)&DAT_180114138);
  puVar2 = DAT_180114128;
  *(undefined8 *)DAT_180114128[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_1800c3030(puVar2);
    puVar2 = puVar1;
  }
  thunk_FUN_1800c3030(DAT_180114128);
  FUN_180009380((longlong *)&DAT_180114030);
  puVar2 = DAT_180114020;
  *(undefined8 *)DAT_180114020[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_1800c3030(puVar2);
    puVar2 = puVar1;
  }
  thunk_FUN_1800c3030(DAT_180114020);
  FUN_180011370(0x180112f28);
  pvVar3 = DAT_180112f28;
  DAT_180112f28 = (LPVOID)0x0;
  thunk_FUN_1800c3030(pvVar3);
  FUN_180011460(0x180112f00);
  pvVar3 = DAT_180112f00;
  DAT_180112f00 = (LPVOID)0x0;
  thunk_FUN_1800c3030(pvVar3);
  return;
}


void FUN_1800d66d0(void)

{
  FUN_180009380(&DAT_1801158e8);
  FUN_180009770(&DAT_1801158d8);
  return;
}


void FUN_1800d66f0(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  plVar3 = DAT_1801159a8;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  plVar2 = DAT_1801159a0;
  if (DAT_1801159a0 == (longlong *)0x0) {
    return;
  }
  for (; plVar2 != plVar3; plVar2 = plVar2 + 9) {
    FUN_1800115e0(plVar2 + 4);
    FUN_1800115e0(plVar2);
  }
  plVar2 = DAT_1801159a0;
  if (0xfff < (ulonglong)(((DAT_1801159b0 - (longlong)DAT_1801159a0) / 0x48) * 0x48)) {
    plVar2 = (longlong *)DAT_1801159a0[-1];
    plVar3 = (longlong *)((longlong)DAT_1801159a0 + (-8 - (longlong)plVar2));
    if (plVar3 < (longlong *)0x20) goto LAB_1800d6798;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    plVar2 = plVar3;
  }
  puVar5 = puVar4;
LAB_1800d6798:
  *(undefined8 *)(puVar5 + -8) = 0x1800d679d;
  thunk_FUN_1800c3030(plVar2);
  DAT_1801159b0 = 0;
  DAT_1801159a8 = (longlong *)0x0;
  DAT_1801159a0 = (longlong *)0x0;
  return;
}


void FUN_1800d67c0(void)

{
  FUN_180009b10(&DAT_180115aa8);
  return;
}


void FUN_1800d67d0(void)

{
  FUN_1800a4f30(0x180115920,0x20,3,thunk_FUN_1800099e0);
  return;
}


void FUN_1800d67f0(void)

{
  FUN_180009380((longlong *)&DAT_180112138);
  FUN_1800097e0(&DAT_180112128);
  return;
}


void FUN_1800d6810(void)

{
  FUN_180009380(&DAT_1801120c8);
  FUN_1800097e0(&DAT_1801120b8);
  return;
}


void FUN_1800d6830(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  pvVar3 = DAT_180115ad0;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  pvVar2 = DAT_180115ac8;
  if (DAT_180115ac8 == (LPVOID)0x0) {
    return;
  }
  for (; pvVar2 != pvVar3; pvVar2 = (LPVOID)((longlong)pvVar2 + 0x30)) {
    FUN_180009380((longlong *)((longlong)pvVar2 + 0x18));
  }
  pvVar2 = DAT_180115ac8;
  if (0xfff < (ulonglong)(((DAT_180115ad8 - (longlong)DAT_180115ac8) / 0x30) * 0x30)) {
    pvVar2 = *(LPVOID *)((longlong)DAT_180115ac8 + -8);
    pvVar3 = (LPVOID)((longlong)DAT_180115ac8 + (-8 - (longlong)pvVar2));
    if (pvVar3 < (LPVOID)0x20) goto LAB_1800d68cc;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    pvVar2 = pvVar3;
  }
  puVar5 = puVar4;
LAB_1800d68cc:
  *(undefined8 *)(puVar5 + -8) = 0x1800d68d1;
  thunk_FUN_1800c3030(pvVar2);
  DAT_180115ad8 = 0;
  DAT_180115ad0 = (LPVOID)0x0;
  DAT_180115ac8 = (LPVOID)0x0;
  return;
}



undefined * FUN_180084e40(longlong param_1,int param_2)

{
  short sVar1;
  ulonglong uVar2;

  if ((*(char *)(param_1 + 0x237) != '\0') || (param_2 < *(short *)(param_1 + 0x206))) {
    uVar2 = (longlong)param_2 * 0x74 + *(ulonglong *)(param_1 + 0x18);
    if ((uVar2 < *(ulonglong *)(param_1 + 0x18)) || (*(ulonglong *)(param_1 + 0x20) <= uVar2)) {
      FID_conflict__assert
                (L"p >= Data && p < DataEnd",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x285);
    }
    sVar1 = *(short *)(uVar2 + 0x54);
    if (sVar1 != -1) {
      if ((sVar1 < 0) || (*(int *)(param_1 + 400) <= (int)sVar1)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x834);
      }
      return (undefined *)((longlong)sVar1 + *(longlong *)(param_1 + 0x198));
    }
  }
  return &DAT_1800d8c40;
}


void FUN_180084ef0(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  int *piVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong *puVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  longlong lVar30;
  uint uVar31;
  int iVar32;
  undefined8 *puVar33;
  longlong lVar34;
  byte bVar35;
  ulonglong uVar36;
  int iVar37;
  int iVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint *puVar41;
  float *pfVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  longlong lVar45;
  longlong *plVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  float *pfVar50;
  uint uVar51;
  int iVar52;
  float *pfVar53;
  ulonglong *puVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  uint local_1c4;
  uint local_1c0;
  undefined4 *local_1b0;
  uint local_19c;
  float local_178 [4];
  int local_168 [2];
  ulonglong local_160 [3];
  undefined4 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  longlong local_100;
  ulonglong local_f8;
  uint *local_f0;
  longlong local_e8;

  lVar30 = DAT_180115c10;
  piVar12 = *(int **)(param_1 + 0x1a0);
  sVar9 = *(short *)(param_1 + 0x228);
  sVar10 = *(short *)(param_1 + 0x22c);
  if (*piVar12 != 0) {
    FID_conflict__assert
              (L"splitter->_Current == 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
               ,0xa04);
  }
  local_168[0] = 0;
  local_160[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_128 = 0;
  local_120 = 0;
  local_108 = 0;
  local_100 = 0;
  local_178[0] = 0.0;
  local_178[1] = 0.0;
  local_178[2] = 0.0;
  local_178[3] = 0.0;
  local_160[1] = 0;
  local_160[2] = 0;
  local_138 = 0;
  uStack_130 = 0;
  iVar49 = *(int *)(param_1 + 0x6c) * 2;
  local_118 = 0;
  uStack_110 = 0;
  iVar52 = iVar49 + 0x23 >> 5;
  iVar37 = iVar52 * 0x14;
  if (*(int *)(lVar30 + 0x2904) < iVar37) {
    puVar33 = (undefined8 *)FUN_18005b560((longlong)iVar37);
    if (*(undefined8 **)(lVar30 + 0x2908) != (undefined8 *)0x0) {
      FUN_1800d1c20(puVar33,*(undefined8 **)(lVar30 + 0x2908),(longlong)*(int *)(lVar30 + 0x2900));
      FUN_18005b5c0(*(longlong *)(lVar30 + 0x2908));
    }
    *(undefined8 **)(lVar30 + 0x2908) = puVar33;
    *(int *)(lVar30 + 0x2904) = iVar37;
  }
  FUN_1800d22d0(*(undefined1 (**) [32])(lVar30 + 0x2908),0,(longlong)iVar37);
  local_160[0] = *(ulonglong *)(lVar30 + 0x2908);
  local_140 = (longlong)(iVar52 * 4) + *(longlong *)(lVar30 + 0x2908);
  local_120 = (longlong)(iVar52 * 8) + *(longlong *)(lVar30 + 0x2908);
  local_100 = (longlong)(iVar52 * 0xc) + *(longlong *)(lVar30 + 0x2908);
  if (*(int *)(param_1 + 0x6c) < 1) {
    return;
  }
  local_e8 = *(longlong *)(lVar30 + 0x2908);
  uVar48 = 0;
  local_1c4 = 0;
  local_19c = 0;
  do {
    if ((*(uint *)(*(longlong *)(param_1 + 0x58) + ((longlong)(int)local_19c >> 5) * 4) >>
         (local_19c & 0x1f) & 1) != 0) {
      puVar41 = *(uint **)(param_1 + 0x18) + (longlong)(int)local_19c * 0x1d;
      local_f0 = puVar41;
      if ((puVar41 < *(uint **)(param_1 + 0x18)) || (*(uint **)(param_1 + 0x20) <= puVar41)) {
        FID_conflict__assert
                  (L"p >= Data && p < DataEnd",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                   ,0x284);
      }
      local_1c0 = 0;
      do {
        uVar48 = 2;
        lVar34 = 0x62;
        if (local_1c0 != 0) {
          lVar34 = 100;
        }
        uVar36 = (ulonglong)*(ushort *)((longlong)puVar41 + lVar34);
        uVar51 = (uint)*(ushort *)((longlong)puVar41 + lVar34);
        if (piVar12[2] <= (int)uVar51) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
          uVar36 = (ulonglong)uVar51;
        }
        lVar34 = *(longlong *)(piVar12 + 4);
        local_f8 = uVar36;
        lVar45 = uVar36 * 0x20;
        iVar37 = *(int *)(lVar45 + lVar34);
        if (0 < iVar37) {
          lVar13 = *(longlong *)(lVar45 + 8 + lVar34);
          if ((*(int *)((longlong)iVar37 * 0x40 + -0x20 + lVar13) == 0) &&
             (*(longlong *)((longlong)iVar37 * 0x40 + -0x18 + lVar13) == 0)) {
            *(int *)(lVar45 + lVar34) = *(int *)(lVar45 + lVar34) + -1;
            iVar37 = *(int *)(lVar45 + lVar34);
          }
          if (iVar37 == 1) {
            if ((*puVar41 & 0x100) == 0) {
              if (sVar9 < 1) {
                fVar55 = (float)puVar41[0x12];
                if ((float)puVar41[0x12] <= (float)puVar41[0x13]) {
                  fVar55 = (float)puVar41[0x13];
                }
              }
              else if (local_1c0 == 0) {
                fVar55 = (float)puVar41[0x11];
                if ((float)puVar41[0x11] <= (float)puVar41[0x13]) {
                  fVar55 = (float)puVar41[0x13];
                }
              }
              else {
                fVar55 = (float)puVar41[0x12];
              }
              if ((float)puVar41[0xb] <= fVar55 && fVar55 != (float)puVar41[0xb])
              goto LAB_180085380;
            }
            if ((sVar10 < 1) || ((int)*(short *)(param_1 + 0x22c) <= (int)local_19c)) {
              uVar31 = 1;
            }
            else {
              uVar31 = 0;
            }
            if ((0 < sVar9) && (local_1c0 == 0)) {
              uVar48 = 0;
            }
            uVar47 = (uint)uVar36;
            if (iVar49 + 4 <= (int)(uint)uVar36) {
              FID_conflict__assert
                        (L"channel_no < max_draw_channels",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                         ,0xa3c);
              uVar47 = uVar51;
            }
            uVar36 = local_f8;
            uVar39 = (ulonglong)(uVar48 | uVar31);
            uVar40 = uVar39 * 0x20;
            if (local_168[uVar39 * 8] == 0) {
              local_178[uVar39 * 8] = 3.4028235e+38;
              pfVar42 = local_178 + uVar39 * 8 + 1;
              pfVar53 = local_178 + uVar39 * 8 + 2;
              pfVar50 = local_178 + uVar39 * 8 + 3;
              *pfVar42 = 3.4028235e+38;
              *pfVar53 = -3.4028235e+38;
              *pfVar50 = -3.4028235e+38;
            }
            else {
              pfVar42 = (float *)((longlong)local_178 + (uVar40 | 4));
              pfVar53 = (float *)((longlong)local_178 + (uVar40 | 8));
              pfVar50 = (float *)((longlong)local_178 + (uVar40 | 0xc));
            }
            *(uint *)(local_160[uVar39 * 4] + (uVar36 >> 5) * 4) =
                 *(uint *)(local_160[uVar39 * 4] + (uVar36 >> 5) * 4) | 1 << (uVar47 & 0x1f);
            local_168[uVar39 * 8] = local_168[uVar39 * 8] + 1;
            if (*(int *)(lVar45 + lVar34) < 1) {
              FID_conflict__assert
                        (L"i >= 0 && i < Size",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                         ,0x833);
            }
            pfVar14 = *(float **)(lVar45 + 8 + lVar34);
            fVar55 = pfVar14[1];
            fVar5 = pfVar14[2];
            fVar6 = pfVar14[3];
            if (*pfVar14 < local_178[uVar39 * 8]) {
              local_178[uVar39 * 8] = *pfVar14;
            }
            if (fVar55 < *pfVar42) {
              *pfVar42 = fVar55;
            }
            if (*pfVar53 <= fVar5 && fVar5 != *pfVar53) {
              *pfVar53 = fVar5;
            }
            if (*pfVar50 <= fVar6 && fVar6 != *pfVar50) {
              *pfVar50 = fVar6;
            }
            local_1c4 = local_1c4 | 1 << (uVar48 | uVar31);
            puVar41 = local_f0;
          }
        }
LAB_180085380:
        local_1c0 = local_1c0 + 1;
      } while ((int)local_1c0 < (int)((0 < sVar9) + 1));
      *(undefined2 *)(puVar41 + 0x18) = 0xffff;
      uVar48 = local_1c4;
    }
    uVar51 = 2;
    local_19c = local_19c + 1;
  } while ((int)local_19c < *(int *)(param_1 + 0x6c));
  if (uVar48 == 0) {
    return;
  }
  iVar37 = piVar12[1] + -2;
  iVar49 = *(int *)(lVar30 + 0x223c);
  puVar54 = (ulonglong *)(local_e8 + (iVar52 << 4));
  if (iVar49 < iVar37) {
    if (iVar49 == 0) {
      iVar32 = 8;
    }
    else {
      iVar32 = iVar49 / 2 + iVar49;
    }
    iVar38 = iVar37;
    if (iVar37 < iVar32) {
      iVar38 = iVar32;
    }
    if (iVar49 < iVar38) {
      puVar33 = (undefined8 *)FUN_18005b560((longlong)iVar38 << 5);
      if (*(undefined8 **)(lVar30 + 0x2240) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar33,*(undefined8 **)(lVar30 + 0x2240),
                      (longlong)*(int *)(lVar30 + 0x2238) << 5);
        FUN_18005b5c0(*(longlong *)(lVar30 + 0x2240));
      }
      *(undefined8 **)(lVar30 + 0x2240) = puVar33;
      *(int *)(lVar30 + 0x223c) = iVar38;
    }
  }
  *(int *)(lVar30 + 0x2238) = iVar37;
  local_1b0 = *(undefined4 **)(lVar30 + 0x2240);
  iVar49 = piVar12[1] + -1;
  if (1 < iVar49) {
    do {
      lVar34 = (longlong)(int)uVar51;
      bVar16 = (byte)uVar51;
      bVar35 = (byte)iVar49 & 0x1f;
      if ((int)(uVar51 | 0x1f) < iVar49) {
        bVar35 = 0x1f;
      }
      uVar51 = uVar51 + 0x20 & 0xffffffe0;
      puVar41 = (uint *)((longlong)puVar54 + (lVar34 >> 5) * 4);
      *puVar41 = *puVar41 | (int)(1L << bVar35 + 1) - 1U & -(int)(1L << (bVar16 & 0x1f));
    } while ((int)uVar51 <= iVar49);
  }
  uVar36 = (ulonglong)(*(ushort *)(param_1 + 0x234) >> 5);
  *(uint *)((longlong)puVar54 + uVar36 * 4) =
       *(uint *)((longlong)puVar54 + uVar36 * 4) & ~(1 << (*(ushort *)(param_1 + 0x234) & 0x1f));
  if ((0 < sVar9) && (*(short *)(param_1 + 0x234) == 1)) {
    FID_conflict__assert
              (L"has_freeze_v == false || table->Bg2DrawChannelUnfrozen != TABLE_DRAW_CHANNEL_BG2_FROZEN"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
               ,0xa66);
  }
  fVar55 = *(float *)(param_1 + 0x160);
  fVar5 = *(float *)(param_1 + 0x164);
  fVar6 = *(float *)(param_1 + 0x168);
  fVar7 = *(float *)(param_1 + 0x16c);
  local_1c4 = piVar12[1] - ((0 < sVar9) + 2);
  local_1c0 = 0;
LAB_1800855ba:
  uVar48 = local_1c4;
  do {
    lVar34 = (longlong)(int)local_1c0;
    iVar49 = local_168[lVar34 * 8];
    puVar43 = local_1b0;
    if (iVar49 != 0) {
      fVar58 = local_178[lVar34 * 8];
      fVar59 = local_178[lVar34 * 8 + 1];
      fVar57 = local_178[lVar34 * 8 + 2];
      fVar56 = local_178[lVar34 * 8 + 3];
      if ((((local_1c0 & 1) == 0) || (sVar10 < 1)) && (fVar55 <= fVar58)) {
        fVar58 = fVar55;
      }
      if ((((local_1c0 & 2) == 0) || (sVar9 < 1)) && (fVar5 <= fVar59)) {
        fVar59 = fVar5;
      }
      if (((local_1c0 & 1) != 0) && (fVar57 <= fVar6)) {
        fVar57 = fVar6;
      }
      if ((((local_1c0 & 2) != 0) && ((*(uint *)(param_1 + 4) & 0x20000) == 0)) && (fVar56 <= fVar7)
         ) {
        fVar56 = fVar7;
      }
      uVar48 = uVar48 - iVar49;
      uVar51 = iVar52 * 4 >> 2;
      if (0 < (int)uVar51) {
        iVar37 = 0;
        if (1 < uVar51) {
          puVar15 = (ulonglong *)local_160[lVar34 * 4];
          puVar1 = (ulonglong *)((longlong)puVar54 + (longlong)(int)(uVar51 - 1) * 4);
          if ((((ulonglong *)((longlong)puVar15 + (longlong)(int)(uVar51 - 1) * 4) < puVar54) ||
              (puVar1 < puVar15)) &&
             ((local_160 + lVar34 * 4 < puVar54 || (puVar1 < local_160 + lVar34 * 4)))) {
            if (uVar51 < 0x10) {
LAB_180085731:
              uVar36 = local_160[lVar34 * 4];
              uVar31 = uVar51 & 0x80000001;
              if ((int)uVar31 < 0) {
                uVar31 = (uVar31 - 1 | 0xfffffffe) + 1;
              }
              do {
                lVar45 = (longlong)iVar37;
                iVar37 = iVar37 + 2;
                puVar41 = (uint *)((longlong)puVar54 + lVar45 * 4);
                uVar47 = puVar41[1];
                uVar8 = *(undefined8 *)(uVar36 + lVar45 * 4);
                puVar2 = (uint *)((longlong)puVar54 + lVar45 * 4);
                *puVar2 = ~(uint)uVar8 & *puVar41;
                puVar2[1] = ~(uint)((ulonglong)uVar8 >> 0x20) & uVar47;
              } while (iVar37 < (int)(uVar51 - uVar31));
            }
            else {
              uVar31 = uVar51 & 0x8000000f;
              if ((int)uVar31 < 0) {
                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
              }
              do {
                lVar45 = (longlong)iVar37;
                iVar37 = iVar37 + 0x10;
                puVar41 = (uint *)((longlong)puVar54 + lVar45 * 4);
                uVar47 = puVar41[1];
                uVar17 = puVar41[2];
                uVar18 = puVar41[3];
                puVar2 = (uint *)((longlong)puVar15 + lVar45 * 4);
                uVar19 = puVar2[1];
                uVar20 = puVar2[2];
                uVar21 = puVar2[3];
                puVar4 = (uint *)((longlong)puVar15 + lVar45 * 4 + 0x10);
                uVar22 = *puVar4;
                uVar23 = puVar4[1];
                uVar24 = puVar4[2];
                uVar25 = puVar4[3];
                puVar4 = (uint *)((longlong)puVar54 + lVar45 * 4);
                *puVar4 = ~*puVar2 & *puVar41;
                puVar4[1] = ~uVar19 & uVar47;
                puVar4[2] = ~uVar20 & uVar17;
                puVar4[3] = ~uVar21 & uVar18;
                puVar41 = (uint *)((longlong)puVar54 + lVar45 * 4 + 0x10);
                uVar47 = puVar41[1];
                uVar17 = puVar41[2];
                uVar18 = puVar41[3];
                puVar2 = (uint *)((longlong)puVar15 + lVar45 * 4 + 0x20);
                uVar19 = *puVar2;
                uVar20 = puVar2[1];
                uVar21 = puVar2[2];
                uVar26 = puVar2[3];
                puVar2 = (uint *)((longlong)puVar54 + lVar45 * 4 + 0x10);
                *puVar2 = ~uVar22 & *puVar41;
                puVar2[1] = ~uVar23 & uVar47;
                puVar2[2] = ~uVar24 & uVar17;
                puVar2[3] = ~uVar25 & uVar18;
                puVar41 = (uint *)((longlong)puVar54 + lVar45 * 4 + 0x20);
                uVar47 = puVar41[1];
                uVar17 = puVar41[2];
                uVar18 = puVar41[3];
                puVar2 = (uint *)((longlong)puVar15 + lVar45 * 4 + 0x30);
                uVar22 = *puVar2;
                uVar23 = puVar2[1];
                uVar24 = puVar2[2];
                uVar25 = puVar2[3];
                puVar2 = (uint *)((longlong)puVar54 + lVar45 * 4 + 0x20);
                *puVar2 = ~uVar19 & *puVar41;
                puVar2[1] = ~uVar20 & uVar47;
                puVar2[2] = ~uVar21 & uVar17;
                puVar2[3] = ~uVar26 & uVar18;
                puVar41 = (uint *)((longlong)puVar54 + lVar45 * 4 + 0x30);
                uVar47 = puVar41[1];
                uVar17 = puVar41[2];
                uVar18 = puVar41[3];
                puVar2 = (uint *)((longlong)puVar54 + lVar45 * 4 + 0x30);
                *puVar2 = ~uVar22 & *puVar41;
                puVar2[1] = ~uVar23 & uVar47;
                puVar2[2] = ~uVar24 & uVar17;
                puVar2[3] = ~uVar25 & uVar18;
              } while (iVar37 < (int)(uVar51 - uVar31));
              if (1 < uVar51 % 0x10) goto LAB_180085731;
            }
            if ((int)uVar51 <= iVar37) goto LAB_180085799;
          }
        }
        do {
          lVar45 = (longlong)iVar37;
          iVar37 = iVar37 + 1;
          puVar41 = (uint *)((longlong)puVar54 + lVar45 * 4);
          *puVar41 = *puVar41 & ~*(uint *)(local_160[lVar34 * 4] + lVar45 * 4);
        } while (iVar37 < (int)uVar51);
      }
LAB_180085799:
      uVar51 = 0;
      if (0 < piVar12[1]) {
        do {
          if (iVar49 == 0) break;
          lVar45 = (longlong)(int)uVar51 >> 5;
          uVar31 = *(uint *)(local_160[lVar34 * 4] + lVar45 * 4);
          if ((uVar31 >> (uVar51 & 0x1f) & 1) != 0) {
            iVar49 = iVar49 + -1;
            *(uint *)(local_160[lVar34 * 4] + lVar45 * 4) = uVar31 & ~(1 << (uVar51 & 0x1f));
            if (((int)uVar51 < 0) || (piVar12[2] <= (int)uVar51)) {
              FID_conflict__assert
                        (L"i >= 0 && i < Size",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                         ,0x833);
            }
            lVar45 = *(longlong *)(piVar12 + 4);
            uVar36 = (longlong)(int)uVar51 * 0x20;
            if (*(int *)(uVar36 + lVar45) == 1) {
              plVar46 = (longlong *)(lVar45 + 8 + uVar36);
              pfVar42 = (float *)*plVar46;
              if ((((*pfVar42 < fVar58) || (pfVar42[1] < fVar59)) || (fVar57 < pfVar42[2])) ||
                 (fVar56 < pfVar42[3])) goto LAB_18008583b;
            }
            else {
LAB_18008583b:
              FID_conflict__assert
                        (L"channel->_CmdBuffer.Size == 1 && merge_clip_rect.Contains(ImRect(channel->_CmdBuffer[0].ClipRect))"
                         ,
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                         ,0xa8f);
              plVar46 = (longlong *)((uVar36 | 8) + lVar45);
              if (*(int *)(uVar36 + lVar45) < 1) {
                FID_conflict__assert
                          (L"i >= 0 && i < Size",
                           L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                           ,0x833);
              }
            }
            pfVar42 = (float *)*plVar46;
            *pfVar42 = fVar58;
            pfVar42[1] = fVar59;
            pfVar42[2] = fVar57;
            pfVar42[3] = fVar56;
            puVar44 = (undefined4 *)(uVar36 + lVar45);
            uVar27 = puVar44[1];
            uVar28 = puVar44[2];
            uVar29 = puVar44[3];
            puVar43 = local_1b0 + 8;
            *local_1b0 = *puVar44;
            local_1b0[1] = uVar27;
            local_1b0[2] = uVar28;
            local_1b0[3] = uVar29;
            puVar44 = (undefined4 *)(uVar36 + 0x10 + lVar45);
            uVar27 = puVar44[1];
            uVar28 = puVar44[2];
            uVar29 = puVar44[3];
            local_1b0[4] = *puVar44;
            local_1b0[5] = uVar27;
            local_1b0[6] = uVar28;
            local_1b0[7] = uVar29;
            local_1b0 = puVar43;
          }
          uVar51 = uVar51 + 1;
        } while ((int)uVar51 < piVar12[1]);
      }
      local_1c4 = uVar48;
    }
    if ((local_1c0 == 1) && (0 < sVar9)) break;
    local_1c0 = local_1c0 + 1;
    local_1b0 = puVar43;
    if (3 < (int)local_1c0) {
      uVar51 = 0;
      puVar44 = puVar43;
      if (piVar12[1] < 1) goto LAB_180085a39;
      goto LAB_1800859c0;
    }
  } while( true );
  local_1b0 = local_1b0 + 8;
  uVar11 = *(ushort *)(param_1 + 0x234);
  if (piVar12[2] <= (int)(uint)uVar11) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  lVar34 = *(longlong *)(piVar12 + 4);
  lVar45 = (ulonglong)uVar11 * 0x20;
  local_1c0 = 2;
  puVar44 = (undefined4 *)(lVar45 + lVar34);
  uVar27 = puVar44[1];
  uVar28 = puVar44[2];
  uVar29 = puVar44[3];
  *puVar43 = *puVar44;
  puVar43[1] = uVar27;
  puVar43[2] = uVar28;
  puVar43[3] = uVar29;
  puVar44 = (undefined4 *)(lVar45 + 0x10 + lVar34);
  uVar27 = puVar44[1];
  uVar28 = puVar44[2];
  uVar29 = puVar44[3];
  puVar43[4] = *puVar44;
  puVar43[5] = uVar27;
  puVar43[6] = uVar28;
  puVar43[7] = uVar29;
  goto LAB_1800855ba;
  while( true ) {
    if ((*(uint *)((longlong)puVar54 + ((longlong)(int)uVar51 >> 5) * 4) >> (uVar51 & 0x1f) & 1) !=
        0) {
      if (((int)uVar51 < 0) || (piVar12[2] <= (int)uVar51)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
        uVar48 = local_1c4;
      }
      lVar34 = *(longlong *)(piVar12 + 4);
      lVar45 = (longlong)(int)uVar51 * 0x20;
      puVar44 = puVar43 + 8;
      uVar48 = uVar48 + -1;
      puVar3 = (undefined4 *)(lVar45 + lVar34);
      uVar27 = puVar3[1];
      uVar28 = puVar3[2];
      uVar29 = puVar3[3];
      *puVar43 = *puVar3;
      puVar43[1] = uVar27;
      puVar43[2] = uVar28;
      puVar43[3] = uVar29;
      puVar3 = (undefined4 *)(lVar45 + 0x10 + lVar34);
      uVar27 = puVar3[1];
      uVar28 = puVar3[2];
      uVar29 = puVar3[3];
      puVar43[4] = *puVar3;
      puVar43[5] = uVar27;
      puVar43[6] = uVar28;
      puVar43[7] = uVar29;
      local_1c4 = uVar48;
    }
    uVar51 = uVar51 + 1;
    puVar43 = puVar44;
    if (piVar12[1] <= (int)uVar51) break;
LAB_1800859c0:
    puVar44 = puVar43;
    if (uVar48 == 0) break;
  }
LAB_180085a39:
  if (puVar44 !=
      (undefined4 *)((longlong)*(int *)(lVar30 + 0x2238) * 0x20 + *(longlong *)(lVar30 + 0x2240))) {
    FID_conflict__assert
              (L"dst_tmp == g.DrawChannelsTempMergeBuffer.Data + g.DrawChannelsTempMergeBuffer.Size"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
               ,0xaa3);
  }
  FUN_1800d1c20((undefined8 *)(*(longlong *)(piVar12 + 4) + 0x40),*(undefined8 **)(lVar30 + 0x2240),
                (longlong)(piVar12[1] + -2) << 5);
  return;
}


void FUN_180085ab0(uint param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;

  puVar1 = *(uint **)(DAT_180115c10 + 0x21e0);
  if (param_1 == 0xffffffff) {
    param_1 = 0xffffffff;
    if (puVar1[0x1d] != 0xffffffff) {
      param_1 = puVar1[0x1d];
    }
  }
  uVar2 = 0xffffffff;
  if (((param_1 != puVar1[0x1b]) && (uVar2 = param_1, (int)param_1 < -1)) ||
     ((int)puVar1[0x1b] <= (int)uVar2)) {
    FID_conflict__assert
              (L"column_n >= -1 && column_n < table->ColumnsCount",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
               ,0xd79);
  }
  if ((puVar1[1] & 7) != 0) {
    uVar3 = (ulonglong)*puVar1;
    *(short *)((longlong)puVar1 + 0x7a) = (short)puVar1[0x1e];
    *(undefined1 *)(puVar1 + 0x8f) = 1;
    *(short *)(puVar1 + 0x89) = (short)uVar2;
    uVar2 = FUN_180058260((byte *)"##ContextMenu",0,*puVar1);
    FUN_180061780(uVar2,0,uVar3,param_4);
  }
  return;
}


void FUN_180085b50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;

  lVar5 = *(longlong *)(DAT_180115c10 + 0x21e0);
  lVar6 = *(longlong *)(DAT_180115c10 + 0x13a8);
  uVar9 = (longlong)*(int *)(lVar5 + 0x74) * 0x74 + *(ulonglong *)(lVar5 + 0x18);
  if ((uVar9 < *(ulonglong *)(lVar5 + 0x18)) || (*(ulonglong *)(lVar5 + 0x20) <= uVar9)) {
    FID_conflict__assert
              (L"p >= Data && p < DataEnd",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0x284);
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x178);
  lVar7 = *(longlong *)(lVar6 + 0x2c0);
  uVar1 = *(undefined4 *)(lVar5 + 0x170);
  uVar2 = *(undefined4 *)(lVar5 + 0x174);
  uVar3 = *(undefined4 *)(lVar5 + 0x178);
  uVar4 = *(undefined4 *)(lVar5 + 0x17c);
  *(undefined8 *)(lVar6 + 600) = *(undefined8 *)(lVar5 + 0x170);
  *(undefined8 *)(lVar6 + 0x260) = uVar8;
  *(undefined4 *)(lVar7 + 0x60) = uVar1;
  *(undefined4 *)(lVar7 + 100) = uVar2;
  *(undefined4 *)(lVar7 + 0x68) = uVar3;
  *(undefined4 *)(lVar7 + 0x6c) = uVar4;
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x2c0) + 0xa0);
  lVar10 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x2c0) + 0x98) + -1;
  *(undefined4 *)(lVar7 + lVar10 * 0x10) = uVar1;
  *(undefined4 *)(lVar7 + 4 + lVar10 * 0x10) = uVar2;
  *(undefined4 *)(lVar7 + 8 + lVar10 * 0x10) = uVar3;
  *(undefined4 *)(lVar7 + 0xc + lVar10 * 0x10) = uVar4;
  FUN_1800789b0(*(int **)(lVar5 + 0x1a0),*(int **)(lVar6 + 0x2c0),(uint)*(ushort *)(uVar9 + 0x60));
  return;
}


void FUN_180085c50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;

  lVar5 = *(longlong *)(DAT_180115c10 + 0x21e0);
  lVar6 = *(longlong *)(DAT_180115c10 + 0x13a8);
  uVar8 = *(undefined8 *)(lVar6 + 0x260);
  *(undefined8 *)(lVar5 + 0x170) = *(undefined8 *)(lVar6 + 600);
  *(undefined8 *)(lVar5 + 0x178) = uVar8;
  lVar7 = *(longlong *)(lVar6 + 0x2c0);
  uVar8 = *(undefined8 *)(lVar5 + 0x158);
  uVar1 = *(undefined4 *)(lVar5 + 0x150);
  uVar2 = *(undefined4 *)(lVar5 + 0x154);
  uVar3 = *(undefined4 *)(lVar5 + 0x158);
  uVar4 = *(undefined4 *)(lVar5 + 0x15c);
  *(undefined8 *)(lVar6 + 600) = *(undefined8 *)(lVar5 + 0x150);
  *(undefined8 *)(lVar6 + 0x260) = uVar8;
  *(undefined4 *)(lVar7 + 0x60) = uVar1;
  *(undefined4 *)(lVar7 + 100) = uVar2;
  *(undefined4 *)(lVar7 + 0x68) = uVar3;
  *(undefined4 *)(lVar7 + 0x6c) = uVar4;
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x2c0) + 0xa0);
  lVar9 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x2c0) + 0x98) + -1;
  *(undefined4 *)(lVar7 + lVar9 * 0x10) = uVar1;
  *(undefined4 *)(lVar7 + 4 + lVar9 * 0x10) = uVar2;
  *(undefined4 *)(lVar7 + 8 + lVar9 * 0x10) = uVar3;
  *(undefined4 *)(lVar7 + 0xc + lVar9 * 0x10) = uVar4;
  FUN_1800789b0(*(int **)(lVar5 + 0x1a0),*(int **)(lVar6 + 0x2c0),(uint)*(ushort *)(lVar5 + 0x232));
  return;
}


void FUN_180085d10(int *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  byte bVar8;
  uint *puVar9;
  float *pfVar10;

  *(undefined1 *)((longlong)param_1 + 0x23f) = 0;
  lVar7 = DAT_180115c10;
  if ((*(byte *)(param_1 + 1) & 0x10) == 0) {
    piVar6 = FUN_180084d90(param_1);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)FUN_180086000(*param_1,param_1[0x1b]);
      iVar5 = FUN_18006d110((int *)(lVar7 + 0x2600),(ulonglong)piVar6);
      param_1[0x19] = iVar5;
    }
    *(short *)(piVar6 + 3) = (short)param_1[0x1b];
    if (*piVar6 != *param_1) {
      FID_conflict__assert
                (L"settings->ID == table->ID",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                 ,0xe58);
    }
    if (((int)(short)piVar6[3] != param_1[0x1b]) ||
       (*(short *)((longlong)piVar6 + 0xe) < (short)piVar6[3])) {
      FID_conflict__assert
                (L"settings->ColumnsCount == table->ColumnsCount && settings->ColumnsCountMax >= settings->ColumnsCount"
                 ,
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                 ,0xe59);
    }
    puVar9 = *(uint **)(param_1 + 6);
    pfVar10 = (float *)(piVar6 + 5);
    bVar3 = false;
    bVar2 = false;
    piVar6[1] = 0;
    iVar5 = 0;
    if (0 < param_1[0x1b]) {
      do {
        lVar7 = 0x1c;
        if ((*puVar9 & 8) == 0) {
          lVar7 = 0x10;
        }
        fVar1 = *(float *)((longlong)puVar9 + lVar7);
        *pfVar10 = fVar1;
        *(short *)(pfVar10 + 2) = (short)iVar5;
        *(undefined2 *)((longlong)pfVar10 + 10) = *(undefined2 *)((longlong)puVar9 + 0x56);
        *(undefined2 *)(pfVar10 + 3) = *(undefined2 *)((longlong)puVar9 + 0x5e);
        bVar8 = (*(byte *)((longlong)pfVar10 + 0xe) ^ *(byte *)((longlong)puVar9 + 0x71)) & 3 ^
                *(byte *)((longlong)pfVar10 + 0xe);
        *(byte *)((longlong)pfVar10 + 0xe) = bVar8;
        bVar4 = *(byte *)((longlong)puVar9 + 0x67) << 2;
        bVar4 = (bVar4 ^ bVar8) & 0xf3 ^ bVar4;
        *(byte *)((longlong)pfVar10 + 0xe) = bVar4;
        *(byte *)((longlong)pfVar10 + 0xe) = (bVar4 ^ (char)(*puVar9 >> 3) << 4) & 0x10 ^ bVar4;
        bVar2 = bVar3;
        if ((*puVar9 & 8) == 0) {
          bVar2 = true;
        }
        if (fVar1 != (float)puVar9[8]) {
          piVar6[1] = piVar6[1] | 1;
        }
        if (*(short *)((longlong)puVar9 + 0x56) != iVar5) {
          piVar6[1] = piVar6[1] | 2;
        }
        if (*(short *)((longlong)puVar9 + 0x5e) != -1) {
          piVar6[1] = piVar6[1] | 8;
        }
        if (*(byte *)((longlong)puVar9 + 0x67) != (~(byte)(*puVar9 >> 1) & 1)) {
          piVar6[1] = piVar6[1] | 4;
        }
        iVar5 = iVar5 + 1;
        puVar9 = puVar9 + 0x1d;
        pfVar10 = pfVar10 + 4;
        bVar3 = bVar2;
      } while (iVar5 < param_1[0x1b]);
    }
    piVar6[1] = piVar6[1] & param_1[1];
    if (bVar2) {
      iVar5 = param_1[0x39];
    }
    else {
      iVar5 = 0;
    }
    piVar6[2] = iVar5;
    FUN_18005b4a0();
  }
  return;
}


void FUN_180085f00(longlong param_1,int param_2)

{
  ulonglong uVar1;

  uVar1 = (longlong)param_2 * 0x74 + *(ulonglong *)(param_1 + 0x18);
  if ((uVar1 < *(ulonglong *)(param_1 + 0x18)) || (*(ulonglong *)(param_1 + 0x20) <= uVar1)) {
    FID_conflict__assert
              (L"p >= Data && p < DataEnd",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0x284);
  }
  if (*(char *)(uVar1 + 0x66) != '\0') {
    *(undefined1 *)(uVar1 + 0x70) = 1;
    *(short *)(param_1 + 0x210) = (short)param_2;
  }
  return;
}


void FUN_180085f70(void)

{
  uint uVar1;
  char *local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  code *local_20;
  undefined8 local_18;

  local_50 = 0;
  local_48 = (code *)0x0;
  local_40 = 0;
  local_38 = (code *)0x0;
  local_30 = (code *)0x0;
  local_28 = (code *)0x0;
  local_20 = (code *)0x0;
  local_18 = 0;
  local_58 = "Table";
  uVar1 = FUN_180058260((byte *)"Table",0,0);
  local_50 = CONCAT44(local_50._4_4_,uVar1);
  local_48 = FUN_180086330;
  local_38 = FUN_180086670;
  local_30 = FUN_180086410;
  local_28 = FUN_180086270;
  local_20 = FUN_180086710;
  FUN_18004c720(&local_58);
  return;
}


undefined8 * FUN_180086000(undefined4 param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;

  lVar1 = DAT_180115c10;
  iVar4 = param_2 * 0x10 + 0x18;
  lVar3 = (longlong)*(int *)(DAT_180115c10 + 0x2600);
  FUN_18006dac0((int *)(DAT_180115c10 + 0x2600),iVar4 + *(int *)(DAT_180115c10 + 0x2600));
  *(int *)(lVar3 + *(longlong *)(lVar1 + 0x2608)) = iVar4;
  lVar1 = *(longlong *)(lVar1 + 0x2608);
  puVar5 = (undefined8 *)(lVar1 + 4 + lVar3);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
  }
  puVar2 = (undefined8 *)(lVar1 + 0x18 + lVar3);
  iVar4 = 0;
  if (3 < param_2) {
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0xffffffff;
        *(undefined2 *)((longlong)puVar2 + 0xc) = 0xffff;
        *(byte *)((longlong)puVar2 + 0xe) = *(byte *)((longlong)puVar2 + 0xe) & 0xec | 0xc;
      }
      if (puVar2 + 2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 3) = 0xffffffff;
        *(undefined2 *)((longlong)puVar2 + 0x1c) = 0xffff;
        *(byte *)((longlong)puVar2 + 0x1e) = *(byte *)((longlong)puVar2 + 0x1e) & 0xec | 0xc;
      }
      if (puVar2 + 4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 5) = 0xffffffff;
        *(undefined2 *)((longlong)puVar2 + 0x2c) = 0xffff;
        *(byte *)((longlong)puVar2 + 0x2e) = *(byte *)((longlong)puVar2 + 0x2e) & 0xec | 0xc;
      }
      if (puVar2 + 6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
        *(undefined4 *)(puVar2 + 7) = 0xffffffff;
        *(undefined2 *)((longlong)puVar2 + 0x3c) = 0xffff;
        *(byte *)((longlong)puVar2 + 0x3e) = *(byte *)((longlong)puVar2 + 0x3e) & 0xec | 0xc;
      }
      puVar2 = puVar2 + 8;
      iVar4 = iVar4 + 4;
    } while (iVar4 < param_2 + -3);
  }
  for (; iVar4 < param_2; iVar4 = iVar4 + 1) {
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar2 + 0xc) = 0xffff;
      *(byte *)((longlong)puVar2 + 0xe) = *(byte *)((longlong)puVar2 + 0xe) & 0xec | 0xc;
    }
    puVar2 = puVar2 + 2;
  }
  *(undefined4 *)puVar5 = param_1;
  *(short *)(lVar1 + 0x10 + lVar3) = (short)param_2;
  *(short *)(lVar1 + 0x12 + lVar3) = (short)param_2;
  *(undefined1 *)(lVar1 + 0x14 + lVar3) = 1;
  return puVar5;
}


int * FUN_180086180(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;

  lVar2 = DAT_180115c10;
  piVar4 = (int *)0x0;
  if (*(longlong *)(DAT_180115c10 + 0x2608) != 0) {
    piVar4 = (int *)(*(longlong *)(DAT_180115c10 + 0x2608) + 4);
  }
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar4 == param_1) break;
    lVar1 = *(longlong *)(lVar2 + 0x2608);
    piVar3 = (int *)0x0;
    if (lVar1 != 0) {
      piVar3 = (int *)(lVar1 + 4);
    }
    if ((piVar4 < piVar3) || ((int *)(*(int *)(lVar2 + 0x2600) + lVar1) <= piVar4)) {
      FID_conflict__assert
                (L"p >= begin() && p < end()",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x2d6);
    }
    piVar4 = (int *)((longlong)piVar4 + (longlong)piVar4[-1]);
    piVar3 = (int *)(*(longlong *)(lVar2 + 0x2608) + (longlong)*(int *)(lVar2 + 0x2600));
    if (piVar4 == piVar3 + 1) {
      return (int *)0x0;
    }
    if (piVar3 <= piVar4) {
      FID_conflict__assert
                (L"p < end()",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x2d6);
    }
  }
  return piVar4;
}


void FUN_180086270(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;

  iVar1 = *(int *)(param_1 + 0x2210);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      if ((iVar3 < 0) || (iVar1 <= iVar3)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x2218) + 8 + (longlong)iVar3 * 0x10);
      if (iVar1 != -1) {
        if ((iVar1 < 0) || (*(int *)(param_1 + 0x2200) <= iVar1)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        lVar2 = (longlong)iVar1 * 0x250 + *(longlong *)(param_1 + 0x2208);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x23e) = 1;
          *(undefined4 *)(lVar2 + 100) = 0xffffffff;
        }
      }
      iVar1 = *(int *)(param_1 + 0x2210);
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  return;
}


void FUN_180086330(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;

  iVar1 = *(int *)(param_1 + 0x2210);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      if ((iVar3 < 0) || (iVar1 <= iVar3)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x2218) + 8 + (longlong)iVar3 * 0x10);
      if (iVar1 != -1) {
        if ((iVar1 < 0) || (*(int *)(param_1 + 0x2200) <= iVar1)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        lVar2 = (longlong)iVar1 * 0x250 + *(longlong *)(param_1 + 0x2208);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 100) = 0xffffffff;
        }
      }
      iVar1 = *(int *)(param_1 + 0x2210);
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  if (*(longlong *)(param_1 + 0x2608) != 0) {
    *(undefined8 *)(param_1 + 0x2600) = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2608));
    *(undefined8 *)(param_1 + 0x2608) = 0;
  }
  return;
}


void FUN_180086410(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 (*param_4) [32]
                  )

{
  byte *pbVar1;
  int iVar2;
  undefined1 (*pauVar3) [32];
  longlong lVar4;
  char local_res18 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;

  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar2 = FUN_18006e0d0(param_4,0x1800ed760,&local_10,param_4);
  if (iVar2 == 1) {
    *(undefined4 *)(param_3 + 8) = local_10;
    return;
  }
  iVar2 = FUN_18006e0d0(param_4,0x1800ed770,&local_c,&local_18);
  if (((iVar2 == 1) && (-1 < local_c)) && (local_c < *(short *)(param_3 + 0xc))) {
    pauVar3 = (undefined1 (*) [32])FUN_180058310(*param_4 + local_18);
    local_res18[0] = '\0';
    lVar4 = (longlong)local_c * 0x10;
    *(short *)(lVar4 + 0x1c + param_3) = (short)local_c;
    iVar2 = FUN_18006e0d0(pauVar3,0x1800ed780,&local_14,&local_18);
    if (iVar2 == 1) {
      pauVar3 = (undefined1 (*) [32])FUN_180058310(*pauVar3 + local_18);
      *(int *)(lVar4 + 0x18 + param_3) = local_14;
    }
    iVar2 = FUN_18006e0d0(pauVar3,0x1800ed790,&local_14,&local_18);
    if (iVar2 == 1) {
      pauVar3 = (undefined1 (*) [32])FUN_180058310(*pauVar3 + local_18);
      pbVar1 = (byte *)(lVar4 + 0x22 + param_3);
      *pbVar1 = *pbVar1 & 0xef;
      *(float *)(lVar4 + 0x14 + param_3) = (float)local_14;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
    }
    iVar2 = FUN_18006e0d0(pauVar3,0x1800ed7a0,&local_10,&local_18);
    if (iVar2 == 1) {
      pauVar3 = (undefined1 (*) [32])FUN_180058310(*pauVar3 + local_18);
      pbVar1 = (byte *)(lVar4 + 0x22 + param_3);
      *pbVar1 = *pbVar1 | 0x10;
      *(undefined4 *)(lVar4 + 0x14 + param_3) = local_10;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
    }
    iVar2 = FUN_18006e0d0(pauVar3,0x1800ed7b0,&local_14,&local_18);
    if (iVar2 == 1) {
      pauVar3 = (undefined1 (*) [32])FUN_180058310(*pauVar3 + local_18);
      *(byte *)(lVar4 + 0x22 + param_3) =
           ((byte)local_14 & 3) << 2 | *(byte *)(lVar4 + 0x22 + param_3) & 0xf3;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 4;
    }
    iVar2 = FUN_18006e0d0(pauVar3,0x1800ed7c0,&local_14,&local_18);
    if (iVar2 == 1) {
      pauVar3 = (undefined1 (*) [32])FUN_180058310(*pauVar3 + local_18);
      *(undefined2 *)(lVar4 + 0x1e + param_3) = (undefined2)local_14;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 2;
    }
    iVar2 = FUN_18006e0d0(pauVar3,0x1800ed7d0,&local_14,local_res18);
    if (iVar2 == 2) {
      FUN_180058310(*pauVar3 + local_18);
      *(undefined2 *)(lVar4 + 0x20 + param_3) = (undefined2)local_14;
      *(byte *)(lVar4 + 0x22 + param_3) =
           (local_res18[0] == '^') + 1U | *(byte *)(lVar4 + 0x22 + param_3) & 0xfc;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 8;
    }
  }
  return;
}


int * FUN_180086670(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [32])

{
  int iVar1;
  int *piVar2;
  int local_res20 [2];
  int local_18 [4];

  local_res20[0] = 0;
  local_18[0] = 0;
  iVar1 = FUN_18006e0d0(param_3,0x1800ed750,local_res20,local_18);
  if (iVar1 < 2) {
    return (int *)0x0;
  }
  piVar2 = FUN_180086180(local_res20[0]);
  if (piVar2 != (int *)0x0) {
    if (local_18[0] <= *(short *)((longlong)piVar2 + 0xe)) {
      FUN_180086a40((undefined8 *)piVar2,local_res20[0],(short)local_18[0],
                    (int)*(short *)((longlong)piVar2 + 0xe));
      return piVar2;
    }
    *piVar2 = 0;
  }
  piVar2 = (int *)FUN_180086000(local_res20[0],local_18[0]);
  return piVar2;
}


void FUN_180086710(longlong param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;

  puVar10 = (uint *)0x0;
  if (*(longlong *)(param_1 + 0x2608) != 0) {
    puVar10 = (uint *)(*(longlong *)(param_1 + 0x2608) + 4);
  }
  while( true ) {
    if (puVar10 == (uint *)0x0) {
      return;
    }
    if (*puVar10 != 0) {
      uVar1 = puVar10[1];
      iVar4 = (short)puVar10[3] * 0x32;
      iVar7 = *param_3 + -1 + iVar4;
      if (*param_3 == 0) {
        iVar7 = iVar4;
      }
      iVar7 = iVar7 + 0x1e;
      if (param_3[1] < iVar7) {
        puVar3 = (undefined8 *)FUN_18005b560((longlong)iVar7);
        if (*(undefined8 **)(param_3 + 2) != (undefined8 *)0x0) {
          FUN_1800d1c20(puVar3,*(undefined8 **)(param_3 + 2),(longlong)*param_3);
          FUN_18005b5c0(*(longlong *)(param_3 + 2));
        }
        *(undefined8 **)(param_3 + 2) = puVar3;
        param_3[1] = iVar7;
      }
      uVar9 = (ulonglong)*puVar10;
      FUN_18006cca0(param_3,0x1800ed7e0,*param_2,uVar9);
      if ((float)puVar10[2] != 0.0) {
        FUN_18006cca0(param_3,0x1800ed7f8,(double)(float)puVar10[2],uVar9);
      }
      uVar8 = 0;
      pfVar6 = (float *)(puVar10 + 5);
      if (0 < (short)puVar10[3]) {
        do {
          if ((((uVar1 & 1) != 0 || pfVar6[1] != 0.0) || (uVar1 & 6) != 0) ||
             (((uVar1 & 8) != 0 && (*(short *)(pfVar6 + 3) != -1)))) {
            FUN_18006cca0(param_3,0x1800ed808,(ulonglong)uVar8,uVar9);
            if (pfVar6[1] != 0.0) {
              FUN_18006cca0(param_3,0x1800ed818,(ulonglong)(uint)pfVar6[1],uVar9);
            }
            if (((uVar1 & 1) != 0) &&
               (((*(byte *)((longlong)pfVar6 + 0xe) & 0x10) == 0 ||
                (FUN_18006cca0(param_3,0x1800ed828,(double)*pfVar6,uVar9),
                (*(byte *)((longlong)pfVar6 + 0xe) & 0x10) == 0)))) {
              FUN_18006cca0(param_3,0x1800ed838,(ulonglong)(uint)(int)*pfVar6,uVar9);
            }
            if ((uVar1 & 4) != 0) {
              FUN_18006cca0(param_3,0x1800ed848,
                            (ulonglong)
                            (uint)((int)(char)(*(char *)((longlong)pfVar6 + 0xe) << 4) >> 6),uVar9);
            }
            if ((uVar1 & 2) != 0) {
              FUN_18006cca0(param_3,0x1800ed858,
                            (ulonglong)(uint)(int)*(short *)((longlong)pfVar6 + 10),uVar9);
            }
            if (((uVar1 & 8) != 0) && (*(short *)(pfVar6 + 3) != -1)) {
              uVar9 = 0x5e;
              if ((*(byte *)((longlong)pfVar6 + 0xe) & 3) == 1) {
                uVar9 = 0x76;
              }
              FUN_18006cca0(param_3,0x1800ed868,(ulonglong)(uint)(int)*(short *)(pfVar6 + 3),uVar9);
            }
            FUN_18006cbb0(param_3,"\n",0);
          }
          uVar8 = uVar8 + 1;
          pfVar6 = pfVar6 + 4;
        } while ((int)uVar8 < (int)(short)puVar10[3]);
      }
      FUN_18006cbb0(param_3,"\n",0);
    }
    lVar2 = *(longlong *)(param_1 + 0x2608);
    puVar5 = (uint *)0x0;
    if (lVar2 != 0) {
      puVar5 = (uint *)(lVar2 + 4);
    }
    if ((puVar10 < puVar5) || ((uint *)(*(int *)(param_1 + 0x2600) + lVar2) <= puVar10)) {
      FID_conflict__assert
                (L"p >= begin() && p < end()",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x2d6);
    }
    puVar10 = (uint *)((longlong)puVar10 + (longlong)(int)puVar10[-1]);
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x2608) + (longlong)*(int *)(param_1 + 0x2600));
    if (puVar10 == puVar5 + 1) break;
    if (puVar5 <= puVar10) {
      FID_conflict__assert
                (L"p < end()",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x2d6);
    }
  }
  return;
}


void FUN_180086a40(undefined8 *param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  puVar1 = (undefined8 *)((longlong)param_1 + 0x14);
  if (0 < param_4) {
    iVar2 = param_4;
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0xffffffff;
        *(undefined2 *)((longlong)puVar1 + 0xc) = 0xffff;
        *(byte *)((longlong)puVar1 + 0xe) = *(byte *)((longlong)puVar1 + 0xe) & 0xec | 0xc;
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)param_1 = param_2;
  *(undefined2 *)((longlong)param_1 + 0xc) = param_3;
  *(short *)((longlong)param_1 + 0xe) = (short)param_4;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


void FUN_180086ad0(longlong param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;

  if ((param_3 & 0x18) == 0) {
    if (((*(uint *)(param_1 + 4) & 0xe000) - 0x2000 & 0xffffdfff) == 0) {
      param_3 = param_3 | 0x10;
    }
    else {
      param_3 = param_3 | 8;
    }
  }
  else if (((param_3 & 0x18) - 1 & param_3 & 0x18) != 0) {
    FID_conflict__assert
              (L"ImIsPowerOfTwo(flags & ImGuiTableColumnFlags_WidthMask_)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
               ,0x2f6);
  }
  uVar5 = param_3 | 0x20;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    uVar5 = param_3;
  }
  uVar2 = uVar5 | 0x200;
  if ((uVar5 & 0xc00) != 0xc00) {
    uVar2 = uVar5;
  }
  if ((uVar2 & 0x30000) == 0) {
    if ((param_2 < *(uint **)(param_1 + 0x18)) || (*(uint **)(param_1 + 0x20) <= param_2)) {
      FID_conflict__assert
                (L"it >= Data && it < DataEnd",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x28d);
    }
    lVar3 = (longlong)param_2 - *(longlong *)(param_1 + 0x18);
    iVar1 = (int)(lVar3 >> 0x3f);
    uVar5 = 0x20000;
    if ((int)(lVar3 / 0x74) + iVar1 == iVar1) {
      uVar5 = 0x10000;
    }
    uVar2 = uVar5 | uVar2;
  }
  *param_2 = *param_2 & 0xf000000;
  *param_2 = *param_2 | uVar2;
  *(byte *)((longlong)param_2 + 0x71) = *(byte *)((longlong)param_2 + 0x71) & 3;
  *(undefined1 *)((longlong)param_2 + 0x72) = 0;
  if ((*(uint *)(param_1 + 4) & 8) != 0) {
    uVar5 = 0;
    bVar6 = 0;
    if (((uVar2 & 0x4000) != 0) && ((uVar2 >> 10 & 1) == 0)) {
      bVar6 = 2;
      uVar5 = 1;
    }
    if (((uVar2 & 0x8000) == 0) || ((uVar2 >> 0xb & 1) != 0)) {
      uVar8 = uVar5;
    }
    else {
      bVar6 = bVar6 | 4;
      uVar8 = 2 << (char)uVar5 * '\x02' | uVar5;
      uVar5 = uVar5 + 1;
    }
    bVar7 = (byte)uVar8;
    if ((uVar2 & 0x4400) == 0) {
      bVar6 = bVar6 | 2;
      bVar7 = bVar7 | (byte)(1 << uVar5 * 2);
      uVar5 = uVar5 + 1;
    }
    if ((uVar2 & 0x8800) == 0) {
      bVar6 = bVar6 | 4;
      bVar7 = bVar7 | (byte)(2 << (char)uVar5 * '\x02');
      uVar5 = uVar5 + 1;
    }
    bVar4 = (byte)uVar5;
    if (((*(uint *)(param_1 + 4) >> 0x1b & 1) != 0) || (uVar5 == 0)) {
      bVar6 = bVar6 | 1;
      bVar4 = bVar4 + 1;
    }
    *(byte *)((longlong)param_2 + 0x72) = bVar7;
    *(byte *)((longlong)param_2 + 0x71) =
         (bVar4 & 3) << 2 | *(byte *)((longlong)param_2 + 0x71) | bVar6 << 4;
    FUN_180084910(param_1,(longlong)param_2);
  }
  return;
}


void FUN_180086ca0(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  ulonglong uVar7;
  short sVar8;
  int iVar9;

  sVar5 = 1;
  iVar9 = 1;
  if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
    iVar9 = (int)*(short *)(param_1 + 0x202);
  }
  if (((int)*(short *)(param_1 + 0x202) < *(int *)(param_1 + 0x6c)) ||
     (iVar4 = memcmp(*(void **)(param_1 + 0x58),*(void **)(param_1 + 0x50),
                     (longlong)(*(int *)(param_1 + 0x6c) + 0x1f >> 5) << 2), iVar4 != 0)) {
    bVar2 = true;
    iVar6 = 2;
    iVar4 = 3;
  }
  else {
    bVar2 = false;
    iVar4 = 2;
    iVar6 = 1;
  }
  sVar8 = 2;
  iVar6 = iVar6 + iVar9;
  if (0 < *(short *)(param_1 + 0x228)) {
    iVar6 = iVar4 + iVar9 * 2;
  }
  FUN_1800793f0(*(int **)(param_1 + 0x1a0),*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x2c0),
                iVar6 + 1);
  *(undefined2 *)(param_1 + 0x232) = 1;
  iVar4 = -1;
  if (bVar2) {
    iVar4 = iVar6;
  }
  *(short *)(param_1 + 0x230) = (short)iVar4;
  if (0 < *(short *)(param_1 + 0x228)) {
    sVar5 = (short)iVar9 + 2;
  }
  *(short *)(param_1 + 0x234) = sVar5;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    do {
      uVar7 = (longlong)iVar4 * 0x74 + *(ulonglong *)(param_1 + 0x18);
      if ((uVar7 < *(ulonglong *)(param_1 + 0x18)) || (*(ulonglong *)(param_1 + 0x20) <= uVar7)) {
        FID_conflict__assert
                  (L"p >= Data && p < DataEnd",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                   ,0x284);
      }
      if ((*(char *)(uVar7 + 0x69) == '\0') || (*(char *)(uVar7 + 0x6a) == '\0')) {
        sVar5 = *(short *)(param_1 + 0x230);
        *(short *)(uVar7 + 100) = sVar5;
        *(short *)(uVar7 + 0x62) = sVar5;
      }
      else {
        *(short *)(uVar7 + 0x62) = sVar8;
        sVar5 = 0;
        if (0 < *(short *)(param_1 + 0x228)) {
          sVar5 = (short)iVar9 + 1;
        }
        *(short *)(uVar7 + 100) = sVar5 + sVar8;
        sVar3 = sVar8 + 1;
        if ((*(uint *)(param_1 + 4) & 0x100000) != 0) {
          sVar3 = sVar8;
        }
        sVar5 = sVar8;
        sVar8 = sVar3;
      }
      iVar4 = iVar4 + 1;
      *(short *)(uVar7 + 0x60) = sVar5;
    } while (iVar4 < *(int *)(param_1 + 0x6c));
  }
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x128);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x260);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 600);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x168);
  if (*(float *)(param_1 + 0x134) <= *(float *)(param_1 + 0x13c)) {
    return;
  }
  FID_conflict__assert
            (L"table->BgClipRect.Min.y <= table->BgClipRect.Max.y",
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
             ,0x9de);
  return;
}


void FUN_180086ec0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;

  cVar1 = *(char *)(param_1 + 0x23a);
  if (cVar1 != '\0') {
    FUN_180087090(param_1);
    iVar6 = *(int *)(param_1 + 0x1e4);
    iVar7 = 0;
    if (1 < *(short *)(param_1 + 0x200)) {
      iVar7 = (int)*(short *)(param_1 + 0x200);
    }
    if (iVar6 < iVar7) {
      if (iVar6 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar6 / 2 + iVar6;
      }
      iVar2 = iVar7;
      if (iVar7 < iVar3) {
        iVar2 = iVar3;
      }
      if (iVar6 < iVar2) {
        puVar4 = (undefined8 *)FUN_18005b560((longlong)iVar2 * 0xc);
        if (*(undefined8 **)(param_1 + 0x1e8) != (undefined8 *)0x0) {
          FUN_1800d1c20(puVar4,*(undefined8 **)(param_1 + 0x1e8),
                        (longlong)*(int *)(param_1 + 0x1e0) * 0xc);
          FUN_18005b5c0(*(longlong *)(param_1 + 0x1e8));
        }
        *(undefined8 **)(param_1 + 0x1e8) = puVar4;
        *(int *)(param_1 + 0x1e4) = iVar2;
      }
    }
    *(int *)(param_1 + 0x1e0) = iVar7;
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    *(undefined1 *)(param_1 + 0x23a) = 0;
  }
  if (*(short *)(param_1 + 0x200) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x1d0;
    if (*(short *)(param_1 + 0x200) != 1) {
      lVar9 = *(longlong *)(param_1 + 0x1e8);
    }
  }
  if (((cVar1 != '\0') && (lVar9 != 0)) && (iVar6 = 0, 0 < *(int *)(param_1 + 0x6c))) {
    do {
      uVar8 = (longlong)iVar6 * 0x74 + *(ulonglong *)(param_1 + 0x18);
      if ((uVar8 < *(ulonglong *)(param_1 + 0x18)) || (*(ulonglong *)(param_1 + 0x20) <= uVar8)) {
        FID_conflict__assert
                  (L"p >= Data && p < DataEnd",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                   ,0x284);
      }
      if (*(short *)(uVar8 + 0x5e) != -1) {
        if (*(short *)(param_1 + 0x200) <= *(short *)(uVar8 + 0x5e)) {
          FID_conflict__assert
                    (L"column->SortOrder < table->SortSpecsCount",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                     ,0xbc2);
        }
        lVar5 = (longlong)*(short *)(uVar8 + 0x5e);
        *(undefined4 *)(lVar9 + lVar5 * 0xc) = *(undefined4 *)(uVar8 + 0x34);
        *(short *)(lVar9 + 4 + lVar5 * 0xc) = (short)iVar6;
        *(undefined2 *)(lVar9 + 6 + lVar5 * 0xc) = *(undefined2 *)(uVar8 + 0x5e);
        *(byte *)(lVar9 + 8 + lVar5 * 0xc) = *(byte *)(uVar8 + 0x71) & 3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x6c));
  }
  *(int *)(param_1 + 0x1f8) = (int)*(short *)(param_1 + 0x200);
  *(longlong *)(param_1 + 0x1f0) = lVar9;
  return;
}


void FUN_180087090(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int local_res10;

  if ((*(byte *)(param_1 + 4) & 8) == 0) {
    FID_conflict__assert
              (L"table->Flags & ImGuiTableFlags_Sortable",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
               ,0xb6e);
  }
  iVar9 = 0;
  uVar5 = 0;
  local_res10 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    do {
      uVar7 = (longlong)iVar6 * 0x74 + *(ulonglong *)(param_1 + 0x18);
      if ((uVar7 < *(ulonglong *)(param_1 + 0x18)) || (*(ulonglong *)(param_1 + 0x20) <= uVar7)) {
        FID_conflict__assert
                  (L"p >= Data && p < DataEnd",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                   ,0x284);
      }
      sVar3 = *(short *)(uVar7 + 0x5e);
      if (sVar3 != -1) {
        if (*(char *)(uVar7 + 0x66) == '\0') {
          *(undefined2 *)(uVar7 + 0x5e) = 0xffff;
          sVar3 = -1;
        }
        if (sVar3 != -1) {
          iVar9 = iVar9 + 1;
          uVar5 = uVar5 | 1L << ((longlong)sVar3 & 0x3fU);
          if (0x3f < iVar9) {
            FID_conflict__assert
                      (L"sort_order_count < (int)sizeof(sort_order_mask) * 8",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                       ,0xb7c);
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x6c));
    local_res10 = iVar9;
  }
  if ((local_res10 < 2) || ((*(uint *)(param_1 + 4) & 0x4000000) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((1L << ((byte)local_res10 & 0x3f) == uVar5 + 1) && (!bVar2)) || (local_res10 < 1)) {
    if (((local_res10 == 0) && ((*(uint *)(param_1 + 4) & 0x8000000) == 0)) &&
       (iVar6 = 0, 0 < *(int *)(param_1 + 0x6c))) {
      do {
        puVar8 = *(uint **)(param_1 + 0x18) + (longlong)iVar6 * 0x1d;
        if ((puVar8 < *(uint **)(param_1 + 0x18)) || (*(uint **)(param_1 + 0x20) <= puVar8)) {
          FID_conflict__assert
                    (L"p >= Data && p < DataEnd",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                     ,0x284);
        }
        if ((*(char *)((longlong)puVar8 + 0x66) != '\0') && ((*puVar8 & 0x200) == 0)) {
          local_res10 = 1;
          *(undefined2 *)((longlong)puVar8 + 0x5e) = 0;
          if ((*(byte *)((longlong)puVar8 + 0x71) >> 2 & 3) == 0) {
            FID_conflict__assert
                      (L"n < column->SortDirectionsAvailCount",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                       ,0xb2c);
          }
          *(byte *)((longlong)puVar8 + 0x71) =
               (*(byte *)((longlong)puVar8 + 0x71) ^ *(byte *)((longlong)puVar8 + 0x72)) & 3 ^
               *(byte *)((longlong)puVar8 + 0x71);
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x6c));
    }
  }
  else {
    iVar6 = 0;
    uVar5 = 0;
    do {
      iVar4 = 0;
      iVar9 = -1;
      if (*(int *)(param_1 + 0x6c) < 1) {
LAB_1800872a6:
        FID_conflict__assert
                  (L"column_with_smallest_sort_order != -1",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                   ,0xb8d);
      }
      else {
        do {
          if ((uVar5 >> ((longlong)iVar4 & 0x3fU) & 1) == 0) {
            lVar10 = (longlong)iVar4 * 0x74;
            uVar7 = lVar10 + *(ulonglong *)(param_1 + 0x18);
            if ((uVar7 < *(ulonglong *)(param_1 + 0x18)) ||
               (*(ulonglong *)(param_1 + 0x20) <= uVar7)) {
              FID_conflict__assert
                        (L"p >= Data && p < DataEnd",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                         ,0x284);
            }
            if (*(short *)(uVar7 + 0x5e) != -1) {
              if (iVar9 != -1) {
                uVar7 = (longlong)iVar9 * 0x74 + *(ulonglong *)(param_1 + 0x18);
                if ((uVar7 < *(ulonglong *)(param_1 + 0x18)) ||
                   (*(ulonglong *)(param_1 + 0x20) <= uVar7)) {
                  FID_conflict__assert
                            (L"p >= Data && p < DataEnd",
                             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                             ,0x284);
                }
                uVar1 = lVar10 + *(ulonglong *)(param_1 + 0x18);
                if ((uVar1 < *(ulonglong *)(param_1 + 0x18)) ||
                   (*(ulonglong *)(param_1 + 0x20) <= uVar1)) {
                  FID_conflict__assert
                            (L"p >= Data && p < DataEnd",
                             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                             ,0x284);
                }
                if (*(short *)(uVar7 + 0x5e) <= *(short *)(uVar1 + 0x5e)) goto LAB_180087295;
              }
              iVar9 = iVar4;
            }
          }
LAB_180087295:
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x6c));
        if (iVar9 == -1) goto LAB_1800872a6;
      }
      uVar5 = uVar5 | 1L << ((longlong)iVar9 & 0x3fU);
      uVar7 = (longlong)iVar9 * 0x74 + *(ulonglong *)(param_1 + 0x18);
      if ((uVar7 < *(ulonglong *)(param_1 + 0x18)) || (*(ulonglong *)(param_1 + 0x20) <= uVar7)) {
        FID_conflict__assert
                  (L"p >= Data && p < DataEnd",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                   ,0x284);
      }
      *(short *)(uVar7 + 0x5e) = (short)iVar6;
      if (bVar2) {
        iVar6 = 0;
        local_res10 = 1;
        if (0 < *(int *)(param_1 + 0x6c)) {
          do {
            if (iVar6 != iVar9) {
              uVar5 = (longlong)iVar6 * 0x74 + *(ulonglong *)(param_1 + 0x18);
              if ((uVar5 < *(ulonglong *)(param_1 + 0x18)) ||
                 (*(ulonglong *)(param_1 + 0x20) <= uVar5)) {
                FID_conflict__assert
                          (L"p >= Data && p < DataEnd",
                           L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                           ,0x284);
              }
              *(undefined2 *)(uVar5 + 0x5e) = 0xffff;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 0x6c));
        }
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_res10);
  }
  *(short *)(param_1 + 0x200) = (short)local_res10;
  return;
}


void FUN_180087460(longlong param_1)

{
  short *psVar1;
  uint *puVar2;
  short sVar3;
  short sVar4;
  uint *puVar5;
  char cVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int iVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  char local_res8 [8];
  char local_res10 [8];
  longlong local_res18;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;

  lVar16 = DAT_180115c10;
  local_res18 = DAT_180115c10;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FID_conflict__assert
              (L"table->Flags & ImGuiTableFlags_Resizable",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
               ,0x507);
  }
  sVar3 = *(short *)(param_1 + 0x78);
  if (sVar3 == 0) {
    lVar15 = param_1 + 0x1a8;
  }
  else {
    iVar12 = sVar3 + -1;
    if ((sVar3 < 1) || (*(int *)(param_1 + 0x1c0) <= iVar12)) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8) + (longlong)iVar12 * 0x18;
  }
  lVar7 = 0xf4;
  if (*(short *)(param_1 + 0x228) < 1) {
    lVar7 = 0x114;
  }
  fVar23 = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + lVar7);
  fVar21 = (fVar23 + *(float *)(lVar15 + 4)) - *(float *)(param_1 + 0xe8);
  if (0 < *(int *)(param_1 + 0x6c)) {
    uVar19 = 0;
    fVar24 = *(float *)(param_1 + 0xfc);
    if (*(float *)(param_1 + 0xfc) <= fVar21) {
      fVar24 = fVar21;
    }
    fVar21 = *(float *)(lVar15 + 8);
    fVar25 = (float)(int)(*(float *)(lVar16 + 0x10cc) * 4.0);
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x48) + ((longlong)(int)uVar19 >> 5) * 4) >>
           (uVar19 & 0x1f) & 1) != 0) {
        psVar1 = *(short **)(param_1 + 0x28) + (int)uVar19;
        if ((psVar1 < *(short **)(param_1 + 0x28)) || (*(short **)(param_1 + 0x30) <= psVar1)) {
          FID_conflict__assert
                    (L"p >= Data && p < DataEnd",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                     ,0x284);
        }
        sVar3 = *psVar1;
        lVar15 = (longlong)sVar3;
        puVar5 = *(uint **)(param_1 + 0x18);
        puVar2 = puVar5 + lVar15 * 0x1d;
        if ((puVar2 < puVar5) || (*(uint **)(param_1 + 0x20) <= puVar2)) {
          FID_conflict__assert
                    (L"p >= Data && p < DataEnd",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                     ,0x284);
        }
        if ((*puVar2 & 0x40000020) == 0) {
          if ((*(uint *)(param_1 + 4) & 0x800) == 0) {
            fVar22 = fVar24;
          }
          else {
            fVar22 = fVar23 + fVar21;
            if (*(char *)(param_1 + 0x23b) == '\0') goto LAB_180087897;
          }
          if ((*(char *)((longlong)puVar2 + 0x69) != '\0') || (*(short *)(param_1 + 0x214) == sVar3)
             ) {
            sVar4 = *(short *)(param_1 + 0x78);
            if ((sVar3 < 0) || (*(int *)(param_1 + 0x6c) <= (int)sVar3)) {
              FID_conflict__assert
                        (L"column_n >= 0 && column_n < table->ColumnsCount",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                         ,0x701);
            }
            if (sVar4 == 0) {
              piVar8 = (int *)(param_1 + 0x1a8);
            }
            else {
              iVar12 = sVar4 + -1;
              if ((sVar4 < 1) || (*(int *)(param_1 + 0x1c0) <= iVar12)) {
                FID_conflict__assert
                          (L"i >= 0 && i < Size",
                           L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                           ,0x833);
              }
              piVar8 = (int *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar12 * 0x18);
              lVar16 = local_res18;
            }
            iVar12 = (int)sVar3 + *piVar8;
            local_b8 = (float)puVar5[lVar15 * 0x1d + 3] - fVar25;
            local_b0 = (float)puVar5[lVar15 * 0x1d + 3] + fVar25;
            local_b4 = fVar23;
            local_ac = fVar22;
            FUN_18005a670(&local_b8,(wchar_t *)(ulonglong)(iVar12 + 1),(float *)0x0,2);
            pcVar18 = local_res8;
            local_res10[0] = '\0';
            pcVar17 = local_res10;
            local_res8[0] = '\0';
            pwVar11 = (wchar_t *)(ulonglong)(iVar12 + 1);
            cVar6 = FUN_18008f030(&local_b8,(float *)pwVar11,pcVar17,pcVar18,0x40910);
            if ((cVar6 == '\0') || (uVar9 = FUN_180059d10(0), (char)uVar9 == '\0')) {
              if (local_res8[0] != '\0') {
                if (*(short *)(param_1 + 0x214) == -1) {
                  if (*(short *)(param_1 + 0x21e) == -1) {
                    uVar20 = 0xff7fffff;
                  }
                  else {
                    uVar14 = (longlong)*(short *)(param_1 + 0x21e) * 0x74 +
                             *(ulonglong *)(param_1 + 0x18);
                    if ((uVar14 < *(ulonglong *)(param_1 + 0x18)) ||
                       (*(ulonglong *)(param_1 + 0x20) <= uVar14)) {
                      FID_conflict__assert
                                (L"p >= Data && p < DataEnd",
                                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                                 ,0x284);
                    }
                    uVar20 = *(undefined4 *)(uVar14 + 0xc);
                  }
                  *(undefined4 *)(param_1 + 0xe0) = uVar20;
                }
                *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x78);
                *(short *)(param_1 + 0x212) = sVar3;
              }
            }
            else {
              pwVar10 = *(wchar_t **)(param_1 + 0x18);
              pwVar13 = pwVar10 + lVar15 * 0x3a;
              if ((pwVar13 < pwVar10) || (*(wchar_t **)(param_1 + 0x20) <= pwVar13)) {
                pcVar17 = (char *)0x284;
                pwVar11 =
                L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                ;
                pwVar10 = L"p >= Data && p < DataEnd";
                FID_conflict__assert
                          (L"p >= Data && p < DataEnd",
                           L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                           ,0x284);
              }
              if ((char)pwVar13[0x33] != '\0') {
                *(undefined1 *)(pwVar13 + 0x38) = 1;
                *(short *)(param_1 + 0x210) = sVar3;
              }
              FUN_180051730(pwVar10,pwVar11,pcVar17,(ulonglong)pcVar18);
              local_res8[0] = '\0';
            }
            if (((local_res10[0] != '\0') && (0.06 < *(float *)(lVar16 + 0x1410))) ||
               (local_res8[0] != '\0')) {
              *(short *)(param_1 + 0x20c) = sVar3;
              FUN_180067540(4);
            }
          }
        }
      }
LAB_180087897:
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < *(int *)(param_1 + 0x6c));
  }
  return;
}


void FUN_180087910(uint *param_1)

{
  short *psVar1;
  uint *puVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  short sVar16;
  uint uVar17;
  uint *puVar18;
  short sVar19;
  byte *pbVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  ulonglong in_R9;
  int iVar24;
  int iVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [12];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int local_res8;
  short local_res10;
  int local_res18;
  float local_f8;
  float local_f4;
  uint local_f0;
  float local_ec;

  lVar5 = DAT_180115c10;
  if (*(char *)((longlong)param_1 + 0x237) != '\0') {
    FID_conflict__assert
              (L"table->IsLayoutLocked == false",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
               ,0x325);
  }
  uVar15 = param_1[1];
  *(undefined2 *)((longlong)param_1 + 0x202) = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  FUN_1800d22d0(*(undefined1 (**) [32])(param_1 + 0x14),0,
                (longlong)((int)(param_1[0x1b] + 0x1f) >> 5) << 2);
  FUN_1800d22d0(*(undefined1 (**) [32])(param_1 + 0x12),0,
                (longlong)((int)(param_1[0x1b] + 0x1f) >> 5) << 2);
  uVar17 = param_1[0x1b];
  bVar6 = false;
  bVar13 = false;
  *(undefined2 *)(param_1 + 0x87) = 0xffff;
  auVar30 = ZEXT812(0x3f800000);
  local_res10 = 0;
  if (auVar30._0_4_ <= *(float *)(lVar5 + 0xc68)) {
    auVar30._4_8_ = auVar30._4_8_;
    auVar30._0_4_ = *(float *)(lVar5 + 0xc68);
  }
  iVar24 = 0;
  local_res8 = 0;
  bVar11 = false;
  iVar23 = -1;
  fVar40 = 0.0;
  fVar37 = 0.0;
  param_1[0x2e] = auVar30._0_4_;
  iVar25 = 0;
  sVar16 = 0;
  if (0 < (int)uVar17) {
    do {
      local_res10 = sVar16;
      psVar1 = *(short **)(param_1 + 10) + iVar24;
      if ((psVar1 < *(short **)(param_1 + 10)) || (*(short **)(param_1 + 0xc) <= psVar1)) {
        FID_conflict__assert
                  (L"p >= Data && p < DataEnd",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                   ,0x284);
      }
      sVar16 = *psVar1;
      iVar25 = (int)sVar16;
      if (iVar25 != iVar24) {
        *(undefined1 *)(param_1 + 0x90) = 0;
      }
      puVar18 = *(uint **)(param_1 + 6) + (longlong)sVar16 * 0x1d;
      if ((puVar18 < *(uint **)(param_1 + 6)) || (*(uint **)(param_1 + 8) <= puVar18)) {
        FID_conflict__assert
                  (L"p >= Data && p < DataEnd",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                   ,0x284);
      }
      if (*(short *)((longlong)param_1 + 0x206) <= sVar16) {
        FUN_180086ad0((longlong)param_1,puVar18,0);
        puVar18[0xd] = 0;
        *(undefined2 *)(puVar18 + 0x15) = 0xffff;
        puVar18[8] = 0xbf800000;
      }
      uVar17 = *puVar18;
      if (((param_1[1] & 4) == 0) || ((char)uVar17 < '\0')) {
        *(undefined1 *)(puVar18 + 0x1a) = 1;
        cVar12 = '\x01';
      }
      else {
        cVar12 = (char)puVar18[0x1a];
      }
      if (*(char *)((longlong)puVar18 + 0x67) != cVar12) {
        *(char *)((longlong)puVar18 + 0x67) = cVar12;
        *(undefined1 *)((longlong)param_1 + 0x23f) = 1;
        uVar17 = *puVar18;
      }
      if ((*(char *)((longlong)puVar18 + 0x67) == '\0') || ((uVar17 & 1) != 0)) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x01';
      }
      sVar19 = *(short *)((longlong)puVar18 + 0x5e);
      *(char *)((longlong)puVar18 + 0x66) = cVar12;
      if (sVar19 != -1) {
        if (cVar12 == '\0') {
          *(undefined1 *)((longlong)param_1 + 0x23a) = 1;
          cVar12 = *(char *)((longlong)puVar18 + 0x66);
          sVar19 = *(short *)((longlong)puVar18 + 0x5e);
          uVar17 = *puVar18;
        }
        if ((0 < sVar19) && ((param_1[1] & 0x4000000) == 0)) {
          *(undefined1 *)((longlong)param_1 + 0x23a) = 1;
          cVar12 = *(char *)((longlong)puVar18 + 0x66);
          uVar17 = *puVar18;
        }
      }
      if ((uVar17 & 0x10) == 0) {
        fVar36 = (float)puVar18[7];
        fVar38 = (float)puVar18[7];
      }
      else {
        fVar36 = (float)puVar18[4];
        fVar38 = (float)puVar18[4];
      }
      if (fVar38 <= 0.0 && fVar36 != 0.0) {
        *(undefined2 *)((longlong)puVar18 + 0x6f) = 0x707;
      }
      bVar13 = bVar6;
      if (cVar12 == '\0') {
        *(undefined2 *)(puVar18 + 0x16) = 0xffff;
        iVar25 = iVar23;
LAB_180087d38:
        iVar23 = iVar25;
      }
      else {
        *(short *)((longlong)puVar18 + 0x5a) = (short)iVar23;
        *(undefined2 *)(puVar18 + 0x17) = 0xffff;
        if (iVar23 == -1) {
          *(short *)(param_1 + 0x87) = sVar16;
        }
        else {
          uVar21 = (longlong)iVar23 * 0x74 + *(ulonglong *)(param_1 + 6);
          if ((uVar21 < *(ulonglong *)(param_1 + 6)) || (*(ulonglong *)(param_1 + 8) <= uVar21)) {
            FID_conflict__assert
                      (L"p >= Data && p < DataEnd",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                       ,0x284);
          }
          *(short *)(uVar21 + 0x5c) = sVar16;
        }
        sVar19 = *(short *)((longlong)param_1 + 0x202);
        lVar26 = (longlong)sVar16 >> 5;
        *(short *)((longlong)param_1 + 0x202) = sVar19 + 1;
        *(short *)(puVar18 + 0x16) = sVar19;
        *(uint *)(*(longlong *)(param_1 + 0x14) + lVar26 * 4) =
             *(uint *)(*(longlong *)(param_1 + 0x14) + lVar26 * 4) | 1 << ((int)sVar16 & 0x1fU);
        lVar26 = (longlong)*(short *)((longlong)puVar18 + 0x56) >> 5;
        *(uint *)(*(longlong *)(param_1 + 0x12) + lVar26 * 4) =
             *(uint *)(*(longlong *)(param_1 + 0x12) + lVar26 * 4) |
             1 << ((int)*(short *)((longlong)puVar18 + 0x56) & 0x1fU);
        if (*(short *)((longlong)puVar18 + 0x56) < (short)puVar18[0x16]) {
          FID_conflict__assert
                    (L"column->IndexWithinEnabledSet <= column->DisplayOrder",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                     ,0x36f);
        }
        if ((*(char *)((longlong)puVar18 + 0x6d) == '\0') && ((short)param_1[0x1e] == 0)) {
          fVar36 = (float)puVar18[0x11];
          if ((float)puVar18[0x11] <= (float)puVar18[0x12]) {
            fVar36 = (float)puVar18[0x12];
          }
          uVar17 = *puVar18;
          fVar36 = fVar36 - (float)puVar18[0xe];
          if ((uVar17 >> 0xd & 1) == 0) {
            fVar38 = (float)puVar18[0x14] - (float)puVar18[0xe];
            if (fVar36 <= fVar38) {
              fVar36 = fVar38;
            }
          }
          if ((uVar17 & 0x10) != 0) {
            if ((0.0 < (float)puVar18[8]) && (((param_1[1] & 1) == 0 || ((uVar17 & 0x20) != 0)))) {
              fVar36 = (float)puVar18[8];
            }
          }
          if (fVar36 <= (float)param_1[0x2e]) {
            fVar36 = (float)param_1[0x2e];
          }
          puVar18[5] = (uint)fVar36;
        }
        uVar17 = *puVar18;
        if ((uVar17 & 0x20) == 0) {
          bVar11 = true;
        }
        if ((((uVar17 & 0x10) != 0) && (0.0 < (float)puVar18[8])) && ((uVar17 & 0x20) != 0)) {
          puVar18[5] = puVar18[8];
        }
        fVar36 = (float)puVar18[5];
        if (*(char *)((longlong)puVar18 + 0x6f) != '\0') {
          bVar13 = true;
        }
        if ((uVar17 & 8) == 0) {
          local_res10 = local_res10 + 1;
          if (fVar37 <= fVar36) {
            fVar37 = fVar36;
          }
          goto LAB_180087d38;
        }
        fVar40 = fVar40 + fVar36;
        local_res8 = local_res8 + 1;
        iVar23 = iVar25;
      }
      uVar17 = param_1[0x1b];
      iVar24 = iVar24 + 1;
      iVar25 = local_res8;
      bVar6 = bVar13;
      sVar16 = local_res10;
    } while (iVar24 < (int)uVar17);
  }
  if (((param_1[1] & 8) != 0) && ((short)param_1[0x80] == 0 && (param_1[1] & 0x8000000) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x23a) = 1;
  }
  *(short *)((longlong)param_1 + 0x21e) = (short)iVar23;
  if (((short)param_1[0x87] < 0) || ((short)iVar23 < 0)) {
    FID_conflict__assert
              (L"table->LeftMostEnabledColumn >= 0 && table->RightMostEnabledColumn >= 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
               ,0x38d);
    uVar17 = param_1[0x1b];
  }
  if (bVar13) {
    if (*(longlong *)(param_1 + 0x60) != *(longlong *)(param_1 + 0x62)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x62) + 0xd1) = 0;
      uVar17 = param_1[0x1b];
    }
    *(undefined1 *)((longlong)param_1 + 0x23f) = 1;
  }
  uVar22 = 0;
  param_1[0x88] = 0xffffffff;
  fVar36 = 0.0;
  fVar38 = 0.0;
  if (0 < (int)uVar17) {
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + ((longlong)(int)uVar22 >> 5) * 4) >>
           (uVar22 & 0x1f) & 1) != 0) {
        puVar18 = *(uint **)(param_1 + 6) + (longlong)(int)uVar22 * 0x1d;
        if ((puVar18 < *(uint **)(param_1 + 6)) || (*(uint **)(param_1 + 8) <= puVar18)) {
          FID_conflict__assert
                    (L"p >= Data && p < DataEnd",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                     ,0x284);
        }
        uVar17 = *puVar18 & 0x20;
        if ((*puVar18 & 0x10) == 0) {
          if (((*(char *)((longlong)puVar18 + 0x6f) != '\0') ||
              (fVar32 = (float)puVar18[7], fVar32 < 0.0)) || (uVar17 != 0)) {
            fVar32 = (float)puVar18[8];
            if (fVar32 <= 0.0) {
              if ((uVar15 & 0xe000) == 0x6000) {
                fVar32 = ((float)puVar18[5] / fVar40) * (float)iVar25;
                puVar18[7] = (uint)fVar32;
              }
              else {
                puVar18[7] = 0x3f800000;
                fVar32 = 1.0;
              }
            }
            else {
              puVar18[7] = (uint)fVar32;
            }
          }
          fVar38 = fVar38 + fVar32;
          if ((short)param_1[0x88] == -1) {
LAB_180087f60:
            *(short *)(param_1 + 0x88) = (short)uVar22;
          }
          else {
            uVar21 = (longlong)(short)param_1[0x88] * 0x74 + *(ulonglong *)(param_1 + 6);
            if ((uVar21 < *(ulonglong *)(param_1 + 6)) || (*(ulonglong *)(param_1 + 8) <= uVar21)) {
              FID_conflict__assert
                        (L"p >= Data && p < DataEnd",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                         ,0x284);
            }
            if (*(short *)((longlong)puVar18 + 0x56) < *(short *)(uVar21 + 0x56))
            goto LAB_180087f60;
          }
          if (*(short *)((longlong)param_1 + 0x222) != -1) {
            uVar21 = (longlong)*(short *)((longlong)param_1 + 0x222) * 0x74 +
                     *(ulonglong *)(param_1 + 6);
            if ((uVar21 < *(ulonglong *)(param_1 + 6)) || (*(ulonglong *)(param_1 + 8) <= uVar21)) {
              FID_conflict__assert
                        (L"p >= Data && p < DataEnd",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                         ,0x284);
            }
            if (*(short *)((longlong)puVar18 + 0x56) <= *(short *)(uVar21 + 0x56))
            goto LAB_180087fb5;
          }
          *(short *)((longlong)param_1 + 0x222) = (short)uVar22;
        }
        else {
          fVar32 = (float)puVar18[5];
          if (((uVar15 & 0xe000) == 0x4000) &&
             ((*(char *)((longlong)puVar18 + 0x6f) != '\0' || (uVar17 != 0)))) {
            fVar32 = fVar37;
          }
          if (*(byte *)((longlong)puVar18 + 0x6f) == 0) {
            if ((uVar17 != 0) && (*(char *)((longlong)puVar18 + 0x6b) != '\0')) {
              puVar18[4] = (uint)fVar32;
            }
          }
          else {
            puVar18[4] = (uint)fVar32;
            if (((1 < *(byte *)((longlong)puVar18 + 0x6f)) &&
                (*(char *)((longlong)param_1 + 0x239) != '\0')) &&
               (*(char *)((longlong)puVar18 + 0x6d) == '\0')) {
              if (fVar32 <= (float)param_1[0x2e] * 4.0) {
                fVar32 = (float)param_1[0x2e] * 4.0;
              }
              puVar18[4] = (uint)fVar32;
              fVar36 = fVar36 + fVar32;
              goto LAB_180087fb5;
            }
          }
          fVar36 = fVar36 + (float)puVar18[4];
        }
LAB_180087fb5:
        *(undefined1 *)((longlong)puVar18 + 0x6d) = 0;
        fVar36 = fVar36 + (float)param_1[0x30] + (float)param_1[0x30];
      }
      uVar17 = param_1[0x1b];
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < (int)uVar17);
  }
  fVar37 = (float)param_1[0x45];
  fVar40 = (float)param_1[0x44];
  *(short *)(param_1 + 0x81) = local_res10;
  param_1[0x36] = (uint)fVar38;
  fVar32 = ((float)param_1[0x32] + (float)param_1[0x31]) *
           (float)(*(short *)((longlong)param_1 + 0x202) + -1) +
           (float)param_1[0x2f] + (float)param_1[0x2f];
  if (((char)param_1[0x92] == '\0') || (*(char *)(*(longlong *)(param_1 + 0x62) + 0xc9) != '\0')) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = *(float *)(lVar5 + 0xca0);
  }
  uVar15 = param_1[1];
  if (((uVar15 >> 0x18 & 1) == 0) || ((float)param_1[0x33] != 0.0)) {
    fVar27 = (float)param_1[0x46] - fVar40;
  }
  else {
    fVar27 = (float)param_1[0x4a] - (float)param_1[0x48];
  }
  uVar22 = 0;
  fVar39 = 1.0;
  if (1.0 <= fVar27 - fVar28) {
    fVar39 = fVar27 - fVar28;
  }
  fVar36 = (fVar39 - fVar32) - fVar36;
  param_1[0x34] =
       (uint)(((float)param_1[0x30] + (float)param_1[0x30]) *
              (float)(int)*(short *)((longlong)param_1 + 0x202) + fVar32);
  fVar32 = fVar36;
  if (0 < (int)uVar17) {
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + ((longlong)(int)uVar22 >> 5) * 4) >>
           (uVar22 & 0x1f) & 1) != 0) {
        puVar18 = *(uint **)(param_1 + 6) + (longlong)(int)uVar22 * 0x1d;
        if ((puVar18 < *(uint **)(param_1 + 6)) || (*(uint **)(param_1 + 8) <= puVar18)) {
          FID_conflict__assert
                    (L"p >= Data && p < DataEnd",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                     ,0x284);
        }
        if ((*puVar18 & 8) != 0) {
          fVar28 = ((float)puVar18[7] / fVar38) * fVar36;
          if (fVar28 <= (float)param_1[0x2e]) {
            fVar28 = (float)param_1[0x2e];
          }
          puVar18[4] = (uint)(float)(int)(fVar28 + 0.01);
          fVar32 = fVar32 - (float)(int)(fVar28 + 0.01);
        }
        if (((short)puVar18[0x17] == -1) && ((short)param_1[0x88] != -1)) {
          *puVar18 = *puVar18 | 0x40000000;
        }
        fVar28 = (float)puVar18[4];
        if ((float)puVar18[4] <= (float)param_1[0x2e]) {
          fVar28 = (float)param_1[0x2e];
        }
        puVar18[1] = (uint)(float)(int)fVar28;
        param_1[0x34] = (uint)((float)(int)fVar28 + (float)param_1[0x34]);
      }
      uVar17 = param_1[0x1b];
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < (int)uVar17);
    uVar15 = param_1[1];
  }
  if (((1.0 <= fVar32) && ((uVar15 >> 0x13 & 1) == 0)) && (0.0 < fVar38)) {
    while ((uVar17 = uVar17 - 1, 1.0 <= fVar32 && (-1 < (int)uVar17))) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x12) + ((longlong)(int)uVar17 >> 5) * 4) >>
           (uVar17 & 0x1f) & 1) != 0) {
        psVar1 = *(short **)(param_1 + 10) + (int)uVar17;
        if ((psVar1 < *(short **)(param_1 + 10)) || (*(short **)(param_1 + 0xc) <= psVar1)) {
          FID_conflict__assert
                    (L"p >= Data && p < DataEnd",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                     ,0x284);
        }
        pbVar20 = *(byte **)(param_1 + 6) + (longlong)*psVar1 * 0x74;
        if ((pbVar20 < *(byte **)(param_1 + 6)) || (*(byte **)(param_1 + 8) <= pbVar20)) {
          FID_conflict__assert
                    (L"p >= Data && p < DataEnd",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                     ,0x284);
        }
        if ((*pbVar20 & 8) != 0) {
          fVar32 = fVar32 - 1.0;
          *(float *)(pbVar20 + 0x10) = *(float *)(pbVar20 + 0x10) + 1.0;
          *(float *)(pbVar20 + 4) = *(float *)(pbVar20 + 4) + 1.0;
        }
      }
    }
  }
  sVar16 = (short)param_1[0x1e];
  if (sVar16 == 0) {
    puVar18 = param_1 + 0x6a;
  }
  else {
    iVar25 = sVar16 + -1;
    if ((sVar16 < 1) || ((int)param_1[0x70] <= iVar25)) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    puVar18 = (uint *)(*(longlong *)(param_1 + 0x72) + (longlong)iVar25 * 0x18);
  }
  puVar18[4] = puVar18[5];
  puVar18[5] = 0xffffffff;
  local_f4 = (float)param_1[0x3d];
  *(undefined4 *)((longlong)param_1 + 0x20a) = 0xffffffff;
  local_f0 = param_1[0x3e];
  local_ec = (float)param_1[0x3f];
  if ((float)param_1[0x3f] <= local_f4 + (float)puVar18[1]) {
    local_ec = local_f4 + (float)puVar18[1];
  }
  local_f8 = (float)param_1[0x3c];
  uVar4 = *(undefined4 *)(lVar5 + 0x141c);
  *(undefined4 *)(lVar5 + 0x141c) = 0;
  bVar13 = FUN_18005a9d0(&local_f8,0,(float *)0x0,in_R9);
  fVar36 = *(float *)(lVar5 + 0xe8);
  *(undefined4 *)(lVar5 + 0x141c) = uVar4;
  if (0.0 < (float)param_1[0x3a]) {
    fVar38 = *(float *)(lVar5 + 0xec);
    if (((float)param_1[0x3d] <= fVar38) &&
       (fVar32 = (float)param_1[0x3a] + (float)param_1[0x3d], fVar38 <= fVar32)) {
      fVar36 = (float)(int)((fVar32 - fVar38) * (float)param_1[0x3b]) + fVar36;
    }
  }
  bVar10 = false;
  bVar9 = false;
  local_res18 = 0;
  bVar6 = 0 < (short)param_1[0x8b];
  if ((short)param_1[0x8b] < 1) {
    fVar38 = fVar40;
  }
  else {
    fVar38 = (float)param_1[0x3c];
  }
  fVar32 = (float)param_1[0x48];
  fVar28 = (float)param_1[0x49];
  fVar27 = (float)param_1[0x4a];
  fVar39 = (fVar38 + (float)param_1[0x2f]) - (float)param_1[0x31];
  fVar38 = (float)param_1[0x4b];
  FUN_1800d22d0(*(undefined1 (**) [32])(param_1 + 0x16),0,
                (longlong)((int)(param_1[0x1b] + 0x1f) >> 5) << 2);
  iVar25 = 0;
  if ((int)param_1[0x1b] < 1) {
LAB_1800889d6:
    uVar21 = (longlong)(short)param_1[0x87] * 0x74 + *(ulonglong *)(param_1 + 6);
    if ((uVar21 < *(ulonglong *)(param_1 + 6)) || (*(ulonglong *)(param_1 + 8) <= uVar21)) {
      FID_conflict__assert
                (L"p >= Data && p < DataEnd",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x284);
    }
    *(undefined1 *)(uVar21 + 0x6b) = 1;
    uVar21 = (longlong)(short)param_1[0x87] * 0x74 + *(ulonglong *)(param_1 + 6);
    if ((uVar21 < *(ulonglong *)(param_1 + 6)) || (*(ulonglong *)(param_1 + 8) <= uVar21)) {
      FID_conflict__assert
                (L"p >= Data && p < DataEnd",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x284);
    }
    *(undefined1 *)(uVar21 + 0x6c) = 0;
  }
  else {
    do {
      psVar1 = *(short **)(param_1 + 10) + iVar25;
      if ((psVar1 < *(short **)(param_1 + 10)) || (*(short **)(param_1 + 0xc) <= psVar1)) {
        FID_conflict__assert
                  (L"p >= Data && p < DataEnd",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                   ,0x284);
      }
      sVar16 = *psVar1;
      lVar26 = (longlong)sVar16;
      puVar2 = *(uint **)(param_1 + 6) + lVar26 * 0x1d;
      if ((puVar2 < *(uint **)(param_1 + 6)) || (*(uint **)(param_1 + 8) <= puVar2)) {
        FID_conflict__assert
                  (L"p >= Data && p < DataEnd",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                   ,0x284);
      }
      uVar14 = 1;
      if ((short)param_1[0x8a] < 1) {
        uVar14 = *(undefined1 *)((longlong)param_1 + 0x236);
      }
      *(undefined1 *)((longlong)puVar2 + 0x6e) = uVar14;
      if ((bVar6) && ((short)param_1[0x8b] == local_res18)) {
        bVar6 = false;
        fVar39 = fVar39 + (fVar40 - (float)param_1[0x3c]);
      }
      *puVar2 = *puVar2 & 0xf0ffffff;
      uVar15 = *(uint *)(*(longlong *)(param_1 + 0x12) + ((longlong)iVar25 >> 5) * 4);
      puVar2[2] = (uint)fVar39;
      if ((1 << ((byte)iVar25 & 0x1f) & uVar15) == 0) {
        puVar2[1] = 0;
        puVar2[0xe] = (uint)fVar39;
        puVar2[3] = (uint)fVar39;
        if (fVar28 <= fVar37) {
          fVar29 = fVar38;
          if (fVar37 <= fVar38) {
            fVar29 = fVar37;
          }
        }
        else {
          fVar29 = fVar28;
        }
        if (fVar32 <= fVar39) {
          fVar34 = fVar27;
          if (fVar39 <= fVar27) {
            fVar34 = fVar39;
          }
        }
        else {
          fVar34 = fVar32;
        }
        puVar2[9] = (uint)fVar34;
        puVar2[10] = (uint)fVar29;
        if (fVar28 <= 3.4028235e+38) {
          fVar29 = fVar38;
          if (3.4028235e+38 <= fVar38) {
            fVar29 = 3.4028235e+38;
          }
        }
        else {
          fVar29 = fVar28;
        }
        if (fVar32 <= fVar39) {
          fVar34 = fVar27;
          if (fVar39 <= fVar27) {
            fVar34 = fVar39;
          }
        }
        else {
          fVar34 = fVar32;
        }
        puVar2[0xb] = (uint)fVar34;
        puVar2[0xc] = (uint)fVar29;
        *(undefined2 *)((longlong)puVar2 + 0x6a) = 0;
        *(undefined1 *)((longlong)puVar2 + 0x69) = 0;
        *(undefined1 *)(puVar2 + 0x1b) = 1;
        puVar2[0x10] = 0x3f800000;
      }
      else {
        uVar21 = lVar26 * 0x74 + *(ulonglong *)(param_1 + 6);
        if ((uVar21 < *(ulonglong *)(param_1 + 6)) || (*(ulonglong *)(param_1 + 8) <= uVar21)) {
          FID_conflict__assert
                    (L"p >= Data && p < DataEnd",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                     ,0x285);
          fVar29 = (float)puVar2[2];
        }
        else {
          fVar29 = fVar39;
        }
        fVar34 = (float)param_1[0x30];
        fVar31 = 3.4028235e+38;
        fVar3 = (float)param_1[0x32];
        fVar33 = fVar34 + fVar34 + (float)param_1[0x2e] + (float)param_1[0x31] + fVar3;
        if ((param_1[1] >> 0x18 & 1) == 0) {
          if ((param_1[1] >> 0x12 & 1) == 0) {
            fVar31 = (((((float)param_1[0x46] -
                        (float)(((int)*(short *)((longlong)param_1 + 0x202) -
                                (int)*(short *)(uVar21 + 0x58)) + -1) * fVar33) -
                       *(float *)(uVar21 + 8)) - fVar3) - (fVar34 + fVar34)) - (float)param_1[0x2f];
          }
        }
        else if (*(short *)(uVar21 + 0x56) < *(short *)((longlong)param_1 + 0x22a)) {
          fVar31 = (((((float)param_1[0x4a] -
                      (float)((int)*(short *)((longlong)param_1 + 0x22a) -
                             (int)*(short *)(uVar21 + 0x56)) * fVar33) - *(float *)(uVar21 + 8)) -
                    (float)param_1[0x2f]) - fVar34) - fVar3;
        }
        fVar34 = (float)puVar2[1];
        if (fVar31 <= (float)puVar2[1]) {
          fVar34 = fVar31;
        }
        fVar3 = (float)puVar2[0xe];
        puVar2[1] = (uint)fVar34;
        puVar2[6] = (uint)fVar31;
        fVar31 = (float)puVar2[4];
        if ((float)param_1[0x2e] <= (float)puVar2[4]) {
          fVar31 = (float)param_1[0x2e];
        }
        if (fVar34 <= fVar31) {
          fVar34 = fVar31;
        }
        puVar2[1] = (uint)fVar34;
        fVar35 = fVar34 + fVar39 + (float)param_1[0x31] + (float)param_1[0x32] +
                 (float)param_1[0x30] + (float)param_1[0x30];
        puVar2[3] = (uint)fVar35;
        puVar2[0xe] = (uint)(fVar29 + (float)param_1[0x30] + (float)param_1[0x31]);
        fVar31 = (float)param_1[0x30];
        fVar33 = (float)param_1[0x32];
        puVar2[0x10] = (uint)(float)(int)(fVar34 * 0.65);
        puVar2[0xf] = (uint)((fVar35 - fVar31) - fVar33);
        if (fVar28 <= fVar37) {
          fVar34 = fVar38;
          if (fVar37 <= fVar38) {
            fVar34 = fVar37;
          }
        }
        else {
          fVar34 = fVar28;
        }
        if (fVar32 <= fVar29) {
          fVar31 = fVar27;
          if (fVar29 <= fVar27) {
            fVar31 = fVar29;
          }
        }
        else {
          fVar31 = fVar32;
        }
        puVar2[9] = (uint)fVar31;
        puVar2[10] = (uint)fVar34;
        if (fVar28 <= 3.4028235e+38) {
          fVar29 = fVar38;
          if (3.4028235e+38 <= fVar38) {
            fVar29 = 3.4028235e+38;
          }
        }
        else {
          fVar29 = fVar28;
        }
        if (fVar32 <= fVar35) {
          fVar34 = fVar27;
          if (fVar35 <= fVar27) {
            fVar34 = fVar35;
          }
        }
        else {
          fVar34 = fVar32;
        }
        puVar2[0xb] = (uint)fVar34;
        puVar2[0xc] = (uint)fVar29;
        *(undefined1 *)((longlong)puVar2 + 0x6a) = 1;
        bVar7 = fVar31 < fVar34;
        *(bool *)((longlong)puVar2 + 0x69) = bVar7;
        if (bVar7) {
          *(uint *)(*(longlong *)(param_1 + 0x16) + (lVar26 >> 5) * 4) =
               *(uint *)(*(longlong *)(param_1 + 0x16) + (lVar26 >> 5) * 4) |
               1 << ((int)sVar16 & 0x1fU);
LAB_180088842:
          cVar12 = '\x01';
        }
        else {
          if ((*(char *)((longlong)puVar2 + 0x6f) != '\0') || ((char)puVar2[0x1c] != '\0'))
          goto LAB_180088842;
          cVar12 = '\0';
        }
        *(char *)((longlong)puVar2 + 0x6b) = cVar12;
        if ((*(char *)((longlong)puVar2 + 0x66) == '\0') ||
           (*(char *)((longlong)param_1 + 0x24a) != '\0')) {
          *(undefined1 *)(puVar2 + 0x1b) = 1;
          if (bVar7) {
            FID_conflict__assert
                      (L"!is_visible",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_tables.cpp"
                       ,0x46c);
            cVar12 = *(char *)((longlong)puVar2 + 0x6b);
          }
        }
        else {
          *(undefined1 *)(puVar2 + 0x1b) = 0;
        }
        if (cVar12 != '\0') {
          bVar9 = bVar10;
          if ((char)puVar2[0x1b] == '\0') {
            bVar9 = true;
            bVar10 = true;
          }
        }
        uVar15 = *puVar2;
        *puVar2 = uVar15 | 0x1000000;
        if (bVar7) {
          uVar22 = 0x7000000;
          *puVar2 = uVar15 | 0x3000000;
          uVar17 = 0x3000000;
        }
        else {
          uVar17 = 0x1000000;
          uVar22 = 0x5000000;
        }
        if (*(short *)((longlong)puVar2 + 0x5e) != -1) {
          *puVar2 = uVar22 | uVar15;
          uVar17 = uVar22;
        }
        if (((bVar13) && ((float)puVar2[9] <= fVar36)) && (fVar36 < (float)puVar2[0xb])) {
          *puVar2 = uVar17 | uVar15 | 0x8000000;
          *(short *)((longlong)param_1 + 0x20a) = sVar16;
        }
        fVar29 = (float)puVar2[0xe];
        if ((short)param_1[0x1e] == 0) {
          puVar2[0x11] = (uint)fVar29;
          puVar2[0x12] = (uint)fVar29;
          puVar2[0x13] = (uint)fVar29;
          puVar2[0x14] = (uint)fVar29;
        }
        else {
          fVar29 = fVar29 - fVar3;
          puVar2[0x11] = (uint)((float)puVar2[0x11] + fVar29);
          puVar2[0x12] = (uint)((float)puVar2[0x12] + fVar29);
          puVar2[0x13] = (uint)((float)puVar2[0x13] + fVar29);
          puVar2[0x14] = (uint)((float)puVar2[0x14] + fVar29);
        }
        if ((*(char *)((longlong)param_1 + 0x24a) == '\0') && ((short)param_1[0x1e] == 0)) {
          *(byte *)((longlong)puVar2 + 0x6fU) = *(byte *)((longlong)puVar2 + 0x6fU) >> 1;
          *(byte *)(puVar2 + 0x1c) = (byte)puVar2[0x1c] >> 1;
        }
        if (local_res18 < (short)param_1[0x8b]) {
          fVar29 = (float)puVar2[3] + 1.0;
          if ((fVar32 <= fVar29) && (fVar32 = fVar27, fVar29 <= fVar27)) {
            fVar32 = fVar29;
          }
        }
        local_res18 = local_res18 + 1;
        fVar39 = fVar39 + (float)puVar2[1] + (float)param_1[0x31] + (float)param_1[0x32] +
                          (float)param_1[0x30] + (float)param_1[0x30];
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < (int)param_1[0x1b]);
    if (!bVar9) goto LAB_1800889d6;
  }
  uVar21 = (longlong)*(short *)((longlong)param_1 + 0x21e) * 0x74 + *(ulonglong *)(param_1 + 6);
  if ((uVar21 < *(ulonglong *)(param_1 + 6)) || (*(ulonglong *)(param_1 + 8) <= uVar21)) {
    FID_conflict__assert
              (L"p >= Data && p < DataEnd",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0x284);
  }
  fVar37 = (float)param_1[0x44];
  if ((float)param_1[0x44] <= *(float *)(uVar21 + 0x2c)) {
    fVar37 = *(float *)(uVar21 + 0x2c);
  }
  if (((bVar13) && (*(short *)((longlong)param_1 + 0x20a) == -1)) && (fVar37 <= fVar36)) {
    *(short *)((longlong)param_1 + 0x20a) = (short)param_1[0x1b];
  }
  if ((!bVar11) && ((param_1[1] & 1) != 0)) {
    param_1[1] = param_1[1] & 0xfffffffe;
  }
  *(bool *)((longlong)param_1 + 0x245) = *(int *)(lVar5 + 0x1420) != 0;
  if (*(short *)((longlong)param_1 + 0x222) != -1) {
    param_1[1] = param_1[1] & 0xfffeffff;
  }
  if ((param_1[1] & 0x10000) != 0) {
    fVar40 = (float)param_1[0x4a];
    if (fVar37 <= (float)param_1[0x4a]) {
      fVar40 = fVar37;
    }
    param_1[0x46] = (uint)fVar37;
    param_1[0x3e] = (uint)fVar37;
    param_1[0x4a] = (uint)fVar40;
  }
  lVar26 = *(longlong *)(param_1 + 0x62);
  uVar8 = *(undefined8 *)(param_1 + 0x46);
  *(undefined8 *)(lVar26 + 0x248) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(lVar26 + 0x250) = uVar8;
  param_1[0x2b] = param_1[0x48];
  param_1[0x2c] = param_1[0x4a];
  if ((param_1[1] >> 0x11 & 1) == 0) {
    if ((param_1[1] >> 0x19 & 1) == 0) {
      fVar37 = (float)param_1[0x3f];
    }
    else {
      fVar37 = 0.0;
    }
    fVar40 = *(float *)(*(longlong *)(param_1 + 0x62) + 0x274);
    if (*(float *)(*(longlong *)(param_1 + 0x62) + 0x274) <= fVar37) {
      fVar40 = fVar37;
    }
  }
  else {
    fVar40 = (float)param_1[0x3f];
  }
  lVar26 = *(longlong *)(param_1 + 0x62);
  fVar40 = fVar40 - *(float *)(lVar5 + 0xc8c);
  fVar37 = *(float *)(lVar26 + 0x23c);
  if ((*(float *)(lVar26 + 0x23c) <= fVar40) &&
     (fVar37 = *(float *)(lVar26 + 0x244), fVar40 <= *(float *)(lVar26 + 0x244))) {
    fVar37 = fVar40;
  }
  *(float *)(lVar26 + 0x244) = fVar37;
  FUN_180086ca0((longlong)param_1);
  if ((param_1[1] & 1) != 0) {
    FUN_180087460((longlong)param_1);
  }
  puVar18[2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x237) = 1;
  *(undefined1 *)((longlong)param_1 + 0x23b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20e) = 0xffff;
  if ((((char)param_1[0x8f] == '\0') || (sVar16 = (short)param_1[0x89], sVar16 == -1)) ||
     (*(short *)((longlong)param_1 + 0x7a) != (short)param_1[0x1e])) {
    if ((param_1[1] & 0x10000000) == 0) goto LAB_180088cc0;
    sVar16 = *(short *)((longlong)param_1 + 0x20a);
    if ((((sVar16 == -1) || ((int)sVar16 == param_1[0x1b])) || ((short)param_1[0x83] != -1)) ||
       (((*(int *)(lVar5 + 0x141c) != 0 && (*(char *)((longlong)param_1 + 0x246) == '\0')) &&
        (*(char *)(lVar5 + 0x2114) == '\0')))) goto LAB_180088cc0;
  }
  *(short *)((longlong)param_1 + 0x20e) = sVar16;
LAB_180088cc0:
  if (((*(char *)((longlong)param_1 + 0x23d) == '\0') && ((char)param_1[0x8f] != '\0')) &&
     ((short)param_1[0x1e] == *(short *)((longlong)param_1 + 0x7a))) {
    uVar15 = FUN_180058260((byte *)"##ContextMenu",0,*param_1);
    uVar21 = FUN_180050130(uVar15,0x141);
    if ((char)uVar21 == '\0') {
      *(undefined1 *)(param_1 + 0x8f) = 0;
    }
    else {
      FUN_180083cb0((longlong)param_1,(ulonglong)param_1[1]);
      FUN_180054790();
    }
  }
  if ((*(char *)((longlong)param_1 + 0x23a) != '\0') && ((param_1[1] & 8) != 0)) {
    FUN_180086ec0((longlong)param_1);
  }
  if (0 < *(short *)((longlong)param_1 + 0x22a)) {
    psVar1 = *(short **)(param_1 + 10) + (longlong)*(short *)((longlong)param_1 + 0x22a) + -1;
    if ((psVar1 < *(short **)(param_1 + 10)) || (*(short **)(param_1 + 0xc) <= psVar1)) {
      FID_conflict__assert
                (L"p >= Data && p < DataEnd",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x284);
    }
    uVar21 = (longlong)*psVar1 * 0x74 + *(ulonglong *)(param_1 + 6);
    if ((uVar21 < *(ulonglong *)(param_1 + 6)) || (*(ulonglong *)(param_1 + 8) <= uVar21)) {
      FID_conflict__assert
                (L"p >= Data && p < DataEnd",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x284);
    }
    *(float *)(*(longlong *)(param_1 + 0x62) + 0x80) =
         *(float *)(uVar21 + 0xc) - (float)param_1[0x3c];
  }
  if (0 < *(short *)((longlong)param_1 + 0x226)) {
    *(uint *)(*(longlong *)(param_1 + 0x62) + 0x84) = puVar18[3];
  }
  puVar18[3] = 0;
  lVar5 = *(longlong *)(param_1 + 0x62);
  if ((param_1[1] & 0x100000) == 0) {
    FUN_180076360(*(int **)(lVar5 + 0x2c0),(float *)(lVar5 + 0x228),(float *)(lVar5 + 0x230),'\0');
    return;
  }
  FUN_1800789b0(*(int **)(param_1 + 0x68),*(int **)(lVar5 + 0x2c0),2);
  return;
}


ulonglong FUN_180088e40(uint param_1,uint *param_2,float param_3,uint param_4,uint param_5,
                       byte *param_6,uint param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  float fVar18;
  uint local_a4;

  lVar4 = DAT_180115c10;
  uVar12 = param_7 & 0x100000;
  if (((int)param_4 < (int)param_5) ||
     ((param_4 == param_5 && (((float)(int)param_4 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar5 = true;
    bVar3 = true;
    bVar2 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_180088ee4;
  }
  else {
    bVar5 = false;
    bVar3 = false;
LAB_180088ee4:
    bVar2 = false;
  }
  uVar13 = param_7 & 0x20;
  bVar14 = uVar13 != 0;
  bVar1 = param_1 - 8 < 2;
  local_a4 = (uint)!bVar1;
  if (((param_3 == 0.0) && (bVar5)) && ((float)(int)(param_5 - param_4) < 3.4028235e+38)) {
    param_3 = (float)(int)(param_5 - param_4) * *(float *)(DAT_180115c10 + 0x250c);
  }
  if (((*(int *)(DAT_180115c10 + 0x1448) == 1) &&
      (uVar7 = FUN_18005a100((float *)0x0), (char)uVar7 != '\0')) &&
     (bVar5 = FUN_180059f30(0,*(float *)(lVar4 + 0x78) * 0.5), bVar5)) {
    pfVar8 = (float *)FUN_18004b820(lVar4 + 0xd4,(ulonglong)(uVar12 != 0));
    fVar18 = *pfVar8;
    if ((*(char *)(lVar4 + 0x106) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar18 = fVar18 * 0.01;
    }
    if ((*(char *)(lVar4 + 0x105) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar18 = fVar18 * 10.0;
    }
  }
  else if (*(int *)(lVar4 + 0x1448) - 2U < 2) {
    if (bVar1) {
      uVar6 = FUN_180096010((char *)param_6,3);
    }
    else {
      uVar6 = 0;
    }
    uVar11 = 0x1000;
    if (*(int *)(lVar4 + 8000) == 3) {
      uVar11 = 0x282;
    }
    uVar7 = FUN_180059840(uVar11);
    uVar11 = 0x2000;
    if (*(int *)(lVar4 + 8000) == 3) {
      uVar11 = 0x283;
    }
    uVar9 = FUN_180059840(uVar11);
    if ((param_7 >> 0xb & 1) == 0) {
      if ((char)uVar7 == '\0') {
        if ((char)uVar9 == '\0') goto LAB_180089070;
        fVar15 = 10.0;
      }
      else {
        fVar15 = 0.1;
      }
    }
    else {
LAB_180089070:
      fVar15 = 1.0;
    }
    fVar18 = FUN_1800572c0((uint)(uVar12 != 0));
    fVar18 = fVar18 * fVar15;
    if ((int)uVar6 < 0) {
      if (param_3 <= 1.1754944e-38) {
        param_3 = 1.1754944e-38;
      }
    }
    else if ((int)uVar6 < 10) {
      if (param_3 <= (float)(&DAT_1800ee2d8)[(int)uVar6]) {
        param_3 = (float)(&DAT_1800ee2d8)[(int)uVar6];
      }
    }
    else {
      uVar17 = FUN_1800bbe80();
      if (param_3 <= (float)uVar17) {
        param_3 = (float)uVar17;
      }
    }
  }
  else {
    fVar18 = 0.0;
  }
  fVar18 = fVar18 * param_3;
  if (uVar12 != 0) {
    fVar18 = -fVar18;
  }
  if (((uVar13 != 0) && (fVar15 = (float)(int)(param_5 - param_4), fVar15 < 3.4028235e+38)) &&
     (1e-06 < fVar15)) {
    fVar18 = fVar18 / fVar15;
  }
  if (((!bVar3) || (bVar2)) ||
     ((((int)*param_2 < (int)param_5 || (fVar18 <= 0.0)) &&
      (((int)param_4 < (int)*param_2 || (0.0 <= fVar18)))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(char *)(lVar4 + 0x1428) != '\0' || bVar5) {
    *(undefined4 *)(lVar4 + 0x2508) = 0;
    *(undefined1 *)(lVar4 + 0x2505) = 0;
  }
  else if (fVar18 != 0.0) {
    *(undefined1 *)(lVar4 + 0x2505) = 1;
    *(float *)(lVar4 + 0x2508) = fVar18 + *(float *)(lVar4 + 0x2508);
  }
  puVar10 = (uint *)0x0;
  if (*(char *)(lVar4 + 0x2505) != '\0') {
    uVar12 = *param_2;
    if (uVar13 == 0) {
      fVar16 = 0.0;
      fVar15 = 0.0;
      uVar12 = (int)*(float *)(lVar4 + 0x2508) + uVar12;
    }
    else {
      if (bVar1) {
        FUN_180096010((char *)param_6,3);
      }
      uVar17 = FUN_1800bbe80();
      fVar15 = (float)uVar17;
      uVar17 = FUN_18008b9d0((ulonglong)param_1,uVar12,param_4,param_5,bVar14,fVar15,0.0);
      fVar16 = (float)uVar17;
      uVar12 = FUN_18008ce40(param_1,fVar16 + *(float *)(lVar4 + 0x2508),param_4,param_5,bVar14,
                             fVar15,0.0);
    }
    if ((bVar1) && ((param_7 & 0x40) == 0)) {
      uVar12 = FUN_18008b100(param_6,param_1,uVar12);
    }
    *(undefined1 *)(lVar4 + 0x2505) = 0;
    if (uVar13 == 0) {
      fVar16 = (float)(int)(uVar12 - *param_2);
    }
    else {
      uVar17 = FUN_18008b9d0((ulonglong)param_1,uVar12,param_4,param_5,bVar14,fVar15,0.0);
      fVar16 = (float)uVar17 - fVar16;
    }
    *(float *)(lVar4 + 0x2508) = *(float *)(lVar4 + 0x2508) - fVar16;
    uVar13 = *param_2;
    puVar10 = param_2;
    if (uVar13 != uVar12) {
      if (bVar3) {
        if (bVar2) {
          if ((int)uVar12 < (int)param_4) {
            uVar12 = (local_a4 - param_4) + uVar12 + param_5;
          }
          if ((int)param_5 < (int)uVar12) {
            uVar12 = uVar12 + ((param_4 - local_a4) - param_5);
          }
        }
        else {
          if (((int)uVar12 < (int)param_4) ||
             ((((int)uVar13 < (int)uVar12 && (fVar18 < 0.0)) && (!bVar1)))) {
            uVar12 = param_4;
          }
          if (((int)param_5 < (int)uVar12) ||
             ((((int)uVar12 < (int)uVar13 && (0.0 < fVar18)) && (!bVar1)))) {
            uVar12 = param_5;
          }
        }
        if (uVar13 == uVar12) goto LAB_18008936d;
      }
      *param_2 = uVar12;
      return CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
  }
LAB_18008936d:
  return (ulonglong)puVar10 & 0xffffffffffffff00;
}


ulonglong FUN_1800893b0(uint param_1,uint *param_2,float param_3,uint param_4,uint param_5,
                       byte *param_6,uint param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  float fVar18;
  uint local_a4;

  lVar4 = DAT_180115c10;
  uVar12 = param_7 & 0x100000;
  if ((param_4 < param_5) ||
     ((param_4 == param_5 && (((float)param_4 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar5 = true;
    bVar3 = true;
    bVar2 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_180089454;
  }
  else {
    bVar5 = false;
    bVar3 = false;
LAB_180089454:
    bVar2 = false;
  }
  uVar13 = param_7 & 0x20;
  bVar14 = uVar13 != 0;
  bVar1 = param_1 - 8 < 2;
  local_a4 = (uint)!bVar1;
  if (((param_3 == 0.0) && (bVar5)) && ((float)(param_5 - param_4) < 3.4028235e+38)) {
    param_3 = (float)(param_5 - param_4) * *(float *)(DAT_180115c10 + 0x250c);
  }
  if (((*(int *)(DAT_180115c10 + 0x1448) != 1) ||
      (uVar7 = FUN_18005a100((float *)0x0), (char)uVar7 == '\0')) ||
     (bVar5 = FUN_180059f30(0,*(float *)(lVar4 + 0x78) * 0.5), !bVar5)) {
    if (*(int *)(lVar4 + 0x1448) - 2U < 2) {
      if (bVar1) {
        uVar6 = FUN_180096010((char *)param_6,3);
      }
      else {
        uVar6 = 0;
      }
      uVar11 = 0x1000;
      if (*(int *)(lVar4 + 8000) == 3) {
        uVar11 = 0x282;
      }
      uVar7 = FUN_180059840(uVar11);
      uVar11 = 0x2000;
      if (*(int *)(lVar4 + 8000) == 3) {
        uVar11 = 0x283;
      }
      uVar9 = FUN_180059840(uVar11);
      if ((param_7 >> 0xb & 1) == 0) {
        if ((char)uVar7 == '\0') {
          if ((char)uVar9 == '\0') goto LAB_1800895e1;
          fVar15 = 10.0;
        }
        else {
          fVar15 = 0.1;
        }
      }
      else {
LAB_1800895e1:
        fVar15 = 1.0;
      }
      fVar18 = FUN_1800572c0((uint)(uVar12 != 0));
      fVar18 = fVar18 * fVar15;
      if ((int)uVar6 < 0) {
        if (param_3 <= 1.1754944e-38) {
          param_3 = 1.1754944e-38;
        }
      }
      else if ((int)uVar6 < 10) {
        if (param_3 <= (float)(&DAT_1800ee2d8)[(int)uVar6]) {
          param_3 = (float)(&DAT_1800ee2d8)[(int)uVar6];
        }
      }
      else {
        uVar17 = FUN_1800bbe80();
        if (param_3 <= (float)uVar17) {
          param_3 = (float)uVar17;
        }
      }
    }
    else {
      fVar18 = 0.0;
    }
  }
  else {
    pfVar8 = (float *)FUN_18004b820(lVar4 + 0xd4,(ulonglong)(uVar12 != 0));
    fVar18 = *pfVar8;
    if ((*(char *)(lVar4 + 0x106) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar18 = fVar18 * 0.01;
    }
    if ((*(char *)(lVar4 + 0x105) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar18 = fVar18 * 10.0;
    }
  }
  fVar18 = fVar18 * param_3;
  if (uVar12 != 0) {
    fVar18 = -fVar18;
  }
  if (((uVar13 != 0) && (fVar15 = (float)(param_5 - param_4), fVar15 < 3.4028235e+38)) &&
     (1e-06 < fVar15)) {
    fVar18 = fVar18 / fVar15;
  }
  if (((!bVar3) || (bVar2)) ||
     (((*param_2 < param_5 || (fVar18 <= 0.0)) && ((param_4 < *param_2 || (0.0 <= fVar18)))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(char *)(lVar4 + 0x1428) != '\0' || bVar5) {
    *(undefined4 *)(lVar4 + 0x2508) = 0;
    *(undefined1 *)(lVar4 + 0x2505) = 0;
  }
  else if (fVar18 != 0.0) {
    *(undefined1 *)(lVar4 + 0x2505) = 1;
    *(float *)(lVar4 + 0x2508) = fVar18 + *(float *)(lVar4 + 0x2508);
  }
  puVar10 = (uint *)0x0;
  if (*(char *)(lVar4 + 0x2505) != '\0') {
    uVar12 = *param_2;
    if (uVar13 == 0) {
      fVar16 = 0.0;
      fVar15 = 0.0;
      uVar12 = (int)*(float *)(lVar4 + 0x2508) + uVar12;
    }
    else {
      if (bVar1) {
        FUN_180096010((char *)param_6,3);
      }
      uVar17 = FUN_1800bbe80();
      fVar15 = (float)uVar17;
      uVar17 = FUN_18008bce0((ulonglong)param_1,uVar12,param_4,param_5,bVar14,fVar15,0.0);
      fVar16 = (float)uVar17;
      uVar17 = FUN_18008d0e0(param_1,fVar16 + *(float *)(lVar4 + 0x2508),param_4,param_5,bVar14,
                             fVar15,0.0);
      uVar12 = (uint)uVar17;
    }
    if ((bVar1) && ((param_7 & 0x40) == 0)) {
      uVar17 = FUN_18008b270(param_6,param_1,uVar12);
      uVar12 = (uint)uVar17;
    }
    *(undefined1 *)(lVar4 + 0x2505) = 0;
    if (uVar13 == 0) {
      fVar16 = (float)(int)(uVar12 - *param_2);
    }
    else {
      uVar17 = FUN_18008bce0((ulonglong)param_1,uVar12,param_4,param_5,bVar14,fVar15,0.0);
      fVar16 = (float)uVar17 - fVar16;
    }
    *(float *)(lVar4 + 0x2508) = *(float *)(lVar4 + 0x2508) - fVar16;
    uVar13 = *param_2;
    puVar10 = param_2;
    if (uVar13 != uVar12) {
      if (bVar3) {
        if (bVar2) {
          if (uVar12 < param_4) {
            uVar12 = (local_a4 - param_4) + uVar12 + param_5;
          }
          if (param_5 < uVar12) {
            uVar12 = uVar12 + ((param_4 - local_a4) - param_5);
          }
        }
        else {
          if ((uVar12 < param_4) || (((uVar13 < uVar12 && (fVar18 < 0.0)) && (!bVar1)))) {
            uVar12 = param_4;
          }
          if ((param_5 < uVar12) || (((uVar12 < uVar13 && (0.0 < fVar18)) && (!bVar1)))) {
            uVar12 = param_5;
          }
        }
        if (uVar13 == uVar12) goto LAB_1800898df;
      }
      *param_2 = uVar12;
      return CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
  }
LAB_1800898df:
  return (ulonglong)puVar10 & 0xffffffffffffff00;
}


ulonglong FUN_180089920(uint param_1,float *param_2,float param_3,undefined8 param_4,float param_5,
                       byte *param_6,uint param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 uVar9;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res20;

  lVar4 = DAT_180115c10;
  fVar15 = (float)param_4;
  uVar12 = param_7 & 0x100000;
  if ((fVar15 < param_5) || ((fVar15 == param_5 && ((fVar15 != 0.0 || ((param_7 >> 10 & 1) != 0)))))
     ) {
    bVar5 = true;
    bVar2 = true;
    bVar3 = true;
    if ((param_7 >> 8 & 1) != 0) goto LAB_1800899e6;
  }
  else {
    bVar5 = false;
    bVar2 = false;
  }
  bVar3 = false;
LAB_1800899e6:
  fVar16 = 1.0;
  uVar11 = param_7 & 0x20;
  bVar13 = uVar11 != 0;
  bVar1 = param_1 - 8 < 2;
  if (bVar1) {
    local_res20 = 0.0;
    fVar20 = 0.0;
  }
  else {
    local_res20 = 1.0;
    fVar20 = 1.0;
  }
  if (((param_3 == 0.0) && (bVar5)) && (param_5 - fVar15 < 3.4028235e+38)) {
    param_3 = (param_5 - fVar15) * *(float *)(DAT_180115c10 + 0x250c);
  }
  if (((*(int *)(DAT_180115c10 + 0x1448) == 1) &&
      (uVar7 = FUN_18005a100((float *)0x0), (char)uVar7 != '\0')) &&
     (bVar5 = FUN_180059f30(0,*(float *)(lVar4 + 0x78) * 0.5), bVar5)) {
    pfVar8 = (float *)FUN_18004b820(lVar4 + 0xd4,(ulonglong)(uVar12 != 0));
    fVar17 = *pfVar8;
    if ((*(char *)(lVar4 + 0x106) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar17 = fVar17 * 0.01;
    }
    if ((*(char *)(lVar4 + 0x105) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar17 = fVar17 * 10.0;
    }
  }
  else if (*(int *)(lVar4 + 0x1448) - 2U < 2) {
    if (bVar1) {
      uVar6 = FUN_180096010((char *)param_6,3);
    }
    else {
      uVar6 = 0;
    }
    uVar10 = 0x1000;
    if (*(int *)(lVar4 + 8000) == 3) {
      uVar10 = 0x282;
    }
    uVar7 = FUN_180059840(uVar10);
    uVar10 = 0x2000;
    if (*(int *)(lVar4 + 8000) == 3) {
      uVar10 = 0x283;
    }
    uVar9 = FUN_180059840(uVar10);
    if ((param_7 >> 0xb & 1) == 0) {
      if ((char)uVar7 == '\0') {
        if ((char)uVar9 != '\0') {
          fVar16 = 10.0;
        }
      }
      else {
        fVar16 = 0.1;
      }
    }
    fVar17 = FUN_1800572c0((uint)(uVar12 != 0));
    fVar17 = fVar17 * fVar16;
    if ((int)uVar6 < 0) {
      if (param_3 <= 1.1754944e-38) {
        param_3 = 1.1754944e-38;
      }
    }
    else if ((int)uVar6 < 10) {
      if (param_3 <= (float)(&DAT_1800ee2d8)[(int)uVar6]) {
        param_3 = (float)(&DAT_1800ee2d8)[(int)uVar6];
      }
    }
    else {
      uVar14 = FUN_1800bbe80();
      if (param_3 <= (float)uVar14) {
        param_3 = (float)uVar14;
      }
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar17 = fVar17 * param_3;
  if (uVar12 != 0) {
    fVar17 = -fVar17;
  }
  if (((uVar11 != 0) && (fVar16 = param_5 - fVar15, fVar16 < 3.4028235e+38)) && (1e-06 < fVar16)) {
    fVar17 = fVar17 / fVar16;
  }
  if (((!bVar2) || (bVar3)) ||
     (((*param_2 < param_5 || (fVar17 <= 0.0)) && ((fVar15 < *param_2 || (0.0 <= fVar17)))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uVar14 = 0;
  if (*(char *)(lVar4 + 0x1428) != '\0' || bVar5) {
    *(undefined4 *)(lVar4 + 0x2508) = 0;
    *(undefined1 *)(lVar4 + 0x2505) = 0;
  }
  else if (fVar17 != 0.0) {
    *(undefined1 *)(lVar4 + 0x2505) = 1;
    *(float *)(lVar4 + 0x2508) = fVar17 + *(float *)(lVar4 + 0x2508);
  }
  if (*(char *)(lVar4 + 0x2505) != '\0') {
    fVar16 = *param_2;
    if (uVar11 == 0) {
      fVar16 = fVar16 + *(float *)(lVar4 + 0x2508);
      fVar19 = 0.0;
      fVar18 = 0.0;
    }
    else {
      if (bVar1) {
        FUN_180096010((char *)param_6,3);
      }
      uVar14 = FUN_1800bbe80();
      fVar18 = (float)uVar14;
      uVar7 = FUN_18008c000((ulonglong)param_1,fVar16,param_4,(ulonglong)(uint)param_5,bVar13,fVar18
                            ,0.0);
      fVar19 = (float)uVar7;
      uVar7 = FUN_18008d390(param_1,fVar19 + *(float *)(lVar4 + 0x2508),param_4,
                            (ulonglong)(uint)param_5,bVar13,fVar18,0.0);
      fVar16 = (float)uVar7;
      uVar14 = extraout_RAX;
    }
    if ((bVar1) && ((param_7 & 0x40) == 0)) {
      fVar16 = FUN_18008b3e0(param_6,param_1,fVar16);
      uVar14 = extraout_RAX_00;
    }
    *(undefined1 *)(lVar4 + 0x2505) = 0;
    if (uVar11 == 0) {
      *(float *)(lVar4 + 0x2508) = *(float *)(lVar4 + 0x2508) - (fVar16 - *param_2);
    }
    else {
      uVar7 = FUN_18008c000((ulonglong)param_1,fVar16,param_4,(ulonglong)(uint)param_5,bVar13,fVar18
                            ,0.0);
      *(float *)(lVar4 + 0x2508) = *(float *)(lVar4 + 0x2508) - ((float)uVar7 - fVar19);
      uVar14 = extraout_RAX_01;
    }
    if (fVar16 == 0.0) {
      fVar16 = 0.0;
    }
    fVar18 = *param_2;
    if (fVar18 != fVar16) {
      if (bVar2) {
        if (bVar3) {
          if (fVar16 < fVar15) {
            fVar16 = fVar16 + (param_5 - fVar15) + local_res20;
          }
          if (param_5 < fVar16) {
            fVar16 = fVar16 - ((param_5 - fVar15) + fVar20);
          }
        }
        else {
          if ((fVar16 < fVar15) || (((fVar18 < fVar16 && (fVar17 < 0.0)) && (!bVar1)))) {
            fVar16 = fVar15;
          }
          if ((param_5 < fVar16) || (((fVar16 < fVar18 && (0.0 < fVar17)) && (!bVar1)))) {
            fVar16 = param_5;
          }
        }
      }
      if (fVar18 != fVar16) {
        *param_2 = fVar16;
        return CONCAT71((int7)(uVar14 >> 8),1);
      }
    }
  }
  return uVar14 & 0xffffffffffffff00;
}


ulonglong FUN_180089ef0(uint param_1,double *param_2,float param_3,double param_4,double param_5,
                       byte *param_6,uint param_7)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined8 uVar10;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined4 uVar15;
  double dVar16;
  ulonglong uVar17;
  undefined4 extraout_XMM0_Db;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  double local_res20;

  lVar5 = DAT_180115c10;
  uVar13 = param_7 & 0x100000;
  if ((param_4 < param_5) ||
     ((param_4 == param_5 && ((param_4 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar6 = true;
    bVar3 = true;
    bVar4 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_180089fb5;
  }
  else {
    bVar6 = false;
    bVar3 = false;
LAB_180089fb5:
    bVar4 = false;
  }
  uVar12 = param_7 & 0x20;
  bVar14 = uVar12 != 0;
  bVar1 = param_1 - 8 < 2;
  if (bVar1) {
    local_res20 = 0.0;
    uVar21 = 0;
  }
  else {
    uVar21 = 0x3ff00000;
    local_res20 = 1.0;
  }
  if (((param_3 == 0.0) && (bVar6)) && (param_5 - param_4 < 3.4028234663852886e+38)) {
    param_3 = (float)((double)*(float *)(DAT_180115c10 + 0x250c) * (param_5 - param_4));
  }
  if (((*(int *)(DAT_180115c10 + 0x1448) == 1) &&
      (uVar8 = FUN_18005a100((float *)0x0), (char)uVar8 != '\0')) &&
     (bVar6 = FUN_180059f30(0,*(float *)(lVar5 + 0x78) * 0.5), bVar6)) {
    pfVar9 = (float *)FUN_18004b820(lVar5 + 0xd4,(ulonglong)(uVar13 != 0));
    fVar19 = *pfVar9;
    if ((*(char *)(lVar5 + 0x106) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar19 = fVar19 * 0.01;
    }
    if ((*(char *)(lVar5 + 0x105) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar19 = fVar19 * 10.0;
    }
    goto LAB_18008a1da;
  }
  if (1 < *(int *)(lVar5 + 0x1448) - 2U) {
    fVar19 = 0.0;
    goto LAB_18008a1da;
  }
  if (bVar1) {
    uVar7 = FUN_180096010((char *)param_6,3);
  }
  else {
    uVar7 = 0;
  }
  uVar11 = 0x1000;
  if (*(int *)(lVar5 + 8000) == 3) {
    uVar11 = 0x282;
  }
  uVar8 = FUN_180059840(uVar11);
  uVar11 = 0x2000;
  if (*(int *)(lVar5 + 8000) == 3) {
    uVar11 = 0x283;
  }
  uVar10 = FUN_180059840(uVar11);
  if ((param_7 >> 0xb & 1) == 0) {
    if ((char)uVar8 == '\0') {
      if ((char)uVar10 == '\0') goto LAB_18008a161;
      fVar18 = 10.0;
    }
    else {
      fVar18 = 0.1;
    }
  }
  else {
LAB_18008a161:
    fVar18 = 1.0;
  }
  fVar19 = FUN_1800572c0((uint)(uVar13 != 0));
  fVar19 = fVar19 * fVar18;
  if ((int)uVar7 < 0) {
    if (param_3 <= 1.1754944e-38) {
      param_3 = 1.1754944e-38;
    }
  }
  else if ((int)uVar7 < 10) {
    if (param_3 <= (float)(&DAT_1800ee2d8)[(int)uVar7]) {
      param_3 = (float)(&DAT_1800ee2d8)[(int)uVar7];
    }
  }
  else {
    uVar17 = FUN_1800bbe80();
    if (param_3 <= (float)uVar17) {
      param_3 = (float)uVar17;
    }
  }
LAB_18008a1da:
  fVar19 = fVar19 * param_3;
  if (uVar13 != 0) {
    fVar19 = -fVar19;
  }
  if (((uVar12 != 0) && (dVar16 = param_5 - param_4, dVar16 < 3.4028234663852886e+38)) &&
     (9.999999974752427e-07 < dVar16)) {
    fVar19 = fVar19 / (float)dVar16;
  }
  if (((!bVar3) || (bVar4)) ||
     (((*param_2 < param_5 || (fVar19 <= 0.0)) && ((param_4 < *param_2 || (0.0 <= fVar19)))))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  uVar17 = 0;
  if (*(char *)(lVar5 + 0x1428) != '\0' || bVar6) {
    *(undefined4 *)(lVar5 + 0x2508) = 0;
    *(undefined1 *)(lVar5 + 0x2505) = 0;
  }
  else if (fVar19 != 0.0) {
    *(undefined1 *)(lVar5 + 0x2505) = 1;
    *(float *)(lVar5 + 0x2508) = fVar19 + *(float *)(lVar5 + 0x2508);
  }
  if (*(char *)(lVar5 + 0x2505) != '\0') {
    dVar16 = *param_2;
    if (uVar12 == 0) {
      fVar18 = 0.0;
      fVar20 = 0.0;
      dVar16 = (double)*(float *)(lVar5 + 0x2508) + dVar16;
    }
    else {
      if (bVar1) {
        FUN_180096010((char *)param_6,3);
      }
      uVar17 = FUN_1800bbe80();
      fVar20 = (float)uVar17;
      uVar17 = FUN_18008c2e0((ulonglong)param_1,dVar16,param_4,param_5,bVar14,fVar20,0.0);
      fVar18 = (float)uVar17;
      dVar16 = FUN_18008d600(param_1,fVar18 + *(float *)(lVar5 + 0x2508),param_4,param_5,bVar14,
                             fVar20,0.0);
      uVar17 = extraout_RAX;
    }
    if ((bVar1) && ((param_7 & 0x40) == 0)) {
      uVar15 = FUN_18008b560(param_6,param_1,dVar16);
      dVar16 = (double)CONCAT44(extraout_XMM0_Db,uVar15);
      uVar17 = extraout_RAX_00;
    }
    *(undefined1 *)(lVar5 + 0x2505) = 0;
    if (uVar12 == 0) {
      *(float *)(lVar5 + 0x2508) = *(float *)(lVar5 + 0x2508) - (float)(dVar16 - *param_2);
    }
    else {
      uVar17 = FUN_18008c2e0((ulonglong)param_1,dVar16,param_4,param_5,bVar14,fVar20,0.0);
      *(float *)(lVar5 + 0x2508) = *(float *)(lVar5 + 0x2508) - ((float)uVar17 - fVar18);
      uVar17 = extraout_RAX_01;
    }
    dVar2 = 0.0;
    if (dVar16 != 0.0) {
      dVar2 = dVar16;
    }
    dVar16 = *param_2;
    if (dVar16 != dVar2) {
      if (bVar3) {
        if (bVar4) {
          if (dVar2 < param_4) {
            dVar2 = dVar2 + (param_5 - param_4) + (double)((ulonglong)uVar21 << 0x20);
          }
          if (param_5 < dVar2) {
            dVar2 = dVar2 - ((param_5 - param_4) + local_res20);
          }
        }
        else {
          if ((dVar2 < param_4) || (((dVar16 < dVar2 && (fVar19 < 0.0)) && (!bVar1)))) {
            dVar2 = param_4;
          }
          if ((param_5 < dVar2) || (((dVar2 < dVar16 && (0.0 < fVar19)) && (!bVar1)))) {
            dVar2 = param_5;
          }
        }
      }
      if (dVar16 != dVar2) {
        *param_2 = dVar2;
        return CONCAT71((int7)(uVar17 >> 8),1);
      }
    }
  }
  return uVar17 & 0xffffffffffffff00;
}


ulonglong FUN_18008a530(uint param_1,longlong *param_2,float param_3,longlong param_4,
                       longlong param_5,byte *param_6,uint param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  float fVar19;
  ulonglong local_a0;

  lVar1 = DAT_180115c10;
  uVar13 = param_7 & 0x100000;
  if ((param_4 < param_5) ||
     ((param_4 == param_5 && (((float)param_4 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar5 = true;
    bVar3 = true;
    bVar4 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_18008a5d7;
  }
  else {
    bVar5 = false;
    bVar3 = false;
LAB_18008a5d7:
    bVar4 = false;
  }
  uVar14 = param_7 & 0x20;
  bVar15 = uVar14 != 0;
  bVar2 = param_1 - 8 < 2;
  local_a0 = (ulonglong)!bVar2;
  if (((param_3 == 0.0) && (bVar5)) && ((float)(param_5 - param_4) < 3.4028235e+38)) {
    param_3 = (float)(param_5 - param_4) * *(float *)(DAT_180115c10 + 0x250c);
  }
  if (((*(int *)(DAT_180115c10 + 0x1448) == 1) &&
      (uVar7 = FUN_18005a100((float *)0x0), (char)uVar7 != '\0')) &&
     (bVar5 = FUN_180059f30(0,*(float *)(lVar1 + 0x78) * 0.5), bVar5)) {
    pfVar8 = (float *)FUN_18004b820(lVar1 + 0xd4,(ulonglong)(uVar13 != 0));
    fVar19 = *pfVar8;
    if ((*(char *)(lVar1 + 0x106) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar19 = fVar19 * 0.01;
    }
    if ((*(char *)(lVar1 + 0x105) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar19 = fVar19 * 10.0;
    }
  }
  else if (*(int *)(lVar1 + 0x1448) - 2U < 2) {
    if (bVar2) {
      uVar6 = FUN_180096010((char *)param_6,3);
    }
    else {
      uVar6 = 0;
    }
    uVar12 = 0x1000;
    if (*(int *)(lVar1 + 8000) == 3) {
      uVar12 = 0x282;
    }
    uVar7 = FUN_180059840(uVar12);
    uVar12 = 0x2000;
    if (*(int *)(lVar1 + 8000) == 3) {
      uVar12 = 0x283;
    }
    uVar9 = FUN_180059840(uVar12);
    if ((param_7 >> 0xb & 1) == 0) {
      if ((char)uVar7 == '\0') {
        if ((char)uVar9 == '\0') goto LAB_18008a767;
        fVar16 = 10.0;
      }
      else {
        fVar16 = 0.1;
      }
    }
    else {
LAB_18008a767:
      fVar16 = 1.0;
    }
    fVar19 = FUN_1800572c0((uint)(uVar13 != 0));
    fVar19 = fVar19 * fVar16;
    if ((int)uVar6 < 0) {
      if (param_3 <= 1.1754944e-38) {
        param_3 = 1.1754944e-38;
      }
    }
    else if ((int)uVar6 < 10) {
      if (param_3 <= (float)(&DAT_1800ee2d8)[(int)uVar6]) {
        param_3 = (float)(&DAT_1800ee2d8)[(int)uVar6];
      }
    }
    else {
      uVar18 = FUN_1800bbe80();
      if (param_3 <= (float)uVar18) {
        param_3 = (float)uVar18;
      }
    }
  }
  else {
    fVar19 = 0.0;
  }
  fVar19 = fVar19 * param_3;
  if (uVar13 != 0) {
    fVar19 = -fVar19;
  }
  if (((uVar14 != 0) && (fVar16 = (float)(param_5 - param_4), fVar16 < 3.4028235e+38)) &&
     (1e-06 < fVar16)) {
    fVar19 = fVar19 / fVar16;
  }
  if (((!bVar3) || (bVar4)) ||
     (((*param_2 < param_5 || (fVar19 <= 0.0)) && ((param_4 < *param_2 || (0.0 <= fVar19)))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(char *)(lVar1 + 0x1428) != '\0' || bVar5) {
    *(undefined4 *)(lVar1 + 0x2508) = 0;
    *(undefined1 *)(lVar1 + 0x2505) = 0;
  }
  else if (fVar19 != 0.0) {
    *(undefined1 *)(lVar1 + 0x2505) = 1;
    *(float *)(lVar1 + 0x2508) = fVar19 + *(float *)(lVar1 + 0x2508);
  }
  plVar11 = (longlong *)0x0;
  if (*(char *)(lVar1 + 0x2505) != '\0') {
    lVar10 = *param_2;
    if (uVar14 == 0) {
      fVar16 = 0.0;
      fVar17 = 0.0;
      lVar10 = (longlong)*(float *)(lVar1 + 0x2508) + lVar10;
    }
    else {
      if (bVar2) {
        FUN_180096010((char *)param_6,3);
      }
      uVar18 = FUN_1800bbe80();
      fVar17 = (float)uVar18;
      fVar16 = FUN_18008c630((ulonglong)param_1,lVar10,param_4,param_5,bVar15,fVar17,0.0);
      lVar10 = FUN_18008d8f0(param_1,fVar16 + *(float *)(lVar1 + 0x2508),param_4,param_5,bVar15,
                             fVar17,0.0);
    }
    if ((bVar2) && ((param_7 & 0x40) == 0)) {
      lVar10 = FUN_18008b6d0(param_6,param_1,lVar10);
    }
    *(undefined1 *)(lVar1 + 0x2505) = 0;
    if (uVar14 == 0) {
      *(float *)(lVar1 + 0x2508) = *(float *)(lVar1 + 0x2508) - (float)(lVar10 - *param_2);
    }
    else {
      fVar17 = FUN_18008c630((ulonglong)param_1,lVar10,param_4,param_5,bVar15,fVar17,0.0);
      *(float *)(lVar1 + 0x2508) = *(float *)(lVar1 + 0x2508) - (fVar17 - fVar16);
    }
    lVar1 = *param_2;
    plVar11 = param_2;
    if (lVar1 != lVar10) {
      if (bVar3) {
        if (bVar4) {
          if (lVar10 < param_4) {
            lVar10 = (local_a0 - param_4) + lVar10 + param_5;
          }
          if (param_5 < lVar10) {
            lVar10 = lVar10 + ((param_4 - local_a0) - param_5);
          }
        }
        else {
          if ((lVar10 < param_4) || (((lVar1 < lVar10 && (fVar19 < 0.0)) && (!bVar2)))) {
            lVar10 = param_4;
          }
          if ((param_5 < lVar10) || (((lVar10 < lVar1 && (0.0 < fVar19)) && (!bVar2)))) {
            lVar10 = param_5;
          }
        }
        if (lVar1 == lVar10) goto LAB_18008aaae;
      }
      *param_2 = lVar10;
      return CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
  }
LAB_18008aaae:
  return (ulonglong)plVar11 & 0xffffffffffffff00;
}


ulonglong FUN_18008aaf0(uint param_1,ulonglong *param_2,float param_3,ulonglong param_4,
                       ulonglong param_5,byte *param_6,uint param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  float fVar19;
  ulonglong local_a0;

  lVar4 = DAT_180115c10;
  uVar13 = param_7 & 0x100000;
  if ((param_4 < param_5) ||
     ((param_4 == param_5 && (((float)param_4 != 0.0 || ((param_7 >> 10 & 1) != 0)))))) {
    bVar5 = true;
    bVar2 = true;
    bVar3 = true;
    if ((param_7 >> 8 & 1) == 0) goto LAB_18008abb8;
  }
  else {
    bVar5 = false;
    bVar2 = false;
LAB_18008abb8:
    bVar3 = false;
  }
  uVar14 = param_7 & 0x20;
  bVar15 = uVar14 != 0;
  bVar1 = param_1 - 8 < 2;
  local_a0 = (ulonglong)!bVar1;
  if (((param_3 == 0.0) && (bVar5)) && ((float)(param_5 - param_4) < 3.4028235e+38)) {
    param_3 = (float)(param_5 - param_4) * *(float *)(DAT_180115c10 + 0x250c);
  }
  if (((*(int *)(DAT_180115c10 + 0x1448) == 1) &&
      (uVar7 = FUN_18005a100((float *)0x0), (char)uVar7 != '\0')) &&
     (bVar5 = FUN_180059f30(0,*(float *)(lVar4 + 0x78) * 0.5), bVar5)) {
    pfVar8 = (float *)FUN_18004b820(lVar4 + 0xd4,(ulonglong)(uVar13 != 0));
    fVar19 = *pfVar8;
    if ((*(char *)(lVar4 + 0x106) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar19 = fVar19 * 0.01;
    }
    if ((*(char *)(lVar4 + 0x105) != '\0') && ((param_7 >> 0xb & 1) == 0)) {
      fVar19 = fVar19 * 10.0;
    }
  }
  else if (*(int *)(lVar4 + 0x1448) - 2U < 2) {
    if (bVar1) {
      uVar6 = FUN_180096010((char *)param_6,3);
    }
    else {
      uVar6 = 0;
    }
    uVar12 = 0x1000;
    if (*(int *)(lVar4 + 8000) == 3) {
      uVar12 = 0x282;
    }
    uVar7 = FUN_180059840(uVar12);
    uVar12 = 0x2000;
    if (*(int *)(lVar4 + 8000) == 3) {
      uVar12 = 0x283;
    }
    uVar9 = FUN_180059840(uVar12);
    if ((param_7 >> 0xb & 1) == 0) {
      if ((char)uVar7 == '\0') {
        if ((char)uVar9 == '\0') goto LAB_18008ad63;
        fVar16 = 10.0;
      }
      else {
        fVar16 = 0.1;
      }
    }
    else {
LAB_18008ad63:
      fVar16 = 1.0;
    }
    fVar19 = FUN_1800572c0((uint)(uVar13 != 0));
    fVar19 = fVar19 * fVar16;
    if ((int)uVar6 < 0) {
      if (param_3 <= 1.1754944e-38) {
        param_3 = 1.1754944e-38;
      }
    }
    else if ((int)uVar6 < 10) {
      if (param_3 <= (float)(&DAT_1800ee2d8)[(int)uVar6]) {
        param_3 = (float)(&DAT_1800ee2d8)[(int)uVar6];
      }
    }
    else {
      uVar10 = FUN_1800bbe80();
      if (param_3 <= (float)uVar10) {
        param_3 = (float)uVar10;
      }
    }
  }
  else {
    fVar19 = 0.0;
  }
  fVar19 = fVar19 * param_3;
  if (uVar13 != 0) {
    fVar19 = -fVar19;
  }
  if (((uVar14 != 0) && (fVar16 = (float)(param_5 - param_4), fVar16 < 3.4028235e+38)) &&
     (1e-06 < fVar16)) {
    fVar19 = fVar19 / fVar16;
  }
  if (((!bVar2) || (bVar3)) ||
     (((*param_2 < param_5 || (fVar19 <= 0.0)) && ((param_4 < *param_2 || (0.0 <= fVar19)))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(char *)(lVar4 + 0x1428) != '\0' || bVar5) {
    *(undefined4 *)(lVar4 + 0x2508) = 0;
    *(undefined1 *)(lVar4 + 0x2505) = 0;
  }
  else if (fVar19 != 0.0) {
    *(undefined1 *)(lVar4 + 0x2505) = 1;
    *(float *)(lVar4 + 0x2508) = fVar19 + *(float *)(lVar4 + 0x2508);
  }
  puVar11 = (ulonglong *)0x0;
  if (*(char *)(lVar4 + 0x2505) != '\0') {
    uVar10 = *param_2;
    if (uVar14 == 0) {
      fVar16 = 0.0;
      fVar17 = 0.0;
      uVar10 = (longlong)*(float *)(lVar4 + 0x2508) + uVar10;
    }
    else {
      if (bVar1) {
        FUN_180096010((char *)param_6,3);
      }
      uVar18 = FUN_1800bbe80();
      fVar17 = (float)uVar18;
      fVar16 = FUN_18008c9b0((ulonglong)param_1,uVar10,param_4,param_5,bVar15,fVar17,0.0);
      uVar10 = FUN_18008dbd0(param_1,fVar16 + *(float *)(lVar4 + 0x2508),param_4,param_5,bVar15,
                             fVar17,0.0);
    }
    if ((bVar1) && ((param_7 & 0x40) == 0)) {
      uVar10 = FUN_18008b840(param_6,param_1,uVar10);
    }
    *(undefined1 *)(lVar4 + 0x2505) = 0;
    if (uVar14 == 0) {
      *(float *)(lVar4 + 0x2508) = *(float *)(lVar4 + 0x2508) - (float)(longlong)(uVar10 - *param_2)
      ;
    }
    else {
      fVar17 = FUN_18008c9b0((ulonglong)param_1,uVar10,param_4,param_5,bVar15,fVar17,0.0);
      *(float *)(lVar4 + 0x2508) = *(float *)(lVar4 + 0x2508) - (fVar17 - fVar16);
    }
    uVar18 = *param_2;
    puVar11 = param_2;
    if (uVar18 != uVar10) {
      if (bVar2) {
        if (bVar3) {
          if (uVar10 < param_4) {
            uVar10 = (local_a0 - param_4) + uVar10 + param_5;
          }
          if (param_5 < uVar10) {
            uVar10 = uVar10 + ((param_4 - local_a0) - param_5);
          }
        }
        else {
          if ((uVar10 < param_4) || (((uVar18 < uVar10 && (fVar19 < 0.0)) && (!bVar1)))) {
            uVar10 = param_4;
          }
          if ((param_5 < uVar10) || (((uVar10 < uVar18 && (0.0 < fVar19)) && (!bVar1)))) {
            uVar10 = param_5;
          }
        }
        if (uVar18 == uVar10) goto LAB_18008b0c5;
      }
      *param_2 = uVar10;
      return CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
  }
LAB_18008b0c5:
  return (ulonglong)puVar11 & 0xffffffffffffff00;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

uint FUN_18008b100(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  byte local_88 [32];
  char local_68;
  char local_67 [63];
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStack_a8;
  if (1 < param_2 - 8U) {
    FID_conflict__assert
              (L"data_type == ImGuiDataType_Float || data_type == ImGuiDataType_Double",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x968);
  }
  bVar1 = *param_1;
  while ((bVar1 != 0 && ((bVar1 != 0x25 || (param_1[1] == 0x25))))) {
    pbVar5 = param_1 + 1;
    if (bVar1 != 0x25) {
      pbVar5 = param_1;
    }
    bVar1 = pbVar5[1];
    param_1 = pbVar5 + 1;
  }
  if ((*param_1 == 0x25) && (param_1[1] != 0x25)) {
    pbVar5 = local_88;
    pbVar3 = (byte *)FUN_180095fb0((char *)param_1);
    if ((byte *)0x1f < pbVar3 + (1 - (longlong)param_1)) {
      FID_conflict__assert
                (L"(size_t)(fmt_end - fmt_in + 1) < fmt_out_size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0xdd8);
    }
    while (param_1 < pbVar3) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = bVar1 - 0x24;
      if ((0x3b < (byte)uVar2) || ((0x800000000000009U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)) {
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      }
    }
    *pbVar5 = 0;
    FUN_180057ec0(&local_68,0x40,(longlong)local_88,(ulonglong)param_3);
    pcVar4 = &local_68;
    while (local_68 == ' ') {
      pcVar4 = pcVar4 + 1;
      local_68 = *pcVar4;
    }
    dVar6 = (double)FUN_1800b9ff0((longlong)pcVar4);
    param_3 = (uint)dVar6;
  }
  return param_3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_18008b270(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  char *pcVar5;
  byte *pbVar6;
  double dVar7;
  undefined1 auStack_a8 [32];
  byte local_88 [32];
  char local_68;
  char local_67 [63];
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStack_a8;
  uVar4 = (ulonglong)param_3;
  if (1 < param_2 - 8U) {
    FID_conflict__assert
              (L"data_type == ImGuiDataType_Float || data_type == ImGuiDataType_Double",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x968);
  }
  bVar1 = *param_1;
  while ((bVar1 != 0 && ((bVar1 != 0x25 || (param_1[1] == 0x25))))) {
    pbVar6 = param_1 + 1;
    if (bVar1 != 0x25) {
      pbVar6 = param_1;
    }
    bVar1 = pbVar6[1];
    param_1 = pbVar6 + 1;
  }
  if ((*param_1 == 0x25) && (param_1[1] != 0x25)) {
    pbVar6 = local_88;
    pbVar3 = (byte *)FUN_180095fb0((char *)param_1);
    if ((byte *)0x1f < pbVar3 + (1 - (longlong)param_1)) {
      FID_conflict__assert
                (L"(size_t)(fmt_end - fmt_in + 1) < fmt_out_size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0xdd8);
    }
    while (param_1 < pbVar3) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = bVar1 - 0x24;
      if ((0x3b < (byte)uVar2) || ((0x800000000000009U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)) {
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
      }
    }
    *pbVar6 = 0;
    FUN_180057ec0(&local_68,0x40,(longlong)local_88,uVar4);
    pcVar5 = &local_68;
    while (local_68 == ' ') {
      pcVar5 = pcVar5 + 1;
      local_68 = *pcVar5;
    }
    dVar7 = (double)FUN_1800b9ff0((longlong)pcVar5);
    uVar4 = (ulonglong)dVar7;
  }
  return uVar4;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

float FUN_18008b3e0(byte *param_1,int param_2,float param_3)

{
  byte bVar1;
  double dVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 auStack_a8 [32];
  byte local_88 [32];
  char local_68;
  char local_67 [63];
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStack_a8;
  if (1 < param_2 - 8U) {
    FID_conflict__assert
              (L"data_type == ImGuiDataType_Float || data_type == ImGuiDataType_Double",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x968);
  }
  bVar1 = *param_1;
  while ((bVar1 != 0 && ((bVar1 != 0x25 || (param_1[1] == 0x25))))) {
    pbVar6 = param_1 + 1;
    if (bVar1 != 0x25) {
      pbVar6 = param_1;
    }
    bVar1 = pbVar6[1];
    param_1 = pbVar6 + 1;
  }
  if ((*param_1 == 0x25) && (param_1[1] != 0x25)) {
    pbVar6 = local_88;
    pbVar4 = (byte *)FUN_180095fb0((char *)param_1);
    if ((byte *)0x1f < pbVar4 + (1 - (longlong)param_1)) {
      FID_conflict__assert
                (L"(size_t)(fmt_end - fmt_in + 1) < fmt_out_size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0xdd8);
    }
    while (param_1 < pbVar4) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar3 = bVar1 - 0x24;
      if ((0x3b < (byte)uVar3) || ((0x800000000000009U >> ((ulonglong)uVar3 & 0x3f) & 1) == 0)) {
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
      }
    }
    *pbVar6 = 0;
    FUN_180057ec0(&local_68,0x40,(longlong)local_88,(double)param_3);
    pcVar5 = &local_68;
    while (local_68 == ' ') {
      pcVar5 = pcVar5 + 1;
      local_68 = *pcVar5;
    }
    dVar2 = (double)FUN_1800b9ff0((longlong)pcVar5);
    param_3 = (float)dVar2;
  }
  return param_3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined4 FUN_18008b560(byte *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  byte local_88 [32];
  char local_68;
  char local_67 [63];
  ulonglong local_28;

  uVar6 = (undefined4)param_3;
  local_28 = DAT_180112300 ^ (ulonglong)auStack_a8;
  if (1 < param_2 - 8U) {
    FID_conflict__assert
              (L"data_type == ImGuiDataType_Float || data_type == ImGuiDataType_Double",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x968);
  }
  bVar1 = *param_1;
  while ((bVar1 != 0 && ((bVar1 != 0x25 || (param_1[1] == 0x25))))) {
    pbVar5 = param_1 + 1;
    if (bVar1 != 0x25) {
      pbVar5 = param_1;
    }
    bVar1 = pbVar5[1];
    param_1 = pbVar5 + 1;
  }
  if ((*param_1 == 0x25) && (param_1[1] != 0x25)) {
    pbVar5 = local_88;
    pbVar3 = (byte *)FUN_180095fb0((char *)param_1);
    if ((byte *)0x1f < pbVar3 + (1 - (longlong)param_1)) {
      FID_conflict__assert
                (L"(size_t)(fmt_end - fmt_in + 1) < fmt_out_size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0xdd8);
    }
    while (param_1 < pbVar3) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = bVar1 - 0x24;
      if ((0x3b < (byte)uVar2) || ((0x800000000000009U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)) {
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      }
    }
    *pbVar5 = 0;
    FUN_180057ec0(&local_68,0x40,(longlong)local_88,param_3);
    pcVar4 = &local_68;
    while (local_68 == ' ') {
      pcVar4 = pcVar4 + 1;
      local_68 = *pcVar4;
    }
    uVar6 = FUN_1800b9ff0((longlong)pcVar4);
  }
  return uVar6;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

longlong FUN_18008b6d0(byte *param_1,int param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  byte local_88 [32];
  char local_68;
  char local_67 [63];
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStack_a8;
  if (1 < param_2 - 8U) {
    FID_conflict__assert
              (L"data_type == ImGuiDataType_Float || data_type == ImGuiDataType_Double",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x968);
  }
  bVar1 = *param_1;
  while ((bVar1 != 0 && ((bVar1 != 0x25 || (param_1[1] == 0x25))))) {
    pbVar5 = param_1 + 1;
    if (bVar1 != 0x25) {
      pbVar5 = param_1;
    }
    bVar1 = pbVar5[1];
    param_1 = pbVar5 + 1;
  }
  if ((*param_1 == 0x25) && (param_1[1] != 0x25)) {
    pbVar5 = local_88;
    pbVar3 = (byte *)FUN_180095fb0((char *)param_1);
    if ((byte *)0x1f < pbVar3 + (1 - (longlong)param_1)) {
      FID_conflict__assert
                (L"(size_t)(fmt_end - fmt_in + 1) < fmt_out_size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0xdd8);
    }
    while (param_1 < pbVar3) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = bVar1 - 0x24;
      if ((0x3b < (byte)uVar2) || ((0x800000000000009U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)) {
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      }
    }
    *pbVar5 = 0;
    FUN_180057ec0(&local_68,0x40,(longlong)local_88,param_3);
    pcVar4 = &local_68;
    while (local_68 == ' ') {
      pcVar4 = pcVar4 + 1;
      local_68 = *pcVar4;
    }
    dVar6 = (double)FUN_1800b9ff0((longlong)pcVar4);
    param_3 = (longlong)dVar6;
  }
  return param_3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

longlong FUN_18008b840(byte *param_1,int param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  longlong lVar5;
  byte *pbVar6;
  double dVar7;
  undefined1 auStack_a8 [32];
  byte local_88 [32];
  char local_68;
  char local_67 [63];
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStack_a8;
  if (1 < param_2 - 8U) {
    FID_conflict__assert
              (L"data_type == ImGuiDataType_Float || data_type == ImGuiDataType_Double",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x968);
  }
  bVar1 = *param_1;
  while ((bVar1 != 0 && ((bVar1 != 0x25 || (param_1[1] == 0x25))))) {
    pbVar6 = param_1 + 1;
    if (bVar1 != 0x25) {
      pbVar6 = param_1;
    }
    bVar1 = pbVar6[1];
    param_1 = pbVar6 + 1;
  }
  if ((*param_1 == 0x25) && (param_1[1] != 0x25)) {
    pbVar6 = local_88;
    pbVar3 = (byte *)FUN_180095fb0((char *)param_1);
    if ((byte *)0x1f < pbVar3 + (1 - (longlong)param_1)) {
      FID_conflict__assert
                (L"(size_t)(fmt_end - fmt_in + 1) < fmt_out_size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0xdd8);
    }
    while (param_1 < pbVar3) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = bVar1 - 0x24;
      if ((0x3b < (byte)uVar2) || ((0x800000000000009U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)) {
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
      }
    }
    *pbVar6 = 0;
    FUN_180057ec0(&local_68,0x40,(longlong)local_88,param_3);
    pcVar4 = &local_68;
    while (local_68 == ' ') {
      pcVar4 = pcVar4 + 1;
      local_68 = *pcVar4;
    }
    dVar7 = (double)FUN_1800b9ff0((longlong)pcVar4);
    lVar5 = 0;
    if ((9.223372036854776e+18 <= dVar7) &&
       (dVar7 = dVar7 - 9.223372036854776e+18, dVar7 < 9.223372036854776e+18)) {
      lVar5 = -0x8000000000000000;
    }
    param_3 = (longlong)dVar7 + lVar5;
  }
  return param_3;
}


ulonglong FUN_18008b9d0(undefined8 param_1,int param_2,int param_3,int param_4,char param_5,
                       float param_6,float param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;

  if (param_3 == param_4) {
    return 0;
  }
  if (param_3 < param_4) {
    if (param_2 < param_3) {
      iVar2 = param_3;
    }
    else {
      iVar2 = param_2;
      if (param_4 < param_2) {
        iVar2 = param_4;
      }
    }
  }
  else if (param_2 < param_4) {
    iVar2 = param_4;
  }
  else {
    iVar2 = param_2;
    if (param_3 < param_2) {
      iVar2 = param_3;
    }
  }
  if (param_5 == '\0') {
    return (ulonglong)(uint)((float)(iVar2 - param_3) / (float)(param_4 - param_3));
  }
  iVar3 = param_3;
  iVar1 = param_4;
  if (param_3 <= param_4) {
    iVar3 = param_4;
    iVar1 = param_3;
  }
  fVar9 = 0.0;
  fVar8 = (float)iVar1;
  if (param_6 <= ABS(fVar8)) {
    fVar11 = fVar8;
  }
  else {
    fVar11 = param_6;
    if (fVar8 < 0.0) {
      fVar11 = -param_6;
    }
  }
  fVar7 = (float)iVar3;
  fVar6 = -param_6;
  if (param_6 <= ABS(fVar7)) {
    param_6 = fVar7;
  }
  else if (0.0 <= fVar7) {
  }
  else {
    param_6 = fVar6;
  }
  if ((fVar8 != 0.0) || (0.0 <= fVar7)) {
    if ((fVar7 == 0.0) && (fVar8 < 0.0)) {
      param_6 = fVar6;
    }
  }
  else {
    fVar11 = fVar6;
  }
  uVar10 = 0;
  if (fVar11 < (float)iVar2) {
    if ((float)iVar2 < param_6) {
      if (0.0 <= (float)(iVar1 * iVar3)) {
        if ((fVar8 < 0.0) || (fVar7 < 0.0)) {
          uVar4 = FUN_1800bfcb0();
          uVar5 = FUN_1800bfcb0();
          fVar9 = 1.0 - (float)uVar4 / (float)uVar5;
          uVar10 = 0;
        }
        else {
          uVar4 = FUN_1800bfcb0();
          uVar5 = FUN_1800bfcb0();
          fVar9 = (float)uVar4 / (float)uVar5;
          uVar10 = (int)(uVar4 >> 0x20);
        }
      }
      else {
        fVar9 = -fVar8 / (fVar7 - fVar8);
        uVar10 = 0;
        if ((float)param_2 != 0.0) {
          if (0.0 <= (float)param_2) {
            uVar4 = FUN_1800bfcb0();
            uVar5 = FUN_1800bfcb0();
            fVar9 = ((float)uVar4 / (float)uVar5) * (1.0 - (fVar9 + param_7)) + fVar9 + param_7;
            uVar10 = (int)(uVar4 >> 0x20);
          }
          else {
            uVar4 = FUN_1800bfcb0();
            uVar5 = FUN_1800bfcb0();
            fVar9 = (1.0 - (float)uVar4 / (float)uVar5) * (fVar9 - param_7);
            uVar10 = 0;
          }
        }
      }
    }
    else {
      fVar9 = 1.0;
      uVar10 = 0;
    }
  }
  if (param_4 < param_3) {
    fVar9 = 1.0 - fVar9;
    uVar10 = 0;
  }
  return CONCAT44(uVar10,fVar9);
}


ulonglong FUN_18008bce0(undefined8 param_1,uint param_2,uint param_3,uint param_4,char param_5,
                       float param_6,float param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;

  if (param_3 == param_4) {
    return 0;
  }
  if (param_3 < param_4) {
    if (param_2 < param_3) {
      uVar2 = param_3;
    }
    else {
      uVar2 = param_2;
      if (param_4 < param_2) {
        uVar2 = param_4;
      }
    }
  }
  else if (param_2 < param_4) {
    uVar2 = param_4;
  }
  else {
    uVar2 = param_2;
    if (param_3 < param_2) {
      uVar2 = param_3;
    }
  }
  if (param_5 == '\0') {
    return (ulonglong)(uint)((float)(int)(uVar2 - param_3) / (float)(int)(param_4 - param_3));
  }
  uVar3 = param_3;
  uVar1 = param_4;
  if (param_3 <= param_4) {
    uVar3 = param_4;
    uVar1 = param_3;
  }
  fVar9 = 0.0;
  uVar10 = 0;
  fVar8 = (float)uVar1;
  if (param_6 <= ABS(fVar8)) {
    fVar11 = fVar8;
  }
  else {
    fVar11 = param_6;
    if (fVar8 < 0.0) {
      fVar11 = -param_6;
    }
  }
  fVar6 = -param_6;
  fVar7 = (float)uVar3;
  if (param_6 <= ABS(fVar7)) {
    param_6 = fVar7;
  }
  else if (0.0 <= fVar7) {
  }
  else {
    param_6 = fVar6;
  }
  if ((fVar8 != 0.0) || (0.0 <= fVar7)) {
    if ((fVar7 == 0.0) && (fVar8 < 0.0)) {
      param_6 = fVar6;
    }
  }
  else {
    fVar11 = fVar6;
  }
  if (fVar11 < (float)uVar2) {
    if ((float)uVar2 < param_6) {
      if (0.0 <= (float)(uVar1 * uVar3)) {
        if ((fVar8 < 0.0) || (fVar7 < 0.0)) {
          uVar4 = FUN_1800bfcb0();
          uVar5 = FUN_1800bfcb0();
          uVar10 = 0;
          fVar9 = 1.0 - (float)uVar4 / (float)uVar5;
        }
        else {
          uVar4 = FUN_1800bfcb0();
          uVar10 = (undefined4)(uVar4 >> 0x20);
          uVar5 = FUN_1800bfcb0();
          fVar9 = (float)uVar4 / (float)uVar5;
        }
      }
      else {
        fVar9 = -fVar8 / (fVar7 - fVar8);
        if ((float)param_2 == 0.0) {
          uVar10 = 0;
        }
        else if (0.0 <= (float)param_2) {
          uVar4 = FUN_1800bfcb0();
          uVar10 = (undefined4)(uVar4 >> 0x20);
          uVar5 = FUN_1800bfcb0();
          fVar9 = ((float)uVar4 / (float)uVar5) * (1.0 - (fVar9 + param_7)) + fVar9 + param_7;
        }
        else {
          uVar4 = FUN_1800bfcb0();
          uVar5 = FUN_1800bfcb0();
          uVar10 = 0;
          fVar9 = (1.0 - (float)uVar4 / (float)uVar5) * (fVar9 - param_7);
        }
      }
    }
    else {
      fVar9 = 1.0;
      uVar10 = 0;
    }
  }
  if (param_4 < param_3) {
    fVar9 = 1.0 - fVar9;
    uVar10 = 0;
  }
  return CONCAT44(uVar10,fVar9);
}


undefined8
FUN_18008c000(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,char param_5,
             float param_6,float param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;

  fVar8 = (float)param_4;
  fVar6 = (float)param_3;
  if (fVar6 == fVar8) {
    return 0;
  }
  uVar2 = param_3;
  uVar1 = param_4;
  fVar5 = fVar8;
  if (fVar6 < fVar8) {
    uVar2 = param_4;
    uVar1 = param_3;
    fVar5 = fVar6;
  }
  if (fVar5 <= param_2) {
    uVar1 = uVar2;
    if (param_2 <= (float)uVar2) {
      uVar1 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),param_2);
    }
  }
  fVar5 = (float)uVar1;
  if (param_5 == '\0') {
    return CONCAT44((int)((ulonglong)uVar1 >> 0x20),(fVar5 - fVar6) / (fVar8 - fVar6));
  }
  fVar9 = fVar8;
  if (fVar6 > fVar8) {
    fVar9 = fVar6;
    param_3 = param_4;
  }
  fVar7 = (float)param_3;
  fVar11 = 0.0;
  if (param_6 <= ABS(fVar7)) {
    fVar13 = fVar7;
  }
  else {
    fVar13 = param_6;
    if (fVar7 < 0.0) {
      fVar13 = -param_6;
    }
  }
  fVar10 = -param_6;
  if (param_6 <= ABS(fVar9)) {
    param_6 = fVar9;
  }
  else if (0.0 <= fVar9) {
  }
  else {
    param_6 = fVar10;
  }
  if ((fVar7 != 0.0) || (0.0 <= fVar9)) {
    if ((fVar9 == 0.0) && (fVar7 < 0.0)) {
      param_6 = fVar10;
    }
  }
  else {
    fVar13 = fVar10;
  }
  uVar12 = 0;
  if (fVar13 < fVar5) {
    if (fVar5 < param_6) {
      if (0.0 <= fVar7 * fVar9) {
        if ((fVar7 < 0.0) || (fVar9 < 0.0)) {
          uVar3 = FUN_1800bfcb0();
          uVar4 = FUN_1800bfcb0();
          uVar12 = 0;
          fVar11 = 1.0 - (float)uVar3 / (float)uVar4;
        }
        else {
          uVar3 = FUN_1800bfcb0();
          uVar12 = (undefined4)(uVar3 >> 0x20);
          uVar4 = FUN_1800bfcb0();
          fVar11 = (float)uVar3 / (float)uVar4;
        }
      }
      else {
        fVar11 = -fVar7 / (fVar9 - fVar7);
        if (param_2 == 0.0) {
          uVar12 = (int)((ulonglong)param_3 >> 0x20);
        }
        else if (0.0 <= param_2) {
          uVar3 = FUN_1800bfcb0();
          uVar12 = (undefined4)(uVar3 >> 0x20);
          uVar4 = FUN_1800bfcb0();
          fVar11 = ((float)uVar3 / (float)uVar4) * (1.0 - (fVar11 + param_7)) + fVar11 + param_7;
        }
        else {
          uVar3 = FUN_1800bfcb0();
          uVar4 = FUN_1800bfcb0();
          uVar12 = 0;
          fVar11 = (1.0 - (float)uVar3 / (float)uVar4) * (fVar11 - param_7);
        }
      }
    }
    else {
      fVar11 = 1.0;
      uVar12 = 0;
    }
  }
  if (fVar6 > fVar8) {
    fVar11 = 1.0 - fVar11;
    uVar12 = 0;
  }
  return CONCAT44(uVar12,fVar11);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18008c2e0(undefined8 param_1,double param_2,double param_3,double param_4,char param_5
                       ,float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  float fVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;

  if (param_3 == param_4) {
    return 0;
  }
  dVar6 = param_3;
  if (param_4 <= param_3) {
    if (param_2 < param_4) {
      dVar6 = param_4;
      goto LAB_18008c322;
    }
  }
  else {
    if (param_2 < param_3) goto LAB_18008c322;
    dVar6 = param_4;
  }
  if (param_2 <= dVar6) {
    dVar6 = param_2;
  }
LAB_18008c322:
  if (param_5 == '\0') {
    return (ulonglong)(uint)(float)((dVar6 - param_3) / (param_4 - param_3));
  }
  bVar3 = param_3 <= param_4;
  dVar7 = param_4;
  if (!bVar3) {
    dVar7 = param_3;
    param_3 = param_4;
  }
  dVar2 = param_3;
  if ((double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) & DAT_1800effc0._4_4_,
                       SUB84(param_3,0) & (uint)DAT_1800effc0) < (double)param_6) {
    fVar5 = param_6;
    if (param_3 < 0.0) {
      fVar5 = -param_6;
    }
    dVar2 = (double)fVar5;
  }
  fVar5 = -param_6;
  dVar1 = dVar7;
  if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & DAT_1800effc0._4_4_,
                       SUB84(dVar7,0) & (uint)DAT_1800effc0) < (double)param_6) {
    if (dVar7 < 0.0) {
      param_6 = fVar5;
    }
    dVar1 = (double)param_6;
  }
  if ((param_3 != 0.0) || (0.0 <= dVar7)) {
    if ((dVar7 == 0.0) && (param_3 < 0.0)) {
      dVar1 = (double)fVar5;
    }
  }
  else {
    dVar2 = (double)fVar5;
  }
  uVar11 = 0;
  if (dVar2 < dVar6) {
    if (dVar6 < dVar1) {
      if (0.0 <= param_3 * dVar7) {
        if ((param_3 < 0.0) || (dVar7 < 0.0)) {
          dVar6 = FUN_1800bf5c0();
          dVar7 = FUN_1800bf5c0();
          auVar4._4_8_ = SUB128(ZEXT812(0x3f800000),4);
          auVar4._0_4_ = SUB124(ZEXT812(0x3f800000),0) - (float)(dVar6 / dVar7);
          uVar8 = auVar4._0_8_;
        }
        else {
          dVar6 = FUN_1800bf5c0();
          dVar7 = FUN_1800bf5c0();
          uVar8 = (ulonglong)(uint)(float)(dVar6 / dVar7);
        }
      }
      else {
        auVar9._0_4_ = -(float)param_3;
        auVar9._4_4_ = 0x80000000;
        auVar9._8_4_ = 0x80000000;
        auVar9._12_4_ = 0x80000000;
        auVar10._4_12_ = auVar9._4_12_;
        auVar10._0_4_ = auVar9._0_4_ / ((float)dVar7 - (float)param_3);
        uVar8 = auVar10._0_8_;
        if (param_2 != 0.0) {
          if (0.0 <= param_2) {
            dVar6 = FUN_1800bf5c0();
            dVar7 = FUN_1800bf5c0();
            uVar8 = (ulonglong)
                    (uint)((float)(dVar6 / dVar7) * (1.0 - (auVar10._0_4_ + param_7)) +
                          auVar10._0_4_ + param_7);
          }
          else {
            dVar6 = FUN_1800bf5c0();
            dVar7 = FUN_1800bf5c0();
            uVar8 = (ulonglong)(uint)((1.0 - (float)(dVar6 / dVar7)) * (auVar10._0_4_ - param_7));
          }
        }
      }
    }
    else {
      uVar8 = 0x3f800000;
    }
  }
  else {
    uVar8 = 0;
  }
  fVar5 = (float)uVar8;
  if (bVar3) {
    uVar11 = (undefined4)(uVar8 >> 0x20);
  }
  else {
    fVar5 = 1.0 - fVar5;
  }
  return CONCAT44(uVar11,fVar5);
}


float FUN_18008c630(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                   char param_5,float param_6,float param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  if (param_3 == param_4) {
    return 0.0;
  }
  if (param_3 < param_4) {
    if (param_2 < param_3) {
      lVar2 = param_3;
    }
    else {
      lVar2 = param_2;
      if (param_4 < param_2) {
        lVar2 = param_4;
      }
    }
  }
  else if (param_2 < param_4) {
    lVar2 = param_4;
  }
  else {
    lVar2 = param_2;
    if (param_3 < param_2) {
      lVar2 = param_3;
    }
  }
  if (param_5 == '\0') {
    return (float)((double)(lVar2 - param_3) / (double)(param_4 - param_3));
  }
  lVar3 = param_3;
  lVar1 = param_4;
  if (param_3 <= param_4) {
    lVar3 = param_4;
    lVar1 = param_3;
  }
  fVar7 = 0.0;
  dVar5 = (double)lVar1;
  if (ABS(dVar5) < (double)param_6) {
    fVar4 = param_6;
    if ((float)lVar1 < 0.0) {
      fVar4 = -param_6;
    }
    dVar5 = (double)fVar4;
  }
  dVar6 = (double)lVar3;
  fVar4 = -param_6;
  fVar9 = (float)lVar1;
  if (ABS(dVar6) < (double)param_6) {
    if ((float)lVar3 < 0.0) {
      param_6 = fVar4;
    }
    dVar6 = (double)param_6;
  }
  fVar8 = (float)lVar3;
  if ((fVar9 != 0.0) || (0.0 <= fVar8)) {
    if ((fVar8 == 0.0) && (fVar9 < 0.0)) {
      dVar6 = (double)fVar4;
    }
  }
  else {
    dVar5 = (double)fVar4;
  }
  if (dVar5 < (double)lVar2) {
    if ((double)lVar2 < dVar6) {
      if (0.0 <= (float)(lVar1 * lVar3)) {
        if ((fVar9 < 0.0) || (fVar8 < 0.0)) {
          dVar5 = FUN_1800bf5c0();
          dVar6 = FUN_1800bf5c0();
          fVar7 = 1.0 - (float)(dVar5 / dVar6);
        }
        else {
          dVar5 = FUN_1800bf5c0();
          dVar6 = FUN_1800bf5c0();
          fVar7 = (float)(dVar5 / dVar6);
        }
      }
      else {
        fVar7 = -fVar9 / (fVar8 - fVar9);
        if ((float)param_2 != 0.0) {
          if (0.0 <= (float)param_2) {
            dVar5 = FUN_1800bf5c0();
            dVar6 = FUN_1800bf5c0();
            fVar7 = (float)(dVar5 / dVar6) * (1.0 - (fVar7 + param_7)) + fVar7 + param_7;
          }
          else {
            dVar5 = FUN_1800bf5c0();
            dVar6 = FUN_1800bf5c0();
            fVar7 = (1.0 - (float)(dVar5 / dVar6)) * (fVar7 - param_7);
          }
        }
      }
    }
    else {
      fVar7 = 1.0;
    }
  }
  if (param_4 < param_3) {
    return 1.0 - fVar7;
  }
  return fVar7;
}


float FUN_18008c9b0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                   char param_5,float param_6,float param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  if (param_3 == param_4) {
    return 0.0;
  }
  if (param_3 < param_4) {
    uVar2 = param_3;
    if ((param_3 <= param_2) && (uVar2 = param_2, param_4 < param_2)) {
      uVar2 = param_4;
    }
  }
  else if (param_2 < param_4) {
    uVar2 = param_4;
  }
  else {
    uVar2 = param_2;
    if (param_3 < param_2) {
      uVar2 = param_3;
    }
  }
  if (param_5 == '\0') {
    return (float)((double)(longlong)(uVar2 - param_3) / (double)(longlong)(param_4 - param_3));
  }
  uVar3 = param_3;
  uVar1 = param_4;
  if (param_3 <= param_4) {
    uVar3 = param_4;
    uVar1 = param_3;
  }
  dVar5 = (double)uVar1;
  fVar8 = 0.0;
  if (ABS(dVar5) < (double)param_6) {
    fVar4 = param_6;
    if ((float)uVar1 < 0.0) {
      fVar4 = -param_6;
    }
    dVar5 = (double)fVar4;
  }
  fVar9 = (float)uVar1;
  fVar4 = -param_6;
  dVar6 = (double)uVar3;
  if (ABS(dVar6) < (double)param_6) {
    if ((float)uVar3 < 0.0) {
      param_6 = fVar4;
    }
    dVar6 = (double)param_6;
  }
  fVar7 = (float)uVar3;
  if ((fVar9 != 0.0) || (0.0 <= fVar7)) {
    if ((fVar7 == 0.0) && (fVar9 < 0.0)) {
      dVar6 = (double)fVar4;
    }
  }
  else {
    dVar5 = (double)fVar4;
  }
  if (dVar5 < (double)uVar2) {
    if ((double)uVar2 < dVar6) {
      if (0.0 <= (float)(uVar1 * uVar3)) {
        if ((fVar9 < 0.0) || (fVar7 < 0.0)) {
          dVar5 = FUN_1800bf5c0();
          dVar6 = FUN_1800bf5c0();
          fVar8 = 1.0 - (float)(dVar5 / dVar6);
        }
        else {
          dVar5 = FUN_1800bf5c0();
          dVar6 = FUN_1800bf5c0();
          fVar8 = (float)(dVar5 / dVar6);
        }
      }
      else {
        fVar8 = -fVar9 / (fVar7 - fVar9);
        if ((float)param_2 != 0.0) {
          if (0.0 <= (float)param_2) {
            dVar5 = FUN_1800bf5c0();
            dVar6 = FUN_1800bf5c0();
            fVar8 = (float)(dVar5 / dVar6) * (1.0 - (fVar8 + param_7)) + fVar8 + param_7;
          }
          else {
            dVar5 = FUN_1800bf5c0();
            dVar6 = FUN_1800bf5c0();
            fVar8 = (1.0 - (float)(dVar5 / dVar6)) * (fVar8 - param_7);
          }
        }
      }
    }
    else {
      fVar8 = 1.0;
    }
  }
  if (param_4 < param_3) {
    return 1.0 - fVar8;
  }
  return fVar8;
}


int FUN_18008ce40(int param_1,float param_2,int param_3,int param_4,char param_5,float param_6,
                 float param_7)

{
  int iVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  if ((0.0 < param_2) && (param_3 != param_4)) {
    if (1.0 <= param_2) {
      return param_4;
    }
    if (param_5 == '\0') {
      if (param_1 - 8U < 2) {
        iVar1 = (int)((float)(param_4 - param_3) * param_2 + (float)param_3);
      }
      else {
        iVar1 = 0;
        if (param_2 < 1.0) {
          if (param_4 < param_3) {
            fVar7 = -0.5;
          }
          else {
            fVar7 = 0.5;
          }
          iVar1 = (int)((float)(param_4 - param_3) * param_2 + fVar7) + param_3;
        }
      }
    }
    else {
      fVar7 = (float)param_3;
      if (param_6 <= ABS(fVar7)) {
        fVar5 = fVar7;
      }
      else {
        fVar5 = param_6;
        if (fVar7 < 0.0) {
          fVar5 = -param_6;
        }
      }
      fVar4 = (float)param_4;
      if (param_6 <= ABS(fVar4)) {
        fVar3 = fVar4;
      }
      else if (0.0 <= fVar4) {
        fVar3 = param_6;
      }
      else {
        fVar3 = -param_6;
      }
      fVar6 = fVar5;
      if (param_4 < param_3) {
        fVar6 = fVar3;
        fVar3 = fVar5;
      }
      if ((fVar4 != 0.0) || (fVar5 = -param_6, 0.0 <= fVar7)) {
        fVar5 = fVar3;
      }
      if (param_4 < param_3) {
        param_2 = 1.0 - param_2;
      }
      if (0.0 <= (float)(param_3 * param_4)) {
        if ((fVar7 < 0.0) || (fVar4 < 0.0)) {
          uVar2 = FUN_1800bbe80();
          iVar1 = (int)-((float)uVar2 * -fVar5);
        }
        else {
          uVar2 = FUN_1800bbe80();
          iVar1 = (int)((float)uVar2 * fVar6);
        }
      }
      else {
        if (param_3 < param_4) {
          param_4 = param_3;
        }
        fVar7 = -(float)param_4 / ABS(fVar4 - fVar7);
        if ((param_2 < fVar7 - param_7) || (fVar7 + param_7 < param_2)) {
          if (fVar7 <= param_2) {
            uVar2 = FUN_1800bbe80();
            iVar1 = (int)((float)uVar2 * param_6);
          }
          else {
            uVar2 = FUN_1800bbe80();
            iVar1 = (int)-((float)uVar2 * param_6);
          }
        }
        else {
          iVar1 = 0;
        }
      }
    }
    return iVar1;
  }
  return param_3;
}


ulonglong FUN_18008d0e0(int param_1,float param_2,uint param_3,uint param_4,char param_5,
                       float param_6,float param_7)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  if ((0.0 < param_2) && (param_3 != param_4)) {
    if (1.0 <= param_2) {
      return (ulonglong)param_4;
    }
    if (param_5 == '\0') {
      if (param_1 - 8U < 2) {
        uVar1 = (ulonglong)((float)(param_4 - param_3) * param_2 + (float)param_3);
      }
      else {
        uVar1 = 0;
        if (param_2 < 1.0) {
          if (param_4 < param_3) {
            fVar6 = -0.5;
          }
          else {
            fVar6 = 0.5;
          }
          uVar1 = (ulonglong)((int)((float)(int)(param_4 - param_3) * param_2 + fVar6) + param_3);
        }
      }
    }
    else {
      fVar6 = (float)param_3;
      if (param_6 <= ABS(fVar6)) {
        fVar4 = fVar6;
      }
      else {
        fVar4 = param_6;
        if (fVar6 < 0.0) {
          fVar4 = -param_6;
        }
      }
      fVar3 = (float)param_4;
      if (param_6 <= ABS(fVar3)) {
        fVar2 = fVar3;
      }
      else if (0.0 <= fVar3) {
        fVar2 = param_6;
      }
      else {
        fVar2 = -param_6;
      }
      fVar5 = fVar4;
      if (param_4 < param_3) {
        fVar5 = fVar2;
        fVar2 = fVar4;
      }
      if ((fVar3 != 0.0) || (fVar4 = -param_6, 0.0 <= fVar6)) {
        fVar4 = fVar2;
      }
      if (param_4 < param_3) {
        param_2 = 1.0 - param_2;
      }
      if (0.0 <= (float)(param_3 * param_4)) {
        if ((fVar6 < 0.0) || (fVar3 < 0.0)) {
          uVar1 = FUN_1800bbe80();
          uVar1 = (ulonglong)-((float)uVar1 * -fVar4);
        }
        else {
          uVar1 = FUN_1800bbe80();
          uVar1 = (ulonglong)((float)uVar1 * fVar5);
        }
      }
      else {
        if (param_3 < param_4) {
          param_4 = param_3;
        }
        fVar6 = -(float)param_4 / ABS(fVar3 - fVar6);
        if ((param_2 < fVar6 - param_7) || (fVar6 + param_7 < param_2)) {
          if (fVar6 <= param_2) {
            uVar1 = FUN_1800bbe80();
            uVar1 = (ulonglong)((float)uVar1 * param_6);
          }
          else {
            uVar1 = FUN_1800bbe80();
            uVar1 = (ulonglong)-((float)uVar1 * param_6);
          }
        }
        else {
          uVar1 = 0;
        }
      }
    }
    return uVar1;
  }
  return (ulonglong)param_3;
}


undefined8
FUN_18008d390(int param_1,float param_2,undefined8 param_3,undefined8 param_4,char param_5,
             float param_6,float param_7)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar3 = (float)param_4;
  fVar8 = (float)param_3;
  fVar4 = 0.0;
  uVar5 = 0;
  if ((param_2 <= 0.0) || (fVar8 == fVar3)) {
    return param_3;
  }
  if (1.0 <= param_2) {
    return param_4;
  }
  if (param_5 == '\0') {
    if (param_1 - 8U < 2) {
      fVar4 = (fVar3 - fVar8) * param_2;
      uVar5 = (int)((ulonglong)param_4 >> 0x20);
    }
    else {
      if (1.0 <= param_2) goto LAB_18008d5c9;
      if (fVar8 <= fVar3) {
        fVar4 = 0.5;
      }
      else {
        fVar4 = -0.5;
      }
      uVar5 = 0;
      fVar4 = fVar4 + (fVar3 - fVar8) * param_2;
    }
    fVar4 = fVar4 + fVar8;
  }
  else {
    if (param_6 <= ABS(fVar8)) {
      fVar6 = fVar8;
    }
    else {
      fVar6 = param_6;
      if (fVar8 < 0.0) {
        fVar6 = -param_6;
      }
    }
    if (param_6 <= ABS(fVar3)) {
      fVar2 = fVar3;
    }
    else if (0.0 <= fVar3) {
      fVar2 = param_6;
    }
    else {
      fVar2 = -param_6;
    }
    fVar7 = fVar6;
    if (fVar8 > fVar3) {
      fVar7 = fVar2;
      fVar2 = fVar6;
    }
    if ((fVar3 != 0.0) || (fVar6 = -param_6, 0.0 <= fVar8)) {
      fVar6 = fVar2;
    }
    if (fVar8 > fVar3) {
      param_2 = 1.0 - param_2;
    }
    if (0.0 <= fVar8 * fVar3) {
      if ((fVar8 < 0.0) || (fVar3 < 0.0)) {
        uVar1 = FUN_1800bbe80();
        uVar5 = (undefined4)(uVar1 >> 0x20);
        fVar4 = -((float)uVar1 * -fVar6);
      }
      else {
        uVar1 = FUN_1800bbe80();
        uVar5 = (undefined4)(uVar1 >> 0x20);
        fVar4 = (float)uVar1 * fVar7;
      }
    }
    else {
      fVar6 = fVar8;
      if (fVar3 <= fVar8) {
        fVar6 = fVar3;
      }
      fVar8 = -fVar6 / ABS(fVar3 - fVar8);
      if ((param_2 < fVar8 - param_7) || (fVar8 + param_7 < param_2)) {
        if (fVar8 <= param_2) {
          uVar1 = FUN_1800bbe80();
          uVar5 = (undefined4)(uVar1 >> 0x20);
          fVar4 = (float)uVar1 * param_6;
        }
        else {
          uVar1 = FUN_1800bbe80();
          uVar5 = (undefined4)(uVar1 >> 0x20);
          fVar4 = -((float)uVar1 * param_6);
        }
      }
    }
  }
LAB_18008d5c9:
  return CONCAT44(uVar5,fVar4);
}


double FUN_18008d600(int param_1,float param_2,double param_3,double param_4,char param_5,
                    float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if ((0.0 < param_2) && (param_3 != param_4)) {
    if (param_2 < 1.0) {
      if (param_5 == '\0') {
        if (param_1 - 8U < 2) {
          dVar5 = (param_4 - param_3) * (double)param_2 + param_3;
        }
        else if (1.0 <= param_2) {
          dVar5 = 0.0;
        }
        else {
          dVar5 = (param_4 - param_3) * (double)param_2;
          if (param_3 <= param_4) {
            dVar5 = dVar5 + 0.5 + param_3;
          }
          else {
            dVar5 = dVar5 + -0.5 + param_3;
          }
        }
      }
      else {
        dVar5 = 0.0;
        dVar1 = (double)param_6;
        dVar4 = param_3;
        if (ABS(param_3) < dVar1) {
          fVar3 = param_6;
          if (param_3 < 0.0) {
            fVar3 = -param_6;
          }
          dVar4 = (double)fVar3;
        }
        if (dVar1 <= ABS(param_4)) {
          dVar6 = param_4;
        }
        else {
          fVar3 = param_6;
          if (param_4 < 0.0) {
            fVar3 = -param_6;
          }
          dVar6 = (double)fVar3;
        }
        dVar2 = dVar4;
        if (param_3 > param_4) {
          dVar2 = dVar6;
          dVar6 = dVar4;
        }
        if ((param_4 == 0.0) && (param_3 < 0.0)) {
          dVar6 = (double)-param_6;
        }
        if (param_3 > param_4) {
          param_2 = 1.0 - param_2;
        }
        if (0.0 <= param_3 * param_4) {
          if ((param_3 < 0.0) || (param_4 < 0.0)) {
            dVar5 = FUN_1800bfe80(-dVar2 / -dVar6);
            dVar5 = -(dVar5 * -dVar6);
          }
          else {
            dVar5 = FUN_1800bfe80(dVar6 / dVar2);
            dVar5 = dVar5 * dVar2;
          }
        }
        else {
          dVar4 = param_3;
          if (param_4 <= param_3) {
            dVar4 = param_4;
          }
          fVar3 = -(float)dVar4 / ABS((float)param_4 - (float)param_3);
          if ((param_2 < fVar3 - param_7) || (fVar3 + param_7 < param_2)) {
            if (fVar3 <= param_2) {
              dVar5 = FUN_1800bfe80(dVar6 / dVar1);
              dVar5 = dVar5 * dVar1;
            }
            else {
              dVar5 = FUN_1800bfe80(-dVar2 / dVar1);
              dVar5 = -(dVar5 * dVar1);
            }
          }
        }
      }
      return dVar5;
    }
    return param_4;
  }
  return param_3;
}


longlong FUN_18008d8f0(int param_1,float param_2,longlong param_3,longlong param_4,char param_5,
                      float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  float fVar7;

  if ((0.0 < param_2) && (param_3 != param_4)) {
    if (1.0 <= param_2) {
      return param_4;
    }
    if (param_5 == '\0') {
      if (param_1 - 8U < 2) {
        lVar4 = (longlong)((float)(param_4 - param_3) * param_2 + (float)param_3);
      }
      else {
        lVar4 = 0;
        if (param_2 < 1.0) {
          if (param_4 < param_3) {
            fVar5 = -0.5;
          }
          else {
            fVar5 = 0.5;
          }
          lVar4 = (longlong)((float)(param_4 - param_3) * param_2 + fVar5) + param_3;
        }
      }
    }
    else {
      dVar6 = (double)param_3;
      dVar2 = (double)param_6;
      if (ABS(dVar6) < dVar2) {
        fVar5 = param_6;
        if ((float)param_3 < 0.0) {
          fVar5 = -param_6;
        }
        dVar6 = (double)fVar5;
      }
      dVar1 = (double)param_4;
      fVar5 = (float)param_3;
      if (ABS(dVar1) < dVar2) {
        fVar7 = param_6;
        if ((float)param_4 < 0.0) {
          fVar7 = -param_6;
        }
        dVar1 = (double)fVar7;
      }
      fVar7 = (float)param_4;
      dVar3 = dVar6;
      if (param_4 < param_3) {
        dVar3 = dVar1;
        dVar1 = dVar6;
      }
      if ((fVar7 == 0.0) && (fVar5 < 0.0)) {
        dVar1 = (double)-param_6;
      }
      if (param_4 < param_3) {
        param_2 = 1.0 - param_2;
      }
      if (0.0 <= (float)(param_3 * param_4)) {
        if ((fVar5 < 0.0) || (fVar7 < 0.0)) {
          dVar6 = FUN_1800bfe80(-dVar3 / -dVar1);
          lVar4 = (longlong)-(dVar6 * -dVar1);
        }
        else {
          dVar6 = FUN_1800bfe80(dVar1 / dVar3);
          lVar4 = (longlong)(dVar6 * dVar3);
        }
      }
      else {
        if (param_3 < param_4) {
          param_4 = param_3;
        }
        fVar5 = -(float)param_4 / ABS(fVar7 - fVar5);
        if ((param_2 < fVar5 - param_7) || (fVar5 + param_7 < param_2)) {
          if (fVar5 <= param_2) {
            dVar6 = FUN_1800bfe80(dVar1 / dVar2);
            lVar4 = (longlong)(dVar6 * dVar2);
          }
          else {
            dVar6 = FUN_1800bfe80(-dVar3 / dVar2);
            lVar4 = (longlong)-(dVar6 * dVar2);
          }
        }
        else {
          lVar4 = 0;
        }
      }
    }
    return lVar4;
  }
  return param_3;
}


ulonglong FUN_18008dbd0(int param_1,float param_2,ulonglong param_3,ulonglong param_4,char param_5,
                       float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  float fVar7;

  if ((param_2 <= 0.0) || (param_3 == param_4)) {
    return param_3;
  }
  if (1.0 <= param_2) {
    return param_4;
  }
  if (param_5 == '\0') {
    if (param_1 - 8U < 2) {
      fVar5 = (float)(param_4 - param_3) * param_2 + (float)param_3;
      lVar4 = 0;
      if ((9.223372e+18 <= fVar5) && (fVar5 = fVar5 - 9.223372e+18, fVar5 < 9.223372e+18)) {
        lVar4 = -0x8000000000000000;
      }
      return (longlong)fVar5 + lVar4;
    }
    if (param_2 < 1.0) {
      if (param_4 < param_3) {
        fVar5 = -0.5;
      }
      else {
        fVar5 = 0.5;
      }
      return (longlong)((float)(longlong)(param_4 - param_3) * param_2 + fVar5) + param_3;
    }
    return 0;
  }
  dVar2 = (double)param_6;
  dVar6 = (double)param_3;
  if (ABS(dVar6) < dVar2) {
    fVar5 = param_6;
    if ((float)param_3 < 0.0) {
      fVar5 = -param_6;
    }
    dVar6 = (double)fVar5;
  }
  fVar5 = (float)param_3;
  dVar1 = (double)param_4;
  if (ABS(dVar1) < dVar2) {
    fVar7 = param_6;
    if ((float)param_4 < 0.0) {
      fVar7 = -param_6;
    }
    dVar1 = (double)fVar7;
  }
  fVar7 = (float)param_4;
  dVar3 = dVar6;
  if (param_4 < param_3) {
    dVar3 = dVar1;
    dVar1 = dVar6;
  }
  if ((fVar7 == 0.0) && (fVar5 < 0.0)) {
    dVar1 = (double)-param_6;
  }
  if (param_4 < param_3) {
    param_2 = 1.0 - param_2;
  }
  if (0.0 <= (float)(param_3 * param_4)) {
    if ((0.0 <= fVar5) && (0.0 <= fVar7)) {
      dVar6 = FUN_1800bfe80(dVar1 / dVar3);
      dVar6 = dVar6 * dVar3;
      goto LAB_18008def6;
    }
    dVar6 = FUN_1800bfe80(-dVar3 / -dVar1);
    dVar6 = dVar6 * -dVar1;
  }
  else {
    if (param_3 < param_4) {
      param_4 = param_3;
    }
    fVar5 = -(float)param_4 / ABS(fVar7 - fVar5);
    if ((fVar5 - param_7 <= param_2) && (param_2 <= fVar5 + param_7)) {
      return 0;
    }
    if (fVar5 <= param_2) {
      dVar6 = FUN_1800bfe80(dVar1 / dVar2);
      dVar6 = dVar6 * dVar2;
      goto LAB_18008def6;
    }
    dVar6 = FUN_1800bfe80(-dVar3 / dVar2);
    dVar6 = dVar6 * dVar2;
  }
  dVar6 = -dVar6;
LAB_18008def6:
  lVar4 = 0;
  if ((9.223372036854776e+18 <= dVar6) &&
     (dVar6 = dVar6 - 9.223372036854776e+18, dVar6 < 9.223372036854776e+18)) {
    lVar4 = -0x8000000000000000;
  }
  return (longlong)dVar6 + lVar4;
}


undefined8 * FUN_18008e020(undefined8 *param_1)

{
  undefined1 (*pauVar1) [32];

  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *param_1 = 0;
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
  pauVar1 = (undefined1 (*) [32])FUN_18005b560(0xa44);
  param_1[1] = pauVar1;
  FUN_1800d22d0(pauVar1,0,0xa44);
  return param_1;
}


void FUN_18008e080(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 8));
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x50));
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x40));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x30));
  }
  return;
}


ulonglong FUN_18008e0d0(byte *param_1,int param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char local_58;
  char local_57 [7];
  undefined8 local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;

  lVar2 = DAT_180115c10;
  uVar7 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar7 + 0xce) = 1;
  plVar1 = *(longlong **)(lVar2 + 0x13a8);
  if (*(char *)((longlong)plVar1 + 0xd1) == '\0') {
    local_50 = param_3;
    uVar4 = FUN_180056b80(plVar1,param_1,0);
    local_48 = *(float *)(plVar1 + 0x23);
    fStack_3c = local_50._4_4_ + *(float *)((longlong)plVar1 + 0x11c);
    fStack_44 = *(float *)((longlong)plVar1 + 0x11c);
    local_40 = local_48 + (float)local_50;
    fVar9 = FUN_180056a00();
    if (local_50._4_4_ < fVar9) {
      fVar9 = -1.0;
    }
    else {
      fVar9 = *(float *)(lVar2 + 0xc6c);
    }
    FUN_18005aca0((float *)&local_50,fVar9);
    uVar7 = FUN_18005a670(&local_48,(wchar_t *)(ulonglong)uVar4,(float *)0x0,0);
    if ((char)uVar7 != '\0') {
      bVar3 = FUN_18008f030(&local_48,(float *)(ulonglong)uVar4,&local_58,local_57,param_4);
      if ((local_57[0] == '\0') || (local_58 == '\0')) {
        iVar8 = (local_58 != '\0') + 0x15;
      }
      else {
        iVar8 = 0x17;
      }
      uVar5 = FUN_1800567e0(iVar8,1.0);
      uVar6 = FUN_1800567e0(0,1.0);
      FUN_180064200(&local_48,uVar4,0);
      FUN_1800639d0(CONCAT44(fStack_44,local_48),CONCAT44(fStack_3c,local_40),uVar5,'\x01',
                    *(float *)(lVar2 + 0xc70));
      fVar10 = ((float)local_50 - *(float *)(lVar2 + 0x10c0)) * 0.5;
      fVar9 = 0.0;
      if (0.0 <= fVar10) {
        fVar9 = fVar10;
      }
      fVar11 = (local_50._4_4_ - *(float *)(lVar2 + 0x10c0)) * 0.5;
      fVar10 = 0.0;
      if (0.0 <= fVar11) {
        fVar10 = fVar11;
      }
      FUN_180076630((int *)plVar1[0x58],CONCAT44(fStack_44 + fVar10,local_48 + fVar9),uVar6,param_2,
                    1.0);
      return (ulonglong)bVar3;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}


ulonglong FUN_18008e2f0(byte *param_1,byte *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong extraout_RAX;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  float fVar13;
  float fVar14;
  float local_res20 [2];
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  undefined1 local_c8 [4];
  uint local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  uint local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;

  lVar2 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  plVar1 = *(longlong **)(lVar2 + 0x13a8);
  local_ac = *(uint *)(lVar2 + 0x1dd8);
  uVar9 = (ulonglong)local_ac;
  *(undefined4 *)(lVar2 + 0x1dd8) = 0;
  if (*(char *)((longlong)plVar1 + 0xd1) != '\0') goto LAB_18008e85d;
  fVar5 = (float)FUN_180056b80(plVar1,param_1,0);
  local_c0 = fVar5;
  if (((byte)param_3 & 0x60) == 0x60) {
    FID_conflict__assert
              (L"(flags & (ImGuiComboFlags_NoArrowButton | ImGuiComboFlags_NoPreview)) != (ImGuiComboFlags_NoArrowButton | ImGuiComboFlags_NoPreview)"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x745);
  }
  if (((param_3 & 0x80) != 0) && ((param_3 & 0x100040) != 0)) {
    FID_conflict__assert
              (L"(flags & (ImGuiComboFlags_NoPreview | (ImGuiComboFlags)ImGuiComboFlags_CustomPreview)) == 0"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x747);
  }
  if ((param_3 & 0x20) == 0) {
    fVar14 = FUN_180056a00();
  }
  else {
    fVar14 = 0.0;
  }
  FUN_180050b60((undefined8 *)&local_a8,param_1,(byte *)0x0,'\x01',-1.0);
  if (((param_3 & 0x80) == 0) || (param_2 == (byte *)0x0)) {
    fVar13 = 0.0;
  }
  else {
    pfVar8 = (float *)FUN_180050b60((undefined8 *)local_res20,param_2,(byte *)0x0,'\x01',-1.0);
    fVar13 = *pfVar8;
  }
  local_c4 = param_3 & 0x40;
  if (local_c4 == 0) {
    if ((param_3 & 0x80) == 0) {
      fVar13 = (float)FUN_1800508d0();
    }
    else {
      fVar13 = *(float *)(lVar2 + 0xc68) + *(float *)(lVar2 + 0xc68) + fVar13 + fVar14;
    }
  }
  else {
    fVar13 = fVar14;
  }
  local_d8 = *(float *)(plVar1 + 0x23);
  local_d0 = local_d8 + fVar13;
  fStack_cc = *(float *)(lVar2 + 0xc6c) + *(float *)(lVar2 + 0xc6c) + local_a4 +
              *(float *)((longlong)plVar1 + 0x11c);
  fStack_d4 = *(float *)((longlong)plVar1 + 0x11c);
  if (local_a8 <= 0.0) {
    local_98 = 0.0;
  }
  else {
    local_98 = local_a8 + *(float *)(lVar2 + 0xc80);
  }
  local_98 = local_d0 + local_98;
  local_94 = fStack_cc + 0.0;
  local_res20[1] = local_94 - fStack_d4;
  local_res20[0] = local_98 - local_d8;
  local_a0 = local_d8;
  local_9c = fStack_d4;
  FUN_18005aca0(local_res20,*(float *)(lVar2 + 0xc6c));
  uVar9 = FUN_18005a670(&local_a0,(wchar_t *)(ulonglong)(uint)fVar5,&local_d8,0);
  if ((char)uVar9 == '\0') goto LAB_18008e85d;
  puVar12 = local_c8;
  cVar3 = FUN_18008f030(&local_d8,(float *)(ulonglong)(uint)fVar5,(char *)local_res20,puVar12,0);
  uVar9 = (ulonglong)(uint)fVar5;
  local_b8 = FUN_180058260((byte *)"##ComboPopup",0,(uint)fVar5);
  bVar4 = FUN_18005a2d0(local_b8,0);
  if ((cVar3 != '\0') && (!bVar4)) {
    FUN_180061780(local_b8,0,uVar9,(ulonglong)puVar12);
    bVar4 = true;
  }
  local_b4 = (float)FUN_1800567e0((local_res20[0]._0_1_ != '\0') + 7,1.0);
  fVar5 = local_d8;
  if (local_d8 <= local_d0 - fVar14) {
    fVar5 = local_d0 - fVar14;
  }
  FUN_180064200(&local_d8,(int)local_c0,0);
  uVar6 = local_c4;
  if (local_c4 == 0) {
    local_bc = fStack_cc;
    uVar7 = 0x50;
    if ((param_3 & 0x20) != 0) {
      uVar7 = 0xf0;
    }
    local_c0 = fVar5;
    FUN_180071360((int *)plVar1[0x58],&local_d8,&local_c0,(uint)local_b4,*(float *)(lVar2 + 0xc70),
                  uVar7);
  }
  if ((param_3 & 0x20) == 0) {
    if (bVar4 == false) {
      iVar10 = 0x15;
      if (local_res20[0]._0_1_ != '\0') goto LAB_18008e62c;
    }
    else {
LAB_18008e62c:
      iVar10 = 0x16;
    }
    uVar6 = FUN_1800567e0(iVar10,1.0);
    uVar7 = FUN_1800567e0(0,1.0);
    uVar11 = 0xa0;
    if (fVar13 <= fVar14) {
      uVar11 = 0xf0;
    }
    local_res20[1] = fStack_d4;
    local_res20[0] = fVar5;
    FUN_180071360((int *)plVar1[0x58],local_res20,&local_d0,uVar6,*(float *)(lVar2 + 0xc70),uVar11);
    if ((fVar5 + fVar14) - *(float *)(lVar2 + 0xc68) <= local_d0) {
      FUN_180076630((int *)plVar1[0x58],
                    CONCAT44(*(float *)(lVar2 + 0xc6c) + fStack_d4,*(float *)(lVar2 + 0xc6c) + fVar5
                            ),uVar7,3,1.0);
    }
    uVar6 = local_c4;
  }
  uVar9 = FUN_180063b80(CONCAT44(fStack_d4,local_d8),CONCAT44(fStack_cc,local_d0),
                        *(float *)(lVar2 + 0xc70));
  if ((param_3 >> 0x14 & 1) == 0) {
    if ((param_2 != (byte *)0x0) && (uVar6 == 0)) {
      if (*(char *)(lVar2 + 0x2678) != '\0') {
        FUN_18005b350(&DAT_1800ee1ec,&DAT_1800ee1e8);
      }
      local_c0 = local_d8 + *(float *)(lVar2 + 0xc68);
      local_b0 = fStack_cc;
      local_bc = fStack_d4 + *(float *)(lVar2 + 0xc6c);
      local_res20[0] = 0.0;
      local_res20[1] = 0.0;
      local_b4 = fVar5;
      uVar9 = FUN_180064710(&local_c0,&local_b4,param_2,(byte *)0x0,(ulonglong *)0x0,local_res20,
                            (float *)0x0);
    }
  }
  else {
    *(float *)(lVar2 + 0x24b4) = local_d8;
    *(float *)(lVar2 + 0x24b8) = fStack_d4;
    *(float *)(lVar2 + 0x24c0) = fStack_cc;
    *(float *)(lVar2 + 0x24bc) = fVar5;
    if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
      FID_conflict__assert
                (L"preview_value == 0 || preview_value[0] == 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x772);
      uVar9 = extraout_RAX;
    }
  }
  if (0.0 < local_a8) {
    uVar9 = FUN_180064450(CONCAT44(fStack_d4 + *(float *)(lVar2 + 0xc6c),
                                   local_d0 + *(float *)(lVar2 + 0xc80)),param_1,(byte *)0x0,'\x01')
    ;
  }
  if (bVar4 != false) {
    *(uint *)(lVar2 + 0x1dd8) = local_ac;
    uVar9 = FUN_18008e890(local_b8,&local_d8,param_3);
    return uVar9;
  }
LAB_18008e85d:
  return uVar9 & 0xffffffffffffff00;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_18008e890(int param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong extraout_RAX;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_b8 [32];
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68 [2];
  float local_60 [4];
  byte local_50 [16];
  ulonglong local_40;

  lVar1 = DAT_180115c10;
  local_40 = DAT_180112300 ^ (ulonglong)auStackY_b8;
  bVar2 = FUN_18005a2d0(param_1,0);
  if (bVar2) {
    uVar10 = *(uint *)(lVar1 + 0x1dd8);
    fVar12 = param_2[2] - *param_2;
    if ((uVar10 & 0x10) == 0) {
      uVar7 = param_3 | 4;
      if ((param_3 & 0x1e) != 0) {
        uVar7 = param_3;
      }
      if (((uVar7 & 0x1e) == 0) || (((uVar7 & 0x1e) - 1 & uVar7 & 0x1e) != 0)) {
        FID_conflict__assert
                  (L"ImIsPowerOfTwo(flags & ImGuiComboFlags_HeightMask_)",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x79a);
        uVar10 = *(uint *)(lVar1 + 0x1dd8);
      }
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          iVar8 = -1;
          if ((uVar7 & 8) != 0) {
            iVar8 = 0x14;
          }
        }
        else {
          iVar8 = 4;
        }
      }
      else {
        iVar8 = 8;
      }
      local_78 = 0;
      local_70 = 3.4028235e+38;
      local_6c = 3.4028235e+38;
      if (((((uVar10 & 2) == 0) || (*(float *)(lVar1 + 0x1df8) <= 0.0)) &&
          (local_78 = (ulonglong)(uint)fVar12, (uVar10 & 2) == 0)) ||
         (*(float *)(lVar1 + 0x1dfc) <= 0.0)) {
        local_6c = FUN_18008f940(iVar8);
      }
      FUN_180067aa0(&local_78,(undefined8 *)&local_70,0,0);
    }
    else {
      fVar11 = *(float *)(lVar1 + 0x1e1c);
      if (*(float *)(lVar1 + 0x1e1c) <= fVar12) {
        fVar11 = fVar12;
      }
      *(float *)(lVar1 + 0x1e1c) = fVar11;
      uVar7 = param_3;
    }
    FUN_180057ec0(local_50,0x10,0x1800ee258,(ulonglong)*(uint *)(lVar1 + 0x2488));
    lVar4 = FUN_180055df0(local_50);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0xcd) != '\0')) {
      FUN_180051110(&local_70,lVar4);
      uVar9 = 3;
      if ((uVar7 & 1) != 0) {
        uVar9 = 0;
      }
      *(undefined4 *)(lVar4 + 0xe8) = uVar9;
      FUN_180057400(local_60);
      local_78 = CONCAT44(param_2[3],*param_2);
      FUN_180055710(local_68,(float *)&local_78,&local_70,(uint *)(lVar4 + 0xe8),local_60,param_2,1)
      ;
      local_78 = 0;
      FUN_1800679a0((undefined8 *)local_68,0,&local_78);
    }
    FUN_180062e60(2,*(undefined4 *)(lVar1 + 0xc68));
    cVar3 = FUN_18004ca40(local_50,(undefined1 *)0x0,0x4000147);
    uVar5 = FUN_180062450(1);
    if (cVar3 == '\0') {
      FUN_180054790();
      FID_conflict__assert
                (L"0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x7c1);
      uVar6 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      *(int *)(lVar1 + 0x2488) = *(int *)(lVar1 + 0x2488) + 1;
      uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
  }
  else {
    uVar6 = 0;
    *(undefined4 *)(lVar1 + 0x1dd8) = 0;
  }
  return uVar6;
}


void FUN_18008eb50(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  lVar3 = DAT_180115c10;
  if (*(longlong *)(param_1 + 0x28) != param_2) {
    FID_conflict__assert
              (L"bs->Window == window",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1ced);
  }
  fVar5 = *(float *)(lVar3 + 0xe8);
  if (fVar5 <= param_3[2]) {
    if (*param_3 <= fVar5) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = fVar5 - *param_3;
    }
  }
  else {
    fVar5 = fVar5 - param_3[2];
  }
  fVar8 = -1.0;
  if (((fVar5 != 0.0) && ((fVar1 = *(float *)(param_2 + 0x98), 0.0 <= fVar5 || (0.0 <= fVar1)))) &&
     ((fVar5 <= 0.0 || (fVar1 < *(float *)(param_2 + 0xa0))))) {
    fVar2 = *(float *)(lVar3 + 0x10c0);
    fVar7 = (ABS(fVar5) - fVar2) / (fVar2 * 5.0 - fVar2);
    if (0.0 <= fVar7) {
      fVar6 = 1.0;
      if (fVar7 <= 1.0) {
        fVar6 = fVar7;
      }
    }
    else {
      fVar6 = 0.0;
    }
    if (0.0 <= fVar5) {
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = 1.0;
      }
    }
    else {
      fVar5 = -1.0;
    }
    fVar5 = (fVar6 * 3.0 + 1.0) * fVar2 * 35.0 * fVar5 * *(float *)(lVar3 + 0x18) +
            *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x20) = fVar5;
    iVar4 = (int)fVar5;
    if ((fVar5 < 0.0) && ((float)iVar4 != fVar5)) {
      iVar4 = iVar4 + -1;
    }
    fVar5 = (float)iVar4;
    if (fVar5 != 0.0) {
      FUN_180067c10(param_2,fVar5 + fVar1);
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - fVar5;
    }
  }
  fVar5 = *(float *)(lVar3 + 0xec);
  if (fVar5 <= param_3[3]) {
    if (param_3[1] <= fVar5) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = fVar5 - param_3[1];
    }
  }
  else {
    fVar5 = fVar5 - param_3[3];
  }
  if (((fVar5 != 0.0) && ((fVar1 = *(float *)(param_2 + 0x9c), 0.0 <= fVar5 || (0.0 <= fVar1)))) &&
     ((fVar5 <= 0.0 || (fVar1 < *(float *)(param_2 + 0xa4))))) {
    fVar2 = *(float *)(lVar3 + 0x10c0);
    fVar7 = (ABS(fVar5) - fVar2) / (fVar2 * 5.0 - fVar2);
    if (0.0 <= fVar7) {
      fVar6 = 1.0;
      if (fVar7 <= 1.0) {
        fVar6 = fVar7;
      }
    }
    else {
      fVar6 = 0.0;
    }
    if (0.0 <= fVar5) {
      if (fVar5 <= 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = 1.0;
      }
    }
    fVar5 = (fVar6 * 3.0 + 1.0) * fVar2 * 35.0 * fVar8 * *(float *)(lVar3 + 0x18) +
            *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar5;
    iVar4 = (int)fVar5;
    if ((fVar5 < 0.0) && ((float)iVar4 != fVar5)) {
      iVar4 = iVar4 + -1;
    }
    fVar5 = (float)iVar4;
    if (fVar5 != 0.0) {
      FUN_180067c30(param_2,fVar5 + fVar1);
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - fVar5;
    }
  }
  return;
}


void FUN_18008ee40(char *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  byte *local_68;
  byte *local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;

  lVar1 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  lVar2 = DAT_180115c10;
  lVar1 = *(longlong *)(lVar1 + 0x13a8);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1800580e0((longlong *)&local_60,(longlong *)&local_68,param_1,&local_res10);
    FUN_180050b60((undefined8 *)&local_70,local_60,local_68,'\0',-1.0);
    if (local_70 <= 0.0) {
      local_70 = 0.0;
    }
    else {
      local_70 = *(float *)(lVar2 + 0xc68) + *(float *)(lVar2 + 0xc68) + local_70;
    }
    local_78 = local_70 + *(float *)(lVar2 + 0x10c0);
    local_74 = local_6c;
    fVar7 = *(float *)(lVar1 + 0x150) + *(float *)(lVar1 + 0x11c);
    fVar6 = *(float *)(lVar1 + 0x118);
    FUN_18005aca0(&local_78,0.0);
    local_4c = local_74 + fVar7;
    local_50 = fVar6 + local_78;
    uVar5 = 0;
    local_58 = fVar6;
    local_54 = fVar7;
    uVar4 = FUN_18005a670(&local_58,(wchar_t *)0x0,(float *)0x0,0);
    if ((char)uVar4 != '\0') {
      uVar3 = FUN_1800567e0(0,1.0);
      fVar6 = *(float *)(lVar2 + 0x10c0) * 0.5;
      FUN_180077af0(*(int **)(lVar1 + 0x2c0),
                    CONCAT44(local_54 + fVar6,local_58 + fVar6 + *(float *)(lVar2 + 0xc68)),uVar3,
                    uVar5);
      FUN_180064450(CONCAT44(local_54 + 0.0,
                             *(float *)(lVar2 + 0xc68) + *(float *)(lVar2 + 0xc68) +
                             *(float *)(lVar2 + 0x10c0) + local_58),local_60,local_68,'\0');
    }
  }
  return;
}


char FUN_18008f030(float *param_1,float *param_2,char *param_3,undefined1 *param_4,uint param_5)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  float *pfVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  float *pfVar18;
  uint uVar19;
  wchar_t *pwVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  ulonglong uVar26;
  char cVar27;
  undefined1 uVar29;
  undefined1 uVar28;
  uint uVar30;
  float fVar31;
  uint local_58;

  lVar2 = DAT_180115c10;
  uVar26 = (ulonglong)param_5;
  uVar19 = (uint)param_2;
  pfVar18 = (float *)((ulonglong)param_2 & 0xffffffff);
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  pfVar21 = *(float **)(lVar2 + 0x13a8);
  lVar10 = 0x1d8c;
  if (*(uint *)(lVar2 + 0x1d88) != uVar19) {
    lVar10 = 0x1d48;
  }
  uVar9 = *(uint *)(lVar10 + lVar2) | 0x4000;
  if ((param_5 >> 0xc & 1) == 0) {
    uVar9 = *(uint *)(lVar10 + lVar2);
  }
  uVar23 = param_5 | 1;
  if ((param_5 & 7) != 0) {
    uVar23 = param_5;
  }
  if ((uVar23 & 0x3f0) == 0) {
    uVar22 = 0x20;
    if ((uVar9 & 8) != 0) {
      uVar22 = 0x10;
    }
    uVar23 = uVar22 | uVar23;
  }
  lVar10 = *(longlong *)(lVar2 + 0x13b0);
  if ((((uVar23 >> 0xb & 1) == 0) || (lVar10 == 0)) || (*(float **)(lVar10 + 0x3b0) != pfVar21)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    *(float **)(lVar2 + 0x13b0) = pfVar21;
  }
  pfVar25 = (float *)(ulonglong)uVar9;
  cVar27 = '\0';
  pwVar20 = (wchar_t *)param_2;
  param_5._0_1_ = FUN_18005a9d0(param_1,uVar19,pfVar25,uVar26);
  if (((*(char *)(lVar2 + 0x2114) != '\0') && ((uVar23 >> 9 & 1) != 0)) &&
     (((*(byte *)(lVar2 + 0x2118) & 4) == 0 &&
      (uVar11 = FUN_180059410(0x80,(float *)pwVar20,pfVar25,uVar26), (char)uVar11 != '\0')))) {
    param_5._0_1_ = true;
    FUN_1800673f0(uVar19);
    if ((*(float *)(lVar2 + 0x1410) - *(float *)(lVar2 + 0x18) <= 0.7) &&
       (0.7 <= *(float *)(lVar2 + 0x1410))) {
      pwVar20 = (wchar_t *)0x0;
      *(uint *)(lVar2 + 0x21a0) = uVar19;
      cVar27 = '\x01';
      FUN_180056440((longlong)pfVar21,0,(ulonglong)pfVar25);
    }
  }
  if (bVar4) {
    *(longlong *)(lVar2 + 0x13b0) = lVar10;
  }
  pfVar15 = pfVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
    pfVar15 = (float *)0x0;
  }
  iVar14 = (int)pfVar15;
  pwVar16 = (wchar_t *)pfVar15;
  if (param_5._0_1_ != false) {
    if (uVar19 == 0) {
      pfVar25 = (float *)0x22b;
      pwVar20 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
      ;
      pwVar16 = L"id != 0";
      FID_conflict__assert
                (L"id != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x22b);
    }
    uVar22 = 0xffffffff;
    local_58 = 0xffffffff;
    uVar24 = 0;
    uVar30 = 1;
    do {
      if ((uVar23 & uVar30) != 0) {
        pfVar25 = pfVar15;
        bVar4 = FUN_180059b30(uVar24,0,iVar14);
        if (bVar4) {
          uVar3 = uVar24;
          if (uVar22 != 0xffffffff) {
            uVar3 = uVar22;
          }
          uVar22 = uVar3;
        }
        pwVar16 = (wchar_t *)(ulonglong)uVar24;
        pwVar20 = (wchar_t *)pfVar15;
        cVar5 = FUN_18005a230(uVar24,iVar14);
        if ((cVar5 != '\0') && (local_58 == 0xffffffff)) {
          local_58 = uVar24;
        }
      }
      uVar24 = uVar24 + 1;
      uVar30 = uVar30 << 1 | (uint)((int)uVar30 < 0);
    } while ((int)uVar24 < 3);
    if (((uVar23 >> 0x10 & 1) == 0) ||
       (((*(char *)(lVar2 + 0x104) == '\0' && (*(char *)(lVar2 + 0x105) == '\0')) &&
        (*(char *)(lVar2 + 0x106) == '\0')))) {
      if ((uVar22 != 0xffffffff) && (*(uint *)(lVar2 + 0x141c) != uVar19)) {
        if ((uVar23 >> 0x14 & 1) == 0) {
          if (4 < uVar22) {
            FID_conflict__assert
                      (L"button >= 0 && button < ImGuiMouseButton_COUNT",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                       ,0xc93);
          }
          pwVar16 = (wchar_t *)(ulonglong)(uVar22 + 0x290);
          pfVar25 = (float *)0x0;
          pwVar20 = (wchar_t *)pfVar18;
          FUN_180067480(uVar22 + 0x290,uVar19,0);
        }
        if ((uVar23 & 0x60) != 0) {
          FUN_180066c00(uVar19,pfVar21,pfVar25,uVar26);
          *(char *)(lVar2 + 0x1430) = (char)uVar22;
          bVar4 = (uVar23 >> 0x12 & 1) != 0;
          if (!bVar4) {
            FUN_1800672c0(uVar19,(wchar_t *)pfVar21,pfVar25,uVar26);
          }
          pwVar20 = (wchar_t *)(ulonglong)bVar4;
          pwVar16 = (wchar_t *)pfVar21;
          FUN_180056440((longlong)pfVar21,(ulonglong)pwVar20,(ulonglong)pfVar25);
        }
        if (((uVar23 & 0x10) != 0) ||
           (((uVar23 >> 8 & 1) != 0 && (*(short *)(lVar2 + 0xb22 + (longlong)(int)uVar22 * 2) == 2))
           )) {
          cVar27 = '\x01';
          if ((uVar23 >> 0x11 & 1) == 0) {
            FUN_180066c00(uVar19,pfVar21,pfVar25,uVar26);
          }
          else {
            FUN_180051730(pwVar16,pwVar20,pfVar25,uVar26);
          }
          *(char *)(lVar2 + 0x1430) = (char)uVar22;
          if ((uVar23 >> 0x12 & 1) == 0) {
            FUN_1800672c0(uVar19,(wchar_t *)pfVar21,pfVar25,uVar26);
            pwVar20 = (wchar_t *)0x0;
            pwVar16 = (wchar_t *)pfVar21;
            FUN_180056440((longlong)pfVar21,0,(ulonglong)pfVar25);
          }
          else {
            pwVar20 = (wchar_t *)0x1;
            pwVar16 = (wchar_t *)pfVar21;
            FUN_180056440((longlong)pfVar21,1,(ulonglong)pfVar25);
          }
        }
      }
      if (((char)uVar23 < '\0') && (local_58 != 0xffffffff)) {
        if (((uVar9 & 8) == 0) ||
           (*(float *)(lVar2 + 0xb88 + (longlong)(int)local_58 * 4) < *(float *)(lVar2 + 0x7c))) {
          cVar27 = '\x01';
        }
        if ((uVar23 >> 0x12 & 1) == 0) {
          pwVar16 = (wchar_t *)pfVar18;
          pwVar20 = (wchar_t *)pfVar21;
          FUN_1800672c0(uVar19,(wchar_t *)pfVar21,pfVar25,uVar26);
        }
        FUN_180051730(pwVar16,pwVar20,pfVar25,uVar26);
      }
      if ((*(uint *)(lVar2 + 0x141c) != uVar19) || ((uVar9 & 8) == 0)) goto LAB_18008f3dd;
      pwVar16 = (wchar_t *)(longlong)*(char *)(lVar2 + 0x1430);
      if (*(float *)(lVar2 + 0xb74 + (longlong)pwVar16 * 4) <= 0.0) goto LAB_18008f3dd;
      pwVar20 = (wchar_t *)0x1;
      pfVar25 = pfVar15;
      bVar4 = FUN_180059b30((int)*(char *)(lVar2 + 0x1430),1,iVar14);
      if (!bVar4) goto LAB_18008f3dd;
      cVar27 = '\x01';
    }
    else {
LAB_18008f3dd:
      if (cVar27 == '\0') goto LAB_18008f406;
    }
    if (*(char *)(lVar2 + 0x5d) != '\0') {
      *(undefined1 *)(lVar2 + 0x1ef8) = 0;
    }
  }
LAB_18008f406:
  if ((((*(uint *)(lVar2 + 0x1efc) == uVar19) && (*(char *)(lVar2 + 0x1ef8) != '\0')) &&
      (*(char *)(lVar2 + 0x1ef9) != '\0')) && ((uVar23 >> 0x13 & 1) == 0)) {
    param_5._0_1_ = true;
  }
  if (*(uint *)(lVar2 + 0x1f14) == uVar19) {
    bVar4 = *(uint *)(lVar2 + 0x1f18) == uVar19;
    uVar22 = *(uint *)(lVar2 + 0x1f10);
    pwVar16 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar16 >> 8),bVar4);
    if ((!bVar4) && ((uVar9 & 8) != 0)) {
      lVar10 = FUN_180056f10(DAT_180115c10,0x20c);
      lVar12 = FUN_180056f10(DAT_180115c10,0x20d);
      pwVar20 = (wchar_t *)0x27d;
      if (*(char *)(lVar2 + 0x58) != '\0') {
        pwVar20 = (wchar_t *)0x27b;
      }
      lVar17 = DAT_180115c10;
      lVar13 = FUN_180056f10(DAT_180115c10,(uint)pwVar20);
      fVar31 = *(float *)(lVar10 + 4);
      if (*(float *)(lVar10 + 4) <= *(float *)(lVar12 + 4)) {
        fVar31 = *(float *)(lVar12 + 4);
      }
      if (fVar31 <= *(float *)(lVar13 + 4)) {
        fVar31 = *(float *)(lVar13 + 4);
      }
      iVar8 = FUN_180050c40(fVar31 - *(float *)(lVar2 + 0x18),fVar31,*(float *)(lVar2 + 0x7c),
                            *(float *)(lVar2 + 0x80));
      pwVar16 = (wchar_t *)CONCAT71((int7)((ulonglong)lVar17 >> 8),0 < iVar8);
    }
    if ((uVar22 == uVar19) || ((char)pwVar16 != '\0')) {
      pwVar16 = (wchar_t *)((ulonglong)param_2 & 0xffffffff);
      cVar27 = '\x01';
      pwVar20 = (wchar_t *)pfVar21;
      FUN_180066c00(uVar19,pfVar21,pfVar25,uVar26);
      *(undefined4 *)(lVar2 + 0x1448) = *(undefined4 *)(lVar2 + 8000);
      if ((uVar23 >> 0x12 & 1) == 0) {
        if ((*(byte *)(lVar2 + 0x1f1c) & 0x10) == 0) {
          FUN_1800672c0(uVar19,(wchar_t *)pfVar21,pfVar25,uVar26);
          pwVar16 = (wchar_t *)pfVar18;
          pwVar20 = (wchar_t *)pfVar21;
          goto LAB_18008f513;
        }
      }
      else {
LAB_18008f513:
        if ((*(byte *)(lVar2 + 0x1f1c) & 0x10) == 0) goto LAB_18008f523;
      }
      *(undefined1 *)(lVar2 + 0x142e) = 1;
    }
  }
LAB_18008f523:
  uVar29 = 0;
  uVar28 = 0;
  if (*(uint *)(lVar2 + 0x141c) != uVar19) goto LAB_18008f665;
  if (*(int *)(lVar2 + 0x1448) == 1) {
    if (*(char *)(lVar2 + 0x1428) != '\0') {
      *(ulonglong *)(lVar2 + 0x1434) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + 0xe8) >> 0x20) -
                    (float)((ulonglong)*(undefined8 *)param_1 >> 0x20),
                    (float)*(undefined8 *)(lVar2 + 0xe8) - (float)*(undefined8 *)param_1);
    }
    cVar5 = *(char *)(lVar2 + 0x1430);
    uVar11 = (ulonglong)cVar5;
    if (cVar5 == -1) {
LAB_18008f624:
      FUN_180051730(pwVar16,pwVar20,pfVar25,uVar26);
    }
    else {
      pwVar16 = (wchar_t *)(uVar11 & 0xffffffff);
      pwVar20 = (wchar_t *)pfVar15;
      cVar6 = FUN_180059e90((int)cVar5,iVar14);
      if (cVar6 == '\0') {
        if ((param_5._0_1_ == false) || ((uVar23 & 0x20) == 0)) {
          if ((uVar23 & 0x40) == 0) goto LAB_18008f624;
        }
        if (*(char *)(lVar2 + 0x2114) == '\0') {
          if ((((uVar23 >> 8 & 1) == 0) || (*(char *)(uVar11 + 0xb36 + lVar2) == '\0')) ||
             (*(short *)(lVar2 + 0xb2c + uVar11 * 2) != 2)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (((uVar9 & 8) == 0) ||
             (*(float *)(lVar2 + 0xb88 + uVar11 * 4) < *(float *)(lVar2 + 0x7c))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          uVar9 = FUN_18005b660((int)cVar5);
          pwVar16 = (wchar_t *)(ulonglong)uVar9;
          bVar7 = FUN_180068c80(uVar9,iVar14);
          pwVar20 = (wchar_t *)pfVar15;
          if (!bVar4 && !bVar1) {
            if (bVar7) {
              cVar27 = '\x01';
            }
          }
        }
        goto LAB_18008f624;
      }
      uVar29 = 1;
    }
    uVar28 = uVar29;
    if (((uVar23 >> 0x12 & 1) == 0) && (*(char *)(lVar2 + 0x5d) != '\0')) {
      *(undefined1 *)(lVar2 + 0x1ef8) = 0;
    }
  }
  else {
    uVar28 = uVar29;
    if (*(int *)(lVar2 + 0x1448) - 2U < 2) {
      if (*(uint *)(lVar2 + 0x1f14) == uVar19) {
        uVar28 = 1;
      }
      else {
        FUN_180051730(pwVar16,pwVar20,pfVar25,uVar26);
      }
    }
  }
  if (cVar27 != '\0') {
    *(undefined1 *)(lVar2 + 0x142b) = 1;
  }
LAB_18008f665:
  if (*(uint *)(lVar2 + 0x1f30) == uVar19) {
    param_5._0_1_ = true;
  }
  if (param_3 != (char *)0x0) {
    *param_3 = param_5._0_1_;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar28;
  }
  return cVar27;
}


ulonglong FUN_18008f6b0(byte *param_1,ulonglong *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  float local_res20;
  float local_res24;
  char local_78 [8];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;

  lVar2 = DAT_180115c10;
  uVar7 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar7 + 0xce) = 1;
  lVar3 = DAT_180115c10;
  plVar1 = *(longlong **)(lVar2 + 0x13a8);
  if (*(char *)((longlong)plVar1 + 0xd1) == '\0') {
    uVar5 = FUN_180056b80(plVar1,param_1,0);
    FUN_180050b60((undefined8 *)&local_68,param_1,(byte *)0x0,'\x01',-1.0);
    local_58 = *(float *)(plVar1 + 0x23);
    fStack_54 = *(float *)((longlong)plVar1 + 0x11c);
    if ((param_3 >> 0xf & 1) != 0) {
      if (*(float *)(lVar3 + 0xc6c) < *(float *)(plVar1 + 0x2a)) {
        fStack_54 = (*(float *)(plVar1 + 0x2a) - *(float *)(lVar3 + 0xc6c)) + fStack_54;
      }
    }
    FUN_1800507c0((ulonglong *)&local_70,*param_2,
                  *(float *)(lVar3 + 0xc68) + *(float *)(lVar3 + 0xc68) + local_68,
                  *(float *)(lVar3 + 0xc6c) + *(float *)(lVar3 + 0xc6c) + local_64);
    fStack_4c = local_6c + fStack_54;
    local_50 = local_58 + local_70;
    FUN_18005aca0(&local_70,*(float *)(lVar3 + 0xc6c));
    uVar7 = FUN_18005a670(&local_58,(wchar_t *)(ulonglong)uVar5,(float *)0x0,0);
    if ((char)uVar7 != '\0') {
      bVar4 = FUN_18008f030(&local_58,(float *)(ulonglong)uVar5,(char *)&local_res20,local_78,
                            param_3);
      if ((local_78[0] == '\0') || (local_res20._0_1_ == '\0')) {
        iVar8 = (local_res20._0_1_ != '\0') + 0x15;
      }
      else {
        iVar8 = 0x17;
      }
      uVar6 = FUN_1800567e0(iVar8,1.0);
      FUN_180064200(&local_58,uVar5,0);
      FUN_1800639d0(CONCAT44(fStack_54,local_58),CONCAT44(fStack_4c,local_50),uVar6,'\x01',
                    *(float *)(lVar3 + 0xc70));
      if (*(char *)(lVar3 + 0x2678) != '\0') {
        FUN_18005b350(&DAT_1800edd88,&DAT_1800def94);
      }
      local_res20 = local_50 - *(float *)(lVar3 + 0xc68);
      local_60 = *(float *)(lVar3 + 0xc68) + local_58;
      local_res24 = fStack_4c - *(float *)(lVar3 + 0xc6c);
      local_5c = *(float *)(lVar3 + 0xc6c) + fStack_54;
      FUN_180064710(&local_60,&local_res20,param_1,(byte *)0x0,(ulonglong *)&local_68,
                    (float *)(lVar3 + 0xce0),&local_58);
      return (ulonglong)bVar4;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}


float FUN_18008f940(int param_1)

{
  if (param_1 < 1) {
    return 3.4028235e+38;
  }
  return ((*(float *)(DAT_180115c10 + 0xc7c) + *(float *)(DAT_180115c10 + 0x10c0)) * (float)param_1
         - *(float *)(DAT_180115c10 + 0xc7c)) +
         *(float *)(DAT_180115c10 + 0xc34) + *(float *)(DAT_180115c10 + 0xc34);
}


float * FUN_18008f990(float *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  if ((*(uint *)(param_2 + 0x34) & 0x1000) != 0) {
    fVar2 = *(float *)(param_3 + 0x130);
    if (*(float *)(param_3 + 0x130) <= *(float *)(param_2 + 0x38)) {
      fVar2 = *(float *)(param_2 + 0x38);
    }
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x38);
    fVar3 = *(float *)(param_3 + 0x134);
    if (*(float *)(param_3 + 0x134) <= *(float *)(param_2 + 0x3c)) {
      fVar3 = *(float *)(param_2 + 0x3c);
    }
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    return param_1;
  }
  lVar1 = *(longlong *)(DAT_180115c10 + 0x21e0);
  if (lVar1 == 0) {
    fVar3 = *(float *)(param_3 + 0x22c);
    fVar4 = *(float *)(param_3 + 0x230);
    fVar5 = *(float *)(param_3 + 0x234);
    fVar2 = *(float *)(param_3 + 0x228);
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x160);
    fVar3 = *(float *)(lVar1 + 0x164);
    fVar4 = *(float *)(lVar1 + 0x168);
    fVar5 = *(float *)(lVar1 + 0x16c);
  }
  fVar2 = fVar2 + *(float *)(param_3 + 0x80);
  fVar3 = fVar3 + *(float *)(param_3 + 0x84);
  param_1[2] = fVar4;
  param_1[3] = fVar5;
  if (fVar4 <= fVar2) {
    fVar2 = fVar4;
  }
  if (fVar5 <= fVar3) {
    fVar3 = fVar5;
  }
  *param_1 = fVar2;
  param_1[1] = fVar3;
  return param_1;
}


ulonglong FUN_18008fa60(byte *param_1,char *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res18;
  float local_res1c;
  undefined8 local_res20;
  char local_e8;
  char local_e7;
  char local_e6;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;

  lVar1 = DAT_180115c10;
  uVar7 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar7 + 0xce) = 1;
  lVar3 = DAT_180115c10;
  plVar2 = *(longlong **)(lVar1 + 0x13a8);
  if (*(char *)((longlong)plVar2 + 0xd1) != '\0') {
LAB_18008fedf:
    return uVar7 & 0xffffffffffffff00;
  }
  uVar6 = FUN_180056b80(plVar2,param_1,0);
  FUN_180050b60((undefined8 *)&local_e0,param_1,(byte *)0x0,'\x01',-1.0);
  fVar12 = FUN_180056a00();
  lVar1 = plVar2[0x23];
  fVar13 = (float)lVar1;
  fVar14 = (float)((ulonglong)lVar1 >> 0x20);
  if (local_e0 <= 0.0) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = local_e0 + *(float *)(lVar3 + 0xc80);
  }
  local_c8 = fVar13 + fVar15 + fVar12;
  local_c4 = fVar14 + *(float *)(lVar3 + 0xc6c) + *(float *)(lVar3 + 0xc6c) + local_dc;
  local_res18 = local_c8 - fVar13;
  local_res1c = local_c4 - fVar14;
  local_d0 = fVar13;
  local_cc = fVar14;
  FUN_18005aca0(&local_res18,*(float *)(lVar3 + 0xc6c));
  uVar7 = FUN_18005a670(&local_d0,(wchar_t *)(ulonglong)uVar6,(float *)0x0,0);
  uVar8 = *(uint *)(lVar3 + 0x1d8c) & 0x400000;
  local_e6 = (char)uVar7;
  if (local_e6 == '\0') {
    if (((((uVar8 == 0) || (*(char *)(lVar3 + 0x22c8) == '\0')) ||
         (*(float *)(lVar3 + 0x22d8) <= local_cc)) ||
        ((local_c4 < *(float *)(lVar3 + 0x22d0) || local_c4 == *(float *)(lVar3 + 0x22d0) ||
         (*(float *)(lVar3 + 0x22d4) <= local_d0)))) ||
       (local_c8 < *(float *)(lVar3 + 0x22cc) || local_c8 == *(float *)(lVar3 + 0x22cc)))
    goto LAB_18008fedf;
    local_res18 = (float)CONCAT31(local_res18._1_3_,*param_2);
  }
  else {
    cVar4 = *param_2;
    local_res18 = (float)CONCAT31(local_res18._1_3_,cVar4);
    if (uVar8 == 0) {
      pcVar11 = &local_e7;
      bVar5 = FUN_18008f030(&local_d0,(float *)(ulonglong)uVar6,&local_e8,pcVar11,0);
      if (bVar5 != 0) {
        cVar4 = cVar4 == '\0';
      }
      goto LAB_18008fc9d;
    }
  }
  FUN_18009a920(uVar6,(char *)&local_res18,(uint *)0x0);
  pcVar11 = &local_e7;
  cVar4 = FUN_18008f030(&local_d0,(float *)(ulonglong)uVar6,&local_e8,pcVar11,0);
  local_res20 = CONCAT71(local_res20._1_7_,cVar4);
  FUN_18009a320(uVar6,(char *)&local_res18,(byte *)&local_res20);
  cVar4 = local_res18._0_1_;
  bVar5 = (byte)local_res20;
LAB_18008fc9d:
  if (*param_2 != cVar4) {
    *param_2 = cVar4;
    bVar5 = 1;
    FUN_18005b4c0(uVar6);
  }
  uVar8 = *(uint *)(lVar3 + 0x1d8c) & 0x1000;
  fVar15 = fVar12 + fVar13;
  if (local_e6 != '\0') {
    FUN_180064200(&local_d0,uVar6,0);
    fVar16 = *(float *)(lVar3 + 0xc70);
    if ((local_e7 == '\0') || (local_e8 == '\0')) {
      iVar9 = (local_e8 != '\0') + 7;
    }
    else {
      iVar9 = 9;
    }
    uVar6 = FUN_1800567e0(iVar9,1.0);
    pcVar11 = (char *)CONCAT71((int7)((ulonglong)pcVar11 >> 8),1);
    FUN_1800639d0(lVar1,CONCAT44(fVar12 + fVar14,fVar15),uVar6,'\x01',fVar16);
    uVar6 = FUN_1800567e0(0x12,1.0);
    if (uVar8 == 0) {
      if (*param_2 != '\0') {
        fVar16 = 1.0;
        if (1.0 <= (float)(int)(fVar12 / 6.0)) {
          fVar16 = (float)(int)(fVar12 / 6.0);
        }
        FUN_180077ce0((int *)plVar2[0x58],CONCAT44(fVar16 + fVar14,fVar16 + fVar13),uVar6,
                      fVar12 - (fVar16 + fVar16));
      }
    }
    else {
      pcVar11 = (char *)(ulonglong)uVar6;
      fVar16 = 1.0;
      if (1.0 <= (float)(int)(fVar12 / 3.6)) {
        fVar16 = (float)(int)(fVar12 / 3.6);
      }
      local_res18 = fVar15 - fVar16;
      local_res1c = (fVar12 + fVar14) - fVar16;
      local_res20 = CONCAT44(fVar14 + fVar16,fVar13 + fVar16);
      FUN_180071360((int *)plVar2[0x58],(float *)&local_res20,&local_res18,uVar6,
                    *(float *)(lVar3 + 0xc70),0);
    }
  }
  local_d8 = fVar15 + *(float *)(lVar3 + 0xc80);
  fStack_d4 = fVar14 + *(float *)(lVar3 + 0xc6c);
  if (*(char *)(lVar3 + 0x2678) != '\0') {
    if (uVar8 == 0) {
      pcVar10 = "[ ]";
      if (*param_2 != '\0') {
        pcVar10 = "[x]";
      }
    }
    else {
      pcVar10 = "[~]";
    }
    FUN_18005b180((longlong)&local_d8,pcVar10,(char *)0x0,(ulonglong)pcVar11);
  }
  if ((local_e6 != '\0') && (0.0 < local_e0)) {
    FUN_180064450(CONCAT44(fStack_d4,local_d8),param_1,(byte *)0x0,'\x01');
  }
  return (ulonglong)bVar5;
}


char FUN_18008ff10(uint param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;

  lVar2 = DAT_180115c10;
  local_98 = *param_2;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  local_94 = param_2[1];
  local_90 = *(float *)(DAT_180115c10 + 0x10c0) + local_98;
  local_8c = local_94 + *(float *)(DAT_180115c10 + 0x10c0);
  local_88 = local_98;
  local_84 = local_94;
  local_80 = local_90;
  local_7c = local_8c;
  if (((*(float *)(lVar1 + 0x214) - *(float *)(lVar1 + 0x20c)) *
      (*(float *)(lVar1 + 0x210) - *(float *)(lVar1 + 0x208))) /
      ((local_90 - local_98) * (local_8c - local_94)) < 1.5) {
    local_80 = (float)(int)((local_90 - local_98) * -0.25);
    local_88 = local_98 - local_80;
    local_80 = local_90 + local_80;
    local_7c = (float)(int)((local_8c - local_94) * -0.25);
    local_84 = local_94 - local_7c;
    local_7c = local_8c + local_7c;
  }
  uVar5 = FUN_18005a670(&local_88,(wchar_t *)(ulonglong)param_1,(float *)0x0,0);
  cVar3 = FUN_18008f030(&local_88,(float *)(ulonglong)param_1,(char *)&local_res18,
                        (undefined1 *)&local_res10,0);
  if ((char)uVar5 != '\0') {
    uVar4 = FUN_1800567e0((local_res10._0_1_ != '\0') + 0x16,1.0);
    if (local_res18._0_1_ != '\0') {
      FUN_180071360(*(int **)(lVar1 + 0x2c0),&local_98,&local_90,uVar4,0.0,0);
    }
    FUN_180064200(&local_98,param_1,2);
    uVar4 = FUN_1800567e0(0,1.0);
    fVar9 = (local_98 + local_90) * 0.5 - 0.5;
    fVar8 = *(float *)(lVar2 + 0x10c0) * 0.5 * 0.7071 - 1.0;
    fVar6 = (local_94 + local_8c) * 0.5 - 0.5;
    fVar10 = fVar9 + fVar8;
    fVar9 = fVar9 + -fVar8;
    fVar7 = -fVar8 + fVar6;
    fVar8 = fVar8 + fVar6;
    local_res10 = fVar9;
    local_res14 = fVar7;
    local_res18 = fVar10;
    local_res1c = fVar8;
    FUN_180070300(*(int **)(lVar1 + 0x2c0),(undefined8 *)&local_res18,(undefined8 *)&local_res10,
                  uVar4,1.0);
    local_res10 = fVar9;
    local_res14 = fVar8;
    local_res18 = fVar10;
    local_res1c = fVar7;
    FUN_180070300(*(int **)(lVar1 + 0x2c0),(undefined8 *)&local_res18,(undefined8 *)&local_res10,
                  uVar4,1.0);
  }
  return cVar3;
}


char FUN_1800901f0(uint param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char local_res10 [8];
  char local_res18 [16];
  undefined8 local_48;
  undefined8 local_40 [3];

  local_48 = *param_2;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  local_40[0] = CONCAT44((float)((ulonglong)local_48 >> 0x20) + *(float *)(DAT_180115c10 + 0x10c0),
                         (float)local_48 + *(float *)(DAT_180115c10 + 0x10c0));
  uVar6 = FUN_18005a670((float *)&local_48,(wchar_t *)(ulonglong)param_1,(float *)0x0,0);
  cVar2 = FUN_18008f030((float *)&local_48,(float *)(ulonglong)param_1,local_res18,local_res10,0);
  if ((char)uVar6 != '\0') {
    if ((local_res10[0] == '\0') || (local_res18[0] == '\0')) {
      iVar8 = (local_res18[0] != '\0') + 0x15;
    }
    else {
      iVar8 = 0x17;
    }
    uVar4 = FUN_1800567e0(iVar8,1.0);
    uVar5 = FUN_1800567e0(0,1.0);
    uVar9 = (ulonglong)uVar5;
    if ((local_res18[0] != '\0') || (local_res10[0] != '\0')) {
      FUN_180071360(*(int **)(lVar1 + 0x2c0),(float *)&local_48,(float *)local_40,uVar4,0.0,0);
    }
    FUN_180064200((float *)&local_48,param_1,2);
    uVar10 = 3;
    if (*(char *)(lVar1 + 0xcf) != '\0') {
      uVar10 = 1;
    }
    uVar6 = local_48;
    FUN_180076630(*(int **)(lVar1 + 0x2c0),local_48,uVar5,(int)uVar10,1.0);
    lVar7 = FUN_1800593a0();
    if (((char)lVar7 != '\0') && (bVar3 = FUN_180059fa0(0,-1.0), bVar3)) {
      FUN_180068b80(lVar1,uVar6,uVar9,uVar10);
    }
  }
  return cVar2;
}


ulonglong FUN_180090390(byte *param_1,float *param_2,uint param_3,float *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  float *pfVar8;
  undefined8 uVar9;
  char *pcVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte local_f8;
  char local_f7 [7];
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 local_9c;

  lVar3 = DAT_180115c10;
  uVar7 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar7 + 0xce) = 1;
  lVar4 = DAT_180115c10;
  plVar1 = *(longlong **)(lVar3 + 0x13a8);
  if (*(char *)((longlong)plVar1 + 0xd1) == '\0') {
    uVar5 = FUN_180056b80(plVar1,param_1,0);
    fVar15 = FUN_180056a00();
    fVar17 = param_4[1];
    if (param_4[1] == 0.0) {
      fVar17 = fVar15;
    }
    fVar18 = *param_4;
    if (*param_4 == 0.0) {
      fVar18 = fVar15;
    }
    local_e0 = *(float *)(plVar1 + 0x23);
    fStack_d4 = fVar17 + *(float *)((longlong)plVar1 + 0x11c);
    fStack_dc = *(float *)((longlong)plVar1 + 0x11c);
    local_d8 = local_e0 + fVar18;
    if (fVar17 < fVar15) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = *(float *)(lVar4 + 0xc6c);
    }
    local_ac = fStack_d4 - fStack_dc;
    local_b0 = local_d8 - local_e0;
    FUN_18005aca0(&local_b0,fVar15);
    uVar7 = FUN_18005a670(&local_e0,(wchar_t *)(ulonglong)uVar5,(float *)0x0,0);
    if ((char)uVar7 != '\0') {
      local_f8 = FUN_18008f030(&local_e0,(float *)(ulonglong)uVar5,local_f7,&local_f8,0);
      uVar12 = param_3 & 0xffffcfff;
      if ((param_3 & 0x802) == 0) {
        uVar12 = param_3;
      }
      uVar7 = *(ulonglong *)param_2;
      local_d0 = uVar7;
      uVar7 = local_d0;
      uStack_c8 = *(undefined8 *)(param_2 + 2);
      uVar9 = uStack_c8;
      if ((uVar12 >> 0x1c & 1) != 0) {
        uStack_c8._0_4_ = (float)*(undefined8 *)(param_2 + 2);
        fVar16 = (float)uStack_c8;
        local_d0._4_4_ = (float)(uVar7 >> 0x20);
        fVar15 = local_d0._4_4_;
        local_d0 = uVar7;
        uStack_c8 = uVar9;
        FUN_180051f30(uVar7 & 0xffffffff,fVar15,fVar16,(float *)&local_d0,
                      (float *)((longlong)&local_d0 + 4),(float *)&uStack_c8);
      }
      if (fVar17 <= fVar18) {
        fVar18 = fVar17;
      }
      fVar18 = fVar18 / 2.99;
      local_9c = 0x3f800000;
      local_b0 = (float)(uVar12 & 0x400);
      local_a8 = (float)local_d0;
      local_a0 = (float)uStack_c8;
      local_a4 = local_d0._4_4_;
      fVar17 = *(float *)(lVar4 + 0xc70);
      if (fVar18 * 0.5 <= *(float *)(lVar4 + 0xc70)) {
        fVar17 = fVar18 * 0.5;
      }
      fStack_ec = fStack_dc;
      local_f0 = local_e0;
      local_e8 = local_d8;
      fStack_e4 = fStack_d4;
      if ((float)(uVar12 & 0x400) == 0.0) {
        fVar15 = -0.75;
        fStack_ec = fStack_dc - -0.75;
        local_f0 = local_e0 - -0.75;
        local_e8 = local_d8 - 0.75;
        fStack_e4 = fStack_d4 - 0.75;
      }
      else {
        fVar15 = 0.0;
      }
      if (((uVar12 >> 0xd & 1) == 0) || (1.0 <= uStack_c8._4_4_)) {
        pfVar8 = &local_a8;
        if ((uVar12 >> 0xb & 1) == 0) {
          pfVar8 = (float *)&local_d0;
        }
        local_c0 = *(undefined8 *)pfVar8;
        fStack_b8 = pfVar8[2];
        fStack_b4 = pfVar8[3];
        if ((1.0 <= fStack_b4) || ((uVar12 >> 0xc & 1) != 0)) {
          piVar2 = (int *)plVar1[0x58];
          uVar6 = FUN_1800567a0((float *)&local_c0);
          pfVar8 = (float *)(ulonglong)uVar6;
          FUN_180071360(piVar2,&local_f0,&local_e8,uVar6,fVar17,0);
        }
        else {
          uVar6 = FUN_1800567a0((float *)&local_c0);
          pfVar8 = (float *)(ulonglong)uVar6;
          FUN_180077e40((int *)plVar1[0x58],CONCAT44(fStack_ec,local_f0),
                        CONCAT44(fStack_e4,local_e8),uVar6,fVar18,CONCAT44(fVar15,fVar15),fVar17,0);
        }
      }
      else {
        fVar16 = local_e8 + local_f0;
        if ((uVar12 >> 0xc & 1) == 0) {
          uVar6 = FUN_1800567a0((float *)&local_d0);
          FUN_180077e40((int *)plVar1[0x58],CONCAT44(fStack_ec,local_f0 + fVar18),
                        CONCAT44(fStack_e4,local_e8),uVar6,fVar18,CONCAT44(fVar15,fVar15 - fVar18),
                        fVar17,0xa0);
        }
        else {
          piVar2 = (int *)plVar1[0x58];
          uVar6 = FUN_1800567a0((float *)&local_d0);
          local_c0 = CONCAT44(fStack_ec,local_f0 + fVar18);
          FUN_180071360(piVar2,(float *)&local_c0,&local_e8,uVar6,fVar17,0xa0);
        }
        piVar2 = (int *)plVar1[0x58];
        uVar6 = FUN_1800567a0(&local_a8);
        pfVar8 = (float *)(ulonglong)uVar6;
        local_c0 = CONCAT44(fStack_e4,(float)(int)(fVar16 * 0.5 + 0.5));
        FUN_180071360(piVar2,&local_f0,(float *)&local_c0,uVar6,fVar17,0x50);
      }
      pfVar13 = (float *)0x0;
      pfVar11 = (float *)(ulonglong)uVar5;
      FUN_180064200(&local_e0,uVar5,0);
      if (local_b0 == 0.0) {
        if (*(float *)(lVar4 + 0xc74) <= 0.0) {
          piVar2 = (int *)plVar1[0x58];
          uVar6 = FUN_1800567e0(7,1.0);
          pfVar13 = &local_d8;
          pfVar8 = (float *)(ulonglong)uVar6;
          pfVar11 = &local_e0;
          FUN_180071260(piVar2,pfVar11,pfVar13,uVar6,fVar17,0,1.0);
        }
        else {
          pfVar11 = (float *)CONCAT44(fStack_d4,local_d8);
          FUN_180063b80(CONCAT44(fStack_dc,local_e0),pfVar11,fVar17);
        }
      }
      if (((*(uint *)(lVar4 + 0x141c) == uVar5) && ((uVar12 >> 9 & 1) == 0)) &&
         (uVar9 = FUN_18004f7a0(0,(wchar_t *)pfVar11,pfVar13,(undefined *)pfVar8),
         (char)uVar9 != '\0')) {
        bVar14 = (uVar12 >> 1 & 1) == 0;
        uVar7 = 0xc;
        if (bVar14) {
          uVar7 = 0x10;
        }
        pcVar10 = "_COL3F";
        if (bVar14) {
          pcVar10 = "_COL4F";
        }
        FUN_180067120(pcVar10,&local_d0,uVar7,2);
        pfVar8 = (float *)&local_c0;
        local_c0 = 0;
        FUN_180090390(param_1,param_2,uVar12,pfVar8);
        FUN_180066590(0.0,-1.0);
        pfVar13 = (float *)0x0;
        pcVar10 = "Color";
        pfVar11 = (float *)0x0;
        FUN_18009f280((byte *)"Color",(byte *)0x0,0);
        FUN_180053bf0((wchar_t *)pcVar10,(wchar_t *)pfVar11,(undefined *)pfVar13,(ulonglong)pfVar8);
      }
      if ((((uVar12 & 0x40) == 0) && (local_f7[0] != '\0')) &&
         (uVar7 = FUN_180059410(0x1000,pfVar11,pfVar13,(ulonglong)pfVar8), (char)uVar7 != '\0')) {
        FUN_180093d50(param_1,param_2,uVar12 & 0x18003802);
      }
      return (ulonglong)local_f8;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1800909b0(byte *param_1,undefined1 (*param_2) [12],double *param_3,
                       undefined1 (*param_4) [12])

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [32];
  int iVar10;
  char *pcVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  double *pdVar18;
  uint uVar19;
  double dVar20;
  byte bVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [4];
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 auStackY_208 [32];
  byte local_1c8;
  double local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  uint local_198;
  float local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint local_170;
  uint local_16c;
  int local_168;
  byte *local_160;
  byte *local_158;
  undefined1 local_150 [4];
  undefined8 uStack_14c;
  float fStack_144;
  undefined1 local_140 [8];
  int iStack_138;
  int iStack_134;
  double local_128 [8];
  ulonglong local_e8;

  lVar7 = DAT_180115c10;
  local_e8 = DAT_180112300 ^ (ulonglong)auStackY_208;
  uVar15 = (ulonglong)param_3 & 0xffffffff;
  uVar17 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar17 + 0xce) = 1;
  lVar2 = DAT_180115c10;
  dVar20 = *(double *)(lVar7 + 0x13a8);
  if (*(char *)((longlong)dVar20 + 0xd1) != '\0') {
    return uVar17 & 0xffffffffffffff00;
  }
  pdVar18 = param_3;
  local_1b8 = dVar20;
  local_1a0 = param_2;
  local_158 = param_1;
  fVar22 = FUN_180056a00();
  local_194 = fVar22;
  local_160 = (byte *)FUN_180055c80((char *)param_1,(char *)0x0);
  fVar23 = (float)FUN_1800508d0();
  *(undefined8 *)(lVar2 + 0x1d50) = 0;
  FUN_18004ff00();
  FUN_180062870(param_1);
  local_168 = *(int *)(lVar2 + 0x2490);
  if (local_168 == 0) {
    if (*(int *)((longlong)dVar20 + 0x108) < 1) {
      pdVar18 = (double *)0x83c;
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    *(undefined4 *)(lVar2 + 0x2490) =
         *(undefined4 *)
          (*(longlong *)((longlong)dVar20 + 0x110) + -4 +
          (longlong)*(int *)((longlong)dVar20 + 0x108) * 4);
  }
  local_16c = (uint)param_3;
  if (((ulonglong)param_3 & 0x20) != 0) {
    uVar15 = (ulonglong)(local_16c & 0xff9fffff | 0x100008);
  }
  if ((uVar15 & 8) == 0) {
    FUN_180091770((float *)param_2,(uint)uVar15,pdVar18,(ulonglong)param_4);
  }
  if ((uVar15 & 0x700000) == 0) {
    uVar15 = (ulonglong)((uint)uVar15 | *(uint *)(lVar2 + 0x248c) & 0x700000);
  }
  uVar14 = *(uint *)(lVar2 + 0x248c);
  if ((uVar15 & 0x1800000) == 0) {
    uVar15 = (ulonglong)((uint)uVar15 | uVar14 & 0x1800000);
  }
  if ((uVar15 & 0x6000000) == 0) {
    uVar15 = (ulonglong)((uint)uVar15 | uVar14 & 0x6000000);
  }
  uVar13 = (uint)uVar15;
  if ((uVar15 & 0x18000000) == 0) {
    uVar13 = uVar13 | uVar14 & 0x18000000;
  }
  uVar14 = uVar13 | uVar14 & 0xe00fffff;
  local_190 = uVar14;
  if (((uVar13 & 0x700000) == 0) || (((uVar13 & 0x700000) - 1 & uVar14 & 0x700000) != 0)) {
    pdVar18 = (double *)0x15a9;
    FID_conflict__assert
              (L"ImIsPowerOfTwo(flags & ImGuiColorEditFlags_DisplayMask_)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x15a9);
  }
  if (((uVar13 & 0x18000000) == 0) || (((uVar13 & 0x18000000) - 1 & uVar14 & 0x18000000) != 0)) {
    pdVar18 = (double *)0x15aa;
    FID_conflict__assert
              (L"ImIsPowerOfTwo(flags & ImGuiColorEditFlags_InputMask_)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x15aa);
  }
  uVar19 = uVar14 & 2;
  iVar10 = 4 - (uint)(uVar19 != 0);
  local_170 = uVar14 & 0x10;
  if (local_170 == 0) {
    fVar33 = fVar22 + *(float *)(lVar2 + 0xc80);
  }
  else {
    fVar33 = 0.0;
  }
  uVar32 = 0x3f800000;
  fVar23 = fVar23 - fVar33;
  auVar24 = *(undefined1 (*) [4])*param_2;
  fVar28 = *(float *)(*param_2 + 4);
  fVar31 = *(float *)(*param_2 + 8);
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  if (uVar19 == 0) {
    fVar26 = *(float *)param_2[1];
  }
  else {
    fVar26 = 1.0;
  }
  fStack_144 = fVar26;
  _local_150 = *param_2;
  local_188 = uVar13 & 0x10000000;
  local_18c = uVar19;
  if ((local_188 == 0) || ((uVar13 & 0x100000) == 0)) {
    if ((uVar13 & 0x8200000) == 0x8200000) {
      FUN_1800520f0((float)auVar24,fVar28,fVar31,(float *)local_150,(float *)&uStack_14c,
                    (float *)((longlong)&uStack_14c + 4));
      param_4 = (undefined1 (*) [12])((longlong)&uStack_14c + 4);
      pdVar18 = (double *)&uStack_14c;
      FUN_180091bc0((float *)param_2,(float *)local_150,(float *)pdVar18,(float *)param_4);
      goto LAB_180090ccf;
    }
  }
  else {
    param_4 = (undefined1 (*) [12])local_150;
    FUN_180051f30((ulonglong)(uint)auVar24,fVar28,fVar31,(float *)param_4,(float *)&uStack_14c,
                  (float *)((longlong)&uStack_14c + 4));
LAB_180090ccf:
    fVar31 = uStack_14c._4_4_;
    fVar28 = (float)uStack_14c;
    fVar26 = fStack_144;
    auVar24 = local_150;
  }
  fVar29 = 0.5;
  if ((float)auVar24 < 0.0) {
    fVar30 = -0.5;
  }
  else {
    fVar30 = 0.5;
  }
  local_140._0_4_ = (BADTYPE)((float)auVar24 * 255.0 + fVar30);
  if (fVar28 < 0.0) {
    fVar30 = -0.5;
  }
  else {
    fVar30 = 0.5;
  }
  if (fVar31 < 0.0) {
    fVar25 = -0.5;
  }
  else {
    fVar25 = 0.5;
  }
  stack0xfffffffffffffec4 = CONCAT44((int)(fVar31 * 255.0 + fVar25),(int)(fVar28 * 255.0 + fVar30));
  if (fVar26 < 0.0) {
    fVar29 = -0.5;
  }
  bVar21 = 0;
  local_1c8 = 0;
  iStack_134 = (int)(fVar26 * 255.0 + fVar29);
  uVar1 = *(undefined4 *)((longlong)dVar20 + 0x11c);
  fVar28 = *(float *)((longlong)dVar20 + 0x118);
  if (*(int *)(lVar2 + 0xcdc) == 0) {
    fVar31 = fVar33;
  }
  else {
    fVar31 = 0.0;
  }
  uVar3 = uVar14 & 0x20;
  *(float *)((longlong)dVar20 + 0x118) = fVar28 + fVar31;
  if (((uVar13 & 0x300000) == 0) || (uVar3 != 0)) {
    if (((uVar13 & 0x400000) != 0) && (uVar3 == 0)) {
      if (uVar19 == 0) {
        if ((int)local_140._0_4_ < 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = (ulonglong)(uint)local_140._0_4_;
          if (0xff < (int)local_140._0_4_) {
            uVar17 = 0xff;
          }
        }
        FUN_180057ec0((undefined1 *)local_128,0x40,0x1800ef248,uVar17);
      }
      else {
        if ((int)local_140._0_4_ < 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = (ulonglong)(uint)local_140._0_4_;
          if (0xff < (int)local_140._0_4_) {
            uVar17 = 0xff;
          }
        }
        FUN_180057ec0((undefined1 *)local_128,0x40,0x1800ef260,uVar17);
      }
      FUN_180067970(fVar23);
      local_1b8 = 0.0;
      pdVar18 = local_128;
      param_4 = (undefined1 (*) [12])0x40;
      uVar17 = FUN_180096220((byte *)"##Text",(float *)0x0,(float *)pdVar18,0x40,
                             (ulonglong *)&local_1b8,1.12104e-44,(float *)0x0,0);
      if ((char)uVar17 != '\0') {
        bVar21 = 1;
        pauVar9 = (undefined1 (*) [32])local_128;
        while (((byte)(*pauVar9)[0] < 0x24 &&
               ((0x900000200U >> ((longlong)(char)(*pauVar9)[0] & 0x3fU) & 1) != 0))) {
          pauVar9 = (undefined1 (*) [32])(*pauVar9 + 1);
        }
        iStack_134 = 0xff;
        stack0xfffffffffffffec4 = 0;
        param_4 = (undefined1 (*) [12])(local_140 + 4);
        local_140._0_4_ = 0;
        pdVar18 = (double *)local_140;
        if (uVar19 == 0) {
          FUN_18006e0d0(pauVar9,0x1800ef278,pdVar18,param_4);
        }
        else {
          FUN_18006e0d0(pauVar9,0x1800ef290,pdVar18,param_4);
        }
      }
      if ((uVar14 & 8) == 0) {
        FUN_180061aa0((byte *)"context",(float *)0x1,(float *)pdVar18,(ulonglong)param_4);
      }
      goto LAB_180091258;
    }
  }
  else {
    pcVar11 = "M:000";
    fVar22 = (float)iVar10;
    if ((uVar13 & 0x1000000) != 0) {
      pcVar11 = "M:0.000";
    }
    param_4 = (undefined1 (*) [12])0x0;
    fVar31 = fVar23 - (float)(int)(3 - (uint)(uVar19 != 0)) * *(float *)(lVar2 + 0xc80);
    pfVar4 = (float *)FUN_180050b60(&local_180,(byte *)pcVar11,(byte *)0x0,'\0',-1.0);
    if (*pfVar4 < (float)(int)(fVar31 / fVar22)) {
      lVar7 = (ulonglong)((uVar13 & 0x200000) != 0) + 1;
    }
    else {
      lVar7 = 0;
    }
    uVar17 = 0;
    fVar26 = 3.57331e-43;
    if ((uVar14 & 0x80000) != 0) {
      fVar26 = 0.0;
    }
    local_198 = uVar14 & 8;
    if ((uVar13 & 0x1000000) == 0) {
      fVar29 = 0.0;
      do {
        iVar16 = (int)uVar17;
        if (0 < iVar16) {
          FUN_180066590(0.0,*(float *)(lVar2 + 0xc80));
        }
        uVar14 = iVar16 + 1;
        fVar30 = (float)(int)(((float)(int)uVar14 * fVar31) / fVar22);
        fVar29 = fVar30 - fVar29;
        if (fVar29 <= 1.0) {
          fVar29 = 1.0;
        }
        FUN_180067970(fVar29);
        lVar8 = (longlong)iVar16;
        local_1a8[0] = 0;
        pdVar18 = (double *)(local_140 + lVar8 * 4);
        local_180._0_4_ = fVar26;
        uVar17 = FUN_180094de0((&PTR_DAT_1801121d0)[lVar8],4,pdVar18,1.0,(double *)local_1a8,
                               (double *)&local_180,(&PTR_DAT_1801121f0)[lVar7 * 4 + lVar8],0);
        bVar21 = bVar21 | (byte)uVar17;
        if (local_198 == 0) {
          FUN_180061aa0((byte *)"context",(float *)0x1,(float *)pdVar18,(ulonglong)param_4);
        }
        uVar17 = (ulonglong)uVar14;
        fVar29 = fVar30;
      } while ((int)uVar14 < iVar10);
      dVar20 = local_1b8;
      param_2 = local_1a0;
      fVar22 = local_194;
      uVar14 = local_190;
      uVar19 = local_18c;
    }
    else {
      fVar26 = 0.0;
      do {
        if ((int)uVar17 != 0) {
          FUN_180066590(0.0,*(float *)(lVar2 + 0xc80));
        }
        uVar13 = (int)uVar17 + 1;
        fVar29 = (float)(int)(((float)(int)uVar13 * fVar31) / fVar22);
        fVar26 = fVar29 - fVar26;
        if (fVar26 <= 1.0) {
          fVar26 = 1.0;
        }
        FUN_180067970(fVar26);
        if ((uVar14 & 0x80000) == 0) {
          local_1a8[0] = 0x3f800000;
        }
        else {
          local_1a8[0] = 0;
        }
        pdVar18 = (double *)(local_150 + uVar17 * 4);
        local_180._0_4_ = 0.0;
        uVar17 = FUN_180094de0((&PTR_DAT_1801121d0)[uVar17],8,pdVar18,0.003921569,
                               (double *)&local_180,(double *)local_1a8,
                               (&PTR_s__0_3f_180112250)[lVar7 * 4 + uVar17],0);
        bVar21 = bVar21 | (byte)uVar17;
        local_1c8 = local_1c8 | bVar21;
        if (local_198 == 0) {
          FUN_180061aa0((byte *)"context",(float *)0x1,(float *)pdVar18,(ulonglong)param_4);
        }
        uVar17 = (ulonglong)uVar13;
        fVar26 = fVar29;
      } while ((int)uVar13 < iVar10);
      dVar20 = local_1b8;
      fVar22 = local_194;
      uVar14 = local_190;
      uVar19 = local_18c;
LAB_180091258:
      param_2 = local_1a0;
    }
  }
  lVar7 = 0;
  if (local_170 == 0) {
    if ((uVar3 == 0) && (*(int *)(lVar2 + 0xcdc) != 0)) {
      fVar31 = fVar23 + *(float *)(lVar2 + 0xc80);
    }
    else {
      fVar31 = 0.0;
    }
    *(undefined4 *)((longlong)dVar20 + 0x11c) = uVar1;
    *(float *)((longlong)dVar20 + 0x118) = fVar31 + fVar28;
    if (uVar19 == 0) {
      uVar32 = *(undefined4 *)param_2[1];
    }
    local_180._0_4_ = *(float *)*param_2;
    param_4 = (undefined1 (*) [12])&local_1b8;
    local_180._4_4_ = *(undefined4 *)(*param_2 + 4);
    uStack_178 = *(undefined4 *)(*param_2 + 8);
    pdVar18 = (double *)(ulonglong)uVar14;
    local_1b8 = 0.0;
    uStack_174 = uVar32;
    uVar17 = FUN_180090390((byte *)"##ColorButton",(float *)&local_180,uVar14,(float *)param_4);
    if (((char)uVar17 != '\0') && ((uVar14 & 4) == 0)) {
      *(ulonglong *)(lVar2 + 0x24a4) = CONCAT44(local_180._4_4_,(float)local_180);
      *(ulonglong *)(lVar2 + 0x24ac) = CONCAT44(uStack_174,uStack_178);
      FUN_1800616d0((byte *)"picker",0,pdVar18,(ulonglong)param_4);
      pdVar18 = &local_1b8;
      local_1b8 = 0.0;
      local_1a0 = (undefined1 (*) [12])
                  CONCAT44(*(float *)(lVar2 + 0x1da0) + *(float *)(lVar2 + 0xc7c),
                           *(float *)(lVar2 + 0x1d94) + 0.0);
      FUN_1800679a0(&local_1a0,0,pdVar18);
    }
    if ((uVar14 & 8) == 0) {
      FUN_180061aa0((byte *)"context",(float *)0x1,(float *)pdVar18,(ulonglong)param_4);
    }
    uVar17 = FUN_180050060((byte *)"picker",0);
    if ((char)uVar17 != '\0') {
      lVar8 = *(longlong *)(lVar2 + 0x13a8);
      if (*(short *)(lVar8 + 0xda) == 1) {
        if (local_158 != local_160) {
          FUN_18009f280(local_158,local_160,0);
          lVar7 = DAT_180115c10;
          *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
          if (*(char *)(*(longlong *)(lVar7 + 0x13a8) + 0xd1) == '\0') {
            local_1b8 = 0.0;
            FUN_18005aca0((float *)&local_1b8,-1.0);
          }
        }
        FUN_180067970(fVar22 * 12.0);
        param_4 = (undefined1 (*) [12])(lVar2 + 0x24a4);
        uVar13 = local_16c & 0x1f890002 | 0x702080;
        pdVar18 = (double *)(ulonglong)uVar13;
        uVar17 = FUN_180091cb0((float *)"##picker",param_2,uVar13,param_4);
        bVar21 = bVar21 | (byte)uVar17;
        lVar7 = lVar8;
      }
      FUN_180054790();
    }
  }
  if ((local_158 != local_160) && (-1 < (char)uVar14)) {
    FUN_180066590(0.0,*(float *)(lVar2 + 0xc80));
    if (uVar3 == 0) {
      fVar33 = fVar23 + fVar33 + *(float *)(lVar2 + 0xc80);
    }
    pdVar18 = (double *)0x0;
    *(float *)((longlong)dVar20 + 0x118) = fVar33 + fVar28;
    FUN_18009f280(local_158,local_160,0);
  }
  if ((bVar21 != 0) && (lVar7 == 0)) {
    if (local_1c8 == 0) {
      auVar27._0_4_ = (float)(int)local_140._0_4_;
      auVar27._4_4_ = (float)(int)local_140._4_4_;
      auVar27._8_4_ = (float)iStack_138;
      auVar27._12_4_ = (float)iStack_134;
      _local_150 = divps(auVar27,_DAT_1800effb0);
    }
    if ((uVar14 & 0x8200000) == 0x8200000) {
      *(undefined1 (*) [4])(lVar2 + 0x2498) = local_150;
      param_4 = (undefined1 (*) [12])local_150;
      *(float *)(lVar2 + 0x249c) = (float)uStack_14c;
      FUN_180051f30((ulonglong)(uint)local_150,(float)uStack_14c,uStack_14c._4_4_,(float *)param_4,
                    (float *)&uStack_14c,(float *)((longlong)&uStack_14c + 4));
      *(undefined4 *)(lVar2 + 0x2494) = *(undefined4 *)(lVar2 + 0x2490);
      local_1b0 = uStack_14c._4_4_;
      local_1b8 = local_150._0_8_;
      local_1ac = 0;
      uVar13 = FUN_180051e70((float *)&local_1b8);
      *(uint *)(lVar2 + 0x24a0) = uVar13;
    }
    if (((uVar14 >> 0x14 & 1) != 0) && (local_188 != 0)) {
      param_4 = (undefined1 (*) [12])local_150;
      FUN_1800520f0((float)local_150,(float)uStack_14c,uStack_14c._4_4_,(float *)param_4,
                    (float *)&uStack_14c,(float *)((longlong)&uStack_14c + 4));
    }
    *(undefined1 (*) [4])*param_2 = local_150;
    *(float *)(*param_2 + 8) = uStack_14c._4_4_;
    *(float *)(*param_2 + 4) = (float)uStack_14c;
    if (uVar19 == 0) {
      *(float *)param_2[1] = fStack_144;
    }
  }
  if (local_168 == 0) {
    *(undefined4 *)(lVar2 + 0x2490) = 0;
  }
  FUN_180062210();
  FUN_180054450();
  if ((((*(byte *)(lVar2 + 0x1d90) & 1) == 0) ||
      ((*(uint *)(lVar2 + 0x1d8c) & 0x800) != 0 || (uVar14 & 0x200) != 0)) ||
     (uVar17 = FUN_18004fbb0(), (char)uVar17 == '\0')) goto LAB_180091703;
  puVar5 = (undefined8 *)FUN_18004b870("_COL3F",0,(float *)pdVar18,(ulonglong)param_4);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar5;
    bVar21 = 1;
    *(undefined8 *)*param_2 = *puVar6;
    *(undefined4 *)(*param_2 + 8) = *(undefined4 *)(puVar6 + 1);
  }
  pwVar12 = (wchar_t *)0x0;
  pcVar11 = "_COL4F";
  puVar6 = (undefined8 *)FUN_18004b870("_COL4F",0,(float *)pdVar18,(ulonglong)param_4);
  if (puVar6 == (undefined8 *)0x0) {
    if (puVar5 != (undefined8 *)0x0) goto LAB_1800916d1;
  }
  else {
    pwVar12 = (wchar_t *)*puVar6;
    pdVar18 = (double *)0xc;
    if (uVar19 == 0) {
      pdVar18 = (double *)0x10;
    }
    pcVar11 = (char *)param_2;
    FUN_1800d1c20((undefined8 *)param_2,(undefined8 *)pwVar12,(ulonglong)pdVar18);
    bVar21 = 1;
LAB_1800916d1:
    if (local_188 != 0) {
      FUN_1800520f0(*(float *)*param_2,*(float *)(*param_2 + 4),*(float *)(*param_2 + 8),
                    (float *)param_2,(float *)(*param_2 + 4),(float *)(*param_2 + 8));
      param_4 = param_2;
    }
  }
  FUN_180053ca0((wchar_t *)pcVar11,pwVar12,pdVar18,(ulonglong)param_4);
LAB_180091703:
  if (((lVar7 != 0) && (*(int *)(lVar2 + 0x141c) != 0)) && (*(longlong *)(lVar2 + 0x1440) == lVar7))
  {
    *(int *)(lVar2 + 0x1d88) = *(int *)(lVar2 + 0x141c);
  }
  if ((bVar21 != 0) && (*(int *)(lVar2 + 0x1d88) != 0)) {
    FUN_18005b4c0(*(int *)(lVar2 + 0x1d88));
  }
                    // WARNING: Read-only address (ram,0x0001800effb0) is written
  return (ulonglong)bVar21;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180091770(float *param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  float local_a8 [2];
  longlong local_a0;
  byte local_98 [64];
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStack_e8;
  uVar7 = param_2 & 0x1800000;
  uVar9 = param_2 & 0x700000;
  if ((uVar9 == 0) || (uVar7 == 0)) {
    uVar5 = FUN_180050060((byte *)"context",0);
    lVar4 = DAT_180115c10;
    if ((char)uVar5 != '\0') {
      local_a0 = DAT_180115c10;
      FUN_1800629d0(0x10000,'\x01');
      uVar6 = *(uint *)(lVar4 + 0x248c);
      if (uVar9 == 0) {
        uVar5 = FUN_18009ac90(&DAT_1800ef49c,(byte)(uVar6 >> 0x14) & 1);
        if ((char)uVar5 != '\0') {
          uVar6 = uVar6 & 0xff9fffff | 0x100000;
        }
        uVar5 = FUN_18009ac90(&DAT_1800ef4a0,(byte)(uVar6 >> 0x15) & 1);
        if ((char)uVar5 != '\0') {
          uVar6 = uVar6 & 0xffafffff | 0x200000;
        }
        uVar5 = FUN_18009ac90(&DAT_1800ef4a4,(byte)(uVar6 >> 0x16) & 1);
        if ((char)uVar5 != '\0') {
          uVar6 = uVar6 & 0xffcfffff | 0x400000;
        }
      }
      if (uVar7 == 0) {
        if (uVar9 == 0) {
          FUN_18009caa0();
        }
        uVar5 = FUN_18009ac90((byte *)"0..255",(byte)(uVar6 >> 0x17) & 1);
        if ((char)uVar5 != '\0') {
          uVar6 = uVar6 & 0xfeffffff | 0x800000;
        }
        uVar5 = FUN_18009ac90((byte *)"0.00..1.00",(byte)(uVar6 >> 0x18) & 1);
        if ((char)uVar5 != '\0') {
          uVar6 = uVar6 & 0xff7fffff | 0x1000000;
        }
      }
      fVar14 = 1.0;
      if (((uVar9 == 0) || (uVar7 == 0)) &&
         (lVar4 = *(longlong *)(DAT_180115c10 + 0x13a8), *(char *)(lVar4 + 0xd1) == '\0')) {
        uVar7 = 2 - (*(int *)(lVar4 + 0x1cc) != 0);
        if (*(longlong *)(lVar4 + 0x1c0) != 0) {
          uVar7 = 6 - (*(int *)(lVar4 + 0x1cc) != 0);
        }
        FUN_18009caf0(uVar7,1.0);
      }
      uVar11 = 0;
      local_a8[0] = -1.0;
      local_a8[1] = 0.0;
      uVar5 = FUN_18008f6b0((byte *)"Copy as..",(ulonglong *)local_a8,0);
      if ((char)uVar5 != '\0') {
        FUN_1800616d0(&DAT_1800e6eb0,0,uVar11,param_4);
      }
      uVar5 = FUN_180050060(&DAT_1800e6eb0,0);
      if ((char)uVar5 != '\0') {
        fVar1 = *param_1;
        if (0.0 <= fVar1) {
          fVar13 = 1.0;
          if (fVar1 <= 1.0) {
            fVar13 = fVar1;
          }
        }
        else {
          fVar13 = 0.0;
        }
        fVar2 = param_1[1];
        uVar7 = (uint)(fVar13 * 255.0 + 0.5);
        if (0.0 <= fVar2) {
          fVar13 = 1.0;
          if (fVar2 <= 1.0) {
            fVar13 = fVar2;
          }
        }
        else {
          fVar13 = 0.0;
        }
        fVar3 = param_1[2];
        iVar12 = (int)(fVar13 * 255.0 + 0.5);
        if (0.0 <= fVar3) {
          fVar13 = 1.0;
          if (fVar3 <= 1.0) {
            fVar13 = fVar3;
          }
        }
        else {
          fVar13 = 0.0;
        }
        iVar8 = (int)(fVar13 * 255.0 + 0.5);
        if ((param_2 & 2) == 0) {
          fVar14 = param_1[3];
          fVar13 = 0.0;
          if ((0.0 <= fVar14) && (fVar13 = 1.0, fVar14 <= 1.0)) {
            fVar13 = fVar14;
          }
          iVar10 = (int)(fVar13 * 255.0 + 0.5);
        }
        else {
          iVar10 = 0xff;
        }
        local_b8 = (double)fVar14;
        local_c0 = (double)fVar3;
        local_c8 = (double)fVar2;
        FUN_180057ec0(local_98,0x40,0x1800ef4d0,(double)fVar1);
        local_a8[0] = 0.0;
        local_a8[1] = 0.0;
        uVar5 = FUN_18009c3c0(local_98,0,0,local_a8);
        if ((char)uVar5 != '\0') {
          FUN_180066e50(local_98);
        }
        local_b8 = (double)CONCAT44(local_b8._4_4_,iVar10);
        local_c0 = (double)CONCAT44(local_c0._4_4_,iVar8);
        local_c8 = (double)CONCAT44(local_c8._4_4_,iVar12);
        FUN_180057ec0(local_98,0x40,0x1800ef4f0,(ulonglong)uVar7);
        local_a8[0] = 0.0;
        local_a8[1] = 0.0;
        uVar5 = FUN_18009c3c0(local_98,0,0,local_a8);
        if ((char)uVar5 != '\0') {
          FUN_180066e50(local_98);
        }
        local_c0 = (double)CONCAT44(local_c0._4_4_,iVar8);
        local_c8 = (double)CONCAT44(local_c8._4_4_,iVar12);
        FUN_180057ec0(local_98,0x40,0x1800ef260,(ulonglong)uVar7);
        local_a8[0] = 0.0;
        local_a8[1] = 0.0;
        uVar5 = FUN_18009c3c0(local_98,0,0,local_a8);
        if ((char)uVar5 != '\0') {
          FUN_180066e50(local_98);
        }
        if ((param_2 & 2) == 0) {
          local_b8 = (double)CONCAT44(local_b8._4_4_,iVar10);
          local_c0 = (double)CONCAT44(local_c0._4_4_,iVar8);
          local_c8 = (double)CONCAT44(local_c8._4_4_,iVar12);
          FUN_180057ec0(local_98,0x40,0x1800ef248,(ulonglong)uVar7);
          local_a8[0] = 0.0;
          local_a8[1] = 0.0;
          uVar5 = FUN_18009c3c0(local_98,0,0,local_a8);
          if ((char)uVar5 != '\0') {
            FUN_180066e50(local_98);
          }
        }
        FUN_180054790();
      }
      *(uint *)(local_a0 + 0x248c) = uVar6;
      FUN_180062270();
      FUN_180054790();
    }
  }
  return;
}


void FUN_180091bc0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;

  lVar2 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x2490) == 0) {
    FID_conflict__assert
              (L"g.ColorEditCurrentID != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1572);
  }
  if (*(int *)(lVar2 + 0x2494) == *(int *)(lVar2 + 0x2490)) {
    local_48 = *param_1;
    local_44 = param_1[1];
    local_40 = param_1[2];
    uVar1 = *(uint *)(lVar2 + 0x24a0);
    local_3c = 0;
    uVar3 = FUN_180051e70(&local_48);
    if (uVar1 == uVar3) {
      if ((*param_3 == 0.0) || ((*param_2 == 0.0 && (*(float *)(lVar2 + 0x2498) == 1.0)))) {
        *param_2 = *(float *)(lVar2 + 0x2498);
      }
      if (*param_4 == 0.0) {
        *param_3 = *(float *)(lVar2 + 0x249c);
      }
    }
  }
  return;
}


ulonglong FUN_180091cb0(float *param_1,undefined1 (*param_2) [12],uint param_3,
                       undefined1 (*param_4) [12])

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  byte bVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  byte local_268;
  byte local_267;
  float local_264;
  char local_260;
  float local_25c;
  char local_258;
  uint local_254;
  undefined8 local_250;
  float local_248;
  float fStack_244;
  float local_240;
  undefined4 local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220 [2];
  undefined8 local_218;
  float local_210;
  uint local_20c;
  float local_208;
  undefined4 uStack_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  float local_1d8 [3];
  float local_1cc;
  float local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  uint local_194;
  int local_190;
  undefined1 (*local_188) [12];
  undefined8 local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float *local_168;
  uint local_160 [2];
  float local_158;
  uint local_154;
  float local_150;
  float local_14c;
  uint local_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8 [23];

  lVar3 = DAT_180115c10;
  pfVar12 = &local_1a8;
  uVar13 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar13 + 0xce) = 1;
  lVar10 = *(longlong *)(lVar3 + 0x13a8);
  if (*(char *)(lVar10 + 0xd1) != '\0') {
    return uVar13 & 0xffffffffffffff00;
  }
  piVar2 = *(int **)(lVar10 + 0x2c0);
  local_218 = param_4;
  local_1c0 = param_1;
  local_188 = param_2;
  fVar21 = (float)FUN_1800508d0();
  uVar18 = (*(uint *)(lVar3 + 0x1d54) | *(uint *)(lVar3 + 0x1d48)) & 0x800;
  *(undefined8 *)(lVar3 + 0x1d50) = 0;
  FUN_180062870((byte *)param_1);
  local_190 = *(int *)(lVar3 + 0x2490);
  if (local_190 == 0) {
    if (*(int *)(lVar10 + 0x108) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    *(undefined4 *)(lVar3 + 0x2490) =
         *(undefined4 *)
          (*(longlong *)(lVar10 + 0x110) + -4 + (longlong)*(int *)(lVar10 + 0x108) * 4);
  }
  FUN_18004ff00();
  uVar17 = param_3 | 0x10;
  if ((param_3 >> 8 & 1) != 0) {
    uVar17 = param_3;
  }
  if ((uVar17 & 8) == 0) {
    FUN_180093a70((undefined8 *)param_2,uVar17);
  }
  if ((uVar17 & 0x6000000) == 0) {
    uVar16 = 0xa900000;
    if ((*(uint *)(lVar3 + 0x248c) & 0x6000000) != 0) {
      uVar16 = *(uint *)(lVar3 + 0x248c);
    }
    uVar17 = uVar16 & 0x6000000 | uVar17;
  }
  if ((uVar17 & 0x18000000) == 0) {
    uVar16 = 0xa900000;
    if ((*(uint *)(lVar3 + 0x248c) & 0x18000000) != 0) {
      uVar16 = *(uint *)(lVar3 + 0x248c);
    }
    uVar17 = uVar17 | uVar16 & 0x18000000;
  }
  if (((uVar17 & 0x6000000) == 0) || (((uVar17 & 0x6000000) - 1 & uVar17 & 0x6000000) != 0)) {
    FID_conflict__assert
              (L"ImIsPowerOfTwo(flags & ImGuiColorEditFlags_PickerMask_)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x16b3);
  }
  if (((uVar17 & 0x18000000) == 0) || (((uVar17 & 0x18000000) - 1 & uVar17 & 0x18000000) != 0)) {
    FID_conflict__assert
              (L"ImIsPowerOfTwo(flags & ImGuiColorEditFlags_InputMask_)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x16b4);
  }
  if ((uVar17 & 8) == 0) {
    uVar17 = uVar17 | *(uint *)(lVar3 + 0x248c) & 0x10000;
  }
  uVar16 = uVar17 & 2;
  if (((uVar17 >> 0x10 & 1) == 0) || (uVar16 != 0)) {
    local_260 = '\0';
    fVar29 = 1.0;
  }
  else {
    fVar29 = 2.0;
    local_260 = '\x01';
  }
  local_250 = *(undefined8 *)(lVar10 + 0x118);
  local_20c = uVar16;
  fVar22 = FUN_180056a00();
  local_220[0] = *(float *)(lVar3 + 0xc80);
  fVar21 = fVar21 - fVar29 * (local_220[0] + fVar22);
  local_200 = (float)local_250;
  fVar29 = fVar22;
  if (fVar22 <= fVar21) {
    fVar29 = fVar21;
  }
  fVar21 = (float)local_250 + fVar29;
  fVar25 = fVar21 + local_220[0];
  local_108 = ZEXT416((uint)fVar25);
  fVar25 = fVar25 + fVar22;
  local_128 = ZEXT416((uint)fVar25);
  fVar25 = local_220[0] + fVar25;
  pfVar9 = (float *)0x10;
  if (uVar16 != 0) {
    pfVar9 = (float *)0xc;
  }
  local_118 = ZEXT416((uint)fVar25);
  local_1cc = (float)(int)(fVar22 * 0.2);
  pwVar14 = (wchar_t *)param_2;
  local_234 = fVar29;
  local_210 = fVar22;
  local_168 = pfVar9;
  FUN_1800d1c20(local_f8,(undefined8 *)param_2,(ulonglong)pfVar9);
  local_1ac = 0.0;
  local_198 = fVar29 * 0.5;
  local_1ec = fVar29 * 0.08;
  fVar30 = local_198 - local_1ec;
  local_200 = (fVar29 + fVar22) * 0.5 + local_200;
  local_1fc = local_198 + local_250._4_4_;
  local_1b0 = fVar30 - (float)(int)(fVar29 * 0.027);
  local_1a4 = local_1b0 * -0.866025;
  local_1a8 = local_1b0 * -0.5;
  local_19c = local_1b0 * 0.866025;
  local_264 = *(float *)*param_2;
  local_25c = *(float *)(*param_2 + 4);
  local_238 = *(float *)(*param_2 + 8);
  local_254 = uVar17 & 0x8000000;
  local_1f8 = local_264;
  local_1f4 = local_25c;
  local_1f0 = local_238;
  local_1d8[2] = fVar30;
  local_1a0 = local_1a8;
  if (local_254 == 0) {
    if ((uVar17 >> 0x1c & 1) != 0) {
      param_4 = (undefined1 (*) [12])&local_1f8;
      FUN_180051f30((ulonglong)(uint)local_264,local_25c,local_238,(float *)param_4,&local_1f4,
                    &local_1f0);
    }
  }
  else {
    param_4 = (undefined1 (*) [12])&local_264;
    FUN_1800520f0(local_264,local_25c,local_238,(float *)param_4,&local_25c,&local_238);
    lVar10 = DAT_180115c10;
    if (*(int *)(DAT_180115c10 + 0x2490) == 0) {
      pfVar9 = (float *)0x1572;
      pwVar14 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
      ;
      FID_conflict__assert
                (L"g.ColorEditCurrentID != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x1572);
    }
    if (*(int *)(lVar10 + 0x2494) == *(int *)(lVar10 + 0x2490)) {
      local_248 = *(float *)*param_2;
      fStack_244 = *(float *)(*param_2 + 4);
      uVar16 = *(uint *)(lVar10 + 0x24a0);
      local_240 = *(float *)(*param_2 + 8);
      local_23c = 0;
      uVar7 = FUN_180051e70(&local_248);
      if (uVar16 == uVar7) {
        if ((local_25c == 0.0) || ((local_264 == 0.0 && (*(float *)(lVar10 + 0x2498) == 1.0)))) {
          local_264 = *(float *)(lVar10 + 0x2498);
        }
        if (!NAN(local_238)) {
          if (local_238 == 0.0) {
            local_25c = *(float *)(lVar10 + 0x249c);
          }
          goto LAB_1800921ec;
        }
      }
    }
  }
LAB_1800921ec:
  bVar19 = 0;
  pfVar15 = (float *)CONCAT71((int7)((ulonglong)pwVar14 >> 8),1);
  local_267 = 0;
  local_268 = 0;
  FUN_1800629d0(2,'\x01');
  local_1c8 = (float)(uVar17 & 0x4000000);
  bVar20 = bVar19;
  if (local_1c8 == 0.0) {
    if ((uVar17 >> 0x19 & 1) != 0) {
      pfVar12 = (float *)0x0;
      local_248 = fVar29;
      fStack_244 = fVar29;
      FUN_180099a80(&DAT_1800ef354,&local_248,0);
      lVar11 = FUN_1800593a0();
      lVar10 = DAT_180115c10;
      if (((char)lVar11 != '\0') && (uVar18 == 0)) {
        fVar26 = (*(float *)(lVar3 + 0xe8) - (float)local_250) / (fVar29 - 1.0);
        if (0.0 <= fVar26) {
          local_25c = 1.0;
          if (fVar26 <= 1.0) {
            local_25c = fVar26;
          }
        }
        else {
          local_25c = 0.0;
        }
        fVar26 = (*(float *)(lVar3 + 0xec) - local_250._4_4_) / (fVar29 - 1.0);
        if (0.0 <= fVar26) {
          local_238 = 1.0;
          if (fVar26 <= 1.0) {
            local_238 = fVar26;
          }
        }
        else {
          local_238 = 0.0;
        }
        local_238 = 1.0 - local_238;
        if (*(int *)(DAT_180115c10 + 0x2490) == 0) {
          pfVar12 = (float *)0x1567;
          FID_conflict__assert
                    (L"g.ColorEditCurrentID != 0",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                     ,0x1567);
        }
        if (*(int *)(lVar10 + 0x2494) == *(int *)(lVar10 + 0x2490)) {
          local_248 = *(float *)*param_2;
          fStack_244 = *(float *)(*param_2 + 4);
          uVar16 = *(uint *)(lVar10 + 0x24a0);
          local_240 = *(float *)(*param_2 + 8);
          local_23c = 0;
          uVar7 = FUN_180051e70(&local_248);
          if (uVar16 == uVar7) {
            local_264 = *(float *)(lVar10 + 0x2498);
          }
        }
        bVar19 = 1;
      }
      if ((uVar17 & 8) == 0) {
        FUN_180061aa0((byte *)"context",(float *)0x1,pfVar12,(ulonglong)param_4);
      }
      local_248 = (float)local_108._0_4_;
      fStack_244 = local_250._4_4_;
      FUN_1800670f0((undefined8 *)&local_248);
      pfVar9 = (float *)0x0;
      pfVar15 = &local_248;
      local_248 = fVar22;
      fStack_244 = fVar29;
      FUN_180099a80(&DAT_1800ef358,pfVar15,0);
      lVar10 = FUN_1800593a0();
      bVar20 = bVar19;
      local_268 = bVar19;
      if (((char)lVar10 != '\0') && (uVar18 == 0)) {
        fVar26 = (*(float *)(lVar3 + 0xec) - local_250._4_4_) / (fVar29 - 1.0);
        if (0.0 <= fVar26) {
          local_264 = 1.0;
          if (fVar26 <= 1.0) {
            local_264 = fVar26;
          }
        }
        else {
          local_264 = 0.0;
        }
        bVar20 = 1;
        local_267 = 1;
      }
    }
  }
  else {
    pfVar9 = (float *)0x0;
    pfVar15 = &local_248;
    local_248 = fVar29 + *(float *)(lVar3 + 0xc80) + fVar22;
    fStack_244 = fVar29;
    FUN_180099a80(&DAT_1800ef350,pfVar15,0);
    lVar10 = FUN_1800593a0();
    if ((char)lVar10 != '\0') {
      if (uVar18 == 0) {
        fVar25 = *(float *)(lVar3 + 0xac8) - local_200;
        fVar27 = *(float *)(lVar3 + 0xacc) - local_1fc;
        fVar28 = *(float *)(lVar3 + 0xe8) - local_200;
        fVar26 = *(float *)(lVar3 + 0xec) - local_1fc;
        fVar22 = fVar27 * fVar27 + fVar25 * fVar25;
        if (((fVar30 - 1.0) * (fVar30 - 1.0) <= fVar22) &&
           (fVar22 <= (local_198 + 1.0) * (local_198 + 1.0))) {
          uVar23 = FUN_1800bf1a0(fVar26,fVar28);
          local_264 = ((float)uVar23 / 3.1415927) * 0.5;
          if (local_264 < 0.0) {
            local_264 = local_264 + 1.0;
          }
          bVar19 = 1;
        }
        uVar23 = FUN_1800bb5a0();
        fVar22 = (float)uVar23;
        uVar23 = FUN_1800bd0b0();
        param_4 = (undefined1 (*) [12])&local_248;
        pfVar9 = &local_1a0;
        fVar30 = (float)uVar23;
        local_248 = fVar25 * fVar22 - fVar27 * fVar30;
        fStack_244 = fVar25 * fVar30 + fVar27 * fVar22;
        pfVar15 = pfVar12;
        cVar6 = FUN_180058a30(&local_1b0,pfVar12,pfVar9,(float *)param_4);
        bVar20 = bVar19;
        if (cVar6 != '\0') {
          local_1e8._4_4_ = fVar26 * fVar22 + fVar28 * fVar30;
          local_1e8._0_4_ = fVar28 * fVar22 - fVar26 * fVar30;
          cVar6 = FUN_180058a30(&local_1b0,pfVar12,&local_1a0,(float *)&local_1e8);
          if (cVar6 == '\0') {
            pfVar9 = FUN_180058760(&local_228,&local_1b0,pfVar12,&local_1a0,(float *)&local_1e8);
            local_1e8 = *(ulonglong *)pfVar9;
          }
          param_4 = (undefined1 (*) [12])&local_1e8;
          pfVar9 = &local_1a0;
          FUN_180058690(&local_1b0,pfVar12,pfVar9,(float *)param_4,&local_208,&local_22c,&local_248)
          ;
          local_22c = 1.0 - local_22c;
          if (0.0001 <= local_22c) {
            local_238 = 1.0;
            if (local_22c <= 1.0) {
              local_238 = local_22c;
            }
          }
          else {
            local_238 = 0.0001;
          }
          fVar22 = local_208 / local_238;
          local_25c = 0.0001;
          if ((0.0001 <= fVar22) && (local_25c = 1.0, fVar22 <= 1.0)) {
            local_25c = fVar22;
          }
          bVar20 = 1;
          local_268 = 1;
          pfVar15 = pfVar12;
        }
        fVar25 = (float)local_118._0_4_;
        fVar22 = local_210;
        fVar30 = local_1d8[2];
        local_267 = bVar19;
      }
    }
    if ((uVar17 & 8) == 0) {
      pfVar15 = (float *)0x0;
      FUN_180061aa0((byte *)"context",(float *)0x1,pfVar9,(ulonglong)param_4);
    }
  }
  if (local_260 != '\0') {
    fStack_244 = local_250._4_4_;
    local_248 = fVar25;
    FUN_1800670f0((undefined8 *)&local_248);
    pfVar9 = (float *)0x0;
    pfVar15 = &local_248;
    local_248 = fVar22;
    fStack_244 = fVar29;
    FUN_180099a80((byte *)"alpha",pfVar15,0);
    lVar10 = FUN_1800593a0();
    if ((char)lVar10 != '\0') {
      fVar25 = (*(float *)(lVar3 + 0xec) - local_250._4_4_) / (fVar29 - 1.0);
      if (0.0 <= fVar25) {
        fVar26 = 1.0;
        if (fVar25 <= 1.0) {
          fVar26 = fVar25;
        }
      }
      else {
        fVar26 = 0.0;
      }
      bVar20 = 1;
      *(float *)param_2[1] = 1.0 - fVar26;
    }
  }
  FUN_180062270();
  uVar18 = uVar17 & 0x100;
  if (uVar18 == 0) {
    FUN_180066590(0.0,*(float *)(lVar3 + 0xc80));
    FUN_18004ff00();
  }
  local_22c = (float)(uVar17 & 0x80);
  if (local_22c == 0.0) {
    pfVar15 = (float *)0x0;
    pfVar12 = (float *)FUN_180055c80((char *)local_1c0,(char *)0x0);
    if (local_1c0 != pfVar12) {
      if (uVar18 != 0) {
        FUN_180066590(0.0,*(float *)(lVar3 + 0xc80));
      }
      pfVar9 = (float *)0x0;
      FUN_18009f280((byte *)local_1c0,(byte *)pfVar12,0);
      pfVar15 = pfVar12;
    }
  }
  if (uVar18 == 0) {
    lVar10 = CONCAT71((int7)((ulonglong)pfVar15 >> 8),1);
    FUN_1800629d0(4,'\x01');
    if (local_20c == 0) {
      local_1dc = *(undefined4 *)param_2[1];
    }
    else {
      local_1dc = 0x3f800000;
    }
    local_1e8 = *(ulonglong *)*param_2;
    local_1e0 = *(undefined4 *)(*param_2 + 8);
    if (local_22c != 0.0) {
      FUN_18009f180("Current",lVar10,pfVar9,param_4);
    }
    param_4 = (undefined1 (*) [12])&local_248;
    pfVar12 = (float *)&local_1e8;
    local_22c = (float)(uVar17 & 0x18083842);
    uVar13 = (ulonglong)(uint)local_22c;
    local_248 = fVar22 * 3.0;
    fStack_244 = fVar22 + fVar22;
    FUN_180090390((byte *)"##current",pfVar12,(uint)local_22c,(float *)param_4);
    if (local_218 != (undefined1 (*) [12])0x0) {
      FUN_18009f180("Original",(longlong)pfVar12,uVar13,param_4);
      if (local_20c == 0) {
        local_1b4 = *(undefined4 *)local_218[1];
      }
      else {
        local_1b4 = 0x3f800000;
      }
      param_4 = (undefined1 (*) [12])&local_248;
      local_1c0 = *(float **)*local_218;
      local_1b8 = *(undefined4 *)(*local_218 + 8);
      local_248 = fVar22 * 3.0;
      fStack_244 = fVar22 + fVar22;
      uVar13 = FUN_180090390((byte *)"##original",(float *)&local_1c0,(uint)local_22c,
                             (float *)param_4);
      if ((char)uVar13 != '\0') {
        FUN_1800d1c20((undefined8 *)param_2,(undefined8 *)local_218,(ulonglong)local_168);
        bVar20 = 1;
      }
    }
    FUN_180062270();
    FUN_180054450();
  }
  pfVar9 = (float *)(*param_2 + 8);
  pfVar12 = (float *)(*param_2 + 4);
  if ((local_267 != 0) || (local_268 != 0)) {
    if (local_254 == 0) {
      if ((uVar17 >> 0x1c & 1) != 0) {
        *(float *)*param_2 = local_264;
        *pfVar9 = local_238;
        *pfVar12 = local_25c;
      }
    }
    else {
      param_4 = param_2;
      FUN_180051f30((ulonglong)(uint)local_264,local_25c,local_238,(float *)param_2,pfVar12,pfVar9);
      *(float *)(lVar3 + 0x2498) = local_264;
      *(float *)(lVar3 + 0x249c) = local_25c;
      *(undefined4 *)(lVar3 + 0x2494) = *(undefined4 *)(lVar3 + 0x2490);
      local_248 = *(float *)*param_2;
      fStack_244 = *pfVar12;
      local_240 = *pfVar9;
      local_23c = 0;
      uVar18 = FUN_180051e70(&local_248);
      *(uint *)(lVar3 + 0x24a0) = uVar18;
    }
  }
  if ((uVar17 & 0x20) == 0) {
    local_258 = '\0';
    if (local_260 != '\0') {
      fVar21 = (float)local_128._0_4_;
    }
    FUN_180062aa0((fVar21 + local_220[0] + fVar22) - (float)local_250);
    uVar18 = uVar17 & 0x1988385a;
    if ((((uVar17 >> 0x14 & 1) != 0) || ((uVar17 & 0x700000) == 0)) &&
       (uVar13 = FUN_1800909b0((byte *)"##rgb",param_2,(double *)(ulonglong)(uVar18 | 0x100004),
                               param_4), (char)uVar13 != '\0')) {
      if ((*(int *)(lVar3 + 0x141c) == 0) || (local_258 = '\x01', *(char *)(lVar3 + 0x1429) != '\0')
         ) {
        local_258 = '\0';
      }
      bVar20 = 1;
    }
    if (((uVar17 >> 0x15 & 1) != 0) || ((uVar17 & 0x700000) == 0)) {
      uVar13 = FUN_1800909b0((byte *)"##hsv",param_2,(double *)(ulonglong)(uVar18 | 0x200004),
                             param_4);
      bVar20 = bVar20 | (byte)uVar13;
    }
    if (((uVar17 >> 0x16 & 1) != 0) || ((uVar17 & 0x700000) == 0)) {
      uVar13 = FUN_1800909b0((byte *)"##hex",param_2,(double *)(ulonglong)(uVar18 | 0x400004),
                             param_4);
      bVar20 = bVar20 | (byte)uVar13;
    }
    FUN_180062300();
    if ((((local_258 != '\0') && (local_254 != 0)) &&
        (FUN_1800520f0(*(float *)*param_2,*(float *)(*param_2 + 4),*(float *)(*param_2 + 8),
                       &local_22c,local_220,&local_208), local_22c <= 0.0)) && (0.0 < local_264)) {
      if ((0.0 < local_208) || (local_238 == local_208)) {
        if (0.0 < local_220[0]) goto LAB_180092b51;
        fVar21 = local_25c * 0.5;
      }
      else {
        local_208 = local_238 * 0.5;
        fVar21 = local_25c;
      }
      FUN_180051f30((ulonglong)(uint)local_264,fVar21,local_208,(float *)param_2,
                    (float *)(*param_2 + 4),(float *)(*param_2 + 8));
    }
  }
LAB_180092b51:
  pfVar12 = (float *)(*param_2 + 4);
  if (bVar20 != 0) {
    if (local_254 == 0) {
      if ((uVar17 >> 0x1c & 1) != 0) {
        local_264 = *(float *)*param_2;
        local_25c = *pfVar12;
        local_238 = *(float *)(*param_2 + 8);
        FUN_180051f30((ulonglong)(uint)local_264,local_25c,local_238,&local_1f8,&local_1f4,
                      &local_1f0);
      }
    }
    else {
      local_1f8 = *(float *)*param_2;
      local_1f4 = *pfVar12;
      local_1f0 = *(float *)(*param_2 + 8);
      FUN_1800520f0(local_1f8,local_1f4,local_1f0,&local_264,&local_25c,&local_238);
      lVar10 = DAT_180115c10;
      if (*(int *)(DAT_180115c10 + 0x2490) == 0) {
        FID_conflict__assert
                  (L"g.ColorEditCurrentID != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x1572);
      }
      if (*(int *)(lVar10 + 0x2494) == *(int *)(lVar10 + 0x2490)) {
        local_248 = *(float *)*param_2;
        fStack_244 = *pfVar12;
        uVar18 = *(uint *)(lVar10 + 0x24a0);
        local_240 = *(float *)(*param_2 + 8);
        local_23c = 0;
        uVar16 = FUN_180051e70(&local_248);
        if (uVar18 == uVar16) {
          if ((local_25c == 0.0) || ((local_264 == 0.0 && (*(float *)(lVar10 + 0x2498) == 1.0)))) {
            local_264 = *(float *)(lVar10 + 0x2498);
          }
          if (local_238 == 0.0) {
            local_25c = *(float *)(lVar10 + 0x249c);
          }
        }
      }
    }
  }
  local_16c = *(float *)(lVar3 + 0xc28);
  if (0.0 <= local_16c) {
    fVar21 = 1.0;
    if (local_16c <= 1.0) {
      fVar21 = local_16c;
    }
  }
  else {
    fVar21 = 0.0;
  }
  local_178 = 1.0;
  local_174 = 1.0;
  local_170 = 1.0;
  fVar22 = (float)((int)(fVar21 * 255.0 + 0.5) << 0x18);
  local_160[1] = (uint)fVar22 | 0xffff;
  local_1c0 = (float *)(CONCAT44(local_1c0._4_4_,fVar22) | 0xffff);
  local_254 = (uint)fVar22 | 0x808080;
  local_220[0] = (float)((uint)fVar22 | 0xff00);
  local_160[0] = (uint)fVar22 | 0xff;
  uVar16 = (uint)fVar22 | 0xffffff;
  local_218 = (undefined1 (*) [12])(CONCAT44(local_218._4_4_,fVar22) | 0xff);
  local_154 = (uint)fVar22 | 0xffff00;
  local_1e8 = CONCAT44(local_1e8._4_4_,fVar22) | 0xffff00;
  local_208 = (float)((uint)fVar22 | 0xff0000);
  local_248 = (float)((uint)fVar22 | 0xff00ff);
  local_228 = fVar22;
  local_20c = uVar16;
  local_158 = local_220[0];
  local_150 = local_208;
  local_14c = local_248;
  local_148 = local_160[0];
  FUN_180051f30((ulonglong)(uint)local_264,1.0,1.0,&local_178,&local_174,&local_170);
  local_194 = FUN_180051e70(&local_178);
  local_140 = local_1f8;
  local_13c = local_1f4;
  local_134 = *(undefined4 *)(lVar3 + 0xc28);
  local_138 = local_1f0;
  local_22c = (float)FUN_180051e70(&local_140);
  fVar21 = local_1d8[2];
  uVar18 = local_20c;
  local_1d8[0] = 0.0;
  local_1d8[1] = 0.0;
  if (local_1c8 == 0.0) {
    if ((uVar17 >> 0x19 & 1) != 0) {
      local_234 = fVar29 + (float)local_250;
      local_230 = fVar29 + local_250._4_4_;
      FUN_180071500(piVar2,&local_250,(undefined8 *)&local_234,uVar16,local_194,local_194,
                    (uint)fVar22 | 0xffffff);
      local_234 = fVar29 + (float)local_250;
      local_230 = fVar29 + local_250._4_4_;
      FUN_180071500(piVar2,&local_250,(undefined8 *)&local_234,0,0,(uint)fVar22,(uint)fVar22);
      FUN_180063b80(local_250,CONCAT44(fVar29 + local_250._4_4_,fVar29 + (float)local_250),0.0);
      if (0.0 <= local_25c) {
        fVar21 = 1.0;
        if (local_25c <= 1.0) {
          fVar21 = local_25c;
        }
      }
      else {
        fVar21 = 0.0;
      }
      fVar21 = (float)(int)(fVar21 * fVar29 + (float)local_250 + 0.5);
      local_1d8[0] = (float)local_250 + 2.0;
      if (((float)local_250 + 2.0 <= fVar21) &&
         (local_1d8[0] = ((float)local_250 + fVar29) - 2.0, fVar21 <= local_1d8[0])) {
        local_1d8[0] = fVar21;
      }
      fVar21 = 1.0 - local_238;
      if (0.0 <= fVar21) {
        fVar22 = 1.0;
        if (fVar21 <= 1.0) {
          fVar22 = fVar21;
        }
      }
      else {
        fVar22 = 0.0;
      }
      fVar21 = (float)(int)(fVar22 * fVar29 + local_250._4_4_ + 0.5);
      local_1d8[1] = local_250._4_4_ + 2.0;
      if ((local_250._4_4_ + 2.0 <= fVar21) &&
         (local_1d8[1] = (local_250._4_4_ + fVar29) - 2.0, fVar21 <= local_1d8[1])) {
        local_1d8[1] = fVar21;
      }
      fVar21 = (float)local_1c0;
      uVar18 = (uint)(float)local_218;
      uVar4 = local_128._0_4_;
      uVar5 = local_108._0_4_;
      fVar22 = fVar29 / 6.0;
      local_234 = (float)local_128._0_4_;
      local_230 = fVar22 + local_250._4_4_;
      local_228 = (float)local_108._0_4_;
      local_224 = fVar22 * 0.0 + local_250._4_4_;
      FUN_180071500(piVar2,(undefined8 *)&local_228,(undefined8 *)&local_234,(uint)(float)local_218,
                    (uint)(float)local_218,(uint)(float)local_1c0,(uint)(float)local_1c0);
      local_234 = (float)uVar4;
      local_228 = (float)uVar5;
      local_230 = fVar22 + fVar22 + local_250._4_4_;
      local_224 = fVar22 + local_250._4_4_;
      FUN_180071500(piVar2,(undefined8 *)&local_228,(undefined8 *)&local_234,(uint)fVar21,
                    (uint)fVar21,(uint)local_220[0],(uint)local_220[0]);
      local_224 = fVar22 + fVar22 + local_250._4_4_;
      fVar21 = (float)local_1e8;
      local_234 = (float)uVar4;
      local_228 = (float)uVar5;
      local_230 = fVar22 * 3.0 + local_250._4_4_;
      FUN_180071500(piVar2,(undefined8 *)&local_228,(undefined8 *)&local_234,(uint)local_220[0],
                    (uint)local_220[0],(uint)(float)local_1e8,(uint)(float)local_1e8);
      local_224 = fVar22 * 3.0 + local_250._4_4_;
      local_234 = (float)uVar4;
      local_228 = (float)uVar5;
      local_230 = fVar22 * 4.0 + local_250._4_4_;
      FUN_180071500(piVar2,(undefined8 *)&local_228,(undefined8 *)&local_234,(uint)fVar21,
                    (uint)fVar21,(uint)local_208,(uint)local_208);
      fVar21 = local_248;
      local_224 = fVar22 * 4.0 + local_250._4_4_;
      uVar4 = local_128._0_4_;
      local_234 = (float)local_128._0_4_;
      local_228 = (float)uVar5;
      local_230 = fVar22 * 5.0 + local_250._4_4_;
      FUN_180071500(piVar2,(undefined8 *)&local_228,(undefined8 *)&local_234,(uint)local_208,
                    (uint)local_208,(uint)local_248,(uint)local_248);
      local_224 = fVar22 * 5.0 + local_250._4_4_;
      local_234 = (float)uVar4;
      local_230 = fVar22 * 6.0 + local_250._4_4_;
      local_228 = (float)uVar5;
      FUN_180071500(piVar2,(undefined8 *)&local_228,(undefined8 *)&local_234,(uint)fVar21,
                    (uint)fVar21,uVar18,uVar18);
      fVar22 = local_264 * fVar29 + local_250._4_4_;
      FUN_180063b80(CONCAT44(local_250._4_4_,uVar5),CONCAT44(local_250._4_4_ + fVar29,uVar4),0.0);
      fVar25 = local_1cc;
      fVar21 = local_210;
      FUN_18009b090(piVar2,CONCAT44((float)(int)(fVar22 + 0.5),(float)uVar5 - 1.0),
                    CONCAT44(local_1cc,local_1cc + 1.0),local_210 + 2.0,*(float *)(lVar3 + 0xc28));
      fVar22 = local_1ec;
      uVar17 = local_254;
      goto LAB_1800937e9;
    }
    fVar22 = local_1ec;
    uVar17 = local_254;
  }
  else {
    local_1c8 = fVar30 + local_198;
    fVar29 = 0.5 / local_198;
    iVar8 = (int)local_198 / 0xc;
    if (iVar8 < 5) {
      iVar8 = 4;
    }
    uVar13 = 0;
    fVar22 = local_1c8 * 0.5;
    do {
      iVar1 = piVar2[8];
      fVar30 = (float)(int)uVar13;
      fVar25 = fVar30 / 6.0;
      fVar30 = (fVar30 + 1.0) / 6.0;
      FUN_180075910((longlong)piVar2,&local_200,fVar22,(fVar25 + fVar25) * 3.1415927 - fVar29,
                    (fVar30 + fVar30) * 3.1415927 + fVar29,iVar8);
      FUN_180070440(piVar2,*(undefined8 **)(piVar2 + 0x16),piVar2[0x14],uVar18,0,local_1ec);
      piVar2[0x14] = 0;
      uVar23 = FUN_1800bb5a0();
      fVar25 = local_200;
      fVar27 = (float)uVar23 * fVar21 + local_200;
      uVar23 = FUN_1800bd0b0();
      fVar30 = local_1fc;
      fVar26 = (float)uVar23 * fVar21 + local_1fc;
      uVar23 = FUN_1800bb5a0();
      uVar24 = FUN_1800bd0b0();
      FUN_180078ac0((longlong)piVar2,iVar1,piVar2[8],CONCAT44(fVar26,fVar27),
                    CONCAT44((float)uVar24 * fVar21 + fVar30,(float)uVar23 * fVar21 + fVar25),
                    local_160[uVar13],local_160[uVar13 + 1]);
      uVar17 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar17;
    } while ((int)uVar17 < 6);
    uVar23 = FUN_1800bb5a0();
    fVar21 = (float)uVar23;
    uVar23 = FUN_1800bd0b0();
    fVar22 = local_1ec;
    fVar29 = (float)uVar23;
    local_1c0 = (float *)CONCAT44(local_1c8 * fVar29 * 0.5 + local_1fc,
                                  local_1c8 * fVar21 * 0.5 + local_200);
    if (local_267 == 0) {
      fVar25 = 0.55;
    }
    else {
      fVar25 = 0.65;
    }
    fVar25 = fVar25 * local_1ec;
    uVar17 = FUN_180079e90((longlong)piVar2,fVar25);
    uVar16 = local_194;
    FUN_18006ea70(piVar2,(float *)&local_1c0,fVar25,local_194,uVar17);
    FUN_18006e990(piVar2,(float *)&local_1c0,fVar25 + 1.0,local_254,uVar17,1.0);
    FUN_18006e990(piVar2,(float *)&local_1c0,fVar25,uVar18,uVar17,1.0);
    local_248 = local_200 + (fVar21 * local_1b0 - local_1ac * fVar29);
    fStack_244 = local_1fc + local_1ac * fVar21 + fVar29 * local_1b0;
    local_218 = (undefined1 (*) [12])
                CONCAT44(local_1fc + fVar21 * local_1a4 + local_1a8 * fVar29,
                         (local_1a8 * fVar21 - fVar29 * local_1a4) + local_200);
    local_1e8 = CONCAT44(local_1fc + local_19c * fVar21 + fVar29 * local_1a0,
                         local_200 + (fVar21 * local_1a0 - local_19c * fVar29));
    FUN_180056990((undefined8 *)&local_208);
    FUN_180076280(piVar2,3,3);
    uVar17 = local_254;
    **(undefined2 **)(piVar2 + 0x12) = (short)piVar2[0xd];
    *(longlong *)(piVar2 + 0x12) = *(longlong *)(piVar2 + 0x12) + 2;
    **(undefined8 **)(piVar2 + 0x10) = CONCAT44(fStack_244,local_248);
    *(ulonglong *)(*(longlong *)(piVar2 + 0x10) + 8) = CONCAT44(uStack_204,local_208);
    *(uint *)(*(longlong *)(piVar2 + 0x10) + 0x10) = uVar16;
    *(longlong *)(piVar2 + 0x10) = *(longlong *)(piVar2 + 0x10) + 0x14;
    piVar2[0xd] = piVar2[0xd] + 1;
    **(undefined2 **)(piVar2 + 0x12) = (short)piVar2[0xd];
    *(longlong *)(piVar2 + 0x12) = *(longlong *)(piVar2 + 0x12) + 2;
    **(ulonglong **)(piVar2 + 0x10) = (ulonglong)local_218;
    *(ulonglong *)(*(longlong *)(piVar2 + 0x10) + 8) = CONCAT44(uStack_204,local_208);
    *(float *)(*(longlong *)(piVar2 + 0x10) + 0x10) = local_228;
    *(longlong *)(piVar2 + 0x10) = *(longlong *)(piVar2 + 0x10) + 0x14;
    piVar2[0xd] = piVar2[0xd] + 1;
    **(undefined2 **)(piVar2 + 0x12) = (short)piVar2[0xd];
    *(longlong *)(piVar2 + 0x12) = *(longlong *)(piVar2 + 0x12) + 2;
    **(ulonglong **)(piVar2 + 0x10) = local_1e8;
    *(ulonglong *)(*(longlong *)(piVar2 + 0x10) + 8) = CONCAT44(uStack_204,local_208);
    *(uint *)(*(longlong *)(piVar2 + 0x10) + 0x10) = uVar18;
    *(longlong *)(piVar2 + 0x10) = *(longlong *)(piVar2 + 0x10) + 0x14;
    piVar2[0xd] = piVar2[0xd] + 1;
    FUN_180071830(piVar2,(undefined8 *)&local_248,&local_218,&local_1e8,local_254,1.5);
    fVar21 = 1.0 - local_238;
    if (0.0 <= fVar21) {
      fVar29 = 1.0;
      if (fVar21 <= 1.0) {
        fVar29 = fVar21;
      }
    }
    else {
      fVar29 = 0.0;
    }
    if (0.0 <= local_25c) {
      fVar21 = 1.0;
      if (local_25c <= 1.0) {
        fVar21 = local_25c;
      }
    }
    else {
      fVar21 = 0.0;
    }
    fVar25 = (local_248 - (float)local_1e8) * fVar21 + (float)local_1e8;
    fVar21 = (fStack_244 - local_1e8._4_4_) * fVar21 + local_1e8._4_4_;
    local_1d8[1] = (local_218._4_4_ - fVar21) * fVar29 + fVar21;
    local_1d8[0] = ((float)local_218 - fVar25) * fVar29 + fVar25;
    param_2 = local_188;
    fVar29 = local_234;
    uVar16 = uVar18;
  }
  fVar21 = local_210;
  fVar25 = local_1cc;
LAB_1800937e9:
  fVar30 = 0.55;
  if (local_268 == 0) {
    fVar30 = 0.4;
  }
  fVar30 = fVar30 * fVar22;
  uVar18 = FUN_180079e90((longlong)piVar2,fVar30);
  FUN_18006ea70(piVar2,local_1d8,fVar30,(uint)local_22c,uVar18);
  FUN_18006e990(piVar2,local_1d8,fVar30 + 1.0,uVar17,uVar18,1.0);
  FUN_18006e990(piVar2,local_1d8,fVar30,uVar16,uVar18,1.0);
  if (local_260 != '\0') {
    fVar22 = *(float *)param_2[1];
    if (0.0 <= fVar22) {
      fVar30 = 1.0;
      if (fVar22 <= 1.0) {
        fVar30 = fVar22;
      }
    }
    else {
      fVar30 = 0.0;
    }
    uVar4 = local_118._0_4_;
    local_188 = (undefined1 (*) [12])CONCAT44(local_250._4_4_,local_118._0_4_);
    local_180 = CONCAT44(local_250._4_4_ + fVar29,(float)local_118._0_4_ + fVar21);
    FUN_180077e40(piVar2,local_188,local_180,0,
                  (((float)local_118._0_4_ + fVar21) - (float)local_118._0_4_) * 0.5,0,0.0,0);
    FUN_180071500(piVar2,&local_188,&local_180,(uint)local_22c,(uint)local_22c,
                  (uint)local_22c & 0xffffff,(uint)local_22c & 0xffffff);
    fVar29 = (1.0 - fVar30) * fVar29 + local_250._4_4_;
    FUN_180063b80(local_188,local_180,0.0);
    FUN_18009b090(piVar2,CONCAT44((float)(int)(fVar29 + 0.5),(float)uVar4 - 1.0),
                  CONCAT44(fVar25,fVar25 + 1.0),fVar21 + 2.0,*(float *)(lVar3 + 0xc28));
  }
  FUN_180054450();
  if (bVar20 == 0) {
    bVar20 = 0;
  }
  else {
    iVar8 = memcmp(local_f8,param_2,(size_t)local_168);
    if (iVar8 == 0) {
      bVar20 = 0;
    }
    if ((bVar20 != 0) && (*(int *)(lVar3 + 0x1d88) != 0)) {
      FUN_18005b4c0(*(int *)(lVar3 + 0x1d88));
    }
  }
  if (local_190 == 0) {
    *(undefined4 *)(lVar3 + 0x2490) = 0;
  }
  FUN_180062210();
  return (ulonglong)bVar20;
}


void FUN_180093a70(undefined8 *param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint local_res10 [2];
  float local_res18;
  float local_res1c;
  undefined8 local_res20;
  undefined8 local_78;
  undefined8 uStack_70;

  uVar8 = param_2 & 0x10002;
  uVar6 = param_2 & 0x6000000;
  if ((uVar6 == 0) || (uVar8 == 0)) {
    local_res10[0] = uVar8;
    uVar4 = FUN_180050060((byte *)"context",0);
    lVar3 = DAT_180115c10;
    if ((char)uVar4 != '\0') {
      FUN_1800629d0(0x10000,'\x01');
      if (uVar6 == 0) {
        fVar1 = *(float *)(lVar3 + 0xc80);
        fVar10 = *(float *)(lVar3 + 0x10c0) * 8.0;
        local_res18 = fVar10;
        fVar9 = FUN_180056a00();
        local_res1c = fVar10 - (fVar9 + fVar1);
        if (local_res1c <= 1.0) {
          local_res1c = 1.0;
        }
        FUN_180062aa0(fVar10);
        iVar7 = 0;
        do {
          if ((iVar7 != 0) &&
             (lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8), *(char *)(lVar2 + 0xd1) == '\0')) {
            uVar8 = 2 - (*(int *)(lVar2 + 0x1cc) != 0);
            if (*(longlong *)(lVar2 + 0x1c0) != 0) {
              uVar8 = 6 - (*(int *)(lVar2 + 0x1cc) != 0);
            }
            FUN_18009caf0(uVar8,1.0);
          }
          FUN_1800627e0(iVar7);
          uVar8 = 0x20001a8;
          if (iVar7 != 0) {
            uVar8 = 0x1a8;
          }
          uVar5 = 0x40001a8;
          if (iVar7 != 1) {
            uVar5 = uVar8;
          }
          uVar5 = param_2 & 2 | uVar5;
          FUN_1800568d0(&local_res20);
          uVar4 = FUN_18009c3c0((byte *)"##selectable",0,0,&local_res18);
          if ((char)uVar4 != '\0') {
            *(uint *)(lVar3 + 0x248c) = (uVar5 ^ *(uint *)(lVar3 + 0x248c)) & 0xf9ffffff ^ uVar5;
          }
          FUN_1800670f0(&local_res20);
          uVar4 = 0x10;
          if ((param_2 & 2) != 0) {
            uVar4 = 0xc;
          }
          local_78 = 0;
          uStack_70 = 0;
          FUN_1800d1c20(&local_78,param_1,uVar4);
          FUN_180091cb0((float *)"##previewing_picker",(undefined1 (*) [12])&local_78,uVar5,
                        (undefined1 (*) [12])0x0);
          FUN_180062210();
          iVar7 = iVar7 + 1;
        } while (iVar7 < 2);
        FUN_180062300();
        uVar8 = local_res10[0];
      }
      if (uVar8 == 0) {
        if ((uVar6 == 0) &&
           (lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8), *(char *)(lVar2 + 0xd1) == '\0')) {
          uVar8 = 2 - (*(int *)(lVar2 + 0x1cc) != 0);
          if (*(longlong *)(lVar2 + 0x1c0) != 0) {
            uVar8 = 6 - (*(int *)(lVar2 + 0x1cc) != 0);
          }
          FUN_18009caf0(uVar8,1.0);
        }
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,(*(uint *)(lVar3 + 0x248c) & 0x10000) != 0);
        uVar4 = FUN_18008fa60((byte *)"Alpha Bar",(char *)local_res10);
        if ((char)uVar4 != '\0') {
          if ((char)local_res10[0] == '\0') {
            uVar8 = *(uint *)(lVar3 + 0x248c) & 0xfffeffff;
          }
          else {
            uVar8 = *(uint *)(lVar3 + 0x248c) | 0x10000;
          }
          *(uint *)(lVar3 + 0x248c) = uVar8;
        }
      }
      FUN_180062270();
      FUN_180054790();
    }
  }
  return;
}


void FUN_180093d50(byte *param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  float *pfVar7;
  undefined *puVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res20;
  float local_res24;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;

  lVar2 = DAT_180115c10;
  uVar3 = FUN_180050200(2,0);
  if ((char)uVar3 != '\0') {
    if ((param_1 != (byte *)0x0) &&
       (pbVar4 = (byte *)FUN_180055c80((char *)param_1,(char *)0x0), param_1 < pbVar4)) {
      FUN_18009f280(param_1,pbVar4,0);
      lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
      if (*(char *)(lVar1 + 0xd1) == '\0') {
        uVar5 = 2 - (*(int *)(lVar1 + 0x1cc) != 0);
        if (*(longlong *)(lVar1 + 0x1c0) != 0) {
          uVar5 = 6 - (*(int *)(lVar1 + 0x1cc) != 0);
        }
        FUN_18009caf0(uVar5,1.0);
      }
    }
    fVar12 = *(float *)(lVar2 + 0xc6c);
    local_res20 = fVar12 + fVar12 + *(float *)(lVar2 + 0x10c0) * 3.0;
    if ((param_3 & 2) == 0) {
      local_9c = param_2[3];
    }
    else {
      local_9c = 1.0;
    }
    local_a8 = *param_2;
    local_a4 = param_2[1];
    local_a0 = param_2[2];
    if (0.0 <= local_a8) {
      fVar12 = 1.0;
      if (local_a8 <= 1.0) {
        fVar12 = local_a8;
      }
    }
    else {
      fVar12 = 0.0;
    }
    if (0.0 <= local_a4) {
      fVar11 = 1.0;
      if (local_a4 <= 1.0) {
        fVar11 = local_a4;
      }
    }
    else {
      fVar11 = 0.0;
    }
    if (0.0 <= local_a0) {
      fVar10 = 1.0;
      if (local_a0 <= 1.0) {
        fVar10 = local_a0;
      }
    }
    else {
      fVar10 = 0.0;
    }
    pfVar9 = &local_res20;
    pfVar7 = &local_a8;
    uVar5 = param_3 & 0x18003802 | 0x40;
    puVar8 = (undefined *)(ulonglong)uVar5;
    pcVar6 = "##preview";
    local_res24 = local_res20;
    FUN_180090390((byte *)"##preview",pfVar7,uVar5,pfVar9);
    FUN_180066590(0.0,-1.0);
    if (((param_3 >> 0x1b & 1) == 0) && ((param_3 & 0x18000000) != 0)) {
      if ((param_3 >> 0x1c & 1) != 0) {
        pfVar9 = (float *)(double)param_2[2];
        puVar8 = (undefined *)(double)param_2[1];
        pfVar7 = (float *)(double)*param_2;
        if ((param_3 & 2) == 0) {
          pcVar6 = "H: %.3f, S: %.3f, V: %.3f, A: %.3f";
          FUN_18009f180("H: %.3f, S: %.3f, V: %.3f, A: %.3f",(longlong)pfVar7,puVar8,pfVar9);
        }
        else {
          pcVar6 = "H: %.3f, S: %.3f, V: %.3f";
          FUN_18009f180("H: %.3f, S: %.3f, V: %.3f",(longlong)pfVar7,puVar8,pfVar9);
        }
      }
    }
    else {
      pfVar7 = (float *)(ulonglong)(uint)(int)(fVar12 * 255.0 + 0.5);
      puVar8 = (undefined *)(ulonglong)(uint)(int)(fVar11 * 255.0 + 0.5);
      pfVar9 = (float *)(ulonglong)(uint)(int)(fVar10 * 255.0 + 0.5);
      if ((param_3 & 2) == 0) {
        pcVar6 = "#%02X%02X%02X%02X\nR:%d, G:%d, B:%d, A:%d\n(%.3f, %.3f, %.3f, %.3f)";
        FUN_18009f180("#%02X%02X%02X%02X\nR:%d, G:%d, B:%d, A:%d\n(%.3f, %.3f, %.3f, %.3f)",
                      (longlong)pfVar7,puVar8,pfVar9);
      }
      else {
        pcVar6 = "#%02X%02X%02X\nR: %d, G: %d, B: %d\n(%.3f, %.3f, %.3f)";
        FUN_18009f180("#%02X%02X%02X\nR: %d, G: %d, B: %d\n(%.3f, %.3f, %.3f)",(longlong)pfVar7,
                      puVar8,pfVar9);
      }
    }
    FUN_180054860(pcVar6,(wchar_t *)pfVar7,puVar8,(ulonglong)pfVar9);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800940e0(undefined1 (*param_1) [32],uint param_2,int *param_3,byte *param_4,
                       undefined8 *param_5)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined4 extraout_var;
  byte *pbVar8;
  int *piVar9;
  byte *pbVar10;
  ulonglong *puVar11;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined8 local_70;
  byte local_68 [32];
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStack_98;
  pbVar10 = param_4;
  if (0xb < param_2) {
    FID_conflict__assert
              (L"data_type >= 0 && data_type < ImGuiDataType_COUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x89d);
  }
  puVar11 = (ulonglong *)(&DAT_1800eda70 + (longlong)(int)param_2 * 0x20);
  FUN_1800d1c20(&local_70,(undefined8 *)param_3,*puVar11);
  for (; (cVar1 = (*param_1)[0], cVar1 == ' ' || (cVar1 == '\t'));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  if (cVar1 == '\0') {
    uVar7 = 0;
    if (param_5 == (undefined8 *)0x0) {
LAB_180094260:
      return uVar7 & 0xffffffffffffff00;
    }
    FUN_1800d1c20((undefined8 *)param_3,param_5,*puVar11);
  }
  else {
    if (param_2 - 8 < 2) {
      pbVar8 = (&PTR_DAT_1800eda88)[(longlong)(int)param_2 * 4];
    }
    else {
      pbVar8 = local_68;
      pbVar6 = (byte *)FUN_180095fb0((char *)param_4);
      if ((byte *)0x1f < pbVar6 + (1 - (longlong)param_4)) {
        FID_conflict__assert
                  (L"(size_t)(fmt_end - fmt_in + 1) < fmt_out_size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0xde8);
      }
      bVar3 = false;
      if (param_4 < pbVar6) {
        pbVar10 = (byte *)0x800000000000009;
        do {
          bVar2 = *param_4;
          param_4 = param_4 + 1;
          if (((bVar3) || (0x39 < bVar2)) ||
             ((0x3ff480800000000U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0)) {
            if (((byte)(bVar2 + 0x9f) < 0x1a) || ((byte)(bVar2 + 0xbf) < 0x1a)) {
              bVar4 = 1;
            }
            else {
              bVar4 = 0;
            }
            bVar3 = (bool)(bVar3 | bVar4);
            if ((0x3b < (byte)((int)(char)bVar2 - 0x24U)) ||
               ((0x800000000000009U >> ((ulonglong)((int)(char)bVar2 - 0x24U) & 0x3f) & 1) == 0)) {
              *pbVar8 = bVar2;
              pbVar8 = pbVar8 + 1;
            }
          }
        } while (param_4 < pbVar6);
      }
      *pbVar8 = 0;
      pbVar8 = local_68;
    }
    local_78[0] = 0;
    piVar9 = local_78;
    if (3 < *puVar11) {
      piVar9 = param_3;
    }
    uVar7 = FUN_18006e0d0(param_1,(longlong)pbVar8,piVar9,pbVar10);
    if ((int)uVar7 < 1) goto LAB_180094260;
    if (*puVar11 < 4) {
      if (param_2 == 0) {
        if (local_78[0] < -0x80) {
          *(undefined1 *)param_3 = 0x80;
        }
        else {
          iVar5 = local_78[0];
          if (0x7f < local_78[0]) {
            iVar5 = 0x7f;
          }
          *(char *)param_3 = (char)iVar5;
        }
      }
      else if (param_2 == 1) {
        if (local_78[0] < 0) {
          *(undefined1 *)param_3 = 0;
        }
        else {
          iVar5 = local_78[0];
          if (0xff < local_78[0]) {
            iVar5 = 0xff;
          }
          *(char *)param_3 = (char)iVar5;
        }
      }
      else if (param_2 == 2) {
        iVar5 = -0x8000;
        if ((-0x8001 < local_78[0]) && (iVar5 = local_78[0], 0x7fff < local_78[0])) {
          iVar5 = 0x7fff;
        }
        *(short *)param_3 = (short)iVar5;
      }
      else if (param_2 == 3) {
        if (local_78[0] < 0) {
          *(undefined2 *)param_3 = 0;
        }
        else {
          iVar5 = local_78[0];
          if (0xffff < local_78[0]) {
            iVar5 = 0xffff;
          }
          *(short *)param_3 = (short)iVar5;
        }
      }
      else {
        FID_conflict__assert
                  (L"0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x917);
      }
    }
  }
  iVar5 = memcmp(&local_70,param_3,*puVar11);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar5) >> 8),iVar5 != 0);
}


ulonglong FUN_180094360(undefined4 param_1,double *param_2,double *param_3)

{
  switch(param_1) {
  case 0:
    if (*(char *)param_3 <= *(char *)param_2) {
      return (ulonglong)(*(char *)param_3 < *(char *)param_2);
    }
    break;
  case 1:
    if (*(byte *)param_3 <= *(byte *)param_2) {
      return (ulonglong)(*(byte *)param_3 < *(byte *)param_2);
    }
    break;
  case 2:
    if (*(short *)param_3 <= *(short *)param_2) {
      return (ulonglong)(*(short *)param_3 < *(short *)param_2);
    }
    break;
  case 3:
    if (*(ushort *)param_3 <= *(ushort *)param_2) {
      return (ulonglong)(*(ushort *)param_3 < *(ushort *)param_2);
    }
    break;
  case 4:
    if (*(int *)param_3 <= *(int *)param_2) {
      return (ulonglong)(*(int *)param_3 < *(int *)param_2);
    }
    break;
  case 5:
    if (*(uint *)param_3 <= *(uint *)param_2) {
      return (ulonglong)(*(uint *)param_3 < *(uint *)param_2);
    }
    break;
  case 6:
    if ((longlong)*param_3 <= (longlong)*param_2) {
      return (ulonglong)((longlong)*param_3 < (longlong)*param_2);
    }
    break;
  case 7:
    if ((ulonglong)*param_3 <= (ulonglong)*param_2) {
      return (ulonglong)((ulonglong)*param_3 < (ulonglong)*param_2);
    }
    break;
  case 8:
    if (*(float *)param_3 <= *(float *)param_2) {
      return (ulonglong)(*(float *)param_3 < *(float *)param_2);
    }
    break;
  case 9:
    if (*param_3 <= *param_2) {
      return (ulonglong)(*param_3 < *param_2);
    }
    break;
  default:
    FID_conflict__assert
              (L"0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x935);
    return 0;
  }
  return 0xffffffff;
}


undefined8
FUN_1800944f0(undefined1 *param_1,int param_2,int param_3,float *param_4,longlong param_5)

{
  undefined8 uVar1;

  if (param_3 - 4U < 2) {
    uVar1 = FUN_180057ec0(param_1,(longlong)param_2,param_5,(ulonglong)(uint)*param_4);
    return uVar1;
  }
  if (param_3 - 6U < 2) {
    uVar1 = FUN_180057ec0(param_1,(longlong)param_2,param_5,*(undefined8 *)param_4);
    return uVar1;
  }
  if (param_3 == 8) {
    uVar1 = FUN_180057ec0(param_1,(longlong)param_2,param_5,(double)*param_4);
    return uVar1;
  }
  if (param_3 == 9) {
    uVar1 = FUN_180057ec0(param_1,(longlong)param_2,param_5,*(undefined8 *)param_4);
    return uVar1;
  }
  if (param_3 == 0) {
    uVar1 = FUN_180057ec0(param_1,(longlong)param_2,param_5,(ulonglong)(uint)(int)*(char *)param_4);
    return uVar1;
  }
  if (param_3 == 1) {
    uVar1 = FUN_180057ec0(param_1,(longlong)param_2,param_5,(ulonglong)*(byte *)param_4);
    return uVar1;
  }
  if (param_3 == 2) {
    uVar1 = FUN_180057ec0(param_1,(longlong)param_2,param_5,(ulonglong)(uint)(int)*(short *)param_4)
    ;
    return uVar1;
  }
  if (param_3 == 3) {
    uVar1 = FUN_180057ec0(param_1,(longlong)param_2,param_5,(ulonglong)*(ushort *)param_4);
    return uVar1;
  }
  FID_conflict__assert
            (L"0",
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
             ,0x8b4);
  return 0;
}


undefined * FUN_180094610(uint param_1)

{
  if (0xb < param_1) {
    FID_conflict__assert
              (L"data_type >= 0 && data_type < ImGuiDataType_COUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x89d);
  }
  return &DAT_1800eda70 + (longlong)(int)param_1 * 0x20;
}


void FUN_180094650(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;

  lVar2 = DAT_180115c10;
  piVar4 = *(int **)(param_2 + 2);
  piVar1 = piVar4 + (longlong)*param_2 * 6;
  if ((longlong)*param_2 * 0x18 != 0) {
    do {
      iVar3 = *piVar4;
      if (iVar3 == 1) {
        if ((*(byte *)(lVar2 + 0x270c) & 0x40) == 0) {
          iVar3 = 1;
        }
        else {
          pcVar5 = "Clear";
          if (*(byte *)(piVar4 + 1) != 0) {
            pcVar5 = "SelectAll";
          }
          FUN_180052d90(0x1800ef600,param_1,(ulonglong)*(byte *)(piVar4 + 1),(ulonglong)pcVar5);
          iVar3 = *piVar4;
        }
      }
      if ((iVar3 == 2) && ((*(byte *)(lVar2 + 0x270c) & 0x40) != 0)) {
        FUN_180052d90(0x1800ef630,param_1,*(undefined8 *)(piVar4 + 2),*(ulonglong *)(piVar4 + 4));
      }
      piVar4 = piVar4 + 6;
    } while (piVar4 != piVar1);
  }
  return;
}


float FUN_180094730(uint *param_1,float param_2,float param_3,float param_4,float param_5)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;

  uVar4 = (ushort)(int)param_2;
  if ((ushort)(int)param_2 <= *(ushort *)((longlong)param_1 + 0x12)) {
    uVar4 = *(ushort *)((longlong)param_1 + 0x12);
  }
  *(ushort *)((longlong)param_1 + 0x12) = uVar4;
  uVar2 = (ushort)(int)param_3;
  if ((ushort)(int)param_3 <= (ushort)param_1[5]) {
    uVar2 = (ushort)param_1[5];
  }
  *(ushort *)(param_1 + 5) = uVar2;
  uVar6 = (ushort)(int)param_4;
  if ((ushort)(int)param_4 <= *(ushort *)((longlong)param_1 + 0x16)) {
    uVar6 = *(ushort *)((longlong)param_1 + 0x16);
  }
  *(ushort *)((longlong)param_1 + 0x16) = uVar6;
  uVar5 = (ushort)(int)param_5;
  if ((ushort)(int)param_5 <= (ushort)param_1[6]) {
    uVar5 = (ushort)param_1[6];
  }
  bVar7 = uVar4 != 0;
  *(ushort *)(param_1 + 6) = uVar5;
  if ((uVar4 != 0) && (uVar2 != 0)) {
    uVar4 = uVar4 + (short)param_1[2];
  }
  sVar3 = uVar2 + uVar4;
  if ((uVar2 != 0 || bVar7) && (uVar6 != 0)) {
    sVar3 = sVar3 + (short)param_1[2];
  }
  sVar3 = sVar3 + uVar6;
  if ((uVar6 != 0 || (uVar2 != 0 || bVar7)) && (uVar5 != 0)) {
    sVar3 = sVar3 + (short)param_1[2];
  }
  uVar5 = uVar5 + sVar3;
  param_1[1] = (uint)uVar5;
  uVar1 = (uint)uVar5;
  if ((uint)uVar5 <= *param_1) {
    uVar1 = *param_1;
  }
  return (float)uVar1;
}


ulonglong FUN_180094800(wchar_t *param_1,wchar_t *param_2,double *param_3,float param_4,
                       double *param_5,double *param_6,byte *param_7,uint param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  ulonglong extraout_RAX_00;
  char cVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  wchar_t *pwVar9;
  char cVar10;
  byte bVar11;
  short sVar12;
  undefined4 uVar13;
  int iVar14;
  double *pdVar15;
  uint uVar16;
  ulonglong in_R9;
  float fVar17;
  double dVar18;
  double dVar19;

  uVar2 = param_8;
  uVar13 = SUB84(param_2,0);
  pwVar9 = param_1;
  pdVar15 = param_3;
  if ((param_8 != 1) && ((param_8 & 0x7000000f) != 0)) {
    pdVar15 = (double *)0xa17;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
    ;
    pwVar9 =
    L"(flags == 1 || (flags & ImGuiSliderFlags_InvalidMask_) == 0) && \"Invalid ImGuiSliderFlags flags! Has the legacy \'float power\' argument been mistakenly cast to flags? Call function with ImGuiSliderFlags_Logarithmic flags instead.\""
    ;
    FID_conflict__assert
              (L"(flags == 1 || (flags & ImGuiSliderFlags_InvalidMask_) == 0) && \"Invalid ImGuiSliderFlags flags! Has the legacy \'float power\' argument been mistakenly cast to flags? Call function with ImGuiSliderFlags_Logarithmic flags instead.\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0xa17);
    in_RAX = extraout_RAX;
  }
  lVar1 = DAT_180115c10;
  iVar14 = (int)param_1;
  if (*(int *)(DAT_180115c10 + 0x141c) != iVar14) goto LAB_180094d9e;
  if (*(int *)(DAT_180115c10 + 0x1448) == 1) {
    if (*(char *)(DAT_180115c10 + 0xf0) == '\0') {
LAB_18009488a:
      in_RAX = FUN_180051730(pwVar9,param_2,pdVar15,in_R9);
    }
    else {
      in_RAX = 0;
    }
  }
  else {
    uVar3 = *(int *)(DAT_180115c10 + 0x1448) - 2;
    in_RAX = (ulonglong)uVar3;
    if (((uVar3 < 2) && (*(int *)(DAT_180115c10 + 0x1f18) == iVar14)) &&
       (*(char *)(DAT_180115c10 + 0x1428) == '\0')) goto LAB_18009488a;
  }
  if ((*(int *)(lVar1 + 0x141c) == iVar14) &&
     (in_RAX = (ulonglong)(uVar2 & 0x200000),
     (*(uint *)(lVar1 + 0x1d8c) & 0x800) == 0 && (uVar2 & 0x200000) == 0)) {
    switch(uVar13) {
    case 0:
      param_8 = (uint)*(char *)param_3;
      if (param_6 == (double *)0x0) {
        cVar5 = '\x7f';
      }
      else {
        cVar5 = *(char *)param_6;
      }
      if (param_5 == (double *)0x0) {
        cVar10 = -0x80;
      }
      else {
        cVar10 = *(char *)param_5;
      }
      uVar4 = FUN_180088e40(4,&param_8,param_4,(int)cVar10,(int)cVar5,param_7,uVar2);
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
      *(undefined1 *)param_3 = (undefined1)param_8;
      return uVar4;
    case 1:
      param_8 = (uint)*(byte *)param_3;
      if (param_6 == (double *)0x0) {
        bVar6 = 0xff;
      }
      else {
        bVar6 = *(byte *)param_6;
      }
      if (param_5 == (double *)0x0) {
        bVar11 = 0;
      }
      else {
        bVar11 = *(byte *)param_5;
      }
      uVar4 = FUN_1800893b0(5,&param_8,param_4,(uint)bVar11,(uint)bVar6,param_7,uVar2);
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
      *(undefined1 *)param_3 = (undefined1)param_8;
      return uVar4;
    case 2:
      param_8 = (uint)*(short *)param_3;
      if (param_6 == (double *)0x0) {
        sVar7 = 0x7fff;
      }
      else {
        sVar7 = *(short *)param_6;
      }
      if (param_5 == (double *)0x0) {
        sVar12 = -0x8000;
      }
      else {
        sVar12 = *(short *)param_5;
      }
      uVar4 = FUN_180088e40(4,&param_8,param_4,(int)sVar12,(int)sVar7,param_7,uVar2);
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
      *(undefined2 *)param_3 = (undefined2)param_8;
      return uVar4;
    case 3:
      param_8 = (uint)*(ushort *)param_3;
      if (param_6 == (double *)0x0) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *(ushort *)param_6;
      }
      uVar3 = 0;
      if (param_5 != (double *)0x0) {
        uVar3 = (uint)*(ushort *)param_5;
      }
      uVar4 = FUN_1800893b0(5,&param_8,param_4,uVar3,(uint)uVar8,param_7,uVar2);
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
      *(undefined2 *)param_3 = (undefined2)param_8;
      return uVar4;
    case 4:
      if (param_6 == (double *)0x0) {
        uVar3 = 0x7fffffff;
      }
      else {
        uVar3 = *(uint *)param_6;
      }
      if (param_5 == (double *)0x0) {
        uVar16 = 0x80000000;
      }
      else {
        uVar16 = *(uint *)param_5;
      }
      uVar4 = FUN_180088e40(4,(uint *)param_3,param_4,uVar16,uVar3,param_7,uVar2);
      return uVar4;
    case 5:
      if (param_6 == (double *)0x0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(uint *)param_6;
      }
      uVar16 = 0;
      if (param_5 != (double *)0x0) {
        uVar16 = *(uint *)param_5;
      }
      uVar4 = FUN_1800893b0(5,(uint *)param_3,param_4,uVar16,uVar3,param_7,uVar2);
      return uVar4;
    case 6:
      if (param_6 == (double *)0x0) {
        dVar18 = NAN;
      }
      else {
        dVar18 = *param_6;
      }
      if (param_5 == (double *)0x0) {
        dVar19 = -0.0;
      }
      else {
        dVar19 = *param_5;
      }
      uVar4 = FUN_18008a530(6,(longlong *)param_3,param_4,(longlong)dVar19,(longlong)dVar18,param_7,
                            uVar2);
      return uVar4;
    case 7:
      if (param_6 == (double *)0x0) {
        dVar18 = -NAN;
      }
      else {
        dVar18 = *param_6;
      }
      dVar19 = 0.0;
      if (param_5 != (double *)0x0) {
        dVar19 = *param_5;
      }
      uVar4 = FUN_18008aaf0(7,(ulonglong *)param_3,param_4,(ulonglong)dVar19,(ulonglong)dVar18,
                            param_7,uVar2);
      return uVar4;
    case 8:
      if (param_6 == (double *)0x0) {
        fVar17 = 3.4028235e+38;
      }
      else {
        fVar17 = *(float *)param_6;
      }
      if (param_5 == (double *)0x0) {
        uVar4 = 0xff7fffff;
      }
      else {
        uVar4 = (ulonglong)*(uint *)param_5;
      }
      uVar4 = FUN_180089920(8,(float *)param_3,param_4,uVar4,fVar17,param_7,uVar2);
      return uVar4;
    case 9:
      if (param_6 == (double *)0x0) {
        dVar18 = 1.7976931348623157e+308;
      }
      else {
        dVar18 = *param_6;
      }
      if (param_5 == (double *)0x0) {
        dVar19 = -1.7976931348623157e+308;
      }
      else {
        dVar19 = *param_5;
      }
      uVar4 = FUN_180089ef0(9,param_3,param_4,dVar19,dVar18,param_7,uVar2);
      return uVar4;
    default:
      FID_conflict__assert
                (L"0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0xa35);
      in_RAX = extraout_RAX_00;
    }
  }
LAB_180094d9e:
  return in_RAX & 0xffffffffffffff00;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_180094de0(byte *param_1,uint param_2,double *param_3,float param_4,double *param_5,
                       double *param_6,byte *param_7,uint param_8)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined *puVar12;
  ulonglong *puVar13;
  double *pdVar14;
  undefined8 uVar15;
  int iVar16;
  double *pdVar17;
  ulonglong uVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStackY_148 [32];
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  uint local_f0;
  float local_ec;
  float local_e8;
  byte *local_e0;
  double *local_d8;
  float local_d0;
  float local_cc;
  byte *local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  wchar_t *local_b0;
  byte local_a8 [64];
  ulonglong local_68;

  lVar4 = DAT_180115c10;
  local_68 = DAT_180112300 ^ (ulonglong)auStackY_148;
  local_e0 = param_7;
  uVar11 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar11 + 0xce) = 1;
  lVar5 = DAT_180115c10;
  pwVar1 = *(wchar_t **)(lVar4 + 0x13a8);
  if (*(char *)((longlong)pwVar1 + 0xd1) != '\0') {
LAB_180095342:
    return uVar11 & 0xffffffffffffff00;
  }
  local_d8 = param_3;
  local_c8 = param_1;
  local_b0 = pwVar1;
  uVar10 = FUN_180056b80((longlong *)pwVar1,param_1,0);
  fVar20 = (float)FUN_1800508d0();
  FUN_180050b60((undefined8 *)&local_d0,param_1,(byte *)0x0,'\x01',-1.0);
  local_100 = *(float *)(pwVar1 + 0x8c);
  local_f8 = local_100 + fVar20;
  fStack_f4 = *(float *)(lVar5 + 0xc6c) + *(float *)(lVar5 + 0xc6c) + local_cc +
              *(float *)(pwVar1 + 0x8e);
  fStack_fc = *(float *)(pwVar1 + 0x8e);
  if (local_d0 <= 0.0) {
    local_b8 = 0.0;
  }
  else {
    local_b8 = local_d0 + *(float *)(lVar5 + 0xc80);
  }
  local_b4 = fStack_f4 + 0.0;
  local_b8 = local_f8 + local_b8;
  uVar19 = param_8 & 0x80;
  local_e8 = local_b4 - fStack_fc;
  local_ec = local_b8 - local_100;
  local_f0 = uVar19;
  local_c0 = local_100;
  local_bc = fStack_fc;
  FUN_18005aca0(&local_ec,*(float *)(lVar5 + 0xc6c));
  uVar18 = 0;
  if (uVar19 == 0) {
    uVar18 = 0x100000;
  }
  uVar11 = FUN_18005a670(&local_c0,(wchar_t *)(ulonglong)uVar10,&local_100,uVar18);
  if ((char)uVar11 == '\0') goto LAB_180095342;
  if (param_7 == (byte *)0x0) {
    puVar12 = FUN_180094610(param_2);
    local_e0 = *(byte **)(puVar12 + 0x10);
  }
  bVar7 = FUN_18005a9d0(&local_100,uVar10,(float *)(ulonglong)*(uint *)(lVar5 + 0x1d8c),uVar18);
  if (((uVar19 != 0) || (*(uint *)(DAT_180115c10 + 0x141c) != uVar10)) ||
     (*(uint *)(DAT_180115c10 + 0x2478) != uVar10)) {
    bVar2 = false;
    if ((bVar7) && (bVar8 = FUN_180059b30(0,0,uVar10), bVar8)) {
      bVar8 = true;
LAB_180094ff5:
      if ((*(short *)(lVar5 + 0xb22) != 2) || (bVar9 = FUN_180068c80(0x290,uVar10), !bVar9))
      goto LAB_180095013;
      bVar9 = true;
    }
    else {
      bVar8 = false;
      if (bVar7) goto LAB_180094ff5;
LAB_180095013:
      bVar9 = false;
    }
    if ((bVar8 || bVar9) || (*(uint *)(lVar5 + 0x1f10) == uVar10)) {
      bVar3 = true;
      if ((bVar8) || (bVar9)) {
        FUN_180067480(0x290,uVar10,0);
      }
      if ((local_f0 == 0) &&
         ((((bVar8 && (*(char *)(lVar5 + 0x104) != '\0')) || (bVar9)) ||
          ((*(uint *)(lVar5 + 0x1f10) == uVar10 && ((*(byte *)(lVar5 + 0x1f1c) & 1) != 0)))))) {
        bVar2 = true;
      }
    }
    else {
      bVar3 = false;
    }
    if (((*(char *)(lVar5 + 100) != '\0') && (local_f0 == 0 && !bVar2)) &&
       ((*(uint *)(lVar5 + 0x141c) == uVar10 &&
        (((bVar7 && (*(char *)(lVar5 + 0xb36) != '\0')) &&
         (bVar8 = FUN_180059f30(0,*(float *)(lVar5 + 0x78) * 0.5), !bVar8)))))) {
      *(uint *)(lVar5 + 0x1f10) = uVar10;
      bVar2 = true;
      *(undefined4 *)(lVar5 + 0x1f1c) = 1;
    }
    if (bVar3) {
      puVar13 = (ulonglong *)FUN_180094610(param_2);
      uVar11 = *puVar13;
      FUN_1800d1c20((undefined8 *)(lVar5 + 0x145c),local_d8,uVar11);
      pwVar1 = local_b0;
      if (!bVar2) {
        FUN_180066c00(uVar10,local_b0,uVar11,uVar18);
        FUN_1800672c0(uVar10,pwVar1,uVar11,uVar18);
        FUN_180056440((longlong)pwVar1,0,uVar11);
        *(undefined4 *)(lVar5 + 0x1d38) = 3;
LAB_180095121:
        if (*(uint *)(lVar5 + 0x141c) == uVar10) {
          iVar16 = 9;
        }
        else {
          iVar16 = bVar7 + 7;
        }
        uVar19 = FUN_1800567e0(iVar16,1.0);
        FUN_180064200(&local_100,uVar10,0);
        FUN_1800639d0(CONCAT44(fStack_fc,local_100),CONCAT44(fStack_f4,local_f8),uVar19,'\x01',
                      *(float *)(lVar5 + 0xc70));
        pdVar17 = local_d8;
        pbVar6 = local_e0;
        uVar11 = FUN_180094800((wchar_t *)(ulonglong)uVar10,(wchar_t *)(ulonglong)param_2,local_d8,
                               param_4,param_5,param_6,local_e0,param_8);
        if ((char)uVar11 != '\0') {
          FUN_18005b4c0(uVar10);
        }
        uVar15 = FUN_1800944f0(local_a8,0x40,param_2,(float *)pdVar17,(longlong)pbVar6);
        if (*(char *)(lVar5 + 0x2678) != '\0') {
          FUN_18005b350(&DAT_1800ee1ec,&DAT_1800ee1e8);
        }
        local_ec = 0.5;
        local_e8 = 0.5;
        FUN_180064710(&local_100,&local_f8,local_a8,local_a8 + (int)uVar15,(ulonglong *)0x0,
                      &local_ec,(float *)0x0);
        if (0.0 < local_d0) {
          FUN_180064450(CONCAT44(fStack_fc + *(float *)(lVar5 + 0xc6c),
                                 local_f8 + *(float *)(lVar5 + 0xc80)),local_c8,(byte *)0x0,'\x01');
        }
        return uVar11 & 0xff;
      }
    }
    else if (!bVar2) goto LAB_180095121;
  }
  uVar19 = 0;
  if ((param_8 >> 9 & 1) == 0) goto LAB_1800951af;
  if (param_5 == (double *)0x0) {
    if (param_6 == (double *)0x0) goto LAB_1800951af;
LAB_180095158:
    if ((param_5 != (double *)0x0) && (iVar16 = 0, param_6 != (double *)0x0)) goto LAB_180095164;
  }
  else {
    if (param_6 == (double *)0x0) goto LAB_180095158;
    uVar11 = FUN_180094360(param_2,param_5,param_6);
    iVar16 = (int)uVar11;
LAB_180095164:
    if (-1 < iVar16) {
      uVar19 = 0;
      if (iVar16 != 0) goto LAB_1800951af;
      uVar11 = FUN_180094360(param_2,param_5,(double *)(DAT_180115c10 + 0x247c));
      if ((int)uVar11 == 0) {
        uVar19 = param_8 >> 10 & 1;
        goto LAB_1800951af;
      }
    }
  }
  uVar19 = 1;
LAB_1800951af:
  pdVar17 = (double *)0x0;
  if (uVar19 != 0) {
    pdVar17 = param_6;
  }
  pdVar14 = (double *)0x0;
  if (uVar19 != 0) {
    pdVar14 = param_5;
  }
  uVar11 = FUN_18009eca0((undefined8 *)&local_100,uVar10,local_c8,param_2,local_d8,local_e0,pdVar14,
                         pdVar17);
  return uVar11;
}


void FUN_180095380(float *param_1)

{
  longlong lVar1;
  float local_18;
  undefined4 local_14;
  undefined8 local_10;

  lVar1 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x13a8);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    local_18 = *(float *)(lVar1 + 0x118);
    local_14 = *(undefined4 *)(lVar1 + 0x11c);
    local_10 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x118) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)param_1 >> 0x20),
                        (float)*(undefined8 *)(lVar1 + 0x118) + (float)*(undefined8 *)param_1);
    FUN_18005aca0(param_1,-1.0);
    FUN_18005a670(&local_18,(wchar_t *)0x0,(float *)0x0,0);
  }
  return;
}


void FUN_180095400(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;

  lVar3 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  lVar4 = DAT_180115c10;
  lVar3 = *(longlong *)(lVar3 + 0x13a8);
  if (*(char *)(lVar3 + 0xd1) == '\0') {
    if ((*(uint *)(lVar3 + 0x14) & 0x400) == 0) {
      param_3 = 0x21fe;
      FID_conflict__assert
                (L"window->Flags & ImGuiWindowFlags_MenuBar",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x21fe);
    }
    if (*(char *)(lVar3 + 0x17b) == '\0') {
      param_3 = 0x21ff;
      FID_conflict__assert
                (L"window->DC.MenuBarAppending",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x21ff);
    }
    lVar5 = FUN_18005c060();
    if ((((char)lVar5 != '\0') && (*(uint *)(lVar4 + 0x1fa0) < 2)) &&
       (lVar5 = *(longlong *)(lVar4 + 0x1f00), (*(uint *)(lVar5 + 0x14) & 0x10000000) != 0)) {
      if (*(longlong *)(lVar5 + 0x3a0) == 0) {
        lVar6 = 0;
      }
      else {
        do {
          lVar6 = *(longlong *)(lVar5 + 0x3a0);
          if ((*(uint *)(lVar6 + 0x14) & 0x10000000) == 0) goto LAB_1800954f3;
          lVar5 = lVar6;
        } while (*(longlong *)(lVar6 + 0x3a0) != 0);
        lVar6 = 0;
      }
LAB_1800954f3:
      if (((lVar6 == lVar3) && (*(int *)(lVar5 + 0x1d0) == 0)) &&
         ((*(byte *)(lVar4 + 0x1f94) & 0x80) == 0)) {
        if ((*(byte *)(lVar3 + 0x176) & 2) == 0) {
          param_3 = 0x220d;
          FID_conflict__assert
                    (L"window->DC.NavLayersActiveMaskNext & (1 << layer)",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                     ,0x220d);
        }
        FUN_180056440(lVar3,0,param_3);
        FUN_1800677a0(*(undefined4 *)(lVar3 + 0x3e4),1,0,(undefined8 *)(lVar3 + 0x3f8));
        if (*(char *)(lVar4 + 0x1ef8) != '\0') {
          *(undefined1 *)(lVar4 + 0x1ef8) = 0;
          *(undefined1 *)(lVar4 + 0x1f50) = 2;
        }
        *(undefined2 *)(lVar4 + 0x1ef9) = 0x101;
        FUN_18005c090(*(undefined4 *)(lVar4 + 0x1fa0),*(undefined4 *)(lVar4 + 0x1fa8),
                      *(uint *)(lVar4 + 0x1f94),*(undefined4 *)(lVar4 + 0x1f98));
      }
    }
    FUN_180061fc0();
    FUN_180062210();
    *(float *)(lVar3 + 0x17c) = *(float *)(lVar3 + 0x118) - *(float *)(lVar3 + 0x28);
    if (*(int *)(lVar4 + 0x1ea8) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    lVar5 = (longlong)*(int *)(lVar4 + 0x1ea8) * 0x38;
    lVar4 = *(longlong *)(lVar4 + 0x1eb0);
    uVar1 = *(undefined4 *)(lVar5 + -0x2c + lVar4);
    uVar2 = *(undefined4 *)(lVar5 + -0x28 + lVar4);
    *(undefined1 *)(lVar5 + -1 + lVar4) = 0;
    fVar8 = *(float *)(lVar3 + 0x130) - *(float *)(lVar3 + 0x98);
    fVar7 = *(float *)(lVar3 + 0x138);
    if (*(float *)(lVar3 + 0x138) <= fVar8) {
      fVar7 = fVar8;
    }
    *(float *)(lVar3 + 0x138) = fVar7;
    FUN_180054450();
    *(undefined4 *)(lVar3 + 0x130) = uVar1;
    *(undefined4 *)(lVar3 + 0x134) = uVar2;
    *(undefined4 *)(lVar3 + 0x1cc) = 1;
    *(undefined1 *)(lVar3 + 0x158) = 0;
    *(undefined4 *)(lVar3 + 0x170) = 0;
    *(undefined1 *)(lVar3 + 0x17b) = 0;
  }
  return;
}


int * FUN_180095670(void)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  float *in_RDX;
  int *piVar16;
  int iVar17;
  float *in_R8;
  float *pfVar18;
  ulonglong in_R9;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;

  lVar7 = DAT_180115c10;
  piVar3 = *(int **)(DAT_180115c10 + 0x2300);
  pfVar4 = *(float **)(DAT_180115c10 + 0x13a8);
  plVar5 = *(longlong **)(piVar3 + 10);
  if (((piVar3[0xc] != *(int *)(DAT_180115c10 + 0x1d44)) &&
      (cVar11 = FUN_180054c00((float *)"EndMultiSelect() FocusScope mismatch!",in_RDX,in_R8,in_R9),
      cVar11 != '\0')) && (piVar3[0xc] != *(int *)(lVar7 + 0x1d44))) {
    FID_conflict__assert
              (L"(ms->FocusScopeId == g.CurrentFocusScopeId) && \"EndMultiSelect() FocusScope mismatch!\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1e05);
  }
  if ((*(longlong *)(lVar7 + 0x2300) == 0) || (*plVar5 != *(longlong *)(lVar7 + 0x13a8))) {
    FID_conflict__assert
              (L"g.CurrentMultiSelect != 0 && storage->Window == g.CurrentWindow",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1e06);
  }
  if (0 < *(int *)(lVar7 + 0x2308)) {
    iVar15 = *(int *)(lVar7 + 0x2308) + -1;
    if (*(int *)(lVar7 + 0x2310) <= iVar15) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    if ((longlong)iVar15 * 0x60 + *(longlong *)(lVar7 + 0x2318) == *(longlong *)(lVar7 + 0x2300))
    goto LAB_18009578e;
  }
  FID_conflict__assert
            (L"g.MultiSelectTempDataStacked > 0 && &g.MultiSelectTempData[g.MultiSelectTempDataStacked - 1] == g.CurrentMultiSelect"
             ,
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
             ,0x1e07);
LAB_18009578e:
  piVar16 = piVar3;
  pfVar18 = pfVar4;
  FUN_18008f990(&local_a8,(longlong)piVar3,(longlong)pfVar4);
  fVar10 = fStack_9c;
  fVar9 = fStack_a0;
  fVar21 = fStack_a4;
  fVar20 = local_a8;
  if (*(char *)((longlong)piVar3 + 0x5a) != '\0') {
    if ((*(char *)((longlong)piVar3 + 0x21) != '\0') ||
       ((*(char *)((longlong)piVar3 + 0x5d) == '\0' && (*(longlong *)(piVar3 + 4) != -1)))) {
      if ((*(byte *)(lVar7 + 0x270c) & 0x40) != 0) {
        FUN_180052d90(0x1800ef8d0,piVar16,pfVar18,in_R9);
      }
      plVar5[3] = -1;
    }
    if (((char)piVar3[0x17] == '\0') && (plVar5[4] != -1)) {
      if ((*(byte *)(lVar7 + 0x270c) & 0x40) != 0) {
        FUN_180052d90(0x1800ef908,piVar16,pfVar18,in_R9);
      }
      plVar5[4] = -1;
      *(undefined1 *)((longlong)plVar5 + 0x15) = 0xff;
    }
    lVar8 = DAT_180115c10;
    uVar2 = piVar3[0xd];
    if (((((uVar2 & 0xc0) != 0) && (piVar3[0x14] != 0)) &&
        (*(int *)(DAT_180115c10 + 0x2298) == piVar3[0x14])) &&
       (*(char *)(DAT_180115c10 + 0x229c) != '\0')) {
      lVar6 = *(longlong *)(DAT_180115c10 + 0x13a8);
      *(undefined1 *)(DAT_180115c10 + 0x22c8) = 0;
      fVar1 = *(float *)(lVar8 + 0xec);
      if (fVar21 <= fVar1) {
        fVar22 = fVar10;
        if (fVar1 <= fVar10) {
          fVar22 = fVar1;
        }
      }
      else {
        fVar22 = fVar21;
      }
      fVar1 = *(float *)(lVar8 + 0xe8);
      if (fVar20 <= fVar1) {
        fVar19 = fVar9;
        if (fVar1 <= fVar9) {
          fVar19 = fVar1;
        }
      }
      else {
        fVar19 = fVar20;
      }
      fVar1 = *(float *)(lVar6 + 300);
      *(float *)(lVar8 + 0x22b0) = fVar19 - *(float *)(lVar6 + 0x128);
      *(float *)(lVar8 + 0x22b4) = fVar22 - fVar1;
      local_a8 = *(float *)(lVar8 + 0x22ec);
      if (*(float *)(lVar8 + 0x22ec) <= fVar20) {
        local_a8 = fVar20;
      }
      fStack_9c = *(float *)(lVar8 + 0x22f8);
      if (fVar10 <= *(float *)(lVar8 + 0x22f8)) {
        fStack_9c = fVar10;
      }
      fStack_a4 = *(float *)(lVar8 + 0x22f0);
      if (*(float *)(lVar8 + 0x22f0) <= fVar21) {
        fStack_a4 = fVar21;
      }
      fStack_a0 = *(float *)(lVar8 + 0x22f4);
      if (fVar9 <= *(float *)(lVar8 + 0x22f4)) {
        fStack_a0 = fVar9;
      }
      piVar16 = *(int **)(lVar6 + 0x2c0);
      uVar13 = FUN_1800567e0(0x1c,0.3);
      FUN_180071360(piVar16,&local_a8,&fStack_a0,uVar13,0.0,0);
      piVar16 = *(int **)(lVar6 + 0x2c0);
      uVar13 = FUN_1800567e0(0x34,1.0);
      pfVar18 = &fStack_a0;
      FUN_180071260(piVar16,&local_a8,pfVar18,uVar13,0.0,0,1.0);
      if ((uVar2 & 0x900) == 0x800) {
        local_8c = -*(float *)(lVar8 + 0x10c0);
        local_98 = fVar20 - local_8c;
        local_94 = fVar21 - local_8c;
        local_90 = fVar9 + local_8c;
        local_8c = fVar10 + local_8c;
        if (((*(float *)(lVar8 + 0xe8) < local_98) || (*(float *)(lVar8 + 0xec) < local_94)) ||
           ((local_90 <= *(float *)(lVar8 + 0xe8) || (local_8c <= *(float *)(lVar8 + 0xec))))) {
          pfVar18 = &local_98;
          FUN_18008eb50(lVar8 + 0x2298,lVar6,pfVar18);
        }
      }
    }
  }
  if (*(char *)((longlong)piVar3 + 0x59) == '\0') {
    iVar15 = piVar3[1];
    if (iVar15 < 0) {
      iVar15 = iVar15 + iVar15 / 2;
      iVar17 = 0;
      if (0 < iVar15) {
        iVar17 = iVar15;
      }
      FUN_18009fb50(piVar3,iVar17);
    }
    *piVar3 = 0;
  }
  bVar12 = FUN_18005a4c0(0);
  lVar8 = DAT_180115c10;
  if (((bVar12) && (fVar1 = *(float *)(lVar7 + 0xe8), pfVar4[0x86] <= fVar1)) &&
     ((fVar22 = *(float *)(lVar7 + 0xec), pfVar4[0x87] <= fVar22 &&
      ((fVar1 < pfVar4[0x88] && (fVar22 < pfVar4[0x89])))))) {
    if (((((uint)piVar3[0xd] >> 0xc & 1) == 0) ||
        ((((fVar20 <= fVar1 && (fVar21 <= fVar22)) && (fVar1 < fVar9)) && (fVar22 < fVar10)))) &&
       ((*(int *)(lVar7 + 0x1404) == 0 && (*(int *)(lVar7 + 0x141c) == 0)))) {
      if ((((piVar3[0xd] & 0xc0U) != 0) &&
          ((*(char *)(lVar7 + 0x229c) == '\0' && (*(char *)(lVar7 + 0x229d) == '\0')))) &&
         (*(short *)(lVar7 + 0xb22) == 1)) {
        *(int *)(DAT_180115c10 + 0x2298) = piVar3[0x14];
        *(undefined2 *)(lVar8 + 0x229d) = 0x101;
        *(undefined1 *)(lVar8 + 0x229f) = 1;
        *(undefined2 *)(lVar8 + 0x22a4) = *(undefined2 *)(lVar8 + 0x108);
        uVar14 = *(undefined8 *)(*(longlong *)(lVar8 + 0x13a8) + 0x128);
        fVar20 = (float)*(undefined8 *)(lVar8 + 0xe8) - (float)uVar14;
        fVar21 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0xe8) >> 0x20) -
                 (float)((ulonglong)uVar14 >> 0x20);
        *(undefined8 *)(lVar8 + 0x22b8) = 0;
        *(float *)(lVar8 + 0x22a8) = fVar20;
        *(float *)(lVar8 + 0x22ac) = fVar21;
        *(float *)(lVar8 + 0x22b0) = fVar20;
        *(float *)(lVar8 + 0x22b4) = fVar21;
        FUN_180056440((longlong)pfVar4,2,(ulonglong)pfVar18);
        FUN_1800673f0(piVar3[0x14]);
        if ((piVar3[0xd] & 0x1000U) != 0) {
          local_98 = *(float *)(lVar7 + 0xe8);
          local_94 = *(float *)(lVar7 + 0xec);
          local_90 = local_98;
          local_8c = local_94;
          FUN_1800677a0(0,0,piVar3[0xc],(undefined8 *)&local_98);
        }
      }
      if (((((piVar3[0xd] & 0x400U) != 0) && (uVar14 = FUN_18005a170(0), (char)uVar14 != '\0')) &&
          (bVar12 = FUN_180059f30(0,-1.0), !bVar12)) && (*(int *)(lVar7 + 0x108) == 0)) {
        FUN_18009a190(piVar3,0);
      }
    }
  }
  uVar2 = piVar3[0xd];
  if ((uVar2 >> 0x10 & 1) != 0) {
    if ((uVar2 >> 0xb & 1) == 0) {
      FID_conflict__assert
                (L"ms->Flags & ImGuiMultiSelectFlags_ScopeWindow",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x1e3c);
    }
    lVar8 = DAT_180115c10;
    *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
    FUN_18005c5b0(*(longlong *)(lVar8 + 0x13a8),4);
  }
  fVar20 = (float)piVar3[0x10];
  if ((float)piVar3[0x10] <= pfVar4[0x4c]) {
    fVar20 = pfVar4[0x4c];
  }
  fVar21 = (float)piVar3[0x11];
  if ((float)piVar3[0x11] <= pfVar4[0x4d]) {
    fVar21 = pfVar4[0x4d];
  }
  pfVar4[0x4c] = fVar20;
  pfVar4[0x4d] = fVar21;
  FUN_180062070();
  if ((*(byte *)(lVar7 + 0x270c) & 0x40) != 0) {
    FUN_180094650("EndMultiSelect",piVar3);
  }
  piVar3[0xc] = 0;
  piVar3[0xd] = 0;
  iVar17 = *(int *)(lVar7 + 0x2308);
  iVar15 = iVar17 + -1;
  *(int *)(lVar7 + 0x2308) = iVar15;
  if (iVar15 < 1) {
    *(undefined8 *)(lVar7 + 0x2300) = 0;
    return piVar3;
  }
  iVar17 = iVar17 + -2;
  if ((iVar17 < 0) || (*(int *)(lVar7 + 0x2310) <= iVar17)) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  *(longlong *)(lVar7 + 0x2300) = (longlong)iVar17 * 0x60 + *(longlong *)(lVar7 + 0x2318);
  return piVar3;
}


void FUN_180095da0(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  float *in_RDX;
  float *in_R8;
  ulonglong in_R9;
  float fVar7;

  lVar4 = DAT_180115c10;
  lVar6 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if (*(char *)(lVar6 + 0xd1) == '\0') {
    lVar3 = *(longlong *)(DAT_180115c10 + 0x2248);
    if (lVar3 == 0) {
      cVar5 = FUN_180054c00((float *)"Mismatched BeginTabBar()/EndTabBar()!",in_RDX,in_R8,in_R9);
      if (cVar5 != '\0') {
        FID_conflict__assert
                  (L"(tab_bar != 0) && \"Mismatched BeginTabBar()/EndTabBar()!\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x2491);
        return;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x7b) != '\0') {
        FUN_18009d700(lVar3);
      }
      if (((*(char *)(lVar3 + 0x7c) == '\0') && (*(int *)(lVar3 + 0x28) != 0)) &&
         (*(int *)(lVar4 + 0x12f0) <= *(int *)(lVar3 + 0x30) + 1)) {
        fVar7 = *(float *)(lVar3 + 0x48) + *(float *)(lVar3 + 0x40);
      }
      else {
        fVar7 = *(float *)(lVar6 + 0x11c) - *(float *)(lVar3 + 0x40);
        if (fVar7 <= *(float *)(lVar3 + 0x44)) {
          fVar7 = *(float *)(lVar3 + 0x44);
        }
        *(float *)(lVar3 + 0x44) = fVar7;
        fVar7 = *(float *)(lVar3 + 0x40) + fVar7;
      }
      *(float *)(lVar6 + 0x11c) = fVar7;
      if ('\x01' < *(char *)(lVar3 + 0x7a)) {
        *(undefined8 *)(lVar6 + 0x118) = *(undefined8 *)(lVar3 + 0x90);
      }
      *(undefined2 *)(lVar3 + 0x80) = 0xffff;
      if ((*(uint *)(lVar3 + 0x18) & 0x100000) == 0) {
        FUN_180062210();
      }
      if (*(int *)(lVar4 + 0x2278) < 1) {
        FID_conflict__assert
                  (L"Size > 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x849);
      }
      iVar1 = *(int *)(lVar4 + 0x2278);
      iVar2 = iVar1 + -1;
      *(int *)(lVar4 + 0x2278) = iVar2;
      if (iVar1 == 1) {
        lVar6 = 0;
      }
      else {
        if (iVar2 < 1) {
          FID_conflict__assert
                    (L"Size > 0",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x83c);
        }
        lVar3 = DAT_180115c10;
        lVar6 = *(longlong *)
                 (*(longlong *)(lVar4 + 0x2280) + -0x10 + (longlong)*(int *)(lVar4 + 0x2278) * 0x10)
        ;
        if (lVar6 == 0) {
          iVar2 = *(int *)(*(longlong *)(lVar4 + 0x2280) + -8 +
                          (longlong)*(int *)(lVar4 + 0x2278) * 0x10);
          if ((iVar2 < 0) || (*(int *)(DAT_180115c10 + 0x2250) <= iVar2)) {
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                       ,0x833);
          }
          lVar6 = (longlong)iVar2 * 0xa8 + *(longlong *)(lVar3 + 0x2258);
        }
      }
      *(longlong *)(lVar4 + 0x2248) = lVar6;
    }
  }
  return;
}


int FUN_180095f70(longlong param_1,int param_2)

{
  int iVar1;
  uint local_res10 [6];

  iVar1 = *(int *)(param_1 + 0x18);
  if (param_2 < iVar1) {
    iVar1 = FUN_180058410(local_res10,(byte *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2),
                          (byte *)((longlong)iVar1 + *(longlong *)(param_1 + 0x20)));
    return iVar1 + param_2;
  }
  return iVar1 + 1;
}


char * FUN_180095fb0(char *param_1)

{
  char cVar1;

  if (*param_1 != '%') {
    return param_1;
  }
  cVar1 = '%';
  while (((0x19 < (byte)(cVar1 + 0xbfU) || ((1 << (cVar1 + 0xbfU & 0x1f) & 0x900U) != 0)) &&
         ((0x19 < (byte)(cVar1 + 0x9fU) || ((1 << (cVar1 + 0x9fU & 0x1f) & 0x2480a80U) != 0))))) {
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
    if (cVar1 == '\0') {
      return param_1;
    }
  }
  return param_1 + 1;
}


uint FUN_180096010(char *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;

  cVar2 = *param_1;
  while ((cVar2 != '\0' && ((cVar2 != '%' || (param_1[1] == '%'))))) {
    pcVar1 = param_1 + 1;
    if (cVar2 != '%') {
      pcVar1 = param_1;
    }
    cVar2 = pcVar1[1];
    param_1 = pcVar1 + 1;
  }
  if (*param_1 != '%') {
    return param_2;
  }
  cVar2 = param_1[1];
  while ((pcVar1 = param_1 + 1, '/' < cVar2 && (cVar2 = *pcVar1, cVar2 < ':'))) {
    cVar2 = param_1[2];
    param_1 = pcVar1;
  }
  uVar4 = 0x7fffffff;
  if (cVar2 == '.') {
    lVar3 = 2;
    if (param_1[2] != '-') {
      lVar5 = 1;
      lVar7 = 1;
    }
    else {
      lVar5 = 2;
      lVar7 = 2;
      lVar3 = 3;
    }
    if (pcVar1[lVar7] != '+') {
      lVar3 = lVar5;
    }
    pcVar1 = pcVar1 + lVar3;
    if (*pcVar1 < '0') {
      uVar4 = 0;
    }
    else {
      uVar6 = 0;
      do {
        cVar2 = *pcVar1;
        if ('9' < cVar2) break;
        pcVar1 = pcVar1 + 1;
        uVar6 = (int)cVar2 + (uVar6 * 5 + -0x18) * 2;
      } while ('/' < *pcVar1);
      uVar4 = -uVar6;
      if (param_1[2] != '-') {
        uVar4 = uVar6;
      }
      if (99 < uVar4) {
        uVar4 = param_2;
      }
    }
  }
  if ((*pcVar1 + 0xbbU & 0xdf) == 0) {
    uVar4 = 0xffffffff;
  }
  if (((*pcVar1 + 0xb9U & 0xdf) == 0) && (uVar4 == 0x7fffffff)) {
    uVar4 = 0xffffffff;
  }
  if (uVar4 == 0x7fffffff) {
    uVar4 = param_2;
  }
  return uVar4;
}


void FUN_180096130(int param_1)

{
  longlong lVar1;
  char *pcVar2;

  lVar1 = DAT_180115c10;
  if ((param_1 == 0) || (*(int *)(DAT_180115c10 + 0x2384) != param_1)) {
    return;
  }
  *(int *)(DAT_180115c10 + 0x23e8) = *(int *)(DAT_180115c10 + 0x2384);
  if ((*(uint *)(lVar1 + 0x2380) & 0x200) != 0) {
    FUN_18006dac0((int *)(lVar1 + 0x23f0),0);
    return;
  }
  if (*(longlong *)(lVar1 + 0x23a0) == 0) {
    FID_conflict__assert
              (L"state->TextA.Data != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1158);
  }
  pcVar2 = (char *)FUN_18004b690((int *)(lVar1 + 0x2398),*(int *)(lVar1 + 0x2388));
  if (*pcVar2 != '\0') {
    FID_conflict__assert
              (L"state->TextA[state->TextLen] == 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1159);
  }
  FUN_18006dac0((int *)(lVar1 + 0x23f0),*(int *)(lVar1 + 0x2388) + 1);
  FUN_1800d1c20(*(undefined8 **)(lVar1 + 0x23f8),*(undefined8 **)(lVar1 + 0x23a0),
                (longlong)(*(int *)(lVar1 + 0x2388) + 1));
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_180096220(byte *param_1,float *param_2,float *param_3,undefined8 param_4,
                       ulonglong *param_5,float param_6,float *param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined8 uVar23;
  size_t sVar24;
  longlong lVar25;
  float *pfVar26;
  ulonglong uVar27;
  char *pcVar28;
  byte *pbVar29;
  float fVar30;
  char *pcVar31;
  wchar_t *pwVar32;
  uint7 uVar34;
  wchar_t *pwVar33;
  undefined7 uVar35;
  int iVar36;
  float **ppfVar37;
  float *pfVar38;
  float *pfVar39;
  uint uVar40;
  float *pfVar41;
  float *pfVar42;
  ulonglong uVar43;
  float *pfVar44;
  uint uVar45;
  float *pfVar46;
  float *pfVar47;
  byte *pbVar48;
  byte *pbVar49;
  bool bVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auStackY_318 [32];
  byte local_2c8;
  byte local_2c7;
  byte local_2c5;
  char local_2c3;
  float local_2ac;
  char local_2a8;
  char local_2a7;
  char local_2a6;
  char local_2a5;
  char local_2a4;
  char local_2a3;
  char local_2a2;
  float local_2a0;
  float *local_298;
  undefined8 local_290;
  float *local_288;
  undefined8 local_280;
  char local_278;
  float local_274;
  float *local_270;
  float local_268;
  float local_264;
  uint local_260;
  float *local_258;
  float local_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  undefined8 local_240;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  undefined8 local_220;
  undefined8 local_218;
  uint local_208;
  float local_204;
  undefined8 local_200;
  float local_1f8;
  float local_1f4;
  float *local_1f0;
  float *local_1e8;
  float *local_1d8;
  undefined4 local_1d0;
  float local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  float *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float *local_188;
  byte *local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float *local_f8;
  ulonglong local_f0;

  pfVar47 = DAT_180115c10;
  local_f0 = DAT_180112300 ^ (ulonglong)auStackY_318;
  local_274 = (float)param_4;
  local_298 = param_7;
  local_280 = (byte *)param_8;
  uVar43 = *(ulonglong *)(DAT_180115c10 + 0x4ea);
  *(undefined1 *)(uVar43 + 0xce) = 1;
  pfVar47 = *(float **)(pfVar47 + 0x4ea);
  if (*(char *)((longlong)pfVar47 + 0xd1) != '\0') goto LAB_1800966b3;
  local_288 = param_3;
  local_188 = param_2;
  local_180 = param_1;
  if ((param_3 == (float *)0x0) || ((int)local_274 < 0)) {
    FID_conflict__assert
              (L"buf != 0 && buf_size >= 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x116d);
  }
  if (((uint)param_6 & 0x4080000) == 0x4080000) {
    FID_conflict__assert
              (L"!((flags & ImGuiInputTextFlags_CallbackHistory) && (flags & ImGuiInputTextFlags_Multiline))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x116e);
  }
  if (((uint)param_6 & 0x40020) == 0x40020) {
    FID_conflict__assert
              (L"!((flags & ImGuiInputTextFlags_CallbackCompletion) && (flags & ImGuiInputTextFlags_AllowTabInput))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x116f);
  }
  if (((uint)param_6 & 0x4020000) == 0x4020000) {
    FID_conflict__assert
              (L"!((flags & ImGuiInputTextFlags_ElideLeft) && (flags & ImGuiInputTextFlags_Multiline))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1170);
  }
  pfVar39 = DAT_180115c10;
  local_240 = DAT_180115c10;
  uVar40 = (uint)param_6 & 0x4000000;
  if (uVar40 != 0) {
    FUN_18004ff00();
  }
  fVar15 = (float)FUN_180056b80((longlong *)pfVar47,param_1,0);
  pfVar44 = (float *)CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  FUN_180050b60((undefined8 *)&local_190,param_1,(byte *)0x0,'\x01',-1.0);
  if (uVar40 == 0) {
    fVar57 = local_18c;
  }
  else {
    fVar57 = pfVar39[0x430] * 8.0;
  }
  fVar58 = pfVar39[0x31b];
  fVar51 = (float)FUN_1800508d0();
  FUN_1800507c0((ulonglong *)&local_198,*param_5,fVar51,fVar58 + fVar58 + fVar57);
  fVar57 = local_198;
  local_204 = local_194;
  fVar58 = 0.0;
  if (local_190 <= 0.0) {
    fVar51 = 0.0;
  }
  else {
    fVar51 = local_190 + pfVar39[800];
  }
  local_250 = pfVar47[0x46];
  fStack_244 = local_194 + pfVar47[0x47];
  fStack_24c = pfVar47[0x47];
  local_248 = local_250 + local_198;
  local_170 = local_250 + fVar51 + local_198;
  local_16c = fStack_24c + local_194;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_200 = (char *)0x1;
  local_290 = (float *)CONCAT44(local_16c - fStack_24c,local_170 - local_250);
  local_178 = local_250;
  local_174 = fStack_24c;
  if (uVar40 != 0) {
    fVar51 = pfVar47[0x46];
    fVar30 = pfVar47[0x47];
    FUN_18005aca0((float *)&local_290,pfVar39[0x31b]);
    uVar43 = 0x100000;
    pfVar44 = &local_250;
    uVar23 = FUN_18005a670(&local_178,(wchar_t *)(ulonglong)(uint)fVar15,pfVar44,0x100000);
    if ((char)uVar23 != '\0') {
      local_168 = *(undefined8 *)(pfVar39 + 0x762);
      uStack_160 = *(undefined8 *)(pfVar39 + 0x764);
      local_158 = *(undefined8 *)(pfVar39 + 0x766);
      uStack_150 = *(undefined8 *)(pfVar39 + 0x768);
      local_148 = *(undefined8 *)(pfVar39 + 0x76a);
      uStack_140 = *(undefined8 *)(pfVar39 + 0x76c);
      local_138 = *(undefined8 *)(pfVar39 + 0x76e);
      uStack_130 = *(undefined8 *)(pfVar39 + 0x770);
      local_128 = *(undefined8 *)(pfVar39 + 0x772);
      uStack_120 = *(undefined8 *)(pfVar39 + 0x774);
      pfVar47[0x46] = fVar51;
      pfVar47[0x47] = fVar30;
      fVar51 = pfVar39[0x7c4];
      if (((fVar51 == fVar15) && (((uint)pfVar39[0x7c7] & 8) != 0)) && (((uint)param_6 & 0x20) != 0)
         ) {
        pfVar39[0x7c4] = 0.0;
        fVar51 = 0.0;
      }
      if (pfVar39[0x507] == fVar15) {
        pfVar39[0x7c4] = 0.0;
      }
      FUN_180062b60(3,(undefined8 *)(pfVar39 + 0x365));
      FUN_180062d80(7,pfVar39[0x31c],pfVar44,uVar43);
      FUN_180062d80(8,pfVar39[0x31d],pfVar44,uVar43);
      local_290 = (float *)0x0;
      FUN_180062c90(2,(float *)&local_290,pfVar44,uVar43);
      local_290 = (float *)CONCAT44(fStack_244 - fStack_24c,local_248 - local_250);
      pfVar44 = (float *)0x1;
      cVar9 = FUN_18004f200(local_180,(uint)fVar15,(float *)&local_290,1,4);
      pfVar39[0x7c4] = fVar51;
      FUN_180062450(3);
      FUN_180062370(1);
      if (cVar9 != '\0') {
        local_270 = *(float **)(pfVar39 + 0x4ea);
        *(ushort *)((longlong)local_270 + 0x176) =
             *(ushort *)((longlong)local_270 + 0x176) |
             (ushort)(1 << ((uint)local_270[0x5c] & 0x1f));
        local_270[0x46] = pfVar39[0x31a] + local_270[0x46];
        local_270[0x47] = pfVar39[0x31b] + local_270[0x47];
        fVar57 = fVar57 - local_270[0x30];
        fVar51 = local_204;
        goto LAB_1800967aa;
      }
      FUN_1800537a0();
    }
    uVar43 = FUN_180054450();
LAB_1800966b3:
    return uVar43 & 0xffffffffffffff00;
  }
  local_270 = pfVar47;
  FUN_18005aca0((float *)&local_290,pfVar39[0x31b]);
  fVar51 = local_194;
  if (((uint)param_6 >> 0x1b & 1) == 0) {
    pfVar44 = (float *)0x100000;
    uVar43 = FUN_18005a670(&local_178,(wchar_t *)(ulonglong)(uint)fVar15,&local_250,0x100000);
    if ((char)uVar43 == '\0') goto LAB_1800966b3;
  }
LAB_1800967aa:
  pfVar42 = (float *)(ulonglong)((uint)pfVar39[0x763] | 0x8000);
  bVar10 = FUN_18005a9d0(&local_250,(int)fVar15,pfVar42,(ulonglong)pfVar44);
  local_2ac = (float)(uint)bVar10;
  if (bVar10) {
    FUN_180067540(1);
    fVar30 = 0.0;
    if (*(char *)((longlong)pfVar39 + 0x1ef9) == '\0') {
      fVar30 = local_2ac;
    }
    bVar10 = SUB41(fVar30,0);
    local_2ac = fVar30;
  }
  if ((fVar15 == 0.0) || (DAT_180115c10[0x8e1] != fVar15)) {
    pfVar41 = (float *)0x0;
    pcVar28 = (char *)0x6b;
    pfVar38 = (float *)0x8;
    local_258 = (float *)0x18;
    local_f8 = (float *)0x30;
    local_220 = (float *)0x28;
    local_1e8 = (float *)0x6c;
    local_1f0 = (float *)0x70;
  }
  else {
    pfVar41 = DAT_180115c10 + 0x8dc;
    pcVar28 = (char *)((longlong)DAT_180115c10 + 0x23db);
    pfVar38 = DAT_180115c10 + 0x8de;
    local_258 = DAT_180115c10 + 0x8e2;
    local_f8 = DAT_180115c10 + 0x8e8;
    local_220 = DAT_180115c10 + 0x8e6;
    local_1e8 = DAT_180115c10 + 0x8f7;
    local_1f0 = DAT_180115c10 + 0x8f8;
  }
  local_2a0 = 7.17465e-43;
  fVar30 = (float)((uint)param_6 | 0x200);
  if (((uint)pfVar39[0x763] & 0x800) == 0) {
    fVar30 = param_6;
  }
  pcVar31 = (char *)(ulonglong)(uint)fVar30;
  uVar16 = (uint)fVar30 & 0x200;
  local_260 = (uint)fVar30 & 0x400;
  local_208 = (uint)fVar30 & 0x400000;
  local_290 = pfVar41;
  if ((local_208 != 0) && (local_298 == (float *)0x0)) {
    pfVar42 = (float *)0x11c9;
    pwVar32 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
    ;
    FID_conflict__assert
              (L"callback != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x11c9);
    pcVar31 = (char *)pwVar32;
  }
  pwVar32 = (wchar_t *)(ulonglong)(uint)fVar15;
  if (((pfVar39[0x507] == fVar15) || (pfVar39[0x7c4] != fVar15)) ||
     ((((uint)pfVar39[0x7c7] & 1) == 0 && (pfVar39[2000] != 2.8026e-45)))) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if ((bVar10 == false) || (bVar10 = true, *(char *)(pfVar39 + 0x2c6) == '\0')) {
    bVar10 = false;
  }
  if (((uVar40 == 0) || (pfVar41 == (float *)0x0)) || (pfVar39[0x507] != 0.0)) {
LAB_180096969:
    bVar1 = 0;
    if ((uVar40 != 0) && (pfVar41 != (float *)0x0)) goto LAB_180096975;
LAB_1800969a7:
    uVar43 = (ulonglong)pfVar42 & 0xffffffffffffff00;
    bVar7 = false;
    if (uVar40 == 0) {
      fVar17 = 3.4028235e+38;
      bVar7 = false;
    }
    else {
      fVar17 = local_270[0x27];
    }
  }
  else {
    pfVar42 = (float *)0x0;
    pcVar31 = "#SCROLLY";
    pwVar32 = (wchar_t *)local_270;
    fVar17 = (float)FUN_180056b80((longlong *)local_270,(byte *)"#SCROLLY",0);
    if (pfVar39[0x513] != fVar17) goto LAB_180096969;
    bVar1 = 1;
LAB_180096975:
    pfVar42 = (float *)0x0;
    pcVar31 = "#SCROLLY";
    pwVar32 = (wchar_t *)local_270;
    fVar17 = (float)FUN_180056b80((longlong *)local_270,(byte *)"#SCROLLY",0);
    if (pfVar39[0x507] != fVar17) goto LAB_1800969a7;
    uVar43 = CONCAT71((int7)((ulonglong)pfVar42 >> 8),1);
    bVar7 = true;
    fVar17 = local_270[0x27];
  }
  uVar34 = (uint7)((ulonglong)pcVar31 >> 8);
  if ((pfVar41 == (float *)0x0) || (*pcVar28 == '\0')) {
    pfVar42 = (float *)((ulonglong)uVar34 << 8);
    if (pfVar41 != (float *)0x0) goto LAB_1800969e8;
LAB_180096a00:
    bVar6 = false;
  }
  else {
    pfVar42 = (float *)CONCAT71(uVar34,1);
LAB_1800969e8:
    pwVar32 = (wchar_t *)(ulonglong)*(byte *)(*(longlong *)pfVar38 + 0x17);
    if ((bool)*(byte *)(*(longlong *)pfVar38 + 0x17) == (uVar40 == 0)) goto LAB_180096a00;
    bVar6 = true;
  }
  if (bVar10 || (bool)(bVar1 | bVar14)) {
    bVar13 = true;
LAB_180096a20:
    bVar8 = true;
  }
  else {
    bVar13 = false;
    if ((char)uVar43 != '\0') goto LAB_180096a20;
    bVar8 = false;
  }
  if ((char)pfVar42 == '\0') {
    if (((bVar8) && (pfVar39[0x507] != fVar15)) || (bVar50 = false, bVar6)) {
      pfVar41 = pfVar39 + 0x8dc;
      pfVar39[0x8f5] = -0.3;
      pfVar42 = DAT_180115c10;
      local_290 = pfVar41;
      if ((pfVar39[0x8e1] != 0.0) && (DAT_180115c10[0x8e1] == pfVar39[0x8e1])) {
        DAT_180115c10[0x8fa] = DAT_180115c10[0x8e1];
        if (((uint)pfVar42[0x8e0] & 0x200) == 0) {
          if (*(longlong *)(pfVar42 + 0x8e8) == 0) {
            FID_conflict__assert
                      (L"state->TextA.Data != 0",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                       ,0x1158);
          }
          pcVar28 = (char *)FUN_18004b690((int *)(pfVar42 + 0x8e6),(int)pfVar42[0x8e2]);
          if (*pcVar28 != '\0') {
            FID_conflict__assert
                      (L"state->TextA[state->TextLen] == 0",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                       ,0x1159);
          }
          FUN_18006dac0((int *)(pfVar42 + 0x8fc),(int)pfVar42[0x8e2] + 1);
          FUN_1800d1c20(*(undefined8 **)(pfVar42 + 0x8fe),*(undefined8 **)(pfVar42 + 0x8e8),
                        (longlong)((int)pfVar42[0x8e2] + 1));
        }
        else {
          FUN_18006dac0((int *)(pfVar42 + 0x8fc),0);
        }
      }
      pfVar42 = local_288;
      sVar24 = strlen((char *)local_288);
      fVar52 = (float)sVar24;
      iVar36 = (int)fVar52 + 1;
      if ((int)local_274 < iVar36) {
        FID_conflict__assert
                  (L"buf_len + 1 <= buf_size && \"Is your input buffer properly zero-terminated?\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x11f2);
      }
      FUN_18006dac0((int *)(pfVar39 + 0x8ea),iVar36);
      FUN_1800d1c20(*(undefined8 **)(pfVar39 + 0x8ec),(undefined8 *)pfVar42,(longlong)iVar36);
      if (((pfVar39[0x8e1] != fVar15) || (bVar6)) ||
         ((pfVar39[0x8e2] != fVar52 ||
          ((*(char **)(pfVar39 + 0x8e8) == (char *)0x0 ||
           (iVar36 = strncmp(*(char **)(pfVar39 + 0x8e8),(char *)pfVar42,sVar24 & 0xffffffff),
           iVar36 != 0)))))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pfVar38 = pfVar39 + 0x8e2;
      pfVar39[0x8e1] = fVar15;
      *pfVar38 = fVar52;
      if (uVar16 == 0) {
        FUN_18006dac0((int *)(pfVar39 + 0x8e6),(int)local_274 + 1);
        FUN_1800d1c20(*(undefined8 **)(pfVar39 + 0x8e8),(undefined8 *)pfVar42,
                      (longlong)((int)*pfVar38 + 1));
      }
      pfVar39[0x8f3] = 0.0;
      pfVar39[0x8f4] = 0.0;
      if (((uint)fVar30 >> 0x11 & 1) != 0) {
        fVar52 = pfVar39[0x31a];
        pfVar44 = (float *)0x0;
        pfVar42 = (float *)FUN_180050b60(&local_f8,(byte *)pfVar42,(byte *)0x0,'\0',-1.0);
        fVar59 = (*pfVar42 - local_198) + fVar52 + fVar52;
        fVar52 = 0.0;
        if (0.0 <= fVar59) {
          fVar52 = fVar59;
        }
        pfVar39[0x8f3] = fVar52 + pfVar39[0x8f3];
      }
      uVar43 = (ulonglong)(uint)fVar30;
      pwVar32 = (wchar_t *)0x0;
      pfVar42 = *(float **)(pfVar39 + 0x8de);
      if (bVar6) {
        fVar52 = *pfVar38;
        if ((int)*pfVar42 < (int)*pfVar38) {
          fVar52 = *pfVar42;
        }
        *pfVar42 = fVar52;
        fVar52 = *(float *)(*(longlong *)(pfVar39 + 0x8de) + 4);
        fVar59 = *pfVar38;
        if ((int)fVar52 < (int)*pfVar38) {
          fVar59 = fVar52;
        }
        *(float *)(*(longlong *)(pfVar39 + 0x8de) + 4) = fVar59;
        pwVar32 = *(wchar_t **)(pfVar39 + 0x8de);
        fVar52 = *pfVar38;
        if ((int)*(float *)((longlong)pwVar32 + 8) < (int)*pfVar38) {
          fVar52 = *(float *)((longlong)pwVar32 + 8);
        }
        pfVar42 = (float *)(ulonglong)(uint)fVar52;
        *(float *)((longlong)pwVar32 + 8) = fVar52;
      }
      else {
        pfVar42[0x28e] = 9.091714e-39;
        pfVar42[0x28f] = 0.0;
        pfVar42[0x290] = 1.3999e-42;
        pfVar42[1] = 0.0;
        pfVar42[2] = 0.0;
        *pfVar42 = 0.0;
        *(undefined2 *)((longlong)pfVar42 + 0x15) = 1;
        pfVar42[7] = 0.0;
        *(undefined1 *)(pfVar42 + 5) = 0;
        *(bool *)((longlong)pfVar42 + 0x17) = uVar40 == 0;
        *(undefined1 *)(pfVar42 + 3) = 0;
        pfVar42[4] = 0.0;
      }
      bVar50 = false;
      if (uVar40 == 0) {
        bVar50 = ((uint)fVar30 >> 0xc & 1) != 0;
        if ((bVar14) && ((!bVar6 || (((uint)pfVar39[0x7c7] & 4) == 0)))) {
          bVar50 = true;
        }
        if (bVar10) {
          if (*(char *)(pfVar39 + 0x41) != '\0') {
            bVar50 = true;
          }
        }
      }
      if (((uint)fVar30 >> 0xb & 1) != 0) {
        *(undefined1 *)(*(longlong *)(pfVar39 + 0x8de) + 0xc) = 1;
      }
    }
  }
  else {
    sVar24 = strlen((char *)local_288);
    fVar52 = (float)sVar24;
    if ((int)local_274 < (int)fVar52 + 1) {
      FID_conflict__assert
                (L"new_len + 1 <= buf_size && \"Is your input buffer properly zero-terminated?\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x11dc);
    }
    pfVar42 = local_258;
    *pcVar28 = '\0';
    pfVar44 = local_288;
    FUN_180099750((longlong)pfVar41,*(longlong *)local_f8,(int)*local_258,(longlong)local_288,
                  (int)fVar52);
    FUN_18006dac0((int *)local_220,(int)local_274 + 1);
    *pfVar42 = fVar52;
    uVar43 = (ulonglong)((int)fVar52 + 1);
    FUN_1800d1c20(*(undefined8 **)local_f8,(undefined8 *)local_288,uVar43);
    *(float *)(*(longlong *)pfVar38 + 4) = *local_1e8;
    *(float *)(*(longlong *)pfVar38 + 8) = *local_1f0;
    **(undefined4 **)pfVar38 = (*(undefined4 **)pfVar38)[2];
    fVar52 = **(float **)pfVar38;
    fVar59 = *pfVar42;
    if ((int)fVar52 < (int)*pfVar42) {
      fVar59 = fVar52;
    }
    **(float **)pfVar38 = fVar59;
    fVar52 = *(float *)(*(longlong *)pfVar38 + 4);
    fVar59 = *pfVar42;
    if ((int)fVar52 < (int)*pfVar42) {
      fVar59 = fVar52;
    }
    *(float *)(*(longlong *)pfVar38 + 4) = fVar59;
    pwVar32 = *(wchar_t **)pfVar38;
    fVar52 = *pfVar42;
    if ((int)*(float *)((longlong)pwVar32 + 8) < (int)*pfVar42) {
      fVar52 = *(float *)((longlong)pwVar32 + 8);
    }
    pfVar42 = (float *)(ulonglong)(uint)fVar52;
    *(float *)((longlong)pwVar32 + 8) = fVar52;
    bVar50 = false;
  }
  cVar9 = *(char *)(pfVar39 + 0x18);
  local_2a7 = cVar9;
  if ((pfVar39[0x507] != fVar15) && (bVar13)) {
    if ((pfVar41 == (float *)0x0) || (pfVar41[5] != fVar15)) {
      uVar43 = 0x1222;
      FID_conflict__assert
                (L"state && state->ID == id",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x1222);
    }
    FUN_180066c00((uint)fVar15,pfVar47,uVar43,(ulonglong)pfVar44);
    FUN_1800672c0((int)fVar15,(wchar_t *)pfVar47,uVar43,(ulonglong)pfVar44);
    pfVar42 = (float *)0x0;
    FUN_180056440((longlong)pfVar47,0,uVar43);
    pwVar32 = (wchar_t *)pfVar47;
  }
  if (pfVar39[0x507] == fVar15) {
    local_118 = (float *)0x20200000201;
    uStack_110 = 0x2730000020d;
    local_108 = 0x20a;
    uStack_104 = 0x20b;
    uStack_100 = 0x207;
    uStack_fc = 0x208;
    ppfVar37 = &local_118;
    do {
      uVar43 = 0;
      pfVar42 = (float *)(ulonglong)(uint)fVar15;
      FUN_180067480(*(uint *)ppfVar37,(int)fVar15,0);
      ppfVar37 = (float **)((longlong)ppfVar37 + 4);
    } while (ppfVar37 != &local_f8);
    if (bVar10) {
      uVar43 = 0;
      pfVar42 = (float *)(ulonglong)(uint)fVar15;
      FUN_180067480(0x290,(int)fVar15,0);
    }
    fVar52 = pfVar39[0x74e];
    pwVar32 = (wchar_t *)(ulonglong)(uint)fVar52;
    pfVar39[0x74e] = (float)((uint)fVar52 | 3);
    if ((uVar40 != 0) || (((uint)fVar30 & 0x80000) != 0)) {
      pfVar39[0x74e] = (float)((uint)fVar52 | 0xf);
      FUN_180067480(0x203,(int)fVar15,0);
      uVar43 = 0;
      pfVar42 = (float *)(ulonglong)(uint)fVar15;
      pwVar32 = (wchar_t *)0x204;
      FUN_180067480(0x204,(int)fVar15,0);
      if (uVar40 != 0) {
        FUN_180067480(0x205,(int)fVar15,0);
        uVar43 = 0;
        pfVar42 = (float *)(ulonglong)(uint)fVar15;
        pwVar32 = (wchar_t *)0x206;
        FUN_180067480(0x206,(int)fVar15,0);
      }
    }
    if (cVar9 != '\0') {
      uVar43 = 0;
      pfVar42 = (float *)(ulonglong)(uint)fVar15;
      pwVar32 = (wchar_t *)0x4000;
      FUN_180067480(0x4000,(int)fVar15,0);
    }
    if ((uVar40 != 0) && (pfVar41 != (float *)0x0)) {
      pfVar41[0x18] = local_270[0x27];
    }
    if (uVar16 == 0) goto LAB_180096fad;
    if (pfVar41 != (float *)0x0) {
      pwVar32 = (wchar_t *)local_288;
      sVar24 = strlen((char *)local_288);
      pfVar41[6] = (float)sVar24;
      *(float **)(pfVar41 + 8) = local_288;
    }
  }
  else {
LAB_180096fad:
    if (pfVar41 != (float *)0x0) {
      if (uVar16 == 0) {
        *(undefined8 *)(pfVar41 + 8) = *(undefined8 *)(pfVar41 + 0xc);
      }
      else {
        *(float **)(pfVar41 + 8) = local_288;
      }
    }
  }
  if ((pfVar39[0x507] == fVar15) && (pfVar41 == (float *)0x0)) {
    FUN_180051730(pwVar32,pfVar42,uVar43,(ulonglong)pfVar44);
  }
  fVar52 = pfVar39[0x507];
  pwVar33 = (wchar_t *)(ulonglong)(uint)fVar52;
  uVar34 = (uint7)(uVar43 >> 8);
  if (fVar52 == fVar15) {
    if (((*(char *)(pfVar39 + 0x2c6) == '\0') || (bVar8)) || (bVar13)) goto LAB_18009702e;
    bVar10 = true;
    pfVar47 = (float *)CONCAT71(uVar34,1);
  }
  else if ((pfVar41 == (float *)0x0) || (!bVar7)) {
    pfVar47 = (float *)((ulonglong)uVar34 << 8);
    bVar10 = false;
  }
  else {
LAB_18009702e:
    bVar10 = false;
    pfVar47 = (float *)CONCAT71(uVar34,1);
  }
  local_2c5 = (byte)pfVar47;
  if (((pfVar41 == (float *)0x0) ||
      ((pwVar32 = *(wchar_t **)(pfVar41 + 2),
       *(float *)((longlong)pwVar32 + 4) == *(float *)((longlong)pwVar32 + 8) && (!bVar50)))) ||
     (local_2c5 == 0)) {
    bVar7 = false;
    bVar6 = false;
    if ((local_2c5 != 0) || (bVar6 = false, fVar52 == fVar15)) goto LAB_180097067;
LAB_180097091:
    local_2a2 = '\0';
  }
  else {
    bVar7 = true;
    bVar6 = true;
LAB_180097067:
    if ((uVar16 != 0) || (pfVar41 == (float *)0x0)) goto LAB_180097091;
    local_2a2 = '\x01';
  }
  if (local_188 == (float *)0x0) {
LAB_1800970b8:
    cVar11 = '\0';
  }
  else {
    if (local_2a2 == '\0') {
      pfVar42 = local_288;
    }
    else {
      pfVar42 = *(float **)(pfVar41 + 0xc);
    }
    if (*(char *)pfVar42 != '\0') goto LAB_1800970b8;
    cVar11 = '\x01';
  }
  pfVar42 = pfVar47;
  if ((local_260 != 0) && (cVar11 == '\0')) {
    FUN_18009abd0();
  }
  local_1f0 = (float *)CONCAT44(local_1f0._4_4_,0x200004);
  if (pfVar39[0x507] == fVar15) {
    if (pfVar41 == (float *)0x0) {
      FID_conflict__assert
                (L"state != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x1266);
    }
    *(undefined1 *)((longlong)pfVar41 + 0x6a) = 0;
    pfVar41[0x16] = local_274;
    pfVar41[4] = fVar30;
    bVar1 = *(byte *)(pfVar39 + 0x3c);
    pwVar32 = (wchar_t *)(ulonglong)bVar1;
    *(bool *)((longlong)pfVar39 + 0x1429) = bVar1 == 0;
    if (uVar40 == 0) {
      fVar52 = pfVar39[0x430] * 0.5;
    }
    else {
      fVar52 = pfVar39[0x3b] - local_270[0x47];
    }
    if (bVar50) {
      *(undefined4 *)(*(longlong *)(pfVar41 + 2) + 4) = 0;
      *(float *)(*(longlong *)(pfVar41 + 2) + 8) = pfVar41[6];
      pwVar32 = *(wchar_t **)(pfVar41 + 2);
      *(float *)pwVar32 = *(float *)((longlong)pwVar32 + 8);
      *(undefined1 *)(*(longlong *)(pfVar41 + 2) + 0x16) = 0;
      *(undefined1 *)((longlong)pfVar41 + 0x69) = 1;
      goto LAB_180097411;
    }
    fVar59 = ((pfVar39[0x3a] - local_250) - pfVar39[0x31a]) + pfVar41[0x17];
    if (((SUB41(local_2ac,0) == '\0') || (*(ushort *)((longlong)pfVar39 + 0xb22) < 2)) ||
       (*(char *)((longlong)pfVar39 + 0x105) != '\0')) {
      if ((*(char *)(pfVar39 + 0x2c6) == '\0') || (*(char *)((longlong)pfVar41 + 0x69) != '\0')) {
        if (((bVar1 != 0) && (*(char *)((longlong)pfVar41 + 0x69) == '\0')) &&
           ((pfVar39[0x35] != 0.0 || (pfVar39[0x36] != 0.0)))) {
          piVar5 = *(int **)(pfVar41 + 2);
          if (*(char *)((longlong)piVar5 + 0x17) != '\0') {
            FUN_18009b4b0((undefined4 *)&local_220,(longlong *)pfVar41,0);
            fVar52 = local_218._4_4_;
          }
          if (piVar5[1] == piVar5[2]) {
            piVar5[1] = *piVar5;
          }
          pwVar32 = (wchar_t *)pfVar41;
          iVar36 = FUN_18009fd70((longlong *)pfVar41,fVar59,fVar52);
          piVar5[2] = iVar36;
          *piVar5 = iVar36;
          *(undefined1 *)(pfVar41 + 0x1a) = 1;
          goto LAB_180097406;
        }
      }
      else if (SUB41(local_2ac,0) != '\0') {
        piVar5 = *(int **)(pfVar41 + 2);
        if (*(char *)((longlong)pfVar39 + 0x105) == '\0') {
          pwVar32 = (wchar_t *)pfVar41;
          FUN_1800a0280((longlong *)pfVar41,piVar5,fVar59,fVar52);
        }
        else {
          if (*(char *)((longlong)piVar5 + 0x17) != '\0') {
            FUN_18009b4b0((undefined4 *)&local_220,(longlong *)pfVar41,0);
            fVar52 = local_218._4_4_;
          }
          if (piVar5[1] == piVar5[2]) {
            piVar5[1] = *piVar5;
          }
          pwVar32 = (wchar_t *)pfVar41;
          iVar36 = FUN_18009fd70((longlong *)pfVar41,fVar59,fVar52);
          piVar5[2] = iVar36;
          *piVar5 = iVar36;
        }
        goto LAB_180097406;
      }
    }
    else {
      FUN_1800a0280((longlong *)pfVar41,*(int **)(pfVar41 + 2),fVar59,fVar52);
      iVar36 = **(int **)(pfVar41 + 2);
      if ((*(short *)((longlong)pfVar39 + 0xb22) - 2U & 1) == 0) {
        if ((iVar36 == 0) || (cVar12 = FUN_18009b2a0((longlong)pfVar41,iVar36 + -1), cVar12 == '\n')
           ) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        pfVar42 = *(float **)(pfVar41 + 2);
        if ((pfVar42[1] != pfVar42[2]) || (!bVar13)) {
          FUN_1800a0720((longlong *)pfVar41,pfVar42,0x20000c);
          *(undefined1 *)(pfVar41 + 0x1a) = 1;
          pfVar41[0x19] = -0.3;
        }
        puVar3 = *(undefined4 **)(pfVar41 + 2);
        if (puVar3[1] == puVar3[2]) {
          puVar3[2] = *puVar3;
          puVar3[1] = *puVar3;
        }
        iVar36 = FUN_18009b750((longlong)pfVar41,**(int **)(pfVar41 + 2));
        **(int **)(pfVar41 + 2) = iVar36;
        (*(undefined4 **)(pfVar41 + 2))[2] = **(undefined4 **)(pfVar41 + 2);
        pwVar32 = *(wchar_t **)(pfVar41 + 2);
        fVar52 = pfVar41[6];
        fVar59 = *(float *)((longlong)pwVar32 + 8);
        fVar56 = *(float *)((longlong)pwVar32 + 4);
        if (fVar56 != fVar59) {
          if ((int)fVar52 < (int)fVar56) {
            *(float *)((longlong)pwVar32 + 4) = fVar52;
            fVar56 = fVar52;
          }
          if ((int)fVar52 < (int)fVar59) {
            *(float *)((longlong)pwVar32 + 8) = fVar52;
            fVar59 = fVar52;
          }
          if (fVar56 == fVar59) {
            *(float *)pwVar32 = fVar56;
          }
        }
        if ((int)fVar52 < (int)*(float *)pwVar32) {
          *(float *)pwVar32 = fVar52;
        }
      }
      else {
        cVar12 = FUN_18009b2a0((longlong)pfVar41,iVar36);
        FUN_1800a0720((longlong *)pfVar41,*(float **)(pfVar41 + 2),0x200004);
        *(undefined1 *)(pfVar41 + 0x1a) = 1;
        pfVar41[0x19] = -0.3;
        FUN_1800a0720((longlong *)pfVar41,*(float **)(pfVar41 + 2),0x600005);
        *(undefined1 *)(pfVar41 + 0x1a) = 1;
        pfVar41[0x19] = -0.3;
        pwVar32 = (wchar_t *)pfVar41;
        FUN_1800a0720((longlong *)pfVar41,*(float **)(pfVar41 + 2),0x600001);
        *(undefined1 *)(pfVar41 + 0x1a) = 1;
        pfVar41[0x19] = -0.3;
        if ((cVar12 != '\n') && (uVar40 != 0)) {
          lVar25 = *(longlong *)(pfVar41 + 2);
          uVar19 = *(undefined4 *)(lVar25 + 4);
          *(undefined4 *)(lVar25 + 4) = *(undefined4 *)(lVar25 + 8);
          *(undefined4 *)(lVar25 + 8) = uVar19;
          pwVar32 = *(wchar_t **)(pfVar41 + 2);
          *(float *)pwVar32 = *(float *)((longlong)pwVar32 + 8);
        }
        *(undefined1 *)(pfVar41 + 0x1a) = 0;
      }
LAB_180097406:
      pfVar41[0x19] = -0.3;
    }
LAB_180097411:
    if ((*(char *)((longlong)pfVar41 + 0x69) != '\0') && (*(char *)(pfVar39 + 0x3c) == '\0')) {
      *(undefined1 *)((longlong)pfVar41 + 0x69) = 0;
    }
    if ((((uint)fVar30 & 0x20) == 0) || (uVar16 != 0)) {
      pfVar38 = local_298;
    }
    else {
      pwVar32 = (wchar_t *)0x200;
      uVar23 = FUN_180068330(0x200,1,(uint)fVar15,(ulonglong)pfVar44);
      pfVar38 = local_298;
      if ((char)uVar23 != '\0') {
        local_2ac = 1.26117e-44;
        pwVar32 = (wchar_t *)pfVar39;
        pfVar44 = local_298;
        bVar13 = FUN_1800994f0((longlong)pfVar39,(uint *)&local_2ac,(uint)fVar30,
                               (undefined *)local_298,local_280,'\0');
        if (bVar13) {
          pwVar32 = (wchar_t *)pfVar41;
          FUN_18009aac0((longlong)pfVar41,(uint)local_2ac);
        }
      }
    }
    uVar23 = local_280;
    pfVar42 = (float *)(ulonglong)uVar16;
    if (((*(char *)(pfVar39 + 0x41) == '\0') || (*(char *)((longlong)pfVar39 + 0x106) != '\0')) &&
       ((cVar9 == '\0' || (*(char *)(pfVar39 + 0x41) == '\0')))) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    pwVar33 = (wchar_t *)(ulonglong)(uint)pfVar39[0x2ee];
    if (0 < (int)pfVar39[0x2ee]) {
      if (!bVar13) {
        if (uVar16 == 0 && !bVar14) {
          iVar36 = 0;
          do {
            if ((iVar36 < 0) || ((int)pwVar33 <= iVar36)) {
              pfVar42 = (float *)0x833;
              FID_conflict__assert
                        (L"i >= 0 && i < Size",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                         ,0x833);
            }
            local_2ac = (float)(uint)*(ushort *)
                                      (*(longlong *)(pfVar39 + 0x2f0) + (longlong)iVar36 * 2);
            if (local_2ac != 1.26117e-44) {
              pfVar42 = (float *)(ulonglong)(uint)fVar30;
              pfVar44 = pfVar38;
              bVar14 = FUN_1800994f0((longlong)pfVar39,(uint *)&local_2ac,(uint)fVar30,
                                     (undefined *)pfVar38,uVar23,'\0');
              if (bVar14) {
                FUN_18009aac0((longlong)pfVar41,(uint)local_2ac);
              }
            }
            iVar36 = iVar36 + 1;
            pwVar33 = (wchar_t *)(ulonglong)(uint)pfVar39[0x2ee];
          } while (iVar36 < (int)pfVar39[0x2ee]);
          cVar9 = local_2a7;
          bVar6 = bVar7;
        }
      }
      pwVar33 = (wchar_t *)0x0;
      pwVar32 = (wchar_t *)(pfVar39 + 0x2ee);
      FUN_18006dd00((int *)pwVar32,0);
    }
  }
  bVar14 = false;
  if (((pfVar39[0x507] != fVar15) || (*(char *)(pfVar39 + 0x50a) != '\0')) || (bVar10)) {
    local_2c8 = 0;
  }
  else {
    if (pfVar41 == (float *)0x0) {
      FID_conflict__assert
                (L"state != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x12da);
    }
    iVar18 = (int)((fVar51 - pfVar39[0x31b]) / pfVar39[0x430]);
    bVar14 = true;
    iVar36 = 1;
    if (0 < iVar18) {
      iVar36 = iVar18;
    }
    local_258 = (float *)CONCAT44(local_258._4_4_,iVar36);
    *(int *)(*(longlong *)(pfVar41 + 2) + 0x10) = iVar36;
    cVar12 = *(char *)((longlong)pfVar39 + 0x105);
    local_2ac = (float)(-(uint)(cVar12 != '\0') & 0x400000);
    lVar25 = 0x106;
    if (cVar9 == '\0') {
      lVar25 = 0x104;
    }
    cVar2 = *(char *)((longlong)pfVar39 + lVar25);
    if (((cVar9 == '\0') || (*(char *)(pfVar39 + 0x41) == '\0')) ||
       ((*(char *)((longlong)pfVar39 + 0x107) != '\0' ||
        (*(char *)((longlong)pfVar39 + 0x106) != '\0')))) {
      local_2a8 = '\0';
      uVar19 = 0x200002;
      local_220 = (float *)CONCAT44(local_220._4_4_,0x200003);
    }
    else {
      local_2a8 = '\x01';
      uVar19 = 0x200006;
      local_220 = (float *)CONCAT44(local_220._4_4_,0x200007);
    }
    local_1e8 = (float *)CONCAT44(local_1e8._4_4_,uVar19);
    uVar23 = FUN_180068330(0x1239,1,(uint)fVar15,(ulonglong)pfVar44);
    if ((((char)uVar23 == '\0') &&
        (uVar23 = FUN_180068330(0x220a,1,(uint)fVar15,(ulonglong)pfVar44), (char)uVar23 == '\0')) ||
       ((uVar16 != 0 || local_260 != 0 ||
        ((uVar40 != 0 &&
         (*(int *)(*(longlong *)(pfVar41 + 2) + 4) == *(int *)(*(longlong *)(pfVar41 + 2) + 8)))))))
    {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    uVar23 = FUN_180068330(0x1224,0,(uint)fVar15,(ulonglong)pfVar44);
    if (((((char)uVar23 == '\0') &&
         (uVar23 = FUN_180068330(0x1209,0,(uint)fVar15,(ulonglong)pfVar44), (char)uVar23 == '\0'))
        || (local_260 != 0)) ||
       ((uVar40 != 0 &&
        (*(int *)(*(longlong *)(pfVar41 + 2) + 4) == *(int *)(*(longlong *)(pfVar41 + 2) + 8))))) {
      local_2a4 = '\0';
    }
    else {
      local_2a4 = '\x01';
    }
    uVar23 = FUN_180068330(0x1237,1,(uint)fVar15,(ulonglong)pfVar44);
    if ((((char)uVar23 == '\0') &&
        (uVar23 = FUN_180068330(0x2209,1,(uint)fVar15,(ulonglong)pfVar44), (char)uVar23 == '\0')) ||
       (uVar16 != 0)) {
      local_2a3 = '\0';
    }
    else {
      local_2a3 = '\x01';
    }
    uVar23 = FUN_180068330(0x123b,1,(uint)fVar15,(ulonglong)pfVar44);
    if (((char)uVar23 == '\0') || (uVar16 != 0 || ((uint)fVar30 & 0x10000) != 0)) {
      local_2a6 = '\0';
      local_f8 = (float *)CONCAT44(local_f8._4_4_,0x20000b);
    }
    else {
      local_2a6 = '\x01';
      local_f8 = (float *)CONCAT44(local_f8._4_4_,0x20000a);
    }
    uVar23 = FUN_180068330(0x123a,1,(uint)fVar15,(ulonglong)pfVar44);
    if ((((char)uVar23 == '\0') &&
        (uVar23 = FUN_180068330(0x323b,1,(uint)fVar15,(ulonglong)pfVar44), (char)uVar23 == '\0')) ||
       (local_2a5 = '\x01', uVar16 != 0 || ((uint)fVar30 & 0x10000) != 0)) {
      local_2a5 = '\0';
    }
    uVar23 = FUN_180068330(0x1222,0,(uint)fVar15,(ulonglong)pfVar44);
    local_278 = (char)uVar23;
    if ((((uint)pfVar39[2] & 2) == 0) || (((uint)pfVar39[3] & 1) == 0)) {
      bVar14 = false;
    }
    cVar9 = FUN_180059aa0(0x20d,1);
    if ((cVar9 == '\0') && (cVar9 = FUN_180059aa0(0x273,1), cVar9 == '\0')) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar14) {
      uVar20 = 0x27d;
      if (*(char *)(pfVar39 + 0x16) != '\0') {
        uVar20 = 0x27b;
      }
      cVar9 = FUN_180059aa0(uVar20,0);
      if ((cVar9 == '\0') && (cVar9 = FUN_180059aa0(0x27c,0), cVar9 == '\0')) goto LAB_180097850;
      bVar8 = true;
    }
    else {
LAB_180097850:
      bVar8 = false;
    }
    pfVar42 = (float *)(ulonglong)(uint)fVar15;
    uVar23 = FUN_180068330(0x20e,1,(uint)fVar15,(ulonglong)pfVar44);
    if ((char)uVar23 == '\0') {
      if (bVar14) {
        uVar20 = 0x27b;
        if (*(char *)(pfVar39 + 0x16) != '\0') {
          uVar20 = 0x27d;
        }
        pfVar42 = (float *)(ulonglong)(uint)fVar15;
        uVar23 = FUN_180068330(uVar20,1,(uint)fVar15,(ulonglong)pfVar44);
        if ((char)uVar23 != '\0') goto LAB_180097894;
      }
      bVar14 = false;
    }
    else {
LAB_180097894:
      bVar14 = true;
    }
    cVar9 = FUN_180059aa0(0x201,1);
    if (cVar9 == '\0') {
      cVar9 = FUN_180059aa0(0x202,1);
      if (cVar9 != '\0') {
        if (local_2a8 == '\0') {
          uVar20 = 0x200001;
          if (cVar2 != '\0') {
            uVar20 = 0x20000d;
          }
          pfVar42 = (float *)(ulonglong)((uint)local_2ac | uVar20);
        }
        else {
          pfVar42 = (float *)(ulonglong)((uint)local_2ac | 0x200005);
        }
        goto LAB_1800978cb;
      }
      cVar9 = FUN_180059aa0(0x203,1);
      if ((cVar9 != '\0') && (uVar40 != 0)) {
        if (*(char *)(pfVar39 + 0x41) == '\0') {
          pfVar42 = (float *)(ulonglong)((uint)local_1e8 | (uint)local_2ac);
          goto LAB_1800978cb;
        }
        fVar52 = local_270[0x27] - pfVar39[0x430];
        if (fVar52 <= 0.0) {
          fVar52 = 0.0;
        }
        FUN_180067c30((longlong)local_270,fVar52);
        local_2c8 = 0;
        goto LAB_1800981a0;
      }
      cVar9 = FUN_180059aa0(0x204,1);
      if ((cVar9 != '\0') && (uVar40 != 0)) {
        if (*(char *)(pfVar39 + 0x41) == '\0') {
          pfVar42 = (float *)(ulonglong)((uint)(float)local_220 | (uint)local_2ac);
          goto LAB_1800978cb;
        }
        fVar59 = (float)FUN_180057670();
        fVar52 = local_270[0x27] + pfVar39[0x430];
        if (fVar59 <= local_270[0x27] + pfVar39[0x430]) {
          fVar52 = fVar59;
        }
        FUN_180067c30((longlong)local_270,fVar52);
        local_2c8 = 0;
        goto LAB_1800981a0;
      }
      cVar9 = FUN_180059aa0(0x205,1);
      if ((cVar9 != '\0') && (uVar40 != 0)) {
        pfVar42 = (float *)0x20000e;
        if (cVar12 != '\0') {
          pfVar42 = (float *)0x60000e;
        }
        FUN_1800a0720((longlong *)pfVar41,*(float **)(pfVar41 + 2),(uint)pfVar42);
        *(undefined1 *)(pfVar41 + 0x1a) = 1;
        pfVar41[0x19] = -0.3;
        fVar17 = fVar17 - (float)(int)(uint)local_258 * pfVar39[0x430];
        local_2c8 = 0;
        goto LAB_1800981a0;
      }
      cVar9 = FUN_180059aa0(0x206,1);
      if ((cVar9 != '\0') && (uVar40 != 0)) {
        pfVar42 = (float *)0x20000f;
        if (cVar12 != '\0') {
          pfVar42 = (float *)0x60000f;
        }
        FUN_1800a0720((longlong *)pfVar41,*(float **)(pfVar41 + 2),(uint)pfVar42);
        *(undefined1 *)(pfVar41 + 0x1a) = 1;
        pfVar41[0x19] = -0.3;
        fVar17 = fVar17 + (float)(int)(uint)local_258 * pfVar39[0x430];
        local_2c8 = 0;
        goto LAB_1800981a0;
      }
      cVar9 = FUN_180059aa0(0x207,1);
      if (cVar9 != '\0') {
        if (*(char *)(pfVar39 + 0x41) == '\0') {
          uVar20 = 0x200004;
          if (cVar12 != '\0') {
            uVar20 = 0x600004;
          }
          pfVar42 = (float *)(ulonglong)uVar20;
        }
        else {
          uVar20 = 0x200006;
          if (cVar12 != '\0') {
            uVar20 = 0x600006;
          }
          pfVar42 = (float *)(ulonglong)uVar20;
        }
        goto LAB_1800978cb;
      }
      cVar9 = FUN_180059aa0(0x208,1);
      if (cVar9 != '\0') {
        if (*(char *)(pfVar39 + 0x41) == '\0') {
          uVar20 = 0x200005;
          if (cVar12 != '\0') {
            uVar20 = 0x600005;
          }
          pfVar42 = (float *)(ulonglong)uVar20;
        }
        else {
          uVar20 = 0x200007;
          if (cVar12 != '\0') {
            uVar20 = 0x600007;
          }
          pfVar42 = (float *)(ulonglong)uVar20;
        }
        goto LAB_1800978cb;
      }
      cVar9 = FUN_180059aa0(0x20a,1);
      if ((cVar9 != '\0') && (uVar16 == 0 && !bVar7)) {
        pfVar42 = *(float **)(pfVar41 + 2);
        if ((pfVar42[1] == pfVar42[2]) && (cVar2 != '\0')) {
          FUN_1800a0720((longlong *)pfVar41,pfVar42,0x60000d);
          *(undefined1 *)(pfVar41 + 0x1a) = 1;
          pfVar41[0x19] = -0.3;
        }
        pfVar42 = (float *)0x200008;
        if (cVar12 != '\0') {
          pfVar42 = (float *)0x600008;
        }
        goto LAB_1800978cb;
      }
      cVar9 = FUN_180059aa0(0x20b,1);
      if ((cVar9 != '\0') && (uVar16 == 0)) {
        pfVar42 = *(float **)(pfVar41 + 2);
        if (pfVar42[1] == pfVar42[2]) {
          if (cVar2 == '\0') {
            if ((((local_2a7 == '\0') || (*(char *)(pfVar39 + 0x41) == '\0')) ||
                (*(char *)((longlong)pfVar39 + 0x106) != '\0')) ||
               (*(char *)((longlong)pfVar39 + 0x107) != '\0')) goto LAB_180097c19;
            uVar20 = 0x600004;
          }
          else {
            uVar20 = 0x60000c;
          }
          FUN_1800a0720((longlong *)pfVar41,pfVar42,uVar20);
          pfVar41[0x19] = -0.3;
          *(undefined1 *)(pfVar41 + 0x1a) = 1;
        }
LAB_180097c19:
        pfVar42 = (float *)0x200009;
        if (cVar12 != '\0') {
          pfVar42 = (float *)0x600009;
        }
        goto LAB_1800978cb;
      }
      if (bVar13 || bVar8) {
        if ((uVar40 == 0) || (bVar8)) {
LAB_180098101:
          local_2c8 = 1;
          if ((*(char *)((longlong)pfVar39 + 99) == '\0') || (uVar40 != 0)) {
            bVar10 = true;
          }
          else {
            *(undefined4 *)(*(longlong *)(pfVar41 + 2) + 4) = 0;
            *(float *)(*(longlong *)(pfVar41 + 2) + 8) = pfVar41[6];
            **(undefined4 **)(pfVar41 + 2) = (*(undefined4 **)(pfVar41 + 2))[2];
            *(undefined1 *)(*(longlong *)(pfVar41 + 2) + 0x16) = 0;
          }
          goto LAB_1800981a0;
        }
        if (((uint)fVar30 >> 8 & 1) == 0) {
          if (*(char *)(pfVar39 + 0x41) != '\0') goto LAB_180098101;
        }
        else if (*(char *)(pfVar39 + 0x41) == '\0') goto LAB_180098101;
        if (uVar16 == 0) {
          local_f8 = (float *)CONCAT44(local_f8._4_4_,10);
          pfVar42 = (float *)(ulonglong)(uint)fVar30;
          pfVar44 = local_298;
          bVar14 = FUN_1800994f0((longlong)pfVar39,(uint *)&local_f8,(uint)fVar30,
                                 (undefined *)local_298,local_280,'\0');
          if (bVar14) {
            FUN_18009aac0((longlong)pfVar41,(uint)local_f8);
            local_2c8 = 0;
            goto LAB_1800981a0;
          }
        }
        goto LAB_1800978e2;
      }
      if (!bVar14) {
        if (local_2a6 == '\0' && local_2a5 == '\0') {
          if (local_278 == '\0') {
            if (!bVar7 && local_2a4 == '\0') {
              if ((local_2a3 == '\0') || (pbVar49 = FUN_180056780(), pbVar49 == (byte *)0x0))
              goto LAB_1800978e2;
              sVar24 = strlen((char *)pbVar49);
              local_220 = (float *)0x0;
              uVar43 = 0;
              local_218 = (float *)0x0;
              iVar36 = (int)sVar24 + 1;
              if (0 < iVar36) {
                local_218 = (float *)FUN_18005b560((longlong)iVar36);
                local_220 = (float *)CONCAT44(iVar36,(float)local_220);
              }
              pfVar38 = local_298;
              pfVar26 = local_218;
              pfVar46 = local_218;
              if (*pbVar49 != 0) {
                do {
                  iVar36 = FUN_180058410((uint *)&local_258,pbVar49,(byte *)0x0);
                  pbVar49 = pbVar49 + iVar36;
                  pfVar42 = (float *)(ulonglong)(uint)fVar30;
                  pfVar44 = pfVar38;
                  bVar14 = FUN_1800994f0((longlong)pfVar39,(uint *)&local_258,(uint)fVar30,
                                         (undefined *)pfVar38,local_280,'\x01');
                  if (bVar14) {
                    FUN_1800585a0((byte *)&local_f8,(uint)local_258);
                    sVar24 = strlen((char *)&local_f8);
                    FUN_18006dac0((int *)&local_220,(int)uVar43 + (int)sVar24);
                    pfVar46 = local_218;
                    pfVar42 = (float *)(longlong)(int)sVar24;
                    uVar43 = (ulonglong)(int)(float)local_220;
                    FUN_1800d1c20((undefined8 *)((uVar43 - (longlong)pfVar42) + (longlong)local_218)
                                  ,&local_f8,(ulonglong)pfVar42);
                  }
                  pfVar41 = local_290;
                } while (*pbVar49 != 0);
                iVar36 = (int)uVar43;
                pfVar26 = pfVar46;
                if (0 < iVar36) {
                  if (iVar36 == local_220._4_4_) {
                    if (local_220._4_4_ == 0) {
                      uVar20 = 8;
                    }
                    else {
                      uVar20 = local_220._4_4_ / 2 + local_220._4_4_;
                    }
                    uVar22 = iVar36 + 1U;
                    if ((int)(iVar36 + 1U) < (int)uVar20) {
                      uVar22 = uVar20;
                    }
                    if (local_220._4_4_ < (int)uVar22) {
                      pfVar26 = (float *)FUN_18005b560((longlong)(int)uVar22);
                      if (pfVar46 != (float *)0x0) {
                        FUN_1800d1c20((undefined8 *)pfVar26,(undefined8 *)pfVar46,(longlong)iVar36);
                        FUN_18005b5c0((longlong)pfVar46);
                      }
                      local_220 = (float *)((ulonglong)uVar22 << 0x20);
                      local_218 = pfVar26;
                    }
                  }
                  *(undefined1 *)((longlong)iVar36 + (longlong)pfVar26) = 0;
                  local_220 = (float *)CONCAT44(local_220._4_4_,iVar36 + 1);
                  pfVar38 = *(float **)(pfVar41 + 2);
                  fVar52 = pfVar41[6];
                  fVar59 = pfVar38[2];
                  fVar56 = pfVar38[1];
                  if (fVar56 != fVar59) {
                    if ((int)fVar52 < (int)fVar56) {
                      pfVar38[1] = fVar52;
                      fVar56 = fVar52;
                    }
                    if ((int)fVar52 < (int)fVar59) {
                      pfVar38[2] = fVar52;
                      fVar59 = fVar52;
                    }
                    if (fVar56 == fVar59) {
                      *pfVar38 = fVar56;
                    }
                  }
                  fVar53 = *pfVar38;
                  if ((int)fVar52 < (int)fVar53) {
                    *pfVar38 = fVar52;
                    fVar53 = fVar52;
                  }
                  fVar52 = pfVar41[6];
                  if (fVar56 == fVar59) {
LAB_180097ec4:
                    if ((int)fVar52 < (int)fVar53) {
                      *pfVar38 = fVar52;
                    }
                  }
                  else {
                    if ((int)fVar52 < (int)fVar56) {
                      pfVar38[1] = fVar52;
                      fVar56 = fVar52;
                    }
                    if ((int)fVar52 < (int)fVar59) {
                      pfVar38[2] = fVar52;
                      fVar59 = fVar52;
                    }
                    if (fVar56 != fVar59) goto LAB_180097ec4;
                    *pfVar38 = fVar56;
                  }
                  if (fVar56 != fVar59) {
                    if ((int)fVar56 < (int)fVar59) {
                      FUN_1800a02e0((longlong)pfVar41,(longlong)pfVar38,(int)fVar56,
                                    (int)fVar59 - (int)fVar56);
                      pfVar38[2] = pfVar38[1];
                      lVar25 = 4;
                    }
                    else {
                      FUN_1800a02e0((longlong)pfVar41,(longlong)pfVar38,(int)fVar59,
                                    (int)fVar56 - (int)fVar59);
                      pfVar38[1] = pfVar38[2];
                      lVar25 = 8;
                    }
                    *pfVar38 = *(float *)(lVar25 + (longlong)pfVar38);
                    *(undefined1 *)((longlong)pfVar38 + 0x16) = 0;
                  }
                  pfVar44 = (float *)(uVar43 & 0xffffffff);
                  pfVar42 = pfVar26;
                  uVar27 = FUN_18009b370((longlong)pfVar41,(int)*pfVar38,(undefined8 *)pfVar26,
                                         iVar36);
                  if ((char)uVar27 != '\0') {
                    pfVar44 = (float *)(uVar43 & 0xffffffff);
                    pfVar42 = (float *)0x0;
                    FUN_18009fbc0((undefined8 *)(pfVar38 + 8),*pfVar38,0,iVar36);
                    *pfVar38 = (float)((int)*pfVar38 + iVar36);
                    *(undefined1 *)((longlong)pfVar38 + 0x16) = 0;
                  }
                  *(undefined1 *)(pfVar41 + 0x1a) = 1;
                }
              }
              if (pfVar26 != (float *)0x0) {
                FUN_18005b5c0((longlong)pfVar26);
              }
              local_2c8 = 0;
            }
            else {
              local_2c8 = 0;
              if (*(longlong *)(pfVar39 + 0x2fa) != 0) {
                fVar52 = *(float *)(*(longlong *)(pfVar41 + 2) + 8);
                fVar59 = *(float *)(*(longlong *)(pfVar41 + 2) + 4);
                if (fVar59 == fVar52) {
                  fVar59 = pfVar41[6];
                  fVar56 = 0.0;
                }
                else {
                  fVar56 = fVar52;
                  if ((int)fVar59 < (int)fVar52) {
                    fVar56 = fVar59;
                    fVar59 = fVar52;
                  }
                }
                FUN_18006d510((int *)(pfVar39 + 0xa40),((int)fVar59 - (int)fVar56) + 1);
                pfVar38 = (float *)(longlong)((int)fVar59 - (int)fVar56);
                pfVar42 = pfVar38;
                FUN_1800d1c20(*(undefined8 **)(pfVar39 + 0xa42),
                              (undefined8 *)((longlong)(int)fVar56 + *(longlong *)(pfVar41 + 8)),
                              (ulonglong)pfVar38);
                *(undefined1 *)((longlong)pfVar38 + *(longlong *)(pfVar39 + 0xa42)) = 0;
                FUN_180066e50(*(undefined8 *)(pfVar39 + 0xa42));
              }
              if (bVar7) {
                lVar25 = *(longlong *)(pfVar41 + 2);
                if (*(int *)(lVar25 + 4) == *(int *)(lVar25 + 8)) {
                  *(undefined4 *)(lVar25 + 4) = 0;
                  *(float *)(*(longlong *)(pfVar41 + 2) + 8) = pfVar41[6];
                  **(undefined4 **)(pfVar41 + 2) = (*(undefined4 **)(pfVar41 + 2))[2];
                  *(undefined1 *)(*(longlong *)(pfVar41 + 2) + 0x16) = 0;
                }
                *(undefined1 *)(pfVar41 + 0x1a) = 1;
                pfVar38 = *(float **)(pfVar41 + 2);
                fVar52 = pfVar38[2];
                pfVar42 = (float *)(ulonglong)(uint)fVar52;
                fVar59 = pfVar38[1];
                if (fVar59 != fVar52) {
                  fVar56 = pfVar41[6];
                  if ((int)fVar56 < (int)fVar59) {
                    pfVar38[1] = fVar56;
                    fVar59 = fVar56;
                  }
                  if ((int)fVar56 < (int)fVar52) {
                    pfVar38[2] = fVar56;
                    pfVar42 = (float *)(ulonglong)(uint)fVar56;
                  }
                  fVar52 = SUB84(pfVar42,0);
                  if (fVar59 == fVar52) {
                    *pfVar38 = fVar59;
                  }
                  if ((int)fVar56 < (int)*pfVar38) {
                    *pfVar38 = fVar56;
                  }
                  if (fVar59 != fVar52) {
                    if ((int)fVar59 < (int)fVar52) {
                      pfVar44 = (float *)(ulonglong)(uint)((int)fVar52 - (int)fVar59);
                      pfVar42 = (float *)(ulonglong)(uint)fVar59;
                      FUN_1800a02e0((longlong)pfVar41,(longlong)pfVar38,(int)fVar59,
                                    (int)fVar52 - (int)fVar59);
                      pfVar38[2] = pfVar38[1];
                      *pfVar38 = pfVar38[1];
                      *(undefined1 *)((longlong)pfVar38 + 0x16) = 0;
                      goto LAB_1800981a0;
                    }
                    pfVar44 = (float *)(ulonglong)(uint)((int)fVar59 - (int)fVar52);
                    FUN_1800a02e0((longlong)pfVar41,(longlong)pfVar38,(int)fVar52,
                                  (int)fVar59 - (int)fVar52);
                    pfVar38[1] = pfVar38[2];
                    *pfVar38 = pfVar38[2];
                  }
                  *(undefined1 *)((longlong)pfVar38 + 0x16) = 0;
                }
              }
            }
          }
          else {
            *(undefined4 *)(*(longlong *)(pfVar41 + 2) + 4) = 0;
            *(float *)(*(longlong *)(pfVar41 + 2) + 8) = pfVar41[6];
            **(undefined4 **)(pfVar41 + 2) = (*(undefined4 **)(pfVar41 + 2))[2];
            *(undefined1 *)(*(longlong *)(pfVar41 + 2) + 0x16) = 0;
            *(undefined1 *)(pfVar41 + 0x1a) = 1;
            local_2c8 = 0;
          }
        }
        else {
          pfVar42 = (float *)((ulonglong)local_f8 & 0xffffffff);
          FUN_1800a0720((longlong *)pfVar41,*(float **)(pfVar41 + 2),(uint)local_f8);
          *(undefined1 *)(pfVar41 + 0x1a) = 1;
          pfVar41[0x19] = -0.3;
          (*(undefined4 **)(pfVar41 + 2))[2] = **(undefined4 **)(pfVar41 + 2);
          *(undefined4 *)(*(longlong *)(pfVar41 + 2) + 4) =
               *(undefined4 *)(*(longlong *)(pfVar41 + 2) + 8);
          local_2c8 = 0;
        }
        goto LAB_1800981a0;
      }
      uVar34 = (uint7)(uint3)(uVar16 >> 8);
      if (((uint)fVar30 & 0x80) != 0) {
        if (*(char *)local_288 == '\0') {
          bVar10 = true;
          pwVar33 = (wchar_t *)((ulonglong)uVar34 << 8);
          local_2c8 = 0;
          bVar7 = false;
          bVar14 = false;
          local_2c5 = local_2c8;
          goto LAB_1800981a7;
        }
        bVar14 = true;
        local_2c8 = 0;
        goto LAB_1800981a2;
      }
      bVar10 = true;
      pwVar33 = (wchar_t *)((ulonglong)uVar34 << 8);
      local_2c8 = 0;
      bVar7 = false;
      bVar14 = true;
      local_2c5 = local_2c8;
    }
    else {
      if (local_2a8 == '\0') {
        uVar19 = 0x200000;
        if (cVar2 != '\0') {
          uVar19 = 0x20000c;
        }
        local_1f0 = (float *)CONCAT44(local_1f0._4_4_,uVar19);
      }
      pfVar42 = (float *)(ulonglong)((uint)local_2ac | (uint)local_1f0);
LAB_1800978cb:
      FUN_1800a0720((longlong *)pfVar41,*(float **)(pfVar41 + 2),(uint)pfVar42);
      pfVar41[0x19] = -0.3;
      *(undefined1 *)(pfVar41 + 0x1a) = 1;
LAB_1800978e2:
      local_2c8 = 0;
LAB_1800981a0:
      bVar14 = false;
LAB_1800981a2:
      pwVar33 = (wchar_t *)((ulonglong)pfVar47 & 0xff);
      bVar7 = bVar6;
    }
LAB_1800981a7:
    pwVar32 = *(wchar_t **)(pfVar41 + 2);
    bVar6 = bVar7;
    if ((*(float *)((longlong)pwVar32 + 4) != *(float *)((longlong)pwVar32 + 8)) &&
       ((char)pwVar33 != '\0')) {
      bVar7 = true;
      bVar6 = bVar7;
    }
  }
  local_2c7 = 0;
  pfVar47 = (float *)0x0;
  fVar52 = 0.0;
  if (pfVar39[0x507] == fVar15) {
    if (pfVar41 == (float *)0x0) {
      pfVar42 = (float *)0x137f;
      pwVar33 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
      ;
      pwVar32 = L"state != 0";
      FID_conflict__assert
                (L"state != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x137f);
    }
    pfVar38 = local_288;
    if ((!bVar14) || (uVar16 != 0)) {
LAB_1800982c5:
      pfVar38 = local_288;
    }
    else {
      if (((uint)fVar30 & 0x80) != 0) {
        if (*(char *)local_288 == '\0') {
          FID_conflict__assert
                    (L"buf[0] != 0",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                     ,0x1385);
        }
        pfVar47 = (float *)&DAT_1800d8c40;
        local_2c7 = 1;
        puVar3 = *(undefined4 **)(pfVar41 + 2);
        pfVar44 = (float *)(ulonglong)(uint)pfVar41[6];
        FUN_18009ff00((longlong)pfVar41,(longlong)puVar3,0,(int)pfVar41[6],0);
        fVar59 = pfVar41[6];
        if (*(longlong *)(pfVar41 + 8) != *(longlong *)(pfVar41 + 0xc)) {
          FID_conflict__assert
                    (L"obj->TextSrc == obj->TextA.Data",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                     ,0xff4);
        }
        pwVar32 = *(wchar_t **)(pfVar41 + 0xc);
        pfVar42 = (float *)(longlong)(((int)pfVar41[6] - (int)fVar59) + 1);
        pwVar33 = (wchar_t *)((longlong)pwVar32 + (longlong)(int)fVar59);
        FUN_1800d1c20((undefined8 *)pwVar32,(undefined8 *)pwVar33,(ulonglong)pfVar42);
        *(undefined1 *)((longlong)pfVar41 + 0x6a) = 1;
        pfVar41[6] = (float)((int)pfVar41[6] - (int)fVar59);
        *(undefined8 *)(puVar3 + 1) = 0;
        *puVar3 = 0;
        goto LAB_1800982c5;
      }
      pfVar46 = *(float **)(pfVar41 + 0x10);
      pwVar32 = (wchar_t *)local_288;
      pwVar33 = (wchar_t *)pfVar46;
      iVar36 = strcmp((char *)local_288,(char *)pfVar46);
      if (iVar36 != 0) {
        fVar52 = (float)((int)pfVar41[0xe] + -1);
        local_2c7 = 1;
        pfVar44 = (float *)(ulonglong)(uint)fVar52;
        pwVar33 = *(wchar_t **)(pfVar41 + 2);
        pwVar32 = (wchar_t *)pfVar41;
        pfVar42 = pfVar46;
        FUN_1800a15b0((longlong)pfVar41,(int *)pwVar33,(undefined8 *)pfVar46,(int)fVar52);
        pfVar47 = pfVar46;
      }
    }
    if (((uint)fVar30 & 0x9c0000) != 0) {
      if (local_298 == (float *)0x0) {
        pfVar42 = (float *)0x13a7;
        pwVar33 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
        ;
        pwVar32 = L"callback != 0";
        FID_conflict__assert
                  (L"callback != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x13a7);
      }
      uVar19 = 0x40000;
      if (((uint)fVar30 & 0x40000) == 0) {
LAB_180098322:
        if (((uint)fVar30 >> 0x13 & 1) == 0) {
LAB_1800983b2:
          local_2a0 = 0.0;
          uVar19 = 0x800000;
          if ((((uint)fVar30 & 0x800000) == 0) || (*(char *)((longlong)pfVar41 + 0x6a) == '\0')) {
            if (((uint)fVar30 >> 0x14 & 1) == 0) goto LAB_1800985c4;
            uVar19 = 0x100000;
          }
        }
        else {
          uVar35 = (undefined7)((ulonglong)pwVar33 >> 8);
          cVar9 = FUN_180059aa0(0x203,1);
          if (cVar9 == '\0') {
            pwVar33 = (wchar_t *)CONCAT71(uVar35,1);
            pwVar32 = (wchar_t *)0x204;
            cVar9 = FUN_180059aa0(0x204,1);
            if (cVar9 == '\0') goto LAB_1800983b2;
            uVar19 = 0x80000;
            local_2a0 = 7.2307e-43;
          }
          else {
            uVar19 = 0x80000;
            local_2a0 = 7.21669e-43;
          }
        }
      }
      else {
        pfVar42 = (float *)(ulonglong)(uint)fVar15;
        pwVar33 = (wchar_t *)0x0;
        pwVar32 = (wchar_t *)0x200;
        uVar23 = FUN_180068330(0x200,0,(uint)fVar15,(ulonglong)pfVar44);
        if ((char)uVar23 == '\0') goto LAB_180098322;
      }
      local_1c0 = 0;
      local_1b8 = (float *)0x0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1d8 = pfVar39;
      local_1c8 = local_280;
      if (uVar16 == 0) {
        pfVar38 = *(float **)(pfVar41 + 0xc);
      }
      local_1d0 = uVar19;
      local_1cc = fVar30;
      if (pfVar38 != *(float **)(pfVar41 + 8)) {
        FID_conflict__assert
                  (L"callback_buf == state->TextSrc",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x13ce);
      }
      FUN_18006dac0((int *)(pfVar41 + 0x12),(int)pfVar41[6] + 1);
      FUN_1800d1c20(*(undefined8 **)(pfVar41 + 0x14),(undefined8 *)pfVar38,
                    (longlong)((int)pfVar41[6] + 1));
      local_1c0 = CONCAT44(local_2a0,(undefined4)local_1c0);
      uStack_1b0 = CONCAT44(pfVar41[0x16],pfVar41[6]);
      puVar4 = *(uint **)(pfVar41 + 2);
      uVar20 = *puVar4;
      local_1a8 = CONCAT44(uVar20,(int)local_1a8) & 0xffffffffffffff00;
      uVar43 = *(ulonglong *)(puVar4 + 1);
      uVar22 = puVar4[2];
      uStack_1a0 = *(ulonglong *)(puVar4 + 1);
      local_1b8 = pfVar38;
      (*(code *)local_298)(&local_1d8);
      pfVar42 = local_288;
      if (uVar16 == 0) {
        pfVar42 = *(float **)(pfVar41 + 0xc);
      }
      if (local_1b8 != pfVar42) {
        FID_conflict__assert
                  (L"callback_data.Buf == callback_buf",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x13e1);
      }
      if (uStack_1b0._4_4_ != pfVar41[0x16]) {
        FID_conflict__assert
                  (L"callback_data.BufSize == state->BufCapacity",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x13e2);
      }
      if (local_1cc != fVar30) {
        FID_conflict__assert
                  (L"callback_data.Flags == flags",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x13e3);
      }
      pfVar38 = local_1b8;
      pfVar42 = (float *)(local_1a8 & 0xff);
      if ((local_1a8._4_4_ != uVar20) || ((char)local_1a8 != '\0')) {
        **(uint **)(pfVar41 + 2) = local_1a8._4_4_;
        *(undefined1 *)(pfVar41 + 0x1a) = 1;
      }
      if (((uint)uStack_1a0 != (uint)uVar43) || ((char)local_1a8 != '\0')) {
        uVar20 = (uint)uStack_1a0;
        if ((uint)uStack_1a0 == local_1a8._4_4_) {
          uVar20 = **(uint **)(pfVar41 + 2);
        }
        *(uint *)(*(longlong *)(pfVar41 + 2) + 4) = uVar20;
      }
      pwVar32 = (wchar_t *)(uStack_1a0 & 0xffffffff);
      pwVar33 = (wchar_t *)(ulonglong)uStack_1a0._4_4_;
      bVar7 = bVar6;
      if ((uStack_1a0._4_4_ != uVar22) || ((char)local_1a8 != '\0')) {
        if (uStack_1a0._4_4_ == (uint)uStack_1a0) {
          pwVar33 = (wchar_t *)(ulonglong)*(uint *)(*(longlong *)(pfVar41 + 2) + 4);
        }
        *(int *)(*(longlong *)(pfVar41 + 2) + 8) = (int)pwVar33;
        if ((char)local_1a8 != '\0') {
          sVar24 = strlen((char *)local_1b8);
          pfVar44 = pfVar38;
          if ((float)uStack_1b0 != (float)(int)sVar24) {
            FID_conflict__assert
                      (L"callback_data.BufTextLen == (int)strlen(callback_data.Buf)",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                       ,0x13eb);
            pfVar44 = local_1b8;
          }
          pfVar42 = (float *)(ulonglong)((int)pfVar41[0x12] - 1U);
          pwVar33 = *(wchar_t **)(pfVar41 + 0x14);
          pwVar32 = (wchar_t *)pfVar41;
          FUN_180099750((longlong)pfVar41,(longlong)pwVar33,(int)pfVar41[0x12] - 1U,
                        (longlong)pfVar44,(int)(float)uStack_1b0);
          pfVar41[6] = (float)uStack_1b0;
          pfVar41[0x19] = -0.3;
        }
      }
    }
LAB_1800985c4:
    pfVar38 = local_288;
    if (uVar16 == 0) {
      pfVar46 = *(float **)(pfVar41 + 8);
      pwVar32 = (wchar_t *)pfVar46;
      pwVar33 = (wchar_t *)local_288;
      iVar36 = strcmp((char *)pfVar46,(char *)local_288);
      if (iVar36 != 0) {
        fVar52 = pfVar41[6];
        local_2c7 = 1;
        pfVar47 = pfVar46;
      }
    }
  }
  else {
    pfVar38 = local_288;
  }
  if (pfVar39[0x8fa] == fVar15) {
    if (pfVar39[0x507] != fVar15) {
      uVar43 = FUN_1800593c0();
      if (((char)uVar43 != '\0') && (uVar16 == 0)) {
        pfVar46 = *(float **)(pfVar39 + 0x8fe);
        pwVar32 = (wchar_t *)pfVar46;
        pwVar33 = (wchar_t *)pfVar38;
        iVar36 = strcmp((char *)pfVar46,(char *)pfVar38);
        if (iVar36 != 0) {
          fVar52 = (float)((int)pfVar39[0x8fc] + -1);
          local_2c7 = 1;
          pfVar47 = pfVar46;
        }
      }
    }
    pfVar39[0x8fa] = 0.0;
  }
  if (pfVar47 != (float *)0x0) {
    if ((int)fVar52 < 0) {
      FID_conflict__assert
                (L"apply_new_text_length >= 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x1410);
    }
    if (local_208 == 0) {
      fVar59 = local_274;
    }
    else {
      local_1c0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1d8 = pfVar39;
      local_1d0 = 0x400000;
      fVar59 = (float)((int)fVar52 + 1);
      if ((int)fVar52 + 1 <= (int)local_274) {
        fVar59 = local_274;
      }
      uStack_1b0 = CONCAT44(fVar59,fVar52);
      local_1c8 = local_280;
      local_1cc = fVar30;
      local_1b8 = pfVar38;
      (*(code *)local_298)(&local_1d8);
      pfVar38 = local_1b8;
      fVar59 = uStack_1b0._4_4_;
      fVar52 = (float)((int)uStack_1b0._4_4_ + -1);
      if ((int)(float)uStack_1b0 < (int)uStack_1b0._4_4_ + -1) {
        fVar52 = (float)uStack_1b0;
      }
      if ((int)uStack_1b0._4_4_ < (int)fVar52) {
        FID_conflict__assert
                  (L"apply_new_text_length <= buf_size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x141f);
      }
    }
    if ((int)fVar52 + 1 < (int)fVar59) {
      fVar59 = (float)((int)fVar52 + 1);
    }
    pfVar42 = (float *)(longlong)(int)fVar59;
    pwVar32 = (wchar_t *)pfVar38;
    FUN_1800583e0((char *)pfVar38,(char *)pfVar47,(ulonglong)pfVar42);
    pwVar33 = (wchar_t *)pfVar47;
  }
  if (pfVar39[0x507] == fVar15) {
    if (bVar10) {
      FUN_180051730(pwVar32,pwVar33,pfVar42,(ulonglong)pfVar44);
    }
    else {
      pfVar39[0xa3e] = 1.4013e-45;
    }
  }
  if (uVar40 == 0) {
    FUN_180064200(&local_250,(int)fVar15,0);
    fVar52 = pfVar39[0x31c];
    uVar20 = FUN_1800567e0(7,1.0);
    pfVar44 = (float *)CONCAT71((int7)((ulonglong)pfVar44 >> 8),1);
    FUN_1800639d0(CONCAT44(fStack_24c,local_250),CONCAT44(fStack_244,local_248),uVar20,'\x01',fVar52
                 );
    local_268 = local_250 + pfVar39[0x31a];
    local_264 = fStack_24c + pfVar39[0x31b];
  }
  else {
    local_268 = local_270[0x46];
    local_264 = local_270[0x47];
  }
  pfVar47 = local_188;
  local_224 = fStack_24c + fVar51;
  local_228 = local_250 + fVar57;
  local_2ac = 0.0;
  fVar51 = 0.0;
  local_2a0 = 0.0;
  if (local_2a2 == '\0') {
    pfVar42 = pfVar38;
  }
  else {
    pfVar42 = *(float **)(pfVar41 + 0xc);
  }
  local_280 = (byte *)0x0;
  if (local_188 == (float *)0x0) {
LAB_18009885f:
    local_2c3 = '\0';
  }
  else {
    if (local_2a2 != '\0') {
      pfVar38 = *(float **)(pfVar41 + 0xc);
    }
    if (*(char *)pfVar38 != '\0') goto LAB_18009885f;
    local_2c3 = '\x01';
  }
  local_298 = pfVar42;
  local_230 = local_250;
  local_22c = fStack_24c;
  if (local_2c3 == cVar11) {
LAB_18009889e:
    local_2c3 = cVar11;
    if (local_2c3 != '\0') {
      local_298 = pfVar47;
      sVar24 = strlen((char *)pfVar47);
      local_280 = (byte *)(sVar24 + (longlong)pfVar47);
      pfVar42 = pfVar47;
    }
  }
  else {
    if ((local_260 == 0) || (cVar11 != '\0')) {
      cVar11 = local_2c3;
      if (local_260 == 0) goto LAB_18009889e;
    }
    else {
      FUN_180062140();
    }
    cVar11 = local_2c3;
    if (local_2c3 != '\0') goto LAB_18009889e;
    FUN_18009abd0();
  }
  if (local_2c5 == 0 && !bVar7) {
    if (uVar40 == 0) {
      if (local_2c3 == '\0') {
        if (pfVar39[0x507] == fVar15) {
          pbVar49 = (byte *)((longlong)(int)pfVar41[6] + (longlong)pfVar42);
        }
        else {
          sVar24 = strlen((char *)pfVar42);
          pbVar49 = (byte *)(sVar24 + (longlong)pfVar42);
        }
      }
      else {
        pbVar49 = local_280;
      }
      if (0x1fffff < (longlong)pbVar49 - (longlong)pfVar42) goto LAB_180099327;
    }
    else {
      pcVar28 = FUN_1800a6130((ulonglong)pfVar42,'\n');
      if (pcVar28 == (char *)0x0) {
        pfVar47 = pfVar42;
      }
      else {
        pcVar31 = (char *)0x1;
        do {
          pfVar47 = (float *)(pcVar28 + 1);
          pcVar28 = FUN_1800a6130((ulonglong)pfVar47,'\n');
          pcVar31 = (char *)(ulonglong)((int)pcVar31 + 1);
        } while (pcVar28 != (char *)0x0);
        pfVar39 = local_240;
        local_200 = pcVar31;
      }
      sVar24 = strlen((char *)pfVar47);
      pbVar49 = (byte *)((longlong)pfVar47 + sVar24);
      fVar51 = (float)(int)(float)local_200 * pfVar39[0x430];
      local_2ac = fVar57;
    }
    if (((uint)fVar30 >> 0x11 & 1) != 0) {
      pfVar47 = (float *)FUN_180050b60(&local_240,(byte *)pfVar42,(byte *)0x0,'\0',-1.0);
      fVar57 = (local_248 - *pfVar47) - pfVar39[0x31a];
      if (fVar57 <= local_268) {
        local_268 = fVar57;
      }
    }
    fVar57 = (float)FUN_1800567e0((uint)(local_2c3 != '\0'),1.0);
    local_200 = (char *)CONCAT44(local_264 - 0.0,local_268 - 0.0);
    pfVar47 = &local_230;
    if (uVar40 != 0) {
      pfVar47 = (float *)0x0;
    }
    pfVar44 = (float *)&local_200;
    FUN_1800716c0(*(int **)(local_270 + 0xb0),*(int **)(pfVar39 + 0x42e),pfVar39[0x430],pfVar44,
                  fVar57,(byte *)pfVar42,pbVar49,0.0,pfVar47);
    goto LAB_180099327;
  }
  if (pfVar41 == (float *)0x0) {
    FID_conflict__assert
              (L"state != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1455);
  }
  if (local_2c3 == '\0') {
    local_280 = (byte *)((longlong)(int)pfVar41[6] + (longlong)pfVar42);
  }
  uVar20 = 0xfffffc18;
  if (local_2c5 != 0) {
    uVar20 = 0xffffffff;
  }
  uVar22 = 0xfffffc18;
  if (bVar7) {
    uVar22 = 0xffffffff;
  }
  if (local_2c5 == 0) {
    pbVar49 = (byte *)0x0;
  }
  else {
    pbVar49 = (byte *)((longlong)**(int **)(pfVar41 + 2) + (longlong)pfVar42);
  }
  if (bVar7) {
    iVar36 = *(int *)(*(longlong *)(pfVar41 + 2) + 8);
    iVar18 = *(int *)(*(longlong *)(pfVar41 + 2) + 4);
    if (iVar18 < iVar36) {
      iVar36 = iVar18;
    }
    pbVar48 = (byte *)((longlong)iVar36 + (longlong)local_298);
  }
  else {
    pbVar48 = (byte *)0x0;
  }
  uVar45 = 1;
  if (uVar40 != 0) {
    local_200 = (char *)(longlong)(int)pfVar41[6] + (longlong)local_298;
    pbVar29 = (byte *)FUN_1800d1a80((char *)local_298,10,(char *)(longlong)(int)pfVar41[6]);
    pcVar28 = local_200;
    if (pbVar29 != (byte *)0x0) {
      do {
        if ((uVar20 == 0xffffffff) && (uVar20 = uVar45, pbVar29 < pbVar49)) {
          uVar20 = 0xffffffff;
        }
        if ((uVar22 == 0xffffffff) && (uVar22 = uVar45, pbVar29 < pbVar48)) {
          uVar22 = 0xffffffff;
        }
        uVar45 = uVar45 + 1;
        pbVar29 = (byte *)FUN_1800d1a80((char *)(pbVar29 + 1),10,pcVar28 + -(longlong)(pbVar29 + 1))
        ;
      } while (pbVar29 != (byte *)0x0);
      pfVar39 = local_240;
      pfVar41 = local_290;
    }
  }
  local_208 = uVar45;
  if (uVar20 != 0xffffffff) {
    local_208 = uVar20;
  }
  uVar20 = uVar45;
  if (uVar22 != 0xffffffff) {
    uVar20 = uVar22;
  }
  local_258 = (float *)CONCAT44(local_258._4_4_,uVar20);
  pbVar29 = (byte *)FUN_1800583c0((ulonglong)pbVar49,(ulonglong)local_298);
  piVar5 = *(int **)(pfVar39 + 0x42e);
  fVar52 = pfVar39[0x430];
  fVar59 = (float)piVar5[5];
  fVar53 = 0.0;
  fVar56 = 0.0;
  if (pbVar29 < pbVar49) {
    do {
      uVar20 = (uint)(char)*pbVar29;
      local_f8 = (float *)CONCAT44(local_f8._4_4_,uVar20);
      if (uVar20 < 0x80) {
        lVar25 = 1;
      }
      else {
        iVar36 = FUN_180058410((uint *)&local_f8,pbVar29,pbVar49);
        lVar25 = (longlong)iVar36;
        uVar20 = (uint)local_f8;
      }
      pbVar29 = pbVar29 + lVar25;
      if (uVar20 == 10) {
        if (fVar53 <= fVar56) {
          fVar53 = fVar56;
        }
        fVar56 = 0.0;
      }
      else if (uVar20 != 0xd) {
        if ((int)uVar20 < *piVar5) {
          fVar55 = *(float *)(*(longlong *)(piVar5 + 2) + (ulonglong)uVar20 * 4);
        }
        else {
          fVar55 = (float)piVar5[4];
        }
        fVar56 = fVar56 + fVar55 * (fVar52 / fVar59);
      }
    } while (pbVar29 < pbVar49);
    pfVar41 = local_290;
  }
  if (fVar56 <= fVar53) {
    fVar56 = fVar53;
  }
  local_220 = (float *)CONCAT44(local_220._4_4_,fVar56);
  fVar52 = pfVar39[0x430];
  fVar59 = (float)(int)local_208 * fVar52;
  iVar36 = (uint)local_258;
  if ((int)(uint)local_258 < 0) {
    fVar53 = 0.0;
    fVar55 = 0.0;
  }
  else {
    pbVar49 = (byte *)FUN_1800583c0((ulonglong)pbVar48,(ulonglong)local_298);
    piVar5 = *(int **)(pfVar39 + 0x42e);
    fVar51 = pfVar39[0x430];
    fVar52 = (float)piVar5[5];
    fVar54 = 0.0;
    fVar53 = 0.0;
    if (pbVar49 < pbVar48) {
      do {
        uVar20 = (uint)(char)*pbVar49;
        local_f8 = (float *)CONCAT44(local_f8._4_4_,uVar20);
        if (uVar20 < 0x80) {
          lVar25 = 1;
        }
        else {
          iVar18 = FUN_180058410((uint *)&local_f8,pbVar49,pbVar48);
          lVar25 = (longlong)iVar18;
          uVar20 = (uint)local_f8;
        }
        pbVar49 = pbVar49 + lVar25;
        if (uVar20 == 10) {
          if (fVar54 <= fVar53) {
            fVar54 = fVar53;
          }
          fVar53 = 0.0;
        }
        else if (uVar20 != 0xd) {
          if ((int)uVar20 < *piVar5) {
            fVar55 = *(float *)(*(longlong *)(piVar5 + 2) + (ulonglong)uVar20 * 4);
          }
          else {
            fVar55 = (float)piVar5[4];
          }
          fVar53 = fVar53 + (fVar51 / fVar52) * fVar55;
        }
      } while (pbVar49 < pbVar48);
      pfVar41 = local_290;
    }
    fVar52 = pfVar39[0x430];
    fVar55 = (float)iVar36 * fVar52;
    if (fVar53 <= fVar54) {
      fVar53 = fVar54;
    }
    fVar51 = local_2a0;
  }
  pfVar42 = local_298;
  if (uVar40 != 0) {
    fVar51 = (float)(int)uVar45 * fVar52;
    local_2ac = fVar57;
    local_2a0 = fVar51;
  }
  if ((local_2c5 != 0) && (*(char *)(pfVar41 + 0x1a) != '\0')) {
    if (((uint)fVar30 & 0x8000) == 0) {
      if (pfVar41[0x17] <= fVar56) {
        fVar52 = fVar56 - (fVar57 - pfVar39[0x31a]);
        if (fVar52 < pfVar41[0x17]) goto LAB_180098dae;
        fVar52 = fVar52 + fVar57 * 0.25;
      }
      else {
        fVar57 = fVar56 - fVar57 * 0.25;
        fVar52 = 0.0;
        if (0.0 <= fVar57) {
          fVar52 = fVar57;
        }
      }
      pfVar41[0x17] = (float)(int)fVar52;
    }
    else {
      pfVar41[0x18] = 0.0;
    }
LAB_180098dae:
    if (uVar40 != 0) {
      fVar57 = fVar59 - pfVar39[0x430];
      if (fVar17 <= fVar57) {
        fVar57 = pfVar39[0x31b] + pfVar39[0x31b];
        if (fVar17 <= fVar59 - (local_204 - fVar57)) {
          fVar17 = (fVar59 - local_204) + fVar57;
        }
      }
      else {
        fVar17 = 0.0;
        if (0.0 <= fVar57) {
          fVar17 = fVar57;
        }
      }
      if (0.0 <= fVar17) {
        fVar57 = (pfVar39[0x31b] + pfVar39[0x31b] + fVar51) - local_204;
        if (fVar57 <= 0.0) {
          fVar57 = 0.0;
        }
        if (fVar17 <= fVar57) {
          fVar57 = fVar17;
        }
      }
      else {
        fVar57 = 0.0;
      }
      local_264 = local_264 + (local_270[0x27] - fVar57);
      local_270[0x27] = fVar57;
    }
    *(undefined1 *)(pfVar41 + 0x1a) = 0;
  }
  fVar57 = pfVar41[0x17];
  if (bVar6) {
    iVar18 = *(int *)(*(longlong *)(pfVar41 + 2) + 8);
    iVar36 = *(int *)(*(longlong *)(pfVar41 + 2) + 4);
    iVar21 = iVar18;
    if (iVar36 < iVar18) {
      iVar21 = iVar36;
    }
    pbVar49 = (byte *)((longlong)iVar21 + (longlong)local_298);
    if (iVar18 <= iVar36) {
      iVar18 = iVar36;
    }
    pbVar48 = (byte *)((longlong)iVar18 + (longlong)local_298);
    if (local_2c5 == 0) {
      fVar51 = 0.6;
    }
    else {
      fVar51 = 1.0;
    }
    uVar20 = FUN_1800567e0(0x32,fVar51);
    pfVar47 = local_270;
    if (uVar40 == 0) {
      fVar51 = -1.0;
      fVar58 = 2.0;
    }
    else {
      fVar51 = 0.0;
    }
    fVar17 = (local_268 + fVar53) - fVar57;
    fVar52 = (local_264 + fVar55) - 0.0;
    if (pbVar49 < pbVar48) {
      do {
        if (pfVar39[0x430] + local_224 < fVar52) break;
        if (local_22c <= fVar52) {
          piVar5 = *(int **)(pfVar39 + 0x42e);
          fVar55 = pfVar39[0x430] / (float)piVar5[5];
          fVar56 = 0.0;
          fVar53 = 0.0;
          while (pbVar49 < pbVar48) {
            uVar22 = (uint)(char)*pbVar49;
            local_f8 = (float *)CONCAT44(local_f8._4_4_,uVar22);
            if (uVar22 < 0x80) {
              lVar25 = 1;
            }
            else {
              iVar36 = FUN_180058410((uint *)&local_f8,pbVar49,pbVar48);
              lVar25 = (longlong)iVar36;
              uVar22 = (uint)local_f8;
            }
            pbVar49 = pbVar49 + lVar25;
            if (uVar22 == 10) {
              fVar56 = 0.0;
              if (0.0 <= fVar53) {
                fVar56 = fVar53;
              }
              fVar53 = 0.0;
              break;
            }
            if (uVar22 != 0xd) {
              if ((int)uVar22 < *piVar5) {
                fVar53 = fVar53 + *(float *)(*(longlong *)(piVar5 + 2) + (ulonglong)uVar22 * 4) *
                                  fVar55;
              }
              else {
                fVar53 = fVar53 + (float)piVar5[4] * fVar55;
              }
            }
          }
          if (fVar53 <= fVar56) {
            fVar53 = fVar56;
          }
          if (fVar53 <= 0.0) {
            piVar5 = *(int **)(pfVar39 + 0x42e);
            if (*piVar5 < 0x21) {
              fVar56 = (float)piVar5[4];
            }
            else {
              fVar56 = *(float *)(*(longlong *)(piVar5 + 2) + 0x80);
            }
            fVar53 = (float)(int)(fVar56 * 0.5);
          }
          fVar56 = fVar17 + 0.0;
          if (fVar17 + 0.0 <= local_230) {
            fVar56 = local_230;
          }
          fVar55 = fVar52 + (fVar51 - pfVar39[0x430]);
          if (fVar55 <= local_22c) {
            fVar55 = local_22c;
          }
          local_240 = (float *)CONCAT44(fVar55,fVar56);
          local_238 = fVar17 + fVar53;
          if (local_228 <= fVar17 + fVar53) {
            local_238 = local_228;
          }
          local_234 = fVar52 + fVar58;
          if (local_224 <= fVar52 + fVar58) {
            local_234 = local_224;
          }
          if ((((local_22c < local_234) && (fVar55 < local_224)) && (local_230 < local_238)) &&
             (fVar56 < local_228)) {
            pfVar44 = (float *)(ulonglong)uVar20;
            FUN_180071360(*(int **)(pfVar47 + 0xb0),(float *)&local_240,&local_238,uVar20,0.0,0);
          }
          fVar17 = local_268 - fVar57;
        }
        else {
          pcVar28 = FUN_1800d1a80((char *)pbVar49,10,(char *)(pbVar48 + -(longlong)pbVar49));
          if (pcVar28 == (char *)0x0) {
            pbVar49 = pbVar48;
          }
          else {
            pbVar49 = (byte *)(pcVar28 + 1);
          }
        }
        fVar52 = fVar52 + pfVar39[0x430];
      } while (pbVar49 < pbVar48);
      pfVar41 = local_290;
      fVar56 = (float)local_220;
    }
    fVar51 = local_2a0;
  }
  pbVar49 = local_280;
  if ((uVar40 != 0) || ((longlong)local_280 - (longlong)pfVar42 < 0x200000)) {
    fVar58 = (float)FUN_1800567e0((uint)(local_2c3 != '\0'),1.0);
    local_240 = (float *)CONCAT44(local_264 - 0.0,local_268 - fVar57);
    pfVar47 = &local_230;
    if (uVar40 != 0) {
      pfVar47 = (float *)0x0;
    }
    pfVar44 = (float *)&local_240;
    FUN_1800716c0(*(int **)(local_270 + 0xb0),*(int **)(pfVar39 + 0x42e),pfVar39[0x430],pfVar44,
                  fVar58,(byte *)pfVar42,pbVar49,0.0,pfVar47);
  }
  if (local_2c5 != 0) {
    fVar58 = pfVar39[6] + pfVar41[0x19];
    pfVar41[0x19] = fVar58;
    if (((*(char *)((longlong)pfVar39 + 0x62) == '\0') || (fVar58 <= 0.0)) ||
       (uVar43 = FUN_1800bbb20((ulonglong)(uint)fVar58,1.2), (float)uVar43 <= 0.8)) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    fVar58 = (float)(int)((fVar56 + local_268) - fVar57);
    fVar17 = (float)(int)((local_264 + fVar59) - 0.0);
    fVar57 = (fVar17 - pfVar39[0x430]) + 0.5;
    local_200 = (char *)CONCAT44(fVar57,fVar58);
    local_1f8 = fVar58 + 1.0;
    local_1f4 = fVar17 - 1.5;
    if ((((bVar10) && (local_22c < local_1f4)) && (fVar57 < local_224)) &&
       ((local_230 < local_1f8 && (fVar58 < local_228)))) {
      piVar5 = *(int **)(local_270 + 0xb0);
      uVar20 = FUN_1800567e0(0,1.0);
      local_240 = (float *)CONCAT44(local_1f4,(int)local_200);
      pfVar44 = (float *)(ulonglong)uVar20;
      FUN_180070300(piVar5,&local_200,&local_240,uVar20,1.0);
    }
    if (uVar16 == 0) {
      *(undefined1 *)(pfVar39 + 0x96a) = 1;
      pfVar39[0x96b] = fVar58 - 1.0;
      pfVar39[0x96c] = fVar17 - pfVar39[0x430];
      pfVar39[0x96d] = pfVar39[0x430];
    }
  }
LAB_180099327:
  if ((local_260 != 0) && (local_2c3 == '\0')) {
    FUN_180062140();
  }
  pfVar47 = DAT_180115c10;
  if (uVar40 != 0) {
    fVar57 = pfVar39[0x31b];
    local_280 = (byte *)CONCAT44(fVar51 + fVar57,local_2ac);
    *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x4ea) + 0xce) = 1;
    lVar25 = *(longlong *)(pfVar47 + 0x4ea);
    if (*(char *)(lVar25 + 0xd1) == '\0') {
      local_234 = fVar51 + fVar57 + *(float *)(lVar25 + 0x11c);
      local_240 = *(float **)(lVar25 + 0x118);
      local_238 = *(float *)(lVar25 + 0x118) + local_2ac;
      FUN_18005aca0((float *)&local_280,-1.0);
      pfVar44 = (float *)0x0;
      FUN_18005a670((float *)&local_240,(wchar_t *)0x0,(float *)0x0,0);
    }
    pfVar39[0x755] = (float)((uint)pfVar39[0x755] | 0x100001);
    FUN_1800537a0();
    fVar57 = (float)((uint)uStack_160 | (uint)pfVar39[0x764] & 0x80);
    FUN_180054450();
    if ((pfVar39[0x762] == 0.0) ||
       (fVar58 = (float)FUN_180056b80((longlong *)local_270,(byte *)"#SCROLLY",0),
       pfVar39[0x762] != fVar58)) {
      pfVar39[0x762] = fVar15;
      pfVar39[0x763] = local_168._4_4_;
      pfVar39[0x764] = fVar57;
    }
  }
  if (pfVar41 != (float *)0x0) {
    pfVar41[8] = 0.0;
    pfVar41[9] = 0.0;
  }
  if ((*(char *)(pfVar39 + 0x99e) != '\0') && ((local_260 == 0 || (local_2c3 != '\0')))) {
    FUN_18005b350(&DAT_1800ee1ec,&DAT_1800ee1e8);
    FUN_18005b180((longlong)&local_268,(char *)pfVar42,(char *)pbVar49,(ulonglong)pfVar44);
  }
  if (0.0 < local_190) {
    FUN_180064450(CONCAT44(fStack_24c + pfVar39[0x31b],local_248 + pfVar39[800]),local_180,
                  (byte *)0x0,'\x01');
  }
  if (local_2c7 != 0) {
    FUN_18005b4c0((int)fVar15);
  }
  if (((uint)fVar30 & 0x40) != 0) {
    local_2c7 = local_2c8;
  }
  return (ulonglong)local_2c7;
}


bool FUN_1800994f0(longlong param_1,uint *param_2,uint param_3,undefined *param_4,undefined8 param_5
                  ,char param_6)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  undefined8 local_38;
  ushort local_30;
  undefined8 local_2e;
  undefined8 local_26;
  undefined8 local_1e;
  undefined8 local_16;
  undefined4 local_e;
  undefined2 local_a;

  bVar2 = true;
  uVar5 = *param_2;
  uVar6 = (ulonglong)uVar5;
  if (0x1f < uVar5) goto LAB_18009956d;
  uVar8 = param_3 & 0x4000000;
  if ((uVar5 == 10) && (uVar8 != 0)) {
    bVar2 = true;
LAB_180099529:
    if ((param_6 == '\0') || (uVar8 != 0)) {
      if ((uVar5 != 10) || (uVar8 == 0)) goto LAB_180099552;
      goto LAB_180099560;
    }
    uVar6 = 0x20;
    bVar2 = true;
    *param_2 = 0x20;
    bVar3 = false;
  }
  else {
    bVar2 = false;
    if (uVar5 == 10) goto LAB_180099529;
LAB_180099552:
    bVar3 = false;
    if ((uVar5 == 9) && ((param_3 & 0x20) != 0)) {
LAB_180099560:
      bVar3 = true;
    }
  }
  if (!bVar3 && !bVar2) {
    return false;
  }
  bVar2 = false;
LAB_18009956d:
  uVar5 = (uint)uVar6;
  if (param_6 == '\0') {
    if (uVar5 == 0x7f) {
      return false;
    }
    if (uVar5 - 0xe000 < 0x1900) {
      return false;
    }
  }
  if (0xffff < uVar5) {
    return false;
  }
  if ((bVar2) && ((param_3 & 0x1000001f) != 0)) {
    uVar1 = *(ushort *)(param_1 + 0xc18);
    if (((param_3 & 0x10000005) != 0) && ((uVar5 - 0x2c & 0xfffffffd) == 0)) {
      uVar6 = (ulonglong)uVar1;
    }
    uVar7 = uVar6;
    if (((param_3 & 7) != 0) &&
       (uVar7 = (ulonglong)((int)uVar6 - 0xfee0), 0x5d < (int)uVar6 - 0xff01U)) {
      uVar7 = uVar6;
    }
    uVar5 = (uint)uVar7;
    if ((((param_3 & 1) != 0) && (9 < uVar5 - 0x30)) && (uVar5 != uVar1)) {
      if (0x2f < uVar5) {
        return false;
      }
      if ((0xac0000000000U >> (uVar7 & 0x3f) & 1) == 0) {
        return false;
      }
    }
    if ((((param_3 & 4) != 0) && (9 < uVar5 - 0x30)) && (uVar5 != uVar1)) {
      if (0x3b < uVar5 - 0x2a) {
        return false;
      }
      if ((0x80000000800002bU >> ((ulonglong)(uVar5 - 0x2a) & 0x3f) & 1) == 0) {
        return false;
      }
    }
    if ((param_3 & 2) != 0) {
      if (0x36 < uVar5 - 0x30) {
        return false;
      }
      if ((0x7e0000007e03ffU >> ((ulonglong)(uVar5 - 0x30) & 0x3f) & 1) == 0) {
        return false;
      }
    }
    uVar6 = uVar7;
    if (((param_3 & 8) != 0) && (uVar6 = (ulonglong)(uVar5 - 0x20), 0x19 < uVar5 - 0x61)) {
      uVar6 = uVar7;
    }
    uVar5 = (uint)uVar6;
    if ((param_3 & 0x10) != 0) {
      if (uVar5 == 0x20) {
        return false;
      }
      if (uVar5 == 9) {
        return false;
      }
      if (uVar5 == 0x3000) {
        return false;
      }
    }
    *param_2 = uVar5;
  }
  if ((param_3 >> 0x15 & 1) == 0) {
    return true;
  }
  local_40 = 0x200000;
  local_2e = 0;
  local_26 = 0;
  local_1e = 0;
  local_16 = 0;
  local_e = 0;
  local_a = 0;
  local_48 = DAT_180115c10;
  local_38 = param_5;
  local_30 = (ushort)uVar6;
  local_3c = param_3;
  iVar4 = (*(code *)param_4)(&local_48);
  if (iVar4 == 0) {
    *param_2 = (uint)local_30;
    return local_30 != 0;
  }
  return false;
}


void FUN_180099750(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;

  iVar10 = param_5;
  if (param_3 < param_5) {
    iVar10 = param_3;
  }
  uVar11 = 0;
  if (0 < iVar10) {
    do {
      if (*(char *)(param_2 + uVar11) != *(char *)(param_4 + uVar11)) break;
      uVar9 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
    } while ((int)uVar9 < iVar10);
  }
  iVar10 = (int)uVar11;
  if ((iVar10 != param_3) || (iVar10 != param_5)) {
    while( true ) {
      param_3 = param_3 + -1;
      param_5 = param_5 + -1;
      if (param_3 < iVar10) break;
      if ((param_5 < iVar10) || (*(char *)(param_2 + param_3) != *(char *)(param_4 + param_5)))
      break;
    }
    iVar13 = param_3 - iVar10;
    iVar8 = (param_5 - iVar10) + 1;
    uVar9 = iVar13 + 1;
    if ((0 < iVar8) || (0 < (int)uVar9)) {
      lVar5 = *(longlong *)(param_1 + 8);
      *(undefined2 *)(lVar5 + 0xa3a) = 99;
      *(undefined4 *)(lVar5 + 0xa40) = 999;
      if (*(short *)(lVar5 + 0xa38) == 99) {
        FUN_1800a0430((undefined8 *)(lVar5 + 0x20));
      }
      if ((int)uVar9 < 1000) {
        iVar6 = *(int *)(lVar5 + 0xa3c);
        if (999 < iVar6 + 1 + iVar13) {
          do {
            sVar3 = *(short *)(lVar5 + 0xa38);
            if (0 < sVar3) {
              if (-1 < *(int *)(lVar5 + 0x2c)) {
                iVar1 = *(int *)(lVar5 + 0x24);
                *(int *)(lVar5 + 0xa3c) = iVar6 - iVar1;
                FUN_1800d1c20((undefined8 *)(lVar5 + 0x650),
                              (undefined8 *)(lVar5 + 0x650 + (longlong)iVar1),
                              (longlong)(iVar6 - iVar1));
                sVar3 = *(short *)(lVar5 + 0xa38);
                iVar6 = 0;
                if (0 < sVar3) {
                  do {
                    iVar2 = *(int *)(lVar5 + 0x2c + (longlong)iVar6 * 0x10);
                    if (-1 < iVar2) {
                      *(int *)(lVar5 + 0x2c + (longlong)iVar6 * 0x10) = iVar2 - iVar1;
                    }
                    sVar3 = *(short *)(lVar5 + 0xa38);
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < sVar3);
                }
              }
              *(short *)(lVar5 + 0xa38) = sVar3 + -1;
              FUN_1800d1c20((undefined8 *)(lVar5 + 0x20),(undefined8 *)(lVar5 + 0x30),
                            (longlong)(short)(sVar3 + -1) << 4);
            }
            iVar6 = *(int *)(lVar5 + 0xa3c);
          } while (999 < (int)(iVar6 + uVar9));
        }
        lVar4 = (longlong)*(short *)(lVar5 + 0xa38) * 0x10;
        *(short *)(lVar5 + 0xa38) = *(short *)(lVar5 + 0xa38) + 1;
        piVar7 = (int *)(lVar5 + 0x20 + lVar4);
        if (piVar7 != (int *)0x0) {
          *piVar7 = iVar10;
          *(uint *)(lVar5 + 0x24 + lVar4) = uVar9;
          *(int *)(lVar5 + 0x28 + lVar4) = iVar8;
          if (uVar9 == 0) {
            *(undefined4 *)(lVar5 + 0x2c + lVar4) = 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar5 + 0x2c + lVar4) = *(undefined4 *)(lVar5 + 0xa3c);
            *(int *)(lVar5 + 0xa3c) = *(int *)(lVar5 + 0xa3c) + iVar13 + 1;
            puVar12 = (undefined8 *)((longlong)*(int *)(lVar5 + 0x2c + lVar4) + 0x650 + lVar5);
            if ((puVar12 != (undefined8 *)0x0) && (0 < (int)uVar9)) {
              iVar8 = 0;
              if ((uVar9 < 0x10) ||
                 ((puVar12 <= (undefined8 *)(param_3 + param_2) &&
                  ((undefined8 *)(iVar10 + param_2) <=
                   (undefined8 *)((longlong)iVar13 + (longlong)puVar12))))) {
                do {
                  iVar13 = iVar8 + iVar10;
                  lVar5 = (longlong)iVar8;
                  iVar8 = iVar8 + 1;
                  *(undefined1 *)((longlong)puVar12 + lVar5) = *(undefined1 *)(param_2 + iVar13);
                } while (iVar8 < (int)uVar9);
              }
              else {
                FUN_1800d1c20(puVar12,(undefined8 *)(iVar10 + param_2),(longlong)(int)uVar9);
              }
            }
          }
        }
      }
      else {
        *(undefined2 *)(lVar5 + 0xa38) = 0;
        *(undefined4 *)(lVar5 + 0xa3c) = 0;
      }
    }
  }
  return;
}


void FUN_1800999f0(byte *param_1,float *param_2,float *param_3,uint param_4,float param_5,
                  float *param_6,undefined8 param_7)

{
  ulonglong local_38 [2];

  if (((uint)param_5 >> 0x1a & 1) != 0) {
    FID_conflict__assert
              (L"!(flags & ImGuiInputTextFlags_Multiline)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0xf31);
  }
  local_38[0] = 0;
  FUN_180096220(param_1,param_2,param_3,(ulonglong)param_4,local_38,param_5,param_6,param_7);
  return;
}


ulonglong FUN_180099a80(byte *param_1,float *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res20 [8];
  char local_58 [8];
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;

  lVar2 = DAT_180115c10;
  uVar5 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar5 + 0xce) = 1;
  plVar1 = *(longlong **)(lVar2 + 0x13a8);
  if (*(char *)((longlong)plVar1 + 0xd1) == '\0') {
    if ((*param_2 == 0.0) || (param_2[1] == 0.0)) {
      FID_conflict__assert
                (L"size_arg.x != 0.0f && size_arg.y != 0.0f",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x317);
    }
    uVar4 = FUN_180056b80(plVar1,param_1,0);
    FUN_1800507c0((ulonglong *)&local_50,*(ulonglong *)param_2,0.0,0);
    local_48 = *(float *)(plVar1 + 0x23);
    local_3c = local_4c + *(float *)((longlong)plVar1 + 0x11c);
    local_44 = *(undefined4 *)((longlong)plVar1 + 0x11c);
    local_40 = local_48 + local_50;
    FUN_18005aca0(&local_50,-1.0);
    uVar5 = FUN_18005a670(&local_48,(wchar_t *)(ulonglong)uVar4,(float *)0x0,
                          (ulonglong)(~(param_3 >> 2) & 2));
    if ((char)uVar5 != '\0') {
      bVar3 = FUN_18008f030(&local_48,(float *)(ulonglong)uVar4,local_58,local_res20,param_3);
      FUN_180064200(&local_48,uVar4,0);
      return (ulonglong)bVar3;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}


undefined8 FUN_180099bd0(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong in_RAX;

  lVar4 = DAT_180115c10;
  iVar1 = *(int *)(DAT_180115c10 + 0x1ec8);
  if ((iVar1 < *(int *)(DAT_180115c10 + 0x1eb8)) &&
     (lVar3 = *(longlong *)(DAT_180115c10 + 0x13a8), (*(uint *)(lVar3 + 0x14) & 0x10000000) == 0)) {
    if (iVar1 < 0) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    uVar2 = *(uint *)((longlong)iVar1 * 0x38 + 0x18 + *(longlong *)(lVar4 + 0x1ec0));
    in_RAX = (ulonglong)uVar2;
    if (((*(uint *)(lVar3 + 0x170) == uVar2) &&
        (lVar4 = *(longlong *)((longlong)iVar1 * 0x38 + 8 + *(longlong *)(lVar4 + 0x1ec0)),
        lVar4 != 0)) && ((*(uint *)(lVar4 + 0x14) & 0x10000000) != 0)) {
      in_RAX = FUN_18005a3e0(lVar4,lVar3,'\x01');
      if ((char)in_RAX != '\0') {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


void FUN_180099c80(byte *param_1,byte *param_2,byte param_3,char param_4)

{
  FUN_180099ca0(param_1,(byte *)0x0,param_2,param_3,param_4);
  return;
}


ulonglong FUN_180099ca0(byte *param_1,byte *param_2,byte *param_3,byte param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;

  lVar5 = DAT_180115c10;
  uVar10 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar10 + 0xce) = 1;
  lVar6 = DAT_180115c10;
  lVar5 = *(longlong *)(lVar5 + 0x13a8);
  if (*(char *)(lVar5 + 0xd1) != '\0') {
    return uVar10 & 0xffffffffffffff00;
  }
  fVar1 = *(float *)(lVar5 + 0x118);
  fVar2 = *(float *)(lVar5 + 0x11c);
  FUN_180050b60((undefined8 *)&local_c0,param_1,(byte *)0x0,'\x01',-1.0);
  uVar9 = FUN_180099bd0();
  if ((char)uVar9 != '\0') {
    FUN_1800629d0(0x2000,'\x01');
  }
  FUN_180062870(param_1);
  if (param_5 == '\0') {
    FUN_18004f6e0('\x01');
  }
  if (*(int *)(lVar5 + 0x1cc) == 0) {
    fVar1 = *(float *)(lVar5 + 0x150);
    fVar2 = *(float *)(lVar5 + 0x11c);
    fVar13 = (float)(int)(*(float *)(lVar6 + 0xc78) * 0.5) + *(float *)(lVar5 + 0x118);
    *(float *)(lVar5 + 0x118) = fVar13;
    uVar4 = *(ushort *)(lVar5 + 400);
    FUN_180062e60(0xe,*(float *)(lVar6 + 0xc78) + *(float *)(lVar6 + 0xc78));
    local_b8 = local_c0;
    local_b4 = 0;
    uVar10 = FUN_18009c3c0(&DAT_1800d8c40,param_4,0xa800000,&local_b8);
    bVar7 = (byte)uVar10;
    FUN_180062450(1);
    if ((*(uint *)(lVar6 + 0x1d90) & 0x100) != 0) {
      FUN_180064450(CONCAT44(fVar1 + fVar2,(float)uVar4 + fVar13),param_1,(byte *)0x0,'\x01');
    }
    *(float *)(lVar5 + 0x118) =
         *(float *)(lVar5 + 0x118) - (float)(int)(*(float *)(lVar6 + 0xc78) * 0.5);
  }
  else {
    if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
      fVar13 = 0.0;
    }
    else {
      pfVar11 = (float *)FUN_180050b60((undefined8 *)&local_b8,param_2,(byte *)0x0,'\0',-1.0);
      fVar13 = *pfVar11;
    }
    if ((param_3 == (byte *)0x0) || (*param_3 == 0)) {
      fVar15 = 0.0;
    }
    else {
      pfVar11 = (float *)FUN_180050b60((undefined8 *)&local_b8,param_3,(byte *)0x0,'\0',-1.0);
      fVar15 = *pfVar11;
    }
    fVar12 = FUN_180094730((uint *)(lVar5 + 0x184),fVar13,local_c0,fVar15,
                           (float)(int)(*(float *)(lVar6 + 0x10c0) * 1.2));
    pfVar11 = (float *)FUN_180056870((undefined8 *)&local_b8);
    fVar3 = *pfVar11;
    local_b4 = local_bc;
    local_b8 = fVar12;
    uVar10 = FUN_18009c3c0(&DAT_1800d8c40,0,0xb800000,&local_b8);
    bVar7 = (byte)uVar10;
    if ((*(uint *)(lVar6 + 0x1d90) & 0x100) != 0) {
      fVar14 = fVar2 + 0.0;
      fVar16 = 0.0;
      if (0.0 <= fVar3 - fVar12) {
        fVar16 = fVar3 - fVar12;
      }
      FUN_180064450(CONCAT44(fVar14,fVar1 + (float)*(ushort *)(lVar5 + 400)),param_1,(byte *)0x0,
                    '\x01');
      if (0.0 < fVar13) {
        FUN_180064450(CONCAT44(fVar14,(float)*(ushort *)(lVar5 + 0x18e) + fVar1),param_2,(byte *)0x0
                      ,'\x01');
      }
      if (0.0 < fVar15) {
        FUN_180062b60(0,(undefined8 *)(lVar6 + 0xd34));
        FUN_18005b350(&DAT_1800efd14,&DAT_1800e51f4);
        FUN_180064450(CONCAT44(fVar14,(float)*(ushort *)(lVar5 + 0x192) + fVar16 + fVar1),param_3,
                      (byte *)0x0,'\0');
        FUN_180062370(1);
      }
      if (param_4 != 0) {
        fVar13 = *(float *)(lVar6 + 0x10c0);
        uVar8 = FUN_1800567e0(0,1.0);
        FUN_180077ce0(*(int **)(lVar5 + 0x2c0),
                      CONCAT44(*(float *)(lVar6 + 0x10c0) * 0.134 * 0.5 + fVar2,
                               (float)*(ushort *)(lVar5 + 0x194) + fVar16 +
                               *(float *)(lVar6 + 0x10c0) * 0.4 + fVar1),uVar8,fVar13 * 0.866);
      }
    }
  }
  if (param_5 == '\0') {
    FUN_180053a10();
  }
  FUN_180062210();
  if ((char)uVar9 != '\0') {
    FUN_180062270();
  }
  return (ulonglong)bVar7;
}


void FUN_18009a190(int *param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined2 local_22;

  iVar1 = param_1[1];
  if (iVar1 < 0) {
    iVar1 = iVar1 / 2 + iVar1;
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    FUN_18009fb50(param_1,iVar4);
  }
  *param_1 = 0;
  if (param_1[1] == 0) {
    FUN_18009fb50(param_1,8);
  }
  lVar3 = (longlong)*param_1;
  lVar2 = *(longlong *)(param_1 + 2);
  *(undefined4 *)(lVar2 + lVar3 * 0x18) = 1;
  *(undefined1 *)(lVar2 + 4 + lVar3 * 0x18) = param_2;
  *(undefined1 *)(lVar2 + 5 + lVar3 * 0x18) = 0;
  *(undefined2 *)(lVar2 + 6 + lVar3 * 0x18) = local_22;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0xffffffffffffffff;
  *param_1 = *param_1 + 1;
  return;
}


void FUN_18009a230(int *param_1,char param_2,int param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined2 local_42;

  iVar1 = *param_1;
  lVar6 = (longlong)iVar1;
  if ((((0 < iVar1) && (param_4 == param_5)) && ((*(byte *)(param_1 + 0xd) & 4) == 0)) &&
     (((lVar2 = *(longlong *)(param_1 + 2), *(int *)(lVar2 + -0x18 + lVar6 * 0x18) == 2 &&
       (*(longlong *)(lVar2 + -8 + lVar6 * 0x18) == *(longlong *)(param_1 + 0x12))) &&
      (*(char *)(lVar2 + -0x14 + lVar6 * 0x18) == param_2)))) {
    *(longlong *)(lVar2 + -8 + lVar6 * 0x18) = param_5;
    return;
  }
  iVar3 = param_1[1];
  lVar6 = param_4;
  if (0 < param_3) {
    lVar6 = param_5;
    param_5 = param_4;
  }
  if (iVar1 == iVar3) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    iVar5 = iVar1 + 1;
    if (iVar1 + 1 < iVar3) {
      iVar5 = iVar3;
    }
    FUN_18009fb50(param_1,iVar5);
  }
  lVar4 = (longlong)*param_1;
  lVar2 = *(longlong *)(param_1 + 2);
  *(undefined4 *)(lVar2 + lVar4 * 0x18) = 2;
  *(char *)(lVar2 + 4 + lVar4 * 0x18) = param_2;
  *(char *)(lVar2 + 5 + lVar4 * 0x18) = (char)param_3;
  *(undefined2 *)(lVar2 + 6 + lVar4 * 0x18) = local_42;
  *(longlong *)(lVar2 + 8 + lVar4 * 0x18) = param_5;
  *(longlong *)(lVar2 + 0x10 + lVar4 * 0x18) = lVar6;
  *param_1 = *param_1 + 1;
  return;
}


void FUN_18009a320(int param_1,char *param_2,byte *param_3)

{
  uint uVar1;
  int *piVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  float fVar24;
  float fVar25;
  byte local_res20;
  char local_76;
  undefined2 local_62;

  lVar7 = DAT_180115c10;
  local_res20 = *param_3;
  uVar16 = (ulonglong)local_res20;
  cVar23 = *param_2;
  piVar2 = *(int **)(DAT_180115c10 + 0x2300);
  pwVar3 = *(wchar_t **)(DAT_180115c10 + 0x13a8);
  lVar4 = *(longlong *)(piVar2 + 10);
  if (local_res20 != 0) {
    *(undefined1 *)((longlong)piVar2 + 0x5a) = 1;
  }
  local_76 = '\0';
  pbVar15 = param_3;
  if ((*(byte *)(lVar7 + 0x1d90) & 1) != 0) {
    uVar8 = FUN_180059410(0x20,(float *)(ulonglong)(uint)param_1,(float *)param_3,uVar16);
    local_76 = (char)uVar8;
  }
  if ((*(char *)((longlong)piVar2 + 0x5a) == '\0') && (local_76 == '\0')) {
    return;
  }
  uVar1 = piVar2[0xd];
  lVar5 = *(longlong *)(lVar7 + 0x1d60);
  uVar18 = piVar2[0x15] & 0x1000;
  bVar20 = uVar18 != 0;
  uVar19 = piVar2[0x15] & 0x2000;
  bVar21 = uVar19 != 0;
  bVar22 = false;
  if (*(int *)(lVar7 + 0x1efc) == param_1) {
    bVar22 = *(longlong *)(lVar4 + 0x18) == -1;
  }
  if (*(char *)((longlong)piVar2 + 0x59) == '\0') {
    iVar11 = piVar2[1];
    if (iVar11 < 0) {
      iVar11 = iVar11 + iVar11 / 2;
      iVar12 = 0;
      if (0 < iVar11) {
        iVar12 = iVar11;
      }
      FUN_18009fb50(piVar2,iVar12);
    }
    *piVar2 = 0;
    *(undefined1 *)((longlong)piVar2 + 0x59) = 1;
  }
  if (*(int *)(lVar7 + 0x20bc) == param_1) {
    if ((uVar1 & 8) == 0) {
      if (uVar18 == 0) {
        cVar23 = '\x01';
        local_res20 = 1;
      }
      else if (uVar19 != 0) {
        local_res20 = 1;
      }
      goto LAB_18009a476;
    }
    if (uVar19 != 0) {
      local_res20 = 1;
      goto LAB_18009a476;
    }
    if (uVar18 != 0) goto LAB_18009a476;
LAB_18009a47b:
    *(longlong *)(lVar4 + 0x18) = lVar5;
    *(char *)(lVar4 + 0x14) = cVar23;
  }
  else {
LAB_18009a476:
    if (bVar22) goto LAB_18009a47b;
  }
  if (((piVar2[0x14] != 0) && (*(int *)(DAT_180115c10 + 0x2298) == piVar2[0x14])) &&
     (*(char *)(DAT_180115c10 + 0x229c) != '\0')) {
    if (((*(float *)(DAT_180115c10 + 0x22f8) <= *(float *)(lVar7 + 0x1d98)) ||
        (*(float *)(lVar7 + 0x1da0) < *(float *)(DAT_180115c10 + 0x22f0) ||
         *(float *)(lVar7 + 0x1da0) == *(float *)(DAT_180115c10 + 0x22f0))) ||
       ((*(float *)(DAT_180115c10 + 0x22f4) < *(float *)(lVar7 + 0x1d94) ||
         *(float *)(DAT_180115c10 + 0x22f4) == *(float *)(lVar7 + 0x1d94) ||
        (*(float *)(lVar7 + 0x1d9c) < *(float *)(DAT_180115c10 + 0x22ec) ||
         *(float *)(lVar7 + 0x1d9c) == *(float *)(DAT_180115c10 + 0x22ec))))) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if (((*(float *)(DAT_180115c10 + 0x22e8) <= *(float *)(lVar7 + 0x1d98)) ||
        (*(float *)(lVar7 + 0x1da0) < *(float *)(DAT_180115c10 + 0x22e0) ||
         *(float *)(lVar7 + 0x1da0) == *(float *)(DAT_180115c10 + 0x22e0))) ||
       ((*(float *)(DAT_180115c10 + 0x22e4) < *(float *)(lVar7 + 0x1d94) ||
         *(float *)(DAT_180115c10 + 0x22e4) == *(float *)(lVar7 + 0x1d94) ||
        (*(float *)(lVar7 + 0x1d9c) < *(float *)(DAT_180115c10 + 0x22dc) ||
         *(float *)(lVar7 + 0x1d9c) == *(float *)(DAT_180115c10 + 0x22dc))))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar22) {
      if ((!bVar6) && (cVar23 == '\0')) {
LAB_18009a56a:
        if ((*(int *)(lVar4 + 0x10) < 1) && (*(char *)(DAT_180115c10 + 0x229f) != '\0')) {
          local_res20 = 1;
          *(undefined1 *)(DAT_180115c10 + 0x229f) = 0;
        }
        else {
          iVar11 = *piVar2;
          pbVar15 = (byte *)(longlong)iVar11;
          cVar23 = cVar23 == '\0';
          if ((((iVar11 < 1) || ((*(byte *)(piVar2 + 0xd) & 4) != 0)) ||
              (lVar17 = *(longlong *)(piVar2 + 2),
              *(int *)(lVar17 + -0x18 + (longlong)pbVar15 * 0x18) != 2)) ||
             ((*(longlong *)(lVar17 + -8 + (longlong)pbVar15 * 0x18) != *(longlong *)(piVar2 + 0x12)
              || (*(char *)(lVar17 + -0x14 + (longlong)pbVar15 * 0x18) != cVar23)))) {
            iVar12 = piVar2[1];
            if (iVar11 == iVar12) {
              if (iVar12 == 0) {
                uVar18 = 8;
              }
              else {
                uVar18 = iVar12 / 2 + iVar12;
              }
              uVar19 = iVar11 + 1U;
              if ((int)(iVar11 + 1U) < (int)uVar18) {
                uVar19 = uVar18;
              }
              pbVar15 = (byte *)(ulonglong)uVar19;
              FUN_18009fb50(piVar2,uVar19);
            }
            lVar9 = (longlong)*piVar2;
            lVar17 = *(longlong *)(piVar2 + 2);
            *(undefined4 *)(lVar17 + lVar9 * 0x18) = 2;
            *(char *)(lVar17 + 4 + lVar9 * 0x18) = cVar23;
            *(undefined1 *)(lVar17 + 5 + lVar9 * 0x18) = 1;
            *(undefined2 *)(lVar17 + 6 + lVar9 * 0x18) = local_62;
            *(longlong *)(lVar17 + 8 + lVar9 * 0x18) = lVar5;
            *(longlong *)(lVar17 + 0x10 + lVar9 * 0x18) = lVar5;
            *piVar2 = *piVar2 + 1;
          }
          else {
            *(longlong *)(lVar17 + -8 + (longlong)pbVar15 * 0x18) = lVar5;
          }
        }
        iVar12 = *(int *)(lVar4 + 0x10) + 1;
        iVar11 = 1;
        if (0 < iVar12) {
          iVar11 = iVar12;
        }
        *(int *)(lVar4 + 0x10) = iVar11;
      }
    }
    else if (bVar6) goto LAB_18009a56a;
  }
  if (local_76 == '\0') {
LAB_18009a6b8:
    if (local_res20 == 0) goto LAB_18009a6e2;
LAB_18009a6cc:
    if ((*(int *)(lVar7 + 0x1f10) != param_1) || ((*(byte *)(lVar7 + 0x1f1c) & 1) == 0))
    goto LAB_18009a6e2;
    bVar22 = true;
  }
  else {
    uVar14 = 0;
    uVar13 = 1;
    uVar10 = FUN_180059c10(1,'\0');
    if (((char)uVar10 == '\0') || ((uVar1 & 8) != 0)) goto LAB_18009a6b8;
    if ((*(int *)(lVar7 + 0x141c) != 0) && (*(int *)(lVar7 + 0x141c) != param_1)) {
      FUN_180051730(uVar13,uVar14,pbVar15,uVar16);
    }
    FUN_1800672c0(param_1,pwVar3,pbVar15,uVar16);
    if (local_res20 != 0) goto LAB_18009a6cc;
    if (cVar23 == '\0') {
      local_res20 = 1;
      bVar20 = false;
      bVar21 = false;
      goto LAB_18009a6cc;
    }
LAB_18009a6e2:
    bVar22 = false;
  }
  lVar17 = DAT_180115c10;
  if ((local_res20 == 0) || ((bVar22 && (cVar23 != '\0')))) goto LAB_18009a8a6;
  if ((*(int *)(lVar7 + 0x20bc) == param_1) || (iVar11 = 1, *(int *)(lVar7 + 0x1f10) == param_1)) {
    iVar11 = *(int *)(lVar7 + 8000);
  }
  if (((((uVar1 & 0xc0) != 0) && (cVar23 == '\0')) && (*(char *)(lVar7 + 0x229c) == '\0')) &&
     (((*(char *)(lVar7 + 0x229d) == '\0' && (iVar11 == 1)) && (*(short *)(lVar7 + 0xb22) == 1)))) {
    *(int *)(DAT_180115c10 + 0x2298) = piVar2[0x14];
    *(bool *)(lVar17 + 0x229e) = lVar5 == -1;
    *(bool *)(lVar17 + 0x229f) = lVar5 == -1;
    *(undefined1 *)(lVar17 + 0x229d) = 1;
    *(undefined2 *)(lVar17 + 0x22a4) = *(undefined2 *)(lVar17 + 0x108);
    uVar10 = *(undefined8 *)(*(longlong *)(lVar17 + 0x13a8) + 0x128);
    fVar24 = (float)*(undefined8 *)(lVar17 + 0xe8) - (float)uVar10;
    fVar25 = (float)((ulonglong)*(undefined8 *)(lVar17 + 0xe8) >> 0x20) -
             (float)((ulonglong)uVar10 >> 0x20);
    *(undefined8 *)(lVar17 + 0x22b8) = 0;
    *(float *)(lVar17 + 0x22a8) = fVar24;
    *(float *)(lVar17 + 0x22ac) = fVar25;
    *(float *)(lVar17 + 0x22b0) = fVar24;
    *(float *)(lVar17 + 0x22b4) = fVar25;
  }
  if ((uVar1 & 0x10) != 0) goto LAB_18009a807;
  if ((uVar1 & 1) == 0) {
    if (((iVar11 == 1) || (*(int *)(lVar7 + 0x1f10) == param_1)) && (!bVar20)) {
      if (((uVar1 & 0x20) == 0) || (cVar23 == '\0')) goto LAB_18009a7fd;
      goto LAB_18009a807;
    }
    if (1 < iVar11 - 2U) goto LAB_18009a807;
    if (!bVar21) goto LAB_18009a867;
    if (!bVar20) goto LAB_18009a7fd;
LAB_18009a818:
    lVar17 = *(longlong *)(lVar4 + 0x18);
    if (*(longlong *)(lVar4 + 0x18) == -1) {
      *(longlong *)(lVar4 + 0x18) = lVar5;
      lVar17 = lVar5;
    }
    if ((uVar1 & 8) == 0) {
      if (bVar20) {
LAB_18009a833:
        if (*(char *)(lVar4 + 0x14) != -1) {
          bVar22 = *(char *)(lVar4 + 0x14) != '\0';
          goto LAB_18009a84e;
        }
      }
      bVar22 = true;
    }
    else {
      if (*(char *)((longlong)piVar2 + 0x5b) != '\0') goto LAB_18009a833;
      bVar22 = cVar23 == '\0';
    }
LAB_18009a84e:
    iVar11 = -1;
    if (*(char *)((longlong)piVar2 + 0x5d) != '\0') {
      iVar11 = 1;
    }
  }
  else {
LAB_18009a7fd:
    FUN_18009a190(piVar2,0);
LAB_18009a807:
    if ((bVar21) && ((uVar1 & 1) == 0)) goto LAB_18009a818;
LAB_18009a867:
    if (((uVar1 & 8) != 0) || (bVar20)) {
      cVar23 = cVar23 == '\0';
    }
    else {
      cVar23 = true;
    }
    *(longlong *)(lVar4 + 0x18) = lVar5;
    iVar11 = 1;
    lVar17 = lVar5;
    bVar22 = (bool)cVar23;
  }
  FUN_18009a230(piVar2,bVar22,iVar11,lVar17,lVar5);
LAB_18009a8a6:
  if (*(longlong *)(lVar4 + 0x18) == lVar5) {
    *(bool *)(lVar4 + 0x14) = cVar23 != '\0';
  }
  if (*(int *)(lVar7 + 0x1efc) == param_1) {
    *(longlong *)(lVar4 + 0x20) = lVar5;
    *(bool *)(lVar4 + 0x15) = cVar23 != '\0';
  }
  if (*(longlong *)(lVar4 + 0x20) == lVar5) {
    *(undefined1 *)(piVar2 + 0x17) = 1;
  }
  *(longlong *)(piVar2 + 0x12) = lVar5;
  *param_2 = cVar23;
  *param_3 = local_res20;
  return;
}


void FUN_18009a920(int param_1,char *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;

  lVar5 = DAT_180115c10;
  cVar6 = *param_2;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x2300);
  if (*(char *)(lVar1 + 0x5a) != '\0') {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    lVar3 = *(longlong *)(DAT_180115c10 + 0x1d60);
    if (*(int *)(DAT_180115c10 + 0x1d58) != *(int *)(DAT_180115c10 + 0x1d44)) {
      FID_conflict__assert
                (L"g.NextItemData.FocusScopeId == g.CurrentFocusScopeId && \"Forgot to call SetNextItemSelectionUserData() prior to item, required in BeginMultiSelect()/EndMultiSelect() scope\""
                 ,
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x1e71);
    }
    if (*(char *)(lVar1 + 0x58) != -1) {
      cVar6 = *(char *)(lVar1 + 0x58) == '\x01';
    }
    if (*(char *)(lVar1 + 0x5b) != '\0') {
      if ((param_1 == 0) || ((*(uint *)(lVar1 + 0x54) & 0x2000) == 0)) {
        FID_conflict__assert
                  (L"id != 0 && (ms->KeyMods & ImGuiMod_Shift) != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x1e7d);
      }
      if ((*(char *)(lVar1 + 0x5e) == '\0') && (*(int *)(lVar5 + 0x20bc) == param_1)) {
        *(undefined1 *)(lVar1 + 0x5e) = 1;
        if (*(longlong *)(lVar2 + 0x18) == -1) {
          *(longlong *)(lVar2 + 0x18) = lVar3;
          *(bool *)(lVar2 + 0x14) = cVar6 != '\0';
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (((*(longlong *)(lVar2 + 0x18) == lVar3) || (bVar4)) ||
         (*(char *)(lVar1 + 0x5d) != *(char *)(lVar1 + 0x5e))) {
        if ((*(longlong *)(lVar2 + 0x18) == -1) || (*(char *)(lVar2 + 0x14) == -1)) {
          FID_conflict__assert
                    (L"storage->RangeSrcItem != ((ImGuiSelectionUserData)-1) && storage->RangeSelected != -1"
                     ,
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                     ,0x1e8a);
        }
        cVar6 = *(char *)(lVar2 + 0x14) != '\0';
      }
      else if (((*(uint *)(lVar1 + 0x54) & 0x1000) == 0) && ((*(byte *)(lVar1 + 0x34) & 0x10) == 0))
      {
        cVar6 = '\0';
      }
    }
    *param_2 = cVar6;
  }
  if (param_3 != (uint *)0x0) {
    if (((cVar6 == '\0') ||
        ((*(int *)(lVar5 + 0x141c) == param_1 && (*(char *)(lVar5 + 0x142b) != '\0')))) &&
       ((*(uint *)(lVar1 + 0x34) & 0x4000) == 0)) {
      *param_3 = *param_3 & 0xffffffdf | 0x80010;
      return;
    }
    *param_3 = *param_3 | 0x80020;
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18009aac0(longlong param_1,uint param_2)

{
  int *piVar1;
  size_t sVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStackY_48 [32];
  byte local_18 [8];
  ulonglong local_10;

  local_10 = DAT_180112300 ^ (ulonglong)auStackY_48;
  FUN_1800585a0(local_18,param_2);
  sVar2 = strlen((char *)local_18);
  piVar1 = *(int **)(param_1 + 8);
  if ((local_18[0] != 10) || (*(char *)((longlong)piVar1 + 0x17) == '\0')) {
    iVar4 = (int)sVar2;
    if (((char)piVar1[3] == '\0') ||
       ((piVar1[1] != piVar1[2] || (*(int *)(param_1 + 0x18) <= *piVar1)))) {
      FUN_1800a03a0(param_1,piVar1);
      uVar3 = FUN_18009b370(param_1,*piVar1,(undefined8 *)local_18,iVar4);
      if ((char)uVar3 == '\0') goto LAB_18009ab9d;
      FUN_18009fbc0((undefined8 *)(piVar1 + 8),*piVar1,0,iVar4);
    }
    else {
      FUN_18009ff00(param_1,(longlong)piVar1,*piVar1,1,1);
      FUN_18009b230(param_1,*piVar1,1);
      uVar3 = FUN_18009b370(param_1,*piVar1,(undefined8 *)local_18,iVar4);
      if ((char)uVar3 == '\0') goto LAB_18009ab9d;
    }
    *piVar1 = *piVar1 + iVar4;
    *(undefined1 *)((longlong)piVar1 + 0x16) = 0;
  }
LAB_18009ab9d:
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined4 *)(param_1 + 100) = 0xbe99999a;
  return;
}


void FUN_18009abd0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;

  lVar2 = DAT_180115c10;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x10b8);
  lVar3 = FUN_180072830(lVar1,0x2a);
  *(undefined4 *)(lVar2 + 0x2414) = *(undefined4 *)(lVar1 + 0x14);
  *(undefined4 *)(lVar2 + 0x2460) = *(undefined4 *)(lVar1 + 0x60);
  *(undefined4 *)(lVar2 + 0x2464) = *(undefined4 *)(lVar1 + 100);
  *(undefined4 *)(lVar2 + 0x2468) = *(undefined4 *)(lVar1 + 0x68);
  *(undefined8 *)(lVar2 + 0x2440) = *(undefined8 *)(lVar1 + 0x40);
  *(longlong *)(lVar2 + 0x2438) = lVar3;
  *(undefined4 *)(lVar2 + 0x2410) = *(undefined4 *)(lVar3 + 4);
  if (((*(int *)(lVar2 + 0x2428) != 0) || (*(int *)(lVar2 + 0x2400) != 0)) ||
     (*(int *)(lVar2 + 0x2418) != 0)) {
    FID_conflict__assert
              (L"out_font->Glyphs.Size == 0 && out_font->IndexAdvanceX.Size == 0 && out_font->IndexLookup.Size == 0"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x10bd);
  }
  FUN_180062670(lVar2 + 0x2400);
  return;
}


ulonglong FUN_18009ac90(byte *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  char *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res18;
  float local_res1c;
  char local_res20 [8];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;

  lVar5 = DAT_180115c10;
  uVar10 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar10 + 0xce) = 1;
  lVar6 = DAT_180115c10;
  plVar3 = *(longlong **)(lVar5 + 0x13a8);
  if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
    uVar8 = FUN_180056b80(plVar3,param_1,0);
    FUN_180050b60((undefined8 *)&local_c0,param_1,(byte *)0x0,'\x01',-1.0);
    fVar13 = FUN_180056a00();
    fVar1 = *(float *)(plVar3 + 0x23);
    fVar2 = *(float *)((longlong)plVar3 + 0x11c);
    if (local_c0 <= 0.0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = local_c0 + *(float *)(lVar6 + 0xc80);
    }
    local_a4 = *(float *)(lVar6 + 0xc6c) + *(float *)(lVar6 + 0xc6c) + local_bc + fVar2;
    local_a8 = fVar14 + fVar13 + fVar1;
    local_res1c = local_a4 - fVar2;
    local_res18 = local_a8 - fVar1;
    local_b0 = fVar1;
    local_ac = fVar2;
    FUN_18005aca0(&local_res18,*(float *)(lVar6 + 0xc6c));
    uVar10 = FUN_18005a670(&local_b0,(wchar_t *)(ulonglong)uVar8,(float *)0x0,0);
    if ((char)uVar10 != '\0') {
      fVar14 = (fVar13 - 1.0) * 0.5;
      local_c8 = (float)(int)((fVar1 + fVar13 + fVar1) * 0.5 + 0.5);
      local_c4 = (float)(int)((fVar2 + fVar13 + fVar2) * 0.5 + 0.5);
      bVar7 = FUN_18008f030(&local_b0,(float *)(ulonglong)uVar8,(char *)&local_res18,local_res20,0);
      if (bVar7 != 0) {
        FUN_18005b4c0(uVar8);
      }
      FUN_180064200(&local_b0,uVar8,0);
      uVar8 = FUN_180079e90(plVar3[0x58],fVar14);
      piVar4 = (int *)plVar3[0x58];
      if ((local_res20[0] == '\0') || (local_res18._0_1_ == '\0')) {
        iVar11 = (local_res18._0_1_ != '\0') + 7;
      }
      else {
        iVar11 = 9;
      }
      uVar9 = FUN_1800567e0(iVar11,1.0);
      uVar10 = (ulonglong)uVar9;
      FUN_18006ea70(piVar4,&local_c8,fVar14,uVar9,uVar8);
      if (param_2 != '\0') {
        piVar4 = (int *)plVar3[0x58];
        uVar9 = FUN_1800567e0(0x12,1.0);
        uVar10 = (ulonglong)uVar9;
        fVar15 = 1.0;
        if (1.0 <= (float)(int)(fVar13 / 6.0)) {
          fVar15 = (float)(int)(fVar13 / 6.0);
        }
        FUN_18006ea70(piVar4,&local_c8,fVar14 - fVar15,uVar9,0);
      }
      fVar15 = *(float *)(lVar6 + 0xc74);
      if (0.0 < fVar15) {
        piVar4 = (int *)plVar3[0x58];
        uVar9 = FUN_1800567e0(6,1.0);
        local_res1c = local_c4 + 1.0;
        local_res18 = local_c8 + 1.0;
        FUN_18006e990(piVar4,&local_res18,fVar14,uVar9,uVar8,fVar15);
        piVar4 = (int *)plVar3[0x58];
        fVar15 = *(float *)(lVar6 + 0xc74);
        uVar9 = FUN_1800567e0(5,1.0);
        uVar10 = (ulonglong)uVar9;
        FUN_18006e990(piVar4,&local_c8,fVar14,uVar9,uVar8,fVar15);
      }
      local_b8 = fVar1 + fVar13 + *(float *)(lVar6 + 0xc80);
      fStack_b4 = fVar2 + *(float *)(lVar6 + 0xc6c);
      if (*(char *)(lVar6 + 0x2678) != '\0') {
        pcVar12 = "( )";
        if (param_2 != '\0') {
          pcVar12 = "(x)";
        }
        FUN_18005b180((longlong)&local_b8,pcVar12,(char *)0x0,uVar10);
      }
      if (0.0 < local_c0) {
        FUN_180064450(CONCAT44(fStack_b4,local_b8),param_1,(byte *)0x0,'\x01');
      }
      return (ulonglong)bVar7;
    }
  }
  return uVar10 & 0xffffffffffffff00;
}


void FUN_18009b090(int *param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_94;
  undefined4 uStack_8c;

  fVar3 = 0.0;
  if ((0.0 <= param_5) && (fVar3 = 1.0, param_5 <= 1.0)) {
    fVar3 = param_5;
  }
  fStack_94 = (float)((ulonglong)param_3 >> 0x20);
  fVar4 = (float)param_3;
  fVar2 = (float)param_2 + fVar4;
  uStack_8c = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar1 = (int)(fVar3 * 255.0 + 0.5) << 0x18;
  FUN_1800768a0(param_1,CONCAT44(uStack_8c,fVar2 + 1.0),CONCAT44(fStack_94 + 1.0,fVar4 + 2.0),1,
                uVar1);
  FUN_1800768a0(param_1,CONCAT44(uStack_8c,fVar2),param_3,1,uVar1 | 0xffffff);
  fVar3 = ((float)param_2 + param_4) - fVar4;
  FUN_1800768a0(param_1,CONCAT44(uStack_8c,fVar3 - 1.0),CONCAT44(fStack_94 + 1.0,fVar4 + 2.0),0,
                uVar1);
  FUN_1800768a0(param_1,CONCAT44(uStack_8c,fVar3),param_3,0,uVar1 | 0xffffff);
  return;
}


void FUN_18009b230(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;

  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x30)) {
    FID_conflict__assert
              (L"obj->TextSrc == obj->TextA.Data",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0xff4);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2);
  FUN_1800d1c20(puVar1,(undefined8 *)((longlong)puVar1 + (longlong)param_3),
                (longlong)(((*(int *)(param_1 + 0x18) - param_2) - param_3) + 1));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_3;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  return;
}


undefined1 FUN_18009b2a0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x18) < param_2) {
    FID_conflict__assert
              (L"idx <= obj->TextLen",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0xf84);
  }
  return *(undefined1 *)((longlong)param_2 + *(longlong *)(param_1 + 0x20));
}


float FUN_18009b2f0(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  uint local_res10 [6];

  FUN_180058410(local_res10,(byte *)((longlong)param_2 + param_1[4] + (longlong)param_3),
                (byte *)((longlong)(int)param_1[3] + param_1[4]));
  if ((short)local_res10[0] == 10) {
    return -1.0;
  }
  lVar1 = *param_1;
  piVar2 = *(int **)(lVar1 + 0x10b8);
  if ((int)(local_res10[0] & 0xffff) < *piVar2) {
    return *(float *)(*(longlong *)(piVar2 + 2) + (ulonglong)(local_res10[0] & 0xffff) * 4) *
           *(float *)(lVar1 + 0x10c8);
  }
  return (float)piVar2[4] * *(float *)(lVar1 + 0x10c8);
}


ulonglong FUN_18009b370(longlong param_1,int param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;

  iVar5 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x10) & 0x400000;
  lVar7 = (longlong)param_2;
  if (iVar5 < param_2) {
    FID_conflict__assert
              (L"pos <= text_len",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1000);
    in_RAX = extraout_RAX;
  }
  if ((uVar6 == 0) && (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x18) + 1 + param_4)) {
LAB_18009b401:
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x30)) {
      FID_conflict__assert
                (L"obj->TextSrc == obj->TextA.Data",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x1006);
    }
    uVar2 = param_4 + 1 + iVar5;
    in_RAX = (ulonglong)uVar2;
    if (*(int *)(param_1 + 0x28) < (int)uVar2) {
      if (uVar6 == 0) goto LAB_18009b401;
      iVar4 = 0x20;
      if (0x1f < param_4) {
        iVar4 = param_4;
      }
      FUN_18006dac0((int *)(param_1 + 0x28),iVar4 + 1 + iVar5);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (param_2 != iVar5) {
      FUN_1800d1c20((undefined8 *)(param_4 + lVar7 + lVar1),(undefined8 *)(lVar7 + lVar1),
                    (longlong)(iVar5 - param_2));
    }
    FUN_1800d1c20((undefined8 *)(lVar1 + lVar7),param_3,(longlong)param_4);
    iVar5 = param_4 + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar5;
    *(undefined1 *)(param_1 + 0x6a) = 1;
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x28) <= iVar5)) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    lVar7 = *(longlong *)(param_1 + 0x30);
    *(undefined1 *)(iVar5 + lVar7) = 0;
    uVar3 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  }
  return uVar3;
}


void FUN_18009b4b0(undefined4 *param_1,longlong *param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_res18 [4];

  lVar2 = param_2[4];
  pbVar7 = (byte *)((int)param_2[3] + lVar2);
  piVar3 = *(int **)(*param_2 + 0x10b8);
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar1 = *(float *)(*param_2 + 0x10c0);
  fVar8 = (float)piVar3[5];
  pbVar6 = (byte *)(lVar2 + param_3);
  do {
    if (pbVar7 <= pbVar6) {
LAB_18009b5ac:
      fVar8 = fVar9;
      if (fVar9 <= fVar11) {
        fVar8 = fVar11;
      }
      if ((0.0 < fVar9) || (fVar10 == 0.0)) {
        fVar10 = fVar10 + fVar1;
      }
      param_1[2] = fVar10;
      param_1[4] = fVar10;
      param_1[5] = ((int)pbVar6 - (int)lVar2) - param_3;
      param_1[1] = fVar8;
      *param_1 = 0;
      param_1[3] = 0;
      return;
    }
    local_res18[0] = (uint)(char)*pbVar6;
    if (local_res18[0] < 0x80) {
      lVar5 = 1;
    }
    else {
      iVar4 = FUN_180058410(local_res18,pbVar6,pbVar7);
      lVar5 = (longlong)iVar4;
    }
    pbVar6 = pbVar6 + lVar5;
    if (local_res18[0] == 10) {
      fVar11 = 0.0;
      if (0.0 <= fVar9) {
        fVar11 = fVar9;
      }
      fVar9 = 0.0;
      fVar10 = fVar1 + 0.0;
      goto LAB_18009b5ac;
    }
    if (local_res18[0] != 0xd) {
      if ((int)local_res18[0] < *piVar3) {
        fVar9 = fVar9 + *(float *)(*(longlong *)(piVar3 + 2) + (ulonglong)local_res18[0] * 4) *
                        (fVar1 / fVar8);
      }
      else {
        fVar9 = fVar9 + (float)piVar3[4] * (fVar1 / fVar8);
      }
    }
  } while( true );
}


uint FUN_18009b620(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;

  if (param_2 < 1) {
LAB_18009b679:
    uVar3 = 0xffffffff;
  }
  else {
    uVar1 = FUN_180058660(*(ulonglong *)(param_1 + 0x20),
                          (longlong)param_2 + *(ulonglong *)(param_1 + 0x20));
    uVar3 = (int)uVar1 - *(int *)(param_1 + 0x20);
    while ((-1 < (int)uVar3 && (uVar2 = FUN_18009fa30(param_1,uVar3), (int)uVar2 == 0))) {
      if (uVar3 == 0) goto LAB_18009b679;
      uVar1 = FUN_180058660(*(ulonglong *)(param_1 + 0x20),
                            (ulonglong)uVar3 + *(ulonglong *)(param_1 + 0x20));
      uVar3 = (int)uVar1 - *(int *)(param_1 + 0x20);
    }
  }
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  return uVar3;
}


int FUN_18009b6a0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  uint local_res18 [2];

  if (*(char *)(*param_1 + 0x60) != '\0') {
    iVar2 = FUN_18009b750((longlong)param_1,param_2);
    return iVar2;
  }
  iVar2 = (int)param_1[3];
  if (param_2 < iVar2) {
    iVar2 = FUN_180058410(local_res8,(byte *)(param_1[4] + (longlong)param_2),
                          (byte *)(param_1[4] + (longlong)iVar2));
    iVar2 = param_2 + iVar2;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  iVar1 = (int)param_1[3];
  iVar3 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    do {
      uVar4 = FUN_18009fa30((longlong)param_1,iVar2);
      if ((int)uVar4 != 0) break;
      iVar3 = (int)param_1[3];
      if (iVar2 < iVar3) {
        iVar3 = FUN_180058410(local_res18,(byte *)((longlong)iVar2 + param_1[4]),
                              (byte *)(param_1[4] + (longlong)iVar3));
        iVar2 = iVar2 + iVar3;
      }
      else {
        iVar2 = iVar3 + 1;
      }
    } while (iVar2 < iVar1);
    iVar3 = iVar2 - iVar1;
  }
  if (iVar2 != iVar1 && SBORROW4(iVar2,iVar1) == iVar3 < 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}


int FUN_18009b750(longlong param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  uint *puVar8;
  byte *pbVar9;
  int iVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];

  iVar1 = *(int *)(param_1 + 0x18);
  if (param_2 < iVar1) {
    iVar10 = FUN_180058410(local_res18,(byte *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2),
                           (byte *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1));
    iVar10 = param_2 + iVar10;
  }
  else {
    iVar10 = iVar1 + 1;
  }
  iVar6 = iVar10 - iVar1;
  if (iVar10 < iVar1) {
    do {
      if (((*(uint *)(param_1 + 0x10) & 0x400) == 0) && (0 < iVar10)) {
        pbVar9 = (byte *)((longlong)iVar10 + *(ulonglong *)(param_1 + 0x20));
        pbVar7 = (byte *)FUN_180058660(*(ulonglong *)(param_1 + 0x20),(ulonglong)pbVar9);
        FUN_180058410(local_res10,pbVar9,
                      (byte *)((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)));
        FUN_180058410(local_res8,pbVar7,
                      (byte *)((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)));
        if ((local_res10[0] == 0x20) || ((local_res10[0] == 9 || (local_res10[0] == 0x3000)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        puVar8 = &DAT_1800ee5e0;
        do {
          if (local_res10[0] == *puVar8) {
            bVar4 = true;
            goto LAB_18009b83a;
          }
          puVar8 = puVar8 + 1;
        } while (puVar8 != (uint *)&DAT_1800ee654);
        bVar4 = false;
LAB_18009b83a:
        if (((local_res8[0] == 0x20) || (local_res8[0] == 9)) || (local_res8[0] == 0x3000)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        puVar8 = &DAT_1800ee5e0;
        do {
          if (local_res8[0] == *puVar8) {
            bVar3 = true;
            goto LAB_18009b873;
          }
          puVar8 = puVar8 + 1;
        } while (puVar8 != (uint *)&DAT_1800ee654);
        bVar3 = false;
LAB_18009b873:
        if (bVar2) {
          if (!bVar3) {
            bVar4 = bVar5;
          }
        }
        else if (!bVar3) goto LAB_18009b889;
        if (!bVar4) break;
      }
LAB_18009b889:
      iVar6 = *(int *)(param_1 + 0x18);
      if (iVar10 < iVar6) {
        iVar6 = FUN_180058410(local_res20,(byte *)((longlong)iVar10 + *(longlong *)(param_1 + 0x20))
                              ,(byte *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6));
        iVar10 = iVar10 + iVar6;
      }
      else {
        iVar10 = iVar6 + 1;
      }
    } while (iVar10 < iVar1);
    iVar6 = iVar10 - iVar1;
  }
  if (iVar10 != iVar1 && SBORROW4(iVar10,iVar1) == iVar6 < 0) {
    iVar10 = iVar1;
  }
  return iVar10;
}


void FUN_18009b8e0(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_res10 [3];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;

  pcVar11 = "#SCROLLY";
  uVar12 = (ulonglong)(int)param_1;
  plVar7 = *(longlong **)(DAT_180115c10 + 0x13a8);
  if (param_1 == 0) {
    pcVar11 = "#SCROLLX";
  }
  uVar9 = FUN_180056b80(plVar7,(byte *)pcVar11,0);
  lVar8 = DAT_180115c10;
  fVar17 = *(float *)(plVar7 + 5);
  fVar18 = *(float *)((longlong)plVar7 + 0x2c);
  fVar16 = *(float *)(plVar7 + 6);
  fVar1 = *(float *)((longlong)plVar7 + 0x34);
  fVar2 = *(float *)(plVar7 + 0x43);
  fVar3 = *(float *)((longlong)plVar7 + 0x21c);
  fVar4 = *(float *)(plVar7 + 0x44);
  fVar5 = *(float *)((longlong)plVar7 + 0x224);
  if ((param_1 != 1) && ((uVar12 ^ 1) != 1)) {
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
  }
  fVar6 = *(float *)((longlong)plVar7 + (uVar12 ^ 1) * 4 + 0xc0);
  fVar19 = 0.0;
  if (fVar6 < 0.0) {
    FID_conflict__assert
              (L"scrollbar_size >= 0.0f",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x396);
  }
  fVar15 = (float)(int)(*(float *)((longlong)plVar7 + 100) * 0.5 + 0.5);
  if ((*(uint *)((longlong)plVar7 + 0x14) & 0x400) != 0) {
    fVar19 = (float)(int)(*(float *)(lVar8 + 0xc74) * 0.5 + 0.5);
  }
  if (param_1 == 0) {
    uVar13 = 0x140;
    local_e4 = fVar18 + fVar15;
    local_e8 = fVar2 + fVar15;
    local_e0 = fVar4 - fVar15;
    local_dc = (fVar1 + fVar18) - fVar15;
    if (local_e4 <= local_dc - fVar6) {
      local_e4 = local_dc - fVar6;
    }
    if (*(char *)((longlong)plVar7 + 0xc9) == '\0') {
      uVar13 = 0x1c0;
      fVar16 = *(float *)(plVar7 + 0x44) - *(float *)(plVar7 + 0x43);
      fVar17 = *(float *)(plVar7 + 8);
      fVar18 = *(float *)(plVar7 + 0xb) + *(float *)(plVar7 + 0xb);
      goto LAB_18009bc2d;
    }
LAB_18009bb5a:
    pfVar14 = (float *)((longlong)plVar7 + uVar12 * 4 + 0x218);
    if (1 < param_1) goto LAB_18009bb6a;
    fVar16 = *(float *)((longlong)plVar7 + uVar12 * 4 + 0x220) - *pfVar14;
    fVar18 = *(float *)((longlong)plVar7 + uVar12 * 4 + 0x58);
    fVar17 = *(float *)((longlong)plVar7 + uVar12 * 4 + 0x40);
    fVar18 = fVar18 + fVar18;
    if ((param_1 == 0) || (param_1 == 1)) goto LAB_18009bc2d;
  }
  else {
    local_e4 = fVar3 + fVar19;
    local_dc = fVar5 - fVar15;
    local_e0 = (fVar16 + fVar17) - fVar15;
    local_e8 = fVar17;
    if (fVar17 <= local_e0 - fVar6) {
      local_e8 = local_e0 - fVar6;
    }
    uVar10 = *(uint *)((longlong)plVar7 + 0x14) & 0x401;
    uVar13 = 0x120;
    if (uVar10 != 1) {
      uVar13 = 0x100;
    }
    if (((char)plVar7[0x19] == '\0') && (uVar13 = 0x1a0, uVar10 != 1)) {
      uVar13 = 0x180;
    }
    if (param_1 == 1) goto LAB_18009bb5a;
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
    pfVar14 = (float *)((longlong)plVar7 + uVar12 * 4 + 0x218);
LAB_18009bb6a:
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
    fVar16 = *(float *)((longlong)plVar7 + uVar12 * 4 + 0x220) - *pfVar14;
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
    fVar18 = *(float *)((longlong)plVar7 + uVar12 * 4 + 0x58);
    fVar17 = *(float *)((longlong)plVar7 + uVar12 * 4 + 0x40);
    fVar18 = fVar18 + fVar18;
  }
  FID_conflict__assert
            (L"idx == 0 || idx == 1",
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
             ,0x11c);
LAB_18009bc2d:
  local_res10[0] = (longlong)*(float *)((longlong)plVar7 + uVar12 * 4 + 0x98);
  FUN_18009bd00(&local_e8,uVar9,param_1,local_res10,(longlong)fVar16,(longlong)(fVar18 + fVar17),
                uVar13);
  fVar17 = (float)local_res10[0];
  if (1 < param_1) {
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
  }
  *(float *)((longlong)plVar7 + uVar12 * 4 + 0x98) = fVar17;
  return;
}


ulonglong FUN_18009bd00(float *param_1,uint param_2,uint param_3,longlong *param_4,longlong param_5,
                       longlong param_6,uint param_7)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [12];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte local_118;
  char local_117;
  char local_116;
  float local_110 [4];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;

  lVar1 = DAT_180115c10;
  local_e0 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  uVar9 = (ulonglong)(int)param_3;
  if (((*(char *)(local_e0 + 0xd1) != '\0') || (fVar14 = param_1[2] - *param_1, fVar14 <= 0.0)) ||
     (fVar16 = param_1[3] - param_1[1], fVar16 <= 0.0)) {
LAB_18009c396:
    return local_e0 & 0xffffffffffffff00;
  }
  fVar18 = 1.0;
  if ((param_3 == 1) && (fVar16 < fVar14)) {
    fVar11 = fVar14 + fVar14;
    if (fVar11 <= 1.0) {
      fVar11 = 1.0;
    }
    fVar11 = fVar16 / fVar11;
    if (0.0 <= fVar11) {
      fVar18 = 1.0;
      if (fVar11 <= 1.0) {
        fVar18 = fVar11;
      }
    }
    else {
      fVar18 = 0.0;
    }
    if (fVar18 <= 0.0) goto LAB_18009c396;
  }
  local_116 = 1.0 <= fVar18;
  auVar13 = ZEXT812(0x40400000);
  fVar11 = (float)(int)((fVar16 - 2.0) * 0.5);
  fVar16 = auVar13._0_4_;
  if (0.0 <= fVar11) {
    fVar17 = fVar16;
    if (fVar11 <= fVar16) {
      fVar17 = fVar11;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar14 = (float)(int)((fVar14 - 2.0) * 0.5);
  if (0.0 <= fVar14) {
    if (fVar14 <= fVar16) {
      auVar13._4_8_ = auVar13._4_8_;
      auVar13._0_4_ = fVar14;
    }
  }
  else {
    auVar13 = SUB1612(ZEXT816(0),0);
  }
  local_110[1] = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  local_110[0] = (float)*(undefined8 *)param_1;
  local_110[1] = local_110[1] - -fVar17;
  local_110[2] = (float)*(undefined8 *)(param_1 + 2);
  local_110[0] = local_110[0] - -auVar13._0_4_;
  local_110[3] = (float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
  local_110[2] = local_110[2] + -auVar13._0_4_;
  local_110[3] = local_110[3] + -fVar17;
  if (param_3 == 0) {
    fVar14 = local_110[2] - local_110[0];
  }
  else {
    fVar14 = local_110[3] - local_110[1];
  }
  lVar10 = param_5;
  if (param_5 <= param_6) {
    lVar10 = param_6;
  }
  if ((float)lVar10 <= 0.0) {
    FID_conflict__assert
              (L"ImMax(size_contents_v, size_visible_v) > 0.0f",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x3e0);
  }
  fVar16 = *(float *)(lVar1 + 0xca8);
  local_fc = local_110[2] - local_110[0];
  local_f8 = local_110[3] - local_110[1];
  pfVar6 = (float *)FUN_18004b820((longlong)&local_fc,uVar9);
  local_fc = (float)param_5;
  fVar11 = *pfVar6;
  if (fVar16 <= *pfVar6) {
    fVar11 = fVar16;
  }
  lVar8 = 1;
  if (0 < lVar10) {
    lVar8 = lVar10;
  }
  fVar16 = (local_fc / (float)lVar8) * fVar14;
  if ((fVar11 <= fVar16) && (fVar11 = fVar14, fVar16 <= fVar14)) {
    fVar11 = fVar16;
  }
  local_118 = 0;
  local_117 = '\0';
  FUN_18005a670(param_1,(wchar_t *)(ulonglong)param_2,(float *)0x0,2);
  FUN_18008f030(local_110,(float *)(ulonglong)param_2,&local_117,&local_118,0x40000);
  bVar2 = local_118;
  lVar10 = param_6 - param_5;
  if (lVar10 < 2) {
    lVar10 = 1;
  }
  fVar16 = (float)*param_4 / (float)lVar10;
  local_100 = (float)lVar10;
  if (0.0 <= fVar16) {
    fVar17 = 1.0;
    if (fVar16 <= 1.0) {
      fVar17 = fVar16;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar16 = ((fVar14 - fVar11) * fVar17) / fVar14;
  if (((local_118 == 0) || (local_116 == '\0')) || (fVar17 = fVar11 / fVar14, 1.0 <= fVar17))
  goto LAB_18009c227;
  if (1 < param_3) {
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
  }
  fVar12 = local_110[uVar9];
  pfVar6 = (float *)FUN_18004b820(lVar1 + 0xe8,uVar9);
  fVar12 = (*pfVar6 - fVar12) / fVar14;
  if (0.0 <= fVar12) {
    fVar15 = 1.0;
    if (fVar12 <= 1.0) {
      fVar15 = fVar12;
    }
  }
  else {
    fVar15 = 0.0;
  }
  if (fVar16 <= fVar15) {
    uVar4 = (uint)(fVar17 + fVar16 < fVar15);
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (*(char *)(lVar1 + 0x1428) != '\0') {
    if (((*(char *)(lVar1 + 0x68) == '\0') || (*(char *)(lVar1 + 0x105) != '\0')) || (uVar4 == 0)) {
      *(undefined2 *)(lVar1 + 0x24f6) = 0;
      if ((uVar4 != 0) || (*(char *)(lVar1 + 0x105) != '\0')) goto LAB_18009c108;
      fVar16 = (fVar15 - fVar16) - fVar17 * 0.5;
    }
    else {
      *(short *)(lVar1 + 0x24f6) = (short)uVar4;
LAB_18009c108:
      fVar16 = 0.0;
    }
    *(float *)(lVar1 + 0x24f8) = fVar16;
  }
  if (*(short *)(lVar1 + 0x24f6) == 0) {
    fVar16 = ((fVar15 - *(float *)(lVar1 + 0x24f8)) - fVar17 * 0.5) / (1.0 - fVar17);
    if (0.0 <= fVar16) {
      fVar17 = 1.0;
      if (fVar16 <= 1.0) {
        fVar17 = fVar16;
      }
    }
    else {
      fVar17 = 0.0;
    }
    *param_4 = (longlong)(fVar17 * local_100);
  }
  else {
    bVar3 = FUN_180059b30(0,1,0);
    if ((bVar3) && (uVar4 == (int)*(short *)(lVar1 + 0x24f6))) {
      if ((float)(int)*(short *)(lVar1 + 0x24f6) <= 0.0) {
        fVar16 = -1.0;
      }
      else {
        fVar16 = 1.0;
      }
      lVar8 = (longlong)(local_fc * fVar16) + *param_4;
      if (lVar8 < 0) {
        lVar8 = 0;
      }
      else if (lVar10 < lVar8) {
        lVar8 = lVar10;
      }
      *param_4 = lVar8;
    }
  }
  fVar16 = (float)*param_4 / local_100;
  if (0.0 <= fVar16) {
    fVar17 = 1.0;
    if (fVar16 <= 1.0) {
      fVar17 = fVar16;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar16 = (fVar17 * (fVar14 - fVar11)) / fVar14;
LAB_18009c227:
  uVar4 = FUN_1800567e0(0xe,1.0);
  if (bVar2 == 0) {
    iVar7 = (local_117 != '\0') + 0xf;
  }
  else {
    iVar7 = 0x11;
  }
  uVar5 = FUN_1800567e0(iVar7,fVar18);
  uVar9 = local_e0;
  FUN_180071360(*(int **)(local_e0 + 0x2c0),param_1,param_1 + 2,uVar4,*(float *)(local_e0 + 0x60),
                param_7);
  if (param_3 == 0) {
    local_e4 = local_110[3];
    local_f0 = (local_110[2] - local_110[0]) * fVar16 + local_110[0];
    local_ec = local_110[1];
    local_e8 = local_f0 + fVar11;
  }
  else {
    local_f0 = local_110[0];
    local_ec = (local_110[3] - local_110[1]) * fVar16 + local_110[1];
    local_e8 = local_110[2];
    local_e4 = local_ec + fVar11;
  }
  FUN_180071360(*(int **)(uVar9 + 0x2c0),&local_f0,&local_e8,uVar5,*(float *)(lVar1 + 0xca4),0);
  return (ulonglong)bVar2;
}


ulonglong FUN_18009c3c0(byte *param_1,byte param_2,uint param_3,float *param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  byte *pbVar15;
  float *pfVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  byte local_res10 [8];
  byte local_e8;
  byte local_e7;
  byte local_e6;
  char local_e5;
  char local_e4 [4];
  uint local_e0 [2];
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  uint local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;

  lVar10 = DAT_180115c10;
  uVar11 = *(ulonglong *)(DAT_180115c10 + 0x13a8);
  *(undefined1 *)(uVar11 + 0xce) = 1;
  lVar4 = DAT_180115c10;
  plVar1 = *(longlong **)(lVar10 + 0x13a8);
  if (*(char *)((longlong)plVar1 + 0xd1) != '\0') {
LAB_18009ca76:
    return uVar11 & 0xffffffffffffff00;
  }
  local_res10[0] = param_2;
  uVar7 = FUN_180056b80(plVar1,param_1,0);
  FUN_180050b60((undefined8 *)&local_a8,param_1,(byte *)0x0,'\x01',-1.0);
  local_c4 = param_4[1];
  if (param_4[1] == 0.0) {
    local_c4 = local_a4;
  }
  local_c8 = *param_4;
  if (*param_4 == 0.0) {
    local_c8 = local_a8;
  }
  fStack_bc = (float)((ulonglong)plVar1[0x23] >> 0x20) + *(float *)(plVar1 + 0x2a);
  local_c0 = (float)plVar1[0x23];
  FUN_18005aca0(&local_c8,0.0);
  uVar17 = param_3 & 2;
  if (uVar17 == 0) {
    local_d8 = local_c0;
  }
  else {
    local_d8 = *(float *)(plVar1 + 0x49);
  }
  lVar10 = 0x250;
  if (uVar17 == 0) {
    lVar10 = 0x240;
  }
  if ((*param_4 == 0.0) || ((param_3 >> 0x18 & 1) != 0)) {
    fVar18 = *(float *)(lVar10 + (longlong)plVar1) - local_d8;
    local_c8 = local_a8;
    if (local_a8 <= fVar18) {
      local_c8 = fVar18;
    }
  }
  local_d0 = local_c8 + local_d8;
  fStack_cc = local_c4 + fStack_bc;
  fStack_d4 = fStack_bc;
  if ((param_3 >> 0x1a & 1) == 0) {
    if ((param_3 & 2) == 0) {
      fVar18 = *(float *)(lVar4 + 0xc78);
    }
    else {
      fVar18 = 0.0;
    }
    local_d8 = local_d8 - (float)(int)(fVar18 * 0.5);
    fVar19 = (float)(int)(*(float *)(lVar4 + 0xc7c) * 0.5);
    local_d0 = (fVar18 - (float)(int)(fVar18 * 0.5)) + local_d0;
    fStack_d4 = fStack_bc - fVar19;
    fStack_cc = (*(float *)(lVar4 + 0xc7c) - fVar19) + fStack_cc;
  }
  local_b8 = param_3 & 8;
  uVar11 = (ulonglong)(-(uint)(local_b8 != 0) & 0x400);
  if (uVar17 == 0) {
    uVar11 = FUN_18005a670(&local_d8,(wchar_t *)(ulonglong)uVar7,(float *)0x0,uVar11);
  }
  else {
    lVar10 = plVar1[0x4b];
    lVar3 = plVar1[0x4c];
    *(int *)(plVar1 + 0x4b) = (int)plVar1[0x49];
    *(int *)(plVar1 + 0x4c) = (int)plVar1[0x4a];
    uVar11 = FUN_18005a670(&local_d8,(wchar_t *)(ulonglong)uVar7,(float *)0x0,uVar11);
    *(int *)(plVar1 + 0x4b) = (int)lVar10;
    *(int *)(plVar1 + 0x4c) = (int)lVar3;
  }
  fVar18 = (float)(*(uint *)(lVar4 + 0x1d8c) & 0x400000);
  local_e5 = (char)uVar11;
  if ((local_e5 == '\0') &&
     ((((fVar18 == 0.0 || (*(char *)(lVar4 + 0x22c8) == '\0')) ||
       (*(float *)(lVar4 + 0x22d8) <= fStack_d4)) ||
      (((fStack_cc < *(float *)(lVar4 + 0x22d0) || fStack_cc == *(float *)(lVar4 + 0x22d0) ||
        (*(float *)(lVar4 + 0x22d4) <= local_d8)) ||
       (local_d0 < *(float *)(lVar4 + 0x22cc) || local_d0 == *(float *)(lVar4 + 0x22cc)))))))
  goto LAB_18009ca76;
  local_a0 = *(uint *)(lVar4 + 0x1d48) & 0x400;
  local_b4 = fVar18;
  if ((local_b8 != 0) && (local_a0 == 0)) {
    FUN_18004f6e0('\x01');
  }
  if (uVar17 != 0) {
    if (*(longlong *)(lVar4 + 0x21e0) == 0) {
      if (plVar1[0x38] != 0) {
        FUN_180083470();
      }
    }
    else {
      FUN_180085c50();
    }
    *(uint *)(lVar4 + 0x1d90) = *(uint *)(lVar4 + 0x1d90) | 0x200;
    lVar10 = plVar1[0x4c];
    *(longlong *)(lVar4 + 0x1dc4) = plVar1[0x4b];
    *(longlong *)(lVar4 + 0x1dcc) = lVar10;
  }
  uVar9 = 0;
  uVar8 = 0;
  local_e0[0] = 0;
  if ((param_3 >> 0x14 & 1) != 0) {
    uVar9 = 0x20000;
    local_e0[0] = 0x20000;
    uVar8 = 0x20000;
  }
  if ((param_3 >> 0x1b & 1) != 0) {
    uVar8 = uVar8 | 0x100000;
    uVar9 = uVar8;
    local_e0[0] = uVar8;
  }
  if ((param_3 >> 0x16 & 1) != 0) {
    uVar8 = uVar8 | 0x10;
    uVar9 = uVar8;
    local_e0[0] = uVar8;
  }
  if ((param_3 >> 0x17 & 1) != 0) {
    uVar8 = uVar8 | 0x80;
    uVar9 = uVar8;
    local_e0[0] = uVar8;
  }
  if ((param_3 & 4) != 0) {
    uVar8 = uVar8 | 0x120;
    uVar9 = uVar8;
    local_e0[0] = uVar8;
  }
  if (((param_3 & 0x10) != 0) || ((*(uint *)(lVar4 + 0x1d8c) & 0x4000) != 0)) {
    uVar9 = uVar8 | 0x1000;
    local_e0[0] = uVar9;
  }
  if (fVar18 == 0.0) {
    pfVar16 = (float *)local_e4;
    pbVar15 = &local_e7;
    pfVar13 = &local_d8;
    bVar6 = FUN_18008f030(pfVar13,(float *)(ulonglong)uVar7,(char *)pbVar15,(undefined1 *)pfVar16,
                          uVar9);
    local_e8 = param_2;
    if (((((param_3 >> 0x15 & 1) == 0) || (*(uint *)(lVar4 + 0x20bc) == 0)) ||
        (pfVar13 = (float *)(ulonglong)*(uint *)(lVar4 + 0x1d44),
        *(uint *)(lVar4 + 0x20c0) != *(uint *)(lVar4 + 0x1d44))) ||
       (*(uint *)(lVar4 + 0x20bc) != uVar7)) goto LAB_18009c809;
    bVar6 = 1;
    local_e8 = 1;
LAB_18009c823:
    if ((*(char *)(lVar4 + 0x1ef9) == '\0') &&
       ((*(longlong **)(lVar4 + 0x1f00) == plVar1 &&
        (*(uint *)(lVar4 + 0x1f0c) == *(uint *)(plVar1 + 0x2e))))) {
      pfVar16 = &local_9c;
      pfVar13 = (float *)(ulonglong)uVar7;
      local_9c = local_d8 - *(float *)(plVar1 + 0x25);
      pbVar15 = (byte *)(ulonglong)*(uint *)(lVar4 + 0x1d44);
      local_98 = fStack_d4 - *(float *)((longlong)plVar1 + 300);
      local_94 = local_d0 - *(float *)(plVar1 + 0x25);
      local_90 = fStack_cc - *(float *)((longlong)plVar1 + 300);
      FUN_1800677a0(uVar7,*(uint *)(plVar1 + 0x2e),*(uint *)(lVar4 + 0x1d44),(undefined8 *)pfVar16);
      if (*(char *)(lVar4 + 0x5d) != '\0') {
        *(undefined1 *)(lVar4 + 0x1ef8) = 0;
      }
    }
    if (bVar6 != 0) {
      pfVar13 = (float *)(ulonglong)uVar7;
      FUN_18005b4c0(uVar7);
    }
  }
  else {
    FUN_18009a920(uVar7,(char *)local_res10,local_e0);
    pfVar16 = (float *)local_e4;
    local_e6 = FUN_18008f030(&local_d8,(float *)(ulonglong)uVar7,(char *)&local_e7,
                             (undefined1 *)pfVar16,local_e0[0]);
    pbVar15 = &local_e6;
    pfVar13 = (float *)(ulonglong)uVar7;
    FUN_18009a320(uVar7,(char *)local_res10,pbVar15);
    local_e8 = local_res10[0];
    bVar6 = local_e6;
LAB_18009c809:
    if ((bVar6 != 0) || ((local_e7 != 0 && ((param_3 >> 0x19 & 1) != 0)))) goto LAB_18009c823;
  }
  cVar5 = local_e5;
  pfVar14 = (float *)(ulonglong)local_e8;
  if (local_e8 != param_2) {
    *(uint *)(lVar4 + 0x1d90) = *(uint *)(lVar4 + 0x1d90) | 8;
  }
  if (local_e5 == '\0') goto LAB_18009c9bb;
  if (local_e7 == 0 && (param_3 & 0x20) == 0) {
    pfVar13 = (float *)0x18;
    if (local_e8 != 0) {
      bVar2 = false;
      goto LAB_18009c95c;
    }
  }
  else {
    bVar2 = true;
    pfVar13 = (float *)0x19;
LAB_18009c95c:
    iVar12 = (int)pfVar13;
    if ((local_e4[0] != '\0') && (bVar2)) {
      iVar12 = 0x1a;
    }
    uVar9 = FUN_1800567e0(iVar12,1.0);
    pfVar14 = (float *)CONCAT44(fStack_cc,local_d0);
    pfVar16 = (float *)0x0;
    pfVar13 = (float *)CONCAT44(fStack_d4,local_d8);
    pbVar15 = (byte *)(ulonglong)uVar9;
    FUN_1800639d0(pfVar13,pfVar14,uVar9,'\0',0.0);
  }
  if (*(uint *)(lVar4 + 0x1efc) == uVar7) {
    pfVar13 = &local_d8;
    pbVar15 = (byte *)0xe;
    if (local_b4 == 0.0) {
      pbVar15 = (byte *)0xa;
    }
    pfVar14 = (float *)(ulonglong)uVar7;
    FUN_180064200(pfVar13,uVar7,(ulonglong)pbVar15);
  }
LAB_18009c9bb:
  if (uVar17 != 0) {
    if (*(longlong *)(lVar4 + 0x21e0) == 0) {
      if (plVar1[0x38] != 0) {
        FUN_1800833c0();
      }
    }
    else {
      FUN_180085b50();
    }
  }
  if (cVar5 != '\0') {
    pfVar14 = &local_b4;
    pfVar13 = &local_c0;
    pfVar16 = (float *)0x0;
    local_b4 = local_c8 + local_c0;
    if (*(float *)(plVar1 + 0x48) <= local_c8 + local_c0) {
      local_b4 = *(float *)(plVar1 + 0x48);
    }
    local_b0 = local_c4 + fStack_bc;
    FUN_180064710(pfVar13,pfVar14,param_1,(byte *)0x0,(ulonglong *)&local_a8,
                  (float *)(lVar4 + 0xce8),&local_d8);
    pbVar15 = param_1;
  }
  if ((((bVar6 != 0) && ((*(uint *)((longlong)plVar1 + 0x14) & 0x4000000) != 0)) &&
      ((param_3 & 1) == 0)) && ((*(byte *)(lVar4 + 0x1d8c) & 0x10) != 0)) {
    FUN_180051930(pfVar13,pfVar14,(ulonglong)pbVar15,(ulonglong)pfVar16);
  }
  if ((local_b8 != 0) && (local_a0 == 0)) {
    FUN_180053a10();
  }
  return (ulonglong)bVar6;
}


void FUN_18009caa0(void)

{
  longlong lVar1;
  uint uVar2;

  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if (*(char *)(lVar1 + 0xd1) != '\0') {
    return;
  }
  uVar2 = 2 - (*(int *)(lVar1 + 0x1cc) != 0);
  if (*(longlong *)(lVar1 + 0x1c0) != 0) {
    uVar2 = 6 - (*(int *)(lVar1 + 0x1cc) != 0);
  }
  FUN_18009caf0(uVar2,1.0);
  return;
}


void FUN_18009caf0(uint param_1,float param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float local_res18;
  float local_res1c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;

  lVar1 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  lVar3 = DAT_180115c10;
  lVar1 = *(longlong *)(lVar1 + 0x13a8);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    if (((param_1 & 3) == 0) || (((param_1 & 3) - 1 & param_1 & 3) != 0)) {
      FID_conflict__assert
                (L"ImIsPowerOfTwo(flags & (ImGuiSeparatorFlags_Horizontal | ImGuiSeparatorFlags_Vertical))"
                 ,
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x62a);
    }
    if (param_2 <= 0.0) {
      FID_conflict__assert
                (L"thickness > 0.0f",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x62b);
    }
    if ((param_1 & 2) == 0) {
      if ((param_1 & 1) != 0) {
        fVar10 = *(float *)(lVar1 + 0x240);
        fVar11 = *(float *)(lVar1 + 0x118);
        if ((param_1 & 4) == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(longlong *)(lVar1 + 0x1c0);
          if (lVar7 != 0) {
            fVar11 = *(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x15c);
            fVar10 = *(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x30);
            FUN_180083470();
          }
        }
        if (param_2 == 1.0) {
          local_res1c = 0.0;
        }
        else {
          local_res1c = param_2;
        }
        local_54 = *(float *)(lVar1 + 0x11c);
        local_4c = local_54 + param_2;
        local_res18 = 0.0;
        local_58 = fVar11;
        local_50 = fVar10;
        FUN_18005aca0(&local_res18,-1.0);
        uVar5 = FUN_18005a670(&local_58,(wchar_t *)0x0,(float *)0x0,0);
        if ((char)uVar5 != '\0') {
          piVar2 = *(int **)(lVar1 + 0x2c0);
          uVar4 = FUN_1800567e0(0x1b,1.0);
          uVar9 = (ulonglong)uVar4;
          FUN_180071360(piVar2,&local_58,&local_50,uVar4,0.0,0);
          if (*(char *)(lVar3 + 0x2678) != '\0') {
            FUN_18005b180((longlong)&local_58,"--------------------------------\n",(char *)0x0,uVar9
                         );
          }
        }
        if (lVar7 != 0) {
          FUN_1800833c0();
          *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(lVar1 + 0x11c);
        }
      }
    }
    else {
      local_54 = *(float *)(lVar1 + 0x11c);
      local_58 = *(float *)(lVar1 + 0x118);
      local_4c = local_54 + *(float *)(lVar1 + 0x144);
      local_50 = local_58 + param_2;
      local_res1c = 0.0;
      local_res18 = param_2;
      FUN_18005aca0(&local_res18,-1.0);
      uVar5 = FUN_18005a670(&local_58,(wchar_t *)0x0,(float *)0x0,0);
      if ((char)uVar5 != '\0') {
        piVar2 = *(int **)(lVar1 + 0x2c0);
        uVar4 = FUN_1800567e0(0x1b,1.0);
        uVar9 = (ulonglong)uVar4;
        pfVar8 = &local_50;
        pfVar6 = &local_58;
        FUN_180071360(piVar2,pfVar6,pfVar8,uVar4,0.0,0);
        if (*(char *)(lVar3 + 0x2678) != '\0') {
          FUN_18005b370(0x1800edf84,pfVar6,pfVar8,uVar9);
        }
      }
    }
  }
  return;
}


void FUN_18009cdf0(byte *param_1)

{
  longlong lVar1;
  byte *pbVar2;

  lVar1 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x13a8) + 0xd1) == '\0') {
    pbVar2 = (byte *)FUN_180055c80((char *)param_1,(char *)0x0);
    FUN_18009ce40(0,param_1,pbVar2,0.0);
    return;
  }
  return;
}


void FUN_18009ce40(uint param_1,byte *param_2,byte *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  uint uVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;

  lVar4 = DAT_180115c10;
  lVar3 = *(longlong *)(DAT_180115c10 + 0x13a8);
  FUN_180050b60((undefined8 *)&local_108,param_2,param_3,'\0',-1.0);
  fVar12 = *(float *)(lVar4 + 0xcfc);
  local_fc = *(float *)(lVar3 + 0x11c);
  fVar1 = *(float *)(lVar4 + 0xcf0);
  fVar2 = *(float *)(lVar3 + 0x118);
  local_f4 = *(float *)(lVar4 + 0xd00) + *(float *)(lVar4 + 0xd00) + local_104;
  local_f8 = local_108 + param_4 + fVar12 + fVar12;
  if (local_f4 <= fVar1) {
    local_f4 = fVar1;
  }
  local_d4 = local_f4 + local_fc;
  local_d8 = *(float *)(lVar3 + 0x240);
  fVar13 = (float)(int)(((local_d4 - local_fc) - local_104) * *(float *)(lVar4 + 0xcf8) + 0.99999);
  local_e0 = fVar2;
  local_dc = local_fc;
  FUN_18005aca0(&local_f8,fVar13);
  uVar10 = 0;
  uVar9 = 0;
  pwVar8 = (wchar_t *)(ulonglong)param_1;
  uVar7 = FUN_18005a670(&local_e0,pwVar8,(float *)0x0,0);
  fVar5 = local_d8;
  if ((char)uVar7 != '\0') {
    local_fc = fVar13 + local_fc;
    fVar14 = (float)(int)((local_d4 + local_dc) * 0.5 + 0.99999);
    fVar11 = (local_d8 - fVar2) - (fVar12 + fVar12);
    fVar13 = 0.0;
    if (0.0 <= fVar11) {
      fVar13 = fVar11;
    }
    fVar13 = ((fVar13 - local_108) - param_4) * *(float *)(lVar4 + 0xcf4);
    local_100 = 0.0;
    if (0.0 <= fVar13) {
      local_100 = fVar13;
    }
    local_100 = fVar2 + fVar12 + local_100;
    *(float *)(lVar3 + 0x120) = local_100 + local_108;
    uVar6 = FUN_1800567e0(0x1b,1.0);
    if (local_108 <= 0.0) {
      if (*(char *)(lVar4 + 0x2678) != '\0') {
        FUN_18005b370(0x1800ed8c4,pwVar8,uVar9,uVar10);
      }
      if (0.0 < fVar1) {
        local_e8 = fVar5;
        local_f0 = fVar2;
        local_ec = fVar14;
        local_e4 = fVar14;
        FUN_180070300(*(int **)(lVar3 + 0x2c0),(undefined8 *)&local_f0,(undefined8 *)&local_e8,uVar6
                      ,fVar1);
      }
    }
    else {
      fVar12 = local_100 - *(float *)(lVar4 + 0xc78);
      fVar13 = local_100 + local_108 + param_4 + *(float *)(lVar4 + 0xc78);
      if ((fVar2 < fVar12) && (0.0 < fVar1)) {
        local_f0 = fVar12;
        local_ec = fVar14;
        local_e8 = fVar2;
        local_e4 = fVar14;
        FUN_180070300(*(int **)(lVar3 + 0x2c0),(undefined8 *)&local_e8,(undefined8 *)&local_f0,uVar6
                      ,fVar1);
      }
      if ((fVar13 < fVar5) && (0.0 < fVar1)) {
        local_e8 = fVar5;
        local_f0 = fVar13;
        local_ec = fVar14;
        local_e4 = fVar14;
        FUN_180070300(*(int **)(lVar3 + 0x2c0),(undefined8 *)&local_f0,(undefined8 *)&local_e8,uVar6
                      ,fVar1);
      }
      if (*(char *)(lVar4 + 0x2678) != '\0') {
        FUN_18005b350(&DAT_1800ed8c4,0);
      }
      local_e4 = local_d4 + *(float *)(lVar4 + 0xc7c);
      local_e8 = local_d8;
      FUN_180064be0(*(float **)(lVar3 + 0x2c0),&local_100,&local_e8,local_d8,local_d8,param_2,
                    param_3,(undefined8 *)&local_108);
    }
  }
  return;
}


int FUN_18009d210(int *param_1,int *param_2)

{
  int iVar1;

  iVar1 = (int)((float)param_2[1] - (float)param_1[1]);
  if (iVar1 == 0) {
    iVar1 = *param_2 - *param_1;
  }
  return iVar1;
}


void FUN_18009d230(undefined1 *param_1,uint param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  if (param_2 == 1) {
    if (0.0 <= *(float *)(param_1 + 4)) {
      fVar8 = *(float *)(param_1 + 4) - param_3;
      if (fVar8 <= 1.0) {
        fVar8 = 1.0;
      }
      *(float *)(param_1 + 4) = fVar8;
      return;
    }
  }
  else {
    if (1 < param_2) {
      FUN_1800bebc0(param_1,(longlong)(int)param_2,0xc,FUN_18009d210);
    }
    if (0.0 < param_3) {
      iVar5 = 1;
      do {
        if ((int)param_2 <= iVar5) break;
        fVar8 = *(float *)(param_1 + 4);
        do {
          fVar10 = *(float *)(param_1 + (longlong)iVar5 * 0xc + 4);
          if (fVar10 < fVar8) {
            if (0.0 <= fVar10) {
              fVar8 = fVar8 - fVar10;
              goto LAB_18009d303;
            }
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_2);
        fVar8 = fVar8 - 1.0;
LAB_18009d303:
        if (fVar8 <= 0.0) break;
        iVar4 = 0;
        fVar10 = param_3 / (float)iVar5;
        if (fVar8 <= fVar10) {
          fVar10 = fVar8;
        }
        if (3 < iVar5) {
          do {
            lVar3 = (longlong)iVar4;
            iVar4 = iVar4 + 4;
            *(float *)(param_1 + lVar3 * 0xc + 4) = *(float *)(param_1 + lVar3 * 0xc + 4) - fVar10;
            *(float *)(param_1 + lVar3 * 0xc + 0x10) =
                 *(float *)(param_1 + lVar3 * 0xc + 0x10) - fVar10;
            *(float *)(param_1 + lVar3 * 0xc + 0x1c) =
                 *(float *)(param_1 + lVar3 * 0xc + 0x1c) - fVar10;
            *(float *)(param_1 + lVar3 * 0xc + 0x28) =
                 *(float *)(param_1 + lVar3 * 0xc + 0x28) - fVar10;
          } while (iVar4 < iVar5 + -3);
        }
        for (; iVar4 < iVar5; iVar4 = iVar4 + 1) {
          *(float *)(param_1 + (longlong)iVar4 * 0xc + 4) =
               *(float *)(param_1 + (longlong)iVar4 * 0xc + 4) - fVar10;
        }
        param_3 = param_3 - (float)iVar5 * fVar10;
      } while (0.0 < param_3);
    }
    iVar5 = 0;
    fVar8 = 0.0;
    if (3 < (int)param_2) {
      do {
        lVar3 = (longlong)iVar5;
        iVar5 = iVar5 + 4;
        fVar10 = *(float *)(param_1 + lVar3 * 0xc + 4);
        fVar7 = *(float *)(param_1 + lVar3 * 0xc + 0x10);
        fVar1 = *(float *)(param_1 + lVar3 * 0xc + 0x1c);
        fVar2 = *(float *)(param_1 + lVar3 * 0xc + 0x28);
        fVar6 = (float)(int)fVar10;
        *(float *)(param_1 + lVar3 * 0xc + 4) = fVar6;
        fVar9 = (float)(int)fVar7;
        *(float *)(param_1 + lVar3 * 0xc + 0x10) = fVar9;
        fVar11 = (float)(int)fVar1;
        *(float *)(param_1 + lVar3 * 0xc + 0x1c) = fVar11;
        fVar12 = (float)(int)fVar2;
        *(float *)(param_1 + lVar3 * 0xc + 0x28) = fVar12;
        fVar8 = (fVar2 - fVar12) + (fVar1 - fVar11) + (fVar7 - fVar9) + (fVar10 - fVar6) + fVar8;
      } while (iVar5 < (int)(param_2 - 3));
    }
    for (; iVar5 < (int)param_2; iVar5 = iVar5 + 1) {
      fVar10 = *(float *)(param_1 + (longlong)iVar5 * 0xc + 4);
      fVar7 = (float)(int)fVar10;
      *(float *)(param_1 + (longlong)iVar5 * 0xc + 4) = fVar7;
      fVar8 = fVar8 + (fVar10 - fVar7);
    }
    while (0.0 < fVar8) {
      iVar5 = 0;
      if (3 < (int)param_2) {
        do {
          if (fVar8 <= 0.0) {
            return;
          }
          lVar3 = (longlong)iVar5;
          fVar10 = *(float *)(param_1 + lVar3 * 0xc + 8) - *(float *)(param_1 + lVar3 * 0xc + 4);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          *(float *)(param_1 + lVar3 * 0xc + 4) = *(float *)(param_1 + lVar3 * 0xc + 4) + fVar10;
          if (fVar8 - fVar10 <= 0.0) {
            return;
          }
          fVar7 = *(float *)(param_1 + lVar3 * 0xc + 0x14) -
                  *(float *)(param_1 + lVar3 * 0xc + 0x10);
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
          fVar8 = (fVar8 - fVar10) - fVar7;
          *(float *)(param_1 + lVar3 * 0xc + 0x10) =
               *(float *)(param_1 + lVar3 * 0xc + 0x10) + fVar7;
          if (fVar8 <= 0.0) {
            return;
          }
          fVar10 = *(float *)(param_1 + lVar3 * 0xc + 0x20) -
                   *(float *)(param_1 + lVar3 * 0xc + 0x1c);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          fVar8 = fVar8 - fVar10;
          *(float *)(param_1 + lVar3 * 0xc + 0x1c) =
               *(float *)(param_1 + lVar3 * 0xc + 0x1c) + fVar10;
          if (fVar8 <= 0.0) {
            return;
          }
          iVar5 = iVar5 + 4;
          fVar10 = *(float *)(param_1 + lVar3 * 0xc + 0x2c) -
                   *(float *)(param_1 + lVar3 * 0xc + 0x28);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          fVar8 = fVar8 - fVar10;
          *(float *)(param_1 + lVar3 * 0xc + 0x28) =
               *(float *)(param_1 + lVar3 * 0xc + 0x28) + fVar10;
        } while (iVar5 < (int)(param_2 - 3));
      }
      while (iVar5 < (int)param_2) {
        if (fVar8 <= 0.0) {
          return;
        }
        lVar3 = (longlong)iVar5;
        iVar5 = iVar5 + 1;
        fVar10 = *(float *)(param_1 + lVar3 * 0xc + 8) - *(float *)(param_1 + lVar3 * 0xc + 4);
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
        fVar8 = fVar8 - fVar10;
        *(float *)(param_1 + lVar3 * 0xc + 4) = *(float *)(param_1 + lVar3 * 0xc + 4) + fVar10;
      }
    }
  }
  return;
}


void FUN_18009d610(byte *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong local_res10 [3];

  lVar2 = DAT_180115c10;
  local_res10[0] = 0;
  uVar1 = *(undefined4 *)(DAT_180115c10 + 0xc6c);
  *(undefined4 *)(DAT_180115c10 + 0xc6c) = 0;
  FUN_18008f6b0(param_1,local_res10,0x8000);
  *(undefined4 *)(lVar2 + 0xc6c) = uVar1;
  return;
}


longlong FUN_18009d660(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 8), 0 < iVar1)) {
    iVar2 = 0;
    do {
      if ((iVar2 < 0) || (iVar1 <= iVar2)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      if (*(int *)((longlong)iVar2 * 0x2c + *(longlong *)(param_1 + 0x10)) == param_2) {
        if ((iVar2 < 0) || (*(int *)(param_1 + 8) <= iVar2)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        return *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x2c;
      }
      iVar1 = *(int *)(param_1 + 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}


// WARNING: Removing unreachable block (ram,0x00018009e192)
// WARNING: Removing unreachable block (ram,0x00018009e196)
// WARNING: Removing unreachable block (ram,0x00018009e19b)
// WARNING: Removing unreachable block (ram,0x00018009e1b4)
// WARNING: Removing unreachable block (ram,0x00018009e1e5)
// WARNING: Removing unreachable block (ram,0x00018009e1da)
// WARNING: Removing unreachable block (ram,0x00018009e1e8)
// WARNING: Removing unreachable block (ram,0x00018009e2e5)
// WARNING: Removing unreachable block (ram,0x00018009e2e9)
// WARNING: Removing unreachable block (ram,0x00018009e2ee)
// WARNING: Removing unreachable block (ram,0x00018009e307)
// WARNING: Removing unreachable block (ram,0x00018009e338)
// WARNING: Removing unreachable block (ram,0x00018009e32d)
// WARNING: Removing unreachable block (ram,0x00018009e33b)
// WARNING: Removing unreachable block (ram,0x00018009da5c)
// WARNING: Removing unreachable block (ram,0x00018009da55)
// WARNING: Removing unreachable block (ram,0x00018009da2a)
// WARNING: Removing unreachable block (ram,0x00018009da34)
// WARNING: Removing unreachable block (ram,0x00018009e229)
// WARNING: Removing unreachable block (ram,0x00018009e230)
// WARNING: Removing unreachable block (ram,0x00018009e234)
// WARNING: Removing unreachable block (ram,0x00018009e239)
// WARNING: Removing unreachable block (ram,0x00018009e252)
// WARNING: Removing unreachable block (ram,0x00018009e283)
// WARNING: Removing unreachable block (ram,0x00018009e278)
// WARNING: Removing unreachable block (ram,0x00018009e286)

void FUN_18009d700(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  short sVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int *piVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int local_128;
  float local_120 [14];
  undefined8 local_e8;
  int local_e0;
  float local_d8 [4];
  float local_c8 [6];
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;

  lVar4 = DAT_180115c10;
  bVar33 = false;
  uVar23 = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  uVar13 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar13) {
    uVar31 = 0;
    bVar12 = bVar33;
    do {
      uVar18 = 0;
      if (((int)uVar31 < 0) || ((int)uVar13 <= (int)uVar31)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
        uVar13 = *(uint *)(param_1 + 8);
      }
      lVar28 = *(longlong *)(param_1 + 0x10);
      lVar27 = (longlong)(int)uVar31 * 0x2c;
      if ((*(int *)(lVar28 + 8 + lVar27) < *(int *)(param_1 + 0x30)) ||
         (*(char *)(lVar28 + 0x28 + lVar27) != '\0')) {
        if (*(int *)(param_1 + 0x28) == *(int *)(lVar28 + lVar27)) {
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        if (*(int *)(param_1 + 0x20) == *(int *)(lVar28 + lVar27)) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        if (*(int *)(param_1 + 0x24) == *(int *)(lVar28 + lVar27)) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        if (uVar23 != uVar31) {
          if (((int)uVar31 < 0) || ((int)uVar13 <= (int)uVar31)) {
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                       ,0x833);
            uVar13 = *(uint *)(param_1 + 8);
          }
          lVar28 = *(longlong *)(param_1 + 0x10);
          puVar14 = (undefined8 *)(lVar27 + 0x10 + lVar28);
          local_b0 = *puVar14;
          puVar1 = (undefined4 *)(lVar27 + 0x1c + lVar28);
          uVar2 = *puVar1;
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uStack_9c = *(undefined8 *)(puVar1 + 2);
          uVar19 = *(undefined8 *)(lVar27 + lVar28);
          uVar8 = ((undefined8 *)(lVar27 + lVar28))[1];
          uStack_a8 = (undefined4)puVar14[1];
          uStack_a4 = uVar2;
          uStack_a0 = uVar5;
          if (((int)uVar23 < 0) || ((int)uVar13 <= (int)uVar23)) {
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                       ,0x833);
          }
          lVar27 = (longlong)(int)uVar23 * 0x2c;
          lVar28 = *(longlong *)(param_1 + 0x10);
          *(undefined8 *)(lVar27 + lVar28) = uVar19;
          ((undefined8 *)(lVar27 + lVar28))[1] = uVar8;
          puVar14 = (undefined8 *)(lVar27 + 0x10 + lVar28);
          *puVar14 = local_b0;
          puVar14[1] = CONCAT44(uStack_a4,uStack_a8);
          puVar1 = (undefined4 *)(lVar27 + 0x1c + lVar28);
          *puVar1 = uVar2;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar13 = *(uint *)(param_1 + 8);
        }
        if (((int)uVar23 < 0) || ((int)uVar13 <= (int)uVar23)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        lVar28 = (longlong)(int)uVar23 * 0x2c;
        uVar13 = *(uint *)(*(longlong *)(param_1 + 0x10) + 4 + lVar28);
        *(short *)(*(longlong *)(param_1 + 0x10) + 0x26 + lVar28) = (short)uVar23;
        uVar32 = uVar18;
        if ((uVar13 & 0x40) == 0) {
          uVar18 = (ulonglong)(((uVar13 >> 7 & 1) != 0) + 1);
          uVar32 = (ulonglong)((uVar13 >> 7 & 1) != 0) + 1;
        }
        if ((int)uVar23 < 1) {
          local_d8[uVar32 * 3 + -0x12] = (float)((int)local_d8[uVar32 * 3 + -0x12] + 1);
          uVar23 = uVar23 + 1;
          bVar33 = bVar12;
        }
        else {
          if (*(int *)(param_1 + 8) <= (int)(uVar23 - 1)) {
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                       ,0x833);
          }
          uVar13 = *(uint *)(*(longlong *)(param_1 + 0x10) + -0x28 + lVar28);
          if ((uVar13 & 0x40) == 0) {
            cVar11 = ((uVar13 & 0x80) != 0) + '\x01';
          }
          else {
            cVar11 = '\0';
          }
          if ((int)uVar18 == 0) {
            if (cVar11 != '\0') {
              bVar12 = true;
            }
          }
          if (cVar11 == '\x02') {
            if ((int)uVar18 != 2) {
              bVar12 = true;
            }
            local_d8[uVar32 * 3 + -0x12] = (float)((int)local_d8[uVar32 * 3 + -0x12] + 1);
            uVar23 = uVar23 + 1;
            bVar33 = bVar12;
          }
          else {
            local_d8[uVar32 * 3 + -0x12] = (float)((int)local_d8[uVar32 * 3 + -0x12] + 1);
            uVar23 = uVar23 + 1;
            bVar33 = bVar12;
          }
        }
      }
      uVar13 = *(uint *)(param_1 + 8);
      uVar31 = uVar31 + 1;
    } while ((int)uVar31 < (int)uVar13);
  }
  iVar25 = 8;
  if (uVar13 != uVar23) {
    iVar30 = *(int *)(param_1 + 0xc);
    if (iVar30 < (int)uVar23) {
      if (iVar30 == 0) {
        uVar13 = 8;
      }
      else {
        uVar13 = iVar30 / 2 + iVar30;
      }
      uVar31 = uVar23;
      if ((int)uVar23 < (int)uVar13) {
        uVar31 = uVar13;
      }
      if (iVar30 < (int)uVar31) {
        puVar14 = (undefined8 *)FUN_18005b560((longlong)(int)uVar31 * 0x2c);
        if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
          FUN_1800d1c20(puVar14,*(undefined8 **)(param_1 + 0x10),
                        (longlong)*(int *)(param_1 + 8) * 0x2c);
          FUN_18005b5c0(*(longlong *)(param_1 + 0x10));
        }
        *(undefined8 **)(param_1 + 0x10) = puVar14;
        *(uint *)(param_1 + 0xc) = uVar31;
      }
    }
    *(uint *)(param_1 + 8) = uVar23;
    uVar13 = uVar23;
  }
  if ((bVar33) && (1 < uVar13)) {
    FUN_1800bebc0(*(undefined1 **)(param_1 + 0x10),(longlong)(int)uVar13,0x2c,FUN_18009ec50);
  }
  iVar30 = *(int *)(param_1 + 0x24);
  local_128 = 0;
  if (iVar30 != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)(param_1 + 0x20) = iVar30;
    local_128 = iVar30;
  }
  iVar30 = *(int *)(param_1 + 0x74);
  if (iVar30 != 0) {
    iVar20 = *(int *)(param_1 + 8);
    if (0 < iVar20) {
      iVar24 = 0;
      do {
        if ((iVar24 < 0) || (iVar20 <= iVar24)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
          iVar20 = *(int *)(param_1 + 8);
        }
        if (*(int *)((longlong)iVar24 * 0x2c + *(longlong *)(param_1 + 0x10)) == iVar30) {
          if ((iVar24 < 0) || (iVar20 <= iVar24)) {
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                       ,0x833);
          }
          puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar24 * 0x2c);
          if ((puVar14 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar14 + 4) & 0x20) == 0)) {
            lVar28 = FUN_18009f9c0((int *)(param_1 + 8),(ulonglong)puVar14);
            iVar30 = (int)*(short *)(param_1 + 0x78) + (int)lVar28;
            if ((-1 < iVar30) && (iVar30 < *(int *)(param_1 + 8))) {
              puVar15 = (undefined8 *)FUN_18004b7d0((int *)(param_1 + 8),iVar30);
              if (((*(uint *)((longlong)puVar15 + 4) & 0x20) == 0) &&
                 (((byte)*(undefined4 *)((longlong)puVar14 + 4) & 0xc0) ==
                  ((byte)*(uint *)((longlong)puVar15 + 4) & 0xc0))) {
                local_b0 = puVar14[2];
                sVar3 = *(short *)(param_1 + 0x78);
                uVar19 = *(undefined8 *)((longlong)puVar14 + 0x1c);
                uVar8 = *(undefined8 *)((longlong)puVar14 + 0x24);
                uVar9 = *puVar14;
                uVar10 = puVar14[1];
                uStack_a8 = (undefined4)puVar14[3];
                uStack_a4 = (undefined4)uVar19;
                uStack_a0 = (undefined4)((ulonglong)uVar19 >> 0x20);
                puVar21 = (undefined8 *)((longlong)puVar14 + 0x2c);
                if (sVar3 < 1) {
                  puVar21 = puVar15;
                }
                iVar30 = (int)sVar3;
                if (sVar3 < 1) {
                  iVar30 = -(int)sVar3;
                }
                if (sVar3 < 1) {
                  puVar14 = (undefined8 *)((longlong)puVar15 + 0x2c);
                }
                uStack_9c = uVar8;
                FUN_1800d1c20(puVar14,puVar21,(longlong)iVar30 * 0x2c);
                *puVar15 = uVar9;
                puVar15[1] = uVar10;
                puVar15[2] = local_b0;
                puVar15[3] = CONCAT44(uStack_a4,uStack_a8);
                *(undefined8 *)((longlong)puVar15 + 0x1c) = uVar19;
                *(undefined8 *)((longlong)puVar15 + 0x24) = uVar8;
                if ((*(uint *)(param_1 + 0x18) & 0x400000) != 0) {
                  FUN_18005b4a0();
                }
                iVar30 = *(int *)(param_1 + 0x74);
                if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x20)) {
                  iVar30 = local_128;
                }
                local_128 = iVar30;
              }
            }
          }
          break;
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < iVar20);
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (((*(byte *)(param_1 + 0x18) & 4) != 0) &&
     (piVar16 = FUN_18009ea50(param_1), piVar16 != (int *)0x0)) {
    local_128 = *piVar16;
    *(int *)(param_1 + 0x20) = local_128;
  }
  iVar30 = *(int *)(param_1 + 8);
  local_d8[1] = 0.0;
  local_d8[0] = 0.0;
  iVar20 = *(int *)(lVar4 + 0x228c);
  local_d8[2] = 0.0;
  if (iVar20 < iVar30) {
    if (iVar20 != 0) {
      iVar25 = iVar20 + iVar20 / 2;
    }
    iVar24 = iVar30;
    if (iVar30 < iVar25) {
      iVar24 = iVar25;
    }
    if (iVar20 < iVar24) {
      puVar14 = (undefined8 *)FUN_18005b560((longlong)iVar24 * 0xc);
      if (*(undefined8 **)(lVar4 + 0x2290) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar14,*(undefined8 **)(lVar4 + 0x2290),
                      (longlong)*(int *)(lVar4 + 0x2288) * 0xc);
        FUN_18005b5c0(*(longlong *)(lVar4 + 0x2290));
      }
      *(undefined8 **)(lVar4 + 0x2290) = puVar14;
      *(int *)(lVar4 + 0x228c) = iVar24;
    }
  }
  *(int *)(lVar4 + 0x2288) = iVar30;
  iVar25 = *(int *)(param_1 + 8);
  local_e8 = (int *)0x0;
  bVar33 = false;
  if (0 < iVar25) {
    iVar30 = 0;
    local_e0 = -1;
    do {
      if ((iVar30 < 0) || (iVar25 <= iVar30)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar28 = *(longlong *)(param_1 + 0x10);
      lVar27 = (longlong)iVar30 * 0x2c;
      piVar16 = (int *)(lVar27 + lVar28);
      if (*(int *)(lVar27 + 8 + lVar28) < *(int *)(param_1 + 0x30)) {
        FID_conflict__assert
                  (L"tab->LastFrameVisible >= tab_bar->PrevFrameVisible",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0x250f);
      }
      piVar29 = local_e8;
      if (((local_e8 == (int *)0x0) || (local_e8[3] < piVar16[3])) &&
         ((piVar16[1] & 0x200000U) == 0)) {
        piVar29 = piVar16;
      }
      iVar25 = *(int *)(lVar28 + lVar27);
      if (iVar25 == *(int *)(param_1 + 0x20)) {
        bVar33 = true;
      }
      if (local_128 == 0) {
        local_128 = iVar25;
        if (*(int *)(lVar4 + 0x20bc) != iVar25) {
          local_128 = 0;
        }
      }
      iVar25 = *(int *)(lVar28 + 0x20 + lVar27);
      if (iVar25 == -1) {
        pbVar22 = &DAT_1800ed8c0;
      }
      else {
        if (*(int *)(param_1 + 0x98) <= iVar25) {
          FID_conflict__assert
                    (L"tab->NameOffset < tab_bar->TabsNames.Buf.Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                     ,0x25dd);
        }
        pbVar22 = (byte *)((longlong)*(int *)(lVar28 + 0x20 + lVar27) +
                          *(longlong *)(param_1 + 0xa0));
      }
      lVar17 = DAT_180115c10;
      fVar36 = *(float *)(lVar28 + 0x1c + lVar27);
      if (fVar36 < 0.0) {
        uVar13 = *(uint *)(lVar28 + 4 + lVar27);
        FUN_180050b60((undefined8 *)local_c8,pbVar22,(byte *)0x0,'\x01',-1.0);
        if ((uVar13 & 0x100001) == 0x100000) {
          fVar36 = 1.0;
        }
        else {
          fVar36 = *(float *)(lVar17 + 0x10c0) + *(float *)(lVar17 + 0xc80);
        }
        fVar36 = fVar36 + *(float *)(lVar17 + 0xc68) + *(float *)(lVar17 + 0xc68) + local_c8[0];
        fVar34 = *(float *)(DAT_180115c10 + 0x10c0) * 20.0;
        if (fVar34 <= fVar36) {
          fVar36 = fVar34;
        }
      }
      uVar13 = *(uint *)(lVar28 + 4 + lVar27);
      *(float *)(lVar28 + 0x18 + lVar27) = fVar36;
      if ((uVar13 & 0x40) == 0) {
        iVar25 = ((uVar13 >> 7 & 1) != 0) + 1;
        lVar17 = (ulonglong)((uVar13 >> 7 & 1) != 0) + 1;
      }
      else {
        iVar25 = 0;
        lVar17 = 0;
      }
      if (iVar25 == local_e0) {
        fVar34 = *(float *)(lVar4 + 0xc80);
      }
      else {
        fVar34 = 0.0;
      }
      fVar37 = local_d8[lVar17];
      lVar26 = (longlong)(int)fVar37;
      local_d8[lVar17] = (float)((int)fVar37 + 1);
      local_d8[lVar17 * 3 + -0x11] = fVar34 + fVar36 + local_d8[lVar17 * 3 + -0x11];
      local_e0 = iVar25;
      if (((int)fVar37 < 0) || (*(int *)(lVar4 + 0x2288) <= (int)fVar37)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar17 = *(longlong *)(lVar4 + 0x2290);
      *(int *)(lVar17 + lVar26 * 0xc) = iVar30;
      iVar30 = iVar30 + 1;
      uVar2 = *(undefined4 *)(lVar28 + 0x18 + lVar27);
      *(undefined4 *)(lVar17 + 8 + lVar26 * 0xc) = uVar2;
      *(undefined4 *)(lVar17 + 4 + lVar26 * 0xc) = uVar2;
      fVar36 = *(float *)(lVar28 + 0x18 + lVar27);
      if (fVar36 <= 1.0) {
        fVar36 = 1.0;
      }
      *(float *)(lVar28 + 0x14 + lVar27) = fVar36;
      iVar25 = *(int *)(param_1 + 8);
      local_e8 = piVar29;
    } while (iVar30 < iVar25);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (((*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34) < 0.0) && (1 < iVar25)) &&
     (((*(uint *)(param_1 + 0x18) & 0x110) == 0x100 &&
      ((piVar16 = (int *)FUN_18009e730(param_1), piVar16 != (int *)0x0 &&
       (local_128 = *piVar16, (piVar16[1] & 0x200000U) == 0)))))) {
    *(int *)(param_1 + 0x20) = local_128;
  }
  fVar36 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34);
  if (fVar36 <= 0.0) {
    fVar34 = 0.0 - fVar36;
  }
  else {
    fVar34 = 0.0 - ((fVar36 - 0.0) - 0.0);
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
  }
  if ((1.0 <= fVar34) && (((*(byte *)(param_1 + 0x18) & 0x80) != 0 || (fVar36 <= 0.0)))) {
    FUN_18009d230(*(undefined1 **)(lVar4 + 0x2290),0,fVar34);
    for (iVar25 = 0; iVar25 < 0; iVar25 = iVar25 + 1) {
      if ((iVar25 < 0) || (*(int *)(lVar4 + 0x2288) <= iVar25)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      iVar30 = *(int *)(*(longlong *)(lVar4 + 0x2290) + (longlong)iVar25 * 0xc);
      if ((iVar30 < 0) || (*(int *)(param_1 + 8) <= iVar30)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar28 = *(longlong *)(param_1 + 0x10);
      if ((iVar25 < 0) || (*(int *)(lVar4 + 0x2288) <= iVar25)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      fVar36 = (float)(int)*(float *)(*(longlong *)(lVar4 + 0x2290) + 4 + (longlong)iVar25 * 0xc);
      if (0.0 <= fVar36) {
        lVar27 = (longlong)iVar30 * 0x2c;
        fVar34 = 1.0;
        if (1.0 <= fVar36) {
          fVar34 = fVar36;
        }
        uVar13 = *(uint *)(lVar28 + 4 + lVar27);
        if ((uVar13 & 0x40) == 0) {
          lVar17 = (ulonglong)((uVar13 & 0x80) != 0) + 1;
        }
        else {
          lVar17 = 0;
        }
        local_d8[lVar17 * 3 + -0x11] =
             local_d8[lVar17 * 3 + -0x11] - (*(float *)(lVar28 + 0x14 + lVar27) - fVar34);
        *(float *)(lVar28 + 0x14 + lVar27) = fVar34;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) + 0.0;
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) + 0.0;
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) + 0.0;
  FUN_18006dac0((int *)(param_1 + 0x98),0);
  if (!bVar33) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar25 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) == 0) {
    if ((*(int *)(param_1 + 0x24) == 0) && (local_e8 != (int *)0x0)) {
      local_128 = *local_e8;
      *(int *)(param_1 + 0x20) = local_128;
      iVar25 = local_128;
    }
    else {
      iVar25 = 0;
    }
  }
  *(int *)(param_1 + 0x28) = iVar25;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  if (local_128 == 0) {
    if ((((*(uint *)(param_1 + 0x18) & 0x100) != 0) &&
        (uVar19 = FUN_18005a050((float *)(param_1 + 0x34),(float *)(param_1 + 0x3c),'\x01'),
        (char)uVar19 != '\0')) &&
       (uVar19 = FUN_18005a450(*(longlong *)(lVar4 + 0x13a8),0), (char)uVar19 != '\0')) {
      bVar33 = *(char *)(lVar4 + 0xb72) != '\0';
      lVar28 = 0xf8;
      if (!bVar33) {
        lVar28 = 0xfc;
      }
      fVar36 = *(float *)(lVar28 + lVar4);
      bVar12 = FUN_180068c80(bVar33 + 0x295,*(int *)(param_1 + 0x1c));
      if ((bVar12) && (fVar36 != 0.0)) {
        fVar37 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x5c) = 0;
        fVar34 = *(float *)(param_1 + 0x4c) - fVar37;
        fVar36 = *(float *)(param_1 + 0x58) - ((((fVar37 - 0.0) - 0.0) - 0.0) * fVar36) / 3.0;
        if (fVar34 <= fVar36) {
          fVar36 = fVar34;
        }
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        *(float *)(param_1 + 0x58) = fVar36;
      }
      FUN_180067480(bVar33 + 0x295,*(int *)(param_1 + 0x1c),0);
    }
  }
  else {
    uVar18 = FUN_18009d660(param_1,local_128);
    if ((uVar18 != 0) && ((*(byte *)(uVar18 + 4) & 0xc0) == 0)) {
      fVar36 = *(float *)(DAT_180115c10 + 0x10c0);
      lVar28 = FUN_18009f9c0((int *)(param_1 + 8),uVar18);
      if ((int)lVar28 < 0) {
        fVar34 = 0.0;
      }
      else {
        fVar34 = -fVar36;
      }
      fVar37 = *(float *)(uVar18 + 0x10) - 0.0;
      fVar34 = fVar34 + fVar37;
      if (*(int *)(param_1 + 8) <= (int)lVar28 + 1) {
        fVar36 = 1.0;
      }
      fVar35 = *(float *)(uVar18 + 0x14);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      fVar36 = fVar37 + fVar35 + fVar36;
      if ((fVar34 < *(float *)(param_1 + 0x58)) ||
         (fVar37 = (((*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34)) - 0.0) - 0.0) - 0.0,
         fVar37 <= fVar36 - fVar34)) {
        fVar36 = *(float *)(param_1 + 0x54) - fVar36;
        *(float *)(param_1 + 0x58) = fVar34;
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        *(float *)(param_1 + 0x5c) = fVar36;
      }
      else if (*(float *)(param_1 + 0x58) < fVar36 - fVar37) {
        *(float *)(param_1 + 0x58) = fVar36 - fVar37;
        fVar36 = (fVar34 - fVar37) - *(float *)(param_1 + 0x54);
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        *(float *)(param_1 + 0x5c) = fVar36;
      }
    }
  }
  fVar34 = *(float *)(param_1 + 0x4c) - (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34));
  fVar36 = *(float *)(param_1 + 0x54);
  if (fVar34 <= *(float *)(param_1 + 0x54)) {
    fVar36 = fVar34;
  }
  fVar37 = *(float *)(param_1 + 0x58);
  if (fVar34 <= *(float *)(param_1 + 0x58)) {
    fVar37 = fVar34;
  }
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  if (fVar37 <= 0.0) {
    fVar37 = 0.0;
  }
  *(float *)(param_1 + 0x54) = fVar36;
  *(float *)(param_1 + 0x58) = fVar37;
  if (fVar36 == fVar37) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    fVar35 = *(float *)(lVar4 + 0x10c0) * 70.0;
    fVar34 = *(float *)(param_1 + 0x60);
    if (*(float *)(param_1 + 0x60) <= fVar35) {
      fVar34 = fVar35;
    }
    fVar35 = ABS(fVar37 - fVar36) / 0.3;
    if (fVar34 <= fVar35) {
      fVar34 = fVar35;
    }
    *(float *)(param_1 + 0x60) = fVar34;
    if ((*(int *)(param_1 + 0x30) + 1 < *(int *)(lVar4 + 0x12f0)) ||
       (*(float *)(lVar4 + 0x10c0) * 10.0 < *(float *)(param_1 + 0x5c))) {
      fVar36 = fVar37;
    }
    else {
      fVar34 = fVar34 * *(float *)(lVar4 + 0x18);
      if (fVar37 <= fVar36) {
        if (fVar36 <= fVar37) {
        }
        else {
          fVar36 = fVar36 - fVar34;
          if (fVar36 <= fVar37) {
            fVar36 = fVar37;
          }
        }
      }
      else {
        fVar36 = fVar34 + fVar36;
        if (fVar37 <= fVar36) {
          fVar36 = fVar37;
        }
      }
    }
    *(float *)(param_1 + 0x54) = fVar36;
  }
  *(float *)(param_1 + 0x68) = (*(float *)(param_1 + 0x3c) - 0.0) - 0.0;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 0x34) + 0.0 + 0.0;
  lVar4 = *(longlong *)(lVar4 + 0x13a8);
  *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(param_1 + 0x34);
  local_e8 = (int *)CONCAT44(*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38),
                             *(undefined4 *)(param_1 + 0x4c));
  FUN_18005aca0((float *)&local_e8,*(float *)(param_1 + 0x8c));
  fVar34 = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x34);
  fVar36 = *(float *)(lVar4 + 0x138);
  if (*(float *)(lVar4 + 0x138) <= fVar34) {
    fVar36 = fVar34;
  }
  *(float *)(lVar4 + 0x138) = fVar36;
  return;
}


longlong FUN_18009e730(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;

  lVar6 = DAT_180115c10;
  lVar5 = *(longlong *)(DAT_180115c10 + 0x13a8);
  uVar1 = *(undefined4 *)(lVar5 + 0x118);
  uVar2 = *(undefined4 *)(lVar5 + 0x11c);
  fVar18 = *(float *)(DAT_180115c10 + 0x10c0) - 2.0;
  fVar17 = *(float *)(DAT_180115c10 + 0xc6c) + *(float *)(DAT_180115c10 + 0xc6c) +
           *(float *)(DAT_180115c10 + 0x10c0);
  local_c8 = *(undefined4 *)(DAT_180115c10 + 0xd24);
  uStack_c4 = *(undefined4 *)(DAT_180115c10 + 0xd28);
  uStack_c0 = *(undefined4 *)(DAT_180115c10 + 0xd2c);
  fStack_bc = *(float *)(DAT_180115c10 + 0xd30) * 0.5;
  FUN_180062b60(0,(undefined8 *)&local_c8);
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_180062b60(0x15,&local_b8);
  FUN_1800629d0(8,'\x01');
  uVar3 = *(undefined4 *)(lVar6 + 0x7c);
  uVar4 = *(undefined4 *)(lVar6 + 0x80);
  *(undefined4 *)(lVar6 + 0x7c) = 0x3e800000;
  *(undefined4 *)(lVar6 + 0x80) = 0x3e4ccccd;
  fVar15 = *(float *)(param_1 + 0x3c) - (fVar18 + fVar18);
  fVar16 = *(float *)(param_1 + 0x34);
  if (*(float *)(param_1 + 0x34) <= fVar15) {
    fVar16 = fVar15;
  }
  *(undefined4 *)(lVar5 + 0x11c) = *(undefined4 *)(param_1 + 0x38);
  *(float *)(lVar5 + 0x118) = fVar16;
  uVar7 = FUN_18008e0d0(&DAT_1800efe8c,0,CONCAT44(fVar17,fVar18),0x10);
  iVar14 = 1;
  *(undefined4 *)(lVar5 + 0x11c) = *(undefined4 *)(param_1 + 0x38);
  *(float *)(lVar5 + 0x118) = fVar16 + fVar18;
  uVar8 = FUN_18008e0d0(&DAT_1800efe90,1,CONCAT44(fVar17,fVar18),0x10);
  if ((char)uVar8 == '\0') {
    bVar12 = (byte)uVar7 ^ 1;
    FUN_180062270();
    FUN_180062370(2);
    lVar9 = 0;
    *(undefined4 *)(lVar6 + 0x80) = uVar4;
    *(undefined4 *)(lVar6 + 0x7c) = uVar3;
    if (bVar12 == 1) goto LAB_18009e9ea;
    iVar14 = bVar12 - 1;
  }
  else {
    FUN_180062270();
    FUN_180062370(2);
    *(undefined4 *)(lVar6 + 0x80) = uVar4;
    *(undefined4 *)(lVar6 + 0x7c) = uVar3;
  }
  uVar7 = FUN_18009d660(param_1,*(int *)(param_1 + 0x20));
  lVar9 = 0;
  if (uVar7 != 0) {
    uVar7 = FUN_18009f9c0((int *)(param_1 + 8),uVar7);
    uVar8 = uVar7 & 0xffffffff;
    iVar10 = (int)uVar7 + iVar14;
    while( true ) {
      iVar13 = (int)uVar8;
      if ((iVar10 < 0) || (*(int *)(param_1 + 8) <= iVar10)) {
        iVar11 = iVar13;
        if ((iVar13 < 0) || (*(int *)(param_1 + 8) <= iVar13)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
      }
      else {
        iVar11 = iVar10;
      }
      lVar9 = *(longlong *)(param_1 + 0x10) + (longlong)iVar11 * 0x2c;
      if ((((*(uint *)(lVar9 + 4) & 0x200000) == 0) || (iVar10 = iVar10 + iVar14, iVar10 < 0)) ||
         (*(int *)(param_1 + 8) <= iVar10)) break;
      uVar8 = (ulonglong)(uint)(iVar13 + iVar14);
    }
  }
LAB_18009e9ea:
  *(undefined4 *)(lVar5 + 0x118) = uVar1;
  *(undefined4 *)(lVar5 + 0x11c) = uVar2;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - (fVar18 + fVar18 + 1.0);
  return lVar9;
}


int * FUN_18009ea50(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  float local_res8 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;

  lVar7 = DAT_180115c10;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  fVar2 = *(float *)(DAT_180115c10 + 0xc6c);
  lVar6 = *(longlong *)(DAT_180115c10 + 0x13a8);
  fVar3 = *(float *)(DAT_180115c10 + 0x10c0);
  uVar4 = *(undefined4 *)(lVar6 + 0x118);
  uVar5 = *(undefined4 *)(lVar6 + 0x11c);
  *(float *)(lVar6 + 0x118) = *(float *)(param_1 + 0x34) - fVar2;
  *(undefined4 *)(lVar6 + 0x11c) = uVar1;
  *(float *)(param_1 + 0x34) = fVar2 + fVar3 + *(float *)(param_1 + 0x34);
  local_58 = *(undefined4 *)(lVar7 + 0xd24);
  uStack_54 = *(undefined4 *)(lVar7 + 0xd28);
  uStack_50 = *(undefined4 *)(lVar7 + 0xd2c);
  fStack_4c = *(float *)(lVar7 + 0xd30) * 0.5;
  FUN_180062b60(0,(undefined8 *)&local_58);
  local_48 = 0;
  uStack_40 = 0;
  FUN_180062b60(0x15,&local_48);
  uVar9 = FUN_18008e2f0(&DAT_1800efe94,(byte *)0x0,0x50);
  FUN_180062370(2);
  piVar12 = (int *)0x0;
  if ((char)uVar9 != '\0') {
    iVar8 = *(int *)(param_1 + 8);
    if (0 < iVar8) {
      iVar14 = 0;
      piVar13 = piVar12;
      do {
        if ((iVar14 < 0) || (iVar8 <= iVar14)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        piVar11 = (int *)((longlong)iVar14 * 0x2c + *(longlong *)(param_1 + 0x10));
        piVar12 = piVar13;
        if ((piVar11[1] & 0x200000U) == 0) {
          if (piVar11[8] == -1) {
            pbVar10 = &DAT_1800ed8c0;
          }
          else {
            if (*(int *)(param_1 + 0x98) <= piVar11[8]) {
              FID_conflict__assert
                        (L"tab->NameOffset < tab_bar->TabsNames.Buf.Size",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                         ,0x25dd);
            }
            pbVar10 = (byte *)((longlong)piVar11[8] + *(longlong *)(param_1 + 0xa0));
          }
          local_res8[0] = 0.0;
          local_res8[1] = 0.0;
          uVar9 = FUN_18009c3c0(pbVar10,*(int *)(param_1 + 0x20) == *piVar11,0,local_res8);
          piVar12 = piVar11;
          if ((char)uVar9 == '\0') {
            piVar12 = piVar13;
          }
        }
        iVar8 = *(int *)(param_1 + 8);
        iVar14 = iVar14 + 1;
        piVar13 = piVar12;
      } while (iVar14 < iVar8);
    }
    lVar7 = DAT_180115c10;
    FUN_180054790();
    *(int *)(lVar7 + 0x2488) = *(int *)(lVar7 + 0x2488) + -1;
  }
  *(undefined4 *)(lVar6 + 0x118) = uVar4;
  *(undefined4 *)(lVar6 + 0x11c) = uVar5;
  return piVar12;
}


int FUN_18009ec50(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;

  if ((*(uint *)(param_1 + 4) & 0x40) == 0) {
    iVar1 = ((*(uint *)(param_1 + 4) & 0x80) != 0) + 1;
  }
  else {
    iVar1 = 0;
  }
  iVar2 = 0;
  if ((*(uint *)(param_2 + 4) & 0x40) == 0) {
    iVar2 = ((*(uint *)(param_2 + 4) & 0x80) != 0) + 1;
  }
  if (iVar1 == iVar2) {
    return (int)*(short *)(param_1 + 0x26) - (int)*(short *)(param_2 + 0x26);
  }
  return iVar1 - iVar2;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_18009eca0(undefined8 *param_1,uint param_2,byte *param_3,uint param_4,double *param_5,
                       byte *param_6,double *param_7,double *param_8)

{
  uint *puVar1;
  float fVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong extraout_RAX;
  float *pfVar13;
  undefined8 uVar14;
  double *pdVar15;
  char *pcVar16;
  undefined1 auStackY_d8 [32];
  undefined8 *local_90;
  byte *local_88;
  float local_80 [8];
  byte local_60 [32];
  ulonglong local_40;

  lVar6 = DAT_180115c10;
  local_40 = DAT_180112300 ^ (ulonglong)auStackY_d8;
  local_90 = param_1;
  local_88 = param_3;
  if (0xb < param_4) {
    FID_conflict__assert
              (L"data_type >= 0 && data_type < ImGuiDataType_COUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x89d);
  }
  bVar4 = *param_6;
  while ((bVar4 != 0 && ((bVar4 != 0x25 || (param_6[1] == 0x25))))) {
    pbVar9 = param_6 + 1;
    if (bVar4 != 0x25) {
      pbVar9 = param_6;
    }
    bVar4 = pbVar9[1];
    param_6 = pbVar9 + 1;
  }
  if (*param_6 == 0x25) {
    pcVar10 = FUN_180095fb0((char *)param_6);
    if (*pcVar10 != '\0') {
      pcVar16 = (char *)0x20;
      if (pcVar10 + (1 - (longlong)param_6) < (char *)0x20) {
        pcVar16 = pcVar10 + (1 - (longlong)param_6);
      }
      FUN_1800583e0((char *)local_60,(char *)param_6,(ulonglong)pcVar16);
      param_6 = local_60;
      if (local_60[0] == 0) goto LAB_18009ed86;
    }
  }
  else {
LAB_18009ed86:
    param_6 = (&PTR_DAT_1800eda80)[(longlong)(int)param_4 * 4];
  }
  uVar12 = (ulonglong)param_4;
  uVar14 = 0x20;
  pdVar15 = param_5;
  FUN_1800944f0((undefined1 *)local_80,0x20,param_4,(float *)param_5,(longlong)param_6);
  pfVar13 = local_80;
  FUN_180058330((char *)pfVar13);
  puVar1 = (uint *)(lVar6 + 0x1d8c);
  *puVar1 = *puVar1 | 0x10000;
  lVar7 = DAT_180115c10;
  uVar5 = *(uint *)(DAT_180115c10 + 0x2478);
  if (uVar5 != param_2) {
    FUN_180051730(pfVar13,uVar14,uVar12,(ulonglong)pdVar15);
  }
  *(undefined8 *)(*(longlong *)(lVar7 + 0x13a8) + 0x118) = *local_90;
  *(uint *)(lVar7 + 0x1d8c) = *(uint *)(lVar7 + 0x1d8c) | 0x20;
  local_90 = (undefined8 *)
             CONCAT44((float)((ulonglong)local_90[1] >> 0x20) -
                      (float)((ulonglong)*local_90 >> 0x20),(float)local_90[1] - (float)*local_90);
  uVar11 = FUN_180096220(local_88,(float *)0x0,local_80,0x20,(ulonglong *)&local_90,1.655169e-24,
                         (float *)0x0,0);
  uVar12 = (ulonglong)param_2;
  if (uVar5 != param_2) {
    if (*(uint *)(lVar7 + 0x141c) != param_2) {
      FID_conflict__assert
                (L"g.ActiveId == id",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0xe2f);
      uVar12 = extraout_RAX;
    }
    *(undefined4 *)(lVar7 + 0x2478) = *(undefined4 *)(lVar7 + 0x141c);
  }
  if ((char)uVar11 == '\0') {
    return uVar12 & 0xffffffffffffff00;
  }
  uVar12 = *(ulonglong *)(&DAT_1800eda70 + (longlong)(int)param_4 * 0x20);
  FUN_1800d1c20(&local_88,param_5,uVar12);
  FUN_1800940e0((undefined1 (*) [32])local_80,param_4,(int *)param_5,param_6,(undefined8 *)0x0);
  pdVar15 = param_7;
  if (param_7 == (double *)0x0) {
    if (param_8 == (double *)0x0) goto LAB_18009f0f5;
  }
  else if ((param_8 != (double *)0x0) &&
          (uVar11 = FUN_180094360(param_4,param_7,param_8), 0 < (int)uVar11)) {
    pdVar15 = param_8;
    param_8 = param_7;
  }
  switch(param_4) {
  case 0:
    if ((pdVar15 == (double *)0x0) || (*(char *)pdVar15 <= *(char *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(char *)param_8 < *(char *)param_5)) {
        *(char *)param_5 = *(char *)param_8;
      }
    }
    else {
      *(char *)param_5 = *(char *)pdVar15;
    }
    break;
  case 1:
    if ((pdVar15 == (double *)0x0) || (*(byte *)pdVar15 <= *(byte *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(byte *)param_8 < *(byte *)param_5)) {
        *(byte *)param_5 = *(byte *)param_8;
      }
    }
    else {
      *(byte *)param_5 = *(byte *)pdVar15;
    }
    break;
  case 2:
    if ((pdVar15 == (double *)0x0) || (*(short *)pdVar15 <= *(short *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(short *)param_8 < *(short *)param_5)) {
        *(short *)param_5 = *(short *)param_8;
      }
    }
    else {
      *(short *)param_5 = *(short *)pdVar15;
    }
    break;
  case 3:
    if ((pdVar15 == (double *)0x0) || (*(ushort *)pdVar15 <= *(ushort *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(ushort *)param_8 < *(ushort *)param_5)) {
        *(ushort *)param_5 = *(ushort *)param_8;
      }
    }
    else {
      *(ushort *)param_5 = *(ushort *)pdVar15;
    }
    break;
  case 4:
    if ((pdVar15 == (double *)0x0) || ((int)*(float *)pdVar15 <= *(int *)param_5)) {
      if ((param_8 != (double *)0x0) && ((int)*(float *)param_8 < *(int *)param_5)) {
        *(float *)param_5 = *(float *)param_8;
      }
    }
    else {
      *(float *)param_5 = *(float *)pdVar15;
    }
    break;
  case 5:
    if ((pdVar15 == (double *)0x0) || ((uint)*(float *)pdVar15 <= (uint)*(float *)param_5)) {
      if ((param_8 != (double *)0x0) && ((uint)*(float *)param_8 < (uint)*(float *)param_5)) {
        *(float *)param_5 = *(float *)param_8;
      }
    }
    else {
      *(float *)param_5 = *(float *)pdVar15;
    }
    break;
  case 6:
    if ((pdVar15 == (double *)0x0) || ((longlong)*pdVar15 <= (longlong)*param_5)) {
      if ((param_8 != (double *)0x0) && ((longlong)*param_8 < (longlong)*param_5)) {
        *param_5 = *param_8;
      }
    }
    else {
      *param_5 = *pdVar15;
    }
    break;
  case 7:
    if ((pdVar15 == (double *)0x0) || ((ulonglong)*pdVar15 <= (ulonglong)*param_5)) {
      if ((param_8 != (double *)0x0) && ((ulonglong)*param_8 < (ulonglong)*param_5)) {
        *param_5 = *param_8;
      }
    }
    else {
      *param_5 = *pdVar15;
    }
    break;
  case 8:
    if ((pdVar15 == (double *)0x0) ||
       (fVar2 = *(float *)pdVar15, fVar2 < *(float *)param_5 || fVar2 == *(float *)param_5)) {
      if ((param_8 != (double *)0x0) && (*(float *)param_8 < *(float *)param_5)) {
        *(float *)param_5 = *(float *)param_8;
      }
    }
    else {
      *(float *)param_5 = fVar2;
    }
    break;
  case 9:
    if ((pdVar15 == (double *)0x0) || (dVar3 = *pdVar15, dVar3 < *param_5 || dVar3 == *param_5)) {
      if ((param_8 != (double *)0x0) && (*param_8 < *param_5)) {
        *param_5 = *param_8;
      }
    }
    else {
      *param_5 = dVar3;
    }
    break;
  default:
    FID_conflict__assert
              (L"0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x952);
  }
LAB_18009f0f5:
  puVar1 = (uint *)(lVar6 + 0x1d8c);
  *puVar1 = *puVar1 & 0xfffeffff;
  iVar8 = memcmp(&local_88,param_5,uVar12);
  if (iVar8 != 0) {
    FUN_18005b4c0(param_2);
  }
  return (ulonglong)(iVar8 != 0);
}


void FUN_18009f180(char *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  byte *local_18;
  byte *local_10 [2];

  lVar1 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x13a8) + 0xd1) == '\0') {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1800580e0((longlong *)local_10,(longlong *)&local_18,param_1,&local_res10);
    FUN_18009f280(local_10[0],local_18,1);
  }
  return;
}


void FUN_18009f1f0(undefined8 *param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong local_res18;
  undefined8 local_res20;
  byte *local_28;
  byte *local_20 [2];

  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180062b60(0,param_1);
  lVar1 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x13a8) + 0xd1) == '\0') {
    FUN_1800580e0((longlong *)local_20,(longlong *)&local_28,param_2,&local_res18);
    FUN_18009f280(local_20[0],local_28,1);
  }
  FUN_180062370(1);
  return;
}


void FUN_18009f280(byte *param_1,byte *param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  size_t sVar4;
  byte *pbVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *_Str;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  float fVar14;
  float local_res20 [2];
  float fStack_b4;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;

  lVar7 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  lVar7 = *(longlong *)(lVar7 + 0x13a8);
  if (*(char *)(lVar7 + 0xd1) != '\0') {
    return;
  }
  _Str = &DAT_1800d8c40;
  pbVar9 = &DAT_1800d8c40;
  if (param_1 != param_2) {
    _Str = param_1;
    pbVar9 = param_2;
  }
  if (pbVar9 == (byte *)0x0) {
    sVar4 = strlen((char *)_Str);
    pbVar9 = _Str + sVar4;
  }
  lVar3 = DAT_180115c10;
  fVar12 = *(float *)(lVar7 + 0x1e4);
  fVar1 = *(float *)(lVar7 + 0x118);
  fVar14 = *(float *)(lVar7 + 0x150) + *(float *)(lVar7 + 0x11c);
  if ((longlong)pbVar9 - (longlong)_Str < 0x7d1) {
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
      goto LAB_18009f633;
    }
  }
  else if (fVar12 < 0.0) {
    fVar12 = (float)FUN_1800578a0();
    local_res20[0] = 0.0;
    local_res20[1] = 0.0;
    fStack_b4 = fVar14;
    if ((*(char *)(lVar3 + 0x2678) == '\0') &&
       (iVar10 = (int)((*(float *)(lVar7 + 0x25c) - fVar14) / fVar12), 0 < iVar10)) {
      iVar11 = 0;
      if (_Str < pbVar9) {
        do {
          if (iVar10 <= iVar11) break;
          pbVar5 = (byte *)FUN_1800d1a80((char *)_Str,10,(char *)(pbVar9 + -(longlong)_Str));
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = pbVar9;
          }
          if ((param_3 & 1) == 0) {
            pfVar6 = (float *)FUN_180050b60(&local_b0,_Str,pbVar5,'\0',-1.0);
            fVar2 = local_res20[0];
            if (local_res20[0] <= *pfVar6) {
              fVar2 = *pfVar6;
            }
            local_res20[0] = fVar2;
          }
          _Str = pbVar5 + 1;
          iVar11 = iVar11 + 1;
        } while (_Str < pbVar9);
      }
      fStack_b4 = (float)iVar11 * fVar12 + fVar14;
    }
    if (_Str < pbVar9) {
      local_a0 = fVar1 + 3.4028235e+38;
      local_9c = fVar12 + fStack_b4;
      local_a8 = fVar1;
      fStack_a4 = fStack_b4;
      do {
        lVar7 = FUN_180059320(&local_a8,0);
        if ((char)lVar7 != '\0') break;
        pbVar5 = (byte *)FUN_1800d1a80((char *)_Str,10,(char *)(pbVar9 + -(longlong)_Str));
        if (pbVar5 == (byte *)0x0) {
          pbVar5 = pbVar9;
        }
        pfVar6 = (float *)FUN_180050b60(&local_b0,_Str,pbVar5,'\0',-1.0);
        fVar2 = local_res20[0];
        if (local_res20[0] <= *pfVar6) {
          fVar2 = *pfVar6;
        }
        local_res20[0] = fVar2;
        FUN_180064450(CONCAT44(fStack_b4,fVar1),_Str,pbVar5,'\0');
        fStack_b4 = fStack_b4 + fVar12;
        fStack_a4 = fStack_a4 + fVar12;
        local_9c = local_9c + fVar12;
        _Str = pbVar5 + 1;
      } while (_Str < pbVar9);
      iVar10 = 0;
      if (_Str < pbVar9) {
        do {
          pbVar5 = (byte *)FUN_1800d1a80((char *)_Str,10,(char *)(pbVar9 + -(longlong)_Str));
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = pbVar9;
          }
          if ((param_3 & 1) == 0) {
            pfVar6 = (float *)FUN_180050b60(&local_b0,_Str,pbVar5,'\0',-1.0);
            fVar2 = local_res20[0];
            if (local_res20[0] <= *pfVar6) {
              fVar2 = *pfVar6;
            }
            local_res20[0] = fVar2;
          }
          _Str = pbVar5 + 1;
          iVar10 = iVar10 + 1;
        } while (_Str < pbVar9);
      }
      fStack_b4 = fStack_b4 + (float)iVar10 * fVar12;
    }
    local_90 = fVar1 + local_res20[0];
    local_8c = fVar14 + (fStack_b4 - fVar14);
    local_res20[1] = fStack_b4 - fVar14;
    local_98 = fVar1;
    local_94 = fVar14;
    FUN_18005aca0(local_res20,0.0);
    FUN_18005a670(&local_98,(wchar_t *)0x0,(float *)0x0,0);
    return;
  }
  uVar13 = FUN_180051340((float *)(lVar7 + 0x118),(ulonglong)(uint)fVar12);
  fVar12 = (float)uVar13;
LAB_18009f633:
  FUN_180050b60((undefined8 *)local_res20,_Str,pbVar9,'\0',fVar12);
  local_a0 = fVar1 + local_res20[0];
  local_9c = fVar14 + local_res20[1];
  local_a8 = fVar1;
  fStack_a4 = fVar14;
  FUN_18005aca0(local_res20,0.0);
  uVar8 = FUN_18005a670(&local_a8,(wchar_t *)0x0,(float *)0x0,0);
  if ((char)uVar8 != '\0') {
    FUN_1800651d0(CONCAT44(fStack_a4,local_a8),_Str,pbVar9,fVar12);
  }
  return;
}


void FUN_18009f6e0(char *param_1,longlong *param_2)

{
  longlong lVar1;
  byte *local_res18;
  byte *local_res20;

  lVar1 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x13a8) + 0xd1) == '\0') {
    FUN_1800580e0((longlong *)&local_res20,(longlong *)&local_res18,param_1,param_2);
    FUN_18009f280(local_res20,local_res18,1);
  }
  return;
}


void FUN_18009f740(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;

  lVar3 = DAT_180115c10;
  lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
  FUN_180068d30(0.0);
  *(int *)(lVar2 + 0x1a0) = *(int *)(lVar2 + 0x1a0) + -1;
  uVar6 = 1 << ((byte)*(undefined4 *)(lVar2 + 0x1a0) & 0x1f);
  if ((*(uint *)(lVar2 + 0x1a4) & uVar6) != 0) {
    if (*(int *)(lVar3 + 0x1ed8) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    lVar4 = *(longlong *)(lVar3 + 0x1ee0);
    lVar5 = (longlong)*(int *)(lVar3 + 0x1ed8) * 0x1c;
    lVar1 = lVar4 + lVar5;
    if (*(int *)(lVar2 + 0x108) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    if (*(int *)(lVar1 + -0x1c) !=
        *(int *)(*(longlong *)(lVar2 + 0x110) + -4 + (longlong)*(int *)(lVar2 + 0x108) * 4)) {
      FID_conflict__assert
                (L"data->ID == window->IDStack.back()",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                 ,0x1ad2);
    }
    if (((((*(uint *)(lVar4 + -0x18 + lVar5) & 0x20000) != 0) && (*(char *)(lVar3 + 0x1efb) != '\0')
         ) && (*(int *)(lVar3 + 0x1fa0) == 0)) && (*(longlong *)(lVar3 + 0x1f00) == lVar2)) {
      lVar4 = FUN_18005c060();
      if ((char)lVar4 != '\0') {
        FUN_18005c270((longlong *)(lVar3 + 0x1fd8),(undefined4 *)(lVar1 + -0x1c));
      }
    }
    if (*(int *)(lVar3 + 0x1ed8) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x849);
    }
    *(int *)(lVar3 + 0x1ed8) = *(int *)(lVar3 + 0x1ed8) + -1;
    *(uint *)(lVar2 + 0x1a4) = *(uint *)(lVar2 + 0x1a4) & ~uVar6;
  }
  if (*(int *)(lVar2 + 0x108) < 2) {
    FID_conflict__assert
              (L"window->IDStack.Size > 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1add);
  }
  FUN_180062210();
  return;
}


void FUN_18009f8e0(undefined4 *param_1,float param_2,char param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  bool bVar7;

  if (param_3 == '\0') {
    sVar4 = *(short *)((longlong)param_1 + 0x16);
    sVar6 = *(short *)(param_1 + 6);
  }
  else {
    sVar4 = 0;
    *(undefined8 *)((longlong)param_1 + 0x12) = 0;
    sVar6 = 0;
  }
  sVar3 = (short)(int)param_2;
  *(short *)(param_1 + 2) = sVar3;
  sVar5 = *(short *)((longlong)param_1 + 0x12);
  sVar1 = *(short *)(param_1 + 5);
  bVar7 = sVar5 == 0;
  if (sVar5 != 0) {
    sVar2 = sVar5 + sVar3;
    if (sVar1 == 0) {
      sVar2 = sVar5;
    }
    sVar5 = sVar2;
  }
  *(short *)(param_1 + 3) = sVar5;
  sVar5 = sVar1 + sVar5;
  if (!(sVar1 == 0 && bVar7)) {
    sVar2 = sVar5 + sVar3;
    if (sVar4 == 0) {
      sVar2 = sVar5;
    }
    sVar5 = sVar2;
  }
  *(short *)((longlong)param_1 + 0xe) = sVar5;
  sVar5 = sVar5 + sVar4;
  if (sVar4 == 0 && (sVar1 == 0 && bVar7)) {
    sVar4 = sVar5;
  }
  else {
    sVar4 = sVar3 + sVar5;
    if (sVar6 == 0) {
      sVar4 = sVar5;
    }
  }
  *(short *)(param_1 + 4) = sVar4;
  param_1[1] = (uint)(ushort)(sVar6 + sVar4);
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *param_1 = param_1[1];
  param_1[1] = 0;
  return;
}


longlong FUN_18009f9c0(int *param_1,ulonglong param_2)

{
  if ((param_2 < *(ulonglong *)(param_1 + 2)) ||
     ((longlong)*param_1 * 0x2c + *(ulonglong *)(param_1 + 2) <= param_2)) {
    FID_conflict__assert
              (L"it >= Data && it < Data + Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x855);
  }
  return (longlong)(param_2 - *(longlong *)(param_1 + 2)) / 0x2c;
}


undefined8 FUN_18009fa30(longlong param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  uint local_res8 [2];
  uint local_res18 [2];

  if (((*(uint *)(param_1 + 0x10) & 0x400) == 0) && (0 < param_2)) {
    pbVar8 = (byte *)((longlong)param_2 + *(ulonglong *)(param_1 + 0x20));
    pbVar5 = (byte *)FUN_180058660(*(ulonglong *)(param_1 + 0x20),(ulonglong)pbVar8);
    FUN_180058410(local_res18,pbVar8,
                  (byte *)((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)));
    FUN_180058410(local_res8,pbVar5,
                  (byte *)((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)));
    if ((local_res8[0] == 0x20) || ((local_res8[0] == 9 || (local_res8[0] == 0x3000)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    puVar6 = &DAT_1800ee5e0;
    puVar7 = &DAT_1800ee5e0;
    do {
      if (local_res8[0] == *puVar7) {
        bVar2 = true;
        goto LAB_18009fae3;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (uint *)&DAT_1800ee654);
    bVar2 = false;
LAB_18009fae3:
    if (((local_res18[0] == 0x20) || (local_res18[0] == 9)) || (local_res18[0] == 0x3000)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    do {
      if (local_res18[0] == *puVar6) {
        bVar4 = true;
        goto LAB_18009fb14;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (uint *)&DAT_1800ee654);
    bVar4 = false;
LAB_18009fb14:
    if ((bVar1) || (bVar2)) {
      if (!bVar4) {
        if (bVar3) {
          return 0;
        }
        return 1;
      }
    }
    else if (!bVar4) {
      return 0;
    }
    if (!bVar2) {
      return 1;
    }
  }
  return 0;
}


void FUN_18009fb50(int *param_1,int param_2)

{
  undefined8 *puVar1;

  if (param_1[1] < param_2) {
    puVar1 = (undefined8 *)FUN_18005b560((longlong)param_2 * 0x18);
    if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
      FUN_1800d1c20(puVar1,*(undefined8 **)(param_1 + 2),(longlong)*param_1 * 0x18);
      FUN_18005b5c0(*(longlong *)(param_1 + 2));
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
    param_1[1] = param_2;
  }
  return;
}


longlong FUN_18009fbc0(undefined8 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined8 *puVar5;

  *(undefined2 *)((longlong)param_1 + 0xa1a) = 99;
  *(undefined4 *)(param_1 + 0x144) = 999;
  if (*(short *)(param_1 + 0x143) == 99) {
    FUN_1800a0430(param_1);
  }
  if (999 < param_3) {
    *(undefined2 *)(param_1 + 0x143) = 0;
    *(undefined4 *)((longlong)param_1 + 0xa1c) = 0;
    return 0;
  }
  iVar4 = *(int *)((longlong)param_1 + 0xa1c);
  if (999 < iVar4 + param_3) {
    do {
      sVar3 = *(short *)(param_1 + 0x143);
      if (0 < sVar3) {
        if (-1 < *(int *)((longlong)param_1 + 0xc)) {
          iVar1 = *(int *)((longlong)param_1 + 4);
          *(int *)((longlong)param_1 + 0xa1c) = iVar4 - iVar1;
          FUN_1800d1c20(param_1 + 0xc6,(undefined8 *)((longlong)(param_1 + 0xc6) + (longlong)iVar1),
                        (longlong)(iVar4 - iVar1));
          sVar3 = *(short *)(param_1 + 0x143);
          iVar4 = 0;
          if (0 < sVar3) {
            do {
              iVar2 = *(int *)((longlong)param_1 + (longlong)iVar4 * 0x10 + 0xc);
              if (-1 < iVar2) {
                *(int *)((longlong)param_1 + (longlong)iVar4 * 0x10 + 0xc) = iVar2 - iVar1;
              }
              sVar3 = *(short *)(param_1 + 0x143);
              iVar4 = iVar4 + 1;
            } while (iVar4 < sVar3);
          }
        }
        *(short *)(param_1 + 0x143) = sVar3 + -1;
        FUN_1800d1c20(param_1,param_1 + 2,(longlong)(short)(sVar3 + -1) << 4);
      }
      iVar4 = *(int *)((longlong)param_1 + 0xa1c);
    } while (999 < iVar4 + param_3);
  }
  sVar3 = *(short *)(param_1 + 0x143);
  *(short *)(param_1 + 0x143) = sVar3 + 1;
  puVar5 = param_1 + (longlong)sVar3 * 2;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)puVar5 = param_2;
    *(int *)((longlong)puVar5 + 4) = param_3;
    *(undefined4 *)(puVar5 + 1) = param_4;
    if (param_3 != 0) {
      *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xa1c);
      *(int *)((longlong)param_1 + 0xa1c) = *(int *)((longlong)param_1 + 0xa1c) + param_3;
      return (longlong)*(int *)((longlong)puVar5 + 0xc) + 0x630 + (longlong)param_1;
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0xffffffff;
  }
  return 0;
}


int FUN_18009fd70(longlong *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint local_res8 [8];
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  int local_64;

  iVar3 = (int)param_1[3];
  iVar2 = 0;
  local_78 = 0;
  fVar6 = 0.0;
  local_6c = 0;
  local_64 = 0;
  if (0 < iVar3) {
    do {
      FUN_18009b4b0((undefined4 *)&local_78,param_1,iVar2);
      iVar1 = local_64;
      if (local_64 < 1) {
        return iVar3;
      }
      if ((iVar2 == 0) && (param_3 < (float)local_6c + fVar6)) {
        return 0;
      }
      if (param_3 < local_6c._4_4_ + fVar6) {
        if (iVar3 <= iVar2) {
          return iVar3;
        }
        if ((float)local_78 <= param_2) {
          if ((param_2 < local_78._4_4_) && (iVar3 = 0, fVar6 = (float)local_78, 0 < local_64)) {
            do {
              fVar5 = FUN_18009b2f0(param_1,iVar2,iVar3);
              iVar3 = iVar3 + iVar2;
              if (param_2 < fVar5 + fVar6) {
                if (param_2 < fVar5 * 0.5 + fVar6) {
                  return iVar3;
                }
                iVar3 = FUN_180095f70((longlong)param_1,iVar3);
                return iVar3;
              }
              iVar4 = (int)param_1[3];
              if (iVar3 < iVar4) {
                iVar4 = FUN_180058410(local_res8,(byte *)((longlong)iVar3 + param_1[4]),
                                      (byte *)(param_1[4] + (longlong)iVar4));
                iVar4 = iVar3 + iVar4;
              }
              else {
                iVar4 = iVar4 + 1;
              }
              iVar3 = iVar4 - iVar2;
              fVar6 = fVar5 + fVar6;
            } while (iVar3 < iVar1);
          }
          iVar2 = iVar2 + iVar1;
          if ((int)param_1[3] < iVar2 + -1) {
            FID_conflict__assert
                      (L"idx <= obj->TextLen",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                       ,0xf84);
          }
          if (*(char *)(param_1[4] + -1 + (longlong)iVar2) == DAT_1801121c8) {
            iVar2 = iVar2 + -1;
          }
          return iVar2;
        }
        return iVar2;
      }
      fVar6 = fVar6 + local_70;
      iVar2 = iVar2 + local_64;
    } while (iVar2 < iVar3);
  }
  return iVar3;
}


void FUN_18009ff00(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;

  lVar1 = FUN_18009fbc0((undefined8 *)(param_2 + 0x20),param_3,param_4,param_5);
  if ((lVar1 != 0) && (uVar3 = 0, 0 < param_4)) {
    do {
      iVar4 = (int)uVar3 + param_3;
      if (*(int *)(param_1 + 0x18) < iVar4) {
        FID_conflict__assert
                  (L"idx <= obj->TextLen",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0xf84);
      }
      *(undefined1 *)(lVar1 + uVar3) =
           *(undefined1 *)((longlong)iVar4 + *(longlong *)(param_1 + 0x20));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < param_4);
  }
  return;
}


void FUN_18009ffa0(longlong param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;

  if ((short)param_2[0x28e] != 0) {
    lVar10 = (longlong)*(short *)((longlong)param_2 + 0xa3a);
    lVar8 = (longlong)(short)param_2[0x28e] + -1;
    iVar3 = param_2[lVar8 * 4 + 9];
    iVar4 = param_2[lVar8 * 4 + 10];
    iVar5 = param_2[lVar8 * 4 + 8];
    iVar6 = param_2[lVar8 * 4 + 0xb];
    param_2[lVar10 * 4 + 7] = -1;
    param_2[lVar10 * 4 + 5] = iVar4;
    param_2[lVar10 * 4 + 6] = iVar3;
    param_2[lVar10 * 4 + 4] = iVar5;
    if (iVar4 != 0) {
      if (param_2[0x28f] + iVar4 < 999) {
        iVar9 = param_2[0x290];
        if (iVar9 < param_2[0x28f] + iVar4) {
          piVar1 = param_2 + 8;
          do {
            if (*(short *)((longlong)param_2 + 0xa3a) == 99) {
              return;
            }
            if (*(short *)((longlong)param_2 + 0xa3a) < 99) {
              if (-1 < param_2[0x193]) {
                iVar11 = param_2[0x191];
                iVar9 = iVar9 + iVar11;
                param_2[0x290] = iVar9;
                FUN_1800d1c20((undefined8 *)((longlong)param_2 + (longlong)iVar9 + 0x650),
                              (undefined8 *)
                              ((longlong)param_2 + ((longlong)iVar9 - (longlong)iVar11) + 0x650),
                              (longlong)(999 - iVar9));
                for (iVar9 = (int)*(short *)((longlong)param_2 + 0xa3a); iVar9 < 0x62;
                    iVar9 = iVar9 + 1) {
                  if (-1 < param_2[(longlong)iVar9 * 4 + 0xb]) {
                    param_2[(longlong)iVar9 * 4 + 0xb] = param_2[(longlong)iVar9 * 4 + 0xb] + iVar11
                    ;
                  }
                }
              }
              lVar8 = (longlong)(0x62 - *(short *)((longlong)param_2 + 0xa3a));
              if (piVar1 + (longlong)*(short *)((longlong)param_2 + 0xa3a) * 4 < piVar1) {
                FID_conflict__assert
                          (L"((char*)(state->undo_rec + state->redo_point)) >= buf_begin",
                           L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imstb_textedit.h"
                           ,0x4a8);
              }
              if (param_2 + 0x194 <
                  param_2 + (*(short *)((longlong)param_2 + 0xa3a) + lVar8) * 4 + 0xc) {
                FID_conflict__assert
                          (L"((char*)(state->undo_rec + state->redo_point + 1) + move_size) <= buf_end"
                           ,
                           L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imstb_textedit.h"
                           ,0x4a9);
              }
              FUN_1800d1c20((undefined8 *)
                            (param_2 + (longlong)*(short *)((longlong)param_2 + 0xa3a) * 4 + 0xc),
                            (undefined8 *)
                            (piVar1 + (longlong)*(short *)((longlong)param_2 + 0xa3a) * 4),
                            lVar8 << 4);
              *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + 1;
            }
            iVar9 = param_2[0x290];
          } while (iVar9 < param_2[0x28f] + iVar4);
        }
        sVar2 = *(short *)((longlong)param_2 + 0xa3a);
        iVar11 = 0;
        param_2[(longlong)sVar2 * 4 + 7] = iVar9 - iVar4;
        param_2[0x290] = param_2[0x290] - iVar4;
        if (0 < iVar4) {
          do {
            iVar9 = iVar11 + iVar5;
            if (*(int *)(param_1 + 0x18) < iVar9) {
              FID_conflict__assert
                        (L"idx <= obj->TextLen",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                         ,0xf84);
            }
            iVar7 = param_2[(longlong)sVar2 * 4 + 7] + iVar11;
            iVar11 = iVar11 + 1;
            *(undefined1 *)((longlong)param_2 + (longlong)iVar7 + 0x650) =
                 *(undefined1 *)((longlong)iVar9 + *(longlong *)(param_1 + 0x20));
          } while (iVar11 < iVar4);
        }
      }
      else {
        param_2[lVar10 * 4 + 5] = 0;
      }
      FUN_18009b230(param_1,iVar5,iVar4);
    }
    if (iVar3 != 0) {
      FUN_18009b370(param_1,iVar5,(undefined8 *)((longlong)iVar6 + 0x650 + (longlong)param_2),iVar3)
      ;
      param_2[0x28f] = param_2[0x28f] - iVar3;
    }
    *param_2 = iVar5 + iVar3;
    *(short *)(param_2 + 0x28e) = (short)param_2[0x28e] + -1;
    *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + -1;
  }
  return;
}


void FUN_1800a0280(longlong *param_1,int *param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 local_38 [3];
  float local_2c;

  if (*(char *)((longlong)param_2 + 0x17) != '\0') {
    FUN_18009b4b0(local_38,param_1,0);
    param_4 = local_2c;
  }
  iVar1 = FUN_18009fd70(param_1,param_3,param_4);
  *param_2 = iVar1;
  param_2[1] = iVar1;
  param_2[2] = iVar1;
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  return;
}


void FUN_1800a02e0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;

  lVar1 = FUN_18009fbc0((undefined8 *)(param_2 + 0x20),param_3,param_4,0);
  if ((lVar1 != 0) && (uVar3 = 0, 0 < param_4)) {
    do {
      iVar4 = (int)uVar3 + param_3;
      if (*(int *)(param_1 + 0x18) < iVar4) {
        FID_conflict__assert
                  (L"idx <= obj->TextLen",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0xf84);
      }
      *(undefined1 *)(lVar1 + uVar3) =
           *(undefined1 *)((longlong)iVar4 + *(longlong *)(param_1 + 0x20));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < param_4);
  }
  FUN_18009b230(param_1,param_3,param_4);
  *(undefined1 *)(param_2 + 0x16) = 0;
  return;
}


void FUN_1800a03a0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = param_2[2];
  iVar2 = param_2[1];
  if (iVar2 != iVar3) {
    if (iVar1 < iVar2) {
      param_2[1] = iVar1;
      iVar2 = iVar1;
    }
    if (iVar1 < iVar3) {
      param_2[2] = iVar1;
      iVar3 = iVar1;
    }
    if (iVar2 == iVar3) {
      *param_2 = iVar2;
    }
  }
  if (iVar1 < *param_2) {
    *param_2 = iVar1;
  }
  if (iVar2 != iVar3) {
    if (iVar2 < iVar3) {
      FUN_1800a02e0(param_1,(longlong)param_2,iVar2,iVar3 - iVar2);
      param_2[2] = param_2[1];
      *param_2 = param_2[1];
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    }
    FUN_1800a02e0(param_1,(longlong)param_2,iVar3,iVar2 - iVar3);
    param_2[1] = param_2[2];
    *param_2 = param_2[2];
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  }
  return;
}


void FUN_1800a0430(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;

  sVar3 = *(short *)(param_1 + 0x143);
  if (sVar3 < 1) {
    return;
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    iVar1 = *(int *)((longlong)param_1 + 4);
    *(int *)((longlong)param_1 + 0xa1c) = *(int *)((longlong)param_1 + 0xa1c) - iVar1;
    FUN_1800d1c20(param_1 + 0xc6,(undefined8 *)((longlong)param_1 + (longlong)iVar1 + 0x630),
                  (longlong)*(int *)((longlong)param_1 + 0xa1c));
    sVar3 = *(short *)(param_1 + 0x143);
    iVar4 = 0;
    if (0 < sVar3) {
      do {
        iVar2 = *(int *)((longlong)param_1 + (longlong)iVar4 * 0x10 + 0xc);
        if (-1 < iVar2) {
          *(int *)((longlong)param_1 + (longlong)iVar4 * 0x10 + 0xc) = iVar2 - iVar1;
        }
        sVar3 = *(short *)(param_1 + 0x143);
        iVar4 = iVar4 + 1;
      } while (iVar4 < sVar3);
    }
  }
  *(short *)(param_1 + 0x143) = sVar3 + -1;
  FUN_1800d1c20(param_1,param_1 + 2,(longlong)(short)(sVar3 + -1) << 4);
  return;
}


void FUN_1800a04e0(float *param_1,longlong *param_2,float param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint local_res10 [2];
  float local_res18 [4];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;

  fVar9 = *(float *)(param_2 + 3);
  local_res18[0] = param_3;
  if ((param_3 == fVar9) && (param_4 != 0)) {
    FUN_18009b4b0(&local_68,param_2,0);
    param_1[1] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = fVar9;
    param_1[2] = local_58 - local_5c;
    *param_1 = local_64;
    return;
  }
  iVar4 = 0;
  param_1[1] = 0.0;
  fVar8 = 0.0;
  fVar7 = 0.0;
  FUN_18009b4b0(&local_68,param_2,0);
  fVar6 = 0.0;
  if ((int)local_54 <= (int)param_3) {
    do {
      fVar7 = fVar6;
      fVar2 = local_54;
      fVar6 = (float)((int)local_54 + (int)fVar7);
      if ((fVar6 == fVar9) && (0 < (int)fVar9)) {
        if ((int)param_2[3] < (int)fVar9 + -1) {
          FID_conflict__assert
                    (L"idx <= obj->TextLen",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                     ,0xf84);
        }
        fVar5 = fVar7;
        if (*(char *)((longlong)(int)fVar9 + -1 + param_2[4]) == DAT_1801121c8) goto LAB_1800a05c1;
LAB_1800a060f:
        fVar7 = fVar8;
        local_54 = fVar2;
        param_3 = local_res18[0];
        fVar6 = fVar5;
        break;
      }
LAB_1800a05c1:
      param_1[1] = local_60 + param_1[1];
      fVar8 = fVar7;
      if (fVar6 == fVar9) {
        fVar2 = 0.0;
        fVar5 = fVar6;
        goto LAB_1800a060f;
      }
      FUN_18009b4b0(&local_68,param_2,(int)fVar6);
      param_3 = local_res18[0];
    } while ((int)local_54 + (int)fVar6 <= (int)local_res18[0]);
  }
  param_1[4] = local_54;
  param_1[5] = fVar7;
  param_1[3] = fVar6;
  param_1[2] = local_58 - local_5c;
  *param_1 = local_68;
  if ((int)fVar6 < (int)param_3) {
    do {
      FUN_180058410((uint *)local_res18,
                    (byte *)((longlong)iVar4 + (longlong)(int)fVar6 + param_2[4]),
                    (byte *)((longlong)(int)param_2[3] + param_2[4]));
      if (SUB42(local_res18[0],0) == 10) {
        fVar9 = -1.0;
      }
      else {
        piVar1 = *(int **)(*param_2 + 0x10b8);
        if ((int)((uint)local_res18[0] & 0xffff) < *piVar1) {
          fVar9 = *(float *)(*(longlong *)(piVar1 + 2) +
                            (ulonglong)((uint)local_res18[0] & 0xffff) * 4);
        }
        else {
          fVar9 = (float)piVar1[4];
        }
        fVar9 = fVar9 * *(float *)(*param_2 + 0x10c8);
      }
      iVar4 = iVar4 + (int)fVar6;
      *param_1 = fVar9 + *param_1;
      iVar3 = (int)param_2[3];
      if (iVar4 < iVar3) {
        iVar3 = FUN_180058410(local_res10,(byte *)((longlong)iVar4 + param_2[4]),
                              (byte *)(param_2[4] + (longlong)iVar3));
        iVar3 = iVar3 + iVar4;
      }
      else {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar3 - (int)fVar6;
    } while (iVar3 < (int)param_3);
  }
  return;
}


void FUN_1800a0720(longlong *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float local_res18;
  uint local_res20 [2];
  uint local_98 [2];
  float local_90 [3];
  float local_84;
  float local_80;
  float local_7c;

  local_res18 = 1.4013e-45;
LAB_1800a0770:
  if ((int)param_3 < 0x600001) {
    if (param_3 == 0x600000) {
      fVar2 = param_2[2];
      fVar4 = param_2[1];
      fVar14 = *(float *)(param_1 + 3);
      if (fVar4 != fVar2) {
        if ((int)fVar14 < (int)fVar4) {
          param_2[1] = fVar14;
          fVar4 = fVar14;
        }
        if ((int)fVar14 < (int)fVar2) {
          param_2[2] = fVar14;
          fVar2 = fVar14;
        }
        if (fVar4 == fVar2) {
          *param_2 = fVar4;
        }
      }
      fVar11 = *param_2;
      if ((int)fVar14 < (int)fVar11) {
        *param_2 = fVar14;
        fVar11 = fVar14;
      }
      if (fVar4 == fVar2) {
        param_2[2] = fVar11;
        param_2[1] = fVar11;
        fVar2 = fVar11;
      }
      else {
        *param_2 = fVar2;
      }
      if (0 < (int)fVar2) {
        uVar6 = FUN_180058660(param_1[4],(longlong)(int)fVar2 + param_1[4]);
        fVar2 = (float)((int)uVar6 - (int)param_1[4]);
        param_2[2] = fVar2;
      }
      *param_2 = fVar2;
      goto LAB_1800a14e1;
    }
    switch(param_3) {
    case 0x200000:
      fVar2 = param_2[2];
      fVar4 = param_2[1];
      bVar15 = SBORROW4((int)fVar4,(int)fVar2);
      iVar13 = (int)fVar4 - (int)fVar2;
      if (fVar4 == fVar2) {
        if (0 < (int)*param_2) {
          uVar6 = FUN_180058660(param_1[4],param_1[4] + (longlong)(int)*param_2);
          *param_2 = (float)((int)uVar6 - (int)param_1[4]);
        }
        goto LAB_1800a14e1;
      }
      break;
    case 0x200001:
      fVar2 = param_2[2];
      fVar4 = param_2[1];
      if (fVar4 == fVar2) {
        fVar14 = (float)FUN_180095f70((longlong)param_1,(int)*param_2);
      }
      else {
        if ((int)fVar2 < (int)fVar4) {
          param_2[2] = fVar4;
          param_2[1] = fVar2;
          fVar14 = fVar4;
          fVar4 = fVar2;
        }
        else {
          fVar14 = fVar2;
        }
        fVar2 = *(float *)(param_1 + 3);
        if ((int)fVar2 < (int)fVar4) {
          fVar4 = fVar2;
        }
        if ((int)fVar2 < (int)fVar14) {
          param_2[2] = fVar2;
          fVar14 = fVar2;
        }
        if (fVar4 == fVar14) {
          *param_2 = fVar4;
        }
        param_2[1] = fVar14;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      }
      *param_2 = fVar14;
      fVar2 = param_2[2];
      fVar4 = param_2[1];
      fVar11 = *(float *)(param_1 + 3);
      if (fVar4 != fVar2) {
        if ((int)fVar11 < (int)fVar4) {
          param_2[1] = fVar11;
          fVar4 = fVar11;
        }
        if ((int)fVar11 < (int)fVar2) {
          param_2[2] = fVar11;
          fVar2 = fVar11;
        }
        if (fVar4 == fVar2) {
          *param_2 = fVar4;
          fVar14 = fVar4;
        }
      }
      if ((int)fVar11 < (int)fVar14) {
        *param_2 = fVar11;
      }
      goto LAB_1800a14e1;
    case 0x200002:
    case 0x20000e:
      goto switchD_1800a07a3_caseD_200002;
    case 0x200003:
    case 0x20000f:
      goto switchD_1800a07a3_caseD_200003;
    case 0x200004:
      fVar2 = param_2[2];
      fVar4 = param_2[1];
      fVar14 = *(float *)(param_1 + 3);
      if (fVar4 != fVar2) {
        if ((int)fVar14 < (int)fVar4) {
          param_2[1] = fVar14;
          fVar4 = fVar14;
        }
        if ((int)fVar14 < (int)fVar2) {
          param_2[2] = fVar14;
          fVar2 = fVar14;
        }
        if (fVar4 == fVar2) {
          *param_2 = fVar4;
        }
      }
      fVar11 = *param_2;
      if ((int)fVar14 < (int)fVar11) {
        *param_2 = fVar14;
        fVar11 = fVar14;
      }
      if (fVar4 != fVar2) {
        if ((int)fVar2 < (int)fVar4) {
          param_2[1] = fVar2;
          *param_2 = fVar2;
          param_2[2] = fVar2;
          *(undefined1 *)((longlong)param_2 + 0x16) = 0;
          fVar11 = fVar2;
        }
        else {
          *param_2 = fVar4;
          param_2[2] = fVar4;
          *(undefined1 *)((longlong)param_2 + 0x16) = 0;
          fVar11 = fVar4;
        }
      }
      if (*(char *)((longlong)param_2 + 0x17) == '\0') goto joined_r0x0001800a0b67;
      *param_2 = 0.0;
      goto LAB_1800a14e1;
    case 0x200005:
      fVar2 = param_2[2];
      fVar4 = param_2[1];
      fVar14 = *(float *)(param_1 + 3);
      if (fVar4 != fVar2) {
        if ((int)fVar14 < (int)fVar4) {
          param_2[1] = fVar14;
          fVar4 = fVar14;
        }
        if ((int)fVar14 < (int)fVar2) {
          param_2[2] = fVar14;
          fVar2 = fVar14;
        }
        if (fVar4 == fVar2) {
          *param_2 = fVar4;
        }
      }
      fVar11 = *param_2;
      if ((int)fVar14 < (int)*param_2) {
        *param_2 = fVar14;
        fVar11 = fVar14;
      }
      if (fVar4 != fVar2) {
        if ((int)fVar2 < (int)fVar4) {
          param_2[1] = fVar2;
          *param_2 = fVar2;
          param_2[2] = fVar2;
          *(undefined1 *)((longlong)param_2 + 0x16) = 0;
          fVar11 = fVar2;
        }
        else {
          *param_2 = fVar4;
          param_2[2] = fVar4;
          *(undefined1 *)((longlong)param_2 + 0x16) = 0;
          fVar11 = fVar4;
        }
      }
      if (*(char *)((longlong)param_2 + 0x17) == '\0') goto joined_r0x0001800a0c16;
      *param_2 = fVar14;
      goto LAB_1800a14e1;
    case 0x200006:
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      *param_2 = 0.0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x200007:
      *param_2 = *(float *)(param_1 + 3);
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x200008:
      goto switchD_1800a07a3_caseD_200008;
    case 0x200009:
      goto switchD_1800a07a3_caseD_200009;
    case 0x20000a:
      FUN_18009ffa0((longlong)param_1,(int *)param_2);
      goto LAB_1800a14e1;
    case 0x20000b:
      lVar5 = (longlong)*(short *)((longlong)param_2 + 0xa3a);
      if (*(short *)((longlong)param_2 + 0xa3a) != 99) {
        lVar10 = (longlong)*(short *)(param_2 + 0x28e);
        fVar2 = param_2[lVar5 * 4 + 10];
        fVar4 = param_2[lVar5 * 4 + 8];
        fVar14 = param_2[lVar5 * 4 + 9];
        fVar11 = param_2[lVar5 * 4 + 0xb];
        param_2[lVar10 * 4 + 10] = fVar14;
        param_2[lVar10 * 4 + 9] = fVar2;
        param_2[lVar10 * 4 + 8] = fVar4;
        param_2[lVar10 * 4 + 0xb] = -NAN;
        if (fVar2 != 0.0) {
          if ((int)param_2[0x290] < (int)fVar2 + (int)param_2[0x28f]) {
            (param_2 + lVar10 * 4 + 9)[0] = 0.0;
            (param_2 + lVar10 * 4 + 9)[1] = 0.0;
          }
          else {
            param_2[lVar10 * 4 + 0xb] = param_2[0x28f];
            param_2[0x28f] = (float)((int)param_2[0x28f] + (int)fVar2);
            local_res18 = 0.0;
            if (0 < (int)param_2[lVar10 * 4 + 9]) {
              do {
                iVar13 = (int)param_2[lVar10 * 4 + 8] + (int)local_res18;
                if ((int)param_1[3] < iVar13) {
                  FID_conflict__assert
                            (L"idx <= obj->TextLen",
                             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                             ,0xf84);
                }
                iVar9 = (int)param_2[lVar10 * 4 + 0xb] + (int)local_res18;
                local_res18 = (float)((int)local_res18 + 1);
                *(undefined1 *)((longlong)param_2 + (longlong)iVar9 + 0x650) =
                     *(undefined1 *)((longlong)iVar13 + param_1[4]);
              } while ((int)local_res18 < (int)param_2[lVar10 * 4 + 9]);
            }
          }
          FUN_18009b230((longlong)param_1,(int)fVar4,(int)fVar2);
        }
        if (fVar14 != 0.0) {
          FUN_18009b370((longlong)param_1,(int)fVar4,
                        (undefined8 *)((longlong)param_2 + (longlong)(int)fVar11 + 0x650),
                        (int)fVar14);
          param_2[0x290] = (float)((int)param_2[0x290] + (int)fVar14);
        }
        *param_2 = (float)((int)fVar4 + (int)fVar14);
        *(short *)(param_2 + 0x28e) = *(short *)(param_2 + 0x28e) + 1;
        *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + 1;
      }
      goto LAB_1800a14e1;
    case 0x20000c:
      fVar2 = param_2[2];
      fVar4 = param_2[1];
      bVar15 = SBORROW4((int)fVar4,(int)fVar2);
      iVar13 = (int)fVar4 - (int)fVar2;
      if (fVar4 == fVar2) {
        fVar2 = (float)FUN_18009b620((longlong)param_1,(int)*param_2);
        goto LAB_1800a0a54;
      }
      break;
    case 0x20000d:
      fVar2 = param_2[2];
      fVar4 = param_2[1];
      if (fVar4 == fVar2) {
        fVar2 = (float)FUN_18009b6a0(param_1,(int)*param_2);
LAB_1800a0a54:
        fVar4 = param_2[2];
        fVar14 = param_2[1];
        *param_2 = fVar2;
        fVar11 = *(float *)(param_1 + 3);
        if (fVar14 == fVar4) goto LAB_1800a0a82;
        if ((int)fVar11 < (int)fVar14) {
          param_2[1] = fVar11;
          fVar14 = fVar11;
        }
        if ((int)fVar11 < (int)fVar4) goto LAB_1800a0a73;
        goto LAB_1800a0a79;
      }
      if ((int)fVar2 < (int)fVar4) {
        param_2[2] = fVar4;
        param_2[1] = fVar2;
        fVar14 = fVar4;
        fVar4 = fVar2;
      }
      else {
        fVar14 = fVar2;
      }
      fVar2 = *(float *)(param_1 + 3);
      if ((int)fVar2 < (int)fVar4) {
        fVar4 = fVar2;
      }
      if ((int)fVar2 < (int)fVar14) {
        param_2[2] = fVar2;
        fVar14 = fVar2;
      }
      if (fVar4 == fVar14) {
        *param_2 = fVar4;
      }
      *param_2 = fVar14;
      param_2[1] = fVar14;
      goto LAB_1800a14e1;
    default:
      goto switchD_1800a07a3_default;
    }
    if (bVar15 == iVar13 < 0) {
      param_2[1] = fVar2;
      *param_2 = fVar2;
      fVar4 = fVar2;
    }
    else {
      *param_2 = fVar4;
    }
    goto LAB_1800a14de;
  }
  switch(param_3) {
  case 0x600001:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
      pfVar8 = param_2;
    }
    else {
      *param_2 = param_2[2];
      pfVar8 = param_2 + 2;
    }
    fVar4 = (float)FUN_180095f70((longlong)param_1,(int)*pfVar8);
    fVar2 = param_2[1];
    param_2[2] = fVar4;
    if (fVar2 != fVar4) {
      fVar14 = *(float *)(param_1 + 3);
      if ((int)fVar14 < (int)fVar2) {
        param_2[1] = fVar14;
        fVar2 = fVar14;
      }
      if ((int)fVar14 < (int)fVar4) {
        param_2[2] = fVar14;
        fVar4 = fVar14;
      }
      if (fVar2 == fVar4) {
        *param_2 = fVar2;
        *param_2 = fVar4;
        goto LAB_1800a14e1;
      }
    }
    *param_2 = fVar4;
    goto LAB_1800a14e1;
  case 0x600002:
  case 0x60000e:
switchD_1800a07a3_caseD_200002:
    uVar12 = param_3 & 0x400000;
    if ((param_3 & 0xffbfffff) == 0x20000e) {
      local_res18 = param_2[4];
    }
    else if (*(char *)((longlong)param_2 + 0x17) != '\0') {
      param_3 = uVar12 | 0x200000;
      goto LAB_1800a0770;
    }
    fVar2 = param_2[2];
    pfVar8 = param_2 + 2;
    fVar4 = param_2[1];
    if (uVar12 == 0) {
      if (fVar4 == fVar2) {
        fVar4 = *param_2;
      }
      else if ((int)fVar2 < (int)fVar4) {
        param_2[1] = fVar2;
        *param_2 = fVar2;
        *pfVar8 = fVar2;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        fVar4 = fVar2;
      }
      else {
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        *param_2 = fVar4;
        *pfVar8 = fVar4;
      }
      fVar2 = *(float *)(param_1 + 3);
LAB_1800a0fdd:
      if ((int)fVar2 < (int)fVar4) {
        *param_2 = fVar2;
        goto LAB_1800a0f66;
      }
    }
    else {
      if (fVar4 == fVar2) {
        *pfVar8 = *param_2;
        param_2[1] = *param_2;
        pfVar7 = param_2;
        pfVar8 = param_2;
      }
      else {
        *param_2 = fVar2;
        pfVar7 = param_2 + 1;
      }
      fVar14 = *pfVar8;
      fVar4 = *pfVar7;
      fVar11 = *pfVar8;
      fVar2 = *(float *)(param_1 + 3);
      if (fVar4 == fVar14) {
LAB_1800a0fb1:
        fVar4 = fVar11;
        goto LAB_1800a0fdd;
      }
      if ((int)fVar2 < (int)fVar4) {
        param_2[1] = fVar2;
        fVar4 = fVar2;
      }
      if ((int)fVar2 < (int)fVar14) {
        fVar11 = *param_2;
        param_2[2] = fVar2;
        fVar14 = fVar2;
      }
      if (fVar4 != fVar14) goto LAB_1800a0fb1;
      *param_2 = fVar4;
    }
    fVar2 = fVar4;
LAB_1800a0f66:
    FUN_1800a04e0(local_90,param_1,fVar2,(uint)*(byte *)((longlong)param_2 + 0x17));
    fVar2 = local_90[0];
    local_res20[0] = 0;
    if ((int)local_res18 < 1) {
      return;
    }
    fVar4 = local_7c;
    do {
      fVar14 = fVar4;
      if (*(char *)((longlong)param_2 + 0x16) == '\0') {
        fVar4 = fVar2;
      }
      else {
        fVar4 = param_2[7];
      }
      if (fVar14 == local_84) {
        return;
      }
      *param_2 = fVar14;
      FUN_18009b4b0(local_90,param_1,(int)fVar14);
      fVar11 = local_7c;
      iVar13 = 0;
      fVar17 = local_90[0];
      if (0 < (int)local_7c) {
        do {
          fVar16 = FUN_18009b2f0(param_1,(int)fVar14,iVar13);
          if ((fVar16 == -1.0) || (fVar17 = fVar17 + fVar16, fVar4 < fVar17)) break;
          fVar16 = *param_2;
          iVar9 = (int)param_1[3];
          if ((int)fVar16 < iVar9) {
            iVar9 = FUN_180058410(local_98,(byte *)(param_1[4] + (longlong)(int)fVar16),
                                  (byte *)(param_1[4] + (longlong)iVar9));
            fVar16 = (float)(iVar9 + (int)fVar16);
          }
          else {
            fVar16 = (float)(iVar9 + 1);
          }
          iVar13 = iVar13 + 1;
          *param_2 = fVar16;
        } while (iVar13 < (int)fVar11);
      }
      fVar11 = param_2[2];
      fVar17 = param_2[1];
      fVar16 = *(float *)(param_1 + 3);
      if (fVar17 != fVar11) {
        if ((int)fVar16 < (int)fVar17) {
          param_2[1] = fVar16;
          fVar17 = fVar16;
        }
        if ((int)fVar16 < (int)fVar11) {
          param_2[2] = fVar16;
          fVar11 = fVar16;
        }
        if (fVar17 == fVar11) {
          *param_2 = fVar17;
        }
      }
      fVar11 = *param_2;
      if ((int)fVar16 < (int)fVar11) {
        *param_2 = fVar16;
        fVar11 = fVar16;
      }
      param_2[7] = fVar4;
      *(undefined1 *)((longlong)param_2 + 0x16) = 1;
      if (uVar12 != 0) {
        param_2[2] = fVar11;
      }
      if ((int)fVar14 < 1) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (float)((int)fVar14 - 1);
        if (0 < (int)fVar4) {
          do {
            fVar11 = (float)((int)fVar4 - 1);
            if ((int)param_1[3] < (int)fVar11) {
              FID_conflict__assert
                        (L"idx <= obj->TextLen",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                         ,0xf84);
            }
          } while ((*(char *)(((ulonglong)(uint)fVar4 - 1) + param_1[4]) != DAT_1801121c8) &&
                  (fVar4 = fVar11, 0 < (int)fVar11));
        }
      }
      local_res20[0] = local_res20[0] + 1;
      local_84 = fVar14;
      if ((int)local_res18 <= (int)local_res20[0]) {
        return;
      }
    } while( true );
  case 0x600003:
  case 0x60000f:
switchD_1800a07a3_caseD_200003:
    uVar12 = param_3 & 0x400000;
    if ((param_3 & 0xffbfffff) == 0x20000f) {
      local_res18 = param_2[4];
    }
    else if (*(char *)((longlong)param_2 + 0x17) != '\0') goto code_r0x0001800a07e9;
    fVar2 = param_2[2];
    pfVar8 = param_2 + 2;
    fVar4 = param_2[1];
    if (uVar12 == 0) {
      if (fVar4 == fVar2) {
        fVar14 = *param_2;
      }
      else {
        if ((int)fVar2 < (int)fVar4) {
          *pfVar8 = fVar4;
          param_2[1] = fVar2;
          fVar14 = fVar4;
          fVar4 = fVar2;
        }
        else {
          fVar14 = fVar2;
        }
        fVar2 = *(float *)(param_1 + 3);
        if ((int)fVar2 < (int)fVar4) {
          fVar4 = fVar2;
        }
        if ((int)fVar2 < (int)fVar14) {
          param_2[2] = fVar2;
          fVar14 = fVar2;
        }
        if (fVar4 == fVar14) {
          *param_2 = fVar4;
        }
        *param_2 = fVar14;
        param_2[1] = fVar14;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      }
      fVar2 = *(float *)(param_1 + 3);
LAB_1800a0dbf:
      if ((int)fVar2 < (int)fVar14) {
        *param_2 = fVar2;
        goto LAB_1800a0d32;
      }
    }
    else {
      if (fVar4 == fVar2) {
        *pfVar8 = *param_2;
        param_2[1] = *param_2;
        pfVar7 = param_2;
        pfVar8 = param_2;
      }
      else {
        *param_2 = fVar2;
        pfVar7 = param_2 + 1;
      }
      fVar4 = *pfVar8;
      fVar11 = *pfVar8;
      fVar14 = *pfVar7;
      fVar2 = *(float *)(param_1 + 3);
      if (fVar14 == fVar11) {
LAB_1800a0d7d:
        fVar14 = fVar4;
        goto LAB_1800a0dbf;
      }
      if ((int)fVar2 < (int)fVar14) {
        param_2[1] = fVar2;
        fVar14 = fVar2;
      }
      if ((int)fVar2 < (int)fVar11) {
        param_2[2] = fVar2;
        fVar11 = fVar2;
      }
      if (fVar14 != fVar11) goto LAB_1800a0d7d;
      *param_2 = fVar14;
    }
    fVar2 = fVar14;
LAB_1800a0d32:
    FUN_1800a04e0(local_90,param_1,fVar2,(uint)*(byte *)((longlong)param_2 + 0x17));
    fVar2 = local_90[0];
    iVar13 = 0;
    if ((int)local_res18 < 1) {
      return;
    }
    fVar4 = local_80;
    fVar14 = local_84;
    do {
      iVar9 = 0;
      if (*(char *)((longlong)param_2 + 0x16) == '\0') {
        fVar11 = fVar2;
      }
      else {
        fVar11 = param_2[7];
      }
      if (fVar4 == 0.0) {
        return;
      }
      fVar14 = (float)((int)fVar14 + (int)fVar4);
      if ((int)param_1[3] < (int)((int)fVar14 - 1U)) {
        FID_conflict__assert
                  (L"idx <= obj->TextLen",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
                   ,0xf84);
      }
      if (*(char *)((longlong)(int)fVar14 + -1 + param_1[4]) != DAT_1801121c8) {
        return;
      }
      *param_2 = fVar14;
      FUN_18009b4b0(local_90,param_1,(int)fVar14);
      fVar4 = local_7c;
      fVar17 = local_90[0];
      if (0 < (int)local_7c) {
        do {
          fVar16 = FUN_18009b2f0(param_1,(int)fVar14,iVar9);
          if ((fVar16 == -1.0) || (fVar17 = fVar17 + fVar16, fVar11 < fVar17)) break;
          fVar16 = *param_2;
          iVar3 = (int)param_1[3];
          if ((int)fVar16 < iVar3) {
            iVar3 = FUN_180058410(local_res20,(byte *)(param_1[4] + (longlong)(int)fVar16),
                                  (byte *)(param_1[4] + (longlong)iVar3));
            fVar16 = (float)(iVar3 + (int)fVar16);
          }
          else {
            fVar16 = (float)(iVar3 + 1);
          }
          iVar9 = iVar9 + 1;
          *param_2 = fVar16;
        } while (iVar9 < (int)fVar4);
      }
      fVar17 = param_2[2];
      fVar16 = param_2[1];
      fVar1 = *(float *)(param_1 + 3);
      if (fVar16 != fVar17) {
        if ((int)fVar1 < (int)fVar16) {
          param_2[1] = fVar1;
          fVar16 = fVar1;
        }
        if ((int)fVar1 < (int)fVar17) {
          param_2[2] = fVar1;
          fVar17 = fVar1;
        }
        if (fVar16 == fVar17) {
          *param_2 = fVar16;
        }
      }
      fVar17 = *param_2;
      if ((int)fVar1 < (int)fVar17) {
        *param_2 = fVar1;
        fVar17 = fVar1;
      }
      param_2[7] = fVar11;
      *(undefined1 *)((longlong)param_2 + 0x16) = 1;
      if (uVar12 != 0) {
        param_2[2] = fVar17;
      }
      iVar13 = iVar13 + 1;
      if ((int)local_res18 <= iVar13) {
        return;
      }
    } while( true );
  case 0x600004:
    fVar14 = param_2[2];
    fVar2 = param_2[1];
    fVar4 = *(float *)(param_1 + 3);
    if (fVar2 != fVar14) {
      if ((int)fVar4 < (int)fVar2) {
        param_2[1] = fVar4;
        fVar2 = fVar4;
      }
      if ((int)fVar4 < (int)fVar14) {
        param_2[2] = fVar4;
        fVar14 = fVar4;
      }
      if (fVar2 == fVar14) {
        *param_2 = fVar2;
      }
    }
    fVar11 = *param_2;
    if ((int)fVar4 < (int)fVar11) {
      *param_2 = fVar4;
      fVar11 = fVar4;
    }
    if (fVar2 == fVar14) {
      param_2[2] = fVar11;
      param_2[1] = fVar11;
      fVar14 = fVar11;
    }
    else {
      *param_2 = fVar14;
    }
    if (*(char *)((longlong)param_2 + 0x17) == '\0') goto joined_r0x0001800a140b;
    *param_2 = 0.0;
    goto LAB_1800a14dc;
  case 0x600005:
    fVar14 = param_2[2];
    fVar2 = param_2[1];
    fVar4 = *(float *)(param_1 + 3);
    if (fVar2 != fVar14) {
      if ((int)fVar4 < (int)fVar2) {
        param_2[1] = fVar4;
        fVar2 = fVar4;
      }
      if ((int)fVar4 < (int)fVar14) {
        param_2[2] = fVar4;
        fVar14 = fVar4;
      }
      if (fVar2 == fVar14) {
        *param_2 = fVar2;
      }
    }
    fVar11 = *param_2;
    if ((int)fVar4 < (int)*param_2) {
      *param_2 = fVar4;
      fVar11 = fVar4;
    }
    if (fVar2 == fVar14) {
      param_2[2] = fVar11;
      param_2[1] = fVar11;
      fVar14 = fVar11;
    }
    else {
      *param_2 = fVar14;
    }
    if (*(char *)((longlong)param_2 + 0x17) == '\0') goto joined_r0x0001800a14a1;
    *param_2 = fVar4;
    goto LAB_1800a14dc;
  case 0x600006:
    if (param_2[1] == param_2[2]) {
      param_2[1] = *param_2;
    }
    param_2[2] = 0.0;
    *param_2 = 0.0;
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
    return;
  case 0x600007:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
      fVar4 = *(float *)(param_1 + 3);
      *param_2 = fVar4;
    }
    else {
      *param_2 = param_2[2];
      fVar4 = *(float *)(param_1 + 3);
      *param_2 = fVar4;
    }
    goto LAB_1800a14de;
  case 0x600008:
switchD_1800a07a3_caseD_200008:
    fVar2 = param_2[2];
    fVar4 = param_2[1];
    fVar14 = *(float *)(param_1 + 3);
    if (fVar4 == fVar2) {
      fVar2 = *param_2;
      if ((int)fVar2 < (int)fVar14) {
        iVar13 = FUN_180095f70((longlong)param_1,(int)fVar2);
        FUN_1800a02e0((longlong)param_1,(longlong)param_2,(int)*param_2,iVar13 - (int)fVar2);
      }
      goto LAB_1800a14e1;
    }
    if ((int)fVar14 < (int)fVar4) {
      param_2[1] = fVar14;
      fVar4 = fVar14;
    }
    if ((int)fVar14 < (int)fVar2) {
      param_2[2] = fVar14;
      fVar2 = fVar14;
    }
    if (fVar4 == fVar2) {
      *param_2 = fVar4;
    }
    if ((int)fVar14 < (int)*param_2) {
      *param_2 = fVar14;
    }
    if (fVar4 == fVar2) goto LAB_1800a14e1;
    if ((int)fVar2 <= (int)fVar4) {
      iVar13 = (int)fVar4 - (int)fVar2;
LAB_1800a1319:
      FUN_1800a02e0((longlong)param_1,(longlong)param_2,(int)fVar2,iVar13);
      param_2[1] = param_2[2];
      *param_2 = param_2[2];
      goto LAB_1800a14e1;
    }
    iVar13 = (int)fVar2 - (int)fVar4;
    break;
  case 0x600009:
switchD_1800a07a3_caseD_200009:
    fVar2 = param_2[2];
    fVar4 = param_2[1];
    fVar14 = *(float *)(param_1 + 3);
    if (fVar4 == fVar2) {
      fVar2 = *param_2;
      if ((int)fVar14 < (int)fVar2) {
        *param_2 = fVar14;
        fVar2 = fVar14;
      }
      if (0 < (int)fVar2) {
        uVar6 = FUN_180058660(param_1[4],(longlong)(int)fVar2 + param_1[4]);
        fVar2 = (float)((int)uVar6 - (int)param_1[4]);
        FUN_1800a02e0((longlong)param_1,(longlong)param_2,(int)fVar2,(int)*param_2 - (int)fVar2);
        *param_2 = fVar2;
      }
      goto LAB_1800a14e1;
    }
    if ((int)fVar14 < (int)fVar4) {
      param_2[1] = fVar14;
      fVar4 = fVar14;
    }
    if ((int)fVar14 < (int)fVar2) {
      param_2[2] = fVar14;
      fVar2 = fVar14;
    }
    if (fVar4 == fVar2) {
      *param_2 = fVar4;
    }
    if ((int)fVar14 < (int)*param_2) {
      *param_2 = fVar14;
    }
    if (fVar4 == fVar2) goto LAB_1800a14e1;
    if ((int)fVar2 <= (int)fVar4) {
      iVar13 = (int)fVar4 - (int)fVar2;
      goto LAB_1800a1319;
    }
    iVar13 = (int)fVar2 - (int)fVar4;
    break;
  default:
    goto switchD_1800a07a3_default;
  case 0x60000c:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    fVar2 = (float)FUN_18009b620((longlong)param_1,(int)*param_2);
    fVar14 = param_2[1];
    *param_2 = fVar2;
    param_2[2] = fVar2;
    fVar11 = *(float *)(param_1 + 3);
    if (fVar14 != fVar2) {
      if ((int)fVar11 < (int)fVar14) {
        param_2[1] = fVar11;
        fVar14 = fVar11;
      }
      if ((int)fVar11 < (int)fVar2) {
        param_2[2] = fVar11;
        fVar4 = fVar11;
      }
      else {
        fVar4 = fVar2;
      }
      if (fVar14 == fVar4) {
        *param_2 = fVar14;
        goto LAB_1800a0a84;
      }
    }
LAB_1800a0a82:
    fVar14 = fVar2;
    goto LAB_1800a0a84;
  case 0x60000d:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    fVar2 = (float)FUN_18009b6a0(param_1,(int)*param_2);
    fVar14 = param_2[1];
    *param_2 = fVar2;
    param_2[2] = fVar2;
    fVar11 = *(float *)(param_1 + 3);
    if (fVar14 == fVar2) goto LAB_1800a0a82;
    if ((int)fVar11 < (int)fVar14) {
      param_2[1] = fVar11;
      fVar14 = fVar11;
    }
    if ((int)fVar11 < (int)fVar2) {
LAB_1800a0a73:
      param_2[2] = fVar11;
      fVar4 = fVar11;
    }
    else {
      fVar4 = fVar2;
    }
LAB_1800a0a79:
    if (fVar14 != fVar4) goto LAB_1800a0a82;
    *param_2 = fVar14;
LAB_1800a0a84:
    if ((int)fVar11 < (int)fVar14) {
      *param_2 = fVar11;
    }
    goto switchD_1800a07a3_default;
  }
  FUN_1800a02e0((longlong)param_1,(longlong)param_2,(int)fVar4,iVar13);
  param_2[2] = param_2[1];
  *param_2 = param_2[1];
  goto LAB_1800a14e1;
joined_r0x0001800a0c16:
  if ((int)fVar14 <= (int)fVar11) goto LAB_1800a14e1;
  if ((int)param_1[3] < (int)fVar11) {
    FID_conflict__assert
              (L"idx <= obj->TextLen",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0xf84);
  }
  if (*(char *)((longlong)(int)fVar11 + param_1[4]) == DAT_1801121c8) goto LAB_1800a14e1;
  *param_2 = (float)((int)*param_2 + 1);
  fVar11 = *param_2;
  goto joined_r0x0001800a0c16;
joined_r0x0001800a0b67:
  if ((int)fVar11 < 1) goto LAB_1800a14e1;
  if ((int)param_1[3] < (int)((int)fVar11 - 1U)) {
    FID_conflict__assert
              (L"idx <= obj->TextLen",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0xf84);
  }
  if (*(char *)(((ulonglong)(uint)fVar11 - 1) + param_1[4]) == DAT_1801121c8) goto LAB_1800a14e1;
  *param_2 = (float)((int)*param_2 + -1);
  fVar11 = *param_2;
  goto joined_r0x0001800a0b67;
joined_r0x0001800a14a1:
  if ((int)fVar4 <= (int)fVar14) goto LAB_1800a14dc;
  if ((int)param_1[3] < (int)fVar14) {
    FID_conflict__assert
              (L"idx <= obj->TextLen",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0xf84);
  }
  if (*(char *)((longlong)(int)fVar14 + param_1[4]) == DAT_1801121c8) goto LAB_1800a14dc;
  *param_2 = (float)((int)*param_2 + 1);
  fVar14 = *param_2;
  goto joined_r0x0001800a14a1;
joined_r0x0001800a140b:
  if ((int)fVar14 < 1) {
LAB_1800a14dc:
    fVar4 = *param_2;
LAB_1800a14de:
    param_2[2] = fVar4;
LAB_1800a14e1:
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
switchD_1800a07a3_default:
    return;
  }
  if ((int)param_1[3] < (int)((int)fVar14 - 1U)) {
    FID_conflict__assert
              (L"idx <= obj->TextLen",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0xf84);
  }
  if (*(char *)(((ulonglong)(uint)fVar14 - 1) + param_1[4]) == DAT_1801121c8) goto LAB_1800a14dc;
  *param_2 = (float)((int)*param_2 + -1);
  fVar14 = *param_2;
  goto joined_r0x0001800a140b;
code_r0x0001800a07e9:
  param_3 = uVar12 | 0x200001;
  goto LAB_1800a0770;
}


void FUN_1800a15b0(longlong param_1,int *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;

  FUN_18009ff00(param_1,(longlong)param_2,0,*(int *)(param_1 + 0x18),param_4);
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x30)) {
    FID_conflict__assert
              (L"obj->TextSrc == obj->TextA.Data",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0xff4);
  }
  FUN_1800d1c20(*(undefined8 **)(param_1 + 0x30),
                (undefined8 *)((longlong)*(undefined8 **)(param_1 + 0x30) + (longlong)iVar1),
                (longlong)((*(int *)(param_1 + 0x18) - iVar1) + 1));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar1;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  if (0 < param_4) {
    uVar2 = FUN_18009b370(param_1,0,param_3,param_4);
    if ((char)uVar2 != '\0') {
      param_2[2] = param_4;
      param_2[1] = param_4;
      *param_2 = param_4;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    }
    FID_conflict__assert
              (L"0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui_widgets.cpp"
               ,0x1041);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800a1680(void)

{
  longlong *plVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStackY_268 [32];
  undefined4 local_208;
  undefined4 uStack_204;
  int local_200;
  undefined4 uStack_1fc;
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined1 local_183 [235];
  char *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;

  local_38 = DAT_180112300 ^ (ulonglong)auStackY_268;
  lVar4 = FUN_1800568c0();
  if (lVar4 == 0) {
    plVar11 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_180056d70();
    plVar11 = *(longlong **)(uVar5 + 0xa0);
  }
  if (*plVar11 != 0) {
    if (plVar11[9] != 0) {
      FUN_1800a1dd0();
    }
    puVar2 = PTR_s_cbuffer_vertexBuffer___register__1801122b0;
    sVar6 = strlen(PTR_s_cbuffer_vertexBuffer___register__1801122b0);
    uVar5 = D3DCompile(puVar2,sVar6,0,0);
    if (-1 < (int)uVar5) {
      plVar1 = (longlong *)*plVar11;
      lVar4 = *plVar1;
      uVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_204,local_208) + 0x20))();
      uVar8 = (**(code **)(*(longlong *)CONCAT44(uStack_204,local_208) + 0x18))();
      iVar3 = (**(code **)(lVar4 + 0x60))(plVar1,uVar8,uVar7,0);
      if (iVar3 == 0) {
        plVar1 = (longlong *)*plVar11;
        local_98 = "POSITION";
        uStack_78 = 0x800f05e8;
        uStack_74 = 1;
        local_58 = "COLOR";
        uStack_90 = 0;
        uStack_8c = 0x10;
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        local_7c = 0;
        uStack_70 = 0;
        uStack_6c = 0x10;
        uStack_68 = 0;
        local_64 = 8;
        local_5c = 0;
        local_50 = 0;
        local_4c = 0x1c;
        local_44 = 0x10;
        local_3c = 0;
        lVar4 = *plVar1;
        (**(code **)(*(longlong *)CONCAT44(uStack_204,local_208) + 0x20))();
        uVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_204,local_208) + 0x18))();
        iVar3 = (**(code **)(lVar4 + 0x58))(plVar1,&local_98,3,uVar7);
        lVar4 = *(longlong *)CONCAT44(uStack_204,local_208);
        if (iVar3 == 0) {
          (**(code **)(lVar4 + 0x10))();
          local_1d8 = 0;
          local_1e8 = 0x200000040;
          local_1e0 = 4;
          local_1dc = 0x10000;
          (**(code **)(*(longlong *)*plVar11 + 0x18))((longlong *)*plVar11,&local_1e8,0,plVar11 + 7)
          ;
          puVar2 = PTR_s_struct_PS_INPUT___float4_pos___S_1801122b8;
          sVar6 = strlen(PTR_s_struct_PS_INPUT___float4_pos___S_1801122b8);
          uVar5 = D3DCompile(puVar2,sVar6,0,0);
          if ((int)uVar5 < 0) goto LAB_1800a17a0;
          plVar1 = (longlong *)*plVar11;
          lVar4 = *plVar1;
          uVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_1fc,local_200) + 0x20))();
          uVar8 = (**(code **)(*(longlong *)CONCAT44(uStack_1fc,local_200) + 0x18))();
          iVar3 = (**(code **)(lVar4 + 0x78))(plVar1,uVar8,uVar7,0);
          lVar4 = *(longlong *)CONCAT44(uStack_1fc,local_200);
          if (iVar3 == 0) {
            (**(code **)(lVar4 + 0x10))();
            local_1a4 = 0;
            FUN_1800d22d0((undefined1 (*) [32])local_183,0,0xe3);
            local_1a8 = 0;
            local_1a0 = 1;
            local_19c = 5;
            local_198 = 0x100000006;
            uStack_190 = 0x600000002;
            local_188 = 1;
            local_184 = 0xf;
            (**(code **)(*(longlong *)*plVar11 + 0xa0))
                      ((longlong *)*plVar11,&local_1a8,plVar11 + 0xc);
            local_1b0 = 0;
            uStack_1c8 = 0;
            uStack_1c4 = 0;
            uStack_1c0 = 0;
            local_1d0 = 3;
            local_1cc = 1;
            local_1b4 = 1;
            local_1b8 = 1;
            (**(code **)(*(longlong *)*plVar11 + 0xb0))
                      ((longlong *)*plVar11,&local_1d0,plVar11 + 0xb);
            local_98 = (char *)0x100000000;
            uStack_90 = 8;
            uStack_8c = 0;
            uStack_88 = 0;
            uStack_78 = 8;
            uStack_74 = 1;
            uStack_70 = 1;
            uStack_6c = 1;
            local_7c = 1;
            uStack_80 = 1;
            uStack_84 = 1;
            uStack_68 = 8;
            (**(code **)(*(longlong *)*plVar11 + 0xa8))
                      ((longlong *)*plVar11,&local_98,plVar11 + 0xd);
            uStack_88 = 0;
            uStack_84 = 0;
            local_7c = 0;
            uStack_78 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_80 = 8;
            local_98 = (char *)0x300000015;
            uStack_90 = 3;
            uStack_8c = 3;
            uStack_6c = 0;
            uStack_68 = 0;
            (**(code **)(*(longlong *)*plVar11 + 0xb8))((longlong *)*plVar11,&local_98,plVar11 + 9);
            lVar4 = FUN_180056d70();
            lVar9 = FUN_1800568c0();
            if (lVar9 == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            else {
              lVar9 = FUN_180056d70();
              puVar10 = *(undefined8 **)(lVar9 + 0xa0);
            }
            FUN_180072900(*(longlong *)(lVar4 + 0x30),&local_1f0,&local_200,&local_208,
                          (undefined4 *)0x0);
            local_1e8 = local_1f0;
            local_1e0 = local_200 * 4;
            uStack_84 = 1;
            uStack_80 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_90 = 1;
            uStack_8c = 1;
            uStack_88 = 0x1c;
            local_7c = 0;
            uStack_78 = 8;
            local_1f8 = (longlong *)0x0;
            local_1dc = 0;
            (**(code **)(*(longlong *)*puVar10 + 0x28))
                      ((longlong *)*puVar10,&local_98,&local_1e8,&local_1f8);
            if (local_1f8 == (longlong *)0x0) {
              FID_conflict__assert
                        (L"pTexture != nullptr",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\backends\\imgui_impl_dx11.cpp"
                         ,0x15e);
            }
            uStack_1c0 = 0;
            local_1d0 = 0x1c;
            local_1cc = 4;
            uStack_1c8 = 0;
            uStack_1c4 = uStack_90;
            (**(code **)(*(longlong *)*puVar10 + 0x38))
                      ((longlong *)*puVar10,local_1f8,&local_1d0,puVar10 + 10);
            (**(code **)(*local_1f8 + 0x10))();
            uVar7 = puVar10[10];
            *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 8) = uVar7;
            return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
        }
      }
      else {
        lVar4 = *(longlong *)CONCAT44(uStack_204,local_208);
      }
      uVar5 = (**(code **)(lVar4 + 0x10))();
    }
  }
LAB_1800a17a0:
  return uVar5 & 0xffffffffffffff00;
}


undefined8 FUN_1800a1c20(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *local_res18;
  longlong *local_res20;
  undefined8 local_28 [2];

  lVar2 = FUN_180056d70();
  FUN_1800527c0(0x1800deea0,0xbd8,0x490,8,0x10,0x14,2);
  if (*(longlong *)(lVar2 + 0xa0) != 0) {
    FID_conflict__assert
              (L"io.BackendRendererUserData == nullptr && \"Already initialized a renderer backend!\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\backends\\imgui_impl_dx11.cpp"
               ,0x23c);
  }
  puVar3 = (undefined8 *)FUN_18005b560(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *(undefined4 *)(puVar3 + 0xe) = 5000;
    *(undefined4 *)((longlong)puVar3 + 0x74) = 10000;
  }
  *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | 8;
  *(char **)(lVar2 + 0x90) = "imgui_impl_dx11";
  *(undefined8 **)(lVar2 + 0xa0) = puVar3;
  local_res18 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  local_28[0] = 0;
  iVar1 = (**(code **)*param_1)(param_1,&DAT_1800dee68,&local_res18);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*local_res18 + 0x30))(local_res18,&DAT_1800f0608,&local_res20);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*local_res20 + 0x30))(local_res20,&DAT_1800f0618,local_28);
      if (iVar1 == 0) {
        *puVar3 = param_1;
        puVar3[1] = param_2;
        puVar3[2] = local_28[0];
      }
    }
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x10))();
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
  }
  (**(code **)(*(longlong *)*puVar3 + 8))();
  uVar4 = (**(code **)(*(longlong *)puVar3[1] + 8))();
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}


void FUN_1800a1dd0(void)

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
  }
  if (*plVar2 != 0) {
    lVar1 = FUN_1800568c0();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_180056d70();
      lVar1 = *(longlong *)(lVar1 + 0xa0);
    }
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x10))();
      *(undefined8 *)(lVar1 + 0x50) = 0;
      lVar1 = FUN_180056d70();
      *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 8) = 0;
    }
    if ((longlong *)plVar2[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[9] + 0x10))();
      plVar2[9] = 0;
    }
    if ((longlong *)plVar2[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[4] + 0x10))();
      plVar2[4] = 0;
    }
    if ((longlong *)plVar2[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[3] + 0x10))();
      plVar2[3] = 0;
    }
    if ((longlong *)plVar2[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0xc] + 0x10))();
      plVar2[0xc] = 0;
    }
    if ((longlong *)plVar2[0xd] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0xd] + 0x10))();
      plVar2[0xd] = 0;
    }
    if ((longlong *)plVar2[0xb] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0xb] + 0x10))();
      plVar2[0xb] = 0;
    }
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[8] + 0x10))();
      plVar2[8] = 0;
    }
    if ((longlong *)plVar2[7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[7] + 0x10))();
      plVar2[7] = 0;
    }
    if ((longlong *)plVar2[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[6] + 0x10))();
      plVar2[6] = 0;
    }
    if ((longlong *)plVar2[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[5] + 0x10))();
      plVar2[5] = 0;
    }
  }
  return;
}


void FUN_1800a1f10(void)

{
  longlong lVar1;

  lVar1 = FUN_1800568c0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_180056d70();
    lVar1 = *(longlong *)(lVar1 + 0xa0);
    if (lVar1 != 0) goto LAB_1800a1f4e;
  }
  FID_conflict__assert
            (L"bd != nullptr && \"Context or backend not initialized! Did you call ImGui_ImplDX11_Init()?\""
             ,
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\backends\\imgui_impl_dx11.cpp"
             ,0x26c);
LAB_1800a1f4e:
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    FUN_1800a1680();
    return;
  }
  return;
}


// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a1f70(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1c28 [32];
  undefined8 local_1c08;
  undefined8 **local_1c00;
  int local_1bf8;
  int local_1bf4;
  undefined8 local_1bf0;
  longlong local_1be8;
  undefined8 local_1be0;
  undefined8 local_1bd8;
  undefined8 local_1bd0;
  undefined8 local_1bc8;
  undefined8 *local_1bc0 [2];
  undefined8 *local_1bb0 [3];
  undefined4 local_1b98;
  undefined4 local_1b94;
  undefined1 local_1b90 [256];
  undefined1 local_1a90 [384];
  longlong *local_1910;
  longlong *local_1908;
  undefined1 local_1900 [16];
  undefined4 local_18f0;
  undefined4 local_18ec;
  longlong *local_18e8;
  longlong *local_18e0;
  longlong *local_18d8;
  longlong *local_18d0;
  longlong *local_18c8;
  longlong *local_18c0;
  uint local_18b8;
  uint local_18b4;
  undefined4 local_18b0 [2];
  longlong local_18a8 [256];
  longlong local_10a8 [256];
  undefined1 local_8a8 [2048];
  undefined4 local_a8 [2];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined4 local_7c;
  longlong *local_78 [2];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  ulonglong local_50;

  local_50 = DAT_180112300 ^ (ulonglong)auStack_1c28;
  if (*(float *)(param_1 + 0x28) <= 0.0) {
    return;
  }
  if (*(float *)(param_1 + 0x2c) <= 0.0) {
    return;
  }
  lVar9 = FUN_1800568c0();
  iVar14 = 0;
  if (lVar9 == 0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    lVar9 = FUN_180056d70();
    puVar17 = *(undefined8 **)(lVar9 + 0xa0);
  }
  plVar3 = (longlong *)puVar17[1];
  if ((longlong *)puVar17[3] == (longlong *)0x0) {
LAB_1800a2012:
    local_68 = *(int *)(param_1 + 0xc) + 5000;
    local_58 = 0;
    *(int *)(puVar17 + 0xe) = local_68;
    local_64 = 2;
    local_60 = 1;
    local_5c = 0x10000;
    local_68 = local_68 * 0x14;
    iVar7 = (**(code **)(*(longlong *)*puVar17 + 0x18))
                      ((longlong *)*puVar17,&local_68,0,puVar17 + 3);
    if (iVar7 < 0) {
      return;
    }
  }
  else if (*(int *)(puVar17 + 0xe) < *(int *)(param_1 + 0xc)) {
    (**(code **)(*(longlong *)puVar17[3] + 0x10))();
    puVar17[3] = 0;
    goto LAB_1800a2012;
  }
  puVar15 = puVar17 + 4;
  if ((longlong *)puVar17[4] != (longlong *)0x0) {
    if (*(int *)(param_1 + 8) <= *(int *)((longlong)puVar17 + 0x74)) goto LAB_1800a20e7;
    (**(code **)(*(longlong *)puVar17[4] + 0x10))();
    *puVar15 = 0;
  }
  local_68 = *(int *)(param_1 + 8) + 10000;
  *(int *)((longlong)puVar17 + 0x74) = local_68;
  local_68 = local_68 * 2;
  local_58 = 0;
  local_64 = 2;
  local_60 = 2;
  local_5c = 0x10000;
  iVar7 = (**(code **)(*(longlong *)*puVar17 + 0x18))((longlong *)*puVar17,&local_68,0,puVar15);
  if (iVar7 < 0) {
    return;
  }
LAB_1800a20e7:
  local_1c00 = local_1bc0;
  local_1c08 = (undefined1 *)((ulonglong)local_1c08._4_4_ << 0x20);
  iVar7 = (**(code **)(*plVar3 + 0x70))(plVar3,puVar17[3],0,4);
  if (iVar7 == 0) {
    local_1c00 = local_1bb0;
    local_1c08 = (undefined1 *)((ulonglong)local_1c08 & 0xffffffff00000000);
    iVar7 = (**(code **)(*plVar3 + 0x70))(plVar3,*puVar15,0,4);
    if (iVar7 == 0) {
      puVar15 = local_1bc0[0];
      puVar16 = local_1bb0[0];
      if (0 < *(int *)(param_1 + 4)) {
        do {
          if ((iVar14 < 0) || (*(int *)(param_1 + 0x10) <= iVar14)) {
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.h"
                       ,0x833);
          }
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar14 * 8);
          FUN_1800d1c20(puVar15,*(undefined8 **)(lVar9 + 0x28),
                        (longlong)*(int *)(lVar9 + 0x20) * 0x14);
          FUN_1800d1c20(puVar16,*(undefined8 **)(lVar9 + 0x18),(longlong)*(int *)(lVar9 + 0x10) * 2)
          ;
          iVar14 = iVar14 + 1;
          puVar15 = (undefined8 *)((longlong)puVar15 + (longlong)*(int *)(lVar9 + 0x20) * 0x14);
          puVar16 = (undefined8 *)((longlong)puVar16 + (longlong)*(int *)(lVar9 + 0x10) * 2);
        } while (iVar14 < *(int *)(param_1 + 4));
      }
      (**(code **)(*plVar3 + 0x78))(plVar3,puVar17[3],0);
      (**(code **)(*plVar3 + 0x78))(plVar3,puVar17[4],0);
      FUN_1800d22d0((undefined1 (*) [32])local_1b90,0,0x1b20);
      local_1b94 = 0x10;
      local_1b98 = 0x10;
      (**(code **)(*plVar3 + 0x300))(plVar3,&local_1b98,local_1b90);
      (**(code **)(*plVar3 + 0x2f8))(plVar3,&local_1b94,local_1a90);
      (**(code **)(*plVar3 + 0x2f0))(plVar3,&local_1910);
      (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_1908,local_1900,&local_18f0);
      (**(code **)(*plVar3 + 0x2e0))(plVar3,&local_18e8,&local_18ec);
      (**(code **)(*plVar3 + 0x248))(plVar3,0,1,&local_18e0);
      (**(code **)(*plVar3 + 600))(plVar3,0,1,&local_18d8);
      local_18b0[0] = 0x100;
      local_18b4 = 0x100;
      local_18b8 = 0x100;
      (**(code **)(*plVar3 + 0x250))(plVar3,&local_18d0,local_18a8,&local_18b8);
      (**(code **)(*plVar3 + 0x260))(plVar3,&local_18c8,local_10a8,&local_18b4);
      (**(code **)(*plVar3 + 0x240))(plVar3,0,1,&local_90);
      (**(code **)(*plVar3 + 0x290))(plVar3,&local_18c0,local_8a8,local_18b0);
      (**(code **)(*plVar3 + 0x298))(plVar3,local_a8);
      (**(code **)(*plVar3 + 0x280))(plVar3,&local_a0,&local_7c,&local_88);
      local_1c00 = (undefined8 **)local_80;
      local_1c08 = local_84;
      (**(code **)(*plVar3 + 0x278))(plVar3,0,1,&local_98);
      (**(code **)(*plVar3 + 0x270))(plVar3,local_78);
      FUN_1800a2910(param_1,plVar3);
      local_1be8 = FUN_1800573c0();
      local_1be0 = *puVar17;
      iVar14 = 0;
      local_1bd8 = puVar17[1];
      local_1bd0 = puVar17[9];
      local_1bc8 = puVar17[7];
      *(undefined8 **)(local_1be8 + 0x40) = &local_1be0;
      fVar1 = *(float *)(param_1 + 0x20);
      fVar2 = *(float *)(param_1 + 0x24);
      local_1bf8 = 0;
      local_1bf4 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          iVar7 = local_1bf4;
          if ((local_1bf4 < 0) || (*(int *)(param_1 + 0x10) <= local_1bf4)) {
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.h"
                       ,0x833);
          }
          iVar6 = local_1bf8;
          piVar4 = *(int **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          iVar8 = *piVar4;
          if (0 < iVar8) {
            iVar7 = 0;
            do {
              if ((iVar7 < 0) || (iVar8 <= iVar7)) {
                FID_conflict__assert
                          (L"i >= 0 && i < Size",
                           L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.h"
                           ,0x834);
              }
              pfVar12 = (float *)((longlong)iVar7 * 0x40 + *(longlong *)(piVar4 + 2));
              pcVar5 = *(code **)(pfVar12 + 10);
              if (pcVar5 == (code *)0x0) {
                fVar18 = *pfVar12 - fVar1;
                fVar19 = pfVar12[2] - fVar1;
                if (fVar18 < fVar19) {
                  fVar20 = pfVar12[1] - fVar2;
                  fVar21 = pfVar12[3] - fVar2;
                  if (fVar20 < fVar21) {
                    local_68 = (int)fVar18;
                    local_64 = (int)fVar20;
                    local_60 = (int)fVar19;
                    local_5c = (int)fVar21;
                    (**(code **)(*plVar3 + 0x168))(plVar3,1,&local_68);
                    local_1bf0 = *(undefined8 *)(pfVar12 + 4);
                    (**(code **)(*plVar3 + 0x40))(plVar3,0,1,&local_1bf0);
                    (**(code **)(*plVar3 + 0x60))
                              (plVar3,pfVar12[8],(int)pfVar12[7] + iVar14,(int)pfVar12[6] + iVar6);
                  }
                }
              }
              else if (pcVar5 == (code *)0xfffffffffffffff8) {
                FUN_1800a2910(param_1,plVar3);
              }
              else {
                (*pcVar5)(piVar4,pfVar12);
              }
              iVar8 = *piVar4;
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar8);
            iVar7 = local_1bf4;
          }
          local_1bf4 = iVar7 + 1;
          local_1bf8 = local_1bf8 + piVar4[8];
          iVar14 = iVar14 + piVar4[4];
        } while (local_1bf4 < *(int *)(param_1 + 4));
      }
      *(undefined8 *)(local_1be8 + 0x40) = 0;
      (**(code **)(*plVar3 + 0x168))(plVar3,local_1b98,local_1b90);
      (**(code **)(*plVar3 + 0x160))(plVar3,local_1b94,local_1a90);
      (**(code **)(*plVar3 + 0x158))(plVar3,local_1910);
      if (local_1910 != (longlong *)0x0) {
        (**(code **)(*local_1910 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x118))(plVar3,local_1908,local_1900,local_18f0);
      if (local_1908 != (longlong *)0x0) {
        (**(code **)(*local_1908 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x120))(plVar3,local_18e8,local_18ec);
      if (local_18e8 != (longlong *)0x0) {
        (**(code **)(*local_18e8 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,0,1,&local_18e0);
      if (local_18e0 != (longlong *)0x0) {
        (**(code **)(*local_18e0 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x50))(plVar3,0,1,&local_18d8);
      if (local_18d8 != (longlong *)0x0) {
        (**(code **)(*local_18d8 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x48))(plVar3,local_18d0,local_18a8,local_18b8);
      if (local_18d0 != (longlong *)0x0) {
        (**(code **)(*local_18d0 + 0x10))();
      }
      uVar13 = 0;
      uVar10 = local_18b8;
      if (local_18b8 != 0) {
        do {
          if ((longlong *)local_18a8[uVar13] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_18a8[uVar13] + 0x10))();
            uVar10 = local_18b8;
          }
          uVar11 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar11;
        } while (uVar11 < uVar10);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,local_18c8,local_10a8,local_18b4);
      if (local_18c8 != (longlong *)0x0) {
        (**(code **)(*local_18c8 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,0,1,&local_90);
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x10))();
      }
      (**(code **)(*plVar3 + 0xb8))(plVar3,local_18c0,local_8a8,local_18b0[0]);
      if (local_18c0 != (longlong *)0x0) {
        (**(code **)(*local_18c0 + 0x10))();
      }
      uVar13 = 0;
      uVar10 = local_18b4;
      if (local_18b4 != 0) {
        do {
          if ((longlong *)local_10a8[uVar13] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_10a8[uVar13] + 0x10))();
            uVar10 = local_18b4;
          }
          uVar11 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar11;
        } while (uVar11 < uVar10);
      }
      (**(code **)(*plVar3 + 0xc0))(plVar3,local_a8[0]);
      (**(code **)(*plVar3 + 0x98))(plVar3,local_a0,local_7c,local_88);
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x10))();
      }
      local_1c00 = (undefined8 **)local_80;
      local_1c08 = local_84;
      (**(code **)(*plVar3 + 0x90))(plVar3,0,1,&local_98);
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x88))(plVar3,local_78[0]);
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
    }
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800a2910(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  float **local_80;
  undefined4 local_78;
  undefined4 local_74;
  float *local_70 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;

  local_38 = DAT_180112300 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_1800568c0();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_180056d70();
    lVar4 = *(longlong *)(lVar4 + 0xa0);
  }
  local_58 = *(undefined4 *)(param_1 + 0x28);
  local_54 = *(undefined4 *)(param_1 + 0x2c);
  local_50 = 0;
  local_4c = 0x3f800000;
  local_60 = 0;
  (**(code **)(*param_2 + 0x160))(param_2,1,&local_60);
  local_80 = local_70;
  local_88 = (undefined4 *)((ulonglong)local_88._4_4_ << 0x20);
  iVar3 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(lVar4 + 0x38),0,4);
  if (iVar3 == 0) {
    fVar1 = *(float *)(param_1 + 0x20);
    fVar5 = fVar1 + *(float *)(param_1 + 0x28);
    fVar2 = *(float *)(param_1 + 0x24);
    fVar6 = fVar2 + *(float *)(param_1 + 0x2c);
    *local_70[0] = 2.0 / (fVar5 - fVar1);
    local_70[0][1] = 0.0;
    local_70[0][2] = 0.0;
    local_70[0][3] = 0.0;
    local_70[0][4] = 0.0;
    local_70[0][5] = 2.0 / (fVar2 - fVar6);
    local_70[0][6] = 0.0;
    local_70[0][7] = 0.0;
    local_70[0][8] = 0.0;
    local_70[0][9] = 0.0;
    local_70[0][10] = 0.5;
    local_70[0][0xb] = 0.0;
    local_70[0][0xc] = (fVar1 + fVar5) / (fVar1 - fVar5);
    local_70[0][0xd] = (fVar2 + fVar6) / (fVar6 - fVar2);
    local_70[0][0xe] = 0.5;
    local_70[0][0xf] = 1.0;
    (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar4 + 0x38),0);
  }
  local_74 = 0x14;
  local_78 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(lVar4 + 0x30));
  local_80 = (float **)&local_78;
  local_88 = &local_74;
  (**(code **)(*param_2 + 0x90))(param_2,0,1,lVar4 + 0x18);
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(lVar4 + 0x20),0x39,0);
  (**(code **)(*param_2 + 0xc0))(param_2,4);
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar4 + 0x28),0,0);
  (**(code **)(*param_2 + 0x38))(param_2,0,1,lVar4 + 0x38);
  (**(code **)(*param_2 + 0x48))(param_2,*(undefined8 *)(lVar4 + 0x40),0,0);
  (**(code **)(*param_2 + 0x50))(param_2,0,1,lVar4 + 0x48);
  (**(code **)(*param_2 + 0xb8))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x1e0))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x200))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x228))(param_2,0,0,0);
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_2 + 0x118))(param_2,*(undefined8 *)(lVar4 + 0x60),&local_48,0xffffffff);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(lVar4 + 0x68),0);
  (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(lVar4 + 0x58));
  return;
}


void FUN_1800a2c00(void)

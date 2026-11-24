LAB_18004d463:
  lVar35 = DAT_180115c10;
  if ((*(char *)(lVar49 + -10 + lVar39) != '\0') &&
     (*(undefined1 (**) [32])(pauVar29[0x1d] + 0x10) == pauVar29)) {
    if ((*(uint *)(DAT_180115c10 + 0x1d48) & 0x400) == 0) {
      FID_conflict__assert
                (L"g.CurrentItemFlags & ImGuiItemFlags_Disabled",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1f25);
    }
    uVar24 = *(undefined4 *)(lVar35 + 0xc28);
    if (*(int *)(lVar35 + 0x1378) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    *(undefined4 *)
     (((longlong)*(int *)(lVar35 + 0x1378) + -1) * 0x78 + 0x70 + *(longlong *)(lVar35 + 0x1380)) =
         uVar24;
    *(uint *)(lVar35 + 0x1d48) = *(uint *)(lVar35 + 0x1d48) & 0xfffffbff;
    *(undefined4 *)(lVar35 + 0xc28) = *(undefined4 *)(lVar35 + 0x2510);
    iVar25 = *(int *)(lVar35 + 0x1e9c);
    if (*(int *)(lVar35 + 0x1e98) == iVar25) {
      iVar43 = *(int *)(lVar35 + 0x1e98) + 1;
      if (iVar25 == 0) {
        iVar25 = 8;
      }
      else {
        iVar25 = iVar25 / 2 + iVar25;
      }
      if (iVar43 < iVar25) {
        iVar43 = iVar25;
      }
      FUN_18006d650((int *)(lVar35 + 0x1e98),iVar43);
    }
    *(undefined4 *)(*(longlong *)(lVar35 + 0x1ea0) + (longlong)*(int *)(lVar35 + 0x1e98) * 4) =
         *(undefined4 *)(lVar35 + 0x1d48);
    *(int *)(lVar35 + 0x1e98) = *(int *)(lVar35 + 0x1e98) + 1;
    *(short *)(lVar35 + 0x2514) = *(short *)(lVar35 + 0x2514) + 1;
  }
  *(undefined8 *)(lVar21 + 0x13a8) = 0;
  if (iVar10 == iVar9) {
    if (pauVar29[6][0x12] != '\0') goto LAB_18004efba;
LAB_18004efc2:
    FUN_180066f80((longlong *)pauVar29);
    lVar35 = DAT_180115c10;
    fVar53 = *(float *)(pauVar29[1] + 8);
    fVar54 = *(float *)(pauVar29[1] + 0xc);
    fVar65 = fVar53 + *(float *)(pauVar29[1] + 0x18);
    uVar24 = *(undefined4 *)(pauVar29[1] + 0xc);
    fVar55 = *(float *)(pauVar29[3] + 8);
    uVar3 = *(undefined4 *)(pauVar29[0xe] + 0x18);
    puVar2 = (undefined4 *)(DAT_180115c10 + 0x1d48);
    auVar15._4_4_ = uVar24;
    auVar15._0_4_ = uVar24;
    auVar15._8_4_ = uVar24;
    *(undefined4 *)(DAT_180115c10 + 0x1d88) = *(undefined4 *)(pauVar29[4] + 0xc);
    auVar13._4_8_ = auVar15._4_8_;
    auVar13._0_4_ = uVar24;
    auVar60._0_8_ = auVar13._0_8_ << 0x20;
    auVar60._8_4_ = uVar24;
    auVar60._12_4_ = fVar65;
    *(undefined4 *)(lVar35 + 0x1d8c) = *puVar2;
    auVar14._4_8_ = auVar60._8_8_;
    auVar14._0_4_ = uVar24;
    auVar61._0_8_ = auVar14._0_8_ << 0x20;
    auVar61._8_4_ = fVar65;
    auVar61._12_4_ = fVar54 + fVar55;
    auVar62._4_12_ = auVar61._4_12_;
    auVar62._0_4_ = fVar53;
    *(undefined4 *)(lVar35 + 0x1d90) = uVar3;
    *(undefined1 (*) [16])(lVar35 + 0x1da4) = auVar62;
    *(undefined1 (*) [16])(lVar35 + 0x1d94) = auVar62;
    lVar35 = local_1b8;
  }
  else {
    if (pauVar29[6][0x12] != '\0') {
LAB_18004efba:
      FUN_180067ff0((longlong)pauVar29);
      goto LAB_18004efc2;
    }
    uVar28 = uVar38 & 0x1000000;
    if ((uVar28 == 0) || (bVar18 = true, local_194 == 0)) {
      bVar18 = false;
    }
    cVar23 = pauVar29[7][0xd];
    pauVar29[6][0xc] = 1;
    pauVar29[6][0x17] = local_168 != (undefined1 *)0x0;
    *(undefined4 *)(pauVar29[0x12] + 0x18) = 0xff7fffff;
    *(undefined4 *)(pauVar29[0x12] + 0x1c) = 0xff7fffff;
    *(undefined4 *)pauVar29[0x13] = 0x7f7fffff;
    *(undefined4 *)(pauVar29[0x13] + 4) = 0x7f7fffff;
    iVar25 = *(int *)(pauVar29[8] + 0xc);
    if (iVar25 < 1) {
      if (iVar25 == 0) {
        iVar25 = 8;
      }
      else {
        iVar25 = iVar25 / 2 + iVar25;
      }
      iVar43 = 1;
      if (1 < iVar25) {
        iVar43 = iVar25;
      }
      FUN_18006d650((int *)(pauVar29[8] + 8),iVar43);
    }
    *(undefined4 *)(pauVar29[8] + 8) = 1;
    FUN_18007a6b0(*(uint **)pauVar29[0x16]);
    *(undefined4 *)(pauVar29[0xe] + 8) = 0xffffffff;
    if (pauVar29[0x21][4] != '\0') {
      lVar35 = *(longlong *)pauVar29[0x16];
      iVar25 = *(int *)(pauVar29[0x20] + 0x1c);
      pauVar29[0x21][4] = 0;
      FUN_18006d5b0((int *)(lVar35 + 0x10),iVar25);
      lVar35 = *(longlong *)pauVar29[0x16];
      iVar25 = *(int *)pauVar29[0x21];
      if (*(int *)(lVar35 + 0x24) < iVar25) {
        puVar42 = (undefined8 *)
                  (*(code *)PTR__malloc_base_1801121b8)((longlong)iVar25 * 0x14,DAT_180115c20);
        if (DAT_180115c10 != 0) {
          FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),puVar42,
                        (longlong)iVar25 * 0x14);
        }
        if (*(undefined8 **)(lVar35 + 0x28) != (undefined8 *)0x0) {
          FUN_1800d1c20(puVar42,*(undefined8 **)(lVar35 + 0x28),
                        (longlong)*(int *)(lVar35 + 0x20) * 0x14);
          FUN_18005b5c0(*(longlong *)(lVar35 + 0x28));
        }
        *(undefined8 **)(lVar35 + 0x28) = puVar42;
        *(int *)(lVar35 + 0x24) = iVar25;
      }
      *(undefined8 *)(pauVar29[0x20] + 0x1c) = 0;
    }
    pbVar44 = local_188;
    if (((local_198 != 0) || (*(longlong *)(lVar21 + 0x20e8) != 0 && (uVar38 >> 0x11 & 1) == 0)) &&
       (local_1a0 != (undefined1 (*) [32])0x0)) {
      _Str2 = *(char **)(*pauVar29 + 8);
      iVar25 = strcmp((char *)local_188,_Str2);
      if (iVar25 != 0) {
        iVar25 = *(int *)(pauVar29[4] + 8);
        sVar32 = strlen((char *)pbVar44);
        uVar46 = sVar32 + 1;
        uVar47 = (longlong)iVar25;
        if ((ulonglong)(longlong)iVar25 < uVar46) {
          FUN_18005b5c0((longlong)_Str2);
          _Str2 = (char *)(*(code *)PTR__malloc_base_1801121b8)(uVar46,DAT_180115c20);
          if (DAT_180115c10 != 0) {
            FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),_Str2,
                          uVar46);
          }
          uVar47 = uVar46;
        }
        uVar33 = FUN_1800d1c20((undefined8 *)_Str2,(undefined8 *)pbVar44,uVar46);
        *(int *)(pauVar29[4] + 8) = (int)uVar47;
        *(undefined8 *)(*pauVar29 + 8) = uVar33;
      }
    }
    pauVar31 = local_1a0;
    FUN_180050f50((longlong)pauVar29,(float *)(pauVar29 + 2),(float *)(pauVar29[2] + 8));
    if ('\0' < (char)pauVar29[7][0xc]) {
      pauVar29[7][0xc] = pauVar29[7][0xc] + -1;
    }
    if ('\0' < (char)pauVar29[7][0xd]) {
      pauVar29[7][0xd] = pauVar29[7][0xd] + -1;
    }
    if ('\0' < (char)pauVar29[7][0xe]) {
      pauVar29[7][0xe] = pauVar29[7][0xe] + -1;
    }
    if ((pauVar31 == (undefined1 (*) [32])0x0) && ((!bVar52 || (!bVar19)))) {
      pauVar29[7][0xd] = 1;
    }
    if (((bVar40 != false) && ((uVar38 & 0x6000000) != 0)) &&
       (pauVar29[7][0xd] = 1, (uVar38 & 0x40) != 0)) {
      if (!bVar52) {
        *(undefined4 *)(pauVar29[1] + 0x18) = 0;
        *(undefined4 *)(pauVar29[1] + 0x10) = 0;
      }
      if (!bVar19) {
        *(undefined4 *)(pauVar29[1] + 0x1c) = 0;
        *(undefined4 *)(pauVar29[1] + 0x14) = 0;
      }
      *(undefined8 *)(pauVar29[2] + 8) = 0;
      *(undefined8 *)pauVar29[2] = 0;
    }
    lVar35 = DAT_180115c10;
    if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    local_140 = **(longlong **)(lVar35 + 0x1ef0);
    *(longlong *)pauVar29[1] = local_140;
    FUN_180066f80((longlong *)pauVar29);
    if (uVar28 == 0) {
      if (((uVar38 & 0x6000000) == 0) || ((uVar38 >> 0x1b & 1) != 0)) {
        fVar53 = *(float *)(lVar21 + 0xc3c);
      }
      else {
        fVar53 = *(float *)(lVar21 + 0xc64);
      }
    }
    else {
      fVar53 = *(float *)(lVar21 + 0xc5c);
    }
    *(float *)(pauVar29[3] + 4) = fVar53;
    *(undefined8 *)(pauVar29[2] + 0x18) = *(undefined8 *)(lVar21 + 0xc30);
    if ((((uVar28 != 0) && (uVar26 == 0)) && (((*pauVar29)[0x18] & 2) == 0)) && (fVar53 == 0.0)) {
      if ((uVar38 >> 10 & 1) == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined4 *)(lVar21 + 0xc34);
      }
      *(undefined4 *)(pauVar29[2] + 0x1c) = uVar24;
      *(undefined4 *)(pauVar29[2] + 0x18) = 0;
    }
    fVar53 = *(float *)(pauVar29[2] + 0x18);
    if (*(float *)(pauVar29[2] + 0x18) <= *(float *)(lVar21 + 0xc78)) {
      fVar53 = *(float *)(lVar21 + 0xc78);
    }
    if (fVar53 <= *(float *)(lVar21 + 0x1e44)) {
      fVar53 = *(float *)(lVar21 + 0x1e44);
    }
    *(float *)(pauVar29[0xb] + 0x1c) = fVar53;
    fVar53 = *(float *)(lVar21 + 0x1e48);
    *(float *)pauVar29[0xc] = fVar53;
    if ((uVar38 & 1) == 0) {
      fVar54 = *(float *)(lVar21 + 0xc6c) + *(float *)(lVar21 + 0xc6c) + *(float *)(lVar21 + 0x10c0)
      ;
    }
    else {
      fVar54 = 0.0;
    }
    *(float *)(pauVar29[3] + 8) = fVar54;
    if ((uVar38 >> 10 & 1) == 0) {
      fVar53 = 0.0;
    }
    else {
      fVar53 = fVar53 + *(float *)(lVar21 + 0x10c0) +
               *(float *)(lVar21 + 0xc6c) + *(float *)(lVar21 + 0xc6c);
    }
    *(float *)(pauVar29[3] + 0xc) = fVar53;
    *(undefined4 *)(pauVar29[0x15] + 0x18) = *(undefined4 *)(lVar21 + 0x10c0);
    bVar20 = bVar50;
    if ((bVar52) && (*(float *)(pauVar29[2] + 0x10) != 0.0)) {
      bVar20 = true;
    }
    if ((bVar19) && (*(float *)(pauVar29[2] + 0x14) != 0.0)) {
      bVar50 = true;
    }
    if ((uVar38 & 0x21) == 0) {
      if ((((*(undefined1 (**) [32])(lVar21 + 0x13b0) == pauVar29) &&
           (*(int *)(lVar21 + 0x1404) == 0)) && (*(int *)(lVar21 + 0x1408) == 0)) &&
         (*(int *)(lVar21 + 0x141c) == 0)) {
        fVar53 = *(float *)(pauVar29[1] + 8);
        lVar35 = *(longlong *)(DAT_180115c10 + 0x13a8);
        fVar55 = fVar53;
        if (fVar53 <= *(float *)(lVar35 + 600)) {
          fVar55 = *(float *)(lVar35 + 600);
        }
        if (fVar55 - *(float *)(DAT_180115c10 + 0xc90) <= *(float *)(DAT_180115c10 + 0xe8)) {
          fVar55 = *(float *)(pauVar29[1] + 0xc);
          if (*(float *)(pauVar29[1] + 0xc) <= *(float *)(lVar35 + 0x25c)) {
            fVar55 = *(float *)(lVar35 + 0x25c);
          }
          if (fVar55 - *(float *)(DAT_180115c10 + 0xc94) <= *(float *)(DAT_180115c10 + 0xec)) {
            fVar53 = fVar53 + *(float *)(pauVar29[1] + 0x18);
            if (*(float *)(lVar35 + 0x260) <= fVar53) {
              fVar53 = *(float *)(lVar35 + 0x260);
            }
            if (*(float *)(DAT_180115c10 + 0xe8) < fVar53 + *(float *)(DAT_180115c10 + 0xc90)) {
              fVar54 = fVar54 + *(float *)(pauVar29[1] + 0xc);
              if (*(float *)(lVar35 + 0x264) <= fVar54) {
                fVar54 = *(float *)(lVar35 + 0x264);
              }
              if (((*(float *)(DAT_180115c10 + 0xec) < fVar54 + *(float *)(DAT_180115c10 + 0xc94))
                  && (*(short *)(lVar21 + 0xb22) == 2)) && (*(int *)(DAT_180115c10 + 0x1b5c) == -1))
              {
                pauVar29[6][0x10] = 1;
              }
            }
          }
        }
      }
      if (pauVar29[6][0x10] != '\0') {
        cVar41 = pauVar29[6][0xf];
        pauVar29[6][0xf] = cVar41 == '\0';
        if (cVar41 != '\0') {
          bVar50 = true;
        }
        FUN_18005b470((longlong)pauVar29);
      }
    }
    else {
      pauVar29[6][0xf] = 0;
    }
    fVar53 = *(float *)(pauVar29[3] + 0xc);
    fVar54 = *(float *)(pauVar29[3] + 8);
    fVar65 = *(float *)pauVar29[6];
    fVar55 = *(float *)(pauVar29[6] + 4);
    pauVar29[6][0x10] = 0;
    *(undefined4 *)(pauVar29[3] + 0x10) = 0;
    *(float *)(pauVar29[3] + 0x14) = fVar53 + fVar54;
    *(undefined8 *)(pauVar29[3] + 0x18) = 0;
    *(undefined8 *)pauVar29[6] = 0;
    FUN_180050ca0((float *)&local_1c8,(longlong)pauVar29,(float *)(pauVar29[2] + 8));
    if (((uVar38 & 0x40) == 0) || (pauVar29[6][0xf] != '\0')) {
      if (('\0' < (char)pauVar29[7][4]) || ('\0' < (char)pauVar29[7][5])) {
        if ((!bVar52) && ('\0' < (char)pauVar29[7][4])) {
          if (pauVar29[7][6] == '\0') {
            fVar53 = (float)local_1c8;
          }
          else {
            fVar53 = *(float *)(pauVar29[1] + 0x18);
            if (*(float *)(pauVar29[1] + 0x18) <= (float)local_1c8) {
              fVar53 = (float)local_1c8;
            }
          }
          *(float *)(pauVar29[1] + 0x18) = fVar53;
          bVar20 = true;
        }
        if ((!bVar19) && ('\0' < (char)pauVar29[7][5])) {
          if (pauVar29[7][6] == '\0') {
            fVar53 = local_1c8._4_4_;
          }
          else {
            fVar53 = *(float *)(pauVar29[1] + 0x1c);
            if (*(float *)(pauVar29[1] + 0x1c) <= local_1c8._4_4_) {
              fVar53 = local_1c8._4_4_;
            }
          }
          *(float *)(pauVar29[1] + 0x1c) = fVar53;
          bVar50 = true;
        }
        if (((pauVar29[6][0xf] == '\0') && ((*(uint *)(*pauVar29 + 0x14) & 0x100) == 0)) &&
           (*(float *)(DAT_180115c10 + 0x25cc) <= 0.0)) {
          *(undefined4 *)(DAT_180115c10 + 0x25cc) = *(undefined4 *)(DAT_180115c10 + 0x1c);
        }
      }
    }
    else {
      if (!bVar52) {
        bVar20 = true;
        *(float *)(pauVar29[1] + 0x18) = (float)local_1c8;
      }
      if (!bVar19) {
        bVar50 = true;
        *(float *)(pauVar29[1] + 0x1c) = local_1c8._4_4_;
      }
    }
    pfVar34 = FUN_180051170(local_108,(longlong)pauVar29,(float *)(pauVar29[1] + 0x18));
    cVar41 = pauVar29[6][0xf];
    fVar53 = *pfVar34;
    fVar54 = pfVar34[1];
    *(float *)(pauVar29[1] + 0x18) = fVar53;
    *(float *)(pauVar29[1] + 0x1c) = fVar54;
    if ((cVar41 != '\0') && (uVar28 == 0)) {
      fVar53 = (fVar53 + *(float *)(pauVar29[1] + 8)) - *(float *)(pauVar29[1] + 8);
      fVar54 = (*(float *)(pauVar29[1] + 0xc) + *(float *)(pauVar29[3] + 8)) -
               *(float *)(pauVar29[1] + 0xc);
    }
    *(float *)(pauVar29[1] + 0x10) = fVar53;
    *(float *)(pauVar29[1] + 0x14) = fVar54;
    if (((bVar40 != false) && (*(undefined4 *)(pauVar29[7] + 8) = 0xffffffff, uVar26 != 0)) &&
       ((uVar38 & 0x8000000) == 0 && !bVar51)) {
      lVar35 = FUN_18006ceb0((int *)(lVar21 + 0x1ec8));
      uVar24 = *(undefined4 *)(lVar35 + 0x24);
      *(undefined4 *)(pauVar29[1] + 0xc) = *(undefined4 *)(lVar35 + 0x28);
      *(undefined4 *)(pauVar29[1] + 8) = uVar24;
    }
    lVar35 = local_1b8;
    if (uVar28 != 0) {
      if ((local_1b8 == 0) || (*(char *)(local_1b8 + 0xcc) == '\0')) {
        FID_conflict__assert
                  (L"parent_window && parent_window->Active",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x1cc9);
      }
      piVar1 = (int *)(lVar35 + 0x1a8);
      *(undefined2 *)(pauVar29[6] + 0x1e) = *(undefined2 *)piVar1;
      iVar25 = *(int *)(lVar35 + 0x1ac);
      if (*piVar1 == iVar25) {
        iVar43 = *piVar1 + 1;
        if (iVar25 == 0) {
          iVar25 = 8;
        }
        else {
          iVar25 = iVar25 / 2 + iVar25;
        }
        if (iVar43 < iVar25) {
          iVar43 = iVar25;
        }
        FUN_18006d6f0(piVar1,iVar43);
      }
      *(undefined1 (**) [32])(*(longlong *)(lVar35 + 0x1b0) + (longlong)*piVar1 * 8) = pauVar29;
      *piVar1 = *piVar1 + 1;
      if (uVar26 == 0 && (!bVar51 && !bVar18)) {
        *(undefined8 *)(pauVar29[1] + 8) = *(undefined8 *)(lVar35 + 0x118);
      }
    }
    if ((*(float *)(pauVar29[7] + 0x14) == 3.4028235e+38) || (pauVar29[7][0xd] != '\0')) {
      if (local_198 == 0) {
        if (((uVar26 == 0) || (bVar51)) || (cVar23 < '\x01')) {
          if ((local_194 == 0) || (bVar51 || bVar18)) goto LAB_18004debb;
          pfVar34 = local_f0;
        }
        else {
          pfVar34 = local_f8;
        }
      }
      else {
        pfVar34 = local_100;
      }
      pfVar34 = FUN_1800552a0(pfVar34,(longlong)pauVar29);
      fVar53 = *pfVar34;
      *(float *)(pauVar29[1] + 0xc) = pfVar34[1];
      *(float *)(pauVar29[1] + 8) = fVar53;
    }
    else {
      local_170 = *(float *)(pauVar29[7] + 0x14) -
                  *(float *)(pauVar29[7] + 0x1c) * *(float *)(pauVar29[1] + 0x10);
      local_16c = *(float *)(pauVar29[7] + 0x18) -
                  *(float *)pauVar29[8] * *(float *)(pauVar29[1] + 0x14);
      FUN_180068060((longlong)pauVar29,(undefined8 *)&local_170,0);
    }
LAB_18004debb:
    local_154 = *(float *)(lVar21 + 0xd08);
    if (*(float *)(lVar21 + 0xd08) <= *(float *)(lVar21 + 0xd10)) {
      local_154 = *(float *)(lVar21 + 0xd10);
    }
    local_138 = (float)*(undefined8 *)(local_140 + 8);
    fStack_134 = (float)((ulonglong)*(undefined8 *)(local_140 + 8) >> 0x20);
    local_160 = *(float *)(lVar21 + 0xd04);
    if (*(float *)(lVar21 + 0xd04) <= *(float *)(lVar21 + 0xd0c)) {
      local_160 = *(float *)(lVar21 + 0xd0c);
    }
    fVar53 = (float)*(undefined8 *)(local_140 + 0x10) + local_138;
    fVar54 = (float)((ulonglong)*(undefined8 *)(local_140 + 0x10) >> 0x20) + fStack_134;
    local_15c = *(float *)(local_140 + 0x1c) + local_154;
    local_154 = (*(float *)(local_140 + 0x1c) + *(float *)(local_140 + 0x24)) - local_154;
    local_158 = (*(float *)(local_140 + 0x18) + *(float *)(local_140 + 0x20)) - local_160;
    local_160 = *(float *)(local_140 + 0x18) + local_160;
    uStack_130 = CONCAT44(fVar54,fVar53);
    if (((bVar51 || uVar28 != 0) || (fVar53 - local_138 <= 0.0)) || (fVar54 - fStack_134 <= 0.0)) {
      *(ulonglong *)(pauVar29[1] + 8) =
           CONCAT44((float)(int)(float)((ulonglong)*(undefined8 *)(pauVar29[1] + 8) >> 0x20),
                    (float)(int)(float)*(undefined8 *)(pauVar29[1] + 8));
      if (uVar28 == 0) goto LAB_18004dfea;
      fVar53 = *(float *)(lVar21 + 0xc58);
    }
    else {
      fVar53 = *(float *)(pauVar29[1] + 0x14);
      if ((*(char *)(DAT_180115c10 + 0x66) != '\0') && (((*pauVar29)[0x14] & 1) == 0)) {
        fVar53 = *(float *)(pauVar29[3] + 8);
      }
      fVar54 = *(float *)(pauVar29[1] + 0xc);
      fVar58 = local_160 - *(float *)(pauVar29[1] + 0x10);
      fVar66 = local_15c - fVar53;
      if ((local_15c - fVar53 <= fVar54) && (fVar66 = local_154, fVar54 <= local_154)) {
        fVar66 = fVar54;
      }
      fVar53 = *(float *)(pauVar29[1] + 8);
      if ((fVar58 <= fVar53) && (fVar58 = local_158, fVar53 <= local_158)) {
        fVar58 = fVar53;
      }
      *(float *)(pauVar29[1] + 8) = fVar58;
      *(ulonglong *)(pauVar29[1] + 8) =
           CONCAT44((float)(int)fVar66,(float)(int)(float)*(undefined8 *)(pauVar29[1] + 8));
LAB_18004dfea:
      if ((uVar26 == 0) || ((uVar38 >> 0x1b & 1) != 0)) {
        fVar53 = *(float *)(lVar21 + 0xc38);
      }
      else {
        fVar53 = *(float *)(lVar21 + 0xc60);
      }
    }
    bVar52 = false;
    *(float *)pauVar29[3] = fVar53;
    if ((bVar40 != false) && ((uVar38 >> 0xc & 1) == 0)) {
      if (uVar26 == 0) {
        bVar52 = (uVar38 & 0x3000000) == 0;
      }
      else {
        bVar52 = true;
      }
    }
    local_190[0] = -NAN;
    local_1c0[0] = -NAN;
    local_e0[0] = 0;
    local_e0[1] = 0;
    local_e0[2] = 0;
    local_e0[3] = 0;
    if ((uVar28 == 0) || (uVar26 != 0)) {
      iVar25 = (*(char *)(lVar21 + 0x65) != '\0') + 1;
    }
    else {
      iVar25 = 0;
    }
    fVar54 = *(float *)(lVar21 + 0x10c0) * 1.1;
    fVar53 = *(float *)(lVar21 + 0x10c0) * 0.2 + fVar53 + 1.0;
    if (fVar54 <= fVar53) {
      fVar54 = fVar53;
    }
    if ((pauVar29[6][0xf] == '\0') &&
       (uVar26 = FUN_18006b2c0((longlong *)pauVar29,(float *)&local_1c8,local_190,local_1c0,iVar25,
                               local_e0,&local_160), uVar26 != 0)) {
      if ((uVar26 & 1) != 0) {
        bVar20 = true;
      }
      if ((uVar26 & 2) != 0) {
        bVar50 = true;
      }
    }
    cVar23 = pauVar29[6][0xf];
    pauVar29[6][0x18] = local_190[0]._0_1_;
    pauVar29[6][0x19] = local_1c0[0]._0_1_;
    if (cVar23 == '\0') {
      fVar53 = *(float *)(pauVar29[3] + 0x1c);
      if (local_1a0 == (undefined1 (*) [32])0x0) {
        fVar58 = 0.0;
        fVar66 = 0.0;
      }
      else {
        fVar58 = *(float *)(pauVar29[2] + 0x18) + *(float *)(pauVar29[2] + 0x18) +
                 *(float *)pauVar29[2];
        fVar66 = *(float *)(pauVar29[2] + 0x1c) + *(float *)(pauVar29[2] + 0x1c) +
                 *(float *)(pauVar29[2] + 4);
      }
      if (bVar20) {
        fVar65 = *(float *)(pauVar29[1] + 0x18);
      }
      else {
        fVar65 = (*(float *)pauVar29[0x11] - *(float *)(pauVar29[0x10] + 0x18)) + fVar65;
      }
      if (bVar50) {
        fVar55 = *(float *)(pauVar29[1] + 0x1c) - (fVar53 + *(float *)(pauVar29[3] + 0x14));
      }
      else {
        fVar55 = (*(float *)(pauVar29[0x11] + 4) - *(float *)(pauVar29[0x10] + 0x1c)) + fVar55;
      }
      cVar23 = pauVar29[6][8];
      if (((uVar38 >> 0xe & 1) != 0) || ((fVar55 < fVar66 && ((uVar38 & 8) == 0)))) {
        cVar41 = '\x01';
      }
      else {
        cVar41 = '\0';
      }
      pauVar29[6][9] = cVar41;
      if ((uVar38 >> 0xf & 1) == 0) {
        if (cVar41 == '\0') {
          fVar59 = 0.0;
        }
        else {
          fVar59 = *(float *)(lVar21 + 0xca0);
        }
        if ((fVar65 - fVar59 < fVar58) && ((uVar38 & 0x808) == 0x800)) goto LAB_18004e211;
        cVar48 = '\0';
      }
      else {
LAB_18004e211:
        cVar48 = '\x01';
      }
      cVar7 = pauVar29[6][0xb];
      pauVar29[6][8] = cVar48;
      bVar37 = cVar23 != cVar48 | cVar7 * '\x02';
      pauVar29[6][0xb] = bVar37;
      if (bVar37 == 0) {
LAB_18004e260:
        pauVar29[6][10] = 0;
        if (cVar48 != '\0') goto LAB_18004e26c;
        fVar55 = 0.0;
      }
      else {
        uVar26 = 0;
        do {
          uVar26 = uVar26 + 1;
          bVar37 = bVar37 & bVar37 - 1;
        } while (bVar37 != 0);
        if (uVar26 < 4) goto LAB_18004e260;
        pauVar29[6][8] = 1;
        pauVar29[6][10] = 1;
LAB_18004e26c:
        if (cVar41 == '\0') {
          if ((fVar55 - *(float *)(lVar21 + 0xca0) < fVar66) && ((uVar38 & 8) == 0)) {
            cVar41 = '\x01';
            pauVar29[6][9] = 1;
            fVar55 = *(float *)(lVar21 + 0xca0);
            goto LAB_18004e2aa;
          }
          cVar41 = '\0';
          pauVar29[6][9] = 0;
        }
        fVar55 = *(float *)(lVar21 + 0xca0);
      }
LAB_18004e2aa:
      if (cVar41 == '\0') {
        fVar65 = 0.0;
      }
      else {
        fVar65 = *(float *)(lVar21 + 0xca0);
      }
      *(float *)pauVar29[6] = fVar65;
      fVar58 = *(float *)(pauVar29[3] + 0x18);
      *(float *)(pauVar29[6] + 4) = fVar55;
      *(float *)(pauVar29[3] + 0x1c) = fVar53 + fVar55;
      *(float *)(pauVar29[3] + 0x18) = fVar65 + fVar58;
    }
    if (((uVar38 & 0x5000000) != 0x1000000) || (bVar18)) {
      pfVar34 = &local_138;
    }
    else {
      pfVar34 = (float *)(local_1b8 + 600);
    }
    uVar16 = *(undefined8 *)pfVar34;
    uVar17 = *(undefined8 *)(pfVar34 + 2);
    uVar33 = *(undefined8 *)(pauVar29[1] + 8);
    fStack_1ac = *(float *)(pauVar29[1] + 0xc);
    fVar55 = (float)uVar33;
    fVar58 = (float)*(undefined8 *)(pauVar29[1] + 0x10) + fVar55;
    fVar65 = (float)((ulonglong)uVar33 >> 0x20);
    fVar66 = (float)((ulonglong)*(undefined8 *)(pauVar29[1] + 0x10) >> 0x20) + fVar65;
    fStack_1a4 = fVar65 + *(float *)(pauVar29[3] + 8);
    local_1b0 = *(float *)(pauVar29[1] + 8);
    fStack_1a8 = fVar55 + *(float *)(pauVar29[1] + 0x18);
    *(undefined8 *)(pauVar29[0x10] + 8) = uVar33;
    *(ulonglong *)(pauVar29[0x10] + 0x10) = CONCAT44(fVar66,fVar58);
    local_180._0_4_ = (float)uVar16;
    local_180._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
    fVar53 = *(float *)(pauVar29[0x10] + 8);
    if (*(float *)(pauVar29[0x10] + 8) <= (float)local_180) {
      fVar53 = (float)local_180;
    }
    uStack_178._0_4_ = (float)uVar17;
    fVar59 = *(float *)(pauVar29[0x10] + 0xc);
    if (*(float *)(pauVar29[0x10] + 0xc) <= local_180._4_4_) {
      fVar59 = local_180._4_4_;
    }
    uStack_178._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
    *(float *)(pauVar29[0x10] + 8) = fVar53;
    *(float *)(pauVar29[0x10] + 0xc) = fVar59;
    fVar53 = *(float *)(pauVar29[0x10] + 0x10);
    if ((float)uStack_178 <= *(float *)(pauVar29[0x10] + 0x10)) {
      fVar53 = (float)uStack_178;
    }
    fVar59 = *(float *)(pauVar29[0x10] + 0x14);
    if (uStack_178._4_4_ <= *(float *)(pauVar29[0x10] + 0x14)) {
      fVar59 = uStack_178._4_4_;
    }
    *(float *)(pauVar29[0x10] + 0x10) = fVar53;
    *(float *)(pauVar29[0x10] + 0x14) = fVar59;
    fVar55 = (float)*(undefined8 *)(pauVar29[3] + 0x10) + fVar55;
    fVar65 = (float)((ulonglong)*(undefined8 *)(pauVar29[3] + 0x10) >> 0x20) + fVar65;
    fVar58 = fVar58 - (float)*(undefined8 *)(pauVar29[3] + 0x18);
    fVar66 = fVar66 - (float)((ulonglong)*(undefined8 *)(pauVar29[3] + 0x18) >> 0x20);
    *(ulonglong *)(pauVar29[0x10] + 0x18) = CONCAT44(fVar65,fVar55);
    *(ulonglong *)pauVar29[0x11] = CONCAT44(fVar66,fVar58);
    if ((uVar38 & 0x401) == 1) {
      fVar53 = *(float *)(pauVar29[3] + 4);
    }
    else {
      fVar53 = *(float *)(lVar21 + 0xc74);
    }
    fVar59 = *(float *)(pauVar29[3] + 4) * 0.5;
    fVar55 = fVar55 + 0.5 + fVar59;
    iVar43 = (int)fVar55;
    if ((fVar55 < 0.0) && ((float)iVar43 != fVar55)) {
      iVar43 = iVar43 + -1;
    }
    fVar53 = fVar53 * 0.5 + fVar65 + 0.5;
    *(float *)(pauVar29[0x11] + 8) = (float)iVar43;
    iVar43 = (int)fVar53;
    if ((fVar53 < 0.0) && ((float)iVar43 != fVar53)) {
      iVar43 = iVar43 + -1;
    }
    fVar58 = fVar58 - fVar59;
    fVar53 = (float)iVar43;
    *(float *)(pauVar29[0x11] + 0xc) = fVar53;
    iVar43 = (int)fVar58;
    if ((fVar58 < 0.0) && ((float)iVar43 != fVar58)) {
      iVar43 = iVar43 + -1;
    }
    fVar66 = fVar66 - fVar59;
    *(float *)(pauVar29[0x11] + 0x10) = (float)iVar43;
    iVar43 = (int)fVar66;
    if ((fVar66 < 0.0) && ((float)iVar43 != fVar66)) {
      iVar43 = iVar43 + -1;
    }
    *(float *)(pauVar29[0x11] + 0x14) = (float)iVar43;
    if (local_180._4_4_ <= fVar53) {
      fVar55 = uStack_178._4_4_;
      if (fVar53 <= uStack_178._4_4_) {
        fVar55 = fVar53;
      }
    }
    else {
      fVar55 = local_180._4_4_;
    }
    fVar53 = *(float *)(pauVar29[0x11] + 8);
    if ((float)local_180 <= fVar53) {
      fVar65 = (float)uStack_178;
      if (fVar53 <= (float)uStack_178) {
        fVar65 = fVar53;
      }
    }
    else {
      fVar65 = (float)local_180;
    }
    *(float *)(pauVar29[0x11] + 8) = fVar65;
    *(float *)(pauVar29[0x11] + 0xc) = fVar55;
    fVar53 = *(float *)(pauVar29[0x11] + 0x14);
    if ((local_180._4_4_ <= fVar53) &&
       (local_180._4_4_ = uStack_178._4_4_, fVar53 <= uStack_178._4_4_)) {
      local_180._4_4_ = fVar53;
    }
    fVar53 = *(float *)(pauVar29[0x11] + 0x10);
    if (((float)local_180 <= fVar53) &&
       (local_180._0_4_ = (float)uStack_178, fVar53 <= (float)uStack_178)) {
      local_180._0_4_ = fVar53;
    }
    *(float *)(pauVar29[0x11] + 0x10) = (float)local_180;
    *(float *)(pauVar29[0x11] + 0x14) = local_180._4_4_;
    if ((*(float *)(pauVar29[1] + 0x10) <= 0.0) || ((uVar38 & 0x2000040) != 0)) {
      fVar53 = *(float *)(lVar21 + 0x10c0) * 16.0;
    }
    else {
      fVar53 = *(float *)(pauVar29[1] + 0x10) * 0.65;
    }
    *(float *)(pauVar29[0x14] + 8) = (float)(int)fVar53;
    fVar55 = (*(float *)(pauVar29[2] + 0x18) + *(float *)(pauVar29[2] + 0x18) +
             *(float *)pauVar29[2]) - (*(float *)pauVar29[0x11] - *(float *)(pauVar29[0x10] + 0x18))
    ;
    fVar53 = 0.0;
    if (0.0 <= fVar55) {
      fVar53 = fVar55;
    }
    *(float *)pauVar29[5] = fVar53;
    fVar55 = (*(float *)(pauVar29[2] + 0x1c) + *(float *)(pauVar29[2] + 0x1c) +
             *(float *)(pauVar29[2] + 4)) -
             (*(float *)(pauVar29[0x11] + 4) - *(float *)(pauVar29[0x10] + 0x1c));
    fVar53 = 0.0;
    if (0.0 <= fVar55) {
      fVar53 = fVar55;
    }
    *(float *)(pauVar29[5] + 4) = fVar53;
    local_180 = uVar16;
    uStack_178 = uVar17;
    pfVar34 = FUN_180050950(local_e8,(longlong)pauVar29);
    fVar53 = pfVar34[1];
    *(float *)(pauVar29[4] + 0x18) = *pfVar34;
    *(float *)(pauVar29[4] + 0x1c) = fVar53;
    *(undefined4 *)(pauVar29[5] + 8) = 0x7f7fffff;
    *(undefined4 *)(pauVar29[5] + 0xc) = 0x7f7fffff;
    *(undefined8 *)pauVar29[4] = 0;
    if ((**(int **)pauVar29[0x16] != 1) ||
       (*(int *)(*(longlong *)(*(int **)pauVar29[0x16] + 2) + 0x20) != 0)) {
      FID_conflict__assert
                (L"window->DrawList->CmdBuffer.Size == 1 && window->DrawList->CmdBuffer[0].ElemCount == 0"
                 ,
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1d84);
    }
    FUN_1800765a0(*(int **)pauVar29[0x16],
                  *(undefined8 *)(*(longlong *)(*(longlong *)(lVar21 + 0x10b8) + 0x40) + 8));
    lVar35 = DAT_180115c10;
    uVar33 = 0;
    *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
    lVar35 = *(longlong *)(lVar35 + 0x13a8);
    FUN_180076360(*(int **)(lVar35 + 0x2c0),(float *)&local_180,(float *)&uStack_178,'\0');
    lVar39 = *(longlong *)(lVar35 + 0x2c0);
    if (*(int *)(lVar39 + 0x98) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    lVar49 = local_1b8;
    lVar11 = *(longlong *)(lVar39 + 0xa0);
    bVar50 = false;
    lVar39 = (longlong)*(int *)(lVar39 + 0x98);
    uVar24 = *(undefined4 *)(lVar11 + -0xc + lVar39 * 0x10);
    uVar3 = *(undefined4 *)(lVar11 + -8 + lVar39 * 0x10);
    uVar4 = *(undefined4 *)(lVar11 + -4 + lVar39 * 0x10);
    *(undefined4 *)(lVar35 + 600) = *(undefined4 *)(lVar11 + -0x10 + lVar39 * 0x10);
    *(undefined4 *)(lVar35 + 0x25c) = uVar24;
    *(undefined4 *)(lVar35 + 0x260) = uVar3;
    *(undefined4 *)(lVar35 + 0x264) = uVar4;
    if (((uVar38 & 0x5000000) == 0x1000000) && (!bVar18)) {
      iVar43 = *(int *)(local_1b8 + 0x1a8);
      if (iVar43 < 2) {
LAB_18004e7b2:
        cVar23 = '\0';
      }
      else {
        plVar36 = (longlong *)FUN_18004b6e0((int *)(local_1b8 + 0x1a8),iVar43 + -2);
        lVar35 = *plVar36;
        if (lVar35 == 0) goto LAB_18004e7b2;
        local_118 = *(undefined8 *)(lVar35 + 0x28);
        local_110 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar35 + 0x30) >> 0x20) +
                             (float)((ulonglong)local_118 >> 0x20),
                             (float)*(undefined8 *)(lVar35 + 0x30) + (float)local_118);
        local_128 = *(undefined8 *)(pauVar29[1] + 8);
        local_120 = CONCAT44((float)((ulonglong)*(undefined8 *)(pauVar29[1] + 0x10) >> 0x20) +
                             (float)((ulonglong)local_128 >> 0x20),
                             (float)*(undefined8 *)(pauVar29[1] + 0x10) + (float)local_128);
        cVar23 = FUN_180061b30((float *)&local_118,(float *)&local_128);
      }
      iVar43 = *(int *)(*(longlong *)(lVar49 + 0x2c0) + 0x20);
      lVar35 = FUN_18006ce70(*(int **)pauVar29[0x16]);
      if (((*(int *)(lVar35 + 0x20) == 0) && (iVar43 != 0)) && (cVar23 == '\0')) {
        bVar50 = true;
        *(undefined8 *)pauVar29[0x16] = *(undefined8 *)(local_1b8 + 0x2c0);
      }
    }
    lVar35 = *(longlong *)(lVar21 + 0x20d8);
    if (lVar35 == 0) {
      lVar35 = *(longlong *)(lVar21 + 0x1f00);
    }
    if ((bVar52) ||
       ((lVar35 != 0 && (*(longlong *)pauVar29[0x1e] == *(longlong *)(lVar35 + 0x3c0))))) {
      bVar37 = 1;
    }
    else {
      bVar37 = 0;
    }
    uVar46 = CONCAT71((int7)((ulonglong)uVar33 >> 8),1);
    FUN_180065460((longlong)pauVar29,&local_1b0,bVar37,'\x01',iVar25,(longlong)local_e0,
                  (float)(int)fVar54);
    if (bVar50) {
      *(undefined1 **)pauVar29[0x16] = pauVar29[0x16] + 8;
    }
    if (((uVar38 & 8) == 0) && ((uVar38 >> 0xb & 1) != 0)) {
      bVar50 = true;
    }
    else {
      bVar50 = false;
    }
    fVar53 = *(float *)(pauVar29[2] + 0x10);
    if (fVar53 == 0.0) {
      fVar55 = (*(float *)(pauVar29[1] + 0x10) -
               (*(float *)(pauVar29[2] + 0x18) + *(float *)(pauVar29[2] + 0x18))) -
               (*(float *)(pauVar29[3] + 0x18) + *(float *)(pauVar29[3] + 0x10));
      if (bVar50) {
        fVar54 = *(float *)pauVar29[2];
        if (*(float *)pauVar29[2] <= fVar55) {
          fVar54 = fVar55;
        }
      }
      else {
        fVar54 = 0.0;
        if (0.0 <= fVar55) {
          fVar54 = fVar55;
        }
      }
    }
    else {
      fVar54 = fVar53;
    }
    fVar55 = *(float *)(pauVar29[2] + 0x14);
    if (fVar55 == 0.0) {
      fVar58 = (*(float *)(pauVar29[1] + 0x14) -
               (*(float *)(pauVar29[2] + 0x1c) + *(float *)(pauVar29[2] + 0x1c))) -
               (*(float *)(pauVar29[3] + 0x1c) + *(float *)(pauVar29[3] + 0x14));
      if ((uVar38 & 8) == 0) {
        fVar65 = *(float *)(pauVar29[2] + 4);
        if (*(float *)(pauVar29[2] + 4) <= fVar58) {
          fVar65 = fVar58;
        }
      }
      else {
        fVar65 = 0.0;
        if (0.0 <= fVar58) {
          fVar65 = fVar58;
        }
      }
    }
    else {
      fVar65 = fVar55;
    }
    fVar58 = *(float *)(pauVar29[3] + 4);
    fVar66 = *(float *)(pauVar29[2] + 0x18);
    fVar59 = *(float *)(pauVar29[4] + 0x18);
    fVar56 = fVar66;
    if (fVar66 <= fVar58) {
      fVar56 = fVar58;
    }
    fVar63 = (float)(int)((*(float *)(pauVar29[0x10] + 0x18) - fVar59) + fVar56);
    *(float *)(pauVar29[0x11] + 0x18) = fVar63;
    fVar56 = *(float *)(pauVar29[2] + 0x1c);
    fVar5 = *(float *)(pauVar29[4] + 0x1c);
    fVar57 = fVar56;
    if (fVar56 <= fVar58) {
      fVar57 = fVar58;
    }
    fVar58 = (float)(int)((*(float *)(pauVar29[0x10] + 0x1c) - fVar5) + fVar57);
    *(float *)(pauVar29[0x11] + 0x1c) = fVar58;
    *(float *)pauVar29[0x12] = fVar63 + fVar54;
    *(float *)(pauVar29[0x12] + 4) = fVar58 + fVar65;
    uVar33 = *(undefined8 *)pauVar29[0x12];
    *(undefined8 *)(pauVar29[0x12] + 8) = *(undefined8 *)(pauVar29[0x11] + 0x18);
    *(undefined8 *)(pauVar29[0x12] + 0x10) = uVar33;
    fVar54 = *(float *)(pauVar29[1] + 8);
    fVar65 = *(float *)(pauVar29[3] + 0x10);
    fVar63 = (fVar54 - fVar59) + fVar66 + fVar65;
    *(float *)(pauVar29[0x13] + 8) = fVar63;
    fVar58 = *(float *)(pauVar29[1] + 0xc);
    fVar57 = *(float *)(pauVar29[3] + 0x14);
    fVar64 = (fVar58 - fVar5) + fVar56 + fVar57;
    *(float *)(pauVar29[0x13] + 0xc) = fVar64;
    if (fVar53 == 0.0) {
      fVar53 = (*(float *)(pauVar29[1] + 0x10) - (fVar66 + fVar66)) -
               (fVar65 + *(float *)(pauVar29[3] + 0x18));
    }
    *(float *)(pauVar29[0x13] + 0x10) = fVar63 + fVar53;
    if (fVar55 == 0.0) {
      fVar55 = (*(float *)(pauVar29[1] + 0x14) - (fVar56 + fVar56)) -
               (fVar57 + *(float *)(pauVar29[3] + 0x1c));
    }
    uVar47 = (ulonglong)bVar40;
    *(float *)(pauVar29[0x13] + 0x14) = fVar64 + fVar55;
    *(float *)(pauVar29[10] + 0x1c) = (fVar65 + fVar66) - fVar59;
    *(undefined8 *)pauVar29[0xb] = 0;
    fVar54 = ((fVar66 + fVar54) - fVar59) + fVar65 + 0.0;
    fVar57 = ((fVar56 + fVar58) - fVar5) + fVar57;
    *(float *)(pauVar29[9] + 8) = fVar54;
    *(float *)(pauVar29[9] + 0xc) = fVar57;
    fVar53 = *(float *)(pauVar29[9] + 0xc);
    *(float *)(pauVar29[0xb] + 8) = fVar54 - *(float *)(pauVar29[9] + 8);
    *(float *)(pauVar29[0xb] + 0xc) = fVar57 - fVar53;
    uVar24 = *(undefined4 *)(pauVar29[9] + 8);
    uVar3 = *(undefined4 *)(pauVar29[9] + 0xc);
    *(undefined4 *)(pauVar29[8] + 0x18) = uVar24;
    *(undefined4 *)(pauVar29[8] + 0x1c) = uVar3;
    *(undefined4 *)pauVar29[9] = uVar24;
    *(undefined4 *)(pauVar29[9] + 4) = uVar3;
    *(undefined8 *)(pauVar29[9] + 0x10) = *(undefined8 *)(pauVar29[9] + 8);
    *(undefined8 *)(pauVar29[9] + 0x18) = *(undefined8 *)(pauVar29[9] + 8);
    *(undefined8 *)(pauVar29[10] + 8) = 0;
    *(undefined8 *)pauVar29[10] = 0;
    *(undefined8 *)(pauVar29[10] + 0x10) = 0;
    *(undefined2 *)(pauVar29[10] + 0x18) = 0;
    *(undefined4 *)(pauVar29[0xb] + 0x10) = 0;
    *(undefined2 *)(pauVar29[0xb] + 0x14) = *(undefined2 *)(pauVar29[0xb] + 0x16);
    *(undefined4 *)(pauVar29[0xb] + 0x16) = 0x10000;
    pauVar29[0xb][0x1a] = 0.0 < *(float *)(pauVar29[5] + 4);
    pauVar29[0xb][0x1b] = 0;
    FUN_18009f8e0((undefined4 *)(pauVar29[0xc] + 4),*(float *)(lVar21 + 0xc78),bVar40);
    *(undefined8 *)pauVar29[0xd] = 0;
    iVar25 = *(int *)(pauVar29[0xd] + 0xc);
    if (iVar25 < 0) {
      iVar25 = iVar25 + iVar25 / 2;
      iVar43 = 0;
      if (0 < iVar25) {
        iVar43 = iVar25;
      }
      FUN_18006d6f0((int *)(pauVar29[0xd] + 8),iVar43);
    }
    lVar35 = local_1b8;
    *(undefined4 *)(pauVar29[0xd] + 8) = 0;
    *(undefined1 **)(pauVar29[0xd] + 0x18) = pauVar29[0x14] + 0x10;
    uVar24 = 1;
    *(undefined8 *)pauVar29[0xe] = 0;
    *(undefined4 *)(pauVar29[0xe] + 0xc) = 1;
    if (local_1b8 != 0) {
      uVar24 = *(undefined4 *)(local_1b8 + 0x1cc);
    }
    *(undefined4 *)(pauVar29[0xe] + 0x10) = uVar24;
    *(undefined4 *)pauVar29[0xf] = *(undefined4 *)(pauVar29[0x14] + 8);
    *(undefined4 *)(pauVar29[0xf] + 4) = 0xbf800000;
    iVar25 = *(int *)(pauVar29[0xf] + 0xc);
    if (iVar25 < 0) {
      iVar25 = iVar25 + iVar25 / 2;
      iVar43 = 0;
      if (0 < iVar25) {
        iVar43 = iVar25;
      }
      FUN_18006d650((int *)(pauVar29[0xf] + 8),iVar43);
    }
    *(undefined4 *)(pauVar29[0xf] + 8) = 0;
    iVar25 = *(int *)(pauVar29[0xf] + 0x1c);
    if (iVar25 < 0) {
      iVar25 = iVar25 + iVar25 / 2;
      iVar43 = 0;
      if (0 < iVar25) {
        iVar43 = iVar25;
      }
      FUN_18006d650((int *)(pauVar29[0xf] + 0x18),iVar43);
    }
    *(undefined4 *)(pauVar29[0xf] + 0x18) = 0;
    if ((uVar38 >> 0x1b & 1) != 0) {
      uVar26 = FUN_180051e70((float *)(DAT_180115c10 + 0x1094));
      *(uint *)(pauVar29[0xe] + 0x14) = uVar26;
    }
    if ('\0' < (char)pauVar29[7][4]) {
      pauVar29[7][4] = pauVar29[7][4] + -1;
    }
    if ('\0' < (char)pauVar29[7][5]) {
      pauVar29[7][5] = pauVar29[7][5] + -1;
    }
    if ((bVar52) &&
       (FUN_180056440((longlong)pauVar29,2,uVar47),
       pauVar29 == *(undefined1 (**) [32])(lVar21 + 0x1f00))) {
      FUN_18005ba70((longlong)pauVar29,'\0');
    }
    if (((((*(char *)(lVar21 + 0x67) != '\0') && (*(longlong *)(lVar21 + 0x1f00) != 0)) &&
         (*(undefined1 (**) [32])(*(longlong *)(lVar21 + 0x1f00) + 0x3b0) == pauVar29)) &&
        ((*(int *)(lVar21 + 0x141c) == 0 &&
         (uVar33 = FUN_180068330(0x1224,0,0,uVar46), (char)uVar33 != '\0')))) &&
       (*(char *)(DAT_180115c10 + 0x2678) == '\0')) {
      FUN_18005b080(8,0);
    }
    if ((uVar38 & 1) == 0) {
      local_150 = local_1b0 + *(float *)(pauVar29[3] + 4);
      local_148 = fStack_1a8 - *(float *)(pauVar29[3] + 4);
      local_14c = fStack_1ac;
      local_144 = fStack_1a4;
      FUN_180065fd0((longlong *)pauVar29,&local_150,local_188,local_168);
    }
    *(undefined4 *)(pauVar29[0x13] + 0x18) = 0;
    if ((uVar38 >> 0x19 & 1) != 0) {
      *(undefined1 (**) [32])(lVar21 + 0x2518) = pauVar29;
    }
    *(undefined4 *)(pauVar29[0xe] + 0x18) = 0;
    if (*(float *)(DAT_180115c10 + 0xe8) < local_1b0 - *(float *)(DAT_180115c10 + 0xc90)) {
LAB_18004ee5f:
      uVar24 = 0;
    }
    else if (((*(float *)(DAT_180115c10 + 0xec) < fStack_1ac - *(float *)(DAT_180115c10 + 0xc94)) ||
             (*(float *)(DAT_180115c10 + 0xc90) + fStack_1a8 <= *(float *)(DAT_180115c10 + 0xe8)))
            || (uVar24 = 1,
               *(float *)(DAT_180115c10 + 0xc94) + fStack_1a4 <= *(float *)(DAT_180115c10 + 0xec)))
    goto LAB_18004ee5f;
    *(undefined4 *)(pauVar29[0xe] + 0x18) = uVar24;
    lVar39 = DAT_180115c10;
    puVar2 = (undefined4 *)(DAT_180115c10 + 0x1d48);
    *(undefined4 *)(DAT_180115c10 + 0x1d88) = *(undefined4 *)(pauVar29[4] + 0xc);
    *(undefined4 *)(lVar39 + 0x1d8c) = *puVar2;
    *(undefined4 *)(lVar39 + 0x1d90) = uVar24;
    *(ulonglong *)(lVar39 + 0x1da4) = CONCAT44(fStack_1ac,local_1b0);
    *(ulonglong *)(lVar39 + 0x1dac) = CONCAT44(fStack_1a4,fStack_1a8);
    *(ulonglong *)(lVar39 + 0x1d94) = CONCAT44(fStack_1ac,local_1b0);
    *(ulonglong *)(lVar39 + 0x1d9c) = CONCAT44(fStack_1a4,fStack_1a8);
    iVar25 = *(int *)(lVar21 + 0x1d4c);
    if ((iVar25 != 0) &&
       ((*(int *)(*pauVar29 + 0x10) == iVar25 || (*(int *)(pauVar29[4] + 0xc) == iVar25)))) {
      FUN_180052c00();
    }
  }
  if (pauVar29[6][0x12] == '\0') {
    FUN_1800625b0((float *)(pauVar29[0x11] + 8),(float *)(pauVar29[0x11] + 0x10),'\x01');
  }
  pauVar29[6][0xe] = 0;
  *(short *)(pauVar29[6] + 0x1a) = *(short *)(pauVar29[6] + 0x1a) + 1;
  *(undefined4 *)(lVar21 + 0x1dd8) = 0;
  if (iVar10 == iVar9) goto LAB_18004f162;
  if (pauVar29[6][0x12] != '\0') {
    pauVar29[6][0x11] = 1;
    goto LAB_18004f162;
  }
  if ((uVar38 & 0x11000000) == 0x1000000) {
    if ((uVar38 & 1) == 0) {
      FID_conflict__assert
                (L"(flags & ImGuiWindowFlags_NoTitleBar) != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1e3a);
    }
    if (((((*(uint *)(*pauVar29 + 0x18) & 0x100) == 0) || (*(char *)(lVar21 + 0x1f51) == '\0')) ||
        (*(longlong *)(lVar21 + 0x1f00) == 0)) ||
       (*(longlong *)(*(longlong *)(lVar21 + 0x1f00) + 0x3c8) != *(longlong *)(pauVar29[0x1e] + 8)))
    {
      bVar50 = false;
    }
    else {
      bVar50 = true;
    }
    if ((!bVar50 && *(char *)(lVar21 + 0x2678) == '\0') &&
       ((*(float *)(pauVar29[0x10] + 0x10) <= *(float *)(pauVar29[0x10] + 8) ||
        (*(float *)(pauVar29[0x10] + 0x14) <= *(float *)(pauVar29[0x10] + 0xc))))) {
      if (((char)pauVar29[7][4] < '\x01') && ((char)pauVar29[7][5] < '\x01')) {
        pauVar29[7][0xc] = 1;
      }
      else {
        pauVar29[7][0xd] = 1;
      }
    }
    if (lVar35 != 0) {
      if ((*(char *)(lVar35 + 0xcf) != '\0') || ('\0' < *(char *)(lVar35 + 0xec))) {
        pauVar29[7][0xc] = 1;
      }
      if ('\0' < *(char *)(lVar35 + 0xed)) {
        pauVar29[7][0xd] = 1;
      }
    }
  }
  if (*(float *)(lVar21 + 0xc28) <= 0.0) {
    pauVar29[7][0xc] = 1;
  }
  if (((char)pauVar29[7][0xc] < '\x01') && ((char)pauVar29[7][0xd] < '\x01')) {
    bVar40 = false;
    bVar50 = false;
    if ('\0' < (char)pauVar29[7][0xe]) goto LAB_18004f0f9;
    uVar22 = 0;
  }
  else {
    bVar50 = true;
LAB_18004f0f9:
    bVar40 = bVar50;
    uVar22 = 1;
  }
  pauVar29[6][0x14] = uVar22;
  if ('\0' < (char)pauVar29[7][0xf]) {
    pauVar29[7][0xf] = pauVar29[7][0xf] + -1;
    *(uint *)(*pauVar29 + 0x14) = *(uint *)(*pauVar29 + 0x14) | 0x30200;
  }
  uVar22 = 0;
  if ((((pauVar29[6][0xf] != '\0') || (pauVar29[6][0xc] == '\0')) || (bVar40)) &&
     ((((char)pauVar29[7][4] < '\x01' && ((char)pauVar29[7][5] < '\x01')) &&
      ((char)pauVar29[7][0xd] < '\x01')))) {
    uVar22 = 1;
  }
  pauVar29[6][0x11] = uVar22;
LAB_18004f162:
  if ((pauVar29[6][0x15] == '\0') &&
     (((*(char *)(lVar21 + 0x8b) != '\0' && (local_1a0 == (undefined1 (*) [32])0x0)) ||
      ((*(char *)(lVar21 + 0x8c) != '\0' &&
       ((int)*(char *)(lVar21 + 0x2748) == *(int *)(lVar21 + 0x1378))))))) {
    if ('\0' < (char)pauVar29[7][4]) {
      pauVar29[7][4] = pauVar29[7][4] + '\x01';
    }
    if ('\0' < (char)pauVar29[7][5]) {
      pauVar29[7][5] = pauVar29[7][5] + '\x01';
    }
    bVar50 = false;
  }
  else {
    bVar50 = pauVar29[6][0x11] == '\0';
  }
  return bVar50;
}


undefined1 FUN_18004f200(byte *param_1,uint param_2,float *param_3,ulonglong param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 uVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  byte *local_res8 [4];
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar27;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;

  lVar6 = DAT_180115c10;
  uVar27 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar3 = *(longlong *)(DAT_180115c10 + 0x13a8);
  pfVar18 = param_3;
  uVar16 = param_4;
  local_res8[0] = param_1;
  if (param_2 == 0) {
    pfVar18 = (float *)0x17a1;
    FID_conflict__assert
              (L"id != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x17a1);
  }
  if ((param_4 & 0xfffffe00) != 0) {
    pfVar18 = (float *)0x17a6;
    FID_conflict__assert
              (L"(child_flags & ~ImGuiChildFlags_SupportedMask_) == 0 && \"Illegal ImGuiChildFlags value. Did you pass ImGuiWindowFlags values instead of ImGuiChildFlags?\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x17a6);
  }
  if ((param_5 & 0x40) != 0) {
    pfVar18 = (float *)0x17a7;
    FID_conflict__assert
              (L"(window_flags & ImGuiWindowFlags_AlwaysAutoResize) == 0 && \"Cannot specify ImGuiWindowFlags_AlwaysAutoResize for BeginChild(). Use ImGuiChildFlags_AlwaysAutoResize!\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x17a7);
  }
  if ((param_4 & 0x40) != 0) {
    if ((param_4 & 0xc) != 0) {
      pfVar18 = (float *)0x17aa;
      FID_conflict__assert
                (L"(child_flags & (ImGuiChildFlags_ResizeX | ImGuiChildFlags_ResizeY)) == 0 && \"Cannot use ImGuiChildFlags_ResizeX or ImGuiChildFlags_ResizeY with ImGuiChildFlags_AlwaysAutoResize!\""
                 ,
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x17aa);
    }
    if ((param_4 & 0x30) == 0) {
      pfVar18 = (float *)0x17ab;
      FID_conflict__assert
                (L"(child_flags & (ImGuiChildFlags_AutoResizeX | ImGuiChildFlags_AutoResizeY)) != 0 && \"Must use ImGuiChildFlags_AutoResizeX or ImGuiChildFlags_AutoResizeY with ImGuiChildFlags_AlwaysAutoResize!\""
                 ,
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x17ab);
    }
  }
  lVar4 = DAT_180115c10;
  uVar15 = (uint)param_4 | 2;
  if ((param_5 >> 0x1e & 1) == 0) {
    uVar15 = (uint)param_4;
  }
  uVar17 = uVar15 | 0x100;
  if ((param_5 >> 0x1d & 1) == 0) {
    uVar17 = uVar15;
  }
  uVar15 = uVar17 & 0xfffffffb;
  if ((uVar17 & 0x10) == 0) {
    uVar15 = uVar17;
  }
  uVar17 = uVar15 & 0xfffffff7;
  if ((uVar15 & 0x20) == 0) {
    uVar17 = uVar15;
  }
  uVar15 = 0x1000041;
  if ((uVar17 & 0x70) == 0) {
    uVar15 = 0x1000001;
  }
  if (((uVar17 & 0xc) == 0) && (uVar15 = 0x1000143, (uVar17 & 0x70) == 0)) {
    uVar15 = 0x1000103;
  }
  if ((char)uVar17 < '\0') {
    local_78 = 3;
    local_74 = *(undefined8 *)(DAT_180115c10 + 0xd54);
    uStack_6c = *(undefined8 *)(DAT_180115c10 + 0xd5c);
    FUN_18006d290((int *)(DAT_180115c10 + 0x1e58),(undefined8 *)&local_78);
    if (*(int *)(lVar4 + 0x1e54) != 3) {
      uVar5 = *(undefined8 *)(lVar6 + 0xd9c);
      *(undefined8 *)(lVar4 + 0xd54) = *(undefined8 *)(lVar6 + 0xd94);
      *(undefined8 *)(lVar4 + 0xd5c) = uVar5;
    }
    FUN_180062d80(7,*(undefined4 *)(lVar6 + 0xc70),pfVar18,uVar16);
    FUN_180062d80(8,*(undefined4 *)(lVar6 + 0xc74),pfVar18,uVar16);
    FUN_180062c90(2,(float *)(lVar6 + 0xc68),pfVar18,uVar16);
    uVar17 = uVar17 | 3;
    uVar15 = uVar15 | 4;
    param_1 = local_res8[0];
  }
  else {
    uVar15 = *(uint *)(lVar3 + 0x14) & 4 | uVar15;
  }
  lVar7 = DAT_180115c10;
  lVar19 = 0x270;
  lVar21 = 0x274;
  lVar4 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if ((*(longlong *)(lVar4 + 0x1c0) == 0) && (*(longlong *)(DAT_180115c10 + 0x21e0) == 0)) {
    lVar13 = 0x270;
    lVar11 = 0x274;
  }
  else {
    lVar13 = 0x240;
    lVar11 = 0x244;
  }
  if ((uVar17 & 0x20) == 0) {
    fVar24 = *(float *)(lVar4 + lVar11) - *(float *)(lVar4 + 0x11c);
  }
  else {
    fVar24 = 0.0;
  }
  if ((uVar17 & 0x10) == 0) {
    fVar23 = *(float *)(lVar4 + lVar13) - *(float *)(lVar4 + 0x118);
  }
  else {
    fVar23 = 0.0;
  }
  fVar1 = *param_3;
  fVar2 = param_3[1];
  if (0.0 <= fVar1) {
    fVar25 = 0.0;
    fVar26 = 0.0;
    if (0.0 <= fVar2) goto LAB_18004f4a0;
  }
  if ((*(longlong *)(lVar4 + 0x1c0) != 0) || (*(longlong *)(DAT_180115c10 + 0x21e0) != 0)) {
    lVar19 = 0x240;
    lVar21 = 0x244;
  }
  fVar25 = *(float *)(lVar4 + lVar19) - *(float *)(lVar4 + 0x118);
  fVar26 = *(float *)(lVar4 + lVar21) - *(float *)(lVar4 + 0x11c);
LAB_18004f4a0:
  if ((fVar1 != 0.0) && (fVar23 = fVar1, fVar1 < 0.0)) {
    fVar23 = 4.0;
    if (4.0 <= fVar25 + fVar1) {
      fVar23 = fVar25 + fVar1;
    }
  }
  if ((fVar2 != 0.0) && (fVar24 = fVar2, fVar2 < 0.0)) {
    fVar24 = 4.0;
    if (4.0 <= fVar26 + fVar2) {
      fVar24 = fVar26 + fVar2;
    }
  }
  if (((*(byte *)(lVar6 + 0x1dd8) & 2) != 0) && ((*(byte *)(lVar6 + 0x1de0) & 1) != 0)) {
    fVar1 = *(float *)(lVar6 + 0x1df8);
    if (0.0 < fVar1) {
      fVar23 = fVar1;
    }
    uVar8 = uVar17 & 0xfffffffb;
    if (fVar1 <= 0.0) {
      uVar8 = uVar17;
    }
    uVar17 = uVar8;
    if (0.0 < *(float *)(lVar6 + 0x1dfc)) {
      uVar17 = uVar17 & 0xfffffff7;
      fVar24 = *(float *)(lVar6 + 0x1dfc);
    }
  }
  *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 2;
  *(float *)(lVar7 + 0x1df8) = fVar23;
  *(float *)(lVar7 + 0x1dfc) = fVar24;
  *(undefined4 *)(lVar7 + 0x1de0) = 1;
  if ((*(uint *)(lVar6 + 0x1dd8) >> 9 & 1) == 0) {
    *(uint *)(lVar6 + 0x1e14) = uVar17;
  }
  else {
    *(uint *)(lVar6 + 0x1e14) = *(uint *)(lVar6 + 0x1e14) | uVar17;
  }
  *(uint *)(lVar6 + 0x1dd8) = *(uint *)(lVar6 + 0x1dd8) | 0x200;
  if (param_1 == (byte *)0x0) {
    FUN_180057f40((longlong *)local_res8,(longlong *)0x0,"%s/%08X",*(char **)(lVar3 + 8),
                  CONCAT44(uVar27,param_2));
  }
  else {
    FUN_180057f40((longlong *)local_res8,(longlong *)0x0,"%s/%s_%08X",*(char **)(lVar3 + 8),
                  (longlong)param_1);
  }
  uVar27 = *(undefined4 *)(lVar6 + 0xc5c);
  if ((uVar17 & 1) == 0) {
    *(undefined4 *)(lVar6 + 0xc5c) = 0;
  }
  uVar9 = FUN_18004ca40(local_res8[0],(undefined1 *)0x0,param_5 | uVar15);
  *(undefined4 *)(lVar6 + 0xc5c) = uVar27;
  if ((char)uVar17 < '\0') {
    FUN_180062450(3);
    FUN_180062370(1);
  }
  lVar4 = *(longlong *)(lVar6 + 0x13a8);
  *(uint *)(lVar4 + 0x90) = param_2;
  if (*(short *)(lVar4 + 0xda) == 1) {
    *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)(lVar4 + 0x28);
  }
  pbVar14 = &DAT_1800e2381;
  uVar20 = (ulonglong)~param_2;
  puVar22 = &DAT_1800df710;
  bVar10 = 0x23;
  uVar16 = uVar20;
  do {
    if (((bVar10 == 0x23) && (*pbVar14 == 0x23)) && (pbVar14[1] == 0x23)) {
      uVar16 = (ulonglong)~param_2;
    }
    uVar12 = (ulonglong)bVar10;
    bVar10 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    uVar15 = (uint)(uVar16 >> 8) ^ *(uint *)(&DAT_1800df710 + (uVar16 & 0xff ^ uVar12) * 4);
    uVar16 = (ulonglong)uVar15;
  } while (bVar10 != 0);
  uVar15 = ~uVar15;
  if (*(uint *)(lVar6 + 0x141c) == uVar15) {
    FUN_180066c00(0,0,uVar20,0x1800df710);
  }
  if (((*(uint *)(lVar6 + 0x1f10) == param_2) && ((uVar17 >> 8 & 1) == 0)) &&
     ((*(short *)(lVar4 + 0x174) != 0 || (*(char *)(lVar4 + 0x17a) != '\0')))) {
    FUN_180056440(lVar4,0,uVar20);
    FUN_18005ba70(lVar4,'\0');
    FUN_180066c00(uVar15,lVar4,uVar20,(ulonglong)puVar22);
    *(undefined4 *)(lVar6 + 0x1448) = *(undefined4 *)(lVar6 + 8000);
  }
  return uVar9;
}


void FUN_18004f6e0(char param_1)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;

  lVar3 = DAT_180115c10;
  uVar2 = *(uint *)(DAT_180115c10 + 0x1d48);
  if ((uVar2 >> 10 & 1) == 0) {
    if (param_1 == '\0') goto LAB_18004f72b;
    pfVar1 = (float *)(DAT_180115c10 + 0xc28);
    *(float *)(DAT_180115c10 + 0x2510) = *pfVar1;
    *(float *)(lVar3 + 0xc28) = *pfVar1 * *(float *)(lVar3 + 0xc2c);
  }
  *(uint *)(lVar3 + 0x1d48) = uVar2 | 0x400;
LAB_18004f72b:
  iVar4 = *(int *)(lVar3 + 0x1e9c);
  if (*(int *)(lVar3 + 0x1e98) == iVar4) {
    iVar5 = *(int *)(lVar3 + 0x1e98) + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_18006d650((int *)(lVar3 + 0x1e98),iVar5);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1ea0) + (longlong)*(int *)(lVar3 + 0x1e98) * 4) =
       *(undefined4 *)(lVar3 + 0x1d48);
  *(int *)(lVar3 + 0x1e98) = *(int *)(lVar3 + 0x1e98) + 1;
  *(short *)(lVar3 + 0x2514) = *(short *)(lVar3 + 0x2514) + 1;
  return;
}


ulonglong FUN_18004f7a0(uint param_1,wchar_t *param_2,float *param_3,undefined *param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong in_RAX;
  undefined4 *puVar9;
  ulonglong extraout_RAX;
  undefined7 extraout_var;
  longlong lVar10;
  ulonglong extraout_RAX_00;
  ulonglong uVar11;
  ulonglong extraout_RAX_01;
  wchar_t *pwVar12;
  char *pcVar13;
  undefined4 uVar14;

  lVar2 = DAT_180115c10;
  if ((param_1 & 0x10) == 0) {
    uVar8 = *(uint *)(DAT_180115c10 + 0x1d88);
    lVar10 = *(longlong *)(DAT_180115c10 + 0x13a8);
    if (uVar8 == 0) {
      if (((*(char *)(DAT_180115c10 + 0xf0) == '\0') || (*(char *)(lVar10 + 0xd1) != '\0')) ||
         (((*(byte *)(DAT_180115c10 + 0x1d90) & 1) == 0 &&
          ((*(int *)(DAT_180115c10 + 0x141c) == 0 ||
           (*(longlong *)(DAT_180115c10 + 0x1440) != lVar10)))))) goto LAB_18004f8b3;
      if ((param_1 & 8) == 0) {
        FID_conflict__assert
                  (L"0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x36e1);
        in_RAX = extraout_RAX;
        goto LAB_18004f8b3;
      }
      uVar8 = FUN_180056cc0(lVar10,(undefined8 *)(DAT_180115c10 + 0x1d94));
      *(uint *)(lVar2 + 0x1d88) = uVar8;
      lVar3 = DAT_180115c10;
      if (*(uint *)(DAT_180115c10 + 0x141c) == uVar8) {
        *(uint *)(DAT_180115c10 + 0x1420) = uVar8;
      }
      if (*(uint *)(lVar3 + 0x1450) == uVar8) {
        *(undefined1 *)(lVar3 + 0x1459) = 1;
      }
      param_3 = (float *)(ulonglong)*(uint *)(lVar2 + 0x1d8c);
      param_2 = (wchar_t *)(ulonglong)uVar8;
      bVar4 = FUN_18005a9d0((float *)(lVar2 + 0x1d94),uVar8,param_3,(ulonglong)param_4);
      in_RAX = CONCAT71(extraout_var,bVar4);
      if ((bVar4) && (*(char *)(lVar2 + 0xb18) != '\0')) {
        FUN_180066c00(uVar8,lVar10,param_3,(ulonglong)param_4);
        param_2 = (wchar_t *)0x0;
        in_RAX = FUN_180056440(lVar10,0,(ulonglong)param_3);
      }
      if (*(uint *)(lVar2 + 0x141c) != uVar8) goto LAB_18004f8b3;
      *(bool *)(lVar2 + 0x1429) = bVar4;
      pwVar12 = (wchar_t *)(lVar10 + 0x108);
      uVar7 = 0;
      puVar9 = (undefined4 *)FUN_18006ce30((int *)pwVar12);
      uVar14 = *puVar9;
LAB_18004f95e:
      lVar10 = DAT_180115c10;
    }
    else {
      if (*(uint *)(DAT_180115c10 + 0x141c) != uVar8) goto LAB_18004f8b3;
      uVar7 = (uint)*(char *)(DAT_180115c10 + 0x1430);
      if (*(char *)(DAT_180115c10 + 0x1430) == -1) {
        uVar7 = 0;
      }
      in_RAX = (ulonglong)(int)uVar7;
      if ((*(char *)(in_RAX + 0xf0 + DAT_180115c10) == '\0') || (*(char *)(lVar10 + 0xd1) != '\0'))
      goto LAB_18004f8b3;
      pwVar12 = (wchar_t *)(lVar10 + 0x108);
      *(undefined1 *)(DAT_180115c10 + 0x1429) = 0;
      puVar9 = (undefined4 *)FUN_18006ce30((int *)pwVar12);
      lVar10 = DAT_180115c10;
      uVar14 = *puVar9;
      if (uVar7 < 5) goto LAB_18004f95e;
      param_3 = (float *)0x248b;
      param_2 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
      ;
      pwVar12 =
      L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))";
      FID_conflict__assert
                (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
                 ,
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x248b);
    }
    lVar3 = DAT_180115c10;
    if (*(char *)((longlong)(int)uVar7 + 0xf0 + lVar10) == '\0') {
      bVar4 = false;
      in_RAX = FUN_180066da0();
    }
    else {
      if (4 < uVar7) {
        param_3 = (float *)0x2482;
        param_2 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        pwVar12 =
        L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))";
        FID_conflict__assert
                  (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
                   ,
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2482);
      }
      fVar1 = *(float *)(lVar3 + 0x78);
      bVar4 = fVar1 * fVar1 <= *(float *)(lVar3 + 0xb9c + (longlong)(int)uVar7 * 4);
      in_RAX = FUN_180066da0();
    }
  }
  else {
    param_3 = (float *)0xffffffff;
    pcVar13 = "#SourceExtern";
    uVar8 = 0xffffffff;
    param_4 = &DAT_1800df710;
    uVar14 = 0;
    bVar5 = 0x23;
    do {
      pcVar13 = pcVar13 + 1;
      if (((bVar5 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
        uVar8 = 0xffffffff;
      }
      uVar11 = (ulonglong)bVar5;
      bVar5 = *pcVar13;
      uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_1800df710 + (uVar8 & 0xff ^ uVar11) * 4);
    } while (bVar5 != 0);
    uVar8 = ~uVar8;
    bVar4 = true;
    uVar7 = (*(char *)(DAT_180115c10 + 0xf0) != '\0') - 1;
    if (*(uint *)(DAT_180115c10 + 0x141c) == uVar8) {
      *(uint *)(DAT_180115c10 + 0x1420) = uVar8;
    }
    if (*(uint *)(lVar2 + 0x1450) == uVar8) {
      *(undefined1 *)(lVar2 + 0x1459) = 1;
    }
    param_2 = (wchar_t *)0x0;
    pwVar12 = (wchar_t *)(ulonglong)uVar8;
    in_RAX = FUN_180066c00(uVar8,0,0xffffffff,0x1800df710);
  }
  if (*(char *)(lVar2 + 0x2116) != '\0') {
    param_3 = (float *)0x3708;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    pwVar12 = L"g.DragDropWithinTarget == false";
    FID_conflict__assert
              (L"g.DragDropWithinTarget == false",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3708);
    in_RAX = extraout_RAX_00;
  }
  if (bVar4) {
    if (*(char *)(lVar2 + 0x2114) == '\0') {
      if (uVar8 == 0) {
        param_3 = (float *)0x370f;
        param_2 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        pwVar12 = L"source_id != 0";
        FID_conflict__assert
                  (L"source_id != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x370f);
      }
      FUN_180051740(pwVar12,param_2,param_3,(ulonglong)param_4);
      if ((*(byte *)(lVar2 + 0x270c) & 2) != 0) {
        pcVar13 = "";
        if ((param_1 & 0x10) != 0) {
          pcVar13 = " (EXTERN)";
        }
        FUN_180052d90(0x1800e6770,(ulonglong)uVar8,pcVar13,(ulonglong)param_4);
      }
      *(uint *)(lVar2 + 0x2134) = uVar8;
      *(undefined4 *)(lVar2 + 0x2138) = uVar14;
      *(undefined1 *)(lVar2 + 0x2114) = 1;
      *(uint *)(lVar2 + 0x2118) = param_1;
      *(uint *)(lVar2 + 0x2120) = uVar7;
      if (uVar8 == *(uint *)(lVar2 + 0x141c)) {
        *(undefined1 *)(lVar2 + 0x142a) = 1;
      }
    }
    uVar11 = (ulonglong)*(uint *)(lVar2 + 0x12f0);
    *(uint *)(lVar2 + 0x211c) = *(uint *)(lVar2 + 0x12f0);
    *(undefined1 *)(lVar2 + 0x2115) = 1;
    lVar10 = DAT_180115c10;
    if ((param_1 & 1) == 0) {
      if ((*(int *)(lVar2 + 0x2198) == 0) || ((*(uint *)(lVar2 + 0x218c) & 0x1000) == 0)) {
        uVar11 = FUN_180050200(0,0);
        cVar6 = (char)uVar11;
      }
      else {
        cVar6 = FUN_18004ca40((byte *)"##Tooltip_Hidden",(undefined1 *)0x0,0x2030347);
        uVar11 = *(ulonglong *)(lVar10 + 0x13a8);
        *(undefined1 *)(uVar11 + 0xd1) = 1;
        *(undefined1 *)(uVar11 + 0xd4) = 1;
        *(undefined1 *)(uVar11 + 0xec) = 1;
      }
      if (cVar6 == '\0') {
        FID_conflict__assert
                  (L"ret",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x3728);
        uVar11 = extraout_RAX_01;
      }
    }
    if ((param_1 & 0x12) == 0) {
      *(uint *)(lVar2 + 0x1d90) = *(uint *)(lVar2 + 0x1d90) & 0xfffffffe;
    }
    return CONCAT71((int7)(uVar11 >> 8),1);
  }
LAB_18004f8b3:
  return in_RAX & 0xffffffffffffff00;
}


ulonglong FUN_18004fbb0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong in_RAX;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;

  uVar4 = DAT_180115c10;
  if (((*(char *)(DAT_180115c10 + 0x2114) != '\0') && ((*(uint *)(DAT_180115c10 + 0x1d90) & 1) != 0)
      ) && (in_RAX = 0, *(longlong *)(DAT_180115c10 + 0x13b8) != 0)) {
    lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
    in_RAX = *(ulonglong *)(*(longlong *)(DAT_180115c10 + 0x13b8) + 0x3b0);
    if ((*(ulonglong *)(lVar1 + 0x3b0) == in_RAX) && (*(char *)(lVar1 + 0xd1) == '\0')) {
      uVar5 = *(uint *)(DAT_180115c10 + 0x1d88);
      lVar7 = 0x1db4;
      if ((*(uint *)(DAT_180115c10 + 0x1d90) & 2) == 0) {
        lVar7 = 0x1d94;
      }
      puVar8 = (undefined8 *)(lVar7 + DAT_180115c10);
      if (uVar5 == 0) {
        uVar5 = FUN_180056cc0(lVar1,puVar8);
        in_RAX = DAT_180115c10;
        if (*(uint *)(DAT_180115c10 + 0x141c) == uVar5) {
          *(uint *)(DAT_180115c10 + 0x1420) = uVar5;
        }
        if (*(uint *)(in_RAX + 0x1450) == uVar5) {
          *(undefined1 *)(in_RAX + 0x1459) = 1;
        }
      }
      if (*(uint *)(uVar4 + 0x2134) != uVar5) {
        if ((*(char *)(uVar4 + 0x2116) != '\0') || (*(char *)(uVar4 + 0x2115) != '\0')) {
          FID_conflict__assert
                    (L"g.DragDropWithinTarget == false && g.DragDropWithinSource == false",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x37a1);
        }
        uVar2 = puVar8[1];
        puVar6 = (undefined8 *)(uVar4 + 0x1dc4);
        if ((*(uint *)(uVar4 + 0x1d90) & 0x200) == 0) {
          puVar6 = (undefined8 *)(lVar1 + 600);
        }
        *(undefined8 *)(uVar4 + 0x2168) = *puVar8;
        *(undefined8 *)(uVar4 + 0x2170) = uVar2;
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        *(uint *)(uVar4 + 0x2188) = uVar5;
        *(undefined1 *)(uVar4 + 0x2116) = 1;
        *(undefined8 *)(uVar4 + 0x2178) = uVar2;
        *(undefined8 *)(uVar4 + 0x2180) = uVar3;
        return CONCAT71((int7)((ulonglong)(lVar1 + 600) >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


char FUN_18004fcf0(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  char *pcVar13;
  undefined *puVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;

  lVar5 = DAT_180115c10;
  pcVar13 = "##Tooltip_Error";
  uVar15 = 0xffffffff;
  uVar10 = 0xffffffff;
  bVar6 = 0x23;
  do {
    pcVar13 = pcVar13 + 1;
    if (((bVar6 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
      uVar10 = 0xffffffff;
    }
    uVar8 = (ulonglong)bVar6;
    bVar6 = *pcVar13;
    uVar10 = uVar10 >> 8 ^ *(uint *)(&DAT_1800df710 + (uVar10 & 0xff ^ uVar8) * 4);
  } while (bVar6 != 0);
  lVar9 = FUN_180055d60(~uVar10);
  if (((*(char *)(lVar5 + 0x104) == '\0') || (lVar9 == 0)) || (*(char *)(lVar9 + 0xcd) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_54 = *(undefined8 *)(lVar5 + 0xd64);
  uStack_4c = *(undefined8 *)(lVar5 + 0xd6c);
  local_58 = 4;
  fVar1 = *(float *)(lVar5 + 0xd64);
  fVar16 = (float)*(undefined8 *)(lVar5 + 0xd68);
  fVar17 = (float)((ulonglong)*(undefined8 *)(lVar5 + 0xd68) >> 0x20);
  fVar2 = *(float *)(lVar5 + 0xd70);
  FUN_18006d290((int *)(lVar5 + 0x1e58),(undefined8 *)&local_58);
  if (*(int *)(lVar5 + 0x1e54) != 4) {
    *(float *)(lVar5 + 0xd64) = (1.0 - fVar1) * 0.15 + fVar1;
    *(ulonglong *)(lVar5 + 0xd68) =
         CONCAT44((0.0 - fVar17) * 0.15 + fVar17,(0.0 - fVar16) * 0.15 + fVar16);
    *(float *)(lVar5 + 0xd70) = (1.0 - fVar2) * 0.15 + fVar2;
  }
  lVar9 = DAT_180115c10;
  if (bVar4) {
    *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 1;
    uVar11 = *(undefined8 *)(lVar5 + 0x26d8);
    *(undefined8 *)(lVar9 + 0x1df0) = 0;
    *(undefined8 *)(lVar9 + 0x1de8) = uVar11;
    *(undefined4 *)(lVar9 + 0x1ddc) = 1;
  }
  pwVar12 = (wchar_t *)0x0;
  puVar14 = (undefined *)0x200016f;
  cVar7 = FUN_18004ca40((byte *)"##Tooltip_Error",(undefined1 *)0x0,0x200016f);
  uVar11 = 1;
  FUN_180062370(1);
  if (cVar7 == '\0') {
    FUN_180053370(uVar11,pwVar12,puVar14,uVar15);
  }
  else if (*(short *)(*(longlong *)(lVar5 + 0x13a8) + 0xda) == 1) {
    FUN_18009cdf0((byte *)"MESSAGE FROM DEAR IMGUI");
    FUN_1800503e0(*(longlong *)(lVar5 + 0x13a8));
    FUN_180050570(*(longlong *)(lVar5 + 0x13a8));
    uVar3 = *(undefined4 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x28);
    *(undefined4 *)(lVar5 + 0x26dc) = *(undefined4 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x2c);
    *(undefined4 *)(lVar5 + 0x26d8) = uVar3;
  }
  return cVar7;
}


void FUN_18004ff00(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;

  lVar3 = DAT_180115c10;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  FUN_18006dea0((int *)(DAT_180115c10 + 0x1ea8),*(int *)(DAT_180115c10 + 0x1ea8) + 1);
  if (*(int *)(lVar3 + 0x1ea8) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  lVar2 = *(longlong *)(lVar3 + 0x1eb0);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1ea8) * 0x38;
  *(undefined4 *)(lVar4 + -0x38 + lVar2) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar4 + -0x34 + lVar2) = *(undefined8 *)(lVar1 + 0x118);
  *(undefined8 *)(lVar4 + -0x24 + lVar2) = *(undefined8 *)(lVar1 + 0x120);
  *(undefined8 *)(lVar4 + -0x2c + lVar2) = *(undefined8 *)(lVar1 + 0x130);
  *(undefined4 *)(lVar4 + -0x1c + lVar2) = *(undefined4 *)(lVar1 + 0x15c);
  *(undefined4 *)(lVar4 + -0x18 + lVar2) = *(undefined4 *)(lVar1 + 0x164);
  *(undefined8 *)(lVar4 + -0x14 + lVar2) = *(undefined8 *)(lVar1 + 0x140);
  *(undefined4 *)(lVar4 + -0xc + lVar2) = *(undefined4 *)(lVar1 + 0x150);
  *(undefined4 *)(lVar4 + -8 + lVar2) = *(undefined4 *)(lVar3 + 0x1420);
  *(bool *)(lVar4 + -3 + lVar2) = *(int *)(lVar3 + 0x1404) != 0;
  *(undefined1 *)(lVar4 + -2 + lVar2) = *(undefined1 *)(lVar1 + 0x158);
  *(undefined1 *)(lVar4 + -4 + lVar2) = *(undefined1 *)(lVar3 + 0x1459);
  *(undefined1 *)(lVar4 + -1 + lVar2) = 1;
  *(undefined8 *)(lVar1 + 0x140) = 0;
  fVar5 = (*(float *)(lVar1 + 0x118) - *(float *)(lVar1 + 0x28)) - *(float *)(lVar1 + 0x160);
  *(float *)(lVar1 + 0x164) = fVar5;
  *(float *)(lVar1 + 0x15c) = fVar5;
  *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x118);
  if (*(char *)(lVar3 + 0x2678) != '\0') {
    *(undefined4 *)(lVar3 + 0x26b0) = 0xff7fffff;
  }
  return;
}


ulonglong FUN_180050060(byte *param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;

  piVar1 = (int *)(DAT_180115c10 + 0x1ec8);
  if (*(int *)(DAT_180115c10 + 0x1eb8) <= *piVar1) {
    *(undefined4 *)(DAT_180115c10 + 0x1dd8) = 0;
    return (ulonglong)(uint3)((uint)*piVar1 >> 8) << 8;
  }
  plVar2 = *(longlong **)(DAT_180115c10 + 0x13a8);
  if ((int)plVar2[0x21] < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  uVar3 = FUN_180058260(param_1,0,*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
  if (*(uint *)(*plVar2 + 0x1400) == uVar3) {
    FUN_180052900(uVar3,0xb,(char *)param_1,0);
  }
  uVar4 = FUN_180050130(uVar3,param_2 | 0x141);
  return uVar4;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_180050130(uint param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  uint *puVar3;
  undefined1 auStack_48 [32];
  byte local_28 [24];
  uint *local_10;

  lVar1 = DAT_180115c10;
  puVar3 = (uint *)(DAT_180112300 ^ (ulonglong)auStack_48);
  if ((*(int *)(DAT_180115c10 + 0x1eb8) <= *(int *)(DAT_180115c10 + 0x1ec8)) ||
     (local_10 = puVar3,
     puVar3 = (uint *)FUN_18004b730((int *)(DAT_180115c10 + 0x1eb8),*(int *)(DAT_180115c10 + 0x1ec8)
                                   ), *puVar3 != param_1)) {
    *(undefined4 *)(lVar1 + 0x1dd8) = 0;
    return (ulonglong)puVar3 & 0xffffffffffffff00;
  }
  if ((param_2 >> 0x1c & 1) != 0) {
    FID_conflict__assert
              (L"(extra_window_flags & ImGuiWindowFlags_ChildMenu) == 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2dd9);
  }
  FUN_180057ec0(local_28,0x14,0x1800e59d0,(ulonglong)param_1);
  bVar2 = FUN_18004ca40(local_28,(undefined1 *)0x0,param_2 | 0x4000000);
  if (bVar2 == 0) {
    FUN_180054790();
  }
  return (ulonglong)bVar2;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_180050200(uint param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined7 extraout_var;
  char *pcVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_68 [32];
  byte local_48 [32];
  ulonglong local_28;

  lVar6 = DAT_180115c10;
  local_28 = DAT_180112300 ^ (ulonglong)auStack_68;
  if ((*(char *)(DAT_180115c10 + 0x2115) == '\0') && (*(char *)(DAT_180115c10 + 0x2116) == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if ((*(uint *)(DAT_180115c10 + 0x1dd8) & 1) == 0) {
      fVar1 = *(float *)(DAT_180115c10 + 0xd14);
      fVar2 = *(float *)(DAT_180115c10 + 0xe8);
      fVar3 = *(float *)(DAT_180115c10 + 0xec);
      if (*(int *)(DAT_180115c10 + 0x100) == 1) {
        uVar10 = 0x3f000000;
        fVar8 = 0.0;
        uVar11 = 0x3f800000;
        fVar9 = -20.0;
      }
      else {
        fVar8 = 16.0;
        uVar10 = 0;
        fVar9 = 10.0;
        uVar11 = 0;
      }
      *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 1;
      *(undefined4 *)(lVar6 + 0x1ddc) = 1;
      *(undefined4 *)(lVar6 + 0x1df0) = uVar10;
      *(undefined4 *)(lVar6 + 0x1df4) = uVar11;
      *(float *)(lVar6 + 0x1de8) = fVar8 * fVar1 + fVar2;
      *(float *)(lVar6 + 0x1dec) = fVar9 * fVar1 + fVar3;
    }
    lVar4 = DAT_180115c10;
    fVar1 = *(float *)(lVar6 + 0xd70);
    param_1 = 2;
    *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 0x40;
    *(float *)(lVar4 + 0x1e40) = fVar1 * 0.6;
  }
  pcVar7 = "##Tooltip_%02d";
  if (bVar5) {
    pcVar7 = "##Tooltip_DragDrop_%02d";
  }
  FUN_180057ec0(local_48,0x20,(longlong)pcVar7,(ulonglong)(uint)(int)*(short *)(lVar6 + 0x2516));
  if ((((param_1 & 2) != 0) && (lVar4 = *(longlong *)(lVar6 + 0x2518), lVar4 != 0)) &&
     (*(char *)(lVar4 + 0xcc) != '\0')) {
    *(undefined1 *)(lVar4 + 0xd1) = 1;
    *(undefined1 *)(lVar4 + 0xd4) = 1;
    *(undefined1 *)(lVar4 + 0xec) = 1;
    *(short *)(lVar6 + 0x2516) = *(short *)(lVar6 + 0x2516) + 1;
    FUN_180057ec0(local_48,0x20,(longlong)pcVar7,(ulonglong)(uint)(int)*(short *)(lVar6 + 0x2516));
  }
  FUN_18004ca40(local_48,(undefined1 *)0x0,param_2 | 0x2030347);
  return CONCAT71(extraout_var,1);
}


void FUN_1800503e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  lVar1 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1348) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x1350) + -8 + (longlong)*(int *)(lVar1 + 0x1348) * 8)
  ;
  if ((lVar2 != param_1) && (*(longlong *)(lVar2 + 0x3b0) != param_1)) {
    for (uVar4 = *(int *)(lVar1 + 0x1348) - 2; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
      if (*(int *)(lVar1 + 0x1348) <= (int)uVar4) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar2 = *(longlong *)(lVar1 + 0x1350);
      if (*(longlong *)(lVar2 + (ulonglong)uVar4 * 8) == param_1) {
        iVar5 = uVar4 + 1;
        if ((iVar5 < 0) || (iVar3 = *(int *)(lVar1 + 0x1348), iVar3 <= iVar5)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
          iVar3 = *(int *)(lVar1 + 0x1348);
          lVar2 = *(longlong *)(lVar1 + 0x1350);
        }
        if (iVar3 <= (int)uVar4) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        FUN_1800d1c20((undefined8 *)(*(longlong *)(lVar1 + 0x1350) + (ulonglong)uVar4 * 8),
                      (undefined8 *)(lVar2 + (longlong)iVar5 * 8),
                      (longlong)(int)(*(int *)(lVar1 + 0x1348) + ~uVar4) << 3);
        iVar5 = *(int *)(lVar1 + 0x1348);
        if ((iVar5 + -1 < 0) || (iVar5 <= iVar5 + -1)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        *(longlong *)(*(longlong *)(lVar1 + 0x1350) + -8 + (longlong)iVar5 * 8) = param_1;
        return;
      }
    }
  }
  return;
}


void FUN_180050570(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  short sVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;

  lVar6 = DAT_180115c10;
  if (param_1 != *(longlong *)(param_1 + 0x3b0)) {
    FID_conflict__assert
              (L"window == window->RootWindow",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2f7a);
  }
  sVar3 = *(short *)(param_1 + 0xe2);
  uVar7 = (longlong)sVar3 & 0xffffffff;
  uVar10 = (uint)sVar3;
  if ((sVar3 < 0) || (*(int *)(lVar6 + 0x1358) <= (int)uVar10)) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  if (*(longlong *)(*(longlong *)(lVar6 + 0x1360) + (longlong)sVar3 * 8) != param_1) {
    FID_conflict__assert
              (L"g.WindowsFocusOrder[cur_order] == window",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2f7d);
  }
  if (*(int *)(lVar6 + 0x1358) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  lVar2 = (longlong)*(int *)(lVar6 + 0x1358) * 8 + -8;
  if (*(longlong *)(*(longlong *)(lVar6 + 0x1360) + lVar2) != param_1) {
    iVar9 = *(int *)(lVar6 + 0x1358) + -1;
    while ((int)uVar10 < iVar9) {
      iVar5 = (int)uVar7;
      uVar10 = iVar5 + 1;
      if (((int)uVar10 < 0) || (*(int *)(lVar6 + 0x1358) <= (int)uVar10)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar8 = (longlong)iVar5;
      uVar4 = *(undefined8 *)(*(longlong *)(lVar6 + 0x1360) + 8 + lVar8 * 8);
      if ((iVar5 < 0) || (*(int *)(lVar6 + 0x1358) <= iVar5)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      *(undefined8 *)(*(longlong *)(lVar6 + 0x1360) + lVar8 * 8) = uVar4;
      if ((iVar5 < 0) || (*(int *)(lVar6 + 0x1358) <= iVar5)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      psVar1 = (short *)(*(longlong *)(*(longlong *)(lVar6 + 0x1360) + lVar8 * 8) + 0xe2);
      *psVar1 = *psVar1 + -1;
      if ((iVar5 < 0) || (*(int *)(lVar6 + 0x1358) <= iVar5)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      if (*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x1360) + lVar8 * 8) + 0xe2) != iVar5) {
        FID_conflict__assert
                  (L"g.WindowsFocusOrder[n]->FocusOrder == n",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2f86);
      }
      uVar7 = (ulonglong)uVar10;
    }
    if ((iVar9 < 0) || (*(int *)(lVar6 + 0x1358) <= iVar9)) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    *(longlong *)(*(longlong *)(lVar6 + 0x1360) + lVar2) = param_1;
    *(short *)(param_1 + 0xe2) = (short)iVar9;
  }
  return;
}


ulonglong * FUN_1800507c0(ulonglong *param_1,ulonglong param_2,float param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong local_res8;

  fVar7 = (float)param_2;
  fVar8 = (float)(param_2 >> 0x20);
  if (fVar7 < 0.0) {
LAB_1800507f8:
    lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
    if ((*(longlong *)(lVar1 + 0x1c0) == 0) && (*(longlong *)(DAT_180115c10 + 0x21e0) == 0)) {
      lVar5 = 0x270;
      lVar6 = 0x274;
    }
    else {
      lVar5 = 0x240;
      lVar6 = 0x244;
    }
    fVar10 = *(float *)(lVar5 + lVar1) - *(float *)(lVar1 + 0x118);
    fVar9 = *(float *)(lVar6 + lVar1) - *(float *)(lVar1 + 0x11c);
  }
  else {
    fVar10 = 0.0;
    fVar9 = 0.0;
    if (fVar8 < 0.0) goto LAB_1800507f8;
  }
  if (fVar7 == 0.0) {
LAB_180050871:
    local_res8 = CONCAT44(fVar8,param_3);
  }
  else {
    local_res8 = param_2;
    if (fVar7 < 0.0) {
      param_3 = 4.0;
      if (4.0 <= fVar10 + fVar7) {
        param_3 = fVar10 + fVar7;
      }
      goto LAB_180050871;
    }
  }
  if (fVar8 == 0.0) {
    auVar3._4_8_ = local_res8 & 0xffffffff;
    auVar3._0_4_ = param_4;
    uVar2 = auVar3._0_8_;
  }
  else {
    if (0.0 <= fVar8) goto LAB_1800508b0;
    fVar7 = 4.0;
    if (4.0 <= fVar9 + fVar8) {
      fVar7 = fVar9 + fVar8;
    }
    auVar4._4_8_ = local_res8 & 0xffffffff;
    auVar4._0_4_ = fVar7;
    uVar2 = auVar4._0_8_;
  }
  local_res8 = CONCAT44((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
LAB_1800508b0:
  *param_1 = local_res8;
  return param_1;
}


void FUN_1800508d0(void)

{
  return;
}


float * FUN_180050950(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x98);
  fVar4 = *(float *)(param_2 + 0xa8);
  fVar6 = *(float *)(param_2 + 0x84);
  fVar1 = *(float *)(param_2 + 0x74);
  fVar8 = *(float *)(param_2 + 0x7c);
  if (fVar4 < 3.4028235e+38) {
    fVar2 = *(float *)(param_2 + 0xb8);
    fVar7 = *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x78);
    fVar3 = *(float *)(param_2 + 0xb0);
    if (0.0 < fVar2) {
      if (fVar2 + 0.0 < fVar4) {
        fVar5 = (*(float *)(param_2 + 0xa0) + *(float *)(param_2 + 0x38)) - fVar7;
        if (fVar5 - fVar2 <= fVar4) {
          fVar4 = (fVar5 - fVar4) * fVar3 + fVar4;
        }
      }
      else {
        fVar4 = (fVar4 - 0.0) * fVar3 + 0.0;
      }
    }
    *param_1 = fVar4 - (*(float *)(param_2 + 0x38) - fVar7) * fVar3;
  }
  fVar4 = *param_1;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = (float)(int)(fVar4 + 0.5);
  *param_1 = fVar4;
  if ((*(char *)(param_2 + 0xcf) == '\0') && (*(char *)(param_2 + 0xd1) == '\0')) {
    if (*(float *)(param_2 + 0xa0) <= fVar4) {
      fVar4 = *(float *)(param_2 + 0xa0);
    }
    *param_1 = fVar4;
  }
  fVar4 = *(float *)(param_2 + 0xac);
  if (fVar4 < 3.4028235e+38) {
    fVar2 = *(float *)(param_2 + 0xbc);
    fVar3 = *(float *)(param_2 + 0xb4);
    fVar8 = fVar6 + fVar1 + fVar8;
    if (0.0 < fVar2) {
      if (fVar2 + 0.0 < fVar4) {
        fVar6 = (*(float *)(param_2 + 0xa4) + *(float *)(param_2 + 0x3c)) - fVar8;
        if (fVar6 - fVar2 <= fVar4) {
          fVar4 = (fVar6 - fVar4) * fVar3 + fVar4;
        }
      }
      else {
        fVar4 = (fVar4 - 0.0) * fVar3 + 0.0;
      }
    }
    param_1[1] = fVar4 - (*(float *)(param_2 + 0x3c) - fVar8) * fVar3;
  }
  fVar4 = param_1[1];
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = (float)(int)(fVar4 + 0.5);
  param_1[1] = fVar4;
  if ((*(char *)(param_2 + 0xcf) == '\0') && (*(char *)(param_2 + 0xd1) == '\0')) {
    if (*(float *)(param_2 + 0xa4) <= fVar4) {
      fVar4 = *(float *)(param_2 + 0xa4);
    }
    param_1[1] = fVar4;
  }
  return param_1;
}


undefined8 *
FUN_180050b60(undefined8 *param_1,byte *param_2,byte *param_3,char param_4,float param_5)

{
  byte *pbVar1;
  float local_res10;
  undefined4 uStackX_14;

  if (param_4 == '\0') {
  }
  else {
    pbVar1 = (byte *)0xffffffffffffffff;
    if (param_3 != (byte *)0x0) {
      pbVar1 = param_3;
    }
    param_3 = param_2;
    if (param_2 < pbVar1) {
      while (*param_3 != 0) {
        if (((*param_3 == 0x23) && (param_3[1] == 0x23)) ||
           (param_3 = param_3 + 1, pbVar1 <= param_3)) break;
      }
    }
  }
  if (param_2 == param_3) {
    *(float *)((longlong)param_1 + 4) = *(float *)(DAT_180115c10 + 0x10c0);
    *(undefined4 *)param_1 = 0;
    return param_1;
  }
  FUN_180071ff0(*(int **)(DAT_180115c10 + 0x10b8),&local_res10,*(float *)(DAT_180115c10 + 0x10c0),
                3.4028235e+38,param_5,param_2,param_3,(undefined8 *)0x0);
  *param_1 = CONCAT44(uStackX_14,(float)(int)(local_res10 + 0.99999));
  return param_1;
}


int FUN_180050c40(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;

  if (param_2 == 0.0) {
    return 1;
  }
  if (param_1 < param_2) {
    if (0.0 < param_4) {
      iVar1 = -1;
      if (param_3 <= param_1) {
        iVar2 = (int)((param_1 - param_3) / param_4);
      }
      else {
        iVar2 = -1;
      }
      if (param_3 <= param_2) {
        iVar1 = (int)((param_2 - param_3) / param_4);
      }
      return iVar1 - iVar2;
    }
    if ((param_1 < param_3) && (param_3 <= param_2)) {
      return 1;
    }
  }
  return 0;
}


float * FUN_180050ca0(float *param_1,longlong param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;

  lVar3 = DAT_180115c10;
  uVar4 = *(uint *)(param_2 + 0x14);
  fVar10 = *(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x58);
  fVar12 = *(float *)(param_2 + 0x5c) + *(float *)(param_2 + 0x5c);
  fVar9 = (*(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x70)) - *(float *)(param_2 + 0xc0);
  fVar11 = (*(float *)(param_2 + 0x7c) + *(float *)(param_2 + 0x74)) - *(float *)(param_2 + 0xc4);
  fVar8 = fVar10 + *param_3 + fVar9;
  fVar7 = fVar12 + param_3[1] + fVar11;
  if ((uVar4 >> 0x19 & 1) == 0) {
    FUN_180051060(&local_res10,param_2);
    if ((uVar4 & 0x5000000) == 0x1000000) {
      fVar5 = 3.4028235e+38;
      fVar6 = 3.4028235e+38;
    }
    else {
      fVar5 = *(float *)(lVar3 + 0xd0c);
      fVar6 = *(float *)(lVar3 + 0xd10);
      if (*(int *)(lVar3 + 0x1ee8) < 1) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      fVar6 = *(float *)(**(longlong **)(lVar3 + 0x1ef0) + 0x24) - (fVar6 + fVar6);
      fVar5 = *(float *)(**(longlong **)(lVar3 + 0x1ef0) + 0x20) - (fVar5 + fVar5);
    }
    if ((local_res14 <= fVar7) && (local_res14 = fVar6, fVar7 <= fVar6)) {
      local_res14 = fVar7;
    }
    if ((local_res10 <= fVar8) && (local_res10 = fVar5, fVar8 <= fVar5)) {
      local_res10 = fVar8;
    }
    uVar4 = *(uint *)(param_2 + 0x18) & 8;
    if ((*(uint *)(param_2 + 0x18) & 4) == 0) {
      if (uVar4 != 0) {
        local_res10 = *(float *)(param_2 + 0x38);
      }
    }
    else if (uVar4 == 0) {
      local_res14 = *(float *)(param_2 + 0x3c);
    }
    fVar8 = local_res14;
    fVar7 = local_res10;
    FUN_180051170(&local_res18,param_2,&local_res10);
    if (((((local_res18 - fVar10) - fVar9 < *param_3) && ((*(uint *)(param_2 + 0x14) & 8) == 0)) &&
        ((*(uint *)(param_2 + 0x14) >> 0xb & 1) != 0)) ||
       ((*(uint *)(param_2 + 0x14) & 0x8000) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((((local_res1c - fVar12) - fVar11 < param_3[1]) && ((*(uint *)(param_2 + 0x14) & 8) == 0))
       || ((*(uint *)(param_2 + 0x14) >> 0xe & 1) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar1) {
      fVar8 = fVar8 + *(float *)(lVar3 + 0xca0);
    }
    if (bVar2) {
      fVar7 = fVar7 + *(float *)(lVar3 + 0xca0);
    }
    *(ulonglong *)param_1 = CONCAT44(fVar8,fVar7);
  }
  else {
    *param_1 = fVar8;
    param_1[1] = fVar7;
  }
  return param_1;
}


void FUN_180050f50(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;

  if ((((*(char *)(param_1 + 0xcf) != '\0') && (*(char *)(param_1 + 0xe4) < '\x01')) &&
      (*(char *)(param_1 + 0xe5) < '\x01')) ||
     (((*(char *)(param_1 + 0xd4) != '\0' && (*(char *)(param_1 + 0xed) == '\0')) &&
      ('\0' < *(char *)(param_1 + 0xec))))) {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x48);
    return;
  }
  fVar1 = *(float *)(param_1 + 0x50);
  if (fVar1 == 0.0) {
    fVar1 = (float)(int)(*(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x128));
  }
  *param_2 = fVar1;
  fVar1 = *(float *)(param_1 + 0x54);
  if (fVar1 == 0.0) {
    fVar1 = (float)(int)(*(float *)(param_1 + 0x134) - *(float *)(param_1 + 300));
  }
  param_2[1] = fVar1;
  fVar1 = *(float *)(param_1 + 0x50);
  if (fVar1 == 0.0) {
    fVar1 = *(float *)(param_1 + 0x130);
    if (*(float *)(param_1 + 0x130) <= *(float *)(param_1 + 0x138)) {
      fVar1 = *(float *)(param_1 + 0x138);
    }
    fVar1 = (float)(int)(fVar1 - *(float *)(param_1 + 0x128));
  }
  *param_3 = fVar1;
  fVar1 = *(float *)(param_1 + 0x54);
  if (fVar1 == 0.0) {
    fVar1 = *(float *)(param_1 + 0x134);
    if (*(float *)(param_1 + 0x134) <= *(float *)(param_1 + 0x13c)) {
      fVar1 = *(float *)(param_1 + 0x13c);
    }
    fVar1 = (float)(int)(fVar1 - *(float *)(param_1 + 300));
  }
  param_3[1] = fVar1;
  return;
}


undefined4 * FUN_180051060(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  lVar2 = DAT_180115c10;
  if ((*(uint *)(param_2 + 0x14) & 0x5000000) == 0x1000000) {
    uVar1 = *(uint *)(param_2 + 0x18);
    fVar6 = 4.0;
    if ((uVar1 & 4) == 0) {
      uVar3 = 0x40800000;
    }
    else {
      uVar3 = *(undefined4 *)(DAT_180115c10 + 0xc44);
    }
    *param_1 = uVar3;
    if ((uVar1 & 8) != 0) {
      fVar6 = *(float *)(lVar2 + 0xc48);
    }
  }
  else if ((*(uint *)(param_2 + 0x14) & 0x40) == 0) {
    fVar6 = *(float *)(DAT_180115c10 + 0xc48);
    *param_1 = *(undefined4 *)(DAT_180115c10 + 0xc44);
  }
  else {
    fVar6 = 4.0;
    *param_1 = 0x40800000;
  }
  fVar4 = *(float *)(lVar2 + 0xc38) - 1.0;
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  fVar5 = *(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x68) + fVar5;
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
  }
  param_1[1] = fVar6;
  return param_1;
}


float * FUN_180051110(float *param_1,longlong param_2)

{
  float local_res8 [2];
  float local_res18 [4];

  local_res8[0] = 0.0;
  local_res8[1] = 0.0;
  FUN_180050f50(param_2,local_res18,local_res8);
  FUN_180050ca0(local_res18,param_2,local_res8);
  FUN_180051170(param_1,param_2,local_res18);
  return param_1;
}


float * FUN_180051170(float *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;

  fVar2 = *param_3;
  fVar4 = param_3[1];
  if ((*(byte *)(DAT_180115c10 + 0x1dd8) & 0x10) != 0) {
    local_20 = *(float *)(DAT_180115c10 + 0x1e1c);
    local_1c = *(float *)(DAT_180115c10 + 0x1e20);
    if ((local_20 < 0.0) || (fVar3 = *(float *)(DAT_180115c10 + 0x1e24), fVar3 < 0.0)) {
      local_20 = *(float *)(param_2 + 0x38);
    }
    else if ((local_20 <= fVar2) && (local_20 = fVar3, fVar2 <= fVar3)) {
      local_20 = fVar2;
    }
    if ((local_1c < 0.0) || (fVar2 = *(float *)(DAT_180115c10 + 0x1e28), fVar2 < 0.0)) {
      local_1c = *(float *)(param_2 + 0x3c);
    }
    else if ((local_1c <= fVar4) && (local_1c = fVar2, fVar4 <= fVar2)) {
      local_1c = fVar4;
    }
    if (*(code **)(DAT_180115c10 + 0x1e30) != (code *)0x0) {
      local_30 = *(undefined4 *)(param_2 + 0x28);
      local_2c = *(undefined4 *)(param_2 + 0x2c);
      local_38 = *(undefined8 *)(DAT_180115c10 + 0x1e38);
      local_28 = *(undefined4 *)(param_2 + 0x38);
      local_24 = *(undefined4 *)(param_2 + 0x3c);
      (**(code **)(DAT_180115c10 + 0x1e30))(&local_38);
    }
    fVar2 = (float)(int)local_20;
    fVar4 = (float)(int)local_1c;
  }
  if ((*(uint *)(param_2 + 0x14) & 0x5000000) == 0x1000000) {
    fVar3 = 4.0;
    if ((*(uint *)(param_2 + 0x18) & 4) == 0) {
      fVar1 = 4.0;
    }
    else {
      fVar1 = *(float *)(DAT_180115c10 + 0xc44);
    }
    if ((*(uint *)(param_2 + 0x18) & 8) != 0) {
      fVar3 = *(float *)(DAT_180115c10 + 0xc48);
    }
  }
  else if ((*(uint *)(param_2 + 0x14) & 0x40) == 0) {
    fVar1 = *(float *)(DAT_180115c10 + 0xc44);
    fVar3 = *(float *)(DAT_180115c10 + 0xc48);
  }
  else {
    fVar1 = 4.0;
    fVar3 = 4.0;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(DAT_180115c10 + 0xc38) - 1.0;
  *param_1 = fVar2;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar2 = *(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x68) + fVar2;
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  param_1[1] = fVar4;
  return param_1;
}


ulonglong FUN_180051340(float *param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;

  fVar4 = (float)param_2;
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar2 = 0.0;
  uVar3 = 0;
  if (0.0 <= fVar4) {
    lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
    if (fVar4 == 0.0) {
      fVar2 = *(float *)(lVar1 + 0x240) - *param_1;
      if (fVar2 <= 1.0) {
        fVar2 = 1.0;
      }
      return (ulonglong)(uint)fVar2;
    }
    if (0.0 < fVar4) {
      fVar2 = ((*(float *)(lVar1 + 0x28) - *(float *)(lVar1 + 0x98)) + fVar4) - *param_1;
      if (fVar2 <= 1.0) {
        fVar2 = 1.0;
      }
      return (ulonglong)(uint)fVar2;
    }
    fVar2 = fVar4 - *param_1;
    uVar3 = uVar5;
    if (fVar2 <= 1.0) {
      fVar2 = 1.0;
    }
  }
  return CONCAT44(uVar3,fVar2);
}


int FUN_1800513b0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;

  uVar1 = *(uint *)(*param_2 + 0x14);
  uVar2 = *(uint *)(*param_1 + 0x14);
  iVar3 = (uVar2 & 0x4000000) - (uVar1 & 0x4000000);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = (uVar2 & 0x2000000) - (uVar1 & 0x2000000);
  if (iVar3 == 0) {
    iVar3 = (int)*(short *)(*param_1 + 0xde) - (int)*(short *)(*param_2 + 0xde);
  }
  return iVar3;
}


void FUN_180051400(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = param_1[4];
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      if ((iVar2 < 0) || (iVar1 <= iVar2)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 6) + 8 + (longlong)iVar2 * 0x10);
      if ((iVar1 != -1) && ((iVar1 < 0 || (*param_1 <= iVar1)))) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      iVar1 = param_1[4];
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 2));
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


void FUN_1800514c0(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;

  iVar3 = param_1[4];
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      if ((iVar4 < 0) || (iVar3 <= iVar4)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 6) + 8 + (longlong)iVar4 * 0x10);
      if (iVar3 != -1) {
        if ((iVar3 < 0) || (*param_1 <= iVar3)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        lVar1 = *(longlong *)(param_1 + 2);
        lVar2 = *(longlong *)((longlong)iVar3 * 0xa8 + 0xa0 + lVar1);
        if (lVar2 != 0) {
          FUN_18005b5c0(lVar2);
        }
        lVar1 = *(longlong *)((longlong)iVar3 * 0xa8 + 0x10 + lVar1);
        if (lVar1 != 0) {
          FUN_18005b5c0(lVar1);
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = param_1[4];
    } while (iVar4 < iVar3);
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 2));
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


void FUN_1800515b0(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;

  iVar3 = param_1[4];
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      if ((iVar4 < 0) || (iVar3 <= iVar4)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 6) + 8 + (longlong)iVar4 * 0x10);
      if (iVar3 != -1) {
        if ((iVar3 < 0) || (*param_1 <= iVar3)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        lVar5 = (longlong)iVar3 * 0x250;
        lVar1 = *(longlong *)(param_1 + 2);
        FUN_18005b5c0(*(longlong *)(lVar5 + 8 + lVar1));
        lVar2 = *(longlong *)(lVar5 + 0x1e8 + lVar1);
        if (lVar2 != 0) {
          FUN_18005b5c0(lVar2);
        }
        lVar2 = *(longlong *)(lVar5 + 0x1c8 + lVar1);
        if (lVar2 != 0) {
          FUN_18005b5c0(lVar2);
        }
        lVar1 = *(longlong *)(lVar5 + 0x198 + lVar1);
        if (lVar1 != 0) {
          FUN_18005b5c0(lVar1);
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = param_1[4];
    } while (iVar4 < iVar3);
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 2));
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


void FUN_1800516c0(undefined2 *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;

  puVar2 = param_1;
  for (lVar1 = 0x9b; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0xffff;
    puVar2 = puVar2 + 1;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    *(undefined8 *)(param_1 + 0x9c) = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined8 *)(param_1 + 0xa4) = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


void FUN_180051730(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  FUN_180066c00(0,0,param_3,param_4);
  return;
}


void FUN_180051740(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  if ((*(char *)(DAT_180115c10 + 0x2114) != '\0') && ((*(byte *)(DAT_180115c10 + 0x270c) & 2) != 0))
  {
    FUN_180052d90(0x1800e66b8,param_2,param_3,param_4);
  }
  *(undefined1 *)(lVar1 + 0x2114) = 0;
  *(undefined8 *)(lVar1 + 0x2134) = 0;
  *(undefined8 *)(lVar1 + 0x2128) = 0;
  *(undefined4 *)(lVar1 + 0x2130) = 0;
  *(undefined8 *)(lVar1 + 0x2140) = 0;
  *(undefined8 *)(lVar1 + 0x2148) = 0;
  *(undefined8 *)(lVar1 + 0x2150) = 0;
  *(undefined8 *)(lVar1 + 0x2158) = 0;
  *(undefined2 *)(lVar1 + 0x2160) = 0;
  *(undefined4 *)(lVar1 + 0x213c) = 0xffffffff;
  *(undefined1 *)(lVar1 + 0x2162) = 0;
  *(undefined4 *)(lVar1 + 0x218c) = 0;
  *(undefined8 *)(lVar1 + 0x2194) = 0;
  *(undefined4 *)(lVar1 + 0x2190) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x219c) = 0xffffffff;
  if (*(longlong *)(lVar1 + 0x21b0) != 0) {
    *(undefined8 *)(lVar1 + 0x21a8) = 0;
    FUN_18005b5c0(*(longlong *)(lVar1 + 0x21b0));
    *(undefined8 *)(lVar1 + 0x21b0) = 0;
  }
  *(undefined8 *)(lVar1 + 0x21b8) = 0;
  *(undefined8 *)(lVar1 + 0x21c0) = 0;
  return;
}


void FUN_180051810(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;

  lVar2 = *(longlong *)(param_1 + 0xd8);
  uVar4 = 0x200;
  do {
    if (6 < uVar4 - 0x290) {
      uVar3 = (ulonglong)uVar4;
      *(undefined1 *)(lVar2 + -0x1ef4 + uVar3 * 0x10) = 0;
      *(undefined4 *)(lVar2 + -0x1ef0 + uVar3 * 0x10) = 0xbf800000;
      *(undefined4 *)(lVar2 + -0x1eec + uVar3 * 0x10) = 0xbf800000;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x29b);
  *(undefined8 *)(param_1 + 0xfc) = 0;
  iVar1 = *(int *)(param_1 + 0xbb4);
  if (iVar1 < 0) {
    iVar1 = iVar1 / 2 + iVar1;
    iVar5 = 0;
    if (0 < iVar1) {
      iVar5 = iVar1;
    }
    FUN_18006d5b0((int *)(param_1 + 0xbb0),iVar5);
  }
  *(int *)(param_1 + 0xbb0) = 0;
  return;
}


void FUN_1800518b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar1 = param_1[1];
  fVar3 = param_2[1];
  if ((param_2[1] <= fVar1) && (fVar3 = param_2[3], fVar1 <= param_2[3])) {
    fVar3 = fVar1;
  }
  fVar1 = *param_1;
  fVar2 = *param_2;
  if ((*param_2 <= fVar1) && (fVar2 = param_2[2], fVar1 <= param_2[2])) {
    fVar2 = fVar1;
  }
  *param_1 = fVar2;
  param_1[1] = fVar3;
  fVar1 = param_1[3];
  fVar3 = param_2[1];
  if ((param_2[1] <= fVar1) && (fVar3 = param_2[3], fVar1 <= param_2[3])) {
    fVar3 = fVar1;
  }
  fVar1 = param_1[2];
  fVar2 = *param_2;
  if ((*param_2 <= fVar1) && (fVar2 = param_2[2], fVar1 <= param_2[2])) {
    fVar2 = fVar1;
  }
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  return;
}


void FUN_180051930(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;

  lVar4 = DAT_180115c10;
  uVar1 = *(int *)(DAT_180115c10 + 0x1ec8) - 1;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(DAT_180115c10 + 0x1eb8))) {
    lVar2 = *(longlong *)(DAT_180115c10 + 0x1ec0);
    if (*(int *)(DAT_180115c10 + 0x1ec8) <= (int)uVar1) {
      param_3 = 0x833;
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    if (*(int *)((longlong)(int)uVar1 * 0x38 + *(longlong *)(lVar4 + 0x1ed0)) ==
        *(int *)((longlong)(int)uVar1 * 0x38 + lVar2)) {
      while (uVar3 = uVar1, uVar5 = (ulonglong)uVar3, 0 < (int)uVar3) {
        if (*(int *)(lVar4 + 0x1eb8) <= (int)uVar3) {
          param_3 = 0x833;
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x1ec0) + 8 + uVar5 * 0x38);
        if (*(int *)(lVar4 + 0x1eb8) <= (int)(uVar3 - 1)) {
          param_3 = 0x833;
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        if ((((lVar2 == 0) || ((*(uint *)(lVar2 + 0x14) & 0x10000000) == 0)) ||
            (lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x1ec0) + -0x30 + uVar5 * 0x38), lVar2 == 0
            )) || (uVar1 = uVar3 - 1, (*(uint *)(lVar2 + 0x14) & 0x400) != 0)) break;
      }
      if ((*(byte *)(lVar4 + 0x270c) & 8) != 0) {
        FUN_180052d90(0x1800e5938,(ulonglong)(*(int *)(lVar4 + 0x1ec8) - 1),uVar5,param_4);
        param_3 = uVar5;
      }
      FUN_180051aa0(uVar3,1,param_3,param_4);
      if (*(longlong *)(lVar4 + 0x1f00) != 0) {
        *(undefined1 *)(*(longlong *)(lVar4 + 0x1f00) + 0x179) = 1;
      }
    }
  }
  return;
}


void FUN_180051aa0(uint param_1,byte param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;

  lVar2 = DAT_180115c10;
  uVar6 = (ulonglong)param_2;
  if ((*(byte *)(DAT_180115c10 + 0x270c) & 8) != 0) {
    FUN_180052d90(0x1800e5868,(ulonglong)param_1,uVar6,param_4);
    param_3 = uVar6;
  }
  if (((int)param_1 < 0) || (*(int *)(lVar2 + 0x1eb8) <= (int)param_1)) {
    param_3 = 0x2d9a;
    FID_conflict__assert
              (L"remaining >= 0 && remaining < g.OpenPopupStack.Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2d9a);
  }
  puVar8 = (uint *)(lVar2 + 0x1eb8);
  if (((*(byte *)(lVar2 + 0x270c) & 8) != 0) &&
     (iVar3 = *(int *)(lVar2 + 0x1eb8), (int)param_1 < iVar3)) {
    uVar4 = param_1;
    do {
      if ((*(byte *)(lVar2 + 0x270c) & 8) != 0) {
        if (((int)uVar4 < 0) || (iVar3 <= (int)uVar4)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
          iVar3 = *(int *)(lVar2 + 0x1eb8);
        }
        lVar7 = (longlong)(int)uVar4 * 0x38;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x1ec0) + 8 + lVar7) == 0) {
          param_3 = 0;
        }
        else {
          if (((int)uVar4 < 0) || (iVar3 <= (int)uVar4)) {
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                       ,0x833);
            iVar3 = *(int *)(lVar2 + 0x1eb8);
          }
          param_3 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar2 + 0x1ec0) + 8 + lVar7) + 8);
        }
        if (((int)uVar4 < 0) || (iVar3 <= (int)uVar4)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        FUN_180052d90(0x1800e5908,(ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x1ec0) + lVar7),
                      param_3,param_4);
      }
      iVar3 = *(int *)(lVar2 + 0x1eb8);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar3);
  }
  if (((int)param_1 < 0) || ((int)*puVar8 <= (int)param_1)) {
    param_3 = 0x833;
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  lVar7 = *(longlong *)((longlong)(int)param_1 * 0x38 + 8 + *(longlong *)(lVar2 + 0x1ec0));
  lVar5 = *(longlong *)((longlong)(int)param_1 * 0x38 + 0x10 + *(longlong *)(lVar2 + 0x1ec0));
  iVar3 = *(int *)(lVar2 + 0x1ebc);
  if (iVar3 < (int)param_1) {
    if (iVar3 == 0) {
      uVar4 = 8;
    }
    else {
      uVar4 = iVar3 / 2 + iVar3;
    }
    uVar1 = param_1;
    if ((int)param_1 < (int)uVar4) {
      uVar1 = uVar4;
    }
    FUN_18006d970((int *)puVar8,uVar1);
  }
  *puVar8 = param_1;
  if ((param_2 == 0) || (lVar7 == 0)) {
    return;
  }
  if ((*(uint *)(lVar7 + 0x14) & 0x10000000) != 0) {
    lVar5 = *(longlong *)(lVar7 + 0x3a0);
  }
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0xcd) != '\0')) {
    FUN_180056440(lVar5,(ulonglong)(*(int *)(lVar2 + 0x1f0c) == 0),param_3);
    return;
  }
  FUN_180056370(lVar7,0,0,1);
  return;
}


void FUN_180051ce0(longlong param_1,byte param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;

  lVar2 = DAT_180115c10;
  iVar3 = *(int *)(DAT_180115c10 + 0x1eb8);
  if (iVar3 != 0) {
    uVar7 = 0;
    if ((param_1 != 0) && (0 < iVar3)) {
      do {
        if (((int)uVar7 < 0) || (iVar3 <= (int)uVar7)) {
          param_3 = 0x833;
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        lVar1 = *(longlong *)((longlong)(int)uVar7 * 0x38 + 8 + *(longlong *)(lVar2 + 0x1ec0));
        if (lVar1 != 0) {
          if ((*(uint *)(lVar1 + 0x14) & 0x4000000) == 0) {
            param_3 = 0x2d6a;
            FID_conflict__assert
                      (L"(popup.Window->Flags & ImGuiWindowFlags_Popup) != 0",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                       ,0x2d6a);
          }
          iVar3 = *(int *)(lVar2 + 0x1eb8);
          uVar6 = uVar7;
          if ((int)uVar7 < iVar3) {
            do {
              if (((int)uVar6 < 0) || (iVar3 <= (int)uVar6)) {
                param_3 = 0x833;
                FID_conflict__assert
                          (L"i >= 0 && i < Size",
                           L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                           ,0x833);
              }
              lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1ec0) + 8 + (longlong)(int)uVar6 * 0x38)
              ;
              if (lVar1 != 0) {
                lVar4 = param_1;
                if (*(longlong *)(param_1 + 0x3b0) == lVar1) goto LAB_180051e04;
                do {
                  if (lVar4 == lVar1) goto LAB_180051e04;
                  lVar4 = *(longlong *)(lVar4 + 0x3a8);
                } while (lVar4 != 0);
              }
              iVar3 = *(int *)(lVar2 + 0x1eb8);
              uVar6 = uVar6 + 1;
              if (iVar3 <= (int)uVar6) break;
            } while( true );
          }
          break;
        }
LAB_180051e04:
        iVar3 = *(int *)(lVar2 + 0x1eb8);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar3);
    }
    if ((int)uVar7 < iVar3) {
      if ((*(byte *)(lVar2 + 0x270c) & 8) != 0) {
        if (param_1 == 0) {
          pcVar5 = "<NULL>";
        }
        else {
          pcVar5 = *(char **)(param_1 + 8);
        }
        FUN_180052d90(0x1800e5840,pcVar5,param_3,param_4);
      }
      FUN_180051aa0(uVar7,param_2,param_3,param_4);
    }
  }
  return;
}


uint FUN_180051e70(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar1 = *param_1;
  if (0.0 <= fVar1) {
    fVar3 = 1.0;
    if (fVar1 <= 1.0) {
      fVar3 = fVar1;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar1 = param_1[1];
  if (0.0 <= fVar1) {
    fVar5 = 1.0;
    if (fVar1 <= 1.0) {
      fVar5 = fVar1;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar1 = param_1[2];
  if (0.0 <= fVar1) {
    fVar4 = 1.0;
    if (fVar1 <= 1.0) {
      fVar4 = fVar1;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar1 = param_1[3];
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = 1.0, fVar1 <= 1.0)) {
    fVar2 = fVar1;
  }
  return (int)(fVar2 * 255.0 + 0.5) << 0x18 |
         (int)(fVar4 * 255.0 + 0.5) << 0x10 |
         (int)(fVar5 * 255.0 + 0.5) << 8 | (int)(fVar3 * 255.0 + 0.5);
}


void FUN_180051f30(ulonglong param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  if (param_2 == 0.0) {
    *param_6 = param_3;
    *param_5 = param_3;
    *param_4 = param_3;
    return;
  }
  uVar2 = FUN_1800bbb20(param_1,1.0);
  fVar5 = (float)uVar2 / 0.16666667;
  uVar1 = (uint)fVar5;
  fVar3 = (1.0 - param_2) * param_3;
  fVar5 = fVar5 - (float)(int)uVar1;
  fVar4 = (1.0 - fVar5 * param_2) * param_3;
  if (uVar1 < 6) {
    fVar5 = (1.0 - (1.0 - fVar5) * param_2) * param_3;
    switch(uVar1) {
    case 0:
      *param_4 = param_3;
      *param_5 = fVar5;
      *param_6 = fVar3;
      break;
    case 1:
      *param_4 = fVar4;
      *param_5 = param_3;
      *param_6 = fVar3;
      break;
    case 2:
      *param_4 = fVar3;
      *param_5 = param_3;
      *param_6 = fVar5;
      break;
    case 3:
      *param_4 = fVar3;
      *param_5 = fVar4;
      *param_6 = param_3;
      break;
    case 4:
      *param_4 = fVar5;
      *param_5 = fVar3;
      *param_6 = param_3;
      break;
    case 5:
      goto switchD_180052002_caseD_5;
    }
  }
  else {
switchD_180052002_caseD_5:
    *param_4 = param_3;
    *param_5 = fVar3;
    *param_6 = fVar4;
  }
  return;
}


void FUN_1800520f0(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;

  if (param_3 <= param_2) {
    fVar3 = 0.0;
    fVar1 = param_2;
    param_2 = param_3;
  }
  else {
    fVar3 = -1.0;
    fVar1 = param_3;
  }
  fVar2 = fVar1;
  if (param_1 < fVar1) {
    fVar3 = -0.33333334 - fVar3;
    fVar2 = param_1;
    param_1 = fVar1;
  }
  fVar1 = fVar2;
  if (param_2 <= fVar2) {
    fVar1 = param_2;
  }
  *param_4 = ABS((fVar2 - param_2) / ((param_1 - fVar1) * 6.0 + 1e-20) + fVar3);
  *param_5 = (param_1 - fVar1) / (param_1 + 1e-20);
  *param_6 = param_1;
  return;
}


float * FUN_1800521a0(float *param_1,ulonglong param_2)

{
  *param_1 = (float)(param_2 & 0xff) * 0.003921569;
  param_1[1] = (float)(param_2 >> 8 & 0xff) * 0.003921569;
  param_1[2] = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
  param_1[3] = (float)(param_2 >> 0x18 & 0xff) * 0.003921569;
  return param_1;
}


undefined1 FUN_180052210(float *param_1,float *param_2)

{
  if ((((*param_1 <= *param_2) && (param_1[1] <= param_2[1])) && (*param_2 < param_1[2])) &&
     (param_2[1] < param_1[3])) {
    return 1;
  }
  return 0;
}


int FUN_180052240(int param_1)

{
  if (param_1 == 0x1000) {
    return 0x297;
  }
  if (param_1 == 0x2000) {
    return 0x298;
  }
  if (param_1 == 0x4000) {
    return 0x299;
  }
  if (param_1 == 0x8000) {
    param_1 = 0x29a;
  }
  return param_1;
}


undefined1 * FUN_180052280(undefined1 (*param_1) [32])

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  undefined1 *local_res20;

  puVar2 = DAT_180115c10;
  local_res18 = (undefined1 *)(*(code *)PTR__malloc_base_1801121b8)(0x2950,DAT_180115c20);
  puVar3 = DAT_180115c10;
  if (DAT_180115c10 != (undefined1 *)0x0) {
    piVar1 = (int *)(DAT_180115c10 + 0x12f0);
    lVar6 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
    if (*(int *)(DAT_180115c10 + lVar6 + 0x27c4) != *piVar1) {
      iVar5 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
      sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
      *(short *)(DAT_180115c10 + 0x27c0) = sVar4;
      lVar6 = (longlong)sVar4 * 8;
      *(int *)(puVar3 + lVar6 + 0x27c4) = *piVar1;
      *(undefined4 *)(puVar3 + lVar6 + 0x27c8) = 0;
    }
    *(short *)(puVar3 + lVar6 + 0x27c8) = *(short *)(puVar3 + lVar6 + 0x27c8) + 1;
    *(int *)(puVar3 + 0x27b8) = *(int *)(puVar3 + 0x27b8) + 1;
  }
  local_res20 = local_res10;
  if (local_res18 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = FUN_1800492e0(local_res18,param_1);
  }
  DAT_180115c10 = puVar3;
  FUN_180058d10();
  if (puVar2 != (undefined1 *)0x0) {
    DAT_180115c10 = puVar2;
  }
  return puVar3;
}


undefined1 (*) [32] FUN_180052380(byte *param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  int *piVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  undefined1 (*local_res18) [32];
  undefined1 *local_res20;
  undefined1 (*local_38) [32];
  undefined1 (*local_30) [32];

  lVar4 = DAT_180115c10;
  local_res18 = (undefined1 (*) [32])(*(code *)PTR__malloc_base_1801121b8)(0x428,DAT_180115c20);
  lVar5 = DAT_180115c10;
  if (DAT_180115c10 != 0) {
    piVar7 = (int *)(DAT_180115c10 + 0x12f0);
    lVar10 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
    if (*(int *)(lVar10 + 0x27c4 + DAT_180115c10) != *piVar7) {
      iVar9 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
      sVar8 = (short)iVar9 + (short)(iVar9 / 6) * -6;
      *(short *)(DAT_180115c10 + 0x27c0) = sVar8;
      lVar10 = (longlong)sVar8 * 8;
      *(int *)(lVar10 + 0x27c4 + lVar5) = *piVar7;
      *(undefined4 *)(lVar10 + 0x27c8 + lVar5) = 0;
    }
    psVar1 = (short *)(lVar10 + 0x27c8 + lVar5);
    *psVar1 = *psVar1 + 1;
    *(int *)(lVar5 + 0x27b8) = *(int *)(lVar5 + 0x27b8) + 1;
  }
  local_res20 = local_res10;
  local_38 = local_res18;
  if (local_res18 == (undefined1 (*) [32])0x0) {
    pauVar6 = (undefined1 (*) [32])0x0;
  }
  else {
    pauVar6 = FUN_18004a8d0(local_res18,lVar4,param_1);
  }
  *(uint *)(*pauVar6 + 0x14) = param_2;
  uVar2 = *(uint *)(*pauVar6 + 0x10);
  puVar3 = *(uint **)(lVar4 + 0x1390);
  iVar9 = *(int *)(lVar4 + 5000);
  uVar16 = (longlong)iVar9;
  puVar15 = puVar3;
  if (iVar9 != 0) {
    do {
      uVar11 = uVar16 >> 1;
      if (puVar15[uVar11 * 4] < uVar2) {
        puVar15 = puVar15 + uVar11 * 4 + 4;
        uVar11 = uVar16 + (-1 - uVar11);
      }
      uVar16 = uVar11;
    } while (uVar11 != 0);
  }
  if ((puVar15 == puVar3 + (longlong)iVar9 * 4) || (*puVar15 != uVar2)) {
    local_38 = (undefined1 (*) [32])CONCAT44(local_38._4_4_,uVar2);
    local_30 = pauVar6;
    FUN_18006cfb0((int *)(lVar4 + 5000),(ulonglong)puVar15,&local_38);
  }
  else {
    *(undefined1 (**) [32])(puVar15 + 2) = pauVar6;
  }
  piVar7 = (int *)0x0;
  if (((param_2 >> 8 & 1) == 0) && (piVar7 = FUN_1800560e0((longlong)pauVar6), piVar7 != (int *)0x0)
     ) {
    iVar9 = FUN_18006d110((int *)(lVar4 + 0x25f0),(ulonglong)piVar7);
    *(int *)(pauVar6[0x15] + 0x1c) = iVar9;
  }
  FUN_180058b50((longlong)pauVar6,(longlong)piVar7);
  piVar7 = (int *)(lVar4 + 0x1348);
  iVar9 = *piVar7;
  if ((param_2 >> 0xd & 1) == 0) {
    iVar14 = *(int *)(lVar4 + 0x134c);
    if (iVar9 != iVar14) goto LAB_180052633;
    if (iVar14 == 0) {
      iVar14 = 8;
    }
    else {
      iVar14 = iVar14 / 2 + iVar14;
    }
    iVar12 = iVar9 + 1;
    if (iVar9 + 1 < iVar14) {
      iVar12 = iVar14;
    }
  }
  else {
    if (iVar9 != 0) {
      uVar16 = *(ulonglong *)(lVar4 + 0x1350);
      if (uVar16 + (longlong)iVar9 * 8 < uVar16) {
        FID_conflict__assert
                  (L"it >= Data && it <= Data + Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x84e);
      }
      uVar16 = uVar16 - *(longlong *)(lVar4 + 0x1350);
      iVar9 = *(int *)(lVar4 + 0x134c);
      if (*piVar7 == iVar9) {
        iVar14 = *piVar7 + 1;
        if (iVar9 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = iVar9 / 2 + iVar9;
        }
        if (iVar14 < iVar9) {
          iVar14 = iVar9;
        }
        FUN_18006d6f0(piVar7,iVar14);
      }
      if ((longlong)uVar16 >> 3 < (longlong)*piVar7) {
        puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x1350) + (uVar16 & 0xfffffffffffffff8));
        FUN_1800d1c20(puVar13 + 1,puVar13,((longlong)*piVar7 - ((longlong)uVar16 >> 3)) * 8);
      }
      *(undefined1 (**) [32])((uVar16 & 0xfffffffffffffff8) + *(longlong *)(lVar4 + 0x1350)) =
           pauVar6;
      *piVar7 = *piVar7 + 1;
      return pauVar6;
    }
    if (*(int *)(lVar4 + 0x134c) != 0) goto LAB_180052633;
    iVar12 = 8;
  }
  FUN_18006d6f0(piVar7,iVar12);
LAB_180052633:
  *(undefined1 (**) [32])(*(longlong *)(lVar4 + 0x1350) + (longlong)*piVar7 * 8) = pauVar6;
  *piVar7 = *piVar7 + 1;
  return pauVar6;
}


uint * FUN_180052660(undefined1 (*param_1) [16])

{
  longlong lVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;

  lVar1 = DAT_180115c10;
  if (*(char *)(DAT_180115c10 + 0x8e) == '\0') {
    pauVar3 = FUN_1800a7380(param_1,(undefined1 (*) [16])&DAT_1800e6d90);
    if (pauVar3 != (undefined1 (*) [16])0x0) {
      param_1 = pauVar3;
    }
  }
  sVar4 = strlen((char *)param_1);
  lVar9 = (longlong)*(int *)(lVar1 + 0x25f0);
  iVar2 = *(int *)(lVar1 + 0x25f4);
  uVar7 = (int)sVar4 + 0x18U & 0xfffffffc;
  iVar6 = uVar7 + *(int *)(lVar1 + 0x25f0);
  if (iVar2 < iVar6) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar5 = iVar6;
    if (iVar6 < iVar2) {
      iVar5 = iVar2;
    }
    FUN_18006d510((int *)(lVar1 + 0x25f0),iVar5);
  }
  *(int *)(lVar1 + 0x25f0) = iVar6;
  *(uint *)(lVar9 + *(longlong *)(lVar1 + 0x25f8)) = uVar7;
  lVar1 = *(longlong *)(lVar1 + 0x25f8);
  puVar8 = (uint *)(lVar1 + 4 + lVar9);
  if (puVar8 != (uint *)0x0) {
    puVar8[0] = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
  }
  uVar7 = FUN_180058260((byte *)param_1,sVar4,0);
  *puVar8 = uVar7;
  FUN_1800d1c20((undefined8 *)(lVar1 + 0x14 + lVar9),(undefined8 *)param_1,sVar4 + 1);
  return puVar8;
}


void FUN_180052750(int *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  short *psVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;

  lVar2 = (longlong)(short)param_1[2];
  if (param_1[lVar2 * 2 + 3] != param_2) {
    iVar4 = (short)param_1[2] + 1;
    sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
    *(short *)(param_1 + 2) = sVar3;
    lVar2 = (longlong)sVar3;
    param_1[lVar2 * 2 + 4] = 0;
    param_1[lVar2 * 2 + 3] = param_2;
  }
  if (param_4 == -1) {
    psVar1 = (short *)(lVar2 * 8 + 0x12 + (longlong)param_1);
    *psVar1 = *psVar1 + 1;
    param_1[1] = param_1[1] + 1;
    return;
  }
  *(short *)(param_1 + lVar2 * 2 + 4) = (short)param_1[lVar2 * 2 + 4] + 1;
  *param_1 = *param_1 + 1;
  return;
}


bool FUN_1800527c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;

  bVar1 = false;
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    if (*(char *)(param_1 + lVar2) != (&DAT_1800deea0)[lVar2]) {
      bVar1 = true;
      FID_conflict__assert
                (L"strcmp(version, \"1.91.9b\") == 0 && \"Mismatched version string!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x27b2);
      break;
    }
    lVar2 = lVar3;
  } while (lVar3 != 8);
  if (param_2 != 0xbd8) {
    bVar1 = true;
    FID_conflict__assert
              (L"sz_io == sizeof(ImGuiIO) && \"Mismatched struct layout!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27b3);
  }
  if (param_3 != 0x490) {
    bVar1 = true;
    FID_conflict__assert
              (L"sz_style == sizeof(ImGuiStyle) && \"Mismatched struct layout!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27b4);
  }
  if (param_4 != 8) {
    bVar1 = true;
    FID_conflict__assert
              (L"sz_vec2 == sizeof(ImVec2) && \"Mismatched struct layout!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27b5);
  }
  if (param_5 != 0x10) {
    bVar1 = true;
    FID_conflict__assert
              (L"sz_vec4 == sizeof(ImVec4) && \"Mismatched struct layout!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27b6);
  }
  if (param_6 != 0x14) {
    bVar1 = true;
    FID_conflict__assert
              (L"sz_vert == sizeof(ImDrawVert) && \"Mismatched struct layout!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27b7);
  }
  if (param_7 != 2) {
    bVar1 = true;
    FID_conflict__assert
              (L"sz_idx == sizeof(ImDrawIdx) && \"Mismatched struct layout!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27b8);
  }
  return !bVar1;
}


void FUN_180052900(uint param_1,int param_2,char *param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  size_t sVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;

  lVar3 = DAT_180115c10;
  lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if (*(int *)(DAT_180115c10 + 0x2784) == -1) {
    *(undefined4 *)(DAT_180115c10 + 0x2784) = 0;
    iVar4 = *(int *)(lVar3 + 0x2794);
    iVar9 = *(int *)(lVar2 + 0x108) + 1;
    if (iVar4 < iVar9) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      iVar8 = iVar9;
      if (iVar9 < iVar4) {
        iVar8 = iVar4;
      }
      FUN_18006da10((int *)(lVar3 + 0x2790),iVar8);
    }
    for (iVar4 = *(int *)(lVar3 + 0x2790); iVar4 < iVar9; iVar4 = iVar4 + 1) {
      lVar5 = (longlong)iVar4;
      lVar11 = *(longlong *)(lVar3 + 0x2798);
      puVar1 = (undefined8 *)(lVar11 + lVar5 * 0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar5 * 0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar5 * 0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar5 * 0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar11 + 0x40 + lVar5 * 0x48) = 0;
    }
    *(int *)(lVar3 + 0x2790) = iVar9;
    iVar4 = *(int *)(lVar2 + 0x108);
    if (iVar4 + 1 < 1) {
      return;
    }
    iVar9 = 0;
    do {
      if (iVar9 < iVar4) {
        if (iVar9 < 0) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        uVar10 = *(uint *)(*(longlong *)(lVar2 + 0x110) + (longlong)iVar9 * 4);
      }
      else {
        uVar10 = param_1;
      }
      lVar11 = (longlong)iVar9;
      if ((iVar9 < 0) || (*(int *)(lVar3 + 0x2790) <= iVar9)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      iVar9 = iVar9 + 1;
      *(uint *)(*(longlong *)(lVar3 + 0x2798) + lVar11 * 0x48) = uVar10;
      iVar4 = *(int *)(lVar2 + 0x108);
    } while (iVar9 < iVar4 + 1);
    return;
  }
  if (*(int *)(DAT_180115c10 + 0x2784) < 0) {
    FID_conflict__assert
              (L"tool->StackLevel >= 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x4208);
  }
  iVar4 = *(int *)(lVar3 + 0x2784);
  lVar11 = (longlong)iVar4;
  if (iVar4 != *(int *)(lVar2 + 0x108)) {
    return;
  }
  if ((iVar4 < 0) || (*(int *)(lVar3 + 0x2790) <= iVar4)) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  lVar2 = *(longlong *)(lVar3 + 0x2798);
  if ((*(uint *)(lVar2 + lVar11 * 0x48) != param_1) ||
     (*(char *)(lVar2 + 4 + lVar11 * 0x48) < '\x01')) {
    FID_conflict__assert
              (L"info->ID == id && info->QueryFrameCount > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x420c);
  }
  if (param_2 == 4) {
    uVar13 = (ulonglong)param_3 & 0xffffffff;
    puVar7 = (undefined1 *)(lVar2 + 0xc + lVar11 * 0x48);
    pcVar12 = "%d";
  }
  else {
    if (param_2 == 0xb) {
      if (param_4 == 0) {
        sVar6 = strlen(param_3);
        uVar10 = (uint)sVar6;
      }
      else {
        uVar10 = (int)param_4 - (int)param_3;
      }
      FUN_180057ec0((undefined1 *)(lVar2 + 0xc + lVar11 * 0x48),0x39,0x1800e7008,(ulonglong)uVar10);
      goto LAB_180052bcd;
    }
    if (param_2 == 0xc) {
      FUN_180057ec0((undefined1 *)(lVar2 + 0xc + lVar11 * 0x48),0x39,0x1800e7010,param_3);
      goto LAB_180052bcd;
    }
    if (param_2 != 0xd) {
      FID_conflict__assert
                (L"0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x421f);
      goto LAB_180052bcd;
    }
    puVar7 = (undefined1 *)(lVar2 + 0xc + lVar11 * 0x48);
    if (*(char *)(lVar2 + 0xc + lVar11 * 0x48) != '\0') {
      return;
    }
    uVar13 = (ulonglong)param_1;
    pcVar12 = "0x%08X [override]";
  }
  FUN_180057ec0(puVar7,0x39,(longlong)pcVar12,uVar13);
LAB_180052bcd:
  *(undefined1 *)(lVar2 + 5 + lVar11 * 0x48) = 1;
  *(char *)(lVar2 + 8 + lVar11 * 0x48) = (char)param_2;
  return;
}


void FUN_180052c00(void)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  undefined8 local_res10;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;

  lVar4 = DAT_180115c10;
  if (*(char *)(DAT_180115c10 + 0x2742) != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar7 = *(float *)(DAT_180115c10 + 0x1d94);
  *(undefined4 *)(DAT_180115c10 + 0x1d4c) = 0;
  lVar5 = DAT_180115c10;
  fVar8 = *(float *)(lVar4 + 0x1d98);
  fVar2 = *(float *)(lVar4 + 0x1d9c);
  fVar3 = *(float *)(lVar4 + 0x1da0);
  if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  pauVar6 = FUN_180057910(**(longlong **)(lVar5 + 0x1ef0),1,"##Foreground");
  local_84 = fVar8 - 3.0;
  local_7c = fVar3 + 3.0;
  local_88 = fVar7 - 3.0;
  local_80 = fVar2 + 3.0;
  local_res10 = *(undefined8 *)(lVar4 + 0xe8);
  fVar7 = (float)local_res10;
  fVar8 = (float)((ulonglong)local_res10 >> 0x20);
  local_resc = local_84;
  if ((local_84 <= fVar8) && (local_resc = local_7c, fVar8 <= local_7c)) {
    local_resc = fVar8;
  }
  local_res8 = local_88;
  if ((local_88 <= fVar7) && (local_res8 = local_80, fVar7 <= local_80)) {
    local_res8 = fVar7;
  }
  FUN_180071260((int *)pauVar6,&local_88,&local_80,0xff00ff00,0.0,0,1.0);
  FUN_180070300((int *)pauVar6,&local_res10,(undefined8 *)&local_res8,0xff00ff00,1.0);
  return;
}


void FUN_180052d90(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  ulonglong local_res20;

  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180052dc0(param_1,(char *)&local_res10,param_3,param_4);
  return;
}


void FUN_180052dc0(longlong param_1,char *param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;

  lVar2 = DAT_180115c10;
  piVar9 = (int *)(DAT_180115c10 + 10000);
  iVar7 = *piVar9 + -1;
  if (*piVar9 == 0) {
    iVar7 = 0;
  }
  if (*(char *)(DAT_180115c10 + 0x1310) == '\0') {
    FUN_18006cca0(piVar9,0x1800e6ea8,(ulonglong)*(uint *)(DAT_180115c10 + 0x12f0),param_4);
  }
  else {
    param_4 = (ulonglong)*(uint *)(DAT_180115c10 + 0x12f0);
    FUN_18006cca0(piVar9,0x1800e6e98,DAT_180115c10 + 0x1310,param_4);
  }
  FUN_18006ccd0(piVar9,param_1,param_2);
  iVar8 = *piVar9 + -1;
  if (*piVar9 == 0) {
    iVar8 = 0;
  }
  puVar5 = &DAT_180115c18;
  if (*(undefined **)(lVar2 + 0x2718) != (undefined *)0x0) {
    puVar5 = *(undefined **)(lVar2 + 0x2718);
  }
  if (((iVar7 < 0) || (iVar8 < iVar7)) || (iVar8 < *(int *)(lVar2 + 0x2730))) {
    param_2 = (char *)0xba3;
    FID_conflict__assert
              (L"old_size >= 0 && new_size >= old_size && new_size >= EndOffset",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0xba3);
  }
  piVar9 = (int *)(lVar2 + 0x2730);
  if (iVar7 != iVar8) {
    piVar1 = (int *)(lVar2 + 0x2720);
    if ((*piVar9 == 0) || (puVar5[(longlong)*piVar9 + -1] == '\n')) {
      FUN_18006d1b0(piVar1,piVar9);
    }
    param_2 = (char *)((longlong)iVar8 - (longlong)iVar7);
    for (pcVar4 = FUN_1800d1a80(puVar5 + iVar7,10,param_2); pcVar4 != (char *)0x0;
        pcVar4 = FUN_1800d1a80(pcVar4,10,param_2)) {
      pcVar4 = pcVar4 + 1;
      if (pcVar4 < puVar5 + iVar8) {
        iVar3 = *(int *)(lVar2 + 0x2724);
        if (*piVar1 == iVar3) {
          iVar6 = *piVar1 + 1;
          if (iVar3 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar3 / 2 + iVar3;
          }
          if (iVar6 < iVar3) {
            iVar6 = iVar3;
          }
          FUN_18006d650(piVar1,iVar6);
        }
        *(int *)(*(longlong *)(lVar2 + 0x2728) + (longlong)*piVar1 * 4) = (int)pcVar4 - (int)puVar5;
        *piVar1 = *piVar1 + 1;
      }
      param_2 = puVar5 + iVar8 + -(longlong)pcVar4;
    }
    if (iVar8 <= *piVar9) {
      iVar8 = *piVar9;
    }
    *piVar9 = iVar8;
  }
  puVar5 = &DAT_180115c18;
  if ((*(uint *)(lVar2 + 0x270c) & 0x100000) != 0) {
    if (*(longlong *)(lVar2 + 0x2718) != 0) {
      if (*(int *)(lVar2 + 10000) < 1) {
        param_2 = (char *)0x83b;
        FID_conflict__assert
                  (L"Size > 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x83b);
      }
      puVar5 = *(undefined **)(lVar2 + 0x2718);
    }
    FUN_18006e080(0x1800de830,puVar5 + iVar7,param_2,param_4);
  }
  return;
}


void FUN_180053000(undefined8 param_1,int *param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;

  iVar1 = *param_2;
  if (iVar1 == 1) {
    if (((float)param_2[3] == -3.4028235e+38) && ((float)param_2[4] == -3.4028235e+38)) {
      if ((*(byte *)(DAT_180115c10 + 0x270c) & 0x80) != 0) {
        FUN_180052d90(0x1800e3620,param_1,param_3,param_4);
        return;
      }
    }
    else if ((*(byte *)(DAT_180115c10 + 0x270c) & 0x80) != 0) {
      if (2 < (uint)param_2[5]) {
        FID_conflict__assert
                  (L"((int)(sizeof(mouse_source_names) / sizeof(*(mouse_source_names)))) == ImGuiMouseSource_COUNT && source >= 0 && source < ImGuiMouseSource_COUNT"
                   ,
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2636);
      }
      FUN_180052d90(0x1800e3648,param_1,(double)(float)param_2[3],
                    (ulonglong)(double)(float)param_2[4]);
      return;
    }
  }
  else if (iVar1 == 3) {
    if ((*(byte *)(DAT_180115c10 + 0x270c) & 0x80) != 0) {
      if (2 < (uint)param_2[5]) {
        FID_conflict__assert
                  (L"((int)(sizeof(mouse_source_names) / sizeof(*(mouse_source_names)))) == ImGuiMouseSource_COUNT && source >= 0 && source < ImGuiMouseSource_COUNT"
                   ,
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2636);
      }
      puVar3 = &DAT_1800e3678;
      if ((char)param_2[4] != '\0') {
        puVar3 = &DAT_1800e3670;
      }
      FUN_180052d90(0x1800e3680,param_1,(ulonglong)(uint)param_2[3],(ulonglong)puVar3);
      return;
    }
  }
  else if (iVar1 == 2) {
    if ((*(byte *)(DAT_180115c10 + 0x270c) & 0x80) != 0) {
      if (2 < (uint)param_2[5]) {
        FID_conflict__assert
                  (L"((int)(sizeof(mouse_source_names) / sizeof(*(mouse_source_names)))) == ImGuiMouseSource_COUNT && source >= 0 && source < ImGuiMouseSource_COUNT"
                   ,
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2636);
      }
      FUN_180052d90(0x1800e36a8,param_1,(double)(float)param_2[3],
                    (ulonglong)(double)(float)param_2[4]);
      return;
    }
  }
  else if (iVar1 == 4) {
    if ((*(byte *)(DAT_180115c10 + 0x270c) & 0x80) != 0) {
      iVar1 = param_2[4];
      pcVar2 = FUN_180056fb0(param_2[3]);
      puVar3 = &DAT_1800e3678;
      if ((char)iVar1 != '\0') {
        puVar3 = &DAT_1800e3670;
      }
      FUN_180052d90(0x1800e36d0,param_1,pcVar2,(ulonglong)puVar3);
      return;
    }
  }
  else if (iVar1 == 5) {
    if ((*(byte *)(DAT_180115c10 + 0x270c) & 0x80) != 0) {
      FUN_180052d90(0x1800e36e8,param_1,(ulonglong)(uint)param_2[3],(ulonglong)(uint)param_2[3]);
      return;
    }
  }
  else if ((iVar1 == 6) && ((*(byte *)(DAT_180115c10 + 0x270c) & 0x80) != 0)) {
    FUN_180052d90(0x1800e3708,param_1,(ulonglong)*(byte *)(param_2 + 3),param_4);
  }
  return;
}


void FUN_180053310(longlong param_1,wchar_t *param_2,float *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;

  lVar1 = DAT_180115c10;
  lVar2 = param_1;
  if (param_1 == 0) {
    lVar2 = DAT_180115c10;
  }
  DAT_180115c10 = lVar2;
  FUN_1800684f0(param_1,param_2,param_3,param_4);
  DAT_180115c10 = 0;
  if (lVar1 != lVar2) {
    DAT_180115c10 = lVar1;
  }
  if (lVar2 != 0) {
    FUN_18004af90(lVar2);
    FUN_18005b5c0(lVar2);
  }
  return;
}


void FUN_180053370(undefined8 param_1,wchar_t *param_2,undefined *param_3,ulonglong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  char cVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;

  lVar11 = DAT_180115c10;
  if ((*(int *)(DAT_180115c10 + 0x1378) < 2) && (*(char *)(DAT_180115c10 + 0x1301) != '\0')) {
    cVar12 = FUN_180054c00((float *)"Calling End() too many times!",(float *)param_2,
                           (float *)param_3,param_4);
    if ((cVar12 != '\0') && (*(int *)(lVar11 + 0x1378) < 2)) {
      FID_conflict__assert
                (L"(g.CurrentWindowStack.Size > 1) && \"Calling End() too many times!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1e7f);
      return;
    }
  }
  else {
    lVar6 = *(longlong *)(DAT_180115c10 + 0x13a8);
    if (*(int *)(DAT_180115c10 + 0x1378) < 1) {
      param_3 = (undefined *)0x83c;
      param_2 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
      ;
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    lVar7 = *(longlong *)(lVar11 + 0x1380);
    lVar16 = (longlong)*(int *)(lVar11 + 0x1378) * 0x78;
    if (((*(uint *)(lVar6 + 0x14) & 0x1000000) != 0) &&
       (*(int *)(lVar11 + 0x12fc) != *(int *)(lVar6 + 0x10))) {
      cVar12 = FUN_180054c00((float *)"Must call EndChild() and not End()!",(float *)param_2,
                             (float *)param_3,param_4);
      if ((cVar12 != '\0') && (*(int *)(lVar11 + 0x12fc) != *(int *)(lVar6 + 0x10))) {
        param_3 = (undefined *)0x1e86;
        param_2 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"(g.WithinEndChildID == window->ID) && \"Must call EndChild() and not End()!\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x1e86);
      }
    }
    if (*(longlong *)(lVar6 + 0x1c0) != 0) {
      FUN_180082220();
    }
    lVar8 = DAT_180115c10;
    if (*(char *)(lVar6 + 0xd2) == '\0') {
      *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
      lVar8 = *(longlong *)(lVar8 + 0x13a8);
      FUN_180076030(*(int **)(lVar8 + 0x2c0));
      lVar15 = *(longlong *)(lVar8 + 0x2c0);
      if (*(int *)(lVar15 + 0x98) < 1) {
        param_3 = (undefined *)0x83c;
        param_2 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
        ;
        FID_conflict__assert
                  (L"Size > 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x83c);
      }
      lVar9 = *(longlong *)(lVar15 + 0xa0);
      lVar15 = (longlong)*(int *)(lVar15 + 0x98);
      uVar3 = *(undefined4 *)(lVar9 + -0xc + lVar15 * 0x10);
      uVar4 = *(undefined4 *)(lVar9 + -8 + lVar15 * 0x10);
      uVar5 = *(undefined4 *)(lVar9 + -4 + lVar15 * 0x10);
      *(undefined4 *)(lVar8 + 600) = *(undefined4 *)(lVar9 + -0x10 + lVar15 * 0x10);
      *(undefined4 *)(lVar8 + 0x25c) = uVar3;
      *(undefined4 *)(lVar8 + 0x260) = uVar4;
      *(undefined4 *)(lVar8 + 0x264) = uVar5;
    }
    FUN_180062070();
    if ((*(char *)(lVar16 + -10 + lVar7) != '\0') && (*(longlong *)(lVar6 + 0x3b0) == lVar6)) {
      FUN_180053b00();
    }
    if (*(char *)(lVar6 + 0xd2) != '\0') {
      if (*(longlong *)(lVar6 + 0x2c0) != 0) {
        param_3 = (undefined *)0x1e93;
        param_2 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"window->DrawList == 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x1e93);
      }
      *(longlong *)(lVar6 + 0x2c0) = lVar6 + 0x2c8;
    }
    lVar8 = DAT_180115c10;
    if ((*(longlong *)(lVar11 + 0x2680) == lVar6) && (*(char *)(DAT_180115c10 + 0x2678) != '\0')) {
      FUN_18005b370(0x1800e6bf8,param_2,param_3,param_4);
      uVar14 = *(uint *)(lVar8 + 0x267c) & 0xf;
      if (uVar14 == 1) {
        fflush(*(FILE **)(lVar8 + 0x2688));
      }
      else if (uVar14 == 2) {
        FUN_1800b1c20(*(FILE **)(lVar8 + 0x2688));
      }
      else if (uVar14 != 4) {
        if (uVar14 == 8) {
          if (1 < *(int *)(lVar8 + 0x2690)) {
            pfVar13 = (float *)FUN_18006cef0((int *)(lVar8 + 0x2690));
            param_3 = *(undefined **)(DAT_180115c10 + 0xbe8);
            if ((float *)param_3 != (float *)0x0) {
              (*(code *)param_3)();
              param_2 = (wchar_t *)pfVar13;
            }
          }
        }
        else {
          param_3 = (undefined *)0x38cb;
          param_2 =
          L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
          ;
          FID_conflict__assert
                    (L"0",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x38cb);
        }
      }
      *(undefined1 *)(lVar8 + 0x141a) = 0;
      *(undefined1 *)(lVar8 + 0x2678) = 0;
      *(undefined4 *)(lVar8 + 0x267c) = 0;
      *(undefined8 *)(lVar8 + 0x2688) = 0;
      if (*(longlong *)(lVar8 + 0x2698) != 0) {
        *(undefined8 *)(lVar8 + 0x2690) = 0;
        FUN_18005b5c0(*(longlong *)(lVar8 + 0x2698));
        *(undefined8 *)(lVar8 + 0x2698) = 0;
      }
    }
    if (*(char *)(lVar6 + 0x159) != '\0') {
      FUN_180054b80();
    }
    puVar2 = (undefined8 *)(lVar16 + -0x70 + lVar7);
    uVar10 = puVar2[1];
    *(undefined8 *)(lVar11 + 0x1d88) = *puVar2;
    *(undefined8 *)(lVar11 + 0x1d90) = uVar10;
    puVar2 = (undefined8 *)(lVar16 + -0x60 + lVar7);
    uVar10 = puVar2[1];
    *(undefined8 *)(lVar11 + 0x1d98) = *puVar2;
    *(undefined8 *)(lVar11 + 0x1da0) = uVar10;
    puVar2 = (undefined8 *)(lVar16 + -0x50 + lVar7);
    uVar10 = puVar2[1];
    *(undefined8 *)(lVar11 + 0x1da8) = *puVar2;
    *(undefined8 *)(lVar11 + 0x1db0) = uVar10;
    puVar2 = (undefined8 *)(lVar16 + -0x40 + lVar7);
    uVar10 = puVar2[1];
    *(undefined8 *)(lVar11 + 0x1db8) = *puVar2;
    *(undefined8 *)(lVar11 + 0x1dc0) = uVar10;
    puVar2 = (undefined8 *)(lVar16 + -0x30 + lVar7);
    uVar10 = puVar2[1];
    *(undefined8 *)(lVar11 + 0x1dc8) = *puVar2;
    *(undefined8 *)(lVar11 + 0x1dd0) = uVar10;
    if ((*(uint *)(lVar6 + 0x14) & 0x10000000) != 0) {
      *(int *)(lVar11 + 0x2484) = *(int *)(lVar11 + 0x2484) + -1;
    }
    if ((*(uint *)(lVar6 + 0x14) & 0x4000000) != 0) {
      if (*(int *)(lVar11 + 0x1ec8) < 1) {
        param_3 = (undefined *)0x849;
        param_2 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
        ;
        FID_conflict__assert
                  (L"Size > 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x849);
      }
      *(int *)(lVar11 + 0x1ec8) = *(int *)(lVar11 + 0x1ec8) + -1;
    }
    if (*(char *)(lVar11 + 0x84) != '\0') {
      FUN_180054dd0(lVar7 + -0x20 + lVar16,param_2,(ulonglong)param_3,param_4);
    }
    if (*(int *)(lVar11 + 0x1378) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x849);
    }
    piVar1 = (int *)(lVar11 + 0x1378);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_180066f80((longlong *)0x0);
      return;
    }
    if (*(int *)(lVar11 + 0x1378) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    FUN_180066f80(*(longlong **)
                   (((longlong)*(int *)(lVar11 + 0x1378) + -1) * 0x78 +
                   *(longlong *)(lVar11 + 0x1380)));
  }
  return;
}


void FUN_1800537a0(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *in_RCX;
  wchar_t *in_RDX;
  uint uVar9;
  undefined *in_R8;
  ulonglong in_R9;
  float fVar10;
  undefined8 local_res8;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;

  lVar8 = DAT_180115c10;
  lVar6 = *(longlong *)(DAT_180115c10 + 0x13a8);
  uVar4 = *(undefined4 *)(DAT_180115c10 + 0x12fc);
  if ((*(uint *)(lVar6 + 0x14) & 0x1000000) == 0) {
    in_R8 = (undefined *)0x1824;
    in_RDX =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    in_RCX = L"child_window->Flags & ImGuiWindowFlags_ChildWindow";
    FID_conflict__assert
              (L"child_window->Flags & ImGuiWindowFlags_ChildWindow",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1824);
  }
  *(undefined4 *)(lVar8 + 0x12fc) = *(undefined4 *)(lVar6 + 0x10);
  local_res8 = *(undefined8 *)(lVar6 + 0x30);
  fVar10 = (float)local_res8;
  FUN_180053370(in_RCX,in_RDX,in_R8,in_R9);
  lVar7 = DAT_180115c10;
  if (*(short *)(lVar6 + 0xda) == 1) {
    lVar7 = *(longlong *)(lVar8 + 0x13a8);
    local_48 = *(float *)(lVar7 + 0x118);
    local_44 = *(float *)(lVar7 + 0x11c);
    local_40 = local_48 + fVar10;
    local_3c = local_res8._4_4_ + *(float *)(lVar7 + 0x11c);
    FUN_18005aca0((float *)&local_res8,-1.0);
    uVar9 = *(uint *)(lVar6 + 0x18) & 0x100;
    if (((*(short *)(lVar6 + 0x174) == 0) && (*(char *)(lVar6 + 0x17a) == '\0')) || (uVar9 != 0)) {
      FUN_18005a670(&local_48,(wchar_t *)(ulonglong)*(uint *)(lVar6 + 0x90),(float *)0x0,2);
      if (uVar9 != 0) {
        *(ushort *)(lVar7 + 0x176) = *(ushort *)(lVar7 + 0x176) | *(ushort *)(lVar6 + 0x176);
      }
    }
    else {
      FUN_18005a670(&local_48,(wchar_t *)(ulonglong)*(uint *)(lVar6 + 0x90),(float *)0x0,0);
      FUN_180064200(&local_48,*(int *)(lVar6 + 0x90),0);
      if ((*(short *)(lVar6 + 0x174) == 0) && (lVar6 == *(longlong *)(lVar8 + 0x1f00))) {
        local_38 = local_48 - 2.0;
        local_30 = local_40 + 2.0;
        local_34 = local_44 - 2.0;
        local_2c = local_3c + 2.0;
        FUN_180064200(&local_38,*(int *)(lVar8 + 0x1efc),2);
      }
    }
    if (*(longlong *)(lVar8 + 0x13b0) == lVar6) {
      *(uint *)(lVar8 + 0x1d90) = *(uint *)(lVar8 + 0x1d90) | 0x80;
    }
    *(undefined4 *)(lVar6 + 0x1dc) = *(undefined4 *)(lVar8 + 0x1d90);
  }
  else {
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    uVar3 = *(undefined8 *)(lVar6 + 0x30);
    uVar5 = *(undefined4 *)(lVar6 + 0x1dc);
    puVar1 = (undefined4 *)(DAT_180115c10 + 0x1d48);
    *(undefined4 *)(DAT_180115c10 + 0x1d88) = *(undefined4 *)(lVar6 + 0x90);
    *(undefined4 *)(lVar7 + 0x1d8c) = *puVar1;
    *(undefined4 *)(lVar7 + 0x1d90) = uVar5;
    *(undefined8 *)(lVar7 + 0x1da4) = uVar2;
    *(ulonglong *)(lVar7 + 0x1dac) =
         CONCAT44((float)((ulonglong)uVar3 >> 0x20) + (float)((ulonglong)uVar2 >> 0x20),
                  (float)uVar3 + (float)uVar2);
    *(undefined8 *)(lVar7 + 0x1d94) = *(undefined8 *)(lVar7 + 0x1da4);
    *(undefined8 *)(lVar7 + 0x1d9c) = *(undefined8 *)(lVar7 + 0x1dac);
  }
  *(undefined4 *)(lVar8 + 0x26b0) = 0xff7fffff;
  *(undefined4 *)(lVar8 + 0x12fc) = uVar4;
  return;
}


void FUN_180053a10(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  float *in_RDX;
  float *in_R8;
  ulonglong in_R9;

  lVar3 = DAT_180115c10;
  if (*(short *)(DAT_180115c10 + 0x2514) < 1) {
    cVar4 = FUN_180054c00((float *)"Calling EndDisabled() too many times!",in_RDX,in_R8,in_R9);
    if (cVar4 != '\0') {
      FID_conflict__assert
                (L"(0) && \"Calling EndDisabled() too many times!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1f13);
      return;
    }
  }
  else {
    uVar1 = *(uint *)(DAT_180115c10 + 0x1d48);
    *(short *)(DAT_180115c10 + 0x2514) = *(short *)(DAT_180115c10 + 0x2514) + -1;
    if (*(int *)(lVar3 + 0x1e98) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x849);
    }
    *(int *)(lVar3 + 0x1e98) = *(int *)(lVar3 + 0x1e98) + -1;
    if (*(int *)(lVar3 + 0x1e98) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x1ea0) + -4 + (longlong)*(int *)(lVar3 + 0x1e98) * 4);
    *(uint *)(lVar3 + 0x1d48) = uVar2;
    if (((uVar1 & 0x400) != 0) && ((uVar2 >> 10 & 1) == 0)) {
      *(undefined4 *)(lVar3 + 0xc28) = *(undefined4 *)(lVar3 + 0x2510);
    }
  }
  return;
}


void FUN_180053b00(void)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  *(short *)(DAT_180115c10 + 0x2514) = *(short *)(DAT_180115c10 + 0x2514) + -1;
  if (*(short *)(lVar1 + 0x2514) < 1) {
    FID_conflict__assert
              (L"g.DisabledStackSize > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1f31);
  }
  if (*(int *)(lVar1 + 0x1e98) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x849);
  }
  *(int *)(lVar1 + 0x1e98) = *(int *)(lVar1 + 0x1e98) + -1;
  if (*(int *)(lVar1 + 0x1e98) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  *(undefined4 *)(lVar1 + 0x1d48) =
       *(undefined4 *)(*(longlong *)(lVar1 + 0x1ea0) + -4 + (longlong)*(int *)(lVar1 + 0x1e98) * 4);
  if (*(int *)(lVar1 + 0x1378) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  *(undefined4 *)(lVar1 + 0xc28) =
       *(undefined4 *)
        (((longlong)*(int *)(lVar1 + 0x1378) + -1) * 0x78 + 0x70 + *(longlong *)(lVar1 + 0x1380));
  return;
}


void FUN_180053bf0(wchar_t *param_1,wchar_t *param_2,undefined *param_3,ulonglong param_4)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  if (*(char *)(DAT_180115c10 + 0x2114) == '\0') {
    param_3 = (undefined *)0x3735;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    param_1 = L"g.DragDropActive";
    FID_conflict__assert
              (L"g.DragDropActive",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3735);
  }
  if (*(char *)(lVar1 + 0x2115) == '\0') {
    param_3 = (undefined *)0x3736;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    param_1 = L"g.DragDropWithinSource && \"Not after a BeginDragDropSource()?\"";
    FID_conflict__assert
              (L"g.DragDropWithinSource && \"Not after a BeginDragDropSource()?\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3736);
  }
  if ((*(byte *)(lVar1 + 0x2118) & 1) == 0) {
    param_1 = *(wchar_t **)(DAT_180115c10 + 0x13a8);
    if ((*(uint *)(param_1 + 10) & 0x2000000) == 0) {
      param_3 = (undefined *)0x2c83;
      param_2 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
      ;
      param_1 = L"GetCurrentWindowRead()->Flags & ImGuiWindowFlags_Tooltip";
      FID_conflict__assert
                (L"GetCurrentWindowRead()->Flags & ImGuiWindowFlags_Tooltip",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x2c83);
    }
    FUN_180053370(param_1,param_2,param_3,param_4);
  }
  if (*(int *)(lVar1 + 0x213c) == -1) {
    FUN_180051740(param_1,param_2,param_3,param_4);
  }
  *(undefined1 *)(lVar1 + 0x2115) = 0;
  return;
}


void FUN_180053ca0(wchar_t *param_1,wchar_t *param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  if (*(char *)(DAT_180115c10 + 0x2114) == '\0') {
    param_3 = 0x37f1;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    param_1 = L"g.DragDropActive";
    FID_conflict__assert
              (L"g.DragDropActive",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x37f1);
  }
  if (*(char *)(lVar1 + 0x2116) == '\0') {
    param_3 = 0x37f2;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    param_1 = L"g.DragDropWithinTarget";
    FID_conflict__assert
              (L"g.DragDropWithinTarget",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x37f2);
  }
  *(undefined1 *)(lVar1 + 0x2116) = 0;
  if (*(char *)(lVar1 + 0x2162) == '\0') {
    return;
  }
  FUN_180051740(param_1,param_2,param_3,param_4);
  return;
}


void FUN_180053d20(undefined8 param_1,wchar_t *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  wchar_t *pwVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  wchar_t wVar10;
  int iVar11;
  char *pcVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  char *pcVar15;
  int iVar16;
  float *pfVar17;
  longlong *plVar18;
  longlong lVar19;

  pwVar6 = DAT_180115c10;
  if ((char)*DAT_180115c10 == '\0') {
    param_3 = (float *)0x15fd;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"g.Initialized",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x15fd);
  }
  if (*(int *)(pwVar6 + 0x97a) == *(int *)(pwVar6 + 0x978)) {
    return;
  }
  if ((char)pwVar6[0x980] == '\0') {
    param_3 = (float *)0x1602;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"g.WithinFrameScope && \"Forgot to call ImGui::NewFrame()?\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1602);
  }
  pfVar17 = *(float **)(pwVar6 + 0x130c);
  pfVar1 = pfVar17 + (longlong)*(int *)(pwVar6 + 0x1308) * 8;
  if (((longlong)*(int *)(pwVar6 + 0x1308) & 0x7ffffffffffffffU) != 0) {
    do {
      if (pfVar17[1] == 2.8026e-45) {
        param_2 = (wchar_t *)pfVar17;
        (**(code **)(pfVar17 + 4))(pwVar6);
      }
      pfVar17 = pfVar17 + 8;
    } while (pfVar17 != pfVar1);
  }
  pwVar14 = DAT_180115c10;
  if ((char)pwVar6[0x42] != '\0') {
    wVar10 = pwVar6[0x1374];
    param_2 = (wchar_t *)(ulonglong)*(uint *)(DAT_180115c10 + 0x9bc);
    if ((int)wVar10 < (int)*(uint *)(DAT_180115c10 + 0x9bc)) {
      do {
        if ((*(uint *)(*(longlong *)(pwVar14 + 0x9d4) + 0x14) & 0x1000000) == 0) {
          pcVar12 = "Missing End()";
          cVar7 = FUN_180054c00((float *)"Missing End()",(float *)param_2,param_3,(ulonglong)param_4
                               );
          if (cVar7 != '\0') {
            param_3 = (float *)0x2859;
            param_2 =
            L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
            ;
            pwVar13 = L"(0) && \"Missing End()\"";
            FID_conflict__assert
                      (L"(0) && \"Missing End()\"",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                       ,0x2859);
            pcVar12 = (char *)pwVar13;
          }
          FUN_180053370(pcVar12,param_2,(undefined *)param_3,(ulonglong)param_4);
        }
        else if ((*(longlong *)(pwVar14 + 0x10f0) == 0) ||
                (*(longlong *)(*(longlong *)(pwVar14 + 0x10f0) + 0x188) !=
                 *(longlong *)(pwVar14 + 0x9d4))) {
          cVar7 = FUN_180054c00((float *)"Missing EndChild()",(float *)param_2,param_3,
                                (ulonglong)param_4);
          if (cVar7 != '\0') {
            param_3 = (float *)0x2853;
            FID_conflict__assert
                      (L"(0) && \"Missing EndChild()\"",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                       ,0x2853);
          }
          FUN_1800537a0();
        }
        else {
          pcVar12 = "Missing EndTable()";
          cVar7 = FUN_180054c00((float *)"Missing EndTable()",(float *)param_2,param_3,
                                (ulonglong)param_4);
          if (cVar7 != '\0') {
            param_3 = (float *)0x284e;
            param_2 =
            L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
            ;
            pwVar13 = L"(0) && \"Missing EndTable()\"";
            FID_conflict__assert
                      (L"(0) && \"Missing EndTable()\"",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                       ,0x284e);
            pcVar12 = (char *)pwVar13;
          }
          FUN_180082700(pcVar12,param_2,param_3,(ulonglong)param_4);
        }
        wVar10 = pwVar6[0x1374];
        param_2 = (wchar_t *)(ulonglong)*(uint *)(pwVar14 + 0x9bc);
      } while ((int)wVar10 < (int)*(uint *)(pwVar14 + 0x9bc));
    }
    if ((int)param_2 == (int)wVar10) {
      FUN_180054dd0((longlong)(pwVar6 + 0x1374),param_2,(ulonglong)param_3,(ulonglong)param_4);
    }
  }
  pwVar14 = DAT_180115c10;
  uVar8 = FUN_180057230();
  pcVar12 = (char *)param_2;
  if ((uVar8 != 0) && (*(uint *)(pwVar14 + 0x84) != uVar8)) {
    param_3 = (float *)0x2823;
    pwVar13 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"(key_mods == 0 || g.IO.KeyMods == key_mods) && \"Mismatching io.KeyCtrl/io.KeyShift/io.KeyAlt/io.KeySuper vs io.KeyMods\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2823);
    pcVar12 = (char *)pwVar13;
  }
  if (*(int *)(pwVar14 + 0x9bc) != 1) {
    param_3 = (float *)0x2826;
    pwVar13 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"g.CurrentWindowStack.Size == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2826);
    pcVar12 = (char *)pwVar13;
  }
  if (*(int *)(pwVar14 + 0x9bc) < 1) {
    param_3 = (float *)0x833;
    pwVar13 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
    ;
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
    pcVar12 = (char *)pwVar13;
  }
  pwVar14 = (wchar_t *)**(undefined8 **)(pwVar14 + 0x9c0);
  if (*(char *)((longlong)pwVar14 + 0xd5) == '\0') {
    param_3 = (float *)0x2827;
    pwVar13 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    pwVar14 = L"g.CurrentWindowStack[0].Window->IsFallbackWindow";
    FID_conflict__assert
              (L"g.CurrentWindowStack[0].Window->IsFallbackWindow",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2827);
    pcVar12 = (char *)pwVar13;
  }
  pwVar13 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x9fe) != 0) {
    if ((char)DAT_180115c10[0x82] == '\0') {
      *(undefined4 *)(DAT_180115c10 + 0x1384) = *(undefined4 *)(DAT_180115c10 + 0xa06);
    }
    if ((*(char *)((longlong)pwVar13 + 0x2749) == '\0') && (cVar7 = FUN_18004fcf0(), cVar7 != '\0'))
    {
      pcVar12 = (char *)(ulonglong)*(uint *)(pwVar13 + 0x1384);
      FUN_18009f180("Programmer error: %d visible items with conflicting ID!",(longlong)pcVar12,
                    param_3,param_4);
      FUN_18008ee40("Code should use PushID()/PopID() in loops, or append \"##xx\" to same-label identifiers!"
                    ,(longlong)pcVar12,param_3,param_4);
      FUN_18008ee40("Empty label e.g. Button(\"\") == same ID as parent widget/node. Use Button(\"##xx\") instead!"
                    ,(longlong)pcVar12,param_3,param_4);
      FUN_18008ee40("Set io.ConfigDebugHighlightIdConflicts=false to disable this warning in non-programmers builds."
                    ,(longlong)pcVar12,param_3,param_4);
      FUN_18009caa0();
      if ((char)pwVar13[0x45] == '\0') {
        pcVar15 = "(Hold CTRL to ";
      }
      else {
        FUN_18009f180("(Hold CTRL to: use ",(longlong)pcVar12,param_3,param_4);
        FUN_180066590(0.0,0.0);
        cVar7 = FUN_18009d610((byte *)"Item Picker");
        if (cVar7 != '\0') {
          *(char *)((longlong)DAT_180115c10 + 0x2749) = '\x01';
        }
        FUN_180066590(0.0,0.0);
        pcVar15 = " to break in item call-stack, or ";
      }
      FUN_18009f180(pcVar15,(longlong)pcVar12,param_3,param_4);
      FUN_180066590(0.0,0.0);
      cVar7 = FUN_18009d610((byte *)"Open FAQ->About ID Stack System");
      if ((cVar7 != '\0') && (*(code **)(pwVar13 + 0x5fc) != (code *)0x0)) {
        pcVar12 = "https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage";
        (**(code **)(pwVar13 + 0x5fc))(pwVar13);
      }
      FUN_180066590(0.0,0.0);
      pwVar14 = L")";
      FUN_18009f180(")",(longlong)pcVar12,param_3,param_4);
      FUN_180053370(pwVar14,(wchar_t *)pcVar12,(undefined *)param_3,(ulonglong)param_4);
    }
  }
  if ((0 < *(int *)(pwVar13 + 0x1372)) && (cVar7 = FUN_18004fcf0(), cVar7 != '\0')) {
    FUN_18009caa0();
    FUN_18009f180("(Hold CTRL to:",(longlong)pcVar12,param_3,param_4);
    FUN_180066590(0.0,-1.0);
    cVar7 = FUN_18009d610((byte *)"Enable Asserts");
    if (cVar7 != '\0') {
      *(char *)((longlong)pwVar13 + 0x85) = '\x01';
    }
    FUN_180066590(0.0,0.0);
    pwVar14 = L")";
    FUN_18009f180(")",(longlong)pcVar12,param_3,param_4);
    FUN_180053370(pwVar14,(wchar_t *)pcVar12,(undefined *)param_3,(ulonglong)param_4);
  }
  if ((*(longlong *)(pwVar6 + 0x604) != 0) &&
     ((*(longlong *)(pwVar6 + 0x12d4) != *(longlong *)(pwVar6 + 0x12dc) ||
      (*(longlong *)(pwVar6 + 0x12d8) != *(longlong *)(pwVar6 + 0x12e0))))) {
    if ((pwVar6[0x1386] & L'\x80') != L'\0') {
      param_4 = (float *)(double)*(float *)(pwVar6 + 0x12d8);
      FUN_180052d90(0x1800e1c90,(ulonglong)(byte)pwVar6[0x12d4],(double)*(float *)(pwVar6 + 0x12d6),
                    (ulonglong)param_4);
    }
    pcVar12 = (char *)FUN_1800571f0();
    param_3 = (float *)(pwVar6 + 0x12d4);
    pwVar14 = pwVar6;
    (**(code **)(pwVar6 + 0x604))();
  }
  lVar4 = *(longlong *)(pwVar6 + 0x9d4);
  *(char *)((longlong)pwVar6 + 0x1301) = '\0';
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xce) == '\0')) {
    *(undefined1 *)(lVar4 + 0xcc) = 0;
  }
  FUN_180053370(pwVar14,(wchar_t *)pcVar12,(undefined *)param_3,(ulonglong)param_4);
  pwVar13 = DAT_180115c10;
  if (*(longlong *)(DAT_180115c10 + 0x106c) != 0) {
    FUN_18005fc20(pwVar14,pcVar12,param_3,param_4);
  }
  if ((((*(longlong *)(pwVar13 + 0xf80) != 0) &&
       (*(char *)((longlong)DAT_180115c10 + 0x1f91) != '\0')) &&
      (*(int *)(DAT_180115c10 + 0xff0) == 0)) &&
     (((*(int *)(DAT_180115c10 + 0x1028) == 0 &&
       (uVar8 = *(uint *)(pwVar13 + 0xfca), (uVar8 & 0xf) != 0)) && (-1 < (char)uVar8)))) {
    FUN_18005eac0();
  }
  if ((char)pwVar6[0x108a] == '\0') goto LAB_18005429c;
  wVar10 = pwVar6[0x10b1];
  if (*(int *)(pwVar6 + 0x108e) + 1 < *(int *)(pwVar6 + 0x978)) {
    if ((pwVar6[0x108c] & L' ') == L'\0') {
      uVar8 = *(uint *)(pwVar6 + 0x1090);
      pwVar14 = (wchar_t *)(ulonglong)uVar8;
      if ((uVar8 != 0xffffffff) && (uVar9 = FUN_180059dd0(uVar8), (char)uVar9 != '\0'))
      goto LAB_180054250;
    }
    bVar5 = true;
  }
  else {
LAB_180054250:
    bVar5 = false;
  }
  if (((char)wVar10 != '\0') || (bVar5)) {
    FUN_180051740(pwVar14,pcVar12,param_3,(ulonglong)param_4);
  }
  if ((((char)pwVar6[0x108a] != '\0') && (*(int *)(pwVar6 + 0x108e) + 1 < *(int *)(pwVar6 + 0x978)))
     && ((pwVar6[0x108c] & L'\x01') == L'\0')) {
    pwVar14 = L"⸮.敧牡";
    *(char *)((longlong)pwVar6 + 0x2115) = '\x01';
    FUN_180067f50("⸮.敧牡",pcVar12,(undefined *)param_3,(ulonglong)param_4);
    *(char *)((longlong)pwVar6 + 0x2115) = '\0';
  }
LAB_18005429c:
  *(undefined4 *)(pwVar6 + 0x97a) = *(undefined4 *)(pwVar6 + 0x978);
  *(char *)(pwVar6 + 0x980) = '\0';
  FUN_18006a670(pwVar14,pcVar12,(ulonglong)param_3,(ulonglong)param_4);
  iVar11 = *(int *)(pwVar6 + 0x9b6);
  pwVar14 = pwVar6 + 0x9b4;
  if (iVar11 < 0) {
    iVar11 = iVar11 + iVar11 / 2;
    iVar16 = 0;
    if (0 < iVar11) {
      iVar16 = iVar11;
    }
    FUN_18006d6f0((int *)pwVar14,iVar16);
  }
  pwVar14[0] = L'\0';
  pwVar14[1] = L'\0';
  FUN_18006d6f0((int *)pwVar14,*(int *)(pwVar6 + 0x9a4));
  plVar18 = *(longlong **)(pwVar6 + 0x9a8);
  plVar2 = plVar18 + *(int *)(pwVar6 + 0x9a4);
  if (((longlong)*(int *)(pwVar6 + 0x9a4) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar4 = *plVar18;
      if ((*(char *)(lVar4 + 0xcc) == '\0') || ((*(uint *)(lVar4 + 0x14) & 0x1000000) == 0)) {
        FUN_18004c950((int *)pwVar14,lVar4);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar2);
  }
  if (*(int *)(pwVar6 + 0x9a4) != *(int *)pwVar14) {
    FID_conflict__assert
              (L"g.Windows.Size == g.WindowsTempSortBuffer.Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1646);
  }
  iVar11 = *(int *)pwVar14;
  *(int *)pwVar14 = *(int *)(pwVar6 + 0x9a4);
  *(int *)(pwVar6 + 0x9a4) = iVar11;
  uVar3 = *(undefined4 *)(pwVar6 + 0x9b6);
  *(undefined4 *)(pwVar6 + 0x9b6) = *(undefined4 *)(pwVar6 + 0x9a6);
  *(undefined4 *)(pwVar6 + 0x9a6) = uVar3;
  uVar9 = *(undefined8 *)(pwVar6 + 0x9b8);
  *(undefined8 *)(pwVar6 + 0x9b8) = *(undefined8 *)(pwVar6 + 0x9a8);
  *(undefined8 *)(pwVar6 + 0x9a8) = uVar9;
  *(undefined4 *)(pwVar6 + 0x68) = *(undefined4 *)(pwVar6 + 0x9cc);
  *(undefined1 *)(*(longlong *)(pwVar6 + 0x1c) + 0x20) = 0;
  *(undefined8 *)(pwVar6 + 0x560) = *(undefined8 *)(pwVar6 + 0x74);
  *(char *)(pwVar6 + 0x5da) = '\0';
  pwVar6[0x7c] = L'\0';
  pwVar6[0x7d] = L'\0';
  pwVar6[0x7e] = L'\0';
  pwVar6[0x7f] = L'\0';
  iVar11 = *(int *)(pwVar6 + 0x5de);
  if (iVar11 < 0) {
    iVar11 = iVar11 + iVar11 / 2;
    iVar16 = 0;
    if (0 < iVar11) {
      iVar16 = iVar11;
    }
    FUN_18006d5b0((int *)(pwVar6 + 0x5dc),iVar16);
  }
  pwVar6[0x5dc] = L'\0';
  pwVar6[0x5dd] = L'\0';
  lVar19 = *(longlong *)(pwVar6 + 0x130c);
  lVar4 = (longlong)*(int *)(pwVar6 + 0x1308) * 0x20 + lVar19;
  if ((longlong)*(int *)(pwVar6 + 0x1308) * 0x20 != 0) {
    do {
      if (*(int *)(lVar19 + 4) == 3) {
        (**(code **)(lVar19 + 0x10))(pwVar6,lVar19);
      }
      lVar19 = lVar19 + 0x20;
    } while (lVar19 != lVar4);
  }
  return;
}


void FUN_180054450(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;

  lVar6 = DAT_180115c10;
  lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if (*(int *)(DAT_180115c10 + 0x1ea8) < 1) {
    FID_conflict__assert
              (L"g.GroupStack.Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2b13);
    if (*(int *)(lVar6 + 0x1ea8) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
  }
  lVar3 = *(longlong *)(lVar6 + 0x1eb0);
  lVar8 = (longlong)*(int *)(lVar6 + 0x1ea8) * 0x38;
  if (*(int *)(lVar8 + -0x38 + lVar3) != *(int *)(lVar2 + 0x10)) {
    FID_conflict__assert
              (L"group_data.WindowID == window->ID",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2b16);
  }
  if (*(char *)(lVar2 + 0x159) != '\0') {
    FUN_180054b80();
  }
  fStack_30 = *(float *)(lVar2 + 0x130);
  if (*(float *)(lVar2 + 0x130) <= *(float *)(lVar6 + 0x1d9c)) {
    fStack_30 = *(float *)(lVar6 + 0x1d9c);
  }
  fStack_2c = *(float *)(lVar2 + 0x134);
  if (*(float *)(lVar2 + 0x134) <= *(float *)(lVar6 + 0x1da0)) {
    fStack_2c = *(float *)(lVar6 + 0x1da0);
  }
  local_38 = *(float *)(lVar8 + -0x34 + lVar3);
  if (fStack_30 <= local_38) {
    fStack_30 = local_38;
  }
  fVar9 = *(float *)(lVar8 + -0x30 + lVar3);
  if (fStack_2c <= fVar9) {
    fStack_2c = fVar9;
  }
  fStack_34 = *(float *)(lVar8 + -0x30 + lVar3);
  *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(lVar8 + -0x34 + lVar3);
  *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)(lVar8 + -0x24 + lVar3);
  fVar9 = *(float *)(lVar8 + -0x2c + lVar3);
  if (fVar9 <= fStack_30) {
    fVar9 = fStack_30;
  }
  fVar10 = *(float *)(lVar8 + -0x28 + lVar3);
  if (fVar10 <= fStack_2c) {
    fVar10 = fStack_2c;
  }
  *(float *)(lVar2 + 0x130) = fVar9;
  *(float *)(lVar2 + 0x134) = fVar10;
  *(undefined4 *)(lVar2 + 0x15c) = *(undefined4 *)(lVar8 + -0x1c + lVar3);
  *(undefined4 *)(lVar2 + 0x164) = *(undefined4 *)(lVar8 + -0x18 + lVar3);
  *(undefined8 *)(lVar2 + 0x140) = *(undefined8 *)(lVar8 + -0x14 + lVar3);
  *(undefined4 *)(lVar2 + 0x150) = *(undefined4 *)(lVar8 + -0xc + lVar3);
  *(undefined1 *)(lVar2 + 0x158) = *(undefined1 *)(lVar8 + -2 + lVar3);
  if (*(char *)(lVar6 + 0x2678) != '\0') {
    *(undefined4 *)(lVar6 + 0x26b0) = 0xff7fffff;
  }
  if (*(char *)(lVar8 + -1 + lVar3) == '\0') {
    if (*(int *)(lVar6 + 0x1ea8) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x849);
    }
    *(int *)(lVar6 + 0x1ea8) = *(int *)(lVar6 + 0x1ea8) + -1;
    return;
  }
  fVar9 = *(float *)(lVar8 + -0xc + lVar3);
  fVar10 = *(float *)(lVar2 + 0x154);
  if (*(float *)(lVar2 + 0x154) <= fVar9) {
    fVar10 = fVar9;
  }
  *(float *)(lVar2 + 0x150) = fVar10;
  local_res8 = fStack_30 - local_38;
  local_resc = fStack_2c - fStack_34;
  FUN_18005aca0(&local_res8,-1.0);
  FUN_18005a670(&local_38,(wchar_t *)0x0,(float *)0x0,1);
  iVar7 = *(int *)(lVar6 + 0x141c);
  if (((*(int *)(lVar8 + -8 + lVar3) == iVar7) || (*(int *)(lVar6 + 0x1420) != iVar7)) ||
     (iVar7 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar8 + -4 + lVar3) == '\0') && (*(char *)(lVar6 + 0x1459) == '\x01')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (!bVar4) {
    if (!bVar5) goto LAB_1800546bb;
    iVar7 = *(int *)(lVar6 + 0x1450);
  }
  *(int *)(lVar6 + 0x1d88) = iVar7;
LAB_1800546bb:
  *(ulonglong *)(lVar6 + 0x1d94) = CONCAT44(fStack_34,local_38);
  *(ulonglong *)(lVar6 + 0x1d9c) = CONCAT44(fStack_2c,fStack_30);
  if ((*(char *)(lVar8 + -3 + lVar3) == '\0') && (*(int *)(lVar6 + 0x1404) != 0)) {
    *(uint *)(lVar6 + 0x1d90) = *(uint *)(lVar6 + 0x1d90) | 0x80;
  }
  if ((bVar4) && (*(char *)(lVar6 + 0x142d) != '\0')) {
    *(uint *)(lVar6 + 0x1d90) = *(uint *)(lVar6 + 0x1d90) | 4;
  }
  uVar1 = *(uint *)(lVar6 + 0x1d90);
  *(uint *)(lVar6 + 0x1d90) = uVar1 | 0x20;
  if (bVar5) {
    *(uint *)(lVar6 + 0x1d90) = uVar1 | 0x60;
  }
  if (*(int *)(lVar6 + 0x1ea8) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x849);
  }
  *(int *)(lVar6 + 0x1ea8) = *(int *)(lVar6 + 0x1ea8) + -1;
  if (*(char *)(lVar6 + 0x1e50) != '\0') {
    FUN_180071260(*(int **)(lVar2 + 0x2c0),&local_38,&fStack_30,0xffff00ff,0.0,0,1.0);
  }
  return;
}


void FUN_180054790(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *in_RCX;
  wchar_t *in_RDX;
  undefined *in_R8;
  ulonglong in_R9;

  lVar3 = DAT_180115c10;
  lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if ((*(uint *)(lVar2 + 0x14) & 0x4000000) == 0) {
    in_R8 = (undefined *)0x2e2d;
    in_RDX =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    in_RCX = L"window->Flags & ImGuiWindowFlags_Popup";
    FID_conflict__assert
              (L"window->Flags & ImGuiWindowFlags_Popup",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2e2d);
  }
  if (*(int *)(lVar3 + 0x1ec8) < 1) {
    in_R8 = (undefined *)0x2e2e;
    in_RDX =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    in_RCX = L"g.BeginPopupStack.Size > 0";
    FID_conflict__assert
              (L"g.BeginPopupStack.Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2e2e);
  }
  lVar4 = DAT_180115c10;
  if ((((*(longlong *)(lVar3 + 0x1f00) == lVar2) && (*(longlong *)(DAT_180115c10 + 0x1f00) == lVar2)
       ) && (*(char *)(DAT_180115c10 + 0x1f91) != '\0')) && (*(int *)(DAT_180115c10 + 0x1f0c) == 0))
  {
    *(uint *)(DAT_180115c10 + 0x1f94) = *(uint *)(DAT_180115c10 + 0x1f94) & 0xfffffff2;
    *(uint *)(lVar4 + 0x1f94) = *(uint *)(lVar4 + 0x1f94) | 2;
  }
  uVar1 = *(undefined4 *)(lVar3 + 0x12fc);
  if ((*(uint *)(lVar2 + 0x14) & 0x1000000) != 0) {
    *(undefined4 *)(lVar3 + 0x12fc) = *(undefined4 *)(lVar2 + 0x10);
  }
  FUN_180053370(in_RCX,in_RDX,in_R8,in_R9);
  *(undefined4 *)(lVar3 + 0x12fc) = uVar1;
  return;
}


void FUN_180054860(undefined8 param_1,wchar_t *param_2,undefined *param_3,ulonglong param_4)

{
  wchar_t *pwVar1;

  pwVar1 = *(wchar_t **)(DAT_180115c10 + 0x13a8);
  if ((*(uint *)(pwVar1 + 10) & 0x2000000) == 0) {
    param_3 = (undefined *)0x2c83;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    pwVar1 = L"GetCurrentWindowRead()->Flags & ImGuiWindowFlags_Tooltip";
    FID_conflict__assert
              (L"GetCurrentWindowRead()->Flags & ImGuiWindowFlags_Tooltip",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2c83);
  }
  FUN_180053370(pwVar1,param_2,param_3,param_4);
  return;
}


void FUN_1800548a0(void)

{
  char *pcVar1;
  uint uVar2;

  pcVar1 = DAT_180115c10;
  if (*DAT_180115c10 == '\0') {
    FID_conflict__assert
              (L"g.Initialized",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27f1);
  }
  if ((*(float *)(pcVar1 + 0x18) <= 0.0) && (*(int *)(pcVar1 + 0x12f0) != 0)) {
    FID_conflict__assert
              (L"(g.IO.DeltaTime > 0.0f || g.FrameCount == 0) && \"Need a positive DeltaTime!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27f2);
  }
  if ((*(int *)(pcVar1 + 0x12f0) != 0) && (*(int *)(pcVar1 + 0x12f4) != *(int *)(pcVar1 + 0x12f0)))
  {
    FID_conflict__assert
              (L"(g.FrameCount == 0 || g.FrameCountEnded == g.FrameCount) && \"Forgot to call Render() or EndFrame() at the end of the previous frame?\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27f3);
  }
  if ((*(float *)(pcVar1 + 0x10) < 0.0) || (*(float *)(pcVar1 + 0x14) < 0.0)) {
    FID_conflict__assert
              (L"g.IO.DisplaySize.x >= 0.0f && g.IO.DisplaySize.y >= 0.0f && \"Invalid DisplaySize value!\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27f4);
  }
  if ((*(int *)(*(longlong *)(pcVar1 + 0x38) + 0x50) < 1) ||
     (*(char *)(*(longlong *)(pcVar1 + 0x38) + 0x21) == '\0')) {
    FID_conflict__assert
              (L"g.IO.Fonts->IsBuilt() && \"Font Atlas not built! Make sure you called ImGui_ImplXXXX_NewFrame() function for renderer backend, which should call io.Fonts->GetTexDataAsRGBA32() / GetTexDataAsAlpha8()\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27f5);
  }
  if (*(float *)(pcVar1 + 0xd1c) <= 0.0) {
    FID_conflict__assert
              (L"g.Style.CurveTessellationTol > 0.0f && \"Invalid style setting!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27f6);
  }
  if (*(float *)(pcVar1 + 0xd20) <= 0.0) {
    FID_conflict__assert
              (L"g.Style.CircleTessellationMaxError > 0.0f && \"Invalid style setting!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27f7);
  }
  if ((*(float *)(pcVar1 + 0xc28) < 0.0) || (1.0 < *(float *)(pcVar1 + 0xc28))) {
    FID_conflict__assert
              (L"g.Style.Alpha >= 0.0f && g.Style.Alpha <= 1.0f && \"Invalid style setting!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27f8);
  }
  if ((*(float *)(pcVar1 + 0xc44) < 1.0) || (*(float *)(pcVar1 + 0xc48) < 1.0)) {
    FID_conflict__assert
              (L"g.Style.WindowMinSize.x >= 1.0f && g.Style.WindowMinSize.y >= 1.0f && \"Invalid style setting!\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27f9);
  }
  if (*(float *)(pcVar1 + 0xc40) <= 0.0) {
    FID_conflict__assert
              (L"g.Style.WindowBorderHoverPadding > 0.0f && \"Invalid style setting!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27fa);
  }
  if (2 < *(int *)(pcVar1 + 0xc54) + 1U) {
    FID_conflict__assert
              (L"g.Style.WindowMenuButtonPosition == ImGuiDir_None || g.Style.WindowMenuButtonPosition == ImGuiDir_Left || g.Style.WindowMenuButtonPosition == ImGuiDir_Right"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27fb);
  }
  if (1 < *(uint *)(pcVar1 + 0xcdc)) {
    FID_conflict__assert
              (L"g.Style.ColorButtonPosition == ImGuiDir_Left || g.Style.ColorButtonPosition == ImGuiDir_Right"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27fc);
  }
  if ((((pcVar1[0x84] != '\0') && (pcVar1[0x85] == '\0')) && (pcVar1[0x86] == '\0')) &&
     ((pcVar1[0x87] == '\0' && (*(longlong *)(pcVar1 + 0x26c8) == 0)))) {
    FID_conflict__assert
              (L"g.IO.ConfigErrorRecoveryEnableAssert || g.IO.ConfigErrorRecoveryEnableDebugLog || g.IO.ConfigErrorRecoveryEnableTooltip || g.ErrorCallback != 0"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2800);
  }
  uVar2 = *(uint *)(pcVar1 + 8);
  if ((uVar2 & 4) != 0) {
    uVar2 = uVar2 & 0xfffffffb;
    pcVar1[0x59] = '\x01';
    *(uint *)(pcVar1 + 8) = uVar2;
  }
  if ((uVar2 & 8) != 0) {
    pcVar1[0x5a] = '\0';
    *(uint *)(pcVar1 + 8) = uVar2 & 0xfffffff7;
  }
  if ((*(longlong *)(pcVar1 + 0xbc8) != 0) &&
     ((*(code **)(pcVar1 + 0xbe0) == (code *)0x0 || (*(code **)(pcVar1 + 0xbe0) == FUN_180061b60))))
  {
    *(code **)(pcVar1 + 0xbe0) = FUN_1800492a0;
  }
  if ((*(longlong *)(pcVar1 + 0xbd0) != 0) &&
     ((*(code **)(pcVar1 + 0xbe8) == (code *)0x0 || (*(code **)(pcVar1 + 0xbe8) == FUN_180061e10))))
  {
    *(code **)(pcVar1 + 0xbe8) = FUN_1800492c0;
  }
  return;
}


void FUN_180054b80(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;

  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if (*(char *)(lVar1 + 0x159) == '\0') {
    FID_conflict__assert
              (L"window->DC.IsSetPos",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x27cf);
  }
  *(undefined1 *)(lVar1 + 0x159) = 0;
  fVar2 = *(float *)(lVar1 + 0x130);
  if (*(float *)(lVar1 + 0x130) <= *(float *)(lVar1 + 0x118)) {
    fVar2 = *(float *)(lVar1 + 0x118);
  }
  fVar3 = *(float *)(lVar1 + 0x134);
  if (*(float *)(lVar1 + 0x134) <= *(float *)(lVar1 + 0x11c)) {
    fVar3 = *(float *)(lVar1 + 0x11c);
  }
  *(float *)(lVar1 + 0x130) = fVar2;
  *(float *)(lVar1 + 0x134) = fVar3;
  return;
}


undefined1 FUN_180054c00(float *param_1,float *param_2,float *param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  float local_res10;
  float local_res14;

  lVar3 = DAT_180115c10;
  lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
  pcVar5 = (char *)param_1;
  if (*(byte *)(DAT_180115c10 + 0x86) != 0) {
    if (*(char *)(DAT_180115c10 + 0x26e0) != '\0') {
      if ((*(byte *)(DAT_180115c10 + 0x270c) & 1) == 0) {
        *(int *)(DAT_180115c10 + 0x2738) = *(int *)(DAT_180115c10 + 0x2738) + 1;
      }
      else {
        param_4 = (ulonglong)*(byte *)(DAT_180115c10 + 0x87);
        pcVar5 = "[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n";
        param_2 = (float *)(ulonglong)*(byte *)(DAT_180115c10 + 0x85);
        param_3 = (float *)(ulonglong)*(byte *)(DAT_180115c10 + 0x86);
        FUN_180052d90(0x1800e4f30,param_2,param_3,param_4);
      }
    }
    if ((*(byte *)(lVar3 + 0x270c) & 1) == 0) {
      *(int *)(lVar3 + 0x2738) = *(int *)(lVar3 + 0x2738) + 1;
    }
    else if (lVar2 == 0) {
      param_2 = (float *)&DAT_1800e34c0;
      pcVar5 = "[imgui-error] In window \'%s\': %s\n";
      param_3 = param_1;
      FUN_180052d90(0x1800e4f78,&DAT_1800e34c0,param_1,param_4);
    }
    else {
      param_2 = *(float **)(lVar2 + 8);
      pcVar5 = "[imgui-error] In window \'%s\': %s\n";
      param_3 = param_1;
      FUN_180052d90(0x1800e4f78,param_2,param_1,param_4);
    }
  }
  *(undefined1 *)(lVar3 + 0x26e0) = 0;
  if (*(char *)(lVar3 + 0x87) != '\0') {
    if (*(char *)(lVar3 + 0x1300) != '\0') {
      cVar4 = FUN_18004fcf0();
      if (cVar4 != '\0') {
        iVar1 = *(int *)(lVar3 + 0x26e4);
        if (iVar1 < 0x14) {
          pcVar5 = "In window \'%s\': %s";
          if (lVar2 == 0) {
            param_2 = (float *)&DAT_1800e34c0;
            param_3 = param_1;
            FUN_18009f180("In window \'%s\': %s",0x1800e34c0,param_1,param_4);
          }
          else {
            param_2 = *(float **)(lVar2 + 8);
            param_3 = param_1;
            FUN_18009f180("In window \'%s\': %s",(longlong)param_2,param_1,param_4);
            if ((*(char *)(lVar2 + 0xd5) == '\0') || (*(char *)(lVar2 + 0xcd) != '\0')) {
              pcVar5 = (char *)FUN_1800569b0();
              param_2 = (float *)(lVar2 + 0x28);
              local_res10 = *(float *)(lVar2 + 0x30) + *param_2;
              param_3 = &local_res10;
              local_res14 = *(float *)(lVar2 + 0x34) + *(float *)(lVar2 + 0x2c);
              param_4 = 0xff0000ff;
              FUN_180071260((int *)pcVar5,param_2,param_3,0xff0000ff,0.0,0,1.0);
            }
          }
          iVar1 = *(int *)(lVar3 + 0x26e4);
        }
        if (iVar1 == 0x14) {
          pcVar5 = "(and more errors)";
          FUN_18009f180("(and more errors)",(longlong)param_2,param_3,param_4);
        }
        FUN_180053370(pcVar5,(wchar_t *)param_2,(undefined *)param_3,param_4);
      }
    }
    *(int *)(lVar3 + 0x26e4) = *(int *)(lVar3 + 0x26e4) + 1;
  }
  if (*(code **)(lVar3 + 0x26c8) != (code *)0x0) {
    (**(code **)(lVar3 + 0x26c8))(lVar3,*(undefined8 *)(lVar3 + 0x26d0),param_1);
  }
  return *(undefined1 *)(lVar3 + 0x85);
}


void FUN_180054dd0(longlong param_1,wchar_t *param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  char *pcVar7;
  wchar_t *pwVar8;
  bool bVar9;

  lVar4 = DAT_180115c10;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x21e0);
  while ((lVar1 != 0 && (*(longlong *)(lVar1 + 0x188) == *(longlong *)(lVar4 + 0x13a8)))) {
    pcVar7 = "Missing EndTable()";
    cVar5 = FUN_180054c00((float *)"Missing EndTable()",(float *)param_2,(float *)param_3,param_4);
    if (cVar5 != '\0') {
      param_3 = 0x286a;
      param_2 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
      ;
      pwVar8 = L"(0) && \"Missing EndTable()\"";
      FID_conflict__assert
                (L"(0) && \"Missing EndTable()\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x286a);
      pcVar7 = (char *)pwVar8;
    }
    FUN_180082700(pcVar7,param_2,param_3,param_4);
    lVar1 = *(longlong *)(lVar4 + 0x21e0);
  }
  lVar1 = *(longlong *)(lVar4 + 0x13a8);
  plVar2 = *(longlong **)(lVar4 + 0x2248);
  while ((plVar2 != (longlong *)0x0 && (*plVar2 == lVar1))) {
    cVar5 = FUN_180054c00((float *)"Missing EndTabBar()",(float *)param_2,(float *)param_3,param_4);
    if (cVar5 != '\0') {
      param_3 = 0x2873;
      param_2 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
      ;
      FID_conflict__assert
                (L"(0) && \"Missing EndTabBar()\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x2873);
    }
    FUN_180095da0();
    plVar2 = *(longlong **)(lVar4 + 0x2248);
  }
  lVar3 = *(longlong *)(lVar4 + 0x2300);
  while ((lVar3 != 0 && (**(longlong **)(lVar3 + 0x28) == lVar1))) {
    cVar5 = FUN_180054c00((float *)"Missing EndMultiSelect()",(float *)param_2,(float *)param_3,
                          param_4);
    if (cVar5 != '\0') {
      param_3 = 0x2878;
      param_2 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
      ;
      FID_conflict__assert
                (L"(0) && \"Missing EndMultiSelect()\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x2878);
    }
    FUN_180095670();
    lVar3 = *(longlong *)(lVar4 + 0x2300);
  }
  if (*(char *)(lVar1 + 0x17b) != '\0') {
    pcVar7 = "Missing EndMenuBar()";
    cVar5 = FUN_180054c00((float *)"Missing EndMenuBar()",(float *)param_2,(float *)param_3,param_4)
    ;
    if (cVar5 != '\0') {
      param_3 = 0x287d;
      param_2 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
      ;
      pwVar8 = L"(0) && \"Missing EndMenuBar()\"";
      FID_conflict__assert
                (L"(0) && \"Missing EndMenuBar()\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x287d);
      pcVar7 = (char *)pwVar8;
    }
    FUN_180095400(pcVar7,param_2,param_3);
  }
  if ((int)*(short *)(param_1 + 4) < *(int *)(lVar1 + 0x1a0)) {
    do {
      cVar5 = FUN_180054c00((float *)"Missing TreePop()",(float *)param_2,(float *)param_3,param_4);
      if (cVar5 != '\0') {
        param_3 = 0x2882;
        param_2 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"(0) && \"Missing TreePop()\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2882);
      }
      FUN_18009f740();
    } while ((int)*(short *)(param_1 + 4) < *(int *)(lVar1 + 0x1a0));
  }
  sVar6 = *(short *)(param_1 + 0xe);
  pwVar8 = (wchar_t *)(ulonglong)*(uint *)(lVar4 + 0x1ea8);
  if ((int)sVar6 < (int)*(uint *)(lVar4 + 0x1ea8)) {
    do {
      cVar5 = FUN_180054c00((float *)"Missing EndGroup()",(float *)pwVar8,(float *)param_3,param_4);
      if (cVar5 != '\0') {
        param_3 = 0x2887;
        FID_conflict__assert
                  (L"(0) && \"Missing EndGroup()\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2887);
      }
      FUN_180054450();
      sVar6 = *(short *)(param_1 + 0xe);
      pwVar8 = (wchar_t *)(ulonglong)*(uint *)(lVar4 + 0x1ea8);
    } while ((int)sVar6 < (int)*(uint *)(lVar4 + 0x1ea8));
  }
  if ((int)pwVar8 != (int)sVar6) {
    param_3 = 0x288a;
    pwVar8 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"g.GroupStack.Size == state_in->SizeOfGroupStack",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x288a);
  }
  if ((int)*(short *)(param_1 + 2) < *(int *)(lVar1 + 0x108)) {
    do {
      cVar5 = FUN_180054c00((float *)"Missing PopID()",(float *)pwVar8,(float *)param_3,param_4);
      if (cVar5 != '\0') {
        param_3 = 0x288d;
        pwVar8 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"(0) && \"Missing PopID()\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x288d);
      }
      FUN_180062210();
    } while ((int)*(short *)(param_1 + 2) < *(int *)(lVar1 + 0x108));
  }
  bVar9 = *(short *)(lVar4 + 0x2514) == *(short *)(param_1 + 0x14);
  if (*(short *)(param_1 + 0x14) < *(short *)(lVar4 + 0x2514)) {
    do {
      cVar5 = FUN_180054c00((float *)"Missing EndDisabled()",(float *)pwVar8,(float *)param_3,
                            param_4);
      if (cVar5 != '\0') {
        param_3 = 0x2892;
        pwVar8 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"(0) && \"Missing EndDisabled()\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2892);
      }
      if ((*(uint *)(lVar4 + 0x1d48) & 0x400) == 0) {
        FUN_180053b00();
        if (*(int *)(lVar4 + 0x1378) < 1) {
          param_3 = 0x83c;
          pwVar8 =
          L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
          ;
          FID_conflict__assert
                    (L"Size > 0",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x83c);
        }
        *(undefined1 *)
         ((longlong)*(int *)(lVar4 + 0x1378) * 0x78 + -10 + *(longlong *)(lVar4 + 0x1380)) = 0;
      }
      else {
        FUN_180053a10();
      }
      bVar9 = *(short *)(lVar4 + 0x2514) == *(short *)(param_1 + 0x14);
    } while (!bVar9 && *(short *)(param_1 + 0x14) <= *(short *)(lVar4 + 0x2514));
  }
  if (!bVar9) {
    param_3 = 0x289b;
    pwVar8 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"g.DisabledStackSize == state_in->SizeOfDisabledStack",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x289b);
  }
  if ((int)*(short *)(param_1 + 6) < *(int *)(lVar4 + 0x1e58)) {
    do {
      cVar5 = FUN_180054c00((float *)"Missing PopStyleColor()",(float *)pwVar8,(float *)param_3,
                            param_4);
      if (cVar5 != '\0') {
        param_3 = 0x289e;
        pwVar8 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"(0) && \"Missing PopStyleColor()\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x289e);
      }
      FUN_180062370(1);
    } while ((int)*(short *)(param_1 + 6) < *(int *)(lVar4 + 0x1e58));
  }
  if ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar4 + 0x1e98)) {
    do {
      cVar5 = FUN_180054c00((float *)"Missing PopItemFlag()",(float *)pwVar8,(float *)param_3,
                            param_4);
      if (cVar5 != '\0') {
        param_3 = 0x28a3;
        pwVar8 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"(0) && \"Missing PopItemFlag()\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x28a3);
      }
      FUN_180062270();
    } while ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar4 + 0x1e98));
  }
  if ((int)*(short *)(param_1 + 8) < *(int *)(lVar4 + 0x1e68)) {
    do {
      cVar5 = FUN_180054c00((float *)"Missing PopStyleVar()",(float *)pwVar8,(float *)param_3,
                            param_4);
      if (cVar5 != '\0') {
        param_3 = 0x28a8;
        pwVar8 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"(0) && \"Missing PopStyleVar()\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x28a8);
      }
      FUN_180062450(1);
    } while ((int)*(short *)(param_1 + 8) < *(int *)(lVar4 + 0x1e68));
  }
  if ((int)*(short *)(param_1 + 10) < *(int *)(lVar4 + 0x1e78)) {
    do {
      cVar5 = FUN_180054c00((float *)"Missing PopFont()",(float *)pwVar8,(float *)param_3,param_4);
      if (cVar5 != '\0') {
        param_3 = 0x28ad;
        pwVar8 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"(0) && \"Missing PopFont()\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x28ad);
      }
      FUN_180062140();
    } while ((int)*(short *)(param_1 + 10) < *(int *)(lVar4 + 0x1e78));
  }
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x1e88)) {
    do {
      cVar5 = FUN_180054c00((float *)"Missing PopFocusScope()",(float *)pwVar8,(float *)param_3,
                            param_4);
      if (cVar5 != '\0') {
        param_3 = 0x28b2;
        pwVar8 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"(0) && \"Missing PopFocusScope()\"",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x28b2);
      }
      FUN_180062070();
    } while ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x1e88));
  }
  return;
}


float * FUN_1800552a0(float *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined7 extraout_var;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res10;
  float local_res14;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;

  lVar4 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  fVar7 = *(float *)(lVar4 + 0xd10);
  fVar6 = *(float *)(lVar4 + 0xd0c);
  lVar3 = **(longlong **)(lVar4 + 0x1ef0);
  fVar11 = *(float *)(lVar3 + 0xc);
  fVar10 = *(float *)(lVar3 + 8);
  fVar9 = fVar11 + *(float *)(lVar3 + 0x14);
  fVar8 = fVar10 + *(float *)(lVar3 + 0x10);
  if (fVar9 - fVar11 <= fVar7 + fVar7) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = -fVar7;
  }
  if (fVar8 - fVar10 <= fVar6 + fVar6) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = -fVar6;
  }
  uVar1 = *(uint *)(param_2 + 0x14);
  fVar10 = fVar10 - fVar6;
  fVar11 = fVar11 - fVar7;
  fVar8 = fVar8 + fVar6;
  fVar9 = fVar9 + fVar7;
  local_88 = fVar10;
  local_84 = fVar11;
  local_80 = fVar8;
  local_7c = fVar9;
  if ((uVar1 >> 0x1c & 1) == 0) {
    if ((uVar1 >> 0x1a & 1) == 0) {
      if ((uVar1 >> 0x19 & 1) == 0) {
        FID_conflict__assert
                  (L"0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2f13);
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x28);
        return param_1;
      }
      if (*(longlong *)(lVar4 + 0x13a8) != param_2) {
        FID_conflict__assert
                  (L"g.CurrentWindow == window",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2efe);
      }
      fVar7 = *(float *)(lVar4 + 0xd14);
      FUN_18005b6a0(&local_res10);
      if (((*(int *)(lVar4 + 0x100) == 1) &&
          (cVar5 = FUN_18005b9a0(), (int)CONCAT71(extraout_var,cVar5) == 1)) &&
         (fVar6 = (fVar7 * 0.0 + local_res10) - *(float *)(param_2 + 0x30) * 0.5, fVar10 <= fVar6))
      {
        fVar10 = (fVar7 * -20.0 + local_res14) - *(float *)(param_2 + 0x34);
        if (((fVar11 <= fVar10) && (fVar6 + *(float *)(param_2 + 0x30) <= fVar8)) &&
           (fVar10 + *(float *)(param_2 + 0x34) <= fVar9)) {
          *param_1 = fVar6;
          param_1[1] = fVar10;
          return param_1;
        }
      }
      if (((*(char *)(lVar4 + 0x1ef8) == '\0') || (*(char *)(lVar4 + 0x1ef9) == '\0')) ||
         (*(char *)(lVar4 + 0x59) != '\0')) {
        local_90 = fVar7 * 24.0 + local_res10;
        local_8c = fVar7 * 24.0 + local_res14;
      }
      else {
        local_8c = local_res14 + 8.0;
        local_90 = local_res10 + 16.0;
      }
      local_98 = local_res10 - 16.0;
      local_94 = local_res14 - 8.0;
      local_res10 = fVar7 * 16.0 + local_res10;
      local_res14 = fVar7 * 10.0 + local_res14;
      FUN_180055710(param_1,&local_res10,(float *)(param_2 + 0x30),(uint *)(param_2 + 0xe8),
                    &local_88,&local_98,2);
      return param_1;
    }
    local_98 = *(float *)(param_2 + 0x28);
    local_94 = *(float *)(param_2 + 0x2c);
    local_90 = local_98;
    local_8c = local_94;
  }
  else {
    if (*(longlong *)(lVar4 + 0x13a8) != param_2) {
      FID_conflict__assert
                (L"g.CurrentWindow == window",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x2ee8);
    }
    iVar2 = *(int *)(lVar4 + 0x1378);
    if ((iVar2 + -2 < 0) || (iVar2 <= iVar2 + -2)) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    lVar3 = *(longlong *)(((longlong)iVar2 + -2) * 0x78 + *(longlong *)(lVar4 + 0x1380));
    if (*(char *)(lVar3 + 0x17b) == '\0') {
      local_98 = *(float *)(lVar3 + 0x28) + *(float *)(lVar4 + 0xc80);
      local_94 = -3.4028235e+38;
      local_8c = 3.4028235e+38;
      local_90 = ((*(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30)) - *(float *)(lVar4 + 0xc80))
                 - *(float *)(lVar3 + 0xc0);
    }
    else {
      local_94 = *(float *)(lVar3 + 0x25c);
      local_8c = *(float *)(lVar3 + 0x264);
      local_98 = -3.4028235e+38;
      local_90 = 3.4028235e+38;
    }
  }
  FUN_180055710(param_1,(float *)(param_2 + 0x28),(float *)(param_2 + 0x30),(uint *)(param_2 + 0xe8)
                ,&local_88,&local_98,0);
  return param_1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_180055710(float *param_1,float *param_2,float *param_3,uint *param_4,float *param_5,
                     float *param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_88 [6] [16];

  fVar8 = param_2[1];
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = param_5[3];
  fVar4 = param_5[1];
  if (fVar4 <= fVar8) {
    fVar9 = fVar3 - fVar1;
    if (fVar8 <= fVar3 - fVar1) {
      fVar9 = fVar8;
    }
  }
  else {
    fVar9 = fVar4;
  }
  fVar8 = *param_5;
  fVar11 = *param_2;
  if (fVar8 <= fVar11) {
    fVar14 = param_5[2] - fVar2;
    if (fVar11 <= fVar14) {
      fVar14 = fVar11;
    }
  }
  else {
    fVar14 = fVar8;
  }
  if (param_7 == 1) {
    uVar5 = *param_4;
    local_88[0] = _DAT_1800e72d0;
    iVar7 = -(uint)(uVar5 != 0xffffffff);
    do {
      if (iVar7 == -1) {
        uVar6 = uVar5;
LAB_1800557e6:
        if (uVar6 == 3) {
          fVar9 = *param_6;
          fVar11 = param_6[3];
        }
        else if (uVar6 == 1) {
          fVar9 = *param_6;
LAB_18005582f:
          fVar11 = param_6[1] - fVar1;
        }
        else {
          fVar9 = 0.0;
          fVar11 = 0.0;
          if (uVar6 == 0) {
            fVar11 = param_6[3];
            fVar9 = param_6[2] - fVar2;
          }
          else if (uVar6 == 2) {
            fVar9 = param_6[2] - fVar2;
            goto LAB_18005582f;
          }
        }
        if ((((fVar8 <= fVar9) && (fVar4 <= fVar11)) && (fVar2 + fVar9 <= param_5[2])) &&
           (fVar1 + fVar11 <= fVar3)) {
          param_1[1] = fVar11;
          *param_4 = uVar6;
          goto LAB_1800558aa;
        }
      }
      else {
        uVar6 = *(uint *)(local_88[0] + (longlong)iVar7 * 4);
        if (uVar6 != uVar5) goto LAB_1800557e6;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    *param_4 = 0xffffffff;
  }
  else {
    if ((param_7 & 0xfffffffd) == 0) {
      uVar5 = *param_4;
      local_88[0]._8_4_ = 2;
      local_88[0]._0_8_ = 0x300000001;
      local_88[0]._12_4_ = 0;
      iVar7 = -(uint)(uVar5 != 0xffffffff);
      do {
        if (iVar7 == -1) {
          uVar6 = uVar5;
LAB_180055918:
          fVar11 = fVar3;
          if (uVar6 == 0) {
            fVar10 = *param_6;
LAB_180055921:
            fVar13 = fVar8;
            if (uVar6 == 2) {
              fVar11 = param_6[1];
              goto LAB_180055930;
            }
            if (uVar6 != 3) goto LAB_180055930;
            fVar12 = param_6[3];
          }
          else {
            fVar10 = param_5[2];
            if (uVar6 != 1) goto LAB_180055921;
            fVar13 = param_6[2];
LAB_180055930:
            fVar12 = fVar4;
          }
          if (((fVar2 <= fVar10 - fVar13) || (1 < uVar6)) &&
             ((fVar1 <= fVar11 - fVar12 || (1 < uVar6 - 2)))) {
            if (uVar6 == 0) {
              fVar14 = *param_6 - fVar2;
            }
            else if (uVar6 == 1) {
              fVar14 = param_6[2];
            }
            else if (uVar6 == 2) {
              fVar9 = param_6[1] - fVar1;
            }
            else if (uVar6 == 3) {
              fVar9 = param_6[3];
            }
            if (fVar14 <= fVar8) {
              fVar14 = fVar8;
            }
            *param_4 = uVar6;
            if (fVar9 <= fVar4) {
              fVar9 = fVar4;
            }
            *param_1 = fVar14;
            param_1[1] = fVar9;
            return param_1;
          }
        }
        else {
          uVar6 = *(uint *)(local_88[0] + (longlong)iVar7 * 4);
          if (uVar6 != uVar5) goto LAB_180055918;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
    *param_4 = 0xffffffff;
    if (param_7 == 2) {
      *(ulonglong *)param_1 =
           CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) + 2.0,
                    (float)*(undefined8 *)param_2 + 2.0);
      return param_1;
    }
  }
  fVar9 = *param_3 + *param_2;
  if (param_5[2] <= fVar9) {
    fVar9 = param_5[2];
  }
  fVar9 = fVar9 - *param_3;
  fVar8 = param_3[1] + param_2[1];
  if (fVar9 <= *param_5) {
    fVar9 = *param_5;
  }
  if (param_5[3] <= fVar8) {
    fVar8 = param_5[3];
  }
  fVar8 = fVar8 - param_3[1];
  if (fVar8 <= param_5[1]) {
    fVar8 = param_5[1];
  }
  param_1[1] = fVar8;
LAB_1800558aa:
  *param_1 = fVar9;
                    // WARNING: Read-only address (ram,0x0001800e72d0) is written
  return param_1;
}


void FUN_180055a00(float *param_1,char param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fStackX_1c;

  lVar7 = DAT_180115c10;
  lVar11 = 0;
  lVar9 = 0;
  if (((param_2 == '\0') && (lVar10 = *(longlong *)(DAT_180115c10 + 0x13c8), lVar10 != 0)) &&
     ((*(uint *)(lVar10 + 0x14) & 0x200) == 0)) {
    lVar9 = lVar10;
  }
  fVar1 = *(float *)(DAT_180115c10 + 0xc90);
  uVar6 = *(undefined8 *)(DAT_180115c10 + 0xc90);
  fVar2 = *(float *)(DAT_180115c10 + 0xc40);
  uVar12 = *(int *)(DAT_180115c10 + 0x1348) - 1;
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar3 = *(float *)(DAT_180115c10 + 0xc94);
  if (*(float *)(DAT_180115c10 + 0xc94) <= fVar2) {
    fVar3 = fVar2;
  }
  if (-1 < (int)uVar12) {
    lVar10 = lVar9;
    do {
      if (*(int *)(lVar7 + 0x1348) <= (int)uVar12) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x1350) + (ulonglong)uVar12 * 8);
      lVar8 = lVar10;
      if (((*(char *)(lVar9 + 0xcd) != '\0') && (*(char *)(lVar9 + 0xd4) == '\0')) &&
         ((*(uint *)(lVar9 + 0x14) >> 9 & 1) == 0)) {
        uVar5 = CONCAT44(fVar3,fVar1);
        if ((*(uint *)(lVar9 + 0x14) & 0x42) != 0) {
          uVar5 = uVar6;
        }
        fVar2 = *param_1;
        if (*(float *)(lVar9 + 0x208) - (float)uVar5 <= fVar2) {
          fStackX_1c = (float)((ulonglong)uVar5 >> 0x20);
          fVar4 = param_1[1];
          if (((*(float *)(lVar9 + 0x20c) - fStackX_1c <= fVar4) &&
              (fVar2 < (float)uVar5 + *(float *)(lVar9 + 0x210))) &&
             (fVar4 < fStackX_1c + *(float *)(lVar9 + 0x214))) {
            if (*(short *)(lVar9 + 0x278) != 0) {
              fVar14 = (float)(int)*(short *)(lVar9 + 0x27c) + *(float *)(lVar9 + 0x28);
              if ((((fVar14 <= fVar2) &&
                   (fVar13 = (float)(int)*(short *)(lVar9 + 0x27e) + *(float *)(lVar9 + 0x2c),
                   fVar13 <= fVar4)) && (fVar2 < (float)(int)*(short *)(lVar9 + 0x278) + fVar14)) &&
                 (fVar4 < (float)(int)*(short *)(lVar9 + 0x27a) + fVar13)) goto LAB_180055c2f;
            }
            if (param_2 != '\0') break;
            lVar8 = lVar9;
            if (lVar10 != 0) {
              lVar8 = lVar10;
            }
            if ((lVar11 == 0) &&
               ((*(longlong *)(lVar7 + 0x13c8) == 0 ||
                (*(longlong *)(lVar9 + 0x3b0) !=
                 *(longlong *)(*(longlong *)(lVar7 + 0x13c8) + 0x3b0))))) {
              lVar11 = lVar9;
            }
            if ((lVar8 != 0) && (lVar9 = lVar8, lVar11 != 0)) break;
          }
        }
      }
LAB_180055c2f:
      uVar12 = uVar12 - 1;
      lVar9 = lVar8;
      lVar10 = lVar8;
    } while (-1 < (int)uVar12);
  }
  *param_3 = lVar9;
  if (param_4 != (longlong *)0x0) {
    *param_4 = lVar11;
  }
  return;
}


char * FUN_180055c80(char *param_1,char *param_2)

{
  char *pcVar1;

  pcVar1 = (char *)0xffffffffffffffff;
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  if (param_1 < pcVar1) {
    while (*param_1 != '\0') {
      if ((*param_1 == '#') && (param_1[1] == '#')) {
        return param_1;
      }
      param_1 = param_1 + 1;
      if (pcVar1 <= param_1) {
        return param_1;
      }
    }
  }
  return param_1;
}


longlong FUN_180055cb0(byte *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;

  uVar4 = 0xffffffff;
  bVar3 = *param_1;
  while (bVar3 != 0) {
    pbVar5 = param_1 + 1;
    if (((bVar3 == 0x23) && (*pbVar5 == 0x23)) && (param_1[2] == 0x23)) {
      uVar4 = 0xffffffff;
    }
    uVar4 = uVar4 >> 8 ^
            *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar4 & 0xff) ^ (ulonglong)bVar3) * 4);
    param_1 = pbVar5;
    bVar3 = *pbVar5;
  }
  lVar6 = *(longlong *)(DAT_180115c10 + 0x25e8);
  lVar2 = (longlong)*(int *)(DAT_180115c10 + 0x25e0) * 0x48;
  lVar1 = lVar2 + lVar6;
  if (lVar2 != 0) {
    do {
      if (*(uint *)(lVar6 + 8) == ~uVar4) {
        return lVar6;
      }
      lVar6 = lVar6 + 0x48;
    } while (lVar6 != lVar1);
  }
  return 0;
}


undefined8 FUN_180055d60(uint param_1)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;

  iVar1 = *(int *)(DAT_180115c10 + 5000);
  puVar2 = *(uint **)(DAT_180115c10 + 0x1390);
  uVar4 = (longlong)iVar1;
  puVar5 = puVar2;
  if (iVar1 != 0) {
    do {
      uVar3 = uVar4 >> 1;
      if (puVar5[uVar3 * 4] < param_1) {
        puVar5 = puVar5 + uVar3 * 4 + 4;
        uVar3 = uVar4 + (-1 - uVar3);
      }
      uVar4 = uVar3;
    } while (uVar3 != 0);
  }
  if ((puVar5 == puVar2 + (longlong)iVar1 * 4) || (*puVar5 != param_1)) {
    return 0;
  }
  return *(undefined8 *)(puVar5 + 2);
}


void FUN_180055df0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;

  uVar2 = 0xffffffff;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    pbVar3 = param_1 + 1;
    if (((bVar1 == 0x23) && (*pbVar3 == 0x23)) && (param_1[2] == 0x23)) {
      uVar2 = 0xffffffff;
    }
    uVar2 = uVar2 >> 8 ^
            *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)bVar1) * 4);
    param_1 = pbVar3;
    bVar1 = *pbVar3;
  }
  FUN_180055d60(~uVar2);
  return;
}


ulonglong FUN_180055e50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;

  lVar3 = DAT_180115c10;
  plVar2 = *(longlong **)(DAT_180115c10 + 0x1350);
  plVar1 = plVar2 + *(int *)(DAT_180115c10 + 0x1348);
  plVar4 = plVar2;
  if (plVar2 < plVar1) {
    do {
      if (*plVar4 == param_1) break;
      plVar4 = plVar4 + 1;
    } while (plVar4 < plVar1);
    if (plVar2 <= plVar4) goto LAB_180055e93;
  }
  else {
LAB_180055e93:
    if (plVar4 < plVar1) goto LAB_180055eb1;
  }
  FID_conflict__assert
            (L"it >= Data && it < Data + Size",
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
             ,0x855);
LAB_180055eb1:
  return (longlong)plVar4 - *(longlong *)(lVar3 + 0x1350) >> 3 & 0xffffffff;
}


ulonglong FUN_180055ed0(longlong param_1)

{
  short sVar1;
  longlong lVar2;

  lVar2 = DAT_180115c10;
  sVar1 = *(short *)(param_1 + 0xe2);
  if (*(longlong *)(param_1 + 0x3b0) != param_1) {
    FID_conflict__assert
              (L"window->RootWindow == window",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2f5b);
  }
  if ((sVar1 < 0) || (*(int *)(lVar2 + 0x1358) <= (int)sVar1)) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x1360) + (longlong)sVar1 * 8) != param_1) {
    FID_conflict__assert
              (L"g.WindowsFocusOrder[order] == window",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2f5c);
  }
  return (longlong)sVar1 & 0xffffffff;
}


longlong FUN_180055f80(uint param_1,uint param_2,int param_3)

{
  longlong lVar1;

  while( true ) {
    if ((((int)param_1 < 0) || (*(int *)(DAT_180115c10 + 0x1358) <= (int)param_1)) ||
       (param_1 == param_2)) {
      return 0;
    }
    lVar1 = *(longlong *)(*(longlong *)(DAT_180115c10 + 0x1360) + (ulonglong)param_1 * 8);
    if (((*(char *)(lVar1 + 0xcd) != '\0') && (lVar1 == *(longlong *)(lVar1 + 0x3b0))) &&
       ((*(uint *)(lVar1 + 0x14) & 0x20000) == 0)) break;
    param_1 = param_1 + param_3;
  }
  return lVar1;
}


int * FUN_180055fe0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;

  lVar2 = DAT_180115c10;
  piVar4 = (int *)0x0;
  if (*(longlong *)(DAT_180115c10 + 0x25f8) != 0) {
    piVar4 = (int *)(*(longlong *)(DAT_180115c10 + 0x25f8) + 4);
  }
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((*piVar4 == param_1) && (*(char *)((longlong)piVar4 + 0xf) == '\0')) break;
    lVar1 = *(longlong *)(lVar2 + 0x25f8);
    piVar3 = (int *)0x0;
    if (lVar1 != 0) {
      piVar3 = (int *)(lVar1 + 4);
    }
    if ((piVar4 < piVar3) || ((int *)(*(int *)(lVar2 + 0x25f0) + lVar1) <= piVar4)) {
      FID_conflict__assert
                (L"p >= begin() && p < end()",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0x2d6);
    }
    piVar4 = (int *)((longlong)piVar4 + (longlong)piVar4[-1]);
    piVar3 = (int *)(*(longlong *)(lVar2 + 0x25f8) + (longlong)*(int *)(lVar2 + 0x25f0));
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


int * FUN_1800560e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;

  lVar2 = DAT_180115c10;
  iVar1 = *(int *)(param_1 + 700);
  if (iVar1 == -1) {
    piVar3 = FUN_180055fe0(*(int *)(param_1 + 0x10));
    return piVar3;
  }
  if ((iVar1 < 4) || (*(int *)(DAT_180115c10 + 0x25f0) <= iVar1)) {
    FID_conflict__assert
              (L"off >= 4 && off < Buf.Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0x2da);
  }
  return (int *)((longlong)iVar1 + *(longlong *)(lVar2 + 0x25f8));
}


uint FUN_180056150(uint param_1)

{
  uint uVar1;
  uint uVar2;

  uVar2 = param_1 & 0xffff0fff;
  if (7 < uVar2 - 0x20f) {
    return param_1;
  }
  if ((uVar2 - 0x20f & 0xfffffffb) == 0) {
    return param_1 | 0x1000;
  }
  if ((uVar2 - 0x210 & 0xfffffffb) == 0) {
    return param_1 | 0x2000;
  }
  if ((uVar2 - 0x211 & 0xfffffffb) == 0) {
    return param_1 | 0x4000;
  }
  uVar1 = 0x8000;
  if ((uVar2 - 0x212 & 0xfffffffb) != 0) {
    uVar1 = 0;
  }
  return uVar1 | param_1;
}


void FUN_1800561d0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;

  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  iVar7 = piVar2[1];
  iVar6 = *(int *)param_1[1] + iVar1;
  if (iVar7 < iVar6) {
    if (iVar7 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar7 / 2 + iVar7;
    }
    iVar3 = iVar6;
    if (iVar6 < iVar4) {
      iVar3 = iVar4;
    }
    if (iVar7 < iVar3) {
      puVar5 = (undefined8 *)
               (*(code *)PTR__malloc_base_1801121b8)((longlong)iVar3 * 8,DAT_180115c20);
      if (DAT_180115c10 != 0) {
        FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),puVar5,
                      (longlong)iVar3 * 8);
      }
      if (*(undefined8 **)(piVar2 + 2) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar5,*(undefined8 **)(piVar2 + 2),(longlong)*piVar2 << 3);
        FUN_18005b5c0(*(longlong *)(piVar2 + 2));
      }
      *(undefined8 **)(piVar2 + 2) = puVar5;
      piVar2[1] = iVar3;
    }
  }
  *piVar2 = iVar6;
  piVar2 = (int *)param_1[1];
  if (*piVar2 != 0) {
    FUN_1800d1c20((undefined8 *)(*(longlong *)(*param_1 + 8) + (longlong)iVar1 * 8),
                  *(undefined8 **)(piVar2 + 2),(longlong)*piVar2 << 3);
    iVar1 = piVar2[1];
    if (iVar1 < 0) {
      iVar6 = iVar1 / 2 + iVar1;
      iVar7 = 0;
      if (0 < iVar6) {
        iVar7 = iVar6;
      }
      if (iVar1 < iVar7) {
        puVar5 = (undefined8 *)
                 (*(code *)PTR__malloc_base_1801121b8)((longlong)iVar7 * 8,DAT_180115c20);
        if (DAT_180115c10 != 0) {
          FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),puVar5,
                        (longlong)iVar7 * 8);
        }
        if (*(undefined8 **)(piVar2 + 2) != (undefined8 *)0x0) {
          FUN_1800d1c20(puVar5,*(undefined8 **)(piVar2 + 2),(longlong)*piVar2 << 3);
          FUN_18005b5c0(*(longlong *)(piVar2 + 2));
        }
        *(undefined8 **)(piVar2 + 2) = puVar5;
        piVar2[1] = iVar7;
      }
    }
    *piVar2 = 0;
  }
  return;
}


void FUN_180056370(longlong param_1,longlong param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;

  lVar1 = DAT_180115c10;
  if (param_1 == 0) {
    uVar4 = *(int *)(DAT_180115c10 + 0x1358) - 1;
  }
  else {
    iVar5 = -1;
    uVar4 = *(uint *)(param_1 + 0x14);
    while ((uVar4 & 0x1000000) != 0) {
      param_1 = *(longlong *)(param_1 + 0x3a0);
      iVar5 = 0;
      uVar4 = *(uint *)(param_1 + 0x14);
    }
    uVar2 = FUN_180055ed0(param_1);
    uVar4 = iVar5 + (int)uVar2;
  }
  for (; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
    if (*(int *)(lVar1 + 0x1358) <= (int)uVar4) {
      param_3 = 0x833;
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x1360) + (ulonglong)uVar4 * 8);
    if (((lVar3 != param_2) && (*(char *)(lVar3 + 0xcd) != '\0')) &&
       ((*(uint *)(lVar3 + 0x14) & 0x10200) != 0x10200)) goto LAB_180056420;
  }
  lVar3 = 0;
LAB_180056420:
  FUN_180056440(lVar3,(ulonglong)param_4,param_3);
  return;
}


void FUN_180056440(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;

  lVar5 = DAT_180115c10;
  uVar8 = param_2 & 0xffffffff;
  uVar4 = param_2;
  if ((((param_2 & 2) != 0) && (*(longlong *)(DAT_180115c10 + 0x1f00) != param_1)) &&
     (0 < *(int *)(DAT_180115c10 + 0x1eb8))) {
    uVar4 = *(ulonglong *)(DAT_180115c10 + 0x1ec0);
    lVar6 = (longlong)*(int *)(DAT_180115c10 + 0x1eb8) * 0x38;
    param_3 = lVar6 + uVar4;
    if (lVar6 != 0) {
      do {
        lVar6 = *(longlong *)(uVar4 + 8);
        if (((lVar6 != 0) && ((*(uint *)(lVar6 + 0x14) & 0x8000000) != 0)) &&
           ((*(char *)(lVar6 + 0xcc) != '\0' || (*(char *)(lVar6 + 0xcd) != '\0')))) {
          if (param_1 == 0) {
LAB_1800564d6:
            if ((*(byte *)(DAT_180115c10 + 0x270c) & 4) != 0) {
              if (param_1 == 0) {
                pcVar7 = "<NULL>";
              }
              else {
                pcVar7 = *(char **)(param_1 + 8);
              }
              param_3 = *(ulonglong *)(lVar6 + 8);
              FUN_180052d90(0x1800e5ce0,pcVar7,param_3,uVar8);
            }
            lVar5 = DAT_180115c10;
            if (((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x3b0), param_1 == lVar3)) &&
               ((*(uint *)(param_1 + 0x14) & 0x2000) == 0)) {
              lVar6 = *(longlong *)(lVar6 + 0x3b0);
              uVar4 = FUN_180055e50(lVar3);
              iVar1 = (int)uVar4;
              uVar4 = FUN_180055e50(lVar6);
              uVar8 = *(ulonglong *)(lVar5 + 0x1350);
              iVar2 = (int)uVar4;
              lVar6 = (longlong)iVar2;
              if (iVar1 < iVar2) {
                uVar4 = (longlong)((iVar2 - iVar1) + -1) << 3;
                FUN_1800d1c20((undefined8 *)(uVar8 + (longlong)iVar1 * 8),
                              (undefined8 *)(uVar8 + (longlong)(iVar1 + 1) * 8),uVar4);
                if ((iVar2 + -1 < 0) || (*(int *)(lVar5 + 0x1348) <= iVar2 + -1)) {
                  uVar4 = 0x833;
                  FID_conflict__assert
                            (L"i >= 0 && i < Size",
                             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                             ,0x833);
                }
                *(longlong *)(*(longlong *)(lVar5 + 0x1350) + -8 + lVar6 * 8) = lVar3;
                lVar5 = FUN_1800578c0();
                FUN_180051ce0(lVar5,0,uVar4,uVar8);
                return;
              }
              param_3 = (longlong)(iVar1 - iVar2) << 3;
              FUN_1800d1c20((undefined8 *)(uVar8 + (longlong)(iVar2 + 1) * 8),
                            (undefined8 *)(uVar8 + lVar6 * 8),param_3);
              if ((iVar2 < 0) || (*(int *)(lVar5 + 0x1348) <= iVar2)) {
                param_3 = 0x833;
                FID_conflict__assert
                          (L"i >= 0 && i < Size",
                           L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                           ,0x833);
              }
              *(longlong *)(*(longlong *)(lVar5 + 0x1350) + lVar6 * 8) = lVar3;
            }
            lVar5 = FUN_1800578c0();
            FUN_180051ce0(lVar5,0,param_3,uVar8);
            return;
          }
          lVar3 = param_1;
          if (*(longlong *)(param_1 + 0x3b0) != lVar6) {
            while (lVar3 != lVar6) {
              lVar3 = *(longlong *)(lVar3 + 0x3a8);
              if (lVar3 == 0) goto LAB_1800564d6;
            }
          }
        }
        uVar4 = uVar4 + 0x38;
      } while (uVar4 != param_3);
    }
  }
  if ((((param_2 & 1) != 0) && (param_1 != 0)) &&
     ((lVar6 = *(longlong *)(param_1 + 0x3d8), lVar6 != 0 && (*(char *)(lVar6 + 0xcd) != '\0')))) {
    param_1 = lVar6;
  }
  if (*(longlong *)(DAT_180115c10 + 0x1f00) != param_1) {
    FUN_1800678a0(param_1,uVar4,param_3,uVar8);
    if (param_1 == 0) {
      *(undefined4 *)(lVar5 + 0x1efc) = 0;
      iVar1 = 0;
      *(undefined4 *)(lVar5 + 0x1f0c) = 0;
    }
    else {
      if (*(char *)(lVar5 + 0x1ef9) != '\0') {
        *(undefined1 *)(lVar5 + 0x1efa) = 1;
      }
      *(undefined4 *)(lVar5 + 0x1efc) = *(undefined4 *)(param_1 + 0x3e0);
      *(undefined4 *)(lVar5 + 0x1f0c) = 0;
      iVar1 = *(int *)(param_1 + 0x418);
    }
    FUN_180067580(iVar1);
    *(undefined1 *)(lVar5 + 0x1efb) = 0;
    *(undefined8 *)(lVar5 + 0x1f48) = 0xffffffffffffffff;
    FUN_180051ce0(param_1,0,param_3,uVar8);
  }
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x3b0) == 0) {
      param_3 = 0x2fee;
      FID_conflict__assert
                (L"window == 0 || window->RootWindow != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x2fee);
    }
    lVar6 = *(longlong *)(param_1 + 0x3b0);
  }
  if ((((*(int *)(lVar5 + 0x141c) != 0) && (*(longlong *)(lVar5 + 0x1440) != 0)) &&
      (*(longlong *)(*(longlong *)(lVar5 + 0x1440) + 0x3b0) != lVar6)) &&
     (*(char *)(lVar5 + 0x142a) == '\0')) {
    FUN_180066c00(0,0,param_3,uVar8);
  }
  if (param_1 != 0) {
    FUN_180050570(lVar6);
    if (((*(uint *)(lVar6 + 0x14) | *(uint *)(param_1 + 0x14)) >> 0xd & 1) == 0) {
      FUN_1800503e0(lVar6);
    }
  }
  return;
}


undefined * FUN_180056780(void)

{
  undefined *puVar1;

  if (*(code **)(DAT_180115c10 + 0xbe0) == (code *)0x0) {
    return &DAT_1800d8c40;
  }
                    // WARNING: Could not recover jumptable at 0x000180056793. Too many branches
                    // WARNING: Treating indirect jump as call
  puVar1 = (undefined *)(**(code **)(DAT_180115c10 + 0xbe0))();
  return puVar1;
}


void FUN_1800567a0(float *param_1)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;

  local_18 = *param_1;
  fStack_14 = param_1[1];
  fStack_10 = param_1[2];
  fStack_c = param_1[3] * *(float *)(DAT_180115c10 + 0xc28);
  FUN_180051e70(&local_18);
  return;
}


void FUN_1800567e0(int param_1,float param_2)

{
  float *pfVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;

  pfVar1 = (float *)(DAT_180115c10 + 0xd24 + (longlong)param_1 * 0x10);
  local_18 = *pfVar1;
  fStack_14 = pfVar1[1];
  fStack_10 = pfVar1[2];
  fStack_c = pfVar1[3] * param_2 * *(float *)(DAT_180115c10 + 0xc28);
  FUN_180051e70(&local_18);
  return;
}


ulonglong FUN_180056830(ulonglong param_1,float param_2)

{
  ulonglong uVar1;
  float fVar2;

  fVar2 = param_2 * *(float *)(DAT_180115c10 + 0xc28);
  uVar1 = param_1 & 0xffffffff;
  if (fVar2 < 1.0) {
    uVar1 = (ulonglong)
            ((int)(longlong)((float)(param_1 >> 0x18 & 0xff) * fVar2) << 0x18 |
            (uint)param_1 & 0xffffff);
  }
  return uVar1;
}


undefined8 * FUN_180056870(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;

  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if ((*(longlong *)(lVar1 + 0x1c0) != 0) ||
     (lVar2 = 0x270, *(longlong *)(DAT_180115c10 + 0x21e0) != 0)) {
    lVar2 = 0x240;
  }
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + lVar1) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(lVar1 + 0x118) >> 0x20),
                      (float)*(undefined8 *)(lVar2 + lVar1) - (float)*(undefined8 *)(lVar1 + 0x118))
  ;
  return param_1;
}


undefined8 FUN_1800568c0(void)

{
  return DAT_180115c10;
}


undefined8 * FUN_1800568d0(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x118);
  return param_1;
}


longlong FUN_1800568f0(void)

{
  longlong lVar1;

  lVar1 = *(longlong *)(DAT_180115c10 + 0x48);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(DAT_180115c10 + 0x38);
    if (*(int *)(lVar1 + 0x50) < 1) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    lVar1 = **(longlong **)(lVar1 + 0x58);
  }
  return lVar1;
}


char * FUN_180056940(void)

{
  longlong lVar1;
  char *pcVar2;

  lVar1 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  pcVar2 = (char *)(**(longlong **)(lVar1 + 0x1ef0) + 0x50);
  if (*pcVar2 == '\0') {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}


undefined8 * FUN_180056990(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)(DAT_180115c10 + 0x10d0);
  return param_1;
}


void FUN_1800569b0(void)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  FUN_180057910(**(longlong **)(lVar1 + 0x1ef0),1,"##Foreground");
  return;
}


float FUN_180056a00(void)

{
  return *(float *)(DAT_180115c10 + 0xc6c) + *(float *)(DAT_180115c10 + 0xc6c) +
         *(float *)(DAT_180115c10 + 0x10c0);
}


uint FUN_180056a20(byte *param_1)

{
  longlong *plVar1;
  uint uVar2;

  plVar1 = *(longlong **)(DAT_180115c10 + 0x13a8);
  if ((int)plVar1[0x21] < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  uVar2 = FUN_180058260(param_1,0,*(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4));
  if (*(uint *)(*plVar1 + 0x1400) == uVar2) {
    FUN_180052900(uVar2,0xb,(char *)param_1,0);
  }
  return uVar2;
}


void FUN_180056ab0(char *param_1)

{
  FUN_180056c10(*(longlong **)(DAT_180115c10 + 0x13a8),param_1);
  return;
}


uint FUN_180056ad0(longlong *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int local_res10;
  byte local_res14 [4];

  local_res10 = param_2;
  if ((int)param_1[0x21] < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  pbVar2 = (byte *)&local_res10;
  uVar3 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar3 & 0xff) ^ (ulonglong)bVar1) * 4);
  } while (pbVar2 < local_res14);
  uVar3 = ~uVar3;
  if (*(uint *)(*param_1 + 0x1400) == uVar3) {
    FUN_180052900(uVar3,4,(char *)(longlong)param_2,0);
  }
  return uVar3;
}


uint FUN_180056b80(longlong *param_1,byte *param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;

  if ((int)param_1[0x21] < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  uVar2 = param_3 - (longlong)param_2;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  uVar1 = FUN_180058260(param_2,uVar2,
                        *(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4));
  if (*(uint *)(*param_1 + 0x1400) == uVar1) {
    FUN_180052900(uVar1,0xb,(char *)param_2,param_3);
  }
  return uVar1;
}


uint FUN_180056c10(longlong *param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 local_res10;

  local_res10 = param_2;
  if ((int)param_1[0x21] < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  pbVar2 = (byte *)&local_res10;
  uVar3 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar3 & 0xff) ^ (ulonglong)bVar1) * 4);
  } while (pbVar2 < (byte *)((longlong)register0x00000020 + 0x18U));
  uVar3 = ~uVar3;
  if (*(uint *)(*param_1 + 0x1400) == uVar3) {
    FUN_180052900(uVar3,0xc,param_2,0);
  }
  return uVar3;
}


uint FUN_180056cc0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 local_10;

  if (*(int *)(param_1 + 0x108) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  pbVar3 = (byte *)&local_18;
  fVar4 = (float)*(undefined8 *)(param_1 + 0x128);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x128) >> 0x20);
  local_18 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) - fVar5,(float)*param_2 - fVar4);
  uVar2 = ~*(uint *)(*(longlong *)(param_1 + 0x110) + -4 + (longlong)*(int *)(param_1 + 0x108) * 4);
  local_10 = CONCAT44((float)((ulonglong)param_2[1] >> 0x20) - fVar5,(float)param_2[1] - fVar4);
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar2 = uVar2 >> 8 ^
            *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)bVar1) * 4);
  } while (pbVar3 < (byte *)((longlong)register0x00000020 - 8U));
  return ~uVar2;
}


longlong FUN_180056d70(void)

{
  if (DAT_180115c10 == 0) {
    FID_conflict__assert
              (L"GImGui != 0 && \"No current context. Did you call ImGui::CreateContext() and ImGui::SetCurrentContext() ?\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x12ec);
  }
  return DAT_180115c10 + 8;
}


undefined4 FUN_180056db0(void)

{
  return *(undefined4 *)(DAT_180115c10 + 0x1d88);
}


char * FUN_180056dc0(uint param_1)

{
  char *_Str;
  longlong lVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;

  lVar1 = DAT_180115c10;
  uVar4 = param_1 & 0xffff0fff;
  if (uVar4 - 0x20f < 8) {
    if ((uVar4 - 0x20f & 0xfffffffb) == 0) {
      uVar2 = 0xffffefff;
    }
    else if ((uVar4 - 0x210 & 0xfffffffb) == 0) {
      uVar2 = 0xffffdfff;
    }
    else if ((uVar4 - 0x211 & 0xfffffffb) == 0) {
      uVar2 = 0xffffbfff;
    }
    else {
      uVar2 = 0xffff7fff;
      if ((uVar4 - 0x212 & 0xfffffffb) != 0) {
        uVar2 = 0xffffffff;
      }
    }
    param_1 = param_1 & uVar2;
  }
  pcVar5 = "";
  if ((uVar4 != 0) || (param_1 == 0)) {
    FUN_180056fb0(uVar4);
  }
  _Str = (char *)(lVar1 + 0x2910);
  if ((param_1 >> 0xc & 1) != 0) {
    pcVar5 = "Ctrl+";
  }
  FUN_180057ec0(_Str,0x40,0x1800e30b0,pcVar5);
  if (((uVar4 == 0) && (param_1 != 0)) && (sVar3 = strlen(_Str), sVar3 != 0)) {
    *(undefined1 *)(sVar3 + 0x290f + lVar1) = 0;
  }
  return _Str;
}


longlong FUN_180056f10(longlong param_1,uint param_2)

{
  if ((param_2 & 0xf000) != 0) {
    if (param_2 == 0x1000) {
      param_2 = 0x297;
    }
    else if (param_2 == 0x2000) {
      param_2 = 0x298;
    }
    else if (param_2 == 0x4000) {
      param_2 = 0x299;
    }
    else if (param_2 == 0x8000) {
      param_2 = 0x29a;
    }
  }
  if (0x9a < param_2 - 0x200) {
    FID_conflict__assert
              (L"IsNamedKey(key) && \"Support for user key indices was dropped in favor of ImGuiKey. Please update backend & user code.\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2254);
  }
  return (longlong)(int)(param_2 - 0x200) * 0x10 + param_1 + 0x10c;
}


char * FUN_180056fb0(uint param_1)

{
  if (param_1 == 0) {
    return "None";
  }
  if (param_1 - 0x200 < 0x9b) {
LAB_18005700f:
    if ((param_1 & 0xf000) == 0) goto LAB_180057052;
    if (param_1 != 0x1000) {
      if (param_1 != 0x2000) {
        if (param_1 != 0x4000) goto LAB_180057044;
        goto LAB_18005703d;
      }
      goto LAB_18005702e;
    }
  }
  else if (param_1 != 0x1000) {
    if (param_1 != 0x2000) {
      if (param_1 != 0x4000) {
        if (param_1 != 0x8000) {
          FID_conflict__assert
                    (L"IsNamedKeyOrMod(key) && \"Support for user key indices was dropped in favor of ImGuiKey. Please update backend and user code.\""
                     ,
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x2277);
          goto LAB_18005700f;
        }
LAB_180057044:
        if (param_1 == 0x8000) {
          param_1 = 0x29a;
        }
        goto LAB_180057052;
      }
LAB_18005703d:
      param_1 = 0x299;
      goto LAB_180057052;
    }
LAB_18005702e:
    param_1 = 0x298;
    goto LAB_180057052;
  }
  param_1 = 0x297;
LAB_180057052:
  if (param_1 - 0x200 < 0x9b) {
    return *(char **)(L"Inter" + (longlong)(int)param_1 * 4);
  }
  return "Unknown";
}


longlong FUN_180057090(longlong param_1,uint param_2)

{
  if ((param_2 & 0xf000) != 0) {
    if (param_2 == 0x1000) {
      param_2 = 0x297;
    }
    else if (param_2 == 0x2000) {
      param_2 = 0x298;
    }
    else if (param_2 == 0x4000) {
      param_2 = 0x299;
    }
    else if (param_2 == 0x8000) {
      param_2 = 0x29a;
    }
  }
  if (0x9a < param_2 - 0x200) {
    FID_conflict__assert
              (L"IsNamedKey(key)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0xcad);
  }
  return param_1 + ((longlong)(int)(param_2 - 0x200) * 3 + 0x527) * 4;
}


int FUN_180057130(uint param_1,float param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  float fVar6;

  lVar2 = DAT_180115c10;
  pcVar4 = (char *)FUN_180056f10(DAT_180115c10,param_1);
  if (*pcVar4 != '\0') {
    fVar1 = *(float *)(pcVar4 + 4);
    if (fVar1 == 0.0) {
      return 1;
    }
    fVar6 = fVar1 - *(float *)(lVar2 + 0x18);
    if (fVar6 < fVar1) {
      if (0.0 < param_3) {
        iVar3 = -1;
        if (param_2 <= fVar6) {
          iVar5 = (int)((fVar6 - param_2) / param_3);
        }
        else {
          iVar5 = -1;
        }
        if (param_2 <= fVar1) {
          iVar3 = (int)((fVar1 - param_2) / param_3);
        }
        return iVar3 - iVar5;
      }
      if ((fVar6 < param_2) && (param_2 <= fVar1)) {
        return 1;
      }
    }
  }
  return 0;
}


undefined8 FUN_1800571f0(void)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  return **(undefined8 **)(lVar1 + 0x1ef0);
}


uint FUN_180057230(void)

{
  uint uVar1;
  uint uVar2;

  if (*(char *)(DAT_180115c10 + 0xa7c) == '\0') {
    uVar2 = 0;
    uVar1 = 0x2000;
  }
  else if (*(char *)(DAT_180115c10 + 0x1bb8) == '\0') {
    uVar2 = 0x1000;
    uVar1 = 0x3000;
  }
  else {
    uVar2 = 0;
    uVar1 = 0x2000;
  }
  if ((*(char *)(DAT_180115c10 + 0xa8c) == '\0') || (*(char *)(DAT_180115c10 + 0x1bc4) != '\0')) {
    uVar1 = uVar2;
  }
  if ((*(char *)(DAT_180115c10 + 0xa9c) != '\0') && (*(char *)(DAT_180115c10 + 0x1bd0) == '\0')) {
    uVar1 = uVar1 | 0x4000;
  }
  if ((*(char *)(DAT_180115c10 + 0xaac) != '\0') && (*(char *)(DAT_180115c10 + 0x1bdc) == '\0')) {
    uVar1 = uVar1 | 0x8000;
  }
  return uVar1;
}


undefined4 FUN_1800572b0(void)

{
  return *(undefined4 *)(DAT_180115c10 + 0x2360);
}


float FUN_1800572c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;

  fVar7 = *(float *)(DAT_180115c10 + 0x7c) * 0.72;
  fVar8 = *(float *)(DAT_180115c10 + 0x80) * 0.3;
  if (*(int *)(DAT_180115c10 + 8000) == 3) {
    uVar5 = 0x281;
    uVar6 = 0x280;
    if (param_1 == 0) {
      uVar6 = 0x27e;
    }
    uVar1 = 0x27f;
  }
  else {
    uVar5 = 0x204;
    uVar6 = 0x203;
    if (param_1 == 0) {
      uVar6 = 0x201;
    }
    uVar1 = 0x202;
  }
  if (param_1 == 0) {
    uVar5 = uVar1;
  }
  iVar2 = FUN_180057130(uVar5,fVar7,fVar8);
  iVar3 = FUN_180057130(uVar6,fVar7,fVar8);
  fVar7 = (float)iVar2 - (float)iVar3;
  if (((fVar7 != 0.0) && (uVar4 = FUN_180059840(uVar6), (char)uVar4 != '\0')) &&
     (uVar4 = FUN_180059840(uVar5), (char)uVar4 != '\0')) {
    fVar7 = 0.0;
  }
  return fVar7;
}


longlong FUN_1800573c0(void)

{
  if (DAT_180115c10 == 0) {
    FID_conflict__assert
              (L"GImGui != 0 && \"No current context. Did you call ImGui::CreateContext() and ImGui::SetCurrentContext()?\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x12f9);
  }
  return DAT_180115c10 + 0xbe0;
}


float * FUN_180057400(float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  lVar3 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  uVar1 = *(undefined8 *)(**(longlong **)(lVar3 + 0x1ef0) + 8);
  uVar2 = *(undefined8 *)(**(longlong **)(lVar3 + 0x1ef0) + 0x10);
  fVar6 = (float)uVar1;
  fVar7 = (float)((ulonglong)uVar1 >> 0x20);
  fVar8 = (float)uVar2 + fVar6;
  fVar9 = (float)((ulonglong)uVar2 >> 0x20) + fVar7;
  *(undefined8 *)param_1 = uVar1;
  *(ulonglong *)(param_1 + 2) = CONCAT44(fVar9,fVar8);
  fVar5 = *(float *)(lVar3 + 0xd10);
  fVar4 = *(float *)(lVar3 + 0xd0c);
  if (fVar9 - fVar7 <= fVar5 + fVar5) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = -fVar5;
  }
  if (fVar8 - fVar6 <= fVar4 + fVar4) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = -fVar4;
  }
  *param_1 = fVar6 - fVar4;
  param_1[2] = fVar4 + fVar8;
  param_1[3] = fVar9 + fVar5;
  param_1[1] = fVar7 - fVar5;
  return param_1;
}


float * FUN_180057500(float *param_1,longlong param_2,int param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar1 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0x2c);
  fVar4 = fVar1 + *(float *)(param_2 + 0x30);
  fVar3 = fVar2 + *(float *)(param_2 + 0x34);
  if (param_5 == 0.0) {
    fVar3 = fVar3 - 1.0;
    fVar4 = fVar4 - 1.0;
  }
  if (param_3 == 0) {
    param_1[1] = fVar2 + param_4;
    *param_1 = fVar1 - param_5;
    param_1[2] = fVar1 + param_5;
    param_1[3] = fVar3 - param_4;
    return param_1;
  }
  if (param_3 == 1) {
    param_1[1] = fVar2 + param_4;
    *param_1 = fVar4 - param_5;
    param_1[2] = fVar4 + param_5;
    param_1[3] = fVar3 - param_4;
    return param_1;
  }
  if (param_3 == 2) {
    *param_1 = fVar1 + param_4;
    param_1[1] = fVar2 - param_5;
    param_1[2] = fVar4 - param_4;
    param_1[3] = fVar2 + param_5;
    return param_1;
  }
  if (param_3 == 3) {
    *param_1 = fVar1 + param_4;
    param_1[1] = fVar3 - param_5;
    param_1[2] = fVar4 - param_4;
    param_1[3] = fVar3 + param_5;
    return param_1;
  }
  FID_conflict__assert
            (L"0",
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
             ,0x195d);
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return param_1;
}


undefined4 FUN_180057670(void)

{
  return *(undefined4 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xa4);
}


short * FUN_180057690(uint param_1)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined2 local_32;

  lVar4 = DAT_180115c10;
  lVar8 = DAT_180115c10 + 0x1be0;
  uVar9 = param_1 & 0xf000;
  uVar7 = param_1 & 0xffff0fff;
  if ((param_1 & 0xffff0fff) == 0) {
    if (uVar9 == 0x1000) {
      uVar7 = 0x297;
    }
    else if (uVar9 == 0x2000) {
      uVar7 = 0x298;
    }
    else if (uVar9 == 0x4000) {
      uVar7 = 0x299;
    }
    else {
      uVar7 = uVar9;
      if (uVar9 == 0x8000) {
        uVar7 = 0x29a;
      }
    }
  }
  if (0x9a < uVar7 - 0x200) {
    FID_conflict__assert
              (L"IsNamedKey(key)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2309);
  }
  lVar8 = lVar8 + (longlong)(int)uVar7 * 2;
  sVar2 = *(short *)(lVar8 + -0x400);
  while( true ) {
    if (sVar2 == -1) {
      iVar5 = *(int *)(lVar4 + 0x1d1c);
      piVar1 = (int *)(lVar4 + 0x1d18);
      sVar2 = *(short *)piVar1;
      if (*piVar1 == iVar5) {
        iVar10 = *piVar1 + 1;
        if (iVar5 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar5 / 2 + iVar5;
        }
        if (iVar10 < iVar5) {
          iVar10 = iVar5;
        }
        FUN_18006d8d0(piVar1,iVar10);
      }
      lVar11 = (longlong)*piVar1;
      lVar3 = *(longlong *)(lVar4 + 0x1d20);
      *(undefined4 *)(lVar3 + lVar11 * 0x10) = 0xffff;
      *(undefined2 *)(lVar3 + 4 + lVar11 * 0x10) = 0xffff;
      *(undefined2 *)(lVar3 + 6 + lVar11 * 0x10) = local_32;
      *(undefined8 *)(lVar3 + 8 + lVar11 * 0x10) = 0xffffffffffffffff;
      *piVar1 = *piVar1 + 1;
      if ((sVar2 < 0) || (*piVar1 <= (int)sVar2)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      psVar6 = (short *)(*(longlong *)(lVar4 + 0x1d20) + (longlong)sVar2 * 0x10);
      psVar6[1] = (short)uVar9;
      *psVar6 = *(short *)(lVar8 + -0x400);
      *(short *)(lVar8 + -0x400) = sVar2;
      return psVar6;
    }
    if ((sVar2 < 0) || (*(int *)(lVar4 + 0x1d18) <= (int)sVar2)) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    psVar6 = (short *)((longlong)sVar2 * 0x10 + *(longlong *)(lVar4 + 0x1d20));
    if ((ushort)psVar6[1] == uVar9) break;
    sVar2 = *psVar6;
  }
  return psVar6;
}


longlong FUN_180057860(void)

{
  if (DAT_180115c10 == 0) {
    FID_conflict__assert
              (L"GImGui != 0 && \"No current context. Did you call ImGui::CreateContext() and ImGui::SetCurrentContext() ?\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0xcee);
  }
  return DAT_180115c10 + 0xc28;
}


undefined4 FUN_1800578a0(void)

{
  return *(undefined4 *)(DAT_180115c10 + 0x10c0);
}


undefined8 FUN_1800578b0(void)

{
  return *(undefined8 *)(DAT_180115c10 + 0x12e8);
}


longlong FUN_1800578c0(void)

{
  longlong lVar1;
  uint uVar2;

  uVar2 = *(int *)(DAT_180115c10 + 0x1eb8) - 1;
  if (-1 < (int)uVar2) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(DAT_180115c10 + 0x1ec0) + 8 + (ulonglong)uVar2 * 0x38);
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x14) & 0x8000000) != 0)) {
        return lVar1;
      }
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
  }
  return 0;
}


undefined1 (*) [32] FUN_180057910(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [32];
  short sVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 *local_res20;

  lVar3 = DAT_180115c10;
  if (1 < param_2) {
    FID_conflict__assert
              (L"drawlist_no < ((int)(sizeof(viewport->BgFgDrawLists) / sizeof(*(viewport->BgFgDrawLists))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x131a);
  }
  pauVar5 = *(undefined1 (**) [32])(param_1 + 0x40 + param_2 * 8);
  if (pauVar5 == (undefined1 (*) [32])0x0) {
    local_res10 = (undefined1 (*) [32])(*(code *)PTR__malloc_base_1801121b8)(0xd8,DAT_180115c20);
    lVar4 = DAT_180115c10;
    if (DAT_180115c10 != 0) {
      piVar1 = (int *)(DAT_180115c10 + 0x12f0);
      lVar8 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
      if (*(int *)(lVar8 + 0x27c4 + DAT_180115c10) != *piVar1) {
        iVar7 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
        sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(DAT_180115c10 + 0x27c0) = sVar6;
        lVar8 = (longlong)sVar6 * 8;
        *(int *)(lVar8 + 0x27c4 + lVar4) = *piVar1;
        *(undefined4 *)(lVar8 + 0x27c8 + lVar4) = 0;
      }
      psVar2 = (short *)(lVar8 + 0x27c8 + lVar4);
      *psVar2 = *psVar2 + 1;
      *(int *)(lVar4 + 0x27b8) = *(int *)(lVar4 + 0x27b8) + 1;
    }
    local_res20 = local_res8;
    if (local_res10 == (undefined1 (*) [32])0x0) {
      pauVar5 = (undefined1 (*) [32])0x0;
    }
    else {
      pauVar5 = FUN_18006e130(local_res10,lVar3 + 0x10d0);
    }
    *(undefined8 *)(pauVar5[6] + 0x10) = param_3;
    *(undefined1 (**) [32])(param_1 + 0x40 + param_2 * 8) = pauVar5;
  }
  if (*(int *)(param_1 + 0x38 + param_2 * 4) != *(int *)(lVar3 + 0x12f0)) {
    FUN_18007a6b0((uint *)pauVar5);
    FUN_1800765a0((int *)pauVar5,*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8));
    local_res10 = (undefined1 (*) [32])
                  CONCAT44(*(float *)(param_1 + 0x14) + *(float *)(param_1 + 0xc),
                           *(float *)(param_1 + 0x10) + *(float *)(param_1 + 8));
    FUN_180076360((int *)pauVar5,(float *)(param_1 + 8),(float *)&local_res10,'\0');
    *(undefined4 *)(param_1 + 0x38 + param_2 * 4) = *(undefined4 *)(lVar3 + 0x12f0);
  }
  return pauVar5;
}


undefined8 FUN_180057aa0(void)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  return *(undefined8 *)(*(longlong *)(lVar1 + 0x13a8) + 0x2c0);
}


uint FUN_180057ad0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;

  uVar2 = param_1 >> 8 & 0xff;
  uVar1 = param_1 >> 0x10 & 0xff;
  fVar3 = (float)(param_2 >> 0x18) / 255.0;
  return ((int)((float)(int)((param_2 >> 8 & 0xff) - uVar2) * fVar3 + (float)uVar2) |
         ((int)((float)(int)((param_2 >> 0x10 & 0xff) - uVar1) * fVar3 + (float)uVar1) | 0xff00U) <<
         8) << 8 | (int)((float)(int)((param_2 & 0xff) - (param_1 & 0xff)) * fVar3 +
                        (float)(param_1 & 0xff));
}


void * FUN_180057b80(LPCSTR param_1,LPCSTR param_2,size_t *param_3,int param_4)

{
  int iVar1;
  FILE *_File;
  ulonglong uVar2;
  ulonglong uVar3;
  void *_DstBuf;
  size_t sVar4;
  size_t _Count;

  if ((param_1 == (LPCSTR)0x0) || (param_2 == (LPCSTR)0x0)) {
    FID_conflict__assert
              (L"filename && mode",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x928);
  }
  if (param_3 != (size_t *)0x0) {
    *param_3 = 0;
  }
  _File = (FILE *)FUN_180057cd0(param_1,param_2);
  if (_File == (FILE *)0x0) {
    return (void *)0x0;
  }
  uVar2 = FUN_1800beb00(_File);
  if (((int)uVar2 != -1) && (iVar1 = FUN_1800be540(_File,0,2), iVar1 == 0)) {
    uVar3 = FUN_1800beb00(_File);
    _Count = (size_t)(int)uVar3;
    if (((int)uVar3 != -1) &&
       (((iVar1 = FUN_1800be540(_File,(int)uVar2,0), iVar1 == 0 && (_Count != 0xffffffffffffffff))
        && (_DstBuf = (void *)FUN_18005b560(_Count + (longlong)param_4), _DstBuf != (void *)0x0))))
    {
      sVar4 = fread(_DstBuf,1,_Count,_File);
      if (sVar4 != _Count) {
        FUN_1800b1c20(_File);
        FUN_18005b5c0((longlong)_DstBuf);
        return (void *)0x0;
      }
      if (0 < param_4) {
        FUN_1800d22d0((undefined1 (*) [32])(_Count + (longlong)_DstBuf),0,(longlong)param_4);
      }
      FUN_1800b1c20(_File);
      if (param_3 != (size_t *)0x0) {
        *param_3 = _Count;
      }
      return _DstBuf;
    }
  }
  FUN_1800b1c20(_File);
  return (void *)0x0;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_180057cd0(LPCSTR param_1,LPCSTR param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int cchWideChar;
  wchar_t *pwVar4;
  undefined8 uVar5;
  short sVar6;
  longlong lVar7;
  wchar_t *lpWideCharStr;
  undefined1 auStackY_298 [32];
  wchar_t local_258 [264];
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_298;
  iVar3 = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  pwVar4 = (wchar_t *)0x0;
  if (0x104 < cchWideChar + iVar3) {
    lVar2 = (longlong)(cchWideChar + iVar3) * 2;
    pwVar4 = (wchar_t *)(*(code *)PTR__malloc_base_1801121b8)(lVar2,DAT_180115c20);
    if (DAT_180115c10 != 0) {
      FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),pwVar4,lVar2);
    }
  }
  lpWideCharStr = local_258;
  if (pwVar4 != (wchar_t *)0x0) {
    lpWideCharStr = pwVar4;
  }
  MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,iVar3);
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr + iVar3,cchWideChar);
  uVar5 = FUN_1800ab9a0(lpWideCharStr,lpWideCharStr + iVar3);
  lVar2 = DAT_180115c10;
  if (pwVar4 != (wchar_t *)0x0) {
    if (DAT_180115c10 != 0) {
      piVar1 = (int *)(DAT_180115c10 + 0x12f0);
      lVar7 = DAT_180115c10 + (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
      if (*(int *)(lVar7 + 0x27c4) != *piVar1) {
        iVar3 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
        sVar6 = (short)iVar3 + (short)(iVar3 / 6) * -6;
        *(short *)(DAT_180115c10 + 0x27c0) = sVar6;
        lVar7 = lVar2 + (longlong)sVar6 * 8;
        *(int *)(lVar7 + 0x27c4) = *piVar1;
        *(undefined4 *)(lVar7 + 0x27c8) = 0;
      }
      *(short *)(lVar7 + 0x27ca) = *(short *)(lVar7 + 0x27ca) + 1;
      piVar1 = (int *)(lVar2 + 0x27bc);
      *piVar1 = *piVar1 + 1;
    }
    (*(code *)PTR_thunk_FUN_1800c3030_1801121c0)(pwVar4,DAT_180115c20);
  }
  return uVar5;
}


void FUN_180057ec0(undefined1 *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 local_res20;

  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180049100();
  uVar3 = FUN_1800b1640(*puVar2 | 1,param_1,param_2,param_3,(undefined4 *)0x0,&local_res20);
  iVar1 = (int)uVar3;
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (param_1 != (undefined1 *)0x0) {
    if ((iVar1 == -1) || ((int)param_2 <= iVar1)) {
      iVar1 = (int)param_2 + -1;
    }
    param_1[iVar1] = 0;
  }
  return;
}


void FUN_180057f40(longlong *param_1,longlong *param_2,char *param_3,char *param_4,longlong param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int iVar7;
  char *_Str;
  char *local_res20;

  lVar2 = DAT_180115c10;
  local_res20 = param_4;
  if (*param_3 == '%') {
    if ((param_3[1] == 's') && (param_3[2] == '\0')) {
      _Str = "(null)";
      if (param_4 != (char *)0x0) {
        _Str = param_4;
      }
      *param_1 = (longlong)_Str;
      if (param_2 == (longlong *)0x0) {
        return;
      }
      sVar4 = strlen(_Str);
      *param_2 = (longlong)(_Str + sVar4);
      return;
    }
    if ((((*param_3 == '%') && (param_3[1] == '.')) && (param_3[2] == '*')) &&
       ((param_3[3] == 's' && (param_3[4] == '\0')))) {
      local_res20._0_4_ = (int)param_4;
      if (param_5 != 0) {
        *param_1 = param_5;
        *param_2 = (int)local_res20 + param_5;
        return;
      }
      *param_1 = (longlong)&DAT_1800e0e98;
      iVar3 = 6;
      if ((int)local_res20 < 6) {
        iVar3 = (int)local_res20;
      }
      *param_2 = (longlong)(&DAT_1800e0e98 + iVar3);
      return;
    }
  }
  iVar3 = *(int *)(DAT_180115c10 + 0x2900);
  puVar1 = *(undefined1 **)(DAT_180115c10 + 0x2908);
  puVar5 = (ulonglong *)FUN_180049100();
  uVar6 = FUN_1800b1640(*puVar5 | 1,puVar1,(longlong)iVar3,(longlong)param_3,(undefined4 *)0x0,
                        &local_res20);
  iVar7 = (int)uVar6;
  if (iVar7 < 0) {
    iVar7 = -1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    if ((iVar7 == -1) || (iVar3 <= iVar7)) {
      iVar7 = iVar3 + -1;
    }
    puVar1[iVar7] = 0;
  }
  *param_1 = *(longlong *)(lVar2 + 0x2908);
  if (param_2 != (longlong *)0x0) {
    *param_2 = (longlong)iVar7 + *(longlong *)(lVar2 + 0x2908);
  }
  return;
}


void FUN_1800580e0(longlong *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  size_t sVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int iVar7;
  char *_Str;

  lVar2 = DAT_180115c10;
  if (*param_3 == '%') {
    if (param_3[1] == 's') {
      if (param_3[2] == '\0') {
        _Str = "(null)";
        if ((char *)*param_4 != (char *)0x0) {
          _Str = (char *)*param_4;
        }
        *param_1 = (longlong)_Str;
        if (param_2 == (longlong *)0x0) {
          return;
        }
        sVar4 = strlen(_Str);
        *param_2 = (longlong)(_Str + sVar4);
        return;
      }
    }
    else if ((((param_3[1] == '.') && (param_3[2] == '*')) && (param_3[3] == 's')) &&
            (param_3[4] == '\0')) {
      lVar2 = param_4[1];
      iVar1 = (int)*param_4;
      if (lVar2 != 0) {
        *param_1 = lVar2;
        *param_2 = iVar1 + lVar2;
        return;
      }
      *param_1 = (longlong)&DAT_1800e0e98;
      iVar7 = 6;
      if (iVar1 < 6) {
        iVar7 = iVar1;
      }
      *param_2 = (longlong)(&DAT_1800e0e98 + iVar7);
      return;
    }
  }
  iVar1 = *(int *)(DAT_180115c10 + 0x2900);
  puVar3 = *(undefined1 **)(DAT_180115c10 + 0x2908);
  puVar5 = (ulonglong *)FUN_180049100();
  uVar6 = FUN_1800b1640(*puVar5 | 1,puVar3,(longlong)iVar1,(longlong)param_3,(undefined4 *)0x0,
                        param_4);
  iVar7 = (int)uVar6;
  if (iVar7 < 0) {
    iVar7 = -1;
  }
  if (puVar3 != (undefined1 *)0x0) {
    if ((iVar7 == -1) || (iVar1 <= iVar7)) {
      iVar7 = iVar1 + -1;
    }
    puVar3[iVar7] = 0;
  }
  *param_1 = *(longlong *)(lVar2 + 0x2908);
  if (param_2 != (longlong *)0x0) {
    *param_2 = (longlong)iVar7 + *(longlong *)(lVar2 + 0x2908);
  }
  return;
}


uint FUN_180058260(byte *param_1,ulonglong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;

  uVar4 = ~param_3;
  uVar2 = uVar4;
  if (param_2 != 0) {
    do {
      param_2 = param_2 - 1;
      if (((*param_1 == 0x23) && (1 < param_2)) && ((param_1[1] == 0x23 && (param_1[2] == 0x23)))) {
        uVar2 = uVar4;
      }
      uVar2 = uVar2 >> 8 ^
              *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)*param_1) * 4);
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return ~uVar2;
  }
  bVar1 = *param_1;
  while (bVar1 != 0) {
    pbVar3 = param_1 + 1;
    if (((bVar1 == 0x23) && (*pbVar3 == 0x23)) && (param_1[2] == 0x23)) {
      uVar2 = uVar4;
    }
    uVar2 = uVar2 >> 8 ^
            *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)bVar1) * 4);
    param_1 = pbVar3;
    bVar1 = *pbVar3;
  }
  return ~uVar2;
}


char * FUN_180058310(char *param_1)

{
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  return param_1;
}


void FUN_180058330(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;

  for (pcVar2 = param_1; (cVar1 = *pcVar2, cVar1 == ' ' || (cVar1 == '\t')); pcVar2 = pcVar2 + 1) {
  }
  pcVar4 = pcVar2;
  pcVar3 = pcVar2;
  if (cVar1 != '\0') {
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    do {
      pcVar4 = pcVar3;
      if (pcVar4 <= pcVar2) break;
      pcVar3 = pcVar4 + -1;
    } while ((pcVar4[-1] == ' ') || (pcVar4[-1] == '\t'));
  }
  if (pcVar2 != param_1) {
    FUN_1800d1c20((undefined8 *)param_1,(undefined8 *)pcVar2,(longlong)pcVar4 - (longlong)pcVar2);
  }
  param_1[(longlong)pcVar4 - (longlong)pcVar2] = '\0';
  return;
}


ulonglong FUN_1800583c0(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;

  if (param_2 < param_1) {
    while( true ) {
      uVar1 = param_1 - 1;
      if (*(char *)(param_1 - 1) == '\n') break;
      param_1 = uVar1;
      if (uVar1 <= param_2) {
        return uVar1;
      }
    }
  }
  return param_1;
}


void FUN_1800583e0(char *param_1,char *param_2,ulonglong param_3)

{
  if (param_3 != 0) {
    if (1 < param_3) {
      strncpy(param_1,param_2,(ulonglong)((int)param_3 - 1));
    }
    param_1[param_3 - 1] = '\0';
  }
  return;
}


int FUN_180058410(uint *param_1,byte *param_2,byte *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  byte bVar11;

  bVar6 = *param_2;
  cVar1 = (&DAT_1800e0ec8)[bVar6 >> 3];
  lVar9 = (longlong)cVar1;
  iVar7 = (uint)(cVar1 == '\0') + (int)cVar1;
  if (param_3 == (byte *)0x0) {
    param_3 = param_2 + iVar7;
  }
  if (param_3 <= param_2) {
    bVar6 = 0;
  }
  if (param_2 + 1 < param_3) {
    bVar11 = param_2[1];
  }
  else {
    bVar11 = 0;
  }
  if (param_2 + 2 < param_3) {
    bVar10 = param_2[2];
  }
  else {
    bVar10 = 0;
  }
  if (param_2 + 3 < param_3) {
    bVar5 = param_2[3];
  }
  else {
    bVar5 = 0;
  }
  uVar4 = (bVar5 & 0x3f |
          (bVar10 & 0x3f) << 6 |
          (bVar11 & 0x3f) << 0xc | (*(uint *)(&DAT_1800e0ee8 + lVar9 * 4) & (uint)bVar6) << 0x12) >>
          ((byte)*(undefined4 *)(&DAT_1800e0f18 + lVar9 * 4) & 0x1f);
  *param_1 = uVar4;
  uVar8 = 0;
  if (uVar4 >> 0xb == 0x1b) {
    uVar8 = 0x80;
  }
  uVar2 = 0;
  if (0xffff < uVar4) {
    uVar2 = 0x100;
  }
  if ((int)((uVar8 | uVar2 | -(uint)(uVar4 < *(uint *)(&DAT_1800e0f00 + lVar9 * 4)) & 0x40 |
            (((uint)(bVar5 >> 2) | bVar10 & 0xc0) >> 2 | bVar11 & 0xc0) >> 2) ^ 0x2a) >>
      ((byte)*(undefined4 *)(&DAT_1800e0f30 + lVar9 * 4) & 0x1f) == 0) {
    return iVar7;
  }
  *param_1 = 0xfffd;
  iVar3 = (uint)(bVar5 != 0) + (uint)(bVar6 != 0) + (uint)(bVar11 != 0) + (uint)(bVar10 != 0);
  if (iVar7 < iVar3) {
    iVar3 = iVar7;
  }
  return iVar3;
}


byte * FUN_1800585a0(byte *param_1,uint param_2)

{
  byte bVar1;

  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_1 = bVar1;
    param_1[1] = 0;
    return param_1;
  }
  if (param_2 < 0x800) {
    *param_1 = (char)(param_2 >> 6) - 0x40;
    param_1[1] = bVar1 & 0x3f | 0x80;
    param_1[2] = 0;
    return param_1;
  }
  if (param_2 < 0x10000) {
    *param_1 = (char)(param_2 >> 0xc) - 0x20;
    param_1[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    param_1[2] = bVar1 & 0x3f | 0x80;
    param_1[3] = 0;
    return param_1;
  }
  if (param_2 < 0x110000) {
    *param_1 = (char)(param_2 >> 0x12) - 0x10;
    param_1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
    param_1[2] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    param_1[3] = bVar1 & 0x3f | 0x80;
    param_1[4] = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


ulonglong FUN_180058660(ulonglong param_1,ulonglong param_2)

{
  byte *pbVar1;

  do {
    if (param_2 <= param_1) {
      return param_1;
    }
    pbVar1 = (byte *)(param_2 - 1);
    param_2 = param_2 - 1;
  } while ((*pbVar1 & 0xc0) == 0x80);
  return param_2;
}


void FUN_180058690(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = (param_3[1] - fVar2) * (*param_2 - fVar1) - (*param_3 - fVar1) * (param_2[1] - fVar2);
  fVar4 = ((param_4[1] - fVar2) * (*param_2 - fVar1) - (*param_4 - fVar1) * (param_2[1] - fVar2)) /
          fVar3;
  *param_6 = ((*param_4 - fVar1) * (param_3[1] - fVar2) - (param_4[1] - fVar2) * (*param_3 - fVar1))
             / fVar3;
  *param_7 = fVar4;
  *param_5 = (1.0 - *param_6) - fVar4;
  return;
}


float * FUN_180058760(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  fVar11 = *param_3;
  fVar12 = param_3[1];
  fVar1 = *param_2;
  fVar5 = fVar11 - fVar1;
  fVar3 = param_2[1];
  fVar8 = fVar12 - fVar3;
  fVar4 = *param_5;
  fVar7 = param_5[1];
  fVar13 = fVar5 * (fVar4 - fVar1) + fVar8 * (fVar7 - fVar3);
  if (0.0 <= fVar13) {
    fVar10 = fVar5 * fVar5 + fVar8 * fVar8;
    if (fVar13 <= fVar10) {
      fVar5 = fVar1 + (fVar5 * fVar13) / fVar10;
      fVar8 = fVar3 + (fVar8 * fVar13) / fVar10;
    }
    else {
      fVar5 = fVar11;
      fVar8 = fVar12;
    }
  }
  else {
    fVar5 = fVar1;
    fVar8 = fVar3;
  }
  fVar13 = *param_4;
  fVar10 = param_4[1];
  fVar6 = fVar13 - fVar11;
  fVar9 = fVar10 - fVar12;
  fVar14 = fVar6 * (fVar4 - fVar11) + fVar9 * (fVar7 - fVar12);
  if (0.0 <= fVar14) {
    fVar2 = fVar6 * fVar6 + fVar9 * fVar9;
    if (fVar14 <= fVar2) {
      fVar11 = fVar11 + (fVar6 * fVar14) / fVar2;
      fVar12 = fVar12 + (fVar9 * fVar14) / fVar2;
    }
    else {
      fVar11 = fVar13;
      fVar12 = fVar10;
    }
  }
  fVar6 = fVar1 - fVar13;
  fVar9 = fVar3 - fVar10;
  fVar14 = fVar6 * (fVar4 - fVar13) + fVar9 * (fVar7 - fVar10);
  if (0.0 <= fVar14) {
    fVar2 = fVar6 * fVar6 + fVar9 * fVar9;
    if (fVar14 <= fVar2) {
      fVar13 = (fVar6 * fVar14) / fVar2 + fVar13;
      fVar10 = (fVar9 * fVar14) / fVar2 + fVar10;
    }
    else {
      fVar13 = fVar1;
      fVar10 = fVar3;
    }
  }
  fVar3 = (fVar4 - fVar5) * (fVar4 - fVar5) + (fVar7 - fVar8) * (fVar7 - fVar8);
  fVar6 = (fVar4 - fVar13) * (fVar4 - fVar13) + (fVar7 - fVar10) * (fVar7 - fVar10);
  fVar4 = (fVar4 - fVar11) * (fVar4 - fVar11) + (fVar7 - fVar12) * (fVar7 - fVar12);
  fVar1 = fVar4;
  if (fVar6 <= fVar4) {
    fVar1 = fVar6;
  }
  fVar7 = fVar3;
  if (fVar1 <= fVar3) {
    fVar7 = fVar1;
  }
  if (fVar7 == fVar3) {
    *param_1 = fVar5;
    param_1[1] = fVar8;
  }
  else if (fVar7 == fVar4) {
    *param_1 = fVar11;
    param_1[1] = fVar12;
  }
  else {
    *param_1 = fVar13;
    param_1[1] = fVar10;
  }
  return param_1;
}


undefined1 FUN_180058a30(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;

  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_3[1];
  fVar4 = param_4[1];
  fVar5 = *param_4;
  fVar6 = *param_3;
  fVar7 = *param_1;
  fVar8 = param_1[1];
  bVar9 = (fVar1 - fVar3) * (fVar5 - fVar6) - (fVar4 - fVar3) * (fVar2 - fVar6) < 0.0;
  if (((fVar5 - fVar2) * (fVar8 - fVar1) - (fVar7 - fVar2) * (fVar4 - fVar1) < 0.0 == bVar9) &&
     (bVar9 == (fVar3 - fVar8) * (fVar5 - fVar7) - (fVar4 - fVar8) * (fVar6 - fVar7) < 0.0)) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}


void FUN_180058b50(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  lVar3 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  fVar7 = 0.0;
  fVar9 = *(float *)(**(longlong **)(lVar3 + 0x1ef0) + 0xc);
  fVar8 = *(float *)(**(longlong **)(lVar3 + 0x1ef0) + 8) + 60.0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  fVar9 = fVar9 + 60.0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0xf1) = 0xf0f;
  *(undefined1 *)(param_1 + 0xf0) = 0xf;
  *(float *)(param_1 + 0x28) = fVar8;
  *(float *)(param_1 + 0x2c) = fVar9;
  if (param_2 != 0) {
    *(undefined2 *)(param_1 + 0xf0) = 0xb0b;
    *(undefined1 *)(param_1 + 0xf2) = 0xb;
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar5 = (undefined2)((uint)uVar2 >> 0x10);
    fVar8 = (float)(int)(float)(int)(short)uVar2;
    fVar9 = (float)(int)(float)(int)((longlong)CONCAT26(uVar5,CONCAT24(uVar5,uVar2)) >> 0x30);
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(fVar9,fVar8);
    if ((0 < *(short *)(param_2 + 8)) && (sVar1 = *(short *)(param_2 + 10), 0 < sVar1)) {
      fVar7 = (float)(int)(float)(int)*(short *)(param_2 + 8);
      *(float *)(param_1 + 0x38) = fVar7;
      *(float *)(param_1 + 0x30) = fVar7;
      fVar6 = (float)(int)(float)(int)sVar1;
      *(float *)(param_1 + 0x3c) = fVar6;
      *(float *)(param_1 + 0x34) = fVar6;
    }
    *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0xc);
  }
  *(float *)(param_1 + 0x138) = fVar8;
  *(float *)(param_1 + 0x13c) = fVar9;
  *(float *)(param_1 + 0x130) = fVar8;
  *(float *)(param_1 + 0x134) = fVar9;
  *(float *)(param_1 + 0x128) = fVar8;
  *(float *)(param_1 + 300) = fVar9;
  if ((*(byte *)(param_1 + 0x14) & 0x40) != 0) {
    *(undefined2 *)(param_1 + 0xe4) = 0x202;
    *(undefined1 *)(param_1 + 0xe6) = 0;
    return;
  }
  if (fVar7 <= 0.0) {
    *(undefined1 *)(param_1 + 0xe4) = 2;
  }
  if (*(float *)(param_1 + 0x34) <= 0.0) {
    *(undefined1 *)(param_1 + 0xe5) = 2;
  }
  if ((*(char *)(param_1 + 0xe4) < '\x01') && (*(char *)(param_1 + 0xe5) < '\x01')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0xe6) = uVar4;
  return;
}


void FUN_180058d10(void)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined1 *local_res18;
  undefined8 *local_res20;

  pcVar3 = DAT_180115c10;
  if ((*DAT_180115c10 != '\0') || (DAT_180115c10[0x25c8] != '\0')) {
    FID_conflict__assert
              (L"!g.Initialized && !g.SettingsLoaded",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1022);
  }
  pcVar2 = DAT_180115c10;
  uVar12 = 0xffffffff;
  pcVar15 = "Window";
  bVar4 = 0x57;
  do {
    pcVar15 = pcVar15 + 1;
    if (((bVar4 == 0x23) && (*pcVar15 == 0x23)) && (pcVar15[1] == 0x23)) {
      uVar12 = 0xffffffff;
    }
    uVar12 = uVar12 >> 8 ^
             *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar12 & 0xff) ^ (ulonglong)bVar4) * 4);
    bVar4 = *pcVar15;
  } while (bVar4 != 0);
  lVar6 = FUN_180055cb0((byte *)"Window");
  if (lVar6 != 0) {
    FID_conflict__assert
              (L"FindSettingsHandler(handler->TypeName) == 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3933);
  }
  iVar11 = *(int *)(pcVar2 + 0x25e4);
  iVar13 = 8;
  if (*(int *)(pcVar2 + 0x25e0) == iVar11) {
    iVar14 = *(int *)(pcVar2 + 0x25e0) + 1;
    if (iVar11 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar11 / 2 + iVar11;
    }
    if (iVar14 < iVar5) {
      iVar14 = iVar5;
    }
    if (iVar11 < iVar14) {
      puVar7 = (undefined8 *)
               (*(code *)PTR__malloc_base_1801121b8)((longlong)iVar14 * 0x48,DAT_180115c20);
      if (DAT_180115c10 != (char *)0x0) {
        FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),puVar7,
                      (longlong)iVar14 * 0x48);
      }
      if (*(undefined8 **)(pcVar2 + 0x25e8) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar7,*(undefined8 **)(pcVar2 + 0x25e8),
                      (longlong)*(int *)(pcVar2 + 0x25e0) * 0x48);
        FUN_18005b5c0(*(longlong *)(pcVar2 + 0x25e8));
      }
      *(undefined8 **)(pcVar2 + 0x25e8) = puVar7;
      *(int *)(pcVar2 + 0x25e4) = iVar14;
    }
  }
  lVar8 = (longlong)*(int *)(pcVar2 + 0x25e0);
  lVar6 = *(longlong *)(pcVar2 + 0x25e8);
  puVar7 = (undefined8 *)(lVar6 + lVar8 * 0x48);
  *puVar7 = "Window";
  puVar7[1] = (ulonglong)~uVar12;
  puVar7 = (undefined8 *)(lVar6 + 0x10 + lVar8 * 0x48);
  *puVar7 = FUN_18006c610;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)(lVar6 + 0x20 + lVar8 * 0x48);
  *puVar7 = FUN_18006c770;
  puVar7[1] = FUN_18006c680;
  puVar7 = (undefined8 *)(lVar6 + 0x30 + lVar8 * 0x48);
  *puVar7 = FUN_18006c4b0;
  puVar7[1] = FUN_18006c800;
  *(undefined8 *)(lVar6 + 0x40 + lVar8 * 0x48) = 0;
  *(int *)(pcVar2 + 0x25e0) = *(int *)(pcVar2 + 0x25e0) + 1;
  FUN_180085f70();
  pcVar15 = DAT_180115c10;
  *(char **)(DAT_180115c10 + 0x2628) = "Dear ImGui 1.91.9b (19191)";
  *(char **)(pcVar15 + 0x2630) = "Size column to fit###SizeOne";
  *(char **)(pcVar15 + 0x2638) = "Size all columns to fit###SizeAll";
  *(char **)(pcVar15 + 0x2640) = "Size all columns to default###SizeAll";
  *(char **)(pcVar15 + 0x2648) = "Reset order###ResetOrder";
  *(char **)(pcVar15 + 0x2650) = "(Main menu bar)";
  *(char **)(pcVar15 + 0x2658) = "(Popup)";
  *(char **)(pcVar15 + 0x2660) = "(Untitled)";
  *(char **)(pcVar15 + 0x2668) = "Open \'%s\'";
  *(char **)(pcVar15 + 0x2670) = "Copy Link###CopyLink";
  *(code **)(pcVar3 + 0xbe0) = FUN_180061b60;
  *(code **)(pcVar3 + 0xbe8) = FUN_180061e10;
  *(code **)(pcVar3 + 0xbf8) = FUN_180061c90;
  *(code **)(pcVar3 + 0xc08) = FUN_180061ee0;
  puVar7 = (undefined8 *)(*(code *)PTR__malloc_base_1801121b8)(0xd0,DAT_180115c20);
  pcVar15 = DAT_180115c10;
  if (DAT_180115c10 != (char *)0x0) {
    piVar1 = (int *)(DAT_180115c10 + 0x12f0);
    lVar6 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
    if (*(int *)(DAT_180115c10 + lVar6 + 0x27c4) != *piVar1) {
      iVar11 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
      sVar10 = (short)iVar11 + (short)(iVar11 / 6) * -6;
      *(short *)(DAT_180115c10 + 0x27c0) = sVar10;
      lVar6 = (longlong)sVar10 * 8;
      *(int *)(pcVar15 + lVar6 + 0x27c4) = *piVar1;
      pcVar2 = pcVar15 + lVar6 + 0x27c8;
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
    }
    *(short *)(pcVar15 + lVar6 + 0x27c8) = *(short *)(pcVar15 + lVar6 + 0x27c8) + 1;
    *(int *)(pcVar15 + 0x27b8) = *(int *)(pcVar15 + 0x27b8) + 1;
  }
  local_res18 = local_res8;
  local_res10 = puVar7;
  local_res20 = puVar7;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    FUN_1800723f0((undefined1 *)(puVar7 + 10));
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    puVar7[7] = 0xffffffffffffffff;
    puVar7[9] = 0;
    puVar7[8] = 0;
  }
  *(undefined4 *)puVar7 = 0x11111111;
  iVar11 = *(int *)(pcVar3 + 0x1eec);
  if (*(int *)(pcVar3 + 0x1ee8) == iVar11) {
    iVar14 = *(int *)(pcVar3 + 0x1ee8) + 1;
    if (iVar11 != 0) {
      iVar13 = iVar11 + iVar11 / 2;
    }
    if (iVar14 < iVar13) {
      iVar14 = iVar13;
    }
    if (iVar11 < iVar14) {
      puVar9 = (undefined8 *)
               (*(code *)PTR__malloc_base_1801121b8)((longlong)iVar14 * 8,DAT_180115c20);
      if (DAT_180115c10 != (char *)0x0) {
        FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),puVar9,
                      (longlong)iVar14 * 8);
      }
      if (*(undefined8 **)(pcVar3 + 0x1ef0) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar9,*(undefined8 **)(pcVar3 + 0x1ef0),
                      (longlong)*(int *)(pcVar3 + 0x1ee8) << 3);
        FUN_18005b5c0(*(longlong *)(pcVar3 + 0x1ef0));
      }
      *(undefined8 **)(pcVar3 + 0x1ef0) = puVar9;
      *(int *)(pcVar3 + 0x1eec) = iVar14;
    }
  }
  *(undefined8 **)(*(longlong *)(pcVar3 + 0x1ef0) + (longlong)*(int *)(pcVar3 + 0x1ee8) * 8) =
       puVar7;
  *(int *)(pcVar3 + 0x1ee8) = *(int *)(pcVar3 + 0x1ee8) + 1;
  local_res8[0] = 0;
  FUN_18006db10((int *)(pcVar3 + 0x2900),0xc01,(undefined1 (*) [32])local_res8);
  uVar12 = 0x200;
  do {
    if (((uVar12 - 0x200 < 0x3c) &&
        ((0xfffffffff001001U >> ((ulonglong)(uVar12 - 0x200) & 0x3f) & 1) != 0)) ||
       ((uVar12 - 0x254 < 0x21 && ((0x17fff06ffU >> ((ulonglong)(uVar12 - 0x254) & 0x3f) & 1) != 0))
       )) {
      lVar6 = (longlong)((ulonglong)uVar12 - 0x200) >> 5;
      *(uint *)(pcVar3 + lVar6 * 4 + 0x1488) =
           *(uint *)(pcVar3 + lVar6 * 4 + 0x1488) | 1 << (uVar12 - 0x200 & 0x1f);
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x29b);
  *pcVar3 = '\x01';
  return;
}


undefined8 FUN_1800592a0(void)

{
  return CONCAT71((int7)((ulonglong)DAT_180115c10 >> 8),*(int *)(DAT_180115c10 + 0x141c) != 0);
}


longlong FUN_1800592c0(void)

{
  uint7 uVar1;

  uVar1 = (uint7)((ulonglong)DAT_180115c10 >> 8);
  if ((*(int *)(DAT_180115c10 + 0x1404) == 0) && (*(int *)(DAT_180115c10 + 0x1408) == 0)) {
    return (ulonglong)uVar1 << 8;
  }
  return CONCAT71(uVar1,1);
}


undefined8 FUN_1800592e0(void)

{
  undefined7 uVar1;

  uVar1 = (undefined7)((ulonglong)DAT_180115c10 >> 8);
  if ((((*(char *)(DAT_180115c10 + 0xf0) == '\0') && (*(char *)(DAT_180115c10 + 0xf1) == '\0')) &&
      (*(char *)(DAT_180115c10 + 0xf2) == '\0')) && (*(char *)(DAT_180115c10 + 0xf3) == '\0')) {
    return CONCAT71(uVar1,*(char *)(DAT_180115c10 + 0xf4) != '\0');
  }
  return CONCAT71(uVar1,1);
}


longlong FUN_180059320(float *param_1,int param_2)

{
  longlong lVar1;
  uint7 uVar2;

  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  uVar2 = (uint7)((ulonglong)DAT_180115c10 >> 8);
  if (((((param_1[3] < *(float *)(lVar1 + 0x25c) || param_1[3] == *(float *)(lVar1 + 0x25c)) ||
        (*(float *)(lVar1 + 0x264) < param_1[1] || *(float *)(lVar1 + 0x264) == param_1[1])) ||
       (param_1[2] < *(float *)(lVar1 + 600) || param_1[2] == *(float *)(lVar1 + 600))) ||
      (*(float *)(lVar1 + 0x260) < *param_1 || *(float *)(lVar1 + 0x260) == *param_1)) &&
     ((param_2 == 0 ||
      (((param_2 != *(int *)(DAT_180115c10 + 0x141c) &&
        (param_2 != *(int *)(DAT_180115c10 + 0x144c))) &&
       ((param_2 != *(int *)(DAT_180115c10 + 0x1efc) &&
        (param_2 != *(int *)(DAT_180115c10 + 0x1f10))))))))) {
    return CONCAT71(uVar2,*(char *)(DAT_180115c10 + 0x141a) == '\0');
  }
  return (ulonglong)uVar2 << 8;
}


longlong FUN_1800593a0(void)

{
  uint7 uVar1;

  uVar1 = (uint7)((ulonglong)DAT_180115c10 >> 8);
  if (*(int *)(DAT_180115c10 + 0x141c) == 0) {
    return (ulonglong)uVar1 << 8;
  }
  return CONCAT71(uVar1,*(int *)(DAT_180115c10 + 0x141c) == *(int *)(DAT_180115c10 + 0x1d88));
}


ulonglong FUN_1800593c0(void)

{
  uint uVar1;
  ulonglong uVar2;

  if ((*(uint *)(DAT_180115c10 + 0x1d90) & 0x20) == 0) {
    uVar1 = *(uint *)(DAT_180115c10 + 0x1d88);
    uVar2 = (ulonglong)uVar1;
    if (((*(uint *)(DAT_180115c10 + 0x1450) != uVar1) || (uVar1 == 0)) ||
       (uVar2 = (ulonglong)*(uint *)(DAT_180115c10 + 0x12f0),
       *(int *)(DAT_180115c10 + 0x1454) < (int)*(uint *)(DAT_180115c10 + 0x12f0)))
    goto LAB_1800593d8;
  }
  else {
    uVar1 = *(uint *)(DAT_180115c10 + 0x1d90) >> 6;
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 & 1) == 0) goto LAB_1800593d8;
  }
  if (*(char *)(DAT_180115c10 + 0x1458) != '\0') {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_1800593d8:
  return uVar2 & 0xffffffffffffff00;
}


ulonglong FUN_180059410(uint param_1,float *param_2,float *param_3,ulonglong param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte *in_RAX;
  undefined7 extraout_var;
  byte *extraout_RAX;
  uint uVar7;
  byte *pbVar8;
  float fVar9;
  undefined8 local_48;
  byte local_40 [32];

  lVar4 = DAT_180115c10;
  lVar3 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if ((param_1 & 0xfffc005f) != 0) {
    cVar6 = FUN_180054c00((float *)"Invalid flags for IsItemHovered()!",param_2,param_3,param_4);
    in_RAX = (byte *)CONCAT71(extraout_var,cVar6);
    if (cVar6 != '\0') {
      FID_conflict__assert
                (L"((flags & ~ImGuiHoveredFlags_AllowedMaskForIsItemHovered) == 0) && \"Invalid flags for IsItemHovered()!\""
                 ,
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x11b9);
      in_RAX = extraout_RAX;
    }
  }
  lVar5 = DAT_180115c10;
  if (((*(char *)(lVar4 + 0x1ef9) == '\0') || (*(char *)(lVar4 + 0x1ef8) == '\0')) ||
     ((param_1 >> 0xb & 1) != 0)) {
    if ((*(uint *)(lVar4 + 0x1d90) & 1) == 0) goto LAB_1800596cc;
    if ((param_1 >> 0xc & 1) != 0) {
      uVar7 = *(uint *)(lVar4 + 0x10b0) & 0xfffe3fff;
      if ((param_1 & 0x1c000) == 0) {
        uVar7 = *(uint *)(lVar4 + 0x10b0);
      }
      param_1 = param_1 | uVar7;
    }
    if ((*(longlong *)(lVar4 + 0x13b0) != lVar3) &&
       (in_RAX = (byte *)(ulonglong)(param_1 & 0x200),
       (*(uint *)(lVar4 + 0x1d90) & 0x80) == 0 && (param_1 & 0x200) == 0)) goto LAB_1800596cc;
    uVar7 = *(uint *)(lVar4 + 0x1d88);
    if (-1 < (char)(byte)param_1) {
      uVar2 = *(uint *)(lVar4 + 0x141c);
      in_RAX = (byte *)(ulonglong)uVar2;
      if (((uVar2 != 0) && (uVar2 != uVar7)) &&
         ((*(char *)(lVar4 + 0x1429) == '\0' && (uVar2 != *(uint *)(lVar3 + 0x8c)))))
      goto LAB_1800596cc;
    }
    in_RAX = (byte *)FUN_18005a450(lVar3,(byte)param_1);
    if (((char)in_RAX == '\0') && ((*(uint *)(lVar4 + 0x1d8c) & 0x2000) == 0)) goto LAB_1800596cc;
    uVar2 = *(uint *)(lVar4 + 0x1d8c);
    in_RAX = (byte *)(ulonglong)uVar2;
    if ((((uVar2 >> 10 & 1) != 0) && ((param_1 >> 10 & 1) == 0)) ||
       (((uVar7 == *(uint *)(lVar3 + 0x8c) && (*(char *)(lVar3 + 0xce) != '\0')) ||
        (((uVar2 >> 0xe & 1) != 0 &&
         (((uVar7 != 0 && ((param_1 >> 8 & 1) == 0)) && (*(uint *)(lVar4 + 0x1408) != uVar7))))))))
    goto LAB_1800596cc;
  }
  else {
    uVar7 = *(uint *)(DAT_180115c10 + 0x1efc);
    in_RAX = (byte *)(ulonglong)uVar7;
    if (((uVar7 != *(uint *)(DAT_180115c10 + 0x1d88)) || (uVar7 == 0)) ||
       (((*(uint *)(lVar4 + 0x1d8c) & 0x400) != 0 && ((param_1 >> 10 & 1) == 0))))
    goto LAB_1800596cc;
    if ((param_1 >> 0xc & 1) != 0) {
      uVar7 = *(uint *)(lVar4 + 0x10b4) & 0xfffe3fff;
      if ((param_1 & 0x1c000) == 0) {
        uVar7 = *(uint *)(lVar4 + 0x10b4);
      }
      in_RAX = (byte *)(ulonglong)uVar7;
      param_1 = param_1 | uVar7;
    }
  }
  if ((param_1 >> 0x10 & 1) == 0) {
    if ((param_1 >> 0xf & 1) != 0) {
      fVar9 = *(float *)(lVar5 + 0x10a8);
      goto LAB_1800595e2;
    }
    fVar9 = 0.0;
LAB_1800595ef:
    if ((param_1 >> 0xd & 1) == 0) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  else {
    fVar9 = *(float *)(lVar5 + 0x10ac);
LAB_1800595e2:
    if (fVar9 <= 0.0) goto LAB_1800595ef;
  }
  uVar7 = *(uint *)(lVar4 + 0x1d88);
  if (uVar7 == 0) {
    if (*(int *)(lVar3 + 0x108) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    pbVar8 = (byte *)&local_48;
    local_48 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x1d94) >> 0x20) -
                        (float)((ulonglong)*(undefined8 *)(lVar3 + 0x128) >> 0x20),
                        (float)*(undefined8 *)(lVar4 + 0x1d94) -
                        (float)*(undefined8 *)(lVar3 + 0x128));
    uVar7 = ~*(uint *)(*(longlong *)(lVar3 + 0x110) + -4 + (longlong)*(int *)(lVar3 + 0x108) * 4);
    do {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      in_RAX = local_40;
      uVar7 = uVar7 >> 8 ^
              *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar7 & 0xff) ^ (ulonglong)bVar1) * 4);
    } while (pbVar8 < in_RAX);
    uVar7 = ~uVar7;
  }
  if (((param_1 >> 0x11 & 1) != 0) && (*(uint *)(lVar4 + 0x234c) != uVar7)) {
    *(undefined4 *)(lVar4 + 0x2350) = 0;
  }
  *(uint *)(lVar4 + 0x2348) = uVar7;
  if (((param_1 >> 0xd & 1) == 0) || (*(uint *)(lVar4 + 0x2358) == uVar7)) {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),
                    fVar9 < *(float *)(lVar4 + 0x2350) || fVar9 == *(float *)(lVar4 + 0x2350));
  }
LAB_1800596cc:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


uint FUN_1800596f0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;

  lVar2 = DAT_180115c10;
  if (((((param_1 & 0x1000) != 0) && ((param_1 >> 0xe & 1) == 0)) ||
      ((*(char *)(DAT_180115c10 + 0x60) != '\0' && ((param_1 & 0x1000) != 0)))) ||
     (uVar3 = param_1 & 0xffff0fff, uVar3 == 0)) {
    return param_1 & 0x1000;
  }
  if (0x9a < uVar3 - 0x200) {
    FID_conflict__assert
              (L"n >= 0 && n < BITCOUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0x25f);
  }
  uVar1 = *(uint *)(lVar2 + 0x1488 + ((longlong)(int)uVar3 + -0x200 >> 5) * 4);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (uVar3 - 0x200 & 0x1f) & 1) != 0);
}


bool FUN_180059790(uint param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;

  uVar2 = FUN_180056150(param_1);
  uVar3 = uVar2 & 0xf000;
  if (*(uint *)(DAT_180115c10 + 0x108) != uVar3) {
    return false;
  }
  if ((uVar2 & 0xffff0fff) == 0) {
    if (uVar3 == 0x1000) {
      uVar3 = 0x297;
    }
    else if (uVar3 == 0x2000) {
      uVar3 = 0x298;
    }
    else if (uVar3 == 0x4000) {
      uVar3 = 0x299;
    }
    else if (uVar3 == 0x8000) {
      uVar3 = 0x29a;
    }
  }
  else {
    uVar3 = uVar2 & 0xffff0fff;
  }
  bVar1 = FUN_180059900(uVar3,param_2 & 0xff,param_3);
  return bVar1;
}


ulonglong FUN_180059840(uint param_1)

{
  char *pcVar1;

  pcVar1 = (char *)FUN_180056f10(DAT_180115c10,param_1);
  if (*pcVar1 == '\0') {
LAB_18005985b:
    return (ulonglong)pcVar1 & 0xffffffffffffff00;
  }
  pcVar1 = (char *)(ulonglong)(param_1 - 0x200);
  if ((((param_1 - 0x200 < 0x9b) || (param_1 == 0x1000)) || (param_1 == 0x2000)) ||
     ((param_1 == 0x4000 || (param_1 == 0x8000)))) {
    pcVar1 = (char *)FUN_180057090(DAT_180115c10,param_1);
    if (pcVar1[8] != '\0') goto LAB_18005985b;
  }
  return CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
}


bool FUN_1800598b0(uint param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;

  pcVar2 = (char *)FUN_180056f10(DAT_180115c10,param_1);
  if (*pcVar2 == '\0') {
    return false;
  }
  bVar1 = FUN_180068c80(param_1,param_2);
  return bVar1;
}


bool FUN_180059900(uint param_1,uint param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  float fVar9;

  pcVar5 = (char *)FUN_180056f10(DAT_180115c10,param_1);
  if (*pcVar5 == '\0') {
    return false;
  }
  fVar1 = *(float *)(pcVar5 + 4);
  if (fVar1 < 0.0) {
    return false;
  }
  if ((param_2 & 0xffffff00) != 0) {
    FID_conflict__assert
              (L"(flags & ~ImGuiInputFlags_SupportedByIsKeyPressed) == 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x23e6);
  }
  uVar6 = param_2 | 1;
  if ((param_2 & 0xfe) == 0) {
    uVar6 = param_2;
  }
  if (fVar1 == 0.0) goto LAB_180059a72;
  if ((uVar6 & 1) == 0) {
    return false;
  }
  uVar3 = uVar6 & 0xe;
  if (uVar3 == 2) {
LAB_1800599dc:
    fVar7 = *(float *)(DAT_180115c10 + 0x7c);
    fVar9 = *(float *)(DAT_180115c10 + 0x80);
  }
  else if (uVar3 == 4) {
    fVar7 = *(float *)(DAT_180115c10 + 0x7c) * 0.72;
    fVar9 = *(float *)(DAT_180115c10 + 0x80) * 0.8;
  }
  else {
    if (uVar3 != 8) goto LAB_1800599dc;
    fVar7 = *(float *)(DAT_180115c10 + 0x7c) * 0.72;
    fVar9 = *(float *)(DAT_180115c10 + 0x80) * 0.3;
  }
  if ((fVar1 <= fVar7) || (iVar4 = FUN_180057130(param_1,fVar7,fVar9), iVar4 < 1)) {
    return false;
  }
  if ((uVar6 & 0xf0) != 0) {
    dVar8 = (*(double *)(DAT_180115c10 + 0x12e8) - (double)fVar1) + 9.999999747378752e-06;
    if ((uVar6 & 0x20) == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = *(double *)(DAT_180115c10 + 0x1470) <= dVar8;
    }
    if (((uVar6 & 0x40) != 0) && (dVar8 < *(double *)(DAT_180115c10 + 0x1478))) {
      bVar2 = false;
    }
    if (((char)uVar6 < '\0') && (dVar8 < *(double *)(DAT_180115c10 + 0x1480))) {
      return false;
    }
    if (!bVar2) {
      return false;
    }
  }
LAB_180059a72:
  bVar2 = FUN_180068c80(param_1,param_3);
  return bVar2;
}


void FUN_180059aa0(uint param_1,byte param_2)

{
  FUN_180059900(param_1,(uint)param_2,0);
  return;
}


undefined8 FUN_180059ab0(uint param_1)

{
  char *pcVar1;

  pcVar1 = (char *)FUN_180056f10(DAT_180115c10,param_1);
  if ((0.0 < *(float *)(pcVar1 + 8) || *(float *)(pcVar1 + 8) == 0.0) && (*pcVar1 == '\0')) {
    pcVar1 = (char *)(ulonglong)(param_1 - 0x200);
    if (((param_1 - 0x200 < 0x9b) ||
        (((param_1 == 0x1000 || (param_1 == 0x2000)) || (param_1 == 0x4000)))) ||
       (param_1 == 0x8000)) {
      pcVar1 = (char *)FUN_180057090(DAT_180115c10,param_1);
      if (pcVar1[8] != '\0') goto LAB_180059b1d;
    }
    return CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
  }
LAB_180059b1d:
  return (ulonglong)pcVar1 & 0xffffffffffffff00;
}


bool FUN_180059b30(uint param_1,uint param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;

  lVar2 = DAT_180115c10;
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x242a);
  }
  if ((*(char *)((longlong)(int)param_1 + 0xf0 + lVar2) != '\0') &&
     (fVar1 = *(float *)(lVar2 + 0xb74 + (longlong)(int)param_1 * 4), 0.0 <= fVar1)) {
    if ((param_2 & 0xfffffffe) != 0) {
      FID_conflict__assert
                (L"(flags & ~ImGuiInputFlags_SupportedByIsMouseClicked) == 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x2430);
    }
    if ((fVar1 == 0.0) ||
       ((((param_2 & 1) != 0 && (*(float *)(lVar2 + 0x7c) < fVar1)) &&
        (iVar4 = FUN_180050c40(fVar1 - *(float *)(lVar2 + 0x18),fVar1,*(float *)(lVar2 + 0x7c),
                               *(float *)(lVar2 + 0x80)), 0 < iVar4)))) {
      uVar5 = FUN_18005b660(param_1);
      bVar3 = FUN_180068c80(uVar5,param_3);
      return bVar3;
    }
  }
  return false;
}


undefined8 FUN_180059c10(uint param_1,char param_2)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;

  lVar2 = DAT_180115c10;
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x242a);
    in_RAX = extraout_RAX;
  }
  if ((*(char *)((longlong)(int)param_1 + 0xf0 + lVar2) == '\0') ||
     (fVar1 = *(float *)(lVar2 + 0xb74 + (longlong)(int)param_1 * 4), fVar1 < 0.0))
  goto LAB_180059cf3;
  if (fVar1 != 0.0) {
    if ((param_2 == '\0') || (fVar1 <= *(float *)(lVar2 + 0x7c))) goto LAB_180059cf3;
    iVar3 = FUN_180050c40(fVar1 - *(float *)(lVar2 + 0x18),fVar1,*(float *)(lVar2 + 0x7c),
                          *(float *)(lVar2 + 0x80));
    in_RAX = CONCAT44(extraout_var,iVar3);
    if (iVar3 < 1) goto LAB_180059cf3;
  }
  uVar4 = FUN_18005b660(param_1);
  in_RAX = CONCAT44(extraout_var_00,uVar4);
  if (((((0x9a < uVar4 - 0x200) && (uVar4 != 0x1000)) && (uVar4 != 0x2000)) &&
      ((uVar4 != 0x4000 && (uVar4 != 0x8000)))) ||
     (in_RAX = FUN_180057090(DAT_180115c10,uVar4), *(char *)(in_RAX + 8) == '\0')) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_180059cf3:
  return in_RAX & 0xffffffffffffff00;
}


undefined8 FUN_180059d10(uint param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong extraout_RAX;

  lVar1 = DAT_180115c10;
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2459);
    in_RAX = extraout_RAX;
  }
  if (*(short *)(lVar1 + 0xb22 + (longlong)(int)param_1 * 2) != 2) {
LAB_180059dbd:
    return in_RAX & 0xffffffffffffff00;
  }
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ImGuiMouseButton_COUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0xc93);
  }
  in_RAX = (ulonglong)(param_1 + 0x90);
  if ((((param_1 + 0x90 < 0x9b) || (param_1 == 0xd70)) || (param_1 == 0x1d70)) ||
     ((param_1 == 0x3d70 || (param_1 == 0x7d70)))) {
    in_RAX = FUN_180057090(DAT_180115c10,param_1 + 0x290);
    if (*(char *)(in_RAX + 8) != '\0') goto LAB_180059dbd;
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


undefined8 FUN_180059dd0(uint param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong extraout_RAX;

  lVar1 = DAT_180115c10;
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2417);
    in_RAX = extraout_RAX;
  }
  if (*(char *)((longlong)(int)param_1 + 0xf0 + lVar1) == '\0') {
LAB_180059e7c:
    return in_RAX & 0xffffffffffffff00;
  }
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ImGuiMouseButton_COUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0xc93);
  }
  in_RAX = (ulonglong)(param_1 + 0x90);
  if ((((param_1 + 0x90 < 0x9b) || (param_1 == 0xd70)) || (param_1 == 0x1d70)) ||
     ((param_1 == 0x3d70 || (param_1 == 0x7d70)))) {
    in_RAX = FUN_180057090(DAT_180115c10,param_1 + 0x290);
    if (*(char *)(in_RAX + 8) != '\0') goto LAB_180059e7c;
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


undefined1 FUN_180059e90(uint param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;

  lVar1 = DAT_180115c10;
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x241e);
  }
  if (*(char *)((longlong)(int)param_1 + 0xf0 + lVar1) != '\0') {
    if (4 < param_1) {
      FID_conflict__assert
                (L"button >= 0 && button < ImGuiMouseButton_COUNT",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0xc93);
    }
    bVar2 = FUN_180068c80(param_1 + 0x290,param_2);
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}


bool FUN_180059f30(uint param_1,float param_2)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2482);
  }
  if (param_2 < 0.0) {
    param_2 = *(float *)(lVar1 + 0x78);
  }
  return param_2 * param_2 <= *(float *)(lVar1 + 0xb9c + (longlong)(int)param_1 * 4);
}


bool FUN_180059fa0(uint param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;

  lVar1 = DAT_180115c10;
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x248b);
  }
  lVar2 = DAT_180115c10;
  if (*(char *)((longlong)(int)param_1 + 0xf0 + lVar1) == '\0') {
    return false;
  }
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2482);
  }
  if (param_2 < 0.0) {
    param_2 = *(float *)(lVar2 + 0x78);
  }
  return param_2 * param_2 <= *(float *)(lVar2 + 0xb9c + (longlong)(int)param_1 * 4);
}


undefined8 FUN_18005a050(float *param_1,float *param_2,char param_3)

{
  longlong in_RAX;
  uint7 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar5 = *param_2;
  fVar4 = param_2[1];
  if (param_3 != '\0') {
    in_RAX = *(longlong *)(DAT_180115c10 + 0x13a8);
    if (fVar2 <= *(float *)(in_RAX + 600)) {
      fVar2 = *(float *)(in_RAX + 600);
    }
    if (fVar3 <= *(float *)(in_RAX + 0x25c)) {
      fVar3 = *(float *)(in_RAX + 0x25c);
    }
    if (*(float *)(in_RAX + 0x260) <= fVar5) {
      fVar5 = *(float *)(in_RAX + 0x260);
    }
    if (*(float *)(in_RAX + 0x264) <= fVar4) {
      fVar4 = *(float *)(in_RAX + 0x264);
    }
  }
  uVar1 = (uint7)((ulonglong)in_RAX >> 8);
  if (fVar2 - *(float *)(DAT_180115c10 + 0xc90) <= *(float *)(DAT_180115c10 + 0xe8)) {
    if (((fVar3 - *(float *)(DAT_180115c10 + 0xc94) <= *(float *)(DAT_180115c10 + 0xec)) &&
        (*(float *)(DAT_180115c10 + 0xe8) < *(float *)(DAT_180115c10 + 0xc90) + fVar5)) &&
       (*(float *)(DAT_180115c10 + 0xec) < *(float *)(DAT_180115c10 + 0xc94) + fVar4)) {
      return CONCAT71(uVar1,1);
    }
  }
  return (ulonglong)uVar1 << 8;
}


undefined8 FUN_18005a100(float *param_1)

{
  uint7 uVar1;

  if (DAT_180115c10 == 0) {
    FID_conflict__assert
              (L"GImGui != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x24b0);
  }
  if (param_1 == (float *)0x0) {
    param_1 = (float *)(DAT_180115c10 + 0xe8);
  }
  uVar1 = (uint7)((ulonglong)DAT_180115c10 >> 8);
  if ((-256000.0 <= *param_1) && (-256000.0 <= param_1[1])) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}


undefined8 FUN_18005a170(uint param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong extraout_RAX;

  lVar1 = DAT_180115c10;
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2440);
    in_RAX = extraout_RAX;
  }
  if (*(char *)((longlong)(int)param_1 + 0xb36 + lVar1) == '\0') {
LAB_18005a21c:
    return in_RAX & 0xffffffffffffff00;
  }
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ImGuiMouseButton_COUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0xc93);
  }
  in_RAX = (ulonglong)(param_1 + 0x90);
  if ((((param_1 + 0x90 < 0x9b) || (param_1 == 0xd70)) || (param_1 == 0x1d70)) ||
     ((param_1 == 0x3d70 || (param_1 == 0x7d70)))) {
    in_RAX = FUN_180057090(DAT_180115c10,param_1 + 0x290);
    if (*(char *)(in_RAX + 8) != '\0') goto LAB_18005a21c;
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


undefined1 FUN_18005a230(uint param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;

  lVar1 = DAT_180115c10;
  if (4 < param_1) {
    FID_conflict__assert
              (L"button >= 0 && button < ((int)(sizeof(g.IO.MouseDown) / sizeof(*(g.IO.MouseDown))))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2447);
  }
  if (*(char *)((longlong)(int)param_1 + 0xb36 + lVar1) != '\0') {
    if (4 < param_1) {
      FID_conflict__assert
                (L"button >= 0 && button < ImGuiMouseButton_COUNT",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
                 ,0xc93);
    }
    bVar2 = FUN_180068c80(param_1 + 0x290,param_2);
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}


bool FUN_18005a2d0(int param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  lVar1 = DAT_180115c10;
  if ((param_2 >> 10 & 1) != 0) {
    if (param_1 != 0) {
      FID_conflict__assert
                (L"id == 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x2cb5);
    }
    if ((param_2 >> 0xb & 1) == 0) {
      return *(int *)(lVar1 + 0x1ec8) < *(int *)(lVar1 + 0x1eb8);
    }
    return 0 < *(int *)(lVar1 + 0x1eb8);
  }
  if ((param_2 >> 0xb & 1) == 0) {
    if ((*(int *)(DAT_180115c10 + 0x1ec8) < *(int *)(DAT_180115c10 + 0x1eb8)) &&
       (piVar3 = (int *)FUN_18004b730((int *)(DAT_180115c10 + 0x1eb8),
                                      *(int *)(DAT_180115c10 + 0x1ec8)), *piVar3 == param_1)) {
      return true;
    }
  }
  else {
    iVar2 = *(int *)(DAT_180115c10 + 0x1eb8);
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        if ((iVar4 < 0) || (iVar2 <= iVar4)) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        if (*(int *)((longlong)iVar4 * 0x38 + *(longlong *)(lVar1 + 0x1ec0)) == param_1) {
          return true;
        }
        iVar2 = *(int *)(lVar1 + 0x1eb8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
  }
  return false;
}


longlong FUN_18005a3e0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint7 uVar3;
  bool bVar4;

  lVar2 = param_1;
  if (param_3 == '\0') {
    lVar1 = param_1;
    if (param_1 != 0) {
      do {
        lVar2 = *(longlong *)(lVar1 + 0x3b0);
        bVar4 = lVar1 != lVar2;
        lVar1 = lVar2;
      } while (bVar4);
    }
  }
  else {
    lVar1 = param_1;
    if (param_1 != 0) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x3b0) + 0x3b8);
        bVar4 = lVar1 != lVar2;
        lVar1 = lVar2;
      } while (bVar4);
    }
  }
  uVar3 = (uint7)((ulonglong)lVar2 >> 8);
  if (lVar2 == param_2) {
LAB_18005a43f:
    return CONCAT71(uVar3,1);
  }
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x3a0)) {
    if (param_1 == param_2) goto LAB_18005a43f;
    if (param_1 == lVar2) break;
  }
  return (ulonglong)uVar3 << 8;
}


undefined8 FUN_18005a450(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;

  lVar2 = DAT_180115c10;
  if (((((*(longlong *)(DAT_180115c10 + 0x1f00) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3b0), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0xcd) != '\0')) &&
      (lVar2 = *(longlong *)(param_1 + 0x3b0), lVar1 != lVar2)) &&
     ((((*(uint *)(lVar1 + 0x14) >> 0x1b & 1) != 0 ||
       (((*(uint *)(lVar1 + 0x14) >> 0x1a & 1) != 0 && ((param_2 & 0x20) == 0)))) &&
      (*(longlong *)(lVar2 + 0x3b0) != lVar1)))) {
    while (lVar2 != lVar1) {
      lVar2 = *(longlong *)(lVar2 + 0x3a8);
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}


bool FUN_18005a4c0(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *in_RDX;
  longlong lVar6;
  longlong lVar7;
  float *in_R8;
  ulonglong in_R9;
  bool bVar8;

  lVar2 = DAT_180115c10;
  if (((param_1 & 0xffffcf50) != 0) &&
     (cVar3 = FUN_180054c00((float *)"Invalid flags for IsWindowHovered()!",in_RDX,in_R8,in_R9),
     cVar3 != '\0')) {
    FID_conflict__assert
              (L"((flags & ~ImGuiHoveredFlags_AllowedMaskForIsWindowHovered) == 0) && \"Invalid flags for IsWindowHovered()!\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1f91);
  }
  lVar1 = *(longlong *)(lVar2 + 0x13b0);
  if (lVar1 != 0) {
    if ((param_1 & 4) == 0) {
      lVar7 = *(longlong *)(lVar2 + 0x13a8);
      if (lVar7 == 0) {
        FID_conflict__assert
                  (L"cur_window",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x1f9a);
      }
      if (((param_1 & 2) != 0) && (lVar4 = lVar7, lVar7 != 0)) {
        do {
          lVar7 = *(longlong *)(lVar4 + 0x3b0);
          if ((param_1 & 8) == 0) {
            lVar7 = *(longlong *)(lVar7 + 0x3b8);
          }
          bVar8 = lVar4 != lVar7;
          lVar4 = lVar7;
        } while (bVar8);
      }
      if ((param_1 & 1) == 0) {
        bVar8 = lVar1 == lVar7;
      }
      else {
        lVar4 = lVar1;
        if ((param_1 & 8) == 0) {
          do {
            lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x3b0) + 0x3b8);
            bVar8 = lVar4 != lVar6;
            lVar4 = lVar6;
          } while (bVar8);
        }
        else {
          do {
            lVar6 = *(longlong *)(lVar4 + 0x3b0);
            bVar8 = lVar4 != lVar6;
            lVar4 = lVar6;
          } while (bVar8);
        }
        if (lVar6 == lVar7) {
LAB_18005a5bc:
          bVar8 = true;
        }
        else {
          lVar4 = lVar1;
          do {
            if (lVar4 == lVar7) goto LAB_18005a5bc;
          } while ((lVar4 != lVar6) && (lVar4 = *(longlong *)(lVar4 + 0x3a0), lVar4 != 0));
          bVar8 = false;
        }
      }
      if (!bVar8) {
        return false;
      }
    }
    uVar5 = FUN_18005a450(lVar1,(byte)param_1);
    if (((char)uVar5 != '\0') &&
       (((((char)(byte)param_1 < '\0' || (*(int *)(lVar2 + 0x141c) == 0)) ||
         (*(char *)(lVar2 + 0x1429) != '\0')) ||
        (*(int *)(lVar2 + 0x141c) == *(int *)(lVar1 + 0x8c))))) {
      if ((param_1 >> 0xc & 1) != 0) {
        param_1 = param_1 | *(uint *)(lVar2 + 0x10b0);
      }
      if ((param_1 >> 0xd & 1) == 0) {
        return true;
      }
      return *(int *)(lVar2 + 0x235c) == *(int *)(lVar1 + 0x10);
    }
  }
  return false;
}


undefined8 FUN_18005a670(float *param_1,wchar_t *param_2,float *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong extraout_RAX;
  uint uVar11;
  float fVar12;

  uVar6 = DAT_180115c10;
  uVar11 = (uint)param_2;
  pfVar9 = param_1;
  if (param_3 != (float *)0x0) {
    pfVar9 = param_3;
  }
  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  *(uint *)(DAT_180115c10 + 0x1d88) = uVar11;
  uVar3 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(uVar6 + 0x1d94) = *(undefined8 *)param_1;
  *(undefined8 *)(uVar6 + 0x1d9c) = uVar3;
  uVar3 = *(undefined8 *)pfVar9;
  uVar4 = *(undefined8 *)(pfVar9 + 2);
  uVar8 = *(uint *)(uVar6 + 0x1d54) | *(uint *)(uVar6 + 0x1d48) | (uint)param_4;
  uVar10 = (ulonglong)uVar8;
  *(undefined4 *)(uVar6 + 0x1d90) = 0;
  *(uint *)(uVar6 + 0x1d8c) = uVar8;
  *(undefined8 *)(uVar6 + 0x1da4) = uVar3;
  *(undefined8 *)(uVar6 + 0x1dac) = uVar4;
  uVar7 = DAT_180115c10;
  if (uVar11 != 0) {
    if (*(uint *)(DAT_180115c10 + 0x141c) == uVar11) {
      *(uint *)(DAT_180115c10 + 0x1420) = uVar11;
    }
    if (*(uint *)(uVar7 + 0x1450) == uVar11) {
      *(undefined1 *)(uVar7 + 0x1459) = 1;
    }
    uVar10 = uVar7;
    if ((*(byte *)(uVar6 + 0x1d8c) & 2) == 0) {
      uVar10 = (ulonglong)*(uint *)(lVar1 + 0x170);
      *(ushort *)(lVar1 + 0x176) =
           *(ushort *)(lVar1 + 0x176) | (ushort)(1 << (*(uint *)(lVar1 + 0x170) & 0x1f));
      if ((*(uint *)(uVar6 + 0x1efc) == uVar11) || (*(char *)(uVar6 + 0x1f51) != '\0')) {
        lVar2 = *(longlong *)(uVar6 + 0x1f00);
        uVar10 = *(ulonglong *)(lVar1 + 0x3c8);
        if ((*(ulonglong *)(lVar2 + 0x3c8) == uVar10) &&
           ((lVar1 == lVar2 ||
            (uVar8 = *(uint *)(lVar2 + 0x18) | *(uint *)(lVar1 + 0x18), uVar10 = (ulonglong)uVar8,
            (uVar8 >> 8 & 1) != 0)))) {
          uVar10 = FUN_18005c630(lVar2,param_2,(ulonglong)param_3,param_4);
        }
      }
    }
    uVar7 = DAT_180115c10;
    if ((*(byte *)(uVar6 + 0x1d50) & 4) != 0) {
      uVar8 = *(uint *)(DAT_180115c10 + 0x1d70);
      if ((uVar8 & 0xfff80300) != 0) {
        FID_conflict__assert
                  (L"(flags & ~ImGuiInputFlags_SupportedBySetNextItemShortcut) == 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x275b);
        uVar10 = extraout_RAX;
      }
      if ((*(uint *)(uVar7 + 0x1d8c) & 0x400) == 0) {
        if ((uVar8 >> 0x12 & 1) != 0) {
          *(uint *)(uVar7 + 0x1d90) = *(uint *)(uVar7 + 0x1d90) | 0x400;
          *(undefined4 *)(uVar7 + 0x1dd4) = *(undefined4 *)(uVar7 + 0x1d6c);
        }
        uVar10 = FUN_180068330(*(uint *)(uVar7 + 0x1d6c),uVar8 & 0x3fcff,uVar11,param_4);
        if (((char)uVar10 != '\0') && (*(int *)(uVar7 + 0x1f10) == 0)) {
          *(uint *)(uVar7 + 0x1f10) = uVar11;
          *(undefined4 *)(uVar7 + 0x1f1c) = 0x11;
          *(uint *)(uVar7 + 0x1f18) = uVar11;
          *(uint *)(uVar7 + 0x1f14) = uVar11;
          uVar10 = DAT_180115c10;
          *(uint *)(DAT_180115c10 + 0x1f30) = uVar11;
          *(undefined4 *)(uVar10 + 0x1f34) = 0x3dcccccd;
        }
      }
    }
  }
  *(undefined8 *)(uVar6 + 0x1d50) = 0;
  if ((((param_1[3] < *(float *)(lVar1 + 0x25c) || param_1[3] == *(float *)(lVar1 + 0x25c)) ||
       (*(float *)(lVar1 + 0x264) < param_1[1] || *(float *)(lVar1 + 0x264) == param_1[1])) ||
      (param_1[2] < *(float *)(lVar1 + 600) || param_1[2] == *(float *)(lVar1 + 600))) ||
     (*(float *)(lVar1 + 0x260) < *param_1 || *(float *)(lVar1 + 0x260) == *param_1)) {
    bVar5 = false;
    if ((uVar11 == 0) ||
       (((uVar11 != *(uint *)(uVar6 + 0x141c) && (uVar11 != *(uint *)(uVar6 + 0x144c))) &&
        ((uVar11 != *(uint *)(uVar6 + 0x1efc) && (uVar11 != *(uint *)(uVar6 + 0x1f10))))))) {
      if (*(char *)(uVar6 + 0x141a) == '\0') {
        return uVar10 & 0xffffffffffffff00;
      }
      goto LAB_18005a883;
    }
  }
  else {
    bVar5 = true;
LAB_18005a883:
    if (uVar11 == 0) goto LAB_18005a8c6;
  }
  if (uVar11 == *(uint *)(uVar6 + 0x1d4c)) {
    FUN_180052c00();
  }
  if (uVar11 == *(uint *)(lVar1 + 0x10)) {
    FID_conflict__assert
              (L"id != window->ID && \"Cannot have an empty ID at the root of a window. If you need an empty label, use ## and read the FAQ about how the ID Stack works!\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2993);
  }
  if (*(uint *)(uVar6 + 0x1450) == uVar11) {
    *(undefined4 *)(uVar6 + 0x1454) = *(undefined4 *)(uVar6 + 0x12f0);
  }
LAB_18005a8c6:
  if (bVar5) {
    *(uint *)(uVar6 + 0x1d90) = *(uint *)(uVar6 + 0x1d90) | 0x100;
  }
  uVar10 = DAT_180115c10;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  fVar12 = *param_1;
  if (*param_1 <= *(float *)(lVar1 + 600)) {
    fVar12 = *(float *)(lVar1 + 600);
  }
  if (fVar12 - *(float *)(DAT_180115c10 + 0xc90) <= *(float *)(DAT_180115c10 + 0xe8)) {
    fVar12 = param_1[1];
    if (param_1[1] <= *(float *)(lVar1 + 0x25c)) {
      fVar12 = *(float *)(lVar1 + 0x25c);
    }
    if (fVar12 - *(float *)(DAT_180115c10 + 0xc94) <= *(float *)(DAT_180115c10 + 0xec)) {
      fVar12 = param_1[2];
      if (*(float *)(lVar1 + 0x260) <= param_1[2]) {
        fVar12 = *(float *)(lVar1 + 0x260);
      }
      if (*(float *)(DAT_180115c10 + 0xe8) < *(float *)(DAT_180115c10 + 0xc90) + fVar12) {
        fVar12 = param_1[3];
        if (*(float *)(lVar1 + 0x264) <= param_1[3]) {
          fVar12 = *(float *)(lVar1 + 0x264);
        }
        if (*(float *)(DAT_180115c10 + 0xec) < *(float *)(DAT_180115c10 + 0xc94) + fVar12) {
          *(uint *)(uVar6 + 0x1d90) = *(uint *)(uVar6 + 0x1d90) | 1;
        }
      }
    }
  }
  return CONCAT71((int7)(uVar10 >> 8),1);
}


bool FUN_18005a9d0(float *param_1,int param_2,float *param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  int *piVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  undefined8 local_res20;
  undefined8 local_48 [4];

  lVar4 = DAT_180115c10;
  lVar8 = *(longlong *)(DAT_180115c10 + 0x13a8);
  pfVar12 = param_3;
  if ((((param_2 != 0) && (*(int *)(DAT_180115c10 + 0x1408) == param_2)) &&
      (((ulonglong)param_3 & 0x20) == 0)) &&
     (*(int *)(DAT_180115c10 + 0x140c) = *(int *)(DAT_180115c10 + 0x140c) + 1,
     *(int *)(lVar4 + 0x13fc) == param_2)) {
    pfVar12 = (float *)&local_res20;
    local_res20 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20) + 1.0,
                           (float)*(undefined8 *)(param_1 + 2) + 1.0);
    param_4 = 0xff0000ff;
    local_48[0] = CONCAT44((float)((ulonglong)*(undefined8 *)param_1 >> 0x20) - 1.0,
                           (float)*(undefined8 *)param_1 - 1.0);
    FUN_180071260(*(int **)(lVar8 + 0x2c0),(float *)local_48,pfVar12,0xff0000ff,0.0,0,2.0);
  }
  lVar5 = DAT_180115c10;
  if (*(longlong *)(lVar4 + 0x13b0) != lVar8) {
    return false;
  }
  pfVar14 = (float *)CONCAT71((int7)((ulonglong)pfVar12 >> 8),1);
  pfVar12 = param_1 + 2;
  uVar7 = FUN_18005a050(param_1,pfVar12,'\x01');
  if ((char)uVar7 == '\0') {
    return false;
  }
  if (((*(int *)(lVar4 + 0x1404) != 0) && (*(int *)(lVar4 + 0x1404) != param_2)) &&
     (*(char *)(lVar4 + 0x1418) == '\0')) {
    return false;
  }
  if (((*(int *)(lVar4 + 0x141c) != 0) && (*(int *)(lVar4 + 0x141c) != param_2)) &&
     ((*(char *)(lVar4 + 0x1429) == '\0' && (*(char *)(lVar4 + 0x142e) == '\0')))) {
    return false;
  }
  uVar13 = (uint)param_3;
  if (((((uVar13 >> 0xd & 1) == 0) && (*(longlong *)(lVar5 + 0x1f00) != 0)) &&
      (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x1f00) + 0x3b0), lVar2 != 0)) &&
     ((*(char *)(lVar2 + 0xcd) != '\0' && (lVar8 = *(longlong *)(lVar8 + 0x3b0), lVar2 != lVar8))))
  {
    uVar1 = *(uint *)(lVar2 + 0x14);
    pfVar12 = (float *)(ulonglong)uVar1;
    if ((((uVar1 >> 0x1b & 1) != 0) || ((uVar1 >> 0x1a & 1) != 0)) &&
       (*(longlong *)(lVar8 + 0x3b0) != lVar2)) {
      do {
        if (lVar8 == lVar2) goto LAB_18005ab4e;
        lVar8 = *(longlong *)(lVar8 + 0x3a8);
      } while (lVar8 != 0);
      goto LAB_18005ac04;
    }
  }
LAB_18005ab4e:
  if (param_2 != 0) {
    if (((*(char *)(lVar4 + 0x2114) != '\0') && (*(int *)(lVar4 + 0x2134) == param_2)) &&
       ((*(byte *)(lVar4 + 0x2118) & 2) == 0)) {
      return false;
    }
    *(int *)(lVar5 + 0x1404) = param_2;
    *(undefined1 *)(lVar5 + 0x1418) = 0;
    if (*(int *)(lVar5 + 0x1408) != param_2) {
      *(undefined8 *)(lVar5 + 0x1410) = 0;
    }
    if (((uVar13 >> 0xe & 1) != 0) &&
       (*(undefined1 *)(lVar4 + 0x1418) = 1, *(int *)(lVar4 + 0x1408) != param_2)) {
      return false;
    }
    if ((((param_2 == *(int *)(lVar4 + 0x1d88)) && ((*(uint *)(lVar4 + 0x1d90) & 0x400) != 0)) &&
        (*(int *)(lVar4 + 0x141c) != param_2)) &&
       (uVar9 = FUN_180059410(0x11000,pfVar12,pfVar14,param_4), (char)uVar9 != '\0')) {
      pcVar10 = FUN_180056dc0(*(uint *)(lVar4 + 0x1dd4));
      FUN_180067f50("%s",pcVar10,(undefined *)pfVar14,param_4);
    }
  }
  if ((uVar13 >> 10 & 1) == 0) {
    if (param_2 != 0) {
      if ((*(char *)(lVar4 + 0x2749) != '\0') && (*(int *)(lVar4 + 0x1408) == param_2)) {
        piVar11 = (int *)FUN_1800569b0();
        FUN_180071260(piVar11,param_1,param_1 + 2,0xff00ffff,0.0,0,1.0);
      }
      if (*(int *)(lVar4 + 0x274c) == param_2) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    if (*(char *)(lVar4 + 0x1ef9) == '\0') {
      return true;
    }
    return (uVar13 >> 0xf & 1) != 0;
  }
  if ((*(int *)(lVar4 + 0x141c) == param_2) && (param_2 != 0)) {
    FUN_180066c00(0,0,pfVar14,param_4);
  }
LAB_18005ac04:
  *(undefined1 *)(lVar4 + 0x1419) = 1;
  return false;
}


void FUN_18005aca0(float *param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  lVar3 = DAT_180115c10;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    fVar6 = 0.0;
    if ((0.0 <= param_2) && (fVar5 = *(float *)(lVar1 + 0x150) - param_2, 0.0 <= fVar5)) {
      fVar6 = fVar5;
    }
    fVar5 = *(float *)(lVar1 + 0x150);
    if (*(float *)(lVar1 + 0x150) <= param_2) {
      fVar5 = param_2;
    }
    lVar4 = 0x124;
    if (*(char *)(lVar1 + 0x158) == '\0') {
      lVar4 = 0x11c;
    }
    fVar7 = *(float *)(lVar4 + lVar1);
    fVar6 = (*(float *)(lVar1 + 0x11c) - fVar7) + param_1[1] + fVar6;
    fVar8 = *(float *)(lVar1 + 0x118) + *param_1;
    *(float *)(lVar1 + 0x124) = fVar7;
    fVar9 = *(float *)(lVar1 + 0x144);
    if (*(float *)(lVar1 + 0x144) <= fVar6) {
      fVar9 = fVar6;
    }
    *(float *)(lVar1 + 0x120) = fVar8;
    *(float *)(lVar1 + 0x118) =
         (float)(int)(*(float *)(lVar1 + 0x15c) + *(float *)(lVar1 + 0x28) +
                     *(float *)(lVar1 + 0x160));
    fVar6 = *(float *)(lVar3 + 0xc7c);
    fVar2 = *(float *)(lVar1 + 0x130);
    if (*(float *)(lVar1 + 0x130) <= fVar8) {
      fVar2 = fVar8;
    }
    *(float *)(lVar1 + 0x130) = fVar2;
    fVar7 = (float)(int)(fVar7 + fVar9 + fVar6);
    *(float *)(lVar1 + 0x11c) = fVar7;
    fVar7 = fVar7 - *(float *)(lVar3 + 0xc7c);
    *(float *)(lVar1 + 0x14c) = fVar9;
    *(float *)(lVar1 + 0x154) = fVar5;
    *(undefined4 *)(lVar1 + 0x144) = 0;
    *(undefined4 *)(lVar1 + 0x150) = 0;
    fVar6 = *(float *)(lVar1 + 0x134);
    if (*(float *)(lVar1 + 0x134) <= fVar7) {
      fVar6 = fVar7;
    }
    *(undefined2 *)(lVar1 + 0x158) = 0;
    *(float *)(lVar1 + 0x134) = fVar6;
    if (*(int *)(lVar1 + 0x1cc) == 0) {
      FUN_180066590(0.0,-1.0);
    }
  }
  return;
}


void FUN_18005ae10(char *param_1,ulonglong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong local_res10;

  pcVar5 = DAT_180115c10;
  if (*DAT_180115c10 == '\0') {
    FID_conflict__assert
              (L"g.Initialized",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3962);
  }
  local_res10 = param_2;
  if (param_2 == 0) {
    local_res10 = strlen(param_1);
  }
  iVar6 = *(int *)(pcVar5 + 0x25d4);
  iVar11 = (int)local_res10 + 1;
  if (iVar6 < iVar11) {
    if (iVar6 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar6 / 2 + iVar6;
    }
    iVar10 = iVar11;
    if (iVar11 < iVar6) {
      iVar10 = iVar6;
    }
    FUN_18006d510((int *)(pcVar5 + 0x25d0),iVar10);
  }
  *(int *)(pcVar5 + 0x25d0) = iVar11;
  pcVar3 = *(char **)(pcVar5 + 0x25d8);
  pcVar2 = pcVar3 + local_res10;
  FUN_1800d1c20((undefined8 *)pcVar3,(undefined8 *)param_1,local_res10);
  *pcVar2 = '\0';
  lVar12 = *(longlong *)(pcVar5 + 0x25e8);
  lVar9 = (longlong)*(int *)(pcVar5 + 0x25e0) * 0x48 + lVar12;
  if ((longlong)*(int *)(pcVar5 + 0x25e0) * 0x48 != 0) {
    do {
      if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
        (**(code **)(lVar12 + 0x18))(pcVar5,lVar12);
      }
      lVar12 = lVar12 + 0x48;
    } while (lVar12 != lVar9);
  }
  lVar12 = 0;
  lVar9 = 0;
  pcVar7 = pcVar3;
  while (pcVar7 < pcVar2) {
    for (; (*pcVar7 == '\n' || (pcVar4 = pcVar7, *pcVar7 == '\r')); pcVar7 = pcVar7 + 1) {
    }
    for (; ((pcVar4 < pcVar2 && (*pcVar4 != '\n')) && (*pcVar4 != '\r')); pcVar4 = pcVar4 + 1) {
    }
    *pcVar4 = '\0';
    if (*pcVar7 != ';') {
      if (((*pcVar7 == '[') && (pcVar7 < pcVar4)) && (pcVar8 = pcVar4 + -1, pcVar4[-1] == ']')) {
        pbVar1 = (byte *)(pcVar7 + 1);
        *pcVar8 = '\0';
        pcVar7 = FUN_1800d1a80((char *)pbVar1,0x5d,pcVar8 + -(longlong)pbVar1);
        if ((pcVar7 != (char *)0x0) &&
           (pcVar8 = FUN_1800d1a80(pcVar7 + 1,0x5b,pcVar8 + -(longlong)(pcVar7 + 1)),
           pcVar8 != (char *)0x0)) {
          *pcVar7 = '\0';
          lVar9 = FUN_180055cb0(pbVar1);
          if (lVar9 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = (**(code **)(lVar9 + 0x20))(pcVar5,lVar9,pcVar8 + 1);
          }
        }
      }
      else if ((lVar9 != 0) && (lVar12 != 0)) {
        (**(code **)(lVar9 + 0x28))(pcVar5,lVar9,lVar12,pcVar7);
      }
    }
    pcVar7 = pcVar4 + 1;
  }
  pcVar5[0x25c8] = '\x01';
  FUN_1800d1c20((undefined8 *)pcVar3,(undefined8 *)param_1,local_res10);
  lVar12 = *(longlong *)(pcVar5 + 0x25e8);
  lVar9 = (longlong)*(int *)(pcVar5 + 0x25e0) * 0x48 + lVar12;
  if ((longlong)*(int *)(pcVar5 + 0x25e0) * 0x48 != 0) {
    do {
      if (*(code **)(lVar12 + 0x30) != (code *)0x0) {
        (**(code **)(lVar12 + 0x30))(pcVar5,lVar12);
      }
      lVar12 = lVar12 + 0x48;
    } while (lVar12 != lVar9);
  }
  return;
}


void FUN_18005b080(uint param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;

  lVar2 = DAT_180115c10;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if (*(char *)(DAT_180115c10 + 0x2678) != '\0') {
    FID_conflict__assert
              (L"g.LogEnabled == false",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3867);
  }
  if ((*(longlong *)(lVar2 + 0x2688) != 0) || (1 < *(int *)(lVar2 + 0x2690))) {
    FID_conflict__assert
              (L"g.LogFile == 0 && g.LogBuffer.empty()",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3868);
  }
  if (((param_1 & 0xf) == 0) || (((param_1 & 0xf) - 1 & param_1 & 0xf) != 0)) {
    FID_conflict__assert
              (L"ImIsPowerOfTwo(flags & ImGuiLogFlags_OutputMask_)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3869);
  }
  *(undefined1 *)(lVar2 + 0x141a) = 1;
  *(undefined8 *)(lVar2 + 0x26a8) = 0;
  *(undefined8 *)(lVar2 + 0x26a0) = 0;
  *(undefined1 *)(lVar2 + 0x2678) = 1;
  *(uint *)(lVar2 + 0x267c) = param_1;
  *(longlong *)(lVar2 + 0x2680) = lVar1;
  *(undefined4 *)(lVar2 + 0x26b8) = *(undefined4 *)(lVar1 + 0x1a0);
  if (param_2 < 0) {
    param_2 = *(int *)(lVar2 + 0x26c0);
  }
  *(int *)(lVar2 + 0x26bc) = param_2;
  *(undefined4 *)(lVar2 + 0x26b0) = 0x7f7fffff;
  *(undefined1 *)(lVar2 + 0x26b4) = 1;
  return;
}


void FUN_18005b180(longlong param_1,char *param_2,char *param_3,ulonglong param_4)

{
  int iVar1;
  char *_Str;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  uint7 uVar8;
  longlong lVar7;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;

  pcVar9 = param_2;
  pcVar11 = param_3;
  do {
    lVar3 = DAT_180115c10;
    pcVar10 = *(char **)(DAT_180115c10 + 0x26a0);
    _Str = *(char **)(DAT_180115c10 + 0x26a8);
    lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
    *(undefined8 *)(DAT_180115c10 + 0x26a8) = 0;
    *(undefined8 *)(lVar3 + 0x26a0) = 0;
    if ((param_3 == (char *)0x0) && (param_3 = pcVar9, pcVar9 != (char *)0xffffffffffffffff)) {
      while (*param_3 != '\0') {
        if (((*param_3 == '#') && (param_3[1] == '#')) ||
           (param_3 = param_3 + 1, param_3 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (param_1 != 0) {
      uVar8 = (uint7)((ulonglong)param_2 >> 8);
      if (*(float *)(param_1 + 4) <= *(float *)(lVar3 + 0x26b0) + *(float *)(lVar3 + 0xc6c) + 1.0) {
        if (param_1 == 0) goto LAB_18005b251;
        lVar7 = (ulonglong)uVar8 << 8;
      }
      else {
        lVar7 = CONCAT71(uVar8,1);
      }
      *(undefined4 *)(lVar3 + 0x26b0) = *(undefined4 *)(param_1 + 4);
      if ((char)lVar7 != '\0') {
        FUN_18005b370(0x1800e6bf8,lVar7,pcVar11,param_4);
        *(undefined1 *)(lVar3 + 0x26b4) = 1;
      }
    }
LAB_18005b251:
    if (pcVar10 != (char *)0x0) {
      sVar5 = strlen(pcVar10);
      FUN_18005b180(param_1,pcVar10,pcVar10 + sVar5,param_4);
    }
    iVar1 = *(int *)(lVar2 + 0x1a0);
    iVar4 = *(int *)(lVar3 + 0x26b8);
    if (iVar1 < iVar4) {
      *(int *)(lVar3 + 0x26b8) = iVar1;
      iVar4 = iVar1;
    }
    iVar1 = *(int *)(lVar2 + 0x1a0);
    while( true ) {
      param_2 = (char *)0x0;
      pcVar11 = param_3 + -(longlong)pcVar9;
      pcVar6 = FUN_1800d1a80(pcVar9,10,pcVar11);
      pcVar10 = param_3;
      if (pcVar6 != (char *)0x0) {
        pcVar10 = pcVar6;
      }
      if ((pcVar9 == pcVar10) && (pcVar10 == param_3)) break;
      param_4 = (ulonglong)(uint)((int)pcVar10 - (int)pcVar9);
      pcVar11 = "";
      param_2 = (char *)0x1;
      if (*(char *)(lVar3 + 0x26b4) != '\0') {
        param_2 = (char *)(ulonglong)(uint)((iVar1 - iVar4) * 4);
      }
      FUN_18005b370(0x1800e6c00,param_2,&DAT_1800d8c40,param_4);
      *(undefined1 *)(lVar3 + 0x26b4) = 0;
      if (*pcVar10 == '\n') {
        FUN_18005b370(0x1800e6bf8,param_2,pcVar11,param_4);
        *(undefined1 *)(lVar3 + 0x26b4) = 1;
      }
      if (pcVar10 == param_3) break;
      pcVar9 = pcVar10 + 1;
    }
    if (_Str == (char *)0x0) {
      return;
    }
    sVar5 = strlen(_Str);
    param_3 = _Str + sVar5;
    pcVar9 = _Str;
  } while( true );
}


void FUN_18005b350(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  *(undefined8 *)(DAT_180115c10 + 0x26a0) = param_1;
  *(undefined8 *)(lVar1 + 0x26a8) = param_2;
  return;
}


void FUN_18005b370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;

  if (*(char *)(DAT_180115c10 + 0x2678) != '\0') {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_18005b3b0(DAT_180115c10,param_1,&local_res10);
  }
  return;
}


void FUN_18005b3b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;

  if (*(longlong *)(param_1 + 0x2688) == 0) {
    FUN_18006ccd0((int *)(param_1 + 0x2690),param_2,param_3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2694);
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar3 = 0;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_18006d510((int *)(param_1 + 0x2690),iVar3);
  }
  *(undefined4 *)(param_1 + 0x2690) = 0;
  FUN_18006ccd0((int *)(param_1 + 0x2690),param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x2690) + -1;
  if (*(int *)(param_1 + 0x2690) == 0) {
    iVar1 = 0;
  }
  puVar2 = &DAT_180115c18;
  if (*(undefined **)(param_1 + 0x2698) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x2698);
  }
  FUN_1800b2120(puVar2,1,(longlong)iVar1,*(longlong *)(param_1 + 0x2688));
  return;
}


void FUN_18005b470(longlong param_1)

{
  if (((*(uint *)(param_1 + 0x14) & 0x100) == 0) && (*(float *)(DAT_180115c10 + 0x25cc) <= 0.0)) {
    *(undefined4 *)(DAT_180115c10 + 0x25cc) = *(undefined4 *)(DAT_180115c10 + 0x1c);
  }
  return;
}


void FUN_18005b4a0(void)

{
  if (*(float *)(DAT_180115c10 + 0x25cc) <= 0.0) {
    *(undefined4 *)(DAT_180115c10 + 0x25cc) = *(undefined4 *)(DAT_180115c10 + 0x1c);
  }
  return;
}


void FUN_18005b4c0(int param_1)

{
  int iVar1;
  longlong lVar2;

  lVar2 = DAT_180115c10;
  if ((*(uint *)(DAT_180115c10 + 0x1d8c) & 0x10000) == 0) {
    iVar1 = *(int *)(DAT_180115c10 + 0x141c);
    if (((iVar1 == param_1) || (iVar1 == 0)) &&
       (*(undefined2 *)(DAT_180115c10 + 0x142c) = 0x101, *(int *)(lVar2 + 0x1450) == param_1)) {
      *(undefined1 *)(lVar2 + 0x1458) = 1;
    }
    if ((((*(char *)(lVar2 + 0x2114) == '\0') && (iVar1 != param_1)) &&
        ((iVar1 != 0 && (*(int *)(lVar2 + 0x144c) != param_1)))) &&
       ((*(longlong *)(lVar2 + 0x2300) == 0 || (*(char *)(lVar2 + 0x229c) == '\0')))) {
      FID_conflict__assert
                (L"g.DragDropActive || g.ActiveId == id || g.ActiveId == 0 || g.ActiveIdPreviousFrame == id || (g.CurrentMultiSelect != 0 && g.BoxSelectState.IsActive)"
                 ,
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1181);
    }
    *(uint *)(lVar2 + 0x1d90) = *(uint *)(lVar2 + 0x1d90) | 4;
  }
  return;
}


undefined8 FUN_18005b560(longlong param_1)

{
  undefined8 uVar1;

  uVar1 = (*(code *)PTR__malloc_base_1801121b8)(param_1,DAT_180115c20);
  if (DAT_180115c10 != 0) {
    FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),uVar1,param_1);
  }
  return uVar1;
}


void FUN_18005b5c0(longlong param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;

  lVar3 = DAT_180115c10;
  if ((param_1 != 0) && (DAT_180115c10 != 0)) {
    iVar2 = *(int *)(DAT_180115c10 + 0x12f0);
    lVar6 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
    if (*(int *)(lVar6 + 0x27c4 + DAT_180115c10) != iVar2) {
      iVar5 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
      sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
      *(short *)(DAT_180115c10 + 0x27c0) = sVar4;
      lVar6 = (longlong)sVar4 * 8;
      *(undefined4 *)(lVar6 + 0x27c8 + lVar3) = 0;
      *(int *)(lVar6 + 0x27c4 + lVar3) = iVar2;
    }
    psVar1 = (short *)(lVar6 + 0x27ca + lVar3);
    *psVar1 = *psVar1 + 1;
    *(int *)(lVar3 + 0x27bc) = *(int *)(lVar3 + 0x27bc) + 1;
  }
                    // WARNING: Could not recover jumptable at 0x00018005b64c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_thunk_FUN_1800c3030_1801121c0)(param_1,DAT_180115c20);
  return;
}


int FUN_18005b660(uint param_1)

{
  if (param_1 < 5) {
    return param_1 + 0x290;
  }
  FID_conflict__assert
            (L"button >= 0 && button < ImGuiMouseButton_COUNT",
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
             ,0xc93);
  return param_1 + 0x290;
}


float * FUN_18005b6a0(float *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res10;
  float local_res14;

  lVar3 = DAT_180115c10;
  iVar1 = *(int *)(DAT_180115c10 + 0x141c);
  lVar4 = *(longlong *)(DAT_180115c10 + 0x1f00);
  if (((iVar1 == 0) || (*(char *)(DAT_180115c10 + 0x142e) == '\0')) ||
     (iVar1 != *(int *)(DAT_180115c10 + 0x1d88))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((*(char *)(DAT_180115c10 + 0x1ef8) != '\0') && (*(char *)(DAT_180115c10 + 0x1ef9) != '\0'))
      && (lVar4 != 0)) || (iVar6 = 1, bVar2)) {
    iVar6 = 2;
  }
  if (((iVar1 == 0) || (*(char *)(DAT_180115c10 + 0x142e) == '\0')) ||
     (iVar1 != *(int *)(DAT_180115c10 + 0x1d88))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (iVar6 == 1) {
    pfVar7 = (float *)(DAT_180115c10 + 0xe8);
    if (DAT_180115c10 == 0) {
      FID_conflict__assert
                (L"GImGui != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x24b0);
    }
    if (pfVar7 == (float *)0x0) {
      pfVar7 = (float *)(DAT_180115c10 + 0xe8);
    }
    if ((*pfVar7 < -256000.0) || (pfVar7[1] < -256000.0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar4 = 0xe8;
    if (!bVar2) {
      lVar4 = 0x2368;
    }
    fVar8 = *(float *)(lVar4 + lVar3) + 1.0;
    lVar4 = 0xec;
    if (!bVar2) {
      lVar4 = 0x236c;
    }
    param_1[1] = *(float *)(lVar4 + lVar3);
  }
  else {
    if (bVar2) {
      fVar12 = *(float *)(DAT_180115c10 + 0x1da4);
      fVar8 = *(float *)(DAT_180115c10 + 0x1da8);
      fVar10 = *(float *)(DAT_180115c10 + 0x1dac);
      fVar9 = *(float *)(DAT_180115c10 + 0x1db0);
    }
    else {
      lVar5 = (longlong)*(int *)(DAT_180115c10 + 0x1f0c);
      fVar12 = *(float *)(lVar4 + 0x128) + *(float *)(lVar4 + 1000 + lVar5 * 0x10);
      fVar8 = *(float *)(lVar4 + 300) + *(float *)(lVar4 + 0x3ec + lVar5 * 0x10);
      fVar10 = *(float *)(lVar4 + 0x128) + *(float *)(lVar4 + 0x3f0 + lVar5 * 0x10);
      fVar9 = *(float *)(lVar4 + 300) + *(float *)(lVar4 + 0x3f4 + lVar5 * 0x10);
    }
    if ((*(int *)(lVar4 + 0x280) != *(int *)(DAT_180115c10 + 0x12f0)) &&
       ((*(float *)(lVar4 + 0xa8) != 3.4028235e+38 || (*(float *)(lVar4 + 0xac) != 3.4028235e+38))))
    {
      FUN_180050950(&local_res10,lVar4);
      local_res10 = *(float *)(lVar4 + 0x98) - local_res10;
      local_res14 = *(float *)(lVar4 + 0x9c) - local_res14;
      fVar12 = fVar12 + local_res10;
      fVar10 = fVar10 + local_res10;
      fVar8 = fVar8 + local_res14;
      fVar9 = fVar9 + local_res14;
    }
    lVar4 = DAT_180115c10;
    fVar11 = *(float *)(lVar3 + 0xc68) * 4.0;
    if (fVar10 - fVar12 <= fVar11) {
      fVar11 = fVar10 - fVar12;
    }
    fVar10 = *(float *)(lVar3 + 0xc6c);
    if (fVar9 - fVar8 <= *(float *)(lVar3 + 0xc6c)) {
      fVar10 = fVar9 - fVar8;
    }
    fVar11 = fVar11 + fVar12;
    fVar9 = fVar9 - fVar10;
    if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    lVar4 = **(longlong **)(lVar4 + 0x1ef0);
    fVar12 = *(float *)(lVar4 + 0xc);
    fVar8 = *(float *)(lVar4 + 8);
    if ((fVar12 <= fVar9) && (fVar12 = fVar12 + *(float *)(lVar4 + 0x14), fVar9 <= fVar12)) {
      fVar12 = fVar9;
    }
    if ((fVar8 <= fVar11) && (fVar8 = fVar8 + *(float *)(lVar4 + 0x10), fVar11 <= fVar8)) {
      fVar8 = fVar11;
    }
    fVar8 = (float)(int)fVar8;
    param_1[1] = (float)(int)fVar12;
  }
  *param_1 = fVar8;
  return param_1;
}


char FUN_18005b9a0(void)

{
  char cVar1;

  if (((*(int *)(DAT_180115c10 + 0x141c) == 0) || (*(char *)(DAT_180115c10 + 0x142e) == '\0')) ||
     (*(int *)(DAT_180115c10 + 0x141c) != *(int *)(DAT_180115c10 + 0x1d88))) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (((*(char *)(DAT_180115c10 + 0x1ef8) == '\0') || (*(char *)(DAT_180115c10 + 0x1ef9) == '\0'))
     || (*(longlong *)(DAT_180115c10 + 0x1f00) == 0)) {
    return cVar1 + '\x01';
  }
  return '\x02';
}


void FUN_18005ba00(uint param_1)

{
  int iVar1;
  longlong lVar2;

  iVar1 = *(int *)(DAT_180115c10 + 0x1f0c);
  lVar2 = *(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3c8);
  if (1 < param_1) {
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 8 + 0x408 + (longlong)(int)param_1 * 4) = 0x7f7fffff;
  return;
}


void FUN_18005ba70(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 local_18;
  undefined8 uStack_10;

  lVar1 = DAT_180115c10;
  if (param_1 != *(longlong *)(DAT_180115c10 + 0x1f00)) {
    FID_conflict__assert
              (L"window == g.NavWindow",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3255);
  }
  if ((*(uint *)(param_1 + 0x14) >> 0x10 & 1) == 0) {
    if ((((param_1 == *(longlong *)(param_1 + 0x3b0)) ||
         ((*(uint *)(param_1 + 0x14) >> 0x1a & 1) != 0)) || (*(int *)(param_1 + 0x3e0) == 0)) ||
       (bVar2 = 0, param_2 != '\0')) {
      bVar2 = 1;
    }
    if ((*(byte *)(lVar1 + 0x270c) & 0x10) != 0) {
      FUN_180052d90(0x1800e60f0,(ulonglong)bVar2,*(undefined8 *)(param_1 + 8),
                    (ulonglong)*(uint *)(lVar1 + 0x1f0c));
    }
    if (bVar2 != 0) {
      local_18 = 0;
      uStack_10 = 0;
      FUN_1800677a0(0,*(uint *)(lVar1 + 0x1f0c),*(int *)(param_1 + 0x418),&local_18);
      *(undefined2 *)(lVar1 + 0x1f52) = 1;
      *(undefined4 *)(lVar1 + 0x1f60) = 0;
      FUN_18005dfa0();
      return;
    }
    *(undefined4 *)(lVar1 + 0x1efc) = *(undefined4 *)(param_1 + 0x3e0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x1efc) = 0;
  }
  FUN_180067580(*(int *)(param_1 + 0x418));
  return;
}


// WARNING: Type propagation algorithm not settling

void FUN_18005bb80(void)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  float *pfVar12;
  ulonglong in_R9;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_58;
  undefined8 local_50;

  lVar4 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1fe0) == 0) {
    puVar10 = (ulonglong *)(DAT_180115c10 + 0x2048);
    if (*(int *)(DAT_180115c10 + 0x2050) == 0) {
      puVar10 = (ulonglong *)0x0;
    }
  }
  else {
    puVar10 = (ulonglong *)(DAT_180115c10 + 0x1fd8);
  }
  uVar5 = *(uint *)(DAT_180115c10 + 0x1f94);
  uVar11 = uVar5 & 0x400;
  pfVar12 = (float *)(ulonglong)uVar11;
  if ((((uVar11 != 0) && (puVar10 == (ulonglong *)0x0)) &&
      ((*(int *)(DAT_180115c10 + 0x1fd4) == 1 || (*(int *)(DAT_180115c10 + 0x1fd0) == 0)))) &&
     (*(int *)(DAT_180115c10 + 0x2088) != 0)) {
    puVar10 = (ulonglong *)(DAT_180115c10 + 0x2080);
  }
  bVar3 = *(int *)(DAT_180115c10 + 0x1fa0) - 2U < 2;
  if (bVar3) {
    lVar9 = 4;
    puVar14 = (undefined8 *)((longlong)local_res8 + 4);
    lVar15 = 4;
    puVar13 = (undefined8 *)((longlong)local_res8 + 4);
  }
  else {
    puVar14 = (undefined8 *)local_res8;
    lVar9 = 0;
    puVar13 = (undefined8 *)local_res8;
    lVar15 = 0;
  }
  uVar8 = (uint)bVar3;
  if (puVar10 == (ulonglong *)0x0) {
    if (uVar11 != 0) {
      uVar5 = uVar5 | 0x4000;
      *(uint *)(DAT_180115c10 + 0x1f94) = uVar5;
    }
    lVar15 = DAT_180115c10;
    uVar6 = (ulonglong)uVar5;
    if ((*(int *)(lVar4 + 0x1efc) != 0) && ((*(uint *)(lVar4 + 0x1f94) & 0x4000) == 0)) {
      if (*(char *)(DAT_180115c10 + 0x5d) != '\0') {
        *(undefined1 *)(DAT_180115c10 + 0x1ef8) = 1;
      }
      *(undefined2 *)(lVar15 + 0x1ef9) = 0x101;
    }
    FUN_18005ba00(uVar8);
    if ((*(byte *)(lVar4 + 0x270c) & 0x10) == 0) {
      return;
    }
    FUN_180052d90(0x1800e6480,uVar6,pfVar12,in_R9);
    return;
  }
  if ((((uVar5 & 0x20) != 0) && (*(int *)(DAT_180115c10 + 0x2018) != 0)) &&
     (*(int *)(DAT_180115c10 + 0x2018) != *(int *)(DAT_180115c10 + 0x1efc))) {
    puVar10 = (ulonglong *)(DAT_180115c10 + 0x2010);
  }
  puVar1 = (ulonglong *)(DAT_180115c10 + 0x2048);
  if (((puVar10 != puVar1) && (*(int *)(DAT_180115c10 + 0x2050) != 0)) &&
     (*(longlong *)(*puVar1 + 0x3a0) == *(longlong *)(DAT_180115c10 + 0x1f00))) {
    if ((*(float *)(DAT_180115c10 + 0x206c) < *(float *)((longlong)puVar10 + 0x24)) ||
       ((*(float *)(DAT_180115c10 + 0x206c) == *(float *)((longlong)puVar10 + 0x24) &&
        (*(float *)(DAT_180115c10 + 0x2070) <= *(float *)(puVar10 + 5) &&
         *(float *)(puVar10 + 5) != *(float *)(DAT_180115c10 + 0x2070))))) {
      puVar10 = puVar1;
    }
  }
  if ((*(longlong *)(DAT_180115c10 + 0x1f00) == 0) || (uVar6 = *puVar10, uVar6 == 0)) {
    pfVar12 = (float *)0x3455;
    FID_conflict__assert
              (L"g.NavWindow && result->Window",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3455);
    uVar6 = *puVar10;
  }
  if (*(int *)(lVar4 + 0x1f0c) == 0) {
    pfVar12 = (float *)&local_58;
    fVar16 = (float)*(undefined8 *)(uVar6 + 0x128);
    fVar17 = (float)((ulonglong)*(undefined8 *)(uVar6 + 0x128) >> 0x20);
    local_58 = CONCAT44((float)(puVar10[2] >> 0x20) + fVar17,(float)puVar10[2] + fVar16);
    local_50 = CONCAT44((float)(puVar10[3] >> 0x20) + fVar17,(float)puVar10[3] + fVar16);
    FUN_1800667b0((float *)local_res8,uVar6,pfVar12,*(uint *)(lVar4 + 0x1f98));
    if ((*(byte *)(lVar4 + 0x1f94) & 0x40) != 0) {
      if (*(int *)(lVar4 + 0x1fa0) == 2) {
        uVar18 = *(undefined4 *)(*puVar10 + 0xa4);
      }
      else {
        uVar18 = 0;
      }
      uVar6 = *puVar10;
      *(undefined4 *)(uVar6 + 0xac) = uVar18;
      *(undefined4 *)(uVar6 + 0xb4) = 0;
      *(undefined4 *)(uVar6 + 0xbc) = 0;
    }
  }
  uVar6 = *(ulonglong *)(lVar4 + 0x1f00);
  if (uVar6 != *puVar10) {
    if ((*(byte *)(lVar4 + 0x270c) & 4) != 0) {
      FUN_180052d90(0x1800e64f8,*(undefined8 *)(*puVar10 + 8),pfVar12,uVar6);
    }
    uVar6 = *puVar10;
    *(ulonglong *)(lVar4 + 0x1f00) = uVar6;
    *(undefined8 *)(lVar4 + 0x1f48) = 0xffffffffffffffff;
  }
  if ((*(int *)(lVar4 + 0x141c) != (int)puVar10[1]) && ((*(uint *)(lVar4 + 0x1f94) & 0x8000) == 0))
  {
    FUN_180066c00(0,0,pfVar12,uVar6);
    uVar6 = *(ulonglong *)(lVar4 + 0x1f00);
  }
  uVar7 = (ulonglong)(uint)puVar10[1];
  uVar5 = *(uint *)(lVar4 + 0x1f94);
  if (((*(uint *)(lVar4 + 0x1efc) != (uint)puVar10[1]) || ((uVar5 >> 0xb & 1) != 0)) &&
     ((uVar5 >> 0xd & 1) == 0)) {
    *(undefined4 *)(lVar4 + 0x20b8) = *(undefined4 *)(lVar4 + 0x1f08);
    *(int *)(lVar4 + 0x20bc) = (int)puVar10[1];
    *(undefined4 *)(lVar4 + 0x20c0) = *(undefined4 *)((longlong)puVar10 + 0xc);
    *(undefined4 *)(lVar4 + 0x20c4) = *(undefined4 *)(lVar4 + 0x1f9c);
    *(byte *)(lVar4 + 0x20c8) = (byte)(uVar5 >> 10) & 1;
    *(byte *)(lVar4 + 0x20c9) = (byte)((uint)puVar10[4] >> 0x15) & 1;
    uVar7 = (ulonglong)(uint)puVar10[1];
  }
  if ((*(byte *)(lVar4 + 0x270c) & 0x10) != 0) {
    FUN_180052d90(0x1800e6530,uVar7,(ulonglong)*(uint *)(lVar4 + 0x1f0c),*(ulonglong *)(uVar6 + 8));
  }
  local_res10 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x1f00) + 0x3c8) + 0x408 +
                 (longlong)(int)*(uint *)(lVar4 + 0x1f0c) * 8);
  FUN_1800677a0((int)puVar10[1],*(uint *)(lVar4 + 0x1f0c),*(int *)((longlong)puVar10 + 0xc),
                puVar10 + 2);
  if (puVar10[6] != 0xffffffffffffffff) {
    *(ulonglong *)(lVar4 + 0x1f48) = puVar10[6];
  }
  if ((*(uint *)(lVar4 + 0x1f94) & 0x400) != 0) goto LAB_18005bfc7;
  local_res8 = (undefined1  [8])
               CONCAT44(((float)(puVar10[3] >> 0x20) + (float)(puVar10[2] >> 0x20)) * 0.5,
                        ((float)puVar10[3] + (float)puVar10[2]) * 0.5);
  if (uVar8 < 2) {
    uVar18 = *(undefined4 *)puVar13;
    if ((uVar8 != 0) && (uVar8 != 1)) goto LAB_18005bf79;
  }
  else {
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
    uVar18 = *(undefined4 *)puVar14;
    lVar15 = lVar9;
LAB_18005bf79:
    FID_conflict__assert
              (L"idx == 0 || idx == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x11c);
  }
  lVar9 = *(longlong *)(lVar4 + 0x1f00);
  iVar2 = *(int *)(lVar4 + 0x1f0c);
  *(undefined4 *)((longlong)&local_res10 + lVar15) = uVar18;
  *(undefined8 *)(*(longlong *)(lVar9 + 0x3c8) + 0x408 + (longlong)iVar2 * 8) = local_res10;
LAB_18005bfc7:
  uVar5 = *(uint *)(lVar4 + 0x1f94);
  if (((uVar5 >> 10 & 1) != 0) && ((puVar10[4] & 0x100000) == 0)) {
    uVar5 = uVar5 & 0xffffefff;
    *(uint *)(lVar4 + 0x1f94) = uVar5;
  }
  if ((uVar5 >> 0xc & 1) != 0) {
    *(int *)(lVar4 + 0x1f38) = (int)puVar10[1];
    *(undefined4 *)(lVar4 + 0x1f3c) = 0;
    if ((uVar5 >> 10 & 1) != 0) {
      *(undefined4 *)(lVar4 + 0x1f3c) = 0xd;
    }
  }
  lVar4 = DAT_180115c10;
  if ((uVar5 >> 0xe & 1) == 0) {
    if (*(char *)(DAT_180115c10 + 0x5d) != '\0') {
      *(undefined1 *)(DAT_180115c10 + 0x1ef8) = 1;
    }
    *(undefined2 *)(lVar4 + 0x1ef9) = 0x101;
  }
  return;
}


longlong FUN_18005c060(void)

{
  uint7 uVar1;

  uVar1 = (uint7)((ulonglong)DAT_180115c10 >> 8);
  if (((*(char *)(DAT_180115c10 + 0x1f91) == '\0') || (*(int *)(DAT_180115c10 + 0x1fe0) != 0)) ||
     (*(int *)(DAT_180115c10 + 0x2050) != 0)) {
    return (ulonglong)uVar1 << 8;
  }
  return CONCAT71(uVar1,1);
}


void FUN_18005c090(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;

  lVar2 = DAT_180115c10;
  if (*(char *)(DAT_180115c10 + 0x1f92) != '\0') {
    FID_conflict__assert
              (L"g.NavMoveForwardToNextFrame == false",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3208);
  }
  *(undefined2 *)(DAT_180115c10 + 0x1f90) = 0;
  if ((*(char *)(DAT_180115c10 + 0x1f91) == '\0') && (*(char *)(DAT_180115c10 + 0x1f52) == '\0')) {
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 0;
  }
  else {
    plVar1 = (longlong *)(DAT_180115c10 + 0x1f00);
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 1;
    if (*plVar1 == 0) {
      FID_conflict__assert
                (L"g.NavWindow != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x324e);
    }
  }
  *(undefined1 *)(lVar2 + 0x1f92) = 1;
  *(uint *)(lVar2 + 0x1f94) = param_3 | 0x80;
  *(undefined4 *)(lVar2 + 0x1fa0) = param_1;
  *(undefined4 *)(lVar2 + 0x1fa8) = param_2;
  *(undefined4 *)(lVar2 + 0x1f98) = param_4;
  return;
}


void FUN_18005c160(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;

  *(undefined1 *)(DAT_180115c10 + 0x1f91) = 0;
  lVar6 = DAT_180115c10;
  lVar5 = *(longlong *)(DAT_180115c10 + 0x13a8);
  *param_1 = lVar5;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar6 + 0x1d88);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar6 + 0x1d44);
  uVar4 = *(uint *)(lVar6 + 0x1d8c);
  *(uint *)(param_1 + 4) = uVar4;
  uVar2 = *(undefined8 *)(lVar5 + 0x128);
  uVar3 = *(undefined8 *)(lVar6 + 0x1dac);
  fVar7 = (float)uVar2;
  fVar8 = (float)((ulonglong)uVar2 >> 0x20);
  param_1[2] = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x1da4) >> 0x20) - fVar8,
                        (float)*(undefined8 *)(lVar6 + 0x1da4) - fVar7);
  param_1[3] = CONCAT44((float)((ulonglong)uVar3 >> 0x20) - fVar8,(float)uVar3 - fVar7);
  if ((uVar4 >> 0x15 & 1) != 0) {
    if (*(longlong *)(lVar6 + 0x1d60) == -1) {
      FID_conflict__assert
                (L"g.NextItemData.SelectionUserData != ((ImGuiSelectionUserData)-1)",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x312a);
    }
    param_1[6] = *(longlong *)(lVar6 + 0x1d60);
  }
  if ((*(char *)(DAT_180115c10 + 0x1f91) == '\0') && (*(char *)(DAT_180115c10 + 0x1f52) == '\0')) {
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 0;
    return;
  }
  plVar1 = (longlong *)(DAT_180115c10 + 0x1f00);
  *(undefined1 *)(DAT_180115c10 + 0x1f51) = 1;
  if (*plVar1 == 0) {
    FID_conflict__assert
              (L"g.NavWindow != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x324e);
  }
  return;
}


void FUN_18005c270(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;

  lVar5 = DAT_180115c10;
  *(undefined1 *)(DAT_180115c10 + 0x1f91) = 0;
  *(undefined4 *)(lVar5 + 0x1d88) = *param_2;
  *(uint *)(lVar5 + 0x1d8c) = param_2[2] & 0xffdfffff;
  uVar2 = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)(lVar5 + 0x1da4) = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)(lVar5 + 0x1dac) = uVar2;
  lVar6 = DAT_180115c10;
  lVar5 = *(longlong *)(DAT_180115c10 + 0x13a8);
  *param_1 = lVar5;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar6 + 0x1d88);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar6 + 0x1d44);
  uVar4 = *(uint *)(lVar6 + 0x1d8c);
  *(uint *)(param_1 + 4) = uVar4;
  uVar2 = *(undefined8 *)(lVar5 + 0x128);
  uVar3 = *(undefined8 *)(lVar6 + 0x1dac);
  fVar7 = (float)uVar2;
  fVar8 = (float)((ulonglong)uVar2 >> 0x20);
  param_1[2] = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x1da4) >> 0x20) - fVar8,
                        (float)*(undefined8 *)(lVar6 + 0x1da4) - fVar7);
  param_1[3] = CONCAT44((float)((ulonglong)uVar3 >> 0x20) - fVar8,(float)uVar3 - fVar7);
  if ((uVar4 >> 0x15 & 1) != 0) {
    if (*(longlong *)(lVar6 + 0x1d60) == -1) {
      FID_conflict__assert
                (L"g.NextItemData.SelectionUserData != ((ImGuiSelectionUserData)-1)",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x312a);
    }
    param_1[6] = *(longlong *)(lVar6 + 0x1d60);
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3c8) + 0x40c +
   (longlong)*(int *)(DAT_180115c10 + 0x1f0c) * 8) = 0x7f7fffff;
  if ((*(char *)(DAT_180115c10 + 0x1f91) == '\0') && (*(char *)(DAT_180115c10 + 0x1f52) == '\0')) {
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 0;
    return;
  }
  plVar1 = (longlong *)(DAT_180115c10 + 0x1f00);
  *(undefined1 *)(DAT_180115c10 + 0x1f51) = 1;
  if (*plVar1 == 0) {
    FID_conflict__assert
              (L"g.NavWindow != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x324e);
  }
  return;
}


void FUN_18005c3c0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;

  lVar1 = DAT_180115c10;
  if (*(longlong *)(DAT_180115c10 + 0x1f00) == 0) {
    FID_conflict__assert
              (L"g.NavWindow != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x31d2);
  }
  *(undefined2 *)(lVar1 + 0x1f90) = 0x101;
  *(undefined4 *)(lVar1 + 0x1fa0) = param_1;
  *(undefined4 *)(lVar1 + 0x1fa4) = param_1;
  *(undefined4 *)(lVar1 + 0x1fa8) = param_2;
  uVar3 = param_3 | 0x10;
  if ((param_3 >> 10 & 1) == 0) {
    uVar3 = param_3;
  }
  *(undefined4 *)(lVar1 + 0x1f98) = param_4;
  *(uint *)(lVar1 + 0x1f94) = uVar3;
  *(undefined1 *)(lVar1 + 0x1f92) = 0;
  uVar2 = 0;
  if ((uVar3 >> 9 & 1) == 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x108);
  }
  *(undefined4 *)(lVar1 + 0x1f9c) = uVar2;
  *(undefined8 *)(lVar1 + 0x1fd8) = 0;
  *(undefined8 *)(lVar1 + 0x1fe0) = 0;
  *(undefined4 *)(lVar1 + 0x1ff8) = 0;
  *(undefined8 *)(lVar1 + 0x2008) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x2004) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2000) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x1ffc) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x2010) = 0;
  *(undefined8 *)(lVar1 + 0x2018) = 0;
  *(undefined4 *)(lVar1 + 0x2030) = 0;
  *(undefined8 *)(lVar1 + 0x2040) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x203c) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2038) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2034) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x2048) = 0;
  *(undefined8 *)(lVar1 + 0x2050) = 0;
  *(undefined4 *)(lVar1 + 0x2068) = 0;
  *(undefined8 *)(lVar1 + 0x2078) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x2074) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2070) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x206c) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x1fd4) = 0;
  *(undefined8 *)(lVar1 + 0x2080) = 0;
  *(undefined8 *)(lVar1 + 0x2088) = 0;
  *(undefined4 *)(lVar1 + 0x20a0) = 0;
  *(undefined8 *)(lVar1 + 0x20b0) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x20ac) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x20a8) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x20a4) = 0x7f7fffff;
  lVar1 = DAT_180115c10;
  if ((*(char *)(DAT_180115c10 + 0x1f91) == '\0') && (*(char *)(DAT_180115c10 + 0x1f52) == '\0')) {
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 0;
    return;
  }
  *(undefined1 *)(DAT_180115c10 + 0x1f51) = 1;
  if (*(longlong *)(lVar1 + 0x1f00) == 0) {
    FID_conflict__assert
              (L"g.NavWindow != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x324e);
  }
  return;
}


void FUN_18005c5b0(longlong param_1,uint param_2)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  if (((param_2 & 0xf) == 0) || ((param_2 & 0xfffffff0) != 0)) {
    FID_conflict__assert
              (L"(wrap_flags & ImGuiNavMoveFlags_WrapMask_ ) != 0 && (wrap_flags & ~ImGuiNavMoveFlags_WrapMask_) == 0"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3216);
  }
  if (((*(longlong *)(lVar1 + 0x1f00) == param_1) && (*(char *)(lVar1 + 0x1f91) != '\0')) &&
     (*(int *)(lVar1 + 0x1f0c) == 0)) {
    *(uint *)(lVar1 + 0x1f94) = *(uint *)(lVar1 + 0x1f94) & 0xfffffff0;
    *(uint *)(lVar1 + 0x1f94) = *(uint *)(lVar1 + 0x1f94) | param_2;
  }
  return;
}


void FUN_18005c630(undefined8 param_1,wchar_t *param_2,ulonglong param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;

  lVar11 = DAT_180115c10;
  lVar8 = *(longlong *)(DAT_180115c10 + 0x13a8);
  iVar5 = *(int *)(DAT_180115c10 + 0x1d88);
  uVar6 = *(uint *)(DAT_180115c10 + 0x1d8c);
  if (*(char *)(lVar8 + 0x178) == '\0') {
    fVar21 = *(float *)(DAT_180115c10 + 0x1da4);
    fVar18 = *(float *)(lVar8 + 600);
    if ((*(float *)(lVar8 + 600) <= fVar21) &&
       (fVar18 = *(float *)(lVar8 + 0x260), fVar21 <= *(float *)(lVar8 + 0x260))) {
      fVar18 = fVar21;
    }
    fVar21 = *(float *)(DAT_180115c10 + 0x1dac);
    *(float *)(DAT_180115c10 + 0x1da4) = fVar18;
    fVar18 = *(float *)(lVar8 + 600);
    if ((*(float *)(lVar8 + 600) <= fVar21) &&
       (fVar18 = *(float *)(lVar8 + 0x260), fVar21 <= *(float *)(lVar8 + 0x260))) {
      fVar18 = fVar21;
    }
    *(float *)(lVar11 + 0x1dac) = fVar18;
  }
  lVar9 = DAT_180115c10;
  fVar22 = (float)*(undefined8 *)(lVar11 + 0x1da4);
  fVar23 = (float)((ulonglong)*(undefined8 *)(lVar11 + 0x1da4) >> 0x20);
  fVar21 = (float)*(undefined8 *)(lVar11 + 0x1dac);
  fVar18 = (float)((ulonglong)*(undefined8 *)(lVar11 + 0x1dac) >> 0x20);
  if ((((*(char *)(lVar11 + 0x1f52) != '\0') &&
       (*(int *)(lVar11 + 0x1f0c) == *(int *)(lVar8 + 0x170))) && ((uVar6 >> 10 & 1) == 0)) &&
     (((uVar6 & 4) == 0 || (*(int *)(lVar11 + 0x1f60) == 0)))) {
    lVar15 = *(longlong *)(DAT_180115c10 + 0x13a8);
    *(longlong *)(lVar11 + 0x1f58) = lVar15;
    *(undefined4 *)(lVar11 + 0x1f60) = *(undefined4 *)(lVar9 + 0x1d88);
    *(undefined4 *)(lVar11 + 0x1f64) = *(undefined4 *)(lVar9 + 0x1d44);
    uVar7 = *(uint *)(lVar9 + 0x1d8c);
    *(uint *)(lVar11 + 0x1f78) = uVar7;
    uVar3 = *(undefined8 *)(lVar15 + 0x128);
    uVar4 = *(undefined8 *)(lVar9 + 0x1dac);
    fVar20 = (float)uVar3;
    fVar19 = (float)((ulonglong)uVar3 >> 0x20);
    *(ulonglong *)(lVar11 + 0x1f68) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar9 + 0x1da4) >> 0x20) - fVar19,
                  (float)*(undefined8 *)(lVar9 + 0x1da4) - fVar20);
    *(ulonglong *)(lVar11 + 0x1f70) =
         CONCAT44((float)((ulonglong)uVar4 >> 0x20) - fVar19,(float)uVar4 - fVar20);
    if ((uVar7 >> 0x15 & 1) != 0) {
      if (*(longlong *)(lVar9 + 0x1d60) == -1) {
        param_3 = 0x312a;
        param_2 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"g.NextItemData.SelectionUserData != ((ImGuiSelectionUserData)-1)",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x312a);
      }
      *(undefined8 *)(lVar11 + 0x1f88) = *(undefined8 *)(lVar9 + 0x1d60);
    }
    if ((uVar6 & 4) == 0) {
      *(undefined1 *)(lVar11 + 0x1f52) = 0;
      FUN_18005dfa0();
    }
  }
  if (((*(char *)(lVar11 + 0x1f91) != '\0') && ((uVar6 >> 10 & 1) == 0)) &&
     ((uVar7 = *(uint *)(lVar11 + 0x1f94), (uVar7 >> 9 & 1) != 0 ||
      ((*(uint *)(lVar8 + 0x14) & 0x10000) == 0)))) {
    if ((uVar7 >> 10 & 1) == 0) {
      if ((*(int *)(lVar11 + 0x1efc) != iVar5) || ((uVar7 & 0x10) != 0)) {
        lVar9 = *(longlong *)(lVar11 + 0x1f00);
        lVar15 = 0x1fd8;
        if (lVar8 != lVar9) {
          lVar15 = 0x2048;
        }
        cVar13 = FUN_18005cfb0(lVar15 + lVar11);
        lVar12 = DAT_180115c10;
        if (cVar13 != '\0') {
          bVar16 = lVar8 != lVar9;
          lVar14 = 0x1fe0;
          if (bVar16) {
            lVar14 = 0x2050;
          }
          param_3 = 0x2068;
          lVar10 = *(longlong *)(DAT_180115c10 + 0x13a8);
          *(longlong *)(lVar15 + lVar11) = lVar10;
          *(undefined4 *)(lVar14 + lVar11) = *(undefined4 *)(lVar12 + 0x1d88);
          lVar15 = 0x1fe4;
          if (bVar16) {
            lVar15 = 0x2054;
          }
          *(undefined4 *)(lVar15 + lVar11) = *(undefined4 *)(lVar12 + 0x1d44);
          uVar6 = *(uint *)(lVar12 + 0x1d8c);
          lVar15 = 0x1ff8;
          if (bVar16) {
            lVar15 = 0x2068;
          }
          *(uint *)(lVar15 + lVar11) = uVar6;
          fVar20 = *(float *)(lVar10 + 300);
          fVar19 = *(float *)(lVar10 + 0x128);
          fVar17 = *(float *)(lVar12 + 0x1da8);
          lVar15 = 0x1fe8;
          if (bVar16) {
            lVar15 = 0x2058;
          }
          fVar1 = *(float *)(lVar12 + 0x1db0);
          fVar2 = *(float *)(lVar12 + 0x1dac);
          *(float *)(lVar15 + lVar11) = *(float *)(lVar12 + 0x1da4) - fVar19;
          lVar15 = 0x1fec;
          if (bVar16) {
            lVar15 = 0x205c;
          }
          *(float *)(lVar15 + lVar11) = fVar17 - fVar20;
          lVar15 = 0x1ff0;
          if (bVar16) {
            lVar15 = 0x2060;
          }
          param_2 = (wchar_t *)0x2064;
          *(float *)(lVar15 + lVar11) = fVar2 - fVar19;
          lVar15 = 0x1ff4;
          if (bVar16) {
            lVar15 = 0x2064;
          }
          *(float *)(lVar15 + lVar11) = fVar1 - fVar20;
          if ((uVar6 >> 0x15 & 1) != 0) {
            if (*(longlong *)(lVar12 + 0x1d60) == -1) {
              param_3 = 0x312a;
              param_2 =
              L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
              ;
              FID_conflict__assert
                        (L"g.NextItemData.SelectionUserData != ((ImGuiSelectionUserData)-1)",
                         L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                         ,0x312a);
            }
            lVar15 = 0x2008;
            if (lVar8 != lVar9) {
              lVar15 = 0x2078;
            }
            *(undefined8 *)(lVar15 + lVar11) = *(undefined8 *)(lVar12 + 0x1d60);
          }
        }
        if (((((*(byte *)(lVar11 + 0x1f94) & 0x20) != 0) &&
             (fVar20 = *(float *)(lVar8 + 0x264), fVar23 < fVar20)) &&
            (fVar19 = *(float *)(lVar8 + 0x25c), fVar19 < fVar18)) &&
           ((fVar22 < *(float *)(lVar8 + 0x260) &&
            (*(float *)(lVar8 + 600) <= fVar21 && fVar21 != *(float *)(lVar8 + 600))))) {
          if (fVar19 <= fVar18) {
            fVar17 = fVar20;
            if (fVar18 <= fVar20) {
              fVar17 = fVar18;
            }
          }
          else {
            fVar17 = fVar19;
          }
          if ((fVar19 <= fVar23) && (fVar19 = fVar20, fVar23 <= fVar20)) {
            fVar19 = fVar23;
          }
          if ((fVar18 - fVar23) * 0.7 <= fVar17 - fVar19) {
            cVar13 = FUN_18005cfb0(lVar11 + 0x2010);
            lVar9 = DAT_180115c10;
            if (cVar13 != '\0') {
              lVar15 = *(longlong *)(DAT_180115c10 + 0x13a8);
              *(longlong *)(lVar11 + 0x2010) = lVar15;
              *(undefined4 *)(lVar11 + 0x2018) = *(undefined4 *)(lVar9 + 0x1d88);
              *(undefined4 *)(lVar11 + 0x201c) = *(undefined4 *)(lVar9 + 0x1d44);
              uVar6 = *(uint *)(lVar9 + 0x1d8c);
              *(uint *)(lVar11 + 0x2030) = uVar6;
              uVar3 = *(undefined8 *)(lVar15 + 0x128);
              uVar4 = *(undefined8 *)(lVar9 + 0x1dac);
              fVar20 = (float)uVar3;
              fVar19 = (float)((ulonglong)uVar3 >> 0x20);
              *(ulonglong *)(lVar11 + 0x2020) =
                   CONCAT44((float)((ulonglong)*(undefined8 *)(lVar9 + 0x1da4) >> 0x20) - fVar19,
                            (float)*(undefined8 *)(lVar9 + 0x1da4) - fVar20);
              *(ulonglong *)(lVar11 + 0x2028) =
                   CONCAT44((float)((ulonglong)uVar4 >> 0x20) - fVar19,(float)uVar4 - fVar20);
              if ((uVar6 >> 0x15 & 1) != 0) {
                if (*(longlong *)(lVar9 + 0x1d60) == -1) {
                  param_3 = 0x312a;
                  param_2 =
                  L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                  ;
                  FID_conflict__assert
                            (L"g.NextItemData.SelectionUserData != ((ImGuiSelectionUserData)-1)",
                             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                             ,0x312a);
                }
                *(undefined8 *)(lVar11 + 0x2040) = *(undefined8 *)(lVar9 + 0x1d60);
              }
            }
          }
        }
      }
    }
    else {
      param_3 = (ulonglong)uVar7;
      param_2 = (wchar_t *)(ulonglong)uVar6;
      FUN_18005cbc0(iVar5,uVar6,uVar7);
    }
  }
  if (*(int *)(lVar11 + 0x1efc) == iVar5) {
    if (*(longlong *)(lVar11 + 0x1f00) != lVar8) {
      FUN_1800678a0(lVar8,param_2,param_3,param_4);
    }
    *(undefined4 *)(lVar11 + 0x1f0c) = *(undefined4 *)(lVar8 + 0x170);
    FUN_180067580(*(int *)(lVar11 + 0x1d44));
    *(undefined4 *)(lVar11 + 0x1f08) = *(undefined4 *)(lVar11 + 0x1d44);
    *(undefined1 *)(lVar11 + 0x1efb) = 1;
    if ((*(uint *)(lVar11 + 0x1d8c) & 0x200000) != 0) {
      if (*(longlong *)(lVar11 + 0x1d60) == -1) {
        FID_conflict__assert
                  (L"g.NextItemData.SelectionUserData != ((ImGuiSelectionUserData)-1)",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x317f);
      }
      *(undefined8 *)(lVar11 + 0x1f48) = *(undefined8 *)(lVar11 + 0x1d60);
    }
    iVar5 = *(int *)(lVar8 + 0x170);
    fVar20 = (float)*(undefined8 *)(lVar8 + 0x128);
    fVar19 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x128) >> 0x20);
    *(ulonglong *)(lVar8 + 1000 + (longlong)iVar5 * 0x10) =
         CONCAT44(fVar23 - fVar19,fVar22 - fVar20);
    *(ulonglong *)(lVar8 + 0x3f0 + (longlong)iVar5 * 0x10) =
         CONCAT44(fVar18 - fVar19,fVar21 - fVar20);
  }
  return;
}


void FUN_18005cbc0(int param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;

  lVar7 = DAT_180115c10;
  if ((param_3 >> 9 & 1) == 0) {
    if (*(int *)(DAT_180115c10 + 0x1f0c) != *(int *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x170))
    {
      return;
    }
    if (*(int *)(DAT_180115c10 + 0x1f08) != *(int *)(DAT_180115c10 + 0x1d44)) {
      return;
    }
    if (((param_2 & 1) != 0) ||
       (((*(byte *)(DAT_180115c10 + 8) & 1) == 0 && ((param_2 >> 0x14 & 1) == 0)))) {
      bVar6 = false;
      goto LAB_18005cc26;
    }
  }
  bVar6 = true;
LAB_18005cc26:
  iVar8 = *(int *)(DAT_180115c10 + 0x1fd0);
  if (iVar8 == 1) {
    if (bVar6) {
      if (*(int *)(DAT_180115c10 + 0x2088) == 0) {
        lVar4 = *(longlong *)(DAT_180115c10 + 0x13a8);
        *(longlong *)(DAT_180115c10 + 0x2080) = lVar4;
        *(undefined4 *)(lVar7 + 0x2088) = *(undefined4 *)(lVar7 + 0x1d88);
        *(undefined4 *)(lVar7 + 0x208c) = *(undefined4 *)(lVar7 + 0x1d44);
        *(uint *)(lVar7 + 0x20a0) = *(uint *)(lVar7 + 0x1d8c);
        uVar1 = *(undefined8 *)(lVar4 + 0x128);
        fVar9 = (float)uVar1;
        fVar10 = (float)((ulonglong)uVar1 >> 0x20);
        *(ulonglong *)(lVar7 + 0x2090) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar7 + 0x1da4) >> 0x20) - fVar10,
                      (float)*(undefined8 *)(lVar7 + 0x1da4) - fVar9);
        *(ulonglong *)(lVar7 + 0x2098) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar7 + 0x1dac) >> 0x20) - fVar10,
                      (float)*(undefined8 *)(lVar7 + 0x1dac) - fVar9);
        if ((*(uint *)(lVar7 + 0x1d8c) >> 0x15 & 1) != 0) {
          if (*(longlong *)(lVar7 + 0x1d60) == -1) {
            FID_conflict__assert
                      (L"g.NextItemData.SelectionUserData != ((ImGuiSelectionUserData)-1)",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                       ,0x312a);
          }
          *(undefined8 *)(lVar7 + 0x20b0) = *(undefined8 *)(lVar7 + 0x1d60);
        }
      }
      if ((0 < *(int *)(lVar7 + 0x1fd4)) &&
         (iVar8 = *(int *)(lVar7 + 0x1fd4) + -1, *(int *)(lVar7 + 0x1fd4) = iVar8, iVar8 == 0)) {
        FUN_18005c160((longlong *)(lVar7 + 0x1fd8));
        return;
      }
    }
    if (*(int *)(lVar7 + 0x1efc) == param_1) {
      *(undefined4 *)(lVar7 + 0x1fd4) = 1;
    }
  }
  else if (iVar8 == -1) {
    if (*(int *)(DAT_180115c10 + 0x1efc) == param_1) {
      if (*(int *)(DAT_180115c10 + 0x1fe0) != 0) {
        *(undefined1 *)(DAT_180115c10 + 0x1f91) = 0;
        FUN_18005dfa0();
      }
    }
    else if (bVar6) {
      lVar4 = *(longlong *)(DAT_180115c10 + 0x13a8);
      *(longlong *)(DAT_180115c10 + 0x1fd8) = lVar4;
      *(undefined4 *)(lVar7 + 0x1fe0) = *(undefined4 *)(lVar7 + 0x1d88);
      *(undefined4 *)(lVar7 + 0x1fe4) = *(undefined4 *)(lVar7 + 0x1d44);
      *(uint *)(lVar7 + 0x1ff8) = *(uint *)(lVar7 + 0x1d8c);
      uVar1 = *(undefined8 *)(lVar4 + 0x128);
      fVar9 = (float)uVar1;
      fVar10 = (float)((ulonglong)uVar1 >> 0x20);
      *(ulonglong *)(lVar7 + 0x1fe8) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar7 + 0x1da4) >> 0x20) - fVar10,
                    (float)*(undefined8 *)(lVar7 + 0x1da4) - fVar9);
      *(ulonglong *)(lVar7 + 0x1ff0) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar7 + 0x1dac) >> 0x20) - fVar10,
                    (float)*(undefined8 *)(lVar7 + 0x1dac) - fVar9);
      if ((*(uint *)(lVar7 + 0x1d8c) >> 0x15 & 1) != 0) {
        if (*(longlong *)(lVar7 + 0x1d60) == -1) {
          FID_conflict__assert
                    (L"g.NextItemData.SelectionUserData != ((ImGuiSelectionUserData)-1)",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x312a);
        }
        *(undefined8 *)(lVar7 + 0x2008) = *(undefined8 *)(lVar7 + 0x1d60);
      }
    }
  }
  else if ((iVar8 == 0) && (bVar6)) {
    if (*(int *)(DAT_180115c10 + 0x1efc) == param_1) {
      FUN_18005c160((longlong *)(DAT_180115c10 + 0x1fd8));
    }
    lVar4 = DAT_180115c10;
    if (*(int *)(lVar7 + 0x2088) == 0) {
      lVar5 = *(longlong *)(DAT_180115c10 + 0x13a8);
      *(longlong *)(lVar7 + 0x2080) = lVar5;
      *(undefined4 *)(lVar7 + 0x2088) = *(undefined4 *)(lVar4 + 0x1d88);
      *(undefined4 *)(lVar7 + 0x208c) = *(undefined4 *)(lVar4 + 0x1d44);
      uVar3 = *(uint *)(lVar4 + 0x1d8c);
      *(uint *)(lVar7 + 0x20a0) = uVar3;
      uVar1 = *(undefined8 *)(lVar5 + 0x128);
      uVar2 = *(undefined8 *)(lVar4 + 0x1dac);
      fVar9 = (float)uVar1;
      fVar10 = (float)((ulonglong)uVar1 >> 0x20);
      *(ulonglong *)(lVar7 + 0x2090) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x1da4) >> 0x20) - fVar10,
                    (float)*(undefined8 *)(lVar4 + 0x1da4) - fVar9);
      *(ulonglong *)(lVar7 + 0x2098) =
           CONCAT44((float)((ulonglong)uVar2 >> 0x20) - fVar10,(float)uVar2 - fVar9);
      if ((uVar3 >> 0x15 & 1) != 0) {
        if (*(longlong *)(lVar4 + 0x1d60) == -1) {
          FID_conflict__assert
                    (L"g.NextItemData.SelectionUserData != ((ImGuiSelectionUserData)-1)",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x312a);
        }
        *(undefined8 *)(lVar7 + 0x20b0) = *(undefined8 *)(lVar4 + 0x1d60);
      }
    }
  }
  return;
}


void FUN_18005cef0(uint param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;

  lVar3 = DAT_180115c10;
  if (param_1 == 0) {
    lVar2 = *(longlong *)(DAT_180115c10 + 0x1f00);
    lVar4 = *(longlong *)(lVar2 + 0x3d8);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0xcd) == '\0')) {
      lVar4 = lVar2;
    }
    *(longlong *)(DAT_180115c10 + 0x1f00) = lVar4;
    *(undefined8 *)(lVar3 + 0x1f48) = 0xffffffffffffffff;
    if ((lVar2 != 0) && ((*(byte *)(lVar3 + 0x270c) & 4) != 0)) {
      FUN_180052d90(0x1800e6080,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar4 + 8),param_4);
    }
  }
  lVar2 = *(longlong *)(lVar3 + 0x1f00);
  iVar1 = *(int *)(lVar2 + 0x3e0 + (longlong)(int)param_1 * 4);
  if (iVar1 == 0) {
    *(uint *)(lVar3 + 0x1f0c) = param_1;
    FUN_18005ba70(lVar2,'\x01');
    return;
  }
  FUN_1800677a0(iVar1,param_1,0,(undefined8 *)(lVar2 + 1000 + (longlong)(int)param_1 * 0x10));
  return;
}


undefined1 FUN_18005cfb0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  lVar6 = DAT_180115c10;
  lVar5 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if (*(int *)(DAT_180115c10 + 0x1f0c) != *(int *)(lVar5 + 0x170)) {
    return 0;
  }
  *(int *)(DAT_180115c10 + 0x1fcc) = *(int *)(DAT_180115c10 + 0x1fcc) + 1;
  fVar11 = *(float *)(lVar6 + 0x1fb8);
  fVar9 = *(float *)(lVar6 + 0x1da4);
  fVar12 = *(float *)(lVar6 + 0x1da8);
  fVar13 = *(float *)(lVar6 + 0x1dac);
  fVar15 = *(float *)(lVar6 + 0x1db0);
  fVar1 = *(float *)(lVar6 + 0x1fac);
  fVar2 = *(float *)(lVar6 + 0x1fb0);
  fVar3 = *(float *)(lVar6 + 0x1fb4);
  if (*(longlong *)(lVar5 + 0x3a0) == *(longlong *)(lVar6 + 0x1f00)) {
    if (((*(uint *)(*(longlong *)(lVar6 + 0x1f00) + 0x18) | *(uint *)(lVar5 + 0x18)) >> 8 & 1) == 0)
    {
      FID_conflict__assert
                (L"(window->ChildFlags | g.NavWindow->ChildFlags) & ImGuiChildFlags_NavFlattened",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x30a1);
    }
    fVar10 = *(float *)(lVar5 + 0x264);
    if (fVar10 <= fVar12) {
      return 0;
    }
    fVar16 = *(float *)(lVar5 + 0x25c);
    if (fVar15 <= fVar16) {
      return 0;
    }
    fVar14 = *(float *)(lVar5 + 0x260);
    if (fVar14 <= fVar9) {
      return 0;
    }
    fVar17 = *(float *)(lVar5 + 600);
    if (fVar13 <= fVar17) {
      return 0;
    }
    if (fVar16 <= fVar12) {
      fVar18 = fVar10;
      if (fVar12 <= fVar10) {
        fVar18 = fVar12;
      }
    }
    else {
      fVar18 = fVar16;
    }
    if (fVar17 <= fVar9) {
      fVar12 = fVar14;
      if (fVar9 <= fVar14) {
        fVar12 = fVar9;
      }
    }
    else {
      fVar12 = fVar17;
    }
    if ((fVar16 <= fVar15) && (fVar16 = fVar10, fVar15 <= fVar10)) {
      fVar16 = fVar15;
    }
    if ((fVar17 <= fVar13) && (fVar17 = fVar14, fVar13 <= fVar14)) {
      fVar17 = fVar13;
    }
    fVar9 = fVar12;
    fVar12 = fVar18;
    fVar13 = fVar17;
    fVar15 = fVar16;
  }
  if (fVar1 <= fVar13) {
    if (fVar9 <= fVar3) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = fVar9 - fVar3;
    }
  }
  else {
    fVar10 = fVar13 - fVar1;
  }
  fVar16 = fVar11 - fVar2;
  fVar17 = fVar16 * 0.2 + fVar2;
  fVar18 = fVar16 * 0.8 + fVar2;
  fVar16 = (fVar15 - fVar12) * 0.8 + fVar12;
  fVar14 = (fVar15 - fVar12) * 0.2 + fVar12;
  if (fVar17 <= fVar16) {
    if (fVar18 < fVar14) {
      fVar16 = fVar14 - fVar18;
      goto LAB_18005d1e2;
    }
    fVar16 = 0.0;
  }
  else {
    fVar16 = fVar16 - fVar17;
LAB_18005d1e2:
    if ((fVar16 != 0.0) && (fVar10 != 0.0)) {
      if (fVar10 <= 0.0) {
        fVar10 = fVar10 / 1000.0 + -1.0;
      }
      else {
        fVar10 = fVar10 / 1000.0 + 1.0;
      }
    }
  }
  fVar12 = (fVar12 + fVar15) - (fVar2 + fVar11);
  fVar15 = ABS(fVar16) + ABS(fVar10);
  fVar11 = (fVar9 + fVar13) - (fVar1 + fVar3);
  fVar9 = ABS(fVar12) + ABS(fVar11);
  if ((fVar10 == 0.0) && (fVar16 == 0.0)) {
    if ((fVar11 == 0.0) && (fVar12 == 0.0)) {
      uVar7 = (uint)(*(uint *)(lVar6 + 0x1efc) <= *(uint *)(lVar6 + 0x1d88));
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      goto LAB_18005d2f3;
    }
    fVar13 = fVar9;
    if (ABS(fVar12) < ABS(fVar11)) {
      uVar7 = (uint)(0.0 < fVar11);
      goto LAB_18005d2f3;
    }
  }
  else {
    fVar11 = fVar10;
    fVar12 = fVar16;
    fVar13 = fVar15;
    if (ABS(fVar16) < ABS(fVar10)) {
      uVar7 = (uint)(0.0 < fVar10);
      goto LAB_18005d2f3;
    }
  }
  uVar7 = (0.0 < fVar12) + 2;
LAB_18005d2f3:
  uVar4 = *(uint *)(lVar6 + 0x1fa0);
  uVar8 = 0;
  if (uVar7 == uVar4) {
    if (fVar15 < *(float *)(param_1 + 0x24)) {
      *(float *)(param_1 + 0x24) = fVar15;
      *(float *)(param_1 + 0x28) = fVar9;
      return 1;
    }
    if (fVar15 == *(float *)(param_1 + 0x24)) {
      if (*(float *)(param_1 + 0x28) <= fVar9) {
        if (fVar9 == *(float *)(param_1 + 0x28)) {
          if (uVar4 - 2 < 2) {
            fVar10 = fVar16;
          }
          uVar8 = 0;
          if (fVar10 < 0.0) {
            uVar8 = 1;
          }
        }
      }
      else {
        *(float *)(param_1 + 0x28) = fVar9;
        uVar8 = 1;
      }
    }
  }
  if ((((*(float *)(param_1 + 0x24) == 3.4028235e+38) && (fVar13 < *(float *)(param_1 + 0x2c))) &&
      (*(int *)(lVar6 + 0x1f0c) == 1)) &&
     ((*(uint *)(*(longlong *)(lVar6 + 0x1f00) + 0x14) & 0x10000000) == 0)) {
    if (uVar4 == 0) {
      if (0.0 <= fVar11) {
        return uVar8;
      }
    }
    else if (uVar4 == 1) {
      if (fVar11 <= 0.0) {
        return uVar8;
      }
    }
    else if (uVar4 == 2) {
      if (0.0 <= fVar12) {
        return uVar8;
      }
    }
    else {
      if (uVar4 != 3) {
        return uVar8;
      }
      if (fVar12 <= 0.0) {
        return uVar8;
      }
    }
    *(float *)(param_1 + 0x2c) = fVar13;
    uVar8 = 1;
  }
  return uVar8;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18005d420(undefined8 param_1,wchar_t *param_2,ulonglong param_3,undefined8 *param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char *pcVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  float *pfVar18;
  uint uVar19;
  wchar_t *pwVar20;
  undefined4 uVar21;
  ulonglong *puVar22;
  uint *puVar23;
  byte bVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_b8 [32];
  byte local_98;
  float local_94 [3];
  uint local_88 [8];
  ulonglong local_68 [8];

  lVar8 = DAT_180115c10;
  local_68[4] = DAT_180112300 ^ (ulonglong)auStack_b8;
  pbVar1 = (byte *)(DAT_180115c10 + 8);
  *(undefined1 *)(DAT_180115c10 + 0xbb) = 0;
  if (((*pbVar1 & 2) == 0) || ((*(byte *)(lVar8 + 0xc) & 1) == 0)) {
    bVar5 = false;
  }
  else {
    puVar22 = local_68;
    bVar5 = true;
    local_68[0] = 0x27a0000027b;
    local_68[1] = 0x27d0000027c;
    local_68[2] = 0x27e0000027f;
    local_68[3] = 0x28100000280;
    do {
      uVar25 = (uint)*puVar22;
      param_2 = (wchar_t *)(ulonglong)uVar25;
      pcVar15 = (char *)FUN_180056f10(DAT_180115c10,uVar25);
      if (*pcVar15 != '\0') {
        if ((((uVar25 - 0x200 < 0x9b) || (uVar25 == 0x1000)) || (uVar25 == 0x2000)) ||
           ((uVar25 == 0x4000 || (uVar25 == 0x8000)))) {
          param_2 = (wchar_t *)(ulonglong)uVar25;
          lVar16 = FUN_180057090(DAT_180115c10,uVar25);
          if (*(char *)(lVar16 + 8) != '\0') goto LAB_18005d50c;
        }
        *(undefined4 *)(lVar8 + 8000) = 3;
      }
LAB_18005d50c:
      puVar22 = (ulonglong *)((longlong)puVar22 + 4);
    } while (puVar22 != local_68 + 4);
  }
  bVar24 = *(byte *)(lVar8 + 8) & 1;
  local_88[0] = 0x20c;
  local_88[1] = 0x20d;
  local_88[2] = 0x20e;
  local_88[3] = 0x202;
  local_88[4] = 0x201;
  local_88[5] = 0x203;
  local_88[6] = 0x204;
  local_98 = bVar24;
  if (bVar24 != 0) {
    puVar23 = local_88;
    do {
      uVar25 = *puVar23;
      param_2 = (wchar_t *)(ulonglong)uVar25;
      pcVar15 = (char *)FUN_180056f10(DAT_180115c10,uVar25);
      if (*pcVar15 != '\0') {
        if (((uVar25 - 0x200 < 0x9b) || (uVar25 == 0x1000)) ||
           ((uVar25 == 0x2000 || ((uVar25 == 0x4000 || (uVar25 == 0x8000)))))) {
          param_2 = (wchar_t *)(ulonglong)uVar25;
          lVar16 = FUN_180057090(DAT_180115c10,uVar25);
          if (*(char *)(lVar16 + 8) != '\0') goto LAB_18005d5c0;
        }
        *(undefined4 *)(lVar8 + 8000) = 2;
      }
LAB_18005d5c0:
      puVar23 = puVar23 + 1;
    } while (puVar23 != local_88 + 7);
  }
  *(undefined8 *)(lVar8 + 0x20b8) = 0;
  *(undefined4 *)(lVar8 + 0x20c0) = 0;
  lVar16 = DAT_180115c10;
  if (*(int *)(lVar8 + 0x1f60) != 0) {
    lVar4 = *(longlong *)(DAT_180115c10 + 0x1f00);
    param_4 = (undefined8 *)0x0;
    if (lVar4 != 0) {
      uVar25 = *(uint *)(DAT_180115c10 + 0x1f60);
      if (*(uint *)(DAT_180115c10 + 0x1efc) != uVar25) {
        *(undefined4 *)(DAT_180115c10 + 0x20b8) = *(undefined4 *)(DAT_180115c10 + 0x1f08);
        *(uint *)(lVar16 + 0x20bc) = uVar25;
        *(undefined4 *)(lVar16 + 0x20c0) = *(undefined4 *)(lVar16 + 0x1f64);
        *(undefined4 *)(lVar16 + 0x20c4) = 0;
        *(undefined1 *)(lVar16 + 0x20c8) = 0;
        *(byte *)(lVar16 + 0x20c9) = (byte)(*(uint *)(lVar16 + 0x1f78) >> 0x15) & 1;
      }
      if ((*(byte *)(lVar16 + 0x270c) & 0x10) != 0) {
        FUN_180052d90(0x1800e6230,(ulonglong)uVar25,(ulonglong)*(uint *)(lVar16 + 0x1f0c),
                      *(ulonglong *)(lVar4 + 8));
      }
      param_3 = (ulonglong)*(uint *)(lVar16 + 0x1f64);
      param_4 = (undefined8 *)(lVar16 + 0x1f68);
      param_2 = (wchar_t *)(ulonglong)*(uint *)(lVar16 + 0x1f0c);
      FUN_1800677a0(*(undefined4 *)(lVar16 + 0x1f60),*(uint *)(lVar16 + 0x1f0c),
                    *(uint *)(lVar16 + 0x1f64),param_4);
      *(undefined1 *)(lVar16 + 0x1efb) = 1;
      if (*(longlong *)(lVar16 + 0x1f88) != -1) {
        *(longlong *)(lVar16 + 0x1f48) = *(longlong *)(lVar16 + 0x1f88);
      }
      lVar4 = DAT_180115c10;
      if (*(char *)(lVar16 + 0x1f53) != '\0') {
        if (*(char *)(DAT_180115c10 + 0x5d) != '\0') {
          *(undefined1 *)(DAT_180115c10 + 0x1ef8) = 1;
        }
        *(undefined2 *)(lVar4 + 0x1ef9) = 0x101;
      }
    }
  }
  *(undefined2 *)(lVar8 + 0x1f52) = 0;
  *(undefined4 *)(lVar8 + 0x1f60) = 0;
  if (*(char *)(lVar8 + 0x1f90) != '\0') {
    FUN_18005bb80();
  }
  *(undefined4 *)(lVar8 + 0x1fd4) = 0;
  *(undefined2 *)(lVar8 + 0x1f90) = 0;
  if (('\0' < *(char *)(lVar8 + 0x1f50)) &&
     (cVar9 = *(char *)(lVar8 + 0x1f50) + -1, *(char *)(lVar8 + 0x1f50) = cVar9, cVar9 == '\0')) {
    *(undefined1 *)(lVar8 + 0x1ef8) = 1;
  }
  bVar7 = false;
  uVar25 = 1;
  if ((((*(char *)(lVar8 + 0x1efa) != '\0') && (*(char *)(lVar8 + 0x1efb) != '\0')) &&
      (*(char *)(lVar8 + 0x1ef8) != '\0')) && (*(char *)(lVar8 + 0x1ef9) != '\0')) {
    bVar7 = false;
    if (*(longlong *)(lVar8 + 0x1f00) != 0) {
      bVar7 = true;
    }
  }
  *(undefined1 *)(lVar8 + 0x1efa) = 0;
  if (1 < *(uint *)(lVar8 + 0x1f0c)) {
    param_3 = 0x32ea;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"g.NavLayer == ImGuiNavLayer_Main || g.NavLayer == ImGuiNavLayer_Menu",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x32ea);
  }
  pwVar20 = *(wchar_t **)(lVar8 + 0x1f00);
  if (pwVar20 != (wchar_t *)0x0) {
    pwVar17 = pwVar20;
    do {
      if ((*(wchar_t **)(pwVar17 + 0x1d8) == pwVar17) ||
         ((*(uint *)(pwVar17 + 10) & 0x14000000) != 0)) {
        if (pwVar17 != pwVar20) {
          *(wchar_t **)(pwVar17 + 0x1ec) = pwVar20;
        }
        break;
      }
      pwVar17 = *(wchar_t **)(pwVar17 + 0x1d0);
    } while (pwVar17 != (wchar_t *)0x0);
  }
  lVar16 = *(longlong *)(lVar8 + 0x1f00);
  if (((lVar16 != 0) && (*(longlong *)(lVar16 + 0x3d8) != 0)) && (*(int *)(lVar8 + 0x1f0c) == 0)) {
    *(undefined8 *)(lVar16 + 0x3d8) = 0;
  }
  FUN_18005f110();
  if ((((bVar24 == 0) && (!bVar5)) || (*(longlong *)(lVar8 + 0x1f00) == 0)) ||
     ((*(uint *)(*(longlong *)(lVar8 + 0x1f00) + 0x14) & 0x10000) != 0)) {
    *(undefined1 *)(lVar8 + 0xbd) = 0;
LAB_18005d8db:
    if (*(longlong *)(lVar8 + 0x20d8) != 0) goto LAB_18005d825;
    uVar10 = 0;
  }
  else {
    *(undefined1 *)(lVar8 + 0xbd) = 1;
    if ((*(int *)(lVar8 + 0x1efc) == 0) || (*(char *)(lVar8 + 0x1ef8) == '\0')) goto LAB_18005d8db;
LAB_18005d825:
    uVar10 = 1;
  }
  puVar23 = (uint *)(lVar8 + 0x1efc);
  *(undefined1 *)(lVar8 + 0xbe) = uVar10;
  FUN_18005dff0();
  *(undefined8 *)(lVar8 + 0x1f14) = 0;
  *(undefined4 *)(lVar8 + 0x1f10) = 0;
  *(undefined4 *)(lVar8 + 0x1f1c) = 0;
  if (((*puVar23 != 0) && (*(char *)(lVar8 + 0x1ef8) != '\0')) &&
     (*(longlong *)(lVar8 + 0x20d8) == 0)) {
    if ((*(longlong *)(lVar8 + 0x1f00) != 0) &&
       ((*(uint *)(*(longlong *)(lVar8 + 0x1f00) + 0x14) & 0x10000) == 0)) {
      if (((bVar24 == 0) || (*(char *)(DAT_180115c10 + 0x1cc) == '\0')) ||
         (((*(char *)(DAT_180115c10 + 0x1d3c) != '\0' && (*(int *)(DAT_180115c10 + 0x141c) != -1))
          || (*(int *)(DAT_180115c10 + 0x152c) != -1)))) {
        if (bVar5) {
          param_2 = (wchar_t *)0xffffffff;
          uVar19 = 0x27d;
          if (*(char *)(lVar8 + 0x58) != '\0') {
            uVar19 = 0x27b;
          }
          bVar14 = FUN_1800598b0(uVar19,-1);
          if (bVar14) goto LAB_18005d914;
        }
        bVar14 = false;
LAB_18005d961:
        bVar11 = false;
      }
      else {
LAB_18005d914:
        bVar14 = true;
        if (local_98 == 0) {
LAB_18005d935:
          if (bVar5) {
            param_3 = 0xffffffff;
            uVar19 = 0x27d;
            if (*(char *)(lVar8 + 0x58) != '\0') {
              uVar19 = 0x27b;
            }
            param_2 = (wchar_t *)0x0;
            bVar11 = FUN_180059900(uVar19,0,-1);
            if (bVar11) goto LAB_18005d958;
          }
          goto LAB_18005d961;
        }
        param_2 = (wchar_t *)0x0;
        param_3 = 0xffffffff;
        bVar11 = FUN_180059900(0x20c,0,-1);
        if (!bVar11) goto LAB_18005d935;
LAB_18005d958:
        bVar11 = true;
      }
      if (local_98 == 0) {
LAB_18005d9a9:
        if (((bVar5) && (*(char *)(DAT_180115c10 + 0x8cc) != '\0')) &&
           (*(int *)(DAT_180115c10 + 0x1a6c) == -1)) goto LAB_18005d9c7;
        bVar12 = false;
LAB_18005da22:
        bVar6 = bVar12;
        param_2 = (wchar_t *)((ulonglong)param_2 & 0xffffffffffffff00);
      }
      else {
        if (((*(char *)(DAT_180115c10 + 0x1dc) == '\0') ||
            ((*(char *)(DAT_180115c10 + 0x1d3c) != '\0' && (*(int *)(DAT_180115c10 + 0x141c) != -1))
            )) || (*(int *)(DAT_180115c10 + 0x1538) != -1)) {
          param_2 = (wchar_t *)0xffffffff;
          bVar12 = FUN_1800598b0(0x273,-1);
          if (!bVar12) goto LAB_18005d9a9;
        }
LAB_18005d9c7:
        bVar6 = true;
        if (local_98 == 0) {
LAB_18005d9fe:
          bVar12 = true;
          if (bVar5) {
            param_2 = (wchar_t *)0x0;
            param_3 = 0xffffffff;
            bVar13 = FUN_180059900(0x27c,0,-1);
            if (bVar13) goto LAB_18005da19;
          }
          goto LAB_18005da22;
        }
        param_3 = 0xffffffff;
        bVar12 = FUN_180059900(0x20d,0,-1);
        if (!bVar12) {
          param_2 = (wchar_t *)0x0;
          param_3 = 0xffffffff;
          bVar12 = FUN_180059900(0x273,0,-1);
          if (!bVar12) goto LAB_18005d9fe;
        }
LAB_18005da19:
        param_2 = (wchar_t *)0x1;
      }
      uVar19 = *(uint *)(lVar8 + 0x141c);
      pwVar20 = (wchar_t *)(ulonglong)uVar19;
      if (uVar19 == 0) {
        if (bVar11) {
          *(uint *)(lVar8 + 0x1f10) = *puVar23;
          *(undefined4 *)(lVar8 + 0x1f1c) = 2;
        }
LAB_18005da4b:
        if ((char)param_2 != '\0') {
          *(uint *)(lVar8 + 0x1f10) = *puVar23;
          *(undefined4 *)(lVar8 + 0x1f1c) = 1;
        }
        if ((uVar19 != 0) && (uVar19 != *puVar23)) goto LAB_18005da7c;
        if ((bVar14) || (bVar6)) {
          *(uint *)(lVar8 + 0x1f14) = *puVar23;
        }
        if (uVar19 != 0) goto LAB_18005da7c;
LAB_18005da84:
        if ((bVar11) || ((char)param_2 != '\0')) {
          uVar19 = *(uint *)(lVar8 + 0x1efc);
          pwVar20 = (wchar_t *)(ulonglong)uVar19;
          *(uint *)(lVar8 + 0x1f18) = uVar19;
          lVar16 = DAT_180115c10;
          *(uint *)(DAT_180115c10 + 0x1f30) = uVar19;
          *(undefined4 *)(lVar16 + 0x1f34) = 0x3dcccccd;
        }
      }
      else {
        if (uVar19 == *puVar23) goto LAB_18005da4b;
LAB_18005da7c:
        if (uVar19 == *(uint *)(lVar8 + 0x1efc)) goto LAB_18005da84;
      }
      bVar24 = local_98;
    }
  }
  if ((*(longlong *)(lVar8 + 0x1f00) == 0) ||
     ((*(uint *)(*(longlong *)(lVar8 + 0x1f00) + 0x14) & 0x10000) == 0)) {
    if ((*(char *)(lVar8 + 0x5e) != '\0') && (*(char *)(lVar8 + 0x1f50) == '\0')) {
      *(undefined1 *)(lVar8 + 0x1ef8) = 1;
    }
  }
  else {
    *(undefined1 *)(lVar8 + 0x1ef8) = 0;
  }
  if ((*(int *)(lVar8 + 0x1f10) != 0) && (*(int *)(lVar8 + 0x1f14) != *(int *)(lVar8 + 0x1f10))) {
    param_3 = 0x331c;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    pwVar20 = L"g.NavActivateDownId == g.NavActivateId";
    FID_conflict__assert
              (L"g.NavActivateDownId == g.NavActivateId",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x331c);
  }
  fVar29 = *(float *)(lVar8 + 0x1f34);
  if (0.0 < fVar29) {
    fVar26 = fVar29 - *(float *)(lVar8 + 0x18);
    fVar29 = 0.0;
    if (0.0 <= fVar26) {
      fVar29 = fVar26;
    }
    *(float *)(lVar8 + 0x1f34) = fVar29;
  }
  if (fVar29 == 0.0) {
    *(undefined4 *)(lVar8 + 0x1f30) = 0;
  }
  iVar3 = *(int *)(lVar8 + 0x1f38);
  if (iVar3 != 0) {
    *(int *)(lVar8 + 0x1f18) = iVar3;
    *(int *)(lVar8 + 0x1f14) = iVar3;
    *(int *)(lVar8 + 0x1f10) = iVar3;
    *(undefined4 *)(lVar8 + 0x1f1c) = *(undefined4 *)(lVar8 + 0x1f3c);
  }
  *(undefined4 *)(lVar8 + 0x1f38) = 0;
  FUN_18005e250(pwVar20,param_2,param_3,(ulonglong)param_4);
  lVar16 = DAT_180115c10;
  if (*(int *)(lVar8 + 0x1fa0) == -1) {
    lVar4 = *(longlong *)(DAT_180115c10 + 0x1f00);
    if (*(int *)(DAT_180115c10 + 0x1fa0) != -1) {
      FID_conflict__assert
                (L"g.NavMoveDir == ImGuiDir_None",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x3417);
    }
    if ((((lVar4 != 0) && (*(longlong *)(lVar16 + 0x20d8) == 0)) &&
        ((*(uint *)(lVar4 + 0x14) & 0x10000) == 0)) &&
       (((bVar14 = FUN_180059900(0x200,1,-1), bVar14 && (*(char *)(lVar16 + 0x104) == '\0')) &&
        (*(char *)(lVar16 + 0x106) == '\0')))) {
      if ((*(byte *)(lVar16 + 8) & 1) == 0) {
        if (*(char *)(lVar16 + 0x105) == '\0') {
          uVar25 = (uint)(*(int *)(lVar16 + 0x141c) != 0);
        }
        else {
          uVar25 = 0xffffffff;
        }
      }
      else if (*(char *)(lVar16 + 0x105) == '\0') {
        if ((*(char *)(lVar16 + 0x1ef8) == '\0') && (*(int *)(lVar16 + 0x141c) == 0)) {
          uVar25 = 0;
        }
      }
      else {
        uVar25 = 0xffffffff;
      }
      *(uint *)(lVar16 + 0x1fd0) = uVar25;
      uVar21 = 3;
      if (*(char *)(lVar4 + 0xd3) != '\0') {
        uVar21 = 0x21;
      }
      FUN_18005c3c0(0xffffffff,((int)uVar25 >> 0x1f) + 3,0x1400,uVar21);
      *(undefined4 *)(lVar16 + 0x1fd4) = 0xffffffff;
    }
  }
  if ((*(char *)(DAT_180115c10 + 0x1f91) == '\0') && (*(char *)(DAT_180115c10 + 0x1f52) == '\0')) {
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 0;
  }
  else {
    plVar2 = (longlong *)(DAT_180115c10 + 0x1f00);
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 1;
    if (*plVar2 == 0) {
      FID_conflict__assert
                (L"g.NavWindow != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x324e);
    }
  }
  lVar16 = *(longlong *)(lVar8 + 0x1f00);
  *(undefined1 *)(lVar8 + 0x1efb) = 0;
  if (((lVar16 == 0) || ((*(uint *)(lVar16 + 0x14) & 0x10000) != 0)) ||
     (*(longlong *)(lVar8 + 0x20d8) != 0)) goto LAB_18005dee5;
  fVar29 = 1.0;
  fVar26 = (float)(int)(*(float *)(lVar16 + 0x2b8) * 100.0 * *(float *)(lVar8 + 0x18) + 0.5);
  if (((*(short *)(lVar16 + 0x174) == 0) && (*(char *)(lVar16 + 0x17a) != '\0')) &&
     (iVar3 = *(int *)(lVar8 + 0x1fa0), iVar3 != -1)) {
    fVar27 = -1.0;
    if (iVar3 == 0) {
      fVar28 = -1.0;
LAB_18005dda7:
      *(undefined4 *)(lVar16 + 0xb0) = 0;
      *(undefined4 *)(lVar16 + 0xb8) = 0;
      *(float *)(lVar16 + 0xa8) = (float)(int)(fVar28 * fVar26 + *(float *)(lVar16 + 0x98));
    }
    else if (iVar3 == 1) {
      fVar28 = 1.0;
      goto LAB_18005dda7;
    }
    if (iVar3 != 2) {
      if (iVar3 != 3) goto LAB_18005de0a;
      fVar27 = 1.0;
    }
    *(undefined4 *)(lVar16 + 0xb4) = 0;
    *(undefined4 *)(lVar16 + 0xbc) = 0;
    *(float *)(lVar16 + 0xac) = (float)(int)(fVar27 * fVar26 + *(float *)(lVar16 + 0x9c));
  }
LAB_18005de0a:
  if (bVar5) {
    fVar28 = *(float *)(DAT_180115c10 + 0x9c8) - *(float *)(DAT_180115c10 + 0x9b8);
    fVar27 = *(float *)(DAT_180115c10 + 0x9a8) - *(float *)(DAT_180115c10 + 0x998);
    if ((*(char *)(DAT_180115c10 + 0x92c) == '\0') || (*(char *)(DAT_180115c10 + 0x1abc) != '\0')) {
      if ((*(char *)(DAT_180115c10 + 0x93c) != '\0') && (*(char *)(DAT_180115c10 + 0x1ac8) == '\0'))
      {
        fVar29 = 10.0;
      }
    }
    else {
      fVar29 = 0.1;
    }
    if ((fVar27 != 0.0) && (*(char *)(lVar16 + 200) != '\0')) {
      *(undefined4 *)(lVar16 + 0xb0) = 0;
      *(undefined4 *)(lVar16 + 0xb8) = 0;
      *(float *)(lVar16 + 0xa8) = (float)(int)(fVar27 * fVar26 * fVar29 + *(float *)(lVar16 + 0x98))
      ;
    }
    if (fVar28 != 0.0) {
      *(undefined4 *)(lVar16 + 0xb4) = 0;
      *(undefined4 *)(lVar16 + 0xbc) = 0;
      *(float *)(lVar16 + 0xac) = (float)(int)(fVar28 * fVar26 * fVar29 + *(float *)(lVar16 + 0x9c))
      ;
    }
  }
LAB_18005dee5:
  if ((bVar24 == 0) && (!bVar5)) {
    *(undefined2 *)(lVar8 + 0x1ef8) = 0;
    bVar7 = false;
  }
  if (((bVar7) && (*(char *)(lVar8 + 0x59) != '\0')) && ((*(byte *)(lVar8 + 0xc) & 4) != 0)) {
    pfVar18 = FUN_18005b6a0(local_94);
    lVar16 = DAT_180115c10;
    fVar29 = *pfVar18;
    fVar26 = pfVar18[1];
    *(float *)(DAT_180115c10 + 0xac0) = fVar29;
    *(float *)(lVar16 + 0xac4) = fVar26;
    *(float *)(lVar16 + 0xe8) = fVar29;
    *(float *)(lVar16 + 0xec) = fVar26;
    *(undefined8 *)(lVar16 + 0xd4) = 0;
    *(undefined1 *)(lVar16 + 0xbb) = 1;
  }
  *(undefined4 *)(lVar8 + 0x1fcc) = 0;
  return;
}


void FUN_18005dfa0(void)

{
  longlong *plVar1;

  if ((*(char *)(DAT_180115c10 + 0x1f91) == '\0') && (*(char *)(DAT_180115c10 + 0x1f52) == '\0')) {
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 0;
    return;
  }
  plVar1 = (longlong *)(DAT_180115c10 + 0x1f00);
  *(undefined1 *)(DAT_180115c10 + 0x1f51) = 1;
  if (*plVar1 == 0) {
    FID_conflict__assert
              (L"g.NavWindow != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x324e);
    return;
  }
  return;
}


void FUN_18005dff0(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong in_R9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_18;
  undefined8 local_10;

  lVar2 = DAT_180115c10;
  if (((*(uint *)(DAT_180115c10 + 8) & 2) == 0) || ((*(byte *)(DAT_180115c10 + 0xc) & 1) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(uint *)(DAT_180115c10 + 8) & 1) != 0) {
    uVar8 = 0;
    uVar9 = 0xffffffff;
    bVar3 = FUN_180059900(0x20e,0,-1);
    if (bVar3) goto LAB_18005e05f;
  }
  if (!bVar4) {
    return;
  }
  uVar9 = 0xffffffff;
  uVar7 = 0x27b;
  if (*(char *)(lVar2 + 0x58) != '\0') {
    uVar7 = 0x27d;
  }
  uVar8 = 0;
  bVar4 = FUN_180059900(uVar7,0,-1);
  if (!bVar4) {
    return;
  }
LAB_18005e05f:
  if ((*(byte *)(lVar2 + 0x270c) & 0x10) != 0) {
    FUN_180052d90(0x1800e6578,uVar8,uVar9,in_R9);
  }
  if (*(int *)(lVar2 + 0x141c) != 0) {
    FUN_180066c00(0,0,uVar9,in_R9);
    return;
  }
  if (*(int *)(lVar2 + 0x1f0c) != 0) {
    FUN_18005cef0(0,uVar8,uVar9,in_R9);
    lVar2 = DAT_180115c10;
    if (*(char *)(DAT_180115c10 + 0x5d) != '\0') {
      *(undefined1 *)(DAT_180115c10 + 0x1ef8) = 1;
    }
    *(undefined2 *)(lVar2 + 0x1ef9) = 0x101;
    return;
  }
  lVar5 = *(longlong *)(lVar2 + 0x1f00);
  if ((((lVar5 != 0) && (lVar5 != *(longlong *)(lVar5 + 0x3b0))) &&
      (lVar5 = *(longlong *)(lVar5 + 0x3c8), (*(uint *)(lVar5 + 0x14) & 0x4000000) == 0)) &&
     (lVar1 = *(longlong *)(lVar5 + 0x3a0), lVar1 != 0)) {
    if (*(int *)(lVar5 + 0x90) == 0) {
      uVar9 = 0x34bc;
      FID_conflict__assert
                (L"child_window->ChildId != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x34bc);
    }
    FUN_180056440(lVar1,0,uVar9);
    fVar10 = (float)*(undefined8 *)(lVar5 + 0x28);
    fVar11 = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x28) >> 0x20);
    fVar12 = (float)*(undefined8 *)(lVar1 + 0x128);
    fVar13 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x128) >> 0x20);
    local_18 = CONCAT44(fVar11 - fVar13,fVar10 - fVar12);
    local_10 = CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar5 + 0x30) >> 0x20) + fVar11) -
                        fVar13,((float)*(undefined8 *)(lVar5 + 0x30) + fVar10) - fVar12);
    FUN_1800677a0(*(undefined4 *)(lVar5 + 0x90),0,0,&local_18);
    FUN_180067550();
    return;
  }
  if (((0 < *(int *)(lVar2 + 0x1eb8)) &&
      (lVar5 = FUN_18006ceb0((int *)(lVar2 + 0x1eb8)), *(longlong *)(lVar5 + 8) != 0)) &&
     (lVar5 = FUN_18006ceb0((int *)(lVar2 + 0x1eb8)),
     (*(uint *)(*(longlong *)(lVar5 + 8) + 0x14) & 0x8000000) == 0)) {
    FUN_180051aa0(*(int *)(lVar2 + 0x1eb8) - 1,1,uVar9,in_R9);
    return;
  }
  if ((*(char *)(lVar2 + 0x5b) == '\0') && (*(char *)(lVar2 + 0x5c) == '\0')) {
    cVar6 = '\0';
  }
  else {
    lVar5 = *(longlong *)(lVar2 + 0x1f00);
    cVar6 = *(char *)(lVar2 + 0x5c);
    if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x14) & 0x4000000) != 0)) {
      *(undefined4 *)(lVar5 + 0x3e0) = 0;
      cVar6 = *(char *)(lVar2 + 0x5c);
    }
  }
  if (((*(char *)(lVar2 + 0x5b) != '\0') || (cVar6 != '\0')) &&
     (*(undefined4 *)(lVar2 + 0x1efc) = 0, cVar6 != '\0')) {
    FUN_180056440(0,0,uVar9);
  }
  return;
}


void FUN_18005e250(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  float *pfVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res10 [2];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;

  lVar7 = DAT_180115c10;
  uVar16 = *(uint *)(DAT_180115c10 + 8);
  lVar4 = *(longlong *)(DAT_180115c10 + 0x1f00);
  if (((uVar16 & 2) == 0) || ((*(byte *)(DAT_180115c10 + 0xc) & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((*(char *)(DAT_180115c10 + 0x1f92) == '\0') || (lVar4 == 0)) {
    *(undefined4 *)(DAT_180115c10 + 0x1f98) = 0;
    puVar2 = (undefined4 *)(lVar7 + 0x1fa0);
    *puVar2 = 0xffffffff;
    *(undefined4 *)(lVar7 + 0x1f94) = 0;
    if ((lVar4 != 0) &&
       ((*(longlong *)(lVar7 + 0x20d8) == 0 && ((*(uint *)(lVar4 + 0x14) & 0x10000) == 0)))) {
      if ((*(byte *)(DAT_180115c10 + 0x1d38) & 1) == 0) {
        if (bVar9) {
          param_3 = 0xffffffff;
          bVar8 = FUN_180059900(0x27e,5,-1);
          if (!bVar8) goto LAB_18005e3b9;
LAB_18005e3d7:
          *puVar2 = 0;
        }
        else {
LAB_18005e3b9:
          if ((uVar16 & 1) != 0) {
            param_3 = 0xffffffff;
            bVar8 = FUN_180059900(0x201,5,-1);
            if (bVar8) goto LAB_18005e3d7;
          }
        }
      }
      if ((*(byte *)(DAT_180115c10 + 0x1d38) & 2) == 0) {
        if (bVar9) {
          param_3 = 0xffffffff;
          bVar8 = FUN_180059900(0x27f,5,-1);
          if (!bVar8) goto LAB_18005e408;
LAB_18005e426:
          *puVar2 = 1;
        }
        else {
LAB_18005e408:
          if ((uVar16 & 1) != 0) {
            param_3 = 0xffffffff;
            bVar8 = FUN_180059900(0x202,5,-1);
            if (bVar8) goto LAB_18005e426;
          }
        }
      }
      if ((*(byte *)(DAT_180115c10 + 0x1d38) & 4) == 0) {
        if (bVar9) {
          param_3 = 0xffffffff;
          bVar8 = FUN_180059900(0x280,5,-1);
          if (!bVar8) goto LAB_18005e45a;
LAB_18005e478:
          *puVar2 = 2;
        }
        else {
LAB_18005e45a:
          if ((uVar16 & 1) != 0) {
            param_3 = 0xffffffff;
            bVar8 = FUN_180059900(0x203,5,-1);
            if (bVar8) goto LAB_18005e478;
          }
        }
      }
      if ((*(byte *)(DAT_180115c10 + 0x1d38) & 8) == 0) {
        if (bVar9) {
          param_3 = 0xffffffff;
          bVar9 = FUN_180059900(0x281,5,-1);
          if (!bVar9) goto LAB_18005e4ac;
LAB_18005e4ca:
          *puVar2 = 3;
        }
        else {
LAB_18005e4ac:
          if ((uVar16 & 1) != 0) {
            param_3 = 0xffffffff;
            bVar9 = FUN_180059900(0x204,5,-1);
            if (bVar9) goto LAB_18005e4ca;
          }
        }
      }
    }
    *(undefined4 *)(lVar7 + 0x1fa8) = *puVar2;
    *(undefined4 *)(lVar7 + 0x1fbc) = 0x7f7fffff;
    *(undefined4 *)(lVar7 + 0x1fc0) = 0x7f7fffff;
    *(undefined4 *)(lVar7 + 0x1fc4) = 0xff7fffff;
    *(undefined4 *)(lVar7 + 0x1fc8) = 0xff7fffff;
LAB_18005e500:
    if (lVar4 != 0) goto LAB_18005e505;
LAB_18005e55a:
    fVar22 = 0.0;
  }
  else {
    puVar1 = (uint *)(DAT_180115c10 + 0x1fa0);
    uVar15 = *puVar1;
    if ((uVar15 == 0xffffffff) || (*(int *)(DAT_180115c10 + 0x1fa8) == -1)) {
      param_3 = 0x33aa;
      FID_conflict__assert
                (L"g.NavMoveDir != ImGuiDir_None && g.NavMoveClipDir != ImGuiDir_None",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x33aa);
      uVar15 = *puVar1;
    }
    if ((*(byte *)(lVar7 + 0x1f94) & 0x80) == 0) {
      param_3 = 0x33ab;
      FID_conflict__assert
                (L"g.NavMoveFlags & ImGuiNavMoveFlags_Forwarded",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x33ab);
      uVar15 = *puVar1;
    }
    if ((*(byte *)(lVar7 + 0x270c) & 0x10) == 0) goto LAB_18005e500;
    FUN_180052d90(0x1800e6370,(ulonglong)uVar15,param_3,param_4);
LAB_18005e505:
    if ((*(int *)(lVar7 + 0x1fa0) != -1) || ((uVar16 & 1) == 0)) goto LAB_18005e55a;
    uVar18 = FUN_18005edc0();
    fVar22 = (float)uVar18;
    if (fVar22 != 0.0) {
      fVar19 = *(float *)(lVar4 + 0x21c);
      uVar5 = *(undefined4 *)(lVar4 + 0x220);
      uVar6 = *(undefined4 *)(lVar4 + 0x224);
      *(undefined4 *)(lVar7 + 0x1fbc) = *(undefined4 *)(lVar4 + 0x218);
      *(float *)(lVar7 + 0x1fc0) = fVar19;
      *(undefined4 *)(lVar7 + 0x1fc4) = uVar5;
      *(undefined4 *)(lVar7 + 0x1fc8) = uVar6;
      *(float *)(lVar7 + 0x1fc8) = fVar22 + *(float *)(lVar7 + 0x1fc8);
      *(float *)(lVar7 + 0x1fc0) = fVar22 + fVar19;
    }
  }
  fVar19 = 0.0;
  uVar16 = *(uint *)(lVar7 + 0x1fa0);
  *(undefined1 *)(lVar7 + 0x1f92) = 0;
  if (uVar16 != 0xffffffff) {
    param_4 = (ulonglong)*(uint *)(lVar7 + 0x1f98);
    param_3 = (ulonglong)*(uint *)(lVar7 + 0x1f94);
    FUN_18005c3c0(uVar16,*(undefined4 *)(lVar7 + 0x1fa8),*(uint *)(lVar7 + 0x1f94),
                  *(uint *)(lVar7 + 0x1f98));
  }
  cVar10 = *(char *)(lVar7 + 0x1f90);
  if (cVar10 == '\0') {
LAB_18005e81e:
    if (lVar4 == 0) {
LAB_18005e9ba:
      fVar25 = 0.0;
      fVar22 = 0.0;
      fVar20 = 0.0;
      goto LAB_18005e9c4;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x1efc) == 0) {
      if ((*(byte *)(lVar7 + 0x270c) & 0x10) != 0) {
        if (lVar4 == 0) {
          pcVar13 = "<NULL>";
        }
        else {
          pcVar13 = *(char **)(lVar4 + 8);
        }
        param_3 = (ulonglong)*(uint *)(lVar7 + 0x1f0c);
        FUN_180052d90(0x1800e6390,pcVar13,param_3,param_4);
        cVar10 = *(char *)(lVar7 + 0x1f90);
      }
      *(undefined2 *)(lVar7 + 0x1f52) = 0x101;
      *(undefined4 *)(lVar7 + 0x1f60) = 0;
      if (*(char *)(lVar7 + 0x5d) != '\0') {
        *(undefined1 *)(lVar7 + 0x1ef8) = 1;
      }
      if (cVar10 == '\0') goto LAB_18005e81e;
    }
    if ((*(int *)(lVar7 + 8000) != 3) || (*(int *)(lVar7 + 0x1f0c) != 0)) goto LAB_18005e81e;
    if (lVar4 == 0) goto LAB_18005e9ba;
    uVar16 = *(uint *)(lVar7 + 0x1f94);
    fVar20 = *(float *)(lVar4 + 0x128);
    fVar25 = *(float *)(lVar4 + 300);
    fVar26 = *(float *)(lVar4 + 0x21c);
    uVar15 = uVar16 & 10;
    fVar21 = *(float *)(lVar4 + 0x220);
    fVar17 = *(float *)(lVar4 + 0x224);
    fVar3 = *(float *)(lVar4 + 0x218);
    lVar14 = lVar4;
    pfVar11 = FUN_180050950(local_res10,lVar4);
    fVar24 = pfVar11[1] - *(float *)(lVar4 + 0x9c);
    fVar23 = *pfVar11 - *(float *)(lVar4 + 0x98);
    fVar26 = ((fVar26 - 1.0) - fVar25) + fVar24;
    fVar24 = fVar24 + ((fVar17 + 1.0) - fVar25);
    fVar25 = fVar23 + ((fVar21 + 1.0) - fVar20);
    uVar16 = uVar16 & 5;
    if ((uVar16 != 0) && (uVar15 != 0)) goto LAB_18005e81e;
    lVar12 = (longlong)*(int *)(lVar7 + 0x1f0c);
    fVar23 = fVar23 + ((fVar3 - 1.0) - fVar20);
    if ((((*(float *)(lVar4 + 1000 + lVar12 * 0x10) < fVar23) ||
         (*(float *)(lVar4 + 0x3ec + lVar12 * 0x10) < fVar26)) ||
        (fVar25 < *(float *)(lVar4 + 0x3f0 + lVar12 * 0x10))) ||
       (fVar24 < *(float *)(lVar4 + 0x3f4 + lVar12 * 0x10))) {
      if ((*(byte *)(lVar7 + 0x270c) & 0x10) != 0) {
        FUN_180052d90(0x1800e63c8,lVar14,param_3,param_4);
      }
      fVar20 = *(float *)(lVar4 + 0x2b8) * 0.5;
      if (uVar16 == 0) {
        local_d0 = fVar25 - fVar23;
        if (fVar20 <= fVar25 - fVar23) {
          local_d0 = fVar20;
        }
        local_d8 = fVar23 + local_d0;
        local_d0 = fVar25 - local_d0;
      }
      else {
        local_d8 = -3.4028235e+38;
        local_d0 = 3.4028235e+38;
      }
      if (uVar15 == 0) {
        local_d4 = fVar24 - fVar26;
        if (fVar20 <= fVar24 - fVar26) {
          local_d4 = fVar20;
        }
        local_cc = fVar24 - local_d4;
        local_d4 = local_d4 + fVar26;
      }
      else {
        local_d4 = -3.4028235e+38;
        local_cc = 3.4028235e+38;
      }
      FUN_1800518b0((float *)((longlong)*(int *)(lVar7 + 0x1f0c) * 0x10 + 1000 + lVar4),&local_d8);
      *(undefined4 *)(lVar7 + 0x1efc) = 0;
    }
  }
  lVar14 = (longlong)*(int *)(lVar7 + 0x1f0c);
  fVar20 = *(float *)(lVar4 + 1000 + lVar14 * 0x10);
  pfVar11 = (float *)(lVar4 + 0x3f0 + lVar14 * 0x10);
  if ((*pfVar11 <= fVar20 && fVar20 != *pfVar11) ||
     (fVar25 = *(float *)(lVar4 + 0x3ec + lVar14 * 0x10),
     pfVar11 = (float *)(lVar4 + 0x3f4 + lVar14 * 0x10), *pfVar11 <= fVar25 && fVar25 != *pfVar11))
  {
    fVar20 = 0.0;
    fVar26 = 0.0;
    fVar21 = 0.0;
  }
  else {
    fVar26 = *(float *)(lVar4 + 0x3f0 + lVar14 * 0x10);
    fVar21 = *(float *)(lVar4 + 0x3f4 + lVar14 * 0x10);
    fVar19 = fVar25;
  }
  fVar25 = fVar19 + *(float *)(lVar4 + 300);
  fVar20 = fVar20 + *(float *)(lVar4 + 0x128);
  fVar19 = fVar26 + *(float *)(lVar4 + 0x128);
  fVar25 = fVar25 + fVar22;
  fVar22 = fVar21 + *(float *)(lVar4 + 300) + fVar22;
  if (*(char *)(lVar7 + 0x1f90) != '\0') {
    uVar16 = *(uint *)(lVar7 + 0x1fa0);
    lVar4 = *(longlong *)(lVar4 + 0x3c8);
    fVar26 = *(float *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x128);
    fVar21 = *(float *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 300);
    if ((*(byte *)(lVar7 + 0x1f94) & 0x80) == 0) {
      if (*(float *)(lVar4 + 0x408 + lVar14 * 8) == 3.4028235e+38) {
        fVar17 = fVar20 + 1.0;
        if (fVar19 <= fVar20 + 1.0) {
          fVar17 = fVar19;
        }
        *(float *)(lVar4 + 0x408 + lVar14 * 8) = fVar17 - fVar26;
      }
      if (*(float *)(lVar4 + 0x40c + lVar14 * 8) == 3.4028235e+38) {
        *(float *)(lVar4 + 0x40c + lVar14 * 8) = (fVar22 + fVar25) * 0.5 - fVar21;
      }
    }
    if ((uVar16 - 2 < 2) &&
       (fVar17 = *(float *)(lVar4 + 0x408 + lVar14 * 8), fVar17 != 3.4028235e+38)) {
      fVar20 = fVar17 + fVar26;
      fVar19 = fVar20;
    }
    else if (uVar16 < 2) {
      fVar26 = *(float *)(lVar4 + 0x40c + lVar14 * 8);
      if (fVar26 != 3.4028235e+38) {
        fVar22 = fVar26 + fVar21;
        fVar25 = fVar22;
      }
    }
  }
  if ((fVar19 < fVar20) || (fVar22 < fVar25)) {
    FID_conflict__assert
              (L"!scoring_rect.IsInverted()",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x340b);
  }
LAB_18005e9c4:
  *(float *)(lVar7 + 0x1fac) = fVar20;
  *(float *)(lVar7 + 0x1fb0) = fVar25;
  *(float *)(lVar7 + 0x1fb4) = fVar19;
  *(float *)(lVar7 + 0x1fb8) = fVar22;
  if (fVar20 < *(float *)(lVar7 + 0x1fbc)) {
    *(float *)(lVar7 + 0x1fbc) = fVar20;
  }
  if (fVar25 < *(float *)(lVar7 + 0x1fc0)) {
    *(float *)(lVar7 + 0x1fc0) = fVar25;
  }
  if (*(float *)(lVar7 + 0x1fc4) <= fVar19 && fVar19 != *(float *)(lVar7 + 0x1fc4)) {
    *(float *)(lVar7 + 0x1fc4) = fVar19;
  }
  if (*(float *)(lVar7 + 0x1fc8) <= fVar22 && fVar22 != *(float *)(lVar7 + 0x1fc8)) {
    *(float *)(lVar7 + 0x1fc8) = fVar22;
  }
  return;
}


void FUN_18005eac0(void)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  lVar6 = DAT_180115c10;
  lVar5 = *(longlong *)(DAT_180115c10 + 0x1f00);
  lVar7 = (longlong)*(int *)(DAT_180115c10 + 0x1f0c);
  iVar8 = *(int *)(DAT_180115c10 + 0x1fa0);
  uVar2 = *(uint *)(DAT_180115c10 + 0x1f94);
  fVar9 = *(float *)(lVar5 + 0x3ec + lVar7 * 0x10);
  fVar13 = *(float *)(lVar5 + 0x3f4 + lVar7 * 0x10);
  if (iVar8 == 0) {
    if ((uVar2 & 5) == 0) {
      return;
    }
    fVar12 = *(float *)(lVar5 + 0x58) + *(float *)(lVar5 + 0x40);
    fVar10 = fVar12;
    if ((uVar2 & 4) != 0) {
      iVar8 = 2;
      fVar11 = fVar13 - fVar9;
      fVar9 = -fVar11 + fVar9;
      fVar13 = -fVar11 + fVar13;
    }
  }
  else if (iVar8 == 1) {
    if ((uVar2 & 5) == 0) {
      return;
    }
    fVar12 = -*(float *)(lVar5 + 0x58);
    fVar10 = fVar12;
    if ((uVar2 & 4) != 0) {
      iVar8 = 3;
      fVar11 = fVar13 - fVar9;
      fVar9 = fVar9 + fVar11;
      fVar13 = fVar13 + fVar11;
    }
  }
  else {
    fVar10 = *(float *)(lVar5 + 1000 + lVar7 * 0x10);
    fVar12 = *(float *)(lVar5 + 0x3f0 + lVar7 * 0x10);
    if (iVar8 == 2) {
      if ((uVar2 & 10) == 0) {
        return;
      }
      fVar9 = *(float *)(lVar5 + 0x5c) + *(float *)(lVar5 + 0x44);
      fVar13 = fVar9;
      if ((uVar2 & 8) != 0) {
        iVar8 = 0;
        fVar11 = fVar12 - fVar10;
        fVar12 = -fVar11 + fVar12;
        fVar10 = -fVar11 + fVar10;
      }
    }
    else {
      if (iVar8 != 3) {
        return;
      }
      if ((uVar2 & 10) == 0) {
        return;
      }
      fVar9 = -*(float *)(lVar5 + 0x5c);
      fVar13 = fVar9;
      if ((uVar2 & 8) != 0) {
        iVar8 = 1;
        fVar11 = fVar12 - fVar10;
        fVar10 = fVar10 + fVar11;
        fVar12 = fVar12 + fVar11;
      }
    }
  }
  *(float *)(lVar5 + 1000 + lVar7 * 0x10) = fVar10;
  *(float *)(lVar5 + 0x3ec + lVar7 * 0x10) = fVar9;
  *(float *)(lVar5 + 0x3f0 + lVar7 * 0x10) = fVar12;
  *(float *)(lVar5 + 0x3f4 + lVar7 * 0x10) = fVar13;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3c8) + 0x408 +
   (longlong)*(int *)(DAT_180115c10 + 0x1f0c) * 8) = 0x7f7fffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3c8) + 0x40c +
   (longlong)*(int *)(DAT_180115c10 + 0x1f0c) * 8) = 0x7f7fffff;
  lVar5 = DAT_180115c10;
  uVar3 = *(undefined4 *)(lVar6 + 0x1f98);
  uVar4 = *(undefined4 *)(lVar6 + 0x1fa0);
  if (*(char *)(DAT_180115c10 + 0x1f92) != '\0') {
    FID_conflict__assert
              (L"g.NavMoveForwardToNextFrame == false",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3208);
  }
  *(undefined2 *)(DAT_180115c10 + 0x1f90) = 0;
  if ((*(char *)(DAT_180115c10 + 0x1f91) == '\0') && (*(char *)(DAT_180115c10 + 0x1f52) == '\0')) {
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 0;
  }
  else {
    plVar1 = (longlong *)(DAT_180115c10 + 0x1f00);
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 1;
    if (*plVar1 == 0) {
      FID_conflict__assert
                (L"g.NavWindow != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x324e);
    }
  }
  *(undefined4 *)(lVar5 + 0x1fa0) = uVar4;
  *(undefined4 *)(lVar5 + 0x1f98) = uVar3;
  *(uint *)(lVar5 + 0x1f94) = uVar2 | 0x80;
  *(undefined1 *)(lVar5 + 0x1f92) = 1;
  *(int *)(lVar5 + 0x1fa8) = iVar8;
  return;
}


void FUN_18005ed80(void)

{
  longlong lVar1;

  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if ((*(longlong *)(DAT_180115c10 + 0x21e0) == 0) && (*(longlong *)(lVar1 + 0x1c0) == 0)) {
    *(undefined1 *)(lVar1 + 0x178) = 1;
    return;
  }
  *(undefined1 *)(lVar1 + 0x178) = 0;
  return;
}


undefined8 FUN_18005edc0(void)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong in_R9;
  float fVar12;
  undefined4 uVar13;
  float fVar14;

  lVar3 = DAT_180115c10;
  lVar2 = *(longlong *)(DAT_180115c10 + 0x1f00);
  if (((*(uint *)(lVar2 + 0x14) & 0x10000) == 0) && (*(longlong *)(DAT_180115c10 + 0x20d8) == 0)) {
    if (*(char *)(DAT_180115c10 + 0x15c) == '\0') {
      cVar8 = '\0';
    }
    else if (((*(char *)(DAT_180115c10 + 0x1d3c) == '\0') ||
             (*(int *)(DAT_180115c10 + 0x141c) == -1)) && (*(int *)(DAT_180115c10 + 0x14d8) == -1))
    {
      cVar8 = '\x01';
    }
    else {
      cVar8 = '\0';
    }
    if (*(char *)(DAT_180115c10 + 0x16c) == '\0') {
      cVar9 = '\0';
    }
    else if (((*(char *)(DAT_180115c10 + 0x1d3c) == '\0') ||
             (*(int *)(DAT_180115c10 + 0x141c) == -1)) && (*(int *)(DAT_180115c10 + 0x14e4) == -1))
    {
      cVar9 = '\x01';
    }
    else {
      cVar9 = '\0';
    }
    bVar4 = FUN_180059900(0x207,1,-1);
    uVar7 = 1;
    uVar11 = 0xffffffff;
    bVar5 = FUN_180059900(0x208,1,-1);
    if ((cVar8 != cVar9) || (bVar4 != bVar5)) {
      if (*(int *)(lVar3 + 0x1f0c) != 0) {
        FUN_18005cef0(0,uVar7,uVar11,in_R9);
      }
      if ((*(short *)(lVar2 + 0x174) != 0) || (*(char *)(lVar2 + 0x17a) == '\0')) {
        lVar10 = (longlong)*(int *)(lVar3 + 0x1f0c);
        fVar14 = ((*(float *)(lVar2 + 0x224) - *(float *)(lVar2 + 0x21c)) -
                 *(float *)(lVar2 + 0x2b8)) +
                 (*(float *)(lVar2 + 0x3f4 + lVar10 * 0x10) -
                 *(float *)(lVar2 + 0x3ec + lVar10 * 0x10));
        fVar12 = 0.0;
        if (0.0 <= fVar14) {
          fVar12 = fVar14;
        }
        bVar6 = FUN_180059900(0x205,1,0);
        if (bVar6) {
          uVar13 = 0x80000000;
          fVar12 = -fVar12;
          *(undefined4 *)(lVar3 + 0x1fa0) = 3;
          *(undefined4 *)(lVar3 + 0x1fa8) = 2;
          *(undefined4 *)(lVar3 + 0x1f94) = 0x830;
          goto LAB_18005ef54;
        }
        bVar6 = FUN_180059900(0x206,1,0);
        if (bVar6) {
          *(undefined4 *)(lVar3 + 0x1fa8) = 3;
          *(undefined4 *)(lVar3 + 0x1f94) = 0x830;
LAB_18005f0ed:
          *(undefined4 *)(lVar3 + 0x1fa0) = 2;
        }
        else {
          fVar12 = 0.0;
          if (bVar4) {
            fVar12 = *(float *)(lVar2 + 1000 + lVar10 * 0x10);
            pfVar1 = (float *)(lVar2 + 0x3f0 + lVar10 * 0x10);
            *(undefined4 *)(lVar2 + 0x3f4 + lVar10 * 0x10) = 0;
            *(undefined4 *)(lVar2 + 0x3ec + lVar10 * 0x10) = 0;
            if (*pfVar1 <= fVar12 && fVar12 != *pfVar1) {
              *(undefined4 *)(lVar2 + 0x3f0 + lVar10 * 0x10) = 0;
              *(undefined4 *)(lVar2 + 1000 + lVar10 * 0x10) = 0;
            }
            fVar12 = 0.0;
            uVar13 = 0;
            *(undefined4 *)(lVar3 + 0x1fa0) = 3;
            *(undefined4 *)(lVar3 + 0x1f94) = 0x50;
            goto LAB_18005ef54;
          }
          if (bVar5) {
            uVar13 = *(undefined4 *)(lVar2 + 0x44);
            fVar14 = *(float *)(lVar2 + 1000 + lVar10 * 0x10);
            pfVar1 = (float *)(lVar2 + 0x3f0 + lVar10 * 0x10);
            *(undefined4 *)(lVar2 + 0x3f4 + lVar10 * 0x10) = uVar13;
            *(undefined4 *)(lVar2 + 0x3ec + lVar10 * 0x10) = uVar13;
            if (*pfVar1 <= fVar14 && fVar14 != *pfVar1) {
              *(undefined4 *)(lVar2 + 0x3f0 + lVar10 * 0x10) = 0;
              *(undefined4 *)(lVar2 + 1000 + lVar10 * 0x10) = 0;
            }
            *(undefined4 *)(lVar3 + 0x1f94) = 0x50;
            goto LAB_18005f0ed;
          }
        }
        uVar13 = 0;
        goto LAB_18005ef54;
      }
      bVar6 = FUN_180059900(0x205,1,-1);
      if (bVar6) {
        fVar12 = *(float *)(lVar2 + 0x9c) - (*(float *)(lVar2 + 0x224) - *(float *)(lVar2 + 0x21c));
LAB_18005ef3b:
        *(float *)(lVar2 + 0xac) = fVar12;
      }
      else {
        bVar6 = FUN_180059900(0x206,1,-1);
        if (bVar6) {
          fVar12 = (*(float *)(lVar2 + 0x224) - *(float *)(lVar2 + 0x21c)) +
                   *(float *)(lVar2 + 0x9c);
          goto LAB_18005ef3b;
        }
        if (bVar4) {
          *(undefined4 *)(lVar2 + 0xac) = 0;
        }
        else {
          if (!bVar5) goto LAB_18005ef51;
          *(undefined4 *)(lVar2 + 0xac) = *(undefined4 *)(lVar2 + 0xa4);
        }
      }
      *(undefined4 *)(lVar2 + 0xbc) = 0;
      *(undefined4 *)(lVar2 + 0xb4) = 0;
    }
  }
LAB_18005ef51:
  fVar12 = 0.0;
  uVar13 = 0;
LAB_18005ef54:
  return CONCAT44(uVar13,fVar12);
}


void FUN_18005f110(void)

{
  longlong *plVar1;
  byte *pbVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  char *pcVar15;
  uint *puVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined *puVar21;
  ulonglong uVar22;
  char cVar23;
  undefined4 uVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_res8;
  float local_resc;
  uint local_res10;
  uint local_res18;
  longlong local_res20;
  uint local_98 [22];

  uVar4 = DAT_180115c10;
  uVar22 = 0;
  uVar14 = *(int *)(DAT_180115c10 + 0x1eb8) - 1;
  local_res20 = 0;
  local_res10 = local_res10 & 0xffffff00;
  if (-1 < (int)uVar14) {
    do {
      lVar20 = *(longlong *)(*(longlong *)(DAT_180115c10 + 0x1ec0) + 8 + (ulonglong)uVar14 * 0x38);
      if ((lVar20 != 0) && ((*(uint *)(lVar20 + 0x14) & 0x8000000) != 0)) {
        *(undefined8 *)(DAT_180115c10 + 0x20d8) = 0;
        lVar12 = 0;
        goto LAB_18005f19c;
      }
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  lVar12 = *(longlong *)(DAT_180115c10 + 0x20d8);
  lVar20 = 0;
LAB_18005f19c:
  if ((*(longlong *)(uVar4 + 0x20e0) != 0) && (lVar12 == 0)) {
    fVar27 = *(float *)(uVar4 + 0x20f4) - *(float *)(uVar4 + 0x18) * 10.0;
    if (fVar27 <= 0.0) {
      fVar27 = 0.0;
    }
    *(float *)(uVar4 + 0x20f4) = fVar27;
    if ((*(float *)(uVar4 + 0x2110) <= 0.0) && (fVar27 <= 0.0)) {
      *(undefined8 *)(uVar4 + 0x20e0) = 0;
    }
  }
  pcVar15 = "##NavUpdateWindowing";
  uVar14 = 0xffffffff;
  puVar21 = &DAT_1800df710;
  bVar6 = 0x23;
  do {
    pcVar15 = pcVar15 + 1;
    if (((bVar6 == 0x23) && (*pcVar15 == 0x23)) && (pcVar15[1] == 0x23)) {
      uVar14 = 0xffffffff;
    }
    uVar11 = (ulonglong)bVar6;
    bVar6 = *pcVar15;
    uVar14 = uVar14 >> 8 ^ *(uint *)(&DAT_1800df710 + (uVar14 & 0xff ^ uVar11) * 4);
  } while (bVar6 != 0);
  plVar1 = (longlong *)(uVar4 + 0x20d8);
  uVar14 = ~uVar14;
  if (((*(uint *)(uVar4 + 8) & 2) == 0) || ((*(byte *)(uVar4 + 0xc) & 1) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  local_res18 = *(uint *)(uVar4 + 8) & 0xffffff01;
  if ((lVar20 == 0) && (*(uint *)(uVar4 + 0x20cc) != 0)) {
    puVar21 = (undefined *)(ulonglong)uVar14;
    uVar13 = FUN_180068330(*(uint *)(uVar4 + 0x20cc),0x2001,uVar14,0);
    if ((char)uVar13 == '\0') goto LAB_18005f29b;
    bVar9 = true;
    local_res8 = -NAN;
LAB_18005f2ae:
    if (*(uint *)(uVar4 + 0x20d0) == 0) goto LAB_18005f2ce;
    puVar21 = (undefined *)(ulonglong)uVar14;
    uVar13 = FUN_180068330(*(uint *)(uVar4 + 0x20d0),0x2001,uVar14,uVar22);
    if ((char)uVar13 == '\0') goto LAB_18005f2ce;
    bVar3 = true;
LAB_18005f2d6:
    if ((!bVar7) || (*plVar1 != 0)) goto LAB_18005f2f9;
    puVar21 = (undefined *)0x0;
    bVar7 = FUN_180059900(0x27a,0,0);
    if (!bVar7) goto LAB_18005f2f9;
    cVar23 = '\x01';
LAB_18005f301:
    if ((*plVar1 != 0) || ((!bVar9 && (!bVar3)))) goto LAB_18005f31b;
    bVar7 = true;
    uVar24 = 2;
  }
  else {
LAB_18005f29b:
    bVar9 = false;
    local_res8 = 1.4013e-45;
    if (lVar20 == 0) goto LAB_18005f2ae;
LAB_18005f2ce:
    bVar3 = false;
    if (lVar20 == 0) goto LAB_18005f2d6;
LAB_18005f2f9:
    cVar23 = '\0';
    if (lVar20 == 0) goto LAB_18005f301;
LAB_18005f31b:
    bVar7 = false;
    uVar24 = 3;
  }
  bVar25 = false;
  if ((cVar23 != '\0') || (bVar7)) {
    lVar20 = *(longlong *)(uVar4 + 0x1f00);
    if (lVar20 == 0) {
      uVar18 = *(uint *)(uVar4 + 0x1358);
      do {
        uVar18 = uVar18 - 1;
        if (((int)uVar18 < 0) || (*(int *)(DAT_180115c10 + 0x1358) <= (int)uVar18)) {
          lVar20 = 0;
          break;
        }
        lVar20 = *(longlong *)(*(longlong *)(DAT_180115c10 + 0x1360) + (ulonglong)uVar18 * 8);
      } while (((*(char *)(lVar20 + 0xcd) == '\0') || (lVar20 != *(longlong *)(lVar20 + 0x3b0))) ||
              ((*(uint *)(lVar20 + 0x14) & 0x20000) != 0));
      uVar22 = DAT_180115c10;
      if (lVar20 == 0) goto LAB_18005f505;
    }
    lVar20 = *(longlong *)(lVar20 + 0x3b0);
    bVar25 = *(longlong *)(uVar4 + 0x1f00) == 0;
    *(longlong *)(uVar4 + 0x20e0) = lVar20;
    *plVar1 = lVar20;
    *(undefined8 *)(uVar4 + 0x20f0) = 0;
    *(undefined8 *)(uVar4 + 0x2108) = 0;
    *(undefined8 *)(uVar4 + 0x2100) = 0;
    *(char *)(uVar4 + 0x20f8) = cVar23;
    *(undefined4 *)(uVar4 + 8000) = uVar24;
    uVar11 = DAT_180115c10;
    if ((bVar9) || (bVar3)) {
      uVar18 = *(uint *)(uVar4 + 0x20d0) | *(uint *)(uVar4 + 0x20cc);
      if ((uVar18 >> 0xc & 1) != 0) {
        if (uVar14 == 0) {
          puVar21 = (undefined *)0x2705;
          FID_conflict__assert
                    (L"IsNamedKeyOrMod(key) && (owner_id != ((ImGuiID)0) || (flags & (ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease)))"
                     ,
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x2705);
        }
        *(uint *)(uVar11 + 0x1bb4) = uVar14;
        *(uint *)(uVar11 + 0x1bb0) = uVar14;
        *(undefined2 *)(uVar11 + 0x1bb8) = 0;
      }
      uVar11 = DAT_180115c10;
      if ((uVar18 >> 0xd & 1) != 0) {
        if (uVar14 == 0) {
          puVar21 = (undefined *)0x2705;
          FID_conflict__assert
                    (L"IsNamedKeyOrMod(key) && (owner_id != ((ImGuiID)0) || (flags & (ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease)))"
                     ,
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x2705);
        }
        *(uint *)(uVar11 + 0x1bc0) = uVar14;
        *(uint *)(uVar11 + 0x1bbc) = uVar14;
        *(undefined2 *)(uVar11 + 0x1bc4) = 0;
      }
      uVar11 = DAT_180115c10;
      if ((uVar18 >> 0xe & 1) != 0) {
        if (uVar14 == 0) {
          puVar21 = (undefined *)0x2705;
          FID_conflict__assert
                    (L"IsNamedKeyOrMod(key) && (owner_id != ((ImGuiID)0) || (flags & (ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease)))"
                     ,
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x2705);
        }
        *(uint *)(uVar11 + 0x1bcc) = uVar14;
        *(uint *)(uVar11 + 0x1bc8) = uVar14;
        *(undefined2 *)(uVar11 + 0x1bd0) = 0;
      }
      uVar11 = DAT_180115c10;
      if ((uVar18 >> 0xf & 1) != 0) {
        if (uVar14 == 0) {
          puVar21 = (undefined *)0x2705;
          FID_conflict__assert
                    (L"IsNamedKeyOrMod(key) && (owner_id != ((ImGuiID)0) || (flags & (ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease)))"
                     ,
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x2705);
        }
        *(uint *)(uVar11 + 0x1bd8) = uVar14;
        *(uint *)(uVar11 + 0x1bd4) = uVar14;
        *(undefined2 *)(uVar11 + 0x1bdc) = 0;
      }
    }
  }
LAB_18005f505:
  fVar27 = local_res8;
  fVar26 = *(float *)(uVar4 + 0x18) + *(float *)(uVar4 + 0x20f0);
  *(float *)(uVar4 + 0x20f0) = fVar26;
  if (*plVar1 != 0) {
    if (*(int *)(uVar4 + 8000) == 3) {
      fVar26 = (fVar26 - 0.2) / 0.05;
      if (0.0 <= fVar26) {
        fVar28 = 1.0;
        if (fVar26 <= 1.0) {
          fVar28 = fVar26;
        }
      }
      else {
        fVar28 = 0.0;
      }
      fVar26 = *(float *)(uVar4 + 0x20f4);
      if (*(float *)(uVar4 + 0x20f4) <= fVar28) {
        fVar26 = fVar28;
      }
      *(float *)(uVar4 + 0x20f4) = fVar26;
      bVar7 = FUN_180059900(0x283,1,0);
      puVar21 = (undefined *)0x0;
      bVar8 = FUN_180059900(0x282,1,0);
      if (((uint)bVar8 - (uint)bVar7 != 0) && (!bVar25)) {
        FUN_18005ff50((uint)bVar8 - (uint)bVar7);
        *(undefined4 *)(uVar4 + 0x20f4) = 0x3f800000;
      }
      if ((*(char *)(DAT_180115c10 + 0x8ac) == '\0') || (*(char *)(DAT_180115c10 + 0x1a5c) != '\0'))
      {
        pbVar2 = (byte *)(uVar4 + 0x20f8);
        *pbVar2 = *pbVar2 & (*(float *)(uVar4 + 0x20f4) <= 1.0 && *(float *)(uVar4 + 0x20f4) != 1.0)
        ;
        if (*pbVar2 == 0) {
          local_res20 = *plVar1;
        }
        else if (*(longlong *)(uVar4 + 0x1f00) != 0) {
          local_res10 = CONCAT31(local_res10._1_3_,1);
        }
        *plVar1 = 0;
      }
    }
    if ((*plVar1 != 0) && (*(int *)(uVar4 + 8000) == 2)) {
      uVar14 = 0xf000;
      if (*(uint *)(uVar4 + 0x20cc) != 0) {
        uVar14 = *(uint *)(uVar4 + 0x20cc);
      }
      uVar18 = 0xf000;
      if (*(uint *)(uVar4 + 0x20d0) != 0) {
        uVar18 = *(uint *)(uVar4 + 0x20d0);
      }
      uVar19 = uVar18 & uVar14 & 0xf000;
      if (uVar19 == 0) {
        puVar21 = (undefined *)0x35ff;
        FID_conflict__assert
                  (L"shared_mods != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x35ff);
      }
      fVar26 = (*(float *)(uVar4 + 0x20f0) - 0.2) / 0.05;
      if (0.0 <= fVar26) {
        fVar28 = 1.0;
        if (fVar26 <= 1.0) {
          fVar28 = fVar26;
        }
      }
      else {
        fVar28 = 0.0;
      }
      fVar26 = *(float *)(uVar4 + 0x20f4);
      if (*(float *)(uVar4 + 0x20f4) <= fVar28) {
        fVar26 = fVar28;
      }
      *(float *)(uVar4 + 0x20f4) = fVar26;
      if (((!bVar9) && (!bVar3)) || (bVar25)) {
        if ((*(uint *)(uVar4 + 0x108) & uVar18 & uVar14 & 0xf000) != uVar19) {
          lVar20 = *plVar1;
          goto LAB_18005f6c6;
        }
      }
      else {
        FUN_18005ff50((int)fVar27);
      }
    }
  }
  lVar20 = local_res20;
LAB_18005f6c6:
  bVar7 = false;
  local_98[0] = 0x211;
  local_98[1] = 0x215;
  if (((*(longlong *)(uVar4 + 0x1f00) != 0) &&
      ((*(uint *)(*(longlong *)(uVar4 + 0x1f00) + 0x14) & 0x10000) == 0)) &&
     ((char)local_res18 != '\0')) {
    puVar16 = local_98;
    do {
      uVar14 = *puVar16;
      puVar21 = (undefined *)0xffffffff;
      bVar9 = FUN_180059900(uVar14,0,-1);
      if (bVar9) {
        bVar7 = true;
        *(uint *)(uVar4 + 0x20fc) = uVar14;
        *(undefined1 *)(uVar4 + 0x20f8) = 1;
        *(undefined4 *)(uVar4 + 8000) = 2;
        break;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != local_98 + 2);
  }
  if ((*(char *)(uVar4 + 0x20f8) != '\0') && (*(int *)(uVar4 + 8000) == 2)) {
    if ((((0 < *(int *)(uVar4 + 3000)) ||
         ((((*(char *)(uVar4 + 0x104) != '\0' || (*(char *)(uVar4 + 0x105) != '\0')) ||
           (*(char *)(uVar4 + 0x107) != '\0')) ||
          ((!bVar7 && (*(double *)(uVar4 + 0x1480) == *(double *)(uVar4 + 0x12e8))))))) ||
        (bVar7 = FUN_180068c80(*(uint *)(uVar4 + 0x20fc),-1), !bVar7)) ||
       (*(int *)(DAT_180115c10 + 0x1bc8) != -1)) {
      *(undefined1 *)(uVar4 + 0x20f8) = 0;
    }
    uVar13 = FUN_180059ab0(*(uint *)(uVar4 + 0x20fc));
    if ((((char)uVar13 != '\0') && (*(char *)(uVar4 + 0x20f8) != '\0')) &&
       ((*(int *)(uVar4 + 0x141c) == 0 || (*(char *)(uVar4 + 0x1429) != '\0')))) {
      pfVar17 = (float *)(uVar4 + 0xe8);
      if (DAT_180115c10 == 0) {
        puVar21 = (undefined *)0x24b0;
        FID_conflict__assert
                  (L"GImGui != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x24b0);
      }
      if (pfVar17 == (float *)0x0) {
        pfVar17 = (float *)(DAT_180115c10 + 0xe8);
      }
      if ((*pfVar17 < -256000.0) || (pfVar17[1] < -256000.0)) {
        cVar23 = '\0';
      }
      else {
        cVar23 = '\x01';
      }
      pfVar17 = (float *)(uVar4 + 0xac0);
      if (DAT_180115c10 == 0) {
        puVar21 = (undefined *)0x24b0;
        FID_conflict__assert
                  (L"GImGui != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x24b0);
      }
      if (pfVar17 == (float *)0x0) {
        pfVar17 = (float *)(DAT_180115c10 + 0xe8);
      }
      if ((*pfVar17 < -256000.0) || (pfVar17[1] < -256000.0)) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\x01';
      }
      local_res10 = local_res10 & 0xff;
      if (cVar23 == cVar10) {
        local_res10 = 1;
      }
    }
    uVar13 = FUN_180059840(*(uint *)(uVar4 + 0x20fc));
    if ((char)uVar13 == '\0') {
      *(undefined1 *)(uVar4 + 0x20f8) = 0;
    }
  }
  lVar12 = *plVar1;
  if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x14) & 4) == 0)) {
    fVar27 = 0.0;
    fVar26 = 0.0;
    if (*(int *)(uVar4 + 8000) == 2) {
      if (*(char *)(uVar4 + 0x105) == '\0') {
        fVar27 = *(float *)(DAT_180115c10 + 0x138) - *(float *)(DAT_180115c10 + 0x128);
        fVar26 = *(float *)(DAT_180115c10 + 0x158) - *(float *)(DAT_180115c10 + 0x148);
      }
    }
    else if (*(int *)(uVar4 + 8000) == 3) {
      fVar27 = *(float *)(DAT_180115c10 + 0x9a8) - *(float *)(DAT_180115c10 + 0x998);
      fVar26 = *(float *)(DAT_180115c10 + 0x9c8) - *(float *)(DAT_180115c10 + 0x9b8);
    }
    if ((fVar27 != 0.0) || (fVar26 != 0.0)) {
      fVar28 = *(float *)(uVar4 + 0x50);
      if (*(float *)(uVar4 + 0x54) <= *(float *)(uVar4 + 0x50)) {
        fVar28 = *(float *)(uVar4 + 0x54);
      }
      *(undefined1 *)(uVar4 + 0x1ef9) = 1;
      fVar28 = *(float *)(uVar4 + 0x18) * 800.0 * fVar28;
      fVar26 = fVar28 * fVar26 + *(float *)(uVar4 + 0x2104);
      fVar27 = fVar28 * fVar27 + *(float *)(uVar4 + 0x2100);
      *(float *)(uVar4 + 0x2104) = fVar26;
      *(float *)(uVar4 + 0x2100) = fVar27;
      fVar28 = (float)(int)fVar27;
      fVar27 = (float)(int)fVar26;
      if ((fVar28 != 0.0) || (fVar27 != 0.0)) {
        lVar12 = *(longlong *)(lVar12 + 0x3b0);
        puVar21 = (undefined *)0x1;
        local_res8 = fVar28 + *(float *)(lVar12 + 0x28);
        local_resc = fVar27 + *(float *)(lVar12 + 0x2c);
        FUN_180068060(lVar12,(undefined8 *)&local_res8,1);
        *(float *)(uVar4 + 0x2100) = *(float *)(uVar4 + 0x2100) - fVar28;
        *(float *)(uVar4 + 0x2104) = *(float *)(uVar4 + 0x2104) - fVar27;
      }
    }
  }
  uVar11 = DAT_180115c10;
  if (lVar20 != 0) {
    if ((*(longlong *)(DAT_180115c10 + 0x1f00) == 0) ||
       (lVar20 != *(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3b0))) {
      FUN_180066c00(0,0,puVar21,uVar22);
      uVar5 = DAT_180115c10;
      if (*(char *)(DAT_180115c10 + 0x5d) != '\0') {
        *(undefined1 *)(DAT_180115c10 + 0x1ef8) = 1;
      }
      *(undefined2 *)(uVar5 + 0x1ef9) = 0x101;
      FUN_180051ce0(lVar20,0,(ulonglong)puVar21,uVar22);
      FUN_180056440(lVar20,1,(ulonglong)puVar21);
      lVar20 = *(longlong *)(uVar11 + 0x1f00);
      if (*(int *)(lVar20 + 0x3e0) == 0) {
        FUN_18005ba70(lVar20,'\0');
      }
      if (*(short *)(lVar20 + 0x176) == 2) {
        *(undefined4 *)(uVar11 + 0x1f0c) = 1;
      }
    }
    *(undefined8 *)(uVar11 + 0x20d8) = 0;
  }
  if (((char)local_res10 != '\0') && (*(longlong *)(uVar4 + 0x1f00) != 0)) {
    uVar13 = 0;
    FUN_180066c00(0,0,puVar21,uVar22);
    lVar20 = *(longlong *)(uVar4 + 0x1f00);
    lVar12 = lVar20;
    if (*(longlong *)(lVar20 + 0x3a0) != 0) {
      do {
        if (((*(byte *)(lVar12 + 0x174) & 2) != 0) ||
           ((*(uint *)(lVar12 + 0x14) & 0x15000000) != 0x1000000)) break;
        lVar12 = *(longlong *)(lVar12 + 0x3a0);
      } while (*(longlong *)(lVar12 + 0x3a0) != 0);
      if (lVar12 != lVar20) {
        uVar13 = 0;
        FUN_180056440(lVar12,0,(ulonglong)puVar21);
        *(longlong *)(lVar12 + 0x3d8) = lVar20;
      }
    }
    if ((*(byte *)(*(longlong *)(uVar4 + 0x1f00) + 0x174) & 2) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(uint *)(uVar4 + 0x1f0c) ^ 1;
    }
    if (uVar14 != *(uint *)(uVar4 + 0x1f0c)) {
      if (uVar14 == 1) {
        *(undefined4 *)(*(longlong *)(uVar4 + 0x1f00) + 0x3e4) = 0;
      }
      FUN_18005cef0(uVar14,uVar13,puVar21,uVar22);
      uVar4 = DAT_180115c10;
      if (*(char *)(DAT_180115c10 + 0x5d) != '\0') {
        *(undefined1 *)(DAT_180115c10 + 0x1ef8) = 1;
      }
      *(undefined2 *)(uVar4 + 0x1ef9) = 0x101;
    }
  }
  return;
}


void FUN_18005fc20(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  wchar_t *_Str1;
  wchar_t *pwVar10;
  char *pcVar11;
  undefined *puVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  undefined8 local_res8;

  lVar3 = DAT_180115c10;
  if (*(longlong *)(DAT_180115c10 + 0x20d8) == 0) {
    param_3 = (float *)0x3675;
    FID_conflict__assert
              (L"g.NavWindowingTarget != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3675);
  }
  if (0.15 < *(float *)(lVar3 + 0x20f0) || *(float *)(lVar3 + 0x20f0) == 0.15) {
    if (*(longlong *)(lVar3 + 0x20e8) == 0) {
      param_4 = (float *)0xffffffff;
      param_3 = (float *)0x1800e6689;
      uVar9 = 0xffffffff;
      bVar5 = 0x23;
      do {
        if (((bVar5 == 0x23) && (*(byte *)param_3 == 0x23)) &&
           (*(byte *)((longlong)param_3 + 1) == 0x23)) {
          uVar9 = 0xffffffff;
        }
        uVar7 = (ulonglong)bVar5;
        bVar5 = *(byte *)param_3;
        param_3 = (float *)((longlong)param_3 + 1);
        uVar9 = uVar9 >> 8 ^ *(uint *)(&DAT_1800df710 + (uVar9 & 0xff ^ uVar7) * 4);
      } while (bVar5 != 0);
      uVar8 = FUN_180055d60(~uVar9);
      *(undefined8 *)(lVar3 + 0x20e8) = uVar8;
    }
    lVar2 = DAT_180115c10;
    if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
      param_3 = (float *)0x833;
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    lVar4 = DAT_180115c10;
    lVar2 = **(longlong **)(lVar2 + 0x1ef0);
    uVar8 = *(undefined8 *)(lVar2 + 0x10);
    *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 0x10;
    *(ulonglong *)(lVar4 + 0x1e1c) =
         CONCAT44((float)((ulonglong)uVar8 >> 0x20) * 0.2,(float)uVar8 * 0.2);
    *(undefined4 *)(lVar4 + 0x1e24) = 0x7f7fffff;
    *(undefined4 *)(lVar4 + 0x1e28) = 0x7f7fffff;
    *(undefined8 *)(lVar4 + 0x1e30) = 0;
    *(undefined8 *)(lVar4 + 0x1e38) = 0;
    lVar4 = DAT_180115c10;
    uVar8 = *(undefined8 *)(lVar2 + 0x10);
    uVar1 = *(undefined8 *)(lVar2 + 8);
    *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 1;
    *(undefined4 *)(lVar4 + 0x1df0) = 0x3f000000;
    *(undefined4 *)(lVar4 + 0x1df4) = 0x3f000000;
    *(undefined4 *)(lVar4 + 0x1ddc) = 1;
    *(ulonglong *)(lVar4 + 0x1de8) =
         CONCAT44((float)((ulonglong)uVar8 >> 0x20) * 0.5 + (float)((ulonglong)uVar1 >> 0x20),
                  (float)uVar8 * 0.5 + (float)uVar1);
    fVar14 = (float)*(undefined8 *)(lVar3 + 0xc30);
    fVar15 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0xc30) >> 0x20);
    local_res8 = CONCAT44(fVar15 + fVar15,fVar14 + fVar14);
    FUN_180062c90(2,(float *)&local_res8,param_3,(ulonglong)param_4);
    pcVar11 = (char *)0x0;
    puVar12 = (undefined *)0x31347;
    FUN_18004ca40((byte *)"##NavWindowingOverlay",(undefined1 *)0x0,0x31347);
    _Str1 = (wchar_t *)(lVar3 + 0x1310);
    if (*(byte *)_Str1 != 0) {
      FUN_18009cdf0((byte *)_Str1);
    }
    uVar9 = *(uint *)(lVar3 + 0x1358);
    while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
      if (*(int *)(lVar3 + 0x1358) <= (int)uVar9) {
        puVar12 = (undefined *)0x833;
        pwVar10 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
        ;
        _Str1 = L"i >= 0 && i < Size";
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
        pcVar11 = (char *)pwVar10;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1360) + (ulonglong)uVar9 * 8);
      if (lVar2 == 0) {
        puVar12 = (undefined *)0x3686;
        pwVar10 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        _Str1 = L"window != 0";
        FID_conflict__assert
                  (L"window != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x3686);
        pcVar11 = (char *)pwVar10;
      }
      if (((*(char *)(lVar2 + 0xcd) != '\0') && (lVar2 == *(longlong *)(lVar2 + 0x3b0))) &&
         ((*(uint *)(lVar2 + 0x14) & 0x20000) == 0)) {
        _Str1 = *(wchar_t **)(lVar2 + 8);
        pwVar10 = _Str1;
        if (_Str1 == (wchar_t *)0xffffffffffffffff) {
LAB_18005fe7f:
          if ((*(uint *)(lVar2 + 0x14) >> 0x1a & 1) == 0) {
            if ((*(uint *)(lVar2 + 0x14) >> 10 & 1) != 0) {
              pcVar11 = "##MainMenuBar";
              iVar6 = strcmp((char *)_Str1,"##MainMenuBar");
              if (iVar6 == 0) {
                _Str1 = (wchar_t *)"*Missing Text*";
                if (*(wchar_t **)(DAT_180115c10 + 0x2650) != (wchar_t *)0x0) {
                  _Str1 = *(wchar_t **)(DAT_180115c10 + 0x2650);
                }
                goto LAB_18005fef9;
              }
            }
            pcVar11 = *(char **)(DAT_180115c10 + 0x2660);
            _Str1 = (wchar_t *)"*Missing Text*";
            if ((wchar_t *)pcVar11 != (wchar_t *)0x0) {
              _Str1 = (wchar_t *)pcVar11;
            }
          }
          else {
            _Str1 = (wchar_t *)"*Missing Text*";
            if (*(wchar_t **)(DAT_180115c10 + 0x2658) != (wchar_t *)0x0) {
              _Str1 = *(wchar_t **)(DAT_180115c10 + 0x2658);
            }
          }
        }
        else {
          do {
            if (((char)*pwVar10 == '\0') ||
               (((char)*pwVar10 == '#' && (*(char *)((longlong)pwVar10 + 1) == '#')))) break;
            pwVar10 = (wchar_t *)((longlong)pwVar10 + 1);
          } while (pwVar10 != (wchar_t *)0xffffffffffffffff);
          if (_Str1 == pwVar10) goto LAB_18005fe7f;
        }
LAB_18005fef9:
        bVar13 = *(longlong *)(lVar3 + 0x20d8) == lVar2;
        param_4 = (float *)&local_res8;
        local_res8 = 0;
        pcVar11 = (char *)CONCAT71((int7)((ulonglong)pcVar11 >> 8),bVar13);
        puVar12 = (undefined *)0x0;
        FUN_18009c3c0((byte *)_Str1,bVar13,0,param_4);
      }
    }
    FUN_180053370(_Str1,(wchar_t *)pcVar11,puVar12,(ulonglong)param_4);
    FUN_180062450(1);
  }
  return;
}


void FUN_18005ff50(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;

  lVar1 = DAT_180115c10;
  if (*(longlong *)(DAT_180115c10 + 0x20d8) == 0) {
    FID_conflict__assert
              (L"g.NavWindowingTarget",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3582);
  }
  if ((*(uint *)(*(longlong *)(lVar1 + 0x20d8) + 0x14) & 0x8000000) != 0) {
    return;
  }
  uVar2 = FUN_180055ed0(*(longlong *)(lVar1 + 0x20d8));
  uVar4 = (uint)uVar2;
  do {
    uVar4 = uVar4 + param_1;
    if (((int)uVar4 < 0) || (*(int *)(DAT_180115c10 + 0x1358) <= (int)uVar4)) goto LAB_18005fff4;
    lVar3 = *(longlong *)(*(longlong *)(DAT_180115c10 + 0x1360) + (ulonglong)uVar4 * 8);
  } while ((*(char *)(lVar3 + 0xcd) == '\0') ||
          ((lVar3 != *(longlong *)(lVar3 + 0x3b0) || ((*(uint *)(lVar3 + 0x14) & 0x20000) != 0))));
  if (lVar3 == 0) {
LAB_18005fff4:
    if (param_1 < 0) {
      uVar4 = *(int *)(lVar1 + 0x1358) - 1;
    }
    else {
      uVar4 = 0;
    }
    lVar3 = FUN_180055f80(uVar4,(uint)uVar2,param_1);
    if (lVar3 == 0) goto LAB_180060030;
  }
  *(longlong *)(lVar1 + 0x20e0) = lVar3;
  *(longlong *)(lVar1 + 0x20d8) = lVar3;
  *(undefined8 *)(lVar1 + 0x2108) = 0;
  *(undefined8 *)(lVar1 + 0x2100) = 0;
LAB_180060030:
  *(undefined1 *)(lVar1 + 0x20f8) = 0;
  return;
}


void FUN_180060050(undefined8 param_1,undefined8 param_2,ulonglong param_3,FILE *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  char *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  FILE *_File;
  ulonglong uVar12;
  char *pcVar13;
  size_t sVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  char *pcVar23;
  ulonglong uVar24;
  longlong lVar25;
  float *pfVar26;
  float *pfVar27;
  char *pcVar28;
  size_t _Count;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_res8 [4];
  char *local_98 [13];

  if (DAT_180115c10 == (char *)0x0) {
    param_3 = 0x1431;
    FID_conflict__assert
              (L"GImGui != 0 && \"No current context. Did you call ImGui::CreateContext() and ImGui::SetCurrentContext() ?\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1431);
  }
  pcVar7 = DAT_180115c10;
  uVar17 = *(uint *)(DAT_180115c10 + 0x2610);
  while (uVar17 = uVar17 - 1, -1 < (int)uVar17) {
    if (*(int *)(pcVar7 + 0x2610) <= (int)uVar17) {
      param_3 = 0x833;
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    if (*(int *)(*(longlong *)(pcVar7 + 0x2618) + 4 + (ulonglong)uVar17 * 0x20) == 7) {
      iVar10 = *(int *)(pcVar7 + 0x2610);
      if (iVar10 <= (int)uVar17) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
        iVar10 = *(int *)(pcVar7 + 0x2610);
      }
      uVar12 = *(ulonglong *)(pcVar7 + 0x2618);
      uVar24 = (ulonglong)uVar17 * 0x20 + uVar12;
      if ((uVar24 < uVar12) || ((longlong)iVar10 * 0x20 + uVar12 <= uVar24)) {
        FID_conflict__assert
                  (L"it >= Data && it < Data + Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x84b);
      }
      uVar24 = uVar24 - *(longlong *)(pcVar7 + 0x2618);
      puVar18 = (undefined8 *)(*(longlong *)(pcVar7 + 0x2618) + (uVar24 & 0xffffffffffffffe0));
      param_3 = ((longlong)*(int *)(pcVar7 + 0x2610) - ((longlong)uVar24 >> 5)) * 0x20 - 0x20;
      FUN_1800d1c20(puVar18,puVar18 + 4,param_3);
      *(int *)(pcVar7 + 0x2610) = *(int *)(pcVar7 + 0x2610) + -1;
    }
  }
  lVar25 = *(longlong *)(pcVar7 + 0x2618);
  lVar20 = (longlong)*(int *)(pcVar7 + 0x2610) * 0x20 + lVar25;
  if ((longlong)*(int *)(pcVar7 + 0x2610) * 0x20 != 0) {
    do {
      if (*(int *)(lVar25 + 4) == 0) {
        (**(code **)(lVar25 + 0x10))(pcVar7,lVar25);
      }
      lVar25 = lVar25 + 0x20;
    } while (lVar25 != lVar20);
  }
  FUN_1800548a0();
  pcVar28 = DAT_180115c10;
  if (DAT_180115c10[0x25c8] == '\0') {
    if (*(int *)(DAT_180115c10 + 0x25f0) != 0) {
      param_3 = 0x390c;
      FID_conflict__assert
                (L"g.SettingsWindows.empty()",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x390c);
    }
    if ((*(LPCSTR *)(pcVar28 + 0x20) != (LPCSTR)0x0) &&
       (_File = (FILE *)FUN_180057cd0(*(LPCSTR *)(pcVar28 + 0x20),"rb"), _File != (FILE *)0x0)) {
      uVar12 = FUN_1800beb00(_File);
      if ((int)uVar12 != -1) {
        param_3 = 2;
        iVar10 = FUN_1800be540(_File,0,2);
        if (iVar10 == 0) {
          uVar24 = FUN_1800beb00(_File);
          iVar10 = (int)uVar24;
          _Count = (size_t)iVar10;
          if (iVar10 != -1) {
            param_3 = 0;
            iVar11 = FUN_1800be540(_File,(int)uVar12,0);
            if (((iVar11 == 0) && (_Count != 0xffffffffffffffff)) &&
               (pcVar13 = (char *)FUN_18005b560(_Count), pcVar13 != (char *)0x0)) {
              param_3 = _Count;
              param_4 = _File;
              sVar14 = fread(pcVar13,1,_Count,_File);
              if (sVar14 == _Count) {
                FUN_1800b1c20(_File);
                if (iVar10 != 0) {
                  FUN_18005ae10(pcVar13,_Count);
                }
                FUN_18005b5c0((longlong)pcVar13);
              }
              else {
                FUN_1800b1c20(_File);
                FUN_18005b5c0((longlong)pcVar13);
              }
              goto LAB_1800602d1;
            }
          }
        }
      }
      FUN_1800b1c20(_File);
    }
LAB_1800602d1:
    pcVar28[0x25c8] = '\x01';
  }
  if ((0.0 < *(float *)(pcVar28 + 0x25cc)) &&
     (fVar29 = *(float *)(pcVar28 + 0x25cc) - *(float *)(pcVar28 + 0x18),
     *(float *)(pcVar28 + 0x25cc) = fVar29, fVar29 <= 0.0)) {
    if (*(LPCSTR *)(pcVar28 + 0x20) == (LPCSTR)0x0) {
      pcVar28[0xbc] = '\x01';
    }
    else {
      FUN_180066640(*(LPCSTR *)(pcVar28 + 0x20));
    }
    pcVar28[0x25cc] = '\0';
    pcVar28[0x25cd] = '\0';
    pcVar28[0x25ce] = '\0';
    pcVar28[0x25cf] = '\0';
  }
  *(int *)(pcVar7 + 0x12f0) = *(int *)(pcVar7 + 0x12f0) + 1;
  fVar29 = *(float *)(pcVar7 + 0x18);
  pcVar7[0x1300] = '\x01';
  pcVar7[0x2516] = '\0';
  pcVar7[0x2517] = '\0';
  pcVar7[0x1398] = '\0';
  pcVar7[0x1399] = '\0';
  pcVar7[0x139a] = '\0';
  pcVar7[0x139b] = '\0';
  *(double *)(pcVar7 + 0x12e8) = (double)fVar29 + *(double *)(pcVar7 + 0x12e8);
  iVar10 = *(int *)(pcVar7 + 0x2534);
  if (iVar10 < 0) {
    iVar10 = iVar10 + iVar10 / 2;
    iVar11 = 0;
    if (0 < iVar10) {
      iVar11 = iVar10;
    }
    FUN_18006d650((int *)(pcVar7 + 0x2530),iVar11);
  }
  fVar29 = 3.4028235e+38;
  pcVar7[0x2530] = '\0';
  pcVar7[0x2531] = '\0';
  pcVar7[0x2532] = '\0';
  pcVar7[0x2533] = '\0';
  *(float *)(pcVar7 + 0x28ec) =
       (*(float *)(pcVar7 + 0x18) -
       *(float *)(pcVar7 + (longlong)*(int *)(pcVar7 + 0x28e4) * 4 + 0x27f4)) +
       *(float *)(pcVar7 + 0x28ec);
  *(float *)(pcVar7 + (longlong)*(int *)(pcVar7 + 0x28e4) * 4 + 0x27f4) = *(float *)(pcVar7 + 0x18);
  uVar12 = (ulonglong)(uint)((*(int *)(pcVar7 + 0x28e4) + 1) / 0x3c);
  *(int *)(pcVar7 + 0x28e4) = (*(int *)(pcVar7 + 0x28e4) + 1) % 0x3c;
  iVar10 = 0x3c;
  if (*(int *)(pcVar7 + 0x28e8) + 1 < 0x3c) {
    iVar10 = *(int *)(pcVar7 + 0x28e8) + 1;
  }
  *(int *)(pcVar7 + 0x28e8) = iVar10;
  if (*(float *)(pcVar7 + 0x28ec) <= 0.0) {
    fVar34 = 3.4028235e+38;
  }
  else {
    fVar34 = 1.0 / (*(float *)(pcVar7 + 0x28ec) / (float)iVar10);
  }
  *(float *)(pcVar7 + 0xc0) = fVar34;
  iVar10 = *(int *)(pcVar7 + 0x1334);
  if (iVar10 < 0) {
    uVar17 = iVar10 + iVar10 / 2;
    uVar12 = 0;
    if (0 < (int)uVar17) {
      uVar12 = (ulonglong)uVar17;
    }
    FUN_18006d830((int *)(pcVar7 + 0x1330),(int)uVar12);
  }
  pcVar7[0x1330] = '\0';
  pcVar7[0x1331] = '\0';
  pcVar7[0x1332] = '\0';
  pcVar7[0x1333] = '\0';
  FUN_180069200(pcVar7[0x61],uVar12,param_3,(int *)param_4);
  pcVar28 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1ee8) != 1) {
    param_3 = 0x3a8f;
    FID_conflict__assert
              (L"g.Viewports.Size == 1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3a8f);
  }
  if (*(int *)(pcVar28 + 0x1ee8) < 1) {
    param_3 = 0x833;
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  lVar20 = **(longlong **)(pcVar28 + 0x1ef0);
  *(undefined8 *)(lVar20 + 4) = 5;
  *(undefined4 *)(lVar20 + 0xc) = 0;
  *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(pcVar28 + 0x10);
  plVar19 = *(longlong **)(pcVar28 + 0x1ef0);
  plVar2 = plVar19 + *(int *)(pcVar28 + 0x1ee8);
  if (((longlong)*(int *)(pcVar28 + 0x1ee8) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar20 = *plVar19;
      plVar19 = plVar19 + 1;
      uVar15 = *(undefined8 *)(lVar20 + 0xc0);
      uVar6 = *(undefined8 *)(lVar20 + 200);
      fVar34 = (float)((ulonglong)uVar15 >> 0x20);
      *(undefined8 *)(lVar20 + 0xb0) = uVar15;
      *(undefined8 *)(lVar20 + 200) = 0;
      *(undefined8 *)(lVar20 + 0xc0) = 0;
      *(undefined8 *)(lVar20 + 0xb8) = uVar6;
      *(ulonglong *)(lVar20 + 0x18) =
           CONCAT44(fVar34 + (float)((ulonglong)*(undefined8 *)(lVar20 + 8) >> 0x20),
                    (float)uVar15 + (float)*(undefined8 *)(lVar20 + 8));
      fVar35 = (*(float *)(lVar20 + 0x14) - fVar34) - (float)((ulonglong)uVar6 >> 0x20);
      fVar34 = 0.0;
      if (0.0 <= fVar35) {
        fVar34 = fVar35;
      }
      *(float *)(lVar20 + 0x24) = fVar34;
      fVar35 = (*(float *)(lVar20 + 0x10) - (float)uVar15) - (float)uVar6;
      fVar34 = 0.0;
      if (0.0 <= fVar35) {
        fVar34 = fVar35;
      }
      *(float *)(lVar20 + 0x20) = fVar34;
    } while (plVar19 != plVar2);
  }
  fVar38 = 3.4028235e+38;
  fVar37 = -3.4028235e+38;
  fVar35 = 3.4028235e+38;
  fVar34 = -3.4028235e+38;
  *(undefined1 *)(*(longlong *)(pcVar7 + 0x38) + 0x20) = 1;
  pcVar28 = DAT_180115c10;
  plVar19 = *(longlong **)(DAT_180115c10 + 0x1ef0);
  plVar2 = plVar19 + *(int *)(DAT_180115c10 + 0x1ee8);
  if (((longlong)*(int *)(DAT_180115c10 + 0x1ee8) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar20 = *plVar19;
      fVar4 = *(float *)(lVar20 + 8);
      fVar5 = *(float *)(lVar20 + 0xc);
      fVar30 = fVar4 + *(float *)(lVar20 + 0x10);
      fVar36 = fVar5 + *(float *)(lVar20 + 0x14);
      if (fVar4 < fVar38) {
        fVar38 = fVar4;
      }
      if (fVar5 < fVar35) {
        fVar35 = fVar5;
      }
      if (fVar37 < fVar30) {
        fVar37 = fVar30;
      }
      if (fVar34 < fVar36) {
        fVar34 = fVar36;
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar2);
  }
  *(float *)(DAT_180115c10 + 0x1100) = fVar38;
  *(float *)(pcVar28 + 0x1104) = fVar35;
  *(float *)(pcVar28 + 0x1108) = fVar37;
  *(float *)(pcVar28 + 0x110c) = fVar34;
  *(undefined4 *)(pcVar28 + 0x10f0) = *(undefined4 *)(pcVar28 + 0xd1c);
  FUN_180078890((longlong)(pcVar28 + 0x10d0),*(float *)(pcVar28 + 0xd20));
  pcVar28[0x10fc] = '\0';
  pcVar28[0x10fd] = '\0';
  pcVar28[0x10fe] = '\0';
  pcVar28[0x10ff] = '\0';
  cVar9 = pcVar28[0xd18];
  if (cVar9 != '\0') {
    pcVar28[0x10fc] = '\x01';
    pcVar28[0x10fd] = '\0';
    pcVar28[0x10fe] = '\0';
    pcVar28[0x10ff] = '\0';
  }
  uVar17 = (uint)(cVar9 != '\0');
  if ((pcVar28[0xd19] != '\0') && ((**(byte **)(pcVar28 + 0x38) & 4) == 0)) {
    uVar17 = uVar17 | 2;
    *(uint *)(pcVar28 + 0x10fc) = uVar17;
  }
  if (pcVar28[0xd1a] != '\0') {
    uVar17 = uVar17 | 4;
    *(uint *)(pcVar28 + 0x10fc) = uVar17;
  }
  if ((pcVar28[0xc] & 8U) != 0) {
    *(uint *)(pcVar28 + 0x10fc) = uVar17 | 8;
  }
  pcVar28[0x10f8] = '\0';
  pcVar28[0x10f9] = '\0';
  pcVar28[0x10fa] = -0x80;
  pcVar28[0x10fb] = '?';
  lVar20 = *(longlong *)(DAT_180115c10 + 0x48);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(DAT_180115c10 + 0x38);
    if (*(int *)(lVar20 + 0x50) < 1) {
      param_3 = 0x833;
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    lVar20 = **(longlong **)(lVar20 + 0x58);
  }
  FUN_180066e70(lVar20);
  if (*(longlong *)(*(longlong *)(pcVar7 + 0x10b8) + 0x40) == 0) {
    param_3 = 0x145b;
    FID_conflict__assert
              (L"g.Font->IsLoaded()",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x145b);
  }
  pwVar22 = *(wchar_t **)(pcVar7 + 0x1ef0);
  pwVar21 = pwVar22 + (longlong)*(int *)(pcVar7 + 0x1ee8) * 4;
  if (((longlong)*(int *)(pcVar7 + 0x1ee8) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar20 = *(longlong *)pwVar22;
      pwVar22 = pwVar22 + 4;
      *(undefined1 *)(lVar20 + 0x50) = 0;
    } while (pwVar22 != pwVar21);
  }
  pcVar28 = DAT_180115c10;
  if ((pcVar7[0x2114] != '\0') &&
     (iVar10 = *(int *)(pcVar7 + 0x2134), iVar10 == *(int *)(pcVar7 + 0x141c))) {
    if (*(int *)(DAT_180115c10 + 0x141c) == iVar10) {
      *(int *)(DAT_180115c10 + 0x1420) = iVar10;
    }
    if (*(int *)(pcVar28 + 0x1450) == iVar10) {
      pcVar28[0x1459] = '\x01';
    }
  }
  cVar9 = pcVar7[0x89];
  if ((((cVar9 != '\0') && (pcVar7[0x104] != '\0')) ||
      (pcVar7[0x13fc] = '\0', pcVar7[0x13fd] = '\0', pcVar7[0x13fe] = '\0', pcVar7[0x13ff] = '\0',
      cVar9 != '\0')) && (1 < *(int *)(pcVar7 + 0x140c))) {
    *(undefined4 *)(pcVar7 + 0x13fc) = *(undefined4 *)(pcVar7 + 0x1408);
  }
  if (*(int *)(pcVar7 + 0x1408) == 0) {
    pcVar7[0x1410] = '\0';
    pcVar7[0x1411] = '\0';
    pcVar7[0x1412] = '\0';
    pcVar7[0x1413] = '\0';
LAB_1800607f6:
    pcVar7[0x1414] = '\0';
    pcVar7[0x1415] = '\0';
    pcVar7[0x1416] = '\0';
    pcVar7[0x1417] = '\0';
  }
  else if ((*(int *)(pcVar7 + 0x1404) != 0) &&
          (*(int *)(pcVar7 + 0x141c) == *(int *)(pcVar7 + 0x1404))) goto LAB_1800607f6;
  iVar10 = *(int *)(pcVar7 + 0x1404);
  if (iVar10 != 0) {
    *(float *)(pcVar7 + 0x1410) = *(float *)(pcVar7 + 0x18) + *(float *)(pcVar7 + 0x1410);
    if (*(int *)(pcVar7 + 0x141c) != iVar10) {
      *(float *)(pcVar7 + 0x1414) = *(float *)(pcVar7 + 0x18) + *(float *)(pcVar7 + 0x1414);
    }
  }
  *(int *)(pcVar7 + 0x1404) = 0;
  iVar11 = *(int *)(pcVar7 + 0x141c);
  *(int *)(pcVar7 + 0x1408) = iVar10;
  pcVar7[0x140c] = '\0';
  pcVar7[0x140d] = '\0';
  pcVar7[0x140e] = '\0';
  pcVar7[0x140f] = '\0';
  pcVar7[0x1418] = '\0';
  pcVar7[0x1419] = '\0';
  if (((iVar11 != 0) && (*(int *)(pcVar7 + 0x1420) != iVar11)) &&
     (*(int *)(pcVar7 + 0x144c) == iVar11)) {
    if ((pcVar7[0x270c] & 2U) != 0) {
      FUN_180052d90(0x1800e1a60,pwVar21,param_3,(ulonglong)param_4);
    }
    pwVar21 = (wchar_t *)0x0;
    FUN_180066c00(0,0,param_3,(ulonglong)param_4);
  }
  iVar10 = *(int *)(pcVar7 + 0x141c);
  if (iVar10 != 0) {
    *(float *)(pcVar7 + 0x1424) = *(float *)(pcVar7 + 0x18) + *(float *)(pcVar7 + 0x1424);
  }
  fVar34 = *(float *)(pcVar7 + 0x18);
  iVar11 = *(int *)(pcVar7 + 0x2478);
  *(int *)(pcVar7 + 0x144c) = iVar10;
  pcVar7[0x1420] = '\0';
  pcVar7[0x1421] = '\0';
  pcVar7[0x1422] = '\0';
  pcVar7[0x1423] = '\0';
  pcVar7[0x142d] = '\0';
  pcVar7[0x1428] = '\0';
  *(float *)(pcVar7 + 0x1468) = fVar34 + *(float *)(pcVar7 + 0x1468);
  if ((iVar11 != 0) && (iVar10 != iVar11)) {
    pcVar7[0x2478] = '\0';
    pcVar7[0x2479] = '\0';
    pcVar7[0x247a] = '\0';
    pcVar7[0x247b] = '\0';
  }
  if (iVar10 == 0) {
    pcVar7[0x1d38] = '\0';
    pcVar7[0x1d39] = '\0';
    pcVar7[0x1d3a] = '\0';
    pcVar7[0x1d3b] = '\0';
    pcVar7[0x1d3c] = '\0';
  }
  if (*(int *)(pcVar7 + 0x1454) < *(int *)(pcVar7 + 0x12f0)) {
    pcVar7[0x1450] = '\0';
    pcVar7[0x1451] = '\0';
    pcVar7[0x1452] = '\0';
    pcVar7[0x1453] = '\0';
  }
  uVar17 = *(uint *)(pcVar7 + 0x2348);
  uVar12 = (ulonglong)uVar17;
  pcVar7[0x1459] = '\0';
  if (uVar17 == 0) {
    pcVar7[0x2358] = '\0';
    pcVar7[0x2359] = '\0';
    pcVar7[0x235a] = '\0';
    pcVar7[0x235b] = '\0';
  }
  else if (*(float *)(pcVar7 + 0x10a4) <= *(float *)(pcVar7 + 0x2364)) {
    *(uint *)(pcVar7 + 0x2358) = uVar17;
  }
  if (*(longlong *)(pcVar7 + 0x13b0) == 0) {
    pcVar7[0x235c] = '\0';
    pcVar7[0x235d] = '\0';
    pcVar7[0x235e] = '\0';
    pcVar7[0x235f] = '\0';
  }
  else if (*(float *)(pcVar7 + 0x10a4) <= *(float *)(pcVar7 + 0x2364)) {
    *(undefined4 *)(pcVar7 + 0x235c) = *(undefined4 *)(*(longlong *)(pcVar7 + 0x13b0) + 0x10);
  }
  fVar35 = *(float *)(pcVar7 + 0x2350);
  *(uint *)(pcVar7 + 0x234c) = uVar17;
  if (uVar17 == 0) {
    if (0.0 < fVar35) {
      auVar31 = ZEXT812(0x3e800000);
      fVar35 = *(float *)(pcVar7 + 0x2354);
      *(float *)(pcVar7 + 0x2354) = fVar34 + fVar35;
      if (auVar31._0_4_ <= fVar34 + fVar34) {
        auVar31._4_8_ = auVar31._4_8_;
        auVar31._0_4_ = fVar34 + fVar34;
      }
      if (auVar31._0_4_ <= fVar34 + fVar35) {
        pcVar7[0x2350] = '\0';
        pcVar7[0x2351] = '\0';
        pcVar7[0x2352] = '\0';
        pcVar7[0x2353] = '\0';
        pcVar7[0x2354] = '\0';
        pcVar7[0x2355] = '\0';
        pcVar7[0x2356] = '\0';
        pcVar7[0x2357] = '\0';
      }
    }
  }
  else {
    pcVar7[0x2354] = '\0';
    pcVar7[0x2355] = '\0';
    pcVar7[0x2356] = '\0';
    pcVar7[0x2357] = '\0';
    pcVar7[0x2348] = '\0';
    pcVar7[0x2349] = '\0';
    pcVar7[0x234a] = '\0';
    pcVar7[0x234b] = '\0';
    *(float *)(pcVar7 + 0x2350) = fVar34 + fVar35;
  }
  *(undefined4 *)(pcVar7 + 0x2198) = *(undefined4 *)(pcVar7 + 0x2194);
  pcVar7[0x2190] = -1;
  pcVar7[0x2191] = -1;
  pcVar7[0x2192] = '\x7f';
  pcVar7[0x2193] = '\x7f';
  pcVar7[0x2194] = '\0';
  pcVar7[0x2195] = '\0';
  pcVar7[0x2196] = '\0';
  pcVar7[0x2197] = '\0';
  pcVar7[0x2115] = '\0';
  pcVar7[0x2116] = '\0';
  pcVar7[0x21a0] = '\0';
  pcVar7[0x21a1] = '\0';
  pcVar7[0x21a2] = '\0';
  pcVar7[0x21a3] = '\0';
  pcVar7[0x2518] = '\0';
  pcVar7[0x2519] = '\0';
  pcVar7[0x251a] = '\0';
  pcVar7[0x251b] = '\0';
  pcVar7[0x251c] = '\0';
  pcVar7[0x251d] = '\0';
  pcVar7[0x251e] = '\0';
  pcVar7[0x251f] = '\0';
  FUN_180069cb0();
  FUN_18005d420(uVar12,pwVar21,param_3,&param_4->_ptr);
  FUN_18006a170();
  iVar10 = *(int *)(pcVar7 + 0x1348);
  if (iVar10 < *(int *)(pcVar7 + 0x1358)) {
    param_3 = 0x14cf;
    FID_conflict__assert
              (L"g.WindowsFocusOrder.Size <= g.Windows.Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x14cf);
    iVar10 = *(int *)(pcVar7 + 0x1348);
  }
  if ((pcVar7[0x1302] == '\0') && (0.0 <= *(float *)(pcVar7 + 0x6c))) {
    fVar29 = (float)*(double *)(pcVar7 + 0x12e8) - *(float *)(pcVar7 + 0x6c);
  }
  plVar19 = *(longlong **)(pcVar7 + 0x1350);
  plVar2 = plVar19 + iVar10;
  if (((longlong)iVar10 & 0x1fffffffffffffffU) != 0) {
    do {
      lVar20 = *plVar19;
      cVar9 = *(char *)(lVar20 + 0xcc);
      *(char *)(lVar20 + 0xcd) = cVar9;
      *(undefined1 *)(lVar20 + 0xcc) = 0;
      *(undefined1 *)(lVar20 + 0xce) = 0;
      *(undefined2 *)(lVar20 + 0xdc) = *(undefined2 *)(lVar20 + 0xda);
      *(undefined2 *)(lVar20 + 0xda) = 0;
      if (((cVar9 == '\0') && (*(char *)(lVar20 + 0x424) == '\0')) &&
         (*(float *)(lVar20 + 0x284) <= fVar29 && fVar29 != *(float *)(lVar20 + 0x284))) {
        *(undefined1 *)(lVar20 + 0x424) = 1;
        *(undefined4 *)(lVar20 + 0x41c) = *(undefined4 *)(*(longlong *)(lVar20 + 0x2c0) + 0x14);
        *(undefined4 *)(lVar20 + 0x420) = *(undefined4 *)(*(longlong *)(lVar20 + 0x2c0) + 0x24);
        if (*(longlong *)(lVar20 + 0x110) != 0) {
          *(undefined8 *)(lVar20 + 0x108) = 0;
          FUN_18005b5c0(*(longlong *)(lVar20 + 0x110));
          *(undefined8 *)(lVar20 + 0x110) = 0;
        }
        FUN_180079f20(*(undefined8 **)(lVar20 + 0x2c0));
        if (*(longlong *)(lVar20 + 0x1b0) != 0) {
          *(undefined8 *)(lVar20 + 0x1a8) = 0;
          FUN_18005b5c0(*(longlong *)(lVar20 + 0x1b0));
          *(undefined8 *)(lVar20 + 0x1b0) = 0;
        }
        if (*(longlong *)(lVar20 + 0x1f0) != 0) {
          *(undefined8 *)(lVar20 + 0x1e8) = 0;
          FUN_18005b5c0(*(longlong *)(lVar20 + 0x1f0));
          *(undefined8 *)(lVar20 + 0x1f0) = 0;
        }
        if (*(longlong *)(lVar20 + 0x200) != 0) {
          *(undefined8 *)(lVar20 + 0x1f8) = 0;
          FUN_18005b5c0(*(longlong *)(lVar20 + 0x200));
          *(undefined8 *)(lVar20 + 0x200) = 0;
        }
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar2);
  }
  FUN_180068d90();
  pcVar28 = DAT_180115c10;
  lVar20 = *(longlong *)(DAT_180115c10 + 0x13c8);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(DAT_180115c10 + 0x1440);
    if ((lVar20 != 0) &&
       (iVar10 = *(int *)(DAT_180115c10 + 0x141c), *(int *)(lVar20 + 0x8c) == iVar10)) {
      *(int *)(DAT_180115c10 + 0x1420) = iVar10;
      if (*(int *)(pcVar28 + 0x1450) == iVar10) {
        pcVar28[0x1459] = '\x01';
      }
      if (pcVar28[0xf0] == '\0') goto LAB_180060ced;
    }
  }
  else {
    piVar1 = (int *)(DAT_180115c10 + 0x141c);
    *(int *)(DAT_180115c10 + 0x1420) = *piVar1;
    if (*(int *)(pcVar28 + 0x1450) == *piVar1) {
      pcVar28[0x1459] = '\x01';
    }
    if (*(longlong *)(lVar20 + 0x3b0) == 0) {
      param_3 = 0x136b;
      FID_conflict__assert
                (L"g.MovingWindow && g.MovingWindow->RootWindow",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x136b);
    }
    if (pcVar28[0xf0] != '\0') {
      pfVar26 = (float *)(pcVar28 + 0xe8);
      lVar20 = *(longlong *)(*(longlong *)(pcVar28 + 0x13c8) + 0x3b0);
      if (DAT_180115c10 == (char *)0x0) {
        param_3 = 0x24b0;
        FID_conflict__assert
                  (L"GImGui != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x24b0);
      }
      if (pfVar26 == (float *)0x0) {
        pfVar27 = (float *)(DAT_180115c10 + 0xe8);
      }
      else {
        pfVar27 = pfVar26;
      }
      if ((-256000.0 <= *pfVar27) && (-256000.0 <= pfVar27[1])) {
        uVar12 = 1;
        local_res8[0] =
             CONCAT44((float)((ulonglong)*(undefined8 *)pfVar26 >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(pcVar28 + 0x1434) >> 0x20),
                      (float)*(undefined8 *)pfVar26 - (float)*(undefined8 *)(pcVar28 + 0x1434));
        FUN_180068060(lVar20,local_res8,1);
        lVar20 = *(longlong *)(pcVar28 + 0x13c8);
        FUN_180056440(lVar20,0,uVar12);
        goto LAB_180060cf6;
      }
    }
    pcVar28[0x13c8] = '\0';
    pcVar28[0x13c9] = '\0';
    pcVar28[0x13ca] = '\0';
    pcVar28[0x13cb] = '\0';
    pcVar28[0x13cc] = '\0';
    pcVar28[0x13cd] = '\0';
    pcVar28[0x13ce] = '\0';
    pcVar28[0x13cf] = '\0';
LAB_180060ced:
    lVar20 = 0;
    FUN_180066c00(0,0,param_3,(ulonglong)param_4);
  }
LAB_180060cf6:
  pwVar21 = (wchar_t *)(ulonglong)(*(int *)(DAT_180115c10 + 0x1eb8) - 1U);
  pcVar28 = DAT_180115c10;
  if (-1 < (int)(*(int *)(DAT_180115c10 + 0x1eb8) - 1U)) {
    pcVar28 = *(char **)(DAT_180115c10 + 0x1ec0);
    do {
      lVar20 = (longlong)pwVar21 * 0x38;
      if ((*(longlong *)(pcVar28 + lVar20 + 8) != 0) &&
         ((*(uint *)(*(longlong *)(pcVar28 + lVar20 + 8) + 0x14) & 0x8000000) != 0))
      goto LAB_180060d55;
      uVar17 = (int)pwVar21 - 1;
      pwVar21 = (wchar_t *)(ulonglong)uVar17;
    } while (-1 < (int)uVar17);
  }
  if ((*(longlong *)(pcVar7 + 0x20d8) == 0) || (*(float *)(pcVar7 + 0x20f4) <= 0.0)) {
    fVar34 = *(float *)(pcVar7 + 0x2110) - *(float *)(pcVar7 + 0x18) * 10.0;
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
  }
  else {
LAB_180060d55:
    fVar34 = *(float *)(pcVar7 + 0x18) * 6.0 + *(float *)(pcVar7 + 0x2110);
    if (1.0 <= fVar34) {
      fVar34 = 1.0;
    }
  }
  uVar15 = *(undefined8 *)(pcVar7 + 0x25a8);
  uVar6 = *(undefined8 *)(pcVar7 + 0x25b0);
  pcVar7[0x2360] = '\0';
  pcVar7[0x2361] = '\0';
  pcVar7[0x2362] = '\0';
  pcVar7[0x2363] = '\0';
  *(float *)(pcVar7 + 0x2110) = fVar34;
  *(undefined8 *)(pcVar7 + 0x25b8) = uVar15;
  *(undefined8 *)(pcVar7 + 0x25c0) = uVar6;
  pcVar7[0x28f4] = -1;
  pcVar7[0x28f5] = -1;
  pcVar7[0x28f6] = -1;
  pcVar7[0x28f7] = -1;
  pcVar7[0x28f8] = -1;
  pcVar7[0x28f9] = -1;
  pcVar7[0x28fa] = -1;
  pcVar7[0x28fb] = -1;
  pcVar7[0x28f0] = -1;
  pcVar7[0x28f1] = -1;
  pcVar7[0x28f2] = -1;
  pcVar7[0x28f3] = -1;
  pcVar7[0x25a8] = '\0';
  FUN_18006a8f0(lVar20,pwVar21,(longlong)pcVar28,(ulonglong)param_4);
  iVar10 = *(int *)(pcVar7 + 0x2228);
  if (0 < iVar10) {
    iVar11 = 0;
    do {
      if ((iVar11 < 0) || (iVar10 <= iVar11)) {
        pcVar28 = (char *)0x833;
        pwVar21 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
        ;
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar20 = (longlong)iVar11;
      if (0.0 <= *(float *)(*(longlong *)(pcVar7 + 0x2230) + lVar20 * 4)) {
        if ((iVar11 < 0) || (*(int *)(pcVar7 + 0x2228) <= iVar11)) {
          pcVar28 = (char *)0x833;
          pwVar21 =
          L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
          ;
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        pfVar26 = (float *)(*(longlong *)(pcVar7 + 0x2230) + lVar20 * 4);
        if (*pfVar26 <= fVar29 && fVar29 != *pfVar26) {
          if ((iVar11 < 0) || (*(int *)(pcVar7 + 0x2200) <= iVar11)) {
            pcVar28 = (char *)0x833;
            pwVar21 =
            L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
            ;
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                       ,0x833);
          }
          FUN_180084c30(lVar20 * 0x250 + *(longlong *)(pcVar7 + 0x2208));
        }
      }
      iVar10 = *(int *)(pcVar7 + 0x2228);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar10);
  }
  lVar25 = *(longlong *)(pcVar7 + 0x21f8);
  lVar20 = (longlong)*(int *)(pcVar7 + 0x21f0) * 0x88 + lVar25;
  if ((longlong)*(int *)(pcVar7 + 0x21f0) * 0x88 != 0) {
    do {
      if ((0.0 <= *(float *)(lVar25 + 4)) && (*(float *)(lVar25 + 4) < fVar29)) {
        FUN_180084d70(lVar25);
      }
      lVar25 = lVar25 + 0x88;
    } while (lVar25 != lVar20);
  }
  pcVar13 = DAT_180115c10;
  if (pcVar7[0x1302] != '\0') {
    lVar20 = *(longlong *)(DAT_180115c10 + 0x1ea0);
    if (lVar20 != 0) {
      pcVar13[0x1e98] = '\0';
      pcVar13[0x1e99] = '\0';
      pcVar13[0x1e9a] = '\0';
      pcVar13[0x1e9b] = '\0';
      pcVar13[0x1e9c] = '\0';
      pcVar13[0x1e9d] = '\0';
      pcVar13[0x1e9e] = '\0';
      pcVar13[0x1e9f] = '\0';
      FUN_18005b5c0(lVar20);
      pcVar13[0x1ea0] = '\0';
      pcVar13[0x1ea1] = '\0';
      pcVar13[0x1ea2] = '\0';
      pcVar13[0x1ea3] = '\0';
      pcVar13[0x1ea4] = '\0';
      pcVar13[0x1ea5] = '\0';
      pcVar13[0x1ea6] = '\0';
      pcVar13[0x1ea7] = '\0';
    }
    lVar20 = *(longlong *)(pcVar13 + 0x1eb0);
    if (lVar20 != 0) {
      pcVar13[0x1ea8] = '\0';
      pcVar13[0x1ea9] = '\0';
      pcVar13[0x1eaa] = '\0';
      pcVar13[0x1eab] = '\0';
      pcVar13[0x1eac] = '\0';
      pcVar13[0x1ead] = '\0';
      pcVar13[0x1eae] = '\0';
      pcVar13[0x1eaf] = '\0';
      FUN_18005b5c0(lVar20);
      pcVar13[0x1eb0] = '\0';
      pcVar13[0x1eb1] = '\0';
      pcVar13[0x1eb2] = '\0';
      pcVar13[0x1eb3] = '\0';
      pcVar13[0x1eb4] = '\0';
      pcVar13[0x1eb5] = '\0';
      pcVar13[0x1eb6] = '\0';
      pcVar13[0x1eb7] = '\0';
    }
    pcVar13[0x2308] = '\0';
    pcVar13[0x2309] = '\0';
    pcVar13[0x230a] = '\0';
    pcVar13[0x230b] = '\0';
    FUN_18006cf40((int *)(pcVar13 + 0x2310));
    FUN_180084990();
  }
  pcVar7[0x1302] = '\0';
  pcVar13 = DAT_180115c10;
  if ((*(longlong *)(pcVar7 + 0x1f00) != 0) &&
     (*(char *)(*(longlong *)(pcVar7 + 0x1f00) + 0xcd) == '\0')) {
    uVar17 = *(uint *)(DAT_180115c10 + 0x1358);
    pcVar23 = DAT_180115c10;
    do {
      uVar17 = uVar17 - 1;
      DAT_180115c10 = pcVar23;
      if ((int)uVar17 < 0) {
        if (*(longlong *)(pcVar23 + 0x1f00) != 0) {
          FUN_1800678a0(0,pwVar21,pcVar28,(ulonglong)param_4);
          pcVar23[0x1efc] = '\0';
          pcVar23[0x1efd] = '\0';
          pcVar23[0x1efe] = '\0';
          pcVar23[0x1eff] = '\0';
          pcVar23[0x1f0c] = '\0';
          pcVar23[0x1f0d] = '\0';
          pcVar23[0x1f0e] = '\0';
          pcVar23[0x1f0f] = '\0';
          FUN_180067580(0);
          pcVar23[0x1efb] = '\0';
          pcVar23[0x1f48] = -1;
          pcVar23[0x1f49] = -1;
          pcVar23[0x1f4a] = -1;
          pcVar23[0x1f4b] = -1;
          pcVar23[0x1f4c] = -1;
          pcVar23[0x1f4d] = -1;
          pcVar23[0x1f4e] = -1;
          pcVar23[0x1f4f] = -1;
          FUN_180051ce0(0,0,(ulonglong)pcVar28,(ulonglong)param_4);
        }
        if (((*(int *)(pcVar23 + 0x141c) != 0) && (*(longlong *)(pcVar23 + 0x1440) != 0)) &&
           ((*(longlong *)(*(longlong *)(pcVar23 + 0x1440) + 0x3b0) != 0 &&
            (pcVar23[0x142a] == '\0')))) {
          FUN_180066c00(0,0,pcVar28,(ulonglong)param_4);
        }
        goto LAB_18006103a;
      }
      if (*(int *)(pcVar13 + 0x1358) <= (int)uVar17) {
        pcVar28 = (char *)0x833;
        pwVar21 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
        ;
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar20 = *(longlong *)(*(longlong *)(pcVar13 + 0x1360) + (ulonglong)uVar17 * 8);
      pcVar23 = DAT_180115c10;
    } while (((lVar20 == 0) || (*(char *)(lVar20 + 0xcd) == '\0')) ||
            ((*(uint *)(lVar20 + 0x14) & 0x10200) == 0x10200));
    FUN_180056440(lVar20,1,(ulonglong)pcVar28);
  }
LAB_18006103a:
  FUN_18006df90((int *)(pcVar7 + 0x1378),0);
  iVar10 = *(int *)(pcVar7 + 0x1ecc);
  if (iVar10 < 0) {
    iVar10 = iVar10 + iVar10 / 2;
    iVar11 = 0;
    if (0 < iVar10) {
      iVar11 = iVar10;
    }
    FUN_18006d970((int *)(pcVar7 + 0x1ec8),iVar11);
  }
  pcVar7[0x1ec8] = '\0';
  pcVar7[0x1ec9] = '\0';
  pcVar7[0x1eca] = '\0';
  pcVar7[0x1ecb] = '\0';
  piVar1 = (int *)(pcVar7 + 0x1e98);
  iVar10 = *(int *)(pcVar7 + 0x1e9c);
  if (iVar10 < 0) {
    iVar10 = iVar10 + iVar10 / 2;
    iVar11 = 0;
    if (0 < iVar10) {
      iVar11 = iVar10;
    }
    FUN_18006d650(piVar1,iVar11);
  }
  *piVar1 = 0;
  if (*(int *)(pcVar7 + 0x1e9c) == 0) {
    FUN_18006d650(piVar1,8);
  }
  *(undefined4 *)(*(longlong *)(pcVar7 + 0x1ea0) + (longlong)*piVar1 * 4) = 0x10;
  *piVar1 = *piVar1 + 1;
  if (*piVar1 < 1) {
    pcVar28 = (char *)0x83c;
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  pcVar23 = (char *)0x0;
  *(undefined4 *)(pcVar7 + 0x1d48) =
       *(undefined4 *)(*(longlong *)(pcVar7 + 0x1ea0) + -4 + (longlong)*piVar1 * 4);
  FUN_18006dea0((int *)(pcVar7 + 0x1ea8),0);
  pcVar13 = DAT_180115c10;
  pcVar13[0x274c] = '\0';
  pcVar13[0x274d] = '\0';
  pcVar13[0x274e] = '\0';
  pcVar13[0x274f] = '\0';
  if (pcVar13[0x2749] != '\0') {
    pcVar28 = (char *)0x0;
    uVar17 = *(uint *)(pcVar13 + 0x1408);
    pcVar23 = DAT_180115c10;
    pcVar23[0x2360] = '\a';
    pcVar23[0x2361] = '\0';
    pcVar23[0x2362] = '\0';
    pcVar23[0x2363] = '\0';
    bVar8 = FUN_180059900(0x20e,1,0);
    if (bVar8) {
      pcVar13[0x2749] = '\0';
    }
    iVar10 = *(int *)(pcVar13 + 0x108);
    if (iVar10 == 0x3000) {
      uVar15 = FUN_180059c10(0,'\0');
      if ((char)uVar15 != '\0') {
        pcVar13[0x274a] = '\0';
      }
      uVar15 = FUN_180059c10(1,'\0');
      if ((char)uVar15 != '\0') {
        pcVar13[0x274a] = '\x01';
      }
      uVar15 = FUN_180059c10(2,'\0');
      if ((char)uVar15 != '\0') {
        pcVar13[0x274a] = '\x02';
      }
    }
    else {
      uVar15 = FUN_180059c10((uint)(byte)pcVar13[0x274a],'\0');
      if (((char)uVar15 != '\0') && (uVar17 != 0)) {
        *(uint *)(pcVar13 + 0x274c) = uVar17;
        pcVar13[0x2749] = '\0';
      }
    }
    pcVar3 = DAT_180115c10;
    pcVar23 = (char *)0x0;
    *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 0x40;
    pcVar3[0x1e40] = '3';
    pcVar3[0x1e41] = '3';
    pcVar3[0x1e42] = '3';
    pcVar3[0x1e43] = '?';
    uVar15 = FUN_180050200(0,0);
    if ((char)uVar15 != '\0') {
      pcVar23 = (char *)(ulonglong)uVar17;
      FUN_18009f180("HoveredId: 0x%08X",(longlong)pcVar23,pcVar28,param_4);
      FUN_18009f180("Press ESC to abort picking.",(longlong)pcVar23,pcVar28,param_4);
      local_98[0] = "Left";
      local_98[1] = "Right";
      local_98[2] = "Middle";
      if (iVar10 == 0x3000) {
        FUN_18009f180("Remap w/ Ctrl+Shift: click anywhere to select new mouse button.",
                      (longlong)pcVar23,pcVar28,param_4);
      }
      else {
        pcVar23 = "Click %s Button to break in debugger! (remap w/ Ctrl+Shift)";
        lVar20 = 0;
        if (uVar17 == 0) {
          lVar20 = 0x10;
        }
        pcVar28 = local_98[(byte)pcVar13[0x274a]];
        FUN_18009f1f0((undefined8 *)(DAT_180115c10 + lVar20 + 0xd24),
                      "Click %s Button to break in debugger! (remap w/ Ctrl+Shift)",
                      (longlong)pcVar28,param_4);
      }
      pwVar21 = *(wchar_t **)(DAT_180115c10 + 0x13a8);
      if ((*(uint *)(pwVar21 + 10) & 0x2000000) == 0) {
        pcVar28 = (char *)0x2c83;
        pwVar22 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        pwVar21 = L"GetCurrentWindowRead()->Flags & ImGuiWindowFlags_Tooltip";
        FID_conflict__assert
                  (L"GetCurrentWindowRead()->Flags & ImGuiWindowFlags_Tooltip",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2c83);
        pcVar23 = (char *)pwVar22;
      }
      FUN_180053370(pwVar21,(wchar_t *)pcVar23,pcVar28,(ulonglong)param_4);
    }
  }
  pcVar13 = DAT_180115c10;
  pcVar13[0x1400] = '\0';
  pcVar13[0x1401] = '\0';
  pcVar13[0x1402] = '\0';
  pcVar13[0x1403] = '\0';
  if (*(int *)(pcVar13 + 0x12f0) != *(int *)(pcVar13 + 0x2780) + 1) goto LAB_1800613c1;
  lVar20 = 0x1408;
  if (*(int *)(pcVar13 + 0x1408) == 0) {
    lVar20 = 0x141c;
  }
  iVar10 = *(int *)(pcVar13 + lVar20);
  if (*(int *)(pcVar13 + 0x2788) != iVar10) {
    *(int *)(pcVar13 + 0x2788) = iVar10;
    pcVar13[0x2784] = -1;
    pcVar13[0x2785] = -1;
    pcVar13[0x2786] = -1;
    pcVar13[0x2787] = -1;
    iVar11 = *(int *)(pcVar13 + 0x2794);
    if (iVar11 < 0) {
      uVar17 = iVar11 + iVar11 / 2;
      pcVar23 = (char *)0x0;
      if (0 < (int)uVar17) {
        pcVar23 = (char *)(ulonglong)uVar17;
      }
      FUN_18006da10((int *)(pcVar13 + 0x2790),(int)pcVar23);
    }
    pcVar13[0x2790] = '\0';
    pcVar13[0x2791] = '\0';
    pcVar13[0x2792] = '\0';
    pcVar13[0x2793] = '\0';
  }
  if (iVar10 == 0) goto LAB_1800613c1;
  uVar17 = *(uint *)(pcVar13 + 0x2784);
  piVar1 = (int *)(pcVar13 + 0x2790);
  if ((-1 < (int)uVar17) && ((int)uVar17 < *piVar1)) {
    pcVar23 = (char *)(ulonglong)uVar17;
    lVar20 = FUN_18004b780(piVar1,uVar17);
    if (*(char *)(lVar20 + 5) == '\0') {
      pcVar23 = (char *)(ulonglong)uVar17;
      lVar20 = FUN_18004b780(piVar1,uVar17);
      if (*(char *)(lVar20 + 4) < '\x03') goto LAB_180061386;
    }
    *(int *)(pcVar13 + 0x2784) = *(int *)(pcVar13 + 0x2784) + 1;
  }
LAB_180061386:
  uVar17 = *(uint *)(pcVar13 + 0x2784);
  if (uVar17 == 0xffffffff) {
    *(int *)(pcVar13 + 0x1400) = iVar10;
  }
  else if ((-1 < (int)uVar17) && ((int)uVar17 < *piVar1)) {
    puVar16 = (undefined4 *)FUN_18004b780(piVar1,uVar17);
    *(undefined4 *)(pcVar13 + 0x1400) = *puVar16;
    pcVar23 = (char *)(ulonglong)uVar17;
    lVar20 = FUN_18004b780(piVar1,uVar17);
    *(char *)(lVar20 + 4) = *(char *)(lVar20 + 4) + '\x01';
  }
LAB_1800613c1:
  pcVar13 = DAT_180115c10;
  if (0.0 < *(float *)(DAT_180115c10 + 0x2750)) {
    lVar20 = (longlong)*(int *)(DAT_180115c10 + 0x1e54) * 0x10;
    pfVar26 = (float *)(DAT_180115c10 + lVar20 + 0xd2c);
    pfVar27 = (float *)(DAT_180115c10 + lVar20 + 0xd28);
    auVar32._0_8_ = FUN_1800bb5a0();
    auVar32._8_8_ = extraout_XMM0_Qb;
    param_4 = (FILE *)(pcVar13 + lVar20 + 0xd24);
    auVar33._4_12_ = auVar32._4_12_;
    auVar33._0_4_ = (float)auVar32._0_8_ * 0.5 + 0.5;
    FUN_180051f30(auVar33._0_8_,0.5,0.5,(float *)param_4,pfVar27,pfVar26);
    pcVar3 = pcVar13 + ((longlong)*(int *)(pcVar13 + 0x1e54) + 0xd3) * 0x10;
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = -0x80;
    pcVar3[3] = '?';
    fVar29 = *(float *)(pcVar13 + 0x2750);
    *(float *)(pcVar13 + 0x2750) = fVar29 - *(float *)(pcVar13 + 0x18);
    pcVar3 = DAT_180115c10;
    if (fVar29 - *(float *)(pcVar13 + 0x18) <= 0.0) {
      if (*(int *)(DAT_180115c10 + 0x1e54) != 0x38) {
        uVar15 = *(undefined8 *)(DAT_180115c10 + 0x275c);
        pcVar13 = DAT_180115c10 + (longlong)*(int *)(DAT_180115c10 + 0x1e54) * 0x10 + 0xd24;
        *(undefined8 *)pcVar13 = *(undefined8 *)(DAT_180115c10 + 0x2754);
        *(undefined8 *)(pcVar13 + 8) = uVar15;
      }
      pcVar3[0x1e54] = '8';
      pcVar3[0x1e55] = '\0';
      pcVar3[0x1e56] = '\0';
      pcVar3[0x1e57] = '\0';
    }
  }
  if ((pcVar7[0x2741] != '\0') &&
     (cVar9 = pcVar7[0x2741] + -1, pcVar7[0x2741] = cVar9, cVar9 == '\0')) {
    pcVar7[0x1d4c] = '\0';
    pcVar7[0x1d4d] = '\0';
    pcVar7[0x1d4e] = '\0';
    pcVar7[0x1d4f] = '\0';
    pcVar7[0x2742] = '\0';
  }
  if ((pcVar7[0x2740] != '\0') &&
     (cVar9 = pcVar7[0x2740] + -1, pcVar7[0x2740] = cVar9, cVar9 == '\0')) {
    FUN_180052d90(0x1800e1b10,pcVar23,pcVar28,(ulonglong)param_4);
    uVar17 = *(uint *)(pcVar7 + 0x273c);
    pcVar7[0x273c] = '\0';
    pcVar7[0x273d] = '\0';
    pcVar7[0x273e] = '\0';
    pcVar7[0x273f] = '\0';
    *(uint *)(pcVar7 + 0x270c) = *(uint *)(pcVar7 + 0x270c) & ~uVar17;
  }
  pcVar7[0x1301] = '\x01';
  pcVar28 = DAT_180115c10;
  *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 2;
  pcVar28[0x1df8] = '\0';
  pcVar28[0x1df9] = '\0';
  pcVar28[0x1dfa] = -0x38;
  pcVar28[0x1dfb] = 'C';
  pcVar28[0x1dfc] = '\0';
  pcVar28[0x1dfd] = '\0';
  pcVar28[0x1dfe] = -0x38;
  pcVar28[0x1dff] = 'C';
  pcVar28[0x1de0] = '\x04';
  pcVar28[0x1de1] = '\0';
  pcVar28[0x1de2] = '\0';
  pcVar28[0x1de3] = '\0';
  FUN_18004ca40((byte *)"Debug##Default",(undefined1 *)0x0,0);
  if (*(char *)(*(longlong *)(pcVar7 + 0x13a8) + 0xd5) != '\x01') {
    FID_conflict__assert
              (L"g.CurrentWindow->IsFallbackWindow == true",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1526);
  }
  pcVar7[0x26e4] = '\0';
  pcVar28 = DAT_180115c10;
  pcVar7[0x26e5] = '\0';
  pcVar7[0x26e6] = '\0';
  pcVar7[0x26e7] = '\0';
  *(undefined2 *)(pcVar7 + 0x26e8) = *(undefined2 *)(DAT_180115c10 + 0x1378);
  *(undefined2 *)(pcVar7 + 0x26ea) = *(undefined2 *)(*(longlong *)(pcVar28 + 0x13a8) + 0x108);
  *(undefined2 *)(pcVar7 + 0x26ec) = *(undefined2 *)(*(longlong *)(pcVar28 + 0x13a8) + 0x1a0);
  *(undefined2 *)(pcVar7 + 0x26ee) = *(undefined2 *)(pcVar28 + 0x1e58);
  *(undefined2 *)(pcVar7 + 0x26f0) = *(undefined2 *)(pcVar28 + 0x1e68);
  *(undefined2 *)(pcVar7 + 0x26f2) = *(undefined2 *)(pcVar28 + 0x1e78);
  *(undefined2 *)(pcVar7 + 0x26f4) = *(undefined2 *)(pcVar28 + 0x1e88);
  *(undefined2 *)(pcVar7 + 0x26f6) = *(undefined2 *)(pcVar28 + 0x1ea8);
  *(undefined2 *)(pcVar7 + 0x26f8) = *(undefined2 *)(pcVar28 + 0x1e98);
  *(undefined2 *)(pcVar7 + 0x26fa) = *(undefined2 *)(pcVar28 + 0x1ec8);
  *(undefined2 *)(pcVar7 + 0x26fc) = *(undefined2 *)(pcVar28 + 0x2514);
  if (pcVar7[0x8c] == '\0') {
    cVar9 = -1;
  }
  else if (pcVar7[0x2748] == -1) {
    cVar9 = '\0';
  }
  else {
    uVar17 = *(uint *)(pcVar7 + 0x12f0) & 0x80000003;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
    }
    iVar10 = (uint)(uVar17 == 0) + (int)pcVar7[0x2748];
    cVar9 = (char)iVar10 + (char)(iVar10 / 10) * -10;
  }
  pcVar7[0x2748] = cVar9;
  lVar25 = *(longlong *)(pcVar7 + 0x2618);
  lVar20 = (longlong)*(int *)(pcVar7 + 0x2610) * 0x20 + lVar25;
  if ((longlong)*(int *)(pcVar7 + 0x2610) * 0x20 != 0) {
    do {
      if (*(int *)(lVar25 + 4) == 1) {
        (**(code **)(lVar25 + 0x10))(pcVar7,lVar25);
      }
      lVar25 = lVar25 + 0x20;
    } while (lVar25 != lVar20);
  }
  return;
}


void FUN_1800616d0(byte *param_1,byte param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;

  lVar2 = DAT_180115c10;
  plVar1 = *(longlong **)(DAT_180115c10 + 0x13a8);
  if ((int)plVar1[0x21] < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  uVar3 = *(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4);
  pbVar4 = (byte *)(ulonglong)uVar3;
  uVar3 = FUN_180058260(param_1,0,uVar3);
  if (*(uint *)(*plVar1 + 0x1400) == uVar3) {
    param_4 = 0;
    pbVar4 = param_1;
    FUN_180052900(uVar3,0xb,(char *)param_1,0);
  }
  if ((*(byte *)(lVar2 + 0x270c) & 8) != 0) {
    pbVar4 = (byte *)(ulonglong)uVar3;
    FUN_180052d90(0x1800e5788,param_1,pbVar4,param_4);
  }
  FUN_180061780(uVar3,param_2,(ulonglong)pbVar4,param_4);
  return;
}


void FUN_180061780(uint param_1,byte param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  longlong lVar13;
  float *pfVar14;
  float local_res18 [2];
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;

  lVar7 = DAT_180115c10;
  uVar3 = *(uint *)(DAT_180115c10 + 0x1ec8);
  if ((-1 < (char)param_2) || (*(int *)(DAT_180115c10 + 0x1eb8) <= (int)uVar3)) {
    lVar13 = *(longlong *)(DAT_180115c10 + 0x13a8);
    uStack_34 = 0;
    uVar6 = *(undefined8 *)(DAT_180115c10 + 0x1f00);
    uVar4 = *(undefined4 *)(DAT_180115c10 + 0x12f0);
    fStack_44 = 0.0;
    uStack_40 = 0;
    fStack_3c = 0.0;
    uStack_38 = 0;
    if (*(int *)(lVar13 + 0x108) < 1) {
      param_3 = 0x83c;
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    uVar5 = *(undefined4 *)
             (*(longlong *)(lVar13 + 0x110) + -4 + (longlong)*(int *)(lVar13 + 0x108) * 4);
    pfVar11 = FUN_18005b6a0(local_res18);
    pfVar14 = (float *)(lVar7 + 0xe8);
    fStack_44 = (float)*(undefined8 *)pfVar11;
    uStack_40 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
    if (DAT_180115c10 == 0) {
      param_3 = 0x24b0;
      FID_conflict__assert
                (L"GImGui != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x24b0);
    }
    if (pfVar14 == (float *)0x0) {
      pfVar11 = (float *)(DAT_180115c10 + 0xe8);
    }
    else {
      pfVar11 = pfVar14;
    }
    if ((*pfVar11 < -256000.0) || (pfVar11[1] < -256000.0)) {
      pfVar14 = &fStack_44;
      puVar12 = &uStack_40;
    }
    else {
      puVar12 = (undefined4 *)(lVar7 + 0xec);
    }
    fStack_3c = *pfVar14;
    uStack_38 = *puVar12;
    if ((*(byte *)(lVar7 + 0x270c) & 8) != 0) {
      FUN_180052d90(0x1800e57b0,(ulonglong)param_1,param_3,param_4);
    }
    piVar1 = (int *)(lVar7 + 0x1eb8);
    iVar10 = *piVar1;
    if (iVar10 < (int)(uVar3 + 1)) {
      iVar9 = *(int *)(lVar7 + 0x1ebc);
      if (iVar10 == iVar9) {
        if (iVar9 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = iVar9 / 2 + iVar9;
        }
        iVar8 = iVar10 + 1;
        if (iVar10 + 1 < iVar9) {
          iVar8 = iVar9;
        }
        FUN_18006d970(piVar1,iVar8);
      }
      lVar13 = (longlong)*piVar1 * 0x38;
      lVar7 = *(longlong *)(lVar7 + 0x1ec0);
      *(ulonglong *)(lVar13 + lVar7) = (ulonglong)param_1;
      ((ulonglong *)(lVar13 + lVar7))[1] = 0;
      puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar7);
      *puVar2 = uVar6;
      puVar2[1] = CONCAT44(uVar4,0xffffffff);
      puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar7);
      *puVar2 = CONCAT44(fStack_44,uVar5);
      puVar2[1] = CONCAT44(fStack_3c,uStack_40);
      *(ulonglong *)(lVar13 + 0x30 + lVar7) = CONCAT44(uStack_34,uStack_38);
      *piVar1 = *piVar1 + 1;
    }
    else {
      if (((int)uVar3 < 0) || (iVar10 <= (int)uVar3)) {
        param_3 = 0x833;
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar13 = (longlong)(int)uVar3 * 0x38;
      if (*(uint *)(lVar13 + *(longlong *)(lVar7 + 0x1ec0)) == param_1) {
        if (((int)uVar3 < 0) || (*piVar1 <= (int)uVar3)) {
          param_3 = 0x833;
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        if ((*(int *)(lVar13 + 0x1c + *(longlong *)(lVar7 + 0x1ec0)) ==
             *(int *)(lVar7 + 0x12f0) + -1) || ((param_2 & 0x20) != 0)) {
          if (((int)uVar3 < 0) || (*piVar1 <= (int)uVar3)) {
            FID_conflict__assert
                      (L"i >= 0 && i < Size",
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                       ,0x833);
          }
          *(undefined4 *)(lVar13 + 0x1c + *(longlong *)(lVar7 + 0x1ec0)) = uVar4;
          return;
        }
      }
      FUN_180051aa0(uVar3,1,param_3,param_4);
      iVar10 = *(int *)(lVar7 + 0x1ebc);
      if (*piVar1 == iVar10) {
        iVar9 = *piVar1 + 1;
        if (iVar10 == 0) {
          iVar10 = 8;
        }
        else {
          iVar10 = iVar10 / 2 + iVar10;
        }
        if (iVar9 < iVar10) {
          iVar9 = iVar10;
        }
        FUN_18006d970(piVar1,iVar9);
      }
      lVar13 = (longlong)*piVar1 * 0x38;
      lVar7 = *(longlong *)(lVar7 + 0x1ec0);
      *(ulonglong *)(lVar13 + lVar7) = (ulonglong)param_1;
      ((ulonglong *)(lVar13 + lVar7))[1] = 0;
      puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar7);
      *puVar2 = uVar6;
      puVar2[1] = CONCAT44(uVar4,0xffffffff);
      puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar7);
      *puVar2 = CONCAT44(fStack_44,uVar5);
      puVar2[1] = CONCAT44(fStack_3c,uStack_40);
      *(ulonglong *)(lVar13 + 0x30 + lVar7) = CONCAT44(uStack_34,uStack_38);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}


void FUN_180061aa0(byte *param_1,float *param_2,float *param_3,ulonglong param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;

  lVar3 = DAT_180115c10;
  bVar2 = (byte)param_2;
  plVar1 = *(longlong **)(DAT_180115c10 + 0x13a8);
  uVar5 = FUN_18005a170((uint)param_2 & 0x1f);
  if ((char)uVar5 != '\0') {
    uVar6 = FUN_180059410(0x20,param_2,param_3,param_4);
    if ((char)uVar6 != '\0') {
      if (param_1 == (byte *)0x0) {
        uVar4 = *(uint *)(lVar3 + 0x1d88);
      }
      else {
        param_3 = (float *)0x0;
        uVar4 = FUN_180056b80(plVar1,param_1,0);
      }
      if (uVar4 == 0) {
        param_3 = (float *)0x2e46;
        FID_conflict__assert
                  (L"id != 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x2e46);
      }
      FUN_180061780(uVar4,bVar2,(ulonglong)param_3,param_4);
    }
  }
  return;
}


undefined1 FUN_180061b30(float *param_1,float *param_2)

{
  if ((((param_2[1] <= param_1[3] && param_1[3] != param_2[1]) &&
       (param_1[1] <= param_2[3] && param_2[3] != param_1[1])) &&
      (*param_2 <= param_1[2] && param_1[2] != *param_2)) &&
     (*param_1 <= param_2[2] && param_2[2] != *param_1)) {
    return 1;
  }
  return 0;
}


undefined8 FUN_180061b60(longlong param_1)

{
  BOOL BVar1;
  int cbMultiByte;
  HANDLE hMem;
  LPCWSTR lpWideCharStr;

  if (*(longlong *)(param_1 + 0x2528) != 0) {
    *(undefined8 *)(param_1 + 0x2520) = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2528));
    *(undefined8 *)(param_1 + 0x2528) = 0;
  }
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  hMem = GetClipboardData(0xd);
  if (hMem == (HANDLE)0x0) {
    CloseClipboard();
    return 0;
  }
  lpWideCharStr = GlobalLock(hMem);
  if (lpWideCharStr != (LPCWSTR)0x0) {
    cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                     );
    FUN_18006dac0((int *)(param_1 + 0x2520),cbMultiByte);
    WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,*(LPSTR *)(param_1 + 0x2528),cbMultiByte,
                        (LPCSTR)0x0,(LPBOOL)0x0);
  }
  GlobalUnlock(hMem);
  CloseClipboard();
  return *(undefined8 *)(param_1 + 0x2528);
}


bool FUN_180061c90(undefined8 param_1,LPCSTR param_2)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  LPCWSTR lpWideCharStr;
  HINSTANCE pHVar5;
  short sVar6;
  int iVar7;
  longlong lVar8;

  iVar4 = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  lpWideCharStr = (LPCWSTR)0x0;
  if (0 < iVar4) {
    iVar7 = iVar4;
    if (iVar4 < 8) {
      iVar7 = 8;
    }
    if (0 < iVar7) {
      lpWideCharStr =
           (LPCWSTR)(*(code *)PTR__malloc_base_1801121b8)((longlong)iVar7 * 2,DAT_180115c20);
      if (DAT_180115c10 != 0) {
        FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),lpWideCharStr
                      ,(longlong)iVar7 * 2);
      }
    }
  }
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr,iVar4);
  pHVar5 = ShellExecuteW((HWND)0x0,L"open",lpWideCharStr,(LPCWSTR)0x0,(LPCWSTR)0x0,10);
  lVar3 = DAT_180115c10;
  if (lpWideCharStr != (LPCWSTR)0x0) {
    if (DAT_180115c10 != 0) {
      piVar1 = (int *)(DAT_180115c10 + 0x12f0);
      lVar8 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
      if (*(int *)(lVar8 + 0x27c4 + DAT_180115c10) != *piVar1) {
        iVar4 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
        sVar6 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(DAT_180115c10 + 0x27c0) = sVar6;
        lVar8 = (longlong)sVar6 * 8;
        *(int *)(lVar8 + 0x27c4 + lVar3) = *piVar1;
        *(undefined4 *)(lVar8 + 0x27c8 + lVar3) = 0;
      }
      psVar2 = (short *)(lVar8 + 0x27ca + lVar3);
      *psVar2 = *psVar2 + 1;
      *(int *)(lVar3 + 0x27bc) = *(int *)(lVar3 + 0x27bc) + 1;
    }
    (*(code *)PTR_thunk_FUN_1800c3030_1801121c0)(lpWideCharStr,DAT_180115c20);
  }
  return 0x20 < (longlong)pHVar5;
}


void FUN_180061e10(undefined8 param_1,LPCSTR param_2)

{
  BOOL BVar1;
  int cchWideChar;
  HGLOBAL hMem;
  LPWSTR lpWideCharStr;
  HANDLE pvVar2;

  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 != 0) {
    cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
    hMem = GlobalAlloc(2,(longlong)cchWideChar * 2);
    if (hMem != (HGLOBAL)0x0) {
      lpWideCharStr = GlobalLock(hMem);
      MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr,cchWideChar);
      GlobalUnlock(hMem);
      EmptyClipboard();
      pvVar2 = SetClipboardData(0xd,hMem);
      if (pvVar2 == (HANDLE)0x0) {
        GlobalFree(hMem);
      }
    }
    CloseClipboard();
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180061ee0(undefined8 param_1,longlong param_2,longlong param_3)

{
  HWND pHVar1;
  HIMC pHVar2;
  undefined1 auStack_78 [32];
  tagCANDIDATEFORM local_58;
  tagCOMPOSITIONFORM local_38;
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_78;
  pHVar1 = *(HWND *)(param_2 + 0x30);
  if ((pHVar1 != (HWND)0x0) && (pHVar2 = ImmGetContext(pHVar1), pHVar2 != (HIMC)0x0)) {
    local_38.dwStyle = 0x20;
    local_38.rcArea.left = 0;
    local_38.rcArea.top = 0;
    local_38.rcArea.right = 0;
    local_38.rcArea.bottom = 0;
    local_38.ptCurrentPos.y = (int)(float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    local_38.ptCurrentPos.x = (int)(float)*(undefined8 *)(param_3 + 4);
    ImmSetCompositionWindow(pHVar2,&local_38);
    local_58.dwIndex = 0;
    local_58.rcArea.left = 0;
    local_58.rcArea.top = 0;
    local_58.rcArea.right = 0;
    local_58.rcArea.bottom = 0;
    local_58.dwStyle = 0x40;
    local_58.ptCurrentPos.y = (int)(float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    local_58.ptCurrentPos.x = (int)(float)*(undefined8 *)(param_3 + 4);
    ImmSetCandidateWindow(pHVar2,&local_58);
    ImmReleaseContext(pHVar1,pHVar2);
  }
  return;
}


void FUN_180061fc0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;

  lVar4 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x13a8);
  FUN_180076030(*(int **)(lVar4 + 0x2c0));
  lVar6 = *(longlong *)(lVar4 + 0x2c0);
  if (*(int *)(lVar6 + 0x98) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  lVar5 = *(longlong *)(lVar6 + 0xa0);
  lVar6 = (longlong)*(int *)(lVar6 + 0x98);
  uVar1 = *(undefined4 *)(lVar5 + -0xc + lVar6 * 0x10);
  uVar2 = *(undefined4 *)(lVar5 + -8 + lVar6 * 0x10);
  uVar3 = *(undefined4 *)(lVar5 + -4 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 600) = *(undefined4 *)(lVar5 + -0x10 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 0x25c) = uVar1;
  *(undefined4 *)(lVar4 + 0x260) = uVar2;
  *(undefined4 *)(lVar4 + 0x264) = uVar3;
  return;
}


void FUN_180062070(void)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  float *in_R8;
  ulonglong in_R9;

  lVar3 = DAT_180115c10;
  uVar2 = *(uint *)(DAT_180115c10 + 0x1e88);
  if ((int)*(short *)(*(longlong *)(DAT_180115c10 + 0x2700) + 0xc) < (int)uVar2) {
    if ((int)uVar2 < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x849);
    }
    piVar1 = (int *)(lVar3 + 0x1e88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      if (*(int *)(lVar3 + 0x1e88) < 1) {
        FID_conflict__assert
                  (L"Size > 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x83c);
      }
      *(undefined4 *)(lVar3 + 0x1d44) =
           *(undefined4 *)
            (*(longlong *)(lVar3 + 0x1e90) + -8 + (longlong)*(int *)(lVar3 + 0x1e88) * 8);
      return;
    }
    *(undefined4 *)(lVar3 + 0x1d44) = 0;
  }
  else {
    cVar4 = FUN_180054c00((float *)"Calling PopFocusScope() too many times!",
                          (float *)(ulonglong)uVar2,in_R8,in_R9);
    if (cVar4 != '\0') {
      FID_conflict__assert
                (L"(0) && \"Calling PopFocusScope() too many times!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x20c4);
      return;
    }
  }
  return;
}


void FUN_180062140(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float *in_RDX;
  float *in_R8;
  ulonglong in_R9;

  lVar1 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1e78) < 1) {
    cVar2 = FUN_180054c00((float *)"Calling PopFont() too many times!",in_RDX,in_R8,in_R9);
    if (cVar2 != '\0') {
      FID_conflict__assert
                (L"(0) && \"Calling PopFont() too many times!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1ed6);
      return;
    }
  }
  else {
    iVar3 = *(int *)(DAT_180115c10 + 0x1e78) + -1;
    *(int *)(DAT_180115c10 + 0x1e78) = iVar3;
    if (iVar3 == 0) {
      lVar4 = FUN_1800568f0();
    }
    else {
      if (iVar3 < 1) {
        FID_conflict__assert
                  (L"Size > 0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x83c);
      }
      lVar4 = *(longlong *)
               (*(longlong *)(lVar1 + 0x1e80) + -8 + (longlong)*(int *)(lVar1 + 0x1e78) * 8);
    }
    FUN_180066e70(lVar4);
    FUN_18007a810(*(int **)(*(longlong *)(lVar1 + 0x13a8) + 0x2c0),
                  *(longlong *)(*(longlong *)(lVar4 + 0x40) + 8));
  }
  return;
}


void FUN_180062210(void)

{
  int iVar1;
  char cVar2;
  float *in_RDX;
  float *in_R8;
  ulonglong in_R9;

  iVar1 = *(int *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x108);
  if (iVar1 < 2) {
    cVar2 = FUN_180054c00((float *)"Calling PopID() too many times!",in_RDX,in_R8,in_R9);
    if (cVar2 != '\0') {
      FID_conflict__assert
                (L"(0) && \"Calling PopID() too many times!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x21d5);
      return;
    }
  }
  else {
    *(int *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x108) = iVar1 + -1;
  }
  return;
}


void FUN_180062270(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  float *in_RDX;
  float *in_R8;
  ulonglong in_R9;

  lVar1 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1e98) < 2) {
    cVar2 = FUN_180054c00((float *)"Calling PopItemFlag() too many times!",in_RDX,in_R8,in_R9);
    if (cVar2 != '\0') {
      FID_conflict__assert
                (L"(0) && \"Calling PopItemFlag() too many times!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1ef1);
      return;
    }
  }
  else {
    iVar3 = *(int *)(DAT_180115c10 + 0x1e98) + -1;
    *(int *)(DAT_180115c10 + 0x1e98) = iVar3;
    if (iVar3 < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    *(undefined4 *)(lVar1 + 0x1d48) =
         *(undefined4 *)
          (*(longlong *)(lVar1 + 0x1ea0) + -4 + (longlong)*(int *)(lVar1 + 0x1e98) * 4);
  }
  return;
}


void FUN_180062300(void)

{
  float fVar1;
  float *pfVar2;
  char cVar3;
  ulonglong in_R9;

  pfVar2 = *(float **)(DAT_180115c10 + 0x13a8);
  fVar1 = pfVar2[0x7a];
  if ((int)fVar1 < 1) {
    cVar3 = FUN_180054c00((float *)"Calling PopItemWidth() too many times!",pfVar2,
                          (float *)(longlong)(int)fVar1,in_R9);
    if (cVar3 != '\0') {
      FID_conflict__assert
                (L"(0) && \"Calling PopItemWidth() too many times!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x2a87);
      return;
    }
  }
  else {
    pfVar2[0x78] = *(float *)(*(longlong *)(pfVar2 + 0x7c) + -4 + (longlong)(int)fVar1 * 4);
    pfVar2[0x7a] = (float)((int)fVar1 + -1);
  }
  return;
}


void FUN_180062370(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  float *in_RDX;
  float *in_R8;
  ulonglong in_R9;

  lVar4 = DAT_180115c10;
  iVar6 = *(int *)(DAT_180115c10 + 0x1e58);
  if (*(int *)(DAT_180115c10 + 0x1e58) < param_1) {
    cVar5 = FUN_180054c00((float *)"Calling PopStyleColor() too many times!",in_RDX,in_R8,in_R9);
    if (cVar5 != '\0') {
      FID_conflict__assert
                (L"(0) && \"Calling PopStyleColor() too many times!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0xd2f);
    }
    param_1 = *(int *)(lVar4 + 0x1e58);
    iVar6 = param_1;
  }
  for (; 0 < param_1; param_1 = param_1 + -1) {
    if (iVar6 < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(lVar4 + 0x1e60) + -0x10 + (longlong)*(int *)(lVar4 + 0x1e58) * 0x14);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)
             (lVar4 + 0xd24 +
             (longlong)
             *(int *)(*(longlong *)(lVar4 + 0x1e60) + -0x14 +
                     (longlong)*(int *)(lVar4 + 0x1e58) * 0x14) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    if (*(int *)(lVar4 + 0x1e58) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x849);
    }
    iVar6 = *(int *)(lVar4 + 0x1e58) + -1;
    *(int *)(lVar4 + 0x1e58) = iVar6;
  }
  return;
}


void FUN_180062450(int param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  float *in_RDX;
  float *in_R8;
  ulonglong in_R9;
  longlong lVar8;

  lVar3 = DAT_180115c10;
  iVar5 = *(int *)(DAT_180115c10 + 0x1e68);
  if (*(int *)(DAT_180115c10 + 0x1e68) < param_1) {
    cVar4 = FUN_180054c00((float *)"Calling PopStyleVar() too many times!",in_RDX,in_R8,in_R9);
    if (cVar4 != '\0') {
      FID_conflict__assert
                (L"(0) && \"Calling PopStyleVar() too many times!\"",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0xda5);
    }
    param_1 = *(int *)(lVar3 + 0x1e68);
    iVar5 = param_1;
  }
  for (; 0 < param_1; param_1 = param_1 + -1) {
    if (iVar5 < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    lVar6 = (longlong)*(int *)(lVar3 + 0x1e68);
    lVar2 = *(longlong *)(lVar3 + 0x1e70);
    uVar1 = *(uint *)(lVar2 + -0xc + lVar6 * 0xc);
    lVar8 = (longlong)(int)uVar1;
    if (0x21 < uVar1) {
      FID_conflict__assert
                (L"idx >= 0 && idx < ImGuiStyleVar_COUNT",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0xd63);
    }
    if ((&DAT_1800dfb11)[lVar8 * 4] == '\b') {
      uVar7 = (ulonglong)*(ushort *)(&DAT_1800dfb12 + lVar8 * 4);
      if ((*(uint *)(&DAT_1800dfb10 + lVar8 * 4) & 0xff) == 1) {
        *(undefined4 *)(lVar3 + 0xc28 + uVar7) = *(undefined4 *)(lVar2 + -8 + lVar6 * 0xc);
      }
      else if ((*(uint *)(&DAT_1800dfb10 + lVar8 * 4) & 0xff) == 2) {
        *(undefined4 *)(lVar3 + 0xc28 + uVar7) = *(undefined4 *)(lVar2 + -8 + lVar6 * 0xc);
        *(undefined4 *)(lVar3 + 0xc2c + uVar7) = *(undefined4 *)(lVar2 + -4 + lVar6 * 0xc);
      }
    }
    if (*(int *)(lVar3 + 0x1e68) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x849);
    }
    iVar5 = *(int *)(lVar3 + 0x1e68) + -1;
    *(int *)(lVar3 + 0x1e68) = iVar5;
  }
  return;
}


void FUN_1800625b0(float *param_1,float *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;

  lVar4 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x13a8);
  FUN_180076360(*(int **)(lVar4 + 0x2c0),param_1,param_2,param_3);
  lVar6 = *(longlong *)(lVar4 + 0x2c0);
  if (*(int *)(lVar6 + 0x98) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  lVar5 = *(longlong *)(lVar6 + 0xa0);
  lVar6 = (longlong)*(int *)(lVar6 + 0x98);
  uVar1 = *(undefined4 *)(lVar5 + -0xc + lVar6 * 0x10);
  uVar2 = *(undefined4 *)(lVar5 + -8 + lVar6 * 0x10);
  uVar3 = *(undefined4 *)(lVar5 + -4 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 600) = *(undefined4 *)(lVar5 + -0x10 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 0x25c) = uVar1;
  *(undefined4 *)(lVar4 + 0x260) = uVar2;
  *(undefined4 *)(lVar4 + 0x264) = uVar3;
  return;
}


void FUN_180062670(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;

  lVar3 = DAT_180115c10;
  if ((param_1 == 0) && (param_1 = *(longlong *)(DAT_180115c10 + 0x48), param_1 == 0)) {
    lVar2 = *(longlong *)(DAT_180115c10 + 0x38);
    if (*(int *)(lVar2 + 0x50) < 1) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    param_1 = **(longlong **)(lVar2 + 0x58);
  }
  iVar1 = *(int *)(lVar3 + 0x1e7c);
  if (*(int *)(lVar3 + 0x1e78) == iVar1) {
    iVar6 = *(int *)(lVar3 + 0x1e78) + 1;
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar1 / 2 + iVar1;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    if (iVar1 < iVar6) {
      puVar5 = (undefined8 *)
               (*(code *)PTR__malloc_base_1801121b8)((longlong)iVar6 * 8,DAT_180115c20);
      if (DAT_180115c10 != 0) {
        FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),puVar5,
                      (longlong)iVar6 * 8);
      }
      if (*(undefined8 **)(lVar3 + 0x1e80) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar5,*(undefined8 **)(lVar3 + 0x1e80),
                      (longlong)*(int *)(lVar3 + 0x1e78) << 3);
        FUN_18005b5c0(*(longlong *)(lVar3 + 0x1e80));
      }
      *(undefined8 **)(lVar3 + 0x1e80) = puVar5;
      *(int *)(lVar3 + 0x1e7c) = iVar6;
    }
  }
  *(longlong *)(*(longlong *)(lVar3 + 0x1e80) + (longlong)*(int *)(lVar3 + 0x1e78) * 8) = param_1;
  *(int *)(lVar3 + 0x1e78) = *(int *)(lVar3 + 0x1e78) + 1;
  FUN_180066e70(param_1);
  FUN_18007a810(*(int **)(*(longlong *)(lVar3 + 0x13a8) + 0x2c0),
                *(longlong *)(*(longlong *)(param_1 + 0x40) + 8));
  return;
}


void FUN_1800627e0(int param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  plVar1 = *(longlong **)(DAT_180115c10 + 0x13a8);
  uVar2 = FUN_180056ad0(plVar1,param_1);
  iVar3 = *(int *)((longlong)plVar1 + 0x10c);
  if ((int)plVar1[0x21] == iVar3) {
    iVar4 = (int)plVar1[0x21] + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_18006d650((int *)(plVar1 + 0x21),iVar4);
  }
  *(uint *)(plVar1[0x22] + (longlong)(int)plVar1[0x21] * 4) = uVar2;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
  return;
}


void FUN_180062870(byte *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  plVar2 = *(longlong **)(DAT_180115c10 + 0x13a8);
  plVar1 = plVar2 + 0x21;
  if ((int)*plVar1 < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  uVar3 = FUN_180058260(param_1,0,*(uint *)(plVar2[0x22] + -4 + (longlong)(int)*plVar1 * 4));
  if (*(uint *)(*plVar2 + 0x1400) == uVar3) {
    FUN_180052900(uVar3,0xb,(char *)param_1,0);
  }
  iVar4 = *(int *)((longlong)plVar2 + 0x10c);
  if ((int)*plVar1 == iVar4) {
    iVar5 = (int)*plVar1 + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_18006d650((int *)plVar1,iVar5);
  }
  *(uint *)(plVar2[0x22] + (longlong)(int)*plVar1 * 4) = uVar3;
  *(int *)plVar1 = (int)*plVar1 + 1;
  return;
}


void FUN_180062940(char *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  plVar1 = *(longlong **)(DAT_180115c10 + 0x13a8);
  uVar2 = FUN_180056c10(plVar1,param_1);
  iVar3 = *(int *)((longlong)plVar1 + 0x10c);
  if ((int)plVar1[0x21] == iVar3) {
    iVar4 = (int)plVar1[0x21] + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_18006d650((int *)(plVar1 + 0x21),iVar4);
  }
  *(uint *)(plVar1[0x22] + (longlong)(int)plVar1[0x21] * 4) = uVar2;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
  return;
}


void FUN_1800629d0(uint param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  lVar2 = DAT_180115c10;
  uVar5 = *(uint *)(DAT_180115c10 + 0x1d48);
  piVar1 = (int *)(DAT_180115c10 + 0x1e98);
  if (*piVar1 < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  iVar4 = *piVar1;
  if (uVar5 != *(uint *)(*(longlong *)(lVar2 + 0x1ea0) + -4 + (longlong)iVar4 * 4)) {
    FID_conflict__assert
              (L"item_flags == g.ItemFlagsStack.back()",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1ee3);
    iVar4 = *piVar1;
  }
  if (param_2 == '\0') {
    uVar5 = uVar5 & ~param_1;
  }
  else {
    uVar5 = uVar5 | param_1;
  }
  *(uint *)(lVar2 + 0x1d48) = uVar5;
  iVar3 = *(int *)(lVar2 + 0x1e9c);
  if (iVar4 == iVar3) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    iVar6 = iVar4 + 1;
    if (iVar4 + 1 < iVar3) {
      iVar6 = iVar3;
    }
    FUN_18006d650(piVar1,iVar6);
  }
  *(uint *)(*(longlong *)(lVar2 + 0x1ea0) + (longlong)*piVar1 * 4) = uVar5;
  *piVar1 = *piVar1 + 1;
  return;
}


void FUN_180062aa0(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;

  lVar2 = DAT_180115c10;
  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  iVar3 = *(int *)(lVar1 + 0x1ec);
  if (*(int *)(lVar1 + 0x1e8) == iVar3) {
    iVar4 = *(int *)(lVar1 + 0x1e8) + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_18006d650((int *)(lVar1 + 0x1e8),iVar4);
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x1f0) + (longlong)*(int *)(lVar1 + 0x1e8) * 4) =
       *(undefined4 *)(lVar1 + 0x1e0);
  *(int *)(lVar1 + 0x1e8) = *(int *)(lVar1 + 0x1e8) + 1;
  if (param_1 == 0.0) {
    param_1 = *(float *)(lVar1 + 0x288);
  }
  *(float *)(lVar1 + 0x1e0) = param_1;
  *(uint *)(lVar2 + 0x1d50) = *(uint *)(lVar2 + 0x1d50) & 0xfffffffe;
  return;
}


void FUN_180062b60(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_48;
  undefined8 local_44;
  undefined8 uStack_3c;

  lVar3 = DAT_180115c10;
  puVar1 = (undefined8 *)(DAT_180115c10 + 0xd24 + (longlong)param_1 * 0x10);
  local_44 = *puVar1;
  uStack_3c = puVar1[1];
  local_48 = param_1;
  FUN_18006d290((int *)(DAT_180115c10 + 0x1e58),(undefined8 *)&local_48);
  if (*(int *)(lVar3 + 0x1e54) != param_1) {
    uVar2 = param_2[1];
    puVar1 = (undefined8 *)(lVar3 + 0xd24 + (longlong)param_1 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
  }
  return;
}


void FUN_180062bc0(int param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int local_48;
  undefined8 local_44;
  undefined8 uStack_3c;

  lVar2 = DAT_180115c10;
  lVar3 = (longlong)param_1;
  puVar1 = (undefined8 *)(DAT_180115c10 + 0xd24 + lVar3 * 0x10);
  local_44 = *puVar1;
  uStack_3c = puVar1[1];
  local_48 = param_1;
  FUN_18006d290((int *)(DAT_180115c10 + 0x1e58),(undefined8 *)&local_48);
  if (*(int *)(lVar2 + 0x1e54) != param_1) {
    *(float *)(lVar2 + 0xd24 + lVar3 * 0x10) = (float)(param_2 & 0xff) * 0.003921569;
    *(float *)(lVar2 + 0xd28 + lVar3 * 0x10) = (float)(param_2 >> 8 & 0xff) * 0.003921569;
    *(float *)(lVar2 + 0xd2c + lVar3 * 0x10) = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(lVar2 + 0xd30 + lVar3 * 0x10) = (float)(param_2 >> 0x18) * 0.003921569;
  }
  return;
}


void FUN_180062c90(uint param_1,float *param_2,float *param_3,ulonglong param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  wchar_t *pwVar4;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;

  lVar1 = DAT_180115c10;
  pwVar4 = (wchar_t *)param_2;
  if (0x21 < param_1) {
    param_3 = (float *)0xd63;
    pwVar4 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"idx >= 0 && idx < ImGuiStyleVar_COUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0xd63);
  }
  if (((&DAT_1800dfb11)[(longlong)(int)param_1 * 4] == '\b') &&
     ((char)*(uint *)(&DAT_1800dfb10 + (longlong)(int)param_1 * 4) == '\x02')) {
    uVar3 = *(uint *)(&DAT_1800dfb10 + (longlong)(int)param_1 * 4) >> 0x10;
    local_14 = *(undefined4 *)((ulonglong)uVar3 + 0xc28 + lVar1);
    local_10 = *(undefined4 *)((ulonglong)uVar3 + 0xc2c + lVar1);
    local_18 = param_1;
    FUN_18006d410((int *)(lVar1 + 0x1e68),(undefined8 *)&local_18);
    *(undefined8 *)((ulonglong)uVar3 + 0xc28 + lVar1) = *(undefined8 *)param_2;
    return;
  }
  cVar2 = FUN_180054c00((float *)"Calling PushStyleVar() variant with wrong type!",(float *)pwVar4,
                        param_3,param_4);
  if (cVar2 != '\0') {
    FID_conflict__assert
              (L"(0) && \"Calling PushStyleVar() variant with wrong type!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0xd98);
  }
  return;
}


void FUN_180062d80(uint param_1,undefined4 param_2,float *param_3,ulonglong param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  wchar_t *in_RDX;
  uint local_28;
  undefined4 local_24;

  lVar1 = DAT_180115c10;
  if (0x21 < param_1) {
    param_3 = (float *)0xd63;
    in_RDX =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"idx >= 0 && idx < ImGuiStyleVar_COUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0xd63);
  }
  if (((&DAT_1800dfb11)[(longlong)(int)param_1 * 4] == '\b') &&
     ((char)*(uint *)(&DAT_1800dfb10 + (longlong)(int)param_1 * 4) == '\x01')) {
    uVar3 = *(uint *)(&DAT_1800dfb10 + (longlong)(int)param_1 * 4) >> 0x10;
    local_24 = *(undefined4 *)((ulonglong)uVar3 + 0xc28 + lVar1);
    local_28 = param_1;
    FUN_18006d410((int *)(lVar1 + 0x1e68),(undefined8 *)&local_28);
    *(undefined4 *)((ulonglong)uVar3 + 0xc28 + lVar1) = param_2;
    return;
  }
  cVar2 = FUN_180054c00((float *)"Calling PushStyleVar() variant with wrong type!",(float *)in_RDX,
                        param_3,param_4);
  if (cVar2 != '\0') {
    FID_conflict__assert
              (L"(0) && \"Calling PushStyleVar() variant with wrong type!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0xd6e);
  }
  return;
}


void FUN_180062e60(uint param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  wchar_t *in_RDX;
  float *in_R8;
  ulonglong in_R9;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;

  lVar1 = DAT_180115c10;
  if (0x21 < param_1) {
    in_R8 = (float *)0xd63;
    in_RDX =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"idx >= 0 && idx < ImGuiStyleVar_COUNT",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0xd63);
  }
  if (((&DAT_1800dfb11)[(longlong)(int)param_1 * 4] == '\b') &&
     ((char)*(uint *)(&DAT_1800dfb10 + (longlong)(int)param_1 * 4) == '\x02')) {
    uVar3 = *(uint *)(&DAT_1800dfb10 + (longlong)(int)param_1 * 4) >> 0x10;
    local_24 = *(undefined4 *)((ulonglong)uVar3 + 0xc28 + lVar1);
    local_20 = *(undefined4 *)((ulonglong)uVar3 + 0xc2c + lVar1);
    local_28 = param_1;
    FUN_18006d410((int *)(lVar1 + 0x1e68),(undefined8 *)&local_28);
    *(undefined4 *)((ulonglong)uVar3 + 0xc28 + lVar1) = param_2;
    return;
  }
  cVar2 = FUN_180054c00((float *)"Calling PushStyleVar() variant with wrong type!",(float *)in_RDX,
                        in_R8,in_R9);
  if (cVar2 != '\0') {
    FID_conflict__assert
              (L"(0) && \"Calling PushStyleVar() variant with wrong type!\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0xd7c);
  }
  return;
}


void FUN_180062f50(wchar_t *param_1,wchar_t *param_2,float *param_3,float *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;

  pcVar4 = DAT_180115c10;
  if (*DAT_180115c10 == '\0') {
    param_3 = (float *)0x165c;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    param_1 = L"g.Initialized";
    FID_conflict__assert
              (L"g.Initialized",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x165c);
  }
  if (*(int *)(pcVar4 + 0x12f4) != *(int *)(pcVar4 + 0x12f0)) {
    FUN_180053d20(param_1,param_2,param_3,param_4);
  }
  if (*(int *)(pcVar4 + 0x12f8) != *(int *)(pcVar4 + 0x12f0)) {
    *(int *)(pcVar4 + 0x12f8) = *(int *)(pcVar4 + 0x12f0);
    pcVar4[0xcc] = '\0';
    pcVar4[0xcd] = '\0';
    pcVar4[0xce] = '\0';
    pcVar4[0xcf] = '\0';
    lVar7 = *(longlong *)(pcVar4 + 0x2618);
    lVar10 = (longlong)*(int *)(pcVar4 + 0x2610) * 0x20 + lVar7;
    if ((longlong)*(int *)(pcVar4 + 0x2610) * 0x20 != 0) {
      do {
        if (*(int *)(lVar7 + 4) == 4) {
          (**(code **)(lVar7 + 0x10))(pcVar4);
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar10);
    }
    plVar8 = *(longlong **)(pcVar4 + 0x1ef0);
    plVar1 = plVar8 + *(int *)(pcVar4 + 0x1ee8);
    if (((longlong)*(int *)(pcVar4 + 0x1ee8) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar10 = *plVar8;
        if (DAT_180115c10 == (char *)0x0) {
          FID_conflict__assert
                    (L"GImGui != 0 && \"No current context. Did you call ImGui::CreateContext() and ImGui::SetCurrentContext() ?\""
                     ,
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x12ec);
        }
        pcVar5 = DAT_180115c10;
        *(int **)(lVar10 + 0x90) = (int *)(lVar10 + 0x60);
        *(longlong *)(lVar10 + 0x98) = lVar10 + 0xa0;
        FUN_18006dda0((int *)(lVar10 + 0x60),0);
        FUN_18006dda0(*(int **)(lVar10 + 0x98),0);
        *(undefined1 *)(lVar10 + 0x50) = 1;
        *(undefined8 *)(lVar10 + 0x54) = 0;
        *(undefined4 *)(lVar10 + 0x5c) = 0;
        *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar10 + 8);
        *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x10);
        *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(pcVar5 + 0x50);
        *(longlong *)(lVar10 + 0x88) = lVar10;
        if (*(longlong *)(lVar10 + 0x40) != 0) {
          pauVar6 = FUN_180057910(lVar10,0,"##Background");
          FUN_18006f280(lVar10 + 0x50,*(int **)(lVar10 + 0x90),(int *)pauVar6);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    FUN_180063660();
    lVar10 = *(longlong *)(pcVar4 + 0x20d8);
    if ((lVar10 == 0) || ((*(uint *)(lVar10 + 0x14) & 0x2000) != 0)) {
      lVar7 = 0;
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(pcVar4 + 0x20e8);
      }
    }
    else {
      lVar7 = *(longlong *)(lVar10 + 0x3b0);
      lVar10 = *(longlong *)(pcVar4 + 0x20e8);
    }
    plVar8 = *(longlong **)(pcVar4 + 0x1350);
    plVar1 = plVar8 + *(int *)(pcVar4 + 0x1348);
    if (((longlong)*(int *)(pcVar4 + 0x1348) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar3 = *plVar8;
        if ((((*(char *)(lVar3 + 0xcc) != '\0') && (*(char *)(lVar3 + 0xd4) == '\0')) &&
            ((*(uint *)(lVar3 + 0x14) >> 0x18 & 1) == 0)) && ((lVar3 != lVar7 && (lVar3 != lVar10)))
           ) {
          FUN_18004c880(lVar3,*(uint *)(lVar3 + 0x14) >> 0x19 & 1);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    if (((lVar7 != 0) && (*(char *)(lVar7 + 0xcc) != '\0')) && (*(char *)(lVar7 + 0xd4) == '\0')) {
      FUN_18004c880(lVar7,*(uint *)(lVar7 + 0x14) >> 0x19 & 1);
    }
    if (((lVar10 != 0) && (*(char *)(lVar10 + 0xcc) != '\0')) && (*(char *)(lVar10 + 0xd4) == '\0'))
    {
      FUN_18004c880(lVar10,*(uint *)(lVar10 + 0x14) >> 0x19 & 1);
    }
    if ((pcVar4[0x5f] != '\0') && (*(uint *)(pcVar4 + 0x2360) != 0xffffffff)) {
      FUN_180063cd0(*(undefined8 *)(pcVar4 + 0xe8),*(float *)(pcVar4 + 0xd14),
                    *(uint *)(pcVar4 + 0x2360),0xffffffff,0xff000000,0x30000000);
    }
    pcVar4[0xc4] = '\0';
    pcVar4[0xc5] = '\0';
    pcVar4[0xc6] = '\0';
    pcVar4[199] = '\0';
    pcVar4[200] = '\0';
    pcVar4[0xc9] = '\0';
    pcVar4[0xca] = '\0';
    pcVar4[0xcb] = '\0';
    plVar8 = *(longlong **)(pcVar4 + 0x1ef0);
    plVar1 = plVar8 + *(int *)(pcVar4 + 0x1ee8);
    if (((longlong)*(int *)(pcVar4 + 0x1ee8) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar10 = *plVar8;
        FUN_1800561d0((longlong *)(lVar10 + 0x90));
        if (*(longlong *)(lVar10 + 0x48) != 0) {
          pauVar6 = FUN_180057910(lVar10,1,"##Foreground");
          FUN_18006f280(lVar10 + 0x50,*(int **)(lVar10 + 0x90),(int *)pauVar6);
        }
        if (*(int *)(lVar10 + 0x60) != *(int *)(lVar10 + 0x54)) {
          FID_conflict__assert
                    (L"draw_data->CmdLists.Size == draw_data->CmdListsCount",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x1690);
        }
        puVar9 = *(undefined8 **)(lVar10 + 0x68);
        puVar2 = puVar9 + *(int *)(lVar10 + 0x60);
        for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
          FUN_18007a650((uint *)*puVar9);
        }
        plVar8 = plVar8 + 1;
        *(int *)(pcVar4 + 0xc4) = *(int *)(pcVar4 + 0xc4) + *(int *)(lVar10 + 0x5c);
        *(int *)(pcVar4 + 200) = *(int *)(pcVar4 + 200) + *(int *)(lVar10 + 0x58);
      } while (plVar8 != plVar1);
    }
    lVar7 = *(longlong *)(pcVar4 + 0x2618);
    lVar10 = (longlong)*(int *)(pcVar4 + 0x2610) * 0x20 + lVar7;
    if ((longlong)*(int *)(pcVar4 + 0x2610) * 0x20 != 0) {
      do {
        if (*(int *)(lVar7 + 4) == 5) {
          (**(code **)(lVar7 + 0x10))(pcVar4,lVar7);
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar10);
    }
  }
  return;
}


void FUN_180063350(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int iVar15;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;

  lVar5 = DAT_180115c10;
  if ((param_2 & 0xff000000) != 0) {
    if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    local_98 = *(undefined8 *)(**(longlong **)(lVar5 + 0x1ef0) + 8);
    uVar2 = *(undefined8 *)(**(longlong **)(lVar5 + 0x1ef0) + 0x10);
    local_90 = (float)uVar2 + (float)local_98;
    fStack_8c = (float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)local_98 >> 0x20);
    piVar4 = *(int **)(*(longlong *)(param_1 + 0x3b0) + 0x2c0);
    if (*piVar4 == 0) {
      FUN_18006f180(piVar4);
    }
    local_res18 = local_90 + 1.0;
    local_res20 = (float)local_98 - 1.0;
    local_res1c = fStack_8c + 1.0;
    local_res24 = local_98._4_4_ - 1.0;
    FUN_180076360(piVar4,&local_res20,&local_res18,'\0');
    FUN_180071360(piVar4,(float *)&local_98,&local_90,param_2,0.0,0);
    if (*piVar4 < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    lVar5 = *(longlong *)(piVar4 + 2);
    lVar12 = ((longlong)*piVar4 + -1) * 0x40;
    puVar13 = (undefined8 *)(lVar12 + 0x24 + lVar5);
    local_64 = *puVar13;
    iVar3 = *(int *)(lVar12 + 0x20 + lVar5);
    puVar1 = (undefined8 *)(lVar12 + 0x30 + lVar5);
    uVar2 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = *(undefined8 *)(lVar12 + lVar5);
    uVar8 = ((undefined8 *)(lVar12 + lVar5))[1];
    puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar5);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    uStack_5c = (undefined4)puVar13[1];
    uStack_58 = (undefined4)uVar2;
    uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_50 = uVar6;
    if (iVar3 != 6) {
      FID_conflict__assert
                (L"cmd.ElemCount == 6",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x15ba);
    }
    if (*piVar4 < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x849);
    }
    iVar15 = *piVar4;
    iVar11 = iVar15 + -1;
    *piVar4 = iVar11;
    if (iVar11 == 0) {
      if (piVar4[1] == 0) {
        if (iVar15 < 8) {
          iVar15 = 8;
        }
        FUN_18006d790(piVar4,iVar15);
      }
      lVar5 = *(longlong *)(piVar4 + 2);
      lVar12 = (longlong)*piVar4 * 0x40;
      *(undefined8 *)(lVar12 + lVar5) = uVar7;
      ((undefined8 *)(lVar12 + lVar5))[1] = uVar8;
      puVar13 = (undefined8 *)(lVar12 + 0x10 + lVar5);
      *puVar13 = uVar9;
      puVar13[1] = uVar10;
      *(int *)(lVar12 + 0x20 + lVar5) = iVar3;
      puVar13 = (undefined8 *)(lVar12 + 0x24 + lVar5);
      *puVar13 = local_64;
      puVar13[1] = CONCAT44(uStack_58,uStack_5c);
      puVar13 = (undefined8 *)(lVar12 + 0x30 + lVar5);
      *puVar13 = uVar2;
      puVar13[1] = uVar6;
    }
    else {
      uVar14 = *(ulonglong *)(piVar4 + 2);
      if ((longlong)iVar11 * 0x40 + uVar14 < uVar14) {
        FID_conflict__assert
                  (L"it >= Data && it <= Data + Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x84e);
      }
      uVar14 = uVar14 - *(longlong *)(piVar4 + 2);
      iVar11 = piVar4[1];
      if (*piVar4 == iVar11) {
        iVar15 = *piVar4 + 1;
        if (iVar11 == 0) {
          iVar11 = 8;
        }
        else {
          iVar11 = iVar11 / 2 + iVar11;
        }
        if (iVar15 < iVar11) {
          iVar15 = iVar11;
        }
        FUN_18006d790(piVar4,iVar15);
      }
      if ((longlong)uVar14 >> 6 < (longlong)*piVar4) {
        puVar13 = (undefined8 *)(*(longlong *)(piVar4 + 2) + (uVar14 & 0xffffffffffffffc0));
        FUN_1800d1c20(puVar13 + 8,puVar13,((longlong)*piVar4 - ((longlong)uVar14 >> 6)) * 0x40);
      }
      lVar5 = *(longlong *)(piVar4 + 2);
      uVar14 = uVar14 & 0xffffffffffffffc0;
      *(undefined8 *)(lVar5 + uVar14) = uVar7;
      ((undefined8 *)(lVar5 + uVar14))[1] = uVar8;
      puVar13 = (undefined8 *)(lVar5 + 0x10 + uVar14);
      *puVar13 = uVar9;
      puVar13[1] = uVar10;
      *(int *)(lVar5 + 0x20 + uVar14) = iVar3;
      puVar13 = (undefined8 *)(lVar5 + 0x24 + uVar14);
      *puVar13 = local_64;
      puVar13[1] = CONCAT44(uStack_58,uStack_5c);
      puVar13 = (undefined8 *)(lVar5 + 0x30 + uVar14);
      *puVar13 = uVar2;
      puVar13[1] = uVar6;
    }
    *piVar4 = *piVar4 + 1;
    FUN_18006f180(piVar4);
    FUN_180076030(piVar4);
  }
  return;
}


void FUN_180063660(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res8;
  float local_resc;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;

  lVar3 = DAT_180115c10;
  uVar7 = *(int *)(DAT_180115c10 + 0x1eb8) - 1;
  if (-1 < (int)uVar7) {
    do {
      lVar8 = *(longlong *)(*(longlong *)(DAT_180115c10 + 0x1ec0) + 8 + (ulonglong)uVar7 * 0x38);
      if ((((lVar8 != 0) && ((*(uint *)(lVar8 + 0x14) & 0x8000000) != 0)) &&
          (*(char *)(lVar8 + 0xcc) != '\0')) && (*(char *)(lVar8 + 0xd4) == '\0'))
      goto LAB_1800636c2;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  lVar8 = 0;
LAB_1800636c2:
  if ((0.0 < *(float *)(DAT_180115c10 + 0x2110)) || (0.0 < *(float *)(DAT_180115c10 + 0x20f4))) {
    lVar4 = *(longlong *)(DAT_180115c10 + 0x20e0);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0xcc) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (lVar8 == 0) {
      if (bVar2) {
        local_28 = *(undefined8 *)(DAT_180115c10 + 0x1084);
        uStack_20 = CONCAT44(*(float *)(DAT_180115c10 + 0x1090) *
                             *(float *)(DAT_180115c10 + 0x2110) * *(float *)(DAT_180115c10 + 0xc28),
                             *(undefined4 *)(DAT_180115c10 + 0x108c));
        uVar7 = FUN_180051e70((float *)&local_28);
        FUN_180063350(lVar4,uVar7);
        lVar8 = *(longlong *)(lVar3 + 0x20e0);
        lVar4 = FUN_1800571f0();
        fVar10 = (float)*(undefined8 *)(lVar8 + 0x28);
        fVar11 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x28) >> 0x20);
        fVar9 = *(float *)(lVar3 + 0x10c0);
        fVar12 = fVar10 - fVar9;
        fVar13 = fVar11 - fVar9;
        fVar10 = (float)*(undefined8 *)(lVar8 + 0x30) + fVar10 + fVar9;
        fVar11 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x30) >> 0x20) + fVar11 + fVar9;
        uStack_20 = CONCAT44(fVar11,fVar10);
        local_28 = CONCAT44(fVar13,fVar12);
        if ((*(float *)(lVar4 + 0x10) <= fVar10 - fVar12) &&
           (*(float *)(lVar4 + 0x14) <= fVar11 - fVar13)) {
          fVar9 = -fVar9 - 1.0;
          local_28 = CONCAT44(fVar13 - fVar9,fVar12 - fVar9);
          uStack_20 = CONCAT44(fVar11 + fVar9,fVar10 + fVar9);
        }
        if (**(int **)(lVar8 + 0x2c0) == 0) {
          FUN_18006f180(*(int **)(lVar8 + 0x2c0));
        }
        local_res8 = *(float *)(lVar4 + 0x10) + *(float *)(lVar4 + 8);
        local_resc = *(float *)(lVar4 + 0x14) + *(float *)(lVar4 + 0xc);
        FUN_180076360(*(int **)(lVar8 + 0x2c0),(float *)(lVar4 + 8),&local_res8,'\0');
        local_18 = *(float *)(DAT_180115c10 + 0x1074);
        uStack_14 = *(undefined4 *)(DAT_180115c10 + 0x1078);
        uStack_10 = *(undefined4 *)(DAT_180115c10 + 0x107c);
        fStack_c = *(float *)(DAT_180115c10 + 0x1080) *
                   *(float *)(lVar3 + 0x20f4) * *(float *)(DAT_180115c10 + 0xc28);
        uVar7 = FUN_180051e70(&local_18);
        FUN_180071260(*(int **)(lVar8 + 0x2c0),(float *)&local_28,(float *)&uStack_20,uVar7,
                      *(float *)(lVar8 + 0x60),0,3.0);
        FUN_180076030(*(int **)(lVar8 + 0x2c0));
      }
    }
    else {
      uVar5 = FUN_180055e50(lVar8);
      uVar7 = (uint)uVar5;
      uVar5 = uVar5 & 0xffffffff;
      lVar4 = lVar8;
      while (-1 < (int)uVar7) {
        if (*(int *)(lVar3 + 0x1348) <= (int)uVar5) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x1350) + uVar5 * 8);
        if ((*(uint *)(lVar1 + 0x14) >> 0x18 & 1) == 0) {
          lVar6 = lVar1;
          if (*(longlong *)(lVar1 + 0x3b0) != lVar8) {
            while (lVar6 != lVar8) {
              lVar6 = *(longlong *)(lVar6 + 0x3a8);
              if (lVar6 == 0) goto LAB_180063955;
            }
          }
          if (((*(char *)(lVar1 + 0xcc) != '\0') && (*(char *)(lVar1 + 0xd4) == '\0')) &&
             (((byte)(*(uint *)(lVar1 + 0x14) >> 0x19) & 1) <=
              ((byte)((uint)*(undefined4 *)(lVar8 + 0x14) >> 0x19) & 1))) {
            lVar4 = lVar1;
          }
        }
        uVar7 = (int)uVar5 - 1;
        uVar5 = (ulonglong)uVar7;
      }
LAB_180063955:
      uVar7 = *(uint *)(lVar8 + 0x1d4);
      fVar9 = *(float *)(lVar3 + 0x2110) * *(float *)(DAT_180115c10 + 0xc28);
      if (fVar9 < 1.0) {
        uVar7 = (int)(longlong)((float)(uVar7 >> 0x18) * fVar9) << 0x18 | uVar7 & 0xffffff;
      }
      FUN_180063350(lVar4,uVar7);
    }
  }
  return;
}


void FUN_1800639d0(undefined8 param_1,undefined8 param_2,uint param_3,char param_4,float param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;

  lVar3 = DAT_180115c10;
  lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
  local_58 = param_2;
  local_50 = param_1;
  FUN_180071360(*(int **)(lVar2 + 0x2c0),(float *)&local_50,(float *)&local_58,param_3,param_5,0);
  if ((param_4 != '\0') && (fVar1 = *(float *)(lVar3 + 0xc74), 0.0 < fVar1)) {
    local_40 = (float)local_50 + 1.0;
    local_38 = *(float *)(DAT_180115c10 + 0xd84);
    uStack_34 = *(undefined4 *)(DAT_180115c10 + 0xd88);
    uStack_30 = *(undefined4 *)(DAT_180115c10 + 0xd8c);
    fStack_2c = *(float *)(DAT_180115c10 + 0xd90) * *(float *)(DAT_180115c10 + 0xc28);
    local_48 = (float)local_58 + 1.0;
    local_44 = local_58._4_4_ + 1.0;
    local_3c = local_50._4_4_ + 1.0;
    uVar4 = FUN_180051e70(&local_38);
    FUN_180071260(*(int **)(lVar2 + 0x2c0),&local_40,&local_48,uVar4,param_5,0,fVar1);
    local_38 = *(float *)(DAT_180115c10 + 0xd74);
    uStack_34 = *(undefined4 *)(DAT_180115c10 + 0xd78);
    uStack_30 = *(undefined4 *)(DAT_180115c10 + 0xd7c);
    fStack_2c = *(float *)(DAT_180115c10 + 0xd80) * *(float *)(DAT_180115c10 + 0xc28);
    uVar4 = FUN_180051e70(&local_38);
    FUN_180071260(*(int **)(lVar2 + 0x2c0),(float *)&local_50,(float *)&local_58,uVar4,param_5,0,
                  fVar1);
  }
  return;
}


void FUN_180063b80(undefined8 param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  float local_res20;
  float local_res24;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;

  fVar1 = *(float *)(DAT_180115c10 + 0xc74);
  if (0.0 < fVar1) {
    local_40 = *(float *)(DAT_180115c10 + 0xd84);
    uStack_3c = *(undefined4 *)(DAT_180115c10 + 0xd88);
    uStack_38 = *(undefined4 *)(DAT_180115c10 + 0xd8c);
    local_50._0_4_ = (float)param_1;
    local_48 = (float)local_50 + 1.0;
    fStack_34 = *(float *)(DAT_180115c10 + 0xd90) * *(float *)(DAT_180115c10 + 0xc28);
    lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
    local_58._0_4_ = (float)param_2;
    local_res20 = (float)local_58 + 1.0;
    local_58._4_4_ = (float)((ulonglong)param_2 >> 0x20);
    local_res24 = local_58._4_4_ + 1.0;
    local_50._4_4_ = (float)((ulonglong)param_1 >> 0x20);
    local_44 = local_50._4_4_ + 1.0;
    local_58 = param_2;
    local_50 = param_1;
    uVar3 = FUN_180051e70(&local_40);
    FUN_180071260(*(int **)(lVar2 + 0x2c0),&local_48,&local_res20,uVar3,param_3,0,fVar1);
    local_40 = *(float *)(DAT_180115c10 + 0xd74);
    uStack_3c = *(undefined4 *)(DAT_180115c10 + 0xd78);
    uStack_38 = *(undefined4 *)(DAT_180115c10 + 0xd7c);
    fStack_34 = *(float *)(DAT_180115c10 + 0xd80) * *(float *)(DAT_180115c10 + 0xc28);
    uVar3 = FUN_180051e70(&local_40);
    FUN_180071260(*(int **)(lVar2 + 0x2c0),(float *)&local_50,(float *)&local_58,uVar3,param_3,0,
                  fVar1);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180063cd0(undefined8 param_1,float param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [32];
  longlong *plVar10;
  undefined1 auStackY_1b8 [32];
  float local_178;
  float local_174;
  float local_170 [2];
  uint local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118 [2];
  undefined8 uStack_110;
  float local_108 [2];
  undefined8 uStack_100;
  ulonglong local_f8;

  lVar5 = DAT_180115c10;
  local_f8 = DAT_180112300 ^ (ulonglong)auStackY_1b8;
  if (10 < param_3) {
    param_3 = 0;
  }
  plVar10 = *(longlong **)(DAT_180115c10 + 0x1ef0);
  pbVar2 = *(byte **)(*(longlong *)(DAT_180115c10 + 0x10e0) + 0x40);
  plVar1 = plVar10 + *(int *)(DAT_180115c10 + 0x1ee8);
  if (((longlong)*(int *)(DAT_180115c10 + 0x1ee8) & 0x1fffffffffffffffU) != 0) {
    local_158._4_4_ = (float)((ulonglong)param_1 >> 0x20);
    fVar7 = local_158._4_4_;
    local_158._0_4_ = (float)param_1;
    fVar6 = (float)local_158;
    local_168 = param_4;
    local_158 = param_1;
    do {
      lVar3 = *plVar10;
      local_160 = 0;
      local_170[0] = 0.0;
      local_170[1] = 0.0;
      local_118[0] = 0.0;
      local_118[1] = 0.0;
      uStack_110 = 0;
      local_108[0] = 0.0;
      local_108[1] = 0.0;
      uStack_100 = 0;
      uVar8 = FUN_180075300(pbVar2,param_3,&local_160,local_170,local_118,local_108);
      if ((char)uVar8 != '\0') {
        local_174 = fVar7 - local_160._4_4_;
        local_178 = fVar6 - (float)local_160;
        if ((((local_174 < *(float *)(lVar3 + 0xc) + *(float *)(lVar3 + 0x14)) &&
             (*(float *)(lVar3 + 0xc) < (local_170[1] + 2.0) * param_2 + local_174)) &&
            (local_178 < *(float *)(lVar3 + 8) + *(float *)(lVar3 + 0x10))) &&
           (*(float *)(lVar3 + 8) < (local_170[0] + 2.0) * param_2 + local_178)) {
          pauVar9 = FUN_180057910(lVar3,1,"##Foreground");
          lVar3 = *(longlong *)(pbVar2 + 8);
          FUN_1800765a0((int *)pauVar9,lVar3);
          local_150 = (local_170[0] + 1.0) * param_2 + local_178;
          local_14c = (local_170[1] + 0.0) * param_2 + local_174;
          local_148 = param_2 + local_178;
          local_144 = param_2 * 0.0 + local_174;
          FUN_1800700b0((int *)pauVar9,lVar3,(undefined8 *)&local_148,(undefined8 *)&local_150,
                        (undefined8 *)local_108,&uStack_100,param_6);
          local_134 = param_2 * 0.0 + local_174;
          local_140 = (local_170[0] + 2.0) * param_2 + local_178;
          local_13c = (local_170[1] + 0.0) * param_2 + local_174;
          local_138 = param_2 + param_2 + local_178;
          FUN_1800700b0((int *)pauVar9,lVar3,(undefined8 *)&local_138,(undefined8 *)&local_140,
                        (undefined8 *)local_108,&uStack_100,param_6);
          local_130 = local_170[0] * param_2 + local_178;
          local_12c = local_170[1] * param_2 + local_174;
          FUN_1800700b0((int *)pauVar9,lVar3,(undefined8 *)&local_178,(undefined8 *)&local_130,
                        (undefined8 *)local_108,&uStack_100,param_5);
          local_128 = local_170[0] * param_2 + local_178;
          local_124 = local_170[1] * param_2 + local_174;
          FUN_1800700b0((int *)pauVar9,lVar3,(undefined8 *)&local_178,(undefined8 *)&local_128,
                        (undefined8 *)local_118,&uStack_110,local_168);
          if (param_3 - 8 < 2) {
            uVar4 = FUN_1800bbb20((ulonglong)(uint)((float)*(double *)(lVar5 + 0x12e8) * 5.0),
                                  6.2831855);
            local_120 = param_2 * 14.0 + local_178;
            local_11c = param_2 * -1.0 + local_174;
            FUN_180075910((longlong)pauVar9,&local_120,param_2 * 6.0,(float)uVar4,
                          (float)uVar4 + 5.183628,0);
            FUN_180070440((int *)pauVar9,*(undefined8 **)(pauVar9[2] + 0x18),
                          *(uint *)(pauVar9[2] + 0x10),local_168,0,param_2 * 3.0);
            *(undefined4 *)(pauVar9[2] + 0x10) = 0;
          }
          FUN_1800760a0((int *)pauVar9);
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
  }
  return;
}


void FUN_180064200(float *param_1,int param_2,ulonglong param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;

  if ((((param_2 == *(int *)(DAT_180115c10 + 0x1efc)) &&
       ((*(char *)(DAT_180115c10 + 0x1ef8) != '\0' || ((param_3 & 4) != 0)))) &&
      ((param_2 != *(int *)(DAT_180115c10 + 0x1d88) ||
       ((*(byte *)(DAT_180115c10 + 0x1d8c) & 2) == 0)))) &&
     (lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8), *(char *)(lVar1 + 0x179) == '\0')) {
    if ((param_3 & 8) == 0) {
      fVar4 = *(float *)(DAT_180115c10 + 0xc70);
    }
    else {
      fVar4 = 0.0;
    }
    fStack_34 = param_1[1];
    if (param_1[1] <= *(float *)(lVar1 + 0x25c)) {
      fStack_34 = *(float *)(lVar1 + 0x25c);
    }
    local_38 = *param_1;
    if (*param_1 <= *(float *)(lVar1 + 600)) {
      local_38 = *(float *)(lVar1 + 600);
    }
    fStack_2c = param_1[3];
    if (*(float *)(lVar1 + 0x264) <= param_1[3]) {
      fStack_2c = *(float *)(lVar1 + 0x264);
    }
    fStack_30 = param_1[2];
    if (*(float *)(lVar1 + 0x260) <= param_1[2]) {
      fStack_30 = *(float *)(lVar1 + 0x260);
    }
    if ((param_3 & 2) != 0) {
      local_28 = *(float *)(DAT_180115c10 + 0x1064);
      uStack_24 = *(undefined4 *)(DAT_180115c10 + 0x1068);
      uStack_20 = *(undefined4 *)(DAT_180115c10 + 0x106c);
      fStack_1c = *(float *)(DAT_180115c10 + 0x1070) * *(float *)(DAT_180115c10 + 0xc28);
      uVar3 = FUN_180051e70(&local_28);
      FUN_180071260(*(int **)(lVar1 + 0x2c0),&local_38,&fStack_30,uVar3,fVar4,0,2.0);
      return;
    }
    local_38 = local_38 - 4.0;
    fStack_34 = fStack_34 - 4.0;
    fStack_30 = fStack_30 + 4.0;
    fStack_2c = fStack_2c + 4.0;
    if ((((local_38 < *(float *)(lVar1 + 600)) || (fStack_34 < *(float *)(lVar1 + 0x25c))) ||
        (*(float *)(lVar1 + 0x260) < fStack_30)) || (*(float *)(lVar1 + 0x264) < fStack_2c)) {
      bVar2 = false;
      FUN_180076360(*(int **)(lVar1 + 0x2c0),&local_38,&fStack_30,'\0');
    }
    else {
      bVar2 = true;
    }
    local_28 = *(float *)(DAT_180115c10 + 0x1064);
    uStack_24 = *(undefined4 *)(DAT_180115c10 + 0x1068);
    uStack_20 = *(undefined4 *)(DAT_180115c10 + 0x106c);
    fStack_1c = *(float *)(DAT_180115c10 + 0x1070) * *(float *)(DAT_180115c10 + 0xc28);
    uVar3 = FUN_180051e70(&local_28);
    FUN_180071260(*(int **)(lVar1 + 0x2c0),&local_38,&fStack_30,uVar3,fVar4,0,2.0);
    if (!bVar2) {
      FUN_180076030(*(int **)(lVar1 + 0x2c0));
    }
  }
  return;
}


void FUN_180064450(undefined8 param_1,byte *param_2,byte *param_3,char param_4)

{
  int iVar1;
  char *_Str;
  char *_Str_00;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  size_t sVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  ulonglong uVar10;
  byte *pbVar11;
  undefined *puVar12;
  float *pfVar13;
  undefined8 local_38;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;

  local_38 = param_1;
  if (param_4 == '\0') {
    pbVar11 = param_3;
    if (param_3 == (byte *)0x0) {
      sVar6 = strlen((char *)param_2);
      pbVar11 = param_2 + sVar6;
    }
    param_3 = pbVar11;
  }
  else {
    pbVar8 = (byte *)0xffffffffffffffff;
    if (param_3 != (byte *)0x0) {
      pbVar8 = param_3;
    }
    pbVar11 = param_2;
    if (param_2 < pbVar8) {
      do {
        if ((*pbVar11 == 0) || ((*pbVar11 == 0x23 && (pbVar11[1] == 0x23)))) break;
        pbVar11 = pbVar11 + 1;
      } while (pbVar11 < pbVar8);
    }
  }
  lVar2 = DAT_180115c10;
  if (param_2 != pbVar11) {
    local_30 = *(float *)(DAT_180115c10 + 0xd24);
    uStack_2c = *(undefined4 *)(DAT_180115c10 + 0xd28);
    uStack_28 = *(undefined4 *)(DAT_180115c10 + 0xd2c);
    fStack_24 = *(float *)(DAT_180115c10 + 0xd30) * *(float *)(DAT_180115c10 + 0xc28);
    fVar4 = (float)FUN_180051e70(&local_30);
    pfVar13 = (float *)&local_38;
    piVar9 = *(int **)(lVar2 + 0x10b8);
    FUN_1800716c0(*(int **)(*(longlong *)(lVar2 + 0x13a8) + 0x2c0),piVar9,*(float *)(lVar2 + 0x10c0)
                  ,pfVar13,fVar4,param_2,pbVar11,0.0,(float *)0x0);
    lVar3 = DAT_180115c10;
    if (*(char *)(lVar2 + 0x2678) != '\0') {
      _Str = *(char **)(DAT_180115c10 + 0x26a0);
      _Str_00 = *(char **)(DAT_180115c10 + 0x26a8);
      lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
      *(undefined8 *)(DAT_180115c10 + 0x26a8) = 0;
      *(undefined8 *)(lVar3 + 0x26a0) = 0;
      pbVar8 = param_2;
      if (pbVar11 == (byte *)0x0) {
        while (((pbVar11 = pbVar8, pbVar11 != (byte *)0xffffffffffffffff && (*pbVar11 != 0)) &&
               ((*pbVar11 != 0x23 || (pbVar11[1] != 0x23))))) {
          pbVar8 = pbVar11 + 1;
        }
      }
      fVar4 = *(float *)(lVar3 + 0x26b0);
      *(float *)(lVar3 + 0x26b0) = local_38._4_4_;
      if (*(float *)(lVar3 + 0xc6c) + fVar4 + 1.0 < local_38._4_4_) {
        FUN_18005b370(0x1800e6bf8,piVar9,param_3,pfVar13);
        *(undefined1 *)(lVar3 + 0x26b4) = 1;
      }
      if (_Str != (char *)0x0) {
        sVar6 = strlen(_Str);
        FUN_18005b180((longlong)&local_38,_Str,_Str + sVar6,(ulonglong)pfVar13);
      }
      iVar1 = *(int *)(lVar2 + 0x1a0);
      iVar5 = *(int *)(lVar3 + 0x26b8);
      if (iVar1 < iVar5) {
        *(int *)(lVar3 + 0x26b8) = iVar1;
        iVar5 = iVar1;
      }
      iVar1 = *(int *)(lVar2 + 0x1a0);
      while( true ) {
        pbVar7 = (byte *)FUN_1800d1a80((char *)param_2,10,(char *)(pbVar11 + -(longlong)param_2));
        pbVar8 = pbVar11;
        if (pbVar7 != (byte *)0x0) {
          pbVar8 = pbVar7;
        }
        if ((param_2 == pbVar8) && (pbVar8 == pbVar11)) break;
        pfVar13 = (float *)(ulonglong)(uint)((int)pbVar8 - (int)param_2);
        puVar12 = &DAT_1800d8c40;
        uVar10 = 1;
        if (*(char *)(lVar3 + 0x26b4) != '\0') {
          uVar10 = (ulonglong)(uint)((iVar1 - iVar5) * 4);
        }
        FUN_18005b370(0x1800e6c00,uVar10,&DAT_1800d8c40,pfVar13);
        *(undefined1 *)(lVar3 + 0x26b4) = 0;
        if (*pbVar8 == 10) {
          FUN_18005b370(0x1800e6bf8,uVar10,puVar12,pfVar13);
          *(undefined1 *)(lVar3 + 0x26b4) = 1;
        }
        if (pbVar8 == pbVar11) break;
        param_2 = pbVar8 + 1;
      }
      if (_Str_00 != (char *)0x0) {
        sVar6 = strlen(_Str_00);
        FUN_18005b180((longlong)&local_38,_Str_00,_Str_00 + sVar6,(ulonglong)pfVar13);
      }
    }
  }
  return;
}


void FUN_180064710(float *param_1,float *param_2,byte *param_3,byte *param_4,ulonglong *param_5,
                  float *param_6,float *param_7)

{
  int iVar1;
  char *_Str;
  char *_Str_00;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  size_t sVar6;
  byte *pbVar7;
  float *pfVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined *puVar13;

  lVar2 = DAT_180115c10;
  pbVar12 = (byte *)0xffffffffffffffff;
  if (param_4 != (byte *)0x0) {
    pbVar12 = param_4;
  }
  pbVar11 = param_3;
  if (param_3 < pbVar12) {
    while (*pbVar11 != 0) {
      if (((*pbVar11 == 0x23) && (pbVar11[1] == 0x23)) ||
         (pbVar11 = pbVar11 + 1, pbVar12 <= pbVar11)) break;
    }
  }
  if ((int)pbVar11 == (int)param_3) {
    return;
  }
  pfVar8 = param_1;
  pbVar12 = param_3;
  FUN_180064970(*(int **)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x2c0),param_1,param_2,param_3,
                pbVar11,param_5,param_6,param_7);
  lVar4 = DAT_180115c10;
  if (*(char *)(lVar2 + 0x2678) == '\0') {
    return;
  }
  _Str = *(char **)(DAT_180115c10 + 0x26a0);
  _Str_00 = *(char **)(DAT_180115c10 + 0x26a8);
  lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
  *(undefined8 *)(DAT_180115c10 + 0x26a8) = 0;
  *(undefined8 *)(lVar4 + 0x26a0) = 0;
  pbVar10 = param_3;
  if (pbVar11 == (byte *)0x0) {
    while (((pbVar11 = pbVar10, pbVar11 != (byte *)0xffffffffffffffff && (*pbVar11 != 0)) &&
           ((*pbVar11 != 0x23 || (pbVar11[1] != 0x23))))) {
      pbVar10 = pbVar11 + 1;
    }
  }
  if (param_1 != (float *)0x0) {
    if (param_1[1] <= *(float *)(lVar4 + 0x26b0) + *(float *)(lVar4 + 0xc6c) + 1.0) {
      if (param_1 == (float *)0x0) goto LAB_18006486d;
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    *(float *)(lVar4 + 0x26b0) = param_1[1];
    if (bVar3) {
      FUN_18005b370(0x1800e6bf8,pfVar8,param_2,pbVar12);
      *(undefined1 *)(lVar4 + 0x26b4) = 1;
    }
  }
LAB_18006486d:
  if (_Str != (char *)0x0) {
    sVar6 = strlen(_Str);
    FUN_18005b180((longlong)param_1,_Str,_Str + sVar6,(ulonglong)pbVar12);
  }
  iVar1 = *(int *)(lVar2 + 0x1a0);
  iVar5 = *(int *)(lVar4 + 0x26b8);
  if (iVar1 < iVar5) {
    *(int *)(lVar4 + 0x26b8) = iVar1;
    iVar5 = iVar1;
  }
  iVar1 = *(int *)(lVar2 + 0x1a0);
  while( true ) {
    pbVar7 = (byte *)FUN_1800d1a80((char *)param_3,10,(char *)(pbVar11 + -(longlong)param_3));
    pbVar10 = pbVar11;
    if (pbVar7 != (byte *)0x0) {
      pbVar10 = pbVar7;
    }
    if ((param_3 == pbVar10) && (pbVar10 == pbVar11)) break;
    pbVar12 = (byte *)(ulonglong)(uint)((int)pbVar10 - (int)param_3);
    puVar13 = &DAT_1800d8c40;
    uVar9 = 1;
    if (*(char *)(lVar4 + 0x26b4) != '\0') {
      uVar9 = (ulonglong)(uint)((iVar1 - iVar5) * 4);
    }
    FUN_18005b370(0x1800e6c00,uVar9,&DAT_1800d8c40,pbVar12);
    *(undefined1 *)(lVar4 + 0x26b4) = 0;
    if (*pbVar10 == 10) {
      FUN_18005b370(0x1800e6bf8,uVar9,puVar13,pbVar12);
      *(undefined1 *)(lVar4 + 0x26b4) = 1;
    }
    if (pbVar10 == pbVar11) break;
    param_3 = pbVar10 + 1;
  }
  if (_Str_00 != (char *)0x0) {
    sVar6 = strlen(_Str_00);
    FUN_18005b180((longlong)param_1,_Str_00,_Str_00 + sVar6,(ulonglong)pbVar12);
  }
  return;
}


void FUN_180064970(int *param_1,float *param_2,float *param_3,byte *param_4,byte *param_5,
                  ulonglong *param_6,float *param_7,float *param_8)

{
  float *pfVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  ulonglong uVar7;
  undefined8 local_res10;
  float *pfVar8;
  float local_84;
  undefined8 local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;

  local_res10 = *(undefined8 *)param_2;
  if (param_6 == (ulonglong *)0x0) {
    if (param_4 == param_5) {
      local_84 = *(float *)(DAT_180115c10 + 0x10c0);
      fVar4 = 0.0;
    }
    else {
      FUN_180071ff0(*(int **)(DAT_180115c10 + 0x10b8),(float *)&param_6,
                    *(float *)(DAT_180115c10 + 0x10c0),3.4028235e+38,0.0,param_4,param_5,
                    (undefined8 *)0x0);
      local_84 = param_6._4_4_;
      fVar4 = (float)(int)(param_6._0_4_ + 0.99999);
    }
    uVar7 = (ulonglong)(uint)fVar4;
    pfVar8 = &local_84;
  }
  else {
    uVar7 = *param_6;
    pfVar8 = (float *)((longlong)&local_80 + 4);
    local_80 = uVar7;
  }
  pfVar5 = param_8 + 2;
  pfVar1 = param_8;
  if (param_8 == (float *)0x0) {
    pfVar5 = param_3;
    pfVar1 = param_2;
  }
  fVar4 = local_res10._4_4_;
  if ((*pfVar5 <= (float)uVar7 + (float)local_res10) || (pfVar5[1] <= *pfVar8 + local_res10._4_4_))
  {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (param_8 != (float *)0x0) {
    if (((float)local_res10 < *pfVar1) || (local_res10._4_4_ < pfVar1[1])) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    bVar2 = (bool)(bVar2 | bVar3);
  }
  if (0.0 < *param_7) {
    fVar6 = ((*param_3 - (float)local_res10) - (float)uVar7) * *param_7 + (float)local_res10;
    if ((float)local_res10 <= fVar6) {
      local_res10._0_4_ = fVar6;
    }
  }
  if (0.0 < param_7[1]) {
    fVar6 = ((param_3[1] - fVar4) - *pfVar8) * param_7[1] + fVar4;
    if (fVar4 <= fVar6) {
      fVar4 = fVar6;
    }
    local_res10 = CONCAT44(fVar4,(float)local_res10);
  }
  if (bVar2) {
    local_78 = *pfVar1;
    local_74 = pfVar1[1];
    local_6c = pfVar5[1];
    local_68 = *(float *)(DAT_180115c10 + 0xd24);
    uStack_64 = *(undefined4 *)(DAT_180115c10 + 0xd28);
    uStack_60 = *(undefined4 *)(DAT_180115c10 + 0xd2c);
    fStack_5c = *(float *)(DAT_180115c10 + 0xd30) * *(float *)(DAT_180115c10 + 0xc28);
    local_70 = *pfVar5;
    fVar4 = (float)FUN_180051e70(&local_68);
    pfVar8 = &local_78;
  }
  else {
    local_68 = *(float *)(DAT_180115c10 + 0xd24);
    uStack_64 = *(undefined4 *)(DAT_180115c10 + 0xd28);
    uStack_60 = *(undefined4 *)(DAT_180115c10 + 0xd2c);
    fStack_5c = *(float *)(DAT_180115c10 + 0xd30) * *(float *)(DAT_180115c10 + 0xc28);
    fVar4 = (float)FUN_180051e70(&local_68);
    pfVar8 = (float *)0x0;
  }
  FUN_1800716c0(param_1,(int *)0x0,0.0,(float *)&local_res10,fVar4,param_4,param_5,0.0,pfVar8);
  return;
}


void FUN_180064be0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                  byte *param_6,byte *param_7,undefined8 *param_8)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int *piVar4;
  char *_Str;
  char *_Str_00;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  size_t sVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 **ppuVar16;
  undefined *puVar17;
  undefined8 **ppuVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float local_res18 [4];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  ulonglong local_d8;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined8 local_c8 [18];

  lVar5 = DAT_180115c10;
  pbVar14 = param_7;
  if (param_7 == (byte *)0x0) {
    pbVar14 = param_6;
    if (param_6 != (byte *)0xffffffffffffffff) {
      while (*pbVar14 != 0) {
        if (((*pbVar14 == 0x23) && (pbVar14[1] == 0x23)) ||
           (pbVar14 = pbVar14 + 1, pbVar14 == (byte *)0xffffffffffffffff)) break;
      }
    }
  }
  if (param_8 == (undefined8 *)0x0) {
    if (param_6 == pbVar14) {
      local_e4 = *(float *)(DAT_180115c10 + 0x10c0);
      local_e8 = 0.0;
    }
    else {
      FUN_180071ff0(*(int **)(DAT_180115c10 + 0x10b8),(float *)&param_7,
                    *(float *)(DAT_180115c10 + 0x10c0),3.4028235e+38,0.0,param_6,pbVar14,
                    (undefined8 *)0x0);
      local_e4 = param_7._4_4_;
      local_e8 = (float)(int)(param_7._0_4_ + 0.99999);
    }
    pfVar9 = &local_e8;
  }
  else {
    pfVar9 = (float *)local_c8;
    local_c8[0] = *param_8;
  }
  local_d8 = *(ulonglong *)pfVar9;
  fVar20 = *param_3;
  pfVar9 = param_2;
  ppuVar18 = (undefined8 **)param_6;
  if ((float)local_d8 <= fVar20 - *param_2) {
    param_8._4_4_ = param_3[1];
    ppuVar16 = &param_8;
    param_7 = (byte *)0x0;
    param_8._0_4_ = param_4;
    FUN_180064970((int *)param_1,param_2,(float *)ppuVar16,param_6,pbVar14,&local_d8,
                  (float *)&param_7,(float *)0x0);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xe);
    piVar4 = *(int **)(lVar3 + 0x10);
    fVar1 = *(float *)(lVar3 + 0x1c);
    fVar2 = *(float *)(lVar3 + 0x18);
    if (fVar20 <= param_5) {
      fVar20 = param_5;
    }
    param_7 = (byte *)0x0;
    fVar21 = fVar1 * (float)piVar4[0x16];
    fVar20 = (fVar20 - fVar21) - *param_2;
    if (fVar20 <= 1.0) {
      fVar20 = 1.0;
    }
    pfVar10 = FUN_180071ff0(piVar4,local_res18,fVar2,fVar20,0.0,param_6,pbVar14,&param_7);
    fVar20 = *pfVar10;
    bVar19 = false;
    if (param_7 == param_6) {
      if (param_7 < pbVar14) {
        param_7 = (byte *)((ulonglong)param_7 & 0xffffffff00000000);
        iVar6 = FUN_180058410((uint *)&param_7,param_6,pbVar14);
        param_7 = param_6 + iVar6;
        pfVar10 = FUN_180071ff0(piVar4,local_res18,fVar2,3.4028235e+38,0.0,param_6,param_7,
                                (undefined8 *)0x0);
        fVar20 = *pfVar10;
      }
      bVar19 = param_7 == param_6;
    }
    if (param_6 <= param_7 && !bVar19) {
      do {
        pbVar12 = param_7;
        pbVar15 = param_7 + -1;
        if ((param_7[-1] != 0x20) && (param_7[-1] != 9)) break;
        param_7 = pbVar15;
        pfVar10 = FUN_180071ff0(piVar4,local_res18,fVar2,3.4028235e+38,0.0,pbVar15,pbVar12,
                                (undefined8 *)0x0);
        fVar20 = fVar20 - *pfVar10;
      } while (param_6 < param_7);
    }
    local_dc = param_3[1];
    ppuVar16 = (undefined8 **)&local_e0;
    local_res18[0] = 0.0;
    local_res18[1] = 0.0;
    local_e0 = param_4;
    FUN_180064970((int *)param_1,param_2,(float *)ppuVar16,param_6,param_7,&local_d8,local_res18,
                  (float *)0x0);
    param_8._0_4_ = (float)(int)(fVar20 + *param_2);
    param_8._4_4_ = (float)(int)param_2[1];
    if ((fVar21 + param_8._0_4_ <= param_5) && (iVar6 = 0, 0 < *(short *)((longlong)piVar4 + 0x52)))
    {
      do {
        local_d8 = *(ulonglong *)(DAT_180115c10 + 0xd24);
        uStack_d0 = *(undefined4 *)(DAT_180115c10 + 0xd2c);
        fStack_cc = *(float *)(DAT_180115c10 + 0xd30) * *(float *)(DAT_180115c10 + 0xc28);
        uVar7 = FUN_180051e70((float *)&local_d8);
        ppuVar18 = &param_8;
        pfVar9 = param_1;
        FUN_180077b80((longlong)piVar4,(int *)param_1,fVar2,ppuVar18,uVar7,
                      *(ushort *)(piVar4 + 0x15));
        iVar6 = iVar6 + 1;
        param_8._0_4_ = param_8._0_4_ + fVar1 * (float)piVar4[0x17];
      } while (iVar6 < *(short *)((longlong)piVar4 + 0x52));
    }
  }
  lVar3 = DAT_180115c10;
  if (*(char *)(lVar5 + 0x2678) != '\0') {
    _Str = *(char **)(DAT_180115c10 + 0x26a0);
    _Str_00 = *(char **)(DAT_180115c10 + 0x26a8);
    lVar5 = *(longlong *)(DAT_180115c10 + 0x13a8);
    *(undefined8 *)(DAT_180115c10 + 0x26a8) = 0;
    *(undefined8 *)(lVar3 + 0x26a0) = 0;
    if (pbVar14 == (byte *)0x0) {
      pbVar14 = param_6;
      if (param_6 != (byte *)0xffffffffffffffff) {
        do {
          if ((*pbVar14 == 0) || ((*pbVar14 == 0x23 && (pbVar14[1] == 0x23)))) break;
          pbVar14 = pbVar14 + 1;
        } while (pbVar14 != (byte *)0xffffffffffffffff);
      }
    }
    fVar20 = *(float *)(lVar3 + 0x26b0);
    fVar1 = param_2[1];
    *(float *)(lVar3 + 0x26b0) = param_2[1];
    if (*(float *)(lVar3 + 0xc6c) + fVar20 + 1.0 < fVar1) {
      FUN_18005b370(0x1800e6bf8,pfVar9,ppuVar16,ppuVar18);
      *(undefined1 *)(lVar3 + 0x26b4) = 1;
    }
    if (_Str != (char *)0x0) {
      sVar11 = strlen(_Str);
      FUN_18005b180((longlong)param_2,_Str,_Str + sVar11,(ulonglong)ppuVar18);
    }
    iVar6 = *(int *)(lVar5 + 0x1a0);
    iVar8 = *(int *)(lVar3 + 0x26b8);
    if (iVar6 < iVar8) {
      *(int *)(lVar3 + 0x26b8) = iVar6;
      iVar8 = iVar6;
    }
    iVar6 = *(int *)(lVar5 + 0x1a0);
    while( true ) {
      pbVar12 = (byte *)FUN_1800d1a80((char *)param_6,10,(char *)(pbVar14 + -(longlong)param_6));
      pbVar15 = pbVar14;
      if (pbVar12 != (byte *)0x0) {
        pbVar15 = pbVar12;
      }
      if ((param_6 == pbVar15) && (pbVar15 == pbVar14)) break;
      ppuVar18 = (undefined8 **)(ulonglong)(uint)((int)pbVar15 - (int)param_6);
      puVar17 = &DAT_1800d8c40;
      uVar13 = 1;
      if (*(char *)(lVar3 + 0x26b4) != '\0') {
        uVar13 = (ulonglong)(uint)((iVar6 - iVar8) * 4);
      }
      FUN_18005b370(0x1800e6c00,uVar13,&DAT_1800d8c40,ppuVar18);
      *(undefined1 *)(lVar3 + 0x26b4) = 0;
      if (*pbVar15 == 10) {
        FUN_18005b370(0x1800e6bf8,uVar13,puVar17,ppuVar18);
        *(undefined1 *)(lVar3 + 0x26b4) = 1;
      }
      if (pbVar15 == pbVar14) break;
      param_6 = pbVar15 + 1;
    }
    if (_Str_00 != (char *)0x0) {
      sVar11 = strlen(_Str_00);
      FUN_18005b180((longlong)param_2,_Str_00,_Str_00 + sVar11,(ulonglong)ppuVar18);
    }
  }
  return;
}


void FUN_1800651d0(undefined8 param_1,byte *param_2,byte *param_3,float param_4)

{
  int iVar1;
  char *_Str;
  char *_Str_00;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  size_t sVar6;
  byte *pbVar7;
  int *piVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined *puVar11;
  float *pfVar12;
  undefined8 local_48;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;

  pbVar10 = param_3;
  local_48 = param_1;
  if (param_3 == (byte *)0x0) {
    sVar6 = strlen((char *)param_2);
    param_3 = param_2 + sVar6;
  }
  lVar2 = DAT_180115c10;
  if (param_2 != param_3) {
    local_40 = *(float *)(DAT_180115c10 + 0xd24);
    uStack_3c = *(undefined4 *)(DAT_180115c10 + 0xd28);
    uStack_38 = *(undefined4 *)(DAT_180115c10 + 0xd2c);
    fStack_34 = *(float *)(DAT_180115c10 + 0xd30) * *(float *)(DAT_180115c10 + 0xc28);
    fVar4 = (float)FUN_180051e70(&local_40);
    pfVar12 = (float *)&local_48;
    piVar8 = *(int **)(lVar2 + 0x10b8);
    FUN_1800716c0(*(int **)(*(longlong *)(lVar2 + 0x13a8) + 0x2c0),piVar8,*(float *)(lVar2 + 0x10c0)
                  ,pfVar12,fVar4,param_2,param_3,param_4,(float *)0x0);
    lVar3 = DAT_180115c10;
    if (*(char *)(lVar2 + 0x2678) != '\0') {
      _Str = *(char **)(DAT_180115c10 + 0x26a0);
      _Str_00 = *(char **)(DAT_180115c10 + 0x26a8);
      lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
      *(undefined8 *)(DAT_180115c10 + 0x26a8) = 0;
      *(undefined8 *)(lVar3 + 0x26a0) = 0;
      if ((param_3 == (byte *)0x0) && (param_3 = param_2, param_2 != (byte *)0xffffffffffffffff)) {
        while (*param_3 != 0) {
          if (((*param_3 == 0x23) && (param_3[1] == 0x23)) ||
             (param_3 = param_3 + 1, param_3 == (byte *)0xffffffffffffffff)) break;
        }
      }
      fVar4 = *(float *)(lVar3 + 0x26b0);
      *(float *)(lVar3 + 0x26b0) = local_48._4_4_;
      if (*(float *)(lVar3 + 0xc6c) + fVar4 + 1.0 < local_48._4_4_) {
        FUN_18005b370(0x1800e6bf8,piVar8,pbVar10,pfVar12);
        *(undefined1 *)(lVar3 + 0x26b4) = 1;
      }
      if (_Str != (char *)0x0) {
        sVar6 = strlen(_Str);
        FUN_18005b180((longlong)&local_48,_Str,_Str + sVar6,(ulonglong)pfVar12);
      }
      iVar1 = *(int *)(lVar2 + 0x1a0);
      iVar5 = *(int *)(lVar3 + 0x26b8);
      if (iVar1 < iVar5) {
        *(int *)(lVar3 + 0x26b8) = iVar1;
        iVar5 = iVar1;
      }
      iVar1 = *(int *)(lVar2 + 0x1a0);
      while( true ) {
        pbVar7 = (byte *)FUN_1800d1a80((char *)param_2,10,(char *)(param_3 + -(longlong)param_2));
        pbVar10 = param_3;
        if (pbVar7 != (byte *)0x0) {
          pbVar10 = pbVar7;
        }
        if ((param_2 == pbVar10) && (pbVar10 == param_3)) break;
        pfVar12 = (float *)(ulonglong)(uint)((int)pbVar10 - (int)param_2);
        puVar11 = &DAT_1800d8c40;
        uVar9 = 1;
        if (*(char *)(lVar3 + 0x26b4) != '\0') {
          uVar9 = (ulonglong)(uint)((iVar1 - iVar5) * 4);
        }
        FUN_18005b370(0x1800e6c00,uVar9,&DAT_1800d8c40,pfVar12);
        *(undefined1 *)(lVar3 + 0x26b4) = 0;
        if (*pbVar10 == 10) {
          FUN_18005b370(0x1800e6bf8,uVar9,puVar11,pfVar12);
          *(undefined1 *)(lVar3 + 0x26b4) = 1;
        }
        if (pbVar10 == param_3) break;
        param_2 = pbVar10 + 1;
      }
      if (_Str_00 != (char *)0x0) {
        sVar6 = strlen(_Str_00);
        FUN_18005b180((longlong)&local_48,_Str_00,_Str_00 + sVar6,(ulonglong)pfVar12);
      }
    }
  }
  return;
}


void FUN_180065460(longlong param_1,float *param_2,byte param_3,char param_4,int param_5,
                  longlong param_6,float param_7)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  longlong lVar14;
  char cVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_res8;
  float local_resc;
  undefined8 local_118;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float local_104;
  undefined1 local_100;
  undefined2 local_ff;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined2 local_fb;
  undefined1 local_f9;
  undefined1 local_f8;
  undefined2 local_f7;
  undefined1 local_f5;
  undefined1 local_f4;
  undefined2 uStack_f3;
  undefined1 uStack_f1;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined1 local_ec;
  undefined2 local_eb;
  undefined1 local_e9;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  uint local_d8;
  uint local_d4;
  float local_d0;
  float local_cc;

  lVar6 = DAT_180115c10;
  uVar10 = *(uint *)(param_1 + 0x14);
  if (*(short *)(param_1 + 0xda) != 0) {
    FID_conflict__assert
              (L"window->BeginCount == 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1a84);
  }
  fVar2 = *(float *)(param_1 + 0x60);
  fVar20 = *(float *)(param_1 + 100);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)(param_1 + 0x170) = 1;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    uVar16 = 0;
    if (-1 < (char)uVar10) {
      if ((*(uint *)(param_1 + 0x14) & 0x6000000) == 0) {
        lVar14 = 0x11c;
        if ((*(uint *)(param_1 + 0x14) >> 0x18 & 1) != 0) {
          lVar14 = 300;
        }
      }
      else {
        lVar14 = 0x13c;
      }
      puVar1 = (undefined8 *)(lVar14 + 0xc28 + DAT_180115c10);
      local_118 = *puVar1;
      fStack_110 = *(float *)(puVar1 + 1);
      fStack_10c = *(float *)((longlong)puVar1 + 0xc) * *(float *)(DAT_180115c10 + 0xc28);
      uVar11 = FUN_180051e70((float *)&local_118);
      if ((*(byte *)(lVar6 + 0x1dd8) & 0x40) != 0) {
        fVar19 = *(float *)(lVar6 + 0x1e40);
        if (0.0 <= fVar19) {
          fVar18 = 1.0;
          if (fVar19 <= 1.0) {
            fVar18 = fVar19;
          }
        }
        else {
          fVar18 = 0.0;
        }
        uVar11 = (int)(fVar18 * 255.0 + 0.5) << 0x18 | uVar11 & 0xffffff;
      }
      local_res8 = (float)*(undefined8 *)(param_1 + 0x28);
      local_resc = (float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
      uVar12 = 0xc0;
      if ((uVar10 & 1) != 0) {
        uVar12 = 0;
      }
      local_118 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) + local_resc,
                           (float)*(undefined8 *)(param_1 + 0x30) + local_res8);
      local_res8 = local_res8 + 0.0;
      local_resc = local_resc + *(float *)(param_1 + 0x68);
      FUN_180071360(*(int **)(param_1 + 0x2c0),(float *)&local_res8,(float *)&local_118,uVar11,fVar2
                    ,uVar12);
    }
    if ((uVar10 & 1) == 0) {
      puVar1 = (undefined8 *)(DAT_180115c10 + 0xd24 + ((ulonglong)param_3 + 10) * 0x10);
      local_118 = *puVar1;
      fStack_110 = *(float *)(puVar1 + 1);
      fStack_10c = *(float *)((longlong)puVar1 + 0xc) * *(float *)(DAT_180115c10 + 0xc28);
      uVar11 = FUN_180051e70((float *)&local_118);
      FUN_180071360(*(int **)(param_1 + 0x2c0),param_2,param_2 + 2,uVar11,fVar2,0x30);
    }
    if ((uVar10 >> 10 & 1) != 0) {
      fVar19 = *(float *)(param_1 + 0x28);
      fVar18 = *(float *)(param_1 + 0x2c);
      fStack_10c = fVar18 + *(float *)(param_1 + 0x68);
      fVar21 = fStack_10c;
      if (fStack_10c <= fVar18) {
        fVar21 = fVar18;
      }
      fVar17 = fVar19 + *(float *)(param_1 + 0x30);
      fVar18 = fVar18 + *(float *)(param_1 + 0x34);
      fStack_110 = fVar19 + *(float *)(param_1 + 0x38);
      fStack_10c = fStack_10c + *(float *)(param_1 + 0x6c);
      local_118 = CONCAT44(fVar21,fVar19);
      if (fVar17 <= fStack_110) {
        fStack_110 = fVar17;
      }
      if (fVar18 <= fStack_10c) {
        fStack_10c = fVar18;
      }
      if ((uVar10 & 1) == 0) {
        fVar19 = 0.0;
      }
      else {
        fVar19 = fVar2;
      }
      local_e8 = *(float *)(DAT_180115c10 + 0xdf4);
      fStack_e4 = *(float *)(DAT_180115c10 + 0xdf8);
      uStack_e0 = *(undefined4 *)(DAT_180115c10 + 0xdfc);
      fStack_dc = *(float *)(DAT_180115c10 + 0xe00) * *(float *)(DAT_180115c10 + 0xc28);
      uVar11 = FUN_180051e70(&local_e8);
      FUN_180071360(*(int **)(param_1 + 0x2c0),(float *)&local_118,&fStack_110,uVar11,fVar19,0x30);
      fVar19 = *(float *)(lVar6 + 0xc74);
      if ((0.0 < fVar19) && (fStack_10c < *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c)))
      {
        local_e8 = *(float *)(DAT_180115c10 + 0xd74);
        fStack_e4 = *(float *)(DAT_180115c10 + 0xd78);
        uStack_e0 = *(undefined4 *)(DAT_180115c10 + 0xd7c);
        fStack_dc = *(float *)(DAT_180115c10 + 0xd80) * *(float *)(DAT_180115c10 + 0xc28);
        local_res8 = fStack_110 - fVar20 * 0.5;
        local_resc = fStack_10c - 0.0;
        local_104 = fStack_10c + 0.0;
        local_108 = (float)local_118 + fVar20 * 0.5;
        uVar11 = FUN_180051e70(&local_e8);
        FUN_180070300(*(int **)(param_1 + 0x2c0),(undefined8 *)&local_108,(undefined8 *)&local_res8,
                      uVar11,fVar19);
      }
    }
    if (*(char *)(param_1 + 200) != '\0') {
      FUN_18009b8e0(0);
    }
    if (*(char *)(param_1 + 0xc9) != '\0') {
      FUN_18009b8e0(1);
    }
    if (param_4 == '\0') {
      *(undefined4 *)(param_1 + 0x170) = 0;
    }
    else {
      if (((uVar10 & 2) == 0) && (0 < param_5)) {
        do {
          local_d4 = *(uint *)(param_6 + uVar16 * 4);
          if ((local_d4 & 0xff000000) != 0) {
            fVar19 = *(float *)(param_1 + 0x28);
            fVar18 = *(float *)(param_1 + 0x2c);
            local_d8 = (uint)uVar16 & 1;
            fVar21 = (float)(int)(fVar20 * 0.5 + 0.5);
            fVar19 = ((fVar19 + *(float *)(param_1 + 0x30)) - fVar19) *
                     (float)(&DAT_1800dfc40)[uVar16 * 6] + fVar19;
            local_res8._0_1_ = SUB41(fVar21,0);
            uVar7 = (undefined1)local_res8;
            local_res8._1_2_ = (undefined2)((uint)fVar21 >> 8);
            uVar8 = local_res8._1_2_;
            fVar18 = ((fVar18 + *(float *)(param_1 + 0x34)) - fVar18) *
                     (float)(&DAT_1800dfc44)[uVar16 * 6] + fVar18;
            local_res8._3_1_ = (undefined1)((uint)fVar21 >> 0x18);
            uVar9 = local_res8._3_1_;
            if ((uVar16 & 1) == 0) {
              local_100 = param_7._0_1_;
              local_ff = param_7._1_2_;
              local_fd = param_7._3_1_;
              local_fc = (undefined1)local_res8;
              local_fb = local_res8._1_2_;
              local_f9 = local_res8._3_1_;
              fVar17 = param_7;
            }
            else {
              local_f4 = param_7._0_1_;
              uStack_f3 = param_7._1_2_;
              local_f8 = (undefined1)local_res8;
              local_f7 = local_res8._1_2_;
              local_f5 = local_res8._3_1_;
              uStack_f1 = param_7._3_1_;
              fVar17 = fVar21;
            }
            pfVar13 = (float *)&local_fc;
            if ((uVar16 & 1) != 0) {
              pfVar13 = (float *)&local_f4;
            }
            local_d0 = fVar17 * (float)(&DAT_1800dfc48)[uVar16 * 6] + fVar19;
            local_cc = (float)(&DAT_1800dfc4c)[uVar16 * 6] * *pfVar13 + fVar18;
            local_res8 = fVar21;
            FUN_180010420(*(longlong *)(param_1 + 0x2c0),(undefined8 *)&local_d0);
            if (local_d8 == 0) {
              local_ec = param_7._0_1_;
              local_eb = param_7._1_2_;
              local_f0 = uVar7;
              local_ef = uVar8;
              local_ed = uVar9;
              local_e9 = param_7._3_1_;
              fVar17 = fVar21;
            }
            else {
              local_108 = param_7;
              local_104 = fVar21;
              fVar17 = param_7;
            }
            pfVar13 = (float *)&local_ec;
            if (local_d8 != 0) {
              pfVar13 = &local_104;
            }
            local_e8 = fVar17 * (float)(&DAT_1800dfc48)[uVar16 * 6] + fVar19;
            fStack_e4 = (float)(&DAT_1800dfc4c)[uVar16 * 6] * *pfVar13 + fVar18;
            FUN_180010420(*(longlong *)(param_1 + 0x2c0),(undefined8 *)&local_e8);
            local_118 = CONCAT44((fVar21 + fVar2) * (float)(&DAT_1800dfc4c)[uVar16 * 6] + fVar18,
                                 (fVar21 + fVar2) * (float)(&DAT_1800dfc48)[uVar16 * 6] + fVar19);
            FUN_180075cb0(*(longlong *)(param_1 + 0x2c0),(float *)&local_118,fVar2,
                          (&DAT_1800dfc50)[uVar16 * 6],(&DAT_1800dfc54)[uVar16 * 6]);
            piVar5 = *(int **)(param_1 + 0x2c0);
            FUN_18006eb40(piVar5,*(longlong *)(piVar5 + 0x16),piVar5[0x14],local_d4);
            piVar5[0x14] = 0;
          }
          uVar10 = (uint)uVar16 + 1;
          uVar16 = (ulonglong)uVar10;
        } while ((int)uVar10 < param_5);
      }
      lVar6 = DAT_180115c10;
      fVar2 = *(float *)(param_1 + 100);
      local_118 = *(undefined8 *)(DAT_180115c10 + 0xd74);
      fStack_110 = *(float *)(DAT_180115c10 + 0xd7c);
      fStack_10c = *(float *)(DAT_180115c10 + 0xd80) * *(float *)(DAT_180115c10 + 0xc28);
      uVar10 = FUN_180051e70((float *)&local_118);
      if (0.0 < fVar2) {
        if ((*(byte *)(param_1 + 0x14) & 0x80) == 0) {
          local_res8 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28);
          local_resc = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c);
          FUN_180071260(*(int **)(param_1 + 0x2c0),(float *)(param_1 + 0x28),(float *)&local_res8,
                        uVar10,*(float *)(param_1 + 0x60),0,fVar2);
        }
        else {
          if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
            FUN_180065dc0(param_1,1,uVar10,fVar2);
          }
          if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
            FUN_180065dc0(param_1,3,uVar10,fVar2);
          }
        }
      }
      cVar4 = *(char *)(param_1 + 0xd8);
      if ((cVar4 != -1) || (*(char *)(param_1 + 0xd9) != -1)) {
        cVar15 = *(char *)(param_1 + 0xd9);
        fVar20 = 2.0;
        if (2.0 <= *(float *)(param_1 + 100)) {
          fVar20 = *(float *)(param_1 + 100);
        }
        lVar14 = 700;
        if (cVar15 != -1) {
          lVar14 = 0x2cc;
        }
        puVar1 = (undefined8 *)(lVar14 + 0xc28 + DAT_180115c10);
        local_118 = *puVar1;
        fStack_110 = *(float *)(puVar1 + 1);
        fStack_10c = *(float *)((longlong)puVar1 + 0xc) * *(float *)(DAT_180115c10 + 0xc28);
        uVar11 = FUN_180051e70((float *)&local_118);
        if (cVar15 == -1) {
          cVar15 = cVar4;
        }
        FUN_180065dc0(param_1,(int)cVar15,uVar11,fVar20);
      }
      if ((0.0 < *(float *)(lVar6 + 0xc74)) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) {
        local_resc = (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x68)) - 1.0;
        local_res8 = (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30)) - fVar2 * 0.5;
        local_118 = CONCAT44(local_resc,fVar2 * 0.5 + *(float *)(param_1 + 0x28));
        FUN_180070300(*(int **)(param_1 + 0x2c0),&local_118,(undefined8 *)&local_res8,uVar10,
                      *(float *)(lVar6 + 0xc74));
      }
      *(undefined4 *)(param_1 + 0x170) = 0;
    }
  }
  else {
    uVar3 = *(undefined4 *)(lVar6 + 0xc74);
    *(float *)(lVar6 + 0xc74) = fVar20;
    if ((param_3 == 0) || (lVar14 = 0x1ac, *(char *)(lVar6 + 0x1ef8) == '\0')) {
      lVar14 = 0x1bc;
    }
    puVar1 = (undefined8 *)(lVar14 + 0xc28 + DAT_180115c10);
    local_118 = *puVar1;
    fStack_110 = *(float *)(puVar1 + 1);
    fStack_10c = *(float *)((longlong)puVar1 + 0xc) * *(float *)(DAT_180115c10 + 0xc28);
    uVar10 = FUN_180051e70((float *)&local_118);
    FUN_1800639d0(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 2),uVar10,'\x01',fVar2);
    *(undefined4 *)(lVar6 + 0xc74) = uVar3;
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  return;
}


void FUN_180065dc0(longlong param_1,int param_2,uint param_3,float param_4)

{
  float fVar1;
  int *piVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;

  fVar1 = *(float *)(param_1 + 0x60);
  lVar3 = (longlong)param_2 * 0x1c;
  FUN_180057500(&local_78,param_1,param_2,fVar1,0.0);
  fVar4 = local_70 - local_78;
  fVar5 = local_6c - local_74;
  local_res8 = fVar4 * *(float *)(&DAT_1800dfca8 + lVar3) + local_78 + 0.5 +
               fVar1 * *(float *)(&DAT_1800dfca0 + lVar3);
  local_resc = fVar5 * *(float *)(&DAT_1800dfcac + lVar3) + local_74 + 0.5 +
               fVar1 * *(float *)(&DAT_1800dfca4 + lVar3);
  FUN_180075910(*(longlong *)(param_1 + 0x2c0),&local_res8,fVar1,
                *(float *)(&DAT_1800dfcb8 + lVar3) - 0.7853982,*(float *)(&DAT_1800dfcb8 + lVar3),0)
  ;
  local_res8 = fVar4 * *(float *)(&DAT_1800dfcb0 + lVar3) + local_78 + 0.5 +
               fVar1 * *(float *)(&DAT_1800dfca0 + lVar3);
  local_resc = fVar5 * *(float *)(&DAT_1800dfcb4 + lVar3) + local_74 + 0.5 +
               fVar1 * *(float *)(&DAT_1800dfca4 + lVar3);
  FUN_180075910(*(longlong *)(param_1 + 0x2c0),&local_res8,fVar1,*(float *)(&DAT_1800dfcb8 + lVar3),
                *(float *)(&DAT_1800dfcb8 + lVar3) + 0.7853982,0);
  piVar2 = *(int **)(param_1 + 0x2c0);
  FUN_180070440(piVar2,*(undefined8 **)(piVar2 + 0x16),piVar2[0x14],param_3,0,param_4);
  piVar2[0x14] = 0;
  return;
}


void FUN_180065fd0(longlong *param_1,float *param_2,byte *param_3,undefined1 *param_4)

{
  float *pfVar1;
  bool bVar2;
  byte *pbVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  char *pcVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8;
  float local_resc;
  undefined8 local_res10;
  float local_res18 [2];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;

  lVar4 = DAT_180115c10;
  local_res8 = *(float *)((longlong)param_1 + 0x14);
  if ((((uint)local_res8 & 0x20) == 0) && (*(int *)(DAT_180115c10 + 0xc54) != -1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar13 = *(uint *)(DAT_180115c10 + 0x1d48);
  *(uint *)(DAT_180115c10 + 0x1d48) = uVar13 | 4;
  *(undefined4 *)(param_1 + 0x2e) = 1;
  fVar17 = *(float *)(lVar4 + 0xc68);
  fVar19 = *(float *)(lVar4 + 0x10c0);
  local_res18[0] = 0.0;
  local_res18[1] = 0.0;
  local_res10 = 0;
  fVar18 = fVar17;
  if (param_4 != (undefined1 *)0x0) {
    local_res18[1] = *(float *)(lVar4 + 0xc6c) + param_2[1];
    local_res18[0] = (param_2[2] - fVar17) - fVar19;
    fVar18 = fVar19 + *(float *)(lVar4 + 0xc80) + fVar17;
  }
  puVar12 = &DAT_1800df710;
  if (bVar2) {
    if (*(int *)(lVar4 + 0xc54) == 1) {
      local_res10 = CONCAT44(param_2[1] + *(float *)(lVar4 + 0xc6c),(param_2[2] - fVar18) - fVar19);
      fVar18 = fVar19 + *(float *)(lVar4 + 0xc80) + fVar18;
    }
    if (*(int *)(lVar4 + 0xc54) == 0) {
      local_res10 = CONCAT44(param_2[1] + *(float *)(lVar4 + 0xc6c),fVar17 + *param_2);
      fVar17 = fVar19 + *(float *)(lVar4 + 0xc80) + fVar17;
    }
    if ((int)param_1[0x21] < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    puVar12 = &DAT_1800df710;
    pcVar8 = "#COLLAPSE";
    bVar5 = 0x23;
    uVar11 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
    uVar9 = uVar11;
    do {
      pcVar8 = pcVar8 + 1;
      if (((bVar5 == 0x23) && (*pcVar8 == 0x23)) && (pcVar8[1] == 0x23)) {
        uVar9 = uVar11;
      }
      uVar7 = (ulonglong)bVar5;
      bVar5 = *pcVar8;
      uVar9 = uVar9 >> 8 ^ *(uint *)(&DAT_1800df710 + (uVar9 & 0xff ^ uVar7) * 4);
    } while (bVar5 != 0);
    uVar9 = ~uVar9;
    if (*(uint *)(*param_1 + 0x1400) == uVar9) {
      puVar12 = (undefined *)0x0;
      FUN_180052900(uVar9,0xb,"#COLLAPSE",0);
    }
    cVar6 = FUN_1800901f0(uVar9,&local_res10);
    if (cVar6 != '\0') {
      *(undefined1 *)(param_1 + 0x1a) = 1;
    }
  }
  if (param_4 != (undefined1 *)0x0) {
    if ((int)param_1[0x21] < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    pcVar8 = "#CLOSE";
    bVar5 = 0x23;
    uVar9 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
    puVar12 = (undefined *)(ulonglong)uVar9;
    puVar10 = puVar12;
    do {
      pcVar8 = pcVar8 + 1;
      if (((bVar5 == 0x23) && (*pcVar8 == 0x23)) && (pcVar8[1] == 0x23)) {
        puVar10 = (undefined *)(ulonglong)uVar9;
      }
      uVar7 = (ulonglong)bVar5;
      bVar5 = *pcVar8;
      uVar11 = (uint)((ulonglong)puVar10 >> 8) ^
               *(uint *)(&DAT_1800df710 + ((ulonglong)puVar10 & 0xff ^ uVar7) * 4);
      puVar10 = (undefined *)(ulonglong)uVar11;
    } while (bVar5 != 0);
    uVar11 = ~uVar11;
    if (*(uint *)(*param_1 + 0x1400) == uVar11) {
      puVar12 = (undefined *)0x0;
      FUN_180052900(uVar11,0xb,"#CLOSE",0);
    }
    cVar6 = FUN_18008ff10(uVar11,local_res18);
    if (cVar6 != '\0') {
      *param_4 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(uint *)(lVar4 + 0x1d48) = uVar13;
  uVar13 = (uint)local_res8 & 0x40000;
  pbVar3 = param_3;
  if (uVar13 == 0) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = fVar19 * 0.8;
  }
  for (; ((pbVar3 != (byte *)0xffffffffffffffff && (*pbVar3 != 0)) &&
         ((*pbVar3 != 0x23 || (pbVar3[1] != 0x23)))); pbVar3 = pbVar3 + 1) {
  }
  if (param_3 == pbVar3) {
    local_res8 = 0.0;
    local_resc = *(float *)(DAT_180115c10 + 0x10c0);
  }
  else {
    FUN_180071ff0(*(int **)(DAT_180115c10 + 0x10b8),&local_res8,*(float *)(DAT_180115c10 + 0x10c0),
                  3.4028235e+38,-1.0,param_3,pbVar3,(undefined8 *)0x0);
    local_res8 = (float)(int)(local_res8 + 0.99999);
  }
  local_res8 = local_res8 + fVar19;
  local_resc = local_resc + 0.0;
  if (*(float *)(lVar4 + 0xc68) < fVar17) {
    fVar17 = fVar17 + *(float *)(lVar4 + 0xc80);
  }
  if (*(float *)(lVar4 + 0xc68) < fVar18) {
    fVar18 = fVar18 + *(float *)(lVar4 + 0xc80);
  }
  pfVar1 = (float *)(lVar4 + 0xc4c);
  fVar16 = *pfVar1;
  if ((0.0 < fVar16) && (fVar16 < 1.0)) {
    fVar15 = 1.0 - (ABS(fVar16 - 0.5) + ABS(fVar16 - 0.5));
    fVar16 = 0.0;
    if ((0.0 <= fVar15) && (fVar16 = 1.0, fVar15 <= 1.0)) {
      fVar16 = fVar15;
    }
    fVar15 = fVar17;
    if (fVar17 <= fVar18) {
      fVar15 = fVar18;
    }
    fVar14 = (((param_2[2] - *param_2) - fVar17) - fVar18) - local_res8;
    if (fVar14 <= fVar15) {
      fVar15 = fVar14;
    }
    fVar15 = fVar15 * fVar16;
    if (fVar17 <= fVar15) {
      fVar17 = fVar15;
    }
    if (fVar18 <= fVar15) {
      fVar18 = fVar15;
    }
  }
  fVar16 = param_2[2];
  local_b4 = param_2[1];
  local_ac = param_2[3];
  local_a0 = fVar16 - fVar18;
  local_b8 = fVar17 + *param_2;
  fVar17 = local_a0 + *(float *)(lVar4 + 0xc80);
  if (fVar16 <= fVar17) {
    fVar17 = fVar16;
  }
  local_b0 = fVar17;
  local_a8 = local_b8;
  local_a4 = local_b4;
  local_9c = local_ac;
  if (uVar13 != 0) {
    fVar18 = ((local_a0 - local_b8) - local_res8) * *pfVar1 + local_b8 + local_res8;
    if (local_b8 <= fVar18) {
      fVar16 = local_a0;
      if (fVar18 <= local_a0) {
        fVar16 = fVar18;
      }
    }
    else {
      fVar16 = local_b8;
    }
    if (local_b8 < fVar16) {
      local_98 = *(float *)(DAT_180115c10 + 0xd24);
      uStack_94 = *(undefined4 *)(DAT_180115c10 + 0xd28);
      uStack_90 = *(undefined4 *)(DAT_180115c10 + 0xd2c);
      fVar18 = local_ac + local_b4;
      fStack_8c = *(float *)(DAT_180115c10 + 0xd30) * *(float *)(DAT_180115c10 + 0xc28);
      uVar13 = FUN_180051e70(&local_98);
      FUN_180077af0((int *)param_1[0x58],CONCAT44(fVar18 * 0.5,fVar16),uVar13,puVar12);
      fVar16 = fVar16 - (float)(int)(fVar19 * 0.5);
      local_b0 = fVar17;
      if (fVar16 <= fVar17) {
        local_b0 = fVar16;
      }
    }
  }
  FUN_180064710(&local_a8,&local_a0,param_3,(byte *)0x0,(ulonglong *)&local_res8,pfVar1,&local_b8);
  return;
}


void FUN_180066590(float param_1,float param_2)

{
  longlong lVar1;
  float fVar2;

  lVar1 = *(longlong *)(DAT_180115c10 + 0x13a8);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    if (param_1 == 0.0) {
      if (param_2 < 0.0) {
        param_2 = *(float *)(DAT_180115c10 + 0xc78);
      }
      fVar2 = param_2 + *(float *)(lVar1 + 0x120);
    }
    else {
      fVar2 = 0.0;
      if (0.0 <= param_2) {
        fVar2 = param_2;
      }
      fVar2 = (*(float *)(lVar1 + 0x28) - *(float *)(lVar1 + 0x98)) + param_1 + fVar2 +
              *(float *)(lVar1 + 0x164) + *(float *)(lVar1 + 0x160);
    }
    *(float *)(lVar1 + 0x118) = fVar2;
    *(undefined4 *)(lVar1 + 0x11c) = *(undefined4 *)(lVar1 + 0x124);
    *(undefined8 *)(lVar1 + 0x140) = *(undefined8 *)(lVar1 + 0x148);
    *(undefined4 *)(lVar1 + 0x150) = *(undefined4 *)(lVar1 + 0x154);
    *(undefined1 *)(lVar1 + 0x158) = 1;
  }
  return;
}


void FUN_180066640(LPCSTR param_1)

{
  undefined *puVar1;
  FILE *pFVar2;
  longlong local_res8;

  *(undefined4 *)(DAT_180115c10 + 0x25cc) = 0;
  if (param_1 != (LPCSTR)0x0) {
    local_res8 = 0;
    puVar1 = FUN_1800666c0(&local_res8);
    pFVar2 = (FILE *)FUN_180057cd0(param_1,"wt");
    if (pFVar2 != (FILE *)0x0) {
      FUN_1800b2120(puVar1,1,local_res8,(longlong)pFVar2);
      FUN_1800b1c20(pFVar2);
    }
  }
  return;
}


undefined * FUN_1800666c0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;

  lVar4 = DAT_180115c10;
  *(undefined4 *)(DAT_180115c10 + 0x25cc) = 0;
  piVar1 = (int *)(lVar4 + 0x25d0);
  iVar7 = *(int *)(lVar4 + 0x25d4);
  if (iVar7 < 0) {
    iVar7 = iVar7 / 2 + iVar7;
    iVar6 = 0;
    if (0 < iVar7) {
      iVar6 = iVar7;
    }
    FUN_18006d510(piVar1,iVar6);
  }
  *piVar1 = 0;
  if (*(int *)(lVar4 + 0x25d4) == 0) {
    FUN_18006d510(piVar1,8);
  }
  *(undefined1 *)((longlong)*piVar1 + *(longlong *)(lVar4 + 0x25d8)) = 0;
  *piVar1 = *piVar1 + 1;
  lVar8 = *(longlong *)(lVar4 + 0x25e8);
  lVar3 = (longlong)*(int *)(lVar4 + 0x25e0) * 0x48;
  lVar2 = lVar3 + lVar8;
  if (lVar3 != 0) {
    do {
      (**(code **)(lVar8 + 0x38))(lVar4,lVar8,piVar1);
      lVar8 = lVar8 + 0x48;
    } while (lVar8 != lVar2);
  }
  if (param_1 != (longlong *)0x0) {
    iVar7 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar7 = 0;
    }
    *param_1 = (longlong)iVar7;
  }
  puVar5 = &DAT_180115c18;
  if (*(undefined **)(lVar4 + 0x25d8) != (undefined *)0x0) {
    puVar5 = *(undefined **)(lVar4 + 0x25d8);
  }
  return puVar5;
}


float * FUN_1800667b0(float *param_1,longlong param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_res8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;

  local_res8 = DAT_180115c10;
  fVar12 = *(float *)(param_2 + 0x220) + 1.0;
  fVar14 = *(float *)(param_2 + 0x224) + 1.0;
  fVar11 = (*(float *)(param_2 + 0x218) - 1.0) + *(float *)(param_2 + 0x80);
  fVar13 = (*(float *)(param_2 + 0x21c) - 1.0) + *(float *)(param_2 + 0x84);
  if (fVar12 <= fVar11) {
    fVar11 = fVar12;
  }
  if (fVar14 <= fVar13) {
    fVar13 = fVar14;
  }
  uVar8 = param_4 & 0x15;
  if ((uVar8 != 0) && ((uVar8 - 1 & param_4 & 0x15) != 0)) {
    FID_conflict__assert
              (L"(flags & ImGuiScrollFlags_MaskX_) == 0 || ImIsPowerOfTwo(flags & ImGuiScrollFlags_MaskX_)"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2b93);
  }
  if (((param_4 & 0x2a) != 0) && (((param_4 & 0x2a) - 1 & param_4 & 0x2a) != 0)) {
    FID_conflict__assert
              (L"(flags & ImGuiScrollFlags_MaskY_) == 0 || ImIsPowerOfTwo(flags & ImGuiScrollFlags_MaskY_)"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2b94);
  }
  uVar9 = param_4;
  if ((uVar8 == 0) && (uVar9 = param_4 | 1, *(char *)(param_2 + 200) == '\0')) {
    uVar9 = param_4;
  }
  if ((uVar9 & 0x2a) == 0) {
    uVar8 = 2;
    if (*(char *)(param_2 + 0xd3) != '\0') {
      uVar8 = 0x20;
    }
    uVar9 = uVar8 | uVar9;
  }
  fVar10 = *param_3;
  if ((fVar10 < fVar11) || (fVar12 < param_3[2])) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((param_3[1] < fVar13) || (fVar14 < param_3[3])) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  fVar1 = param_3[2];
  fVar2 = *(float *)(local_res8 + 0xc78);
  if ((((fVar1 - fVar10) + fVar2 + fVar2 <= fVar12 - fVar11) || ('\0' < *(char *)(param_2 + 0xe4)))
     || ((*(byte *)(param_2 + 0x14) & 0x40) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((((param_3[3] - param_3[1]) + *(float *)(local_res8 + 0xc7c) + *(float *)(local_res8 + 0xc7c)
        <= fVar14 - fVar13) || ('\0' < *(char *)(param_2 + 0xe5))) ||
     ((*(byte *)(param_2 + 0x14) & 0x40) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((uVar9 & 1) == 0) || (bVar3)) {
    if ((((uVar9 & 4) != 0) && (!bVar3)) || ((uVar9 & 0x10) != 0)) {
      if (bVar4) {
        fVar11 = 0.5;
        fVar10 = (float)(int)((fVar10 + fVar1) * 0.5) - *(float *)(param_2 + 0x28);
        goto LAB_180066a20;
      }
      fVar10 = fVar10 - *(float *)(param_2 + 0x28);
      goto LAB_180066a1a;
    }
  }
  else {
    if ((fVar10 < fVar11) || (!bVar4)) {
      fVar10 = (fVar10 - fVar2) - *(float *)(param_2 + 0x28);
LAB_180066a1a:
      fVar11 = 0.0;
    }
    else {
      if (fVar1 < fVar12) goto LAB_180066a30;
      fVar11 = 1.0;
      fVar10 = (fVar1 + fVar2) - *(float *)(param_2 + 0x28);
    }
LAB_180066a20:
    FUN_180067ad0(param_2,fVar10,fVar11);
  }
LAB_180066a30:
  if (((uVar9 & 2) == 0) || (bVar5)) {
    if ((((uVar9 & 8) == 0) || (bVar5)) && ((uVar9 & 0x20) == 0)) goto LAB_180066acf;
    if (!bVar6) {
      fVar11 = param_3[1] - *(float *)(param_2 + 0x2c);
      goto LAB_180066ac4;
    }
    fVar13 = 0.5;
    fVar11 = (float)(int)((param_3[1] + param_3[3]) * 0.5) - *(float *)(param_2 + 0x2c);
  }
  else if ((param_3[1] < fVar13) || (!bVar6)) {
    fVar11 = (param_3[1] - *(float *)(local_res8 + 0xc7c)) - *(float *)(param_2 + 0x2c);
LAB_180066ac4:
    fVar13 = 0.0;
  }
  else {
    if (param_3[3] < fVar14) goto LAB_180066acf;
    fVar13 = 1.0;
    fVar11 = (param_3[3] + *(float *)(local_res8 + 0xc7c)) - *(float *)(param_2 + 0x2c);
  }
  FUN_180067b70(param_2,fVar11,fVar13);
LAB_180066acf:
  FUN_180050950((float *)&local_res8,param_2);
  local_90 = (float)local_res8 - *(float *)(param_2 + 0x98);
  local_8c = local_res8._4_4_ - *(float *)(param_2 + 0x9c);
  *param_1 = local_90;
  param_1[1] = local_8c;
  if (((uVar9 & 0x40) == 0) && ((*(uint *)(param_2 + 0x14) & 0x1000000) != 0)) {
    if ((param_4 & 0x14) != 0) {
      param_4 = param_4 & 0xffffffeb | 1;
    }
    if ((param_4 & 0x28) != 0) {
      param_4 = param_4 & 0xffffffd7 | 2;
    }
    local_98 = *param_3 - local_90;
    local_94 = param_3[1] - local_8c;
    local_90 = param_3[2] - local_90;
    local_8c = param_3[3] - local_8c;
    pfVar7 = FUN_1800667b0((float *)&local_res8,*(longlong *)(param_2 + 0x3a0),&local_98,param_4);
    fVar11 = *pfVar7;
    param_1[1] = pfVar7[1] + param_1[1];
    *param_1 = *param_1 + fVar11;
  }
  return param_1;
}


void FUN_180066c00(uint param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;

  lVar2 = DAT_180115c10;
  iVar3 = *(int *)(DAT_180115c10 + 0x141c);
  if (iVar3 != 0) {
    if ((*(longlong *)(DAT_180115c10 + 0x13c8) != 0) &&
       (iVar3 == *(int *)(*(longlong *)(DAT_180115c10 + 0x13c8) + 0x8c))) {
      if ((*(byte *)(DAT_180115c10 + 0x270c) & 2) != 0) {
        FUN_180052d90(0x1800e1500,param_2,param_3,param_4);
      }
      iVar3 = *(int *)(lVar2 + 0x141c);
      *(undefined8 *)(lVar2 + 0x13c8) = 0;
    }
    *(int *)(lVar2 + 0x1450) = iVar3;
    iVar4 = *(int *)(lVar2 + 0x12f0);
    if (*(int *)(lVar2 + 0x1d88) != iVar3) {
      iVar4 = *(int *)(lVar2 + 0x12f0) + 1;
    }
    *(int *)(lVar2 + 0x1454) = iVar4;
    *(undefined1 *)(lVar2 + 0x1458) = *(undefined1 *)(lVar2 + 0x142c);
    *(bool *)(lVar2 + 0x1459) = *(int *)(lVar2 + 0x1420) == iVar3;
    if (*(int *)(lVar2 + 0x2384) == iVar3) {
      FUN_180096130(iVar3);
    }
  }
  uVar1 = *(uint *)(lVar2 + 0x141c);
  *(bool *)(lVar2 + 0x1428) = uVar1 != param_1;
  if (uVar1 != param_1) {
    if ((*(byte *)(lVar2 + 0x270c) & 2) != 0) {
      puVar5 = &DAT_1800d8c40;
      if (*(longlong *)(lVar2 + 0x1440) != 0) {
        puVar5 = *(undefined **)(*(longlong *)(lVar2 + 0x1440) + 8);
      }
      FUN_180052d90(0x1800e1530,(ulonglong)uVar1,puVar5,(ulonglong)param_1);
    }
    *(uint *)(lVar2 + 0x1430) = *(uint *)(lVar2 + 0x1430) | 0xff;
    *(undefined4 *)(lVar2 + 0x1424) = 0;
    *(undefined2 *)(lVar2 + 0x142b) = 0;
    if (param_1 != 0) {
      *(uint *)(lVar2 + 0x1464) = param_1;
      *(undefined4 *)(lVar2 + 0x1468) = 0;
    }
  }
  *(uint *)(lVar2 + 0x141c) = param_1;
  *(undefined2 *)(lVar2 + 0x1429) = 0;
  *(undefined8 *)(lVar2 + 0x1440) = param_2;
  *(undefined2 *)(lVar2 + 0x142d) = 0;
  if (param_1 != 0) {
    *(uint *)(lVar2 + 0x1420) = param_1;
    if ((*(uint *)(lVar2 + 0x1f10) == param_1) || (*(uint *)(lVar2 + 0x20bc) == param_1)) {
      *(int *)(lVar2 + 0x1448) = *(int *)(lVar2 + 8000);
      if (*(int *)(lVar2 + 8000) == 0) {
        FID_conflict__assert
                  (L"g.ActiveIdSource != ImGuiInputSource_None",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x1152);
      }
    }
    else {
      *(undefined4 *)(lVar2 + 0x1448) = 1;
    }
  }
  *(undefined1 *)(lVar2 + 0x1d3c) = 0;
  *(undefined4 *)(lVar2 + 0x1d38) = 0;
  return;
}


void FUN_180066da0(void)

{
  longlong *plVar1;
  longlong lVar2;

  lVar2 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x141c) == 0) {
    FID_conflict__assert
              (L"g.ActiveId != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1772);
  }
  *(undefined4 *)(lVar2 + 0x1d38) = 0xf;
  *(undefined1 *)(lVar2 + 0x1d3c) = 1;
  *(undefined2 *)(DAT_180115c10 + 0x1f90) = 0;
  if ((*(char *)(DAT_180115c10 + 0x1f91) == '\0') && (*(char *)(DAT_180115c10 + 0x1f52) == '\0')) {
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 0;
    return;
  }
  plVar1 = (longlong *)(DAT_180115c10 + 0x1f00);
  *(undefined1 *)(DAT_180115c10 + 0x1f51) = 1;
  if (*plVar1 == 0) {
    FID_conflict__assert
              (L"g.NavWindow != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x324e);
    return;
  }
  return;
}


void FUN_180066e50(undefined8 param_1)

{
  if (*(code **)(DAT_180115c10 + 0xbe8) == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x000180066e66. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(DAT_180115c10 + 0xbe8))(DAT_180115c10,param_1);
  return;
}


void FUN_180066e70(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  lVar4 = DAT_180115c10;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) {
    FID_conflict__assert
              (L"font && font->IsLoaded()",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1eb1);
  }
  fVar7 = 0.0;
  if (*(float *)(param_1 + 0x60) <= 0.0) {
    FID_conflict__assert
              (L"font->Scale > 0.0f",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1eb2);
  }
  plVar2 = *(longlong **)(lVar4 + 0x13a8);
  *(longlong *)(lVar4 + 0x10b8) = param_1;
  fVar5 = *(float *)(lVar4 + 0x40) * *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x60);
  fVar6 = 1.0;
  if (1.0 <= fVar5) {
    fVar6 = fVar5;
  }
  *(float *)(lVar4 + 0x10c4) = fVar6;
  if (plVar2 != (longlong *)0x0) {
    fVar7 = *(float *)(*plVar2 + 0x10c4) * *(float *)(plVar2 + 0x56) *
            *(float *)((longlong)plVar2 + 0x2b4);
  }
  *(float *)(lVar4 + 0x10c0) = fVar7;
  fVar6 = fVar7 / *(float *)(param_1 + 0x14);
  *(float *)(lVar4 + 0x10c8) = fVar6;
  lVar3 = *(longlong *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  *(float *)(lVar4 + 0x10e8) = fVar7;
  *(longlong *)(lVar4 + 0x10e0) = param_1;
  *(longlong *)(lVar4 + 0x10d8) = lVar3 + 0x80;
  *(float *)(lVar4 + 0x10ec) = fVar6;
  *(undefined8 *)(lVar4 + 0x10d0) = uVar1;
  return;
}


void FUN_180066f80(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  float fVar4;

  lVar2 = DAT_180115c10;
  *(longlong **)(DAT_180115c10 + 0x13a8) = param_1;
  if (param_1 == (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x2700) = 0;
  }
  else {
    if (*(int *)(lVar2 + 0x1378) < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    *(longlong *)(lVar2 + 0x2700) =
         (longlong)(*(int *)(lVar2 + 0x1378) + -1) * 0x78 + *(longlong *)(lVar2 + 0x1380) + 0x58;
    iVar1 = (int)param_1[0x39];
    if (iVar1 != -1) {
      if ((iVar1 < 0) || (*(int *)(lVar2 + 0x2200) <= iVar1)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      *(longlong *)(lVar2 + 0x21e0) = (longlong)iVar1 * 0x250 + *(longlong *)(lVar2 + 0x2208);
      *(undefined4 *)(lVar2 + 0x10cc) = 0x3f800000;
      goto LAB_180067065;
    }
  }
  *(undefined8 *)(lVar2 + 0x21e0) = 0;
  *(undefined4 *)(lVar2 + 0x10cc) = 0x3f800000;
  if (param_1 == (longlong *)0x0) {
    return;
  }
LAB_180067065:
  fVar4 = *(float *)(*param_1 + 0x10c4) * *(float *)(param_1 + 0x56) *
          *(float *)((longlong)param_1 + 0x2b4);
  *(float *)(lVar2 + 0x10e8) = fVar4;
  *(float *)(lVar2 + 0x10c0) = fVar4;
  fVar4 = fVar4 / *(float *)(*(longlong *)(lVar2 + 0x10b8) + 0x14);
  *(float *)(lVar2 + 0x10ec) = fVar4;
  *(float *)(lVar2 + 0x10c8) = fVar4;
  if ((*(longlong *)(DAT_180115c10 + 0x21e0) == 0) &&
     (*(longlong *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x1c0) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x178) = uVar3;
  return;
}


void FUN_1800670f0(undefined8 *param_1)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  *(undefined1 *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x13a8);
  *(undefined8 *)(lVar1 + 0x118) = *param_1;
  *(undefined1 *)(lVar1 + 0x159) = 1;
  return;
}


longlong FUN_180067120(char *param_1,undefined8 *param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;

  lVar1 = DAT_180115c10;
  iVar2 = 1;
  if (param_4 != 0) {
    iVar2 = param_4;
  }
  if (param_1 == (char *)0x0) {
    FID_conflict__assert
              (L"type != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3749);
  }
  sVar3 = strlen(param_1);
  if (0x20 < sVar3) {
    FID_conflict__assert
              (L"strlen(type) < ((int)(sizeof(payload.DataType) / sizeof(*(payload.DataType)))) && \"Payload type can be at most 32 characters long\""
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x374a);
  }
  if (param_2 == (undefined8 *)0x0) {
    if (param_3 != 0) goto LAB_18006719d;
  }
  else if (param_3 == 0) {
LAB_18006719d:
    FID_conflict__assert
              (L"(data != 0 && data_size > 0) || (data == 0 && data_size == 0)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x374b);
  }
  if (1 < iVar2 - 1U) {
    FID_conflict__assert
              (L"cond == ImGuiCond_Always || cond == ImGuiCond_Once",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x374c);
  }
  if (*(int *)(lVar1 + 0x2134) == 0) {
    FID_conflict__assert
              (L"payload.SourceId != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x374d);
  }
  if ((iVar2 != 1) && (*(int *)(lVar1 + 0x213c) != -1)) goto LAB_180067285;
  strncpy((char *)(lVar1 + 0x2140),param_1,0x20);
  *(undefined1 *)(lVar1 + 0x2160) = 0;
  FUN_18006dc10((int *)(lVar1 + 0x21a8),0);
  if (param_3 < 0x11) {
    if (param_3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 0x21b8);
      *puVar4 = 0;
      *(undefined8 *)(lVar1 + 0x21c0) = 0;
      goto LAB_180067260;
    }
    *(undefined8 *)(lVar1 + 0x2128) = 0;
  }
  else {
    FUN_18006dc10((int *)(lVar1 + 0x21a8),(int)param_3);
    puVar4 = *(undefined8 **)(lVar1 + 0x21b0);
LAB_180067260:
    *(undefined8 **)(lVar1 + 0x2128) = puVar4;
    FUN_1800d1c20(puVar4,param_2,param_3);
  }
  *(int *)(lVar1 + 0x2130) = (int)param_3;
LAB_180067285:
  iVar2 = *(int *)(lVar1 + 0x12f0);
  *(int *)(lVar1 + 0x213c) = iVar2;
  if ((*(int *)(lVar1 + 0x219c) == iVar2) || (iVar2 = iVar2 + -1, *(int *)(lVar1 + 0x219c) == iVar2)
     ) {
    return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
  return (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
}


void FUN_1800672c0(int param_1,wchar_t *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;

  lVar2 = DAT_180115c10;
  pwVar3 = param_2;
  if (param_1 == 0) {
    param_3 = 0x3068;
    pwVar3 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"id != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3068);
  }
  if (*(wchar_t **)(lVar2 + 0x1f00) != param_2) {
    FUN_1800678a0((longlong)param_2,pwVar3,param_3,param_4);
  }
  lVar4 = (longlong)*(int *)(param_2 + 0xb8);
  *(int *)(lVar2 + 0x1f0c) = *(int *)(param_2 + 0xb8);
  *(int *)(lVar2 + 0x1efc) = param_1;
  FUN_180067580(*(int *)(lVar2 + 0x1d44));
  *(int *)(param_2 + lVar4 * 2 + 0x1f0) = param_1;
  if (*(int *)(lVar2 + 0x1d88) == param_1) {
    uVar1 = *(undefined8 *)(lVar2 + 0x1dac);
    fVar5 = (float)*(undefined8 *)(param_2 + 0x94);
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x94) >> 0x20);
    *(ulonglong *)(param_2 + lVar4 * 8 + 500) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + 0x1da4) >> 0x20) - fVar6,
                  (float)*(undefined8 *)(lVar2 + 0x1da4) - fVar5);
    *(ulonglong *)(param_2 + lVar4 * 8 + 0x1f8) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) - fVar6,(float)uVar1 - fVar5);
  }
  if (*(int *)(lVar2 + 0x1448) - 2U < 2) {
    *(undefined1 *)(lVar2 + 0x1ef9) = 1;
  }
  else if (*(char *)(lVar2 + 0x5d) != '\0') {
    *(undefined1 *)(lVar2 + 0x1ef8) = 0;
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3c8) + 0x408 +
   (longlong)*(int *)(DAT_180115c10 + 0x1f0c) * 8) = 0x7f7fffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3c8) + 0x40c +
   (longlong)*(int *)(DAT_180115c10 + 0x1f0c) * 8) = 0x7f7fffff;
  return;
}


void FUN_1800673f0(int param_1)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  *(int *)(DAT_180115c10 + 0x1404) = param_1;
  *(undefined1 *)(lVar1 + 0x1418) = 0;
  if ((param_1 != 0) && (*(int *)(lVar1 + 0x1408) != param_1)) {
    *(undefined8 *)(lVar1 + 0x1410) = 0;
  }
  return;
}


void FUN_180067420(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  )

{
  if (param_2 != 0) {
    if (0x9a < param_2 - 0x200U) {
      FID_conflict__assert
                (L"ImGui::IsNamedKey(key)",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x6a3);
    }
    if ((param_5 != 0xffffffff) && (0x1ff < param_5)) {
      FID_conflict__assert
                (L"native_legacy_index == -1 || ImGui::IsLegacyKey((ImGuiKey)native_legacy_index)",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x6a4);
      return;
    }
  }
  return;
}


void FUN_180067480(uint param_1,int param_2,uint param_3)

{
  longlong lVar1;
  int *piVar2;

  lVar1 = DAT_180115c10;
  if (((((0x9a < param_1 - 0x200) && (param_1 != 0x1000)) && (param_1 != 0x2000)) &&
      ((param_1 != 0x4000 && (param_1 != 0x8000)))) || (param_2 == 0 && (param_3 & 0x300000) == 0))
  {
    FID_conflict__assert
              (L"IsNamedKeyOrMod(key) && (owner_id != ((ImGuiID)0) || (flags & (ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease)))"
               ,
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2705);
  }
  if ((param_3 & 0xffcfffff) != 0) {
    FID_conflict__assert
              (L"(flags & ~ImGuiInputFlags_SupportedBySetKeyOwner) == 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2706);
  }
  piVar2 = (int *)FUN_180057090(lVar1,param_1);
  piVar2[1] = param_2;
  *(bool *)((longlong)piVar2 + 9) = (param_3 & 0x200000) != 0;
  *piVar2 = param_2;
  *(bool *)(piVar2 + 2) = (param_3 & 0x300000) != 0;
  return;
}


void FUN_180067540(undefined4 param_1)

{
  *(undefined4 *)(DAT_180115c10 + 0x2360) = param_1;
  return;
}


void FUN_180067550(void)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  if (*(char *)(DAT_180115c10 + 0x5d) == '\0') {
    *(undefined2 *)(DAT_180115c10 + 0x1ef9) = 0x101;
    return;
  }
  *(undefined2 *)(DAT_180115c10 + 0x1ef8) = 0x101;
  *(undefined1 *)(lVar1 + 0x1efa) = 1;
  return;
}


void FUN_180067580(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;

  lVar7 = DAT_180115c10;
  *(int *)(DAT_180115c10 + 0x1f08) = param_1;
  piVar1 = (int *)(lVar7 + 0x1f20);
  iVar8 = *(int *)(lVar7 + 0x1f24);
  if (iVar8 < 0) {
    iVar8 = iVar8 + iVar8 / 2;
    iVar9 = 0;
    if (0 < iVar8) {
      iVar9 = iVar8;
    }
    FUN_18006d6f0(piVar1,iVar9);
  }
  *piVar1 = 0;
  if (param_1 != 0) {
    if (*(longlong *)(lVar7 + 0x1f00) == 0) {
      FID_conflict__assert
                (L"g.NavWindow != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x20d2);
    }
    if (param_1 == *(int *)(lVar7 + 0x1d44)) {
      uVar2 = *(uint *)(lVar7 + 0x1e88);
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        lVar5 = *(longlong *)(lVar7 + 0x1e90);
        if (*(int *)(lVar5 + 4 + (ulonglong)uVar2 * 8) !=
            *(int *)(*(longlong *)(lVar7 + 0x13a8) + 0x10)) break;
        iVar8 = *(int *)(lVar7 + 0x1f24);
        if (*piVar1 == iVar8) {
          iVar9 = *piVar1 + 1;
          if (iVar8 == 0) {
            iVar8 = 8;
          }
          else {
            iVar8 = iVar8 / 2 + iVar8;
          }
          if (iVar9 < iVar8) {
            iVar9 = iVar8;
          }
          FUN_18006d6f0(piVar1,iVar9);
        }
        *(undefined8 *)(*(longlong *)(lVar7 + 0x1f28) + (longlong)*piVar1 * 8) =
             *(undefined8 *)(lVar5 + (ulonglong)uVar2 * 8);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
      if (param_1 != *(int *)(*(longlong *)(lVar7 + 0x1f00) + 0x418)) {
        return;
      }
      iVar8 = *(int *)(lVar7 + 0x1f24);
      uVar3 = *(undefined4 *)(*(longlong *)(lVar7 + 0x1f00) + 0x10);
      if (*piVar1 == iVar8) {
        iVar9 = *piVar1 + 1;
        if (iVar8 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar8 / 2 + iVar8;
        }
        if (iVar9 < iVar8) {
          iVar9 = iVar8;
        }
        FUN_18006d6f0(piVar1,iVar9);
      }
      iVar8 = *piVar1;
      lVar5 = *(longlong *)(lVar7 + 0x1f28);
      *(int *)(lVar5 + (longlong)iVar8 * 8) = param_1;
      *(undefined4 *)(lVar5 + 4 + (longlong)iVar8 * 8) = uVar3;
      *piVar1 = *piVar1 + 1;
    }
    for (lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x1f00) + 0x3d0); lVar5 != 0;
        lVar5 = *(longlong *)(lVar5 + 0x3d0)) {
      iVar8 = *(int *)(lVar7 + 0x1f24);
      uVar3 = *(undefined4 *)(lVar5 + 0x418);
      uVar4 = *(undefined4 *)(lVar5 + 0x10);
      if (*piVar1 == iVar8) {
        iVar9 = *piVar1 + 1;
        if (iVar8 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar8 / 2 + iVar8;
        }
        if (iVar9 < iVar8) {
          iVar9 = iVar8;
        }
        FUN_18006d6f0(piVar1,iVar9);
      }
      iVar8 = *piVar1;
      lVar6 = *(longlong *)(lVar7 + 0x1f28);
      *(undefined4 *)(lVar6 + (longlong)iVar8 * 8) = uVar3;
      *(undefined4 *)(lVar6 + 4 + (longlong)iVar8 * 8) = uVar4;
      *piVar1 = *piVar1 + 1;
    }
    if (99 < *piVar1) {
      FID_conflict__assert
                (L"g.NavFocusRoute.Size < 100",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x20e3);
    }
  }
  return;
}


void FUN_1800677a0(undefined4 param_1,uint param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;

  lVar3 = DAT_180115c10;
  if (*(longlong *)(DAT_180115c10 + 0x1f00) == 0) {
    FID_conflict__assert
              (L"g.NavWindow != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3058);
  }
  if (1 < param_2) {
    FID_conflict__assert
              (L"nav_layer == ImGuiNavLayer_Main || nav_layer == ImGuiNavLayer_Menu",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3059);
  }
  *(undefined4 *)(lVar3 + 0x1efc) = param_1;
  *(uint *)(lVar3 + 0x1f0c) = param_2;
  FUN_180067580(param_3);
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1f00) + 0x3e0 + (longlong)(int)param_2 * 4) = param_1;
  uVar2 = param_4[1];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f00) + 1000 + (longlong)(int)param_2 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3c8) + 0x408 +
   (longlong)*(int *)(DAT_180115c10 + 0x1f0c) * 8) = 0x7f7fffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(DAT_180115c10 + 0x1f00) + 0x3c8) + 0x40c +
   (longlong)*(int *)(DAT_180115c10 + 0x1f0c) * 8) = 0x7f7fffff;
  return;
}


void FUN_1800678a0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;

  lVar2 = DAT_180115c10;
  if (*(longlong *)(DAT_180115c10 + 0x1f00) != param_1) {
    if ((*(byte *)(DAT_180115c10 + 0x270c) & 4) != 0) {
      if (param_1 == 0) {
        pcVar3 = "<NULL>";
      }
      else {
        pcVar3 = *(char **)(param_1 + 8);
      }
      FUN_180052d90(0x1800e5d80,pcVar3,param_3,param_4);
    }
    *(longlong *)(lVar2 + 0x1f00) = param_1;
    *(undefined8 *)(lVar2 + 0x1f48) = 0xffffffffffffffff;
  }
  *(undefined2 *)(lVar2 + 0x1f90) = 0;
  *(undefined1 *)(lVar2 + 0x1f52) = 0;
  if ((*(char *)(DAT_180115c10 + 0x1f91) == '\0') && (*(char *)(DAT_180115c10 + 0x1f52) == '\0')) {
    *(undefined1 *)(DAT_180115c10 + 0x1f51) = 0;
    return;
  }
  plVar1 = (longlong *)(DAT_180115c10 + 0x1f00);
  *(undefined1 *)(DAT_180115c10 + 0x1f51) = 1;
  if (*plVar1 == 0) {
    FID_conflict__assert
              (L"g.NavWindow != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x324e);
  }
  return;
}


void FUN_180067970(undefined4 param_1)

{
  longlong lVar1;

  lVar1 = DAT_180115c10;
  *(uint *)(DAT_180115c10 + 0x1d50) = *(uint *)(DAT_180115c10 + 0x1d50) | 1;
  *(undefined4 *)(lVar1 + 0x1d68) = param_1;
  return;
}


void FUN_180067990(void)

{
  *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 0x20;
  return;
}


void FUN_1800679a0(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;

  lVar2 = DAT_180115c10;
  if ((param_2 != 0) && ((param_2 & param_2 - 1) != 0)) {
    FID_conflict__assert
              (L"cond == 0 || ImIsPowerOfTwo(cond)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2051);
  }
  *(uint *)(lVar2 + 0x1dd8) = *(uint *)(lVar2 + 0x1dd8) | 1;
  *(undefined8 *)(lVar2 + 0x1de8) = *param_1;
  uVar1 = *param_3;
  uVar3 = 1;
  if (param_2 != 0) {
    uVar3 = param_2;
  }
  *(uint *)(lVar2 + 0x1ddc) = uVar3;
  *(undefined8 *)(lVar2 + 0x1df0) = uVar1;
  return;
}


void FUN_180067a20(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;

  lVar1 = DAT_180115c10;
  if ((param_2 != 0) && ((param_2 & param_2 - 1) != 0)) {
    FID_conflict__assert
              (L"cond == 0 || ImIsPowerOfTwo(cond)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x205b);
  }
  *(uint *)(lVar1 + 0x1dd8) = *(uint *)(lVar1 + 0x1dd8) | 2;
  uVar2 = 1;
  if (param_2 != 0) {
    uVar2 = param_2;
  }
  *(undefined8 *)(lVar1 + 0x1df8) = *param_1;
  *(uint *)(lVar1 + 0x1de0) = uVar2;
  return;
}


void FUN_180067aa0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;

  lVar2 = DAT_180115c10;
  *(uint *)(DAT_180115c10 + 0x1dd8) = *(uint *)(DAT_180115c10 + 0x1dd8) | 0x10;
  uVar1 = *param_2;
  *(undefined8 *)(lVar2 + 0x1e1c) = *param_1;
  *(undefined8 *)(lVar2 + 0x1e24) = uVar1;
  *(undefined8 *)(lVar2 + 0x1e30) = param_3;
  *(undefined8 *)(lVar2 + 0x1e38) = param_4;
  return;
}


void FUN_180067ad0(longlong param_1,float param_2,float param_3)

{
  if ((param_3 < 0.0) || (1.0 < param_3)) {
    FID_conflict__assert
              (L"center_x_ratio >= 0.0f && center_x_ratio <= 1.0f",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2c0f);
  }
  *(float *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(float *)(param_1 + 0xa8) =
       (float)(int)(((param_2 - *(float *)(param_1 + 0x70)) - *(float *)(param_1 + 0x80)) +
                   *(float *)(param_1 + 0x98));
  return;
}


void FUN_180067b70(longlong param_1,float param_2,float param_3)

{
  if ((param_3 < 0.0) || (1.0 < param_3)) {
    FID_conflict__assert
              (L"center_y_ratio >= 0.0f && center_y_ratio <= 1.0f",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2c17);
  }
  *(float *)(param_1 + 0xb4) = param_3;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(float *)(param_1 + 0xac) =
       (float)(int)(((param_2 - *(float *)(param_1 + 0x74)) - *(float *)(param_1 + 0x84)) +
                   *(float *)(param_1 + 0x9c));
  return;
}


void FUN_180067c10(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}


void FUN_180067c30(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xac) = param_2;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}


undefined1 FUN_180067c50(uint param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  wchar_t *pwVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;

  lVar3 = DAT_180115c10;
  uVar13 = param_3;
  if ((param_2 & 0x3c00) == 0) {
    param_2 = param_2 | 0xd000;
  }
  else if (((param_2 & 0x3c00) - 1 & param_2 & 0x3c00) != 0) {
    uVar13 = 0x2370;
    FID_conflict__assert
              (L"ImIsPowerOfTwo(flags & ImGuiInputFlags_RouteTypeMask_)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2370);
  }
  iVar2 = (int)param_3;
  if ((iVar2 + 1U & 0xfffffffe) == 0) {
    uVar13 = 0x2371;
    FID_conflict__assert
              (L"owner_id != ((ImGuiID)0) && owner_id != ((ImGuiID)-1)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2371);
  }
  if (((param_2 & 0x1c000) != 0) && ((param_2 >> 0xc & 1) == 0)) {
    uVar13 = 0x2373;
    FID_conflict__assert
              (L"flags & ImGuiInputFlags_RouteGlobal",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x2373);
  }
  uVar5 = FUN_180056150(param_1);
  if (*(uint *)(lVar3 + 0x1d40) == uVar5) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if (((param_2 >> 0x10 & 1) != 0) && (*(longlong *)(lVar3 + 0x1f00) == 0)) {
    return 0;
  }
  if ((param_2 >> 0xd & 1) != 0) {
    if ((*(uint *)(lVar3 + 0x270c) & 0x200) != 0) {
      pcVar7 = FUN_180056dc0(uVar5);
      FUN_180052d90(0x1800e31f0,pcVar7,(ulonglong)param_2,param_3 & 0xffffffff);
    }
    return 1;
  }
  if ((*(int *)(lVar3 + 0x141c) != 0) && (*(int *)(lVar3 + 0x141c) != iVar2)) {
    if ((param_2 >> 10 & 1) != 0) {
      return 0;
    }
    if ((*(char *)(lVar3 + 0xba) != '\0') && (uVar6 = FUN_1800596f0(uVar5), (char)uVar6 != '\0')) {
      if ((*(uint *)(lVar3 + 0x270c) & 0x200) == 0) {
        return 0;
      }
      pcVar7 = FUN_180056dc0(uVar5);
      FUN_180052d90(0x1800e3240,pcVar7,(ulonglong)param_2,param_3 & 0xffffffff);
      return 0;
    }
    if (((param_2 >> 0xf & 1) == 0) && (*(char *)(lVar3 + 0x1d3c) != '\0')) {
      uVar6 = uVar5 & 0xffff0fff;
      if (uVar6 == 0) {
        uVar6 = FUN_180052240(uVar5 & 0xf000);
      }
      if (uVar6 - 0x200 < 0x78) {
        return 0;
      }
    }
  }
  if ((param_2 >> 0x11 & 1) == 0) {
    uVar6 = *(uint *)(lVar3 + 0x1d44);
  }
  else {
    uVar6 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x13a8) + 0x3b0) + 0x10);
  }
  pwVar8 = (wchar_t *)(ulonglong)uVar6;
  if ((param_2 >> 0xb & 1) == 0) {
    if ((param_2 >> 10 & 1) == 0) {
      if ((param_2 >> 0xc & 1) == 0) {
        uVar13 = 0x234c;
        pwVar8 =
        L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
        ;
        FID_conflict__assert
                  (L"0",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                   ,0x234c);
      }
      else if ((param_2 >> 0xf & 1) == 0) {
        iVar11 = 0xfe;
        if ((param_2 >> 0xe & 1) != 0) {
          iVar11 = 2;
        }
        goto LAB_180067ebb;
      }
      iVar11 = 0;
      goto LAB_180067ebb;
    }
    if ((iVar2 != 0) && (*(int *)(DAT_180115c10 + 0x141c) == iVar2)) {
      iVar11 = 1;
      goto LAB_180067ebb;
    }
  }
  else {
    if ((iVar2 != 0) && (*(int *)(DAT_180115c10 + 0x141c) == iVar2)) {
      iVar11 = 1;
      goto LAB_180067ebb;
    }
    if ((uVar6 != 0) && (0 < *(int *)(DAT_180115c10 + 0x1f20))) {
      uVar13 = *(ulonglong *)(DAT_180115c10 + 0x1f28);
      uVar12 = 0;
      do {
        if (*(uint *)(uVar13 + uVar12 * 8) == uVar6) {
          iVar11 = (int)uVar12 + 3;
          goto LAB_180067ebb;
        }
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(DAT_180115c10 + 0x1f20));
      iVar11 = 0xff;
      goto LAB_180067ebb;
    }
  }
  iVar11 = 0xff;
LAB_180067ebb:
  if ((*(uint *)(lVar3 + 0x270c) & 0x200) != 0) {
    pwVar8 = (wchar_t *)FUN_180056dc0(uVar5);
    param_4 = param_3 & 0xffffffff;
    uVar13 = (ulonglong)param_2;
    FUN_180052d90(0x1800e32a0,pwVar8,uVar13,param_4);
  }
  if (iVar11 == 0xff) {
    return 0;
  }
  psVar9 = FUN_180057690(uVar5);
  if (iVar11 < (int)(uint)*(byte *)((longlong)psVar9 + 5)) {
    *(int *)(psVar9 + 6) = iVar2;
    *(char *)((longlong)psVar9 + 5) = (char)iVar11;
  }
  bVar14 = false;
  if (*(int *)(psVar9 + 4) == iVar2) {
    if ((*(uint *)(lVar3 + 0x270c) & 0x200) != 0) {
      FUN_180052d90(0x1800e32e8,pwVar8,uVar13,param_4);
    }
    bVar14 = *(int *)(psVar9 + 4) == iVar2;
  }
  return bVar14;
}


void FUN_180067f50(char *param_1,undefined8 param_2,undefined *param_3,ulonglong param_4)

{
  undefined8 local_res10;
  undefined *local_res18;
  ulonglong local_res20;

  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180067f80(param_1,(wchar_t *)&local_res10,param_3,param_4);
  return;
}


void FUN_180067f80(char *param_1,wchar_t *param_2,undefined *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  wchar_t *pwVar2;

  uVar1 = FUN_180050200(2,0);
  if ((char)uVar1 != '\0') {
    FUN_18009f6e0(param_1,(longlong *)param_2);
    pwVar2 = *(wchar_t **)(DAT_180115c10 + 0x13a8);
    if ((*(uint *)(pwVar2 + 10) & 0x2000000) == 0) {
      param_3 = (undefined *)0x2c83;
      param_2 =
      L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
      ;
      pwVar2 = L"GetCurrentWindowRead()->Flags & ImGuiWindowFlags_Tooltip";
      FID_conflict__assert
                (L"GetCurrentWindowRead()->Flags & ImGuiWindowFlags_Tooltip",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x2c83);
    }
    FUN_180053370(pwVar2,param_2,param_3,param_4);
  }
  return;
}


void FUN_180067ff0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;

  *(undefined1 *)(param_1 + 0xcc) = 1;
  plVar3 = *(longlong **)(param_1 + 0x1b0);
  plVar1 = plVar3 + *(int *)(param_1 + 0x1a8);
  if (((longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar2 = *plVar3;
      if (*(char *)(lVar2 + 0xd4) == '\0') {
        *(undefined1 *)(lVar2 + 0xd2) = 1;
        *(undefined1 *)(lVar2 + 0xcc) = 1;
        FUN_180067ff0(lVar2);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return;
}


void FUN_180068060(longlong param_1,undefined8 *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;

  if (param_3 != 0) {
    if ((param_3 & (int)*(char *)(param_1 + 0xf0)) == 0) {
      return;
    }
    if ((param_3 & param_3 - 1) != 0) {
      FID_conflict__assert
                (L"cond == 0 || ImIsPowerOfTwo(cond)",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1fd4);
    }
  }
  *(undefined4 *)(param_1 + 0xf4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xf8) = 0x7f7fffff;
  *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) & 0xfffffff1;
  fVar1 = (float)(int)(float)*param_2;
  fVar2 = (float)(int)(float)((ulonglong)*param_2 >> 0x20);
  fVar3 = fVar1 - *(float *)(param_1 + 0x28);
  *(ulonglong *)(param_1 + 0x28) = CONCAT44(fVar2,fVar1);
  fVar2 = fVar2 - *(float *)(param_1 + 0x2c);
  if ((fVar3 != 0.0) || (fVar2 != 0.0)) {
    if (((*(uint *)(param_1 + 0x14) & 0x100) == 0) && (*(float *)(DAT_180115c10 + 0x25cc) <= 0.0)) {
      *(undefined4 *)(DAT_180115c10 + 0x25cc) = *(undefined4 *)(DAT_180115c10 + 0x1c);
    }
    *(float *)(param_1 + 0x118) = fVar3 + *(float *)(param_1 + 0x118);
    *(float *)(param_1 + 0x11c) = fVar2 + *(float *)(param_1 + 0x11c);
    *(float *)(param_1 + 0x130) = fVar3 + *(float *)(param_1 + 0x130);
    *(float *)(param_1 + 0x134) = fVar2 + *(float *)(param_1 + 0x134);
    *(float *)(param_1 + 0x138) = fVar3 + *(float *)(param_1 + 0x138);
    *(float *)(param_1 + 0x128) = fVar3 + *(float *)(param_1 + 0x128);
    *(float *)(param_1 + 0x13c) = fVar2 + *(float *)(param_1 + 0x13c);
    *(float *)(param_1 + 300) = fVar2 + *(float *)(param_1 + 300);
  }
  return;
}


void FUN_1800681e0(longlong param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  uint uVar4;
  float fVar5;

  if (param_3 != 0) {
    if ((param_3 & (int)*(char *)(param_1 + 0xf1)) == 0) {
      return;
    }
    if ((param_3 & param_3 - 1) != 0) {
      FID_conflict__assert
                (L"cond == 0 || ImIsPowerOfTwo(cond)",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x1ffd);
    }
  }
  *(uint *)(param_1 + 0xf0) =
       (*(uint *)(param_1 + 0xf0) >> 8 & 0xf1) << 8 | *(uint *)(param_1 + 0xf0) & 0xffff00ff;
  uVar4 = *(uint *)(param_1 + 0x14) & 0x1000000;
  if (((uVar4 == 0) || (*(char *)(param_1 + 0xd3) != '\0')) ||
     ((*(byte *)(param_1 + 0x18) & 0x40) != 0)) {
    uVar3 = 0;
    if (*param_2 <= 0.0) {
      uVar3 = 2;
    }
    *(undefined1 *)(param_1 + 0xe4) = uVar3;
    if (uVar4 != 0) goto LAB_180068280;
  }
  else {
LAB_180068280:
    if ((*(char *)(param_1 + 0xd3) == '\0') && ((*(byte *)(param_1 + 0x18) & 0x40) == 0))
    goto LAB_18006829f;
  }
  uVar3 = 0;
  if (param_2[1] <= 0.0) {
    uVar3 = 2;
  }
  *(undefined1 *)(param_1 + 0xe5) = uVar3;
LAB_18006829f:
  fVar1 = *(float *)(param_1 + 0x38);
  fVar2 = *(float *)(param_1 + 0x3c);
  if (0.0 < *param_2) {
    fVar5 = (float)(int)*param_2;
    *(float *)(param_1 + 0x38) = fVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0xe6) = 0;
    fVar5 = fVar1;
  }
  if (0.0 < param_2[1]) {
    *(float *)(param_1 + 0x3c) = (float)(int)param_2[1];
  }
  else {
    *(undefined1 *)(param_1 + 0xe6) = 0;
  }
  if (((fVar1 != fVar5) || (fVar2 != *(float *)(param_1 + 0x3c))) &&
     (((*(uint *)(param_1 + 0x14) >> 8 & 1) == 0 && (*(float *)(DAT_180115c10 + 0x25cc) <= 0.0)))) {
    *(undefined4 *)(DAT_180115c10 + 0x25cc) = *(undefined4 *)(DAT_180115c10 + 0x1c);
  }
  return;
}


ulonglong FUN_180068330(uint param_1,uint param_2,uint param_3,ulonglong param_4)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  undefined7 extraout_var_00;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  uint uVar5;
  uint uVar6;

  uVar4 = (ulonglong)(param_3 + 1);
  uVar6 = param_2 | 0x800;
  if ((param_2 & 0x3c00) != 0) {
    uVar6 = param_2;
  }
  if ((param_3 + 1 & 0xfffffffe) == 0) {
    param_3 = *(uint *)(DAT_180115c10 + 0x1d44);
  }
  if ((*(uint *)(DAT_180115c10 + 0x1d48) & 0x400) == 0) {
    cVar2 = FUN_180067c50(param_1,uVar6,(ulonglong)param_3,param_4);
    uVar4 = CONCAT71(extraout_var,cVar2);
    if (cVar2 != '\0') {
      uVar5 = uVar6 | 0x20;
      if (((byte)uVar6 & 0xf1) != 1) {
        uVar5 = uVar6;
      }
      bVar3 = FUN_180059790(param_1,uVar5,param_3);
      lVar1 = DAT_180115c10;
      uVar4 = CONCAT71(extraout_var_00,bVar3);
      if (bVar3) {
        if ((param_1 >> 0xc & 1) != 0) {
          if (param_3 == 0) {
            FID_conflict__assert
                      (L"IsNamedKeyOrMod(key) && (owner_id != ((ImGuiID)0) || (flags & (ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease)))"
                       ,
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                       ,0x2705);
            uVar4 = extraout_RAX;
          }
          *(uint *)(lVar1 + 0x1bb4) = param_3;
          *(uint *)(lVar1 + 0x1bb0) = param_3;
          *(undefined2 *)(lVar1 + 0x1bb8) = 0;
        }
        lVar1 = DAT_180115c10;
        if ((param_1 >> 0xd & 1) != 0) {
          if (param_3 == 0) {
            FID_conflict__assert
                      (L"IsNamedKeyOrMod(key) && (owner_id != ((ImGuiID)0) || (flags & (ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease)))"
                       ,
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                       ,0x2705);
            uVar4 = extraout_RAX_00;
          }
          *(uint *)(lVar1 + 0x1bc0) = param_3;
          *(uint *)(lVar1 + 0x1bbc) = param_3;
          *(undefined2 *)(lVar1 + 0x1bc4) = 0;
        }
        lVar1 = DAT_180115c10;
        if ((param_1 >> 0xe & 1) != 0) {
          if (param_3 == 0) {
            FID_conflict__assert
                      (L"IsNamedKeyOrMod(key) && (owner_id != ((ImGuiID)0) || (flags & (ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease)))"
                       ,
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                       ,0x2705);
            uVar4 = extraout_RAX_01;
          }
          *(uint *)(lVar1 + 0x1bcc) = param_3;
          *(uint *)(lVar1 + 0x1bc8) = param_3;
          *(undefined2 *)(lVar1 + 0x1bd0) = 0;
        }
        lVar1 = DAT_180115c10;
        if ((param_1 >> 0xf & 1) != 0) {
          if (param_3 == 0) {
            FID_conflict__assert
                      (L"IsNamedKeyOrMod(key) && (owner_id != ((ImGuiID)0) || (flags & (ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease)))"
                       ,
                       L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                       ,0x2705);
            uVar4 = extraout_RAX_02;
          }
          *(uint *)(lVar1 + 0x1bd8) = param_3;
          *(uint *)(lVar1 + 0x1bd4) = param_3;
          *(undefined2 *)(lVar1 + 0x1bdc) = 0;
        }
        if ((uVar5 & 0xfffc0300) != 0) {
          FID_conflict__assert
                    (L"(flags & ~ImGuiInputFlags_SupportedByShortcut) == 0",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x2794);
          uVar4 = extraout_RAX_03;
        }
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}


void FUN_1800684f0(undefined8 param_1,wchar_t *param_2,float *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  FILE *pFVar3;
  char *pcVar4;
  char cVar5;
  FILE *pFVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;

  pcVar4 = DAT_180115c10;
  if (((*(longlong *)(DAT_180115c10 + 0xa0) != 0) &&
      (cVar5 = FUN_180054c00((float *)"Forgot to shutdown Platform backend?",(float *)param_2,
                             param_3,param_4), cVar5 != '\0')) &&
     (*(longlong *)(pcVar4 + 0xa0) != 0)) {
    param_3 = (float *)0x1053;
    param_2 =
    L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
    ;
    FID_conflict__assert
              (L"(g.IO.BackendPlatformUserData == 0) && \"Forgot to shutdown Platform backend?\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1053);
  }
  if (((*(longlong *)(pcVar4 + 0xa8) != 0) &&
      (cVar5 = FUN_180054c00((float *)"Forgot to shutdown Renderer backend?",(float *)param_2,
                             param_3,param_4), cVar5 != '\0')) &&
     (*(longlong *)(pcVar4 + 0xa8) != 0)) {
    FID_conflict__assert
              (L"(g.IO.BackendRendererUserData == 0) && \"Forgot to shutdown Renderer backend?\"",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1054);
  }
  if ((*(longlong *)(pcVar4 + 0x38) != 0) && (pcVar4[1] != '\0')) {
    *(undefined1 *)(*(longlong *)(pcVar4 + 0x38) + 0x20) = 0;
    lVar1 = *(longlong *)(pcVar4 + 0x38);
    if (lVar1 != 0) {
      FUN_18006e830(lVar1);
      FUN_18005b5c0(lVar1);
    }
  }
  pcVar4[0x38] = '\0';
  pcVar4[0x39] = '\0';
  pcVar4[0x3a] = '\0';
  pcVar4[0x3b] = '\0';
  pcVar4[0x3c] = '\0';
  pcVar4[0x3d] = '\0';
  pcVar4[0x3e] = '\0';
  pcVar4[0x3f] = '\0';
  lVar1 = *(longlong *)(pcVar4 + 0x1118);
  if (lVar1 != 0) {
    pcVar4[0x1110] = '\0';
    pcVar4[0x1111] = '\0';
    pcVar4[0x1112] = '\0';
    pcVar4[0x1113] = '\0';
    pcVar4[0x1114] = '\0';
    pcVar4[0x1115] = '\0';
    pcVar4[0x1116] = '\0';
    pcVar4[0x1117] = '\0';
    FUN_18005b5c0(lVar1);
    pcVar4[0x1118] = '\0';
    pcVar4[0x1119] = '\0';
    pcVar4[0x111a] = '\0';
    pcVar4[0x111b] = '\0';
    pcVar4[0x111c] = '\0';
    pcVar4[0x111d] = '\0';
    pcVar4[0x111e] = '\0';
    pcVar4[0x111f] = '\0';
  }
  if (*pcVar4 != '\0') {
    if ((pcVar4[0x25c8] != '\0') && (*(LPCSTR *)(pcVar4 + 0x20) != (LPCSTR)0x0)) {
      FUN_180066640(*(LPCSTR *)(pcVar4 + 0x20));
    }
    lVar9 = *(longlong *)(pcVar4 + 0x2618);
    lVar1 = (longlong)*(int *)(pcVar4 + 0x2610) * 0x20 + lVar9;
    if ((longlong)*(int *)(pcVar4 + 0x2610) * 0x20 != 0) {
      do {
        if (*(int *)(lVar9 + 4) == 6) {
          (**(code **)(lVar9 + 0x10))(pcVar4,lVar9);
        }
        lVar9 = lVar9 + 0x20;
      } while (lVar9 != lVar1);
    }
    iVar8 = 0;
    if (0 < *(int *)(pcVar4 + 0x1348)) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(pcVar4 + 0x1350) + (longlong)iVar8 * 8);
        if (lVar1 != 0) {
          FUN_18004b420(lVar1);
          FUN_18005b5c0(lVar1);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(pcVar4 + 0x1348));
    }
    lVar1 = *(longlong *)(pcVar4 + 0x1350);
    if (lVar1 != 0) {
      pcVar4[0x1348] = '\0';
      pcVar4[0x1349] = '\0';
      pcVar4[0x134a] = '\0';
      pcVar4[0x134b] = '\0';
      pcVar4[0x134c] = '\0';
      pcVar4[0x134d] = '\0';
      pcVar4[0x134e] = '\0';
      pcVar4[0x134f] = '\0';
      FUN_18005b5c0(lVar1);
      pcVar4[0x1350] = '\0';
      pcVar4[0x1351] = '\0';
      pcVar4[0x1352] = '\0';
      pcVar4[0x1353] = '\0';
      pcVar4[0x1354] = '\0';
      pcVar4[0x1355] = '\0';
      pcVar4[0x1356] = '\0';
      pcVar4[0x1357] = '\0';
    }
    lVar1 = *(longlong *)(pcVar4 + 0x1360);
    if (lVar1 != 0) {
      pcVar4[0x1358] = '\0';
      pcVar4[0x1359] = '\0';
      pcVar4[0x135a] = '\0';
      pcVar4[0x135b] = '\0';
      pcVar4[0x135c] = '\0';
      pcVar4[0x135d] = '\0';
      pcVar4[0x135e] = '\0';
      pcVar4[0x135f] = '\0';
      FUN_18005b5c0(lVar1);
      pcVar4[0x1360] = '\0';
      pcVar4[0x1361] = '\0';
      pcVar4[0x1362] = '\0';
      pcVar4[0x1363] = '\0';
      pcVar4[0x1364] = '\0';
      pcVar4[0x1365] = '\0';
      pcVar4[0x1366] = '\0';
      pcVar4[0x1367] = '\0';
    }
    lVar1 = *(longlong *)(pcVar4 + 0x1370);
    if (lVar1 != 0) {
      pcVar4[0x1368] = '\0';
      pcVar4[0x1369] = '\0';
      pcVar4[0x136a] = '\0';
      pcVar4[0x136b] = '\0';
      pcVar4[0x136c] = '\0';
      pcVar4[0x136d] = '\0';
      pcVar4[0x136e] = '\0';
      pcVar4[0x136f] = '\0';
      FUN_18005b5c0(lVar1);
      pcVar4[0x1370] = '\0';
      pcVar4[0x1371] = '\0';
      pcVar4[0x1372] = '\0';
      pcVar4[0x1373] = '\0';
      pcVar4[0x1374] = '\0';
      pcVar4[0x1375] = '\0';
      pcVar4[0x1376] = '\0';
      pcVar4[0x1377] = '\0';
    }
    pcVar4[0x13a8] = '\0';
    pcVar4[0x13a9] = '\0';
    pcVar4[0x13aa] = '\0';
    pcVar4[0x13ab] = '\0';
    pcVar4[0x13ac] = '\0';
    pcVar4[0x13ad] = '\0';
    pcVar4[0x13ae] = '\0';
    pcVar4[0x13af] = '\0';
    lVar1 = *(longlong *)(pcVar4 + 0x1380);
    if (lVar1 != 0) {
      pcVar4[0x1378] = '\0';
      pcVar4[0x1379] = '\0';
      pcVar4[0x137a] = '\0';
      pcVar4[0x137b] = '\0';
      pcVar4[0x137c] = '\0';
      pcVar4[0x137d] = '\0';
      pcVar4[0x137e] = '\0';
      pcVar4[0x137f] = '\0';
      FUN_18005b5c0(lVar1);
      pcVar4[0x1380] = '\0';
      pcVar4[0x1381] = '\0';
      pcVar4[0x1382] = '\0';
      pcVar4[0x1383] = '\0';
      pcVar4[0x1384] = '\0';
      pcVar4[0x1385] = '\0';
      pcVar4[0x1386] = '\0';
      pcVar4[4999] = '\0';
    }
    lVar1 = *(longlong *)(pcVar4 + 0x1390);
    if (lVar1 != 0) {
      pcVar4[5000] = '\0';
      pcVar4[0x1389] = '\0';
      pcVar4[0x138a] = '\0';
      pcVar4[0x138b] = '\0';
      pcVar4[0x138c] = '\0';
      pcVar4[0x138d] = '\0';
      pcVar4[0x138e] = '\0';
      pcVar4[0x138f] = '\0';
      FUN_18005b5c0(lVar1);
      pcVar4[0x1390] = '\0';
      pcVar4[0x1391] = '\0';
      pcVar4[0x1392] = '\0';
      pcVar4[0x1393] = '\0';
      pcVar4[0x1394] = '\0';
      pcVar4[0x1395] = '\0';
      pcVar4[0x1396] = '\0';
      pcVar4[0x1397] = '\0';
    }
    pcVar4[0x1f00] = '\0';
    pcVar4[0x1f01] = '\0';
    pcVar4[0x1f02] = '\0';
    pcVar4[0x1f03] = '\0';
    pcVar4[0x1f04] = '\0';
    pcVar4[0x1f05] = '\0';
    pcVar4[0x1f06] = '\0';
    pcVar4[0x1f07] = '\0';
    pcVar4[0x13b8] = '\0';
    pcVar4[0x13b9] = '\0';
    pcVar4[0x13ba] = '\0';
    pcVar4[0x13bb] = '\0';
    pcVar4[0x13bc] = '\0';
    pcVar4[0x13bd] = '\0';
    pcVar4[0x13be] = '\0';
    pcVar4[0x13bf] = '\0';
    pcVar4[0x13b0] = '\0';
    pcVar4[0x13b1] = '\0';
    pcVar4[0x13b2] = '\0';
    pcVar4[0x13b3] = '\0';
    pcVar4[0x13b4] = '\0';
    pcVar4[0x13b5] = '\0';
    pcVar4[0x13b6] = '\0';
    pcVar4[0x13b7] = '\0';
    pcVar4[0x1440] = '\0';
    pcVar4[0x1441] = '\0';
    pcVar4[0x1442] = '\0';
    pcVar4[0x1443] = '\0';
    pcVar4[0x1444] = '\0';
    pcVar4[0x1445] = '\0';
    pcVar4[0x1446] = '\0';
    pcVar4[0x1447] = '\0';
    pcVar4[0x13c8] = '\0';
    pcVar4[0x13c9] = '\0';
    pcVar4[0x13ca] = '\0';
    pcVar4[0x13cb] = '\0';
    pcVar4[0x13cc] = '\0';
    pcVar4[0x13cd] = '\0';
    pcVar4[0x13ce] = '\0';
    pcVar4[0x13cf] = '\0';
    FUN_1800516c0((undefined2 *)(pcVar4 + 0x1be0));
    lVar1 = *(longlong *)(pcVar4 + 0x1e60);
    if (lVar1 != 0) {
      pcVar4[0x1e58] = '\0';
      pcVar4[0x1e59] = '\0';
      pcVar4[0x1e5a] = '\0';
      pcVar4[0x1e5b] = '\0';
      pcVar4[0x1e5c] = '\0';
      pcVar4[0x1e5d] = '\0';
      pcVar4[0x1e5e] = '\0';
      pcVar4[0x1e5f] = '\0';
      FUN_18005b5c0(lVar1);
      pcVar4[0x1e60] = '\0';
      pcVar4[0x1e61] = '\0';
      pcVar4[0x1e62] = '\0';
      pcVar4[0x1e63] = '\0';
      pcVar4[0x1e64] = '\0';
      pcVar4[0x1e65] = '\0';
      pcVar4[0x1e66] = '\0';
      pcVar4[0x1e67] = '\0';
    }
    lVar1 = *(longlong *)(pcVar4 + 0x1e70);
    if (lVar1 != 0) {
      pcVar4[0x1e68] = '\0';
      pcVar4[0x1e69] = '\0';
      pcVar4[0x1e6a] = '\0';
      pcVar4[0x1e6b] = '\0';
      pcVar4[0x1e6c] = '\0';
      pcVar4[0x1e6d] = '\0';
      pcVar4[0x1e6e] = '\0';
      pcVar4[0x1e6f] = '\0';
      FUN_18005b5c0(lVar1);
      pcVar4[0x1e70] = '\0';
      pcVar4[0x1e71] = '\0';
      pcVar4[0x1e72] = '\0';
      pcVar4[0x1e73] = '\0';
      pcVar4[0x1e74] = '\0';
      pcVar4[0x1e75] = '\0';
      pcVar4[0x1e76] = '\0';
      pcVar4[0x1e77] = '\0';
    }
    lVar1 = *(longlong *)(pcVar4 + 0x1e80);
    if (lVar1 != 0) {
      pcVar4[0x1e78] = '\0';
      pcVar4[0x1e79] = '\0';
      pcVar4[0x1e7a] = '\0';
      pcVar4[0x1e7b] = '\0';
      pcVar4[0x1e7c] = '\0';
      pcVar4[0x1e7d] = '\0';
      pcVar4[0x1e7e] = '\0';
      pcVar4[0x1e7f] = '\0';
      FUN_18005b5c0(lVar1);
      pcVar4[0x1e80] = '\0';
      pcVar4[0x1e81] = '\0';
      pcVar4[0x1e82] = '\0';
      pcVar4[0x1e83] = '\0';
      pcVar4[0x1e84] = '\0';
      pcVar4[0x1e85] = '\0';

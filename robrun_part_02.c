  lVar9 = FUN_180011740(lVar7,1,"Background opacity");
  *(undefined4 *)(lVar9 + 0x18) = 0x42aa0000;
  *(undefined4 *)(lVar9 + 0x1c) = 0x41200000;
  *(undefined8 *)(lVar9 + 0x20) = 0x42c80000;
  *(undefined **)(lVar9 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar9 + 0x10) = 0xe0ba;
  param_1[0x1c1] = lVar9;
  lVar9 = FUN_180011740(lVar7,1,&DAT_1800d96ac);
  *(undefined4 *)(lVar9 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar9 + 0x1c) = 0x42700000;
  *(undefined8 *)(lVar9 + 0x20) = 0x43480000;
  *(undefined **)(lVar9 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar9 + 0x10) = 0xe257;
  param_1[0x1c2] = lVar9;
  lVar9 = FUN_180011740(lVar7,1,"Opacity");
  *(undefined4 *)(lVar9 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar9 + 0x1c) = 0x41f00000;
  *(undefined8 *)(lVar9 + 0x20) = 0x42c80000;
  *(undefined **)(lVar9 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar9 + 0x10) = 0xe0ba;
  param_1[0x1c3] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"Picture");
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined4 *)(lVar9 + 0x10) = 0xe0f6;
  param_1[0x1c4] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"Stripe");
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined4 *)(lVar9 + 0x10) = 0xe11c;
  param_1[0x1c9] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"Outline");
  *(undefined1 *)(lVar9 + 0x14) = 0;
  *(undefined4 *)(lVar9 + 0x10) = 0xe167;
  param_1[0x1ca] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"Name in rarity colour");
  *(undefined1 *)(lVar9 + 0x14) = 0;
  *(undefined4 *)(lVar9 + 0x10) = 0xe1dd;
  param_1[0x1cb] = lVar9;
  local_308 = (undefined8 *)&DAT_1800d99d0;
  local_300 = "Distance";
  local_2f8 = "Rarity";
  local_2f0 = "Value";
  local_2e8 = "Status";
  local_2e0 = "Price";
  local_9f8 = (char **)&local_308;
  local_9f0 = &local_2d8;
  puVar6 = FUN_1800083f0(local_670,&local_9f8);
  lVar9 = FUN_18002e640(lVar7,&DAT_1800d99f8,(longlong *)puVar6,0x1f);
  *(undefined4 *)(lVar9 + 0x10) = 0xe0f9;
  param_1[0x1c5] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"Marker");
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined4 *)(lVar9 + 0x10) = 0xe111;
  param_1[0x1c6] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"One line far away");
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined4 *)(lVar9 + 0x10) = 0xe11c;
  param_1[0x1c7] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"Hide overlapping labels");
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined4 *)(lVar9 + 0x10) = 0xe529;
  param_1[0x1c8] = lVar9;
  *(longlong *)(param_1[0x1bf] + 0x80) = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Line to valuable loot");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe111;
  param_1[0x1cc] = lVar7;
  local_360 = "Rare+";
  local_358 = "Epic+";
  local_350 = "Legendary+";
  local_348 = "Exotic";
  local_340 = "Any rarity";
  local_9f8 = &local_360;
  local_9f0 = (char **)&local_338;
  puVar6 = FUN_1800083f0(local_658,&local_9f8);
  lVar7 = FUN_180027580((longlong)puVar2,"Line from",(longlong *)puVar6,1);
  *(undefined4 *)(lVar7 + 0x10) = 0xe412;
  param_1[0x1cd] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Line min price");
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0x47c35000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d991c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe097;
  param_1[0x1ba] = lVar7;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Kinds";
  puVar2[1] = 0xe129;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Items on the ground");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0x1ce] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Cargo");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0x1cf] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Loot spots");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe111;
  param_1[0x1d0] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Containers");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0x1d1] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,&DAT_1800d9abc);
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ef;
  param_1[0x1d2] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Dropped bags");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0x1d3] = lVar7;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = &DAT_1800d9ad8;
  puVar2[1] = 0xe129;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe140;
  param_1[0x155] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar7 + 0x18) = 0x43480000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar7 + 0x20) = 0x44160000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x156] = lVar7;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Preview";
  *(undefined4 *)(puVar2 + 1) = 0xe0ba;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 3;
  lVar4 = FUN_18002eeb0(lVar5,"Vehicles & Robbery",0xe1d5);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Vehicles";
  puVar2[1] = 0xe1d5;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe140;
  param_1[0x135] = lVar7;
  lVar7 = FUN_18001f230((longlong)puVar2,&DAT_1800d95d0,1,0xff9628ff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe167;
  param_1[0x136] = lVar7;
  local_918 = (undefined8 *)&DAT_1800d9b04;
  local_910 = &DAT_1800d9b08;
  local_9f0 = (char **)&local_908;
  local_9f8 = (char **)&local_918;
  puVar6 = FUN_1800083f0(local_640,&local_9f8);
  lVar7 = FUN_180027580((longlong)puVar2,"Box type",(longlong *)puVar6,1);
  *(undefined4 *)(lVar7 + 0x10) = 0xe061;
  param_1[0x137] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Colour by kind");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
  param_1[0x13b] = lVar7;
  lVar7 = FUN_1800423c0((longlong)param_1,"Colour by kind",0xe1dd);
  lVar9 = FUN_180011740(lVar7,0,"Police cars");
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined1 *)(lVar9 + 0x6d) = 1;
  *(undefined4 *)(lVar9 + 0x5c) = 0x3e8c8c8d;
  *(undefined4 *)(lVar9 + 0x60) = 0x3f0c8c8d;
  *(undefined4 *)(lVar9 + 100) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0x68) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0x10) = 0xe1d5;
  param_1[0x13c] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"Own car");
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined1 *)(lVar9 + 0x6d) = 1;
  *(undefined4 *)(lVar9 + 0x5c) = 0x3edcdcdd;
  *(undefined4 *)(lVar9 + 0x60) = 0x3f6bebec;
  *(undefined4 *)(lVar9 + 100) = 0x3edcdcdd;
  *(undefined4 *)(lVar9 + 0x68) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0x10) = 0xe1d5;
  param_1[0x13d] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"Party cars");
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined1 *)(lVar9 + 0x6d) = 1;
  *(undefined4 *)(lVar9 + 0x5c) = 0x3ea0a0a1;
  *(undefined4 *)(lVar9 + 0x60) = 0x3f66e6e7;
  *(undefined4 *)(lVar9 + 100) = 0x3f66e6e7;
  *(undefined4 *)(lVar9 + 0x68) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0x10) = 0xe1d5;
  param_1[0x13e] = lVar9;
  lVar9 = FUN_180011740(lVar7,0,"Cars with players");
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined1 *)(lVar9 + 0x6d) = 1;
  *(undefined4 *)(lVar9 + 0x5c) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0x60) = 0x3f61e1e2;
  *(undefined4 *)(lVar9 + 100) = 0x3ea0a0a1;
  *(undefined4 *)(lVar9 + 0x68) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0x10) = 0xe1d5;
  param_1[0x13f] = lVar9;
  *(longlong *)(param_1[0x13b] + 0x80) = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,&DAT_1800d9588);
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe198;
  param_1[0x138] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Distance");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x139] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Owner");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe19f;
  param_1[0x13a] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Only occupied");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe1a4;
  param_1[0x77] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar7 + 0x18) = 0x43960000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar7 + 0x20) = 0x447a0000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x141] = lVar7;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Robbery";
  puVar2[1] = 0xe2ef;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe140;
  param_1[0x159] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Security panels");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0a9;
  param_1[0x15a] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Metal detectors");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe257;
  param_1[0x15b] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Safe doors");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe10b;
  param_1[0x15c] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Alarms");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe059;
  param_1[0x15d] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Cameras");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe064;
  param_1[0x83] = lVar7;
  FUN_180006da0((longlong)(param_1 + 5));
  puVar3 = *(undefined8 **)(param_1[6] + (param_1[7] - 1 & param_1[8] + param_1[9] + -1) * 8);
  *puVar3 = "Cameras";
  *(undefined4 *)(puVar3 + 1) = 0xe064;
  lVar7 = FUN_180011740((longlong)puVar3,0,"Hide broken");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0bb;
  param_1[0x84] = lVar7;
  lVar7 = FUN_180020020((longlong)puVar3,"Camera colour",0x64c8ffff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
  param_1[0x85] = lVar7;
  lVar7 = FUN_180020020((longlong)puVar3,"Broken colour",0x8c8c96ff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
  param_1[0x86] = lVar7;
  lVar7 = FUN_180020020((longlong)puVar3,"Alarm colour",0xff4646ff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
  param_1[0x87] = lVar7;
  *(undefined8 **)(param_1[0x83] + 0x80) = puVar3;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Vigilant NPCs");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe19f;
  param_1[0x15e] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Police call timer");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe296;
  param_1[0x15f] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar7 + 0x18) = 0x43480000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar7 + 0x20) = 0x44160000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x160] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Text size");
  *(undefined4 *)(lVar7 + 0x18) = 0x42a00000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar7 + 0x20) = 0x43480000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe198;
  param_1[0x161] = lVar7;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "World";
  puVar2[1] = 0xe111;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe140;
  param_1[0x78] = lVar7;
  lVar7 = FUN_18001f230((longlong)puVar2,"Traders",1,0x78dc78ff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe15c;
  param_1[0x79] = lVar7;
  lVar7 = FUN_18001f230((longlong)puVar2,"Police post",1,0x5a8cffff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe2ef;
  param_1[0x7a] = lVar7;
  lVar7 = FUN_18001f230((longlong)puVar2,"Hiding places",1,0xc896ffff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe20e;
  param_1[0x7b] = lVar7;
  lVar7 = FUN_18001f230((longlong)puVar2,"Charging stations",1,0xffd246ff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe053;
  param_1[0x7c] = lVar7;
  lVar7 = FUN_18001f230((longlong)puVar2,"Doors",0,0xb4bed2ff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe3d6;
  param_1[0x7d] = lVar7;
  lVar7 = FUN_18001f230((longlong)puVar2,"Dead players",1,0xff4646ff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe221;
  param_1[0x7e] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar7 + 0x18) = 0x43960000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar7 + 0x20) = 0x44bb8000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x7f] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Doors distance");
  *(undefined4 *)(lVar7 + 0x18) = 0x42700000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41200000;
  *(undefined8 *)(lVar7 + 0x20) = 0x43960000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe3d6;
  param_1[0x80] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Dead mark time");
  *(undefined4 *)(lVar7 + 0x18) = 0x42f00000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41200000;
  *(undefined8 *)(lVar7 + 0x20) = 0x44160000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d9c78;
  *(undefined4 *)(lVar7 + 0x10) = 0xe1e0;
  param_1[0x81] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Text size");
  *(undefined4 *)(lVar7 + 0x18) = 0x42a00000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar7 + 0x20) = 0x43480000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe198;
  param_1[0x82] = lVar7;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Bases";
  puVar2[1] = 0xe0f5;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe140;
  param_1[0x162] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Base info");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0f9;
  param_1[0x163] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Defense");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe158;
  param_1[0x164] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Money laundering");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe052;
  param_1[0x165] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Containers");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0x166] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Workstations");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe1b1;
  param_1[0x167] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Base list");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe106;
  param_1[0x168] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Door warning");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe3d6;
  param_1[0x169] = lVar7;
  lVar7 = FUN_18001f230((longlong)puVar2,"Own base",1,0x5ae678ff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe0f5;
  param_1[0x16a] = lVar7;
  lVar7 = FUN_18001f230((longlong)puVar2,"Clan bases",1,0x50c8ffff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe1a4;
  param_1[0x16b] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar7 + 0x18) = 0x447a0000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42c80000;
  *(undefined8 *)(lVar7 + 0x20) = 0x44bb8000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x16c] = lVar7;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Preview";
  *(undefined4 *)(puVar2 + 1) = 0xe0ba;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 3;
  lVar4 = FUN_18002eeb0(lVar5,"Tracers",0xe0ac);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Bullet tracers";
  puVar2[1] = 0xe0ac;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0x16d] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Your shots",1,0x4fe0ffff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe19f;
  param_1[0x16e] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Enemy shots",1,0xff4a3cff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe158;
  param_1[0x16f] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Team shots",1,0x5ce07cff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe1a4;
  param_1[0x170] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Hit points");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe180;
  param_1[0x171] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Lifetime");
  *(undefined4 *)(lVar5 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x20) = 0x41200000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d9c78;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1bf;
  param_1[0x172] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Thickness");
  *(undefined4 *)(lVar5 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x20) = 0x40c00000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d92f8;
  *(undefined4 *)(lVar5 + 0x10) = 0xe257;
  param_1[0x173] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar5 + 0x18) = 0x43c80000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar5 + 0x20) = 0x44480000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0x174] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Grenade path";
  puVar2[1] = 0xe123;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar4 + 0x14) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 0xe140;
  param_1[0x146] = lVar4;
  lVar4 = FUN_18001f230((longlong)puVar2,"My throw",1,0xffb432ff);
  *(undefined4 *)(lVar4 + 0x10) = 0xe0ac;
  param_1[0x147] = lVar4;
  lVar4 = FUN_18001f230((longlong)puVar2,"Thrown grenades",1,0xff5046ff);
  *(undefined4 *)(lVar4 + 0x10) = 0xe180;
  param_1[0x148] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Landing point");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe111;
  param_1[0x149] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Line width");
  *(undefined4 *)(lVar4 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x3f800000;
  *(undefined8 *)(lVar4 + 0x20) = 0x40c00000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d92f8;
  *(undefined4 *)(lVar4 + 0x10) = 0xe257;
  param_1[0x14a] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar4 + 0x18) = 0x43480000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar4 + 0x20) = 0x43c80000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar4 + 0x10) = 0xe14b;
  param_1[0x14b] = lVar4;
  lVar4 = FUN_180042660((longlong)param_1,"Radar","Combat",0xe497);
  lVar4 = FUN_18002eeb0(lVar4,"Radar",0xe497);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Radar";
  puVar2[1] = 0xe497;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe140;
  param_1[0x145] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Vehicles");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe1d5;
  param_1[0x14e] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Square radar");
  *(undefined1 *)(lVar4 + 0x14) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 0xe167;
  param_1[0x14c] = lVar4;
  local_458 = "Top left";
  local_450 = "Top right";
  local_448 = "Bottom left";
  local_440 = "Bottom right";
  local_9f8 = &local_458;
  local_9f0 = &local_438;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_628,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar4 = FUN_180011740((longlong)puVar2,2,"Position");
  FUN_180009f70((longlong *)(lVar4 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar4 + 0x38) = 1;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar4 + 0x10) = 0xe121;
  param_1[0x152] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"On the game map");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe111;
  param_1[0x14f] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,&DAT_1800d96ac);
  *(undefined4 *)(lVar4 + 0x18) = 0x43700000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x42f00000;
  *(undefined8 *)(lVar4 + 0x20) = 0x442f0000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d92f8;
  *(undefined4 *)(lVar4 + 0x10) = 0xe257;
  param_1[0x150] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Range");
  *(undefined4 *)(lVar4 + 0x18) = 0x43160000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar4 + 0x20) = 0x44fa0000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar4 + 0x10) = 0xe14b;
  param_1[0x151] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Opacity");
  *(undefined4 *)(lVar4 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x41a00000;
  *(undefined8 *)(lVar4 + 0x20) = 0x42c80000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar4 + 0x10) = 0xe0ba;
  param_1[0x14d] = lVar4;
  lVar4 = FUN_180042660((longlong)param_1,&DAT_1800d9e38,"Combat",0xe111);
  lVar5 = FUN_18002eeb0(lVar4,"Minimap",0xe111);
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Minimap";
  puVar2[1] = 0xe111;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe140;
  param_1[0x48] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,&DAT_1800d96ac);
  *(undefined4 *)(lVar7 + 0x18) = 0x43b40000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x43200000;
  *(undefined8 *)(lVar7 + 0x20) = 0x44610000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d92f8;
  *(undefined4 *)(lVar7 + 0x10) = 0xe257;
  param_1[0x49] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Range");
  *(undefined4 *)(lVar7 + 0x18) = 0x43960000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42200000;
  *(undefined8 *)(lVar7 + 0x20) = 0x44bb8000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x4a] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Opacity");
  *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41a00000;
  *(undefined8 *)(lVar7 + 0x20) = 0x42c80000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ba;
  param_1[0x4e] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Round minimap");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe076;
  param_1[0x68] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Hide in game windows");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0bb;
  param_1[0x47] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Icon size");
  *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41f00000;
  *(undefined8 *)(lVar7 + 0x20) = 0x437a0000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe257;
  param_1[0xd5] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Text size");
  *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar7 + 0x20) = 0x437a0000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe198;
  param_1[0xd6] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Hide overlapping labels");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0bb;
  param_1[0xb7] = lVar7;
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = &DAT_1800d9e7c;
  puVar2[1] = 0xe0ba;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Players");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe1a4;
  param_1[0x53] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Vehicles");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe1d5;
  param_1[0x52] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,&DAT_1800d98c0);
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0xba] = lVar7;
  FUN_180006da0((longlong)(param_1 + 5));
  puVar3 = *(undefined8 **)(param_1[6] + (param_1[7] - 1 & param_1[8] + param_1[9] + -1) * 8);
  *puVar3 = &DAT_1800d98c0;
  *(undefined4 *)(puVar3 + 1) = 0xe129;
  local_438 = &DAT_1800d98d4;
  pcStack_430 = "Uncommon+";
  local_428 = "Rare+";
  pcStack_420 = "Epic+";
  local_418 = "Legendary+";
  pcStack_410 = "Exotic";
  local_9a0 = (undefined8 *)0x0;
  puStack_998 = (undefined8 *)0x0;
  local_990 = 0;
  FUN_1800106a0((ulonglong *)&local_9a0,6);
  *local_9a0 = local_438;
  local_9a0[1] = pcStack_430;
  local_9a0[2] = local_428;
  local_9a0[3] = pcStack_420;
  local_9a0[4] = local_418;
  local_9a0[5] = pcStack_410;
  puStack_998 = local_9a0 + 6;
  local_9f8 = (char **)&local_9a0;
  lVar7 = FUN_180011740((longlong)puVar3,2,"Min rarity");
  FUN_180009f70((longlong *)(lVar7 + 0x40),(longlong *)&local_9a0);
  *(undefined4 *)(lVar7 + 0x38) = 0;
  FUN_180009380((longlong *)&local_9a0);
  *(undefined4 *)(lVar7 + 0x10) = 0xe412;
  param_1[0xd9] = lVar7;
  *(undefined8 **)(param_1[0xba] + 0x80) = puVar3;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Weapons");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ac;
  param_1[0xd3] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Cargo");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0xd4] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Places");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe111;
  param_1[0x54] = lVar7;
  FUN_180006da0((longlong)(param_1 + 5));
  puVar3 = *(undefined8 **)(param_1[6] + (param_1[7] - 1 & param_1[8] + param_1[9] + -1) * 8);
  *puVar3 = "Places";
  *(undefined4 *)(puVar3 + 1) = 0xe111;
  lVar7 = FUN_180011740((longlong)puVar3,1,"Icon size");
  *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar7 + 0x20) = 0x437a0000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe257;
  param_1[0x55] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar3,0,"Car spawns");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe1d5;
  param_1[0x56] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar3,0,"Traders");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe19f;
  param_1[0x57] = lVar7;
  *(undefined8 **)(param_1[0x54] + 0x80) = puVar3;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Bases");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0f5;
  param_1[0x51] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Robbery");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe2ef;
  param_1[0xd2] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Buildings");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0f5;
  *(undefined1 *)(lVar7 + 0x8c) = 1;
  param_1[0x50] = lVar7;
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Base info";
  puVar2[1] = 0xe0f5;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Owner & buildings");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0f9;
  param_1[0xce] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Defense & doors");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe158;
  param_1[0xcf] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Money laundering");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe052;
  param_1[0xd0] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Containers");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0xd1] = lVar7;
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Player info";
  puVar2[1] = 0xe1a4;
  lVar7 = FUN_180011740((longlong)puVar2,0,&DAT_1800d9588);
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe198;
  param_1[0xbc] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Weapon");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ac;
  param_1[0xbe] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Cargo & vest");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0xbf] = lVar7;
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Vehicle info";
  puVar2[1] = 0xe1d5;
  lVar5 = FUN_180011740((longlong)puVar2,0,&DAT_1800d9588);
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe198;
  param_1[0xc0] = lVar5;
  lVar4 = FUN_18002eeb0(lVar4,"Big map",0xe111);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Big map";
  puVar2[1] = 0xe111;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0x90] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Icon size");
  *(undefined4 *)(lVar5 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41f00000;
  *(undefined8 *)(lVar5 + 0x20) = 0x437a0000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe257;
  param_1[0xb0] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Text size");
  *(undefined4 *)(lVar5 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar5 + 0x20) = 0x437a0000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe198;
  param_1[0xb1] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Opacity");
  *(undefined4 *)(lVar5 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41a00000;
  *(undefined8 *)(lVar5 + 0x20) = 0x42c80000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ba;
  param_1[0xb2] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Range");
  *(undefined4 *)(lVar5 + 0x18) = 0x44bb8000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x42c80000;
  *(undefined8 *)(lVar5 + 0x20) = 0x453b8000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0xb3] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Distance");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0x91] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Hide overlapping labels");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0bb;
  param_1[0x92] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Hide world ESP");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0bb;
  param_1[0xa8] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = &DAT_1800d9e7c;
  puVar2[1] = 0xe0ba;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Players");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1a4;
  param_1[0x93] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Vehicles");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1d5;
  param_1[0x94] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,&DAT_1800d98c0);
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe129;
  param_1[0x95] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Weapons");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ac;
  param_1[0xae] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Cargo");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe129;
  param_1[0xaf] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Bases");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0f5;
  param_1[0x96] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Robbery");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe2ef;
  param_1[0xad] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Base info";
  puVar2[1] = 0xe0f5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Owner & buildings");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0f9;
  param_1[0xa9] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Defense & doors");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe158;
  param_1[0xaa] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Money laundering");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe052;
  param_1[0xab] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Containers");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe129;
  param_1[0xac] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Player info";
  puVar2[1] = 0xe1a4;
  lVar5 = FUN_180011740((longlong)puVar2,0,&DAT_1800d9588);
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe198;
  param_1[0x97] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Weapon");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ac;
  param_1[0x99] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Cargo & vest");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe129;
  param_1[0x9a] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Vehicle info";
  puVar2[1] = 0xe1d5;
  lVar5 = FUN_180011740((longlong)puVar2,0,&DAT_1800d9588);
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe198;
  param_1[0x9b] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Speed");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1e0;
  param_1[0x9c] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Loot info";
  puVar2[1] = 0xe129;
  lVar5 = FUN_180011740((longlong)puVar2,0,&DAT_1800d9588);
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe198;
  param_1[0x9d] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,&DAT_1800d99d0);
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ef;
  param_1[0x9e] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Rarity");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe412;
  param_1[0x9f] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Value");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe097;
  param_1[0xa0] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Status");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe10b;
  param_1[0xa1] = lVar5;
  local_408 = &DAT_1800d98d4;
  pcStack_400 = "Uncommon+";
  local_3f8 = "Rare+";
  pcStack_3f0 = "Epic+";
  local_3e8 = "Legendary+";
  pcStack_3e0 = "Exotic";
  local_988 = (undefined8 *)0x0;
  puStack_980 = (undefined8 *)0x0;
  local_978 = 0;
  FUN_1800106a0((ulonglong *)&local_988,6);
  *local_988 = local_408;
  local_988[1] = pcStack_400;
  local_988[2] = local_3f8;
  local_988[3] = pcStack_3f0;
  local_988[4] = local_3e8;
  local_988[5] = pcStack_3e0;
  puStack_980 = local_988 + 6;
  local_9f8 = (char **)&local_988;
  lVar5 = FUN_180011740((longlong)puVar2,2,"Min rarity");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)&local_988);
  *(undefined4 *)(lVar5 + 0x38) = 0;
  FUN_180009380((longlong *)&local_988);
  *(undefined4 *)(lVar5 + 0x10) = 0xe412;
  param_1[0xb4] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Loot kinds";
  puVar2[1] = 0xe129;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Items on the ground");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe129;
  param_1[0xa2] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Cargo");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe129;
  param_1[0xa3] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Loot spots");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe111;
  param_1[0xa4] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Containers");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe129;
  param_1[0xa5] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,&DAT_1800d9abc);
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe0ef;
  param_1[0xa6] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Dropped bags");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe129;
  param_1[0xa7] = lVar4;
  lVar4 = FUN_180042660((longlong)param_1,&DAT_1800d9f4c,"Combat",0xe11d);
  lVar4 = FUN_18002eeb0(lVar4,&DAT_1800d9f4c,0xe11d);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Police approaching";
  puVar2[1] = 0xe2ef;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0xe3] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Distance");
  *(undefined4 *)(lVar5 + 0x18) = 0x42f00000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar5 + 0x20) = 0x43c80000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0xe4] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Direction arrow");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe123;
  param_1[0xe5] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Aiming at you";
  puVar2[1] = 0xe0ac;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0xe6] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar5 + 0x18) = 0x43160000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar5 + 0x20) = 0x43c80000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0xe7] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Only armed");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ac;
  param_1[0xe8] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "New criminals";
  puVar2[1] = 0xe19f;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0xe9] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Distance");
  *(undefined4 *)(lVar5 + 0x18) = 0x43160000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar5 + 0x20) = 0x43c80000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0xea] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Notifications";
  puVar2[1] = 0xe059;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0xf0] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Duration");
  *(undefined4 *)(lVar5 + 0x18) = 0x40400000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x20) = 0x41200000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d9c78;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1e0;
  param_1[0xf1] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"World search");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0e8;
  param_1[0xef] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Car exit damage";
  puVar2[1] = 0xe1d5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0x70] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Bind list";
  puVar2[1] = 0xe284;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0x69] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Show switched-off");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0bb;
  param_1[0x6a] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Scale");
  *(undefined4 *)(lVar5 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar5 + 0x20) = 0x43480000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe257;
  param_1[0x6b] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Background opacity");
  *(undefined8 *)(lVar5 + 0x18) = 0x42b00000;
  *(undefined8 *)(lVar5 + 0x20) = 0x42c80000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ba;
  param_1[0x6c] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Player list";
  puVar2[1] = 0xe1a4;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0x88] = lVar5;
  local_520 = &DAT_1800da024;
  pcStack_518 = "Distance";
  local_510 = "Items";
  pcStack_508 = "Health";
  local_500 = "State";
  local_970 = (undefined8 *)0x0;
  puStack_968 = (undefined8 *)0x0;
  local_960 = 0;
  FUN_1800106a0((ulonglong *)&local_970,5);
  *local_970 = local_520;
  local_970[1] = pcStack_518;
  local_970[2] = local_510;
  local_970[3] = pcStack_508;
  local_970[4] = local_500;
  puStack_968 = local_970 + 5;
  local_9f8 = (char **)&local_970;
  lVar5 = FUN_180011740((longlong)puVar2,3,"Columns");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)&local_970);
  *(undefined4 *)(lVar5 + 0x3c) = 0x1f;
  FUN_180009380((longlong *)&local_970);
  *(undefined4 *)(lVar5 + 0x10) = 0xe106;
  param_1[0x89] = lVar5;
  local_550 = &DAT_1800d9630;
  puStack_548 = &DAT_1800d9588;
  local_540 = "Icon + name";
  local_9b8 = (undefined8 *)0x0;
  puStack_9b0 = (undefined8 *)0x0;
  local_9a8 = 0;
  FUN_1800106a0((ulonglong *)&local_9b8,3);
  *local_9b8 = local_550;
  local_9b8[1] = puStack_548;
  local_9b8[2] = local_540;
  puStack_9b0 = local_9b8 + 3;
  local_9f8 = (char **)&local_9b8;
  lVar5 = FUN_180011740((longlong)puVar2,2,"Weapon look");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)&local_9b8);
  *(undefined4 *)(lVar5 + 0x38) = 2;
  FUN_180009380((longlong *)&local_9b8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ac;
  param_1[0x8f] = lVar5;
  local_538 = "Distance";
  local_530 = &DAT_1800d9588;
  local_528 = &DAT_1800da024;
  local_9f8 = &local_538;
  local_9f0 = &local_520;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_610,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar5 = FUN_180011740((longlong)puVar2,2,"Sort by");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x38) = 0;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe37d;
  param_1[0x8a] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Max rows");
  *(undefined4 *)(lVar5 + 0x18) = 0x41700000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x40400000;
  *(undefined8 *)(lVar5 + 0x20) = 0x42700000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d8c40;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ef;
  param_1[0x8b] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar5 + 0x18) = 0x43960000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar5 + 0x20) = 0x449c4000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0x8c] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Scale");
  *(undefined4 *)(lVar5 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar5 + 0x20) = 0x43480000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe257;
  param_1[0x8d] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Background opacity");
  *(undefined8 *)(lVar5 + 0x18) = 0x42b00000;
  *(undefined8 *)(lVar5 + 0x20) = 0x42c80000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ba;
  param_1[0x8e] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Display";
  puVar2[1] = 0xe11d;
  local_208 = "Top left";
  local_200 = "Top center";
  local_1f8 = "Top right";
  local_1f0 = "Middle left";
  local_1e8 = "Middle right";
  local_1e0 = "Bottom left";
  local_1d8 = "Bottom center";
  local_1d0 = "Bottom right";
  local_9f8 = &local_208;
  local_9f0 = &local_1c8;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_5f8,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar4 = FUN_180011740((longlong)puVar2,2,"Position");
  FUN_180009f70((longlong *)(lVar4 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar4 + 0x38) = 1;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar4 + 0x10) = 0xe121;
  *(undefined1 *)(lVar4 + 0x8c) = 1;
  param_1[0xf2] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Offset X");
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined4 *)(lVar4 + 0x1c) = 0xc4f00000;
  *(undefined8 *)(lVar4 + 0x20) = 0x44f00000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d92f8;
  *(undefined4 *)(lVar4 + 0x10) = 0xe121;
  *(undefined1 *)(lVar4 + 0x8c) = 1;
  param_1[0xf3] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Offset Y");
  *(undefined4 *)(lVar4 + 0x18) = 0x428c0000;
  *(undefined4 *)(lVar4 + 0x1c) = 0xc4870000;
  *(undefined8 *)(lVar4 + 0x20) = 0x44870000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d92f8;
  *(undefined4 *)(lVar4 + 0x10) = 0xe121;
  *(undefined1 *)(lVar4 + 0x8c) = 1;
  param_1[0xf4] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Scale");
  *(undefined4 *)(lVar4 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar4 + 0x20) = 0x43480000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar4 + 0x10) = 0xe257;
  param_1[0xf5] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Background");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe167;
  param_1[0xf6] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,6,"Preview");
  *(undefined4 *)(lVar4 + 0x88) = 6;
  *(undefined4 *)(lVar4 + 0x10) = 0xe0ba;
  param_1[0xf7] = lVar4;
  lVar4 = FUN_180042660((longlong)param_1,&DAT_1800da0d4,"Other",0xe29a);
  lVar5 = FUN_18002eeb0(lVar4,"Camera",0xe257);
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Camera";
  puVar2[1] = 0xe257;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Field of view");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe257;
  param_1[0x142] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,&DAT_1800da0e8);
  *(undefined4 *)(lVar7 + 0x18) = 0x42b40000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42200000;
  *(undefined8 *)(lVar7 + 0x20) = 0x430c0000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800da0e4;
  *(undefined4 *)(lVar7 + 0x10) = 0xe257;
  param_1[0x143] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,&DAT_1800da0ec);
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined1 *)(lVar7 + 0x6c) = 1;
  *(undefined4 *)(lVar7 + 0x58) = 0x23b;
  *(undefined4 *)(lVar7 + 0x10) = 0xe621;
  param_1[0x157] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Zoom FOV");
  *(undefined4 *)(lVar7 + 0x18) = 0x41a00000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x40a00000;
  *(undefined8 *)(lVar7 + 0x20) = 0x425c0000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800da0e4;
  *(undefined4 *)(lVar7 + 0x10) = 0xe621;
  param_1[0x158] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Freecam");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined1 *)(lVar7 + 0x6c) = 1;
  *(undefined4 *)(lVar7 + 0x58) = 0x244;
  *(undefined4 *)(lVar7 + 0x10) = 0xe121;
  param_1[0x176] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Freecam speed");
  *(undefined4 *)(lVar7 + 0x18) = 0x41700000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x3f800000;
  *(undefined8 *)(lVar7 + 0x20) = 0x42a00000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800da110;
  *(undefined4 *)(lVar7 + 0x10) = 0xe1bf;
  param_1[0x177] = lVar7;
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = &DAT_1800da128;
  puVar2[1] = 0xe216;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0xe140;
  param_1[0x11c] = lVar7;
  local_2d8 = "Sunset";
  local_2d0 = "Night";
  local_2c8 = "Purple";
  local_2c0 = &DAT_1800da144;
  local_2b8 = "Green";
  local_2b0 = "Custom";
  local_9f8 = &local_2d8;
  local_9f0 = &local_2a8;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_5e0,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar7 = FUN_180011740((longlong)puVar2,2,&DAT_1800da128);
  FUN_180009f70((longlong *)(lVar7 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar7 + 0x38) = 0;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar7 + 0x10) = 0xe216;
  param_1[0x11d] = lVar7;
  lVar7 = FUN_180020020((longlong)puVar2,"Custom colour",0x5ab4ffff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
  param_1[0x11e] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Brightness");
  *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41a00000;
  *(undefined8 *)(lVar7 + 0x20) = 0x43960000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe178;
  param_1[0x11f] = lVar7;
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Minimap";
  puVar2[1] = 0xe111;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Larger range");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe111;
  param_1[0x45] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Range");
  *(undefined4 *)(lVar5 + 0x18) = 0x437a0000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x42c80000;
  *(undefined8 *)(lVar5 + 0x20) = 0x442f0000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe257;
  param_1[0x46] = lVar5;
  lVar4 = FUN_18002eeb0(lVar4,"Battle",0xe2b4);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Battle mode";
  puVar2[1] = 0xe2b4;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined1 *)(lVar5 + 0x6c) = 1;
  *(undefined4 *)(lVar5 + 0x58) = 0x223;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0xda] = lVar5;
  local_908 = (undefined8 *)&DAT_1800d9494;
  local_900 = "Toggle";
  local_9f8 = (char **)&local_908;
  local_9f0 = (char **)&local_8f8;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_8e0,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar5 = FUN_180011740((longlong)puVar2,2,"Activation");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x38) = 0;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe284;
  param_1[0xdb] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Indicator");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ba;
  param_1[0xdc] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Compact info");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe198;
  param_1[0xdd] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Players";
  puVar2[1] = 0xe1a4;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Only skeleton");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe358;
  param_1[0xde] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Distance limit");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0xe1] = lVar5;
  FUN_180006da0((longlong)(param_1 + 5));
  puVar2 = *(undefined8 **)(param_1[6] + (param_1[7] - 1 & param_1[8] + param_1[9] + -1) * 8);
  *puVar2 = "Distance limit";
  *(undefined4 *)(puVar2 + 1) = 0xe14b;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar5 + 0x18) = 0x43160000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar5 + 0x20) = 0x447a0000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0xe0] = lVar5;
  *(undefined8 **)(param_1[0xe1] + 0x80) = puVar2;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Battle hide";
  puVar2[1] = 0xe0bb;
  local_1c8 = "Knocked";
  local_1c0 = "Allies";
  local_1b8 = "Radar";
  local_1b0 = "Pointers";
  local_1a8 = &DAT_1800d9f4c;
  local_1a0 = "Bases";
  local_198 = "Minimap";
  local_190 = "Robbery";
  local_9f8 = &local_1c8;
  local_9f0 = &local_188;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_8c8,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar4 = FUN_180011740((longlong)puVar2,3,&DAT_1800da1fc);
  FUN_180009f70((longlong *)(lVar4 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar4 + 0x10) = 0xe0bb;
  param_1[0xe2] = lVar4;
  lVar4 = FUN_180042660((longlong)param_1,"Skins","Skin changer",0xe412);
  lVar5 = FUN_18002eeb0(lVar4,"Character",0xe21e);
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Character";
  *(undefined4 *)(puVar2 + 1) = 0xe21e;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 4;
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Preview";
  *(undefined4 *)(puVar2 + 1) = 0xe0ba;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 3;
  lVar5 = FUN_18002eeb0(lVar4,"Weapons",0xe0ac);
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Weapons";
  *(undefined4 *)(puVar2 + 1) = 0xe0ac;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 4;
  lVar5 = FUN_18002eeb0(lVar4,&DAT_1800da22c,0xe1d5);
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = &DAT_1800da22c;
  *(undefined4 *)(puVar2 + 1) = 0xe1d5;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 4;
  puVar2[2] = "E-0904 crash risk";
  FUN_180006da0(lVar5 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar5 + 0x18) +
            (*(longlong *)(lVar5 + 0x20) - 1U &
            *(longlong *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x30) + -1) * 8);
  *puVar2 = "Preview";
  *(undefined4 *)(puVar2 + 1) = 0xe0ba;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 3;
  lVar4 = FUN_18002eeb0(lVar4,"Models",0xe21e);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Models";
  *(undefined4 *)(puVar2 + 1) = 0xe21e;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 6;
  puVar2[2] = "E-0904 crash risk";
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Preview";
  *(undefined4 *)(puVar2 + 1) = 0xe0ba;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 3;
  lVar4 = FUN_180042660((longlong)param_1,"Exploits","Exploits",0xe1b4);
  lVar4 = FUN_18002eeb0(lVar4,"Exploits",0xe1b4);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Weapon";
  puVar2[1] = 0xe0ac;
  puVar2[2] = &DAT_1800da264;
  lVar5 = FUN_180011740((longlong)puVar2,0,"No recoil");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe180;
  param_1[0x23] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"No spread");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ac;
  param_1[0x24] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = &DAT_1800d98c0;
  puVar2[1] = 0xe129;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Instant search");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1b4;
  param_1[0x26] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Take all on key");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined1 *)(lVar5 + 0x6c) = 1;
  *(undefined4 *)(lVar5 + 0x58) = 0x239;
  *(undefined4 *)(lVar5 + 0x10) = 0xe2cc;
  param_1[0x27] = lVar5;
  FUN_180006da0((longlong)(param_1 + 5));
  puVar2 = *(undefined8 **)(param_1[6] + (param_1[7] - 1 & param_1[8] + param_1[9] + -1) * 8);
  *puVar2 = "Take all on key";
  *(undefined4 *)(puVar2 + 1) = 0xe2cc;
  local_2a8 = "Common";
  local_2a0 = "Uncommon";
  local_298 = &DAT_1800da2c4;
  local_290 = &DAT_1800da2cc;
  local_288 = "Legendary";
  local_280 = "Exotic";
  local_9f8 = &local_2a8;
  local_9f0 = &local_278;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_8b0,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar5 = FUN_180011740((longlong)puVar2,3,"Rarity");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x3c) = 0x3f;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe412;
  param_1[0x28] = lVar5;
  local_188 = "Rifles";
  local_180 = "Pistols";
  local_178 = "Shotguns";
  local_170 = &DAT_1800da304;
  local_168 = "Grenades";
  local_160 = &DAT_1800da31c;
  local_158 = "Vests";
  local_150 = "Armor plates";
  local_148 = "Backpacks";
  local_140 = "Belts";
  local_138 = "Medicine";
  local_130 = &DAT_1800da364;
  local_128 = "Lockpicks & tools";
  local_120 = "Goods";
  local_118 = &DAT_1800d9abc;
  local_110 = "Car parts";
  local_108 = "Other";
  local_9f8 = &local_188;
  local_9f0 = (char **)local_100;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_898,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar5 = FUN_180011740((longlong)puVar2,3,"Types");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x3c) = 0x1ffff;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe2d0;
  param_1[0x29] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Min value");
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0x47c35000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d991c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe097;
  param_1[0x2a] = lVar5;
  local_f8 = "Rifles";
  local_f0 = "Pistols";
  local_e8 = "Shotguns";
  local_e0 = &DAT_1800da304;
  local_d8 = "Grenades";
  local_d0 = &DAT_1800da31c;
  local_c8 = "Vests";
  local_c0 = "Armor plates";
  local_b8 = "Backpacks";
  local_b0 = "Belts";
  local_a8 = "Medicine";
  local_a0 = &DAT_1800da364;
  local_98 = "Lockpicks & tools";
  local_90 = "Goods";
  local_88 = &DAT_1800d9abc;
  local_80 = "Car parts";
  local_78 = "Other";
  local_9f8 = &local_f8;
  local_9f0 = (char **)local_70;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_880,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar5 = FUN_180011740((longlong)puVar2,3,"All rarities");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x3c) = 0xf;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe412;
  param_1[0x2b] = lVar5;
  *(undefined8 **)(param_1[0x27] + 0x80) = puVar2;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Effects";
  puVar2[1] = 0xe412;
  lVar4 = FUN_180011740((longlong)puVar2,0,"No flash");
  *(undefined1 *)(lVar4 + 0x14) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 0xe0bb;
  param_1[0x43] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"No smoke");
  *(undefined1 *)(lVar4 + 0x14) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 0xe216;
  param_1[0x44] = lVar4;
  lVar4 = FUN_180042660((longlong)param_1,"Miscellaneous","Other",0xe29a);
  lVar4 = FUN_18002eeb0(lVar4,&DAT_1800da400,0xe154);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = &DAT_1800da400;
  puVar2[1] = 0xe154;
  local_8f8 = (undefined8 *)&DAT_1800da408;
  local_8f0 = "English";
  local_9f8 = (char **)&local_8f8;
  local_9f0 = (char **)&local_8e8;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_868,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar5 = FUN_180011740((longlong)puVar2,2,"Language");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x38) = 0;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe0e8;
  *(undefined1 *)(lVar5 + 0x8c) = 1;
  param_1[0x10] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,4,"Menu key");
  *(undefined4 *)(lVar5 + 0x58) = 0x209;
  param_1[0x11] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,4,"Close overlay (Ctrl +)");
  *(undefined4 *)(lVar5 + 0x58) = 0x208;
  param_1[0x12] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Menu scale");
  *(undefined4 *)(lVar5 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x42700000;
  *(undefined8 *)(lVar5 + 0x20) = 0x42f00000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe257;
  param_1[10] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Game windows on top");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe529;
  param_1[0x15] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,6,"Reset menu settings");
  *(undefined4 *)(lVar5 + 0x88) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe148;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Accent";
  puVar2[1] = 0xe1dd;
  local_278 = "Focus blue";
  local_270 = "Ice blue";
  local_268 = "Violet";
  local_260 = &DAT_1800da4c4;
  local_258 = &DAT_1800da4cc;
  local_250 = "Amber";
  local_9f8 = &local_278;
  local_9f0 = (char **)&local_248;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_850,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar4 = FUN_180011740((longlong)puVar2,2,"Preset");
  FUN_180009f70((longlong *)(lVar4 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar4 + 0x38) = 0;
  FUN_180009380((longlong *)ppuVar8);
  param_1[0xd] = lVar4;
  lVar4 = FUN_180020020((longlong)puVar2,"Accent color",0x317cfeff);
  *(undefined4 *)(lVar4 + 0x10) = 0xe13b;
  param_1[0xc] = lVar4;
  lVar4 = FUN_180042660((longlong)param_1,"Configs","Other",0xe0d7);
  lVar4 = FUN_18002eeb0(lVar4,"Configs",0xe0d7);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x30) + *(longlong *)(lVar4 + 0x28) + -1 &
            *(longlong *)(lVar4 + 0x20) - 1U) * 8);
  *puVar2 = "Configs";
  *(undefined4 *)(puVar2 + 1) = 0xe0d7;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  return param_1;
}


ulonglong FUN_18001dcd0(undefined8 *param_1,char *param_2,byte *param_3,float *param_4,byte *param_5
                       ,uint param_6,char param_7)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float *pfVar4;
  char cVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;

  uVar2 = FUN_18002b220((longlong)param_1,param_2,param_3,param_4);
  cVar5 = (char)(uVar2 >> 0x28);
  if ((char)(uVar2 >> 0x20) == '\0' && cVar5 == '\0') {
    uVar6 = FUN_180043120((float *)(param_1 + 2),(int)uVar2,0);
    fVar8 = (float)uVar6;
LAB_18001dd5a:
    fVar10 = 0.0;
  }
  else {
    fVar10 = 1.0;
    uVar6 = FUN_180043120((float *)(param_1 + 2),(int)uVar2,0x3f800000);
    fVar8 = (float)uVar6;
    if (cVar5 == '\0') goto LAB_18001dd5a;
  }
  uVar3 = FUN_18002e340(0xff241914,0xff33241d,fVar8);
  local_a8 = *param_4;
  local_a4 = fVar10 + param_4[1];
  local_a0 = param_4[2];
  local_9c = param_4[3];
  FUN_180028890((int *)*param_1,&local_a8,(uint)uVar3,11.0,0);
  if (param_7 != '\0') {
    local_a8 = *param_4;
    local_a4 = fVar10 + param_4[1];
    local_a0 = param_4[2];
    local_9c = param_4[3];
    FUN_180028890((int *)*param_1,&local_a8,
                  (int)((float)(DAT_18011200c >> 0x18) * 0.42 + 0.5) << 0x18 |
                  DAT_18011200c & 0xffffff,11.0,0);
  }
  pbVar1 = param_5;
  if ((param_5 == (byte *)0x0) || (*param_5 == 0)) {
    fVar8 = 0.0;
  }
  else {
    pfVar4 = FUN_180071ff0(*(int **)(param_1[1] + 0x28),(float *)&param_5,
                           (float)(*(int **)(param_1[1] + 0x28))[5],3.4028235e+38,0.0,param_5,
                           (byte *)0x0,(undefined8 *)0x0);
    fVar8 = *pfVar4 / DAT_180112008;
  }
  if (param_6 == 0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = 13.0;
    if (0.0 < fVar8) {
      fVar9 = 10.0;
      goto LAB_18001ded8;
    }
  }
  fVar9 = 0.0;
LAB_18001ded8:
  fVar7 = (param_4[2] * 0.5 + *param_4) - (fVar11 + fVar8 + fVar9) * 0.5;
  if (param_6 != 0) {
    FUN_180023a40((int *)*param_1,*(int **)(param_1[1] + 0x78),param_6,fVar11 * 0.5 + fVar7,
                  param_4[3] * 0.5 + param_4[1] + fVar10,DAT_180112010);
    fVar7 = fVar9 + fVar11 + fVar7;
  }
  if (0.0 < fVar8) {
    FUN_180042c60((int *)*param_1,*(int **)(param_1[1] + 0x28),fVar7,
                  param_4[3] * 0.5 + param_4[1] + fVar10,-NAN,pbVar1,(byte *)0x0);
  }
  return uVar2 >> 0x30 & 0xff;
}


void FUN_18001dfd0(undefined8 *param_1,char *param_2,float *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;

  if ((*(int *)(param_2 + 0x88) == 6) && (param_2[0x14] != '\0')) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if (uVar4 == 0) {
    switch(*(undefined4 *)param_2) {
    case 1:
      uVar4 = 0xe29a;
      break;
    case 2:
    case 3:
      uVar4 = 0xe106;
      break;
    case 4:
      uVar4 = 0xe284;
      break;
    case 5:
      uVar4 = 0xe1dd;
      break;
    case 6:
      uVar4 = 0xe1b4;
      break;
    default:
      uVar4 = 0xe345;
    }
  }
  pbVar1 = (byte *)FUN_180043a40(*(char **)(param_2 + 8));
  local_48 = *param_3;
  local_44 = param_3[1] + 9.0;
  local_40 = param_3[2];
  local_3c = 0x42300000;
  uVar2 = FUN_18002ecb0(uVar4);
  FUN_18001dcd0(param_1,param_2,&DAT_1800de874,&local_48,pbVar1,(uint)uVar2,cVar3);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_18001e0e0(undefined8 *param_1,float *param_2,float param_3,char param_4,char param_5,
                       char param_6)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte *pbVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ulonglong uVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_208 [32];
  float local_1c4;
  float local_1c0;
  int *local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float *local_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  float local_180;
  float local_17c;
  byte local_170 [40];
  byte local_148 [96];
  ulonglong local_e8;

  local_e8 = DAT_180112300 ^ (ulonglong)auStackY_208;
  puVar1 = (undefined8 *)(DAT_1801159a0 + (longlong)(int)param_3 * 0x48);
  local_1c4 = param_3;
  lVar6 = FUN_180056d70();
  if ((((*(char *)(param_1 + 0xb) == '\0') && (param_1[0xc] == 0)) && (param_1[0x11] == 0)) &&
     (param_1[0x15] == 0)) {
    fVar15 = *(float *)(lVar6 + 0xe0) / DAT_180112008;
    if (fVar15 < *param_2) goto LAB_18001e236;
    fVar18 = *(float *)(lVar6 + 0xe4) / DAT_180112008;
    if (((fVar18 < param_2[1]) || (*param_2 + param_2[2] <= fVar15)) ||
       (param_2[1] + param_2[3] <= fVar18)) goto LAB_18001e236;
    bVar4 = true;
    FUN_1800491c0(local_170,0x28,0x1800de908,(ulonglong)(uint)param_3);
  }
  else {
LAB_18001e236:
    local_198 = param_2 + 3;
    FUN_1800491c0(local_170,0x28,0x1800de908,(ulonglong)(uint)local_1c4);
    bVar4 = false;
    if (param_4 == '\0') {
      uVar20 = 0;
      goto LAB_18001e288;
    }
  }
  local_198 = param_2 + 3;
  uVar20 = 0x3f800000;
LAB_18001e288:
  pfVar10 = param_2 + 1;
  pfVar12 = param_2 + 2;
  local_1a0 = pfVar12;
  local_190 = pfVar12;
  local_188 = pfVar10;
  uVar5 = FUN_180056a20(local_170);
  uVar17 = FUN_180043120((float *)(param_1 + 2),uVar5,(ulonglong)uVar20);
  local_1b8 = (int *)*param_1;
  uVar7 = FUN_18002e340(0xff271b16,0xff33241d,(float)uVar17 * 0.6);
  FUN_180028890(local_1b8,param_2,(uint)uVar7,10.0,0);
  if (param_4 == '\0') {
    uVar7 = FUN_18002e340(0xdffffff,
                          (int)((float)(DAT_18011200c >> 0x18) * 0.5 + 0.5) << 0x18 |
                          DAT_18011200c & 0xffffff,(float)uVar17);
    FUN_1800422b0(local_1b8,param_2,(uint)uVar7,10.0,1.0);
  }
  else {
    FUN_1800422b0(local_1b8,param_2,DAT_18011200c,10.0,1.0);
    local_1b0 = (*param_2 + 1.0) * DAT_180112008;
    local_1c4 = ((*param_2 + *pfVar12) - 1.0) * DAT_180112008;
    local_1ac = (*pfVar10 + 1.0) * DAT_180112008;
    local_1c0 = ((*pfVar10 + param_2[3]) - 1.0) * DAT_180112008;
    FUN_180071260(local_1b8,&local_1b0,&local_1c4,DAT_18011200c,9.0,0,1.5);
  }
  fVar15 = *pfVar10;
  fVar18 = *param_2;
  fVar21 = *pfVar12 - 12.0;
  fVar22 = param_2[3] - 34.0;
  if (param_5 == '\0') {
    fVar23 = 1.0;
  }
  else if (bVar4) {
    fVar23 = 0.75;
  }
  else {
    fVar23 = 0.38;
  }
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar11 = puVar1;
  }
  else {
    puVar11 = (undefined8 *)*puVar1;
  }
  uVar7 = 0;
  uVar13 = 0xcbf29ce484222325;
  if (puVar1[2] != 0) {
    do {
      pbVar9 = (byte *)((longlong)puVar11 + uVar7);
      uVar7 = uVar7 + 1;
      uVar13 = (uVar13 ^ *pbVar9) * 0x100000001b3;
    } while (uVar7 < (ulonglong)puVar1[2]);
  }
  local_1c4 = fVar15 + 6.0;
  plVar8 = FUN_1800040a0(0x180112120,(longlong *)&local_180,puVar1,uVar13);
  piVar14 = local_1b8;
  lVar6 = DAT_180112128;
  if (plVar8[1] != 0) {
    lVar6 = plVar8[1];
  }
  if (((lVar6 == DAT_180112128) || (DAT_1801159d8 == 0)) || (DAT_1801159e0 <= 0.0)) {
    if (0.0 <= fVar23) {
      fVar19 = 1.0;
      if (fVar23 <= 1.0) {
        fVar19 = fVar23;
      }
    }
    else {
      fVar19 = 0.0;
    }
    FUN_180023a40(local_1b8,*(int **)(param_1[1] + 0x70),0xf007,fVar21 * 0.5 + fVar18 + 6.0,
                  fVar22 * 0.5 + fVar15 + 6.0,
                  (float)((int)(fVar19 * 255.0 + 0.5) << 0x18 | 0xbca498));
  }
  else {
    fVar15 = *(float *)(lVar6 + 0x38);
    fVar19 = *(float *)(lVar6 + 0x3c);
    fVar2 = *(float *)(lVar6 + 0x30);
    fVar3 = *(float *)(lVar6 + 0x34);
    fVar16 = FUN_1800ba070(fVar21 / fVar15,fVar22 / fVar19);
    piVar14 = local_1b8;
    local_1b0 = (fVar2 + fVar15) / DAT_1801159e0;
    local_1ac = (fVar3 + fVar19) / DAT_1801159e4;
    local_1c0 = fVar3 / DAT_1801159e4;
    fVar18 = (fVar21 - fVar15 * fVar16) * 0.5 + fVar18 + 6.0;
    local_1c4 = (fVar22 - fVar19 * fVar16) * 0.5 + local_1c4;
    local_180 = fVar18 * DAT_180112008;
    local_1a8 = (fVar18 + fVar15 * fVar16) * DAT_180112008;
    local_17c = local_1c4 * DAT_180112008;
    local_1a4 = (local_1c4 + fVar19 * fVar16) * DAT_180112008;
    local_1c4 = fVar2 / DAT_1801159e0;
    FUN_1800700b0(local_1b8,DAT_1801159d8,(undefined8 *)&local_180,(undefined8 *)&local_1a8,
                  (undefined8 *)&local_1c4,(undefined8 *)&local_1b0,
                  (int)(fVar23 * 255.0) << 0x18 | 0xffffff);
  }
  pbVar9 = (byte *)(puVar1 + 4);
  if (0xf < (ulonglong)puVar1[7]) {
    pbVar9 = *(byte **)pbVar9;
  }
  pbVar9 = FUN_180028b30(*(int **)(param_1[1] + 0x50),pbVar9,*local_1a0 - 12.0,local_148,0x60);
  pfVar12 = local_190;
  if (param_4 == '\0') {
    fVar15 = -NAN;
    if (param_5 != '\0') {
      fVar15 = -3.3547604e+38;
    }
  }
  else {
    fVar15 = DAT_180112010;
  }
  fVar18 = *local_198;
  fVar21 = *pfVar10;
  fVar22 = *local_190;
  fVar23 = *param_2;
  pfVar10 = FUN_180071ff0(*(int **)(param_1[1] + 0x50),&local_180,
                          (float)(*(int **)(param_1[1] + 0x50))[5],3.4028235e+38,0.0,pbVar9,
                          (byte *)0x0,(undefined8 *)0x0);
  uVar7 = FUN_180042c60(piVar14,*(int **)(param_1[1] + 0x50),
                        (fVar22 * 0.5 + fVar23) - (*pfVar10 / DAT_180112008) * 0.5,
                        (fVar18 + fVar21) - 15.0,fVar15,pbVar9,(byte *)0x0);
  if (param_4 != '\0') {
    fVar18 = (*pfVar12 + *param_2) - 24.0;
    fVar15 = *local_188 + 6.0;
    local_1a4 = fVar15 * DAT_180112008;
    local_180 = (fVar18 + 18.0) * DAT_180112008;
    local_17c = (fVar15 + 18.0) * DAT_180112008;
    local_1a8 = fVar18 * DAT_180112008;
    FUN_180071360(piVar14,&local_1a8,&local_180,DAT_18011200c,DAT_180112008 * 9.0,0);
    uVar20 = 0xf00c;
    if (param_6 != '\0') {
      uVar20 = 0xf522;
    }
    uVar7 = FUN_180023a40(piVar14,*(int **)(param_1[1] + 0x90),uVar20,fVar18 + 9.0,fVar15 + 9.0,
                          DAT_180112014);
  }
  if ((bVar4) && (uVar7 = FUN_180059c10(0,'\0'), (char)uVar7 != '\0')) {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  else {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  return uVar7;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18001e980(undefined8 *param_1,float *param_2,byte *param_3,byte *param_4,char param_5,
                       char param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  size_t sVar13;
  longlong lVar14;
  byte *pbVar15;
  float *pfVar16;
  ulonglong uVar17;
  undefined8 ****ppppuVar18;
  ulonglong uVar19;
  undefined8 *_Buf2;
  undefined1 *puVar20;
  undefined4 uVar21;
  longlong lVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float unaff_XMM10_Da;
  float unaff_XMM13_Da;
  float fVar30;
  undefined1 auStackY_218 [8];
  undefined1 auStackY_210 [24];
  float local_1d4;
  float local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b4;
  float *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  byte *local_188;
  undefined8 ****local_180;
  undefined8 uStack_178;
  ulonglong local_170;
  int *local_168;
  byte local_158 [96];
  ulonglong local_f8;

  local_f8 = DAT_180112300 ^ (ulonglong)auStackY_218;
  local_188 = param_4;
  lVar11 = FUN_180056d70();
  if ((((*(char *)(param_1 + 0xb) == '\0') && (param_1[0xc] == 0)) && (param_1[0x11] == 0)) &&
     (param_1[0x15] == 0)) {
    fVar24 = *(float *)(lVar11 + 0xe0) / DAT_180112008;
    if (fVar24 < *param_2) goto LAB_18001eabc;
    local_1a0 = param_2 + 1;
    fVar28 = *(float *)(lVar11 + 0xe4) / DAT_180112008;
    if (((fVar28 < *local_1a0) || (local_1b0 = param_2 + 2, *param_2 + param_2[2] <= fVar24)) ||
       (local_1a8 = param_2 + 3, *local_1a0 + param_2[3] <= fVar28)) goto LAB_18001eabc;
    pbVar15 = &DAT_1800de8ec;
    if (*param_3 != 0) {
      pbVar15 = param_3;
    }
    local_198 = local_1b0;
    local_190 = local_1a0;
    uVar8 = FUN_180056a20(pbVar15);
LAB_18001eb25:
    uVar27 = 0x3f800000;
  }
  else {
LAB_18001eabc:
    local_1a0 = param_2 + 1;
    pfVar1 = param_2 + 2;
    pbVar15 = &DAT_1800de8ec;
    if (*param_3 != 0) {
      pbVar15 = param_3;
    }
    local_1b0 = pfVar1;
    uVar8 = FUN_180056a20(pbVar15);
    local_190 = param_2 + 1;
    local_1a8 = param_2 + 3;
    local_198 = pfVar1;
    if (param_5 != '\0') {
      local_1b0 = pfVar1;
      local_1a0 = local_190;
      goto LAB_18001eb25;
    }
    uVar27 = 0;
  }
  uVar26 = FUN_180043120((float *)(param_1 + 2),uVar8,(ulonglong)uVar27);
  piVar23 = (int *)*param_1;
  local_1c8 = piVar23;
  uVar12 = FUN_18002e340(0xff271b16,0xff33241d,(float)uVar26 * 0.6);
  FUN_180028890(piVar23,param_2,(uint)uVar12,10.0,0);
  if (param_5 == '\0') {
    uVar12 = FUN_18002e340(0xdffffff,
                           (int)((float)(DAT_18011200c >> 0x18) * 0.5 + 0.5) << 0x18 |
                           DAT_18011200c & 0xffffff,(float)uVar26);
    FUN_1800422b0(piVar23,param_2,(uint)uVar12,10.0,1.0);
  }
  else {
    FUN_1800422b0(piVar23,param_2,DAT_18011200c,10.0,1.0);
    fVar24 = param_2[1];
    local_1b8 = (*param_2 + 1.0) * DAT_180112008;
    local_1d4 = ((*param_2 + param_2[2]) - 1.0) * DAT_180112008;
    local_1b4 = (fVar24 + 1.0) * DAT_180112008;
    local_1d0 = ((fVar24 + param_2[3]) - 1.0) * DAT_180112008;
    FUN_180071260(piVar23,&local_1b8,&local_1d4,DAT_18011200c,9.0,0,1.5);
  }
  fVar24 = param_2[3];
  fVar28 = param_2[2];
  fVar30 = param_2[1];
  fVar29 = *param_2;
  if (param_6 == '\0') {
    local_170 = 0;
    local_180 = (undefined8 ****)0x0;
    uStack_178 = 0;
    local_168 = (int *)0x0;
    sVar13 = strlen((char *)param_3);
    FUN_1800028f0(&local_180,(undefined8 *)param_3,sVar13);
    piVar23 = local_168;
    uVar12 = local_170;
    ppppuVar7 = local_180;
    lVar11 = DAT_1801120b8;
    uVar17 = 0xcbf29ce484222325;
    ppppuVar18 = &local_180;
    if ((int *)0xf < local_168) {
      ppppuVar18 = local_180;
    }
    uVar19 = 0;
    if (local_170 != 0) {
      do {
        pbVar15 = (byte *)((longlong)ppppuVar18 + uVar19);
        uVar19 = uVar19 + 1;
        uVar17 = (uVar17 ^ *pbVar15) * 0x100000001b3;
      } while (uVar19 < local_170);
    }
    lVar22 = *(longlong *)(DAT_1801120c8 + 8 + (uVar17 & _DAT_1801120e0) * 0x10);
    if (lVar22 != DAT_1801120b8) {
      lVar14 = *(longlong *)(DAT_1801120c8 + (uVar17 & _DAT_1801120e0) * 0x10);
      local_1c0 = lVar14;
      while( true ) {
        _Buf2 = (undefined8 *)(lVar22 + 0x10);
        if (0xf < *(ulonglong *)(lVar22 + 0x28)) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        ppppuVar18 = &local_180;
        if ((int *)0xf < piVar23) {
          ppppuVar18 = ppppuVar7;
        }
        if (uVar12 == *(ulonglong *)(lVar22 + 0x20)) {
          if ((uVar12 == 0) || (iVar9 = memcmp(ppppuVar18,_Buf2,uVar12), iVar9 == 0))
          goto LAB_18001edb8;
          lVar14 = local_1c0;
        }
        if (lVar22 == lVar14) break;
        lVar22 = *(longlong *)(lVar22 + 8);
      }
    }
    lVar22 = 0;
LAB_18001edb8:
    lVar14 = lVar11;
    if (lVar22 != 0) {
      lVar14 = lVar22;
    }
    if (piVar23 < (int *)0x10) {
LAB_18001ee00:
      piVar23 = local_1c8;
      goto LAB_18001ee0c;
    }
    ppppuVar18 = ppppuVar7;
    if (((longlong)piVar23 + 1U < 0x1000) ||
       (ppppuVar18 = (undefined8 ****)ppppuVar7[-1],
       (ulonglong)((longlong)ppppuVar7 + (-8 - (longlong)ppppuVar18)) < 0x20)) {
      thunk_FUN_1800c3030(ppppuVar18);
      lVar11 = DAT_1801120b8;
      goto LAB_18001ee00;
    }
    param_6 = '\x05';
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)();
    puVar20 = auStackY_210;
LAB_18001efa3:
    uVar21 = (undefined4)lVar22;
    uVar8 = 0xf53f;
    if (param_6 != '\0') {
      uVar8 = 0xf2ea;
    }
    lVar11 = param_1[1];
    uVar10 = 0xff7c6256;
    if (param_6 != '\0') {
      uVar10 = uVar21;
    }
    *(undefined4 *)(puVar20 + 0x28) = uVar10;
    piVar5 = *(int **)(lVar11 + 0x70);
    *(float *)(puVar20 + 0x20) = fVar24 * 0.5 + fVar30;
    *(undefined8 *)(puVar20 + -8) = 0x18001eff0;
    FUN_180023a40(piVar23,piVar5,uVar8,fVar28 * 0.5 + fVar29,*(float *)(puVar20 + 0x20),
                  *(float *)(puVar20 + 0x28));
  }
  else {
    lVar14 = DAT_1801120b8;
    lVar11 = DAT_1801120b8;
LAB_18001ee0c:
    lVar22 = 0xffbca498;
    uVar21 = 0xffbca498;
    unaff_XMM10_Da = 8.0;
    fVar29 = fVar29 + 8.0;
    unaff_XMM13_Da = 16.0;
    fVar30 = fVar30 + 8.0;
    fVar28 = fVar28 - 16.0;
    fVar24 = fVar24 - 34.0;
    local_1d4 = fVar29;
    puVar20 = auStackY_218;
    if (((lVar14 == lVar11) || (puVar20 = auStackY_218, DAT_180115988 == 0)) ||
       (puVar20 = auStackY_218, DAT_180115990 <= 0.0)) goto LAB_18001efa3;
    fVar29 = *(float *)(lVar14 + 0x38);
    fVar2 = *(float *)(lVar14 + 0x3c);
    fVar3 = *(float *)(lVar14 + 0x30);
    fVar4 = *(float *)(lVar14 + 0x34);
    fVar25 = FUN_1800ba070(fVar28 / fVar29,fVar24 / fVar2);
    local_1b8 = fVar3 / DAT_180115990;
    fVar28 = (fVar28 - fVar29 * fVar25) * 0.5 + local_1d4;
    local_1b4 = fVar4 / DAT_180115994;
    local_1c8 = (int *)CONCAT44((fVar4 + fVar2) / DAT_180115994,(fVar3 + fVar29) / DAT_180115990);
    fVar30 = (fVar24 - fVar2 * fVar25) * 0.5 + fVar30;
    local_1d4 = (fVar28 + fVar29 * fVar25) * DAT_180112008;
    local_1c0 = CONCAT44(fVar30 * DAT_180112008,fVar28 * DAT_180112008);
    local_1d0 = (fVar30 + fVar2 * fVar25) * DAT_180112008;
    FUN_1800700b0(piVar23,DAT_180115988,&local_1c0,(undefined8 *)&local_1d4,(undefined8 *)&local_1b8
                  ,&local_1c8,0xffffffff);
    puVar20 = auStackY_218;
  }
  lVar11 = param_1[1];
  *(undefined4 *)(puVar20 + 0x20) = 0x60;
  fVar24 = **(float **)(puVar20 + 0x68);
  piVar5 = *(int **)(lVar11 + 0x50);
  *(undefined8 *)(puVar20 + -8) = 0x18001f01f;
  pbVar15 = FUN_180028b30(piVar5,local_188,fVar24 - 12.0,local_158,*(int *)(puVar20 + 0x20));
  piVar5 = *(int **)(param_1[1] + 0x50);
  if (param_5 != '\0') {
    uVar21 = DAT_180112010;
  }
  fVar24 = **(float **)(puVar20 + 0x70);
  fVar28 = (float)piVar5[5];
  fVar30 = **(float **)(puVar20 + 0x78);
  *(undefined8 *)(puVar20 + 0x38) = 0;
  *(undefined8 *)(puVar20 + 0x30) = 0;
  *(byte **)(puVar20 + 0x28) = pbVar15;
  *(undefined4 *)(puVar20 + 0x20) = 0;
  *(undefined8 *)(puVar20 + -8) = 0x18001f087;
  pfVar16 = FUN_180071ff0(piVar5,(float *)&local_188,fVar28,3.4028235e+38,*(float *)(puVar20 + 0x20)
                          ,*(byte **)(puVar20 + 0x28),*(byte **)(puVar20 + 0x30),
                          *(undefined8 **)(puVar20 + 0x38));
  pfVar1 = local_198;
  lVar11 = param_1[1];
  *(undefined8 *)(puVar20 + 0x30) = 0;
  fVar28 = *pfVar16;
  piVar5 = *(int **)(lVar11 + 0x50);
  *(byte **)(puVar20 + 0x28) = pbVar15;
  *(undefined4 *)(puVar20 + 0x20) = uVar21;
  fVar29 = *local_198;
  fVar2 = *param_2;
  *(undefined8 *)(puVar20 + -8) = 0x18001f0d4;
  uVar12 = FUN_180042c60(piVar23,piVar5,(fVar29 * 0.5 + fVar2) - (fVar28 / DAT_180112008) * 0.5,
                         (fVar24 + fVar30) - 14.0,*(float *)(puVar20 + 0x20),
                         *(byte **)(puVar20 + 0x28),*(byte **)(puVar20 + 0x30));
  if (param_5 != '\0') {
    fVar24 = *pfVar1;
    fVar28 = *param_2;
    *(undefined4 *)(puVar20 + 0x28) = 0;
    fVar28 = (fVar24 + fVar28) - 22.0;
    fVar24 = *local_190 + 6.0;
    *(float *)(puVar20 + 0x54) = fVar24 * DAT_180112008;
    *(float *)(puVar20 + 0x58) = (fVar28 + unaff_XMM13_Da) * DAT_180112008;
    *(float *)(puVar20 + 0x5c) = (fVar24 + unaff_XMM13_Da) * DAT_180112008;
    *(float *)(puVar20 + 0x50) = fVar28 * DAT_180112008;
    *(float *)(puVar20 + 0x20) = DAT_180112008 * unaff_XMM10_Da;
    *(undefined8 *)(puVar20 + -8) = 0x18001f170;
    FUN_180071360(piVar23,(float *)(puVar20 + 0x50),(float *)(puVar20 + 0x58),DAT_18011200c,
                  *(float *)(puVar20 + 0x20),*(uint *)(puVar20 + 0x28));
    lVar11 = param_1[1];
    *(undefined4 *)(puVar20 + 0x28) = DAT_180112014;
    piVar5 = *(int **)(lVar11 + 0x90);
    *(float *)(puVar20 + 0x20) = fVar24 + unaff_XMM10_Da;
    *(undefined8 *)(puVar20 + -8) = 0x18001f1a7;
    uVar12 = FUN_180023a40(piVar23,piVar5,0xf00c,fVar28 + unaff_XMM10_Da,*(float *)(puVar20 + 0x20),
                           *(float *)(puVar20 + 0x28));
  }
  if (puVar20[0x40] != '\0') {
    *(undefined8 *)(puVar20 + -8) = 0x18001f1c9;
    uVar12 = FUN_180059c10(0,'\0');
    if ((char)uVar12 != '\0') {
      uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
      goto LAB_18001f1d3;
    }
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
LAB_18001f1d3:
  *(undefined8 *)(puVar20 + -8) = 0x18001f1df;
  return uVar12;
}


longlong FUN_18001f230(longlong param_1,undefined8 param_2,undefined1 param_3,uint param_4)

{
  longlong lVar1;

  lVar1 = FUN_180011740(param_1,0,param_2);
  *(undefined1 *)(lVar1 + 0x14) = param_3;
  *(undefined1 *)(lVar1 + 0x6d) = 1;
  *(float *)(lVar1 + 0x5c) = (float)(param_4 >> 0x18) / 255.0;
  *(float *)(lVar1 + 0x60) = (float)(param_4 >> 0x10 & 0xff) / 255.0;
  *(float *)(lVar1 + 100) = (float)(param_4 >> 8 & 0xff) / 255.0;
  *(float *)(lVar1 + 0x68) = (float)(param_4 & 0xff) / 255.0;
  return lVar1;
}


void FUN_18001f2d0(undefined8 *param_1,char *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char *pcVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_res8 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8 [8];
  undefined8 local_d8;
  float local_d0;
  float local_cc;

  pcVar7 = *(char **)(param_2 + 0x90);
  fVar12 = 0.0;
  uVar13 = 0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar11 = param_3[3] * 0.5 + param_3[1];
  fVar9 = param_3[2] + *param_3;
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  local_f8[2] = 0.0;
  local_f8[3] = 0.0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8[4] = 0.0;
  local_f8[5] = 0.0;
  local_f8[6] = 0.0;
  local_f8[7] = 0.0;
  if (pcVar7 == (char *)0x0) {
    if (param_2[0x6d] != '\0') {
      pcVar7 = param_2;
    }
    if (pcVar7 == (char *)0x0) goto LAB_18001f3da;
  }
  fVar10 = fVar9 - 18.0;
  uStack_100 = 0x4190000041900000;
  fVar9 = fVar10 - 11.0;
  local_108 = CONCAT44(fVar11 - 9.0,fVar10);
LAB_18001f3da:
  if (param_2[0x6c] == '\0') {
    cVar3 = '\0';
  }
  else {
    local_f8[2] = FUN_18001f820((longlong)param_1,(longlong)param_2,'\0');
    cVar3 = param_2[0x6c];
    local_f8[0] = fVar9 - local_f8[2];
    local_f8[3] = 28.0;
    fVar9 = local_f8[0] - 11.0;
    local_f8[1] = fVar11 - 14.0;
  }
  if (*(int **)(param_2 + 0x98) != (int *)0x0) {
    local_f8[6] = (float)FUN_1800237c0((longlong)param_1,*(int **)(param_2 + 0x98));
    cVar3 = param_2[0x6c];
    local_f8[4] = fVar9 - local_f8[6];
    local_f8[7] = 30.0;
    fVar9 = local_f8[4] - 11.0;
    local_f8[5] = fVar11 - 15.0;
  }
  if (*(longlong *)(param_2 + 0x80) != 0) {
    fVar12 = 13.0;
    fVar14 = fVar9 - 13.0;
    fVar16 = fVar11 - 8.0;
    fVar15 = 16.0;
    fVar9 = fVar14 - 11.0;
  }
  if ((cVar3 == '\0' && (pcVar7 == (char *)0x0 && *(longlong *)(param_2 + 0x80) == 0)) &&
     (*(longlong *)(param_2 + 0x98) == 0)) {
    fVar9 = param_3[2] + *param_3;
  }
  else {
    fVar9 = (fVar9 + 11.0) - 12.0;
  }
  local_d8._0_4_ = *param_3;
  local_d8._4_4_ = param_3[1];
  local_cc = param_3[3];
  local_d0 = fVar9 - (float)local_d8;
  uVar4 = FUN_18002b220((longlong)param_1,param_2,&DAT_1800de844,(float *)&local_d8);
  if ((char)((ulonglong)uVar4 >> 0x30) != '\0') {
    param_2[0x14] = param_2[0x14] == '\0';
    *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  }
  FUN_1800438b0(param_1,(uint)uVar4,param_2[0x14],*param_3,fVar11);
  if (param_2[0x14] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f800000;
  }
  uVar4 = FUN_180043120((float *)(param_1 + 2),(uint)uVar4 ^ 0x51,(ulonglong)uVar8);
  cVar3 = param_2[0x14];
  uVar5 = FUN_18002e340(0xff7c6256,0xfffaf2ee,(float)uVar4);
  FUN_18002b910(param_1,(longlong)param_2,*param_3 + 62.0,fVar11,(fVar9 - *param_3) - 62.0,
                (float)uVar5,cVar3 == '\0');
  lVar1 = *(longlong *)(param_2 + 0x80);
  if (lVar1 != 0) {
    lVar2 = param_1[0x15];
    local_d8._0_4_ = fVar14 - 4.0;
    local_d8._4_4_ = fVar16 - 4.0;
    local_d0 = fVar12 + 8.0;
    local_cc = fVar15 + 8.0;
    uVar4 = FUN_18002b220((longlong)param_1,param_2,&DAT_1800de838,(float *)&local_d8);
    uVar8 = (uint)uVar4;
    if (((char)((ulonglong)uVar4 >> 0x30) != '\0') && (lVar2 != lVar1)) {
      param_1[0x15] = *(undefined8 *)(param_2 + 0x80);
      *(float *)(param_1 + 0x16) = fVar14;
      local_res8[0] = uVar8 ^ 0x70b0;
      *(float *)((longlong)param_1 + 0xb4) = fVar16;
      *(float *)(param_1 + 0x17) = fVar12;
      *(float *)((longlong)param_1 + 0xbc) = fVar15;
      *(uint *)(param_1 + 0x18) = uVar8;
      *(undefined1 *)((longlong)param_1 + 0xc4) = 1;
      plVar6 = FUN_1800061f0((float *)(param_1 + 2),&local_d8,(byte *)local_res8);
      *(undefined4 *)(*plVar6 + 0x14) = 0;
    }
    if (((char)((ulonglong)uVar4 >> 0x20) != '\0') || (lVar2 == lVar1)) {
      uVar13 = 0x3f800000;
    }
    uVar4 = FUN_180043120((float *)(param_1 + 2),uVar8,(ulonglong)uVar13);
    uVar5 = FUN_18002e340(0xffbca498,0xfffaf2ee,(float)uVar4);
    FUN_180023a40((int *)*param_1,*(int **)(param_1[1] + 0x78),0xf013,fVar12 * 0.5 + fVar14,
                  fVar15 * 0.5 + fVar16,(float)uVar5);
  }
  if (pcVar7 != (char *)0x0) {
    FUN_180042420(param_1,pcVar7,&local_108);
  }
  if (param_2[0x6c] != '\0') {
    FUN_18002b340(param_1,param_2,local_f8,'\0');
  }
  if (*(int **)(param_2 + 0x98) != (int *)0x0) {
    FUN_1800234f0(param_1,*(int **)(param_2 + 0x98),local_f8 + 4);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

float FUN_18001f820(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  byte *pbVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auStackY_78 [32];
  float local_38 [2];
  char local_30 [32];
  ulonglong local_10;

  local_10 = DAT_180112300 ^ (ulonglong)auStackY_78;
  if (*(longlong *)(param_1 + 0x80) == param_2) {
    pbVar2 = &DAT_1800de834;
  }
  else {
    pbVar2 = (byte *)FUN_18002b670(*(uint *)(param_2 + 0x58),local_30,0x20);
  }
  if (param_3 == '\0') {
    piVar1 = *(int **)(*(longlong *)(param_1 + 8) + 0x50);
    pfVar3 = FUN_180071ff0(piVar1,local_38,(float)piVar1[5],3.4028235e+38,0.0,pbVar2,(byte *)0x0,
                           (undefined8 *)0x0);
    fVar4 = *pfVar3 / DAT_180112008 + 28.0 + 10.0;
  }
  else {
    piVar1 = *(int **)(*(longlong *)(param_1 + 8) + 0x48);
    pfVar3 = FUN_180071ff0(piVar1,local_38,(float)piVar1[5],3.4028235e+38,0.0,pbVar2,(byte *)0x0,
                           (undefined8 *)0x0);
    fVar4 = FUN_1800ba000(74.0,*pfVar3 / DAT_180112008 + 20.0);
  }
  return fVar4;
}


void FUN_18001f910(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;

  uVar7 = (ulonglong)param_3;
  if (*param_1 != 3) {
    uVar4 = param_1[0xe];
    if (-1 < (int)uVar4) {
      if ((*(longlong *)(param_1 + 0x10) != *(longlong *)(param_1 + 0x12)) &&
         ((int)uVar4 < (int)(*(longlong *)(param_1 + 0x12) - *(longlong *)(param_1 + 0x10) >> 3)))
      goto LAB_18001fa6e;
    }
    uVar4 = 0;
LAB_18001fa6e:
    if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x12)) {
      pcVar2 = "";
    }
    else {
      pcVar2 = FUN_180043a40(*(char **)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 8));
    }
    FUN_1800491c0(param_2,uVar7,0x1800de830,pcVar2);
    return;
  }
  uVar4 = (uint)(*(longlong *)(param_1 + 0x12) - *(longlong *)(param_1 + 0x10) >> 3);
  if (0 < (int)uVar4) {
    uVar5 = 0;
    uVar6 = 0;
    iVar1 = 0;
    do {
      uVar3 = (uint)uVar6 + 1;
      if (((uint)param_1[0xf] >> ((byte)iVar1 & 0x1f) & 1) == 0) {
        uVar3 = (uint)uVar6;
      }
      iVar1 = iVar1 + 1;
      uVar6 = (ulonglong)uVar3;
    } while (iVar1 < (int)uVar4);
    if (uVar3 != 0) {
      if (uVar3 != uVar4) {
        if (2 < (int)uVar3) {
          FUN_1800491c0(param_2,uVar7,0x1800de860,uVar6);
          return;
        }
        *param_2 = '\0';
        do {
          if (((uint)param_1[0xf] >> ((byte)uVar5 & 0x1f) & 1) != 0) {
            if (*param_2 != '\0') {
              FUN_1800ab7c0(param_2,uVar7,", ",2);
            }
            pcVar2 = FUN_180043a40(*(char **)(*(longlong *)(param_1 + 0x10) + uVar5 * 8));
            FUN_1800ab7c0(param_2,uVar7,pcVar2,-1);
          }
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while ((int)uVar3 < (int)uVar4);
        return;
      }
      pcVar2 = "All";
      goto LAB_18001fa29;
    }
  }
  pcVar2 = "None";
LAB_18001fa29:
  pcVar2 = FUN_180043a40(pcVar2);
  FUN_1800491c0(param_2,uVar7,0x1800de830,pcVar2);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_18001fab0(void)

{
  longlong *plVar1;

  if (DAT_1801143a8 != (longlong *)0x0) {
    (**(code **)(*DAT_1801143a8 + 0x10))();
    DAT_1801143a8 = (longlong *)0x0;
  }
  if (DAT_1801157d0 != (longlong *)0x0) {
    (**(code **)(*DAT_1801157d0 + 0x10))();
    DAT_1801157d0 = (longlong *)0x0;
  }
  plVar1 = &DAT_1801157d8;
  do {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 1;
  } while (plVar1 != (longlong *)&DAT_1801157e8);
  _DAT_1801143b8 = 0;
  if (DAT_180115800 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_180115800);
    DAT_180115800 = (HGDIOBJ)0x0;
    DAT_180115808 = 0;
  }
  if (DAT_1801157f8 != (HDC)0x0) {
    DeleteDC(DAT_1801157f8);
    DAT_1801157f8 = (HDC)0x0;
  }
  DAT_1801157e8 = 0;
  DAT_1801157ec = 0;
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_18001fb80(HWND param_1,int *param_2,int *param_3,int *param_4,uint *param_5)

{
  BOOL BVar1;
  BOOL BVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  HMODULE hModule;
  FARPROC pFVar5;
  INT_PTR IVar6;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  int iVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  tagPOINT local_78;
  tagPOINT local_70;
  tagRECT local_68;
  ulonglong local_58;

  uVar4 = DAT_180112300 ^ (ulonglong)auStack_98;
  if (param_1 == (HWND)0x0) goto LAB_18001fcd9;
  local_58 = uVar4;
  BVar1 = IsWindow(param_1);
  uVar4 = CONCAT44(extraout_var,BVar1);
  if (BVar1 == 0) goto LAB_18001fcd9;
  BVar1 = IsIconic(param_1);
  uVar4 = CONCAT44(extraout_var_00,BVar1);
  if (BVar1 != 0) goto LAB_18001fcd9;
  hModule = GetModuleHandleW(L"user32.dll");
  if (hModule == (HMODULE)0x0) {
    pFVar5 = (FARPROC)0x0;
LAB_18001fc22:
    IVar6 = 0;
  }
  else {
    pFVar5 = GetProcAddress(hModule,"SetThreadDpiAwarenessContext");
    if (pFVar5 == (FARPROC)0x0) goto LAB_18001fc22;
    IVar6 = (*pFVar5)(0xfffffffffffffffc);
  }
  local_68.left = 0;
  local_68.top = 0;
  local_68.right = 0;
  local_68.bottom = 0;
  BVar1 = GetClientRect(param_1,&local_68);
  uVar4 = CONCAT44(extraout_var_01,BVar1);
  local_70.x = local_68.right;
  local_70.y = local_68.bottom;
  local_78.x = 0;
  local_78.y = 0;
  iVar7 = 0;
  iVar8 = 0;
  if (BVar1 != 0) {
    ClientToScreen(param_1,&local_78);
    BVar2 = ClientToScreen(param_1,&local_70);
    uVar4 = CONCAT44(extraout_var_02,BVar2);
    iVar7 = local_78.x;
    iVar8 = local_78.y;
  }
  if ((pFVar5 != (FARPROC)0x0) && (IVar6 != 0)) {
    uVar4 = (*pFVar5)(IVar6);
    iVar7 = local_78.x;
    iVar8 = local_78.y;
  }
  if (BVar1 != 0) {
    *param_2 = iVar7;
    *param_3 = iVar8;
    *param_4 = local_70.x - iVar7;
    uVar3 = local_70.y - iVar8;
    uVar4 = (ulonglong)uVar3;
    *param_5 = uVar3;
    if ((199 < *param_4) && (199 < (int)uVar3)) {
      return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    }
  }
LAB_18001fcd9:
  return uVar4 & 0xffffffffffffff00;
}


uint FUN_18001fd00(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar1 = *param_1;
  fVar2 = 0.0;
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
    fVar4 = 1.0;
    if (fVar1 <= 1.0) {
      fVar4 = fVar1;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar1 = param_1[2];
  if (0.0 <= fVar1) {
    fVar5 = 1.0;
    if (fVar1 <= 1.0) {
      fVar5 = fVar1;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar1 = param_1[3];
  if ((0.0 <= fVar1) && (fVar2 = 1.0, fVar1 <= 1.0)) {
    fVar2 = fVar1;
  }
  return (uint)(longlong)(fVar2 * 255.0 + 0.5) |
         (int)(longlong)(fVar5 * 255.0 + 0.5) << 8 |
         (int)(longlong)(fVar4 * 255.0 + 0.5) << 0x10 | (int)(longlong)(fVar3 * 255.0 + 0.5) << 0x18
  ;
}


void FUN_18001fdc0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_res8 [4];
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  longlong *plStack_58;
  longlong *local_50;

  lVar9 = *param_2;
  lVar2 = param_2[1];
  if (lVar9 != lVar2) {
    do {
      FUN_180009380((longlong *)(lVar9 + 0x18));
      lVar9 = lVar9 + 0x30;
    } while (lVar9 != lVar2);
    param_2[1] = *param_2;
  }
  lVar9 = *(longlong *)
           (*(longlong *)(param_1 + 8) +
           (*(longlong *)(param_1 + 0x10) - 1U &
           *(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x11d8)) * 8);
  lVar9 = *(longlong *)
           (*(longlong *)(lVar9 + 0x20) +
           (*(longlong *)(lVar9 + 0x28) - 1U &
           (longlong)*(int *)(param_1 + 0x11dc + (longlong)*(int *)(param_1 + 0x11d8) * 4) +
           *(longlong *)(lVar9 + 0x30)) * 8);
  uVar11 = *(ulonglong *)(lVar9 + 0x28);
  uVar1 = *(longlong *)(lVar9 + 0x30) + uVar11;
  if (*(longlong *)(lVar9 + 0x30) != 0) {
    do {
      puVar3 = *(undefined8 **)
                (*(longlong *)(lVar9 + 0x18) + (*(longlong *)(lVar9 + 0x20) - 1U & uVar11) * 8);
      local_60 = (longlong *)0x0;
      plStack_58 = (longlong *)0x0;
      local_50 = (longlong *)0x0;
      local_78 = *puVar3;
      local_70 = puVar3[2];
      local_68 = *(int *)((longlong)puVar3 + 0xc);
      uVar10 = puVar3[6];
      uVar8 = puVar3[7] + uVar10;
      if (puVar3[7] == 0) {
LAB_18001ff02:
        if (local_68 != 0) goto LAB_18001ff4d;
        if (local_60 != (longlong *)0x0) {
          if ((ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8) < 0x1000)
          goto LAB_18001ffe7;
          plVar7 = (longlong *)local_60[-1];
          uVar8 = (longlong)local_60 + (-8 - (longlong)plVar7);
          goto joined_r0x00018001ff3e;
        }
      }
      else {
        plVar7 = (longlong *)0x0;
        do {
          lVar2 = *(longlong *)(puVar3[4] + (puVar3[5] - 1 & uVar10) * 8);
          if (*(char *)(lVar2 + 0x8c) == '\0') {
            local_res8[0] = lVar2;
            if (plVar7 == local_50) {
              FUN_180003310((longlong *)&local_60,plVar7,local_res8);
              plVar7 = plStack_58;
            }
            else {
              *plVar7 = lVar2;
              plStack_58 = plStack_58 + 1;
              plVar7 = plStack_58;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar8);
        if (local_60 == plVar7) goto LAB_18001ff02;
LAB_18001ff4d:
        plVar6 = local_50;
        plVar5 = plStack_58;
        plVar7 = local_60;
        puVar3 = (undefined8 *)param_2[1];
        if (puVar3 == (undefined8 *)param_2[2]) {
          FUN_180003be0(param_2,puVar3,&local_78);
        }
        else {
          *puVar3 = local_78;
          puVar3[1] = local_70;
          *(int *)(puVar3 + 2) = local_68;
          local_50 = (longlong *)0x0;
          plStack_58 = (longlong *)0x0;
          local_60 = (longlong *)0x0;
          puVar3[3] = plVar7;
          puVar3[4] = plVar5;
          puVar3[5] = plVar6;
          param_2[1] = param_2[1] + 0x30;
        }
        if (local_60 != (longlong *)0x0) {
          if ((ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8) < 0x1000) {
LAB_18001ffe7:
            plVar7 = local_60;
          }
          else {
            plVar7 = (longlong *)local_60[-1];
            uVar8 = (longlong)local_60 + (-8 - (longlong)plVar7);
joined_r0x00018001ff3e:
            if (0x1f < uVar8) {
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          thunk_FUN_1800c3030(plVar7);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar1);
  }
  return;
}


longlong FUN_180020020(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;

  lVar1 = FUN_180011740(param_1,5,param_2);
  *(float *)(lVar1 + 0x5c) = (float)(param_3 >> 0x18) / 255.0;
  *(float *)(lVar1 + 0x60) = (float)(param_3 >> 0x10 & 0xff) / 255.0;
  *(float *)(lVar1 + 100) = (float)(param_3 >> 8 & 0xff) / 255.0;
  *(float *)(lVar1 + 0x68) = (float)(param_3 & 0xff) / 255.0;
  return lVar1;
}


void FUN_1800200b0(undefined8 *param_1,undefined8 param_2,float *param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  undefined *puVar14;
  float *pfVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined8 local_res10;
  float local_res18;
  float local_res1c;
  uint local_res20;
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
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;

  pcVar3 = (char *)param_1[0x11];
  if (pcVar3 != (char *)0x0) {
    cVar1 = *(char *)(param_1 + 0x14);
    *(undefined1 *)(param_1 + 0x14) = 0;
    cVar4 = FUN_180059aa0(0x20e,0);
    if (cVar4 == '\0') {
      uVar23 = 0;
      local_13c = DAT_180115914;
      if (DAT_180115914 <= 0.0) {
        local_13c = 360.0;
      }
      local_144 = *(float *)((longlong)param_1 + 0x94) + *(float *)((longlong)param_1 + 0x9c) + 5.0;
      local_140 = 206.0;
      local_148 = (*(float *)(param_1 + 0x13) + *(float *)(param_1 + 0x12)) - 206.0;
      if (612.0 < local_144 + local_13c) {
        local_144 = (*(float *)((longlong)param_1 + 0x94) - local_13c) - 5.0;
      }
      FUN_180028cb0(&local_148,8.0,8.0);
      FUN_180040310((int *)*param_1,&local_148,12.0,12.0,32.0,0.55);
      FUN_180062bc0(2,0xff261a14);
      FUN_180062bc0(5,0x12ffffff);
      FUN_180062bc0(7,0xff271b16);
      FUN_180062bc0(8,0xff33241d);
      FUN_180062bc0(9,0xff33241d);
      FUN_180062bc0(0,0xfffaf2ee);
      FUN_180062bc0(0x15,0xff241914);
      FUN_180062bc0(0x16,0xff33241d);
      FUN_180062bc0(0x17,0xff33241d);
      FUN_180062d80(3,DAT_180112008 * 12.0,param_3,param_4);
      FUN_180062d80(4,0x3f800000,param_3,param_4);
      local_res10 = CONCAT44(DAT_180112008 * 10.0,DAT_180112008 * 10.0);
      FUN_180062c90(2,(float *)&local_res10,param_3,param_4);
      FUN_180062d80(0xc,DAT_180112008 * 8.0,param_3,param_4);
      local_res10 = CONCAT44(DAT_180112008 * 8.0,DAT_180112008 * 6.0);
      FUN_180062c90(0xe,(float *)&local_res10,param_3,param_4);
      local_res10 = CONCAT44(DAT_180112008 * 5.0,DAT_180112008 * 8.0);
      FUN_180062c90(0xb,(float *)&local_res10,param_3,param_4);
      FUN_180062670(*(longlong *)(param_1[1] + 0x50));
      fVar21 = local_144;
      fVar19 = local_148;
      local_res18 = local_148 * DAT_180112008;
      local_res10 = 0;
      local_130 = local_148;
      local_12c = local_144;
      local_res1c = local_144 * DAT_180112008;
      FUN_1800679a0((undefined8 *)&local_res18,1,&local_res10);
      local_res10 = (ulonglong)(uint)(DAT_180112008 * 206.0);
      FUN_180067a20(&local_res10,0);
      FUN_180067990();
      FUN_18004ca40((byte *)"##colorpop",(undefined1 *)0x0,0x311ff);
      piVar6 = (int *)FUN_180057aa0();
      if ((0.0 < local_140) && (0.0 < local_13c)) {
        local_res1c = fVar21 * DAT_180112008;
        local_res10 = CONCAT44((local_13c + fVar21) * DAT_180112008,
                               (local_140 + fVar19) * DAT_180112008);
        local_res18 = fVar19 * DAT_180112008;
        FUN_180071360(piVar6,&local_res18,(float *)&local_res10,0xff261a14,DAT_180112008 * 12.0,0);
      }
      piVar6 = (int *)FUN_180057aa0();
      FUN_1800422b0(piVar6,&local_148,0x12ffffff,12.0,1.0);
      piVar6 = (int *)FUN_180057aa0();
      lVar7 = FUN_180056d70();
      fVar20 = DAT_180112008;
      fVar24 = *(float *)(lVar7 + 0xe0) / DAT_180112008;
      fVar25 = *(float *)(lVar7 + 0xe4) / DAT_180112008;
      local_res20 = FUN_18001fd00((float *)(pcVar3 + 0x5c));
      local_res20 = local_res20 >> 8;
      uVar16 = 0;
      local_res18 = fVar21 + 10.0;
      local_res10 = CONCAT44(local_res10._4_4_,fVar19 + 10.0);
      fVar19 = fVar19 + 10.0;
      do {
        fVar21 = (float)(uVar16 / 6) * 32.0 + local_res18;
        fVar19 = (float)(uVar16 % 6) * 32.0 + fVar19;
        if ((((*(char *)(param_1 + 0xb) != '\0') || (fVar24 < fVar19)) || (fVar25 < fVar21)) ||
           ((fVar19 + 26.0 <= fVar24 || (fVar21 + 26.0 <= fVar25)))) {
          fVar22 = 26.0;
          bVar5 = false;
        }
        else {
          fVar22 = 29.119999;
          fVar19 = fVar19 - 1.56;
          fVar21 = fVar21 - 1.56;
          bVar5 = true;
        }
        uVar2 = *(uint *)(&DAT_1800de880 + (ulonglong)uVar16 * 4);
        if ((uVar2 == local_res20) && (pcVar3[0x6e] == '\0')) {
          fVar17 = fVar22 + 7.0;
          if (0.0 < fVar17) {
            local_120 = (fVar19 - 3.5) * fVar20;
            local_11c = (fVar21 - 3.5) * fVar20;
            local_128 = ((fVar19 - 3.5) + fVar17) * fVar20;
            local_124 = ((fVar21 - 3.5) + fVar17) * fVar20;
            FUN_180071360(piVar6,&local_120,&local_128,0xffffffff,fVar20 * 9.5,0);
            fVar20 = DAT_180112008;
          }
          fVar17 = fVar22 + 4.0;
          if (0.0 < fVar17) {
            local_110 = (fVar19 - 2.0) * fVar20;
            local_10c = (fVar21 - 2.0) * fVar20;
            local_118 = ((fVar19 - 2.0) + fVar17) * fVar20;
            local_114 = ((fVar21 - 2.0) + fVar17) * fVar20;
            FUN_180071360(piVar6,&local_110,&local_118,0xff261a14,fVar20 * 8.0,0);
            fVar20 = DAT_180112008;
          }
        }
        if (0.0 < fVar22) {
          local_108 = (fVar19 + fVar22) * fVar20;
          local_104 = (fVar21 + fVar22) * fVar20;
          local_100 = fVar19 * fVar20;
          local_fc = fVar21 * fVar20;
          FUN_180071360(piVar6,&local_100,&local_108,
                        uVar2 >> 0x10 & 0xff | (uVar2 | 0xffffff00) << 0x10 | uVar2 & 0xff00,
                        fVar20 * 7.0,0);
          fVar20 = DAT_180112008;
          if (0.0 < fVar22) {
            fVar18 = DAT_180112008 * 0.5;
            fVar17 = FUN_1800ba000(0.0,DAT_180112008 * 7.0 - fVar18);
            local_148 = fVar19 * DAT_180112008 + fVar18;
            local_f8 = (fVar19 + fVar22) * DAT_180112008 - fVar18;
            local_144 = fVar21 * DAT_180112008 + fVar18;
            local_f4 = (fVar21 + fVar22) * DAT_180112008 - fVar18;
            FUN_180071260(piVar6,&local_148,&local_f8,0x2effffff,fVar17,0,fVar20);
            fVar20 = DAT_180112008;
          }
        }
        if (bVar5) {
          uVar8 = FUN_180059c10(0,'\0');
          if ((char)uVar8 != '\0') {
            *(float *)(pcVar3 + 0x5c) = (float)((uVar2 & 0xffffff) >> 0x10) / 255.0;
            *(float *)(pcVar3 + 0x60) = (float)(uVar2 >> 8 & 0xff) / 255.0;
            *(float *)(pcVar3 + 100) = (float)(uVar2 & 0xff) / 255.0;
            *(undefined4 *)(pcVar3 + 0x68) = *(undefined4 *)(pcVar3 + 0x68);
            pcVar3[0x6e] = '\0';
            *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
          }
          fVar20 = DAT_180112008;
        }
        fVar21 = local_12c;
        uVar16 = uVar16 + 1;
        fVar19 = (float)local_res10;
      } while ((int)uVar16 < 0x12);
      local_res10 = CONCAT44((local_12c + 10.0 + 78.0 + 12.0 + 12.0) * fVar20,
                             (local_130 + 10.0) * fVar20);
      FUN_1800670f0(&local_res10);
      FUN_180067970(DAT_180112008 * 186.0);
      uVar9 = FUN_180091cb0((float *)"##pick",(undefined1 (*) [12])(pcVar3 + 0x5c),0x2410198,
                            (undefined1 (*) [12])0x0);
      if ((char)uVar9 != '\0') {
        *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
      }
      local_res10 = CONCAT44(DAT_180112008 * 2.0,0x3f800000);
      FUN_180095380((float *)&local_res10);
      FUN_1800568d0((undefined8 *)&local_138);
      fVar19 = DAT_180112008;
      pfVar15 = &local_148;
      uVar8 = *param_1;
      fVar20 = local_138 / DAT_180112008;
      local_140 = 186.0;
      local_13c = 30.0;
      *param_1 = piVar6;
      fVar19 = local_134 / fVar19;
      local_148 = fVar20;
      local_144 = fVar19;
      uVar10 = FUN_18002b220((longlong)param_1,pcVar3,(byte *)"rainbow",pfVar15);
      if ((char)((ulonglong)uVar10 >> 0x30) != '\0') {
        pcVar3[0x6e] = pcVar3[0x6e] == '\0';
        *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
      }
      fVar19 = fVar19 + 15.0;
      puVar14 = (undefined *)(ulonglong)(byte)pcVar3[0x6e];
      FUN_1800438b0(param_1,(uint)uVar10,pcVar3[0x6e],fVar20,fVar19);
      if (pcVar3[0x6e] != '\0') {
        uVar23 = 0x3f800000;
      }
      uVar10 = FUN_180043120((float *)(param_1 + 2),(uint)uVar10 ^ 0x51,(ulonglong)uVar23);
      pbVar11 = (byte *)FUN_180043a40("Rainbow");
      uVar9 = FUN_18002e340(0xff7c6256,0xfffaf2ee,(float)uVar10);
      pwVar13 = *(wchar_t **)(param_1[1] + 0x38);
      FUN_180042c60(piVar6,(int *)pwVar13,fVar20 + 62.0,fVar19,(float)uVar9,pbVar11,(byte *)0x0);
      *param_1 = uVar8;
      local_res10 = CONCAT44(DAT_180112008 * 30.0 + local_134,local_138);
      FUN_1800670f0(&local_res10);
      local_res10 = CONCAT44(0x3f800000,DAT_180112008 * 186.0);
      FUN_180095380((float *)&local_res10);
      puVar12 = FUN_1800568d0(&local_res10);
      uVar8 = 0x81;
      DAT_180115914 = ((*(float *)((longlong)puVar12 + 4) / DAT_180112008 - fVar21) + 10.0) - 8.0;
      bVar5 = FUN_18005a4c0(0x81);
      FUN_180053370(uVar8,pwVar13,puVar14,(ulonglong)pfVar15);
      FUN_180062140();
      FUN_180062450(6);
      FUN_180062370(9);
      if ((((cVar1 == '\0') && (uVar8 = FUN_180059c10(0,'\0'), (char)uVar8 != '\0')) && (!bVar5)) &&
         (uVar8 = FUN_1800592a0(), (char)uVar8 == '\0')) {
        param_1[0x11] = 0;
      }
    }
    else {
      param_1[0x11] = 0;
    }
  }
  return;
}


undefined8 FUN_180020d30(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;

  lVar1 = thunk_FUN_1800a4b90();
  if (lVar1 == param_3) {
    return 0;
  }
  uVar2 = 1;
  if (*(ushort *)(param_1 + lVar1 * 2) < *(ushort *)(param_2 + lVar1 * 2)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Type propagation algorithm not settling

void FUN_180020d90(longlong param_1,float *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  code *pcVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  DWORD DVar11;
  float *pfVar12;
  longlong lVar13;
  byte *pbVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  short *psVar18;
  undefined8 *******pppppppuVar19;
  ulonglong *puVar20;
  undefined8 *puVar21;
  wchar_t *pwVar22;
  undefined8 uVar23;
  char *pcVar24;
  size_t sVar25;
  LPCWSTR lpFileName;
  longlong *plVar26;
  LPCWSTR ******pppppppWVar27;
  LPVOID pvVar28;
  LPCWSTR ******pppppppWVar29;
  undefined8 *puVar30;
  undefined8 *******pppppppuVar31;
  undefined8 ******ppppppuVar32;
  LPCWSTR *****ppppppWVar33;
  longlong lVar34;
  longlong *plVar35;
  int iVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  char cVar40;
  uint uVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uStackY_330;
  undefined1 auStackY_328 [8];
  undefined1 auStackY_320 [24];
  byte local_2e8 [4];
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  int *local_2c0;
  float local_2b8;
  float local_2b4;
  longlong local_2b0;
  float local_2a8 [2];
  undefined8 local_2a0;
  undefined8 uStack_298;
  longlong local_290;
  ulonglong uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  longlong local_270;
  ulonglong uStack_268;
  LPCWSTR ******local_260;
  undefined8 ******ppppppuStack_258;
  undefined8 ******local_250;
  undefined8 ******ppppppuStack_248;
  LPCWSTR ******local_240;
  undefined8 uStack_238;
  ulonglong local_230;
  ulonglong local_228;
  undefined8 *******local_220;
  undefined8 uStack_218;
  ulonglong local_210;
  ulonglong local_208;
  undefined8 *******local_200;
  undefined8 uStack_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  undefined8 *******local_1e0;
  undefined8 uStack_1d8;
  ulonglong local_1d0;
  ulonglong uStack_1c8;
  undefined8 *******local_1c0 [2];
  longlong local_1b0;
  ulonglong uStack_1a8;
  undefined8 *******local_1a0;
  longlong lStack_198;
  ulonglong local_190;
  ulonglong uStack_188;
  undefined8 *******local_180 [2];
  ulonglong local_170;
  ulonglong local_168;
  undefined8 *******local_160 [2];
  longlong local_150;
  ulonglong local_148;
  LPVOID local_138;
  longlong lStack_130;
  longlong local_128;
  ulonglong uStack_120;
  short local_10e [11];
  ulonglong local_f8;

  local_f8 = DAT_180112300 ^ (ulonglong)auStackY_328;
  piVar2 = *(int **)(param_1 + 0x1108);
  fVar50 = param_2[1];
  fVar51 = *param_2;
  fVar47 = param_2[2];
  local_280 = (LPCWSTR ******)CONCAT44(fVar50 + 4.0,fVar51);
  uStack_278._4_4_ = 0x42200000;
  uStack_278._0_4_ = fVar47;
  local_2d0 = fVar51;
  local_2c0 = piVar2;
  local_2b0 = param_1;
  pfVar12 = (float *)FUN_180043a40("Config name...");
  cVar9 = FUN_1800428e0((undefined8 *)(param_1 + 0x1108),(byte *)"cfgname",
                        (float *)(param_1 + 0x1308),0x28,(float *)&local_280,pfVar12,0xf15b,1);
  fVar50 = fVar50 + 4.0 + 50.0;
  local_280 = (LPCWSTR ******)CONCAT44(fVar50,fVar51);
  uStack_278 = CONCAT44(0x43340000,fVar47);
  if (0.0 < fVar47) {
    local_2e4 = (fVar47 + fVar51) * DAT_180112008;
    local_2e0 = (fVar50 + 180.0) * DAT_180112008;
    local_2d8 = fVar51 * DAT_180112008;
    local_2d4 = fVar50 * DAT_180112008;
    FUN_180071360(piVar2,&local_2d8,&local_2e4,0xff271b16,DAT_180112008 * 10.0,0);
  }
  FUN_1800422b0(piVar2,(float *)&local_280,0xdffffff,10.0,1.0);
  fVar43 = FUN_1800ba000(0.0,(float)(ulonglong)
                                    (*(longlong *)(param_1 + 0x12e0) -
                                     *(longlong *)(param_1 + 0x12d8) >> 5) * 36.0 - 170.0);
  lVar13 = FUN_180056d70();
  if ((((((*(longlong *)(param_1 + 0x1168) == 0) && (*(longlong *)(param_1 + 0x1190) == 0)) &&
        (*(longlong *)(param_1 + 0x11b0) == 0)) &&
       ((fVar45 = *(float *)(lVar13 + 0xe0) / DAT_180112008, fVar51 <= fVar45 &&
        (fVar44 = *(float *)(lVar13 + 0xe4) / DAT_180112008, fVar50 <= fVar44)))) &&
      ((fVar45 < fVar47 + fVar51 &&
       ((fVar44 < fVar50 + 180.0 && (lVar13 = FUN_180056d70(), *(float *)(lVar13 + 0xf0) != 0.0)))))
      ) && (lVar13 = FUN_180056d70(), *(char *)(lVar13 + 0xfc) == '\0')) {
    lVar13 = FUN_180056d70();
    *(float *)(param_1 + 0x1358) = *(float *)(param_1 + 0x1358) - *(float *)(lVar13 + 0xf0) * 36.0;
  }
  fVar43 = FUN_1800ba070(*(float *)(param_1 + 0x1358),fVar43);
  fVar43 = FUN_1800ba000(0.0,fVar43);
  *(float *)(param_1 + 0x1358) = fVar43;
  if (*(longlong *)(param_1 + 0x12d8) == *(longlong *)(param_1 + 0x12e0)) {
    pbVar14 = (byte *)FUN_180043a40("No configs yet");
    FUN_180042820(piVar2,*(int **)(*(longlong *)(param_1 + 0x1110) + 0x48),fVar47 * 0.5 + fVar51,
                  fVar50 + 90.0,-3.3547604e+38,pbVar14);
  }
  else {
    fVar45 = (fVar50 + 180.0) - 2.0;
    local_2e4 = ((fVar47 + fVar51) - 2.0) * DAT_180112008;
    local_2e0 = fVar45 * DAT_180112008;
    fVar43 = fVar50 + 2.0;
    local_2cc = (fVar51 + 2.0) * DAT_180112008;
    local_2c8 = fVar43 * DAT_180112008;
    local_2dc = fVar45;
    local_2d8 = fVar43;
    FUN_1800625b0(&local_2cc,&local_2e4,'\x01');
    fVar44 = fVar47 - 10.0;
    if (*(longlong *)(param_1 + 0x12e0) - *(longlong *)(param_1 + 0x12d8) >> 5 != 0) {
      uVar16 = 0;
      fVar46 = fVar50 + 5.0;
      fVar51 = fVar51 + 5.0;
      local_2e4 = fVar46;
      do {
        iVar36 = (int)uVar16;
        fVar48 = ((float)uVar16 * 36.0 + fVar46) - *(float *)(param_1 + 0x1358);
        fVar49 = fVar48 + 36.0;
        if (fVar50 <= fVar49) {
          if (fVar48 <= fVar50 + 180.0) {
            fVar43 = FUN_1800ba000(fVar48,fVar43);
            local_2a0 = (undefined8 *******)CONCAT44(fVar43,fVar51);
            uStack_298 = CONCAT44(uStack_298._4_4_,fVar44);
            fVar45 = FUN_1800ba070(fVar49,fVar45);
            uStack_298 = CONCAT44(fVar45 - fVar43,(undefined4)uStack_298);
            lVar13 = uVar16 * 0x20;
            pcVar24 = (char *)(*(longlong *)(param_1 + 0x12d8) + lVar13);
            if (7 < *(ulonglong *)(pcVar24 + 0x18)) {
              pcVar24 = *(char **)pcVar24;
            }
            uVar23 = FUN_18002b220(param_1 + 0x1108,pcVar24,(byte *)"cfgrow",(float *)&local_2a0);
            iVar1 = *(int *)(param_1 + 0x1330);
            if ((char)((ulonglong)uVar23 >> 0x30) != '\0') {
              *(int *)(param_1 + 0x1330) = iVar36;
            }
            cVar10 = (char)((ulonglong)uVar23 >> 0x20);
            if ((cVar10 == '\0') || (uVar15 = FUN_180059d10(0), (char)uVar15 == '\0')) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (cVar10 == '\0') {
              uVar41 = 0;
            }
            else {
              uVar41 = 0x3f800000;
            }
            uVar15 = FUN_180043120((float *)(param_1 + 0x1118),(uint)uVar23,(ulonglong)uVar41);
            if (iVar36 == iVar1) {
              uVar41 = 0x3f800000;
            }
            else {
              uVar41 = 0;
            }
            uVar23 = FUN_180043120((float *)(param_1 + 0x1118),(uint)uVar23 ^ 0x5e1,
                                   (ulonglong)uVar41);
            piVar2 = local_2c0;
            fVar43 = (float)uVar23;
            if (0.01 < fVar43) {
              fVar45 = fVar43 * 0.15;
              if (0.0 <= fVar45) {
                fVar46 = 1.0;
                if (fVar45 <= 1.0) {
                  fVar46 = fVar45;
                }
              }
              else {
                fVar46 = 0.0;
              }
              if (0.0 < fVar44) {
                local_2cc = (fVar51 + fVar44) * DAT_180112008;
                local_2c8 = fVar49 * DAT_180112008;
                local_2b8 = fVar51 * DAT_180112008;
                local_2b4 = fVar48 * DAT_180112008;
                FUN_180071360(local_2c0,&local_2b8,&local_2cc,
                              (int)((float)(DAT_18011200c >> 0x18) * fVar46 + 0.5) << 0x18 |
                              DAT_18011200c & 0xffffff,DAT_180112008 * 8.0,0);
              }
            }
            uVar17 = FUN_18002e340(0xff7c6256,(uint)DAT_180112010,fVar43);
            fVar48 = fVar48 + 18.0;
            FUN_180023a40(piVar2,*(int **)(*(longlong *)(param_1 + 0x1110) + 0x80),0xf15b,
                          fVar51 + 11.0 + 5.0,fVar48,(float)uVar17);
            puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x12d8) + lVar13);
            if (*(ulonglong *)(param_1 + 0x1350) < 8) {
              lVar34 = param_1 + 0x1338;
            }
            else {
              lVar34 = *(longlong *)(param_1 + 0x1338);
            }
            lVar3 = puVar30[2];
            if (7 < (ulonglong)puVar30[3]) {
              puVar30 = (undefined8 *)*puVar30;
            }
            if (lVar3 == *(longlong *)(param_1 + 0x1348)) {
              if (lVar3 == 0) {
                bVar42 = true;
              }
              else {
                uVar23 = FUN_180020d30((longlong)puVar30,lVar34,lVar3);
                bVar42 = (int)uVar23 == 0;
                if ((int)uVar23 != 0) goto LAB_1800214ee;
              }
              pbVar14 = (byte *)FUN_180043a40("loaded");
              piVar2 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x68);
              pfVar12 = FUN_180071ff0(piVar2,local_2a8,(float)piVar2[5],3.4028235e+38,0.0,pbVar14,
                                      (byte *)0x0,(undefined8 *)0x0);
              fVar45 = *pfVar12 / DAT_180112008 + 10.0;
            }
            else {
              bVar42 = false;
LAB_1800214ee:
              fVar45 = 0.0;
            }
            pbVar14 = (byte *)(*(longlong *)(param_1 + 0x12f0) + lVar13);
            if (0xf < *(ulonglong *)(pbVar14 + 0x18)) {
              pbVar14 = *(byte **)pbVar14;
            }
            pbVar14 = FUN_180028b30(*(int **)(*(longlong *)(param_1 + 0x1110) + 0x40),pbVar14,
                                    ((fVar44 - 33.0) - 11.0) - fVar45,(byte *)&local_138,0x40);
            fVar43 = FUN_1800ba000((float)uVar15,fVar43);
            uVar17 = FUN_18002e340(0xffbca498,0xfffaf2ee,fVar43);
            piVar2 = local_2c0;
            FUN_180042c60(local_2c0,*(int **)(*(longlong *)(param_1 + 0x1110) + 0x40),
                          fVar51 + 11.0 + 12.0 + 10.0,fVar48,(float)uVar17,pbVar14,(byte *)0x0);
            if (bVar42) {
              pbVar14 = (byte *)FUN_180043a40("loaded");
              fVar43 = DAT_180112010;
              piVar4 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x68);
              pfVar12 = FUN_180071ff0(piVar4,(float *)&local_280,(float)piVar4[5],3.4028235e+38,0.0,
                                      pbVar14,(byte *)0x0,(undefined8 *)0x0);
              FUN_180042c60(piVar2,piVar4,((fVar51 + fVar44) - 11.0) - *pfVar12 / DAT_180112008,
                            fVar48,fVar43,pbVar14,(byte *)0x0);
            }
            if (bVar8) {
              *(int *)(param_1 + 0x1330) = iVar36;
              FUN_18000a3a0(&local_2b0);
            }
            fVar46 = local_2e4;
            fVar43 = local_2d8;
            fVar45 = local_2dc;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)
                        (*(longlong *)(param_1 + 0x12e0) - *(longlong *)(param_1 + 0x12d8) >> 5));
      fVar51 = local_2d0;
    }
    FUN_180061fc0();
  }
  puVar37 = auStackY_328;
  puVar38 = auStackY_328;
  puVar21 = (undefined8 *)(param_1 + 0x1108);
  fVar50 = fVar50 + 190.0;
  fVar43 = (fVar47 - 10.0) * 0.5;
  local_2a0 = (undefined8 *******)CONCAT44(fVar50,fVar51);
  uStack_298 = CONCAT44(0x42300000,fVar43);
  pbVar14 = (byte *)FUN_180043a40("Create");
  uVar16 = FUN_18001dcd0(puVar21,"cfgcreate",&DAT_1800de9c8,(float *)&local_2a0,pbVar14,0xf067,'\0')
  ;
  fVar47 = fVar43 + fVar51 + 10.0;
  local_2a0 = (undefined8 *******)CONCAT44(fVar50,fVar47);
  uStack_298 = CONCAT44(0x42300000,fVar43);
  pbVar14 = (byte *)FUN_180043a40("Delete");
  uVar17 = FUN_18001dcd0(puVar21,"cfgdel",&DAT_1800de9c8,(float *)&local_2a0,pbVar14,0xf1f8,'\0');
  puVar30 = (undefined8 *)(uVar17 & 0xff);
  local_2a0 = (undefined8 *******)CONCAT44(fVar50 + 54.0,fVar51);
  uStack_298 = CONCAT44(0x42300000,fVar43);
  pbVar14 = (byte *)FUN_180043a40("Save");
  uVar17 = FUN_18001dcd0(puVar21,"cfgsave",&DAT_1800de9c8,(float *)&local_2a0,pbVar14,0xf0c7,'\0');
  cVar40 = (char)uVar17;
  local_2a0 = (undefined8 *******)CONCAT44(fVar50 + 54.0,fVar47);
  uStack_298 = CONCAT44(0x42300000,fVar43);
  pbVar14 = (byte *)FUN_180043a40("Load");
  uVar17 = FUN_18001dcd0(puVar21,"cfgload",&DAT_1800de9c8,(float *)&local_2a0,pbVar14,0xf019,'\0');
  cVar10 = (char)uVar17;
  puVar39 = auStackY_328;
  if ((char)uVar16 == '\0' && cVar9 == '\0') {
LAB_18002214c:
    puVar38 = puVar39;
    cVar9 = (char)puVar30;
    if ((cVar9 == '\0' && cVar40 == '\0') && (cVar10 == '\0')) goto LAB_18002282f;
    if (puVar38[0x41] == '\0') {
      *(undefined8 *)(puVar38 + -8) = 0x180022174;
      pcVar24 = FUN_180043a40("Choose a config in the list");
      local_220 = (undefined8 *******)0x0;
      uStack_218 = 0;
      local_210 = 0;
      local_208 = 0;
      *(undefined8 *)(puVar38 + -8) = 0x180022190;
      sVar25 = strlen(pcVar24);
      *(undefined8 *)(puVar38 + -8) = 0x18002219f;
      FUN_1800028f0(&local_220,(undefined8 *)pcVar24,sVar25);
      if ((undefined8 ********)(param_1 + 0x1360) != &local_220) {
        pppppppuVar19 = &local_220;
        if (0xf < local_208) {
          pppppppuVar19 = local_220;
        }
        *(undefined8 *)(puVar38 + -8) = 0x1800221c7;
        FUN_180002370((longlong *)(param_1 + 0x1360),pppppppuVar19,local_210);
      }
      *(undefined4 *)(param_1 + 0x1380) = 0x40266666;
      if (local_208 < 0x10) goto LAB_18002282f;
      pppppppuVar19 = local_220;
      uVar16 = local_208;
LAB_1800221e4:
      cVar9 = (char)puVar30;
      pppppppuVar31 = pppppppuVar19;
      if ((uVar16 + 1 < 0x1000) ||
         (pppppppuVar31 = (undefined8 *******)pppppppuVar19[-1],
         (ulonglong)((longlong)pppppppuVar19 + (-8 - (longlong)pppppppuVar31)) < 0x20)) {
        *(undefined8 *)(puVar38 + -8) = 0x180022211;
        thunk_FUN_1800c3030(pppppppuVar31);
        goto LAB_18002282f;
      }
      goto LAB_18002254b;
    }
    if (cVar40 != '\0') {
      plVar26 = (longlong *)
                ((longlong)*(int *)(param_1 + 0x1330) * 0x20 + *(longlong *)(param_1 + 0x12d8));
      *(undefined8 *)(puVar38 + -8) = 0x180022247;
      pwVar22 = (wchar_t *)FUN_18002f0e0(&local_138,(undefined8 *)(param_1 + 0x12b8),plVar26);
      *(undefined8 *)(puVar38 + -8) = 0x180022253;
      uVar16 = FUN_180040170(param_1,pwVar22);
      puVar30 = (undefined8 *)(uVar16 & 0xff);
      cVar9 = (char)uVar16;
      if (7 < uStack_120) {
        pvVar28 = local_138;
        if ((0xfff < uStack_120 * 2 + 2) &&
           (pvVar28 = *(LPVOID *)((longlong)local_138 + -8),
           0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)pvVar28)))) goto LAB_18002254b;
        *(undefined8 *)(puVar38 + -8) = 0x1800222a0;
        thunk_FUN_1800c3030(pvVar28);
      }
      if (cVar9 != '\0') {
        if ((longlong *)(param_1 + 0x1338) != plVar26) {
          if ((ulonglong)plVar26[3] < 8) {
            plVar35 = plVar26;
          }
          else {
            plVar35 = (longlong *)*plVar26;
          }
          uVar16 = plVar26[2];
          *(undefined8 *)(puVar38 + -8) = 0x1800222cd;
          FUN_1800024e0((longlong *)(param_1 + 0x1338),plVar35,uVar16);
        }
        puVar30 = (undefined8 *)
                  ((longlong)*(int *)(param_1 + 0x1330) * 0x20 + *(longlong *)(param_1 + 0x12f0));
        *(undefined8 *)(puVar38 + -8) = 0x1800222eb;
        pcVar24 = FUN_180043a40("Saved");
        local_2a0 = (undefined8 *******)0x0;
        uStack_298 = 0;
        local_290 = 0;
        uStack_288 = 0;
        *(undefined8 *)(puVar38 + -8) = 0x180022307;
        sVar25 = strlen(pcVar24);
        *(undefined8 *)(puVar38 + -8) = 0x180022316;
        FUN_1800028f0(&local_2a0,(undefined8 *)pcVar24,sVar25);
        lVar13 = local_290;
        if (uStack_288 - local_290 < 2) {
          *(undefined8 *)(puVar38 + 0x20) = 2;
          *(undefined8 *)(puVar38 + -8) = 0x180022372;
          plVar26 = FUN_180005300(&local_2a0,2,0,(undefined8 *)&DAT_1800de9b4,
                                  *(ulonglong *)(puVar38 + 0x20));
        }
        else {
          local_290 = local_290 + 2;
          pppppppuVar19 = (undefined8 *******)&local_2a0;
          if (0xf < uStack_288) {
            pppppppuVar19 = local_2a0;
          }
          *(undefined2 *)((longlong)pppppppuVar19 + lVar13) = 0x203a;
          *(undefined1 *)((longlong)pppppppuVar19 + lVar13 + 2) = 0;
          plVar26 = &local_2a0;
        }
        local_280 = (LPCWSTR ******)0x0;
        uStack_278 = 0;
        local_270 = 0;
        uStack_268 = 0;
        local_280 = (LPCWSTR ******)*plVar26;
        uStack_278 = plVar26[1];
        local_270 = plVar26[2];
        uStack_268 = plVar26[3];
        plVar26[2] = 0;
        plVar26[3] = 0xf;
        *(undefined1 *)plVar26 = 0;
        if ((ulonglong)puVar30[3] < 0x10) {
          puVar21 = puVar30;
        }
        else {
          puVar21 = (undefined8 *)*puVar30;
        }
        uVar16 = puVar30[2];
        *(undefined8 *)(puVar38 + -8) = 0x1800223bb;
        plVar26 = FUN_180002250(&local_280,puVar21,uVar16);
        local_1a0 = (undefined8 *******)*plVar26;
        lStack_198 = plVar26[1];
        local_190 = plVar26[2];
        uStack_188 = plVar26[3];
        plVar26[2] = 0;
        plVar26[3] = 0xf;
        *(undefined1 *)plVar26 = 0;
        if ((undefined8 ********)(param_1 + 0x1360) != &local_1a0) {
          pppppppuVar19 = &local_1a0;
          if (0xf < uStack_188) {
            pppppppuVar19 = local_1a0;
          }
          *(undefined8 *)(puVar38 + -8) = 0x180022415;
          FUN_180002370((longlong *)(param_1 + 0x1360),pppppppuVar19,local_190);
        }
        *(undefined4 *)(param_1 + 0x1380) = 0x40266666;
        if (uStack_188 < 0x10) {
LAB_18002245e:
          if (0xf < uStack_268) {
            pppppppWVar29 = local_280;
            if ((0xfff < uStack_268 + 1) &&
               (pppppppWVar29 = (LPCWSTR ******)local_280[-1],
               0x1f < (ulonglong)((longlong)local_280 + (-8 - (longlong)pppppppWVar29))))
            goto LAB_1800224c3;
            *(undefined8 *)(puVar38 + -8) = 0x180022495;
            thunk_FUN_1800c3030(pppppppWVar29);
          }
          local_270 = 0;
          uStack_268 = 0xf;
          local_280 = (LPCWSTR ******)((ulonglong)local_280 & 0xffffffffffffff00);
          if (uStack_288 < 0x10) goto LAB_18002282f;
          pppppppuVar19 = local_2a0;
          uVar16 = uStack_288;
          goto LAB_1800221e4;
        }
        pppppppuVar19 = local_1a0;
        if ((uStack_188 + 1 < 0x1000) ||
           (pppppppuVar19 = (undefined8 *******)local_1a0[-1],
           (ulonglong)((longlong)local_1a0 + (-8 - (longlong)pppppppuVar19)) < 0x20)) {
          *(undefined8 *)(puVar38 + -8) = 0x18002245d;
          thunk_FUN_1800c3030(pppppppuVar19);
          goto LAB_18002245e;
        }
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar38 = puVar38 + 8;
LAB_1800224c3:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar38 = puVar38 + 8;
      }
      *(undefined8 *)(puVar38 + -8) = 0x1800224d6;
      pcVar24 = FUN_180043a40("Could not write config");
      local_200 = (undefined8 *******)0x0;
      uStack_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      *(undefined8 *)(puVar38 + -8) = 0x1800224f2;
      sVar25 = strlen(pcVar24);
      *(undefined8 *)(puVar38 + -8) = 0x180022501;
      FUN_1800028f0(&local_200,(undefined8 *)pcVar24,sVar25);
      if ((undefined8 ********)(param_1 + 0x1360) != &local_200) {
        pppppppuVar19 = &local_200;
        if (0xf < local_1e8) {
          pppppppuVar19 = local_200;
        }
        *(undefined8 *)(puVar38 + -8) = 0x180022529;
        FUN_180002370((longlong *)(param_1 + 0x1360),pppppppuVar19,local_1f0);
      }
      *(undefined4 *)(param_1 + 0x1380) = 0x40266666;
      if (local_1e8 < 0x10) goto LAB_18002282f;
      pppppppuVar19 = local_200;
      uVar16 = local_1e8;
      goto LAB_1800221e4;
    }
  }
  else {
    FUN_18003ff30(&local_260,(LPCSTR)(param_1 + 0x1308));
    puVar39 = auStackY_328;
    if (local_250 == (undefined8 ******)0x0) {
      uVar41 = (uint)(*(longlong *)(param_1 + 0x12e0) - *(longlong *)(param_1 + 0x12d8) >> 5);
      do {
        uVar41 = uVar41 + 1;
        lVar13 = 0;
        if ((int)uVar41 < 0) {
          psVar18 = FUN_180006a30(local_10e,-uVar41);
          psVar18 = psVar18 + -1;
          *psVar18 = 0x2d;
        }
        else {
          psVar18 = FUN_180006a30(local_10e,uVar41);
        }
        FUN_180001ee0(local_1c0,(undefined8 *)psVar18,(undefined8 *)local_10e);
        if (uStack_1a8 - local_1b0 < 7) {
          pppppppuVar19 =
               (undefined8 *******)FUN_1800059a0(local_1c0,7,0,0,(undefined8 *)L"Config ",7);
        }
        else {
          pppppppuVar19 = local_1c0;
          if (7 < uStack_1a8) {
            pppppppuVar19 = local_1c0[0];
          }
          lVar34 = local_1b0 * 2;
          if (((undefined8 *******)((longlong)L"Config " + 0xd) < pppppppuVar19) ||
             ((wchar_t *)(lVar34 + (longlong)pppppppuVar19) < L"Config ")) {
            lVar13 = 7;
          }
          else if (L"Config " < pppppppuVar19) {
            lVar13 = (longlong)(pppppppuVar19 + -0x3001bd3f) >> 1;
          }
          local_1b0 = local_1b0 + 7;
          FUN_1800d1c20((undefined8 *)((longlong)pppppppuVar19 + 0xe),pppppppuVar19,lVar34 + 2);
          FUN_1800d1c20(pppppppuVar19,(undefined8 *)L"Config ",lVar13 * 2);
          FUN_1800d1c20((undefined8 *)(lVar13 * 2 + (longlong)pppppppuVar19),
                        (undefined8 *)(L"Config " + lVar13 + 7),(7 - lVar13) * 2);
          pppppppuVar19 = local_1c0;
        }
        puVar30 = (undefined8 *)0x6700660063002e;
        pppppppWVar29 = (LPCWSTR ******)*pppppppuVar19;
        ppppppuVar32 = pppppppuVar19[1];
        ppppppuVar6 = pppppppuVar19[2];
        ppppppuVar7 = pppppppuVar19[3];
        pppppppuVar19[2] = (undefined8 ******)0x0;
        pppppppuVar19[3] = (undefined8 ******)0x7;
        *(undefined2 *)pppppppuVar19 = 0;
        if ((undefined8 ******)0x7 < ppppppuStack_248) {
          pppppppWVar27 = local_260;
          if (((longlong)ppppppuStack_248 * 2 + 2U < 0x1000) ||
             (pppppppWVar27 = (LPCWSTR ******)local_260[-1],
             (ulonglong)((longlong)local_260 + (-8 - (longlong)pppppppWVar27)) < 0x20)) {
            thunk_FUN_1800c3030(pppppppWVar27);
            goto LAB_180021a45;
          }
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar37 = auStackY_320;
LAB_180021c84:
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar39 = puVar37 + 8;
          goto LAB_180021c8b;
        }
LAB_180021a45:
        local_260 = pppppppWVar29;
        ppppppuStack_258 = ppppppuVar32;
        local_250 = ppppppuVar6;
        ppppppuStack_248 = ppppppuVar7;
        if (7 < uStack_1a8) {
          pppppppuVar19 = local_1c0[0];
          if (0xfff < uStack_1a8 * 2 + 2) {
            pppppppuVar19 = (undefined8 *******)local_1c0[0][-1];
            puVar39 = auStackY_328;
            if (0x1f < (ulonglong)((longlong)local_1c0[0] + (-8 - (longlong)pppppppuVar19)))
            goto LAB_180022145;
          }
          thunk_FUN_1800c3030(pppppppuVar19);
        }
        puVar20 = FUN_180002040((ulonglong *)&local_138,(undefined8 *)(param_1 + 0x12b8),
                                (undefined1 (*) [32])&DAT_1800d9010);
        pppppppWVar29 = (LPCWSTR ******)&local_260;
        if ((undefined8 ******)0x7 < ppppppuStack_248) {
          pppppppWVar29 = local_260;
        }
        puVar21 = FUN_1800022e0(puVar20,pppppppWVar29,(ulonglong)local_250);
        local_2a0 = (undefined8 *******)*puVar21;
        uStack_298 = puVar21[1];
        lVar13 = puVar21[2];
        uStack_288 = puVar21[3];
        puVar21[2] = 0;
        puVar21[3] = 7;
        *(undefined2 *)puVar21 = 0;
        if (uStack_288 - lVar13 < 4) {
          local_290 = lVar13;
          plVar26 = FUN_180005490(&local_2a0,4,0,(undefined8 *)L".cfg",4);
        }
        else {
          local_290 = lVar13 + 4;
          pppppppuVar19 = (undefined8 *******)&local_2a0;
          if (7 < uStack_288) {
            pppppppuVar19 = local_2a0;
          }
          *(undefined8 *)((longlong)pppppppuVar19 + lVar13 * 2) = 0x6700660063002e;
          *(undefined2 *)((longlong)pppppppuVar19 + lVar13 * 2 + 8) = 0;
          plVar26 = &local_2a0;
        }
        local_280 = (LPCWSTR ******)0x0;
        uStack_278 = 0;
        local_270 = 0;
        uStack_268 = 0;
        local_280 = (LPCWSTR ******)*plVar26;
        uStack_278 = plVar26[1];
        local_270 = plVar26[2];
        uStack_268 = plVar26[3];
        plVar26[2] = 0;
        plVar26[3] = 7;
        *(undefined2 *)plVar26 = 0;
        if (7 < uStack_288) {
          pppppppuVar19 = local_2a0;
          if ((0xfff < uStack_288 * 2 + 2) &&
             (pppppppuVar19 = (undefined8 *******)local_2a0[-1],
             0x1f < (ulonglong)((longlong)local_2a0 + (-8 - (longlong)pppppppuVar19))))
          goto LAB_180021c84;
          thunk_FUN_1800c3030(pppppppuVar19);
        }
        local_290 = 0;
        uStack_288 = 7;
        local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffffffff0000);
        if (7 < uStack_120) {
          pvVar28 = local_138;
          if (0xfff < uStack_120 * 2 + 2) {
            pvVar28 = *(LPVOID *)((longlong)local_138 + -8);
            puVar39 = auStackY_328;
            if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)pvVar28)))
            goto LAB_180022145;
          }
          thunk_FUN_1800c3030(pvVar28);
        }
        pppppppWVar29 = (LPCWSTR ******)&local_280;
        if (7 < uStack_268) {
          pppppppWVar29 = local_280;
        }
        DVar11 = GetFileAttributesW((LPCWSTR)pppppppWVar29);
        if (7 < uStack_268) {
          pppppppWVar29 = local_280;
          if (0xfff < uStack_268 * 2 + 2) {
            pppppppWVar29 = (LPCWSTR ******)local_280[-1];
            puVar39 = auStackY_328;
            if (0x1f < (ulonglong)((longlong)local_280 + (-8 - (longlong)pppppppWVar29)))
            goto LAB_180022145;
          }
          thunk_FUN_1800c3030(pppppppWVar29);
        }
      } while (DVar11 != 0xffffffff);
    }
    else {
LAB_180021c8b:
      puVar38 = puVar39;
    }
    *(undefined8 *)(puVar38 + -8) = 0x180021ca4;
    pwVar22 = (wchar_t *)FUN_18002f0e0(&local_138,(undefined8 *)(param_1 + 0x12b8),&local_260);
    *(undefined8 *)(puVar38 + -8) = 0x180021cb0;
    uVar23 = FUN_180040170(param_1,pwVar22);
    if (7 < uStack_120) {
      pvVar28 = local_138;
      if (uStack_120 * 2 + 2 < 0x1000) {
LAB_180021cf8:
        *(undefined8 *)(puVar38 + -8) = 0x180021cfd;
        thunk_FUN_1800c3030(pvVar28);
        goto LAB_180021cfd;
      }
      pvVar28 = *(LPVOID *)((longlong)local_138 + -8);
      puVar39 = puVar38;
      if ((ulonglong)((longlong)local_138 + (-8 - (longlong)pvVar28)) < 0x20) goto LAB_180021cf8;
LAB_180022145:
      cVar40 = '\0';
      cVar10 = '\x05';
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)();
      puVar39 = puVar39 + 8;
      goto LAB_18002214c;
    }
LAB_180021cfd:
    if ((char)uVar23 == '\0') {
LAB_1800220c3:
      uVar41 = (uint)puVar30;
      *(undefined8 *)(puVar38 + -8) = 0x1800220cf;
      pcVar24 = FUN_180043a40("Could not write config");
      local_240 = (LPCWSTR ******)0x0;
      uStack_238 = 0;
      local_230 = 0;
      local_228 = 0;
      *(undefined8 *)(puVar38 + -8) = 0x1800220e9;
      sVar25 = strlen(pcVar24);
      *(undefined8 *)(puVar38 + -8) = 0x1800220f8;
      FUN_1800028f0(&local_240,(undefined8 *)pcVar24,sVar25);
      if ((LPCWSTR *******)(param_1 + 0x1360) != &local_240) {
        pppppppWVar29 = (LPCWSTR ******)&local_240;
        if (0xf < local_228) {
          pppppppWVar29 = local_240;
        }
        *(undefined8 *)(puVar38 + -8) = 0x180022120;
        FUN_180002370((longlong *)(param_1 + 0x1360),pppppppWVar29,local_230);
      }
      *(undefined4 *)(param_1 + 0x1380) = 0x40266666;
      if (0xf < local_228) {
        pppppppWVar29 = local_240;
        uVar16 = local_228;
LAB_180022036:
        uVar41 = (uint)puVar30;
        pppppppWVar27 = pppppppWVar29;
        if (0xfff < uVar16 + 1) {
          pppppppWVar27 = (LPCWSTR ******)pppppppWVar29[-1];
          puVar39 = puVar38;
          if (0x1f < (ulonglong)((longlong)pppppppWVar29 + (-8 - (longlong)pppppppWVar27)))
          goto LAB_180022145;
        }
        *(undefined8 *)(puVar38 + -8) = 0x180022060;
        thunk_FUN_1800c3030(pppppppWVar27);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1308) = 0;
      *(undefined8 *)(puVar38 + -8) = 0x180021d15;
      FUN_18003f960(param_1);
      uVar16 = 0;
      lVar13 = *(longlong *)(param_1 + 0x12d8);
      if (*(longlong *)(param_1 + 0x12e0) - lVar13 >> 5 != 0) {
        do {
          puVar30 = (undefined8 *)(lVar13 + uVar16 * 0x20);
          pppppppWVar29 = (LPCWSTR ******)&local_260;
          if ((undefined8 ******)0x7 < ppppppuStack_248) {
            pppppppWVar29 = local_260;
          }
          ppppppuVar32 = (undefined8 ******)puVar30[2];
          if (7 < (ulonglong)puVar30[3]) {
            puVar30 = (undefined8 *)*puVar30;
          }
          if (ppppppuVar32 == local_250) {
            if (ppppppuVar32 != (undefined8 ******)0x0) {
              *(undefined8 *)(puVar38 + -8) = 0x180021d68;
              uVar23 = FUN_180020d30((longlong)puVar30,(longlong)pppppppWVar29,
                                     (longlong)ppppppuVar32);
              if ((int)uVar23 != 0) goto LAB_180021d73;
            }
            *(int *)(param_1 + 0x1330) = (int)uVar16;
          }
LAB_180021d73:
          uVar16 = uVar16 + 1;
          lVar13 = *(longlong *)(param_1 + 0x12d8);
        } while (uVar16 < (ulonglong)(*(longlong *)(param_1 + 0x12e0) - lVar13 >> 5));
      }
      if ((LPCWSTR *******)(param_1 + 0x1338) != &local_260) {
        pppppppWVar29 = (LPCWSTR ******)&local_260;
        if ((undefined8 ******)0x7 < ppppppuStack_248) {
          pppppppWVar29 = local_260;
        }
        *(undefined8 *)(puVar38 + -8) = 0x180021db7;
        FUN_1800024e0((longlong *)(param_1 + 0x1338),pppppppWVar29,(ulonglong)local_250);
      }
      pppppppWVar29 = (LPCWSTR ******)&local_260;
      if ((undefined8 ******)0x7 < ppppppuStack_248) {
        pppppppWVar29 = local_260;
      }
      *(undefined8 *)(puVar38 + 0x38) = 0;
      *(undefined8 *)(puVar38 + 0x30) = 0;
      *(undefined4 *)(puVar38 + 0x28) = 0;
      *(undefined8 *)(puVar38 + 0x20) = 0;
      *(undefined8 *)(puVar38 + -8) = 0x180021ded;
      uVar41 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar29,-1,*(LPSTR *)(puVar38 + 0x20),
                                   *(int *)(puVar38 + 0x28),*(LPCSTR *)(puVar38 + 0x30),
                                   *(LPBOOL *)(puVar38 + 0x38));
      puVar30 = (undefined8 *)(ulonglong)uVar41;
      if ((int)uVar41 < 1) {
        *(undefined8 *)(puVar38 + -8) = 0x180021e51;
        FUN_1800080c0((undefined1 (*) [32])&local_280,0,0);
      }
      else {
        *(undefined8 *)(puVar38 + -8) = 0x180021e05;
        FUN_1800080c0((undefined1 (*) [32])&local_280,(longlong)(int)(uVar41 - 1),0);
        pppppppWVar29 = (LPCWSTR ******)&local_280;
        if (0xf < uStack_268) {
          pppppppWVar29 = local_280;
        }
        pppppppWVar27 = (LPCWSTR ******)&local_260;
        if ((undefined8 ******)0x7 < ppppppuStack_248) {
          pppppppWVar27 = local_260;
        }
        *(undefined8 *)(puVar38 + 0x38) = 0;
        *(undefined8 *)(puVar38 + 0x30) = 0;
        *(uint *)(puVar38 + 0x28) = uVar41;
        *(LPCWSTR *******)(puVar38 + 0x20) = pppppppWVar29;
        *(undefined8 *)(puVar38 + -8) = 0x180021e44;
        WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar27,-1,*(LPSTR *)(puVar38 + 0x20),
                            *(int *)(puVar38 + 0x28),*(LPCSTR *)(puVar38 + 0x30),
                            *(LPBOOL *)(puVar38 + 0x38));
      }
      *(undefined8 *)(puVar38 + -8) = 0x180021e5e;
      pcVar24 = FUN_180043a40("Created");
      local_2a0 = (undefined8 *******)0x0;
      uStack_298 = 0;
      local_290 = 0;
      uStack_288 = 0;
      *(undefined8 *)(puVar38 + -8) = 0x180021e78;
      sVar25 = strlen(pcVar24);
      *(undefined8 *)(puVar38 + -8) = 0x180021e87;
      FUN_1800028f0(&local_2a0,(undefined8 *)pcVar24,sVar25);
      lVar13 = local_290;
      if (uStack_288 - local_290 < 2) {
        *(undefined8 *)(puVar38 + 0x20) = 2;
        *(undefined8 *)(puVar38 + -8) = 0x180021ee3;
        puVar21 = FUN_180005300(&local_2a0,2,0,(undefined8 *)&DAT_1800de9b4,
                                *(ulonglong *)(puVar38 + 0x20));
      }
      else {
        local_290 = local_290 + 2;
        pppppppuVar19 = (undefined8 *******)&local_2a0;
        if (0xf < uStack_288) {
          pppppppuVar19 = local_2a0;
        }
        *(undefined2 *)((longlong)pppppppuVar19 + lVar13) = 0x203a;
        *(undefined1 *)((longlong)pppppppuVar19 + lVar13 + 2) = 0;
        puVar21 = &local_2a0;
      }
      local_1e0 = (undefined8 *******)*puVar21;
      uStack_1d8 = puVar21[1];
      local_1d0 = puVar21[2];
      uStack_1c8 = puVar21[3];
      puVar21[2] = 0;
      puVar21[3] = 0xf;
      *(undefined1 *)puVar21 = 0;
      *(undefined8 *)(puVar38 + -8) = 0x180021f1a;
      FUN_180007ed0(local_180,(ulonglong)(byte)puVar38[0x40],&local_1e0,&local_280);
      if ((undefined8 ********)(param_1 + 0x1360) != local_180) {
        pppppppuVar19 = local_180;
        if (0xf < local_168) {
          pppppppuVar19 = local_180[0];
        }
        *(undefined8 *)(puVar38 + -8) = 0x180021f51;
        FUN_180002370((longlong *)(param_1 + 0x1360),pppppppuVar19,local_170);
      }
      *(undefined4 *)(param_1 + 0x1380) = 0x40266666;
      if (0xf < local_168) {
        pppppppuVar19 = local_180[0];
        if ((local_168 + 1 < 0x1000) ||
           (pppppppuVar19 = (undefined8 *******)local_180[0][-1],
           (ulonglong)((longlong)local_180[0] + (-8 - (longlong)pppppppuVar19)) < 0x20)) {
          *(undefined8 *)(puVar38 + -8) = 0x180021f9d;
          thunk_FUN_1800c3030(pppppppuVar19);
          goto LAB_180021f9e;
        }
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar38 = puVar38 + 8;
LAB_1800220b5:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar38 = puVar38 + 8;
LAB_1800220bc:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar38 = puVar38 + 8;
        goto LAB_1800220c3;
      }
LAB_180021f9e:
      if (0xf < uStack_1c8) {
        pppppppuVar19 = local_1e0;
        if ((0xfff < uStack_1c8 + 1) &&
           (pppppppuVar19 = (undefined8 *******)local_1e0[-1],
           0x1f < (ulonglong)((longlong)local_1e0 + (-8 - (longlong)pppppppuVar19))))
        goto LAB_1800220b5;
        *(undefined8 *)(puVar38 + -8) = 0x180021fd9;
        thunk_FUN_1800c3030(pppppppuVar19);
      }
      if (0xf < uStack_288) {
        pppppppuVar19 = local_2a0;
        if ((0xfff < uStack_288 + 1) &&
           (pppppppuVar19 = (undefined8 *******)local_2a0[-1],
           0x1f < (ulonglong)((longlong)local_2a0 + (-8 - (longlong)pppppppuVar19))))
        goto LAB_1800220bc;
        *(undefined8 *)(puVar38 + -8) = 0x180022015;
        thunk_FUN_1800c3030(pppppppuVar19);
      }
      local_290 = 0;
      uStack_288 = 0xf;
      local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffffffffff00);
      if (0xf < uStack_268) {
        pppppppWVar29 = local_280;
        uVar16 = uStack_268;
        goto LAB_180022036;
      }
    }
    cVar9 = (char)uVar41;
    if (ppppppuStack_248 < (undefined8 ******)0x8) goto LAB_18002282f;
    pppppppWVar29 = local_260;
    if (((longlong)ppppppuStack_248 * 2 + 2U < 0x1000) ||
       (pppppppWVar29 = (LPCWSTR ******)local_260[-1],
       (ulonglong)((longlong)local_260 + (-8 - (longlong)pppppppWVar29)) < 0x20)) {
      *(undefined8 *)(puVar38 + -8) = 0x1800220a9;
      thunk_FUN_1800c3030(pppppppWVar29);
      goto LAB_18002282f;
    }
LAB_18002254b:
    cVar10 = '\x05';
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)();
    puVar38 = puVar38 + 8;
  }
  if (cVar10 != '\0') {
    *(undefined8 *)(puVar38 + -8) = 0x180022560;
    FUN_18000a3a0((longlong *)(puVar38 + 0x78));
    goto LAB_18002282f;
  }
  if (cVar9 == '\0') goto LAB_18002282f;
  iVar36 = *(int *)(param_1 + 0x1330);
  lVar13 = *(longlong *)(param_1 + 0x12d8);
  *(undefined8 *)(puVar38 + -8) = 0x18002258c;
  FUN_1800081d0(local_160,(undefined8 *)((longlong)iVar36 * 0x20 + lVar13));
  iVar36 = *(int *)(param_1 + 0x1330);
  lVar13 = *(longlong *)(param_1 + 0x12f0);
  *(undefined8 *)(puVar38 + -8) = 0x1800225a8;
  FUN_180007dc0(&local_1e0,(undefined8 *)((longlong)iVar36 * 0x20 + lVar13));
  *(undefined8 *)(puVar38 + -8) = 0x1800225c3;
  lpFileName = (LPCWSTR)FUN_18002f0e0(&local_138,(undefined8 *)(param_1 + 0x12b8),local_160);
  if (7 < *(ulonglong *)(lpFileName + 0xc)) {
    lpFileName = *(LPCWSTR *)lpFileName;
  }
  *(undefined8 *)(puVar38 + -8) = 0x1800225d6;
  DeleteFileW(lpFileName);
  *(undefined8 *)(puVar38 + -8) = 0x1800225e2;
  FUN_180011650((longlong *)&local_138);
  puVar30 = (undefined8 *)(param_1 + 0x1338);
  pppppppuVar19 = local_160;
  if (7 < local_148) {
    pppppppuVar19 = local_160[0];
  }
  lVar13 = *(longlong *)(param_1 + 0x1348);
  puVar21 = puVar30;
  if (7 < *(ulonglong *)(param_1 + 0x1350)) {
    puVar21 = (undefined8 *)*puVar30;
  }
  if (lVar13 == local_150) {
    if (lVar13 != 0) {
      *(undefined8 *)(puVar38 + -8) = 0x18002262a;
      uVar23 = FUN_180020d30((longlong)puVar21,(longlong)pppppppuVar19,lVar13);
      if ((int)uVar23 != 0) goto LAB_18002264b;
    }
    *(undefined8 *)(param_1 + 0x1348) = 0;
    if (7 < *(ulonglong *)(param_1 + 0x1350)) {
      puVar30 = (undefined8 *)*puVar30;
    }
    *(undefined2 *)puVar30 = 0;
  }
LAB_18002264b:
  iVar36 = *(int *)(param_1 + 0x1330);
  *(undefined8 *)(puVar38 + -8) = 0x18002265a;
  FUN_18003f960(param_1);
  if (*(longlong *)(param_1 + 0x12d8) == *(longlong *)(param_1 + 0x12e0)) {
    iVar36 = -1;
  }
  else if ((int)(*(longlong *)(param_1 + 0x12e0) - *(longlong *)(param_1 + 0x12d8) >> 5) <= iVar36)
  {
    iVar36 = iVar36 + -1;
  }
  *(int *)(param_1 + 0x1330) = iVar36;
  *(undefined8 *)(puVar38 + -8) = 0x180022694;
  pcVar24 = FUN_180043a40("Deleted");
  local_280 = (LPCWSTR ******)0x0;
  uStack_278 = 0;
  local_270 = 0;
  uStack_268 = 0;
  *(undefined8 *)(puVar38 + -8) = 0x1800226ae;
  sVar25 = strlen(pcVar24);
  *(undefined8 *)(puVar38 + -8) = 0x1800226bd;
  FUN_1800028f0(&local_280,(undefined8 *)pcVar24,sVar25);
  *(undefined8 *)(puVar38 + -8) = 0x1800226d4;
  plVar26 = FUN_180002250(&local_280,(undefined8 *)&DAT_1800de9b4,2);
  local_2a0 = (undefined8 *******)*plVar26;
  uStack_298 = plVar26[1];
  local_290 = plVar26[2];
  uStack_288 = plVar26[3];
  plVar26[2] = 0;
  plVar26[3] = 0xf;
  *(undefined1 *)plVar26 = 0;
  pppppppuVar19 = &local_1e0;
  if (0xf < uStack_1c8) {
    pppppppuVar19 = local_1e0;
  }
  *(undefined8 *)(puVar38 + -8) = 0x18002271c;
  plVar26 = FUN_180002250(&local_2a0,pppppppuVar19,local_1d0);
  local_138 = (LPVOID)*plVar26;
  lStack_130 = plVar26[1];
  local_128 = plVar26[2];
  uStack_120 = plVar26[3];
  plVar26[2] = 0;
  plVar26[3] = 0xf;
  *(undefined1 *)plVar26 = 0;
  *(undefined8 *)(puVar38 + -8) = 0x18002274f;
  FUN_18002ec10(param_1,(longlong *)&local_138);
  if (0xf < uStack_120) {
    pvVar28 = local_138;
    if ((uStack_120 + 1 < 0x1000) ||
       (pvVar28 = *(LPVOID *)((longlong)local_138 + -8),
       (ulonglong)((longlong)local_138 + (-8 - (longlong)pvVar28)) < 0x20)) {
      *(undefined8 *)(puVar38 + -8) = 0x180022791;
      thunk_FUN_1800c3030(pvVar28);
      goto LAB_180022792;
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
LAB_180022898:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
LAB_18002289f:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_180022792:
  if (0xf < uStack_288) {
    ppppppuVar32 = local_2a0;
    if ((0xfff < uStack_288 + 1) &&
       (ppppppuVar32 = local_2a0[-1],
       0x1f < (ulonglong)((longlong)local_2a0 + (-8 - (longlong)ppppppuVar32)))) goto LAB_180022898;
    *(undefined8 *)(puVar38 + -8) = 0x1800227cd;
    thunk_FUN_1800c3030(ppppppuVar32);
  }
  local_290 = 0;
  uStack_288 = 0xf;
  local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffffffffff00);
  if (0xf < uStack_268) {
    ppppppWVar33 = (LPCWSTR *****)local_280;
    if ((0xfff < uStack_268 + 1) &&
       (ppppppWVar33 = local_280[-1],
       0x1f < (ulonglong)((longlong)local_280 + (-8 - (longlong)ppppppWVar33)))) goto LAB_18002289f;
    *(undefined8 *)(puVar38 + -8) = 0x180022818;
    thunk_FUN_1800c3030(ppppppWVar33);
  }
  *(undefined8 *)(puVar38 + -8) = 0x180022822;
  FUN_1800115e0((longlong *)&local_1e0);
  *(undefined8 *)(puVar38 + -8) = 0x18002282f;
  FUN_180011650((longlong *)local_160);
LAB_18002282f:
  *(undefined8 *)(puVar38 + -8) = 0x18002283e;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800228b0(undefined8 *param_1,undefined4 param_2)

{
  float *pfVar1;
  size_t sVar2;
  size_t _Size;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_res8;
  undefined4 local_res10;
  float local_res18 [2];
  undefined8 local_res20;
  undefined1 auStackY_168 [8];
  undefined1 auStackY_160 [24];
  float local_128 [4];
  int *local_118;
  undefined8 local_110 [2];
  undefined8 *local_100;
  undefined8 *puStack_f8;
  undefined8 *local_f0;

  local_118 = (int *)param_1[0x221];
  local_res8 = param_1;
  local_res10 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_180115ae0) && (FUN_1800a54b0(&DAT_180115ae0), DAT_180115ae0 == -1)) {
    DAT_180115ac8 = 0;
    DAT_180115ad0 = 0;
    DAT_180115ad8 = 0;
    FUN_1800a53c0(0x1800d6830);
    _Init_thread_footer(&DAT_180115ae0);
  }
  puVar15 = auStackY_168;
  puVar16 = auStackY_168;
  puVar11 = (undefined8 *)param_1[0x278];
  uVar23 = param_1[0x279] - (longlong)puVar11 >> 5;
  uVar7 = (uint)uVar23;
  puVar19 = (undefined8 *)param_1[0x276];
  puVar14 = (undefined8 *)param_1[0x275];
  local_res20 = puVar19;
  if (puVar14 != puVar19) {
    param_1 = (undefined8 *)param_1[0x279];
    do {
      puVar18 = puVar11;
      if (puVar11 != param_1) {
        uVar17 = puVar14[3];
        sVar2 = puVar14[2];
        do {
          if (uVar17 < 0x10) {
            puVar19 = puVar14;
          }
          else {
            puVar19 = (undefined8 *)*puVar14;
          }
          _Size = puVar18[2];
          if ((ulonglong)puVar18[3] < 0x10) {
            puVar13 = puVar18;
          }
          else {
            puVar13 = (undefined8 *)*puVar18;
          }
        } while (((_Size != sVar2) ||
                 ((_Size != 0 && (iVar6 = memcmp(puVar13,puVar19,_Size), iVar6 != 0)))) &&
                (puVar18 = puVar18 + 4, puVar18 != param_1));
        puVar19 = local_res20;
      }
      uVar7 = (uint)uVar23 + 1;
      if (puVar18 != param_1) {
        uVar7 = (uint)uVar23;
      }
      puVar14 = puVar14 + 4;
      uVar23 = (ulonglong)uVar7;
    } while (puVar14 != puVar19);
  }
  puVar11 = local_res8;
  _DAT_1801159e8 = uVar7;
  FUN_18001fdc0((longlong)local_res8,&DAT_180115ac8);
  iVar24 = -1;
  iVar6 = -1;
  puVar14 = (undefined8 *)0x0;
  lVar12 = (DAT_180115ad0 - DAT_180115ac8) / 6 + (DAT_180115ad0 - DAT_180115ac8 >> 0x3f);
  uVar23 = (lVar12 >> 3) - (lVar12 >> 0x3f);
  puVar19 = puVar14;
  if (uVar23 == 0) {
    local_res20 = (undefined8 *)0x44070000436a0000;
    local_128[0] = 292.0;
    local_128[1] = 346.0;
    local_res8 = (undefined8 *)0x0;
    local_100 = (undefined8 *)0x0;
    puStack_f8 = (undefined8 *)0x0;
    local_f0 = (undefined8 *)0x0;
LAB_180022bcd:
    puVar19 = local_100;
    lVar12 = DAT_180115ad0 - DAT_180115ac8 >> 0x3f;
    puVar18 = puVar14;
    lVar20 = DAT_180115ac8;
    lVar10 = DAT_180115ad0;
    fVar26 = local_res8._4_4_;
    fVar27 = (float)local_res8;
    if ((DAT_180115ad0 - DAT_180115ac8) / 0x30 + lVar12 != lVar12) {
      do {
        if ((int)puVar18 != iVar6) {
          iVar24 = *(int *)(lVar20 + 0x10 + (longlong)puVar18 * 0x30);
          if ((iVar24 - 4U & 0xfffffffd) == 0) {
            fVar26 = FUN_1800ba000(fVar27,fVar26);
            iVar24 = *(int *)(DAT_180115ac8 + 0x10 + (longlong)puVar18 * 0x30);
            if (iVar24 == 1) {
              fVar27 = 398.0;
            }
            else if (iVar24 == 3) {
              fVar27 = 540.0;
            }
            else if (iVar24 == 4) {
              uVar8 = FUN_18002f070(*(longlong *)(DAT_180115ac8 + (longlong)puVar18 * 0x30));
              fVar27 = (float)FUN_18002aad0((int)uVar8,620.0,DAT_180115998);
              fVar27 = fVar27 + 42.0 + 6.0;
            }
            else if (iVar24 == 5) {
              fVar27 = 146.0;
            }
            else if (iVar24 == 6) {
              fVar27 = FUN_180029c60(620.0);
              fVar27 = fVar27 + 190.0 + 26.0 + 42.0 + 6.0;
            }
            else {
              fVar27 = 48.0;
              lVar12 = *(longlong *)(DAT_180115ac8 + 0x18 + (longlong)puVar18 * 0x30);
              puVar22 = (undefined8 *)
                        (*(longlong *)(DAT_180115ac8 + 0x20 + (longlong)puVar18 * 0x30) - lVar12 >>
                        3);
              puVar13 = puVar14;
              if (puVar22 != (undefined8 *)0x0) {
                do {
                  piVar3 = *(int **)(lVar12 + (longlong)puVar13 * 8);
                  if (((((char)piVar3[0x2a] == '\0') || (*piVar3 != 6)) ||
                      (puVar13 == (undefined8 *)0x0)) ||
                     ((piVar4 = *(int **)(lVar12 + -8 + (longlong)puVar13 * 8),
                      (char)piVar4[0x2a] == '\0' || (*piVar4 != 6)))) {
                    if (*piVar3 == 1) {
                      fVar28 = 70.0;
                    }
                    else if (*piVar3 == 6) {
                      fVar28 = 64.0;
                    }
                    else {
                      fVar28 = 46.0;
                    }
                    fVar27 = fVar27 + fVar28;
                  }
                  puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                } while (puVar13 < puVar22);
              }
            }
            *(undefined4 *)(puVar19 + (longlong)puVar18 * 2) = 0x436a0000;
            *(float *)((longlong)puVar19 + (longlong)puVar18 * 0x10 + 4) = fVar26 + 66.0;
            *(undefined4 *)(puVar19 + (longlong)puVar18 * 2 + 1) = 0x44230000;
            *(float *)((longlong)puVar19 + (longlong)puVar18 * 0x10 + 0xc) = fVar27;
            fVar26 = fVar27 + fVar26 + 14.0;
            local_res8 = (undefined8 *)CONCAT44(fVar26,fVar26);
            fVar27 = fVar26;
          }
          else {
            if (iVar24 == 1) {
              fVar28 = 398.0;
            }
            else if (iVar24 == 3) {
              fVar28 = 540.0;
            }
            else if (iVar24 == 4) {
              uVar8 = FUN_18002f070(*(longlong *)(lVar20 + (longlong)puVar18 * 0x30));
              fVar28 = (float)FUN_18002aad0((int)uVar8,620.0,DAT_180115998);
              fVar28 = fVar28 + 42.0 + 6.0;
            }
            else if (iVar24 == 5) {
              fVar28 = 146.0;
            }
            else if (iVar24 == 6) {
              fVar28 = FUN_180029c60(620.0);
              fVar28 = fVar28 + 190.0 + 26.0 + 42.0 + 6.0;
            }
            else {
              fVar28 = 48.0;
              lVar12 = *(longlong *)(lVar20 + 0x18 + (longlong)puVar18 * 0x30);
              puVar22 = (undefined8 *)
                        (*(longlong *)(lVar20 + 0x20 + (longlong)puVar18 * 0x30) - lVar12 >> 3);
              puVar13 = puVar14;
              if (puVar22 != (undefined8 *)0x0) {
                do {
                  piVar3 = *(int **)(lVar12 + (longlong)puVar13 * 8);
                  if ((((char)piVar3[0x2a] == '\0') || (*piVar3 != 6)) ||
                     ((puVar13 == (undefined8 *)0x0 ||
                      ((piVar4 = *(int **)(lVar12 + -8 + (longlong)puVar13 * 8),
                       (char)piVar4[0x2a] == '\0' || (*piVar4 != 6)))))) {
                    if (*piVar3 == 1) {
                      fVar25 = 70.0;
                    }
                    else if (*piVar3 == 6) {
                      fVar25 = 64.0;
                    }
                    else {
                      fVar25 = 46.0;
                    }
                    fVar28 = fVar28 + fVar25;
                  }
                  puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                } while (puVar13 < puVar22);
              }
            }
            uVar23 = (ulonglong)(fVar26 < fVar27 - 0.5);
            fVar26 = local_res18[uVar23 - 4];
            *(float *)(puVar19 + (longlong)puVar18 * 2) = local_res18[uVar23 + 2];
            *(float *)((longlong)puVar19 + (longlong)puVar18 * 0x10 + 4) = fVar26 + 66.0;
            *(float *)(puVar19 + (longlong)puVar18 * 2 + 1) = local_128[uVar23];
            *(float *)((longlong)puVar19 + (longlong)puVar18 * 0x10 + 0xc) = fVar28;
            local_res18[uVar23 - 4] = fVar26 + fVar28 + 14.0;
            fVar26 = local_res8._4_4_;
            fVar27 = (float)local_res8;
          }
          lVar20 = DAT_180115ac8;
          lVar10 = DAT_180115ad0;
        }
        puVar18 = (undefined8 *)((longlong)puVar18 + 1);
      } while (puVar18 < (undefined8 *)((lVar10 - lVar20) / 0x30));
    }
    puVar18 = local_f0;
    fVar26 = FUN_1800ba000(fVar27,fVar26);
    fVar27 = FUN_1800ba000(0.0,(fVar26 - 14.0) - 540.0);
    local_res18[0] =
         (float)(*(int *)(puVar11 + 0x23b) * 0x10 +
                *(int *)((longlong)puVar11 + (longlong)*(int *)(puVar11 + 0x23b) * 4 + 0x11dc));
    plVar9 = FUN_1800061f0((float *)(puVar11 + 0x244),local_110,(byte *)local_res18);
    lVar12 = *plVar9;
    plVar9 = FUN_1800061f0((float *)(puVar11 + 0x24c),(undefined8 *)local_128,(byte *)local_res18);
    lVar20 = *plVar9;
    lVar10 = FUN_180056d70();
    fVar25 = *(float *)(lVar10 + 0xe4) / DAT_180112008;
    fVar28 = *(float *)(lVar10 + 0xe0) / DAT_180112008;
    lVar10 = FUN_180056d70();
    if (((((puVar11[0x22d] == 0) && (puVar11[0x232] == 0)) && (puVar11[0x236] == 0)) &&
        ((*(char *)(lVar10 + 0xfc) == '\0' && (234.0 <= fVar28)))) &&
       (((66.0 <= fVar25 && ((fVar28 < 886.0 && (fVar25 < 606.0)))) &&
        (*(float *)(lVar10 + 0xf0) != 0.0)))) {
      *(float *)(lVar20 + 0x14) = *(float *)(lVar20 + 0x14) - *(float *)(lVar10 + 0xf0) * 70.0;
    }
    fVar28 = FUN_1800ba070(*(float *)(lVar20 + 0x14),fVar27);
    fVar25 = FUN_1800ba000(0.0,fVar28);
    *(float *)(lVar20 + 0x14) = fVar25;
    fVar28 = *(float *)(lVar12 + 0x14);
    uVar8 = FUN_1800bb930();
    fVar28 = (1.0 - (float)uVar8) * (fVar25 - fVar28) + fVar28;
    *(float *)(lVar12 + 0x14) = fVar28;
    if (ABS(*(float *)(lVar20 + 0x14) - fVar28) < 0.2) {
      *(float *)(lVar12 + 0x14) = *(float *)(lVar20 + 0x14);
    }
    local_res8 = (undefined8 *)CONCAT44(DAT_180112008 * 606.0,DAT_180112008 * 888.0);
    local_res20 = (undefined8 *)CONCAT44(DAT_180112008 * 66.0,DAT_180112008 * 232.0);
    FUN_1800625b0((float *)&local_res20,(float *)&local_res8,'\x01');
    lVar20 = DAT_180115ad0 - DAT_180115ac8 >> 0x3f;
    lVar10 = DAT_180115ac8;
    lVar21 = DAT_180115ad0;
    if ((DAT_180115ad0 - DAT_180115ac8) / 0x30 + lVar20 != lVar20) {
      do {
        if ((int)puVar14 != iVar6) {
          pfVar1 = (float *)(puVar19 + (longlong)puVar14 * 2);
          local_128[0] = *pfVar1;
          local_128[2] = pfVar1[2];
          local_128[3] = pfVar1[3];
          local_128[1] = pfVar1[1] - *(float *)(lVar12 + 0x14);
          if (62.0 <= local_128[3] + local_128[1]) {
            if (local_128[1] <= 610.0) {
              FUN_1800266e0((longlong)puVar11,(longlong *)((longlong)puVar14 * 0x30 + lVar10),
                            local_128);
              lVar10 = DAT_180115ac8;
              lVar21 = DAT_180115ad0;
            }
          }
        }
        puVar14 = (undefined8 *)((longlong)puVar14 + 1);
      } while (puVar14 < (undefined8 *)((lVar21 - lVar10) / 0x30));
      puVar18 = local_f0;
    }
    piVar3 = local_118;
    if ((0.0 < fVar27) &&
       (*(float *)(lVar12 + 0x14) <= fVar27 - 0.5 && fVar27 - 0.5 != *(float *)(lVar12 + 0x14))) {
      local_res8 = (undefined8 *)CONCAT44(DAT_180112008 * 606.0,DAT_180112008 * 888.0);
      local_res20 = (undefined8 *)CONCAT44(DAT_180112008 * 584.0,DAT_180112008 * 232.0);
      FUN_180071500(local_118,&local_res20,&local_res8,0x130d0a,0x130d0a,0xff130d0a,0xff130d0a);
    }
    FUN_180061fc0();
    if ((0.0 < fVar27) &&
       (fVar26 = FUN_1800ba000(28.0,291600.0 / ((fVar26 - 14.0) + 0.001)), 0.0 < fVar26)) {
      fVar27 = (540.0 - fVar26) * (*(float *)(lVar12 + 0x14) / fVar27) + 66.0;
      local_res8 = (undefined8 *)CONCAT44((fVar26 + fVar27) * DAT_180112008,DAT_180112008 * 896.0);
      local_res20 = (undefined8 *)CONCAT44(fVar27 * DAT_180112008,DAT_180112008 * 890.0);
      FUN_180071360(piVar3,(float *)&local_res20,(float *)&local_res8,0x17ffffff,DAT_180112008 * 3.0
                    ,0);
    }
    if (puVar19 == (undefined8 *)0x0) {
      return;
    }
    puVar11 = puVar19;
    if (0xfff < ((longlong)puVar18 - (longlong)puVar19 & 0xfffffffffffffff0U)) {
      puVar11 = (undefined8 *)puVar19[-1];
      param_1 = (undefined8 *)((longlong)puVar19 + (-8 - (longlong)puVar11));
      if (param_1 < (undefined8 *)0x20) goto LAB_18002343c;
      goto LAB_180023432;
    }
  }
  else {
    do {
      iVar6 = (int)puVar19;
      if (*(int *)(DAT_180115ac8 + 0x10 + (longlong)puVar19 * 0x30) != 3) {
        iVar6 = iVar24;
      }
      puVar19 = (undefined8 *)((longlong)puVar19 + 1);
      iVar24 = iVar6;
    } while (puVar19 < (undefined8 *)((DAT_180115ad0 - DAT_180115ac8) / 0x30));
    local_res20 = (undefined8 *)0x44070000436a0000;
    local_128[0] = 292.0;
    local_128[1] = 346.0;
    local_res8 = (undefined8 *)0x0;
    local_100 = (undefined8 *)0x0;
    puStack_f8 = (undefined8 *)0x0;
    local_f0 = (undefined8 *)0x0;
    if (0xfffffffffffffff < uVar23) {
                    // WARNING: Subroutine does not return
      FUN_180011700();
    }
    uVar17 = uVar23 * 0x10;
    if (uVar17 == 0) {
      local_100 = puVar14;
LAB_180022b43:
      local_f0 = local_100 + uVar23 * 2;
      puStack_f8 = local_100;
      do {
        *puStack_f8 = 0;
        puStack_f8[1] = 0;
        puStack_f8 = puStack_f8 + 2;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      goto LAB_180022bcd;
    }
    if (uVar17 < 0x1000) {
      local_100 = (undefined8 *)FUN_1800a5010(uVar17);
      goto LAB_180022b43;
    }
    if (uVar17 + 0x27 <= uVar17) {
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    lVar12 = FUN_1800a5010(uVar17 + 0x27);
    if (lVar12 != 0) {
      local_100 = (undefined8 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
      local_100[-1] = lVar12;
      goto LAB_180022b43;
    }
LAB_180023432:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar15 = auStackY_160;
    puVar11 = param_1;
  }
  puVar16 = puVar15;
LAB_18002343c:
  *(undefined8 *)(puVar16 + -8) = 0x180023444;
  thunk_FUN_1800c3030(puVar11);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800234f0(undefined8 *param_1,int *param_2,float *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStackY_188 [32];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  byte local_128 [96];
  byte local_c8 [96];
  ulonglong local_68;

  local_68 = DAT_180112300 ^ (ulonglong)auStackY_188;
  FUN_18001f910(param_2,(char *)local_128,0x60);
  uVar4 = FUN_18002b220((longlong)param_1,(char *)param_2,&DAT_1800de840,param_3);
  piVar1 = (int *)param_1[0xc];
  uVar8 = (uint)uVar4;
  if (((char)((ulonglong)uVar4 >> 0x30) != '\0') && (piVar1 != param_2)) {
    param_1[0xc] = param_2;
    uVar2 = *(undefined8 *)param_3;
    uVar3 = *(undefined8 *)(param_3 + 2);
    *(uint *)(param_1 + 0xf) = uVar8;
    local_148 = (float)(uVar8 ^ 0xddba11);
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0xbf800000;
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
    plVar5 = FUN_1800061f0((float *)(param_1 + 2),(undefined8 *)&local_140,(byte *)&local_148);
    *(undefined4 *)(*plVar5 + 0x14) = 0;
  }
  if (((char)((ulonglong)uVar4 >> 0x20) == '\0') && (piVar1 != param_2)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x3f800000;
  }
  uVar4 = FUN_180043120((float *)(param_1 + 2),uVar8,(ulonglong)uVar9);
  if ((0.0 < param_3[2]) && (0.0 < param_3[3])) {
    local_140 = *param_3 * DAT_180112008;
    local_13c = param_3[1] * DAT_180112008;
    local_148 = (param_3[2] + *param_3) * DAT_180112008;
    local_144 = (param_3[3] + param_3[1]) * DAT_180112008;
    FUN_180071360((int *)*param_1,&local_140,&local_148,0xff271b16,DAT_180112008 * 8.0,0);
  }
  uVar6 = FUN_18002e340(0xdffffff,
                        (int)((float)(DAT_18011200c >> 0x18) * 0.45 + 0.5) << 0x18 |
                        DAT_18011200c & 0xffffff,(float)uVar4);
  FUN_1800422b0((int *)*param_1,param_3,(uint)uVar6,8.0,1.0);
  pbVar7 = FUN_180028b30(*(int **)(param_1[1] + 0x48),local_128,param_3[2] - 41.0,local_c8,0x60);
  FUN_180042c60((int *)*param_1,*(int **)(param_1[1] + 0x48),*param_3 + 12.0,
                param_3[3] * 0.5 + param_3[1],-NAN,pbVar7,(byte *)0x0);
  FUN_180023a40((int *)*param_1,*(int **)(param_1[1] + 0x90),(piVar1 != param_2) + 0xf077,
                (param_3[2] + *param_3) - 15.0,param_3[3] * 0.5 + param_3[1],-3.3547604e+38);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800237c0(longlong param_1,int *param_2)

{
  int *piVar1;
  float *pfVar2;
  undefined1 auStackY_c8 [32];
  float local_88 [4];
  byte local_78 [96];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStackY_c8;
  FUN_18001f910(param_2,(char *)local_78,0x60);
  piVar1 = *(int **)(*(longlong *)(param_1 + 8) + 0x48);
  pfVar2 = FUN_180071ff0(piVar1,local_88,(float)piVar1[5],3.4028235e+38,0.0,local_78,(byte *)0x0,
                         (undefined8 *)0x0);
  FUN_1800ba070(176.0,*pfVar2 / DAT_180112008 + 41.0);
  return;
}


ulonglong FUN_180023870(undefined8 *param_1,uint *param_2,uint *param_3,longlong *param_4)

{
  longlong *plVar1;
  HRESULT HVar2;
  int iVar3;
  byte extraout_var;
  ulonglong in_RAX;
  undefined4 extraout_var_00;
  byte bVar4;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;

  if (DAT_1801158c0 == (longlong *)0x0) {
    HVar2 = CoCreateInstance((IID *)&DAT_1800f0c98,(LPUNKNOWN)0x0,1,(IID *)&DAT_1800d9048,
                             &DAT_1801158c0);
    in_RAX = CONCAT44(extraout_var_00,HVar2);
  }
  plVar1 = DAT_1801158c0;
  if (DAT_1801158c0 != (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    in_RAX = (**(code **)(*DAT_1801158c0 + 0x18))(DAT_1801158c0,param_1,0,0x80000000,1,&local_20);
    if (-1 < (int)in_RAX) {
      *param_2 = 0;
      local_28 = (longlong *)0x0;
      bVar4 = 0;
      local_30 = (longlong *)0x0;
      *param_3 = 0;
      iVar3 = (**(code **)(*local_20 + 0x68))(local_20,0,&local_28);
      if ((((-1 < iVar3) && (iVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,&local_30), -1 < iVar3))
          && (iVar3 = (**(code **)(*local_30 + 0x40))(local_30,local_28,&DAT_1800f0ca8,0,0,0,0),
             -1 < iVar3)) &&
         (iVar3 = (**(code **)(*local_30 + 0x18))(local_30,param_2,param_3), -1 < iVar3)) {
        FUN_180005d20(param_4,(ulonglong)*param_2 * (ulonglong)*param_3 * 4);
        (**(code **)(*local_30 + 0x38))
                  (local_30,0,*param_2 << 2,(int)param_4[1] - (int)*param_4,*param_4);
        bVar4 = extraout_var >> 7 ^ 1;
      }
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x10))();
      }
      (**(code **)(*local_20 + 0x10))();
      return (ulonglong)bVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


void FUN_180023a40(int *param_1,int *param_2,uint param_3,float param_4,float param_5,float param_6)

{
  longlong lVar1;
  uint uVar2;
  byte local_res10;
  byte local_res11;
  byte local_res12;
  undefined1 local_res13;
  float local_38;
  uint local_34;

  if ((param_2 != (int *)0x0) &&
     (lVar1 = FUN_180072860((longlong)param_2,(ushort)param_3), lVar1 != 0)) {
    local_res13 = 0;
    local_res11 = (byte)(param_3 >> 6) & 0x3f | 0x80;
    local_res10 = (byte)(param_3 >> 0xc) | 0xe0;
    local_res12 = (byte)param_3 & 0x3f | 0x80;
    uVar2 = FUN_1800ba150((uint)(param_5 * DAT_180112008 -
                                (*(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0xc)) * 0.5));
    local_38 = (float)FUN_1800ba150((uint)(param_4 * DAT_180112008 -
                                          (*(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 8)) * 0.5))
    ;
    local_34 = uVar2;
    FUN_1800716c0(param_1,param_2,(float)param_2[5],&local_38,param_6,&local_res10,(byte *)0x0,0.0,
                  (float *)0x0);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Type propagation algorithm not settling

void FUN_180023ba0(undefined8 *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  float *pfVar10;
  longlong *plVar11;
  char *pcVar12;
  ulonglong uVar13;
  float *pfVar14;
  bool bVar15;
  uint uVar16;
  byte *******pppppppbVar17;
  longlong lVar18;
  undefined1 *puVar19;
  int *piVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  char cVar26;
  int *piVar27;
  int iVar28;
  bool bVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStackY_338 [8];
  undefined1 auStackY_330 [24];
  byte local_2e4;
  byte bStack_2e3;
  byte bStack_2e2;
  undefined1 uStack_2e1;
  uint local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float *local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  int *local_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  uint local_288 [2];
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_268;
  uint local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240 [2];
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  char *local_1e0 [3];
  float local_1c8 [2];
  byte *******local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  byte local_1a0 [24];
  byte ******local_188 [12];
  char local_128 [64];
  ulonglong local_e8;

  local_e8 = DAT_180112300 ^ (ulonglong)auStackY_338;
  piVar27 = (int *)*param_1;
  local_2c8 = param_2;
  local_2b0 = piVar27;
  lVar6 = FUN_180056d70();
  local_2a4 = *(float *)(lVar6 + 0xe4) / DAT_180112008;
  local_2a8 = *(float *)(lVar6 + 0xe0) / DAT_180112008;
  if ((((*(char *)(param_1 + 0xb) == '\0') && (param_1[0xc] == 0)) && (param_1[0x11] == 0)) &&
     (param_1[0x15] == 0)) {
    uVar7 = FUN_180059c10(0,'\0');
    bVar15 = true;
    if ((char)uVar7 != '\0') goto LAB_180023c8b;
  }
  bVar15 = false;
LAB_180023c8b:
  if (3 < DAT_1801159b8) {
    DAT_1801159b8 = 0;
  }
  fVar37 = param_2[1];
  fVar36 = fVar37 + 20.0;
  pbVar8 = (byte *)FUN_180043a40("Enabled");
  uVar7 = FUN_180043570(param_1,*param_2,fVar36,&DAT_1801159d0,pbVar8,(byte *)"mdl_on");
  if ((char)uVar7 != '\0') {
    DAT_1801159d2 = 1;
    *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  }
  pbVar9 = (byte *)FUN_180043a40("Hide game model");
  pfVar10 = FUN_180071ff0(*(int **)(param_1[1] + 0x38),&local_2dc,
                          (float)(*(int **)(param_1[1] + 0x38))[5],3.4028235e+38,0.0,pbVar9,
                          (byte *)0x0,(undefined8 *)0x0);
  fVar35 = (param_2[2] + *param_2) - (*pfVar10 / DAT_180112008 + 52.0);
  uVar7 = FUN_180043570(param_1,fVar35,fVar36,&DAT_180112114,pbVar9,(byte *)"mdl_hide");
  if ((char)uVar7 != '\0') {
    DAT_1801159d2 = 1;
    *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  }
  pbVar9 = (byte *)FUN_180043a40("Vis check");
  pfVar10 = FUN_180071ff0(*(int **)(param_1[1] + 0x38),&local_2dc,
                          (float)(*(int **)(param_1[1] + 0x38))[5],3.4028235e+38,0.0,pbVar8,
                          (byte *)0x0,(undefined8 *)0x0);
  fVar32 = *pfVar10 / DAT_180112008 + *param_2 + 52.0;
  pfVar10 = FUN_180071ff0(*(int **)(param_1[1] + 0x38),&local_2dc,
                          (float)(*(int **)(param_1[1] + 0x38))[5],3.4028235e+38,0.0,pbVar9,
                          (byte *)0x0,(undefined8 *)0x0);
  uVar7 = FUN_180043570(param_1,((fVar35 - fVar32) - (*pfVar10 / DAT_180112008 + 52.0)) * 0.5 +
                                fVar32,fVar36,&DAT_180112115,pbVar9,(byte *)"mdl_vis");
  if ((char)uVar7 != '\0') {
    DAT_1801159d2 = 1;
    *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  }
  fVar37 = fVar37 + 40.0;
  pbVar8 = (byte *)FUN_180043a40("Hide in game windows");
  uVar7 = FUN_180043570(param_1,*param_2,fVar37 + 20.0,&DAT_1801159d1,pbVar8,(byte *)"mdl_uihide");
  puVar19 = auStackY_338;
  if ((char)uVar7 != '\0') {
    DAT_1801159d2 = 1;
    *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  }
  fVar37 = fVar37 + 40.0;
  fVar36 = (param_2[2] - 24.0) * 0.25;
  local_2e0 = 0;
  local_2a0 = fVar36 + 8.0;
  local_280 = fVar37 + 26.0;
  local_27c = fVar37 + 18.0;
  local_278 = fVar37 + 36.0;
LAB_180023f6a:
  uVar31 = local_2e0;
  fVar35 = local_2a0 * (float)(int)local_2e0 + *param_2;
  bVar29 = local_2e0 != DAT_1801159b8;
  if (((((*(char *)(param_1 + 0xb) != '\0') || (param_1[0xc] != 0)) ||
       ((param_1[0x11] != 0 || ((param_1[0x15] != 0 || (local_2a8 < fVar35)))))) ||
      (local_2a4 < fVar37)) || ((fVar36 + fVar35 <= local_2a8 || (fVar37 + 52.0 <= local_2a4)))) {
    bVar2 = false;
  }
  else {
    if (bVar15) {
      DAT_1801159b8 = local_2e0;
    }
    bVar2 = true;
  }
  FUN_1800491c0(local_1a0,0x18,0x1800de948,(ulonglong)local_2e0);
  if (bVar29) {
    if (bVar2) {
      fVar32 = 0.5;
    }
    else {
      fVar32 = 0.0;
    }
  }
  else {
    fVar32 = 1.0;
  }
  local_288[0] = FUN_180056a20(local_1a0);
  plVar11 = FUN_1800061f0((float *)(param_1 + 2),local_1e0,(byte *)local_288);
  lVar6 = *plVar11;
  if (*(char *)((longlong)param_1 + 0x54) == '\0') {
    fVar34 = *(float *)(lVar6 + 0x14);
    uVar7 = FUN_1800bb930();
    fVar34 = (1.0 - (float)uVar7) * (fVar32 - fVar34) + fVar34;
    *(float *)(lVar6 + 0x14) = fVar34;
    if (ABS(fVar32 - fVar34) < 0.002) {
      *(float *)(lVar6 + 0x14) = fVar32;
      fVar34 = fVar32;
    }
  }
  else {
    *(float *)(lVar6 + 0x14) = fVar32;
    fVar34 = fVar32;
  }
  if (bVar29) {
    if (0.0 < fVar34) {
      if (fVar34 < 1.0) {
        FUN_1800521a0(&local_220,0xff271b16);
        FUN_1800521a0(&local_230,0xff33241d);
        local_210 = (local_230 - local_220) * fVar34 + local_220;
        local_20c = (local_22c - local_21c) * fVar34 + local_21c;
        local_208 = (local_228 - local_218) * fVar34 + local_218;
        local_204 = (local_224 - local_214) * fVar34 + local_214;
        uVar22 = FUN_180051e70(&local_210);
      }
      else {
        uVar22 = 0xff33241d;
      }
    }
    else {
      uVar22 = 0xff271b16;
    }
    uVar16 = DAT_18011200c >> 0x18;
  }
  else {
    uVar16 = DAT_18011200c >> 0x18;
    uVar22 = DAT_18011200c & 0xffffff | (int)((float)uVar16 * 0.16 + 0.5) << 0x18;
  }
  if (0.0 < fVar36) {
    local_260 = (fVar36 + fVar35) * DAT_180112008;
    local_25c = (fVar37 + 52.0) * DAT_180112008;
    local_258 = fVar35 * DAT_180112008;
    local_254 = fVar37 * DAT_180112008;
    FUN_180071360(piVar27,&local_258,&local_260,uVar22,DAT_180112008 * 10.0,0);
    uVar16 = DAT_18011200c >> 0x18;
  }
  fVar32 = fVar36 + fVar35;
  if (bVar29) {
    if (0.0 < fVar34) {
      uVar22 = (int)((float)uVar16 * 0.4 + 0.5) << 0x18 | DAT_18011200c & 0xffffff;
      if (fVar34 < 1.0) {
        FUN_1800521a0(&local_1f0,0xdffffff);
        FUN_1800521a0(&local_200,(ulonglong)uVar22);
        local_2c0 = (local_200 - local_1f0) * fVar34 + local_1f0;
        local_2bc = (local_1fc - local_1ec) * fVar34 + local_1ec;
        local_2b8 = (local_1f8 - local_1e8) * fVar34 + local_1e8;
        local_2b4 = (local_1f4 - local_1e4) * fVar34 + local_1e4;
        uVar22 = FUN_180051e70(&local_2c0);
      }
    }
    else {
      uVar22 = 0xdffffff;
    }
  }
  else {
    uVar22 = (int)((float)uVar16 * 0.85 + 0.5) << 0x18 | DAT_18011200c & 0xffffff;
  }
  fVar34 = DAT_180112008;
  if (0.0 < fVar36) {
    fVar33 = DAT_180112008 * 0.5;
    fVar30 = FUN_1800ba000(0.0,DAT_180112008 * 10.0 - fVar33);
    local_24c = (fVar37 + 52.0) * DAT_180112008 - fVar33;
    local_250 = fVar32 * DAT_180112008 - fVar33;
    local_244 = fVar33 + fVar37 * DAT_180112008;
    local_248 = fVar33 + fVar35 * DAT_180112008;
    FUN_180071260(piVar27,&local_248,&local_250,uVar22,fVar30,0,fVar34);
  }
  fVar34 = local_280 - 15.0;
  fVar35 = fVar35 + 10.0;
  local_238 = (fVar35 + 30.0) * DAT_180112008;
  local_234 = (fVar34 + 30.0) * DAT_180112008;
  local_274 = fVar35 * DAT_180112008;
  local_270 = fVar34 * DAT_180112008;
  uVar22 = 0xff31221b;
  if (!bVar29) {
    uVar22 = DAT_18011200c;
  }
  FUN_180071360(piVar27,&local_274,&local_238,uVar22,DAT_180112008 * 8.0,0);
  fVar30 = -NAN;
  if (!bVar29) {
    fVar30 = DAT_180112014;
  }
  uVar21 = (ulonglong)uVar31;
  piVar27 = *(int **)(param_1[1] + 0x78);
  if (piVar27 == (int *)0x0) {
LAB_1800245b4:
    piVar20 = local_2b0;
  }
  else {
    uVar31 = *(uint *)(&DAT_180112180 + uVar21 * 4);
    lVar6 = FUN_180072860((longlong)piVar27,(ushort)uVar31);
    if (lVar6 == 0) goto LAB_1800245b4;
    local_2e4 = (byte)(uVar31 >> 0xc) | 0xe0;
    bStack_2e3 = (byte)(uVar31 >> 6) & 0x3f | 0x80;
    bStack_2e2 = (byte)uVar31 & 0x3f | 0x80;
    uStack_2e1 = 0;
    uVar31 = FUN_1800ba150((uint)((fVar34 + 15.0) * DAT_180112008 -
                                 (*(float *)(lVar6 + 0x14) + *(float *)(lVar6 + 0xc)) * 0.5));
    local_268 = (float)FUN_1800ba150((uint)((fVar35 + 15.0) * DAT_180112008 -
                                           (*(float *)(lVar6 + 0x10) + *(float *)(lVar6 + 8)) * 0.5)
                                    );
    piVar20 = local_2b0;
    local_264 = uVar31;
    FUN_1800716c0(local_2b0,piVar27,(float)piVar27[5],&local_268,fVar30,&local_2e4,(byte *)0x0,0.0,
                  (float *)0x0);
  }
  fVar30 = fVar35 + 30.0 + 10.0;
  pbVar8 = (byte *)FUN_180043a40((&PTR_DAT_180112160)[uVar21]);
  piVar27 = *(int **)(param_1[1] + 0x38);
  fVar34 = (float)FUN_1800ba150((uint)((local_27c - ((float)piVar27[5] / DAT_180112008) * 0.5) *
                                      DAT_180112008));
  local_29c = (float)FUN_1800ba150((uint)(fVar30 * DAT_180112008));
  fVar35 = -NAN;
  if (!bVar29) {
    fVar35 = -NAN;
  }
  local_298 = fVar34;
  FUN_1800716c0(piVar20,piVar27,(float)piVar27[5],&local_29c,fVar35,pbVar8,(byte *)0x0,0.0,
                (float *)0x0);
  if ((&DAT_1801120f0)[uVar21] == 0) {
    pcVar12 = FUN_180043a40("Off");
    local_1c0 = (byte *******)0x0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    uVar13 = strlen(pcVar12);
LAB_18002479f:
    FUN_1800028f0(&local_1c0,(undefined8 *)pcVar12,uVar13);
  }
  else {
    if ((&DAT_1801120f0)[uVar21] != 1) {
      FUN_18002f690(local_2e0);
      pcVar12 = FUN_180043a40("Random");
      FUN_1800491c0(local_128,0x40,0x1800de900,pcVar12);
      local_1c0 = (byte *******)0x0;
      uStack_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      uVar13 = strlen(local_128);
      pcVar12 = local_128;
      goto LAB_18002479f;
    }
    iVar28 = (&DAT_1801159c0)[uVar21];
    if (((iVar28 < 0) || ((int)((DAT_1801159a8 - DAT_1801159a0) / 0x48) <= iVar28)) ||
       (*(char *)(DAT_1801159a0 + 0x40 + (longlong)iVar28 * 0x48) != '\0')) {
      uStack_1b8 = 0;
      local_1b0 = 1;
      local_1a8 = 0xf;
      local_1c0 = (byte *******)0x2d;
    }
    else {
      FUN_180007dc0(&local_1c0,(undefined8 *)(DAT_1801159a0 + 0x20 + (longlong)iVar28 * 0x48));
    }
  }
  fVar35 = (fVar32 - fVar30) - 10.0;
  pppppppbVar17 = (byte *******)&local_1c0;
  if (0xf < local_1a8) {
    pppppppbVar17 = local_1c0;
  }
  piVar27 = *(int **)(param_1[1] + 0x50);
  pfVar10 = FUN_180071ff0(piVar27,local_1c8,(float)piVar27[5],3.4028235e+38,0.0,
                          (byte *)pppppppbVar17,(byte *)0x0,(undefined8 *)0x0);
  fVar34 = DAT_180112008;
  if (fVar35 + 0.05 < *pfVar10 / DAT_180112008) {
    uVar13 = strlen((char *)pppppppbVar17);
    uVar31 = (uint)uVar13;
    do {
      do {
        if ((int)uVar31 < 1) {
          local_188[0]._0_1_ = 0;
          pppppppbVar17 = local_188;
          goto LAB_1800248f6;
        }
        uVar22 = (uint)uVar13;
        while( true ) {
          uVar31 = uVar22 - 1;
          uVar13 = (ulonglong)uVar31;
          if (((int)uVar31 < 1) || ((*(byte *)((longlong)pppppppbVar17 + uVar13) & 0xc0) != 0x80))
          break;
          uVar22 = uVar31;
        }
      } while (0x5f < (int)(uVar22 + 3));
      FUN_1800d1c20(local_188,pppppppbVar17,(longlong)(int)uVar31);
      *(undefined4 *)((longlong)local_188 + (longlong)(int)uVar31) = 0xa680e2;
      pfVar10 = FUN_180071ff0(piVar27,local_240,(float)piVar27[5],3.4028235e+38,0.0,
                              (byte *)local_188,(byte *)0x0,(undefined8 *)0x0);
      fVar34 = DAT_180112008;
    } while (fVar35 < *pfVar10 / DAT_180112008);
    pppppppbVar17 = local_188;
  }
LAB_1800248f6:
  if ((&DAT_1801120f0)[uVar21] == 0) {
    fVar35 = -3.3547604e+38;
  }
  else {
    fVar35 = -NAN;
    if (!bVar29) {
      fVar35 = DAT_180112010;
    }
  }
  piVar20 = *(int **)(param_1[1] + 0x50);
  fVar34 = (float)FUN_1800ba150((uint)((local_278 - ((float)piVar20[5] / fVar34) * 0.5) * fVar34));
  local_294 = (float)FUN_1800ba150((uint)(fVar30 * DAT_180112008));
  piVar27 = local_2b0;
  local_290 = fVar34;
  FUN_1800716c0(local_2b0,piVar20,(float)piVar20[5],&local_294,fVar35,(byte *)pppppppbVar17,
                (byte *)0x0,0.0,(float *)0x0);
  if (((&DAT_1801120f0)[uVar21] != 0) && (DAT_1801159d0 != '\0')) {
    local_2d4 = ((fVar32 - 13.0) + 6.0) * DAT_180112008;
    local_2d0 = (fVar37 + 8.0 + 6.0) * DAT_180112008;
    local_2dc = (fVar32 - 13.0) * DAT_180112008;
    local_2d8 = (fVar37 + 8.0) * DAT_180112008;
    FUN_180071360(piVar27,&local_2dc,&local_2d4,DAT_18011200c,DAT_180112008 * 3.0,0);
  }
  if (0xf < local_1a8) {
    pppppppbVar17 = local_1c0;
    if ((0xfff < local_1a8 + 1) &&
       (pppppppbVar17 = (byte *******)local_1c0[-1],
       0x1f < (ulonglong)((longlong)local_1c0 + (-8 - (longlong)pppppppbVar17)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar19 = auStackY_330;
LAB_180024ab2:
      fVar37 = fVar37 + 64.0;
      *(float *)(puVar19 + 0x54) = fVar37;
      *(undefined8 *)(puVar19 + -8) = 0x180024ace;
      local_1e0[0] = FUN_180043a40("Off");
      *(undefined8 *)(puVar19 + -8) = 0x180024ade;
      local_1e0[1] = FUN_180043a40("Model");
      *(undefined8 *)(puVar19 + -8) = 0x180024aee;
      local_1e0[2] = FUN_180043a40("Random");
      fVar36 = **(float **)(puVar19 + 0x70);
      *(float *)(puVar19 + 0x78) = fVar36;
      *(float *)(puVar19 + 0x7c) = fVar37;
      local_2b8 = 312.0;
      local_2b4 = 34.0;
      *(float *)(puVar19 + 0x5c) = (fVar36 + 312.0) * DAT_180112008;
      *(float *)(puVar19 + 0x60) = (fVar37 + 34.0) * DAT_180112008;
      *(float *)(puVar19 + 100) = fVar36 * DAT_180112008;
      *(float *)(puVar19 + 0x68) = fVar37 * DAT_180112008;
      *(undefined4 *)(puVar19 + 0x28) = 0;
      *(float *)(puVar19 + 0x20) = DAT_180112008 * 17.0;
      *(undefined8 *)(puVar19 + -8) = 0x180024b9b;
      FUN_180071360(piVar27,(float *)(puVar19 + 100),(float *)(puVar19 + 0x5c),0xff271b16,
                    *(float *)(puVar19 + 0x20),*(uint *)(puVar19 + 0x28));
      *(undefined4 *)(puVar19 + 0x20) = 0x3f800000;
      *(undefined8 *)(puVar19 + -8) = 0x180024bb8;
      FUN_1800422b0(piVar27,(float *)(puVar19 + 0x78),0xdffffff,17.0,*(float *)(puVar19 + 0x20));
      uVar21 = 0;
      fVar37 = fVar37 + 3.0;
      cVar26 = puVar19[0x50];
      do {
        iVar5 = (int)uVar21;
        fVar35 = (float)iVar5 * 104.0 + fVar36 + 3.0;
        lVar6 = (longlong)(int)DAT_1801159b8;
        iVar28 = (&DAT_1801120f0)[lVar6];
        if ((((*(char *)(param_1 + 0xb) != '\0') || (param_1[0xc] != 0)) || (param_1[0x11] != 0)) ||
           (((param_1[0x15] != 0 || (local_2a8 < fVar35)) ||
            ((local_2a4 < fVar37 || ((fVar35 + 98.0 <= local_2a8 || (fVar37 + 28.0 <= local_2a4)))))
            ))) {
          bVar15 = false;
LAB_180024da9:
          if (iVar28 == iVar5) {
LAB_180024dad:
            *(float *)(puVar19 + 0x5c) = (fVar35 + 98.0) * DAT_180112008;
            *(float *)(puVar19 + 0x60) = (fVar37 + 28.0) * DAT_180112008;
            *(float *)(puVar19 + 100) = fVar35 * DAT_180112008;
            *(float *)(puVar19 + 0x68) = fVar37 * DAT_180112008;
            pfVar10 = (float *)(puVar19 + 0x5c);
            pfVar14 = (float *)(puVar19 + 100);
            uVar31 = DAT_18011200c;
            goto LAB_180024e3b;
          }
          if (bVar15) goto LAB_180024dfb;
        }
        else {
          bVar15 = true;
          if (cVar26 == '\0') goto LAB_180024da9;
          if (iVar28 == iVar5) goto LAB_180024dad;
          (&DAT_1801120f0)[lVar6] = iVar5;
          if (iVar5 == 2) {
            iVar25 = 0;
            uVar13 = 0;
            lVar18 = (DAT_1801159a8 - DAT_1801159a0) / 0x12 +
                     (DAT_1801159a8 - DAT_1801159a0 >> 0x3f);
            lVar23 = lVar18 >> 2;
            lVar18 = lVar18 >> 0x3f;
            uVar24 = lVar23 - lVar18;
            if (lVar23 == lVar18) {
              uVar31 = 0;
            }
            else {
              do {
                if (0x1f < uVar13) break;
                if ((*(char *)(DAT_1801159a0 + 0x40 + uVar13 * 0x48) == '\0') &&
                   (((uint)(&DAT_180112100)[lVar6] >> ((byte)uVar13 & 0x1f) & 1) != 0)) {
                  iVar4 = 1;
                }
                else {
                  iVar4 = 0;
                }
                iVar25 = iVar25 + iVar4;
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar24);
              cVar26 = puVar19[0x50];
              if (iVar25 != 0) goto LAB_180024d86;
              uVar31 = 0;
              uVar13 = 0;
              do {
                if (0x1f < uVar13) break;
                if (*(char *)(DAT_1801159a0 + 0x40 + uVar13 * 0x48) == '\0') {
                  uVar31 = uVar31 | 1 << ((uint)uVar13 & 0x1f);
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar24);
            }
            (&DAT_180112100)[lVar6] = uVar31;
          }
LAB_180024d86:
          DAT_1801159d2 = 1;
          *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
LAB_180024dfb:
          local_294 = (fVar35 + 98.0) * DAT_180112008;
          local_290 = (fVar37 + 28.0) * DAT_180112008;
          local_29c = fVar35 * DAT_180112008;
          local_298 = fVar37 * DAT_180112008;
          pfVar10 = &local_294;
          pfVar14 = &local_29c;
          uVar31 = 0xff33241d;
LAB_180024e3b:
          *(undefined4 *)(puVar19 + 0x28) = 0;
          *(float *)(puVar19 + 0x20) = DAT_180112008 * 14.0;
          *(undefined8 *)(puVar19 + -8) = 0x180024e56;
          FUN_180071360(piVar27,pfVar14,pfVar10,uVar31,*(float *)(puVar19 + 0x20),
                        *(uint *)(puVar19 + 0x28));
        }
        pcVar12 = local_1e0[uVar21];
        if (iVar28 == iVar5) {
          fVar32 = DAT_180112014;
        }
        else {
          fVar32 = -NAN;
          if (bVar15) {
            fVar32 = -NAN;
          }
        }
        piVar20 = *(int **)(param_1[1] + 0x48);
        *(undefined8 *)(puVar19 + 0x38) = 0;
        *(undefined8 *)(puVar19 + 0x30) = 0;
        *(char **)(puVar19 + 0x28) = pcVar12;
        *(undefined4 *)(puVar19 + 0x20) = 0;
        fVar34 = (float)piVar20[5];
        *(undefined8 *)(puVar19 + -8) = 0x180024eb6;
        pfVar10 = FUN_180071ff0(piVar20,local_240,fVar34,3.4028235e+38,*(float *)(puVar19 + 0x20),
                                *(byte **)(puVar19 + 0x28),*(byte **)(puVar19 + 0x30),
                                *(undefined8 **)(puVar19 + 0x38));
        piVar27 = local_2b0;
        fVar34 = *pfVar10;
        *(undefined8 *)(puVar19 + 0x30) = 0;
        *(char **)(puVar19 + 0x28) = pcVar12;
        *(float *)(puVar19 + 0x20) = fVar32;
        *(undefined8 *)(puVar19 + -8) = 0x180024efa;
        FUN_180042c60(local_2b0,piVar20,(fVar35 + 49.0) - (fVar34 / DAT_180112008) * 0.5,
                      fVar37 + 14.0,*(float *)(puVar19 + 0x20),*(byte **)(puVar19 + 0x28),
                      *(byte **)(puVar19 + 0x30));
        uVar21 = (ulonglong)(iVar5 + 1U);
      } while ((int)(iVar5 + 1U) < 3);
      pfVar10 = *(float **)(puVar19 + 0x70);
      fVar37 = pfVar10[2];
      fVar36 = *pfVar10;
      *(float *)(puVar19 + 0x58) = fVar37 + fVar36;
      if ((&DAT_1801120f0)[(int)DAT_1801159b8] == 2) {
        *(undefined8 *)(puVar19 + -8) = 0x180024f59;
        pcVar12 = FUN_180043a40("Shuffle");
        *(char **)(puVar19 + 0x30) = "mdl_shuffle";
        *(char **)(puVar19 + 0x28) = pcVar12;
        *(undefined4 *)(puVar19 + 0x20) = 0xf074;
        fVar35 = *(float *)(puVar19 + 0x54);
        *(undefined8 *)(puVar19 + -8) = 0x180024f8e;
        uVar7 = FUN_18002f2d0(param_1,(float *)(puVar19 + 0x58),fVar35,34.0,
                              *(uint *)(puVar19 + 0x20),*(byte **)(puVar19 + 0x28),
                              *(byte **)(puVar19 + 0x30));
        if ((char)uVar7 != '\0') {
          DAT_180112110 = DAT_180112110 + (DAT_180112110 / 100000) * -100000 + 1;
          DAT_1801159d2 = 1;
          *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
        }
        *(undefined8 *)(puVar19 + -8) = 0x180024fdd;
        pcVar12 = FUN_180043a40("Clear");
        *(char **)(puVar19 + 0x30) = "mdl_none";
        *(char **)(puVar19 + 0x28) = pcVar12;
        *(undefined4 *)(puVar19 + 0x20) = 0;
        *(undefined8 *)(puVar19 + -8) = 0x180025008;
        uVar7 = FUN_18002f2d0(param_1,(float *)(puVar19 + 0x58),fVar35,34.0,
                              *(uint *)(puVar19 + 0x20),*(byte **)(puVar19 + 0x28),
                              *(byte **)(puVar19 + 0x30));
        if ((char)uVar7 != '\0') {
          (&DAT_180112100)[(int)DAT_1801159b8] = 0;
          DAT_1801159d2 = 1;
          *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
        }
        *(undefined8 *)(puVar19 + -8) = 0x180025036;
        pcVar12 = FUN_180043a40("All");
        *(char **)(puVar19 + 0x30) = "mdl_all";
        *(char **)(puVar19 + 0x28) = pcVar12;
        *(undefined4 *)(puVar19 + 0x20) = 0;
        *(undefined8 *)(puVar19 + -8) = 0x180025061;
        uVar7 = FUN_18002f2d0(param_1,(float *)(puVar19 + 0x58),fVar35,34.0,
                              *(uint *)(puVar19 + 0x20),*(byte **)(puVar19 + 0x28),
                              *(byte **)(puVar19 + 0x30));
        if ((char)uVar7 != '\0') {
          uVar31 = 0;
          uVar21 = 0;
          lVar6 = DAT_1801159a8 - DAT_1801159a0 >> 0x3f;
          lVar18 = (DAT_1801159a8 - DAT_1801159a0) / 0x48 + lVar6;
          if (lVar18 != lVar6) {
            do {
              if (0x1f < uVar21) break;
              if (*(char *)(DAT_1801159a0 + 0x40 + uVar21 * 0x48) == '\0') {
                uVar31 = uVar31 | 1 << ((uint)uVar21 & 0x1f);
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < (ulonglong)(lVar18 - lVar6));
          }
          (&DAT_180112100)[(int)DAT_1801159b8] = uVar31;
          DAT_1801159d2 = 1;
          *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
        }
      }
      else {
        pcVar12 = "Click a model to turn it on";
        if ((&DAT_1801120f0)[(int)DAT_1801159b8] == 1) {
          pcVar12 = "Click a model to put it on";
        }
        *(undefined8 *)(puVar19 + -8) = 0x180025101;
        pcVar12 = FUN_180043a40(pcVar12);
        piVar20 = *(int **)(param_1[1] + 0x48);
        *(undefined8 *)(puVar19 + 0x38) = 0;
        *(undefined8 *)(puVar19 + 0x30) = 0;
        *(char **)(puVar19 + 0x28) = pcVar12;
        *(undefined4 *)(puVar19 + 0x20) = 0;
        fVar35 = (float)piVar20[5];
        *(undefined8 *)(puVar19 + -8) = 0x18002513a;
        pfVar14 = FUN_180071ff0(piVar20,local_240,fVar35,3.4028235e+38,*(float *)(puVar19 + 0x20),
                                *(byte **)(puVar19 + 0x28),*(byte **)(puVar19 + 0x30),
                                *(undefined8 **)(puVar19 + 0x38));
        fVar35 = *(float *)(puVar19 + 0x54);
        fVar32 = *pfVar14;
        lVar6 = param_1[1];
        *(undefined8 *)(puVar19 + 0x30) = 0;
        *(char **)(puVar19 + 0x28) = pcVar12;
        *(undefined4 *)(puVar19 + 0x20) = 0xff7c6256;
        piVar20 = *(int **)(lVar6 + 0x48);
        *(undefined8 *)(puVar19 + -8) = 0x180025187;
        FUN_180042c60(piVar27,piVar20,((fVar37 + fVar36) - fVar32 / DAT_180112008) - 4.0,
                      fVar35 + 17.0,*(float *)(puVar19 + 0x20),*(byte **)(puVar19 + 0x28),
                      *(byte **)(puVar19 + 0x30));
      }
      fVar35 = fVar35 + 46.0;
      if (DAT_1801159a0 == DAT_1801159a8) {
        *(undefined8 *)(puVar19 + -8) = 0x1800251bd;
        pcVar12 = FUN_180043a40("No models: assets\\robrun_skins.txt is missing");
        fVar35 = fVar35 + 24.0;
        *(undefined8 *)(puVar19 + 0x30) = 0;
      }
      else {
        iVar5 = (int)((pfVar10[2] + 8.0) / 120.0);
        iVar28 = 1;
        if (1 < iVar5) {
          iVar28 = iVar5;
        }
        if ((int)((DAT_1801159a8 - DAT_1801159a0) / 0x48) < 1) {
          uVar31 = DAT_1801159b8;
        }
        else {
          fVar36 = (pfVar10[2] - (float)(iVar28 + -1) * 8.0) / (float)iVar28;
          uVar21 = (ulonglong)(int)DAT_1801159b8;
          iVar5 = (&DAT_1801120f0)[uVar21];
          iVar25 = 0;
          fVar37 = 0.0;
          lVar6 = DAT_1801159a0;
          do {
            if (*(char *)(lVar6 + 0x40 + (longlong)(int)fVar37 * 0x48) == '\0') {
              *(float *)(puVar19 + 0x78) = (float)(iVar25 % iVar28) * (fVar36 + 8.0) + *pfVar10;
              *(float *)(puVar19 + 0x7c) = (float)(iVar25 / iVar28) * 184.0 + fVar35;
              local_2b4 = 176.0;
              iVar25 = iVar25 + 1;
              if (((int)fVar37 < 0x20) &&
                 (((uint)(&DAT_180112100)[(int)uVar21] >> (SUB41(fVar37,0) & 0x1f) & 1) != 0)) {
                bVar15 = true;
              }
              else {
                bVar15 = false;
              }
              if (iVar5 == 1) {
                bVar29 = (float)(&DAT_1801159c0)[(int)uVar21] == fVar37;
LAB_180025325:
                if (DAT_1801159d0 == '\0') goto LAB_180025332;
                uVar3 = 0;
              }
              else {
                bVar29 = false;
                if (iVar5 == 2) {
                  bVar29 = bVar15;
                }
                if ((iVar5 != 0) && ((iVar5 != 2 || (bVar15 != false)))) goto LAB_180025325;
LAB_180025332:
                uVar3 = 1;
              }
              puVar19[0x28] = iVar5 == 2;
              puVar19[0x20] = uVar3;
              *(undefined8 *)(puVar19 + -8) = 0x18002534d;
              local_2b8 = fVar36;
              uVar7 = FUN_18001e0e0(param_1,(float *)(puVar19 + 0x78),fVar37,bVar29,puVar19[0x20],
                                    puVar19[0x28]);
              if ((char)uVar7 != '\0') {
                if (iVar5 == 2) {
                  if ((int)fVar37 < 0x20) {
                    (&DAT_180112100)[(int)DAT_1801159b8] =
                         (&DAT_180112100)[(int)DAT_1801159b8] ^ 1 << ((uint)fVar37 & 0x1f);
                  }
                }
                else {
                  lVar6 = (longlong)(int)DAT_1801159b8;
                  (&DAT_1801159c0)[lVar6] = fVar37;
                  (&DAT_1801120f0)[lVar6] = 1;
                }
                DAT_1801159d2 = 1;
                *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
              }
              pfVar10 = *(float **)(puVar19 + 0x70);
              uVar21 = (ulonglong)DAT_1801159b8;
              lVar6 = DAT_1801159a0;
            }
            fVar37 = (float)((int)fVar37 + 1);
          } while ((int)fVar37 < (int)((DAT_1801159a8 - lVar6) / 0x48));
          piVar27 = local_2b0;
          uVar31 = (uint)uVar21;
        }
        fVar37 = pfVar10[2];
        *(undefined8 *)(puVar19 + -8) = 0x180025400;
        fVar37 = FUN_180029c60(fVar37);
        if (DAT_1801159d0 == '\0') {
          pcVar12 = "Turn on Enabled to see the models";
        }
        else if ((&DAT_1801120f0)[(int)uVar31] == 2) {
          pcVar12 = "Each man gets a model of his own from the set; Shuffle deals them out anew";
        }
        else {
          pcVar12 = "Others: citizens and NPC";
          if (uVar31 != 3) {
            pcVar12 = "Only you see the models";
          }
        }
        *(undefined8 *)(puVar19 + -8) = 0x180025451;
        pcVar12 = FUN_180043a40(pcVar12);
        fVar35 = fVar37 + fVar35 + 13.0;
        pfVar10 = *(float **)(puVar19 + 0x70);
        *(undefined8 *)(puVar19 + 0x30) = 0;
      }
      *(char **)(puVar19 + 0x28) = pcVar12;
      fVar37 = *pfVar10;
      lVar6 = param_1[1];
      *(undefined4 *)(puVar19 + 0x20) = 0xff7c6256;
      piVar20 = *(int **)(lVar6 + 0x48);
      *(undefined8 *)(puVar19 + -8) = 0x180025492;
      FUN_180042c60(piVar27,piVar20,fVar37 + 4.0,fVar35,*(float *)(puVar19 + 0x20),
                    *(byte **)(puVar19 + 0x28),*(byte **)(puVar19 + 0x30));
      *(undefined8 *)(puVar19 + -8) = 0x1800254a1;
      return;
    }
    thunk_FUN_1800c3030(pppppppbVar17);
  }
  local_2e0 = local_2e0 + 1;
  if (3 < (int)local_2e0) goto LAB_180024ab2;
  param_2 = local_2c8;
  goto LAB_180023f6a;
}


void FUN_180025500(undefined8 *param_1,float *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  float *pfVar10;
  byte *pbVar11;
  longlong lVar12;
  size_t sVar13;
  size_t sVar14;
  char *pcVar15;
  longlong lVar16;
  longlong *_Buf1;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_res20;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  longlong *local_120;
  float local_118 [2];
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;

  DAT_180115998 = param_1[1];
  piVar1 = (int *)*param_1;
  lVar18 = (longlong)param_3 * 0x20;
  lVar6 = FUN_180056d70();
  fVar27 = param_2[1] + 20.0;
  fVar24 = *param_2;
  fVar25 = param_2[2];
  fVar22 = 22.0;
  fVar21 = *(float *)(lVar6 + 0xe0) / DAT_180112008;
  fVar20 = *(float *)(lVar6 + 0xe4) / DAT_180112008;
  local_res20 = (longlong *)CONCAT44(local_res20._4_4_,fVar21);
  fVar26 = fVar27 - 11.0;
  if (((((*(char *)(param_1 + 0xb) != '\0') || (param_1[0xc] != 0)) || (param_1[0x11] != 0)) ||
      ((param_1[0x15] != 0 || (fVar21 < fVar24)))) ||
     ((fVar20 < fVar26 || ((fVar24 + 120.0 <= fVar21 || (fVar26 + 22.0 <= fVar20)))))) {
    fVar21 = fVar26;
  }
  else {
    uVar7 = FUN_180059c10(0,'\0');
    if ((char)uVar7 != '\0') {
      DAT_180115980 = DAT_180115980 == '\0';
      DAT_180115981 = 1;
      *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
    }
    fVar22 = fVar26;
    fVar21 = 22.0;
  }
  if (DAT_180115980 == '\0') {
    uVar23 = 0;
  }
  else {
    uVar23 = 0x3f800000;
  }
  uVar3 = FUN_180056a20((byte *)"skins_on");
  uVar7 = FUN_180043120((float *)(param_1 + 2),uVar3,(ulonglong)uVar23);
  uVar8 = FUN_18002e340(0xff271b16,DAT_18011200c,(float)uVar7);
  local_12c = (fVar21 + fVar22) * DAT_180112008;
  local_128 = fVar24 * DAT_180112008;
  local_130 = (fVar24 + 40.0) * DAT_180112008;
  local_124 = fVar26 * DAT_180112008;
  FUN_180071360(piVar1,&local_128,&local_130,(uint)uVar8,DAT_180112008 * 11.0,0);
  fVar22 = fVar24 + 3.0 + (float)uVar7 * 18.0;
  local_130 = fVar22 * DAT_180112008;
  local_128 = (fVar22 + 16.0) * DAT_180112008;
  local_12c = (fVar26 + 3.0) * DAT_180112008;
  local_124 = (fVar26 + 3.0 + 16.0) * DAT_180112008;
  FUN_180071360(piVar1,&local_130,&local_128,0xffffffff,DAT_180112008 * 8.0,0);
  pbVar9 = (byte *)FUN_180043a40("Enabled");
  FUN_180042c60(piVar1,*(int **)(param_1[1] + 0x38),fVar24 + 40.0 + 12.0,fVar27,-NAN,pbVar9,
                (byte *)0x0);
  pbVar9 = (byte *)FUN_180043a40("only you see them");
  pfVar10 = FUN_180071ff0(*(int **)(param_1[1] + 0x48),(float *)&local_120,
                          (float)(*(int **)(param_1[1] + 0x48))[5],3.4028235e+38,0.0,pbVar9,
                          (byte *)0x0,(undefined8 *)0x0);
  FUN_180042c60(piVar1,*(int **)(param_1[1] + 0x48),
                ((fVar25 + fVar24) - *pfVar10 / DAT_180112008) - 4.0,fVar27,-3.3547604e+38,pbVar9,
                (byte *)0x0);
  lVar6 = *(longlong *)(&DAT_180115928 + lVar18);
  fVar24 = param_2[1] + 40.0;
  lVar12 = *(longlong *)(&DAT_180115920 + lVar18);
  if (lVar12 == lVar6) {
    if (param_3 == 0) {
      pcVar15 = "Join a match: the outfits the game has loaded show up here";
    }
    else {
      pcVar15 = "Join a match: the cars\' skins show up here";
      if (param_3 == 1) {
        pcVar15 = "Join a match: the weapon skins the game has loaded show up here";
      }
    }
    pbVar9 = (byte *)FUN_180043a40(pcVar15);
    FUN_180042c60(piVar1,*(int **)(param_1[1] + 0x48),*param_2 + 4.0,fVar24 + 24.0,-3.3547604e+38,
                  pbVar9,(byte *)0x0);
    return;
  }
  lVar16 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6 - lVar12),8) + (lVar6 - lVar12);
  uVar8 = (lVar16 >> 6) - (lVar16 >> 0x3f);
  if ((int)uVar8 <= *(int *)(&DAT_180115938 + lVar18)) {
    *(undefined4 *)(&DAT_180115938 + lVar18) = 0;
  }
  if (1 < uVar8) {
    lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6 - lVar12),8) + (lVar6 - lVar12);
    if (lVar6 >> 6 != lVar6 >> 0x3f) {
      fVar25 = *param_2;
      local_120 = (longlong *)(&DAT_180115928 + lVar18);
      uVar8 = 0;
      fVar22 = (float)local_res20;
      do {
        lVar6 = uVar8 * 0x78;
        pbVar9 = (byte *)(lVar12 + 0x20 + lVar6);
        if (*(ulonglong *)(lVar6 + 0x38 + lVar12) < 0x10) {
          pbVar11 = pbVar9;
        }
        else {
          pbVar11 = *(byte **)pbVar9;
        }
        pfVar10 = FUN_180071ff0(*(int **)(param_1[1] + 0x48),local_118,
                                (float)(*(int **)(param_1[1] + 0x48))[5],3.4028235e+38,0.0,pbVar11,
                                (byte *)0x0,(undefined8 *)0x0);
        fVar21 = *param_2;
        fVar26 = *pfVar10 / DAT_180112008 + 28.0;
        if ((fVar21 < fVar25) && (fVar21 + param_2[2] < fVar26 + fVar25)) {
          fVar24 = fVar24 + 36.0;
          fVar25 = fVar21;
        }
        iVar17 = *(int *)(&DAT_180115938 + lVar18);
        local_104 = 0x41f00000;
        iVar4 = (int)uVar8;
        local_110 = fVar25;
        local_10c = fVar24;
        local_108 = fVar26;
        if ((((*(char *)(param_1 + 0xb) != '\0') || (param_1[0xc] != 0)) || (param_1[0x11] != 0)) ||
           (((param_1[0x15] != 0 || (fVar22 < fVar25)) ||
            ((fVar20 < fVar24 || ((fVar26 + fVar25 <= fVar22 || (fVar24 + 30.0 <= fVar20)))))))) {
          bVar19 = false;
        }
        else {
          uVar7 = FUN_180059c10(0,'\0');
          if ((char)uVar7 != '\0') {
            *(int *)(&DAT_180115938 + lVar18) = iVar4;
          }
          bVar19 = true;
        }
        uVar23 = DAT_18011200c >> 0x18;
        if (iVar4 == iVar17) {
          uVar3 = (int)((float)uVar23 * 0.22 + 0.5) << 0x18 | DAT_18011200c & 0xffffff;
        }
        else {
          uVar3 = 0xff271b16;
          if (bVar19) {
            uVar3 = 0xff33241d;
          }
        }
        if (0.0 < fVar26) {
          local_128 = fVar25 * DAT_180112008;
          local_res20 = (longlong *)
                        CONCAT44((fVar24 + 30.0) * DAT_180112008,(fVar26 + fVar25) * DAT_180112008);
          local_124 = fVar24 * DAT_180112008;
          FUN_180071360(piVar1,&local_128,(float *)&local_res20,uVar3,DAT_180112008 * 15.0,0);
          uVar23 = DAT_18011200c >> 0x18;
        }
        if (iVar4 == iVar17) {
          FUN_1800422b0(piVar1,&local_110,
                        (int)((float)uVar23 * 0.8 + 0.5) << 0x18 | DAT_18011200c & 0xffffff,15.0,1.0
                       );
        }
        lVar16 = *(longlong *)(lVar6 + 0x68 + lVar12);
        if (0xf < *(ulonglong *)(lVar6 + 0x38 + lVar12)) {
          pbVar9 = *(byte **)pbVar9;
        }
        if (iVar4 == iVar17) {
          fVar21 = DAT_180112010;
        }
        else {
          fVar21 = -NAN;
          if (lVar16 != 0) {
            fVar21 = -NAN;
          }
        }
        piVar2 = *(int **)(param_1[1] + 0x48);
        fVar27 = (float)FUN_1800ba150((uint)(((fVar24 + 15.0) -
                                             ((float)piVar2[5] / DAT_180112008) * 0.5) *
                                            DAT_180112008));
        local_130 = (float)FUN_1800ba150((uint)((fVar25 + 14.0) * DAT_180112008));
        local_12c = fVar27;
        FUN_1800716c0(piVar1,piVar2,(float)piVar2[5],&local_130,fVar21,pbVar9,(byte *)0x0,0.0,
                      (float *)0x0);
        if (lVar16 != 0) {
          local_100 = (fVar26 + fVar25) - 9.0;
          local_fc = fVar24 + 6.0;
          local_f8 = 5.0;
          local_f4 = 0x40a00000;
          FUN_180028890(piVar1,&local_100,DAT_18011200c,2.5,0);
        }
        lVar12 = *(longlong *)(&DAT_180115920 + lVar18);
        uVar8 = uVar8 + 1;
        fVar25 = fVar25 + fVar26 + 6.0;
        lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(*local_120 - lVar12),8) +
                (*local_120 - lVar12);
      } while (uVar8 < (ulonglong)((lVar6 >> 6) - (lVar6 >> 0x3f)));
    }
    fVar24 = fVar24 + 42.0;
  }
  if (param_3 == 2) {
    pbVar9 = (byte *)FUN_180043a40("The paint changes at once, and only on your car");
    FUN_180042c60(piVar1,*(int **)(param_1[1] + 0x48),*param_2 + 4.0,(fVar24 + 13.0) - 3.0,
                  -3.3547604e+38,pbVar9,(byte *)0x0);
    fVar24 = fVar24 + 26.0;
    lVar6 = (longlong)iRam0000000180115978 * 0x78 + lRam0000000180115960;
  }
  else {
    lVar6 = (longlong)*(int *)(&DAT_180115938 + lVar18) * 0x78 +
            *(longlong *)(&DAT_180115920 + lVar18);
    if (param_3 == 0) {
      fVar25 = 104.0;
      goto LAB_180025e5d;
    }
  }
  fVar25 = 176.8;
LAB_180025e5d:
  lVar18 = *(longlong *)(lVar6 + 0x40);
  iVar4 = (int)((param_2[2] + 8.0) / (fVar25 + 8.0));
  iVar17 = 1;
  if (1 < iVar4) {
    iVar17 = iVar4;
  }
  if (-1 < (int)(*(longlong *)(lVar6 + 0x48) - lVar18 >> 6)) {
    _Buf1 = (longlong *)(lVar6 + 0x58);
    iVar4 = 0;
    fVar25 = (param_2[2] - (float)(iVar17 + -1) * 8.0) / (float)iVar17;
    local_res20 = _Buf1;
    do {
      local_f4 = 0x42ec0000;
      local_100 = (float)(iVar4 % iVar17) * (fVar25 + 8.0) + *param_2;
      local_fc = (float)(iVar4 / iVar17) * 126.0 + fVar24;
      local_f8 = fVar25;
      if (iVar4 == 0) {
        pbVar9 = &DAT_1800d8c40;
        pbVar11 = (byte *)FUN_180043a40("Own");
        bVar19 = *(longlong *)(lVar6 + 0x68) == 0;
      }
      else {
        lVar12 = (longlong)iVar4 * 0x40;
        pbVar9 = (byte *)(lVar12 + -0x40 + lVar18);
        if (0xf < *(ulonglong *)(lVar12 + -0x28 + lVar18)) {
          pbVar9 = *(byte **)pbVar9;
        }
        pbVar11 = (byte *)(lVar18 + -0x20 + lVar12);
        if (0xf < *(ulonglong *)(lVar12 + -8 + lVar18)) {
          pbVar11 = *(byte **)pbVar11;
        }
        sVar13 = strlen((char *)pbVar9);
        sVar14 = *(size_t *)(lVar6 + 0x68);
        if (0xf < *(ulonglong *)(lVar6 + 0x70)) {
          _Buf1 = (longlong *)*_Buf1;
        }
        if (sVar14 == sVar13) {
          if (sVar14 == 0) {
            bVar19 = true;
          }
          else {
            iVar5 = memcmp(_Buf1,pbVar9,sVar14);
            bVar19 = iVar5 == 0;
          }
        }
        else {
          bVar19 = false;
        }
      }
      uVar7 = FUN_18001e980(param_1,&local_100,pbVar9,pbVar11,bVar19,iVar4 == 0);
      if (((char)uVar7 == '\0') || (bVar19 != false)) {
        _Buf1 = local_res20;
      }
      else {
        sVar14 = strlen((char *)pbVar9);
        _Buf1 = local_res20;
        FUN_180002370(local_res20,(undefined8 *)pbVar9,sVar14);
        DAT_180115981 = 1;
        *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
      }
      lVar18 = *(longlong *)(lVar6 + 0x40);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= (int)(*(longlong *)(lVar6 + 0x48) - lVar18 >> 6));
  }
  return;
}


void FUN_1800260d0(longlong *param_1,longlong param_2,float param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  LPVOID pvVar14;
  undefined8 uVar15;
  float *pfVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  float *pfVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res8 [2];
  undefined8 local_res10;
  undefined1 auStackY_118 [8];
  undefined1 auStackY_110 [24];
  float local_e8 [4];
  char *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  LPVOID local_c0;
  undefined8 uStack_b8;
  longlong local_b0;

  cVar9 = (char)param_4;
  if (*(char *)((longlong)param_1 + 0x1473) == '\0') {
    FUN_18002ae50(param_1);
  }
  puVar18 = auStackY_118;
  puVar19 = auStackY_118;
  lVar10 = FUN_180056d70();
  plVar1 = param_1 + 0x221;
  param_1[0x222] = param_2;
  *(float *)(param_1 + 0x22b) = param_3;
  if ((cVar9 == '\0') && ((param_1[0xf] == 0 || (*(char *)(param_1[0xf] + 0x14) != '\0')))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x115c) = uVar8;
  *(char *)(param_1 + 0x22c) = cVar9;
  *(undefined1 *)((longlong)param_1 + 0x11d4) = 0;
  FUN_180011840((longlong)param_1);
  if (((param_1[0x22d] == 0) && (param_1[0x232] == 0)) && (param_1[0x236] == 0)) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  lVar2 = param_1[0x231];
  local_res8[0] = 0.0;
  local_res8[1] = 0.0;
  local_res10 = 0;
  pfVar16 = local_res8;
  FUN_1800679a0(&local_res10,0,(undefined8 *)pfVar16);
  FUN_180067a20((undefined8 *)(lVar10 + 8),0);
  local_res8[0] = 0.0;
  local_res8[1] = 0.0;
  FUN_180062c90(2,local_res8,pfVar16,param_4);
  FUN_180062d80(3,0,pfVar16,param_4);
  FUN_180062d80(4,0,pfVar16,param_4);
  FUN_18004ca40((byte *)"##root",(undefined1 *)0x0,0x321bf);
  lVar11 = FUN_180057aa0();
  *plVar1 = lVar11;
  if (param_1[0x10] != 0) {
    DAT_1801158c8 = (uint)(*(int *)(param_1[0x10] + 0x38) == 0);
  }
  piVar3 = (int *)*plVar1;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  local_e8[2] = 900.0;
  local_e8[3] = 620.0;
  local_res8[1] = DAT_180112008 * 620.0;
  local_res8[0] = DAT_180112008 * 900.0;
  local_res10 = CONCAT44(DAT_180112008 * 0.0,DAT_180112008 * 0.0);
  pfVar21 = (float *)0xff130d0a;
  FUN_180071360(piVar3,(float *)&local_res10,local_res8,0xff130d0a,DAT_180112008 * 18.0,0);
  fVar24 = 1.0;
  pfVar20 = (float *)0xfffffff;
  pfVar16 = local_e8;
  FUN_1800422b0(piVar3,pfVar16,0xfffffff,18.0,1.0);
  FUN_18004f6e0(cVar9);
  FUN_180040d70((longlong)param_1);
  FUN_18002a260((longlong)param_1,pfVar16,pfVar20,pfVar21);
  FUN_1800228b0(param_1,param_3);
  uVar12 = FUN_18002efe0((longlong)param_1);
  if ((char)uVar12 != '\0') {
    piVar3 = (int *)*plVar1;
    local_e8[0] = 912.0;
    local_e8[1] = 0.0;
    local_e8[2] = 360.0;
    local_e8[3] = 620.0;
    local_res8[1] = DAT_180112008 * 620.0;
    local_res8[0] = DAT_180112008 * 1272.0;
    local_res10 = CONCAT44(DAT_180112008 * 0.0,DAT_180112008 * 912.0);
    pfVar21 = (float *)0xff130d0a;
    FUN_180071360(piVar3,(float *)&local_res10,local_res8,0xff130d0a,DAT_180112008 * 18.0,0);
    FUN_1800422b0(piVar3,local_e8,0xfffffff,18.0,1.0);
    local_d0 = 0;
    local_c0 = (LPVOID)0x0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_d8 = "Preview";
    local_c8 = 3;
    local_e8[0] = 926.0;
    local_e8[1] = 14.0;
    local_e8[2] = 332.0;
    local_e8[3] = 592.0;
    pfVar20 = local_e8;
    pfVar16 = local_e8 + 4;
    FUN_1800266e0((longlong)param_1,(longlong *)pfVar16,pfVar20);
    puVar19 = auStackY_118;
    if (local_c0 != (LPVOID)0x0) {
      pfVar16 = (float *)((local_b0 - (longlong)local_c0 >> 3) * 8);
      pvVar14 = local_c0;
      if ((float *)0xfff < pfVar16) {
        if ((ulonglong)((longlong)local_c0 + (-8 - (longlong)*(LPVOID *)((longlong)local_c0 + -8)))
            < 0x20) {
          pfVar16 = (float *)((longlong)pfVar16 + 0x27);
          thunk_FUN_1800c3030(*(LPVOID *)((longlong)local_c0 + -8));
          puVar19 = auStackY_118;
          goto LAB_18002645f;
        }
        pvVar14 = (LPVOID)0x5;
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)();
        puVar18 = auStackY_110;
      }
      *(undefined8 *)(puVar18 + -8) = 0x18002645b;
      thunk_FUN_1800c3030(pvVar14);
      puVar19 = puVar18;
    }
  }
LAB_18002645f:
  *(undefined8 *)(puVar19 + -8) = 0x180026464;
  FUN_180053a10();
  lVar11 = param_1[0x231];
  if (lVar11 != 0) {
    pfVar16 = (float *)0x0;
    *(undefined8 *)(puVar19 + -8) = 0x180026480;
    cVar9 = FUN_180059aa0(0x20e,0);
    if (cVar9 == '\0') {
      pfVar16 = (float *)0x0;
      *(undefined8 *)(puVar19 + -8) = 0x18002649c;
      cVar9 = FUN_180059aa0(0x290,0);
      if (cVar9 == '\0') {
        uVar17 = 0x200;
        do {
          if ((uVar17 < 0x278) || (uVar17 - 0x290 < 5)) {
            pfVar16 = (float *)0x0;
            *(undefined8 *)(puVar19 + -8) = 0x1800264cc;
            cVar9 = FUN_180059aa0(uVar17,0);
            if (cVar9 != '\0') {
              *(uint *)(lVar11 + 0x58) = uVar17;
              param_1[0x231] = 0;
              goto LAB_1800264ea;
            }
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < 0x29b);
      }
      else {
        param_1[0x231] = 0;
      }
    }
    else {
      *(undefined4 *)(lVar11 + 0x58) = 0;
      param_1[0x231] = 0;
LAB_1800264ea:
      *(undefined1 *)((longlong)param_1 + 0x11d4) = 1;
    }
  }
  if (((param_1[0x22d] == 0) && (param_1[0x232] == 0)) && (param_1[0x236] == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  *(undefined8 *)(puVar19 + -8) = 0x18002651a;
  lVar11 = FUN_180056d70();
  fVar22 = *(float *)(lVar11 + 0xe0) / DAT_180112008;
  fVar23 = *(float *)(lVar11 + 0xe4) / DAT_180112008;
  if ((((fVar22 < 0.0) || (fVar23 < 0.0)) || (620.0 <= fVar23)) ||
     ((900.0 <= fVar22 && ((((char)uVar12 == '\0' || (fVar22 < 912.0)) || (1272.0 <= fVar22)))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((fVar22 < 234.0) || (886.0 <= fVar22)) || ((fVar23 < 66.0 || (606.0 <= fVar23)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((!bVar7) && (bVar5)) && (!bVar6)) {
    pfVar16 = (float *)0x0;
    *(undefined8 *)(puVar19 + -8) = 0x1800265b1;
    uVar13 = FUN_180059c10(0,'\0');
    if ((char)uVar13 != '\0') {
      *(undefined8 *)(puVar19 + -8) = 0x1800265ba;
      lVar11 = FUN_1800592c0();
      if ((char)lVar11 == '\0') {
        *(undefined8 *)(puVar19 + -8) = 0x1800265c3;
        uVar13 = FUN_1800592a0();
        if ((char)uVar13 == '\0') {
          *(undefined1 *)((longlong)param_1 + 0x12a4) = 1;
        }
      }
    }
  }
  uVar15 = 0;
  *(undefined8 *)(puVar19 + -8) = 0x1800265d5;
  uVar13 = FUN_180059dd0(0);
  if ((char)uVar13 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x12a4) = 0;
  }
  if ((!bVar7 && lVar2 == 0) && (*(char *)(lVar10 + 0xb2) == '\0')) {
    pfVar16 = (float *)0x0;
    uVar15 = 0x20e;
    *(undefined8 *)(puVar19 + -8) = 0x1800265fc;
    cVar9 = FUN_180059aa0(0x20e,0);
    if (cVar9 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x12a5) = 1;
    }
  }
  *(undefined8 *)(puVar19 + -8) = 0x18002660c;
  FUN_180053370(uVar15,(wchar_t *)pfVar16,(undefined *)pfVar20,(ulonglong)pfVar21);
  *(undefined8 *)(puVar19 + -8) = 0x180026616;
  FUN_180062450(3);
  *(undefined8 *)(puVar19 + -8) = 0x18002661e;
  FUN_18002f710((int *)plVar1,pfVar16,pfVar20,(ulonglong)pfVar21);
  *(undefined8 *)(puVar19 + -8) = 0x180026626;
  FUN_1800275e0((longlong)plVar1);
  *(undefined8 *)(puVar19 + -8) = 0x18002662e;
  FUN_1800200b0(plVar1,pfVar16,pfVar20,(ulonglong)pfVar21);
  *(undefined8 *)(puVar19 + -8) = 0x18002663a;
  FUN_1800431e0((longlong)param_1,param_3);
  if (param_1[10] != 0) {
    fVar22 = (*(float *)(param_1[10] + 0x18) / 100.0) * *(float *)(param_1 + 0xb);
    fVar24 = 0.6;
    if ((0.6 <= fVar22) && (fVar24 = 1.2, fVar22 <= 1.2)) {
      fVar24 = fVar22;
    }
    *(undefined8 *)(puVar19 + -8) = 0x18002667f;
    fVar24 = (float)FUN_1800ba150((uint)(fVar24 * 20.0));
    fVar24 = fVar24 / 20.0;
  }
  *(float *)((longlong)param_1 + 0x12b4) = fVar24;
  if (*(char *)((longlong)param_1 + 0x11d4) != '\0') {
    *(undefined8 *)(puVar19 + -8) = 0x18002669f;
    FUN_1800122b0((longlong)param_1);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Removing unreachable block (ram,0x000180026cf4)
// WARNING: Removing unreachable block (ram,0x000180026cee)

void FUN_1800266e0(longlong param_1,longlong *param_2,float *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  longlong *plVar6;
  undefined4 uVar7;
  byte *pbVar8;
  float *pfVar9;
  byte *pbVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int *piVar18;
  char cVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  undefined8 uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_1f8 [32];
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  undefined8 local_198;
  int *local_190;
  longlong local_188;
  longlong *local_180;
  undefined8 *local_178;
  longlong local_170;
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148 [24];
  ulonglong local_e8;

  local_e8 = DAT_180112300 ^ (ulonglong)auStackY_1f8;
  puVar1 = (undefined8 *)(param_1 + 0x1108);
  piVar14 = (int *)*puVar1;
  local_190 = piVar14;
  local_180 = param_2;
  local_178 = puVar1;
  local_170 = param_1;
  if ((0.0 < param_3[2]) && (0.0 < param_3[3])) {
    local_1a0 = *param_3 * DAT_180112008;
    local_19c = param_3[1] * DAT_180112008;
    local_198 = (int *)CONCAT44((param_3[3] + param_3[1]) * DAT_180112008,
                                (param_3[2] + *param_3) * DAT_180112008);
    FUN_180071360(piVar14,&local_1a0,(float *)&local_198,0xff1a120e,DAT_180112008 * 14.0,0);
  }
  fVar29 = 1.0;
  FUN_1800422b0(piVar14,param_3,0xdffffff,14.0,1.0);
  if ((int)param_2[2] == 3) {
    fVar27 = 12.0;
  }
  else {
    fVar27 = 16.0;
  }
  fVar27 = fVar27 + *param_3;
  uVar17 = (ulonglong)DAT_18011200c;
  fVar28 = param_3[1] + 8.0 + 17.0;
  local_1a8 = 3.0;
  local_1a4 = 13.0;
  local_1b0 = CONCAT44(fVar28 - 6.5,fVar27);
  FUN_180028890(piVar14,(float *)&local_1b0,DAT_18011200c,1.5,0);
  pcVar3 = (char *)param_2[1];
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    pbVar8 = (byte *)0x0;
LAB_180026936:
    fVar26 = 0.0;
    fVar22 = 0.0;
  }
  else {
    pbVar8 = (byte *)FUN_180043a40(pcVar3);
    if (pbVar8 == (byte *)0x0) goto LAB_180026936;
    piVar18 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x38);
    pfVar9 = FUN_180071ff0(piVar18,(float *)&local_1b0,(float)piVar18[5],3.4028235e+38,0.0,pbVar8,
                           (byte *)0x0,(undefined8 *)0x0);
    fVar26 = *pfVar9 / DAT_180112008 + 16.0;
    fVar22 = fVar26 + 10.0;
  }
  fVar25 = param_3[2];
  fVar2 = *param_3;
  pbVar10 = (byte *)FUN_180043a40((char *)*param_2);
  pfVar9 = local_148;
  pbVar10 = FUN_180028b30(*(int **)(*(longlong *)(param_1 + 0x1110) + 0x20),pbVar10,
                          (((fVar25 + fVar2) - fVar27) - 28.0) - fVar22,(byte *)pfVar9,0x60);
  FUN_180042c60(piVar14,*(int **)(*(longlong *)(param_1 + 0x1110) + 0x20),fVar27 + 12.0,fVar28,-NAN,
                pbVar10,(byte *)0x0);
  if (pbVar8 != (byte *)0x0) {
    piVar14 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x20);
    pfVar11 = FUN_180071ff0(piVar14,(float *)&local_1b0,(float)piVar14[5],3.4028235e+38,0.0,pbVar10,
                            (byte *)0x0,(undefined8 *)0x0);
    piVar14 = local_190;
    fVar22 = fVar28 - 10.0;
    local_1a4 = 20.0;
    fVar27 = *pfVar11 / DAT_180112008 + fVar27 + 12.0 + 10.0;
    local_1b0 = CONCAT44(fVar22,fVar27);
    local_1a8 = fVar26;
    if (0.0 < fVar26) {
      local_19c = fVar22 * DAT_180112008;
      pfVar9 = (float *)0x266e5fff;
      local_1a0 = fVar27 * DAT_180112008;
      local_198 = (int *)CONCAT44((fVar22 + 20.0) * DAT_180112008,(fVar27 + fVar26) * DAT_180112008)
      ;
      FUN_180071360(local_190,&local_1a0,(float *)&local_198,0x266e5fff,DAT_180112008 * 10.0,0);
    }
    uVar17 = 0x966e5fff;
    FUN_1800422b0(piVar14,(float *)&local_1b0,0x966e5fff,10.0,1.0);
    FUN_180042c60(piVar14,*(int **)(*(longlong *)(param_1 + 0x1110) + 0x38),fVar27 + 8.0,fVar28,
                  -3.168547e+38,pbVar8,(byte *)0x0);
  }
  iVar15 = (int)param_2[2];
  fVar28 = *param_3 + 16.0;
  fVar22 = param_3[2] - 32.0;
  fVar27 = param_3[1] + 8.0 + 34.0;
  local_1a4 = ((param_3[3] - 8.0) - 34.0) - 6.0;
  local_1b0 = CONCAT44(fVar27,fVar28);
  local_1a8 = fVar22;
  if (iVar15 == 1) {
    FUN_180020d90(param_1,(float *)&local_1b0);
    return;
  }
  if (iVar15 == 3) {
    FUN_1800303e0(param_1,param_3,uVar17,pfVar9);
    return;
  }
  if (iVar15 == 4) {
    uVar23 = FUN_18002f070(*param_2);
    FUN_180025500(puVar1,(float *)&local_1b0,(int)uVar23);
    return;
  }
  if (iVar15 == 5) {
    FUN_180028dc0(param_1,(float *)&local_1b0);
    return;
  }
  if (iVar15 == 6) {
    FUN_180023ba0(puVar1,(float *)&local_1b0);
    return;
  }
  piVar18 = (int *)0x0;
  if ((ulonglong)(param_2[4] - param_2[3] >> 3) < 2) {
LAB_180026bfb:
    bVar21 = false;
    if (piVar18 == (int *)0x0) goto LAB_180026c33;
    uVar24 = 0x3f800000;
  }
  else {
    piVar4 = *(int **)param_2[3];
    if (*piVar4 != 0) goto LAB_180026bfb;
    lVar12 = 0;
    do {
      lVar13 = lVar12 + 1;
      if (*(char *)(*(longlong *)(piVar4 + 2) + lVar12) != "Enabled"[lVar12]) goto LAB_180026bfb;
      lVar12 = lVar13;
    } while (lVar13 != 8);
    piVar18 = piVar4;
    if ((char)piVar4[5] != '\0') goto LAB_180026bfb;
    uVar24 = 0x3ecccccd;
    bVar21 = true;
  }
  uVar7 = FUN_180056ab0((char *)piVar18);
  uVar23 = FUN_180043120((float *)(param_1 + 0x1118),uVar7,(ulonglong)uVar24);
  fVar29 = (float)uVar23;
LAB_180026c33:
  lVar12 = param_2[4];
  lVar13 = param_2[3];
  if (lVar12 - lVar13 >> 3 != 0) {
    local_1b0 = 0;
    do {
      uVar17 = local_1b0;
      piVar4 = *(int **)(lVar13 + local_1b0 * 8);
      local_188 = local_1b0 * 8;
      if (((char)piVar4[0x2a] == '\0') || (*piVar4 != 6)) {
        if (*piVar4 == 1) {
          fVar26 = 70.0;
        }
        else if (*piVar4 == 6) {
          fVar26 = 64.0;
        }
        else {
          fVar26 = 46.0;
        }
        if ((local_1b0 == 0) || (piVar18 == (int *)0x0)) {
          bVar5 = false;
          iVar15 = local_190[8];
        }
        else {
          iVar15 = piVar14[8];
          if (bVar21) {
            FUN_18004f6e0('\x01');
          }
          bVar5 = true;
        }
        local_158 = fVar28;
        local_154 = fVar27;
        local_150 = fVar22;
        local_14c = fVar26;
        uVar20 = FUN_180027100(local_178,piVar4,&local_158);
        if (((char)uVar20 != '\0') && (*piVar4 == 6)) {
          if (piVar4[0x22] == 6) {
            *(bool *)(piVar4 + 5) = (char)piVar4[5] == '\0';
          }
          else {
            FUN_180029ce0(local_170,piVar4[0x22]);
          }
        }
        if (bVar5) {
          if (bVar21) {
            FUN_180053a10();
          }
          FUN_1800287e0((longlong)local_190,iVar15,fVar29);
        }
      }
      else {
        uVar16 = 1;
        uVar20 = local_1b0 + 1;
        while (((uVar20 < (ulonglong)(lVar12 - lVar13 >> 3) &&
                (piVar4 = *(int **)(lVar13 + local_188 + uVar16 * 8), (char)piVar4[0x2a] != '\0'))
               && (*piVar4 == 6))) {
          uVar20 = local_1b0 + 1 + uVar16;
          uVar16 = uVar16 + 1;
        }
        fVar26 = 64.0;
        fVar25 = (fVar22 - (float)(uVar16 - 1) * 8.0) / (float)uVar16;
        local_198 = piVar18;
        if ((local_1b0 == 0) || (piVar18 == (int *)0x0)) {
          local_1a0 = (float)piVar14[8];
          bVar5 = false;
        }
        else {
          local_1a0 = (float)piVar14[8];
          if (!bVar21) {
            bVar5 = true;
          }
          else {
            FUN_18004f6e0('\x01');
            bVar5 = true;
          }
        }
        plVar6 = local_180;
        uVar20 = 0;
        if (uVar16 != 0) {
          do {
            pcVar3 = *(char **)(local_188 + uVar20 * 8 + plVar6[3]);
            local_168 = (fVar25 + 8.0) * (float)uVar20 + fVar28;
            if ((*(int *)(pcVar3 + 0x88) == 6) && (pcVar3[0x14] != '\0')) {
              cVar19 = '\x01';
            }
            else {
              cVar19 = '\0';
            }
            uVar24 = *(uint *)(pcVar3 + 0x10);
            if (uVar24 == 0) {
              switch(*(undefined4 *)pcVar3) {
              case 1:
                uVar24 = 0xe29a;
                break;
              case 2:
              case 3:
                uVar24 = 0xe106;
                break;
              case 4:
                uVar24 = 0xe284;
                break;
              case 5:
                uVar24 = 0xe1dd;
                break;
              case 6:
                uVar24 = 0xe1b4;
                break;
              default:
                uVar24 = 0xe345;
              }
            }
            local_15c = 0x42300000;
            local_164 = fVar27 + 9.0;
            local_160 = fVar25;
            uVar23 = FUN_18002ecb0(uVar24);
            pbVar8 = (byte *)FUN_180043a40(*(char **)(pcVar3 + 8));
            uVar17 = FUN_18001dcd0(local_178,pcVar3,&DAT_1800de874,&local_168,pbVar8,(uint)uVar23,
                                   cVar19);
            if ((char)uVar17 != '\0') {
              if (*(int *)(pcVar3 + 0x88) == 6) {
                pcVar3[0x14] = pcVar3[0x14] == '\0';
              }
              else {
                FUN_180029ce0(local_170,*(int *)(pcVar3 + 0x88));
              }
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar16);
          piVar14 = local_190;
          uVar17 = local_1b0;
          piVar18 = local_198;
        }
        if (bVar5) {
          if (bVar21) {
            FUN_180053a10();
          }
          FUN_1800287e0((longlong)piVar14,(int)local_1a0,fVar29);
        }
        uVar17 = (uVar17 - 1) + uVar16;
        param_2 = local_180;
      }
      lVar12 = param_2[4];
      fVar27 = fVar27 + fVar26;
      lVar13 = param_2[3];
      local_1b0 = uVar17 + 1;
      piVar14 = local_190;
    } while (local_1b0 < (ulonglong)(lVar12 - lVar13 >> 3));
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_180027100(undefined8 *param_1,int *param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  float *pfVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStackY_e8 [32];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88 [32];
  ulonglong local_68;

  local_68 = DAT_180112300 ^ (ulonglong)auStackY_e8;
  uVar3 = (ulonglong)*param_2;
  switch(*param_2) {
  case 0:
    uVar3 = FUN_18001f2d0(param_1,(char *)param_2,param_3);
    break;
  case 1:
    uVar3 = FUN_180041c50(param_1,(char *)param_2,param_3);
    break;
  case 2:
  case 3:
    fVar9 = param_3[3] * 0.5 + param_3[1];
    local_a0 = (float)FUN_1800237c0((longlong)param_1,param_2);
    local_9c = 30.0;
    local_a8 = (param_3[2] + *param_3) - local_a0;
    local_a4 = fVar9 - 15.0;
    FUN_1800234f0(param_1,param_2,&local_a8);
    fVar10 = local_a8;
    fVar8 = *param_3;
    if ((char)param_2[0x1c] == '\0') {
      fVar1 = -NAN;
      bVar7 = false;
    }
    else {
      local_a4 = param_3[1];
      local_9c = param_3[3];
      local_a0 = (local_a8 - 12.0) - fVar8;
      local_a8 = fVar8;
      uVar4 = FUN_18002b220((longlong)param_1,(char *)param_2,&DAT_1800de868,&local_a8);
      if ((char)((ulonglong)uVar4 >> 0x30) != '\0') {
        *(bool *)(param_2 + 5) = (char)param_2[5] == '\0';
        *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
      }
      FUN_1800438b0(param_1,(uint)uVar4,(char)param_2[5],*param_3,fVar9);
      if ((char)param_2[5] == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3f800000;
      }
      uVar4 = FUN_180043120((float *)(param_1 + 2),(uint)uVar4 ^ 0x51,(ulonglong)uVar2);
      uVar3 = FUN_18002e340(0xff7c6256,0xfffaf2ee,(float)uVar4);
      fVar1 = (float)uVar3;
      bVar7 = (char)param_2[5] == '\0';
      fVar8 = fVar8 + 62.0;
    }
    uVar3 = FUN_18002b910(param_1,(longlong)param_2,fVar8,fVar9,(fVar10 - 12.0) - fVar8,fVar1,bVar7)
    ;
    break;
  case 4:
    if ((int *)param_1[0x10] == param_2) {
      pbVar5 = &DAT_1800de834;
    }
    else {
      pbVar5 = (byte *)FUN_18002b670(param_2[0x16],(char *)local_88,0x20);
    }
    pfVar6 = FUN_180071ff0(*(int **)(param_1[1] + 0x48),&local_a8,
                           (float)(*(int **)(param_1[1] + 0x48))[5],3.4028235e+38,0.0,pbVar5,
                           (byte *)0x0,(undefined8 *)0x0);
    local_a0 = FUN_1800ba000(74.0,*pfVar6 / DAT_180112008 + 20.0);
    fVar8 = *param_3;
    fVar10 = param_3[3] * 0.5 + param_3[1];
    local_a8 = (fVar8 + param_3[2]) - local_a0;
    local_9c = 30.0;
    local_a4 = fVar10 - 15.0;
    FUN_18002b910(param_1,(longlong)param_2,fVar8,fVar10,(local_a8 - 12.0) - fVar8,-NAN,'\0');
    uVar3 = FUN_18002b340(param_1,(char *)param_2,&local_a8,'\x01');
    break;
  case 5:
    local_90 = 0x41900000;
    local_8c = 0x41900000;
    fVar10 = (param_3[2] + *param_3) - 18.0;
    local_94 = (param_3[3] * 0.5 + param_3[1]) - 9.0;
    local_98 = fVar10;
    uVar2 = FUN_18001fd00((float *)(param_2 + 0x17));
    FUN_1800491c0(local_88,0x10,0x1800de86c,(ulonglong)(uVar2 >> 8));
    pfVar6 = FUN_180071ff0(*(int **)(param_1[1] + 0x58),&local_a8,
                           (float)(*(int **)(param_1[1] + 0x58))[5],3.4028235e+38,0.0,local_88,
                           (byte *)0x0,(undefined8 *)0x0);
    fVar8 = *pfVar6 / DAT_180112008;
    FUN_180042c60((int *)*param_1,*(int **)(param_1[1] + 0x58),(fVar10 - 12.0) - fVar8,
                  param_3[3] * 0.5 + param_3[1],-3.3547604e+38,local_88,(byte *)0x0);
    FUN_18002b910(param_1,(longlong)param_2,*param_3,param_3[3] * 0.5 + param_3[1],
                  ((fVar10 - 24.0) - fVar8) - *param_3,-NAN,'\0');
    uVar3 = FUN_180042420(param_1,(char *)param_2,(undefined8 *)&local_98);
    break;
  case 6:
    uVar3 = FUN_18001dfd0(param_1,(char *)param_2,param_3);
    return uVar3;
  }
  return uVar3 & 0xffffffffffffff00;
}


longlong FUN_180027580(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;

  lVar1 = FUN_180011740(param_1,2,param_2);
  FUN_180009f70((longlong *)(lVar1 + 0x40),param_3);
  *(undefined4 *)(lVar1 + 0x38) = param_4;
  FUN_180009380(param_3);
  return lVar1;
}


void FUN_1800275e0(longlong param_1)

{
  char cVar1;
  byte *pbVar2;
  float *pfVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res20;
  float local_res24;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  byte local_188 [4];
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  int local_164;
  float local_160;
  longlong local_158;
  int *local_150;
  float local_148;
  float local_144;
  float local_140;
  int *local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  uint local_11c;
  float local_118;
  uint local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  byte *local_f0;

  piVar12 = *(int **)(param_1 + 0x60);
  if (piVar12 != (int *)0x0) {
    iVar10 = *piVar12;
    local_164 = iVar10;
    local_150 = piVar12;
    uVar17 = FUN_180043120((float *)(param_1 + 0x10),*(uint *)(param_1 + 0x78) ^ 0xddba11,0x3f800000
                          );
    fVar13 = (float)uVar17;
    local_158 = *(longlong *)(piVar12 + 0x12) - *(longlong *)(piVar12 + 0x10) >> 3;
    if ((*(char *)((longlong)piVar12 + 0x71) == '\0') || (iVar10 == 3)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    uVar11 = 0;
    local_res8 = (float)CONCAT31(local_res8._1_3_,cVar1);
    fVar23 = 0.0;
    fVar20 = 0.0;
    uVar6 = 0;
    iVar10 = (int)local_158;
    if (0 < iVar10) {
      do {
        pbVar2 = (byte *)FUN_180043a40(*(char **)(*(longlong *)(piVar12 + 0x10) + uVar6 * 8));
        piVar5 = *(int **)(*(longlong *)(param_1 + 8) + 0x40);
        pfVar3 = FUN_180071ff0(piVar5,&local_res10,(float)piVar5[5],3.4028235e+38,0.0,pbVar2,
                               (byte *)0x0,(undefined8 *)0x0);
        fVar20 = FUN_1800ba000(fVar20,*pfVar3 / DAT_180112008);
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar10);
    }
    if (cVar1 != '\0') {
      pcVar7 = "By name";
      if (*(char **)(piVar12 + 0x1e) != (char *)0x0) {
        pcVar7 = *(char **)(piVar12 + 0x1e);
      }
      pbVar2 = (byte *)FUN_180043a40(pcVar7);
      piVar5 = *(int **)(*(longlong *)(param_1 + 8) + 0x40);
      pfVar3 = FUN_180071ff0(piVar5,&local_res10,(float)piVar5[5],3.4028235e+38,0.0,pbVar2,
                             (byte *)0x0,(undefined8 *)0x0);
      fVar20 = FUN_1800ba000(fVar20,*pfVar3 / DAT_180112008);
    }
    fVar14 = FUN_1800ba000(120.0,*(float *)(param_1 + 0x70));
    fVar14 = FUN_1800ba000(fVar14,fVar20 + 20.0 + 12.0 + 16.0 + 10.0);
    fVar20 = 33.0;
    if (cVar1 == '\0') {
      fVar24 = 0.0;
    }
    else {
      fVar24 = 33.0;
    }
    fVar21 = *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x6c) + 5.0;
    fVar26 = (float)iVar10 * 32.0;
    fVar24 = fVar26 + 10.0 + fVar24;
    local_198 = (*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x70)) - fVar14;
    local_194 = fVar21;
    local_190 = fVar14;
    local_18c = fVar24;
    local_168 = fVar26;
    local_144 = fVar14;
    if (local_198 < 8.0) {
      local_198 = FUN_1800ba070(*(float *)(param_1 + 0x68),(900.0 - fVar14) - 8.0);
    }
    if (612.0 < fVar21 + fVar24) {
      local_194 = (*(float *)(param_1 + 0x6c) - fVar24) - 5.0;
    }
    FUN_180028cb0(&local_198,8.0,8.0);
    local_194 = local_194 - (1.0 - fVar13) * 4.0;
    if (cVar1 == '\0') {
      fVar20 = 0.0;
    }
    fVar20 = (local_18c - 10.0) - fVar20;
    local_res18 = fVar20;
    fVar24 = FUN_1800ba000(0.0,fVar26 - fVar20);
    local_140 = fVar24;
    if (*(float *)(param_1 + 0x7c) <= 0.0 && *(float *)(param_1 + 0x7c) != 0.0) {
      fVar21 = FUN_1800ba000(0.0,(float)piVar12[0xe] * 32.0 - fVar20 * 0.5);
      fVar21 = FUN_1800ba070(fVar24,fVar21);
      *(float *)(param_1 + 0x7c) = fVar21;
    }
    fVar26 = local_190;
    fVar21 = local_198;
    if (0.0 < fVar24) {
      lVar4 = FUN_180056d70();
      fVar22 = *(float *)(lVar4 + 0xe4) / DAT_180112008;
      lVar4 = FUN_180056d70();
      fVar20 = *(float *)(lVar4 + 0xe0) / DAT_180112008;
      if ((((fVar21 <= fVar20) && (local_194 <= fVar22)) && (fVar20 < fVar26 + fVar21)) &&
         (fVar22 < local_18c + local_194)) {
        lVar4 = FUN_180056d70();
        *(float *)(param_1 + 0x7c) =
             *(float *)(param_1 + 0x7c) - *(float *)(lVar4 + 0xf0) * 32.0 * 3.0;
      }
      fVar20 = local_res18;
    }
    fVar21 = FUN_1800ba000(0.0,*(float *)(param_1 + 0x7c));
    local_180 = FUN_1800ba070(fVar24,fVar21);
    *(float *)(param_1 + 0x7c) = local_180;
    if (fVar24 <= 0.0) {
      local_180 = 0.0;
    }
    fVar24 = local_180;
    piVar5 = (int *)FUN_1800569b0();
    local_138 = piVar5;
    FUN_18002ff50(piVar5,&local_198,fVar13);
    fVar21 = local_194 + 5.0;
    local_160 = fVar26 + local_198;
    local_res20 = local_198 * DAT_180112008;
    local_res10 = local_160 * DAT_180112008;
    local_148 = fVar21 + fVar20;
    local_res14 = local_148 * DAT_180112008;
    local_res24 = fVar21 * DAT_180112008;
    local_184 = fVar21;
    FUN_180076360(piVar5,&local_res20,&local_res10,'\x01');
    lVar4 = FUN_180056d70();
    uVar8 = 0xffffffff;
    fVar26 = *(float *)(lVar4 + 0xe0) / DAT_180112008;
    fVar22 = *(float *)(lVar4 + 0xe4) / DAT_180112008;
    local_res10 = fVar26;
    if (0 < (int)local_158) {
      fVar14 = fVar14 - 10.0;
      lVar4 = local_158;
      local_res20 = fVar14;
      uVar8 = 0xffffffff;
      do {
        fVar24 = ((float)(int)uVar11 * 32.0 + fVar21) - fVar24;
        fVar20 = fVar24 + 32.0;
        if (fVar21 <= fVar20) {
          if (fVar24 <= local_148) {
            fVar25 = local_198 + 5.0;
            if (((((*(char *)(param_1 + 0x58) != '\0') || (fVar26 < fVar25)) ||
                 ((fVar22 < fVar24 || ((fVar25 + fVar14 <= fVar26 || (fVar20 <= fVar22)))))) ||
                (fVar22 < fVar21)) || (local_148 < fVar22)) {
              uVar18 = 0;
            }
            else {
              uVar18 = 0x3f800000;
              uVar8 = uVar11;
            }
            uVar17 = FUN_180043120((float *)(param_1 + 0x10),
                                   uVar11 + 0x1000 ^ *(uint *)(param_1 + 0x78),(ulonglong)uVar18);
            fVar21 = (float)uVar17;
            if (0.01 < fVar21) {
              fVar26 = fVar21 * fVar13;
              if (0.0 <= fVar26) {
                fVar19 = 1.0;
                if (fVar26 <= 1.0) {
                  fVar19 = fVar26;
                }
              }
              else {
                fVar19 = 0.0;
              }
              if (0.0 < local_res20) {
                local_12c = fVar20 * DAT_180112008;
                local_130 = (fVar25 + fVar14) * DAT_180112008;
                local_124 = fVar24 * DAT_180112008;
                local_128 = fVar25 * DAT_180112008;
                FUN_180071360(piVar5,&local_128,&local_130,
                              (int)(fVar19 * 14.0 + 0.5) << 0x18 | 0xffffff,DAT_180112008 * 8.0,0);
              }
            }
            if (local_164 == 3) {
              bVar9 = (bool)((byte)((uint)piVar12[0xf] >> ((byte)uVar11 & 0x1f)) & 1);
            }
            else {
              bVar9 = uVar11 == piVar12[0xe];
            }
            if (bVar9 == false) {
              if (0.0 < fVar21) {
                if (fVar21 < 1.0) {
                  FUN_1800521a0(&local_110,0xffbca498);
                  FUN_1800521a0(&local_100,0xfffaf2ee);
                  local_178 = (local_100 - local_110) * fVar21 + local_110;
                  local_174 = (local_fc - local_10c) * fVar21 + local_10c;
                  local_170 = (local_f8 - local_108) * fVar21 + local_108;
                  local_16c = (local_f4 - local_104) * fVar21 + local_104;
                  uVar18 = FUN_180051e70(&local_178);
                }
                else {
                  uVar18 = 0xfffaf2ee;
                }
              }
              else {
                uVar18 = 0xffbca498;
              }
            }
            else {
              uVar18 = DAT_180112010;
            }
            local_f0 = (byte *)FUN_180043a40(*(char **)(*(longlong *)(piVar12 + 0x10) +
                                                       (ulonglong)uVar11 * 8));
            fVar20 = 1.0;
            if (fVar13 <= 1.0) {
              fVar20 = fVar13;
            }
            if (0.0 <= fVar13) {
              fVar21 = fVar20;
            }
            else {
              fVar21 = 0.0;
            }
            piVar12 = *(int **)(*(longlong *)(param_1 + 8) + 0x40);
            uVar15 = FUN_1800ba150((uint)(((fVar24 + 16.0) -
                                          ((float)piVar12[5] / DAT_180112008) * 0.5) * DAT_180112008
                                         ));
            local_120 = (float)FUN_1800ba150((uint)((fVar25 + 10.0) * DAT_180112008));
            piVar5 = local_138;
            local_11c = uVar15;
            FUN_1800716c0(local_138,piVar12,(float)piVar12[5],&local_120,
                          (float)((int)((float)(uVar18 >> 0x18) * fVar21 + 0.5) << 0x18 |
                                 uVar18 & 0xffffff),local_f0,(byte *)0x0,0.0,(float *)0x0);
            if (bVar9 != false) {
              if (fVar13 < 0.0) {
                fVar20 = 0.0;
              }
              piVar12 = *(int **)(*(longlong *)(param_1 + 8) + 0x88);
              if (piVar12 != (int *)0x0) {
                uVar18 = DAT_180112010 >> 0x18;
                uVar15 = DAT_180112010 & 0xffffff;
                lVar4 = FUN_180072860((longlong)piVar12,0xf00c);
                if (lVar4 == 0) {
                  piVar5 = local_138;
                }
                else {
                  local_188[0] = 0xef;
                  local_188[1] = 0x80;
                  local_188[2] = 0x8c;
                  local_188[3] = 0;
                  uVar16 = FUN_1800ba150((uint)((fVar24 + 16.0) * DAT_180112008 -
                                               (*(float *)(lVar4 + 0x14) + *(float *)(lVar4 + 0xc))
                                               * 0.5));
                  local_118 = (float)FUN_1800ba150((uint)((((fVar25 + fVar14) - 10.0) - 5.5) *
                                                          DAT_180112008 -
                                                         (*(float *)(lVar4 + 0x10) +
                                                         *(float *)(lVar4 + 8)) * 0.5));
                  piVar5 = local_138;
                  local_114 = uVar16;
                  FUN_1800716c0(local_138,piVar12,(float)piVar12[5],&local_118,
                                (float)((int)((float)uVar18 * fVar20 + 0.5) << 0x18 | uVar15),
                                local_188,(byte *)0x0,0.0,(float *)0x0);
                }
              }
            }
            lVar4 = local_158;
            piVar12 = local_150;
            fVar21 = local_184;
            fVar14 = local_res20;
            fVar26 = local_res10;
          }
        }
        uVar11 = uVar11 + 1;
        fVar24 = local_180;
      } while ((int)uVar11 < (int)lVar4);
      fVar20 = local_res18;
      fVar14 = local_144;
      cVar1 = local_res8._0_1_;
    }
    FUN_180076030(piVar5);
    fVar26 = local_140;
    fVar24 = local_168;
    if (0.0 < local_140) {
      local_16c = FUN_1800ba000(24.0,(fVar20 * fVar20) / local_168);
      local_174 = (fVar20 - local_16c) * (local_180 / fVar26) + fVar21;
      if (0.0 <= fVar13) {
        fVar26 = 1.0;
        if (fVar13 <= 1.0) {
          fVar26 = fVar13;
        }
      }
      else {
        fVar26 = 0.0;
      }
      local_178 = local_160 - 4.0;
      local_170 = 2.5;
      FUN_180028890(piVar5,&local_178,(int)(fVar26 * 60.0 + 0.5) << 0x18 | 0xffffff,1.25,0);
    }
    bVar9 = false;
    if (cVar1 == '\0') {
      fVar20 = local_res10;
    }
    else {
      fVar20 = FUN_1800ba070(fVar24,fVar20);
      fVar24 = fVar20 + fVar21 + 1.0;
      if (0.0 <= fVar13) {
        fVar20 = 1.0;
        if (fVar13 <= 1.0) {
          fVar20 = fVar13;
        }
      }
      else {
        fVar20 = 0.0;
      }
      fVar21 = local_198 + 5.0;
      FUN_18002ad90(piVar5,fVar21 + 6.0,((local_190 + local_198) - 5.0) - 6.0,fVar24 - 1.0,
                    (int)(fVar20 * 11.0 + 0.5) << 0x18 | 0xffffff);
      fVar20 = local_res10;
      fVar14 = fVar14 - 10.0;
      if ((((*(char *)(param_1 + 0x58) != '\0') || (local_res10 < fVar21)) || (fVar22 < fVar24)) ||
         ((fVar14 + fVar21 <= local_res10 || (fVar24 + 32.0 <= fVar22)))) {
        uVar11 = 0;
        bVar9 = false;
      }
      else {
        uVar11 = 0x3f800000;
        bVar9 = true;
      }
      uVar17 = FUN_180043120((float *)(param_1 + 0x10),*(uint *)(param_1 + 0x78) ^ 0xb7a9,
                             (ulonglong)uVar11);
      fVar26 = (float)uVar17;
      if (0.01 < fVar26) {
        fVar25 = fVar26 * fVar13;
        if (0.0 <= fVar25) {
          fVar19 = 1.0;
          if (fVar25 <= 1.0) {
            fVar19 = fVar25;
          }
        }
        else {
          fVar19 = 0.0;
        }
        if (0.0 < fVar14) {
          local_res14 = fVar24 * DAT_180112008;
          local_res8 = (fVar14 + fVar21) * DAT_180112008;
          local_resc = (fVar24 + 32.0) * DAT_180112008;
          local_res10 = fVar21 * DAT_180112008;
          FUN_180071360(piVar5,&local_res10,&local_res8,
                        (int)(fVar19 * 14.0 + 0.5) << 0x18 | 0xffffff,DAT_180112008 * 8.0,0);
        }
      }
      pcVar7 = "By name";
      if (*(char **)(piVar12 + 0x1e) != (char *)0x0) {
        pcVar7 = *(char **)(piVar12 + 0x1e);
      }
      pbVar2 = (byte *)FUN_180043a40(pcVar7);
      if (*(char *)((longlong)piVar12 + 0x72) == '\0') {
        uVar6 = FUN_18002e340(0xffbca498,0xfffaf2ee,fVar26);
        uVar11 = (uint)uVar6;
      }
      else {
        uVar11 = DAT_180112010;
      }
      fVar26 = 1.0;
      if (fVar13 <= 1.0) {
        fVar26 = fVar13;
      }
      if (0.0 <= fVar13) {
        fVar25 = fVar26;
      }
      else {
        fVar25 = 0.0;
      }
      FUN_180042c60(piVar5,*(int **)(*(longlong *)(param_1 + 8) + 0x40),fVar21 + 10.0,fVar24 + 16.0,
                    (float)((int)((float)(uVar11 >> 0x18) * fVar25 + 0.5) << 0x18 |
                           uVar11 & 0xffffff),pbVar2,(byte *)0x0);
      fVar24 = (fVar24 + 16.0) - 8.0;
      local_170 = 16.0;
      local_16c = 16.0;
      fVar14 = ((fVar14 + fVar21) - 10.0) - 16.0;
      if (*(char *)((longlong)piVar12 + 0x72) == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = 0x3f800000;
      }
      local_178 = fVar14;
      local_174 = fVar24;
      uVar17 = FUN_180043120((float *)(param_1 + 0x10),*(uint *)(param_1 + 0x78) ^ 0xb7aa,
                             (ulonglong)uVar11);
      fVar21 = (float)uVar17;
      uVar6 = FUN_18002e340(0xff271b16,DAT_18011200c,fVar21);
      if (fVar13 < 0.0) {
        fVar26 = 0.0;
      }
      local_res8 = (fVar14 + 16.0) * DAT_180112008;
      local_res14 = fVar24 * DAT_180112008;
      local_resc = (fVar24 + 16.0) * DAT_180112008;
      local_res10 = fVar14 * DAT_180112008;
      FUN_180071360(piVar5,&local_res10,&local_res8,
                    (int)((float)((uint)(uVar6 >> 0x18) & 0xff) * fVar26 + 0.5) << 0x18 |
                    (uint)uVar6 & 0xffffff,DAT_180112008 * 5.0,0);
      if (fVar21 < 0.99) {
        fVar26 = (1.0 - fVar21) * fVar13;
        uVar6 = FUN_18002e340(0x2effffff,DAT_18011200c,fVar21);
        if (0.0 <= fVar26) {
          fVar25 = 1.0;
          if (fVar26 <= 1.0) {
            fVar25 = fVar26;
          }
        }
        else {
          fVar25 = 0.0;
        }
        FUN_1800422b0(piVar5,&local_178,
                      (int)((float)((uint)(uVar6 >> 0x18) & 0xff) * fVar25 + 0.5) << 0x18 |
                      (uint)uVar6 & 0xffffff,5.0,1.0);
      }
      if (0.01 < fVar21) {
        fVar21 = fVar21 * fVar13;
        if ((0.0 <= fVar21) && (fVar23 = 1.0, fVar21 <= 1.0)) {
          fVar23 = fVar21;
        }
        FUN_180023a40(piVar5,*(int **)(*(longlong *)(param_1 + 8) + 0x88),0xf00c,fVar14 + 8.0,
                      fVar24 + 8.0,
                      (float)((int)((float)(DAT_180112014 >> 0x18) * fVar23 + 0.5) << 0x18 |
                             DAT_180112014 & 0xffffff));
      }
    }
    uVar17 = FUN_180059c10(0,'\0');
    if ((char)uVar17 != '\0') {
      if (bVar9) {
        *(bool *)((longlong)piVar12 + 0x72) = *(char *)((longlong)piVar12 + 0x72) == '\0';
        *(undefined1 *)(param_1 + 0xcc) = 1;
      }
      else if ((int)uVar8 < 0) {
        if ((((fVar20 < local_198) || (fVar22 < local_194)) || (local_160 <= fVar20)) ||
           (local_18c + local_194 <= fVar22)) {
          *(undefined8 *)(param_1 + 0x60) = 0;
        }
      }
      else if (local_164 == 3) {
        piVar12[0xf] = piVar12[0xf] ^ 1 << (uVar8 & 0x1f);
        *(undefined1 *)(param_1 + 0xcc) = 1;
      }
      else {
        piVar12[0xe] = uVar8;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined1 *)(param_1 + 0xcc) = 1;
      }
    }
    cVar1 = FUN_180059aa0(0x20e,0);
    if (cVar1 != '\0') {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined1 (*) [32] FUN_1800286d0(undefined1 (*param_1) [32])

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [32];
  longlong lVar4;
  undefined1 (*pauVar5) [32];
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 (*local_230) [32];
  WCHAR local_228 [264];
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_258;
  local_238 = 0;
  local_230 = param_1;
  FUN_1800d22d0((undefined1 (*) [32])local_228,0,0x208);
  GetModuleFileNameW((HMODULE)0x0,local_228,0x104);
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)(*param_1 + 0x10) = 0;
  *(undefined8 *)(*param_1 + 0x18) = 0;
  uVar1 = FUN_1800bd630((undefined1 (*) [32])local_228);
  FUN_1800029f0((undefined8 *)param_1,(undefined8 *)local_228,uVar1);
  local_238 = 1;
  if (*(ulonglong *)(*param_1 + 0x18) < 8) {
    pauVar5 = param_1;
  }
  else {
    pauVar5 = *(undefined1 (**) [32])*param_1;
  }
  if (*(longlong *)(*param_1 + 0x10) != 0) {
    lVar4 = *(longlong *)(*param_1 + 0x10) + -1;
    lVar2 = -1;
    if (lVar4 != -1) {
      lVar2 = lVar4;
    }
    pauVar3 = thunk_FUN_1800a4a60(pauVar5,(undefined1 (*) [32])(*pauVar5 + lVar2 * 2 + 2),0x5c);
    if ((pauVar3 != (undefined1 (*) [32])(*pauVar5 + lVar2 * 2 + 2)) &&
       (uVar1 = (longlong)pauVar3 - (longlong)pauVar5 >> 1, uVar1 != 0xffffffffffffffff)) {
      FUN_18003fea0((undefined8 *)param_1,uVar1,0);
    }
  }
  return param_1;
}


void FUN_1800287e0(longlong param_1,int param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;

  if ((param_3 < 0.999) && (iVar2 = *(int *)(param_1 + 0x20), param_2 < iVar2)) {
    do {
      if ((param_2 < 0) || (iVar2 <= param_2)) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar3 = (longlong)param_2;
      param_2 = param_2 + 1;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar3 * 0x14);
      *(uint *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar3 * 0x14) =
           (int)(longlong)((float)(uVar1 >> 0x18) * param_3 + 0.5) << 0x18 | uVar1 & 0xffffff;
      iVar2 = *(int *)(param_1 + 0x20);
    } while (param_2 < iVar2);
  }
  return;
}


void FUN_180028890(int *param_1,float *param_2,uint param_3,float param_4,uint param_5)

{
  float local_res10;
  float local_res14;
  float local_18;
  float local_14;

  if ((0.0 < param_2[2]) && (0.0 < param_2[3])) {
    local_18 = *param_2 * DAT_180112008;
    local_res10 = (param_2[2] + *param_2) * DAT_180112008;
    local_14 = param_2[1] * DAT_180112008;
    local_res14 = (param_2[3] + param_2[1]) * DAT_180112008;
    FUN_180071360(param_1,&local_18,&local_res10,param_3,param_4 * DAT_180112008,param_5);
  }
  return;
}


longlong FUN_180028920(longlong param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong local_88;
  ulonglong local_80;

  if ((((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) && (param_4 != (char *)0x0)) &&
     ((param_5 != (char *)0x0 && (*(longlong *)(param_1 + 0x20) != 0)))) {
    local_80 = *(ulonglong *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 8);
    uVar12 = *(longlong *)(param_1 + 0x20) + local_80;
    lVar2 = *(longlong *)(param_1 + 0x10);
    do {
      puVar3 = *(undefined8 **)(lVar1 + (lVar2 - 1U & local_80) * 8);
      iVar11 = strcmp((char *)*puVar3,param_2);
      if (iVar11 == 0) {
        local_88 = puVar3[6];
        uVar13 = puVar3[7] + local_88;
        if (local_88 != uVar13) {
          lVar4 = puVar3[5];
          lVar5 = puVar3[4];
          do {
            puVar3 = *(undefined8 **)(lVar5 + (lVar4 - 1U & local_88) * 8);
            iVar11 = strcmp((char *)*puVar3,param_3);
            if (iVar11 == 0) {
              uVar15 = puVar3[5];
              uVar17 = puVar3[6] + uVar15;
              if (uVar15 != uVar17) {
                lVar6 = puVar3[4];
                lVar7 = puVar3[3];
                do {
                  puVar3 = *(undefined8 **)(lVar7 + (lVar6 - 1U & uVar15) * 8);
                  iVar11 = strcmp((char *)*puVar3,param_4);
                  if (iVar11 == 0) {
                    uVar14 = puVar3[6];
                    uVar16 = puVar3[7] + uVar14;
                    if (uVar14 != uVar16) {
                      lVar8 = puVar3[4];
                      lVar9 = puVar3[5];
                      do {
                        lVar10 = *(longlong *)(lVar8 + (lVar9 - 1U & uVar14) * 8);
                        iVar11 = strcmp(*(char **)(lVar10 + 8),param_5);
                        if (iVar11 == 0) {
                          return lVar10;
                        }
                        uVar14 = uVar14 + 1;
                      } while (uVar14 != uVar16);
                    }
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar17);
              }
            }
            local_88 = local_88 + 1;
          } while (local_88 != uVar13);
        }
      }
      local_80 = local_80 + 1;
    } while (local_80 != uVar12);
  }
  return 0;
}


byte * FUN_180028b30(int *param_1,byte *param_2,float param_3,byte *param_4,int param_5)

{
  byte *pbVar1;
  float *pfVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  float local_res8 [2];

  pfVar2 = FUN_180071ff0(param_1,local_res8,(float)param_1[5],3.4028235e+38,0.0,param_2,(byte *)0x0,
                         (undefined8 *)0x0);
  if (param_3 + 0.05 < *pfVar2 / DAT_180112008) {
    uVar3 = strlen((char *)param_2);
    uVar4 = (uint)uVar3;
    do {
      do {
        if ((int)uVar4 < 1) {
          *param_4 = 0;
          goto LAB_180028c6d;
        }
        uVar5 = (uint)uVar3;
        while( true ) {
          uVar4 = uVar5 - 1;
          uVar3 = (ulonglong)uVar4;
          if (((int)uVar4 < 1) || ((param_2[uVar3] & 0xc0) != 0x80)) break;
          uVar5 = uVar4;
        }
      } while (param_5 <= (int)(uVar5 + 3));
      FUN_1800d1c20((undefined8 *)param_4,(undefined8 *)param_2,(longlong)(int)uVar4);
      pbVar1 = param_4 + (int)uVar4;
      pbVar1[0] = 0xe2;
      pbVar1[1] = 0x80;
      pbVar1[2] = 0xa6;
      pbVar1[3] = 0;
      pfVar2 = FUN_180071ff0(param_1,local_res8,(float)param_1[5],3.4028235e+38,0.0,param_4,
                             (byte *)0x0,(undefined8 *)0x0);
    } while (param_3 < *pfVar2 / DAT_180112008);
LAB_180028c6d:
    param_2 = param_4;
  }
  return param_2;
}


void FUN_180028cb0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar4 = param_1[2];
  fVar3 = 892.0 - param_2;
  if (fVar3 < fVar4) {
    param_1[2] = fVar3;
    fVar4 = fVar3;
  }
  fVar3 = param_1[3];
  fVar2 = 612.0 - param_3;
  if (fVar2 < fVar3) {
    param_1[3] = fVar2;
    fVar3 = fVar2;
  }
  fVar2 = *param_1;
  if (*param_1 < param_2) {
    *param_1 = param_2;
    fVar2 = param_2;
  }
  fVar1 = param_1[1];
  if (param_1[1] < param_3) {
    param_1[1] = param_3;
    fVar1 = param_3;
  }
  if (892.0 < fVar4 + fVar2) {
    fVar2 = 892.0 - fVar4;
    *param_1 = fVar2;
  }
  if (612.0 < fVar3 + fVar1) {
    fVar1 = 612.0 - fVar3;
    param_1[1] = fVar1;
  }
  if (fVar2 < param_2) {
    *param_1 = param_2;
  }
  if (fVar1 < param_3) {
    param_1[1] = param_3;
  }
  return;
}


void FUN_180028d90(void)

{
  int local_res8 [2];
  int local_res10 [6];

  local_res10[0] = 0;
  local_res8[0] = 0;
  FUN_180048db0(local_res10,local_res8);
  FUN_18002df10(local_res10[0],local_res8[0]);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180028dc0(longlong param_1,float *param_2)

{
  float *_Str;
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  size_t sVar4;
  LPVOID pvVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  float *pfVar11;
  size_t sVar12;
  char *****pppppcVar13;
  char *****pppppcVar14;
  char *pcVar15;
  undefined8 *puVar16;
  longlong *_Buf1;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  LPVOID pvVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  float fVar27;
  undefined1 auStackY_d8 [8];
  undefined1 auStackY_d0 [24];
  undefined8 local_90;
  float local_88;
  undefined4 local_84;
  float *local_80;
  char *****local_78;
  undefined8 uStack_70;
  size_t local_68;
  ulonglong local_60;
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStackY_d8;
  fVar27 = param_2[1];
  local_80 = param_2;
  pfVar11 = (float *)FUN_180043a40("Nickname...");
  local_90 = (longlong *)CONCAT44(fVar27 + 4.0,*param_2);
  local_88 = param_2[2];
  local_84 = 0x42200000;
  _Str = (float *)(param_1 + 0x13d9);
  cVar9 = FUN_1800428e0((undefined8 *)(param_1 + 0x1108),(byte *)"frname",_Str,0x40,
                        (float *)&local_90,pfVar11,0xf0c0,1);
  if ((cVar9 != '\0') && (*(char *)_Str != '\0')) {
    local_78 = (char *****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    sVar12 = strlen((char *)_Str);
    FUN_1800028f0(&local_78,(undefined8 *)_Str,sVar12);
    while( true ) {
      pppppcVar13 = local_78;
      uVar25 = local_60;
      if (local_68 == 0) break;
      pppppcVar14 = (char *****)&local_78;
      if (0xf < local_60) {
        pppppcVar14 = local_78;
      }
      sVar12 = local_68 - 1;
      if (*(char *)((longlong)pppppcVar14 + sVar12) != ' ') {
        if (local_68 != 0) goto LAB_180028f11;
        break;
      }
      local_68 = sVar12;
      pppppcVar13 = (char *****)&local_78;
      if (0xf < local_60) {
        pppppcVar13 = local_78;
      }
      *(char *)((longlong)pppppcVar13 + sVar12) = '\0';
    }
    goto LAB_18002903a;
  }
LAB_18002907a:
  puVar21 = auStackY_d8;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 4) < DAT_180115aa0) && (FUN_1800a54b0(&DAT_180115aa0), DAT_180115aa0 == -1))
  {
    DAT_1801159f0 = 0;
    _DAT_1801159f8 = "";
    _DAT_180115a00 = 0;
    DAT_180115a04 = 0;
    _DAT_180115a08 = 0;
    _DAT_180115a10 = 0x3f800000;
    _DAT_180115a18 = 0;
    _DAT_180115a20 = &DAT_1800d8c40;
    _DAT_180115a28 = 0;
    DAT_180115a30 = (longlong *)0x0;
    DAT_180115a38 = (longlong *)0x0;
    DAT_180115a40 = (longlong *)0x0;
    _DAT_180115a48 = 0;
    _DAT_180115a4c = 0x3f800000;
    _DAT_180115a50 = 0x3f800000;
    _DAT_180115a54 = 0x3f800000;
    _DAT_180115a58 = 0x3f800000;
    _DAT_180115a60 = 0;
    DAT_180115a62 = 0;
    _DAT_180115a68 = "By name";
    _DAT_180115a70 = 0;
    _DAT_180115a78 = 0;
    DAT_180115a7c = 0;
    _DAT_180115a80 = 0;
    uRam0000000180115a88 = 0;
    _DAT_180115a90 = 0;
    DAT_180115a98 = 0;
    FUN_1800a53c0(0x1800d62b0);
    _Init_thread_footer(&DAT_180115aa0);
  }
  if ((*(int *)(lVar2 + 4) < DAT_180115ac0) && (FUN_1800a54b0(&DAT_180115ac0), DAT_180115ac0 == -1))
  {
    DAT_180115aa8 = (longlong *)0x0;
    DAT_180115ab0 = (longlong *)0x0;
    DAT_180115ab8 = (longlong *)0x0;
    FUN_1800a53c0(0x1800d67c0);
    _Init_thread_footer(&DAT_180115ac0);
  }
  if (DAT_1801159f0 != 3) {
    DAT_1801159f0 = 3;
    _DAT_1801159f8 = "Choose friends";
    _DAT_180115a00 = 0xe1a4;
  }
  if (DAT_180115a2c == DAT_180115ac4) goto LAB_1800292bd;
  puVar21 = auStackY_d8;
  if ((longlong)DAT_180115ab0 - (longlong)DAT_180115aa8 >> 5 != 0) {
    uVar25 = 0;
    local_90 = (longlong *)(param_1 + 0x13c0);
    do {
      puVar21 = auStackY_d8;
      if (0x1f < uVar25) break;
      uVar24 = DAT_180115a2c >> ((byte)uVar25 & 0x1f);
      plVar17 = DAT_180115aa8 + uVar25 * 4;
      plVar26 = *(longlong **)(param_1 + 0x13c8);
      plVar19 = *(longlong **)(param_1 + 0x13c0);
      plVar18 = (longlong *)(param_1 + 0x13c0);
      if (plVar19 != plVar26) {
        uVar3 = plVar17[3];
        sVar12 = plVar17[2];
        do {
          if (uVar3 < 0x10) {
            plVar18 = plVar17;
          }
          else {
            plVar18 = (longlong *)*plVar17;
          }
          sVar4 = plVar19[2];
          if ((ulonglong)plVar19[3] < 0x10) {
            _Buf1 = plVar19;
          }
          else {
            _Buf1 = (longlong *)*plVar19;
          }
        } while (((sVar4 != sVar12) ||
                 ((sVar4 != 0 && (iVar10 = memcmp(_Buf1,plVar18,sVar4), iVar10 != 0)))) &&
                (plVar19 = plVar19 + 4, plVar19 != plVar26));
        plVar18 = local_90;
      }
      if ((uVar24 & 1) == 0) {
        plVar18 = plVar19;
        if (plVar19 != plVar26) {
          while (plVar17 = plVar18 + 4, plVar17 != plVar26) {
            if (plVar19 != plVar17) {
              if (0xf < (ulonglong)plVar19[3]) {
                pvVar5 = (LPVOID)*plVar19;
                if (plVar19[3] + 1U < 0x1000) {
                  pvVar23 = pvVar5;
                }
                else {
                  pvVar23 = *(LPVOID *)((longlong)pvVar5 + -8);
                  if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar23)))
                  goto LAB_1800292ae;
                }
                thunk_FUN_1800c3030(pvVar23);
              }
              plVar19[2] = 0;
              plVar19[3] = 0xf;
              *(undefined1 *)plVar19 = 0;
              lVar2 = plVar18[5];
              *plVar19 = *plVar17;
              plVar19[1] = lVar2;
              lVar2 = plVar18[7];
              plVar19[2] = plVar18[6];
              plVar19[3] = lVar2;
              plVar18[6] = 0;
              plVar18[7] = 0xf;
              *(undefined1 *)plVar17 = 0;
            }
            plVar19 = plVar19 + 4;
            plVar18 = plVar17;
          }
          FUN_1800115e0((longlong *)(*(longlong *)(param_1 + 0x13c8) + -0x20));
          *(longlong *)(param_1 + 0x13c8) = *(longlong *)(param_1 + 0x13c8) + -0x20;
        }
      }
      else if (plVar19 == plVar26) {
        if (plVar26 == *(longlong **)(param_1 + 0x13d0)) {
          FUN_180002e60(plVar18,plVar26,plVar17);
        }
        else {
          FUN_180007dc0(plVar26,plVar17);
          *(longlong *)(param_1 + 0x13c8) = *(longlong *)(param_1 + 0x13c8) + 0x20;
        }
      }
      uVar25 = uVar25 + 1;
      puVar21 = auStackY_d8;
    } while (uVar25 < (ulonglong)((longlong)DAT_180115ab0 - (longlong)DAT_180115aa8 >> 5));
  }
  goto LAB_1800292b5;
LAB_180028f11:
  uVar25 = local_60;
  sVar12 = local_68;
  pppppcVar13 = local_78;
  pppppcVar14 = (char *****)&local_78;
  if (0xf < local_60) {
    pppppcVar14 = local_78;
  }
  if (*(char *)pppppcVar14 == ' ') {
    pppppcVar13 = (char *****)&local_78;
    if (0xf < local_60) {
      pppppcVar13 = local_78;
    }
    sVar12 = local_68 - (local_68 != 0);
    FUN_1800d1c20(pppppcVar13,(undefined8 *)((longlong)pppppcVar13 + (ulonglong)(local_68 != 0)),
                  sVar12 + 1);
    local_68 = sVar12;
    uVar25 = local_60;
    pppppcVar13 = local_78;
    if (sVar12 == 0) goto LAB_18002903a;
    goto LAB_180028f11;
  }
  if (local_68 == 0) goto LAB_18002903a;
  puVar20 = *(undefined8 **)(param_1 + 0x13c8);
  puVar22 = *(undefined8 **)(param_1 + 0x13c0);
  if (puVar22 == puVar20) goto LAB_180028ff0;
  do {
    pppppcVar14 = (char *****)&local_78;
    if (0xf < uVar25) {
      pppppcVar14 = pppppcVar13;
    }
    sVar4 = puVar22[2];
    if ((ulonglong)puVar22[3] < 0x10) {
      puVar16 = puVar22;
    }
    else {
      puVar16 = (undefined8 *)*puVar22;
    }
  } while (((sVar4 != sVar12) ||
           ((sVar4 != 0 && (iVar10 = memcmp(puVar16,pppppcVar14,sVar4), iVar10 != 0)))) &&
          (puVar22 = puVar22 + 4, puVar22 != puVar20));
  if (puVar22 == puVar20) {
LAB_180028ff0:
    if (puVar20 == *(undefined8 **)(param_1 + 0x13d0)) {
      FUN_180002e60((longlong *)(param_1 + 0x13c0),puVar20,&local_78);
    }
    else {
      FUN_180007dc0(puVar20,&local_78);
      *(longlong *)(param_1 + 0x13c8) = *(longlong *)(param_1 + 0x13c8) + 0x20;
    }
    *(undefined1 *)(param_1 + 0x13d8) = 1;
    uVar25 = local_60;
    pppppcVar13 = local_78;
  }
  else {
LAB_18002903a:
  }
  *(undefined1 *)_Str = 0;
  if (uVar25 < 0x10) goto LAB_18002907a;
  pppppcVar14 = pppppcVar13;
  if ((uVar25 + 1 < 0x1000) ||
     (pppppcVar14 = (char *****)pppppcVar13[-1],
     (char *)((longlong)pppppcVar13 + (-8 - (longlong)pppppcVar14)) < (char *)0x20)) {
    thunk_FUN_1800c3030(pppppcVar14);
    goto LAB_18002907a;
  }
LAB_1800292ae:
  pcVar8 = (code *)swi(0x29);
  (*pcVar8)(5);
  puVar21 = auStackY_d0;
LAB_1800292b5:
  *(undefined1 *)(param_1 + 0x13d8) = 1;
LAB_1800292bd:
  plVar19 = DAT_180115ab0;
  fVar27 = fVar27 + 4.0 + 48.0;
  plVar26 = DAT_180115aa8;
  if (*(undefined4 **)(param_1 + 0x1168) != &DAT_1801159f0) {
    if (DAT_180115aa8 != DAT_180115ab0) {
      do {
        *(undefined8 *)(puVar21 + -8) = 0x1800292f8;
        FUN_1800115e0(plVar26);
        plVar26 = plVar26 + 4;
      } while (plVar26 != plVar19);
      DAT_180115ab0 = DAT_180115aa8;
    }
    puVar22 = *(undefined8 **)(param_1 + 0x13c8);
    plVar26 = DAT_180115aa8;
    plVar19 = DAT_180115ab0;
    for (puVar20 = *(undefined8 **)(param_1 + 0x13c0); puVar20 != puVar22; puVar20 = puVar20 + 4) {
      if ((ulonglong)((longlong)plVar19 - (longlong)plVar26) < 0x400) {
        if (plVar19 == DAT_180115ab8) {
          *(undefined8 *)(puVar21 + -8) = 0x180029378;
          FUN_180002e60((longlong *)&DAT_180115aa8,plVar19,puVar20);
        }
        else {
          *(undefined8 *)(puVar21 + -8) = 0x180029352;
          FUN_180007dc0(plVar19,puVar20);
          DAT_180115ab0 = DAT_180115ab0 + 4;
        }
        plVar19 = DAT_180115ab0;
        plVar26 = DAT_180115aa8;
      }
    }
    puVar22 = *(undefined8 **)(param_1 + 0x13b0);
    for (puVar20 = *(undefined8 **)(param_1 + 0x13a8); puVar20 != puVar22; puVar20 = puVar20 + 4) {
      if ((ulonglong)((longlong)plVar19 - (longlong)plVar26) < 0x400) {
        plVar18 = plVar26;
        if (plVar26 != plVar19) {
          uVar25 = puVar20[3];
          sVar12 = puVar20[2];
          do {
            if (uVar25 < 0x10) {
              puVar16 = puVar20;
            }
            else {
              puVar16 = (undefined8 *)*puVar20;
            }
            sVar4 = plVar18[2];
            if ((ulonglong)plVar18[3] < 0x10) {
              plVar17 = plVar18;
            }
            else {
              plVar17 = (longlong *)*plVar18;
            }
            if (sVar4 == sVar12) {
              if (sVar4 == 0) break;
              *(undefined8 *)(puVar21 + -8) = 0x180029402;
              iVar10 = memcmp(plVar17,puVar16,sVar4);
              if (iVar10 == 0) break;
            }
            plVar18 = plVar18 + 4;
          } while (plVar18 != plVar19);
        }
        if (plVar18 == plVar19) {
          if (plVar19 == DAT_180115ab8) {
            *(undefined8 *)(puVar21 + -8) = 0x18002944e;
            FUN_180002e60((longlong *)&DAT_180115aa8,plVar19,puVar20);
          }
          else {
            *(undefined8 *)(puVar21 + -8) = 0x180029428;
            FUN_180007dc0(plVar19,puVar20);
            DAT_180115ab0 = DAT_180115ab0 + 4;
          }
          plVar19 = DAT_180115ab0;
          plVar26 = DAT_180115aa8;
        }
      }
    }
    if (DAT_180115a30 != DAT_180115a38) {
      DAT_180115a38 = DAT_180115a30;
    }
    if (plVar26 != plVar19) {
      do {
        if ((ulonglong)plVar26[3] < 0x10) {
          local_90 = plVar26;
        }
        else {
          local_90 = (longlong *)*plVar26;
        }
        if (DAT_180115a38 == DAT_180115a40) {
          *(undefined8 *)(puVar21 + -8) = 0x1800294d3;
          FUN_180003310((longlong *)&DAT_180115a30,DAT_180115a38,&local_90);
        }
        else {
          *DAT_180115a38 = (longlong)local_90;
          DAT_180115a38 = DAT_180115a38 + 1;
        }
        plVar26 = plVar26 + 4;
      } while (plVar26 != plVar19);
      plVar19 = DAT_180115ab0;
      plVar26 = DAT_180115aa8;
    }
  }
  uVar24 = 0;
  _DAT_180115a28 = _DAT_180115a28 & 0xffffffff;
  uVar25 = 0;
  if ((longlong)plVar19 - (longlong)plVar26 >> 5 != 0) {
    do {
      if (0x1f < uVar25) break;
      puVar20 = *(undefined8 **)(param_1 + 0x13c8);
      puVar22 = *(undefined8 **)(param_1 + 0x13c0);
      if (puVar22 != puVar20) {
        plVar18 = plVar26 + uVar25 * 4;
        do {
          if ((ulonglong)plVar18[3] < 0x10) {
            plVar17 = plVar18;
          }
          else {
            plVar17 = (longlong *)*plVar18;
          }
          sVar12 = puVar22[2];
          if ((ulonglong)puVar22[3] < 0x10) {
            puVar16 = puVar22;
          }
          else {
            puVar16 = (undefined8 *)*puVar22;
          }
          if (sVar12 == plVar18[2]) {
            if (sVar12 == 0) break;
            *(undefined8 *)(puVar21 + -8) = 0x18002956a;
            iVar10 = memcmp(puVar16,plVar17,sVar12);
            if (iVar10 == 0) break;
          }
          puVar22 = puVar22 + 4;
        } while (puVar22 != puVar20);
        if (puVar22 != puVar20) {
          uVar24 = uVar24 | 1 << ((uint)uVar25 & 0x1f);
          _DAT_180115a28 = CONCAT44(uVar24,_DAT_180115a28);
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 < (ulonglong)((longlong)plVar19 - (longlong)plVar26 >> 5));
  }
  DAT_180115ac4 = uVar24;
  if (plVar26 == plVar19) {
    *(undefined8 *)(puVar21 + -8) = 0x1800295b9;
    pcVar15 = FUN_180043a40("No players nearby");
    fVar1 = *local_80;
    lVar2 = *(longlong *)(param_1 + 0x1110);
    *(undefined8 *)(puVar21 + 0x30) = 0;
    *(char **)(puVar21 + 0x28) = pcVar15;
    *(undefined4 *)(puVar21 + 0x20) = 0xff7c6256;
    piVar6 = *(int **)(lVar2 + 0x38);
    piVar7 = *(int **)(param_1 + 0x1108);
    *(undefined8 *)(puVar21 + -8) = 0x180029601;
    FUN_180042c60(piVar7,piVar6,fVar1 + 6.0,fVar27 + 23.0,*(float *)(puVar21 + 0x20),
                  *(byte **)(puVar21 + 0x28),*(byte **)(puVar21 + 0x30));
  }
  else {
    local_90 = (longlong *)CONCAT44(fVar27,*local_80);
    local_88 = local_80[2];
    local_84 = 0x42380000;
    *(undefined8 *)(puVar21 + -8) = 0x18002963d;
    FUN_180027100((undefined8 *)(param_1 + 0x1108),&DAT_1801159f0,(float *)&local_90);
  }
  *(undefined8 *)(puVar21 + -8) = 0x180029649;
  return;
}


void FUN_1800297d0(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    uVar1 = (uint)(*(float *)(param_1 + 0x5c) * 255.0 + 0.5);
    uVar4 = 0;
    if (-1 < (int)uVar1) {
      uVar4 = uVar1;
    }
    if (0xff < (int)uVar4) {
      uVar4 = 0xff;
    }
    uVar2 = (uint)(*(float *)(param_1 + 0x60) * 255.0 + 0.5);
    uVar1 = 0;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    if (0xff < (int)uVar1) {
      uVar1 = 0xff;
    }
    uVar3 = (uint)(*(float *)(param_1 + 100) * 255.0 + 0.5);
    uVar2 = 0;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    if (0xff < (int)uVar2) {
      uVar2 = 0xff;
    }
    *param_2 = (uVar2 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar4 & 0xff;
    if (DAT_180115628 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180029899. Too many branches
                    // WARNING: Treating indirect jump as call
      (*DAT_180115628)(param_2,*(undefined1 *)(param_1 + 0x6e));
      return;
    }
    if ((DAT_180115618 != (uint *)0x0) && (-1 < (int)param_3)) {
      if (*(char *)(param_1 + 0x6e) != '\0') {
        *DAT_180115618 = *DAT_180115618 | 1 << (param_3 & 0x1f);
        return;
      }
      *DAT_180115618 = *DAT_180115618 & ~(1 << (param_3 & 0x1f));
    }
  }
  return;
}


void FUN_1800298d0(longlong param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  if (param_1 == 0) {
    return;
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  if (DAT_180114088 == param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 - 0x218U < 10) {
    iVar2 = -0x1e8;
LAB_180029926:
    uVar3 = iVar2 + iVar1;
    if (uVar3 < 0x1c) {
      if ((0x8070003U >> (uVar3 & 0x1f) & 1) == 0) {
        *param_2 = uVar3;
        return;
      }
      return;
    }
  }
  else {
    if (iVar1 - 0x222U < 0x1a) {
      iVar2 = -0x1e1;
      goto LAB_180029926;
    }
    if (iVar1 - 0x23cU < 0x18) {
      iVar2 = -0x1cc;
      goto LAB_180029926;
    }
    switch(iVar1) {
    case 0x200:
      *param_2 = 9;
      return;
    case 0x201:
      *param_2 = 0x25;
      return;
    case 0x202:
      *param_2 = 0x27;
      return;
    case 0x203:
      *param_2 = 0x26;
      return;
    case 0x204:
      *param_2 = 0x28;
      return;
    case 0x205:
      *param_2 = 0x21;
      return;
    case 0x206:
      *param_2 = 0x22;
      return;
    case 0x207:
      *param_2 = 0x24;
      return;
    case 0x208:
      *param_2 = 0x23;
      return;
    case 0x209:
      *param_2 = 0x2d;
      return;
    case 0x20a:
      *param_2 = 0x2e;
      return;
    case 0x20b:
      *param_2 = 8;
      return;
    case 0x20c:
      *param_2 = 0x20;
      return;
    case 0x20d:
    case 0x273:
      uVar3 = 0xd;
      break;
    default:
      goto switchD_180029972_caseD_20e;
    case 0x254:
      *param_2 = 0xde;
      return;
    case 0x255:
      *param_2 = 0xbc;
      return;
    case 0x256:
      *param_2 = 0xbd;
      return;
    case 599:
      *param_2 = 0xbe;
      return;
    case 600:
      *param_2 = 0xbf;
      return;
    case 0x259:
      *param_2 = 0xba;
      return;
    case 0x25a:
      *param_2 = 0xbb;
      return;
    case 0x25b:
      *param_2 = 0xdb;
      return;
    case 0x25c:
      *param_2 = 0xdc;
      return;
    case 0x25d:
      *param_2 = 0xdd;
      return;
    case 0x25e:
      *param_2 = 0xc0;
      return;
    case 0x25f:
      *param_2 = 0x14;
      return;
    case 0x260:
      *param_2 = 0x91;
      return;
    case 0x261:
      *param_2 = 0x90;
      return;
    case 0x262:
      *param_2 = 0x2c;
      return;
    case 0x263:
      *param_2 = 0x13;
      return;
    case 0x264:
      *param_2 = 0x60;
      return;
    case 0x265:
      *param_2 = 0x61;
      return;
    case 0x266:
      *param_2 = 0x62;
      return;
    case 0x267:
      *param_2 = 99;
      return;
    case 0x268:
      *param_2 = 100;
      return;
    case 0x269:
      *param_2 = 0x65;
      return;
    case 0x26a:
      *param_2 = 0x66;
      return;
    case 0x26b:
      *param_2 = 0x67;
      return;
    case 0x26c:
      *param_2 = 0x68;
      return;
    case 0x26d:
      *param_2 = 0x69;
      return;
    case 0x26e:
      *param_2 = 0x6e;
      return;
    case 0x26f:
      *param_2 = 0x6f;
      return;
    case 0x270:
      *param_2 = 0x6a;
      return;
    case 0x271:
      *param_2 = 0x6d;
      return;
    case 0x272:
      *param_2 = 0x6b;
      return;
    case 0x291:
      *param_2 = 2;
      return;
    case 0x292:
      *param_2 = 4;
      return;
    case 0x293:
      *param_2 = 5;
      return;
    case 0x294:
      *param_2 = 6;
      return;
    }
  }
  *param_2 = uVar3;
switchD_180029972_caseD_20e:
  return;
}


float FUN_180029c60(float param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;

  iVar1 = (int)((param_1 + 8.0) / 120.0);
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar1 = 0;
  for (lVar3 = DAT_1801159a0; lVar3 != DAT_1801159a8; lVar3 = lVar3 + 0x48) {
    iVar1 = iVar1 + (uint)(*(char *)(lVar3 + 0x40) == '\0');
  }
  iVar2 = (iVar2 + -1 + iVar1) / iVar2;
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  return (float)iVar1 * 184.0;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180029ce0(longlong param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  size_t sVar4;
  int iVar5;
  LPCWSTR ***ppppWVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  INT local_90 [2];
  undefined1 local_88 [8];
  LPCWSTR ***local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_68;
  LPCWSTR ***local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  LPCWSTR ***local_40 [3];
  ulonglong local_28;
  ulonglong local_20;

  puVar9 = auStack_b8;
  local_20 = DAT_180112300 ^ (ulonglong)auStack_b8;
  puVar8 = auStack_b8;
  switch(param_2) {
  case 1:
    if (*(longlong *)(param_1 + 0x50) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x18) = 0x42c80000;
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x38) = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x5c) = 0x3e44c4c5;
      *(undefined4 *)(lVar1 + 0x60) = 0x3ef8f8f9;
      *(undefined4 *)(lVar1 + 100) = 0x3f7efeff;
      *(undefined4 *)(lVar1 + 0x68) = 0x3f800000;
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x14) = 1;
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x14) = 1;
    }
    *(undefined4 *)(param_1 + 0x12a0) = 0;
    *(undefined1 *)(param_1 + 0x11d4) = 1;
    pcVar7 = FUN_180043a40("Menu settings reset");
    local_80 = (LPCWSTR ***)0x0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    sVar4 = strlen(pcVar7);
    FUN_1800028f0(&local_80,(undefined8 *)pcVar7,sVar4);
    if ((LPCWSTR ****)(param_1 + 0x1360) != &local_80) {
      ppppWVar6 = (LPCWSTR ***)&local_80;
      if (0xf < local_68) {
        ppppWVar6 = local_80;
      }
      FUN_180002370((longlong *)(param_1 + 0x1360),ppppWVar6,local_70);
    }
    puVar8 = auStack_b8;
    *(undefined4 *)(param_1 + 0x1380) = 0x40266666;
    if (local_68 < 0x10) break;
    ppppWVar6 = local_80;
    uVar3 = local_68;
    goto LAB_180029e09;
  case 2:
    *(undefined1 *)(param_1 + 0x12a6) = 1;
    puVar8 = auStack_b8;
    break;
  case 3:
    *(int *)(param_1 + 0x12a8) = *(int *)(param_1 + 0x12a8) + 1;
    puVar8 = auStack_b8;
    break;
  case 4:
    puVar8 = auStack_b8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1801158b8) goto LAB_18002a1f5;
    goto LAB_18002a169;
  case 5:
    *(int *)(param_1 + 0x12ac) = *(int *)(param_1 + 0x12ac) + 1;
    puVar8 = auStack_b8;
    break;
  case 7:
  case 8:
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xb8) + 0x14) = 1;
    }
    if (param_2 == 8) {
      fVar11 = 300.0;
    }
    else {
      fVar11 = 90.0;
    }
    lVar1 = *(longlong *)(param_1 + 200);
    if (lVar1 != 0) {
      fVar10 = *(float *)(lVar1 + 0x1c);
      if ((*(float *)(lVar1 + 0x1c) <= fVar11) &&
         (fVar10 = *(float *)(lVar1 + 0x20), fVar11 <= *(float *)(lVar1 + 0x20))) {
        fVar10 = fVar11;
      }
      *(float *)(lVar1 + 0x18) = fVar10;
    }
    if (param_2 == 8) {
      fVar11 = 1.0;
    }
    else {
      fVar11 = 7.0;
    }
    lVar1 = *(longlong *)(param_1 + 0xd0);
    if (lVar1 != 0) {
      fVar10 = *(float *)(lVar1 + 0x1c);
      if ((*(float *)(lVar1 + 0x1c) <= fVar11) &&
         (fVar10 = *(float *)(lVar1 + 0x20), fVar11 <= *(float *)(lVar1 + 0x20))) {
        fVar10 = fVar11;
      }
      *(float *)(lVar1 + 0x18) = fVar10;
    }
    if (param_2 == 8) {
      fVar11 = 600.0;
    }
    else {
      fVar11 = 150.0;
    }
    lVar1 = *(longlong *)(param_1 + 0xd8);
    if (lVar1 != 0) {
      fVar10 = *(float *)(lVar1 + 0x1c);
      if ((*(float *)(lVar1 + 0x1c) <= fVar11) &&
         (fVar10 = *(float *)(lVar1 + 0x20), fVar11 <= *(float *)(lVar1 + 0x20))) {
        fVar10 = fVar11;
      }
      *(float *)(lVar1 + 0x18) = fVar10;
    }
    iVar5 = 3;
    if (param_2 == 8) {
      iVar5 = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if ((lVar1 != 0) &&
       (iVar5 < (int)(*(longlong *)(lVar1 + 0x48) - *(longlong *)(lVar1 + 0x40) >> 3))) {
      *(int *)(lVar1 + 0x38) = iVar5;
    }
    lVar1 = *(longlong *)(param_1 + 0x1a0);
    if ((lVar1 != 0) && (0 < (int)(*(longlong *)(lVar1 + 0x48) - *(longlong *)(lVar1 + 0x40) >> 3)))
    {
      *(undefined4 *)(lVar1 + 0x38) = 0;
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xe8) + 0x14) = 1;
    }
    if (*(longlong *)(param_1 + 0x110) != 0) {
      *(bool *)(*(longlong *)(param_1 + 0x110) + 0x14) = param_2 == 8;
    }
    if (*(longlong *)(param_1 + 0x160) != 0) {
      *(bool *)(*(longlong *)(param_1 + 0x160) + 0x14) = param_2 == 8;
    }
    if (param_2 == 8) {
      lVar1 = *(longlong *)(param_1 + 0x180);
      if (lVar1 != 0) {
        fVar11 = *(float *)(lVar1 + 0x1c);
        if ((fVar11 <= 400.0) && (fVar11 = *(float *)(lVar1 + 0x20), 400.0 <= fVar11)) {
          fVar11 = 400.0;
        }
        *(float *)(lVar1 + 0x18) = fVar11;
      }
      lVar1 = *(longlong *)(param_1 + 0x188);
      if (lVar1 != 0) {
        fVar11 = *(float *)(lVar1 + 0x1c);
        if ((fVar11 <= 600.0) && (fVar11 = *(float *)(lVar1 + 0x20), 600.0 <= fVar11)) {
          fVar11 = 600.0;
        }
        *(float *)(lVar1 + 0x18) = fVar11;
      }
      lVar1 = *(longlong *)(param_1 + 400);
      if ((lVar1 != 0) &&
         (0 < (int)(*(longlong *)(lVar1 + 0x48) - *(longlong *)(lVar1 + 0x40) >> 3))) {
        *(undefined4 *)(lVar1 + 0x38) = 0;
      }
      lVar1 = *(longlong *)(param_1 + 0x1a8);
      if ((lVar1 != 0) &&
         (0 < (int)(*(longlong *)(lVar1 + 0x48) - *(longlong *)(lVar1 + 0x40) >> 3))) {
        *(undefined4 *)(lVar1 + 0x38) = 0;
      }
      if (*(longlong *)(param_1 + 0x198) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x198) + 0x14) = 1;
      }
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x1c0) + 0x14) = 1;
      }
    }
    if (*(longlong *)(param_1 + 0x7e0) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x7e0) + 0x14) = 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x7e8);
    if (lVar1 != 0) {
      fVar11 = *(float *)(lVar1 + 0x1c);
      if ((fVar11 <= 100.0) && (fVar11 = *(float *)(lVar1 + 0x20), 100.0 <= fVar11)) {
        fVar11 = 100.0;
      }
      *(float *)(lVar1 + 0x18) = fVar11;
    }
    *(undefined1 *)(param_1 + 0x11d4) = 1;
    pcVar7 = "Legit preset applied";
    if (param_2 == 8) {
      pcVar7 = "Full preset applied";
    }
    pcVar7 = FUN_180043a40(pcVar7);
    local_60 = (LPCWSTR ***)0x0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    sVar4 = strlen(pcVar7);
    FUN_1800028f0(&local_60,(undefined8 *)pcVar7,sVar4);
    if ((LPCWSTR ****)(param_1 + 0x1360) != &local_60) {
      ppppWVar6 = (LPCWSTR ***)&local_60;
      if (0xf < local_48) {
        ppppWVar6 = local_60;
      }
      FUN_180002370((longlong *)(param_1 + 0x1360),ppppWVar6,local_50);
    }
    *(undefined4 *)(param_1 + 0x1380) = 0x40266666;
    puVar8 = auStack_b8;
    if (local_48 < 0x10) break;
    ppppWVar6 = local_60;
    uVar3 = local_48;
LAB_180029e09:
    puVar9 = auStack_b8;
    if (0xfff < uVar3 + 1) {
      puVar9 = auStack_b8;
      if ((ulonglong)((longlong)ppppWVar6 + (-8 - (longlong)ppppWVar6[-1])) < 0x20) {
        ppppWVar6 = (LPCWSTR ***)ppppWVar6[-1];
        puVar9 = auStack_b8;
      }
      else {
        do {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar8 = puVar9 + 8;
LAB_18002a1f5:
          puVar9 = puVar8;
          *(undefined8 *)(puVar9 + -8) = 0x18002a201;
          FUN_1800a54b0(&DAT_1801158b8);
          if (DAT_1801158b8 == -1) {
            *(undefined8 *)(puVar9 + -8) = 0x18002a21e;
            FUN_18000b540(local_88,(LPCWSTR)&DAT_180115898);
            *(undefined8 *)(puVar9 + -8) = 0x18002a22a;
            FUN_1800a53c0(0x1800d6340);
            *(undefined8 *)(puVar9 + -8) = 0x18002a237;
            _Init_thread_footer(&DAT_1801158b8);
          }
LAB_18002a169:
          *(undefined8 *)(puVar9 + -8) = 0x18002a179;
          FUN_1800081d0(local_40,&DAT_180115898);
          ppppWVar6 = (LPCWSTR ***)local_40;
          if (7 < local_28) {
            ppppWVar6 = local_40[0];
          }
          *(undefined4 *)(puVar9 + 0x28) = 1;
          *(undefined8 *)(puVar9 + 0x20) = 0;
          *(undefined8 *)(puVar9 + -8) = 0x18002a1a6;
          ShellExecuteW((HWND)0x0,L"open",(LPCWSTR)ppppWVar6,(LPCWSTR)0x0,
                        *(LPCWSTR *)(puVar9 + 0x20),*(INT *)(puVar9 + 0x28));
          puVar8 = puVar9;
          if (local_28 < 8) goto switchD_180029d27_caseD_6;
          ppppWVar6 = local_40[0];
        } while ((0xfff < local_28 * 2 + 2) &&
                (ppppWVar6 = (LPCWSTR ***)local_40[0][-1],
                0x1f < (ulonglong)((longlong)local_40[0] + (-8 - (longlong)ppppWVar6))));
      }
    }
    *(undefined8 *)(puVar9 + -8) = 0x180029e33;
    thunk_FUN_1800c3030(ppppWVar6);
    puVar8 = puVar9;
  }
switchD_180029d27_caseD_6:
  *(undefined8 *)(puVar8 + -8) = 0x180029e3f;
  return;
}


void FUN_18002a260(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  char *pcVar8;
  byte *pbVar9;
  float *pfVar10;
  ulonglong uVar11;
  char *pcVar12;
  char cVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res8;
  float local_resc;
  int *local_res10;
  float local_res18;
  float local_res1c;
  longlong *local_res20;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  uint local_16c;
  float local_168 [3];
  undefined4 local_15c;
  float local_158;
  float local_154;
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
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  byte *local_f8;

  piVar1 = *(int **)(param_1 + 0x1108);
  puVar2 = *(undefined8 **)
            (*(longlong *)(param_1 + 8) +
            ((longlong)*(int *)(param_1 + 0x11d8) + *(longlong *)(param_1 + 0x18) &
            *(longlong *)(param_1 + 0x10) - 1U) * 8);
  pcVar8 = (char *)*puVar2;
  local_res10 = piVar1;
  iVar5 = strcmp(pcVar8,"Miscellaneous");
  pcVar12 = "Settings";
  if (iVar5 != 0) {
    pcVar12 = pcVar8;
  }
  pcVar8 = FUN_180043a40(pcVar12);
  FUN_180042d40(piVar1,*(int **)(*(longlong *)(param_1 + 0x1110) + 8),240.0,34.0,-NAN,pcVar8,0.25);
  uVar16 = puVar2[7];
  if (1 < uVar16) {
    uVar14 = puVar2[6];
    local_res20 = puVar2 + 6;
    uVar11 = uVar16 + uVar14;
    fVar22 = (float)(uVar16 - 1) + (float)(uVar16 - 1) + 8.0;
    if (uVar16 < 7) {
      fVar24 = 28.0;
    }
    else {
      fVar24 = 20.0;
    }
    do {
      pbVar9 = (byte *)FUN_180043a40((char *)**(undefined8 **)
                                               (puVar2[4] + (puVar2[5] - 1 & uVar14) * 8));
      piVar3 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x48);
      pfVar10 = FUN_180071ff0(piVar3,&local_res8,(float)piVar3[5],3.4028235e+38,0.0,pbVar9,
                              (byte *)0x0,(undefined8 *)0x0);
      uVar14 = uVar14 + 1;
      fVar22 = fVar22 + *pfVar10 / DAT_180112008 + fVar24;
    } while (uVar14 != uVar11);
    local_168[1] = 16.0;
    local_15c = 0x42100000;
    fVar23 = 884.0 - fVar22;
    local_168[0] = fVar23;
    local_168[2] = fVar22;
    if (0.0 < fVar22) {
      local_res1c = DAT_180112008 * 16.0;
      param_4 = (float *)0xff1a120e;
      local_res8 = (fVar23 + fVar22) * DAT_180112008;
      local_resc = DAT_180112008 * 52.0;
      local_res18 = fVar23 * DAT_180112008;
      FUN_180071360(piVar1,&local_res18,&local_res8,0xff1a120e,DAT_180112008 * 11.0,0);
    }
    FUN_1800422b0(piVar1,local_168,0xdffffff,11.0,1.0);
    uVar16 = 0;
    fVar23 = fVar23 + 4.0;
    if (puVar2[7] != 0) {
      do {
        pcVar8 = *(char **)(puVar2[4] + (*local_res20 + uVar16 & puVar2[5] - 1) * 8);
        local_f8 = (byte *)FUN_180043a40(*(char **)pcVar8);
        piVar1 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x48);
        pfVar10 = FUN_180071ff0(piVar1,local_168,(float)piVar1[5],3.4028235e+38,0.0,local_f8,
                                (byte *)0x0,(undefined8 *)0x0);
        fVar22 = *pfVar10 / DAT_180112008 + fVar24;
        if (fVar22 <= 0.0) {
          uVar6 = 0;
          cVar4 = '\0';
          cVar13 = '\0';
        }
        else {
          FUN_180062940(pcVar8);
          local_res18 = fVar23 * DAT_180112008;
          local_res1c = DAT_180112008 * 20.0;
          FUN_1800670f0((undefined8 *)&local_res18);
          fVar17 = FUN_1800ba000(1.0,DAT_180112008 * 28.0);
          local_188 = FUN_1800ba000(1.0,fVar22 * DAT_180112008);
          pfVar15 = (float *)0x0;
          pfVar10 = &local_188;
          local_184 = fVar17;
          uVar11 = FUN_180099a80(&DAT_1800deb8c,pfVar10,0);
          cVar4 = (char)uVar11;
          uVar6 = FUN_180056db0();
          uVar11 = FUN_180059410(0,pfVar10,pfVar15,(ulonglong)param_4);
          FUN_1800593a0();
          FUN_180062210();
          cVar13 = '\0';
          if (*(char *)(param_1 + 0x1160) == '\0') {
            cVar13 = (char)uVar11;
          }
        }
        if (cVar4 != '\0') {
          *(int *)(param_1 + 0x11dc + (longlong)*(int *)(param_1 + 0x11d8) * 4) = (int)uVar16;
        }
        if ((int)uVar16 == *(int *)(param_1 + 0x11dc + (longlong)*(int *)(param_1 + 0x11d8) * 4)) {
          uVar20 = 0x3f800000;
        }
        else {
          uVar20 = 0;
        }
        uVar18 = FUN_180043120((float *)(param_1 + 0x1118),uVar6 ^ 0x9a6e,(ulonglong)uVar20);
        fVar17 = (float)uVar18;
        if (cVar13 == '\0') {
          uVar20 = 0;
        }
        else {
          uVar20 = 0x3f800000;
        }
        uVar18 = FUN_180043120((float *)(param_1 + 0x1118),uVar6,(ulonglong)uVar20);
        piVar1 = local_res10;
        fVar7 = (float)uVar18;
        if (0.01 < fVar17) {
          fVar19 = fVar17 * 0.22;
          if (0.0 <= fVar19) {
            fVar21 = 1.0;
            if (fVar19 <= 1.0) {
              fVar21 = fVar19;
            }
          }
          else {
            fVar21 = 0.0;
          }
          if (0.0 < fVar22) {
            local_178 = fVar23 * DAT_180112008;
            local_180 = (fVar22 + fVar23) * DAT_180112008;
            local_17c = DAT_180112008 * 48.0;
            local_174 = DAT_180112008 * 20.0;
            FUN_180071360(local_res10,&local_178,&local_180,
                          (int)((float)(DAT_18011200c >> 0x18) * fVar21 + 0.5) << 0x18 |
                          DAT_18011200c & 0xffffff,DAT_180112008 * 8.0,0);
          }
        }
        if (0.0 < fVar7) {
          if (fVar7 < 1.0) {
            FUN_1800521a0(&local_158,0xff7c6256);
            FUN_1800521a0(&local_148,0xfffaf2ee);
            local_138 = (local_148 - local_158) * fVar7 + local_158;
            local_134 = (local_144 - local_154) * fVar7 + local_154;
            local_130 = (local_140 - local_150) * fVar7 + local_150;
            local_12c = (local_13c - local_14c) * fVar7 + local_14c;
            fVar7 = (float)FUN_180051e70(&local_138);
          }
          else {
            fVar7 = -NAN;
          }
        }
        else {
          fVar7 = -3.3547604e+38;
        }
        if (0.0 < fVar17) {
          if (fVar17 < 1.0) {
            FUN_1800521a0(&local_128,(ulonglong)(uint)fVar7);
            FUN_1800521a0(&local_118,0xfffaf2ee);
            local_108 = (local_118 - local_128) * fVar17 + local_128;
            local_104 = (local_114 - local_124) * fVar17 + local_124;
            local_100 = (local_110 - local_120) * fVar17 + local_120;
            local_fc = (local_10c - local_11c) * fVar17 + local_11c;
            fVar7 = (float)FUN_180051e70(&local_108);
          }
          else {
            fVar7 = -NAN;
          }
        }
        piVar3 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x48);
        uVar6 = FUN_1800ba150((uint)((34.0 - ((float)piVar3[5] / DAT_180112008) * 0.5) *
                                    DAT_180112008));
        local_170 = (float)FUN_1800ba150((uint)((fVar24 * 0.5 + fVar23) * DAT_180112008));
        param_4 = &local_170;
        local_16c = uVar6;
        FUN_1800716c0(piVar1,piVar3,(float)piVar3[5],param_4,fVar7,local_f8,(byte *)0x0,0.0,
                      (float *)0x0);
        uVar16 = uVar16 + 1;
        fVar23 = fVar23 + fVar22 + 2.0;
      } while (uVar16 < (ulonglong)puVar2[7]);
    }
  }
  return;
}


void FUN_18002aad0(int param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  byte *pbVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float local_res20 [2];

  lVar1 = *(longlong *)(&DAT_180115928 + (longlong)param_1 * 0x20);
  lVar5 = *(longlong *)(&DAT_180115920 + (longlong)param_1 * 0x20);
  lVar4 = lVar1 - lVar5;
  lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar4),8) + lVar4;
  if ((1 < (ulonglong)((lVar4 >> 6) - (lVar4 >> 0x3f))) && (param_3 != 0)) {
    fVar7 = 0.0;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x78) {
      pbVar2 = (byte *)(lVar5 + 0x20);
      if (0xf < *(ulonglong *)(lVar5 + 0x38)) {
        pbVar2 = *(byte **)pbVar2;
      }
      pfVar3 = FUN_180071ff0(*(int **)(param_3 + 0x48),local_res20,
                             (float)(*(int **)(param_3 + 0x48))[5],3.4028235e+38,0.0,pbVar2,
                             (byte *)0x0,(undefined8 *)0x0);
      fVar6 = *pfVar3 / DAT_180112008 + 28.0;
      if ((0.0 < fVar7) && (param_2 < fVar6 + fVar7)) {
        fVar7 = 0.0;
      }
      fVar7 = fVar7 + fVar6 + 6.0;
    }
  }
  return;
}


void FUN_18002ad90(int *param_1,float param_2,float param_3,float param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;

  fVar1 = (float)FUN_1800ba150((uint)(param_4 * DAT_180112008));
  fVar2 = (float)FUN_1800ba150((uint)DAT_180112008);
  local_44 = FUN_1800ba000(1.0,fVar2);
  local_44 = local_44 + fVar1;
  local_48 = param_3 * DAT_180112008;
  local_40 = param_2 * DAT_180112008;
  local_3c = fVar1;
  FUN_180071360(param_1,&local_40,&local_48,param_5,0.0,0);
  return;
}


// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_18002ae50(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  LPVOID pvVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  LPVOID pvVar11;
  undefined1 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_11c0;
  undefined1 auStack_11b8 [40];
  LPVOID local_1190 [5];
  LPVOID local_1168 [540];
  longlong local_88 [11];

  local_88[10] = 0x18002ae63;
  local_88[8] = DAT_180112300 ^ (ulonglong)auStack_11b8;
  plVar9 = FUN_180017cc0(local_1190);
  if (param_1 != plVar9) {
    FUN_180011460((longlong)param_1);
    lVar3 = *param_1;
    *param_1 = *plVar9;
    *plVar9 = lVar3;
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      *(undefined8 *)*param_1 = param_1;
    }
    if ((undefined8 *)*plVar9 != (undefined8 *)0x0) {
      *(undefined8 *)*plVar9 = plVar9;
    }
    param_1[1] = plVar9[1];
    param_1[2] = plVar9[2];
    param_1[3] = plVar9[3];
    param_1[4] = plVar9[4];
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar1 = plVar9 + 5;
    plVar2 = param_1 + 5;
    FUN_180011370((longlong)plVar2);
    lVar3 = *plVar2;
    *plVar2 = *plVar1;
    *plVar1 = lVar3;
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      *(longlong *)*plVar2 = (longlong)plVar2;
    }
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      *(longlong *)*plVar1 = (longlong)plVar1;
    }
    param_1[6] = plVar9[6];
    param_1[7] = plVar9[7];
    param_1[8] = plVar9[8];
    param_1[9] = plVar9[9];
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
  }
  FUN_1800d1c20(param_1 + 10,plVar9 + 10,0x10b8);
  FUN_180011370((longlong)local_1168);
  pvVar4 = local_1168[0];
  local_1168[0] = (LPVOID)0x0;
  thunk_FUN_1800c3030(pvVar4);
  FUN_180011460((longlong)local_1190);
  pvVar4 = local_1190[0];
  local_1190[0] = (LPVOID)0x0;
  thunk_FUN_1800c3030(pvVar4);
  FUN_180012360((longlong)param_1);
  puVar12 = auStack_11b8;
  puVar6 = auStack_11b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180115890) goto LAB_18002b1cc;
  do {
    *(undefined8 *)(puVar12 + -8) = 0x18002afe2;
    FUN_1800081d0((undefined8 *)(puVar12 + 0x1130),&DAT_180115870);
    *(undefined8 *)(puVar12 + -8) = 0x18002aff6;
    FUN_180009ed0(param_1 + 599,(longlong *)(puVar12 + 0x1130));
    if (*(ulonglong *)(puVar12 + 0x1148) < 8) {
LAB_18002b042:
      *(undefined8 *)(puVar12 + -8) = 0x18002b04a;
      FUN_18003f960((longlong)param_1);
      *(undefined8 *)(puVar12 + -8) = 0x18002b065;
      FUN_180002040((ulonglong *)(puVar12 + 0x1150),param_1 + 599,
                    (undefined1 (*) [32])L"\\focus5.autosave");
      *(undefined8 *)(puVar12 + -8) = 0x18002b076;
      uVar10 = FUN_18002be10((longlong)param_1,(wchar_t *)(puVar12 + 0x1150));
      *(undefined8 *)(puVar12 + -8) = 0x18002b081;
      FUN_180012360((longlong)param_1);
      lVar3 = param_1[0xc];
      if (((lVar3 != 0) && (param_1[0xd] != 0)) && (*(int *)(param_1[0xd] + 0x38) == 0)) {
        *(undefined8 *)(puVar12 + -8) = 0x18002b0a2;
        uVar7 = FUN_18001fd00((float *)(lVar3 + 0x5c));
        if (uVar7 == 0x4a8dffff) {
          *(undefined4 *)(lVar3 + 0x5c) = 0x3e44c4c5;
          *(undefined4 *)(lVar3 + 0x60) = 0x3ef8f8f9;
          *(undefined4 *)(lVar3 + 100) = 0x3f7efeff;
          *(undefined4 *)(lVar3 + 0x68) = 0x3f800000;
        }
      }
      if (param_1[0x10] != 0) {
        DAT_1801158c8 = (uint)(*(int *)(param_1[0x10] + 0x38) == 0);
      }
      if (param_1[10] == 0) {
        fVar13 = 1.0;
      }
      else {
        fVar14 = (*(float *)(param_1[10] + 0x18) / 100.0) * *(float *)(param_1 + 0xb);
        fVar13 = 0.6;
        if ((0.6 <= fVar14) && (fVar13 = 1.2, fVar14 <= 1.2)) {
          fVar13 = fVar14;
        }
        *(undefined8 *)(puVar12 + -8) = 0x18002b12b;
        fVar13 = (float)FUN_1800ba150((uint)(fVar13 * 20.0));
        fVar13 = fVar13 / 20.0;
      }
      *(float *)((longlong)param_1 + 0x12b4) = fVar13;
      if (param_1[0xd] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1[0xd] + 0x38);
      }
      *(undefined4 *)(param_1 + 0x254) = uVar8;
      *(undefined1 *)((longlong)param_1 + 0x1473) = 1;
      if (*(ulonglong *)(puVar12 + 0x1168) < 8) goto LAB_18002b1a1;
      pvVar4 = *(LPVOID *)(puVar12 + 0x1150);
      pvVar11 = pvVar4;
      if ((*(ulonglong *)(puVar12 + 0x1168) * 2 + 2 < 0x1000) ||
         (pvVar11 = *(LPVOID *)((longlong)pvVar4 + -8),
         (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)) < 0x20)) {
        *(undefined8 *)(puVar12 + -8) = 0x18002b1a1;
        thunk_FUN_1800c3030(pvVar11);
LAB_18002b1a1:
        *(undefined8 *)(puVar12 + -8) = 0x18002b1b5;
        return uVar10 & 0xff;
      }
    }
    else {
      pvVar4 = *(LPVOID *)(puVar12 + 0x1130);
      pvVar11 = pvVar4;
      if ((*(ulonglong *)(puVar12 + 0x1148) * 2 + 2 < 0x1000) ||
         (pvVar11 = *(LPVOID *)((longlong)pvVar4 + -8),
         (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)) < 0x20)) {
        *(undefined8 *)(puVar12 + -8) = 0x18002b042;
        thunk_FUN_1800c3030(pvVar11);
        goto LAB_18002b042;
      }
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar6 = puVar12 + 8;
LAB_18002b1cc:
    puVar12 = puVar6;
    *(undefined8 *)(puVar12 + -8) = 0x18002b1d8;
    FUN_1800a54b0(&DAT_180115890);
    if (DAT_180115890 == -1) {
      *(undefined8 *)(puVar12 + -8) = 0x18002b1f6;
      FUN_18000a830(puVar12 + 0x20,&DAT_180115870);
      *(undefined8 *)(puVar12 + -8) = 0x18002b202;
      FUN_1800a53c0(0x1800d62c0);
      *(undefined8 *)(puVar12 + -8) = 0x18002b20f;
      _Init_thread_footer(&DAT_180115890);
    }
  } while( true );
}


undefined8 FUN_18002b220(longlong param_1,char *param_2,byte *param_3,float *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  undefined4 local_res20;
  undefined1 uStackX_24;
  undefined1 uStackX_25;
  undefined1 uStackX_26;
  undefined1 uStackX_27;
  float local_28;
  float local_24;

  local_res20 = 0;
  uStackX_24 = 0;
  uStackX_25 = 0;
  uStackX_26 = 0;
  if ((0.0 < param_4[2]) && (0.0 < param_4[3])) {
    pfVar5 = param_4;
    FUN_180062940(param_2);
    local_24 = DAT_180112008 * param_4[1];
    local_28 = DAT_180112008 * *param_4;
    FUN_1800670f0((undefined8 *)&local_28);
    fVar6 = FUN_1800ba000(1.0,DAT_180112008 * param_4[3]);
    local_28 = FUN_1800ba000(1.0,DAT_180112008 * param_4[2]);
    pfVar4 = (float *)0x0;
    pfVar3 = &local_28;
    local_24 = fVar6;
    uVar1 = FUN_180099a80(param_3,pfVar3,0);
    uStackX_26 = (undefined1)uVar1;
    local_res20 = FUN_180056db0();
    uVar1 = FUN_180059410(0,pfVar3,pfVar4,(ulonglong)pfVar5);
    uStackX_24 = (undefined1)uVar1;
    lVar2 = FUN_1800593a0();
    uStackX_25 = (undefined1)lVar2;
    FUN_180062210();
    if (*(char *)(param_1 + 0x58) != '\0') {
      uStackX_24 = 0;
    }
  }
  return CONCAT17(uStackX_27,
                  CONCAT16(uStackX_26,CONCAT15(uStackX_25,CONCAT14(uStackX_24,local_res20))));
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18002b340(undefined8 *param_1,char *param_2,float *param_3,char param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  float fVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 auStackY_e8 [32];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  char local_98 [32];
  ulonglong local_78;

  local_78 = DAT_180112300 ^ (ulonglong)auStackY_e8;
  pcVar1 = (char *)param_1[0x10];
  uVar2 = FUN_18002b220((longlong)param_1,param_2,&DAT_1800daa78,param_3);
  if (((char)((ulonglong)uVar2 >> 0x30) != '\0') && (pcVar1 != param_2)) {
    param_1[0x10] = param_2;
  }
  if ((char)((ulonglong)uVar2 >> 0x20) == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  uVar2 = FUN_180043120((float *)(param_1 + 2),(int)uVar2,(ulonglong)uVar6);
  if ((0.0 < param_3[2]) && (0.0 < param_3[3])) {
    local_a0 = *param_3 * DAT_180112008;
    local_9c = param_3[1] * DAT_180112008;
    local_a8 = (param_3[2] + *param_3) * DAT_180112008;
    local_a4 = (param_3[3] + param_3[1]) * DAT_180112008;
    FUN_180071360((int *)*param_1,&local_a0,&local_a8,0xff271b16,DAT_180112008 * 8.0,0);
  }
  if (pcVar1 == param_2) {
    FUN_1800422b0((int *)*param_1,param_3,DAT_18011200c,8.0,1.0);
    pbVar5 = &DAT_1800de834;
  }
  else {
    uVar3 = FUN_18002e340(0xdffffff,
                          (int)((float)(DAT_18011200c >> 0x18) * 0.45 + 0.5) << 0x18 |
                          DAT_18011200c & 0xffffff,(float)uVar2);
    FUN_1800422b0((int *)*param_1,param_3,(uint)uVar3,8.0,1.0);
    pbVar5 = (byte *)FUN_18002b670(*(uint *)(param_2 + 0x58),local_98,0x20);
  }
  if (param_4 == '\0') {
    uVar6 = 0xf11c;
    if (*(int *)(param_2 + 0x58) - 0x290U < 5) {
      uVar6 = 0xf8cc;
    }
    FUN_180023a40((int *)*param_1,*(int **)(param_1[1] + 0x88),uVar6,*param_3 + 10.0 + 5.5,
                  param_3[3] * 0.5 + param_3[1],-3.3547604e+38);
    fVar4 = -NAN;
    if (pcVar1 == param_2) {
      fVar4 = DAT_180112010;
    }
    FUN_180042c60((int *)*param_1,*(int **)(param_1[1] + 0x50),*param_3 + 10.0 + 11.0 + 7.0,
                  param_3[3] * 0.5 + param_3[1],fVar4,pbVar5,(byte *)0x0);
  }
  else {
    fVar4 = -NAN;
    if (pcVar1 == param_2) {
      fVar4 = DAT_180112010;
    }
    FUN_180042820((int *)*param_1,*(int **)(param_1[1] + 0x48),param_3[2] * 0.5 + *param_3,
                  param_3[3] * 0.5 + param_3[1],fVar4,pbVar5);
  }
  return;
}


char * FUN_18002b670(uint param_1,char *param_2,int param_3)

{
  char *pcVar1;

  if ((int)param_1 < 0x206) {
    if (param_1 == 0x205) {
      return "PgUp";
    }
    if (param_1 == 0) {
      pcVar1 = FUN_180043a40("None");
      return pcVar1;
    }
  }
  else {
    switch(param_1) {
    case 0x206:
      return "PgDn";
    case 0x209:
      return "Insert";
    case 0x20a:
      return "Delete";
    case 0x20b:
      return "Bksp";
    case 0x20c:
      return "Space";
    case 0x20d:
      return "Enter";
    case 0x20e:
      return "Esc";
    case 0x20f:
    case 0x213:
      return "Ctrl";
    case 0x210:
    case 0x214:
      return "Shift";
    case 0x211:
    case 0x215:
      return "Alt";
    case 0x25f:
      return "Caps";
    case 0x290:
      return "Mouse 1";
    case 0x291:
      return "Mouse 2";
    case 0x292:
      return "Mouse 3";
    case 0x293:
      return "Mouse 4";
    case 0x294:
      return "Mouse 5";
    }
  }
  pcVar1 = FUN_180056fb0(param_1);
  FUN_1800491c0(param_2,(longlong)param_3,0x1800de830,pcVar1);
  return param_2;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18002b910(undefined8 *param_1,longlong param_2,float param_3,float param_4,float param_5,
                  float param_6,char param_7)

{
  byte *pbVar1;
  undefined1 auStackY_f8 [32];
  byte local_b8 [96];
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStackY_f8;
  if (*(char *)(param_2 + 0x6f) != '\0') {
    param_6 = -3.168547e+38;
    if (param_7 != '\0') {
      param_6 = -1.2619467e-20;
    }
    FUN_180023a40((int *)*param_1,*(int **)(param_1[1] + 0x80),0xf071,param_3 + 6.0,param_4,param_6)
    ;
    param_3 = param_3 + 19.0;
    param_5 = param_5 + -19.0;
  }
  pbVar1 = (byte *)FUN_180043a40(*(char **)(param_2 + 8));
  pbVar1 = FUN_180028b30(*(int **)(param_1[1] + 0x38),pbVar1,param_5,local_b8,0x60);
  FUN_180042c60((int *)*param_1,*(int **)(param_1[1] + 0x38),param_3,param_4,param_6,pbVar1,
                (byte *)0x0);
  return;
}


void FUN_18002ba40(uint param_1,float param_2)

{
  float local_28;
  float local_24;
  float local_20;

  FUN_1800521a0(&local_28,(ulonglong)param_1);
  local_28 = local_28 + (1.0 - local_28) * param_2;
  local_24 = local_24 + (1.0 - local_24) * param_2;
  local_20 = local_20 + (1.0 - local_20) * param_2;
  FUN_180051e70(&local_28);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

longlong * FUN_18002bad0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  LPVOID pvVar4;
  BOOL BVar5;
  LPCWSTR lpFileName;
  HANDLE hFindFile;
  ulonglong uVar6;
  longlong *plVar7;
  LPVOID pvVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined1 auStackY_2f8 [32];
  undefined8 ****local_2b8;
  undefined8 uStack_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  undefined2 local_298;
  undefined6 uStack_296;
  undefined8 local_288;
  ulonglong local_280;
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStackY_2f8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lpFileName = (LPCWSTR)FUN_180002040((ulonglong *)&local_298,param_2,
                                      (undefined1 (*) [32])L"\\*.cfg");
  if (7 < *(ulonglong *)(lpFileName + 0xc)) {
    lpFileName = *(LPCWSTR *)lpFileName;
  }
  hFindFile = FindFirstFileW(lpFileName,&local_278);
  if (7 < local_280) {
    pvVar4 = (LPVOID)CONCAT62(uStack_296,local_298);
    pvVar8 = pvVar4;
    if ((0xfff < local_280 * 2 + 2) &&
       (pvVar8 = *(LPVOID *)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar8)))) {
LAB_18002bd42:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      pcVar3 = (code *)swi(3);
      plVar7 = (longlong *)(*pcVar3)();
      return plVar7;
    }
    thunk_FUN_1800c3030(pvVar8);
  }
  local_288 = 0;
  local_280 = 7;
  local_298 = 0;
  if (hFindFile != (HANDLE)0xffffffffffffffff) {
    do {
      if (((byte)local_278.dwFileAttributes & 0x10) == 0) {
        local_2b8 = (undefined8 ****)0x0;
        uStack_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = 0;
        uVar6 = FUN_1800bd630((undefined1 (*) [32])local_278.cFileName);
        FUN_1800029f0(&local_2b8,(undefined8 *)local_278.cFileName,uVar6);
        uVar6 = local_2a8 - 4;
        if (local_2a8 < uVar6) {
          uVar10 = uVar6 - local_2a8;
          if (local_2a0 - local_2a8 < uVar10) {
            FUN_180005650(&local_2b8,uVar10,0,uVar10,0);
          }
          else {
            ppppuVar9 = &local_2b8;
            if (7 < local_2a0) {
              ppppuVar9 = local_2b8;
            }
            lVar1 = local_2a8 * 2;
            local_2a8 = uVar6;
            if (uVar10 != 0) {
              puVar11 = (undefined2 *)((longlong)ppppuVar9 + lVar1);
              for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              }
            }
            *(undefined2 *)((longlong)ppppuVar9 + uVar6 * 2) = 0;
          }
        }
        else {
          ppppuVar9 = &local_2b8;
          if (7 < local_2a0) {
            ppppuVar9 = local_2b8;
          }
          local_2a8 = uVar6;
          *(undefined2 *)((longlong)ppppuVar9 + uVar6 * 2) = 0;
        }
        puVar2 = (undefined8 *)param_1[1];
        if (puVar2 == (undefined8 *)param_1[2]) {
          FUN_180003080(param_1,puVar2,&local_2b8);
        }
        else {
          FUN_1800081d0(puVar2,&local_2b8);
          param_1[1] = param_1[1] + 0x20;
        }
        if (7 < local_2a0) {
          ppppuVar9 = local_2b8;
          if ((0xfff < local_2a0 * 2 + 2) &&
             (ppppuVar9 = (undefined8 ****)local_2b8[-1],
             0x1f < (ulonglong)((longlong)local_2b8 + (-8 - (longlong)ppppuVar9))))
          goto LAB_18002bd42;
          thunk_FUN_1800c3030(ppppuVar9);
        }
      }
      BVar5 = FindNextFileW(hFindFile,&local_278);
    } while (BVar5 != 0);
    FindClose(hFindFile);
    FUN_180005ea0((ulonglong *)*param_1,(ulonglong *)param_1[1],param_1[1] - *param_1 >> 5,0);
  }
  return param_1;
}


float * FUN_18002bd50(float *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];

  if (*(char *)(param_2 + 0x6e) == '\0') {
    uVar4 = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x5c);
    *(undefined8 *)(param_1 + 2) = uVar4;
    return param_1;
  }
  dVar2 = (double)FUN_1800578b0();
  uVar3 = FUN_1800bbb20(CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2 * 0.35),1.0);
  local_res10[0] = 0.0;
  local_res18[0] = 0.0;
  local_res20[0] = 0.0;
  FUN_180051f30(uVar3,1.0,1.0,local_res10,local_res18,local_res20);
  fVar1 = *(float *)(param_2 + 0x68);
  *param_1 = local_res10[0];
  param_1[3] = fVar1;
  param_1[2] = local_res20[0];
  param_1[1] = local_res18[0];
  return param_1;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_18002be10(longlong param_1,wchar_t *param_2)

{
  undefined1 (*pauVar1) [32];
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  double dVar5;
  LPVOID pvVar6;
  undefined8 *puVar7;
  FILE *pFVar8;
  undefined8 ****ppppuVar9;
  errno_t eVar10;
  int iVar11;
  uint uVar12;
  undefined4 extraout_var;
  char *pcVar13;
  size_t sVar14;
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  undefined8 uVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [32];
  undefined1 (*_Buf1) [32];
  undefined8 ****ppppuVar20;
  longlong *plVar21;
  ulonglong uVar22;
  char *_Buf2;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 (*pauVar26) [32];
  undefined4 uVar27;
  undefined1 (*pauVar28) [32];
  float fVar29;
  float fVar30;
  undefined8 uStack_350;
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [24];
  FILE *local_318;
  undefined8 ****local_310;
  undefined8 uStack_308;
  undefined1 (*local_300) [32];
  ulonglong uStack_2f8;
  undefined4 local_2e8 [2];
  undefined1 (*local_2e0) [32];
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined8 local_2c8;
  longlong lStack_2c0;
  ulonglong local_2b8;
  undefined8 local_2b0;
  undefined4 *local_2a8;
  undefined1 (*local_2a0) [32];
  undefined8 uStack_298;
  undefined1 (*local_290) [32];
  ulonglong local_288;
  undefined8 ****local_280;
  undefined8 uStack_278;
  undefined1 (*local_270) [32];
  ulonglong uStack_268;
  char local_258 [512];
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStack_348;
  local_318 = (_iobuf *)0x0;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(wchar_t **)param_2;
  }
  eVar10 = _wfopen_s(&local_318,param_2,L"rb");
  pFVar8 = local_318;
  uVar18 = CONCAT44(extraout_var,eVar10);
  puVar25 = auStack_348;
  if ((eVar10 == 0) && (puVar25 = auStack_348, local_318 != (_iobuf *)0x0)) {
    local_2e8[0] = 0;
    local_2e0 = (undefined1 (*) [32])0x0;
    local_2d8 = 0;
    local_2e0 = (undefined1 (*) [32])FUN_1800a5010(0x38);
    *(undefined1 (**) [32])*local_2e0 = local_2e0;
    *(undefined1 (**) [32])((longlong)*local_2e0 + 8) = local_2e0;
    local_2d0 = (longlong *)0x0;
    local_2c8 = 0;
    lStack_2c0 = 0;
    local_2b8 = 7;
    local_2b0 = 8;
    local_2e8[0] = 0x3f800000;
    FUN_1800104d0((ulonglong *)&local_2d0,0x10,local_2e0);
    local_2a8 = local_2e8;
    FUN_1800076c0(param_1,&local_2a8);
    pcVar13 = thunk_FUN_1800b1cb8(local_258,0x200,pFVar8);
    puVar23 = auStack_348;
    puVar24 = auStack_348;
    puVar25 = auStack_348;
    while (pcVar13 != (char *)0x0) {
      pcVar13 = FUN_1800a6130((ulonglong)local_258,'=');
      if (pcVar13 != (char *)0x0) {
        *pcVar13 = '\0';
        local_2a0 = (undefined1 (*) [32])0x0;
        uStack_298 = 0;
        local_290 = (undefined1 (*) [32])0x0;
        local_288 = 0;
        sVar14 = strlen(local_258);
        FUN_1800028f0(&local_2a0,(undefined8 *)local_258,sVar14);
        uStack_308 = 0;
        local_300 = (undefined1 (*) [32])0x0;
        uStack_2f8 = 0xf;
        local_310 = (undefined8 ****)0x0;
        pauVar16 = (undefined1 (*) [32])&local_2a0;
        if (0xf < local_288) {
          pauVar16 = local_2a0;
        }
        if (local_290 == (undefined1 (*) [32])0x0) {
          pauVar26 = (undefined1 (*) [32])0xffffffffffffffff;
        }
        else {
          pvVar6 = *local_290;
          pauVar15 = thunk_FUN_1800a4960(pauVar16,(undefined1 (*) [32])
                                                  (*pauVar16 + (longlong)pvVar6),0x40);
          pauVar26 = (undefined1 (*) [32])0xffffffffffffffff;
          if (pauVar15 != (undefined1 (*) [32])(*pauVar16 + (longlong)pvVar6)) {
            pauVar26 = (undefined1 (*) [32])((longlong)pauVar15 - (longlong)pauVar16);
          }
        }
        uVar18 = 0xf;
        if (pauVar26 != (undefined1 (*) [32])0xffffffffffffffff) {
          pauVar16 = (undefined1 (*) [32])((longlong)*pauVar26 + 1);
          local_280 = (undefined8 ****)0x0;
          uStack_278 = 0;
          local_270 = (undefined1 (*) [32])0x0;
          uStack_268 = 0;
          if (local_290 < pauVar16) {
                    // WARNING: Subroutine does not return
            FUN_180011720();
          }
          uVar18 = 0xffffffffffffffff;
          if ((longlong)local_290 - (longlong)pauVar16 != 0xffffffffffffffff) {
            uVar18 = (longlong)local_290 - (longlong)pauVar16;
          }
          pauVar15 = (undefined1 (*) [32])&local_2a0;
          if (0xf < local_288) {
            pauVar15 = local_2a0;
          }
          FUN_1800028f0(&local_280,(undefined8 *)((longlong)*pauVar16 + (longlong)*pauVar15),uVar18)
          ;
          local_310 = local_280;
          uStack_308 = uStack_278;
          local_300 = local_270;
          uStack_2f8 = uStack_268;
          if (local_290 < pauVar26) {
            uVar18 = (longlong)pauVar26 - (longlong)local_290;
            if (local_288 - (longlong)local_290 < uVar18) {
              FUN_180005810(&local_2a0,uVar18,0,uVar18,0);
            }
            else {
              pauVar16 = (undefined1 (*) [32])&local_2a0;
              if (0xf < local_288) {
                pauVar16 = local_2a0;
              }
              pauVar16 = (undefined1 (*) [32])((longlong)*local_290 + (longlong)*pauVar16);
              local_290 = pauVar26;
              FUN_1800d22d0(pauVar16,0,uVar18);
              *(undefined1 *)(uVar18 + (longlong)pauVar16) = 0;
            }
          }
          else {
            local_290 = pauVar26;
            pauVar16 = (undefined1 (*) [32])&local_2a0;
            if (0xf < local_288) {
              pauVar16 = local_2a0;
            }
            *(undefined1 *)((longlong)*pauVar26 + (longlong)*pauVar16) = 0;
          }
          uVar18 = uStack_2f8;
        }
        pauVar26 = local_290;
        pauVar16 = local_2e0;
        pauVar15 = (undefined1 (*) [32])&local_2a0;
        if (0xf < local_288) {
          pauVar15 = local_2a0;
        }
        uVar22 = 0xcbf29ce484222325;
        pauVar19 = (undefined1 (*) [32])0x0;
        if (local_290 != (undefined1 (*) [32])0x0) {
          do {
            uVar22 = (uVar22 ^ *(byte *)((longlong)*pauVar19 + (longlong)*pauVar15)) * 0x100000001b3
            ;
            pauVar19 = (undefined1 (*) [32])((longlong)*pauVar19 + 1);
          } while (pauVar19 < local_290);
        }
        pauVar19 = (undefined1 (*) [32])local_2d0[(local_2b8 & uVar22) * 2 + 1];
        pauVar28 = local_290;
        if (pauVar19 == local_2e0) {
          _Buf2 = (char *)local_2d0;
          pauVar19 = (undefined1 (*) [32])0x0;
        }
        else {
          pauVar1 = (undefined1 (*) [32])local_2d0[(local_2b8 & uVar22) * 2];
          while( true ) {
            _Buf2 = (char *)((longlong)*pauVar19 + 0x10);
            if (0xf < *(ulonglong *)(pauVar19[1] + 8)) {
              _Buf2 = *(char **)_Buf2;
            }
            _Buf1 = (undefined1 (*) [32])&local_2a0;
            if (0xf < local_288) {
              _Buf1 = local_2a0;
            }
            if (pauVar26 == *(undefined1 (**) [32])pauVar19[1]) {
              if (pauVar26 == (undefined1 (*) [32])0x0) goto LAB_18002c165;
              pauVar15 = pauVar26;
              iVar11 = memcmp(_Buf1,_Buf2,(size_t)pauVar26);
              if (iVar11 == 0) goto LAB_18002c165;
            }
            if (pauVar19 == pauVar1) break;
            pauVar19 = *(undefined1 (**) [32])((longlong)*pauVar19 + 8);
          }
          pauVar19 = (undefined1 (*) [32])0x0;
        }
LAB_18002c165:
        pauVar26 = local_300;
        ppppuVar9 = local_310;
        uVar27 = SUB84(pauVar28,0);
        if ((pauVar19 != (undefined1 (*) [32])0x0) && (pauVar19 != pauVar16)) {
          piVar2 = *(int **)(pauVar19[1] + 0x10);
          ppppuVar20 = &local_310;
          if (0xf < uVar18) {
            ppppuVar20 = local_310;
          }
          if (local_300 == (undefined1 (*) [32])0x4) {
            _Buf2 = &DAT_1800daa78;
            pauVar15 = local_300;
            iVar11 = memcmp(ppppuVar20,&DAT_1800daa78,4);
            if (iVar11 == 0) {
              uVar12 = FUN_1800ba750((longlong)(pcVar13 + 1),_Buf2,pauVar15,uVar27);
              piVar2[0x16] = uVar12;
              goto LAB_18002c3be;
            }
          }
          ppppuVar20 = &local_310;
          if (0xf < uVar18) {
            ppppuVar20 = ppppuVar9;
          }
          if (pauVar26 == (undefined1 (*) [32])0x7) {
            _Buf2 = "rainbow";
            pauVar15 = pauVar26;
            iVar11 = memcmp(ppppuVar20,"rainbow",7);
            if (iVar11 == 0) {
              uVar12 = FUN_1800ba750((longlong)(pcVar13 + 1),_Buf2,pauVar15,uVar27);
              *(bool *)((longlong)piVar2 + 0x6e) = uVar12 != 0;
              goto LAB_18002c3be;
            }
          }
          ppppuVar20 = &local_310;
          if (0xf < uVar18) {
            ppppuVar20 = ppppuVar9;
          }
          if (pauVar26 == (undefined1 (*) [32])0x2) {
            _Buf2 = &DAT_1800daa88;
            pauVar15 = pauVar26;
            iVar11 = memcmp(ppppuVar20,&DAT_1800daa88,2);
            if (iVar11 != 0) goto LAB_18002c237;
LAB_18002c220:
            uVar12 = FUN_1800ba750((longlong)(pcVar13 + 1),_Buf2,pauVar15,uVar27);
            *(bool *)(piVar2 + 5) = uVar12 != 0;
          }
          else {
LAB_18002c237:
            ppppuVar20 = &local_310;
            if (0xf < uVar18) {
              ppppuVar20 = ppppuVar9;
            }
            if (pauVar26 == (undefined1 (*) [32])0x4) {
              _Buf2 = &DAT_1800daa8c;
              pauVar15 = pauVar26;
              iVar11 = memcmp(ppppuVar20,&DAT_1800daa8c,4);
              if (iVar11 == 0) {
                uVar12 = FUN_1800ba750((longlong)(pcVar13 + 1),_Buf2,pauVar15,uVar27);
                *(bool *)((longlong)piVar2 + 0x72) = uVar12 != 0;
                goto LAB_18002c3be;
              }
            }
            ppppuVar20 = &local_310;
            if (0xf < uVar18) {
              ppppuVar20 = ppppuVar9;
            }
            if (pauVar26 == (undefined1 (*) [32])0x5) {
              _Buf2 = "color";
              iVar11 = memcmp(ppppuVar20,"color",5);
              pauVar15 = pauVar26;
              if (iVar11 != 0) goto LAB_18002c29e;
            }
            else {
LAB_18002c29e:
              iVar11 = *piVar2;
              if (iVar11 != 5) {
                if (iVar11 != 0) {
                  if (iVar11 == 1) {
                    dVar5 = (double)FUN_1800b9ff0((longlong)(pcVar13 + 1));
                    fVar30 = (float)dVar5;
                    fVar29 = (float)piVar2[7];
                    if (((float)piVar2[7] <= fVar30) &&
                       (fVar29 = (float)piVar2[8], fVar30 <= (float)piVar2[8])) {
                      fVar29 = fVar30;
                    }
                    piVar2[6] = (int)fVar29;
                  }
                  else if (iVar11 == 2) {
                    uVar12 = FUN_1800ba750((longlong)(pcVar13 + 1),_Buf2,pauVar15,uVar27);
                    if ((-1 < (int)uVar12) &&
                       ((int)uVar12 <
                        (int)(*(longlong *)(piVar2 + 0x12) - *(longlong *)(piVar2 + 0x10) >> 3))) {
                      piVar2[0xe] = uVar12;
                    }
                  }
                  else if (iVar11 == 3) {
                    uVar12 = FUN_1800ba800((longlong)(pcVar13 + 1),(longlong *)0x0,10);
                    piVar2[0xf] = uVar12;
                  }
                  else if (iVar11 == 4) {
                    uVar12 = FUN_1800ba750((longlong)(pcVar13 + 1),_Buf2,pauVar15,uVar27);
                    piVar2[0x16] = uVar12;
                  }
                  goto LAB_18002c3be;
                }
                goto LAB_18002c220;
              }
            }
            uVar12 = FUN_1800ba800((longlong)(pcVar13 + 1),(longlong *)0x0,0x10);
            piVar2[0x17] = (int)((float)(uVar12 >> 0x18) / 255.0);
            piVar2[0x18] = (int)((float)(uVar12 >> 0x10 & 0xff) / 255.0);
            piVar2[0x19] = (int)((float)(uVar12 >> 8 & 0xff) / 255.0);
            piVar2[0x1a] = (int)((float)(uVar12 & 0xff) / 255.0);
          }
        }
LAB_18002c3be:
        if (0xf < uVar18) {
          ppppuVar20 = ppppuVar9;
          if ((uVar18 + 1 < 0x1000) ||
             (ppppuVar20 = (undefined8 ****)ppppuVar9[-1],
             (ulonglong)((longlong)ppppuVar9 + (-8 - (longlong)ppppuVar20)) < 0x20)) {
            thunk_FUN_1800c3030(ppppuVar20);
            goto LAB_18002c3f6;
          }
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar23 = auStack_340;
LAB_18002c50b:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar24 = puVar23 + 8;
          goto LAB_18002c512;
        }
LAB_18002c3f6:
        if (0xf < local_288) {
          pauVar16 = local_2a0;
          if ((0xfff < local_288 + 1) &&
             (pauVar16 = *(undefined1 (**) [32])((longlong)local_2a0[-1] + 0x18),
             0x1f < (ulonglong)((longlong)local_2a0 + (-8 - (longlong)pauVar16))))
          goto LAB_18002c50b;
          thunk_FUN_1800c3030(pauVar16);
        }
      }
      pcVar13 = thunk_FUN_1800b1cb8(local_258,0x200,pFVar8);
    }
    FUN_1800b1c20(pFVar8);
    if (local_2d0 != (longlong *)0x0) {
      plVar21 = local_2d0;
      if ((0xfff < (ulonglong)((lStack_2c0 - (longlong)local_2d0 >> 3) * 8)) &&
         (plVar21 = (longlong *)local_2d0[-1],
         (char *)0x1f < (char *)((longlong)local_2d0 + (-8 - (longlong)plVar21)))) {
LAB_18002c512:
        pcVar4 = (code *)swi(0x29);
        uVar18 = (*pcVar4)(5);
        puVar25 = puVar24 + 8;
        goto LAB_18002c519;
      }
      thunk_FUN_1800c3030(plVar21);
      local_2d0 = (longlong *)0x0;
      local_2c8 = 0;
      lStack_2c0 = 0;
    }
    **(undefined8 **)((longlong)*local_2e0 + 8) = 0;
    puVar7 = *(undefined8 **)*local_2e0;
    while (puVar7 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar7;
      FUN_1800115e0(puVar7 + 2);
      thunk_FUN_1800c3030(puVar7);
      puVar7 = puVar3;
    }
    uVar17 = thunk_FUN_1800c3030(local_2e0);
    uVar18 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
  }
  else {
LAB_18002c519:
    uVar18 = uVar18 & 0xffffffffffffff00;
  }
  *(undefined8 *)(puVar25 + -8) = 0x18002c52a;
  return uVar18;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18002c560(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  undefined1 auStackY_88 [32];
  undefined1 local_58 [8];
  LPVOID *local_50;
  undefined1 *local_48;
  longlong local_40;
  LPVOID local_38 [3];
  ulonglong local_20;
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStackY_88;
  lVar2 = FUN_180056d70();
  FUN_180072460(*(longlong *)(lVar2 + 0x30));
  FUN_180002040((ulonglong *)local_38,&DAT_180112190,(undefined1 (*) [32])L"\\fonts\\");
  local_58[0] = 0;
  local_50 = local_38;
  local_48 = local_58;
  local_40 = lVar2;
  DAT_1801143c0 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"RussoOne-Regular.ttf",
                     (undefined1 (*) [32])L"Inter-Bold.ttf",19.0,0x1800decd8);
  DAT_1801143c8 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"RussoOne-Regular.ttf",
                     (undefined1 (*) [32])L"Inter-Bold.ttf",25.0,0x1800decd8);
  DAT_1801143d0 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-SemiBold.ttf",
                     (undefined1 (*) [32])L"Inter-SemiBold.ttf",10.0,0x1800decd8);
  DAT_1801143d8 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-SemiBold.ttf",
                     (undefined1 (*) [32])L"Inter-SemiBold.ttf",12.5,0x1800decd8);
  DAT_1801143e0 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-SemiBold.ttf",
                     (undefined1 (*) [32])L"Inter-SemiBold.ttf",13.0,0x1800decd8);
  DAT_1801143e8 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-SemiBold.ttf",
                     (undefined1 (*) [32])L"Inter-SemiBold.ttf",13.5,0x1800decd8);
  DAT_1801143f0 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-SemiBold.ttf",
                     (undefined1 (*) [32])L"Inter-SemiBold.ttf",16.0,0x1800decd8);
  DAT_1801143f8 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-Medium.ttf",
                     (undefined1 (*) [32])L"Inter-Medium.ttf",14.0,0x1800decd8);
  DAT_180114400 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-Medium.ttf",
                     (undefined1 (*) [32])L"Inter-Medium.ttf",13.5,0x1800decd8);
  DAT_180114408 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-Medium.ttf",
                     (undefined1 (*) [32])L"Inter-Medium.ttf",13.0,0x1800decd8);
  DAT_180114410 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-Medium.ttf",
                     (undefined1 (*) [32])L"Inter-Medium.ttf",12.5,0x1800decd8);
  DAT_180114418 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Geist-Medium.ttf",
                     (undefined1 (*) [32])L"Inter-Medium.ttf",12.0,0x1800decd8);
  DAT_180114420 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Inter-SemiBold.ttf",
                     (undefined1 (*) [32])L"Geist-SemiBold.ttf",10.5,0x1800decd8);
  DAT_180114428 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"Inter-Medium.ttf",
                     (undefined1 (*) [32])L"Geist-Medium.ttf",10.5,0x1800decd8);
  _DAT_180114430 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"fa-solid-900.ttf",(undefined1 (*) [32])0x0,
                     14.0,0x180112020);
  _DAT_180114438 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"fa-solid-900.ttf",(undefined1 (*) [32])0x0,
                     13.0,0x180112020);
  _DAT_180114440 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"fa-solid-900.ttf",(undefined1 (*) [32])0x0,
                     12.0,0x180112020);
  _DAT_180114448 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"fa-solid-900.ttf",(undefined1 (*) [32])0x0,
                     11.0,0x180112020);
  _DAT_180114450 =
       FUN_18000ba70(&local_50,(undefined1 (*) [32])L"fa-solid-900.ttf",(undefined1 (*) [32])0x0,
                     10.0,0x180112020);
  if ((((((DAT_1801143c0 == 0) || (DAT_1801143c8 == 0)) || (DAT_1801143d0 == 0)) ||
       ((DAT_1801143d8 == 0 || (DAT_1801143e0 == 0)))) ||
      ((DAT_1801143e8 == 0 || ((DAT_1801143f0 == 0 || (DAT_1801143f8 == 0)))))) ||
     ((DAT_180114400 == 0 ||
      ((((DAT_180114408 == 0 || (DAT_180114410 == 0)) || (DAT_180114418 == 0)) ||
       ((DAT_180114420 == 0 || (DAT_180114428 == 0)))))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (7 < local_20) {
    pvVar4 = local_38[0];
    if ((0xfff < local_20 * 2 + 2) &&
       (pvVar4 = *(LPVOID *)((longlong)local_38[0] + -8),
       0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)pvVar4)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    thunk_FUN_1800c3030(pvVar4);
  }
  return uVar3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_18002c9f0(void)

{
  code *pcVar1;
  char cVar2;
  ulonglong *puVar3;
  LPVOID pvVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 auStackY_68 [8];
  undefined1 auStackY_60 [24];
  LPVOID local_38 [3];
  ulonglong local_20;
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStackY_68;
  if (DAT_180114468 != (longlong *)0x0) {
    (**(code **)(*DAT_180114468 + 0x10))();
    DAT_180114468 = (longlong *)0x0;
    _DAT_180114470 = 0;
  }
  uVar5 = (uint)(DAT_180112008 * 38.0 + 0.5);
  puVar3 = FUN_180002040((ulonglong *)local_38,&DAT_180112190,
                         (undefined1 (*) [32])L"\\logo_blue.png");
  cVar2 = FUN_18002cb30(DAT_180114390,puVar3,0x180114468,uVar5,uVar5);
  if (local_20 < 8) {
LAB_18002cac2:
    puVar6 = auStackY_68;
    if (cVar2 != '\0') {
      _DAT_180114298 = DAT_180114468;
      _DAT_1801142a0 = (float)DAT_180114470;
      _DAT_1801142a4 = (float)DAT_180114474;
      puVar6 = auStackY_68;
      goto LAB_18002cb0a;
    }
  }
  else {
    pvVar4 = local_38[0];
    if ((local_20 * 2 + 2 < 0x1000) ||
       (pvVar4 = *(LPVOID *)((longlong)local_38[0] + -8),
       (ulonglong)((longlong)local_38[0] + (-8 - (longlong)pvVar4)) < 0x20)) {
      thunk_FUN_1800c3030(pvVar4);
      goto LAB_18002cac2;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStackY_60;
  }
  _DAT_180114298 = (longlong *)0x0;
LAB_18002cb0a:
  *(undefined8 *)(puVar6 + -8) = 0x18002cb17;
  return;
}


undefined1
FUN_18002cb30(longlong *param_1,undefined8 *param_2,longlong param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  LPVOID pvVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  LPVOID pvVar12;
  double dVar13;
  double dVar14;
  undefined8 uStackY_a0;
  undefined1 auStackY_98 [8];
  undefined1 auStackY_90 [24];
  uint local_68;
  uint local_64;
  longlong local_60;
  longlong lStack_58;
  undefined8 local_50;
  LPVOID local_48;
  undefined8 uStack_40;
  longlong local_38;

  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_50 = 0;
  uVar4 = FUN_180023870(param_2,&local_68,&local_64,&local_60);
  if ((char)uVar4 == '\0') {
    uVar3 = 0;
    puVar9 = auStackY_98;
  }
  else {
    lVar11 = 0;
    if (3 < (ulonglong)(lStack_58 - local_60)) {
      do {
        *(undefined1 *)(local_60 + lVar11) = 0xff;
        *(undefined1 *)(lVar11 + 1 + local_60) = 0xff;
        *(undefined1 *)(lVar11 + 2 + local_60) = 0xff;
        uVar4 = lVar11 + 7;
        lVar11 = lVar11 + 4;
      } while (uVar4 < (ulonglong)(lStack_58 - local_60));
    }
    if ((((int)param_4 < 1) || ((int)param_5 < 1)) ||
       ((local_68 <= param_4 && (local_64 <= param_5)))) {
      uVar5 = FUN_180048830(param_1,local_68,local_64,local_60,param_3);
      puVar9 = auStackY_98;
      uVar3 = (undefined1)uVar5;
    }
    else {
      dVar13 = (double)(int)param_5 / (double)local_64;
      dVar14 = (double)(int)param_4 / (double)local_68;
      if (dVar13 <= dVar14) {
        dVar14 = dVar13;
      }
      uVar10 = (uint)(longlong)((double)local_68 * dVar14 + 0.5);
      if (uVar10 == 0) {
        uVar10 = 1;
      }
      uVar7 = (uint)(longlong)((double)local_64 * dVar14 + 0.5);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      local_48 = (LPVOID)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_180040960(&local_60,local_68,local_64,uVar10,uVar7,(ulonglong *)&local_48);
      pvVar6 = local_48;
      uVar5 = FUN_180048830(param_1,uVar10,uVar7,local_48,param_3);
      puVar8 = auStackY_98;
      uVar3 = (undefined1)uVar5;
      puVar9 = auStackY_98;
      if (pvVar6 != (LPVOID)0x0) {
        if (0xfff < (ulonglong)(local_38 - (longlong)pvVar6)) {
          puVar1 = (undefined8 *)((longlong)pvVar6 + -8);
          pvVar6 = (LPVOID)((longlong)pvVar6 + (-8 - (longlong)*puVar1));
          if (pvVar6 < (LPVOID)0x20) {
            thunk_FUN_1800c3030((LPVOID)*puVar1);
            puVar9 = auStackY_98;
            goto LAB_18002ccfb;
          }
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar8 = auStackY_90;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18002cce9;
        thunk_FUN_1800c3030(pvVar6);
        puVar9 = puVar8;
      }
    }
  }
LAB_18002ccfb:
  pvVar6 = *(LPVOID *)(puVar9 + 0x38);
  if (pvVar6 == (LPVOID)0x0) {
    return uVar3;
  }
  if (0xfff < (ulonglong)(*(longlong *)(puVar9 + 0x48) - (longlong)pvVar6)) {
    pvVar12 = *(LPVOID *)((longlong)pvVar6 + -8);
    if ((ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar12)) < 0x20) goto LAB_18002cd37;
    pvVar6 = (LPVOID)0x5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar9 = puVar9 + 8;
  }
  pvVar12 = pvVar6;
LAB_18002cd37:
  *(undefined8 *)(puVar9 + -8) = 0x18002cd3f;
  thunk_FUN_1800c3030(pvVar12);
  return uVar3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18002cd50(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  errno_t eVar8;
  int iVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  wchar_t *_Filename;
  size_t sVar12;
  longlong *plVar13;
  LPVOID pvVar14;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  undefined4 *local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  FILE *local_138;
  longlong local_130 [2];
  LPVOID local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulonglong local_108;
  char local_f8 [160];
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStack_188;
  if (((DAT_180115810 == 0) && (DAT_180114390 != (longlong *)0x0)) && (DAT_180115bf0 == '\0')) {
    DAT_180115bf0 = '\x01';
    puVar10 = FUN_180002040((ulonglong *)&local_120,&DAT_180112190,
                            (undefined1 (*) [32])L"\\robrun_modelpics.png");
    uVar11 = FUN_18002da60(DAT_180114390,puVar10,0x180115810,(longlong *)0x0);
    if (7 < local_108) {
      pvVar14 = local_120;
      if ((0xfff < local_108 * 2 + 2) &&
         (pvVar14 = *(LPVOID *)((longlong)local_120 + -8),
         0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)pvVar14)))) goto LAB_18002d09c;
      thunk_FUN_1800c3030(pvVar14);
    }
    if ((char)uVar11 != '\0') {
      DAT_1801159d8 = DAT_180115810;
      DAT_1801159e0 = (float)DAT_180115818;
      DAT_1801159e4 = (float)DAT_18011581c;
      local_138 = (FILE *)0x0;
      _Filename = (wchar_t *)
                  FUN_180002040((ulonglong *)&local_120,&DAT_180112190,
                                (undefined1 (*) [32])L"\\robrun_modelpics.idx");
      if (7 < *(ulonglong *)(_Filename + 0xc)) {
        _Filename = *(wchar_t **)_Filename;
      }
      eVar8 = _wfopen_s(&local_138,_Filename,L"r");
      if ((eVar8 == 0) && (local_138 != (FILE *)0x0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (7 < local_108) {
        pvVar14 = local_120;
        if ((0xfff < local_108 * 2 + 2) &&
           (pvVar14 = *(LPVOID *)((longlong)local_120 + -8),
           0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)pvVar14)))) {
LAB_18002d09c:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        thunk_FUN_1800c3030(pvVar14);
      }
      if (!bVar3) {
        local_150 = &local_144;
        local_158 = &local_140;
        local_160 = &local_13c;
        local_168 = &local_148;
        iVar9 = FUN_180049170((longlong)local_138,0x1800dec58,local_f8,0xa0);
        uVar4 = local_148;
        uVar5 = local_144;
        uVar6 = local_140;
        uVar7 = local_13c;
        while (iVar9 == 5) {
          local_120 = (LPVOID)0x0;
          uStack_118 = 0;
          local_110 = 0;
          local_108 = 0;
          local_148 = uVar4;
          local_144 = uVar5;
          local_140 = uVar6;
          local_13c = uVar7;
          sVar12 = strlen(local_f8);
          FUN_1800028f0(&local_120,(undefined8 *)local_f8,sVar12);
          plVar13 = FUN_180006710((float *)&DAT_180112120,local_130,&local_120);
          lVar1 = *plVar13;
          *(undefined4 *)(lVar1 + 0x30) = uVar4;
          *(undefined4 *)(lVar1 + 0x34) = uVar7;
          *(undefined4 *)(lVar1 + 0x38) = uVar6;
          *(undefined4 *)(lVar1 + 0x3c) = uVar5;
          if (0xf < local_108) {
            pvVar14 = local_120;
            if ((0xfff < local_108 + 1) &&
               (pvVar14 = *(LPVOID *)((longlong)local_120 + -8),
               0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)pvVar14))))
            goto LAB_18002d09c;
            thunk_FUN_1800c3030(pvVar14);
          }
          local_150 = &local_144;
          local_158 = &local_140;
          local_160 = &local_13c;
          local_168 = &local_148;
          iVar9 = FUN_180049170((longlong)local_138,0x1800dec58,local_f8,0xa0);
          uVar4 = local_148;
          uVar5 = local_144;
          uVar6 = local_140;
          uVar7 = local_13c;
        }
        FUN_1800b1c20(local_138);
      }
    }
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18002d0b0(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  errno_t eVar5;
  int iVar6;
  wchar_t *_Filename;
  char *pcVar7;
  size_t sVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  longlong lVar11;
  undefined1 (*pauVar12) [32];
  ulonglong uVar13;
  LPVOID pvVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [24];
  FILE *local_238;
  undefined1 (*local_230) [32];
  undefined8 uStack_228;
  longlong local_220;
  ulonglong uStack_218;
  undefined8 *local_210;
  undefined1 (*local_208) [32];
  undefined8 uStack_200;
  undefined8 *local_1f8;
  ulonglong local_1f0;
  undefined1 (*local_1e8) [32];
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  ulonglong uStack_1d0;
  undefined1 (*local_1c8) [32];
  undefined8 uStack_1c0;
  undefined8 *local_1b8;
  ulonglong uStack_1b0;
  undefined1 (*local_1a8) [32];
  undefined8 uStack_1a0;
  undefined8 *local_198;
  ulonglong local_190;
  LPVOID local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  ulonglong local_170;
  undefined1 local_168;
  char local_158 [256];
  ulonglong local_58;

  puVar18 = auStack_258;
  local_58 = DAT_180112300 ^ (ulonglong)auStack_258;
  if (DAT_180115bf1 == '\0') {
    DAT_180115bf1 = '\x01';
    local_238 = (FILE *)0x0;
    _Filename = (wchar_t *)
                FUN_180002040((ulonglong *)&local_1c8,&DAT_180112190,
                              (undefined1 (*) [32])L"\\robrun_skins.txt");
    if (7 < *(ulonglong *)(_Filename + 0xc)) {
      _Filename = *(wchar_t **)_Filename;
    }
    eVar5 = _wfopen_s(&local_238,_Filename,L"r");
    if ((eVar5 == 0) && (local_238 != (FILE *)0x0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (7 < uStack_1b0) {
      pauVar9 = local_1c8;
      if (0xfff < uStack_1b0 * 2 + 2) {
        pauVar9 = *(undefined1 (**) [32])((longlong)local_1c8[-1] + 0x18);
        puVar18 = auStack_258;
        if (0x1f < (ulonglong)((longlong)local_1c8 + (-8 - (longlong)pauVar9))) goto LAB_18002da36;
      }
      thunk_FUN_1800c3030(pauVar9);
    }
    if (bVar4) {
      pcVar7 = thunk_FUN_1800b1cb8(local_158,0x100,local_238);
      puVar19 = auStack_258;
      puVar16 = auStack_258;
      while (pcVar7 != (char *)0x0) {
        local_208 = (undefined1 (*) [32])0x0;
        uStack_200 = 0;
        local_1f8 = (undefined8 *)0x0;
        local_1f0 = 0;
        sVar8 = strlen(local_158);
        FUN_1800028f0(&local_208,(undefined8 *)local_158,sVar8);
        while (local_1f8 != (undefined8 *)0x0) {
          pauVar9 = (undefined1 (*) [32])&local_208;
          if (0xf < local_1f0) {
            pauVar9 = local_208;
          }
          puVar22 = (undefined8 *)((longlong)local_1f8 + -1);
          if (*(char *)((longlong)puVar22 + (longlong)((longlong)(pauVar9 + -1) + 0x20)) != '\n') {
            pauVar9 = (undefined1 (*) [32])&local_208;
            if (0xf < local_1f0) {
              pauVar9 = local_208;
            }
            if (*(char *)((longlong)puVar22 + (longlong)((longlong)pauVar9[-1] + 0x20)) != '\r') {
              pauVar9 = (undefined1 (*) [32])&local_208;
              if (0xf < local_1f0) {
                pauVar9 = local_208;
              }
              if (*(char *)((longlong)puVar22 + (longlong)((longlong)pauVar9[-1] + 0x20)) != ' ') {
                if (local_1f8 != (undefined8 *)0x0) {
                  pauVar9 = (undefined1 (*) [32])&local_208;
                  if (0xf < local_1f0) {
                    pauVar9 = local_208;
                  }
                  if ((*pauVar9)[0] != '#') {
                    pauVar9 = (undefined1 (*) [32])&local_208;
                    if (0xf < local_1f0) {
                      pauVar9 = local_208;
                    }
                    if ((local_1f8 == (undefined8 *)0x0) ||
                       (pauVar12 = (undefined1 (*) [32])((longlong)local_1f8 + (longlong)pauVar9),
                       pauVar10 = thunk_FUN_1800a4960(pauVar9,pauVar12,0x7c), pauVar10 == pauVar12))
                    {
                      puVar21 = (undefined8 *)0xffffffffffffffff;
LAB_18002d37c:
                      puVar20 = local_1f8;
                      local_1e8 = (undefined1 (*) [32])0x0;
                      uStack_1e0 = 0;
                      local_1d8 = (undefined8 *)0x0;
                      uStack_1d0 = 0;
                      pauVar9 = (undefined1 (*) [32])&local_208;
                      if (0xf < local_1f0) {
                        pauVar9 = local_208;
                      }
                      if ((undefined8 *)0x7fffffffffffffff < local_1f8) goto LAB_18002da3d;
                      if (local_1f8 < (undefined8 *)0x10) {
                        local_1d8 = local_1f8;
                        uStack_1d0 = 0xf;
                        local_1e8 = *(undefined1 (**) [32])*pauVar9;
                        uStack_1e0 = *(undefined8 *)(*pauVar9 + 8);
                        goto LAB_18002d451;
                      }
                      uVar15 = (ulonglong)local_1f8 | 0xf;
                      if (uVar15 < 0x8000000000000000) {
                        if (uVar15 < 0x16) {
                          uVar15 = 0x16;
                        }
                        uVar1 = uVar15 + 1;
                        pauVar12 = (undefined1 (*) [32])0x0;
                        if (uVar1 != 0) {
                          if (0xfff < uVar1) {
                            uVar13 = uVar15 + 0x28;
                            if (uVar13 <= uVar1) {
                    // WARNING: Subroutine does not return
                              FUN_180011350();
                            }
                            goto LAB_18002d401;
                          }
                          pauVar12 = (undefined1 (*) [32])FUN_1800a5010(uVar1);
                        }
LAB_18002d428:
                        local_1d8 = puVar20;
                        local_1e8 = pauVar12;
                        uStack_1d0 = uVar15;
                        FUN_1800d1c20((undefined8 *)pauVar12,(undefined8 *)pauVar9,
                                      (longlong)puVar20 + 1);
                        goto LAB_18002d451;
                      }
                      uVar15 = 0x7fffffffffffffff;
                      uVar13 = 0x8000000000000027;
LAB_18002d401:
                      lVar11 = FUN_1800a5010(uVar13);
                      puVar18 = auStack_258;
                      if (lVar11 != 0) {
                        pauVar12 = (undefined1 (*) [32])(lVar11 + 0x27U & 0xffffffffffffffe0);
                        *(longlong *)((longlong)pauVar12[-1] + 0x18) = lVar11;
                        goto LAB_18002d428;
                      }
                    }
                    else {
                      puVar21 = (undefined8 *)((longlong)pauVar10 - (longlong)pauVar9);
                      if (puVar21 == (undefined8 *)0xffffffffffffffff) goto LAB_18002d37c;
                      puVar20 = (undefined8 *)((longlong)puVar21 + 1);
                      local_1e8 = (undefined1 (*) [32])0x0;
                      uStack_1e0 = 0;
                      local_1d8 = (undefined8 *)0x0;
                      uStack_1d0 = 0;
                      if (local_1f8 < puVar20) {
                    // WARNING: Subroutine does not return
                        FUN_180011720();
                      }
                      uVar15 = 0xffffffffffffffff;
                      if ((longlong)local_1f8 - (longlong)puVar20 != 0xffffffffffffffff) {
                        uVar15 = (longlong)local_1f8 - (longlong)puVar20;
                      }
                      pauVar9 = (undefined1 (*) [32])&local_208;
                      if (0xf < local_1f0) {
                        pauVar9 = local_208;
                      }
                      FUN_1800028f0(&local_1e8,(undefined8 *)((longlong)pauVar9 + (longlong)puVar20)
                                    ,uVar15);
LAB_18002d451:
                      uStack_228 = 0;
                      local_220 = 0;
                      uStack_218 = 0xf;
                      local_230 = (undefined1 (*) [32])0x0;
                      pauVar9 = (undefined1 (*) [32])&local_1e8;
                      if (0xf < uStack_1d0) {
                        pauVar9 = local_1e8;
                      }
                      if ((local_1d8 == (undefined8 *)0x0) ||
                         (pauVar12 = (undefined1 (*) [32])((longlong)local_1d8 + (longlong)pauVar9),
                         pauVar10 = thunk_FUN_1800a4960(pauVar9,pauVar12,0x7c), pauVar10 == pauVar12
                         )) {
                        puVar20 = (undefined8 *)0xffffffffffffffff;
                      }
                      else {
                        puVar20 = (undefined8 *)((longlong)pauVar10 - (longlong)pauVar9);
                      }
                      lVar11 = 0;
                      uVar15 = 0xf;
                      if (puVar20 == (undefined8 *)0xffffffffffffffff) {
LAB_18002d5ba:
                        uStack_1a0 = 0;
                        local_198 = (undefined8 *)0x0;
                        local_190 = 0xf;
                        local_1a8 = (undefined1 (*) [32])0x0;
                        uStack_180 = 0;
                        local_178 = 0;
                        local_170 = 0xf;
                        local_188 = (LPVOID)0x0;
                        local_168 = 0;
                        local_1c8 = (undefined1 (*) [32])0x0;
                        uStack_1c0 = 0;
                        local_1b8 = (undefined8 *)0x0;
                        uStack_1b0 = 0;
                        if (local_1f8 < puVar21) {
                          puVar21 = local_1f8;
                        }
                        pauVar9 = (undefined1 (*) [32])&local_208;
                        if (0xf < local_1f0) {
                          pauVar9 = local_208;
                        }
                        FUN_1800028f0(&local_1c8,(undefined8 *)pauVar9,(ulonglong)puVar21);
                        if (0xf < local_190) {
                          pauVar9 = local_1a8;
                          if ((0xfff < local_190 + 1) &&
                             (pauVar9 = *(undefined1 (**) [32])((longlong)local_1a8[-1] + 0x18),
                             0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pauVar9)))) {
                            pcVar3 = (code *)swi(0x29);
                            (*pcVar3)(5);
                            puVar18 = auStack_250;
                            goto LAB_18002d97c;
                          }
                          thunk_FUN_1800c3030(pauVar9);
                        }
                        local_1a8 = local_1c8;
                        uStack_1a0 = uStack_1c0;
                        local_198 = local_1b8;
                        local_190 = uStack_1b0;
                        pauVar9 = (undefined1 (*) [32])&local_1e8;
                        if (0xf < uStack_1d0) {
                          pauVar9 = local_1e8;
                        }
                        FUN_180002370((longlong *)&local_188,(undefined8 *)pauVar9,
                                      (ulonglong)local_1d8);
                        pauVar9 = local_230;
                        pauVar12 = (undefined1 (*) [32])&local_230;
                        if (0xf < uVar15) {
                          pauVar12 = local_230;
                        }
                        if (lVar11 == 6) {
                          iVar6 = memcmp(pauVar12,"hidden",6);
                          local_168 = iVar6 == 0;
                        }
                        else {
                          local_168 = false;
                        }
                        puVar21 = DAT_1801159a8;
                        if (DAT_1801159a8 == DAT_1801159b0) {
                          FUN_180002c70((longlong *)&DAT_1801159a0,DAT_1801159a8,&local_1a8);
                        }
                        else {
                          local_210 = DAT_1801159a8;
                          FUN_180007dc0(DAT_1801159a8,&local_1a8);
                          FUN_180007dc0(puVar21 + 4,&local_188);
                          *(undefined1 *)(puVar21 + 8) = local_168;
                          DAT_1801159a8 = DAT_1801159a8 + 9;
                        }
                        if (0xf < local_170) {
                          pvVar14 = local_188;
                          if (0xfff < local_170 + 1) {
                            pvVar14 = *(LPVOID *)((longlong)local_188 + -8);
                            puVar18 = auStack_258;
                            if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pvVar14)))
                            goto LAB_18002d97c;
                          }
                          thunk_FUN_1800c3030(pvVar14);
                        }
                        if (0xf < local_190) {
                          pauVar12 = local_1a8;
                          if (0xfff < local_190 + 1) {
                            pauVar12 = *(undefined1 (**) [32])((longlong)local_1a8[-1] + 0x18);
                            puVar18 = auStack_258;
                            if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pauVar12)))
                            goto LAB_18002d97c;
                          }
                          thunk_FUN_1800c3030(pauVar12);
                        }
                        if (0xf < uVar15) {
                          pauVar12 = pauVar9;
                          if ((0xfff < uVar15 + 1) &&
                             (pauVar12 = *(undefined1 (**) [32])((longlong)pauVar9[-1] + 0x18),
                             0x1f < (ulonglong)((longlong)pauVar9 + (-8 - (longlong)pauVar12))))
                          goto LAB_18002d983;
                          thunk_FUN_1800c3030(pauVar12);
                        }
                        if (0xf < uStack_1d0) {
                          pauVar9 = local_1e8;
                          if (0xfff < uStack_1d0 + 1) {
                            pauVar9 = *(undefined1 (**) [32])((longlong)local_1e8[-1] + 0x18);
                            puVar18 = auStack_258;
                            if (0x1f < (ulonglong)((longlong)local_1e8 + (-8 - (longlong)pauVar9)))
                            goto LAB_18002d98a;
                          }
                          thunk_FUN_1800c3030(pauVar9);
                        }
                        local_1d8 = (undefined8 *)0x0;
                        uStack_1d0 = 0xf;
                        local_1e8 = (undefined1 (*) [32])((ulonglong)local_1e8 & 0xffffffffffffff00)
                        ;
                        if (local_1f0 < 0x10) goto LAB_18002d859;
                        pauVar9 = local_208;
                        if (0xfff < local_1f0 + 1) {
                          pauVar9 = *(undefined1 (**) [32])((longlong)local_208[-1] + 0x18);
                          puVar18 = auStack_258;
                          if (0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pauVar9)))
                          goto LAB_18002da36;
                        }
                        thunk_FUN_1800c3030(pauVar9);
                        goto LAB_18002d859;
                      }
                      puVar2 = (undefined8 *)((longlong)puVar20 + 1);
                      local_1c8 = (undefined1 (*) [32])0x0;
                      uStack_1c0 = 0;
                      local_1b8 = (undefined8 *)0x0;
                      uStack_1b0 = 0;
                      if (local_1d8 < puVar2) {
                    // WARNING: Subroutine does not return
                        FUN_180011720();
                      }
                      uVar15 = 0xffffffffffffffff;
                      if ((longlong)local_1d8 - (longlong)puVar2 != 0xffffffffffffffff) {
                        uVar15 = (longlong)local_1d8 - (longlong)puVar2;
                      }
                      pauVar9 = (undefined1 (*) [32])&local_1e8;
                      if (0xf < uStack_1d0) {
                        pauVar9 = local_1e8;
                      }
                      FUN_1800028f0(&local_1c8,(undefined8 *)((longlong)*pauVar9 + (longlong)puVar2)
                                    ,uVar15);
                      local_230 = local_1c8;
                      uStack_228 = uStack_1c0;
                      local_220 = (longlong)local_1b8;
                      uStack_218 = uStack_1b0;
                      local_1c8 = (undefined1 (*) [32])0x0;
                      uStack_1c0 = 0;
                      local_1b8 = (undefined8 *)0x0;
                      uStack_1b0 = 0;
                      if (local_1d8 < puVar20) {
                        puVar20 = local_1d8;
                      }
                      pauVar9 = (undefined1 (*) [32])&local_1e8;
                      if (0xf < uStack_1d0) {
                        pauVar9 = local_1e8;
                      }
                      FUN_1800028f0(&local_1c8,(undefined8 *)pauVar9,(ulonglong)puVar20);
                      if (uStack_1d0 < 0x10) {
LAB_18002d595:
                        local_1e8 = local_1c8;
                        uStack_1e0 = uStack_1c0;
                        local_1d8 = local_1b8;
                        uStack_1d0 = uStack_1b0;
                        lVar11 = local_220;
                        uVar15 = uStack_218;
                        goto LAB_18002d5ba;
                      }
                      pauVar9 = local_1e8;
                      if (uStack_1d0 + 1 < 0x1000) {
LAB_18002d590:
                        thunk_FUN_1800c3030(pauVar9);
                        goto LAB_18002d595;
                      }
                      pauVar9 = *(undefined1 (**) [32])((longlong)local_1e8[-1] + 0x18);
                      puVar18 = auStack_258;
                      if ((ulonglong)((longlong)local_1e8 + (-8 - (longlong)pauVar9)) < 0x20)
                      goto LAB_18002d590;
LAB_18002d97c:
                      pcVar3 = (code *)swi(0x29);
                      (*pcVar3)(5);
                      puVar16 = puVar18 + 8;
LAB_18002d983:
                      pcVar3 = (code *)swi(0x29);
                      (*pcVar3)(5);
                      puVar18 = puVar16 + 8;
                    }
LAB_18002d98a:
                    pcVar3 = (code *)swi(0x29);
                    (*pcVar3)(5);
                    puVar17 = puVar18 + 8;
                    goto LAB_18002d991;
                  }
                }
                break;
              }
            }
          }
          local_1f8 = puVar22;
          pauVar9 = (undefined1 (*) [32])&local_208;
          if (0xf < local_1f0) {
            pauVar9 = local_208;
          }
          *(undefined1 *)((longlong)puVar22 + (longlong)((longlong)pauVar9[-1] + 0x20)) = 0;
        }
        if (0xf < local_1f0) {
          pauVar9 = local_208;
          if (0xfff < local_1f0 + 1) {
            pauVar9 = *(undefined1 (**) [32])((longlong)local_208[-1] + 0x18);
            puVar18 = auStack_258;
            if (0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pauVar9)))
            goto LAB_18002da36;
          }
          thunk_FUN_1800c3030(pauVar9);
        }
LAB_18002d859:
        pcVar7 = thunk_FUN_1800b1cb8(local_158,0x100,local_238);
      }
      FUN_1800b1c20(local_238);
    }
    puVar22 = DAT_1801159a8;
    puVar18 = auStack_258;
    puVar17 = auStack_258;
    if (DAT_1801159a0 != DAT_1801159a8) goto LAB_18002da13;
    local_198 = (undefined8 *)0xa;
    local_190 = 0xf;
    local_1a8 = (undefined1 (*) [32])0x646e616c656d6f68;
    uStack_1a0 = 0x7265;
    local_178 = 10;
    local_170 = 0xf;
    local_188 = (LPVOID)0x646e616c656d6f48;
    uStack_180 = 0x7265;
    local_168 = 0;
    if (DAT_1801159a8 == DAT_1801159b0) {
LAB_18002d991:
      *(undefined8 *)(puVar17 + -8) = 0x18002d9a4;
      FUN_180003700((longlong *)&DAT_1801159a0,puVar22,&local_1a8);
      puVar18 = puVar17;
    }
    else {
      *DAT_1801159a8 = 0x646e616c656d6f68;
      *(undefined2 *)(puVar22 + 1) = 0x7265;
      *(undefined1 *)((longlong)puVar22 + 10) = 0;
      *(undefined4 *)((longlong)puVar22 + 0xb) = 0;
      *(undefined1 *)((longlong)puVar22 + 0xf) = 0;
      puVar22[2] = 10;
      puVar22[3] = 0xf;
      local_1a8 = (undefined1 (*) [32])0x646e616c656d6f00;
      puVar22[4] = 0x646e616c656d6f48;
      *(undefined2 *)(puVar22 + 5) = 0x7265;
      *(undefined1 *)((longlong)puVar22 + 0x2a) = 0;
      *(undefined4 *)((longlong)puVar22 + 0x2b) = 0;
      *(undefined1 *)((longlong)puVar22 + 0x2f) = 0;
      puVar22[6] = 10;
      puVar22[7] = 0xf;
      local_188 = (LPVOID)0x646e616c656d6f00;
      *(undefined1 *)(puVar22 + 8) = 0;
      DAT_1801159a8 = DAT_1801159a8 + 9;
      puVar18 = auStack_258;
    }
    uVar15 = local_190;
    if (0xf < local_170) {
      pvVar14 = local_188;
      if ((0xfff < local_170 + 1) &&
         (pvVar14 = *(LPVOID *)((longlong)local_188 + -8),
         0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pvVar14)))) goto LAB_18002da36;
      *(undefined8 *)(puVar18 + -8) = 0x18002d9df;
      thunk_FUN_1800c3030(pvVar14);
    }
    if (0xf < uVar15) {
      pauVar9 = local_1a8;
      if ((0xfff < uVar15 + 1) &&
         (pauVar9 = *(undefined1 (**) [32])((longlong)local_1a8[-1] + 0x18),
         0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pauVar9)))) {
LAB_18002da36:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar19 = puVar18 + 8;
LAB_18002da3d:
                    // WARNING: Subroutine does not return
        *(undefined8 *)(puVar19 + -8) = 0x18002da42;
        FUN_1800116e0();
      }
      *(undefined8 *)(puVar18 + -8) = 0x18002da13;
      thunk_FUN_1800c3030(pauVar9);
    }
  }
LAB_18002da13:
  *(undefined8 *)(puVar18 + -8) = 0x18002da22;
  return;
}


undefined8 FUN_18002da60(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uStackY_80;
  undefined1 auStackY_78 [8];
  undefined1 auStackY_70 [24];
  uint local_48;
  uint local_44;
  longlong local_40 [4];

  local_44 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  uVar2 = FUN_180023870(param_2,&local_44,&local_48,local_40);
  if ((char)uVar2 != '\0') {
    uVar3 = FUN_180048830(param_1,local_44,local_48,local_40[0],param_3);
    puVar6 = auStackY_78;
    puVar7 = auStackY_78;
    if ((char)uVar3 != '\0') {
      puVar8 = auStackY_78;
      if ((param_4 != (longlong *)0x0) && (puVar8 = auStackY_78, param_4 != local_40)) {
        pvVar4 = (LPVOID)*param_4;
        puVar8 = auStackY_78;
        if (pvVar4 != (LPVOID)0x0) {
          if ((ulonglong)(param_4[2] - (longlong)pvVar4) < 0x1000) {
LAB_18002db10:
            pvVar5 = pvVar4;
            puVar7 = puVar6;
          }
          else {
            pvVar5 = *(LPVOID *)((longlong)pvVar4 + -8);
            if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar5))) {
              pcVar1 = (code *)swi(0x29);
              pvVar4 = (LPVOID)(*pcVar1)(5);
              puVar6 = auStackY_70;
              goto LAB_18002db10;
            }
          }
          *(undefined8 *)(puVar7 + -8) = 0x18002db18;
          thunk_FUN_1800c3030(pvVar5);
          puVar8 = puVar7;
        }
        *param_4 = *(longlong *)(puVar8 + 0x38);
        param_4[1] = *(longlong *)(puVar8 + 0x40);
        param_4[2] = *(longlong *)(puVar8 + 0x48);
        *(undefined8 *)(puVar8 + 0x38) = 0;
        *(undefined8 *)(puVar8 + 0x40) = 0;
        *(undefined8 *)(puVar8 + 0x48) = 0;
      }
      uVar3 = 1;
      goto LAB_18002db46;
    }
  }
  puVar8 = auStackY_78;
  uVar3 = 0;
LAB_18002db46:
  pvVar4 = *(LPVOID *)(puVar8 + 0x38);
  if (pvVar4 != (LPVOID)0x0) {
    if (0xfff < (ulonglong)(*(longlong *)(puVar8 + 0x48) - (longlong)pvVar4)) {
      pvVar5 = *(LPVOID *)((longlong)pvVar4 + -8);
      if ((ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar5)) < 0x20) {
        *(undefined8 *)(puVar8 + -8) = 0x18002db7b;
        thunk_FUN_1800c3030(pvVar5);
        return uVar3;
      }
      pcVar1 = (code *)swi(0x29);
      pvVar4 = (LPVOID)(*pcVar1)(5);
      puVar8 = puVar8 + 8;
    }
    *(undefined8 *)(puVar8 + -8) = 0x18002db96;
    thunk_FUN_1800c3030(pvVar4);
  }
  return uVar3;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18002dbb0(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  errno_t eVar8;
  int iVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  wchar_t *_Filename;
  size_t sVar12;
  longlong *plVar13;
  LPVOID pvVar14;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  undefined4 *local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  FILE *local_138;
  longlong local_130 [2];
  LPVOID local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulonglong local_108;
  char local_f8 [160];
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStack_188;
  if (((DAT_180115860 == 0) && (DAT_180114390 != (longlong *)0x0)) && (DAT_180115c08 == '\0')) {
    DAT_180115c08 = '\x01';
    puVar10 = FUN_180002040((ulonglong *)&local_120,&DAT_180112190,
                            (undefined1 (*) [32])L"\\robrun_skins.png");
    uVar11 = FUN_18002da60(DAT_180114390,puVar10,0x180115860,(longlong *)0x0);
    if (7 < local_108) {
      pvVar14 = local_120;
      if ((0xfff < local_108 * 2 + 2) &&
         (pvVar14 = *(LPVOID *)((longlong)local_120 + -8),
         0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)pvVar14)))) goto LAB_18002defc;
      thunk_FUN_1800c3030(pvVar14);
    }
    if ((char)uVar11 != '\0') {
      DAT_180115988 = DAT_180115860;
      DAT_180115990 = (float)DAT_180115868;
      DAT_180115994 = (float)DAT_18011586c;
      local_138 = (FILE *)0x0;
      _Filename = (wchar_t *)
                  FUN_180002040((ulonglong *)&local_120,&DAT_180112190,
                                (undefined1 (*) [32])L"\\robrun_skins.idx");
      if (7 < *(ulonglong *)(_Filename + 0xc)) {
        _Filename = *(wchar_t **)_Filename;
      }
      eVar8 = _wfopen_s(&local_138,_Filename,L"r");
      if ((eVar8 == 0) && (local_138 != (FILE *)0x0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (7 < local_108) {
        pvVar14 = local_120;
        if ((0xfff < local_108 * 2 + 2) &&
           (pvVar14 = *(LPVOID *)((longlong)local_120 + -8),
           0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)pvVar14)))) {
LAB_18002defc:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        thunk_FUN_1800c3030(pvVar14);
      }
      if (!bVar3) {
        local_150 = &local_144;
        local_158 = &local_140;
        local_160 = &local_13c;
        local_168 = &local_148;
        iVar9 = FUN_180049170((longlong)local_138,0x1800dec58,local_f8,0xa0);
        uVar4 = local_148;
        uVar5 = local_144;
        uVar6 = local_140;
        uVar7 = local_13c;
        while (iVar9 == 5) {
          local_120 = (LPVOID)0x0;
          uStack_118 = 0;
          local_110 = 0;
          local_108 = 0;
          local_148 = uVar4;
          local_144 = uVar5;
          local_140 = uVar6;
          local_13c = uVar7;
          sVar12 = strlen(local_f8);
          FUN_1800028f0(&local_120,(undefined8 *)local_f8,sVar12);
          plVar13 = FUN_180006710((float *)&DAT_1801120b0,local_130,&local_120);
          lVar1 = *plVar13;
          *(undefined4 *)(lVar1 + 0x30) = uVar4;
          *(undefined4 *)(lVar1 + 0x34) = uVar7;
          *(undefined4 *)(lVar1 + 0x38) = uVar6;
          *(undefined4 *)(lVar1 + 0x3c) = uVar5;
          if (0xf < local_108) {
            pvVar14 = local_120;
            if ((0xfff < local_108 + 1) &&
               (pvVar14 = *(LPVOID *)((longlong)local_120 + -8),
               0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)pvVar14))))
            goto LAB_18002defc;
            thunk_FUN_1800c3030(pvVar14);
          }
          local_150 = &local_144;
          local_158 = &local_140;
          local_160 = &local_13c;
          local_168 = &local_148;
          iVar9 = FUN_180049170((longlong)local_138,0x1800dec58,local_f8,0xa0);
          uVar4 = local_148;
          uVar5 = local_144;
          uVar6 = local_140;
          uVar7 = local_13c;
        }
        FUN_1800b1c20(local_138);
      }
    }
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_18002df10(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  HDC hdc;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStackY_148 [32];
  byte local_118 [8];
  undefined1 (*local_110) [32];
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  BITMAPINFO local_d8;
  ulonglong local_a8;

  local_a8 = DAT_180112300 ^ (ulonglong)auStackY_148;
  if ((((DAT_1801157d0 == 0) || (DAT_1801157e8 != param_1)) || (DAT_1801157ec != param_2)) ||
     (DAT_1801143a8 == 0)) {
    uVar3 = FUN_18001fab0();
    if (((param_1 < 1) || (param_2 < 1)) || (DAT_180114390 == (longlong *)0x0)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      local_f4 = 1;
      local_e4 = 0;
      local_f8 = 0x1c;
      local_ec = 0x2000000000;
      local_100 = 1;
      local_fc = 1;
      local_108 = param_1;
      local_104 = param_2;
      iVar2 = (**(code **)(*DAT_180114390 + 0x28))(DAT_180114390,&local_108,0,&DAT_1801157d0);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*DAT_180114390 + 0x48))(DAT_180114390,DAT_1801157d0,0,&DAT_1801143a8);
      }
      local_ec = 3;
      puVar5 = &DAT_1801157d8;
      local_e4 = CONCAT44(local_e4._4_4_,0x20000);
      do {
        if (-1 < iVar2) {
          iVar2 = (**(code **)(*DAT_180114390 + 0x28))(DAT_180114390,&local_108,0,puVar5);
        }
        puVar5 = puVar5 + 1;
      } while ((int *)puVar5 != &DAT_1801157e8);
      DAT_1801121b0 = iVar2;
      if (-1 < iVar2) {
        local_d8.bmiHeader.biClrUsed = 0;
        local_d8.bmiHeader.biClrImportant = 0;
        local_d8.bmiHeader.biHeight = -param_2;
        local_d8.bmiColors[0].rgbBlue = '\0';
        local_d8.bmiColors[0].rgbGreen = '\0';
        local_d8.bmiColors[0].rgbRed = '\0';
        local_d8.bmiColors[0].rgbReserved = '\0';
        local_d8.bmiHeader.biSize = 0x28;
        local_d8.bmiHeader.biCompression = 0;
        local_d8.bmiHeader.biSizeImage = 0;
        local_d8.bmiHeader.biXPelsPerMeter = 0;
        local_d8.bmiHeader.biYPelsPerMeter = 0;
        local_d8.bmiHeader.biPlanes = 1;
        local_d8.bmiHeader.biBitCount = 0x20;
        local_d8.bmiHeader.biWidth = param_1;
        hdc = GetDC((HWND)0x0);
        DAT_1801157f8 = CreateCompatibleDC(hdc);
        ReleaseDC((HWND)0x0,hdc);
        local_110 = (undefined1 (*) [32])0x0;
        DAT_180115800 = CreateDIBSection(DAT_1801157f8,&local_d8,0,&local_110,(HANDLE)0x0,0);
        if ((DAT_180115800 != (HBITMAP)0x0) && (local_110 != (undefined1 (*) [32])0x0)) {
          SelectObject(DAT_1801157f8,DAT_180115800);
          uVar3 = (longlong)param_2 * (longlong)param_1;
          DAT_180115808 = local_110;
          FUN_1800d22d0(local_110,0,uVar3 * 4);
          local_118[0] = 0xff;
          DAT_1801157e8 = param_1;
          DAT_1801157ec = param_2;
          FUN_180011f10((ulonglong *)&DAT_180112ee0,uVar3,local_118);
          uVar6 = 0;
          fVar10 = DAT_180112008 * 18.0;
          do {
            uVar4 = 0;
            fVar11 = (float)(int)uVar6 + 0.5;
            do {
              fVar7 = (float)(int)uVar4 + 0.5;
              if (fVar10 <= fVar7) {
                fVar9 = (float)param_1 - fVar10;
                if (fVar7 <= (float)param_1 - fVar10) {
                  fVar9 = fVar7;
                }
              }
              else {
                fVar9 = fVar10;
              }
              if (fVar10 <= fVar11) {
                fVar8 = (float)param_2 - fVar10;
                if (fVar11 <= (float)param_2 - fVar10) {
                  fVar8 = fVar11;
                }
              }
              else {
                fVar8 = fVar10;
              }
              fVar7 = (fVar11 - fVar8) * (fVar11 - fVar8) + (fVar7 - fVar9) * (fVar7 - fVar9);
              if (fVar7 < 0.0) {
                fVar7 = FUN_1800bd400(fVar7);
              }
              else {
                fVar7 = SQRT(fVar7);
              }
              lVar1 = DAT_180112ee0;
              fVar7 = fVar7 - fVar10;
              if (-0.5 < fVar7) {
                if (fVar7 < 0.5) {
                  fVar7 = 0.5 - fVar7;
                }
                else {
                  fVar7 = 0.0;
                }
              }
              else {
                fVar7 = 1.0;
              }
              uVar3 = (ulonglong)uVar4;
              uVar4 = uVar4 + 1;
              *(char *)(uVar3 + (longlong)param_1 * (ulonglong)uVar6 + DAT_180112ee0) =
                   (char)(int)(fVar7 * 255.0 + 0.5);
            } while ((int)uVar4 < param_1);
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < param_2);
          return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        }
      }
      uVar3 = FUN_18001fab0();
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
  }
  else {
    uVar3 = CONCAT71((int7)(local_a8 >> 8),1);
  }
  return uVar3;
}


ulonglong FUN_18002e340(ulonglong param_1,uint param_2,float param_3)

{
  uint uVar1;
  undefined4 extraout_var;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;

  if (param_3 <= 0.0) {
    return param_1 & 0xffffffff;
  }
  if (1.0 <= param_3) {
    return (ulonglong)param_2;
  }
  FUN_1800521a0(&local_48,param_1 & 0xffffffff);
  FUN_1800521a0(&local_38,(ulonglong)param_2);
  local_28 = (local_38 - local_48) * param_3 + local_48;
  local_24 = (local_34 - local_44) * param_3 + local_44;
  local_20 = (local_30 - local_40) * param_3 + local_40;
  local_1c = (local_2c - local_3c) * param_3 + local_3c;
  uVar1 = FUN_180051e70(&local_28);
  return CONCAT44(extraout_var,uVar1);
}


void FUN_18002e420(longlong param_1)

{
  uint uVar1;

  FUN_18002d0b0();
  FUN_18002cd50();
  if (*(undefined1 **)(param_1 + 0x948) != (undefined1 *)0x0) {
    DAT_1801159d0 = **(undefined1 **)(param_1 + 0x948);
  }
  if (*(undefined1 **)(param_1 + 0x958) != (undefined1 *)0x0) {
    DAT_180112114 = **(undefined1 **)(param_1 + 0x958);
  }
  if (*(undefined1 **)(param_1 + 0x988) != (undefined1 *)0x0) {
    DAT_180112115 = **(undefined1 **)(param_1 + 0x988);
  }
  if (*(undefined1 **)(param_1 + 0x3d0) != (undefined1 *)0x0) {
    DAT_1801159d1 = **(undefined1 **)(param_1 + 0x3d0);
  }
  if (*(uint **)(param_1 + 0x968) != (uint *)0x0) {
    uVar1 = **(uint **)(param_1 + 0x968);
    DAT_1801120f0 = 1;
    if (uVar1 < 3) {
      DAT_1801120f0 = uVar1;
    }
  }
  if ((*(int **)(param_1 + 0x970) != (int *)0x0) &&
     (DAT_1801159c0 = **(int **)(param_1 + 0x970), DAT_1801159c0 < 0)) {
    DAT_1801159c0 = 0;
    if (*(int **)(param_1 + 0x960) != (int *)0x0) {
      DAT_1801159c0 = **(int **)(param_1 + 0x960);
    }
  }
  if (*(undefined4 **)(param_1 + 0x978) != (undefined4 *)0x0) {
    DAT_180112100 = **(undefined4 **)(param_1 + 0x978);
  }
  if ((*(longlong *)(param_1 + 0x968) != 0) &&
     (DAT_1801120f4 = *(uint *)(*(longlong *)(param_1 + 0x968) + 4), 2 < DAT_1801120f4)) {
    if ((*(int **)(param_1 + 0x950) == (int *)0x0) || (**(int **)(param_1 + 0x950) != 1)) {
      DAT_1801120f4 = 0;
    }
    else {
      DAT_1801120f4 = 1;
    }
  }
  if ((*(longlong *)(param_1 + 0x970) != 0) &&
     (DAT_1801159c4 = *(int *)(*(longlong *)(param_1 + 0x970) + 4), DAT_1801159c4 < 0)) {
    DAT_1801159c4 = 0;
    if (*(int **)(param_1 + 0x960) != (int *)0x0) {
      DAT_1801159c4 = **(int **)(param_1 + 0x960);
    }
  }
  if (*(longlong *)(param_1 + 0x978) != 0) {
    DAT_180112104 = *(undefined4 *)(*(longlong *)(param_1 + 0x978) + 4);
  }
  if ((*(longlong *)(param_1 + 0x968) != 0) &&
     (DAT_1801120f8 = *(uint *)(*(longlong *)(param_1 + 0x968) + 8), 2 < DAT_1801120f8)) {
    if ((*(int **)(param_1 + 0x950) == (int *)0x0) || (**(int **)(param_1 + 0x950) != 1)) {
      DAT_1801120f8 = 0;
    }
    else {
      DAT_1801120f8 = 1;
    }
  }
  if ((*(longlong *)(param_1 + 0x970) != 0) &&
     (DAT_1801159c8 = *(int *)(*(longlong *)(param_1 + 0x970) + 8), DAT_1801159c8 < 0)) {
    DAT_1801159c8 = 0;
    if (*(int **)(param_1 + 0x960) != (int *)0x0) {
      DAT_1801159c8 = **(int **)(param_1 + 0x960);
    }
  }
  if (*(longlong *)(param_1 + 0x978) != 0) {
    DAT_180112108 = *(undefined4 *)(*(longlong *)(param_1 + 0x978) + 8);
  }
  if ((*(longlong *)(param_1 + 0x968) != 0) &&
     (DAT_1801120fc = *(uint *)(*(longlong *)(param_1 + 0x968) + 0xc), 2 < DAT_1801120fc)) {
    DAT_1801120fc = 0;
  }
  if ((*(longlong *)(param_1 + 0x970) != 0) &&
     (DAT_1801159cc = *(int *)(*(longlong *)(param_1 + 0x970) + 0xc), DAT_1801159cc < 0)) {
    DAT_1801159cc = 0;
    if (*(int **)(param_1 + 0x960) != (int *)0x0) {
      DAT_1801159cc = **(int **)(param_1 + 0x960);
    }
  }
  if (*(longlong *)(param_1 + 0x978) != 0) {
    DAT_18011210c = *(undefined4 *)(*(longlong *)(param_1 + 0x978) + 0xc);
  }
  if (*(undefined4 **)(param_1 + 0x980) != (undefined4 *)0x0) {
    DAT_180112110 = **(undefined4 **)(param_1 + 0x980);
  }
  return;
}


longlong FUN_18002e640(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;

  lVar1 = FUN_180011740(param_1,3,param_2);
  FUN_180009f70((longlong *)(lVar1 + 0x40),param_3);
  *(undefined4 *)(lVar1 + 0x3c) = param_4;
  FUN_180009380(param_3);
  return lVar1;
}


undefined1 (*) [32] FUN_18002e6a0(undefined1 (*param_1) [32],LPCWSTR param_2)

{
  int cbMultiByte;
  undefined1 (*lpMultiByteStr) [32];
  int iVar1;
  LPCWSTR lpWideCharStr;

  lpWideCharStr = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    lpWideCharStr = *(LPCWSTR *)param_2;
  }
  cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  iVar1 = cbMultiByte + -1;
  if (cbMultiByte < 1) {
    iVar1 = 0;
  }
  FUN_1800080c0(param_1,(longlong)iVar1,0);
  if (0 < cbMultiByte) {
    if (*(ulonglong *)(*param_1 + 0x18) < 0x10) {
      lpMultiByteStr = param_1;
    }
    else {
      lpMultiByteStr = *(undefined1 (**) [32])*param_1;
    }
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      param_2 = *(LPCWSTR *)param_2;
    }
    WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
  }
  return param_1;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8
FUN_18002e750(longlong param_1,char *param_2,byte *param_3,float param_4,float param_5,uint param_6,
             char *param_7,char param_8)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStackY_178 [32];
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined4 local_128;
  float local_124;
  byte local_118 [64];
  byte local_d8 [64];
  ulonglong local_98;

  local_98 = DAT_180112300 ^ (ulonglong)auStackY_178;
  local_124 = param_5;
  local_130 = 26.0;
  local_128 = 0x43360000;
  piVar1 = *(int **)(param_1 + 0x1108);
  local_12c = param_4;
  uVar2 = FUN_18002b220((longlong)(param_1 + 0x1108),param_2,param_3,&local_130);
  if (param_8 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f800000;
  }
  uVar7 = FUN_180043120((float *)(param_1 + 0x1118),(uint)uVar2 ^ 0xac71,(ulonglong)uVar8);
  fVar5 = (float)uVar7;
  if ((char)((ulonglong)uVar2 >> 0x20) == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f800000;
  }
  uVar7 = FUN_180043120((float *)(param_1 + 0x1118),(uint)uVar2,(ulonglong)uVar8);
  fVar6 = (float)uVar7;
  if (((0.01 < fVar6) && (fVar5 < 0.99)) && (0.0 < param_5)) {
    local_138 = DAT_180112008 * 208.0;
    local_130 = DAT_180112008 * 26.0;
    local_134 = (param_5 + param_4) * DAT_180112008;
    local_12c = param_4 * DAT_180112008;
    FUN_180071360(piVar1,&local_130,&local_138,(int)((1.0 - fVar5) * fVar6 * 9.0) << 0x18 | 0xffffff
                  ,DAT_180112008 * 13.0,0);
  }
  if (0.01 < fVar5) {
    if (0.0 <= fVar5) {
      fVar10 = 1.0;
      if (fVar5 <= 1.0) {
        fVar10 = fVar5;
      }
    }
    else {
      fVar10 = 0.0;
    }
    if (0.0 < param_5) {
      local_130 = DAT_180112008 * 208.0;
      local_138 = DAT_180112008 * 26.0;
      local_12c = (param_5 + param_4) * DAT_180112008;
      local_134 = param_4 * DAT_180112008;
      FUN_180071360(piVar1,&local_138,&local_130,
                    (int)((float)(DAT_18011200c >> 0x18) * fVar10 + 0.5) << 0x18 |
                    DAT_18011200c & 0xffffff,DAT_180112008 * 13.0,0);
    }
  }
  fVar11 = param_5 * 0.5 + param_4;
  fVar10 = fVar11 - 17.0;
  uVar3 = FUN_18002e340((ulonglong)DAT_18011200c,0xffffffff,0.2);
  uVar3 = FUN_18002e340(0xff31221b,(uint)uVar3,fVar5);
  local_130 = DAT_180112008 * 70.0;
  local_138 = DAT_180112008 * 36.0;
  local_12c = (fVar10 + 34.0) * DAT_180112008;
  local_134 = fVar10 * DAT_180112008;
  FUN_180071360(piVar1,&local_138,&local_130,(uint)uVar3,DAT_180112008 * 11.0,0);
  uVar3 = FUN_18002e340(0xffe8d3c9,DAT_180112014,fVar5);
  FUN_180023a40(piVar1,*(int **)(*(longlong *)(param_1 + 0x1110) + 0x70),param_6,53.0,fVar10 + 17.0,
                (float)uVar3);
  FUN_180048930(param_7,local_118,0x40);
  fVar9 = 1.25;
  fVar10 = FUN_180042fa0(*(longlong *)(*(longlong *)(param_1 + 0x1110) + 0x18),local_118,1.25);
  if (116.0 < fVar10) {
    fVar9 = 0.4;
  }
  fVar10 = FUN_180042fa0(*(longlong *)(*(longlong *)(param_1 + 0x1110) + 0x18),local_118,fVar9);
  if (fVar10 <= 116.0) {
    pbVar4 = local_118;
  }
  else {
    fVar9 = 0.0;
    pbVar4 = FUN_180028b30(*(int **)(*(longlong *)(param_1 + 0x1110) + 0x18),local_118,116.0,
                           local_d8,0x40);
  }
  uVar8 = DAT_180112014;
  uVar3 = FUN_18002e340(0xffbca498,0xfffaf2ee,fVar6);
  uVar3 = FUN_18002e340(uVar3 & 0xffffffff,uVar8,fVar5);
  FUN_180042d40(piVar1,*(int **)(*(longlong *)(param_1 + 0x1110) + 0x18),82.0,fVar11,(float)uVar3,
                pbVar4,fVar9);
  return uVar2;
}


void FUN_18002ec10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;

  if ((longlong *)(param_1 + 0x1360) != param_2) {
    if ((ulonglong)param_2[3] < 0x10) {
      plVar1 = param_2;
    }
    else {
      plVar1 = (longlong *)*param_2;
    }
    FUN_180002370((longlong *)(param_1 + 0x1360),plVar1,param_2[2]);
  }
  *(undefined4 *)(param_1 + 0x1380) = 0x40266666;
  return;
}


double FUN_18002ec50(void)

{
  LARGE_INTEGER local_res8 [4];

  QueryPerformanceCounter(local_res8);
  if (DAT_1801157a0 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1801157a0);
  }
  return ((double)local_res8[0].QuadPart * 1000.0) / (double)DAT_1801157a0;
}


undefined8 FUN_18002ecb0(uint param_1)

{
  undefined8 uVar1;

  if (param_1 < 0xe0ad) {
    if (param_1 == 0xe0ac) {
      return 0xf05b;
    }
    uVar1 = 0xf0e7;
    if (param_1 == 0xe038) {
      uVar1 = 0xe473;
    }
    return uVar1;
  }
  if (param_1 < 0xe1de) {
    if (param_1 == 0xe1dd) {
      return 0xf53f;
    }
    switch(param_1) {
    case 0xe0ba:
      return 0xf06e;
    case 0xe0d7:
      return 0xf07b;
    case 0xe0e8:
      return 0xf279;
    case 0xe110:
    case 0xe111:
      return 0xf5a0;
    case 0xe11d:
      return 0xf625;
    case 0xe121:
      return 0xf047;
    case 0xe148:
      return 0xf2ea;
    case 0xe154:
      return 0xf013;
    case 0xe178:
      return 0xf185;
    case 0xe1a4:
      return 0xf0c0;
    }
  }
  else {
    if (param_1 == 0xe29a) {
      return 0xf013;
    }
    if (param_1 == 0xe2b4) {
      return 0xe19b;
    }
    if (param_1 == 0xe2ff) {
      return 0xf1e2;
    }
    if (param_1 == 0xe412) {
      return 0xf1de;
    }
    if (param_1 == 0xe497) {
      return 0xf7c0;
    }
  }
  return 0xf0e7;
}


undefined8 FUN_18002eeb0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  if (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 1U) {
    FUN_180011150(param_1 + 0x18,1);
  }
  uVar4 = *(longlong *)(param_1 + 0x28) - 1;
  *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x30) & uVar4;
  uVar5 = *(longlong *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30);
  uVar4 = uVar4 & uVar5;
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) == 0) {
    uVar2 = FUN_1800a5010(0x38);
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) = uVar2;
  }
  puVar1 = *(undefined8 **)
            (*(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x28) - 1U & uVar5) * 8);
  puVar1[2] = 0;
  puVar1[1] = 0xe44f;
  *puVar1 = &DAT_1800d8c40;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar3 = (undefined8 *)FUN_1800a5010(0x10);
  puVar3[1] = 0;
  puVar1[2] = puVar3;
  *puVar3 = puVar1 + 2;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  **(undefined8 **)
    (*(longlong *)(param_1 + 0x20) +
    (*(longlong *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30) + -1 &
    *(longlong *)(param_1 + 0x28) - 1U) * 8) = param_2;
  *(undefined4 *)
   (*(longlong *)
     (*(longlong *)(param_1 + 0x20) +
     (*(longlong *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30) + -1 &
     *(longlong *)(param_1 + 0x28) - 1U) * 8) + 8) = param_3;
  return *(undefined8 *)
          (*(longlong *)(param_1 + 0x20) +
          (*(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x38) + -1 &
          *(longlong *)(param_1 + 0x28) - 1U) * 8);
}


ulonglong FUN_18002efe0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  iVar1 = *(int *)(param_1 + 0x11d8);
  uVar3 = (ulonglong)iVar1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x20))) {
    iVar1 = *(int *)(param_1 + 0x11dc + uVar3 * 4);
    if (-1 < iVar1) {
      uVar4 = uVar3 + *(longlong *)(param_1 + 0x18);
      uVar3 = *(ulonglong *)(param_1 + 8);
      lVar2 = *(longlong *)(uVar3 + (uVar4 & *(longlong *)(param_1 + 0x10) - 1U) * 8);
      if (iVar1 < *(int *)(lVar2 + 0x38)) {
        lVar2 = *(longlong *)
                 (*(longlong *)(lVar2 + 0x20) +
                 (*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 & *(longlong *)(lVar2 + 0x28) - 1U)
                 * 8);
        uVar3 = 0;
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          uVar5 = *(ulonglong *)(lVar2 + 0x28);
          uVar4 = *(longlong *)(lVar2 + 0x30) + uVar5;
          do {
            uVar3 = *(ulonglong *)
                     (*(longlong *)(lVar2 + 0x18) + (*(longlong *)(lVar2 + 0x20) - 1U & uVar5) * 8);
            if (*(int *)(uVar3 + 0xc) == 3) {
              return CONCAT71((int7)(uVar3 >> 8),1);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar4);
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


undefined8 FUN_18002f070(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;

  lVar2 = 0;
  while (lVar3 = lVar2 + 1, *(char *)(param_1 + lVar2) == "Weapons"[lVar2]) {
    lVar2 = lVar3;
    if (lVar3 == 8) {
      return 1;
    }
  }
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    bVar4 = *(char *)(param_1 + lVar3) == (&DAT_1800da22c)[lVar3];
    if (!bVar4) goto LAB_18002f0c9;
    lVar2 = lVar3 + 1;
  } while (lVar3 + 1 != 5);
  bVar4 = *(char *)(param_1 + lVar3) == (&DAT_1800da22c)[lVar3];
LAB_18002f0c9:
  uVar1 = 0;
  if (bVar4) {
    uVar1 = 2;
  }
  return uVar1;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 * FUN_18002f0e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  LPVOID pvVar9;
  undefined1 auStackY_a8 [32];
  undefined8 ****local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  LPVOID local_48 [3];
  ulonglong local_30;
  ulonglong local_28;

  local_28 = DAT_180112300 ^ (ulonglong)auStackY_a8;
  puVar6 = FUN_180002040((ulonglong *)local_48,param_2,(undefined1 (*) [32])&DAT_1800d9010);
  if ((ulonglong)param_3[3] < 8) {
    puVar7 = param_3;
  }
  else {
    puVar7 = (undefined8 *)*param_3;
  }
  puVar7 = FUN_1800022e0(puVar6,puVar7,param_3[2]);
  local_68 = (undefined8 ****)*puVar7;
  uStack_60 = puVar7[1];
  lVar5 = puVar7[2];
  uStack_50 = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = 7;
  *(undefined2 *)puVar7 = 0;
  if (uStack_50 - lVar5 < 4) {
    local_58 = lVar5;
    ppppuVar8 = (undefined8 ****)FUN_180005490(&local_68,4,0,(undefined8 *)L".cfg",4);
  }
  else {
    local_58 = lVar5 + 4;
    ppppuVar8 = &local_68;
    if (7 < uStack_50) {
      ppppuVar8 = local_68;
    }
    *(undefined8 *)((longlong)ppppuVar8 + lVar5 * 2) = 0x6700660063002e;
    *(undefined2 *)((longlong)ppppuVar8 + (lVar5 + 4) * 2) = 0;
    ppppuVar8 = &local_68;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = *(undefined4 *)((longlong)ppppuVar8 + 4);
  uVar3 = *(undefined4 *)(ppppuVar8 + 1);
  uVar4 = *(undefined4 *)((longlong)ppppuVar8 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)ppppuVar8;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = *(undefined4 *)((longlong)ppppuVar8 + 0x14);
  uVar3 = *(undefined4 *)(ppppuVar8 + 3);
  uVar4 = *(undefined4 *)((longlong)ppppuVar8 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(ppppuVar8 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  ppppuVar8[2] = (undefined8 ***)0x0;
  ppppuVar8[3] = (undefined8 ***)0x7;
  *(undefined2 *)ppppuVar8 = 0;
  if (7 < uStack_50) {
    ppppuVar8 = local_68;
    if ((0xfff < uStack_50 * 2 + 2) &&
       (ppppuVar8 = (undefined8 ****)local_68[-1],
       0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar8)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      goto LAB_18002f2bb;
    }
    thunk_FUN_1800c3030(ppppuVar8);
  }
  local_58 = 0;
  uStack_50 = 7;
  local_68 = (undefined8 ****)((ulonglong)local_68 & 0xffffffffffff0000);
  if (7 < local_30) {
    pvVar9 = local_48[0];
    if ((0xfff < local_30 * 2 + 2) &&
       (pvVar9 = *(LPVOID *)((longlong)local_48[0] + -8),
       0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)pvVar9)))) {
LAB_18002f2bb:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      puVar7 = (undefined8 *)(*pcVar1)();
      return puVar7;
    }
    thunk_FUN_1800c3030(pvVar9);
  }
  return param_1;
}


ulonglong FUN_18002f2d0(undefined8 *param_1,float *param_2,float param_3,float param_4,uint param_5,
                       byte *param_6,byte *param_7)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;

  lVar3 = FUN_180056d70();
  fVar11 = *(float *)(lVar3 + 0xe0) / DAT_180112008;
  fVar13 = *(float *)(lVar3 + 0xe4) / DAT_180112008;
  pfVar4 = FUN_180071ff0(*(int **)(param_1[1] + 0x48),&local_res8,
                         (float)(*(int **)(param_1[1] + 0x48))[5],3.4028235e+38,0.0,param_6,
                         (byte *)0x0,(undefined8 *)0x0);
  if (param_5 == 0) {
    fVar8 = 22.0;
  }
  else {
    fVar8 = 34.0;
  }
  fVar8 = fVar8 + *pfVar4 / DAT_180112008;
  fVar10 = param_3 + 2.0;
  fVar7 = param_4 - 4.0;
  fVar9 = *param_2 - fVar8;
  if (((((*(char *)(param_1 + 0xb) != '\0') || (param_1[0xc] != 0)) || (param_1[0x11] != 0)) ||
      ((param_1[0x15] != 0 || (fVar11 < fVar9)))) ||
     ((fVar13 < fVar10 || ((fVar8 + fVar9 <= fVar11 || (fVar10 + fVar7 <= fVar13)))))) {
    bVar1 = false;
    uVar12 = 0;
  }
  else {
    bVar1 = true;
    uVar12 = 0x3f800000;
  }
  local_b8 = fVar9;
  local_b4 = fVar10;
  local_b0 = fVar8;
  local_ac = fVar7;
  uVar2 = FUN_180056a20(param_7);
  uVar6 = FUN_180043120((float *)(param_1 + 2),uVar2,(ulonglong)uVar12);
  uVar5 = FUN_18002e340(0xff271b16,0xff33241d,(float)uVar6);
  if ((0.0 < fVar8) && (0.0 < fVar7)) {
    local_res14 = fVar10 * DAT_180112008;
    local_res8 = (fVar8 + fVar9) * DAT_180112008;
    local_resc = (fVar10 + fVar7) * DAT_180112008;
    local_res10 = fVar9 * DAT_180112008;
    FUN_180071360((int *)*param_1,&local_res10,&local_res8,(uint)uVar5,fVar7 * 0.5 * DAT_180112008,0
                 );
  }
  uVar5 = FUN_18002e340(0xdffffff,
                        (int)((float)(DAT_18011200c >> 0x18) * 0.6 + 0.5) << 0x18 |
                        DAT_18011200c & 0xffffff,(float)uVar6);
  fVar7 = fVar7 * 0.5;
  FUN_1800422b0((int *)*param_1,&local_b8,(uint)uVar5,fVar7,1.0);
  fVar11 = fVar9 + 11.0;
  if (param_5 != 0) {
    fVar13 = -NAN;
    if (bVar1) {
      fVar13 = DAT_180112010;
    }
    FUN_180023a40((int *)*param_1,*(int **)(param_1[1] + 0x88),param_5,fVar11 + 5.0,fVar7 + fVar10,
                  fVar13);
    fVar11 = fVar11 + 15.0;
  }
  fVar13 = -NAN;
  if (bVar1) {
    fVar13 = -NAN;
  }
  uVar5 = FUN_180042c60((int *)*param_1,*(int **)(param_1[1] + 0x48),fVar11,fVar7 + fVar10,fVar13,
                        param_6,(byte *)0x0);
  *param_2 = fVar9 - 6.0;
  if ((bVar1) && (uVar5 = FUN_180059c10(0,'\0'), (char)uVar5 != '\0')) {
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
  return uVar5 & 0xffffffffffffff00;
}


int FUN_18002f690(int param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;

  iVar5 = 0;
  lVar1 = DAT_1801159a8 - DAT_1801159a0 >> 0x3f;
  lVar4 = (DAT_1801159a8 - DAT_1801159a0) / 0x48 + lVar1;
  if (lVar4 != lVar1) {
    uVar3 = 0;
    do {
      if (0x1f < uVar3) {
        return iVar5;
      }
      if ((*(char *)(DAT_1801159a0 + 0x40 + uVar3 * 0x48) == '\0') &&
         (((uint)(&DAT_180112100)[param_1] >> ((byte)uVar3 & 0x1f) & 1) != 0)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
      iVar5 = iVar5 + iVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)(lVar4 - lVar1));
  }
  return iVar5;
}


void FUN_18002f710(int *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  ulonglong uVar10;
  float *pfVar11;
  ulonglong uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res8 [4];
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;

  puVar2 = *(undefined8 **)(param_1 + 0x2a);
  if (puVar2 != (undefined8 *)0x0) {
    fVar21 = 44.0;
    if (puVar2[7] != 0) {
      uVar10 = puVar2[6];
      param_4 = puVar2[7] + uVar10;
      do {
        piVar9 = *(int **)(puVar2[4] + (puVar2[5] - 1 & uVar10) * 8);
        if ((char)piVar9[0x23] == '\0') {
          iVar1 = *piVar9;
          if (iVar1 == 1) {
            fVar14 = 70.0;
          }
          else if (iVar1 == 6) {
            fVar14 = 64.0;
          }
          else {
            fVar14 = 46.0;
          }
          fVar21 = fVar21 + fVar14;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_4);
    }
    iVar1 = param_1[0x31];
    *(undefined1 *)(param_1 + 0x31) = 0;
    local_108 = 290.0;
    local_10c = (float)param_1[0x2d] + (float)param_1[0x2f] + 8.0;
    local_110 = ((float)param_1[0x2e] + (float)param_1[0x2c] + 8.0) - 290.0;
    if (612.0 < local_10c + fVar21) {
      local_10c = ((float)param_1[0x2d] - fVar21) - 8.0;
    }
    local_104 = fVar21;
    FUN_180028cb0(&local_110,8.0,8.0);
    fVar14 = local_104;
    if ((char)iVar1 != '\0') {
      param_1[0x32] = 0;
    }
    fVar15 = FUN_1800ba000(0.0,fVar21 - local_104);
    fVar19 = local_108;
    fVar22 = local_10c;
    fVar24 = local_110;
    if (0.0 < fVar15) {
      lVar5 = FUN_180056d70();
      fVar18 = *(float *)(lVar5 + 0xe4) / DAT_180112008;
      lVar5 = FUN_180056d70();
      fVar17 = *(float *)(lVar5 + 0xe0) / DAT_180112008;
      if ((((fVar24 <= fVar17) && (fVar22 <= fVar18)) && (fVar17 < fVar24 + fVar19)) &&
         (((fVar18 < fVar14 + fVar22 && (*(longlong *)(param_1 + 0x18) == 0)) &&
          (*(longlong *)(param_1 + 0x22) == 0)))) {
        lVar5 = FUN_180056d70();
        param_1[0x32] = (int)((float)param_1[0x32] - *(float *)(lVar5 + 0xf0) * 40.0);
      }
    }
    fVar17 = FUN_1800ba000(0.0,(float)param_1[0x32]);
    local_res8[2] = FUN_1800ba070(fVar15,fVar17);
    param_1[0x32] = (int)local_res8[2];
    if (fVar15 <= 0.0) {
      local_res8[2] = 0.0;
    }
    cVar4 = FUN_180059aa0(0x20e,0);
    if (((cVar4 == '\0') || (*(longlong *)(param_1 + 0x18) != 0)) ||
       (*(longlong *)(param_1 + 0x22) != 0)) {
      uVar16 = FUN_180043120((float *)(param_1 + 4),param_1[0x30] ^ 0x70b0,0x3f800000);
      fVar17 = (float)uVar16;
      fVar22 = fVar22 - (1.0 - fVar17) * 4.0;
      local_10c = fVar22;
      FUN_18002ff50(*(int **)param_1,&local_110,fVar17);
      pfVar13 = local_res8;
      local_res8[0] = 0.0;
      local_res8[1] = 0.0;
      local_res18 = fVar24 * DAT_180112008;
      local_res1c = fVar22 * DAT_180112008;
      FUN_1800679a0((undefined8 *)&local_res18,1,(undefined8 *)pfVar13);
      local_res8[1] = fVar14 * DAT_180112008;
      local_res8[0] = fVar19 * DAT_180112008;
      FUN_180067a20((undefined8 *)local_res8,0);
      local_res8[0] = 0.0;
      local_res8[1] = 0.0;
      FUN_180062c90(2,local_res8,pfVar13,param_4);
      FUN_180062d80(4,0,pfVar13,param_4);
      FUN_180062d80(3,0,pfVar13,param_4);
      FUN_18004ca40((byte *)"##popover",(undefined1 *)0x0,0x311bf);
      uVar16 = *(undefined8 *)param_1;
      uVar6 = FUN_180057aa0();
      *(undefined8 *)param_1 = uVar6;
      if ((*(longlong *)(param_1 + 0x18) == 0) && (*(longlong *)(param_1 + 0x22) == 0)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      FUN_18004f6e0(cVar4);
      pfVar13 = (float *)0xf013;
      fVar19 = fVar22 + 6.0 + 17.0;
      local_res8[0] = fVar24 + 14.0;
      FUN_180023a40(*(int **)param_1,*(int **)(*(longlong *)(param_1 + 2) + 0x80),0xf013,
                    fVar24 + 14.0 + 6.0,fVar19,DAT_180112010);
      pbVar7 = (byte *)FUN_180043a40((char *)*puVar2);
      pfVar11 = *(float **)(*(longlong *)(param_1 + 2) + 0x20);
      FUN_180042c60(*(int **)param_1,(int *)pfVar11,local_res8[0] + 12.0 + 9.0,fVar19,-NAN,pbVar7,
                    (byte *)0x0);
      fVar19 = fVar24 + local_108;
      piVar9 = *(int **)param_1;
      FUN_18002ad90(piVar9,local_res8[0],fVar19 - 14.0,fVar22 + 6.0 + 34.0,0xbffffff);
      if (0.0 < fVar15) {
        pfVar13 = &local_res18;
        piVar9 = *(int **)param_1;
        pfVar11 = &local_res20;
        local_res18 = fVar19 * DAT_180112008;
        param_4 = CONCAT71((int7)(param_4 >> 8),1);
        local_res1c = (fVar22 + fVar14) * DAT_180112008;
        local_res24 = (fVar22 + 42.0) * DAT_180112008;
        local_res20 = fVar24 * DAT_180112008;
        FUN_180076360(piVar9,pfVar11,pfVar13,'\x01');
      }
      if (puVar2[7] != 0) {
        uVar12 = puVar2[6];
        fVar18 = fVar22 + 42.0;
        fVar23 = local_108 - 28.0;
        fVar19 = fVar14 + fVar22;
        fVar24 = local_res8[0];
        uVar10 = puVar2[7] + uVar12;
        fVar22 = (fVar22 + 42.0) - local_res8[2];
        local_res18 = fVar19;
        local_res20 = fVar18;
        do {
          piVar9 = (int *)(puVar2[5] - 1 & uVar12);
          pfVar11 = *(float **)(puVar2[4] + (longlong)piVar9 * 8);
          if (*(char *)(pfVar11 + 0x23) == '\0') {
            uVar8 = (int)*pfVar11 - 1;
            piVar9 = (int *)(ulonglong)uVar8;
            if (uVar8 == 0) {
              fVar20 = 70.0;
            }
            else if (uVar8 == 5) {
              fVar20 = 64.0;
            }
            else {
              fVar20 = 46.0;
            }
            if ((fVar15 <= 0.0) || ((fVar18 < fVar20 + fVar22 && (fVar22 < fVar19)))) {
              pfVar13 = &local_100;
              local_100 = fVar24;
              piVar9 = param_1;
              local_fc = fVar22;
              local_f8 = fVar23;
              local_f4 = fVar20;
              FUN_180027100((undefined8 *)param_1,(int *)pfVar11,pfVar13);
              fVar19 = local_res18;
              fVar18 = local_res20;
            }
            fVar22 = fVar22 + fVar20;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar10);
        fVar22 = local_10c;
        fVar24 = local_110;
      }
      if (0.0 < fVar15) {
        FUN_180076030(*(int **)param_1);
        fVar19 = (fVar14 - 42.0) - 8.0;
        local_f4 = FUN_1800ba000(24.0,((fVar14 - 42.0) * fVar19) / (fVar21 - 42.0));
        local_fc = (fVar19 - local_f4) * (local_res8[2] / fVar15) + fVar22 + 42.0 + 4.0;
        fVar21 = 0.0;
        if ((0.0 <= fVar17) && (fVar21 = 1.0, fVar17 <= 1.0)) {
          fVar21 = fVar17;
        }
        pfVar11 = &local_100;
        piVar9 = *(int **)param_1;
        local_f8 = 3.0;
        local_100 = (fVar24 + local_108) - 6.0;
        uVar8 = (int)(fVar21 * 60.0 + 0.5) << 0x18 | 0xffffff;
        pfVar13 = (float *)(ulonglong)uVar8;
        FUN_180028890(piVar9,pfVar11,uVar8,1.5,0);
      }
      FUN_180053a10();
      lVar5 = FUN_180056d70();
      fVar21 = *(float *)(lVar5 + 0xe0) / DAT_180112008;
      if ((((fVar21 < fVar24) ||
           (fVar19 = *(float *)(lVar5 + 0xe4) / DAT_180112008, fVar19 < fVar22)) ||
          (fVar24 + local_108 <= fVar21)) || (fVar14 + fVar22 <= fVar19)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      *(undefined8 *)param_1 = uVar16;
      FUN_180053370(piVar9,(wchar_t *)pfVar11,(undefined *)pfVar13,param_4);
      FUN_180062450(3);
      if ((char)iVar1 != '\0') {
        return;
      }
      uVar16 = FUN_180059c10(0,'\0');
      if ((char)uVar16 == '\0') {
        return;
      }
      if (bVar3) {
        return;
      }
      if (*(longlong *)(param_1 + 0x18) != 0) {
        return;
      }
      if (*(longlong *)(param_1 + 0x22) != 0) {
        return;
      }
    }
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  return;
}


void FUN_18002ff50(int *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;

  FUN_180040310(param_1,param_2,12.0,12.0,32.0,param_3 * 0.55);
  fVar2 = 1.0;
  if (param_3 <= 1.0) {
    fVar2 = param_3;
  }
  if (0.0 <= param_3) {
    fVar1 = fVar2;
  }
  else {
    fVar1 = 0.0;
  }
  FUN_180028890(param_1,param_2,(int)(fVar1 * 255.0 + 0.5) << 0x18 | 0x261a14,12.0,0);
  fVar1 = 0.0;
  if (0.0 <= param_3) {
    fVar1 = fVar2;
  }
  FUN_1800422b0(param_1,param_2,(int)(fVar1 * 18.0 + 0.5) << 0x18 | 0xffffff,12.0,1.0);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180030080(char param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_d8 [32];
  BLENDFUNCTION local_88 [2];
  POINT local_80;
  SIZE local_78;
  POINT local_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 *local_50;
  tagRECT local_48;
  ulonglong local_38;

  uVar10 = DAT_1801157f0;
  local_38 = DAT_180112300 ^ (ulonglong)auStackY_d8;
  if ((DAT_1801157d0 != 0) && (DAT_180115808 != 0)) {
    uVar5 = (ulonglong)(int)DAT_1801157f0;
    (**(code **)(*DAT_180114398 + 0x178))();
    DAT_1801157f0 = DAT_1801157f0 ^ 1;
    (&DAT_1801143b8)[uVar5] = 1;
    if ((param_1 == '\0') && ((&DAT_1801143b8)[uVar5 ^ 1] != '\0')) {
      uVar10 = uVar10 ^ 1;
    }
    local_68 = 0;
    uStack_60 = 0;
    puVar6 = &DAT_1801157d8 + (int)uVar10;
    local_50 = puVar6;
    iVar4 = (**(code **)(*DAT_180114398 + 0x70))(DAT_180114398,*puVar6,0);
    if (iVar4 == -0x7785fff6) {
      iVar4 = (**(code **)(*DAT_180114398 + 0x70))(DAT_180114398,*puVar6,0);
    }
    lVar3 = DAT_180115808;
    iVar2 = DAT_1801157ec;
    iVar1 = DAT_1801157e8;
    if (-1 < iVar4) {
      lVar7 = (longlong)DAT_1801157e8;
      uVar5 = 0;
      if (0 < DAT_1801157ec) {
        local_58 = DAT_180115808;
        do {
          uVar9 = 0;
          lVar11 = DAT_180112ee0 + uVar5 * lVar7;
          pbVar8 = (byte *)(uVar5 * (uStack_60 & 0xffffffff) + local_68);
          if (0 < iVar1) {
            do {
              uVar10 = ((uint)*(byte *)(lVar11 + uVar9) * (uint)pbVar8[3]) / 0xff;
              if (uVar10 == 0xff) {
                uVar10 = ((*pbVar8 | 0xffffff00) << 8 | (uint)pbVar8[1]) << 8 | (uint)pbVar8[2];
              }
              else {
                uVar10 = (((*pbVar8 * uVar10) / 0xff | uVar10 << 8) << 8 |
                         (pbVar8[1] * uVar10) / 0xff) << 8 | (pbVar8[2] * uVar10) / 0xff;
              }
              *(uint *)(lVar3 + uVar5 * lVar7 * 4 + uVar9 * 4) = uVar10;
              pbVar8 = pbVar8 + 4;
              uVar10 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar10;
            } while ((int)uVar10 < iVar1);
          }
          uVar10 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar10;
        } while ((int)uVar10 < iVar2);
        puVar6 = local_50;
      }
      (**(code **)(*DAT_180114398 + 0x78))(DAT_180114398,*puVar6,0);
      local_48.left = 0;
      local_48.top = 0;
      local_48.right = 0;
      local_48.bottom = 0;
      GetWindowRect(DAT_1801143b0,&local_48);
      local_70.x = local_48.left;
      local_70.y = local_48.top;
      local_80.x = 0;
      local_80.y = 0;
      local_78.cx = iVar1;
      local_78.cy = iVar2;
      local_88[0].BlendOp = '\0';
      local_88[0].BlendFlags = '\0';
      local_88[0].SourceConstantAlpha = 0xff;
      local_88[0].AlphaFormat = '\x01';
      UpdateLayeredWindow(DAT_1801143b0,(HDC)0x0,&local_70,&local_78,DAT_1801157f8,&local_80,0,
                          local_88,2);
    }
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Type propagation algorithm not settling

void FUN_1800303e0(longlong param_1,float *param_2,undefined8 param_3,float *param_4)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  char cVar12;
  char **ppcVar13;
  int **ppiVar14;
  int *piVar15;
  float *pfVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_2e8 [32];
  undefined8 local_298;
  float local_290;
  float local_28c;
  int *local_288;
  float local_280 [2];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  int **local_260;
  undefined8 local_258;
  undefined8 local_250;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_224;
  undefined8 local_220;
  undefined8 uStack_218;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  int *local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined4 local_1ec;
  int **local_1e8;
  float *local_1e0;
  int **local_1d8;
  int ***local_1d0;
  int **local_1c8;
  undefined8 *local_1c0;
  int **local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  char *local_198 [2];
  undefined8 local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  longlong local_148;
  int *local_140;
  undefined8 *local_138;
  int **local_130;
  float *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  longlong local_108;
  float local_100 [4];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;

  local_d0 = DAT_180112300 ^ (ulonglong)auStackY_2e8;
  fVar24 = 8.0;
  local_240 = param_2[2] - 12.0;
  local_248 = *param_2 + 6.0;
  local_288 = *(int **)(param_1 + 0x1108);
  local_244 = param_2[1] + 8.0 + 34.0;
  local_23c = ((param_2[3] - 8.0) - 34.0) - 6.0;
  local_224 = 10.0;
  local_148 = param_1;
  if ((0.0 < local_240) && (0.0 < local_23c)) {
    param_4 = (float *)0xff130d0a;
    local_278 = (int **)CONCAT44(local_244 * DAT_180112008,local_248 * DAT_180112008);
    local_298 = (int *)CONCAT44((local_244 + local_23c) * DAT_180112008,
                                (local_248 + local_240) * DAT_180112008);
    FUN_180071360(local_288,(float *)&local_278,(float *)&local_298,0xff130d0a,DAT_180112008 * 10.0,
                  0);
  }
  if (*(int *)(param_1 + 0x1444) - 2U < 2) {
    local_198[0] = FUN_180043a40("Vehicles");
    local_198[1] = FUN_180043a40("Robbery");
    fVar26 = param_2[1];
    ppcVar13 = local_198;
    do {
      piVar15 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x48);
      pfVar8 = FUN_180071ff0(piVar15,&local_290,(float)piVar15[5],3.4028235e+38,0.0,
                             (byte *)*ppcVar13,(byte *)0x0,(undefined8 *)0x0);
      ppcVar13 = ppcVar13 + 1;
      fVar24 = fVar24 + *pfVar8 / DAT_180112008 + 18.0;
    } while (ppcVar13 != (char **)&local_188);
    local_1ec = 0x41f00000;
    fVar27 = (fVar26 + 8.0 + 17.0) - 15.0;
    fVar26 = ((param_2[2] + *param_2) - 10.0) - fVar24;
    local_1f8 = fVar26;
    local_1f4 = fVar27;
    local_1f0 = fVar24;
    if (0.0 < fVar24) {
      param_4 = (float *)0xff130d0a;
      local_298 = (int *)CONCAT44((fVar27 + 30.0) * DAT_180112008,(fVar26 + fVar24) * DAT_180112008)
      ;
      local_278 = (int **)CONCAT44(fVar27 * DAT_180112008,fVar26 * DAT_180112008);
      FUN_180071360(local_288,(float *)&local_278,(float *)&local_298,0xff130d0a,
                    DAT_180112008 * 10.0,0);
    }
    FUN_1800422b0(local_288,&local_1f8,0xdffffff,10.0,1.0);
    fVar26 = fVar26 + 3.0;
    uVar9 = 0;
    do {
      uVar4 = 0;
      iVar17 = (int)uVar9;
      piVar15 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x48);
      pbVar11 = (byte *)local_198[uVar9];
      pfVar8 = FUN_180071ff0(piVar15,&local_1f8,(float)piVar15[5],3.4028235e+38,0.0,pbVar11,
                             (byte *)0x0,(undefined8 *)0x0);
      fVar25 = fVar27 + 3.0;
      fVar24 = *pfVar8 / DAT_180112008 + 18.0;
      if (fVar24 <= 0.0) {
        cVar3 = '\0';
        cVar12 = '\0';
      }
      else {
        FUN_180062940((char *)(param_1 + 0x1448 + uVar9));
        local_298 = (int *)CONCAT44(fVar25 * DAT_180112008,fVar26 * DAT_180112008);
        FUN_1800670f0(&local_298);
        fVar18 = FUN_1800ba000(1.0,DAT_180112008 * 24.0);
        fVar19 = FUN_1800ba000(1.0,fVar24 * DAT_180112008);
        pfVar16 = (float *)0x0;
        pfVar8 = (float *)&local_278;
        local_278 = (int **)CONCAT44(fVar18,fVar19);
        uVar9 = FUN_180099a80((byte *)"pvsub",pfVar8,0);
        cVar3 = (char)uVar9;
        uVar4 = FUN_180056db0();
        uVar9 = FUN_180059410(0,pfVar8,pfVar16,(ulonglong)param_4);
        FUN_1800593a0();
        FUN_180062210();
        cVar12 = '\0';
        if (*(char *)(param_1 + 0x1160) == '\0') {
          cVar12 = (char)uVar9;
        }
      }
      if (cVar3 != '\0') {
        *(int *)(param_1 + 0x1448) = iVar17;
      }
      if (*(int *)(param_1 + 0x1448) == iVar17) {
        uVar23 = 0x3f800000;
      }
      else {
        uVar23 = 0;
      }
      uVar21 = FUN_180043120((float *)(param_1 + 0x1118),uVar4 ^ 0x9a6e,(ulonglong)uVar23);
      fVar18 = (float)uVar21;
      if (cVar12 == '\0') {
        uVar23 = 0;
      }
      else {
        uVar23 = 0x3f800000;
      }
      uVar21 = FUN_180043120((float *)(param_1 + 0x1118),uVar4,(ulonglong)uVar23);
      fVar19 = (float)uVar21;
      if (0.01 < fVar18) {
        fVar22 = fVar18 * 0.22;
        if (0.0 <= fVar22) {
          fVar7 = 1.0;
          if (fVar22 <= 1.0) {
            fVar7 = fVar22;
          }
        }
        else {
          fVar7 = 0.0;
        }
        if (0.0 < fVar24) {
          local_22c = fVar25 * DAT_180112008;
          local_250._0_4_ = (fVar24 + fVar26) * DAT_180112008;
          local_250._4_4_ = (fVar25 + 24.0) * DAT_180112008;
          local_230 = fVar26 * DAT_180112008;
          FUN_180071360(local_288,&local_230,(float *)&local_250,
                        (int)((float)(DAT_18011200c >> 0x18) * fVar7 + 0.5) << 0x18 |
                        DAT_18011200c & 0xffffff,DAT_180112008 * 8.0,0);
        }
      }
      if (0.0 < fVar19) {
        if (fVar19 < 1.0) {
          FUN_1800521a0(&local_178,0xff7c6256);
          FUN_1800521a0((float *)&local_188,0xfffaf2ee);
          local_168 = ((float)local_188 - local_178) * fVar19 + local_178;
          local_164 = (local_188._4_4_ - local_174) * fVar19 + local_174;
          local_160 = (local_180 - local_170) * fVar19 + local_170;
          local_15c = (local_17c - local_16c) * fVar19 + local_16c;
          fVar19 = (float)FUN_180051e70(&local_168);
        }
        else {
          fVar19 = -NAN;
        }
      }
      else {
        fVar19 = -3.3547604e+38;
      }
      if (0.0 < fVar18) {
        if (fVar18 < 1.0) {
          FUN_1800521a0(&local_210,(ulonglong)(uint)fVar19);
          FUN_1800521a0(&local_158,0xfffaf2ee);
          local_270 = CONCAT44((local_154 - local_20c) * fVar18 + local_20c,
                               (local_158 - local_210) * fVar18 + local_210);
          local_268 = (float *)CONCAT44((local_14c - local_204) * fVar18 + local_204,
                                        (local_150 - local_208) * fVar18 + local_208);
          fVar19 = (float)FUN_180051e70((float *)&local_270);
        }
        else {
          fVar19 = -NAN;
        }
      }
      piVar2 = local_288;
      piVar15 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x48);
      uVar4 = FUN_1800ba150((uint)(((fVar25 + 12.0) - ((float)piVar15[5] / DAT_180112008) * 0.5) *
                                  DAT_180112008));
      local_290 = (float)FUN_1800ba150((uint)((fVar26 + 9.0) * DAT_180112008));
      param_4 = &local_290;
      local_28c = (float)uVar4;
      FUN_1800716c0(piVar2,piVar15,(float)piVar15[5],param_4,fVar19,pbVar11,(byte *)0x0,0.0,
                    (float *)0x0);
      uVar9 = (ulonglong)(iVar17 + 1U);
      fVar26 = fVar26 + fVar24 + 2.0;
    } while ((int)(iVar17 + 1U) < 2);
  }
  fVar24 = -NAN;
  local_290 = (local_248 + local_240) * DAT_180112008;
  local_28c = (local_244 + local_23c) * DAT_180112008;
  local_298 = (int *)CONCAT44(local_244 * DAT_180112008,local_248 * DAT_180112008);
  FUN_1800625b0((float *)&local_298,&local_290,'\x01');
  fVar26 = FUN_1800ba070((local_23c - 44.0) - 34.0,(local_240 - 90.0) + (local_240 - 90.0));
  fVar18 = fVar26 * 0.5;
  fVar27 = (float)FUN_1800ba150((uint)((local_240 - fVar18) * 0.5));
  fVar27 = fVar27 + local_248;
  fVar25 = (float)FUN_1800ba150((uint)((((local_23c - 44.0) - 34.0) - fVar26) * 0.5 + 44.0));
  fVar25 = fVar25 + local_244;
  if ((-1 < *(int *)(param_1 + 0x1444)) && (*(char *)(param_1 + 0x1160) == '\0')) {
    uVar21 = FUN_18002b220(param_1 + 0x1108,(char *)(param_1 + 0x1450),(byte *)"##pv3d",&local_248);
    lVar10 = FUN_180056d70();
    cVar12 = (char)((ulonglong)uVar21 >> 0x28);
    if (cVar12 != '\0') {
      *(float *)(param_1 + 0x1464) = *(float *)(param_1 + 0x1464) + *(float *)(lVar10 + 0xcc);
      *(float *)(param_1 + 0x1468) = *(float *)(param_1 + 0x1468) + *(float *)(lVar10 + 0xd0);
    }
    cVar3 = (char)((ulonglong)uVar21 >> 0x20);
    if (cVar3 != '\0') {
      if ((*(float *)(lVar10 + 0xf0) != 0.0) && (*(char *)(lVar10 + 0xfc) == '\0')) {
        *(float *)(param_1 + 0x146c) = *(float *)(lVar10 + 0xf0) + *(float *)(param_1 + 0x146c);
      }
      uVar21 = FUN_180059d10(0);
      if ((char)uVar21 != '\0') {
        *(undefined1 *)(param_1 + 0x1470) = 1;
      }
    }
    *(char *)(param_1 + 0x1471) = cVar12;
    *(char *)(param_1 + 0x1472) = cVar3;
  }
  uVar4 = 0xffffffff;
  if ((*(char *)(param_1 + 0x1460) == '\0') || (*(longlong *)(param_1 + 0x1450) == 0)) {
    uVar23 = DAT_18011200c >> 0x18;
    uVar5 = DAT_18011200c & 0xffffff;
    fVar19 = FUN_1800ba070(fVar26 * 0.62,local_240 * 0.5);
    FUN_18003f2b0(local_288,local_240 * 0.5 + local_248,fVar26 * 0.42 + fVar25,fVar19,
                  (int)((float)uVar23 * 0.09 + 0.5) << 0x18 | uVar5);
  }
  else {
    fVar19 = (float)FUN_1800ba150((uint)(local_244 * DAT_180112008));
    local_250._0_4_ = (float)FUN_1800ba150((uint)(local_248 * DAT_180112008));
    local_290 = 1.0;
    local_28c = 1.0;
    local_278 = (int **)CONCAT44(fVar19 + *(float *)(param_1 + 0x145c),
                                 (float)local_250 + *(float *)(param_1 + 0x1458));
    local_298 = (int *)0x0;
    local_250._4_4_ = fVar19;
    FUN_180070150(local_288,*(longlong *)(param_1 + 0x1450),(float *)&local_250,(float *)&local_278,
                  (float *)&local_298,&local_290,0xffffffff,DAT_180112008 * 10.0,0);
  }
  local_268 = &local_248;
  local_260 = &local_288;
  local_270 = param_1;
  if ((*(char *)(param_1 + 0x1440) == '\0') || (*(longlong *)(param_1 + 0x1430) == 0)) {
    if ((*(char *)(param_1 + 0x1460) == '\0') || (*(longlong *)(param_1 + 0x1450) == 0)) {
      if (0 < *(int *)(param_1 + 0x1444)) goto LAB_180032211;
      if ((*(longlong *)(param_1 + 0x848) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x848) + 0x14) != '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (*(longlong *)(param_1 + 0x1420) != 0) {
        fVar19 = (float)FUN_1800ba150((uint)((fVar18 + fVar25) * DAT_180112008 -
                                            *(float *)(param_1 + 0x142c) * 0.5));
        local_250._0_4_ =
             (float)FUN_1800ba150((uint)((fVar18 * 0.5 + fVar27) * DAT_180112008 -
                                        *(float *)(param_1 + 0x1428) * 0.5));
        local_290 = 1.0;
        iVar17 = 0x61;
        if (bVar1) {
          iVar17 = 0xff;
        }
        local_28c = 1.0;
        local_278 = (int **)CONCAT44(fVar19 + *(float *)(param_1 + 0x142c),
                                     (float)local_250 + *(float *)(param_1 + 0x1428));
        local_298 = (int *)0x0;
        local_250._4_4_ = fVar19;
        FUN_1800700b0(local_288,*(longlong *)(param_1 + 0x1420),&local_250,&local_278,&local_298,
                      (undefined8 *)&local_290,iVar17 << 0x18 | 0xffffff);
      }
      if (!bVar1) goto LAB_180032211;
      local_280[0] = (float)FUN_1800ba150((uint)(fVar18 * 0.1161 + fVar27));
      local_280[0] = local_280[0] - 4.0;
      local_238 = (float)FUN_1800ba150((uint)(fVar18 * 0.8839 + fVar27));
      local_238 = local_238 + 4.0;
      local_258._0_4_ = (float)FUN_1800ba150((uint)(fVar26 * 0.0589 + fVar25));
      local_258._0_4_ = (float)local_258 - 4.0;
      local_234 = (float)FUN_1800ba150((uint)(fVar26 * 0.9571 + fVar25));
      lVar10 = *(longlong *)(param_1 + 0x10d0);
      local_234 = local_234 + 3.0;
      fVar19 = local_238 - local_280[0];
      fVar22 = local_234 - (float)local_258;
      if ((lVar10 == 0) || (*(char *)(lVar10 + 0x14) == '\0')) {
        lVar10 = *(longlong *)(param_1 + 0x10d8);
        if (lVar10 == 0) {
          uVar23 = 0xffff9b5b;
        }
        else {
          if (*(longlong *)(lVar10 + 0x90) != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x90);
          }
          pfVar8 = FUN_18002bd50(&local_210,lVar10);
          local_270 = *(longlong *)pfVar8;
          local_268 = (float *)CONCAT44(0x3f800000,pfVar8[2]);
          uVar23 = FUN_180051e70((float *)&local_270);
        }
        lVar10 = *(longlong *)(param_1 + 0x10e0);
        if (lVar10 != 0) {
          if (*(longlong *)(lVar10 + 0x90) != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x90);
          }
          pfVar8 = FUN_18002bd50(&local_210,lVar10);
          local_270 = *(longlong *)pfVar8;
          local_268 = (float *)CONCAT44(0x3f800000,pfVar8[2]);
          uVar4 = FUN_180051e70((float *)&local_270);
        }
      }
      else {
        if (*(longlong *)(lVar10 + 0x90) != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x90);
        }
        pfVar8 = FUN_18002bd50(&local_210,lVar10);
        local_270 = *(longlong *)pfVar8;
        local_268 = (float *)CONCAT44(0x3f800000,pfVar8[2]);
        uVar4 = FUN_180051e70((float *)&local_270);
        uVar23 = uVar4;
      }
      lVar10 = *(longlong *)(param_1 + 0x10e8);
      if (lVar10 != 0) {
        if (*(longlong *)(lVar10 + 0x90) != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x90);
        }
        pfVar8 = FUN_18002bd50(&local_210,lVar10);
        local_270 = *(longlong *)pfVar8;
        local_268 = (float *)CONCAT44(0x3f800000,pfVar8[2]);
        fVar24 = (float)FUN_180051e70((float *)&local_270);
      }
      lVar10 = *(longlong *)(param_1 + 0x10f0);
      if (lVar10 == 0) {
        uVar5 = 0xff8ad94c;
      }
      else {
        if (*(longlong *)(lVar10 + 0x90) != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x90);
        }
        pfVar8 = FUN_18002bd50(&local_210,lVar10);
        local_270 = *(longlong *)pfVar8;
        local_268 = (float *)CONCAT44(0x3f800000,pfVar8[2]);
        uVar5 = FUN_180051e70((float *)&local_270);
      }
      lVar10 = *(longlong *)(param_1 + 0x10f8);
      if (lVar10 == 0) {
        uVar6 = 0xff6e5fff;
      }
      else {
        if (*(longlong *)(lVar10 + 0x90) != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x90);
        }
        pfVar8 = FUN_18002bd50(&local_210,lVar10);
        local_270 = *(longlong *)pfVar8;
        local_268 = (float *)CONCAT44(0x3f800000,pfVar8[2]);
        uVar6 = FUN_180051e70((float *)&local_270);
      }
      uVar9 = FUN_18002e340((ulonglong)uVar6,uVar5,0.76);
      fVar7 = (float)uVar9;
      if (*(longlong *)(param_1 + 0x978) == 0) {
        fVar20 = 13.0;
      }
      else {
        fVar20 = *(float *)(*(longlong *)(param_1 + 0x978) + 0x18);
      }
      fVar20 = fVar20 + 1.0;
      if ((10.0 <= fVar20) && (local_224 = 23.0, fVar20 <= 23.0)) {
        local_224 = fVar20;
      }
      local_200 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x30);
      local_230 = fVar7;
      if ((*(longlong *)(param_1 + 0x878) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x878) + 0x14) != '\0')) {
        local_278 = (int **)&DAT_1800deaa0;
        piVar15 = &DAT_1800deaa0;
        do {
          local_290 = (fVar18 * *(float *)(&DAT_1800dea10 + (longlong)piVar15[1] * 8) + fVar27) *
                      DAT_180112008;
          local_28c = (fVar26 * *(float *)(&UNK_1800dea14 + (longlong)piVar15[1] * 8) + fVar25) *
                      DAT_180112008;
          local_298 = (int *)CONCAT44((fVar26 * *(float *)(&UNK_1800dea14 + (longlong)*piVar15 * 8)
                                      + fVar25) * DAT_180112008,
                                      (fVar18 * *(float *)(&DAT_1800dea10 + (longlong)*piVar15 * 8)
                                      + fVar27) * DAT_180112008);
          FUN_180070300(local_288,&local_298,(undefined8 *)&local_290,0x6b000000,DAT_180112008 * 2.8
                       );
          fVar7 = local_230;
          piVar15 = piVar15 + 2;
        } while (piVar15 != (int *)"pvsub");
        ppiVar14 = local_278;
        do {
          local_290 = (fVar18 * *(float *)(&DAT_1800dea10 +
                                          (longlong)*(int *)((longlong)ppiVar14 + 4) * 8) + fVar27)
                      * DAT_180112008;
          local_28c = (fVar26 * *(float *)(&UNK_1800dea14 +
                                          (longlong)*(int *)((longlong)ppiVar14 + 4) * 8) + fVar25)
                      * DAT_180112008;
          local_298 = (int *)CONCAT44((fVar26 * *(float *)(&UNK_1800dea14 +
                                                          (longlong)*(int *)ppiVar14 * 8) + fVar25)
                                      * DAT_180112008,
                                      (fVar18 * *(float *)(&DAT_1800dea10 +
                                                          (longlong)*(int *)ppiVar14 * 8) + fVar27)
                                      * DAT_180112008);
          FUN_180070300(local_288,&local_298,(undefined8 *)&local_290,uVar4,DAT_180112008 * 1.2);
          ppiVar14 = ppiVar14 + 1;
        } while (ppiVar14 != (int **)"pvsub");
        fVar27 = fVar18 * 0.5 + fVar27;
        fVar28 = fVar26 * 0.2098 + fVar25;
        fVar25 = fVar26 * 0.1666 + fVar25;
        fVar20 = fVar27 - fVar27;
        fVar18 = (fVar25 - fVar28) * (fVar25 - fVar28) + fVar20 * fVar20;
        if (fVar18 < 0.0) {
          fVar18 = FUN_1800bd400(fVar18);
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        local_230 = fVar18;
        fVar26 = FUN_1800ba070(fVar26 * 0.0373,fVar18 * 0.48);
        param_1 = local_148;
        if (fVar26 + 1.0 < fVar18) {
          fVar20 = (fVar20 / fVar18) * fVar26 + fVar27;
          local_290 = fVar20 * DAT_180112008;
          fVar18 = ((fVar28 - fVar25) / local_230) * fVar26 + fVar25;
          local_28c = fVar18 * DAT_180112008;
          local_298 = (int *)CONCAT44(fVar28 * DAT_180112008,fVar27 * DAT_180112008);
          FUN_180070300(local_288,&local_298,(undefined8 *)&local_290,0x6b000000,DAT_180112008 * 2.8
                       );
          local_290 = fVar20 * DAT_180112008;
          local_28c = fVar18 * DAT_180112008;
          local_298 = (int *)CONCAT44(fVar28 * DAT_180112008,fVar27 * DAT_180112008);
          FUN_180070300(local_288,&local_298,(undefined8 *)&local_290,uVar4,DAT_180112008 * 1.2);
        }
        local_290 = fVar27 * DAT_180112008;
        local_28c = fVar25 * DAT_180112008;
        FUN_18006e990(local_288,&local_290,fVar26 * DAT_180112008,0x6b000000,0,DAT_180112008 * 2.8);
        local_290 = fVar27 * DAT_180112008;
        local_28c = fVar25 * DAT_180112008;
        FUN_18006e990(local_288,&local_290,fVar26 * DAT_180112008,uVar4,0,DAT_180112008 * 1.2);
      }
      if ((*(longlong *)(param_1 + 0x850) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x850) + 0x14) != '\0')) {
        if ((*(longlong *)(param_1 + 0x870) == 0) ||
           (*(char *)(*(longlong *)(param_1 + 0x870) + 0x72) == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        fVar26 = FUN_1800ba070(fVar19,fVar22);
        fVar27 = FUN_1800ba070(fVar19,fVar22);
        fVar27 = FUN_1800ba000(3.0,fVar27 * 0.16);
        fVar27 = FUN_1800ba070(9.0,fVar27);
        local_230 = FUN_1800ba070(fVar27,fVar26 * 0.5);
        lVar10 = *(longlong *)(param_1 + 0x870);
        if (bVar1) {
          if (*(int *)(lVar10 + 0x38) == 1) {
            local_270 = CONCAT44((float)local_258 - 2.0,local_280[0] - 2.0);
            local_268 = (float *)CONCAT44(fVar22 + 4.0,fVar19 + 4.0);
            FUN_1800422b0(local_288,(float *)&local_270,0x99000000,local_230 + 2.0,4.0);
            fVar26 = local_230 + 1.0;
            goto LAB_180031a61;
          }
          uVar4 = FUN_1800ba150((uint)(fVar19 * 0.26));
          local_298 = (int *)CONCAT44(local_298._4_4_,uVar4);
          local_250._0_4_ = (float)FUN_1800ba150((uint)(fVar22 * 0.13));
          local_1e8 = &local_288;
          local_1e0 = &local_230;
          local_278 = (int **)CONCAT44(local_278._4_4_,0x40490fdb);
          local_1d8 = (int **)local_280;
          local_1d0 = (int ***)&local_258;
          local_1c8 = (int **)&local_250;
          local_1c0 = &local_278;
          local_1b8 = (int **)&local_298;
          local_1b0 = (undefined8 *)&local_238;
          local_1a8 = (longlong)&local_234;
          FUN_18000b2f0(&local_1e8,0x40800000,0x99000000);
          FUN_18000b2f0(&local_1e8,0x40000000,uVar23);
        }
        else if ((lVar10 == 0) || (*(int *)(lVar10 + 0x38) != 1)) {
          uVar4 = FUN_1800ba150((uint)(fVar19 * 0.26));
          local_298 = (int *)CONCAT44(local_298._4_4_,uVar4);
          uVar4 = FUN_1800ba150((uint)(fVar22 * 0.13));
          local_1e8 = (int **)local_280;
          local_278 = (int **)CONCAT44(local_278._4_4_,uVar4);
          local_1e0 = (float *)&local_258;
          local_1d8 = (int **)&local_298;
          local_1d0 = (int ***)&local_278;
          local_1c8 = (int **)&local_238;
          local_1c0 = (undefined8 *)&local_234;
          local_1b8 = &local_288;
          FUN_18000a180(&local_1e8,4.0,0x99000000);
          FUN_18000a180(&local_1e8,2.0,uVar23);
        }
        else {
          local_270 = CONCAT44((float)local_258 - 2.0,local_280[0] - 2.0);
          local_268 = (float *)CONCAT44(fVar22 + 4.0,fVar19 + 4.0);
          FUN_1800422b0(local_288,(float *)&local_270,0x99000000,0.0,4.0);
          fVar26 = 0.0;
LAB_180031a61:
          local_270 = CONCAT44((float)local_258 - 1.0,local_280[0] - 1.0);
          local_268 = (float *)CONCAT44(fVar22 + 2.0,fVar19 + 2.0);
          FUN_1800422b0(local_288,(float *)&local_270,uVar23,fVar26,2.0);
        }
      }
      lVar10 = *(longlong *)(param_1 + 0x10b8);
      if ((lVar10 == 0) || (*(char *)(lVar10 + 0x14) == '\0')) {
        local_100[0] = 9.0;
        local_100[1] = 9.0;
        local_100[2] = 9.0;
        local_100[3] = 9.0;
        local_f0 = 0;
        uStack_e8 = 0;
      }
      else {
        iVar17 = *(int *)(lVar10 + 0x38);
        fVar26 = (float)FUN_18002ba40((uint)fVar7,0.35);
        if (iVar17 == 0) {
          fVar27 = local_280[0] - 12.0;
LAB_180031ccb:
          if (0.0 < fVar22 + 2.0) {
            local_290 = ((fVar27 - 1.0) + 7.0) * DAT_180112008;
            local_298 = (int *)CONCAT44(((float)local_258 - 1.0) * DAT_180112008,
                                        (fVar27 - 1.0) * DAT_180112008);
            local_28c = (((float)local_258 - 1.0) + fVar22 + 2.0) * DAT_180112008;
            FUN_180071360(local_288,(float *)&local_298,&local_290,0xa6000000,DAT_180112008 * 0.0,0)
            ;
          }
          local_290 = (fVar27 + 5.0) * DAT_180112008;
          local_28c = local_234 * DAT_180112008;
          local_298 = (int *)CONCAT44((local_234 - fVar22 * 0.76) * DAT_180112008,
                                      fVar27 * DAT_180112008);
          fVar27 = fVar26;
          fVar25 = fVar7;
        }
        else {
          if (iVar17 == 2) {
            fVar27 = local_238 + 7.0;
            goto LAB_180031ccb;
          }
          if (iVar17 == 1) {
            fVar27 = (float)local_258 - 12.0;
          }
          else {
            fVar27 = local_234 + 7.0;
          }
          if (0.0 < fVar19 + 2.0) {
            local_290 = ((local_280[0] - 1.0) + fVar19 + 2.0) * DAT_180112008;
            local_298 = (int *)CONCAT44((fVar27 - 1.0) * DAT_180112008,
                                        (local_280[0] - 1.0) * DAT_180112008);
            local_28c = ((fVar27 - 1.0) + 7.0) * DAT_180112008;
            FUN_180071360(local_288,(float *)&local_298,&local_290,0xa6000000,DAT_180112008 * 0.0,0)
            ;
          }
          local_290 = (fVar19 * 0.76 + local_280[0]) * DAT_180112008;
          local_298 = (int *)CONCAT44(fVar27 * DAT_180112008,local_280[0] * DAT_180112008);
          local_28c = (fVar27 + 5.0) * DAT_180112008;
          fVar27 = fVar7;
          fVar25 = fVar26;
        }
        FUN_180071500(local_288,&local_298,(undefined8 *)&local_290,(uint)fVar27,(uint)fVar26,
                      (uint)fVar25,(uint)fVar7);
        local_100[0] = 9.0;
        local_100[1] = 9.0;
        local_100[2] = 9.0;
        local_100[3] = 9.0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_100[iVar17] = local_100[iVar17] + 12.0;
      }
      local_130 = (int **)local_280;
      local_128 = local_100;
      local_120 = &local_258;
      local_118 = &local_f0;
      local_110 = (undefined8 *)&local_238;
      local_108 = (longlong)&local_234;
      if ((*(longlong *)(param_1 + 0x928) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x928) + 0x14) != '\0')) {
        local_258._4_1_ = '\x01';
      }
      else {
        local_258._4_1_ = '\0';
      }
      if (*(longlong *)(param_1 + 0x10c8) == 0) {
        iVar17 = 1;
      }
      else {
        iVar17 = *(int *)(*(longlong *)(param_1 + 0x10c8) + 0x38);
      }
      local_220 = 0;
      uStack_218 = 0;
      if (local_258._4_1_ == '\0') {
        fVar26 = local_224;
      }
      else {
        pbVar11 = (byte *)FUN_180043a40("Player");
        fVar26 = local_224;
        pfVar8 = FUN_180071ff0(local_200,&local_1f8,local_224 * (float)local_200[5] * 0.0625,
                               3.4028235e+38,0.0,pbVar11,(byte *)0x0,(undefined8 *)0x0);
        fVar25 = fVar26 + 11.0;
        fVar18 = *pfVar8 / DAT_180112008 + 22.0;
        fVar27 = (fVar26 * (float)local_200[5] * 0.0625) / DAT_180112008;
        FUN_18000a020(&local_130,iVar17,fVar18,fVar25,(float *)&local_220,
                      (float *)((longlong)&local_220 + 4));
        uStack_218 = CONCAT44(fVar25,fVar18);
        if ((0.0 < fVar18) && (0.0 < fVar25)) {
          local_290 = ((float)local_220 + fVar18) * DAT_180112008;
          local_298 = (int *)CONCAT44(local_220._4_4_ * DAT_180112008,
                                      (float)local_220 * DAT_180112008);
          local_28c = (local_220._4_4_ + fVar25) * DAT_180112008;
          FUN_180071360(local_288,(float *)&local_298,&local_290,0xdb110b09,DAT_180112008 * 7.0,0);
        }
        local_270 = local_220;
        local_268 = (float *)CONCAT44(fVar25,0x40400000);
        FUN_180028890(local_288,(float *)&local_270,uVar23,1.5,0);
        fVar27 = (float)FUN_1800ba150((uint)(((uStack_218._4_4_ * 0.5 + local_220._4_4_) -
                                             fVar27 * 0.5) * DAT_180112008));
        local_290 = (float)FUN_1800ba150((uint)(((float)local_220 + 12.0) * DAT_180112008));
        local_28c = fVar27;
        FUN_1800716c0(local_288,local_200,fVar26 * (float)local_200[5] * 0.0625,&local_290,fVar24,
                      pbVar11,(byte *)0x0,0.0,(float *)0x0);
      }
      lVar10 = *(longlong *)(param_1 + 0x10c0);
      local_140 = (int *)&local_220;
      local_138 = &local_e0;
      local_1e8 = &local_200;
      local_1e0 = (float *)((longlong)&local_258 + 4);
      local_1d8 = &local_140;
      local_1d0 = &local_130;
      local_1c8 = &local_288;
      local_e0 = 0x4000000040c00000;
      uStack_d8 = 0x4000000040c00000;
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x14) != '\0')) {
        FUN_18000bf40(&local_1e8,lVar10,*(int *)(lVar10 + 0x38),fVar26 - 2.0,fVar7,&DAT_1800deb28);
      }
      if ((*(longlong *)(param_1 + 0x958) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x958) + 0x14) != '\0')) {
        pbVar11 = &DAT_1800deb34;
        if (DAT_1801158c8 == 1) {
          pbVar11 = &DAT_1800deb2c;
        }
        if (*(longlong *)(param_1 + 0x1100) == 0) {
          fVar24 = -NAN;
        }
        else {
          pfVar8 = FUN_18002bd50(&local_210,*(longlong *)(param_1 + 0x1100));
          local_270 = *(longlong *)pfVar8;
          local_268 = (float *)CONCAT44(0x3f800000,pfVar8[2]);
          fVar24 = (float)FUN_180051e70((float *)&local_270);
        }
        lVar10 = *(longlong *)(param_1 + 0x970);
        if (lVar10 == 0) {
          iVar17 = 3;
        }
        else {
          iVar17 = *(int *)(lVar10 + 0x38);
        }
        FUN_18000bf40(&local_1e8,lVar10,iVar17,fVar26 - 1.0,fVar24,pbVar11);
      }
      goto LAB_180032211;
    }
  }
  else {
    fVar24 = (float)FUN_1800ba150((uint)(local_244 * DAT_180112008));
    local_250._0_4_ = (float)FUN_1800ba150((uint)(local_248 * DAT_180112008));
    local_290 = 1.0;
    local_278 = (int **)CONCAT44(fVar24 + *(float *)(param_1 + 0x143c),
                                 (float)local_250 + *(float *)(param_1 + 0x1438));
    local_28c = 1.0;
    local_298 = (int *)0x0;
    local_250._4_4_ = fVar24;
    FUN_1800700b0(local_288,*(longlong *)(param_1 + 0x1430),&local_250,&local_278,&local_298,
                  (undefined8 *)&local_290,0xffffffff);
  }
  FUN_18000bce0(&local_270);
LAB_180032211:
  FUN_180061fc0();
  return;
}


int FUN_180032290(longlong param_1)

{
  char *_Str1;
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;

  uVar2 = FUN_18002efe0(param_1);
  if ((char)uVar2 != '\0') {
    lVar3 = *(longlong *)
             (*(longlong *)(param_1 + 8) +
             (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x11d8) &
             *(longlong *)(param_1 + 0x10) - 1U) * 8);
    _Str1 = (char *)**(undefined8 **)
                      (*(longlong *)(lVar3 + 0x20) +
                      ((longlong)
                       *(int *)(param_1 + 0x11dc + (longlong)*(int *)(param_1 + 0x11d8) * 4) +
                       *(longlong *)(lVar3 + 0x30) & *(longlong *)(lVar3 + 0x28) - 1U) * 8);
    lVar3 = 0;
    while (lVar4 = lVar3 + 1, _Str1[lVar3] == "Players"[lVar3]) {
      lVar3 = lVar4;
      if (lVar4 == 8) {
        return 0;
      }
    }
    lVar3 = 0;
    while (lVar4 = lVar3 + 1, _Str1[lVar3] == (&DAT_1800d98c0)[lVar3]) {
      lVar3 = lVar4;
      if (lVar4 == 5) {
        return 1;
      }
    }
    iVar1 = strcmp(_Str1,"Character");
    if (iVar1 == 0) {
      return 5;
    }
    lVar3 = 0;
    while (lVar4 = lVar3 + 1, _Str1[lVar3] == (&DAT_1800da22c)[lVar3]) {
      lVar3 = lVar4;
      if (lVar4 == 5) {
        return 6;
      }
    }
    lVar3 = 0;
    while (lVar4 = lVar3 + 1, _Str1[lVar3] == "Models"[lVar3]) {
      lVar3 = lVar4;
      if (lVar4 == 7) {
        return 4;
      }
    }
    iVar1 = strcmp(_Str1,"Vehicles & Robbery");
    if (iVar1 == 0) {
      return (*(int *)(param_1 + 0x1448) == 1) + 2;
    }
  }
  return -1;
}


/*
Unable to decompile 'FUN_180032410'
Cause: Exception while decompiling 180032410: process: timeout

*/


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180038a20(char param_1)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_9c;
  longlong local_98;
  ulonglong uStack_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStack_e8;
  iVar4 = FUN_180032290(0x180112f00);
  _DAT_180114344 = iVar4;
  if ((((iVar4 < 0) || (DAT_180115820 == (code *)0x0)) || (DAT_180114390 == (longlong *)0x0)) ||
     (DAT_180114398 == (longlong *)0x0)) {
    DAT_180114340 = '\0';
    DAT_180114360 = '\0';
  }
  else {
    iVar5 = FUN_1800ba0e0((uint)(DAT_180112008 * 320.0));
    iVar6 = FUN_1800ba0e0((uint)(DAT_180112008 * 544.0));
    if ((0xf < iVar5) && (0xf < iVar6)) {
      local_9c = iVar6;
      dVar2 = FUN_18002ec50();
      if (DAT_180114360 == '\0') {
        dVar14 = 33.0;
      }
      else {
        dVar14 = 15.0;
      }
      if (((param_1 != '\0') || (DAT_180114340 == '\0')) ||
         ((iVar4 != DAT_1801121b4 ||
          (((iVar5 != DAT_180115838 || (iVar6 != DAT_18011583c)) ||
           (dVar14 <= dVar2 - _DAT_180115bf8)))))) {
        if (iVar4 != DAT_1801121b4) {
          DAT_180114340 = '\0';
          DAT_180114360 = '\0';
        }
        local_ac._0_3_ = CONCAT12(DAT_180114372,CONCAT11(DAT_180114371,DAT_180114370));
        local_b8 = DAT_180114364;
        local_b4 = _DAT_180114368;
        local_a8 = CONCAT44(local_a8._4_4_,
                            (DAT_18011200c >> 8 & 0xff) << 8 |
                            (DAT_18011200c >> 0x10 & 0xff) << 0x10 | DAT_18011200c & 0xff);
        _DAT_180114368 = 0;
        DAT_180114364 = 0;
        DAT_180114370 = 0;
        DAT_1801121b4 = iVar4;
        _DAT_180115bf8 = dVar2;
        if (DAT_180115840 == (code *)0x0) {
          _DAT_180114350 = 0;
        }
        else {
          local_c0 = (longlong *)&local_b8;
          local_c8 = DAT_180114398;
          _DAT_180114350 = (*DAT_180115840)(iVar4,iVar5,iVar6,DAT_180114390);
        }
        DAT_180114360 = _DAT_180114350 != 0;
        local_a0 = 0;
        _DAT_180114358 = (float)iVar5;
        _DAT_18011435c = (float)iVar6;
        FUN_180012010(&DAT_180114378,(longlong)iVar6 * (longlong)iVar5,
                      (undefined1 (*) [32])&local_a0);
        cVar3 = (*DAT_180115820)(iVar4,iVar5,iVar6,DAT_180114378);
        if (cVar3 != '\0') {
          if (((DAT_180115828 == 0) || (iVar5 != DAT_180115838)) || (iVar6 != DAT_18011583c)) {
            FUN_18003f250();
            local_74 = 1;
            local_64 = 0x10000;
            local_80 = 1;
            local_7c = 1;
            local_78 = 0x57;
            local_6c = 2;
            local_68 = 8;
            local_88 = iVar5;
            local_84 = iVar6;
            iVar4 = (**(code **)(*DAT_180114390 + 0x28))(DAT_180114390,&local_88,0,&DAT_180115828);
            if (iVar4 < 0) {
              DAT_180115828 = 0;
              return;
            }
            local_b4 = 4;
            local_a8 = 0;
            local_b8 = local_78;
            local_ac = 1;
            iVar4 = (**(code **)(*DAT_180114390 + 0x38))
                              (DAT_180114390,DAT_180115828,&local_b8,&DAT_180115830);
            if (iVar4 < 0) {
              FUN_18003f250();
              return;
            }
            DAT_180115838 = iVar5;
            DAT_18011583c = iVar6;
          }
          local_c0 = &local_98;
          local_98 = 0;
          uStack_90 = 0;
          local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
          iVar4 = (**(code **)(*DAT_180114398 + 0x70))(DAT_180114398,DAT_180115828,0,4);
          if (-1 < iVar4) {
            uVar13 = 0;
            do {
              lVar1 = DAT_180114378 + (longlong)iVar5 * uVar13 * 4;
              uVar8 = 0;
              do {
                uVar12 = *(uint *)(lVar1 + uVar8 * 4);
                if (uVar12 < 0x1000000) {
                  uVar12 = 0;
                }
                else {
                  uVar7 = uVar12 >> 0x18;
                  if (uVar7 != 0xff) {
                    uVar9 = uVar12 >> 0x19;
                    uVar11 = ((uVar12 >> 0x10 & 0xff) * 0xff + uVar9) / uVar7;
                    uVar10 = ((uVar12 >> 8 & 0xff) * 0xff + uVar9) / uVar7;
                    uVar12 = ((uVar12 & 0xff) * 0xff + uVar9) / uVar7;
                    if (0xff < uVar11) {
                      uVar11 = 0xff;
                    }
                    if (0xff < uVar10) {
                      uVar10 = 0xff;
                    }
                    if (0xff < uVar12) {
                      uVar12 = 0xff;
                    }
                    uVar12 = ((uVar7 << 8 | uVar11) << 8 | uVar10) << 8 | uVar12;
                  }
                }
                *(uint *)((uStack_90 & 0xffffffff) * uVar13 + local_98 + uVar8 * 4) = uVar12;
                uVar12 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar12;
              } while ((int)uVar12 < iVar5);
              uVar12 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
            } while ((int)uVar12 < local_9c);
            (**(code **)(*DAT_180114398 + 0x78))(DAT_180114398,DAT_180115828,0);
            _DAT_180114330 = DAT_180115830;
            _DAT_180114338 = (float)iVar5;
            _DAT_18011433c = (float)iVar6;
            DAT_180114340 = 1;
            return;
          }
        }
        DAT_180114340 = '\0';
      }
    }
  }
  return;
}


void FUN_180038f80(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;

  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    iVar4 = *param_1 + 1;
    if (iVar1 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar1 / 2 + iVar1;
    }
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    if (iVar1 < iVar4) {
      puVar3 = (undefined8 *)FUN_18005b560((longlong)iVar4 << 3);
      if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar3,*(undefined8 **)(param_1 + 2),(longlong)*param_1 << 3);
        FUN_18005b5c0(*(longlong *)(param_1 + 2));
      }
      *(undefined8 **)(param_1 + 2) = puVar3;
      param_1[1] = iVar4;
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 8) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}


void FUN_180039020(undefined8 *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_RSI;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  uVar2 = param_1[2];
  uVar3 = param_1[3];
  if (uVar2 < uVar3) {
    param_1[2] = uVar2 + 1;
    if (0xf < uVar3) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + uVar2) = param_2;
    *(undefined1 *)((longlong)param_1 + uVar2 + 1) = 0;
    return;
  }
  puVar8 = (undefined8 *)0x7fffffffffffffff;
  if (uVar2 == 0x7fffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  puVar6 = (undefined8 *)(uVar2 + 1 | 0xf);
  if ((puVar6 < (undefined8 *)0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    puVar1 = (undefined8 *)((uVar3 >> 1) + uVar3);
    puVar8 = puVar6;
    if (puVar6 < puVar1) {
      puVar8 = puVar1;
    }
    puVar1 = (undefined8 *)((longlong)puVar8 + 1);
    if (puVar1 == (undefined8 *)0x0) {
      unaff_RSI = (undefined8 *)0x0;
    }
    else {
      if ((undefined8 *)0xfff < puVar1) {
        puVar6 = puVar8 + 5;
        if (puVar6 <= puVar1) {
                    // WARNING: Subroutine does not return
          FUN_180011350();
        }
        goto LAB_1800390f5;
      }
      unaff_RSI = (undefined8 *)FUN_1800a5010((ulonglong)puVar1);
    }
LAB_180039118:
    param_1[2] = uVar2 + 1;
    param_1[3] = puVar8;
    if (uVar3 < 0x10) {
      FUN_1800d1c20(unaff_RSI,param_1,uVar2);
      *(undefined1 *)((longlong)unaff_RSI + uVar2) = param_2;
      *(undefined1 *)((longlong)unaff_RSI + uVar2 + 1) = 0;
      goto LAB_18003918b;
    }
    puVar8 = (undefined8 *)*param_1;
    FUN_1800d1c20(unaff_RSI,puVar8,uVar2);
    puVar7 = auStack_38;
    *(undefined1 *)((longlong)unaff_RSI + uVar2) = param_2;
    *(undefined1 *)((longlong)unaff_RSI + uVar2 + 1) = 0;
    if (0xfff < uVar3 + 1) {
      puVar6 = puVar8 + -1;
      puVar8 = (undefined8 *)((longlong)puVar8 + (-8 - (longlong)*puVar6));
      if (puVar8 < (undefined8 *)0x20) {
        thunk_FUN_1800c3030((LPVOID)*puVar6);
        goto LAB_18003918b;
      }
      goto LAB_180039169;
    }
  }
  else {
    puVar6 = (undefined8 *)0x8000000000000027;
LAB_1800390f5:
    lVar5 = FUN_1800a5010((ulonglong)puVar6);
    if (lVar5 != 0) {
      unaff_RSI = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar5;
      goto LAB_180039118;
    }
LAB_180039169:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar7 = auStack_30;
  }
  *(undefined8 *)(puVar7 + -8) = 0x180039178;
  thunk_FUN_1800c3030(puVar8);
LAB_18003918b:
  *param_1 = unaff_RSI;
  return;
}


/*
Unable to decompile 'FUN_1800391c0'
Cause: Exception while decompiling 1800391c0: process: timeout

*/


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_18003f250(void)

{
  if (DAT_180115830 != (longlong *)0x0) {
    (**(code **)(*DAT_180115830 + 0x10))();
  }
  if (DAT_180115828 != (longlong *)0x0) {
    (**(code **)(*DAT_180115828 + 0x10))();
  }
  DAT_180115830 = (longlong *)0x0;
  DAT_180115828 = (longlong *)0x0;
  DAT_18011583c = 0;
  DAT_180115838 = 0;
  _DAT_180114330 = 0;
  DAT_180114340 = 0;
  return;
}


void FUN_18003f2b0(int *param_1,float param_2,float param_3,float param_4,uint param_5)

{
  short sVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  short sVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_c0 [17];

  FUN_180056990(local_c0);
  FUN_180076280(param_1,0xc0,0x41);
  pfVar7 = *(float **)(param_1 + 0x10);
  sVar1 = (short)param_1[0xd];
  fVar10 = param_3 * DAT_180112008;
  *pfVar7 = param_2 * DAT_180112008;
  pfVar7[1] = fVar10;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = local_c0[0];
  *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_5;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
  param_1[0xd] = param_1[0xd] + 1;
  pfVar7 = *(float **)(param_1 + 0x10);
  iVar6 = 0;
  do {
    uVar9 = FUN_1800bd0b0();
    fVar10 = DAT_180112008;
    fVar11 = ((float)uVar9 * param_4 + param_3) * DAT_180112008;
    uVar9 = FUN_1800bb5a0();
    iVar6 = iVar6 + 1;
    *pfVar7 = ((float)uVar9 * param_4 + param_2) * fVar10;
    pfVar7[1] = fVar11;
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = local_c0[0];
    *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_5 & 0xffffff;
    param_1[0xd] = param_1[0xd] + 1;
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x10) + 0x14);
    *(float **)(param_1 + 0x10) = pfVar7;
  } while (iVar6 < 0x40);
  uVar5 = 0;
  sVar8 = sVar1 + 1;
  do {
    **(short **)(param_1 + 0x12) = sVar1;
    sVar3 = (short)uVar5;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar8 + sVar3;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 1 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1 + 2 + sVar3;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 2 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1 + 3 + sVar3;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 3 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1 + 4 + sVar3;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 4 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1 + 5 + sVar3;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 5 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1 + 6 + sVar3;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 6 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar3 + sVar1 + 7;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 7 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1 + 8 + sVar3;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 8 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1 + 9 + sVar3;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 9 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar3 + sVar1 + 10;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 10 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar3 + sVar1 + 0xb;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 0xb & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar3 + sVar1 + 0xc;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 0xc & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar3 + sVar1 + 0xd;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 0xd & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar3 + sVar1 + 0xe;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 0xe & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar3 + sVar1 + 0xf;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 + 0xf & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar1;
    lVar2 = *(longlong *)(param_1 + 0x12);
    uVar5 = uVar5 + 0x10;
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    *(short *)(lVar2 + 2) = sVar3 + sVar1 + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x12);
    *(short **)(param_1 + 0x12) = (short *)(lVar2 + 2);
    uVar4 = uVar5 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    *(short *)(lVar2 + 2) = (short)uVar4 + sVar8;
    *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 2;
  } while ((int)uVar5 < 0x40);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18003f960(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  LPVOID pvVar8;
  longlong *plVar9;
  longlong lVar10;
  LPVOID pvVar11;
  undefined8 *puVar12;
  LPCWSTR lpWideCharStr;
  LPCWSTR lpWideCharStr_00;
  ulonglong uVar13;
  undefined1 auStackY_d8 [32];
  longlong local_90;
  longlong *plStack_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined8 ****local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;

  local_50 = DAT_180112300 ^ (ulonglong)auStackY_d8;
  iVar4 = *(int *)(param_1 + 0x1330);
  plVar1 = (longlong *)(param_1 + 0x12d8);
  if ((iVar4 < 0) || ((int)(*(longlong *)(param_1 + 0x12e0) - *plVar1 >> 5) <= iVar4)) {
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 7;
    local_70 = (undefined8 ****)0x0;
  }
  else {
    FUN_1800081d0(&local_70,(undefined8 *)((longlong)iVar4 * 0x20 + *plVar1));
  }
  plVar5 = FUN_18002bad0(&local_90,(undefined8 *)(param_1 + 0x12b8));
  if (plVar1 != plVar5) {
    plVar9 = (longlong *)*plVar1;
    if (plVar9 == (longlong *)0x0) {
LAB_18003fa74:
      *plVar1 = *plVar5;
      *(longlong *)(param_1 + 0x12e0) = plVar5[1];
      *(longlong *)(param_1 + 0x12e8) = plVar5[2];
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      goto LAB_18003fa9c;
    }
    plVar2 = *(longlong **)(param_1 + 0x12e0);
    for (; plVar9 != plVar2; plVar9 = plVar9 + 4) {
      FUN_180011650(plVar9);
    }
    pvVar11 = (LPVOID)*plVar1;
    if ((*(longlong *)(param_1 + 0x12e8) - (longlong)pvVar11 & 0xffffffffffffffe0U) < 0x1000) {
      pvVar8 = pvVar11;
LAB_18003fa5d:
      thunk_FUN_1800c3030(pvVar8);
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x12e0) = 0;
      *(undefined8 *)(param_1 + 0x12e8) = 0;
      goto LAB_18003fa74;
    }
    pvVar8 = *(LPVOID *)((longlong)pvVar11 + -8);
    if ((ulonglong)((longlong)pvVar11 + (-8 - (longlong)pvVar8)) < 0x20) goto LAB_18003fa5d;
LAB_18003fd65:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
LAB_18003fd6c:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_18003fa9c:
  plVar9 = plStack_88;
  plVar5 = (longlong *)CONCAT71(local_90._1_7_,(undefined1)local_90);
  if (plVar5 != (longlong *)0x0) {
    if (plVar5 != plStack_88) {
      do {
        FUN_180011650(plVar5);
        plVar5 = plVar5 + 4;
      } while (plVar5 != plVar9);
      plVar5 = (longlong *)CONCAT71(local_90._1_7_,(undefined1)local_90);
    }
    if ((local_80 - (longlong)plVar5 & 0xffffffffffffffe0U) < 0x1000) {
      plVar9 = plVar5;
    }
    else {
      plVar9 = (longlong *)plVar5[-1];
      if (0x1f < (ulonglong)((longlong)plVar5 + (-8 - (longlong)plVar9))) goto LAB_18003fd65;
    }
    thunk_FUN_1800c3030(plVar9);
  }
  plVar5 = *(longlong **)(param_1 + 0x12f0);
  plVar9 = *(longlong **)(param_1 + 0x12f8);
  if (plVar5 != plVar9) {
    do {
      FUN_1800115e0(plVar5);
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar9);
    *(undefined8 *)(param_1 + 0x12f8) = *(undefined8 *)(param_1 + 0x12f0);
  }
  *(undefined4 *)(param_1 + 0x1330) = 0xffffffff;
  lVar10 = *plVar1;
  if (*(longlong *)(param_1 + 0x12e0) - lVar10 >> 5 != 0) {
    uVar13 = 0;
    do {
      lpWideCharStr = (LPCWSTR)(uVar13 * 0x20 + lVar10);
      lpWideCharStr_00 = lpWideCharStr;
      if (7 < *(ulonglong *)(lpWideCharStr + 0xc)) {
        lpWideCharStr_00 = *(LPCWSTR *)lpWideCharStr;
      }
      iVar4 = WideCharToMultiByte(0xfde9,0,lpWideCharStr_00,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      if (iVar4 < 1) {
        FUN_1800080c0((undefined1 (*) [32])&local_90,0,0);
      }
      else {
        FUN_1800080c0((undefined1 (*) [32])&local_90,(longlong)(iVar4 + -1),0);
        plVar5 = &local_90;
        if (0xf < uStack_78) {
          plVar5 = (longlong *)CONCAT71(local_90._1_7_,(undefined1)local_90);
        }
        if (7 < *(ulonglong *)(lpWideCharStr + 0xc)) {
          lpWideCharStr = *(LPCWSTR *)lpWideCharStr;
        }
        WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)plVar5,iVar4,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      puVar12 = *(undefined8 **)(param_1 + 0x12f8);
      if (puVar12 == *(undefined8 **)(param_1 + 0x1300)) {
        FUN_180003e50((longlong *)(param_1 + 0x12f0),puVar12,&local_90);
      }
      else {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = CONCAT71(local_90._1_7_,(undefined1)local_90);
        puVar12[1] = plStack_88;
        puVar12[2] = local_80;
        puVar12[3] = uStack_78;
        local_80 = 0;
        uStack_78 = 0xf;
        local_90._0_1_ = 0;
        *(longlong *)(param_1 + 0x12f8) = *(longlong *)(param_1 + 0x12f8) + 0x20;
      }
      if (0xf < uStack_78) {
        pvVar8 = (LPVOID)CONCAT71(local_90._1_7_,(undefined1)local_90);
        pvVar11 = pvVar8;
        if ((0xfff < uStack_78 + 1) &&
           (pvVar11 = *(LPVOID *)((longlong)pvVar8 + -8),
           0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar11)))) goto LAB_18003fd65;
        thunk_FUN_1800c3030(pvVar11);
      }
      if (local_60 != 0) {
        puVar12 = (undefined8 *)(*plVar1 + uVar13 * 0x20);
        ppppuVar6 = &local_70;
        if (7 < local_58) {
          ppppuVar6 = local_70;
        }
        lVar10 = puVar12[2];
        if (7 < (ulonglong)puVar12[3]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        if ((lVar10 == local_60) &&
           ((lVar10 == 0 ||
            (uVar7 = FUN_180020d30((longlong)puVar12,(longlong)ppppuVar6,lVar10), (int)uVar7 == 0)))
           ) {
          *(int *)(param_1 + 0x1330) = (int)uVar13;
        }
      }
      uVar13 = uVar13 + 1;
      lVar10 = *plVar1;
    } while (uVar13 < (ulonglong)(*(longlong *)(param_1 + 0x12e0) - lVar10 >> 5));
  }
  if (7 < local_58) {
    ppppuVar6 = local_70;
    if ((0xfff < local_58 * 2 + 2) &&
       (ppppuVar6 = (undefined8 ****)local_70[-1],
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)ppppuVar6)))) goto LAB_18003fd6c;
    thunk_FUN_1800c3030(ppppuVar6);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18003fd80(HWND param_1)

{
  BOOL BVar1;
  ulonglong uVar2;
  undefined1 auStackY_68 [32];
  int local_38;
  int local_34 [3];
  tagRECT local_28;
  ulonglong local_18;

  if (param_1 != (HWND)0x0) {
    local_18 = DAT_180112300 ^ (ulonglong)auStackY_68;
    local_38 = 0;
    local_34[0] = 0;
    local_34[2] = 0;
    local_34[1] = 0;
    uVar2 = FUN_18001fb80(DAT_180112ed0,&local_38,local_34,local_34 + 2,(uint *)(local_34 + 1));
    if ((char)uVar2 != '\0') {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      BVar1 = GetWindowRect(param_1,&local_28);
      if (BVar1 != 0) {
        DAT_180112000 = local_28.left - local_38;
        DAT_180112004 = local_28.top - local_34[0];
      }
    }
  }
  return;
}


void FUN_18003fe30(int *param_1,int param_2)

{
  undefined8 *puVar1;

  if (param_1[1] < param_2) {
    puVar1 = (undefined8 *)FUN_18005b560((longlong)param_2 << 3);
    if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
      FUN_1800d1c20(puVar1,*(undefined8 **)(param_1 + 2),(longlong)*param_1 << 3);
      FUN_18005b5c0(*(longlong *)(param_1 + 2));
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
    param_1[1] = param_2;
  }
  return;
}


void FUN_18003fea0(undefined8 *param_1,ulonglong param_2,undefined2 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined2 *puVar3;

  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    param_1[2] = param_2;
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
    return;
  }
  uVar2 = param_2 - uVar1;
  if (param_1[3] - uVar1 < uVar2) {
    FUN_180005650(param_1,uVar2,0,uVar2,param_3);
    return;
  }
  param_1[2] = param_2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  puVar3 = (undefined2 *)((longlong)param_1 + uVar1 * 2);
  if (uVar2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = param_3;
      puVar3 = puVar3 + 1;
    }
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 * FUN_18003ff30(undefined8 *param_1,LPCSTR param_2)

{
  LPWSTR ***ppppWVar1;
  WCHAR WVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  int cchWideChar;
  LPWSTR ***ppppWVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStackY_98 [32];
  LPWSTR ***local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;

  local_38 = DAT_180112300 ^ (ulonglong)auStackY_98;
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  local_58 = (LPWSTR ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar8 = cchWideChar + -1;
  if (cchWideChar < 1) {
    iVar8 = 0;
  }
  FUN_180002b20(&local_58,0,(longlong)iVar8);
  if (0 < cchWideChar) {
    ppppWVar6 = (LPWSTR ***)&local_58;
    if (7 < local_40) {
      ppppWVar6 = local_58;
    }
    MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)ppppWVar6,cchWideChar);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  ppppWVar6 = (LPWSTR ***)&local_58;
  if (7 < local_40) {
    ppppWVar6 = local_58;
  }
  ppppWVar1 = (LPWSTR ***)((longlong)ppppWVar6 + local_48 * 2);
  for (; ppppWVar6 != ppppWVar1; ppppWVar6 = (LPWSTR ***)((longlong)ppppWVar6 + 2)) {
    WVar2 = *(WCHAR *)ppppWVar6;
    if (((((ushort)((ushort)WVar2 - 0x20) < 0x40) &&
         ((0x87fffffe03ff2001U >> ((ulonglong)((ushort)WVar2 - 0x20) & 0x3f) & 1) != 0)) ||
        ((ushort)(WVar2 + L'ﾟ') < 0x1a)) || (0x7f < (ushort)WVar2)) {
      uVar3 = param_1[2];
      if (uVar3 < (ulonglong)param_1[3]) {
        param_1[2] = uVar3 + 1;
        puVar7 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar7 = (undefined8 *)*param_1;
        }
        *(WCHAR *)((longlong)puVar7 + uVar3 * 2) = WVar2;
        *(undefined2 *)((longlong)puVar7 + uVar3 * 2 + 2) = 0;
      }
      else {
        FUN_180005b80(param_1,1,0,WVar2);
      }
    }
  }
  lVar4 = param_1[2];
  while (lVar4 != 0) {
    puVar7 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar7 = (undefined8 *)*param_1;
    }
    if (*(short *)((longlong)puVar7 + lVar4 * 2 + -2) != 0x20) break;
    param_1[2] = lVar4 + -1;
    puVar7 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar7 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)puVar7 + (lVar4 + -1) * 2) = 0;
    lVar4 = param_1[2];
  }
  if (7 < local_40) {
    ppppWVar6 = local_58;
    if ((0xfff < local_40 * 2 + 2) &&
       (ppppWVar6 = (LPWSTR ***)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppWVar6)))) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      pcVar5 = (code *)swi(3);
      puVar7 = (undefined8 *)(*pcVar5)();
      return puVar7;
    }
    thunk_FUN_1800c3030(ppppWVar6);
  }
  return param_1;
}


undefined8 FUN_180040170(longlong param_1,wchar_t *param_2)

{
  FILE *pFVar1;
  errno_t eVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  FILE *local_res10;
  FILE *local_res18 [2];

  local_res10 = (FILE *)0x0;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(wchar_t **)param_2;
  }
  eVar2 = _wfopen_s(&local_res10,param_2,L"wb");
  pFVar1 = local_res10;
  if ((eVar2 == 0) && (local_res10 != (FILE *)0x0)) {
    local_res18[0] = local_res10;
    FUN_180006ff0(param_1,(longlong *)local_res18);
    uVar3 = FUN_1800b1c20(pFVar1);
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return CONCAT44(extraout_var,eVar2) & 0xffffffffffffff00;
}


float FUN_1800401f0(longlong param_1)

{
  float fVar1;
  float fVar2;

  if (*(longlong *)(param_1 + 0x50) == 0) {
    return 1.0;
  }
  fVar2 = (*(float *)(*(longlong *)(param_1 + 0x50) + 0x18) / 100.0) * *(float *)(param_1 + 0x58);
  fVar1 = 0.6;
  if ((0.6 <= fVar2) && (fVar1 = 1.2, fVar2 <= 1.2)) {
    fVar1 = fVar2;
  }
  fVar1 = (float)FUN_1800ba150((uint)(fVar1 * 20.0));
  return fVar1 / 20.0;
}


void FUN_180040250(longlong param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined1 uVar2;

  if (((param_1 != 0) && (param_2 != (uint *)0x0)) && (DAT_180114090 != param_1)) {
    uVar1 = *param_2;
    *(float *)(param_1 + 0x5c) = (float)(uVar1 & 0xff) / 255.0;
    *(float *)(param_1 + 0x60) = (float)(uVar1 >> 8 & 0xff) / 255.0;
    *(float *)(param_1 + 100) = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
    if (DAT_180115620 != (code *)0x0) {
      uVar2 = (*DAT_180115620)(param_2);
      *(undefined1 *)(param_1 + 0x6e) = uVar2;
      return;
    }
    if ((DAT_180115618 != (int *)0x0) && (-1 < param_3)) {
      *(byte *)(param_1 + 0x6e) = (byte)(*DAT_180115618 >> ((byte)param_3 & 0x1f)) & 1;
    }
  }
  return;
}


void FUN_180040310(int *param_1,float *param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;

  iVar1 = 0;
  do {
    fVar2 = ((float)iVar1 + 1.0) * 0.125;
    fVar3 = fVar2 * param_5 * 0.6;
    local_d8 = (*param_2 + param_2[2] + fVar3) * DAT_180112008;
    local_d4 = (param_2[1] + param_2[3] + param_4 + fVar3) * DAT_180112008;
    local_d0 = (*param_2 - fVar3) * DAT_180112008;
    fVar2 = 1.0 - fVar2;
    local_cc = ((param_2[1] + param_4) - fVar3 * 0.7) * DAT_180112008;
    FUN_180071360(param_1,&local_d0,&local_d8,(int)(fVar2 * fVar2 * param_6 * 255.0 * 0.42) << 0x18,
                  (fVar3 + param_3) * DAT_180112008,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_1800404d0(wchar_t *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  errno_t eVar2;
  undefined4 extraout_var;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  FILE *local_88;
  undefined2 local_80;
  int local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_70;
  int local_6c;
  int local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStack_a8;
  local_88 = (FILE *)0x0;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(wchar_t **)param_1;
  }
  eVar2 = _wfopen_s(&local_88,param_1,L"wb");
  puVar9 = auStack_a8;
  if ((eVar2 != 0) || (local_88 == (FILE *)0x0)) {
    uVar5 = CONCAT44(extraout_var,eVar2) & 0xffffffffffffff00;
    goto LAB_180040731;
  }
  pauVar7 = (undefined1 (*) [32])0x1;
  local_68 = -param_5;
  local_7a = 0;
  local_4c = 0;
  local_80 = 0x4d42;
  local_5c = 0;
  uStack_54 = 0;
  local_70 = 0x28;
  local_64 = 0x200001;
  local_76 = 0x36;
  local_7e = param_4 * param_5 * 4 + 0x36;
  local_6c = param_4;
  FUN_1800b2120(&local_80,0xe,1,(longlong)local_88);
  FUN_1800b2120(&local_70,0x28,1,(longlong)local_88);
  uVar5 = (longlong)param_4 * 4;
  if (uVar5 == 0) {
    puVar11 = (undefined1 *)0x0;
    pauVar7 = (undefined1 (*) [32])0x0;
LAB_18004064d:
    puVar9 = auStack_a8;
    puVar8 = auStack_a8;
    uVar10 = 0;
    if (0 < param_5) {
      do {
        lVar3 = (ulonglong)uVar10 * (longlong)param_3 + param_2;
        if (0 < param_4) {
          iVar12 = 0;
          iVar13 = param_4;
          do {
            *(undefined1 *)((longlong)*pauVar7 + (longlong)iVar12) =
                 *(undefined1 *)(lVar3 + 2 + (longlong)iVar12);
            *(undefined1 *)((longlong)*pauVar7 + (longlong)iVar12 + 1) =
                 *(undefined1 *)(lVar3 + 1 + (longlong)iVar12);
            *(undefined1 *)((longlong)*pauVar7 + (longlong)iVar12 + 2) =
                 *(undefined1 *)(lVar3 + iVar12);
            lVar4 = (longlong)iVar12;
            iVar12 = iVar12 + 4;
            *(undefined1 *)((longlong)*pauVar7 + lVar4 + 3) = 0xff;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        FUN_1800b2120(pauVar7,1,(longlong)puVar11 - (longlong)pauVar7,(longlong)local_88);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < param_5);
    }
    uVar5 = FUN_1800b1c20(local_88);
    if (pauVar7 != (undefined1 (*) [32])0x0) {
      pauVar6 = pauVar7;
      if ((ulonglong)((longlong)puVar11 - (longlong)pauVar7) < 0x1000) goto LAB_18004070a;
      pauVar6 = *(undefined1 (**) [32])(pauVar7[-1] + 0x18);
      pauVar7 = (undefined1 (*) [32])((longlong)pauVar7 + (-8 - (longlong)pauVar6));
      puVar9 = auStack_a8;
      if ((undefined1 (*) [32])0x1f < pauVar7) goto LAB_180040703;
      goto LAB_18004070d;
    }
  }
  else {
    if (0x7fffffffffffffff < uVar5) {
                    // WARNING: Subroutine does not return
      FUN_180011700();
    }
    if (uVar5 < 0x1000) {
      pauVar7 = (undefined1 (*) [32])FUN_1800a5010(uVar5);
LAB_180040634:
      puVar11 = *pauVar7 + uVar5;
      FUN_1800d22d0(pauVar7,0,uVar5);
      goto LAB_18004064d;
    }
    if (uVar5 + 0x27 <= uVar5) {
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    lVar3 = FUN_1800a5010(uVar5 + 0x27);
    if (lVar3 != 0) {
      pauVar7 = (undefined1 (*) [32])(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(pauVar7[-1] + 0x18) = lVar3;
      goto LAB_180040634;
    }
LAB_180040703:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar8 = auStack_a0;
    pauVar6 = pauVar7;
LAB_18004070a:
    puVar9 = puVar8;
LAB_18004070d:
    *(undefined8 *)(puVar9 + -8) = 0x180040715;
    uVar5 = thunk_FUN_1800c3030(pauVar6);
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_180040731:
  *(undefined8 *)(puVar9 + -8) = 0x18004073e;
  return uVar5;
}


longlong * FUN_180040760(longlong *param_1,byte *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined4 local_58;

  puVar10 = auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_58 = 1;
  do {
    if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
      return param_1;
    }
    iVar7 = isalnum((uint)*param_2);
    if (iVar7 == 0) {
      uVar6 = 0x5f;
    }
    else {
      iVar7 = tolower((uint)*param_2);
      uVar6 = (undefined1)iVar7;
    }
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    if (uVar2 < uVar3) {
      param_1[2] = uVar2 + 1;
      if (uVar3 < 0x10) {
        *(undefined1 *)((longlong)param_1 + uVar2) = uVar6;
        *(undefined1 *)((longlong)param_1 + uVar2 + 1) = 0;
      }
      else {
        lVar8 = *param_1;
        *(undefined1 *)(lVar8 + uVar2) = uVar6;
        *(undefined1 *)(lVar8 + 1 + uVar2) = 0;
      }
    }
    else {
      if (uVar2 == 0x7fffffffffffffff) {
                    // WARNING: Subroutine does not return
        FUN_1800116e0();
      }
      uVar11 = uVar2 + 1 | 0xf;
      if (0x7fffffffffffffff < uVar11) {
        uVar11 = 0x7fffffffffffffff;
        uVar9 = 0x8000000000000027;
LAB_180040887:
        lVar8 = FUN_1800a5010(uVar9);
        if (lVar8 != 0) {
          puVar12 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
          puVar12[-1] = lVar8;
          goto LAB_1800408ae;
        }
LAB_180040945:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar10 = auStack_70;
LAB_18004094c:
                    // WARNING: Subroutine does not return
        *(undefined **)(puVar10 + -8) = &UNK_180040951;
        FUN_180011350();
      }
      if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
        uVar11 = 0x7fffffffffffffff;
        uVar9 = 0x8000000000000027;
        goto LAB_180040887;
      }
      uVar9 = (uVar3 >> 1) + uVar3;
      if (uVar11 < uVar9) {
        uVar11 = uVar9;
      }
      uVar1 = uVar11 + 1;
      if (uVar1 == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        if (0xfff < uVar1) {
          uVar9 = uVar11 + 0x28;
          if (uVar9 <= uVar1) goto LAB_18004094c;
          goto LAB_180040887;
        }
        puVar12 = (undefined8 *)FUN_1800a5010(uVar1);
      }
LAB_1800408ae:
      param_1[2] = uVar2 + 1;
      param_1[3] = uVar11;
      if (uVar3 < 0x10) {
        FUN_1800d1c20(puVar12,param_1,uVar2);
        *(undefined1 *)((longlong)puVar12 + uVar2) = uVar6;
        *(undefined1 *)((longlong)puVar12 + uVar2 + 1) = 0;
      }
      else {
        puVar4 = (undefined8 *)*param_1;
        FUN_1800d1c20(puVar12,puVar4,uVar2);
        *(undefined1 *)((longlong)puVar12 + uVar2) = uVar6;
        *(undefined1 *)((longlong)puVar12 + uVar2 + 1) = 0;
        if (uVar3 + 1 < 0x1000) {
          thunk_FUN_1800c3030(puVar4);
        }
        else {
          if (0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar4[-1])))
          goto LAB_180040945;
          thunk_FUN_1800c3030((LPVOID)puVar4[-1]);
        }
      }
      *param_1 = (longlong)puVar12;
    }
    param_2 = param_2 + 1;
  } while( true );
}


double FUN_180040960(longlong *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                    ulonglong *param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint local_res10 [4];
  uint local_res20;

  uVar13 = (ulonglong)param_4;
  local_res10[0] = local_res10[0] & 0xffffff00;
  uVar15 = (ulonglong)param_4;
  local_res20 = param_4;
  FUN_180011f10(param_6,(ulonglong)param_4 * (ulonglong)param_5 * 4,(byte *)local_res10);
  uVar12 = 0;
  local_res10[0] = 0;
  dVar25 = (double)param_2 / (double)uVar13;
  dVar19 = (double)param_5;
  dVar27 = (double)param_3 / dVar19;
  if (param_5 != 0) {
    do {
      uVar18 = 0;
      dVar19 = (double)((uint)uVar12 + 1) * dVar27;
      dVar24 = (double)uVar12 * dVar27;
      uVar14 = (uint)uVar12;
      if ((int)uVar13 != 0) {
        do {
          dVar2 = 0.0;
          dVar5 = 0.0;
          dVar6 = 0.0;
          dVar7 = 0.0;
          dVar8 = 0.0;
          uVar16 = (longlong)dVar24 & 0xffffffff;
          dVar3 = (double)uVar18 * dVar25;
          dVar4 = (double)((int)uVar18 + 1) * dVar25;
          if ((uint)(longlong)dVar24 < param_3) {
            dVar20 = FUN_1800bb190();
            dVar2 = 0.0;
            dVar5 = 0.0;
            dVar6 = 0.0;
            dVar7 = 0.0;
            dVar8 = 0.0;
            do {
              if ((uint)(longlong)dVar20 <= (uint)uVar16) break;
              uVar14 = (uint)uVar16 + 1;
              dVar9 = (double)uVar14;
              if (dVar19 <= (double)uVar14) {
                dVar9 = dVar19;
              }
              dVar21 = (double)uVar16;
              if ((double)uVar16 <= dVar24) {
                dVar21 = dVar24;
              }
              if ((0.0 < dVar9 - dVar21) && (uVar13 = (ulonglong)dVar3, (uint)uVar13 < param_2)) {
                dVar22 = FUN_1800bb190();
                do {
                  if ((uint)(longlong)dVar22 <= (uint)uVar13) break;
                  uVar17 = (uint)uVar13 + 1;
                  dVar26 = (double)uVar17;
                  if (dVar4 <= (double)uVar17) {
                    dVar26 = dVar4;
                  }
                  dVar23 = (double)(uVar13 & 0xffffffff);
                  if ((double)(uVar13 & 0xffffffff) <= dVar3) {
                    dVar23 = dVar3;
                  }
                  if (0.0 < dVar26 - dVar23) {
                    dVar26 = (dVar26 - dVar23) * (dVar9 - dVar21);
                    dVar8 = dVar8 + dVar26;
                    lVar11 = (uVar13 & 0xffffffff) * 4 + uVar16 * param_2 * 4;
                    lVar1 = *param_1;
                    dVar26 = ((double)*(byte *)(lVar1 + 3 + lVar11) / 255.0) * dVar26;
                    dVar2 = dVar2 + dVar26;
                    dVar5 = dVar5 + (double)*(byte *)(lVar1 + lVar11) * dVar26;
                    dVar6 = dVar6 + (double)*(byte *)(lVar1 + 1 + lVar11) * dVar26;
                    dVar7 = dVar7 + (double)*(byte *)(lVar1 + 2 + lVar11) * dVar26;
                  }
                  uVar13 = (ulonglong)uVar17;
                } while (uVar17 < param_2);
              }
              uVar16 = (ulonglong)uVar14;
            } while (uVar14 < param_3);
            uVar13 = (ulonglong)local_res20;
          }
          lVar11 = uVar18 * 4 + uVar12 * uVar15 * 4;
          uVar16 = *param_6;
          if (0.0 < dVar2) {
            *(char *)(uVar16 + lVar11) = (char)(int)(dVar5 / dVar2 + 0.5);
            *(char *)(uVar16 + 1 + lVar11) = (char)(int)(dVar6 / dVar2 + 0.5);
            *(char *)(uVar16 + 2 + lVar11) = (char)(int)(dVar7 / dVar2 + 0.5);
          }
          if (dVar8 <= 0.0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (undefined1)(int)((dVar2 / dVar8) * 255.0 + 0.5);
          }
          uVar14 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar14;
          *(undefined1 *)(uVar16 + 3 + lVar11) = uVar10;
        } while (uVar14 < (uint)uVar13);
        uVar15 = uVar13;
        uVar14 = local_res10[0];
      }
      local_res10[0] = uVar14 + 1;
      uVar12 = (ulonglong)local_res10[0];
    } while (local_res10[0] < param_5);
  }
  return dVar19;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180040d70(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  float fVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  char cVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  byte *pbVar23;
  float *pfVar24;
  int *piVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  undefined1 auStackY_208 [32];
  float local_1c8;
  char cStack_1c4;
  undefined1 uStack_1c3;
  char cStack_1c2;
  undefined1 uStack_1c1;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  int *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
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
  byte local_128 [48];
  ulonglong local_f8;

  local_f8 = DAT_180112300 ^ (ulonglong)auStackY_208;
  piVar25 = *(int **)(param_1 + 0x1108);
  local_1c8 = DAT_180112008 * 220.0;
  local_198 = 0x4160000041600000;
  uStack_190 = 0x44140000434e0000;
  fVar26 = DAT_180112008 * 606.0;
  local_1c0 = DAT_180112008 * 14.0;
  cStack_1c4 = SUB41(fVar26,0);
  uStack_1c3 = (undefined1)((uint)fVar26 >> 8);
  cStack_1c2 = (char)((uint)fVar26 >> 0x10);
  uStack_1c1 = (undefined1)((uint)fVar26 >> 0x18);
  local_1bc = local_1c0;
  local_1a0 = piVar25;
  FUN_180071360(piVar25,&local_1c0,&local_1c8,0xff1a120e,local_1c0,0);
  FUN_1800422b0(piVar25,(float *)&local_198,0xdffffff,14.0,1.0);
  if (*(longlong *)(param_1 + 0x1398) == 0) {
    if (*(longlong *)(param_1 + 5000) != 0) {
      local_1c0 = 6.0 / *(float *)(param_1 + 0x1390);
      local_1c8 = 59.0 / *(float *)(param_1 + 0x1390);
      local_1b8 = DAT_180112008 * 70.0;
      local_1bc = 14.0 / *(float *)(param_1 + 0x1394);
      local_1b0 = DAT_180112008 * 32.0;
      local_1b4 = DAT_180112008 * 68.5;
      local_1ac = DAT_180112008 * 36.5;
      fVar26 = 59.0 / *(float *)(param_1 + 0x1394);
      cStack_1c4 = SUB41(fVar26,0);
      uStack_1c3 = (undefined1)((uint)fVar26 >> 8);
      cStack_1c2 = (char)((uint)fVar26 >> 0x10);
      uStack_1c1 = (undefined1)((uint)fVar26 >> 0x18);
      FUN_1800700b0(piVar25,*(longlong *)(param_1 + 5000),(undefined8 *)&local_1b0,
                    (undefined8 *)&local_1b8,(undefined8 *)&local_1c0,(undefined8 *)&local_1c8,
                    0xffff884a);
    }
  }
  else {
    fVar26 = (float)FUN_1800ba150((uint)(DAT_180112008 * 52.5 - *(float *)(param_1 + 0x13a4) * 0.5))
    ;
    fVar27 = (float)FUN_1800ba150((uint)(DAT_180112008 * 51.0 - *(float *)(param_1 + 0x13a0) * 0.5))
    ;
    fVar29 = fVar27 + *(float *)(param_1 + 0x13a0);
    fVar30 = fVar26 + *(float *)(param_1 + 0x13a4);
    uVar8 = FUN_18002e340(0xffff9361,0xffff7d34,0.56);
    uVar9 = FUN_18002e340(0xffff9361,0xffff7d34,0.93);
    uVar10 = FUN_18002e340(0xffff9361,0xffff7d34,0.54);
    uVar11 = FUN_18002e340(0xffff9361,0xffff7d34,0.17);
    FUN_1800765a0(piVar25,*(undefined8 *)(param_1 + 0x1398));
    FUN_180076280(piVar25,6,4);
    sVar3 = (short)piVar25[0xd];
    **(short **)(piVar25 + 0x12) = sVar3;
    *(longlong *)(piVar25 + 0x12) = *(longlong *)(piVar25 + 0x12) + 2;
    **(short **)(piVar25 + 0x12) = sVar3 + 1;
    *(longlong *)(piVar25 + 0x12) = *(longlong *)(piVar25 + 0x12) + 2;
    **(short **)(piVar25 + 0x12) = sVar3 + 2;
    *(longlong *)(piVar25 + 0x12) = *(longlong *)(piVar25 + 0x12) + 2;
    **(short **)(piVar25 + 0x12) = sVar3;
    *(longlong *)(piVar25 + 0x12) = *(longlong *)(piVar25 + 0x12) + 2;
    **(short **)(piVar25 + 0x12) = sVar3 + 2;
    *(longlong *)(piVar25 + 0x12) = *(longlong *)(piVar25 + 0x12) + 2;
    **(short **)(piVar25 + 0x12) = sVar3 + 3;
    pfVar22 = *(float **)(piVar25 + 0x10);
    *(longlong *)(piVar25 + 0x12) = *(longlong *)(piVar25 + 0x12) + 2;
    *pfVar22 = fVar27;
    pfVar22[1] = fVar26;
    *(undefined8 *)(*(longlong *)(piVar25 + 0x10) + 8) = 0;
    *(int *)(*(longlong *)(piVar25 + 0x10) + 0x10) = (int)uVar11;
    lVar15 = *(longlong *)(piVar25 + 0x10);
    piVar25[0xd] = piVar25[0xd] + 1;
    pfVar22 = (float *)(lVar15 + 0x14);
    *(float **)(piVar25 + 0x10) = pfVar22;
    *pfVar22 = fVar29;
    *(float *)(lVar15 + 0x18) = fVar26;
    *(undefined8 *)(*(longlong *)(piVar25 + 0x10) + 8) = 0x3f800000;
    *(int *)(*(longlong *)(piVar25 + 0x10) + 0x10) = (int)uVar10;
    lVar15 = *(longlong *)(piVar25 + 0x10);
    piVar25[0xd] = piVar25[0xd] + 1;
    pfVar22 = (float *)(lVar15 + 0x14);
    *(float **)(piVar25 + 0x10) = pfVar22;
    *pfVar22 = fVar29;
    *(float *)(lVar15 + 0x18) = fVar30;
    lVar15 = *(longlong *)(piVar25 + 0x10);
    *(undefined4 *)(lVar15 + 8) = 0x3f800000;
    *(undefined4 *)(lVar15 + 0xc) = 0x3f800000;
    *(int *)(*(longlong *)(piVar25 + 0x10) + 0x10) = (int)uVar9;
    lVar15 = *(longlong *)(piVar25 + 0x10);
    piVar25[0xd] = piVar25[0xd] + 1;
    pfVar22 = (float *)(lVar15 + 0x14);
    *(float **)(piVar25 + 0x10) = pfVar22;
    *pfVar22 = fVar27;
    *(float *)(lVar15 + 0x18) = fVar30;
    lVar15 = *(longlong *)(piVar25 + 0x10);
    *(undefined4 *)(lVar15 + 8) = 0;
    *(undefined4 *)(lVar15 + 0xc) = 0x3f800000;
    *(int *)(*(longlong *)(piVar25 + 0x10) + 0x10) = (int)uVar8;
    *(longlong *)(piVar25 + 0x10) = *(longlong *)(piVar25 + 0x10) + 0x14;
    piVar25[0xd] = piVar25[0xd] + 1;
    FUN_1800760a0(piVar25);
  }
  FUN_180042d40(piVar25,(int *)**(undefined8 **)(param_1 + 0x1110),82.0,44.0,-NAN,"MOVER1CK",1.33);
  iVar7 = 0;
  do {
    iVar19 = iVar7;
    if (0x2e < iVar7) break;
    bVar17 = "Rob Run"[iVar7];
    if ((0xbf < bVar17) && (0x2f < iVar7 + 2)) break;
    cVar18 = "Rob Run"[(longlong)iVar7 + 1];
    if ((bVar17 == 0xd0) && ((byte)(cVar18 + 0x50U) < 0x10)) {
      bVar17 = 0xd0;
      local_128[(longlong)iVar7 + 1] = cVar18 - 0x20;
      iVar19 = iVar7 + 1;
    }
    else if (bVar17 == 0xd1) {
      if ((byte)(cVar18 + 0x80U) < 0x10) {
        bVar17 = 0xd0;
        local_128[(longlong)iVar7 + 1] = cVar18 + 0x20;
        iVar19 = iVar7 + 1;
      }
      else if (cVar18 == -0x6f) {
        local_128[(longlong)iVar7 + 1] = 0x81;
        bVar17 = 0xd0;
        iVar19 = iVar7 + 1;
      }
    }
    else if ((byte)(bVar17 + 0x9f) < 0x1a) {
      bVar17 = bVar17 - 0x20;
    }
    iVar19 = iVar19 + 1;
    local_128[iVar7] = bVar17;
    iVar7 = iVar19;
  } while ("Rob Run"[iVar19] != '\0');
  lVar15 = *(longlong *)(param_1 + 0x1110);
  local_128[iVar19] = 0;
  FUN_180042d40(piVar25,*(int **)(lVar15 + 0x10),82.0,65.5,-3.3547604e+38,local_128,1.8);
  lVar15 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar9 = *(ulonglong *)(param_1 + 0x18);
    lVar15 = *(longlong *)(param_1 + 8);
    lVar16 = *(longlong *)(param_1 + 0x10);
    uVar8 = *(longlong *)(param_1 + 0x20) + uVar9;
    do {
      strcmp((char *)**(undefined8 **)(lVar15 + (lVar16 - 1U & uVar9) * 8),"Miscellaneous");
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
    lVar15 = *(longlong *)(param_1 + 0x80);
    piVar25 = local_1a0;
  }
  fVar27 = 91.0;
  uVar8 = FUN_1800bba90();
  fVar26 = FUN_1800ba070(54.0,(float)uVar8);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar8 = 0;
    do {
      pcVar14 = *(char **)(*(longlong *)(param_1 + 8) +
                          (*(longlong *)(param_1 + 0x18) + uVar8 &
                          *(longlong *)(param_1 + 0x10) - 1U) * 8);
      pcVar12 = *(char **)pcVar14;
      iVar7 = strcmp(pcVar12,"Miscellaneous");
      if ((iVar7 != 0) && (pcVar14[0x14] == '\0')) {
        iVar7 = *(int *)(param_1 + 0x11d8);
        pcVar12 = FUN_180043a40(pcVar12);
        uVar13 = FUN_18002ecb0(*(uint *)(pcVar14 + 0x10));
        uVar13 = FUN_18002e750(param_1,pcVar14,&DAT_1800deb70,fVar27,fVar26,(uint)uVar13,pcVar12,
                               iVar7 == (int)uVar8);
        if ((char)((ulonglong)uVar13 >> 0x30) != '\0') {
          *(int *)(param_1 + 0x11d8) = (int)uVar8;
        }
        fVar27 = fVar27 + fVar26 + 6.0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulonglong *)(param_1 + 0x20));
  }
  iVar7 = strcmp((char *)**(undefined8 **)
                           (*(longlong *)(param_1 + 8) +
                           ((longlong)*(int *)(param_1 + 0x11d8) + *(longlong *)(param_1 + 0x18) &
                           *(longlong *)(param_1 + 0x10) - 1U) * 8),"Miscellaneous");
  pcVar14 = FUN_180043a40("Settings");
  uVar13 = FUN_18002e750(param_1,"railgear",&DAT_1800de838,fVar27,fVar26,0xf013,pcVar14,iVar7 == 0);
  if (((char)((ulonglong)uVar13 >> 0x30) != '\0') && (uVar8 = 0, *(longlong *)(param_1 + 0x20) != 0)
     ) {
    do {
      lVar16 = *(longlong *)(param_1 + 0x18);
      lVar20 = *(longlong *)(param_1 + 8);
      uVar9 = lVar16 + uVar8 & *(longlong *)(param_1 + 0x10) - 1U;
      iVar7 = strcmp((char *)**(undefined8 **)(lVar20 + uVar9 * 8),"Miscellaneous");
      if (iVar7 == 0) {
        *(int *)(param_1 + 0x11d8) = (int)uVar8;
        uVar10 = 0;
        if (*(longlong *)(*(longlong *)(lVar20 + uVar9 * 8) + 0x38) != 0) {
          do {
            lVar16 = *(longlong *)
                      (*(longlong *)(param_1 + 8) +
                      (lVar16 + uVar8 & *(longlong *)(param_1 + 0x10) - 1U) * 8);
            lVar20 = 0;
            do {
              lVar21 = lVar20 + 1;
              if (*(char *)(**(longlong **)
                              (*(longlong *)(lVar16 + 0x20) +
                              (*(longlong *)(lVar16 + 0x30) + uVar10 &
                              *(longlong *)(lVar16 + 0x28) - 1U) * 8) + lVar20) !=
                  (&DAT_1800da400)[lVar20]) goto LAB_18004155c;
              lVar20 = lVar21;
            } while (lVar21 != 5);
            *(int *)(param_1 + 0x11dc + uVar8 * 4) = (int)uVar10;
LAB_18004155c:
            lVar16 = *(longlong *)(param_1 + 0x18);
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ulonglong *)
                             (*(longlong *)
                               (*(longlong *)(param_1 + 8) +
                               (lVar16 + uVar8 & *(longlong *)(param_1 + 0x10) - 1U) * 8) + 0x38));
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulonglong *)(param_1 + 0x20));
  }
  if (lVar15 != 0) {
    local_188 = *(longlong *)(param_1 + 0x80);
    local_1b0 = DAT_180112008 * 208.0;
    uVar8 = 0x9ffffff;
    local_1b8 = DAT_180112008 * 26.0;
    local_1ac = DAT_180112008 * 596.0;
    local_1b4 = DAT_180112008 * 560.0;
    FUN_180071360(piVar25,&local_1b8,&local_1b0,0x9ffffff,DAT_180112008 * 11.0,0);
    uVar6 = local_1a4._3_1_;
    uVar9 = 0;
    local_1c0 = 0.0;
    do {
      iVar7 = (int)uVar9;
      fVar27 = (float)iVar7 * 88.0 + 30.0;
      FUN_180062940((&PTR_DAT_1800deb48)[uVar9]);
      local_1b0 = fVar27 * DAT_180112008;
      local_1ac = DAT_180112008 * 564.0;
      FUN_1800670f0((undefined8 *)&local_1b0);
      fVar26 = FUN_1800ba000(1.0,DAT_180112008 * 28.0);
      local_1b8 = FUN_1800ba000(1.0,DAT_180112008 * 86.0);
      pfVar24 = (float *)0x0;
      pfVar22 = &local_1b8;
      local_1b4 = fVar26;
      uVar9 = FUN_180099a80(&DAT_1800deb84,pfVar22,0);
      fVar26 = (float)FUN_180056db0();
      uVar10 = FUN_180059410(0,pfVar22,pfVar24,uVar8);
      lVar15 = FUN_1800593a0();
      FUN_180062210();
      cVar18 = '\0';
      if (*(char *)(param_1 + 0x1160) == '\0') {
        cVar18 = (char)uVar10;
      }
      cStack_1c2 = (char)uVar9;
      uStack_1c1 = uVar6;
      if (cStack_1c2 == '\0') {
LAB_1800417b5:
        if (*(uint *)(local_188 + 0x38) == (uint)(iVar7 == 0)) goto LAB_1800417bb;
        uVar28 = 0;
      }
      else {
        uVar28 = (uint)(iVar7 == 0);
        if (*(uint *)(local_188 + 0x38) != uVar28) {
          *(uint *)(local_188 + 0x38) = uVar28;
          *(undefined1 *)(param_1 + 0x11d4) = 1;
          goto LAB_1800417b5;
        }
LAB_1800417bb:
        uVar28 = 0x3f800000;
      }
      local_1c8 = fVar26;
      cStack_1c4 = cVar18;
      uStack_1c3 = (char)lVar15;
      uVar13 = FUN_180043120((float *)(param_1 + 0x1118),(uint)fVar26 ^ 0x1a6,(ulonglong)uVar28);
      fVar29 = (float)uVar13;
      if (cVar18 == '\0') {
        uVar28 = 0;
      }
      else {
        uVar28 = 0x3f800000;
      }
      uVar13 = FUN_180043120((float *)(param_1 + 0x1118),fVar26,(ulonglong)uVar28);
      fVar26 = (float)uVar13;
      if (0.01 < fVar29) {
        local_1a4 = DAT_180112008 * 564.0;
        local_1a8 = fVar27 * DAT_180112008;
        local_180 = (fVar27 + 86.0) * DAT_180112008;
        local_17c = DAT_180112008 * 592.0;
        uVar28 = (int)(fVar29 * 20.0) << 0x18 | 0xffffff;
        uVar8 = (ulonglong)uVar28;
        FUN_180071360(local_1a0,&local_1a8,&local_180,uVar28,DAT_180112008 * 8.0,0);
      }
      iVar7 = 0;
      fVar30 = 0.0;
      uVar9 = (ulonglong)(uint)local_1c0;
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1110) + 0x60);
      pbVar23 = (&PTR_DAT_1800deb48)[(uint)local_1c0];
      bVar17 = *pbVar23;
      fVar5 = local_1c0;
      while (local_1c0 = fVar5, bVar17 != 0) {
        bVar17 = *pbVar23;
        uVar28 = (uint)bVar17;
        if (bVar17 < 0x80) {
          lVar16 = 1;
LAB_1800419ae:
          pbVar23 = pbVar23 + lVar16;
          if (uVar28 < 0x10000) goto LAB_1800419c9;
        }
        else {
          pbVar1 = pbVar23 + 1;
          uVar28 = (uint)bVar17;
          if (((bVar17 & 0xe0) == 0xc0) && ((*pbVar1 & 0xc0) == 0x80)) {
            lVar16 = 2;
            uVar28 = *pbVar1 & 0x3f | (uVar28 & 0x1f) << 6;
            goto LAB_1800419ae;
          }
          if (((bVar17 & 0xf0) == 0xe0) && ((*pbVar1 & 0xc0) == 0x80)) {
            bVar2 = pbVar23[2];
            uVar8 = (ulonglong)bVar2;
            if ((bVar2 & 0xc0) == 0x80) {
              uVar8 = (ulonglong)(bVar2 & 0x3f);
              lVar16 = 3;
              uVar28 = (*pbVar1 & 0x3f | (uVar28 & 0xf) << 6) << 6 | bVar2 & 0x3f;
              goto LAB_1800419ae;
            }
          }
          if (((bVar17 & 0xf8) == 0xf0) && ((*pbVar1 & 0xc0) == 0x80)) {
            bVar17 = pbVar23[2];
            uVar8 = (ulonglong)bVar17;
            if (((bVar17 & 0xc0) == 0x80) && ((pbVar23[3] & 0xc0) == 0x80)) {
              uVar8 = (ulonglong)(bVar17 & 0x3f);
              lVar16 = 4;
              uVar28 = ((*pbVar1 & 0x3f | (uVar28 & 7) << 6) << 6 | bVar17 & 0x3f) << 6 |
                       pbVar23[3] & 0x3f;
              goto LAB_1800419ae;
            }
          }
          pbVar23 = pbVar23 + 1;
          uVar28 = 0x3f;
LAB_1800419c9:
          lVar16 = FUN_180072830(lVar15,(ushort)uVar28);
          if (lVar16 != 0) {
            fVar30 = fVar30 + *(float *)(lVar16 + 4);
          }
        }
        iVar7 = iVar7 + 1;
        fVar5 = local_1c0;
        bVar17 = *pbVar23;
      }
      fVar30 = fVar30 / DAT_180112008;
      iVar19 = iVar7 + -1;
      if (iVar7 < 1) {
        iVar19 = 0;
      }
      puVar4 = (&PTR_DAT_1800deb48)[uVar9];
      if (0.0 < fVar26) {
        if (fVar26 < 1.0) {
          FUN_1800521a0(&local_178,0xff7c6256);
          FUN_1800521a0(&local_168,0xffbca498);
          local_158 = (local_168 - local_178) * fVar26 + local_178;
          local_154 = (local_164 - local_174) * fVar26 + local_174;
          local_150 = (local_160 - local_170) * fVar26 + local_170;
          local_14c = (local_15c - local_16c) * fVar26 + local_16c;
          fVar26 = (float)FUN_180051e70(&local_158);
        }
        else {
          fVar26 = -NAN;
        }
      }
      else {
        fVar26 = -3.3547604e+38;
      }
      if (0.0 < fVar29) {
        if (fVar29 < 1.0) {
          FUN_1800521a0(&local_148,(ulonglong)(uint)fVar26);
          FUN_1800521a0(&local_138,0xfffaf2ee);
          local_198 = CONCAT44((local_134 - local_144) * fVar29 + local_144,
                               (local_138 - local_148) * fVar29 + local_148);
          uStack_190 = CONCAT44((local_12c - local_13c) * fVar29 + local_13c,
                                (local_130 - local_140) * fVar29 + local_140);
          fVar26 = (float)FUN_180051e70((float *)&local_198);
        }
        else {
          fVar26 = -NAN;
        }
      }
      FUN_180042d40(local_1a0,*(int **)(*(longlong *)(param_1 + 0x1110) + 0x60),
                    (fVar27 + 43.0) - (fVar30 + (float)iVar19 * 0.63) * 0.5,578.0,fVar26,puVar4,0.63
                   );
      local_1c0 = (float)((int)fVar5 + 1);
      uVar9 = (ulonglong)(uint)local_1c0;
    } while ((int)local_1c0 < 2);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180041c50(undefined8 *param_1,char *param_2,float *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  byte *pbVar6;
  char cVar7;
  ulonglong uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_1d8 [32];
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  byte local_170 [40];
  byte local_148 [96];
  ulonglong local_e8;

  local_e8 = DAT_180112300 ^ (ulonglong)auStackY_1d8;
  fVar14 = *param_3;
  local_178 = fVar14 + param_3[2];
  fVar16 = param_3[1] + 38.5;
  local_17c = 0x41e00000;
  fVar13 = local_178 - fVar14;
  local_184 = fVar16 - 6.0;
  local_188 = fVar14;
  local_180 = fVar13;
  uVar3 = FUN_18002b220((longlong)param_1,param_2,(byte *)"slider",&local_188);
  fVar15 = 0.0;
  cVar7 = (char)((ulonglong)uVar3 >> 0x28);
  if (cVar7 != '\0') {
    lVar4 = FUN_180056d70();
    fVar9 = ((*(float *)(lVar4 + 0xe0) / DAT_180112008 - fVar14) - 8.0) / (fVar13 - 16.0);
    if (0.0 <= fVar9) {
      fVar12 = 1.0;
      if (fVar9 <= 1.0) {
        fVar12 = fVar9;
      }
    }
    else {
      fVar12 = 0.0;
    }
    fVar9 = *(float *)(param_2 + 0x1c);
    fVar11 = (*(float *)(param_2 + 0x20) - fVar9) * fVar12 + fVar9;
    uVar8 = FUN_1800bbe80();
    fVar12 = *(float *)(param_2 + 0x28);
    if (fVar12 <= 0.0) {
      fVar9 = (float)FUN_1800ba150((uint)((float)uVar8 * fVar11));
      fVar9 = fVar9 / (float)uVar8;
    }
    else {
      fVar11 = (float)FUN_1800ba150((uint)((fVar11 - fVar9) / fVar12));
      fVar9 = fVar11 * fVar12 + fVar9;
    }
    if (fVar9 != *(float *)(param_2 + 0x18)) {
      *(float *)(param_2 + 0x18) = fVar9;
      if (*(longlong *)(param_2 + 0xa0) != 0) {
        *(undefined1 *)(*(longlong *)(param_2 + 0xa0) + 0x14) = 1;
      }
      *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
    }
  }
  if ((char)((ulonglong)uVar3 >> 0x20) == '\0' && cVar7 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x3f800000;
  }
  uVar3 = FUN_180043120((float *)(param_1 + 2),(int)uVar3,(ulonglong)uVar10);
  FUN_180043a40(*(char **)(param_2 + 0x30));
  FUN_1800491c0(local_170,0x20,0x1800de848,(ulonglong)*(uint *)(param_2 + 0x24));
  fVar12 = param_3[1] + 12.0 + 13.7;
  pfVar5 = FUN_180071ff0(*(int **)(param_1[1] + 0x48),&local_188,
                         (float)(*(int **)(param_1[1] + 0x48))[5],3.4028235e+38,0.0,local_170,
                         (byte *)0x0,(undefined8 *)0x0);
  piVar1 = (int *)*param_1;
  fVar9 = *pfVar5 / DAT_180112008;
  piVar2 = *(int **)(param_1[1] + 0x48);
  uVar10 = FUN_1800ba150((uint)(fVar12 * DAT_180112008 - (float)piVar2[0x19]));
  local_188 = (float)FUN_1800ba150((uint)((local_178 - fVar9) * DAT_180112008));
  local_184 = (float)uVar10;
  FUN_1800716c0(piVar1,piVar2,(float)piVar2[5],&local_188,-NAN,local_170,(byte *)0x0,0.0,
                (float *)0x0);
  pbVar6 = (byte *)FUN_180043a40(*(char **)(param_2 + 8));
  pbVar6 = FUN_180028b30(*(int **)(param_1[1] + 0x38),pbVar6,(fVar13 - fVar9) - 10.0,local_148,0x60)
  ;
  FUN_180042760((int *)*param_1,*(int **)(param_1[1] + 0x38),fVar14,fVar12,-NAN,pbVar6);
  fVar9 = *(float *)(param_2 + 0x1c);
  if (*(float *)(param_2 + 0x20) <= fVar9) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (*(float *)(param_2 + 0x18) - fVar9) / (*(float *)(param_2 + 0x20) - fVar9);
  }
  fVar12 = fVar16 + 5.0;
  if (0.0 < fVar13) {
    local_174 = fVar12 * DAT_180112008;
    local_188 = (fVar14 + fVar13) * DAT_180112008;
    local_184 = (fVar12 + 6.0) * DAT_180112008;
    local_178 = fVar14 * DAT_180112008;
    FUN_180071360((int *)*param_1,&local_178,&local_188,0xff2b1e18,DAT_180112008 * 3.0,0);
  }
  uVar10 = DAT_18011200c;
  if (0.0 < fVar9) {
    local_188 = fVar14;
    local_184 = fVar12;
    local_180 = FUN_1800ba000(6.0,fVar9 * fVar13);
    local_17c = 0x40c00000;
    FUN_180028890((int *)*param_1,&local_188,uVar10,3.0,0);
  }
  fVar16 = fVar16 + 8.0;
  fVar14 = (fVar13 - 16.0) * fVar9 + fVar14 + 8.0;
  if (0.01 < (float)uVar3) {
    fVar13 = (float)uVar3 * 0.25;
    if ((0.0 <= fVar13) && (fVar15 = 1.0, fVar13 <= 1.0)) {
      fVar15 = fVar13;
    }
    local_188 = fVar14 * DAT_180112008;
    local_184 = fVar16 * DAT_180112008;
    FUN_18006ea70((int *)*param_1,&local_188,DAT_180112008 * 13.0,
                  (int)((float)(DAT_18011200c >> 0x18) * fVar15 + 0.5) << 0x18 |
                  DAT_18011200c & 0xffffff,0);
  }
  local_188 = fVar14 * DAT_180112008;
  local_184 = (fVar16 + 1.0) * DAT_180112008;
  FUN_18006ea70((int *)*param_1,&local_188,DAT_180112008 * 9.5,0x28000000,0);
  local_188 = fVar14 * DAT_180112008;
  local_184 = (fVar16 + 0.5) * DAT_180112008;
  FUN_18006ea70((int *)*param_1,&local_188,DAT_180112008 * 8.6,0x46000000,0);
  local_188 = fVar14 * DAT_180112008;
  local_184 = fVar16 * DAT_180112008;
  FUN_18006ea70((int *)*param_1,&local_188,DAT_180112008 * 8.0,0xffffffff,0);
  return;
}


void FUN_1800422b0(int *param_1,float *param_2,uint param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_res10;
  float local_res14;
  float local_38;
  float local_34;

  if ((0.0 < param_2[2]) && (0.0 < param_2[3])) {
    fVar3 = param_5 * DAT_180112008;
    fVar2 = fVar3 * 0.5;
    fVar1 = FUN_1800ba000(0.0,param_4 * DAT_180112008 - fVar2);
    local_38 = *param_2 * DAT_180112008 + fVar2;
    local_res10 = (*param_2 + param_2[2]) * DAT_180112008 - fVar2;
    local_34 = param_2[1] * DAT_180112008 + fVar2;
    local_res14 = (param_2[1] + param_2[3]) * DAT_180112008 - fVar2;
    FUN_180071260(param_1,&local_38,&local_res10,param_3,fVar1,0,fVar3);
  }
  return;
}


void FUN_1800423c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;

  FUN_180006da0(param_1 + 0x28);
  puVar1 = *(undefined8 **)
            (*(longlong *)(param_1 + 0x30) +
            (*(longlong *)(param_1 + 0x40) + -1 + *(longlong *)(param_1 + 0x48) &
            *(longlong *)(param_1 + 0x38) - 1U) * 8);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = param_2;
  return;
}


void FUN_180042420(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_88 [3];
  float local_7c;
  undefined8 local_78;
  undefined8 local_70;

  local_78 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) - 3.0,(float)*param_3 - 3.0);
  local_70 = CONCAT44((float)((ulonglong)param_3[1] >> 0x20) + 6.0,(float)param_3[1] + 6.0);
  uVar3 = FUN_18002b220((longlong)param_1,param_2,(byte *)"color",(float *)&local_78);
  if ((char)((ulonglong)uVar3 >> 0x30) != '\0') {
    param_1[0x11] = param_2;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *(undefined1 *)(param_1 + 0x14) = 1;
    param_1[0x12] = uVar1;
    param_1[0x13] = uVar2;
  }
  if (((char)((ulonglong)uVar3 >> 0x20) == '\0') && ((char *)param_1[0x11] != param_2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  uVar3 = FUN_180043120((float *)(param_1 + 2),(int)uVar3,(ulonglong)uVar4);
  fVar7 = *(float *)(param_3 + 1) * 0.075 * (float)uVar3;
  fVar5 = (float)*param_3 - fVar7;
  fVar6 = (float)((ulonglong)*param_3 >> 0x20) - fVar7;
  fVar8 = fVar7 + fVar7 + *(float *)((longlong)param_3 + 0xc);
  fVar7 = fVar7 + fVar7 + *(float *)(param_3 + 1);
  local_78 = CONCAT44(fVar6,fVar5);
  local_70 = CONCAT44(fVar8,fVar7);
  FUN_18002bd50(local_88,(longlong)param_2);
  local_7c = local_7c * 0.65 + 0.35;
  uVar4 = FUN_180051e70(local_88);
  if ((0.0 < fVar7) && (0.0 < fVar8)) {
    local_res10 = fVar5 * DAT_180112008;
    local_res8 = (fVar5 + fVar7) * DAT_180112008;
    local_res14 = fVar6 * DAT_180112008;
    local_resc = (fVar6 + fVar8) * DAT_180112008;
    FUN_180071360((int *)*param_1,&local_res10,&local_res8,uVar4,DAT_180112008 * 6.0,0);
  }
  FUN_1800422b0((int *)*param_1,(float *)&local_78,0x33ffffff,6.0,1.0);
  return;
}


void FUN_180042660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  if (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 1U) {
    FUN_180010d50(param_1,1);
  }
  uVar4 = *(longlong *)(param_1 + 0x10) - 1;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) & uVar4;
  uVar5 = *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18);
  uVar4 = uVar4 & uVar5;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8) == 0) {
    uVar2 = FUN_1800a5010(0x40);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar4 * 8) = uVar2;
  }
  puVar3 = *(undefined8 **)
            (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar5) * 8);
  *(undefined2 *)((longlong)puVar3 + 0x15) = 0;
  puVar1 = puVar3 + 3;
  *(undefined1 *)((longlong)puVar3 + 0x17) = 0;
  *puVar3 = &DAT_1800d8c40;
  puVar3[1] = &DAT_1800d8c40;
  *(undefined4 *)(puVar3 + 2) = 0xe0b6;
  *(undefined1 *)((longlong)puVar3 + 0x14) = 0;
  *puVar1 = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3 = (undefined8 *)FUN_1800a5010(0x10);
  puVar3[1] = 0;
  *puVar1 = puVar3;
  *puVar3 = puVar1;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  puVar1 = *(undefined8 **)
            (*(longlong *)(param_1 + 8) +
            (*(longlong *)(param_1 + 0x18) + -1 + *(longlong *)(param_1 + 0x20) &
            *(longlong *)(param_1 + 0x10) - 1U) * 8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = param_4;
  return;
}


void FUN_180042760(int *param_1,int *param_2,float param_3,float param_4,float param_5,byte *param_6
                  )

{
  uint uVar1;
  float local_res10;
  uint local_res14;

  uVar1 = FUN_1800ba150((uint)(param_4 * DAT_180112008 - (float)param_2[0x19]));
  local_res10 = (float)FUN_1800ba150((uint)(param_3 * DAT_180112008));
  local_res14 = uVar1;
  FUN_1800716c0(param_1,param_2,(float)param_2[5],&local_res10,param_5,param_6,(byte *)0x0,0.0,
                (float *)0x0);
  return;
}


void FUN_180042820(int *param_1,int *param_2,float param_3,float param_4,float param_5,byte *param_6
                  )

{
  float *pfVar1;
  float local_res10 [2];

  pfVar1 = FUN_180071ff0(param_2,local_res10,(float)param_2[5],3.4028235e+38,0.0,param_6,(byte *)0x0
                         ,(undefined8 *)0x0);
  FUN_180042c60(param_1,param_2,param_3 - (*pfVar1 / DAT_180112008) * 0.5,param_4,param_5,param_6,
                (byte *)0x0);
  return;
}


undefined1
FUN_1800428e0(undefined8 *param_1,byte *param_2,float *param_3,ulonglong param_4,float *param_5,
             float *param_6,uint param_7,byte param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float **ppfVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  float local_res8;
  float local_resc;

  pfVar2 = param_5;
  uVar9 = 0;
  pfVar1 = param_5 + 2;
  uVar4 = (uint)param_4;
  ppfVar7 = (float **)param_3;
  if ((0.0 < *pfVar1) && (0.0 < param_5[3])) {
    ppfVar7 = &param_5;
    fVar10 = *param_5;
    local_res8 = fVar10 * DAT_180112008;
    param_4 = 0xff271b16;
    local_resc = param_5[1] * DAT_180112008;
    param_5._4_4_ = (param_5[3] + param_5[1]) * DAT_180112008;
    param_5._0_4_ = (*pfVar1 + fVar10) * DAT_180112008;
    FUN_180071360((int *)*param_1,&local_res8,(float *)ppfVar7,0xff271b16,DAT_180112008 * 10.0,0);
  }
  lVar5 = *(longlong *)(param_1[1] + 0x40);
  if (param_7 == 0) {
    fVar10 = 12.0;
  }
  else {
    fVar10 = 35.0;
  }
  FUN_180062870(param_2);
  param_5._0_4_ = (fVar10 + *pfVar2) * DAT_180112008;
  param_5._4_4_ = DAT_180112008 * pfVar2[1];
  FUN_1800670f0(&param_5);
  FUN_180062670(lVar5);
  FUN_180062bc0(7,0);
  FUN_180062bc0(8,0);
  FUN_180062bc0(9,0);
  FUN_180062bc0(0,0xfffaf2ee);
  FUN_180062bc0(1,0xff7c6256);
  FUN_180062bc0(0x32,(int)((float)(DAT_18011200c >> 0x18) * 0.35 + 0.5) << 0x18 |
                     DAT_18011200c & 0xffffff);
  param_5._0_4_ = 0.0;
  param_5._4_4_ = (DAT_180112008 * pfVar2[3] - *(float *)(lVar5 + 0x14)) * 0.5;
  FUN_180062c90(0xb,(float *)&param_5,(float *)ppfVar7,param_4);
  FUN_180062d80(0xc,0,(float *)ppfVar7,param_4);
  FUN_180062d80(0xd,0,(float *)ppfVar7,param_4);
  FUN_180067970(((pfVar2[2] - fVar10) - 12.0) * DAT_180112008);
  uVar3 = FUN_1800999f0((byte *)"##text",param_6,param_3,uVar4,(float)((uint)param_8 << 6),
                        (float *)0x0,0);
  lVar5 = FUN_1800593a0();
  FUN_180062450(3);
  FUN_180062370(6);
  FUN_180062140();
  FUN_180062210();
  uVar4 = FUN_180056a20(param_2);
  if ((char)lVar5 != '\0') {
    uVar9 = 0x3f800000;
  }
  uVar8 = FUN_180043120((float *)(param_1 + 2),uVar4,(ulonglong)uVar9);
  uVar6 = FUN_18002e340(0xdffffff,
                        (int)((float)(DAT_18011200c >> 0x18) * 0.5 + 0.5) << 0x18 |
                        DAT_18011200c & 0xffffff,(float)uVar8);
  FUN_1800422b0((int *)*param_1,pfVar2,(uint)uVar6,10.0,1.0);
  if (param_7 != 0) {
    FUN_180023a40((int *)*param_1,*(int **)(param_1[1] + 0x78),param_7,*pfVar2 + 12.0 + 6.5,
                  pfVar2[3] * 0.5 + pfVar2[1],-3.3547604e+38);
  }
  return uVar3;
}


void FUN_180042c60(int *param_1,int *param_2,float param_3,float param_4,float param_5,byte *param_6
                  ,byte *param_7)

{
  uint uVar1;
  float local_res10;
  uint local_res14;

  uVar1 = FUN_1800ba150((uint)((param_4 - ((float)param_2[5] / DAT_180112008) * 0.5) * DAT_180112008
                              ));
  local_res10 = (float)FUN_1800ba150((uint)(param_3 * DAT_180112008));
  local_res14 = uVar1;
  FUN_1800716c0(param_1,param_2,(float)param_2[5],&local_res10,param_5,param_6,param_7,0.0,
                (float *)0x0);
  return;
}


void FUN_180042d40(int *param_1,int *param_2,float param_3,float param_4,float param_5,byte *param_6
                  ,float param_7)

{
  byte bVar1;
  byte *pbVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;

  fVar9 = param_3 * DAT_180112008;
  uVar7 = FUN_1800ba150((uint)((param_4 - ((float)param_2[5] / DAT_180112008) * 0.5) * DAT_180112008
                              ));
  fVar3 = param_7;
  bVar1 = *param_6;
  pbVar2 = param_6;
  do {
    if (bVar1 == 0) {
      return;
    }
    bVar1 = *pbVar2;
    uVar4 = (uint)bVar1;
    if (bVar1 < 0x80) {
LAB_180042ebb:
      lVar5 = 1;
    }
    else {
      uVar4 = (uint)bVar1;
      if (((bVar1 & 0xe0) == 0xc0) && ((pbVar2[1] & 0xc0) == 0x80)) {
        lVar5 = 2;
        uVar4 = pbVar2[1] & 0x3f | (uVar4 & 0x1f) << 6;
      }
      else if (((bVar1 & 0xf0) == 0xe0) &&
              (((pbVar2[1] & 0xc0) == 0x80 && ((pbVar2[2] & 0xc0) == 0x80)))) {
        lVar5 = 3;
        uVar4 = (pbVar2[1] & 0x3f | (uVar4 & 0xf) << 6) << 6 | pbVar2[2] & 0x3f;
      }
      else {
        if (((bVar1 & 0xf8) != 0xf0) ||
           ((((pbVar2[1] & 0xc0) != 0x80 || ((pbVar2[2] & 0xc0) != 0x80)) ||
            ((pbVar2[3] & 0xc0) != 0x80)))) {
          uVar4 = 0x3f;
          goto LAB_180042ebb;
        }
        lVar5 = 4;
        uVar4 = ((pbVar2[1] & 0x3f | (uVar4 & 7) << 6) << 6 | pbVar2[2] & 0x3f) << 6 |
                pbVar2[3] & 0x3f;
      }
    }
    uVar8 = FUN_1800ba150((uint)fVar9);
    pbVar6 = pbVar2 + lVar5;
    param_6._0_4_ = uVar8;
    param_6._4_4_ = uVar7;
    FUN_1800716c0(param_1,param_2,(float)param_2[5],(float *)&param_6,param_5,pbVar2,pbVar6,0.0,
                  (float *)0x0);
    if ((uVar4 < 0x10000) && (lVar5 = FUN_180072830((longlong)param_2,(ushort)uVar4), lVar5 != 0)) {
      fVar9 = fVar3 * DAT_180112008 + *(float *)(lVar5 + 4) + fVar9;
    }
    bVar1 = *pbVar6;
    pbVar2 = pbVar6;
  } while( true );
}


float FUN_180042fa0(longlong param_1,byte *param_2,float param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;

  iVar6 = 0;
  fVar7 = 0.0;
  bVar1 = *param_2;
  do {
    if (bVar1 == 0) {
      iVar4 = iVar6 + -1;
      if (iVar6 < 1) {
        iVar4 = 0;
      }
      return (float)iVar4 * param_3 + fVar7 / DAT_180112008;
    }
    bVar1 = *param_2;
    uVar5 = (uint)bVar1;
    if (bVar1 < 0x80) {
      lVar3 = 1;
LAB_1800430a4:
      param_2 = param_2 + lVar3;
      if (uVar5 < 0x10000) goto LAB_1800430bf;
    }
    else {
      uVar5 = (uint)bVar1;
      if (((bVar1 & 0xe0) == 0xc0) && ((param_2[1] & 0xc0) == 0x80)) {
        lVar3 = 2;
        uVar5 = param_2[1] & 0x3f | (uVar5 & 0x1f) << 6;
        goto LAB_1800430a4;
      }
      if ((((bVar1 & 0xf0) == 0xe0) && ((param_2[1] & 0xc0) == 0x80)) &&
         (bVar2 = param_2[2], (bVar2 & 0xc0) == 0x80)) {
        lVar3 = 3;
        uVar5 = param_2[1] & 0x3f | (uVar5 & 0xf) << 6;
LAB_18004309a:
        uVar5 = uVar5 << 6 | bVar2 & 0x3f;
        goto LAB_1800430a4;
      }
      if ((((bVar1 & 0xf8) == 0xf0) && ((param_2[1] & 0xc0) == 0x80)) &&
         (((param_2[2] & 0xc0) == 0x80 && (bVar2 = param_2[3], (bVar2 & 0xc0) == 0x80)))) {
        lVar3 = 4;
        uVar5 = (param_2[1] & 0x3f | (uVar5 & 7) << 6) << 6 | param_2[2] & 0x3f;
        goto LAB_18004309a;
      }
      param_2 = param_2 + 1;
      uVar5 = 0x3f;
LAB_1800430bf:
      lVar3 = FUN_180072830(param_1,(ushort)uVar5);
      if (lVar3 != 0) {
        fVar7 = fVar7 + *(float *)(lVar3 + 4);
      }
    }
    iVar6 = iVar6 + 1;
    bVar1 = *param_2;
  } while( true );
}


undefined8 FUN_180043120(float *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_res10 [6];
  undefined8 local_38 [6];

  fVar4 = (float)param_3;
  local_res10[0] = param_2;
  plVar2 = FUN_1800061f0(param_1,local_38,(byte *)local_res10);
  lVar1 = *plVar2;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar3 = FUN_1800bb930();
    fVar5 = (1.0 - (float)uVar3) * (fVar4 - *(float *)(lVar1 + 0x14)) + *(float *)(lVar1 + 0x14);
    *(float *)(lVar1 + 0x14) = fVar5;
    if (0.002 <= ABS(fVar4 - fVar5)) {
      return (ulonglong)(uint)fVar5;
    }
  }
  *(float *)(lVar1 + 0x14) = fVar4;
  return param_3;
}


void FUN_1800431e0(longlong param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  float *pfVar4;
  byte *pbVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;

  if (0.0 < *(float *)(param_1 + 0x1380)) {
    fVar6 = *(float *)(param_1 + 0x1380) - param_2;
    *(float *)(param_1 + 0x1380) = fVar6;
    fVar6 = FUN_1800ba070(fVar6 * 3.0,(2.6 - fVar6) * 6.0);
    fVar6 = FUN_1800ba070(1.0,fVar6);
    piVar2 = (int *)FUN_1800569b0();
    pbVar5 = (byte *)(param_1 + 0x1360);
    pbVar3 = pbVar5;
    if (0xf < *(ulonglong *)(param_1 + 0x1378)) {
      pbVar3 = *(byte **)pbVar5;
    }
    piVar1 = *(int **)(*(longlong *)(param_1 + 0x1110) + 0x48);
    pfVar4 = FUN_180071ff0(piVar1,&local_res8,(float)piVar1[5],3.4028235e+38,0.0,pbVar3,(byte *)0x0,
                           (undefined8 *)0x0);
    local_9c = 0x42000000;
    fVar10 = *pfVar4 / DAT_180112008 + 28.0;
    fVar9 = (1.0 - fVar6) * 8.0 + 570.0;
    fVar12 = 450.0 - fVar10 * 0.5;
    local_a8 = fVar12;
    local_a4 = fVar9;
    local_a0 = fVar10;
    FUN_180040310(piVar2,&local_a8,10.0,8.0,24.0,fVar6 * 0.5);
    fVar11 = 1.0;
    if (fVar6 <= 1.0) {
      fVar11 = fVar6;
    }
    if (0.0 <= fVar6) {
      fVar7 = fVar11;
    }
    else {
      fVar7 = 0.0;
    }
    if (0.0 < fVar10) {
      local_res1c = fVar9 * DAT_180112008;
      local_res8 = (fVar12 + fVar10) * DAT_180112008;
      local_resc = (fVar9 + 32.0) * DAT_180112008;
      local_res18 = fVar12 * DAT_180112008;
      FUN_180071360(piVar2,&local_res18,&local_res8,(int)(fVar7 * 255.0 + 0.5) << 0x18 | 0x261a14,
                    DAT_180112008 * 10.0,0);
    }
    fVar7 = fVar6 * 0.35;
    if (0.0 <= fVar7) {
      fVar8 = 1.0;
      if (fVar7 <= 1.0) {
        fVar8 = fVar7;
      }
    }
    else {
      fVar8 = 0.0;
    }
    FUN_1800422b0(piVar2,&local_a8,
                  (int)((float)(DAT_18011200c >> 0x18) * fVar8 + 0.5) << 0x18 |
                  DAT_18011200c & 0xffffff,10.0,1.0);
    if (0xf < *(ulonglong *)(param_1 + 0x1378)) {
      pbVar5 = *(byte **)pbVar5;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar11;
    }
    FUN_180042820(piVar2,*(int **)(*(longlong *)(param_1 + 0x1110) + 0x48),fVar10 * 0.5 + fVar12,
                  fVar9 + 16.0,(float)((int)(fVar7 * 255.0 + 0.5) << 0x18 | 0xfaf2ee),pbVar5);
  }
  return;
}


undefined8
FUN_180043570(undefined8 *param_1,float param_2,float param_3,char *param_4,byte *param_5,
             byte *param_6)

{
  uint uVar1;
  longlong lVar2;
  float *pfVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  float local_res20;
  float local_res24;

  lVar2 = FUN_180056d70();
  fVar10 = param_3 - 11.0;
  fVar8 = *(float *)(lVar2 + 0xe0) / DAT_180112008;
  fVar7 = *(float *)(lVar2 + 0xe4) / DAT_180112008;
  pfVar3 = FUN_180071ff0(*(int **)(param_1[1] + 0x38),&local_res8,
                         (float)(*(int **)(param_1[1] + 0x38))[5],3.4028235e+38,0.0,param_5,
                         (byte *)0x0,(undefined8 *)0x0);
  if (((((*(char *)(param_1 + 0xb) != '\0') || (param_1[0xc] != 0)) || (param_1[0x11] != 0)) ||
      ((param_1[0x15] != 0 || (fVar8 < param_2)))) ||
     ((fVar7 < fVar10 ||
      ((param_2 + *pfVar3 / DAT_180112008 + 52.0 <= fVar8 || (fVar10 + 22.0 <= fVar7)))))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar4 = FUN_180059c10(0,'\0');
    if ((char)uVar4 != '\0') {
      uVar6 = 1;
      *param_4 = *param_4 == '\0';
    }
  }
  if (*param_4 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x3f800000;
  }
  uVar1 = FUN_180056a20(param_6);
  uVar4 = FUN_180043120((float *)(param_1 + 2),uVar1,(ulonglong)uVar9);
  uVar5 = FUN_18002e340(0xff271b16,DAT_18011200c,(float)uVar4);
  local_resc = (fVar10 + 22.0) * DAT_180112008;
  local_res20 = param_2 * DAT_180112008;
  local_res8 = (param_2 + 40.0) * DAT_180112008;
  local_res24 = fVar10 * DAT_180112008;
  FUN_180071360((int *)*param_1,&local_res20,&local_res8,(uint)uVar5,DAT_180112008 * 11.0,0);
  fVar7 = (float)uVar4 * 18.0 + param_2 + 3.0;
  local_res24 = (fVar10 + 3.0) * DAT_180112008;
  local_resc = (fVar10 + 3.0 + 16.0) * DAT_180112008;
  local_res20 = fVar7 * DAT_180112008;
  local_res8 = (fVar7 + 16.0) * DAT_180112008;
  FUN_180071360((int *)*param_1,&local_res20,&local_res8,0xffffffff,DAT_180112008 * 8.0,0);
  FUN_180042c60((int *)*param_1,*(int **)(param_1[1] + 0x38),param_2 + 40.0 + 12.0,param_3,-NAN,
                param_5,(byte *)0x0);
  return uVar6;
}


void FUN_1800438b0(undefined8 *param_1,uint param_2,char param_3,float param_4,float param_5)

{
  ulonglong uVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  float local_res8;
  float local_resc;
  float local_58;
  float local_54;

  if (param_3 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  uVar3 = FUN_180043120((float *)(param_1 + 2),param_2 ^ 0x9e3779b9,(ulonglong)uVar4);
  fVar2 = (float)uVar3;
  uVar1 = FUN_18002e340(0xff2b1e18,DAT_18011200c,fVar2);
  local_54 = (param_5 - 13.0) * DAT_180112008;
  local_resc = ((param_5 - 13.0) + 26.0) * DAT_180112008;
  local_res8 = (param_4 + 50.0) * DAT_180112008;
  local_58 = param_4 * DAT_180112008;
  FUN_180071360((int *)*param_1,&local_58,&local_res8,(uint)uVar1,DAT_180112008 * 13.0,0);
  uVar1 = FUN_18002e340(0xff70564a,0xffffffff,fVar2);
  local_resc = param_5 * DAT_180112008;
  local_res8 = (fVar2 * 24.0 + param_4 + 13.0) * DAT_180112008;
  FUN_18006ea70((int *)*param_1,&local_res8,DAT_180112008 * 9.0,(uint)uVar1,0);
  return;
}


/*
Unable to decompile 'FUN_180043a40'
Cause: Exception while decompiling 180043a40: process: timeout

*/


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Type propagation algorithm not settling

void FUN_180047c80(undefined8 param_1,int *param_2,int param_3,char *param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  code *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined8 ******ppppppuVar8;
  size_t sVar9;
  longlong *plVar10;
  char *******pppppppcVar11;
  char *_Str;
  undefined1 *puVar12;
  ulonglong uVar13;
  LPVOID pvVar14;
  longlong lVar15;
  LPVOID pvVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 *******pppppppuVar21;
  char *******pppppppcVar22;
  undefined8 *******pppppppuVar23;
  ulonglong uVar24;
  longlong lVar25;
  char *pcVar26;
  undefined8 uStackY_1a0;
  undefined1 auStackY_198 [8];
  undefined1 auStackY_190 [24];
  int local_158 [2];
  longlong local_150;
  undefined8 *******local_148;
  longlong lStack_140;
  ulonglong local_138 [2];
  LPVOID local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 *******local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 *******local_e8 [2];
  ulonglong local_d8;
  ulonglong local_d0;
  char *******local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  char *pcStack_b0;
  char ******local_a8 [12];
  ulonglong local_48;

  puVar19 = auStackY_198;
  local_48 = DAT_180112300 ^ (ulonglong)auStackY_198;
  pppppppuVar21 = (undefined8 *******)0x0;
  if ((char)param_2[0x23] != '\0') goto LAB_1800487c9;
  FUN_1800080c0((undefined1 (*) [32])local_e8,(longlong)param_3 * 2,0x20);
  pcVar6 = FUN_180043a40(*(char **)(param_2 + 2));
  puVar20 = auStackY_198;
  if (0x7fffffffffffffff - local_d8 < 2) goto LAB_1800487fe;
  pppppppuVar23 = local_e8;
  if (0xf < local_d0) {
    pppppppuVar23 = local_e8[0];
  }
  local_108 = (undefined8 *******)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uVar24 = local_d8 + 2;
  if (uVar24 < 0x10) {
    uVar7 = 0xf;
    pppppppuVar21 = &local_108;
LAB_180047daf:
    local_f8 = uVar24;
    local_f0 = uVar7;
    FUN_1800d1c20(pppppppuVar21,pppppppuVar23,local_d8);
    *(undefined2 *)((longlong)pppppppuVar21 + local_d8) = 0x202d;
    *(undefined1 *)((longlong)pppppppuVar21 + uVar24) = 0;
    sVar9 = strlen(pcVar6);
    plVar10 = FUN_180002250((longlong *)&local_108,(undefined8 *)pcVar6,sVar9);
    puVar19 = auStackY_198;
    lVar25 = 0;
    local_148 = (undefined8 *******)*plVar10;
    lStack_140 = plVar10[1];
    local_138[0] = plVar10[2];
    local_138[1] = plVar10[3];
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    *(undefined1 *)plVar10 = 0;
    if (local_f0 < 0x10) {
LAB_180047e5d:
      local_f8 = 0;
      local_f0 = 0xf;
      local_108 = (undefined8 *******)((ulonglong)local_108 & 0xffffffffffffff00);
      pcVar6 = ", ";
      puVar19 = auStackY_198;
      switch(*param_2) {
      case 1:
        param_4 = "slider";
        if (DAT_1801158c8 == 1) {
          param_4 = &DAT_1800def10;
        }
        FUN_1800491c0((undefined1 *)local_a8,0x60,0x1800def28,param_4);
        sVar9 = strlen((char *)local_a8);
        if (sVar9 <= local_138[1] - local_138[0]) {
          pppppppuVar21 = &local_148;
          if (0xf < local_138[1]) {
            pppppppuVar21 = local_148;
          }
          puVar17 = (undefined8 *)((longlong)pppppppuVar21 + local_138[0]);
          local_138[0] = local_138[0] + sVar9;
          FUN_1800d1c20(puVar17,local_a8,sVar9);
          puVar19 = auStackY_198;
          *(undefined1 *)((longlong)puVar17 + sVar9) = 0;
          goto switchD_180047e96_default;
        }
        param_4 = (char *)local_a8;
        goto LAB_180048296;
      case 2:
      case 3:
        if (*param_2 == 3) {
          pppppppcVar11 = (char *******)&DAT_1800def40;
          pcVar6 = " [any of: ";
        }
        else {
          pppppppcVar11 = (char *******)&DAT_1800def70;
          pcVar6 = " [one of: ";
        }
        if (DAT_1801158c8 == 1) {
          pcVar6 = (char *)pppppppcVar11;
        }
        sVar9 = strlen(pcVar6);
        if (local_138[1] - local_138[0] < sVar9) {
          FUN_180005300(&local_148,sVar9,0,(undefined8 *)pcVar6,sVar9);
          param_4 = pcVar6;
        }
        else {
          pppppppuVar21 = &local_148;
          if (0xf < local_138[1]) {
            pppppppuVar21 = local_148;
          }
          puVar17 = (undefined8 *)((longlong)pppppppuVar21 + local_138[0]);
          local_138[0] = local_138[0] + sVar9;
          FUN_1800d1c20(puVar17,(undefined8 *)pcVar6,sVar9);
          *(undefined1 *)((longlong)puVar17 + sVar9) = 0;
        }
        puVar18 = auStackY_198;
        puVar19 = auStackY_198;
        uVar24 = 0;
        lVar15 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x12) - lVar15 >> 3 != 0) {
          do {
            pcVar6 = FUN_180043a40(*(char **)(lVar15 + uVar24 * 8));
            pcVar26 = "";
            if (uVar24 != 0) {
              pcVar26 = ", ";
            }
            local_128 = (LPVOID)0x0;
            uStack_120 = 0;
            local_118 = 0;
            local_110 = 0;
            sVar9 = strlen(pcVar26);
            FUN_1800028f0(&local_128,(undefined8 *)pcVar26,sVar9);
            sVar9 = strlen(pcVar6);
            plVar10 = FUN_180002250((longlong *)&local_128,(undefined8 *)pcVar6,sVar9);
            pppppppcVar11 = (char *******)*plVar10;
            lStack_c0 = plVar10[1];
            uVar7 = plVar10[2];
            pcVar6 = (char *)plVar10[3];
            plVar10[2] = 0;
            plVar10[3] = 0xf;
            *(undefined1 *)plVar10 = 0;
            param_4 = (char *)&local_c8;
            if ((char *)0xf < pcVar6) {
              param_4 = (char *)pppppppcVar11;
            }
            local_c8 = pppppppcVar11;
            local_b8 = uVar7;
            pcStack_b0 = pcVar6;
            if (local_138[1] - local_138[0] < uVar7) {
              FUN_180005300(&local_148,uVar7,0,(undefined8 *)param_4,uVar7);
              pppppppcVar11 = local_c8;
              pcVar6 = pcStack_b0;
            }
            else {
              pppppppuVar21 = &local_148;
              if (0xf < local_138[1]) {
                pppppppuVar21 = local_148;
              }
              puVar17 = (undefined8 *)((longlong)pppppppuVar21 + local_138[0]);
              local_138[0] = local_138[0] + uVar7;
              FUN_1800d1c20(puVar17,(undefined8 *)param_4,uVar7);
              *(undefined1 *)(uVar7 + (longlong)puVar17) = 0;
            }
            if ((char *)0xf < pcVar6) {
              pppppppcVar22 = pppppppcVar11;
              if (((char *)0xfff < pcVar6 + 1) &&
                 (pppppppcVar22 = (char *******)pppppppcVar11[-1],
                 0x1f < (ulonglong)((longlong)pppppppcVar11 + (-8 - (longlong)pppppppcVar22)))) {
                pcVar5 = (code *)swi(0x29);
                (*pcVar5)(5);
                puVar18 = auStackY_190;
                goto LAB_1800481f1;
              }
              thunk_FUN_1800c3030(pppppppcVar22);
            }
            if (0xf < local_110) {
              pvVar14 = local_128;
              if ((0xfff < local_110 + 1) &&
                 (pvVar14 = *(LPVOID *)((longlong)local_128 + -8),
                 0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pvVar14))))
              goto LAB_18004850e;
              thunk_FUN_1800c3030(pvVar14);
            }
            uVar24 = uVar24 + 1;
            lVar15 = *(longlong *)(param_2 + 0x10);
          } while (uVar24 < (ulonglong)(*(longlong *)(param_2 + 0x12) - lVar15 >> 3));
        }
        uVar24 = local_138[0];
        pcVar6 = ", ";
        if (local_138[1] != local_138[0]) {
          local_138[0] = local_138[0] + 1;
          pppppppuVar21 = &local_148;
          if (0xf < local_138[1]) {
            pppppppuVar21 = local_148;
          }
          *(undefined2 *)((longlong)pppppppuVar21 + uVar24) = 0x5d;
          puVar19 = auStackY_198;
          goto switchD_180047e96_default;
        }
LAB_1800481f1:
        *(undefined8 *)(puVar18 + 0x20) = 1;
        param_4 = &DAT_1800def94;
        sVar9 = 1;
        goto LAB_18004829e;
      case 4:
        pppppppcVar11 = (char *******)&DAT_1800def98;
        pcVar26 = " [key]";
        break;
      case 5:
        pppppppcVar11 = (char *******)&DAT_1800defb8;
        pcVar26 = " [colour]";
        break;
      case 6:
        pppppppcVar11 = (char *******)&DAT_1800defd8;
        pcVar26 = " [button]";
        break;
      default:
        goto switchD_180047e96_default;
      }
      if (DAT_1801158c8 == 1) {
        pcVar26 = (char *)pppppppcVar11;
      }
      sVar9 = strlen(pcVar26);
      if (local_138[1] - local_138[0] < sVar9) {
        param_4 = pcVar26;
LAB_180048296:
        puVar18 = auStackY_198;
LAB_18004829e:
        *(undefined8 *)(puVar18 + -8) = 0x1800482ab;
        FUN_180005300((undefined8 *)(puVar18 + 0x50),sVar9,0,(undefined8 *)param_4,
                      *(ulonglong *)(puVar18 + 0x20));
        puVar19 = puVar18;
      }
      else {
        pppppppuVar21 = &local_148;
        if (0xf < local_138[1]) {
          pppppppuVar21 = local_148;
        }
        puVar17 = (undefined8 *)((longlong)pppppppuVar21 + local_138[0]);
        local_138[0] = local_138[0] + sVar9;
        FUN_1800d1c20(puVar17,(undefined8 *)pcVar26,sVar9);
        *(undefined1 *)((longlong)puVar17 + sVar9) = 0;
        puVar19 = auStackY_198;
      }
switchD_180047e96_default:
      lVar15 = *(longlong *)(param_2 + 0x26);
      if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x40) != *(longlong *)(lVar15 + 0x48))) {
        pcVar26 = " [+ choice: ";
        if (DAT_1801158c8 == 1) {
          pcVar26 = &DAT_1800deff8;
        }
        *(undefined8 *)(puVar19 + -8) = 0x1800482ea;
        sVar9 = strlen(pcVar26);
        lVar15 = *(longlong *)(puVar19 + 0x60);
        if (*(ulonglong *)(puVar19 + 0x68) - lVar15 < sVar9) {
          *(size_t *)(puVar19 + 0x20) = sVar9;
          *(undefined8 *)(puVar19 + -8) = 0x180048349;
          FUN_180005300((undefined8 *)(puVar19 + 0x50),sVar9,0,(undefined8 *)pcVar26,
                        *(ulonglong *)(puVar19 + 0x20));
          param_4 = pcVar26;
        }
        else {
          *(size_t *)(puVar19 + 0x60) = lVar15 + sVar9;
          puVar12 = puVar19 + 0x50;
          if (0xf < *(ulonglong *)(puVar19 + 0x68)) {
            puVar12 = *(undefined1 **)(puVar19 + 0x50);
          }
          *(undefined8 *)(puVar19 + -8) = 0x18004832b;
          FUN_1800d1c20((undefined8 *)(puVar12 + lVar15),(undefined8 *)pcVar26,sVar9);
          *(undefined1 *)((longlong)(puVar12 + lVar15) + sVar9) = 0;
        }
        uVar24 = 0;
        lVar15 = *(longlong *)(param_2 + 0x26);
        if (*(longlong *)(lVar15 + 0x48) - *(longlong *)(lVar15 + 0x40) >> 3 != 0) {
          while( true ) {
            pcVar26 = *(char **)(*(longlong *)(lVar15 + 0x40) + uVar24 * 8);
            *(undefined8 *)(puVar19 + -8) = 0x18004837d;
            _Str = FUN_180043a40(pcVar26);
            pcVar26 = "";
            if (uVar24 != 0) {
              pcVar26 = pcVar6;
            }
            *(undefined8 *)(puVar19 + 0x70) = 0;
            *(undefined8 *)(puVar19 + 0x78) = 0;
            local_118 = 0;
            local_110 = 0;
            *(undefined8 *)(puVar19 + -8) = 0x1800483a6;
            sVar9 = strlen(pcVar26);
            *(undefined8 *)(puVar19 + -8) = 0x1800483b6;
            FUN_1800028f0((undefined8 *)(puVar19 + 0x70),(undefined8 *)pcVar26,sVar9);
            *(undefined8 *)(puVar19 + -8) = 0x1800483bf;
            sVar9 = strlen(_Str);
            *(undefined8 *)(puVar19 + -8) = 0x1800483cf;
            plVar10 = FUN_180002250((longlong *)(puVar19 + 0x70),(undefined8 *)_Str,sVar9);
            pppppppcVar11 = (char *******)*plVar10;
            lStack_c0 = plVar10[1];
            uVar7 = plVar10[2];
            pcVar6 = (char *)plVar10[3];
            plVar10[2] = 0;
            plVar10[3] = 0xf;
            *(undefined1 *)plVar10 = 0;
            param_4 = (char *)&local_c8;
            if ((char *)0xf < pcVar6) {
              param_4 = (char *)pppppppcVar11;
            }
            lVar25 = *(longlong *)(puVar19 + 0x60);
            local_c8 = pppppppcVar11;
            local_b8 = uVar7;
            pcStack_b0 = pcVar6;
            if (*(ulonglong *)(puVar19 + 0x68) - lVar25 < uVar7) {
              *(ulonglong *)(puVar19 + 0x20) = uVar7;
              *(undefined8 *)(puVar19 + -8) = 0x180048469;
              FUN_180005300((undefined8 *)(puVar19 + 0x50),uVar7,0,(undefined8 *)param_4,
                            *(ulonglong *)(puVar19 + 0x20));
              pppppppcVar11 = local_c8;
              pcVar6 = pcStack_b0;
            }
            else {
              *(ulonglong *)(puVar19 + 0x60) = uVar7 + lVar25;
              puVar12 = puVar19 + 0x50;
              if (0xf < *(ulonglong *)(puVar19 + 0x68)) {
                puVar12 = *(undefined1 **)(puVar19 + 0x50);
              }
              *(undefined8 *)(puVar19 + -8) = 0x180048449;
              FUN_1800d1c20((undefined8 *)(puVar12 + lVar25),(undefined8 *)param_4,uVar7);
              puVar12[lVar25 + uVar7] = 0;
            }
            if ((char *)0xf < pcVar6) {
              pppppppcVar22 = pppppppcVar11;
              if (((char *)0xfff < pcVar6 + 1) &&
                 (pppppppcVar22 = (char *******)pppppppcVar11[-1],
                 0x1f < (ulonglong)((longlong)pppppppcVar11 + (-8 - (longlong)pppppppcVar22)))) {
                pcVar5 = (code *)swi(0x29);
                (*pcVar5)(5);
                puVar19 = puVar19 + 8;
                goto LAB_18004850e;
              }
              *(undefined8 *)(puVar19 + -8) = 0x1800484a4;
              thunk_FUN_1800c3030(pppppppcVar22);
            }
            if (0xf < local_110) {
              pvVar14 = *(LPVOID *)(puVar19 + 0x70);
              pvVar16 = pvVar14;
              if ((0xfff < local_110 + 1) &&
                 (pvVar16 = *(LPVOID *)((longlong)pvVar14 + -8),
                 0x1f < (ulonglong)((longlong)pvVar14 + (-8 - (longlong)pvVar16))))
              goto LAB_18004850e;
              *(undefined8 *)(puVar19 + -8) = 0x1800484dd;
              thunk_FUN_1800c3030(pvVar16);
            }
            uVar24 = uVar24 + 1;
            lVar15 = *(longlong *)(param_2 + 0x26);
            lVar25 = 0;
            if ((ulonglong)(*(longlong *)(lVar15 + 0x48) - *(longlong *)(lVar15 + 0x40) >> 3) <=
                uVar24) break;
            pcVar6 = ", ";
          }
        }
        goto LAB_180048515;
      }
    }
    else {
      pppppppuVar21 = local_108;
      if ((local_f0 + 1 < 0x1000) ||
         (pppppppuVar21 = (undefined8 *******)local_108[-1],
         (ulonglong)((longlong)local_108 + (-8 - (longlong)pppppppuVar21)) < 0x20)) {
        thunk_FUN_1800c3030(pppppppuVar21);
        goto LAB_180047e5d;
      }
LAB_18004850e:
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar19 = puVar19 + 8;
LAB_180048515:
      uVar24 = *(ulonglong *)(puVar19 + 0x60);
      if (*(ulonglong *)(puVar19 + 0x68) == uVar24) {
        *(undefined8 *)(puVar19 + 0x20) = 1;
        param_4 = &DAT_1800def94;
        *(undefined8 *)(puVar19 + -8) = 0x18004856d;
        FUN_180005300((undefined8 *)(puVar19 + 0x50),1,0,(undefined8 *)&DAT_1800def94,
                      *(ulonglong *)(puVar19 + 0x20));
      }
      else {
        *(ulonglong *)(puVar19 + 0x60) = uVar24 + 1;
        puVar12 = puVar19 + 0x50;
        if (0xf < *(ulonglong *)(puVar19 + 0x68)) {
          puVar12 = *(undefined1 **)(puVar19 + 0x50);
        }
        *(undefined2 *)(puVar12 + uVar24) = 0x5d;
      }
    }
    pcVar6 = param_4;
    if (((char)param_2[0x1b] != '\0') && (*param_2 != 4)) {
      pcVar6 = " [+ key]";
      if (DAT_1801158c8 == 1) {
        pcVar6 = &DAT_1800df020;
      }
      *(undefined8 *)(puVar19 + -8) = 0x1800485a1;
      sVar9 = strlen(pcVar6);
      lVar15 = *(longlong *)(puVar19 + 0x60);
      if (*(ulonglong *)(puVar19 + 0x68) - lVar15 < sVar9) {
        *(size_t *)(puVar19 + 0x20) = sVar9;
        *(undefined8 *)(puVar19 + -8) = 0x180048600;
        FUN_180005300((undefined8 *)(puVar19 + 0x50),sVar9,0,(undefined8 *)pcVar6,
                      *(ulonglong *)(puVar19 + 0x20));
      }
      else {
        *(size_t *)(puVar19 + 0x60) = lVar15 + sVar9;
        puVar12 = puVar19 + 0x50;
        if (0xf < *(ulonglong *)(puVar19 + 0x68)) {
          puVar12 = *(undefined1 **)(puVar19 + 0x50);
        }
        *(undefined8 *)(puVar19 + -8) = 0x1800485e2;
        FUN_1800d1c20((undefined8 *)(puVar12 + lVar15),(undefined8 *)pcVar6,sVar9);
        *(undefined1 *)((longlong)(puVar12 + lVar15) + sVar9) = 0;
        pcVar6 = param_4;
      }
    }
    pcVar26 = pcVar6;
    if ((*(char *)((longlong)param_2 + 0x6d) != '\0') && (*param_2 != 5)) {
      pcVar26 = " [+ colour]";
      if (DAT_1801158c8 == 1) {
        pcVar26 = &DAT_1800df048;
      }
      *(undefined8 *)(puVar19 + -8) = 0x180048634;
      sVar9 = strlen(pcVar26);
      lVar15 = *(longlong *)(puVar19 + 0x60);
      if (*(ulonglong *)(puVar19 + 0x68) - lVar15 < sVar9) {
        *(size_t *)(puVar19 + 0x20) = sVar9;
        *(undefined8 *)(puVar19 + -8) = 0x180048693;
        FUN_180005300((undefined8 *)(puVar19 + 0x50),sVar9,0,(undefined8 *)pcVar26,
                      *(ulonglong *)(puVar19 + 0x20));
      }
      else {
        *(size_t *)(puVar19 + 0x60) = lVar15 + sVar9;
        puVar12 = puVar19 + 0x50;
        if (0xf < *(ulonglong *)(puVar19 + 0x68)) {
          puVar12 = *(undefined1 **)(puVar19 + 0x50);
        }
        *(undefined8 *)(puVar19 + -8) = 0x180048675;
        FUN_1800d1c20((undefined8 *)(puVar12 + lVar15),(undefined8 *)pcVar26,sVar9);
        *(undefined1 *)((longlong)(puVar12 + lVar15) + sVar9) = 0;
        pcVar26 = pcVar6;
      }
    }
    puVar12 = puVar19 + 0x50;
    if (0xf < *(ulonglong *)(puVar19 + 0x68)) {
      puVar12 = *(undefined1 **)(puVar19 + 0x50);
    }
    lVar15 = *(longlong *)(puVar19 + 0x48);
    *(undefined8 *)(puVar19 + -8) = 0x1800486b8;
    FUN_180049120(lVar15,0x1800df064,puVar12,pcVar26);
    if (*(longlong *)(param_2 + 0x20) != 0) {
      pcVar6 = "(gear settings)";
      if (DAT_1801158c8 == 1) {
        pcVar6 = &DAT_1800df068;
      }
      pppppppuVar21 = local_e8;
      if (0xf < local_d0) {
        pppppppuVar21 = local_e8[0];
      }
      *(undefined8 *)(puVar19 + -8) = 0x1800486fc;
      FUN_180049120(lVar15,0x1800df0a8,pppppppuVar21,pcVar6);
      lVar3 = *(longlong *)(param_2 + 0x20);
      uVar7 = *(ulonglong *)(lVar3 + 0x30);
      uVar24 = *(longlong *)(lVar3 + 0x38) + uVar7;
      if (*(longlong *)(lVar3 + 0x38) != 0) {
        iVar2 = *(int *)(puVar19 + 0x40);
        do {
          piVar4 = *(int **)(*(longlong *)(lVar3 + 0x20) +
                            (*(longlong *)(lVar3 + 0x28) - 1U & uVar7) * 8);
          *(undefined8 *)(puVar19 + -8) = 0x18004873e;
          FUN_180047c80(lVar15,piVar4,iVar2 + 2,pcVar6);
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar24);
      }
    }
    if (0xf < *(ulonglong *)(puVar19 + 0x68)) {
      pvVar14 = *(LPVOID *)(puVar19 + 0x50);
      pvVar16 = pvVar14;
      if ((0xfff < *(ulonglong *)(puVar19 + 0x68) + 1) &&
         (pvVar16 = *(LPVOID *)((longlong)pvVar14 + -8),
         0x1f < (ulonglong)((longlong)pvVar14 + (-8 - (longlong)pvVar16)))) goto LAB_1800487f0;
      *(undefined8 *)(puVar19 + -8) = 0x18004877f;
      thunk_FUN_1800c3030(pvVar16);
    }
    *(longlong *)(puVar19 + 0x60) = lVar25;
    *(undefined8 *)(puVar19 + 0x68) = 0xf;
    puVar19[0x50] = 0;
    if (local_d0 < 0x10) {
LAB_1800487c9:
      *(undefined8 *)(puVar19 + -8) = 0x1800487d5;
      return;
    }
    pppppppuVar21 = local_e8[0];
    if ((local_d0 + 1 < 0x1000) ||
       (pppppppuVar21 = (undefined8 *******)local_e8[0][-1],
       (ulonglong)((longlong)local_e8[0] + (-8 - (longlong)pppppppuVar21)) < 0x20)) {
      *(undefined8 *)(puVar19 + -8) = 0x1800487c9;
      thunk_FUN_1800c3030(pppppppuVar21);
      goto LAB_1800487c9;
    }
  }
  else {
    uVar7 = uVar24 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 != 0) {
        if (0xfff < uVar1) {
          uVar13 = uVar7 + 0x28;
          if (uVar13 <= uVar1) {
                    // WARNING: Subroutine does not return
            FUN_180011350();
          }
          goto LAB_180047d46;
        }
        pppppppuVar21 = (undefined8 *******)FUN_1800a5010(uVar1);
      }
      local_108 = pppppppuVar21;
      goto LAB_180047daf;
    }
    uVar13 = 0x8000000000000027;
    uVar7 = 0x7fffffffffffffff;
LAB_180047d46:
    ppppppuVar8 = (undefined8 ******)FUN_1800a5010(uVar13);
    puVar19 = auStackY_198;
    if (ppppppuVar8 != (undefined8 ******)0x0) {
      pppppppuVar21 = (undefined8 *******)((longlong)ppppppuVar8 + 0x27U & 0xffffffffffffffe0);
      pppppppuVar21[-1] = ppppppuVar8;
      local_108 = pppppppuVar21;
      goto LAB_180047daf;
    }
LAB_1800487f0:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar19 = puVar19 + 8;
  }
  pcVar5 = (code *)swi(0x29);
  (*pcVar5)(5);
  puVar20 = puVar19 + 8;
LAB_1800487fe:
                    // WARNING: Subroutine does not return
  *(undefined **)(puVar20 + -8) = &UNK_180048803;
  FUN_1800116e0();
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FUN_180048830(longlong *param_1,int param_2,undefined4 param_3,undefined8 param_4,
                       longlong param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStack_c8;
  local_98 = param_2 * 4;
  local_64 = 1;
  local_54 = 0;
  local_70 = 1;
  local_6c = 1;
  local_68 = 0x1c;
  local_5c = 0;
  local_58 = 8;
  local_94 = 0;
  local_a8 = (longlong *)0x0;
  local_a0 = param_4;
  local_78 = param_2;
  local_74 = param_3;
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_78,&local_a0,&local_a8);
  if (-1 < (int)uVar2) {
    local_90 = local_68;
    local_8c = 4;
    local_80 = 0;
    local_84 = 1;
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1,local_a8,&local_90,param_5);
    uVar2 = (**(code **)(*local_a8 + 0x10))();
    if (-1 < iVar1) {
      *(int *)(param_5 + 8) = param_2;
      *(undefined4 *)(param_5 + 0xc) = param_3;
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


void FUN_180048930(char *param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;

  if (*param_1 == '\0') {
    *param_2 = 0;
    return;
  }
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    if (param_3 + -1 <= iVar2) break;
    bVar4 = param_1[iVar2];
    if ((0xbf < bVar4) && (param_3 <= iVar2 + 2)) break;
    cVar1 = param_1[(longlong)iVar2 + 1];
    if (bVar4 == 0xd0) {
      if ((byte)(cVar1 + 0x50U) < 0x10) {
        bVar4 = 0xd0;
        param_2[(longlong)iVar2 + 1] = cVar1 + -0x20;
        iVar3 = iVar2 + 1;
      }
    }
    else if (bVar4 == 0xd1) {
      if ((byte)(cVar1 + 0x80U) < 0x10) {
        bVar4 = 0xd0;
        param_2[(longlong)iVar2 + 1] = cVar1 + ' ';
        iVar3 = iVar2 + 1;
      }
      else if (cVar1 == -0x6f) {
        param_2[(longlong)iVar2 + 1] = 0x81;
        bVar4 = 0xd0;
        iVar3 = iVar2 + 1;
      }
    }
    else if ((byte)(bVar4 + 0x9f) < 0x1a) {
      bVar4 = bVar4 - 0x20;
    }
    iVar3 = iVar3 + 1;
    param_2[iVar2] = bVar4;
    iVar2 = iVar3;
  } while (param_1[iVar3] != '\0');
  param_2[iVar3] = 0;
  return;
}


int FUN_180048a10(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return param_1 + 0x1e8;
  }
  if (param_1 - 0x41U < 0x1a) {
    return param_1 + 0x1e1;
  }
  if (param_1 - 0x70U < 0x18) {
    return param_1 + 0x1cc;
  }
  switch(param_1) {
  case 2:
    return 0x291;
  default:
    return 0;
  case 4:
    return 0x292;
  case 5:
    return 0x293;
  case 6:
    return 0x294;
  case 8:
    return 0x20b;
  case 9:
    return 0x200;
  case 0xd:
    return 0x20d;
  case 0x10:
  case 0xa0:
    return 0x210;
  case 0x11:
  case 0xa2:
    return 0x20f;
  case 0x12:
  case 0xa4:
    return 0x211;
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
  case 0x90:
    return 0x261;
  case 0x91:
    return 0x260;
  case 0xa1:
    return 0x214;
  case 0xa3:
    return 0x213;
  case 0xa5:
    return 0x215;
  case 0xba:
    return 0x259;
  case 0xbb:
    return 0x25a;
  case 0xbc:
    return 0x255;
  case 0xbd:
    return 0x256;
  case 0xbe:
    return 599;
  case 0xbf:
    return 600;
  case 0xc0:
    return 0x25e;
  case 0xdb:
    return 0x25b;
  case 0xdc:
    return 0x25c;
  case 0xdd:
    return 0x25d;
  case 0xde:
    return 0x254;
  }
}


char * FUN_180048d90(longlong param_1)

{
  char *pcVar1;

  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


void FUN_180048db0(int *param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;

  if ((-1 < DAT_1801140d8) && (DAT_1801140d8 < DAT_180112f20)) {
    iVar2 = *(int *)(&DAT_1801140dc + (longlong)DAT_1801140d8 * 4);
    if ((-1 < iVar2) &&
       (lVar3 = *(longlong *)
                 (DAT_180112f08 + (DAT_180112f18 + DAT_1801140d8 & DAT_180112f10 - 1U) * 8),
       iVar2 < *(int *)(lVar3 + 0x38))) {
      lVar3 = *(longlong *)
               (*(longlong *)(lVar3 + 0x20) +
               (*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 & *(longlong *)(lVar3 + 0x28) - 1U) *
               8);
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        uVar4 = *(ulonglong *)(lVar3 + 0x28);
        uVar1 = *(longlong *)(lVar3 + 0x30) + uVar4;
        do {
          if (*(int *)(*(longlong *)
                        (*(longlong *)(lVar3 + 0x18) +
                        (*(longlong *)(lVar3 + 0x20) - 1U & uVar4) * 8) + 0xc) == 3) {
            fVar5 = 1272.0;
            goto LAB_180048e61;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar1);
      }
    }
  }
  fVar5 = 900.0;
LAB_180048e61:
  *param_1 = (int)(fVar5 * DAT_180112008 + 0.5);
  *param_2 = (int)(DAT_180112008 * 620.0 + 0.5);
  return;
}


void FUN_180048eb0(longlong param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;

  puVar3 = param_2;
  switch(*param_3) {
  case 0:
    uVar4 = (ulonglong)((char)param_3[5] != '\0');
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    pcVar2 = "%s=%d\n";
    break;
  case 1:
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_180049120(param_1,0x1800daa00,puVar3,(double)(float)param_3[6]);
    goto switchD_180048ee5_default;
  case 2:
    if ((ulonglong)param_2[3] < 0x10) {
      uVar4 = (ulonglong)(uint)param_3[0xe];
      pcVar2 = "%s=%d\n";
    }
    else {
      pcVar2 = "%s=%d\n";
      uVar4 = (ulonglong)(uint)param_3[0xe];
      puVar3 = (undefined8 *)*param_2;
    }
    break;
  case 3:
    if ((ulonglong)param_2[3] < 0x10) {
      uVar4 = (ulonglong)(uint)param_3[0xf];
      pcVar2 = "%s=%u\n";
    }
    else {
      pcVar2 = "%s=%u\n";
      uVar4 = (ulonglong)(uint)param_3[0xf];
      puVar3 = (undefined8 *)*param_2;
    }
    break;
  case 4:
    if ((ulonglong)param_2[3] < 0x10) {
      uVar4 = (ulonglong)(uint)param_3[0x16];
      pcVar2 = "%s=%d\n";
    }
    else {
      pcVar2 = "%s=%d\n";
      uVar4 = (ulonglong)(uint)param_3[0x16];
      puVar3 = (undefined8 *)*param_2;
    }
    break;
  case 5:
    uVar1 = FUN_18001fd00((float *)(param_3 + 0x17));
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    uVar4 = (ulonglong)uVar1;
    pcVar2 = "%s=%08x\n";
    break;
  default:
    goto switchD_180048ee5_default;
  }
  FUN_180049120(param_1,(longlong)pcVar2,puVar3,uVar4);
switchD_180048ee5_default:
  if ((char)param_3[0x1b] != '\0') {
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_180049120(param_1,0x1800daa28,puVar3,(ulonglong)(uint)param_3[0x16]);
  }
  if ((*(char *)((longlong)param_3 + 0x6d) != '\0') && (*(longlong *)(param_3 + 0x24) == 0)) {
    uVar1 = FUN_18001fd00((float *)(param_3 + 0x17));
    if ((ulonglong)param_2[3] < 0x10) {
      puVar3 = param_2;
    }
    else {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_180049120(param_1,0x1800daa38,puVar3,(ulonglong)uVar1);
  }
  if ((char)param_3[0x1c] != '\0') {
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_180049120(param_1,0x1800daa48,puVar3,(ulonglong)((char)param_3[5] != '\0'));
  }
  if (*(char *)((longlong)param_3 + 0x71) != '\0') {
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_180049120(param_1,0x1800daa58,puVar3,
                  (ulonglong)(*(char *)((longlong)param_3 + 0x72) != '\0'));
  }
  if ((*param_3 == 5) ||
     ((*(char *)((longlong)param_3 + 0x6d) != '\0' && (*(longlong *)(param_3 + 0x24) == 0)))) {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_180049120(param_1,0x1800daa68,param_2,
                  (ulonglong)(*(char *)((longlong)param_3 + 0x6e) != '\0'));
  }
  return;
}


undefined * FUN_180049100(void)

{
  return &DAT_180112ec0;
}


undefined * FUN_180049110(void)

{
  return &DAT_180112ec8;
}


void FUN_180049120(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;

  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_180049100();
  FUN_1800b13f0(*puVar1,param_1,param_2,(undefined4 *)0x0,&local_res18);
  return;
}


void FUN_180049170(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;

  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (ulonglong *)FUN_180049110();
  FID_conflict___stdio_common_vfwscanf(*puVar1 | 1,param_1,param_2,0,&local_res18);
  return;
}


ulonglong FUN_1800491c0(undefined1 *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res20;

  local_res20 = param_4;
  puVar1 = (ulonglong *)FUN_180049100();
  uVar2 = FUN_1800b1640(*puVar1 | 2,param_1,param_2,param_3,(undefined4 *)0x0,&local_res20);
  uVar3 = uVar2 & 0xffffffff;
  if ((int)uVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


ulonglong FUN_180049220(undefined2 *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res20;

  local_res20 = param_4;
  puVar1 = (ulonglong *)FUN_180049100();
  uVar2 = FUN_1800b18a0(*puVar1,param_1,param_2,param_3,(undefined4 *)0x0,&local_res20);
  uVar3 = uVar2 & 0xffffffff;
  if ((int)uVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
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


void FUN_1800492a0(longlong param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800492aa. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0xbc8))(*(undefined8 *)(param_1 + 0xbd8));
  return;
}


void FUN_1800492c0(longlong param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800492ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0xbd0))(*(undefined8 *)(param_1 + 0xbd8));
  return;
}


undefined1 * FUN_1800492e0(undefined1 *param_1,undefined1 (*param_2) [32])

{
  int *piVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 (*local_res18) [32];
  undefined1 *local_res20;

  FUN_18004a000((undefined1 (*) [32])(param_1 + 8));
  *(undefined8 *)(param_1 + 0xbe0) = 0;
  *(undefined8 *)(param_1 + 0xbe8) = 0;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  *(undefined8 *)(param_1 + 0xbf8) = 0;
  *(undefined8 *)(param_1 + 0xc00) = 0;
  *(undefined8 *)(param_1 + 0xc08) = 0;
  *(undefined8 *)(param_1 + 0xc10) = 0;
  *(undefined8 *)(param_1 + 0xc18) = 0;
  *(undefined8 *)(param_1 + 0xc20) = 0;
  *(undefined2 *)(param_1 + 0xc18) = 0x2e;
  FUN_18004a3c0((undefined4 *)(param_1 + 0xc28));
  FUN_18006e1d0((undefined1 (*) [32])(param_1 + 0x10d0));
  *(undefined8 *)(param_1 + 0x1320) = 0;
  *(undefined8 *)(param_1 + 0x1328) = 0;
  *(undefined8 *)(param_1 + 0x1330) = 0;
  *(undefined8 *)(param_1 + 0x1338) = 0;
  *(undefined8 *)(param_1 + 0x1348) = 0;
  *(undefined8 *)(param_1 + 0x1350) = 0;
  *(undefined8 *)(param_1 + 0x1358) = 0;
  *(undefined8 *)(param_1 + 0x1360) = 0;
  *(undefined8 *)(param_1 + 0x1368) = 0;
  *(undefined8 *)(param_1 + 0x1370) = 0;
  *(undefined8 *)(param_1 + 0x1378) = 0;
  *(undefined8 *)(param_1 + 0x1380) = 0;
  *(undefined8 *)(param_1 + 5000) = 0;
  *(undefined8 *)(param_1 + 0x1390) = 0;
  *(undefined8 *)(param_1 + 0x13d8) = 0;
  *(undefined8 *)(param_1 + 0x13ec) = 0;
  *(undefined8 *)(param_1 + 0x13f4) = 0;
  *(undefined8 *)(param_1 + 0x1434) = 0;
  *(undefined8 *)(param_1 + 0x1488) = 0;
  *(undefined8 *)(param_1 + 0x1490) = 0;
  *(undefined4 *)(param_1 + 0x1498) = 0;
  puVar4 = (undefined8 *)(param_1 + 0x149c);
  lVar7 = 0x9b;
  do {
    *puVar4 = 0xffffffffffffffff;
    *(undefined2 *)(puVar4 + 1) = 0;
    puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FUN_18004a210((undefined2 *)(param_1 + 0x1be0));
  *(undefined8 *)(param_1 + 0x1d50) = 0;
  *(undefined8 *)(param_1 + 0x1d58) = 0;
  *(undefined8 *)(param_1 + 0x1d68) = 0;
  *(undefined8 *)(param_1 + 0x1d70) = 0;
  *(undefined8 *)(param_1 + 0x1d78) = 0;
  *(undefined8 *)(param_1 + 0x1d80) = 0;
  *(undefined8 *)(param_1 + 0x1d60) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1d88) = 0;
  *(undefined8 *)(param_1 + 0x1d90) = 0;
  *(undefined8 *)(param_1 + 0x1d98) = 0;
  *(undefined8 *)(param_1 + 0x1da0) = 0;
  *(undefined8 *)(param_1 + 0x1da8) = 0;
  *(undefined8 *)(param_1 + 0x1db0) = 0;
  *(undefined8 *)(param_1 + 0x1db8) = 0;
  *(undefined8 *)(param_1 + 0x1dc0) = 0;
  *(undefined8 *)(param_1 + 0x1dc8) = 0;
  *(undefined8 *)(param_1 + 0x1dd0) = 0;
  *(undefined8 *)(param_1 + 0x1dd8) = 0;
  *(undefined8 *)(param_1 + 0x1de0) = 0;
  *(undefined8 *)(param_1 + 0x1de8) = 0;
  *(undefined8 *)(param_1 + 0x1df0) = 0;
  *(undefined8 *)(param_1 + 0x1df8) = 0;
  *(undefined8 *)(param_1 + 0x1e00) = 0;
  *(undefined8 *)(param_1 + 0x1e08) = 0;
  *(undefined8 *)(param_1 + 0x1e10) = 0;
  *(undefined8 *)(param_1 + 0x1e18) = 0;
  *(undefined8 *)(param_1 + 0x1e20) = 0;
  *(undefined8 *)(param_1 + 0x1e28) = 0;
  *(undefined8 *)(param_1 + 0x1e30) = 0;
  *(undefined8 *)(param_1 + 0x1e38) = 0;
  *(undefined8 *)(param_1 + 0x1e40) = 0;
  *(undefined8 *)(param_1 + 0x1e48) = 0;
  *(undefined8 *)(param_1 + 0x1e58) = 0;
  *(undefined8 *)(param_1 + 0x1e60) = 0;
  *(undefined8 *)(param_1 + 0x1e68) = 0;
  *(undefined8 *)(param_1 + 0x1e70) = 0;
  *(undefined8 *)(param_1 + 0x1e78) = 0;
  *(undefined8 *)(param_1 + 0x1e80) = 0;
  *(undefined8 *)(param_1 + 0x1e88) = 0;
  *(undefined8 *)(param_1 + 0x1e90) = 0;
  *(undefined8 *)(param_1 + 0x1e98) = 0;
  *(undefined8 *)(param_1 + 0x1ea0) = 0;
  *(undefined8 *)(param_1 + 0x1ea8) = 0;
  *(undefined8 *)(param_1 + 0x1eb0) = 0;
  *(undefined8 *)(param_1 + 0x1eb8) = 0;
  *(undefined8 *)(param_1 + 0x1ec0) = 0;
  *(undefined8 *)(param_1 + 0x1ec8) = 0;
  *(undefined8 *)(param_1 + 0x1ed0) = 0;
  *(undefined8 *)(param_1 + 0x1ed8) = 0;
  *(undefined8 *)(param_1 + 0x1ee0) = 0;
  *(undefined8 *)(param_1 + 0x1ee8) = 0;
  *(undefined8 *)(param_1 + 0x1ef0) = 0;
  *(undefined8 *)(param_1 + 0x1f20) = 0;
  *(undefined8 *)(param_1 + 0x1f28) = 0;
  *(undefined8 *)(param_1 + 0x1f68) = 0;
  *(undefined8 *)(param_1 + 0x1f70) = 0;
  *(undefined8 *)(param_1 + 0x1f58) = 0;
  *(undefined8 *)(param_1 + 0x1f60) = 0;
  *(undefined4 *)(param_1 + 0x1f78) = 0;
  *(undefined8 *)(param_1 + 0x1f88) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1f84) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1f80) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1f7c) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x1fac) = 0;
  *(undefined8 *)(param_1 + 0x1fb4) = 0;
  *(undefined8 *)(param_1 + 0x1fbc) = 0;
  *(undefined8 *)(param_1 + 0x1fc4) = 0;
  *(undefined8 *)(param_1 + 0x1fe8) = 0;
  *(undefined8 *)(param_1 + 0x1ff0) = 0;
  *(undefined8 *)(param_1 + 0x1fd8) = 0;
  *(undefined8 *)(param_1 + 0x1fe0) = 0;
  *(undefined4 *)(param_1 + 0x1ff8) = 0;
  *(undefined8 *)(param_1 + 0x2008) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2004) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2000) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1ffc) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x2020) = 0;
  *(undefined8 *)(param_1 + 0x2028) = 0;
  *(undefined8 *)(param_1 + 0x2010) = 0;
  *(undefined8 *)(param_1 + 0x2018) = 0;
  *(undefined4 *)(param_1 + 0x2030) = 0;
  *(undefined8 *)(param_1 + 0x2040) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x203c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2038) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2034) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x2058) = 0;
  *(undefined8 *)(param_1 + 0x2060) = 0;
  *(undefined8 *)(param_1 + 0x2048) = 0;
  *(undefined8 *)(param_1 + 0x2050) = 0;
  *(undefined4 *)(param_1 + 0x2068) = 0;
  *(undefined8 *)(param_1 + 0x2078) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2074) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2070) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x206c) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x2090) = 0;
  *(undefined8 *)(param_1 + 0x2098) = 0;
  *(undefined8 *)(param_1 + 0x2080) = 0;
  *(undefined8 *)(param_1 + 0x2088) = 0;
  *(undefined4 *)(param_1 + 0x20a0) = 0;
  *(undefined8 *)(param_1 + 0x20b0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x20ac) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x20a8) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x20a4) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x2100) = 0;
  *(undefined8 *)(param_1 + 0x2108) = 0;
  *(undefined8 *)(param_1 + 0x2134) = 0;
  *(undefined8 *)(param_1 + 0x2128) = 0;
  *(undefined4 *)(param_1 + 0x2130) = 0;
  *(undefined8 *)(param_1 + 0x2140) = 0;
  *(undefined8 *)(param_1 + 0x2148) = 0;
  *(undefined8 *)(param_1 + 0x2150) = 0;
  *(undefined8 *)(param_1 + 0x2158) = 0;
  *(undefined2 *)(param_1 + 0x2160) = 0;
  *(undefined4 *)(param_1 + 0x213c) = 0xffffffff;
  param_1[0x2162] = 0;
  *(undefined8 *)(param_1 + 0x2168) = 0;
  *(undefined8 *)(param_1 + 0x2170) = 0;
  *(undefined8 *)(param_1 + 0x2178) = 0;
  *(undefined8 *)(param_1 + 0x2180) = 0;
  *(undefined8 *)(param_1 + 0x21a8) = 0;
  *(undefined8 *)(param_1 + 0x21b0) = 0;
  *(undefined8 *)(param_1 + 0x21d0) = 0;
  *(undefined8 *)(param_1 + 0x21d8) = 0;
  *(undefined8 *)(param_1 + 0x21f0) = 0;
  *(undefined8 *)(param_1 + 0x21f8) = 0;
  *(undefined8 *)(param_1 + 0x2200) = 0;
  *(undefined8 *)(param_1 + 0x2208) = 0;
  *(undefined8 *)(param_1 + 0x2210) = 0;
  *(undefined8 *)(param_1 + 0x2218) = 0;
  *(undefined8 *)(param_1 + 0x2220) = 0;
  *(undefined8 *)(param_1 + 0x2228) = 0;
  *(undefined8 *)(param_1 + 0x2230) = 0;
  *(undefined8 *)(param_1 + 0x2238) = 0;
  *(undefined8 *)(param_1 + 0x2240) = 0;
  *(undefined8 *)(param_1 + 0x2250) = 0;
  *(undefined8 *)(param_1 + 0x2258) = 0;
  *(undefined8 *)(param_1 + 0x2260) = 0;
  *(undefined8 *)(param_1 + 0x2268) = 0;
  *(undefined8 *)(param_1 + 0x2270) = 0;
  *(undefined8 *)(param_1 + 0x2278) = 0;
  *(undefined8 *)(param_1 + 0x2280) = 0;
  *(undefined8 *)(param_1 + 0x2288) = 0;
  *(undefined8 *)(param_1 + 0x2290) = 0;
  *(undefined8 *)(param_1 + 0x2298) = 0;
  *(undefined8 *)(param_1 + 0x22a0) = 0;
  *(undefined8 *)(param_1 + 0x22a8) = 0;
  *(undefined8 *)(param_1 + 0x22b0) = 0;
  *(undefined8 *)(param_1 + 0x22b8) = 0;
  *(undefined8 *)(param_1 + 0x22c0) = 0;
  *(undefined8 *)(param_1 + 0x22c8) = 0;
  *(undefined8 *)(param_1 + 0x22d0) = 0;
  *(undefined8 *)(param_1 + 0x22d8) = 0;
  *(undefined8 *)(param_1 + 0x22e0) = 0;
  *(undefined8 *)(param_1 + 0x22e8) = 0;
  *(undefined8 *)(param_1 + 0x22f0) = 0;
  *(undefined8 *)(param_1 + 0x22f8) = 0;
  *(undefined8 *)(param_1 + 0x2310) = 0;
  *(undefined8 *)(param_1 + 0x2318) = 0;
  *(undefined8 *)(param_1 + 0x2320) = 0;
  *(undefined8 *)(param_1 + 9000) = 0;
  *(undefined8 *)(param_1 + 0x2330) = 0;
  *(undefined8 *)(param_1 + 0x2338) = 0;
  *(undefined8 *)(param_1 + 0x2340) = 0;
  *(undefined8 *)(param_1 + 0x2368) = 0;
  FUN_18008e020((undefined8 *)(param_1 + 0x2370));
  *(undefined8 *)(param_1 + 0x23e8) = 0;
  *(undefined8 *)(param_1 + 0x23f0) = 0;
  *(undefined8 *)(param_1 + 0x23f8) = 0;
  FUN_18006e400((undefined8 *)(param_1 + 0x2400));
  *(undefined8 *)(param_1 + 0x24a4) = 0;
  *(undefined8 *)(param_1 + 0x24ac) = 0;
  *(undefined8 *)(param_1 + 0x24b4) = 0;
  *(undefined8 *)(param_1 + 0x24bc) = 0;
  *(undefined8 *)(param_1 + 0x24c4) = 0;
  *(undefined8 *)(param_1 + 0x24cc) = 0;
  *(undefined8 *)(param_1 + 0x24d4) = 0;
  *(undefined8 *)(param_1 + 0x24dc) = 0;
  *(undefined8 *)(param_1 + 0x24e4) = 0;
  *(undefined8 *)(param_1 + 0x24ec) = 0;
  *(undefined8 *)(param_1 + 0x2520) = 0;
  *(undefined8 *)(param_1 + 0x2528) = 0;
  *(undefined8 *)(param_1 + 0x2530) = 0;
  *(undefined8 *)(param_1 + 0x2538) = 0;
  *(undefined8 *)(param_1 + 0x2540) = 0;
  *(undefined8 *)(param_1 + 0x2548) = 0;
  *(undefined8 *)(param_1 + 0x2550) = 0;
  *(undefined8 *)(param_1 + 0x2558) = 0;
  *(undefined8 *)(param_1 + 0x2560) = 0;
  *(undefined8 *)(param_1 + 0x2568) = 0;
  *(undefined8 *)(param_1 + 0x2570) = 0;
  *(undefined8 *)(param_1 + 0x2578) = 0;
  *(undefined8 *)(param_1 + 0x2580) = 0;
  *(undefined8 *)(param_1 + 0x2588) = 0;
  *(undefined8 *)(param_1 + 0x2590) = 0;
  *(undefined8 *)(param_1 + 0x2598) = 0;
  *(undefined8 *)(param_1 + 0x25a0) = 0;
  *(undefined8 *)(param_1 + 0x25a8) = 0;
  *(undefined8 *)(param_1 + 0x25b0) = 0;
  *(undefined8 *)(param_1 + 0x25b8) = 0;
  *(undefined8 *)(param_1 + 0x25c0) = 0;
  *(undefined8 *)(param_1 + 0x25d0) = 0;
  *(undefined8 *)(param_1 + 0x25d8) = 0;
  *(undefined8 *)(param_1 + 0x25e0) = 0;
  *(undefined8 *)(param_1 + 0x25e8) = 0;
  *(undefined8 *)(param_1 + 0x25f0) = 0;
  *(undefined8 *)(param_1 + 0x25f8) = 0;
  *(undefined8 *)(param_1 + 0x2600) = 0;
  *(undefined8 *)(param_1 + 0x2608) = 0;
  *(undefined8 *)(param_1 + 0x2610) = 0;
  *(undefined8 *)(param_1 + 0x2618) = 0;
  *(undefined8 *)(param_1 + 0x2690) = 0;
  *(undefined8 *)(param_1 + 0x2698) = 0;
  *(undefined8 *)(param_1 + 0x26d8) = 0;
  *(undefined8 *)(param_1 + 0x26e8) = 0;
  *(undefined8 *)(param_1 + 0x26f0) = 0;
  *(undefined8 *)(param_1 + 0x26f6) = 0;
  *(undefined8 *)(param_1 + 10000) = 0;
  *(undefined8 *)(param_1 + 0x2718) = 0;
  *(undefined8 *)(param_1 + 0x2720) = 0;
  *(undefined8 *)(param_1 + 0x2728) = 0;
  *(undefined4 *)(param_1 + 0x2730) = 0;
  *(undefined8 *)(param_1 + 0x2754) = 0;
  *(undefined8 *)(param_1 + 0x275c) = 0;
  *(undefined4 *)(param_1 + 0x2764) = 0;
  *(undefined4 *)(param_1 + 0x2768) = 0x10100;
  *(undefined8 *)(param_1 + 0x276c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2774) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2778) = 0;
  *(undefined8 *)(param_1 + 0x2780) = 0;
  *(undefined8 *)(param_1 + 0x2788) = 0;
  *(undefined8 *)(param_1 + 0x2790) = 0;
  *(undefined8 *)(param_1 + 0x2798) = 0;
  *(undefined8 *)(param_1 + 0x27a0) = 0;
  *(undefined8 *)(param_1 + 0x27a8) = 0;
  *(undefined8 *)(param_1 + 0x27b0) = 0;
  *(undefined4 *)(param_1 + 0x27a4) = 0xff7fffff;
  *(undefined8 *)(param_1 + 0x27b8) = 0;
  *(undefined8 *)(param_1 + 0x27c0) = 0;
  *(undefined8 *)(param_1 + 0x27c8) = 0;
  *(undefined8 *)(param_1 + 0x27d0) = 0;
  *(undefined8 *)(param_1 + 0x27d8) = 0;
  *(undefined8 *)(param_1 + 0x27e0) = 0;
  *(undefined8 *)(param_1 + 0x27e4) = 0;
  *(undefined8 *)(param_1 + 0x27ec) = 0;
  *(undefined8 *)(param_1 + 0x2900) = 0;
  *(undefined8 *)(param_1 + 0x2908) = 0;
  *(undefined1 **)(param_1 + 0xe0) = param_1;
  *(undefined1 **)(param_1 + 0x2370) = param_1;
  *param_1 = 0;
  param_1[1] = param_2 == (undefined1 (*) [32])0x0;
  *(undefined8 *)(param_1 + 0x10b8) = 0;
  *(undefined8 *)(param_1 + 0x10c8) = 0;
  *(undefined8 *)(param_1 + 0x10c0) = 0;
  if (param_2 == (undefined1 (*) [32])0x0) {
    local_res18 = (undefined1 (*) [32])(*(code *)PTR__malloc_base_1801121b8)(0x2a8,DAT_180115c20);
    lVar7 = DAT_180115c10;
    if (DAT_180115c10 != 0) {
      piVar1 = (int *)(DAT_180115c10 + 0x12f0);
      lVar8 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
      if (*(int *)(lVar8 + 0x27c4 + DAT_180115c10) != *piVar1) {
        iVar6 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(DAT_180115c10 + 0x27c0) = sVar5;
        lVar8 = (longlong)sVar5 * 8;
        *(int *)(lVar8 + 0x27c4 + lVar7) = *piVar1;
        *(undefined4 *)(lVar8 + 0x27c8 + lVar7) = 0;
      }
      psVar2 = (short *)(lVar8 + 0x27c8 + lVar7);
      *psVar2 = *psVar2 + 1;
      *(int *)(lVar7 + 0x27b8) = *(int *)(lVar7 + 0x27b8) + 1;
    }
    local_res20 = local_res10;
    if (local_res18 == (undefined1 (*) [32])0x0) {
      param_2 = (undefined1 (*) [32])0x0;
    }
    else {
      param_2 = FUN_18006e430(local_res18);
    }
  }
  *(undefined1 (**) [32])(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x12e8) = 0;
  *(undefined4 *)(param_1 + 0x12f0) = 0;
  *(undefined8 *)(param_1 + 0x12f4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x12fc) = 0;
  *(undefined8 *)(param_1 + 0x1308) = 0;
  *(undefined8 *)(param_1 + 0x1310) = 0;
  *(undefined8 *)(param_1 + 0x1318) = 0;
  *(undefined4 *)(param_1 + 0x1340) = 0;
  *(undefined4 *)(param_1 + 0x1344) = 1;
  *(undefined8 *)(param_1 + 0x1398) = 0;
  *(undefined8 *)(param_1 + 0x13a8) = 0;
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  *(undefined8 *)(param_1 + 0x13b8) = 0;
  *(undefined8 *)(param_1 + 0x13c0) = 0;
  *(undefined8 *)(param_1 + 0x13c8) = 0;
  *(undefined8 *)(param_1 + 0x13d0) = 0;
  *(undefined8 *)(param_1 + 0x13e0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x13e8) = 0;
  *(undefined8 *)(param_1 + 0x13fc) = 0;
  *(undefined8 *)(param_1 + 0x1404) = 0;
  *(undefined8 *)(param_1 + 0x140c) = 0;
  *(undefined2 *)(param_1 + 0x1418) = 0;
  *(undefined4 *)(param_1 + 0x1414) = 0;
  param_1[0x141a] = 0;
  *(undefined8 *)(param_1 + 0x141c) = 0;
  *(undefined8 *)(param_1 + 0x1424) = 0;
  *(undefined2 *)(param_1 + 0x142c) = 0;
  param_1[0x142e] = 0;
  *(undefined4 *)(param_1 + 0x1434) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1438) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x1440) = 0;
  *(undefined8 *)(param_1 + 0x1448) = 0;
  *(uint *)(param_1 + 0x1430) = *(uint *)(param_1 + 0x1430) | 0xff;
  *(undefined8 *)(param_1 + 0x1450) = 0;
  *(undefined4 *)(param_1 + 0x1458) = 0;
  *(undefined8 *)(param_1 + 0x145c) = 0;
  *(undefined8 *)(param_1 + 0x1464) = 0;
  *(undefined8 *)(param_1 + 0x1478) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + 0x1470) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + 0x1480) = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0x1d38) = 0;
  param_1[0x1d3c] = 0;
  *(undefined8 *)(param_1 + 0x1d44) = 0;
  param_1[0x1e50] = 0;
  *(undefined8 *)(param_1 + 0x1ef8) = 0;
  *(undefined8 *)(param_1 + 0x1f00) = 0;
  *(undefined8 *)(param_1 + 0x1f14) = 0;
  *(undefined8 *)(param_1 + 0x1f0c) = 0;
  *(undefined4 *)(param_1 + 0x1f08) = 0;
  *(undefined8 *)(param_1 + 0x1f38) = 0;
  *(undefined4 *)(param_1 + 0x1f1c) = 0;
  *(undefined8 *)(param_1 + 0x1f30) = 0;
  *(undefined4 *)(param_1 + 8000) = 2;
  *(undefined8 *)(param_1 + 0x1f48) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1f50) = 0;
  *(undefined2 *)(param_1 + 0x1f90) = 0;
  param_1[0x1f92] = 0;
  *(undefined8 *)(param_1 + 0x1f94) = 0;
  *(undefined4 *)(param_1 + 0x1f9c) = 0;
  *(undefined8 *)(param_1 + 0x1fa4) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1fa0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1fcc) = 0;
  *(undefined4 *)(param_1 + 0x1fd4) = 0;
  *(undefined8 *)(param_1 + 0x20bc) = 0;
  *(undefined4 *)(param_1 + 0x20b8) = 0;
  *(undefined4 *)(param_1 + 0x20c4) = 0;
  *(undefined2 *)(param_1 + 0x20c8) = 0;
  uVar3 = 0x1200;
  if (param_1[0x60] != '\0') {
    uVar3 = 0x8200;
  }
  *(undefined4 *)(param_1 + 0x20cc) = uVar3;
  uVar3 = 0x3200;
  if (param_1[0x60] != '\0') {
    uVar3 = 0xa200;
  }
  *(undefined4 *)(param_1 + 0x20d0) = uVar3;
  *(undefined8 *)(param_1 + 0x20e8) = 0;
  *(undefined8 *)(param_1 + 0x20e0) = 0;
  *(undefined8 *)(param_1 + 0x20d8) = 0;
  *(undefined8 *)(param_1 + 0x20f0) = 0;
  param_1[0x20f8] = 0;
  *(undefined4 *)(param_1 + 0x20fc) = 0;
  *(undefined4 *)(param_1 + 0x2110) = 0;
  *(undefined2 *)(param_1 + 0x2115) = 0;
  param_1[0x2114] = 0;
  *(undefined4 *)(param_1 + 0x2118) = 0;
  *(undefined8 *)(param_1 + 0x211c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2188) = 0;
  *(undefined8 *)(param_1 + 0x2190) = 0;
  *(undefined4 *)(param_1 + 0x2198) = 0;
  *(undefined4 *)(param_1 + 0x219c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21a0) = 0;
  *(undefined8 *)(param_1 + 0x21b8) = 0;
  *(undefined8 *)(param_1 + 0x21c0) = 0;
  *(undefined4 *)(param_1 + 0x21c8) = 0;
  *(undefined8 *)(param_1 + 0x21e0) = 0;
  *(undefined4 *)(param_1 + 0x21ec) = 0;
  *(undefined8 *)(param_1 + 0x2248) = 0;
  *(undefined8 *)(param_1 + 0x2300) = 0;
  *(undefined4 *)(param_1 + 0x2308) = 0;
  *(undefined8 *)(param_1 + 0x2358) = 0;
  *(undefined8 *)(param_1 + 0x2348) = 0;
  *(undefined8 *)(param_1 + 0x2350) = 0;
  *(undefined8 *)(param_1 + 0x2360) = 0;
  *(undefined4 *)(param_1 + 0x2478) = 0;
  *(undefined8 *)(param_1 + 0x247c) = 0;
  *(undefined8 *)(param_1 + 0x2484) = 0;
  *(undefined8 *)(param_1 + 0x248c) = 0xa900000;
  *(undefined8 *)(param_1 + 0x2494) = 0;
  *(undefined8 *)(param_1 + 0x249c) = 0;
  param_1[0x24f4] = 0;
  *(undefined2 *)(param_1 + 0x24f6) = 0;
  *(undefined8 *)(param_1 + 0x24f8) = 0;
  *(undefined4 *)(param_1 + 0x2500) = 0;
  *(undefined2 *)(param_1 + 0x2504) = 0;
  *(undefined4 *)(param_1 + 0x2508) = 0;
  *(undefined8 *)(param_1 + 0x250c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x2514) = 0;
  *(undefined8 *)(param_1 + 0x2518) = 0;
  *(undefined8 *)(param_1 + 0x25ac) = 0;
  *(undefined4 *)(param_1 + 0x25bc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x25c0) = 0xbf800000;
  param_1[0x25c8] = 0;
  *(undefined4 *)(param_1 + 0x25cc) = 0;
  *(undefined4 *)(param_1 + 0x2620) = 0;
  *(undefined8 *)(param_1 + 0x2628) = 0;
  *(undefined8 *)(param_1 + 0x2630) = 0;
  *(undefined8 *)(param_1 + 0x2638) = 0;
  *(undefined8 *)(param_1 + 0x2640) = 0;
  *(undefined8 *)(param_1 + 0x2648) = 0;
  *(undefined8 *)(param_1 + 0x2650) = 0;
  *(undefined8 *)(param_1 + 0x2658) = 0;
  *(undefined8 *)(param_1 + 0x2660) = 0;
  *(undefined8 *)(param_1 + 0x2668) = 0;
  *(undefined8 *)(param_1 + 0x2670) = 0;
  param_1[0x2678] = 0;
  *(undefined4 *)(param_1 + 0x267c) = 0;
  *(undefined8 *)(param_1 + 0x2680) = 0;
  *(undefined8 *)(param_1 + 0x26a8) = 0;
  *(undefined8 *)(param_1 + 0x26a0) = 0;
  *(undefined8 *)(param_1 + 0x2688) = 0;
  *(undefined4 *)(param_1 + 0x26b0) = 0x7f7fffff;
  param_1[0x26b4] = 0;
  *(undefined4 *)(param_1 + 0x26b8) = 0;
  *(undefined4 *)(param_1 + 0x26c0) = 2;
  *(undefined4 *)(param_1 + 0x26bc) = 2;
  *(undefined8 *)(param_1 + 0x26c8) = 0;
  *(undefined8 *)(param_1 + 0x26d0) = 0;
  param_1[0x26e0] = 1;
  *(undefined4 *)(param_1 + 0x26e4) = 0;
  *(undefined8 *)(param_1 + 0x2700) = 0;
  *(undefined4 *)(param_1 + 0x2708) = 0;
  *(undefined4 *)(param_1 + 0x270c) = 0x100001;
  *(undefined4 *)(param_1 + 0x1d4c) = 0;
  *(undefined8 *)(param_1 + 0x2738) = 0;
  *(undefined2 *)(param_1 + 0x2740) = 0;
  *(undefined2 *)(param_1 + 0x2748) = 0xff;
  param_1[0x274a] = 0;
  *(undefined8 *)(param_1 + 0x274c) = 0;
  *(undefined4 *)(param_1 + 0x1e54) = 0x38;
  *(undefined4 *)(param_1 + 0x13a0) = 0;
  *(undefined4 *)(param_1 + 0x21e8) = 0;
  param_1[0x2742] = 0;
  *(undefined4 *)(param_1 + 0x2744) = 0x263;
  *(undefined4 *)(param_1 + 0x1d40) = 0;
  FUN_1800d22d0((undefined1 (*) [32])(param_1 + 0x27f4),0,0xf0);
  *(undefined8 *)(param_1 + 0x28e4) = 0;
  *(undefined4 *)(param_1 + 0x28ec) = 0;
  *(undefined8 *)(param_1 + 0x28f4) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x28f0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2910) = 0;
  *(undefined8 *)(param_1 + 0x2918) = 0;
  *(undefined8 *)(param_1 + 0x2920) = 0;
  *(undefined8 *)(param_1 + 0x2928) = 0;
  *(undefined8 *)(param_1 + 0x2930) = 0;
  *(undefined8 *)(param_1 + 0x2938) = 0;
  *(undefined8 *)(param_1 + 0x2940) = 0;
  *(undefined8 *)(param_1 + 0x2948) = 0;
  return param_1;
}


undefined1 (*) [32] FUN_18004a000(undefined1 (*param_1) [32])

{
  longlong lVar1;
  longlong lVar2;

  *(undefined8 *)(param_1[6] + 0xc) = 0;
  *(undefined8 *)param_1[0x56] = 0;
  *(undefined8 *)(param_1[0x56] + 8) = 0;
  *(undefined8 *)(param_1[0x56] + 0x10) = 0;
  *(undefined8 *)(param_1[0x56] + 0x18) = 0;
  *(undefined8 *)param_1[0x57] = 0;
  *(undefined8 *)(param_1[0x5d] + 0x10) = 0;
  *(undefined8 *)(param_1[0x5d] + 0x18) = 0;
  FUN_1800d22d0(param_1,0,0xbd8);
  *(undefined8 *)*param_1 = 0;
  *(char **)(*param_1 + 0x18) = "imgui.ini";
  *(undefined4 *)(*param_1 + 8) = 0xbf800000;
  *(char **)param_1[1] = "imgui_log.txt";
  *(undefined4 *)(*param_1 + 0xc) = 0xbf800000;
  *(undefined4 *)(*param_1 + 0x10) = 0x3c888889;
  *(undefined4 *)(*param_1 + 0x14) = 0x40a00000;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined8 *)(param_1[1] + 0x10) = 0;
  *(undefined4 *)(param_1[1] + 0x18) = 0x3f800000;
  *(undefined8 *)param_1[2] = 0;
  param_1[1][0x1c] = 0;
  *(undefined4 *)(param_1[2] + 8) = 0x3f800000;
  *(undefined4 *)(param_1[2] + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1[2] + 0x10) = 0x1010000;
  *(undefined4 *)(param_1[2] + 0x14) = 0x100;
  *(undefined4 *)(param_1[2] + 0x18) = 0x10100;
  *(undefined4 *)(param_1[2] + 0x1c) = 0x100;
  param_1[3][0] = 1;
  *(undefined4 *)(param_1[3] + 4) = 0x42700000;
  *(undefined4 *)param_1[4] = 0x10100;
  param_1[4][4] = 0;
  *(undefined4 *)(param_1[3] + 0x1c) = 0x1010101;
  *(undefined4 *)(param_1[3] + 8) = 0x3e99999a;
  *(undefined4 *)(param_1[3] + 0xc) = 0x40c00000;
  *(undefined4 *)(param_1[3] + 0x10) = 0x40c00000;
  *(undefined4 *)(param_1[3] + 0x14) = 0x3e8ccccd;
  *(undefined4 *)(param_1[3] + 0x18) = 0x3d4ccccd;
  *(undefined8 *)(param_1[4] + 0x10) = 0;
  *(undefined8 *)(param_1[4] + 8) = 0;
  *(undefined8 *)(param_1[5] + 8) = 0;
  *(undefined8 *)param_1[5] = 0;
  *(undefined8 *)(param_1[4] + 0x18) = 0;
  *(undefined4 *)param_1[7] = 0xff7fffff;
  *(undefined4 *)(param_1[7] + 4) = 0xff7fffff;
  *(undefined4 *)(param_1[0x55] + 0x18) = 0xff7fffff;
  *(undefined4 *)(param_1[0x55] + 0x1c) = 0xff7fffff;
  *(undefined4 *)(param_1[7] + 0x18) = 0;
  *(undefined4 *)param_1[0x5c] = 0xbf800000;
  *(undefined4 *)(param_1[0x5b] + 0xc) = 0xbf800000;
  *(undefined4 *)(param_1[0x5c] + 4) = 0xbf800000;
  *(undefined4 *)(param_1[0x5b] + 0x10) = 0xbf800000;
  *(undefined4 *)(param_1[0x5c] + 8) = 0xbf800000;
  *(undefined4 *)(param_1[0x5b] + 0x14) = 0xbf800000;
  *(undefined4 *)(param_1[0x5c] + 0xc) = 0xbf800000;
  *(undefined4 *)(param_1[0x5b] + 0x18) = 0xbf800000;
  *(undefined4 *)(param_1[0x5c] + 0x10) = 0xbf800000;
  *(undefined4 *)(param_1[0x5b] + 0x1c) = 0xbf800000;
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)(param_1[8] + lVar1 * 0x10 + 0xc) = 0xbf800000;
    *(undefined4 *)(param_1[8] + lVar1 * 0x10 + 8) = 0xbf800000;
    lVar1 = lVar2;
  } while (lVar2 != 0x9b);
  param_1[0x5d][0xd] = 1;
  return param_1;
}


undefined2 * FUN_18004a210(undefined2 *param_1)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;

  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  puVar8 = param_1;
  for (lVar6 = 0x9b; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = 0xffff;
    puVar8 = puVar8 + 1;
  }
  lVar6 = *(longlong *)(param_1 + 0xa0);
  if (lVar6 != 0) {
    *(undefined8 *)(param_1 + 0x9c) = 0;
    lVar3 = DAT_180115c10;
    if (DAT_180115c10 != 0) {
      piVar1 = (int *)(DAT_180115c10 + 0x12f0);
      lVar7 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
      if (*(int *)(lVar7 + 0x27c4 + DAT_180115c10) != *piVar1) {
        iVar5 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180115c10 + 0x27c0) = sVar4;
        lVar7 = (longlong)sVar4 * 8;
        *(int *)(lVar7 + 0x27c4 + lVar3) = *piVar1;
        *(undefined4 *)(lVar7 + 0x27c8 + lVar3) = 0;
      }
      psVar2 = (short *)(lVar7 + 0x27ca + lVar3);
      *psVar2 = *psVar2 + 1;
      *(int *)(lVar3 + 0x27bc) = *(int *)(lVar3 + 0x27bc) + 1;
    }
    (*(code *)PTR_thunk_FUN_1800c3030_1801121c0)(lVar6,DAT_180115c20);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0xa8);
  if (lVar6 != 0) {
    *(undefined8 *)(param_1 + 0xa4) = 0;
    lVar3 = DAT_180115c10;
    if (DAT_180115c10 != 0) {
      piVar1 = (int *)(DAT_180115c10 + 0x12f0);
      lVar7 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
      if (*(int *)(lVar7 + 0x27c4 + DAT_180115c10) != *piVar1) {
        iVar5 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180115c10 + 0x27c0) = sVar4;
        lVar7 = (longlong)sVar4 * 8;
        *(int *)(lVar7 + 0x27c4 + lVar3) = *piVar1;
        *(undefined4 *)(lVar7 + 0x27c8 + lVar3) = 0;
      }
      psVar2 = (short *)(lVar7 + 0x27ca + lVar3);
      *psVar2 = *psVar2 + 1;
      *(int *)(lVar3 + 0x27bc) = *(int *)(lVar3 + 0x27bc) + 1;
    }
    (*(code *)PTR_thunk_FUN_1800c3030_1801121c0)(lVar6,DAT_180115c20);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return param_1;
}


undefined4 * FUN_18004a3c0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0;
  *(undefined8 *)(param_1 + 0x43) = 0;
  *(undefined8 *)(param_1 + 0x45) = 0;
  *(undefined8 *)(param_1 + 0x47) = 0;
  *(undefined8 *)(param_1 + 0x49) = 0;
  *(undefined8 *)(param_1 + 0x4b) = 0;
  *(undefined8 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)(param_1 + 0x51) = 0;
  *(undefined8 *)(param_1 + 0x53) = 0;
  *(undefined8 *)(param_1 + 0x55) = 0;
  *(undefined8 *)(param_1 + 0x57) = 0;
  *(undefined8 *)(param_1 + 0x59) = 0;
  *(undefined8 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)(param_1 + 0x5f) = 0;
  *(undefined8 *)(param_1 + 0x61) = 0;
  *(undefined8 *)(param_1 + 99) = 0;
  *(undefined8 *)(param_1 + 0x65) = 0;
  *(undefined8 *)(param_1 + 0x67) = 0;
  *(undefined8 *)(param_1 + 0x69) = 0;
  *(undefined8 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)(param_1 + 0x6f) = 0;
  *(undefined8 *)(param_1 + 0x71) = 0;
  *(undefined8 *)(param_1 + 0x73) = 0;
  *(undefined8 *)(param_1 + 0x75) = 0;
  *(undefined8 *)(param_1 + 0x77) = 0;
  *(undefined8 *)(param_1 + 0x79) = 0;
  *(undefined8 *)(param_1 + 0x7b) = 0;
  *(undefined8 *)(param_1 + 0x7d) = 0;
  *(undefined8 *)(param_1 + 0x7f) = 0;
  *(undefined8 *)(param_1 + 0x81) = 0;
  *(undefined8 *)(param_1 + 0x83) = 0;
  *(undefined8 *)(param_1 + 0x85) = 0;
  *(undefined8 *)(param_1 + 0x87) = 0;
  *(undefined8 *)(param_1 + 0x89) = 0;
  *(undefined8 *)(param_1 + 0x8b) = 0;
  *(undefined8 *)(param_1 + 0x8d) = 0;
  *(undefined8 *)(param_1 + 0x8f) = 0;
  *(undefined8 *)(param_1 + 0x91) = 0;
  *(undefined8 *)(param_1 + 0x93) = 0;
  *(undefined8 *)(param_1 + 0x95) = 0;
  *(undefined8 *)(param_1 + 0x97) = 0;
  *(undefined8 *)(param_1 + 0x99) = 0;
  *(undefined8 *)(param_1 + 0x9b) = 0;
  *(undefined8 *)(param_1 + 0x9d) = 0;
  *(undefined8 *)(param_1 + 0x9f) = 0;
  *(undefined8 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0xa3) = 0;
  *(undefined8 *)(param_1 + 0xa5) = 0;
  *(undefined8 *)(param_1 + 0xa7) = 0;
  *(undefined8 *)(param_1 + 0xa9) = 0;
  *(undefined8 *)(param_1 + 0xab) = 0;
  *(undefined8 *)(param_1 + 0xad) = 0;
  *(undefined8 *)(param_1 + 0xaf) = 0;
  *(undefined8 *)(param_1 + 0xb1) = 0;
  *(undefined8 *)(param_1 + 0xb3) = 0;
  *(undefined8 *)(param_1 + 0xb5) = 0;
  *(undefined8 *)(param_1 + 0xb7) = 0;
  *(undefined8 *)(param_1 + 0xb9) = 0;
  *(undefined8 *)(param_1 + 0xbb) = 0;
  *(undefined8 *)(param_1 + 0xbd) = 0;
  *(undefined8 *)(param_1 + 0xbf) = 0;
  *(undefined8 *)(param_1 + 0xc1) = 0;
  *(undefined8 *)(param_1 + 0xc3) = 0;
  *(undefined8 *)(param_1 + 0xc5) = 0;
  *(undefined8 *)(param_1 + 199) = 0;
  *(undefined8 *)(param_1 + 0xc9) = 0;
  *(undefined8 *)(param_1 + 0xcb) = 0;
  *(undefined8 *)(param_1 + 0xcd) = 0;
  *(undefined8 *)(param_1 + 0xcf) = 0;
  *(undefined8 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 0xd3) = 0;
  *(undefined8 *)(param_1 + 0xd5) = 0;
  *(undefined8 *)(param_1 + 0xd7) = 0;
  *(undefined8 *)(param_1 + 0xd9) = 0;
  *(undefined8 *)(param_1 + 0xdb) = 0;
  *(undefined8 *)(param_1 + 0xdd) = 0;
  *(undefined8 *)(param_1 + 0xdf) = 0;
  *(undefined8 *)(param_1 + 0xe1) = 0;
  *(undefined8 *)(param_1 + 0xe3) = 0;
  *(undefined8 *)(param_1 + 0xe5) = 0;
  *(undefined8 *)(param_1 + 0xe7) = 0;
  *(undefined8 *)(param_1 + 0xe9) = 0;
  *(undefined8 *)(param_1 + 0xeb) = 0;
  *(undefined8 *)(param_1 + 0xed) = 0;
  *(undefined8 *)(param_1 + 0xef) = 0;
  *(undefined8 *)(param_1 + 0xf1) = 0;
  *(undefined8 *)(param_1 + 0xf3) = 0;
  *(undefined8 *)(param_1 + 0xf5) = 0;
  *(undefined8 *)(param_1 + 0xf7) = 0;
  *(undefined8 *)(param_1 + 0xf9) = 0;
  *(undefined8 *)(param_1 + 0xfb) = 0;
  *(undefined8 *)(param_1 + 0xfd) = 0;
  *(undefined8 *)(param_1 + 0xff) = 0;
  *(undefined8 *)(param_1 + 0x101) = 0;
  *(undefined8 *)(param_1 + 0x103) = 0;
  *(undefined8 *)(param_1 + 0x105) = 0;
  *(undefined8 *)(param_1 + 0x107) = 0;
  *(undefined8 *)(param_1 + 0x109) = 0;
  *(undefined8 *)(param_1 + 0x10b) = 0;
  *(undefined8 *)(param_1 + 0x10d) = 0;
  *(undefined8 *)(param_1 + 0x10f) = 0;
  *(undefined8 *)(param_1 + 0x111) = 0;
  *(undefined8 *)(param_1 + 0x113) = 0;
  *(undefined8 *)(param_1 + 0x115) = 0;
  *(undefined8 *)(param_1 + 0x117) = 0;
  *(undefined8 *)(param_1 + 0x119) = 0;
  *(undefined8 *)(param_1 + 0x11b) = 0;
  *(undefined8 *)(param_1 + 0x11d) = 0;
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f19999a;
  param_1[2] = 0x41000000;
  *(undefined8 *)(param_1 + 3) = 0x41000000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x40800000;
  param_1[7] = 0x42000000;
  *(undefined8 *)(param_1 + 8) = 0x42000000;
  *(undefined8 *)(param_1 + 10) = 0x3f000000;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x40800000;
  *(undefined8 *)(param_1 + 0x11) = 0x40400000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x41000000;
  param_1[0x15] = 0x40800000;
  param_1[0x16] = 0x40800000;
  param_1[0x17] = 0x40800000;
  param_1[0x18] = 0x40800000;
  *(undefined8 *)(param_1 + 0x19) = 0x40000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x41a80000;
  param_1[0x1d] = 0x40c00000;
  param_1[0x1e] = 0x41600000;
  param_1[0x1f] = 0x41100000;
  *(undefined8 *)(param_1 + 0x20) = 0x41400000;
  *(undefined8 *)(param_1 + 0x22) = 0x40800000;
  *(undefined8 *)(param_1 + 0x24) = 0x40a00000;
  param_1[0x26] = 0xbf800000;
  param_1[0x27] = 0;
  param_1[0x28] = 0x3f800000;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0x3f1c61aa;
  *(undefined8 *)(param_1 + 0x2b) = 0x3f000000;
  param_1[0x2d] = 1;
  param_1[0x2e] = 0x3f000000;
  *(undefined8 *)(param_1 + 0x2f) = 0x3f000000;
  param_1[0x31] = 0;
  *(undefined8 *)(param_1 + 0x32) = 0x40400000;
  param_1[0x34] = 0x3f000000;
  param_1[0x35] = 0x41a00000;
  param_1[0x36] = 0x40400000;
  param_1[0x37] = 0x41980000;
  param_1[0x38] = 0x41980000;
  param_1[0x39] = 0x40400000;
  param_1[0x3a] = 0x40400000;
  param_1[0x3b] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x3c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xf2) = 1;
  param_1[0x3d] = 0x3fa00000;
  param_1[0x3e] = 0x3e99999a;
  param_1[0x11f] = 0x3e19999a;
  param_1[0x120] = 0x3e19999a;
  param_1[0x121] = 0x3ecccccd;
  param_1[0x122] = 0xa400;
  param_1[0x123] = 0x30400;
  FUN_180079630((longlong)param_1);
  return param_1;
}


undefined1 (*) [32] FUN_18004a8d0(undefined1 (*param_1) [32],undefined8 param_2,byte *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  short sVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;

  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined8 *)(param_1[1] + 0x10) = 0;
  *(undefined8 *)(param_1[1] + 0x18) = 0;
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(param_1[2] + 8) = 0;
  *(undefined8 *)(param_1[2] + 0x10) = 0;
  *(undefined8 *)(param_1[2] + 0x18) = 0;
  *(undefined8 *)(param_1[4] + 0x18) = 0;
  *(undefined8 *)param_1[5] = 0;
  *(undefined8 *)(param_1[5] + 8) = 0;
  *(undefined8 *)(param_1[5] + 0x10) = 0;
  *(undefined8 *)(param_1[5] + 0x18) = 0;
  *(undefined8 *)param_1[6] = 0;
  *(undefined8 *)(param_1[7] + 0x14) = 0;
  *(undefined8 *)(param_1[7] + 0x1c) = 0;
  *(undefined8 *)(param_1[8] + 8) = 0;
  *(undefined8 *)(param_1[8] + 0x10) = 0;
  *(undefined8 *)(param_1[8] + 0x18) = 0;
  *(undefined8 *)param_1[9] = 0;
  *(undefined8 *)(param_1[9] + 8) = 0;
  *(undefined8 *)(param_1[9] + 0x10) = 0;
  *(undefined8 *)(param_1[9] + 0x18) = 0;
  *(undefined8 *)param_1[10] = 0;
  *(undefined8 *)(param_1[10] + 8) = 0;
  *(undefined8 *)(param_1[10] + 0x1c) = 0;
  *(undefined8 *)(param_1[0xb] + 4) = 0;
  *(undefined4 *)(param_1[0xb] + 0xc) = 0;
  *(undefined8 *)(param_1[0xb] + 0x1c) = 0;
  *(undefined8 *)(param_1[0xc] + 4) = 0;
  *(undefined8 *)(param_1[0xc] + 0xc) = 0;
  *(undefined8 *)(param_1[0xc] + 0x10) = 0;
  *(undefined8 *)(param_1[0xc] + 0x18) = 0;
  *(undefined8 *)(param_1[0xd] + 8) = 0;
  *(undefined8 *)(param_1[0xd] + 0x10) = 0;
  *(undefined8 *)(param_1[0xf] + 8) = 0;
  *(undefined8 *)(param_1[0xf] + 0x10) = 0;
  *(undefined8 *)(param_1[0xf] + 0x18) = 0;
  *(undefined8 *)param_1[0x10] = 0;
  *(undefined8 *)(param_1[0x10] + 8) = 0;
  *(undefined8 *)(param_1[0x10] + 0x10) = 0;
  *(undefined8 *)(param_1[0x10] + 0x18) = 0;
  *(undefined8 *)param_1[0x11] = 0;
  *(undefined8 *)(param_1[0x11] + 8) = 0;
  *(undefined8 *)(param_1[0x11] + 0x10) = 0;
  *(undefined8 *)(param_1[0x11] + 0x18) = 0;
  *(undefined8 *)param_1[0x12] = 0;
  *(undefined8 *)(param_1[0x12] + 8) = 0;
  *(undefined8 *)(param_1[0x12] + 0x10) = 0;
  *(undefined8 *)(param_1[0x12] + 0x18) = 0;
  *(undefined8 *)param_1[0x13] = 0;
  *(undefined8 *)(param_1[0x13] + 8) = 0;
  *(undefined8 *)(param_1[0x13] + 0x10) = 0;
  *(undefined8 *)(param_1[0x13] + 0x18) = 0;
  *(undefined8 *)(param_1[0x14] + 0x10) = 0;
  *(undefined8 *)(param_1[0x14] + 0x18) = 0;
  *(undefined8 *)param_1[0x15] = 0;
  *(undefined8 *)(param_1[0x15] + 8) = 0;
  FUN_18006e130((undefined1 (*) [32])(param_1[0x16] + 8),0);
  *(undefined8 *)(param_1[0x1f] + 8) = 0;
  *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
  *(undefined8 *)(param_1[0x1f] + 0x18) = 0;
  *(undefined8 *)param_1[0x20] = 0;
  *(undefined8 *)(param_1[0x20] + 8) = 0;
  *(undefined8 *)(param_1[0x20] + 0x10) = 0;
  FUN_1800d22d0(param_1,0,0x428);
  *(undefined8 *)*param_1 = param_2;
  sVar8 = strlen((char *)param_3);
  uVar1 = sVar8 + 1;
  puVar9 = (undefined8 *)(*(code *)PTR__malloc_base_1801121b8)(uVar1,DAT_180115c20);
  if (DAT_180115c10 != 0) {
    FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),puVar9,uVar1);
  }
  uVar10 = FUN_1800d1c20(puVar9,(undefined8 *)param_3,uVar1);
  *(undefined8 *)(*param_1 + 8) = uVar10;
  sVar8 = strlen((char *)param_3);
  *(int *)(param_1[4] + 8) = (int)sVar8 + 1;
  uVar14 = 0xffffffff;
  bVar6 = *param_3;
  while (bVar6 != 0) {
    pbVar17 = param_3 + 1;
    if (((bVar6 == 0x23) && (*pbVar17 == 0x23)) && (param_3[2] == 0x23)) {
      uVar14 = 0xffffffff;
    }
    uVar14 = uVar14 >> 8 ^
             *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar14 & 0xff) ^ (ulonglong)bVar6) * 4);
    param_3 = pbVar17;
    bVar6 = *pbVar17;
  }
  *(uint *)(*param_1 + 0x10) = ~uVar14;
  iVar12 = *(int *)(param_1[8] + 0xc);
  if (*(int *)(param_1[8] + 8) == iVar12) {
    iVar15 = *(int *)(param_1[8] + 8) + 1;
    if (iVar12 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar12 / 2 + iVar12;
    }
    if (iVar15 < iVar7) {
      iVar15 = iVar7;
    }
    if (iVar12 < iVar15) {
      puVar9 = (undefined8 *)
               (*(code *)PTR__malloc_base_1801121b8)((longlong)iVar15 * 4,DAT_180115c20);
      if (DAT_180115c10 != 0) {
        FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),puVar9,
                      (longlong)iVar15 * 4);
      }
      if (*(undefined8 **)(param_1[8] + 0x10) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar9,*(undefined8 **)(param_1[8] + 0x10),
                      (longlong)*(int *)(param_1[8] + 8) << 2);
        lVar5 = DAT_180115c10;
        lVar4 = *(longlong *)(param_1[8] + 0x10);
        if ((lVar4 != 0) && (DAT_180115c10 != 0)) {
          piVar2 = (int *)(DAT_180115c10 + 0x12f0);
          lVar13 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
          if (*(int *)(lVar13 + 0x27c4 + DAT_180115c10) != *piVar2) {
            iVar12 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
            sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
            *(short *)(DAT_180115c10 + 0x27c0) = sVar11;
            lVar13 = (longlong)sVar11 * 8;
            *(int *)(lVar13 + 0x27c4 + lVar5) = *piVar2;
            *(undefined4 *)(lVar13 + 0x27c8 + lVar5) = 0;
          }
          psVar3 = (short *)(lVar13 + 0x27ca + lVar5);
          *psVar3 = *psVar3 + 1;
          *(int *)(lVar5 + 0x27bc) = *(int *)(lVar5 + 0x27bc) + 1;
        }
        (*(code *)PTR_thunk_FUN_1800c3030_1801121c0)(lVar4,DAT_180115c20);
      }
      *(undefined8 **)(param_1[8] + 0x10) = puVar9;
      *(int *)(param_1[8] + 0xc) = iVar15;
    }
  }
  *(undefined4 *)(*(longlong *)(param_1[8] + 0x10) + (longlong)*(int *)(param_1[8] + 8) * 4) =
       *(undefined4 *)(*param_1 + 0x10);
  *(int *)(param_1[8] + 8) = *(int *)(param_1[8] + 8) + 1;
  if (*(int *)(param_1[8] + 8) < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  uVar16 = ~*(uint *)(*(longlong *)(param_1[8] + 0x10) + -4 + (longlong)*(int *)(param_1[8] + 8) * 4
                     );
  pbVar17 = &DAT_1800e14bd;
  bVar6 = 0x23;
  uVar14 = uVar16;
  do {
    if (((bVar6 == 0x23) && (*pbVar17 == 0x23)) && (pbVar17[1] == 0x23)) {
      uVar14 = uVar16;
    }
    uVar14 = uVar14 >> 8 ^
             *(uint *)(&DAT_1800df710 + ((ulonglong)(uVar14 & 0xff) ^ (ulonglong)bVar6) * 4);
    bVar6 = *pbVar17;
    pbVar17 = pbVar17 + 1;
  } while (bVar6 != 0);
  uVar14 = ~uVar14;
  if (*(uint *)(*(longlong *)*param_1 + 0x1400) == uVar14) {
    FUN_180052900(uVar14,0xb,"#MOVE",0);
  }
  *(uint *)(param_1[4] + 0xc) = uVar14;
  *(undefined4 *)(param_1[5] + 8) = 0x7f7fffff;
  *(undefined4 *)(param_1[5] + 0xc) = 0x7f7fffff;
  *(undefined4 *)(param_1[5] + 0x10) = 0x3f000000;
  *(undefined4 *)(param_1[5] + 0x14) = 0x3f000000;
  *(undefined2 *)(param_1[7] + 4) = 0xffff;
  *(undefined4 *)(param_1[7] + 8) = 0xffffffff;
  *(undefined2 *)(param_1[7] + 0x11) = 0;
  param_1[7][0x10] = 0;
  *(undefined4 *)(param_1[7] + 0x1c) = 0x7f7fffff;
  *(undefined4 *)param_1[8] = 0x7f7fffff;
  *(undefined4 *)(param_1[7] + 0x14) = 0x7f7fffff;
  *(undefined4 *)(param_1[7] + 0x18) = 0x7f7fffff;
  *(undefined4 *)param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1[0x14] + 4) = 0xbf800000;
  *(undefined8 *)(param_1[0x15] + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1[0x15] + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1[0x15] + 0x1c) = 0xffffffff;
  *(undefined1 (**) [32])param_1[0x16] = (undefined1 (*) [32])(param_1[0x16] + 8);
  *(undefined8 *)(param_1[0x1c] + 0x18) = *(undefined8 *)(*param_1 + 8);
  *(longlong *)param_1[0x18] = *(longlong *)*param_1 + 0x10d0;
  *(undefined4 *)(param_1[0x20] + 0x10) = 0x7f7fffff;
  *(undefined4 *)(param_1[0x20] + 0x14) = 0x7f7fffff;
  *(undefined4 *)(param_1[0x20] + 8) = 0x7f7fffff;
  *(undefined4 *)(param_1[0x20] + 0xc) = 0x7f7fffff;
  return param_1;
}


void FUN_18004ae70(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 8));
  }
  return;
}


void FUN_18004ae90(int *param_1)

{
  FUN_180051400(param_1);
  if (*(longlong *)(param_1 + 6) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 6));
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 2));
  }
  return;
}


void FUN_18004aed0(int *param_1)

{
  FUN_1800514c0(param_1);
  if (*(longlong *)(param_1 + 6) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 6));
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 2));
  }
  return;
}


void FUN_18004af10(int *param_1)

{
  FUN_1800515b0(param_1);
  if (*(longlong *)(param_1 + 6) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 6));
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 2));
  }
  return;
}


void FUN_18004af50(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 8));
  }
  return;
}


void FUN_18004af70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x48));
  }
  return;
}


void FUN_18004af90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2908) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2908));
  }
  if (*(longlong *)(param_1 + 0x27b0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x27b0));
  }
  if (*(longlong *)(param_1 + 0x2798) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2798));
  }
  if (*(longlong *)(param_1 + 0x2728) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2728));
  }
  if (*(longlong *)(param_1 + 0x2718) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2718));
  }
  if (*(longlong *)(param_1 + 0x2698) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2698));
  }
  if (*(longlong *)(param_1 + 0x2618) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2618));
  }
  if (*(longlong *)(param_1 + 0x2608) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2608));
  }
  if (*(longlong *)(param_1 + 0x25f8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x25f8));
  }
  if (*(longlong *)(param_1 + 0x25e8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x25e8));
  }
  if (*(longlong *)(param_1 + 0x25d8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x25d8));
  }
  if (*(longlong *)(param_1 + 0x2538) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2538));
  }
  if (*(longlong *)(param_1 + 0x2528) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2528));
  }
  FUN_18006e7e0((undefined8 *)(param_1 + 0x2400));
  if (*(longlong *)(param_1 + 0x23f8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x23f8));
  }
  FUN_18008e080(param_1 + 0x2370);
  FUN_180051400((int *)(param_1 + 0x2320));
  if (*(longlong *)(param_1 + 0x2338) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2338));
  }
  if (*(longlong *)(param_1 + 9000) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 9000));
  }
  if (*(longlong *)(param_1 + 0x2318) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2318));
  }
  if (*(longlong *)(param_1 + 0x2290) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2290));
  }
  if (*(longlong *)(param_1 + 0x2280) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2280));
  }
  FUN_1800514c0((int *)(param_1 + 0x2250));
  if (*(longlong *)(param_1 + 0x2268) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2268));
  }
  if (*(longlong *)(param_1 + 0x2258) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2258));
  }
  if (*(longlong *)(param_1 + 0x2240) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2240));
  }
  if (*(longlong *)(param_1 + 0x2230) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2230));
  }
  FUN_1800515b0((int *)(param_1 + 0x2200));
  if (*(longlong *)(param_1 + 0x2218) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2218));
  }
  if (*(longlong *)(param_1 + 0x2208) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2208));
  }
  if (*(longlong *)(param_1 + 0x21f8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x21f8));
  }
  if (*(longlong *)(param_1 + 0x21d8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x21d8));
  }
  if (*(longlong *)(param_1 + 0x21b0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x21b0));
  }
  if (*(longlong *)(param_1 + 0x1f28) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1f28));
  }
  if (*(longlong *)(param_1 + 0x1ef0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1ef0));
  }
  if (*(longlong *)(param_1 + 0x1ee0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1ee0));
  }
  if (*(longlong *)(param_1 + 0x1ed0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1ed0));
  }
  if (*(longlong *)(param_1 + 0x1ec0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1ec0));
  }
  if (*(longlong *)(param_1 + 0x1eb0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1eb0));
  }
  if (*(longlong *)(param_1 + 0x1ea0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1ea0));
  }
  if (*(longlong *)(param_1 + 0x1e90) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1e90));
  }
  if (*(longlong *)(param_1 + 0x1e80) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1e80));
  }
  if (*(longlong *)(param_1 + 0x1e70) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1e70));
  }
  if (*(longlong *)(param_1 + 0x1e60) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1e60));
  }
  if (*(longlong *)(param_1 + 0x1d30) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1d30));
  }
  if (*(longlong *)(param_1 + 0x1d20) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1d20));
  }
  if (*(longlong *)(param_1 + 0x1390) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1390));
  }
  if (*(longlong *)(param_1 + 0x1380) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1380));
  }
  if (*(longlong *)(param_1 + 0x1370) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1370));
  }
  if (*(longlong *)(param_1 + 0x1360) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1360));
  }
  if (*(longlong *)(param_1 + 0x1350) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1350));
  }
  if (*(longlong *)(param_1 + 0x1338) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1338));
  }
  if (*(longlong *)(param_1 + 0x1328) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1328));
  }
  if (*(longlong *)(param_1 + 0x1118) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1118));
  }
  if (*(longlong *)(param_1 + 0xbc0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0xbc0));
  }
  return;
}


void FUN_18004b370(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x30));
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x18));
  }
  return;
}


void FUN_18004b3a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 3000) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 3000));
  }
  return;
}


void FUN_18004b3c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x10));
  }
  return;
}


void FUN_18004b3e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x150));
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x140));
  }
  return;
}


void FUN_18004b420(longlong param_1)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;

  if (*(undefined8 **)(param_1 + 0x2c0) != (undefined8 *)(param_1 + 0x2c8)) {
    FID_conflict__assert
              (L"DrawList == &DrawListInst",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x10e3);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 8));
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x2a0)) {
    do {
      lVar6 = (longlong)iVar7 * 0x88;
      lVar3 = *(longlong *)(param_1 + 0x2a8);
      FUN_180072570((int *)(lVar3 + 0x70 + lVar6));
      lVar4 = *(longlong *)(lVar6 + 0x80 + lVar3);
      if (lVar4 != 0) {
        FUN_18005b5c0(lVar4);
      }
      lVar3 = *(longlong *)(lVar6 + 0x68 + lVar3);
      if (lVar3 != 0) {
        FUN_18005b5c0(lVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x2a0));
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    FUN_18005b5c0(*(longlong *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  FUN_18006e660((undefined8 *)(param_1 + 0x2c8));
  lVar4 = DAT_180115c10;
  lVar3 = *(longlong *)(param_1 + 0x2a8);
  if (lVar3 != 0) {
    if (DAT_180115c10 != 0) {
      piVar1 = (int *)(DAT_180115c10 + 0x12f0);
      lVar6 = (longlong)*(short *)(DAT_180115c10 + 0x27c0) * 8;
      if (*(int *)(lVar6 + 0x27c4 + DAT_180115c10) != *piVar1) {
        iVar7 = *(short *)(DAT_180115c10 + 0x27c0) + 1;
        sVar5 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(DAT_180115c10 + 0x27c0) = sVar5;
        lVar6 = (longlong)sVar5 * 8;
        *(int *)(lVar6 + 0x27c4 + lVar4) = *piVar1;
        *(undefined4 *)(lVar6 + 0x27c8 + lVar4) = 0;
      }
      psVar2 = (short *)(lVar6 + 0x27ca + lVar4);
      *psVar2 = *psVar2 + 1;
      *(int *)(lVar4 + 0x27bc) = *(int *)(lVar4 + 0x27bc) + 1;
    }
    (*(code *)PTR_thunk_FUN_1800c3030_1801121c0)(lVar3,DAT_180115c20);
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x298));
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x200));
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1f0));
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x1b0));
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x110));
  }
  return;
}


void FUN_18004b5f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0xe8));
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0xd8));
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_18005b5c0(*(longlong *)(param_1 + 0x98));
  }
  return;
}


void _guard_check_icall(void)

{
  return;
}


ulonglong FUN_18004b650(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;

  uVar1 = (longlong)param_2 * 0x74 + *param_1;
  if ((uVar1 < *param_1) || (param_1[1] <= uVar1)) {
    FID_conflict__assert
              (L"p >= Data && p < DataEnd",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui_internal.h"
               ,0x284);
  }
  return uVar1;
}


longlong FUN_18004b690(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  return (longlong)param_2 + *(longlong *)(param_1 + 2);
}


longlong FUN_18004b6e0(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  return *(longlong *)(param_1 + 2) + (longlong)param_2 * 8;
}


longlong FUN_18004b730(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  return (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 2);
}


longlong FUN_18004b780(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  return *(longlong *)(param_1 + 2) + (longlong)param_2 * 0x48;
}


longlong FUN_18004b7d0(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  return (longlong)param_2 * 0x2c + *(longlong *)(param_1 + 2);
}


longlong FUN_18004b820(longlong param_1,ulonglong param_2)

{
  if (param_2 < 2) {
    return param_1 + param_2 * 4;
  }
  FID_conflict__assert
            (L"idx == 0 || idx == 1",
             L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
             ,0x11c);
  return param_1 + param_2 * 4;
}


longlong FUN_18004b870(char *param_1,uint param_2,float *param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;

  lVar6 = DAT_180115c10;
  if (*(char *)(DAT_180115c10 + 0x2114) == '\0') {
    param_3 = (float *)0x37b3;
    FID_conflict__assert
              (L"g.DragDropActive",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x37b3);
  }
  if (*(int *)(lVar6 + 0x213c) == -1) {
    param_3 = (float *)0x37b4;
    FID_conflict__assert
              (L"payload.DataFrameCount != -1",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x37b4);
  }
  if (param_1 != (char *)0x0) {
    if (*(int *)(lVar6 + 0x213c) == -1) {
      return 0;
    }
    iVar4 = strcmp(param_1,(char *)(lVar6 + 0x2140));
    if (iVar4 != 0) {
      return 0;
    }
  }
  fVar11 = *(float *)(lVar6 + 0x2170);
  fVar12 = *(float *)(lVar6 + 0x2174);
  fVar13 = *(float *)(lVar6 + 0x2168);
  fVar10 = *(float *)(lVar6 + 0x216c);
  fVar9 = (fVar12 - fVar10) * (fVar11 - fVar13);
  if (*(float *)(lVar6 + 0x2190) <= fVar9 && fVar9 != *(float *)(lVar6 + 0x2190)) {
    return 0;
  }
  iVar4 = *(int *)(lVar6 + 0x2198);
  iVar1 = *(int *)(lVar6 + 0x2188);
  *(float *)(lVar6 + 0x2190) = fVar9;
  *(uint *)(lVar6 + 0x218c) = param_2;
  *(int *)(lVar6 + 0x2194) = iVar1;
  *(bool *)(lVar6 + 0x2161) = iVar4 == iVar1;
  if (((*(uint *)(lVar6 + 0x2118) & 0x800) == 0 && (param_2 & 0x800) == 0) && (iVar4 == iVar1)) {
    if (fVar13 <= *(float *)(lVar6 + 0x2178)) {
      fVar13 = *(float *)(lVar6 + 0x2178);
    }
    if (fVar10 <= *(float *)(lVar6 + 0x217c)) {
      fVar10 = *(float *)(lVar6 + 0x217c);
    }
    if (*(float *)(lVar6 + 0x2180) <= fVar11) {
      fVar11 = *(float *)(lVar6 + 0x2180);
    }
    if (*(float *)(lVar6 + 0x2184) <= fVar12) {
      fVar12 = *(float *)(lVar6 + 0x2184);
    }
    local_38 = fVar13 - 3.5;
    local_34 = fVar10 - 3.5;
    local_30 = fVar11 + 3.5;
    lVar2 = *(longlong *)(DAT_180115c10 + 0x13a8);
    local_2c = fVar12 + 3.5;
    if ((((local_38 < *(float *)(lVar2 + 600)) || (local_34 < *(float *)(lVar2 + 0x25c))) ||
        (*(float *)(lVar2 + 0x260) < local_30)) || (*(float *)(lVar2 + 0x264) < local_2c)) {
      bVar3 = true;
      FUN_1800764a0(*(int **)(lVar2 + 0x2c0));
    }
    else {
      bVar3 = false;
    }
    local_28 = *(float *)(DAT_180115c10 + 0x1054);
    uStack_24 = *(undefined4 *)(DAT_180115c10 + 0x1058);
    uStack_20 = *(undefined4 *)(DAT_180115c10 + 0x105c);
    fStack_1c = *(float *)(DAT_180115c10 + 0x1060) * *(float *)(DAT_180115c10 + 0xc28);
    uVar5 = FUN_180051e70(&local_28);
    param_3 = &local_30;
    param_4 = (ulonglong)uVar5;
    FUN_180071260(*(int **)(lVar2 + 0x2c0),&local_38,param_3,uVar5,0.0,0,2.0);
    if (bVar3) {
      FUN_180076030(*(int **)(lVar2 + 0x2c0));
    }
  }
  *(int *)(lVar6 + 0x219c) = *(int *)(lVar6 + 0x12f0);
  if (((*(byte *)(lVar6 + 0x2118) & 0x10) == 0) || (*(int *)(lVar6 + 0x2120) != -1)) {
    if ((iVar4 == iVar1) && (uVar7 = FUN_180059dd0(*(uint *)(lVar6 + 0x2120)), (char)uVar7 == '\0'))
    goto LAB_18004bb31;
  }
  else if ((iVar4 == iVar1) && (*(int *)(lVar6 + 0x211c) < *(int *)(lVar6 + 0x12f0))) {
LAB_18004bb31:
    bVar3 = true;
    uVar8 = 1;
    goto LAB_18004bade;
  }
  bVar3 = false;
  uVar8 = 0;
LAB_18004bade:
  *(undefined1 *)(lVar6 + 0x2162) = uVar8;
  if (bVar3) {
    if ((*(byte *)(lVar6 + 0x270c) & 2) != 0) {
      FUN_180052d90(0x1800e6b88,(ulonglong)*(uint *)(lVar6 + 0x2188),param_3,param_4);
    }
    return lVar6 + 0x2128;
  }
  lVar6 = lVar6 + 0x2128;
  if ((param_2 & 0x400) == 0) {
    lVar6 = 0;
  }
  return lVar6;
}


void FUN_18004bb80(longlong param_1,byte param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  byte bVar9;

  if (*(longlong *)(param_1 + 0xd8) == 0) {
    FID_conflict__assert
              (L"Ctx != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x71b);
  }
  lVar6 = *(longlong *)(param_1 + 0xd8);
  puVar1 = (uint *)(lVar6 + 0x1320);
  uVar4 = *puVar1;
  do {
    uVar4 = uVar4 - 1;
    if ((int)uVar4 < 0) {
      bVar9 = *(char *)(lVar6 + 0xbb4) == '\0';
      goto LAB_18004bc0f;
    }
    if ((int)*puVar1 <= (int)uVar4) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
  } while (*(int *)((ulonglong)uVar4 * 0x1c + *(longlong *)(lVar6 + 0x1328)) != 6);
  bVar9 = *(byte *)((ulonglong)uVar4 * 0x1c + 0xc + *(longlong *)(lVar6 + 0x1328));
LAB_18004bc0f:
  if ((bVar9 != param_2) && ((*(char *)(param_1 + 0x85) == '\0' || (param_2 != 0)))) {
    iVar5 = *(int *)(lVar6 + 0x1344);
    *(int *)(lVar6 + 0x1344) = iVar5 + 1;
    uVar4 = *(uint *)(lVar6 + 0x1324);
    if (*puVar1 == uVar4) {
      iVar8 = *puVar1 + 1;
      if (uVar4 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = (int)uVar4 / 2 + uVar4;
      }
      if (iVar8 < iVar7) {
        iVar8 = iVar7;
      }
      FUN_18006d830((int *)puVar1,iVar8);
    }
    uVar4 = *puVar1;
    lVar6 = *(longlong *)(lVar6 + 0x1328);
    puVar2 = (undefined8 *)((longlong)(int)uVar4 * 0x1c + lVar6);
    *puVar2 = 6;
    puVar2[1] = (ulonglong)CONCAT14(param_2,iVar5);
    puVar3 = (ulonglong *)((longlong)(int)uVar4 * 0x1c + 0xc + lVar6);
    *puVar3 = (ulonglong)param_2;
    puVar3[1] = 0;
    *puVar1 = *puVar1 + 1;
  }
  return;
}


void FUN_18004bcd0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;

  if (*(longlong *)(param_1 + 0xd8) == 0) {
    FID_conflict__assert
              (L"Ctx != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x5e4);
  }
  if ((param_2 != 0) && (*(char *)(param_1 + 0xbad) != '\0')) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    iVar3 = *(int *)(lVar4 + 0x1344);
    *(int *)(lVar4 + 0x1344) = iVar3 + 1;
    iVar6 = *(int *)(lVar4 + 0x1324);
    if (*(int *)(lVar4 + 0x1320) == iVar6) {
      iVar7 = *(int *)(lVar4 + 0x1320) + 1;
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar7 < iVar6) {
        iVar7 = iVar6;
      }
      FUN_18006d830((int *)(lVar4 + 0x1320),iVar7);
    }
    lVar8 = (longlong)*(int *)(lVar4 + 0x1320) * 0x1c;
    lVar5 = *(longlong *)(lVar4 + 0x1328);
    puVar1 = (undefined8 *)(lVar8 + lVar5);
    *puVar1 = 0x200000005;
    puVar1[1] = CONCAT44(param_2,iVar3);
    puVar2 = (ulonglong *)(lVar8 + 0xc + lVar5);
    *puVar2 = (ulonglong)param_2;
    puVar2[1] = 0;
    *(int *)(lVar4 + 0x1320) = *(int *)(lVar4 + 0x1320) + 1;
  }
  return;
}


void FUN_18004bdd0(longlong param_1,ushort param_2)

{
  if (((param_2 != 0) || (*(short *)(param_1 + 0xbae) != 0)) && (*(char *)(param_1 + 0xbad) != '\0')
     ) {
    if ((param_2 & 0xfc00) == 0xd800) {
      if (*(short *)(param_1 + 0xbae) != 0) {
        FUN_18004bcd0(param_1,0xfffd);
      }
      *(ushort *)(param_1 + 0xbae) = param_2;
      return;
    }
    if (*(short *)(param_1 + 0xbae) != 0) {
      if ((param_2 & 0xfc00) == 0xdc00) {
        param_2 = 0xfffd;
      }
      else {
        FUN_18004bcd0(param_1,0xfffd);
      }
      *(undefined2 *)(param_1 + 0xbae) = 0;
    }
    FUN_18004bcd0(param_1,(uint)param_2);
  }
  return;
}


void FUN_18004be80(longlong param_1,uint param_2,char param_3,float param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;

  if (*(longlong *)(param_1 + 0xd8) == 0) {
    FID_conflict__assert
              (L"Ctx != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x670);
  }
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xbad) == '\0') {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0xd8);
  if (0x9a < param_2 - 0x200) {
    if ((((param_2 == 0x1000) || (param_2 == 0x2000)) || (param_2 == 0x4000)) || (param_2 == 0x8000)
       ) goto LAB_18004bf4d;
    FID_conflict__assert
              (L"ImGui::IsNamedKeyOrMod(key)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x674);
  }
  if (param_2 - 0x290 < 7) {
    FID_conflict__assert
              (L"ImGui::IsAliasKey(key) == false",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x675);
  }
LAB_18004bf4d:
  if (*(char *)(lVar7 + 0x60) != '\0') {
    if (param_2 == 0x8000) {
      param_2 = 0x1000;
    }
    else if (param_2 == 0x1000) {
      param_2 = 0x8000;
    }
    else if (param_2 == 0x212) {
      param_2 = 0x20f;
    }
    else if (param_2 == 0x216) {
      param_2 = 0x213;
    }
    else if (param_2 == 0x20f) {
      param_2 = 0x212;
    }
    else if (param_2 == 0x213) {
      param_2 = 0x216;
    }
  }
  puVar1 = (uint *)(lVar7 + 0x1320);
  uVar5 = *puVar1;
  do {
    uVar5 = uVar5 - 1;
    if ((int)uVar5 < 0) {
      pcVar10 = (char *)FUN_180056f10(lVar7,param_2);
      fVar13 = *(float *)(pcVar10 + 0xc);
      cVar4 = *pcVar10;
      goto LAB_18004c01a;
    }
    if ((int)*puVar1 <= (int)uVar5) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    lVar8 = *(longlong *)(lVar7 + 0x1328);
    lVar12 = (ulonglong)uVar5 * 0x1c;
  } while ((*(int *)(lVar12 + lVar8) != 4) || (*(uint *)(lVar12 + 0xc + lVar8) != param_2));
  FUN_180056f10(lVar7,param_2);
  fVar13 = *(float *)(lVar12 + 0x14 + lVar8);
  cVar4 = *(char *)(lVar12 + 0x10 + lVar8);
LAB_18004c01a:
  if ((cVar4 != param_3) || (fVar13 != param_4)) {
    iVar6 = *(int *)(lVar7 + 0x1344);
    *(int *)(lVar7 + 0x1344) = iVar6 + 1;
    uVar5 = *(uint *)(lVar7 + 0x1324);
    if (*puVar1 == uVar5) {
      iVar11 = *puVar1 + 1;
      if (uVar5 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = (int)uVar5 / 2 + uVar5;
      }
      if (iVar11 < iVar9) {
        iVar11 = iVar9;
      }
      FUN_18006d830((int *)puVar1,iVar11);
    }
    uVar5 = *puVar1;
    lVar7 = *(longlong *)(lVar7 + 0x1328);
    puVar2 = (undefined8 *)((longlong)(int)uVar5 * 0x1c + lVar7);
    *puVar2 = CONCAT44((param_2 - 0x278 < 0x18) + 2,4);
    puVar2[1] = CONCAT44(param_2,iVar6);
    puVar3 = (ulonglong *)((longlong)(int)uVar5 * 0x1c + 0xc + lVar7);
    *puVar3 = (ulonglong)CONCAT14(param_3,param_2);
    puVar3[1] = (ulonglong)(uint)param_4;
    *puVar1 = *puVar1 + 1;
  }
  return;
}


void FUN_18004c120(longlong param_1,uint param_2,char param_3)

{
  if (*(char *)(param_1 + 0xbad) == '\0') {
    return;
  }
  if (param_3 == '\0') {
    FUN_18004be80(param_1,param_2,'\0',0.0);
    return;
  }
  FUN_18004be80(param_1,param_2,param_3,1.0);
  return;
}


void FUN_18004c150(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  char cVar13;
  char cVar14;

  cVar14 = (char)param_3;
  do {
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      param_3 = 0x6ce;
      FID_conflict__assert
                (L"Ctx != 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x6ce);
    }
    lVar8 = *(longlong *)(param_1 + 0xd8);
    if (4 < param_2) {
      param_3 = 0x6d0;
      FID_conflict__assert
                (L"mouse_button >= 0 && mouse_button < ImGuiMouseButton_COUNT",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                 ,0x6d0);
    }
    if (*(char *)(param_1 + 0xbad) == '\0') {
      return;
    }
    if ((((*(char *)(param_1 + 0x58) != '\0') && (param_2 == 0)) &&
        (*(char *)(param_1 + 0xb6b) != '\0')) && (param_2 = 1, cVar14 == '\0')) {
      *(undefined1 *)(param_1 + 0xb6b) = 0;
    }
    puVar1 = (uint *)(lVar8 + 0x1320);
    uVar5 = *puVar1;
    do {
      uVar5 = uVar5 - 1;
      if ((int)uVar5 < 0) {
        cVar13 = *(char *)(lVar8 + 0xf0 + (longlong)(int)param_2);
        goto LAB_18004c23a;
      }
      if ((int)*puVar1 <= (int)uVar5) {
        param_3 = 0x833;
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar12 = (ulonglong)uVar5 * 0x1c;
      lVar9 = *(longlong *)(lVar8 + 0x1328);
    } while ((*(int *)(lVar12 + lVar9) != 3) || (*(uint *)(lVar12 + 0xc + lVar9) != param_2));
    cVar13 = *(char *)(lVar12 + 0x10 + lVar9);
LAB_18004c23a:
    if (cVar13 == cVar14) {
      return;
    }
    if (((*(char *)(param_1 + 0x58) == '\0') || (param_2 != 0)) || (cVar14 == '\0')) {
LAB_18004c2eb:
      iVar6 = *(int *)(lVar8 + 0x1344);
      *(int *)(lVar8 + 0x1344) = iVar6 + 1;
      uVar5 = *(uint *)(lVar8 + 0x1324);
      uVar7 = *(uint *)(lVar8 + 0x1340);
      if (*puVar1 == uVar5) {
        iVar11 = *puVar1 + 1;
        if (uVar5 == 0) {
          iVar10 = 8;
        }
        else {
          iVar10 = (int)uVar5 / 2 + uVar5;
        }
        if (iVar11 < iVar10) {
          iVar11 = iVar10;
        }
        FUN_18006d830((int *)puVar1,iVar11);
      }
      uVar5 = *puVar1;
      lVar8 = *(longlong *)(lVar8 + 0x1328);
      puVar2 = (undefined8 *)((longlong)(int)uVar5 * 0x1c + lVar8);
      *puVar2 = 0x100000003;
      puVar2[1] = CONCAT44(param_2,iVar6);
      puVar3 = (ulonglong *)((longlong)(int)uVar5 * 0x1c + 0xc + lVar8);
      *puVar3 = (ulonglong)CONCAT14(cVar14,param_2);
      puVar3[1] = (ulonglong)uVar7;
      *puVar1 = *puVar1 + 1;
      return;
    }
    uVar5 = *puVar1;
    do {
      uVar5 = uVar5 - 1;
      if ((int)uVar5 < 0) {
        bVar4 = *(byte *)(lVar8 + 0x107);
        goto LAB_18004c2ac;
      }
      if ((int)*puVar1 <= (int)uVar5) {
        param_3 = 0x833;
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar12 = (ulonglong)uVar5 * 0x1c;
      lVar9 = *(longlong *)(lVar8 + 0x1328);
    } while ((*(int *)(lVar12 + lVar9) != 4) || (*(int *)(lVar12 + 0xc + lVar9) != 0x8000));
    bVar4 = *(byte *)(lVar12 + 0x10 + lVar9);
LAB_18004c2ac:
    if (bVar4 == 0) goto LAB_18004c2eb;
    if ((*(byte *)(lVar8 + 0x270c) & 0x80) != 0) {
      FUN_180052d90(0x1800e0e68,(ulonglong)bVar4,param_3,param_4);
    }
    *(undefined1 *)(param_1 + 0xb6b) = 1;
    cVar14 = '\x01';
    param_2 = 1;
  } while( true );
}


void FUN_18004c3a0(longlong param_1,float param_2,float param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;

  if (*(longlong *)(param_1 + 0xd8) == 0) {
    FID_conflict__assert
              (L"Ctx != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x6b4);
  }
  if (*(char *)(param_1 + 0xbad) != '\0') {
    lVar6 = *(longlong *)(param_1 + 0xd8);
    if (-3.4028235e+38 < param_3) {
      iVar8 = (int)param_3;
      if ((param_3 < 0.0) && ((float)iVar8 != param_3)) {
        iVar8 = iVar8 + -1;
      }
      param_3 = (float)iVar8;
    }
    if (-3.4028235e+38 < param_2) {
      iVar8 = (int)param_2;
      if ((param_2 < 0.0) && ((float)iVar8 != param_2)) {
        iVar8 = iVar8 + -1;
      }
      param_2 = (float)iVar8;
    }
    puVar1 = (uint *)(lVar6 + 0x1320);
    uVar4 = *puVar1;
    do {
      uVar4 = uVar4 - 1;
      if ((int)uVar4 < 0) {
        fVar3 = *(float *)(lVar6 + 0xe8);
        fVar12 = *(float *)(lVar6 + 0xec);
        goto LAB_18004c4a9;
      }
      if ((int)*puVar1 <= (int)uVar4) {
        FID_conflict__assert
                  (L"i >= 0 && i < Size",
                   L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                   ,0x833);
      }
      lVar11 = (ulonglong)uVar4 * 0x1c;
      lVar7 = *(longlong *)(lVar6 + 0x1328);
    } while (*(int *)(lVar11 + lVar7) != 1);
    fVar3 = *(float *)(lVar11 + 0xc + lVar7);
    fVar12 = *(float *)(lVar11 + 0x10 + lVar7);
LAB_18004c4a9:
    if ((fVar3 != param_2) || (fVar12 != param_3)) {
      iVar8 = *(int *)(lVar6 + 0x1344);
      *(int *)(lVar6 + 0x1344) = iVar8 + 1;
      uVar4 = *(uint *)(lVar6 + 0x1324);
      uVar5 = *(uint *)(lVar6 + 0x1340);
      if (*puVar1 == uVar4) {
        iVar10 = *puVar1 + 1;
        if (uVar4 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = (int)uVar4 / 2 + uVar4;
        }
        if (iVar10 < iVar9) {
          iVar10 = iVar9;
        }
        FUN_18006d830((int *)puVar1,iVar10);
      }
      uVar4 = *puVar1;
      lVar6 = *(longlong *)(lVar6 + 0x1328);
      puVar2 = (undefined8 *)((longlong)(int)uVar4 * 0x1c + lVar6);
      *puVar2 = 0x100000001;
      puVar2[1] = CONCAT44(param_2,iVar8);
      puVar2 = (undefined8 *)((longlong)(int)uVar4 * 0x1c + 0xc + lVar6);
      *puVar2 = CONCAT44(param_3,param_2);
      puVar2[1] = (ulonglong)uVar5;
      *puVar1 = *puVar1 + 1;
    }
  }
  return;
}


void FUN_18004c580(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    FID_conflict__assert
              (L"Ctx != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x714);
    *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x1340) = param_2;
    return;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x1340) = param_2;
  return;
}


void FUN_18004c5f0(longlong param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;

  if (*(longlong *)(param_1 + 0xd8) == 0) {
    FID_conflict__assert
              (L"Ctx != 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x6ff);
  }
  if ((*(char *)(param_1 + 0xbad) != '\0') && ((param_2 != 0.0 || (param_3 != 0.0)))) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    iVar2 = *(int *)(lVar4 + 0x1344);
    *(int *)(lVar4 + 0x1344) = iVar2 + 1;
    iVar6 = *(int *)(lVar4 + 0x1324);
    uVar3 = *(uint *)(lVar4 + 0x1340);
    if (*(int *)(lVar4 + 0x1320) == iVar6) {
      iVar7 = *(int *)(lVar4 + 0x1320) + 1;
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar7 < iVar6) {
        iVar7 = iVar6;
      }
      FUN_18006d830((int *)(lVar4 + 0x1320),iVar7);
    }
    lVar8 = (longlong)*(int *)(lVar4 + 0x1320) * 0x1c;
    lVar5 = *(longlong *)(lVar4 + 0x1328);
    puVar1 = (undefined8 *)(lVar8 + lVar5);
    *puVar1 = 0x100000002;
    puVar1[1] = CONCAT44(param_2,iVar2);
    puVar1 = (undefined8 *)(lVar8 + 0xc + lVar5);
    *puVar1 = CONCAT44(param_3,param_2);
    puVar1[1] = (ulonglong)uVar3;
    *(int *)(lVar4 + 0x1320) = *(int *)(lVar4 + 0x1320) + 1;
  }
  return;
}


void FUN_18004c720(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;

  lVar3 = DAT_180115c10;
  lVar5 = FUN_180055cb0((byte *)*param_1);
  if (lVar5 != 0) {
    FID_conflict__assert
              (L"FindSettingsHandler(handler->TypeName) == 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x3933);
  }
  iVar1 = *(int *)(lVar3 + 0x25e4);
  if (*(int *)(lVar3 + 0x25e0) == iVar1) {
    iVar8 = *(int *)(lVar3 + 0x25e0) + 1;
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar1 / 2 + iVar1;
    }
    if (iVar8 < iVar4) {
      iVar8 = iVar4;
    }
    if (iVar1 < iVar8) {
      puVar6 = (undefined8 *)
               (*(code *)PTR__malloc_base_1801121b8)((longlong)iVar8 * 0x48,DAT_180115c20);
      if (DAT_180115c10 != 0) {
        FUN_180052750((int *)(DAT_180115c10 + 0x27b8),*(int *)(DAT_180115c10 + 0x12f0),puVar6,
                      (longlong)iVar8 * 0x48);
      }
      if (*(undefined8 **)(lVar3 + 0x25e8) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar6,*(undefined8 **)(lVar3 + 0x25e8),
                      (longlong)*(int *)(lVar3 + 0x25e0) * 0x48);
        FUN_18005b5c0(*(longlong *)(lVar3 + 0x25e8));
      }
      *(undefined8 **)(lVar3 + 0x25e8) = puVar6;
      *(int *)(lVar3 + 0x25e4) = iVar8;
    }
  }
  lVar7 = (longlong)*(int *)(lVar3 + 0x25e0);
  uVar2 = param_1[1];
  lVar5 = *(longlong *)(lVar3 + 0x25e8);
  puVar6 = (undefined8 *)(lVar5 + lVar7 * 0x48);
  *puVar6 = *param_1;
  puVar6[1] = uVar2;
  uVar2 = param_1[3];
  puVar6 = (undefined8 *)(lVar5 + 0x10 + lVar7 * 0x48);
  *puVar6 = param_1[2];
  puVar6[1] = uVar2;
  uVar2 = param_1[5];
  puVar6 = (undefined8 *)(lVar5 + 0x20 + lVar7 * 0x48);
  *puVar6 = param_1[4];
  puVar6[1] = uVar2;
  uVar2 = param_1[7];
  puVar6 = (undefined8 *)(lVar5 + 0x30 + lVar7 * 0x48);
  *puVar6 = param_1[6];
  puVar6[1] = uVar2;
  *(undefined8 *)(lVar5 + 0x40 + lVar7 * 0x48) = param_1[8];
  *(int *)(lVar3 + 0x25e0) = *(int *)(lVar3 + 0x25e0) + 1;
  return;
}


void FUN_18004c880(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;

  lVar5 = DAT_180115c10;
  if (*(int *)(DAT_180115c10 + 0x1ee8) < 1) {
    FID_conflict__assert
              (L"i >= 0 && i < Size",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x833);
  }
  lVar3 = **(longlong **)(lVar5 + 0x1ef0);
  piVar1 = (int *)(lVar5 + 0xcc);
  *piVar1 = *piVar1 + 1;
  puVar4 = *(uint **)(param_1 + 0x2c0);
  if (1 < (int)puVar4[0x21]) {
    FUN_180075450((int *)(puVar4 + 0x20),puVar4);
  }
  FUN_18006f280(lVar3 + 0x50,*(int **)(lVar3 + 0x90 + (longlong)param_2 * 8),
                *(int **)(param_1 + 0x2c0));
  plVar6 = *(longlong **)(param_1 + 0x1b0);
  plVar2 = plVar6 + *(int *)(param_1 + 0x1a8);
  if (((longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar5 = *plVar6;
      if ((*(char *)(lVar5 + 0xcc) != '\0') && (*(char *)(lVar5 + 0xd4) == '\0')) {
        FUN_18004c880(lVar5,param_2);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
  }
  return;
}


void FUN_18004c950(int *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;

  iVar3 = param_1[1];
  if (*param_1 == iVar3) {
    iVar6 = *param_1 + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar6 < iVar3) {
      iVar6 = iVar3;
    }
    FUN_18006d6f0(param_1,iVar6);
  }
  *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 8) = param_2;
  *param_1 = *param_1 + 1;
  if (*(char *)(param_2 + 0xcc) != '\0') {
    uVar1 = *(uint *)(param_2 + 0x1a8);
    if (1 < uVar1) {
      FUN_1800bebc0(*(undefined1 **)(param_2 + 0x1b0),(longlong)(int)uVar1,8,FUN_1800513b0);
    }
    uVar5 = 0;
    if (0 < (int)uVar1) {
      do {
        if (*(int *)(param_2 + 0x1a8) <= (int)uVar5) {
          FID_conflict__assert
                    (L"i >= 0 && i < Size",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                     ,0x833);
        }
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x1b0) + uVar5 * 8);
        if (*(char *)(lVar2 + 0xcc) != '\0') {
          FUN_18004c950(param_1,lVar2);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined1 FUN_18004ca40(byte *param_1,undefined1 *param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  char cVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  code *pcVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  longlong lVar21;
  undefined1 uVar22;
  char cVar23;
  undefined4 uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 (*pauVar29) [32];
  longlong lVar30;
  undefined1 (*pauVar31) [32];
  size_t sVar32;
  char *_Str2;
  undefined8 uVar33;
  float *pfVar34;
  longlong lVar35;
  longlong *plVar36;
  byte bVar37;
  uint uVar38;
  longlong lVar39;
  bool bVar40;
  char cVar41;
  undefined8 *puVar42;
  int iVar43;
  byte *pbVar44;
  undefined2 *puVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  char cVar48;
  longlong lVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auStackY_228 [32];
  undefined4 local_1e0;
  undefined8 local_1c8;
  float local_1c0 [2];
  longlong local_1b8;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined1 (*local_1a0) [32];
  uint local_198;
  uint local_194;
  float local_190 [2];
  byte *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  float local_170;
  float local_16c;
  undefined1 *local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  longlong local_140;
  float local_138;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  float local_108 [2];
  float local_100 [2];
  float local_f8 [2];
  float local_f0 [2];
  float local_e8 [2];
  uint local_e0 [4];
  ulonglong local_d0;

  lVar21 = DAT_180115c10;
  local_d0 = DAT_180112300 ^ (ulonglong)auStackY_228;
  local_188 = param_1;
  local_168 = param_2;
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    FID_conflict__assert
              (L"name != 0 && name[0] != \'\\0\'",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1b71);
  }
  if (*(char *)(lVar21 + 0x1300) == '\0') {
    FID_conflict__assert
              (L"g.WithinFrameScope",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1b72);
  }
  if (*(int *)(lVar21 + 0x12f4) == *(int *)(lVar21 + 0x12f0)) {
    FID_conflict__assert
              (L"g.FrameCountEnded != g.FrameCount",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1b73);
  }
  bVar37 = *param_1;
  uVar38 = 0xffffffff;
  if (bVar37 != 0) {
    do {
      pbVar44 = param_1 + 1;
      if (((bVar37 == 0x23) && (*pbVar44 == 0x23)) && (param_1[2] == 0x23)) {
        uVar38 = 0xffffffff;
      }
      uVar46 = (ulonglong)bVar37;
      bVar37 = *pbVar44;
      uVar38 = uVar38 >> 8 ^ *(uint *)(&DAT_1800df710 + (uVar38 & 0xff ^ uVar46) * 4);
      param_1 = pbVar44;
    } while (bVar37 != 0);
    param_1 = local_188;
  }
  pauVar29 = (undefined1 (*) [32])FUN_180055d60(~uVar38);
  bVar50 = pauVar29 == (undefined1 (*) [32])0x0;
  local_1a0 = pauVar29;
  if (pauVar29 == (undefined1 (*) [32])0x0) {
    pauVar29 = FUN_180052380(param_1,param_3);
  }
  if (*(int *)(lVar21 + 0x13a0) == *(int *)(*pauVar29 + 0x10)) {
    pcVar12 = (code *)swi(3);
    uVar22 = (*pcVar12)();
    return uVar22;
  }
  iVar9 = *(int *)(lVar21 + 0x12f0);
  iVar10 = *(int *)pauVar29[0x14];
  uVar38 = param_3 | 6;
  if ((param_3 & 0x30200) != 0x30200) {
    uVar38 = param_3;
  }
  piVar1 = (int *)(lVar21 + 0x1378);
  if ((*piVar1 == 0) && (*(char *)(lVar21 + 0x1301) != '\0')) {
    uVar22 = 1;
  }
  else {
    uVar22 = 0;
  }
  pauVar29[6][0x15] = uVar22;
  bVar40 = iVar10 < iVar9 + -1;
  if ((uVar38 >> 0x1a & 1) != 0) {
    iVar25 = *(int *)(lVar21 + 0x1ec8);
    if ((iVar25 < 0) || (*(int *)(lVar21 + 0x1eb8) <= iVar25)) {
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    bVar40 = pauVar29 !=
             *(undefined1 (**) [32])((longlong)iVar25 * 0x38 + 8 + *(longlong *)(lVar21 + 0x1ec0))
             || *(int *)(pauVar29[4] + 0x14) !=
                *(int *)((longlong)iVar25 * 0x38 + *(longlong *)(lVar21 + 0x1ec0));
    if (iVar10 < iVar9 + -1) {
      bVar40 = true;
    }
  }
  pauVar29[6][0x13] = bVar40;
  if (bVar40 != false) {
    pauVar29[7][0x10] = pauVar29[7][0x10] | 8;
    pauVar29[7][0x11] = pauVar29[7][0x11] | 8;
    pauVar29[7][0x12] = pauVar29[7][0x12] | 8;
  }
  if (iVar10 == iVar9) {
    uVar38 = *(uint *)(*pauVar29 + 0x14);
  }
  else {
    FUN_18006b070((longlong)pauVar29,bVar50,uVar38);
    *(uint *)(*pauVar29 + 0x14) = uVar38;
    if ((*(uint *)(lVar21 + 0x1dd8) & 0x200) == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined4 *)(lVar21 + 0x1e14);
    }
    *(undefined4 *)(*pauVar29 + 0x18) = uVar24;
    *(int *)pauVar29[0x14] = iVar9;
    dVar6 = *(double *)(lVar21 + 0x12e8);
    *(undefined2 *)(pauVar29[6] + 0x1e) = 0;
    *(float *)(pauVar29[0x14] + 4) = (float)dVar6;
    uVar8 = *(undefined2 *)(lVar21 + 0x1398);
    *(int *)(lVar21 + 0x1398) = *(int *)(lVar21 + 0x1398) + 1;
    *(undefined2 *)pauVar29[7] = uVar8;
  }
  if (*piVar1 == 0) {
    lVar35 = 0;
  }
  else {
    if (*piVar1 < 1) {
      FID_conflict__assert
                (L"Size > 0",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x83c);
    }
    lVar35 = *(longlong *)(((longlong)*piVar1 + -1) * 0x78 + *(longlong *)(lVar21 + 0x1380));
  }
  if (iVar10 == iVar9) {
    local_1b8 = *(longlong *)pauVar29[0x1d];
  }
  else {
    local_1b8 = 0;
    if ((uVar38 & 0x5000000) != 0) {
      local_1b8 = lVar35;
    }
  }
  local_1c8 = lVar35;
  if ((local_1b8 == 0) && ((uVar38 >> 0x18 & 1) != 0)) {
    FID_conflict__assert
              (L"parent_window != 0 || !(flags & ImGuiWindowFlags_ChildWindow)",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
               ,0x1ba6);
  }
  if (*(int *)(pauVar29[8] + 8) == 0) {
    if (*(int *)(pauVar29[8] + 0xc) == 0) {
      FUN_18006d650((int *)(pauVar29[8] + 8),8);
    }
    *(undefined4 *)(*(longlong *)(pauVar29[8] + 0x10) + (longlong)*(int *)(pauVar29[8] + 8) * 4) =
         *(undefined4 *)(*pauVar29 + 0x10);
    *(int *)(pauVar29[8] + 8) = *(int *)(pauVar29[8] + 8) + 1;
  }
  *(undefined1 (**) [32])(lVar21 + 0x13a8) = pauVar29;
  FUN_18006df90(piVar1,*piVar1 + 1);
  if (*piVar1 < 1) {
    FID_conflict__assert
              (L"Size > 0",
               L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
               ,0x83c);
  }
  lVar11 = local_1b8;
  lVar39 = *(longlong *)(lVar21 + 0x1380);
  lVar49 = (longlong)*piVar1 * 0x78;
  local_194 = uVar38 & 0x2000000;
  *(undefined1 (**) [32])(lVar49 + -0x78 + lVar39) = pauVar29;
  uVar33 = *(undefined8 *)(lVar21 + 0x1d90);
  puVar42 = (undefined8 *)(lVar49 + -0x70 + lVar39);
  *puVar42 = *(undefined8 *)(lVar21 + 0x1d88);
  puVar42[1] = uVar33;
  uVar33 = *(undefined8 *)(lVar21 + 0x1da0);
  puVar42 = (undefined8 *)(lVar49 + -0x60 + lVar39);
  *puVar42 = *(undefined8 *)(lVar21 + 0x1d98);
  puVar42[1] = uVar33;
  uVar33 = *(undefined8 *)(lVar21 + 0x1db0);
  puVar42 = (undefined8 *)(lVar49 + -0x50 + lVar39);
  *puVar42 = *(undefined8 *)(lVar21 + 0x1da8);
  puVar42[1] = uVar33;
  uVar33 = *(undefined8 *)(lVar21 + 0x1dc0);
  puVar42 = (undefined8 *)(lVar49 + -0x40 + lVar39);
  *puVar42 = *(undefined8 *)(lVar21 + 0x1db8);
  puVar42[1] = uVar33;
  uVar33 = *(undefined8 *)(lVar21 + 0x1dd0);
  puVar42 = (undefined8 *)(lVar49 + -0x30 + lVar39);
  *puVar42 = *(undefined8 *)(lVar21 + 0x1dc8);
  puVar42[1] = uVar33;
  if ((local_194 == 0) || ((*(uint *)(lVar21 + 0x1d48) & 0x400) == 0)) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  *(undefined1 *)(lVar49 + -10 + lVar39) = uVar22;
  *(undefined4 *)(lVar49 + -8 + lVar39) = 0;
  lVar30 = DAT_180115c10;
  puVar45 = (undefined2 *)(lVar39 + -0x20 + lVar49);
  *puVar45 = *(undefined2 *)(DAT_180115c10 + 0x1378);
  *(undefined2 *)(lVar49 + -0x1e + lVar39) = *(undefined2 *)(*(longlong *)(lVar30 + 0x13a8) + 0x108)
  ;
  *(undefined2 *)(lVar49 + -0x1c + lVar39) = *(undefined2 *)(*(longlong *)(lVar30 + 0x13a8) + 0x1a0)
  ;
  *(undefined2 *)(lVar49 + -0x1a + lVar39) = *(undefined2 *)(lVar30 + 0x1e58);
  *(undefined2 *)(lVar49 + -0x18 + lVar39) = *(undefined2 *)(lVar30 + 0x1e68);
  *(undefined2 *)(lVar49 + -0x16 + lVar39) = *(undefined2 *)(lVar30 + 0x1e78);
  *(undefined2 *)(lVar49 + -0x14 + lVar39) = *(undefined2 *)(lVar30 + 0x1e88);
  *(undefined2 *)(lVar49 + -0x12 + lVar39) = *(undefined2 *)(lVar30 + 0x1ea8);
  *(undefined2 *)(lVar49 + -0x10 + lVar39) = *(undefined2 *)(lVar30 + 0x1e98);
  *(undefined2 *)(lVar49 + -0xe + lVar39) = *(undefined2 *)(lVar30 + 0x1ec8);
  *(undefined2 *)(lVar49 + -0xc + lVar39) = *(undefined2 *)(lVar30 + 0x2514);
  local_198 = uVar38 & 0x10000000;
  *(undefined2 **)(lVar21 + 0x2700) = puVar45;
  if (local_198 != 0) {
    *(int *)(lVar21 + 0x2484) = *(int *)(lVar21 + 0x2484) + 1;
  }
  if (iVar10 != iVar9) {
    *(longlong *)pauVar29[0x1d] = local_1b8;
    *(undefined1 (**) [32])(pauVar29[0x1e] + 8) = pauVar29;
    *(undefined1 (**) [32])pauVar29[0x1e] = pauVar29;
    *(undefined1 (**) [32])(pauVar29[0x1d] + 0x18) = pauVar29;
    *(undefined1 (**) [32])(pauVar29[0x1d] + 0x10) = pauVar29;
    if (local_1b8 != 0) {
      if (((uVar38 >> 0x18 & 1) != 0) && (local_194 == 0)) {
        *(undefined8 *)(pauVar29[0x1d] + 0x10) = *(undefined8 *)(local_1b8 + 0x3b0);
      }
      if ((uVar38 >> 0x1a & 1) != 0) {
        *(undefined8 *)(pauVar29[0x1d] + 0x18) = *(undefined8 *)(local_1b8 + 0x3b8);
      }
      if (((uVar38 >> 0x1b & 1) == 0) && ((uVar38 & 0x5000000) != 0)) {
        *(undefined8 *)pauVar29[0x1e] = *(undefined8 *)(local_1b8 + 0x3c0);
      }
    }
    if ((*(uint *)(*pauVar29 + 0x18) & 0x100) != 0) {
      pauVar31 = pauVar29;
      do {
        if (*(longlong *)pauVar31[0x1d] == 0) {
          FID_conflict__assert
                    (L"window->RootWindowForNav->ParentWindow != 0",
                     L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\games\\robrun\\features\\..\\..\\..\\third_party\\imgui\\imgui.cpp"
                     ,0x1b3c);
        }
        pauVar31 = *(undefined1 (**) [32])(*(longlong *)(pauVar29[0x1e] + 8) + 0x3a0);
        *(undefined1 (**) [32])(pauVar29[0x1e] + 8) = pauVar31;
      } while ((*(uint *)(*pauVar31 + 0x18) & 0x100) != 0);
    }
    *(longlong *)(pauVar29[0x1d] + 8) = lVar35;
    lVar30 = 0;
    if ((uVar38 >> 0x18 & 1) != 0) {
      lVar30 = lVar35;
    }
    *(longlong *)(pauVar29[0x1e] + 0x10) = lVar30;
    if (lVar11 == 0) {
      fVar53 = 1.0;
    }
    else {
      fVar53 = *(float *)(lVar11 + 0x2b4) * *(float *)(lVar11 + 0x2b0);
    }
    *(float *)(pauVar29[0x15] + 0x14) = fVar53;
  }
  lVar35 = DAT_180115c10;
  if ((*(uint *)(*pauVar29 + 0x18) & 0x100) == 0) {
    local_1e0 = *(undefined4 *)(*pauVar29 + 0x10);
  }
  else {
    local_1e0 = *(undefined4 *)(lVar21 + 0x1d44);
  }
  iVar25 = *(int *)(DAT_180115c10 + 0x1e8c);
  local_1c0[0] = *(float *)(*(longlong *)(DAT_180115c10 + 0x13a8) + 0x10);
  if (*(int *)(DAT_180115c10 + 0x1e88) == iVar25) {
    iVar43 = *(int *)(DAT_180115c10 + 0x1e88) + 1;
    if (iVar25 == 0) {
      iVar25 = 8;
    }
    else {
      iVar25 = iVar25 / 2 + iVar25;
    }
    if (iVar43 < iVar25) {
      iVar43 = iVar25;
    }
    FUN_18006d6f0((int *)(DAT_180115c10 + 0x1e88),iVar43);
  }
  iVar25 = *(int *)(lVar35 + 0x1e88);
  lVar11 = *(longlong *)(lVar35 + 0x1e90);
  uVar46 = (ulonglong)(uint)local_1c0[0];
  *(undefined4 *)(lVar11 + (longlong)iVar25 * 8) = local_1e0;
  *(float *)(lVar11 + 4 + (longlong)iVar25 * 8) = local_1c0[0];
  *(int *)(lVar35 + 0x1e88) = *(int *)(lVar35 + 0x1e88) + 1;
  *(undefined4 *)(lVar35 + 0x1d44) = local_1e0;
  *(undefined4 *)(pauVar29[0x20] + 0x18) = *(undefined4 *)(lVar21 + 0x1d44);
  uVar26 = uVar38 & 0x4000000;
  if (uVar26 != 0) {
    iVar25 = *(int *)(lVar21 + 0x1ec8);
    if ((iVar25 < 0) || (*(int *)(lVar21 + 0x1eb8) <= iVar25)) {
      uVar46 = 0x833;
      FID_conflict__assert
                (L"i >= 0 && i < Size",
                 L"C:\\Users\\Emereald\\Desktop\\newfolder\\robrun_source_2026-11-14_1404\\robrun_source\\third_party\\imgui\\imgui.h"
                 ,0x833);
    }
    puVar42 = (undefined8 *)((longlong)iVar25 * 0x38 + *(longlong *)(lVar21 + 0x1ec0));
    puVar42[1] = pauVar29;
    *(undefined4 *)(puVar42 + 3) = *(undefined4 *)(local_1c8 + 0x170);
    FUN_18006d390((int *)(lVar21 + 0x1ec8),puVar42);
    *(undefined4 *)(pauVar29[4] + 0x14) = *(undefined4 *)puVar42;
  }
  bVar51 = false;
  bVar52 = false;
  bVar19 = false;
  if ((*(byte *)(lVar21 + 0x1dd8) & 1) != 0) {
    uVar28 = *(uint *)(lVar21 + 0x1ddc);
    uVar46 = (ulonglong)uVar28;
    bVar37 = pauVar29[7][0x10];
    bVar51 = (uVar28 & (int)(char)bVar37) != 0;
    if (((uVar28 & (int)(char)bVar37) == 0) ||
       (*(float *)(lVar21 + 0x1df4) * *(float *)(lVar21 + 0x1df4) +
        *(float *)(lVar21 + 0x1df0) * *(float *)(lVar21 + 0x1df0) <= 1e-05)) {
      FUN_180068060((longlong)pauVar29,(undefined8 *)(lVar21 + 0x1de8),uVar28);
    }
    else {
      uVar28 = *(uint *)(pauVar29[7] + 0x10);
      *(undefined8 *)(pauVar29[7] + 0x14) = *(undefined8 *)(lVar21 + 0x1de8);
      uVar33 = *(undefined8 *)(lVar21 + 0x1df0);
      *(uint *)(pauVar29[7] + 0x10) = bVar37 & 0xf1 | uVar28 & 0xffffff00;
      *(undefined8 *)(pauVar29[7] + 0x1c) = uVar33;
    }
  }
  if ((*(byte *)(lVar21 + 0x1dd8) & 2) != 0) {
    uVar28 = *(uint *)(lVar21 + 0x1de0);
    uVar46 = (ulonglong)uVar28;
    uVar27 = (int)(char)pauVar29[7][0x11] & uVar28;
    if ((uVar27 == 0) || (*(float *)(lVar21 + 0x1df8) <= 0.0)) {
      bVar52 = false;
      if (uVar27 != 0) goto LAB_18004d253;
LAB_18004d266:
      bVar19 = false;
    }
    else {
      bVar52 = true;
LAB_18004d253:
      bVar19 = true;
      if (*(float *)(lVar21 + 0x1dfc) <= 0.0) goto LAB_18004d266;
    }
    uVar27 = *(uint *)(*pauVar29 + 0x18);
    if (((uVar27 & 4) != 0) && (((int)(char)pauVar29[7][0x11] & 4U) == 0)) {
      *(float *)(lVar21 + 0x1df8) = *(float *)(pauVar29[1] + 0x18);
      uVar27 = *(uint *)(*pauVar29 + 0x18);
    }
    if (((uVar27 & 8) != 0) && ((pauVar29[7][0x11] & 4) == 0)) {
      *(undefined4 *)(lVar21 + 0x1dfc) = *(undefined4 *)(pauVar29[1] + 0x1c);
    }
    FUN_1800681e0((longlong)pauVar29,(float *)(lVar21 + 0x1df8),uVar28);
  }
  if ((*(byte *)(lVar21 + 0x1dd8) & 0x80) != 0) {
    if (0.0 <= *(float *)(lVar21 + 0x1e08)) {
      *(float *)(pauVar29[5] + 8) = *(float *)(lVar21 + 0x1e08);
      *(undefined4 *)(pauVar29[5] + 0x10) = 0;
    }
    if (0.0 <= *(float *)(lVar21 + 0x1e0c)) {
      *(float *)(pauVar29[5] + 0xc) = *(float *)(lVar21 + 0x1e0c);
      *(undefined4 *)(pauVar29[5] + 0x14) = 0;
    }
  }
  if ((*(byte *)(lVar21 + 0x1dd8) & 4) == 0) {
    if (iVar10 != iVar9) {
      *(undefined8 *)(pauVar29[2] + 0x10) = 0;
    }
  }
  else {
    *(undefined8 *)(pauVar29[2] + 0x10) = *(undefined8 *)(lVar21 + 0x1e00);
  }
  if (((*(byte *)(lVar21 + 0x1dd8) & 8) != 0) &&
     ((*(uint *)(lVar21 + 0x1de4) == 0 ||
      ((*(uint *)(lVar21 + 0x1de4) & (int)(char)pauVar29[7][0x12]) != 0)))) {
    uVar28 = *(uint *)(pauVar29[7] + 0x10);
    pauVar29[6][0xf] = *(undefined1 *)(lVar21 + 0x1e18);
    *(uint *)(pauVar29[7] + 0x10) = (uVar28 >> 0x10 & 0xf1) << 0x10 | uVar28 & 0xff00ffff;
  }
  if ((*(byte *)(lVar21 + 0x1dd8) & 0x20) != 0) {
    FUN_180056440((longlong)pauVar29,0,uVar46);
  }
  cVar23 = pauVar29[6][0x13];
  if (cVar23 != '\0') {
    pauVar29[7][0x10] = pauVar29[7][0x10] & 0xf7;
    pauVar29[7][0x11] = pauVar29[7][0x11] & 0xf7;
    pauVar29[7][0x12] = pauVar29[7][0x12] & 0xf7;
  }
  lVar35 = DAT_180115c10;
  pauVar29[6][0x12] = 0;
  if (((((*(uint *)(lVar35 + 0x1dd8) & 0x400) != 0) &&
       (uVar28 = *(uint *)(lVar35 + 0x1e4c), (uVar28 & 1) != 0)) && (cVar23 == '\0')) &&
     (pauVar29[6][0x14] == '\0')) {
    if (((uVar28 & 2) != 0) && (*(longlong *)(lVar35 + 0x13b0) != 0)) {
      pauVar31 = *(undefined1 (**) [32])(*(longlong *)(lVar35 + 0x13b0) + 0x3b0);
      if ((*(undefined1 (**) [32])(pauVar29[0x1d] + 0x10) == pauVar31) ||
         (*(undefined1 (**) [32])(pauVar31[0x1d] + 0x10) == pauVar29)) goto LAB_18004d463;
      do {
        if (pauVar31 == pauVar29) goto LAB_18004d463;
        pauVar31 = *(undefined1 (**) [32])(pauVar31[0x1d] + 8);
      } while (pauVar31 != (undefined1 (*) [32])0x0);
    }
    if (((uVar28 & 4) != 0) && (*(longlong *)(lVar35 + 0x1f00) != 0)) {
      pauVar31 = *(undefined1 (**) [32])(*(longlong *)(lVar35 + 0x1f00) + 0x3b0);
      if ((*(undefined1 (**) [32])(pauVar29[0x1d] + 0x10) == pauVar31) ||
         (*(undefined1 (**) [32])(pauVar31[0x1d] + 0x10) == pauVar29)) goto LAB_18004d463;
      do {
        if (pauVar31 == pauVar29) goto LAB_18004d463;
        pauVar31 = *(undefined1 (**) [32])(pauVar31[0x1d] + 8);
      } while (pauVar31 != (undefined1 (*) [32])0x0);
    }
    *(undefined8 *)pauVar29[0x16] = 0;
    pauVar29[6][0x12] = 1;
  }

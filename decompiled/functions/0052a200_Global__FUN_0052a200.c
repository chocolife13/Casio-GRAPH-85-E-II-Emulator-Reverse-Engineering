// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052a200
// entry: 0052a200  size: 1184


void FUN_0052a200(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined **ppuVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined **ppuVar10;
  undefined2 *puVar11;
  undefined *puVar12;
  int local_14c;
  undefined1 local_144 [4];
  undefined1 local_140 [12];
  undefined1 local_134 [52];
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  
  FUN_005232d0(1,1);
  FUN_00523470(param_1,0x15);
  local_14c = 2;
  do {
    if (0x14 < param_2) {
      for (; local_14c < 8; local_14c = local_14c + 1) {
        FUN_005232d0(1,local_14c);
        FUN_00523470(0,0x15);
      }
      return;
    }
    FUN_005232d0(1,local_14c);
    uVar5 = FUN_00529a70(param_2);
    if (uVar5 < 0x1b9) {
      if (uVar5 != 0x1b8) {
        switch(uVar5) {
        case 0x108:
        case 0x188:
        case 0x198:
        case 0x1a8:
          break;
        default:
switchD_0052a27a_caseD_109:
          puVar11 = &DAT_005c0d7c;
          goto LAB_0052a2f0;
        }
      }
      puVar11 = (undefined2 *)&DAT_00598a18;
LAB_0052a2f0:
      FUN_004b6ef0(&local_100,puVar11);
      bVar2 = false;
    }
    else {
      if (uVar5 == 0x209) {
        puVar11 = (undefined2 *)&DAT_00598a14;
        goto LAB_0052a2f0;
      }
      if (uVar5 != 0x409) {
        if (uVar5 != 0x40a) goto switchD_0052a27a_caseD_109;
        puVar11 = (undefined2 *)&DAT_00598a1c;
        goto LAB_0052a2f0;
      }
      if (param_3 == 0) {
        puVar12 = &DAT_00598a20;
      }
      else {
        puVar12 = &DAT_00598a24;
      }
      FUN_004b6ef0(&local_100,puVar12);
      bVar2 = true;
    }
    FUN_0055c2fe(param_2,local_144,10);
    FUN_004b6e70(&local_100,local_144);
    if ((param_4 == param_2) && (param_3 == param_5)) {
      FUN_00523400(&local_100);
    }
    else {
      FUN_005233e0(&local_100);
    }
    switch(uVar5) {
    case 0x188:
      local_100 = 0x3c;
      uVar4 = 0xb9;
      break;
    default:
      local_100 = 0x3d;
      uVar4 = 0xb8;
      break;
    case 0x198:
      local_100 = 0x3e;
      uVar4 = 0xba;
      break;
    case 0x1a8:
      local_100 = 0x10;
      uVar4 = 0xbb;
      break;
    case 0x1b8:
      local_100 = 0x12;
      uVar4 = 0xbc;
    }
    local_ff = 0;
    iVar6 = FUN_00517320(param_2);
    if (iVar6 == 0) {
      local_100 = 0x3a;
    }
    iVar6 = 0;
    FUN_004ab670(local_140);
    if (PTR_s__GRAPH_005c3ddc != (undefined *)0x0) {
      ppuVar10 = &PTR_s__GRAPH_005c3ddc;
      do {
        iVar7 = FUN_0055b770(local_140,*ppuVar10);
        if (iVar7 == 0) break;
        ppuVar1 = ppuVar10 + 1;
        ppuVar10 = ppuVar10 + 1;
        iVar6 = iVar6 + 1;
      } while (*ppuVar1 != (undefined *)0x0);
    }
    if (((&PTR_s__GRAPH_005c3ddc)[iVar6] != (undefined *)0x0) &&
       (cVar3 = FUN_00517450(param_2,CONCAT31((int3)((uint)(&PTR_s__GRAPH_005c3ddc)[iVar6] >> 8),
                                              (&UNK_00598a2c)[iVar6])), cVar3 != '\0')) {
      local_100 = 0xe5;
      local_fe = 0;
      local_ff = uVar4;
    }
    if ((param_4 == param_2) && (param_3 == param_5)) {
      FUN_00523400(&local_100);
    }
    else {
      FUN_005233e0(&local_100);
    }
    FUN_00517360(param_2,&local_100);
    if (uVar5 == 0x409) {
      puVar8 = (undefined1 *)FUN_00529b70(&local_100);
      if ((param_3 == 0) && (puVar8 != &local_100)) {
        puVar8[-1] = 0;
        goto LAB_0052a490;
      }
    }
    else {
LAB_0052a490:
      puVar8 = &local_100;
    }
    FUN_004b7b40(puVar8,local_134,0x15);
    uVar5 = -(uint)(param_6 != 0) & 4;
    if ((param_4 == param_2) && (param_3 == param_5)) {
      FUN_00523490(local_134,0x14 - uVar5);
    }
    else {
      FUN_00523470(local_134,0x14 - uVar5);
    }
    if (uVar5 == 4) {
      uVar4 = FUN_005173e0(param_2);
      if (bVar2) {
        if (param_3 == 1) {
          FUN_004b6ef0(local_134,&DAT_005c3e2c);
          if ((param_4 == param_2) && (param_5 == 1)) {
            FUN_00523490(local_134,0x14);
          }
          else {
            FUN_00523470(local_134,0x14);
          }
        }
        else {
          if ((param_4 != param_2) || (param_3 != param_5)) goto LAB_0052a53f;
          FUN_0052a070(uVar4,1);
        }
      }
      else if (param_4 == param_2) {
        FUN_0052a070(uVar4,1);
      }
      else {
LAB_0052a53f:
        FUN_0052a070(uVar4,0);
      }
    }
    FUN_004b6ef0(local_134,&DAT_00598a10);
    uVar9 = FUN_004ab670(local_140,PTR_s__GRAPH_005c3ddc);
    iVar6 = FUN_0055b770(uVar9);
    if ((iVar6 == 0) && (cVar3 = FUN_00526090(0x22), cVar3 == '\0')) {
      cVar3 = FUN_00517450(param_2,0xc0);
      if (cVar3 == '\x01') {
        puVar11 = &DAT_005bec24;
      }
      else {
        cVar3 = FUN_00517450(param_2,0x40);
        if (cVar3 != '\x01') goto LAB_0052a606;
        puVar11 = (undefined2 *)&DAT_005c3e28;
      }
      FUN_004b6ef0(local_134,puVar11);
    }
LAB_0052a606:
    if ((param_4 == param_2) && (param_3 == param_5)) {
      FUN_00523490(local_134,0x15);
    }
    else {
      FUN_00523470(local_134,0x15);
    }
    if (bVar2) {
      if (param_3 == 1) {
        param_2 = param_2 + 1;
        param_3 = 0;
      }
      else {
        param_3 = 1;
      }
    }
    else {
      param_2 = param_2 + 1;
    }
    local_14c = local_14c + 1;
    if (7 < local_14c) {
      return;
    }
  } while( true );
}


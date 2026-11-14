// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a1d90
// entry: 004a1d90  size: 747


undefined4 FUN_004a1d90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_74 [4];
  undefined1 local_70 [12];
  undefined1 local_64 [48];
  undefined1 local_34 [52];
  
  local_80 = DAT_005bec50;
  local_94 = 0;
  local_a4 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_9f = 0;
  local_9e = 0;
  local_9d = 0;
  local_9c = 0;
  local_9b = 0;
  local_9a = 0;
  local_99 = 0;
  local_98 = 0;
  local_7c = DAT_005bec54;
  local_78 = DAT_005bec58;
  local_76 = DAT_005bec5a;
  local_8c = 0x2e;
  local_8a = 0x67;
  local_88 = 0x31;
  local_86 = 0x6d;
  local_84 = 0;
  FUN_005237c0(1);
  uVar1 = FUN_00526410();
  FUN_00538a00(local_70);
  FUN_00538980(0,0,local_74);
  FUN_00526420(0xf7);
  FUN_004a00d0(local_64,&DAT_00584f08,1);
  FUN_005387f0(0);
  FUN_00414240();
  FUN_005232d0(1,1);
  uVar2 = FUN_0052f6f0(0x13d,local_34,0x15);
  FUN_00523470(uVar2);
  FUN_005232d0(1,2);
  uVar2 = FUN_004b6bd0(&local_80);
  FUN_00523470(&local_80,uVar2);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
switchD_004a1f01_caseD_7533:
  do {
    FUN_00538b30();
    FUN_0040ad00();
    iVar3 = FUN_00526620(&local_94);
    if (iVar3 == 0) goto code_r0x004a1ef9;
    iVar3 = FUN_0049b090(local_94);
  } while (iVar3 == 0);
  goto LAB_004a1f10;
code_r0x004a1ef9:
  switch(local_94) {
  case 0x7531:
    local_94 = 0x58;
LAB_004a1f10:
    local_90 = FUN_005254d0(&local_a0,8,local_90,local_94);
    local_a4 = FUN_005252d0(&local_a0,local_a4,local_90,2,2,9);
    break;
  case 0x7532:
  case 0x754d:
    uVar2 = 0xffffffff;
LAB_004a2039:
    FUN_00523740();
    FUN_00538810();
    FUN_00538a50(local_70);
    FUN_005389c0(0,0,local_74);
    FUN_00526420(uVar1);
    FUN_005262e0(0);
    FUN_00523800(1);
    return uVar2;
  case 0x7534:
    iVar3 = FUN_004b7550(&local_a0);
    if (iVar3 != 0) {
      iVar3 = FUN_0042ac10(param_1,0x5c);
      if (*(short *)(param_1 + 2 + (iVar3 - param_1 >> 1) * 2) == 0) {
        iVar3 = FUN_0042a410(param_1,&local_a0,0xc);
        FUN_0042aac0(param_1 + iVar3 * 2);
      }
      iVar3 = FUN_0042a410(param_1,&local_8c);
      FUN_0042a490(param_1 + iVar3 * 2);
      uVar2 = 0;
      goto LAB_004a2039;
    }
    FUN_005262e0(0x84);
    local_a4 = FUN_005252d0(&local_a0,local_a4,local_90,2,2,9);
    break;
  case 0x753f:
    FUN_005262e0(0x84);
  case 0x7544:
  case 0x7545:
  case 0x7549:
    FUN_00524a50(&local_a0,8,&local_a4,&local_90,&local_94,2,2);
    local_a4 = FUN_005252d0(&local_a0,local_a4,local_90,2,2,9);
  }
  goto switchD_004a1f01_caseD_7533;
}


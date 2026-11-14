// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005026e0
// entry: 005026e0  size: 694


uint FUN_005026e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  uint local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c [12];
  undefined1 local_110 [12];
  undefined1 local_104 [12];
  undefined1 local_f8 [12];
  undefined1 local_ec [52];
  undefined1 local_b8 [36];
  uint local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 local_80 [128];
  
LAB_005026ef:
  FUN_0050acb0(param_1);
  FUN_00518650(local_11c,0);
  FUN_00518650(local_110,1);
  FUN_00518650(local_104,2);
  FUN_00518650(local_f8,3);
  FUN_00518650(&local_134,4);
  FUN_00518650(&local_128,5);
  uVar1 = FUN_00517c00();
  switch(uVar1) {
  case 0xf:
    FUN_0051ac70(param_1,local_110,local_104,local_11c);
    goto switchD_00502751_default;
  case 0x10:
    puVar3 = &DAT_005c2e88;
    break;
  case 0x11:
    puVar3 = &DAT_005c2e84;
    break;
  case 0x12:
    puVar3 = &DAT_005c2e80;
    break;
  case 0x13:
  case 0x14:
    *(undefined4 *)(param_1 + 0x8a8) = local_134;
    *(undefined4 *)(param_1 + 0x8ac) = local_130;
    *(undefined4 *)(param_1 + 0x8b0) = local_12c;
    *(undefined4 *)(param_1 + 0x8b4) = local_128;
    *(undefined4 *)(param_1 + 0x8b8) = local_124;
    *(undefined4 *)(param_1 + 0x8bc) = local_120;
    FUN_00518720(local_b8);
    local_90 = local_11c;
    local_8c = local_110;
    if ((local_94 & 0x100) == 0) {
      local_88 = local_104;
      local_84 = local_f8;
    }
    FUN_0051f5e0(local_b8,param_1 + 0x800);
  default:
    goto switchD_00502751_default;
  }
  FUN_004b6ef0(local_ec,puVar3);
  FUN_004b6e70(local_ec,&DAT_005c2e78);
  iVar2 = FUN_004b6ca0(local_ec);
  FUN_004b5030(local_11c,local_ec + iVar2);
  FUN_005232d0(1,8);
  FUN_00523470(local_ec,0x15);
switchD_00502751_default:
  while( true ) {
    FUN_0051f7b0(local_80);
    FUN_0051f870();
    iVar2 = FUN_00526620(&local_138);
    FUN_0051f7f0(local_80);
    while (iVar2 != 0) {
      FUN_0051f7b0(local_80);
      FUN_0051f870();
      iVar2 = FUN_00526620(&local_138);
      FUN_0051f7f0(local_80);
    }
    if (0x754d < local_138) break;
    if (local_138 == 0x754d) {
      return 0x754d;
    }
    switch(local_138) {
    case 0x7532:
    case 0x7534:
    case 0x753f:
    case 0x7542:
    case 0x7544:
    case 0x7545:
    case 0x7547:
      return local_138;
    }
switchD_00502903_caseD_7533:
    if (local_138 != 0) {
      if (local_138 < 30000) {
        return local_138;
      }
      if (0x75f7 < local_138) {
        return local_138;
      }
    }
  }
  switch(local_138) {
  case 0x754e:
    iVar2 = FUN_005022f0(CONCAT31((int3)(local_138 >> 8),*(byte *)(param_1 + 0x8e0) >> 4) &
                         0xffffff03);
    break;
  default:
    goto switchD_00502903_caseD_7533;
  case 0x7555:
    iVar2 = FUN_00502180();
    break;
  case 0x7557:
    goto switchD_00502903_caseD_7532;
  case 0x7634:
    goto switchD_00502920_caseD_7634;
  case 0x7635:
    goto switchD_00502920_caseD_7635;
  }
  if (iVar2 != 0) {
    local_138 = 0xfffffff2;
switchD_00502903_caseD_7532:
    return local_138;
  }
  goto switchD_00502751_default;
switchD_00502920_caseD_7635:
  FUN_0051af80(local_138,param_1);
  goto LAB_005026ef;
switchD_00502920_caseD_7634:
  FUN_0051af80(local_138,param_1);
  goto switchD_00502751_default;
}


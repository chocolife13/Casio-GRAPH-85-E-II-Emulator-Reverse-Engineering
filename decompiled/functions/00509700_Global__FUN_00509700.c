// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00509700
// entry: 00509700  size: 324


undefined4 FUN_00509700(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_41c [8];
  undefined2 local_414;
  undefined1 local_410 [80];
  undefined1 local_3c0 [960];
  
  uVar1 = FUN_00526410();
  FUN_00538a00(local_41c);
  FUN_00538980(0,0x13,local_410);
  FUN_0053c6f0(5);
  FUN_00517c00();
  uVar2 = FUN_00517c00();
  switch(uVar2) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x13:
  case 0x14:
    FUN_0053c690(0xe);
    uVar2 = 0xe;
    break;
  default:
    FUN_0053c690(8);
    uVar2 = 8;
  }
  iVar3 = FUN_00539970(uVar2,local_3c0);
  FUN_00526420(0xc6);
  iVar5 = 0;
  if (0 < iVar3) {
    puVar6 = local_3c0;
    do {
      FUN_00538860(iVar5,puVar6);
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 0x30;
    } while (iVar5 < iVar3);
  }
  FUN_005387f0(0);
  uVar2 = FUN_00502ad0(param_1,param_2);
  thunk_FUN_0040add0();
  FUN_00538810();
  uVar4 = FUN_00517c00();
  switch(uVar4) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x13:
  case 0x14:
    break;
  default:
    iVar3 = FUN_004ab6a0(s__RUNMAT_005be2d4);
    if (iVar3 != 0) {
      local_414 = 0xf;
    }
    iVar3 = FUN_004ab6a0(s__PROG_005bec48);
    if (iVar3 != 0) {
      local_414 = 8;
    }
  }
  FUN_00538a50(local_41c);
  FUN_005389c0(0,0x13,local_410);
  FUN_00526420(uVar1);
  return uVar2;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050b2c0
// entry: 0050b2c0  size: 240


undefined4 FUN_0050b2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_41c [12];
  undefined1 local_410 [80];
  undefined1 local_3c0 [960];
  
  uVar1 = FUN_00526410();
  FUN_00538a00(local_41c);
  FUN_00538980(0,0x13,local_410);
  FUN_0053c6f0(5);
  switch(param_2) {
  case 5:
  case 6:
    uVar3 = 7;
    break;
  case 7:
    uVar3 = 0xc;
    break;
  case 8:
  case 9:
    uVar3 = 0xd;
    break;
  default:
    uVar3 = 0xb;
  }
  FUN_0053c690(uVar3);
  FUN_00526420(0xc6);
  iVar2 = FUN_00539970(uVar3,local_3c0);
  iVar4 = 0;
  if (0 < iVar2) {
    puVar5 = local_3c0;
    do {
      FUN_00538860(iVar4,puVar5);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x30;
    } while (iVar4 < iVar2);
  }
  FUN_005387f0(0);
  uVar3 = FUN_00502ad0(param_1,param_3);
  FUN_00538810();
  FUN_00538a50(local_41c);
  FUN_005389c0(0,0x13,local_410);
  FUN_00526420(uVar1);
  return uVar3;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005031f0
// entry: 005031f0  size: 241


undefined4 FUN_005031f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_424;
  undefined1 local_420 [4];
  undefined1 local_41c [12];
  undefined1 local_410 [80];
  undefined1 local_3c0 [960];
  
  uVar1 = FUN_00526410();
  FUN_00526420(0xc6);
  FUN_00538a00(local_41c);
  FUN_00538980(0,0x13,local_410);
  FUN_00528a20(CONCAT31((int3)((uint)local_420 >> 8),*(undefined1 *)(param_1 + 0x8e4)),&local_424,
               local_420);
  if (local_424 == 0) {
    FUN_00526430(1);
  }
  FUN_0053c6f0(10);
  FUN_0053c690(4);
  iVar2 = FUN_00539970(4,local_3c0);
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
  uVar3 = FUN_00502ad0(param_1,param_2);
  FUN_00538810();
  FUN_00538a50(local_41c);
  FUN_005389c0(0,0x13,local_410);
  FUN_00526420(uVar1);
  return uVar3;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00503120
// entry: 00503120  size: 194


undefined4 FUN_00503120(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_41c [12];
  undefined1 local_410 [80];
  undefined1 local_3c0 [960];
  
  uVar1 = FUN_00526410();
  FUN_00538a00(local_41c);
  FUN_00538980(0,0x13,local_410);
  FUN_0053c6f0(7);
  FUN_0053c690(4);
  FUN_00526420(0xc6);
  iVar2 = FUN_00539970(4,local_3c0);
  iVar5 = 0;
  if (0 < iVar2) {
    puVar4 = local_3c0;
    do {
      FUN_00538860(iVar5,puVar4);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x30;
    } while (iVar5 < iVar2);
  }
  FUN_005387f0(0);
  uVar3 = FUN_00502ad0(param_1,param_2);
  FUN_00538810();
  FUN_00538a50(local_41c);
  FUN_005389c0(0,0x13,local_410);
  FUN_00526420(uVar1);
  return uVar3;
}


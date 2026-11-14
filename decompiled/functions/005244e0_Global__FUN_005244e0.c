// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005244e0
// entry: 005244e0  size: 172


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005244e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_4 [4];
  
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_4);
  DAT_005d02d0 = DAT_00597f30;
  _DAT_005d02d4 = DAT_00597f34;
  puVar4 = &DAT_005d02d0;
  puVar5 = &DAT_005d02d8;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,&DAT_005d02d0);
  FUN_005387f0(0);
  FUN_00538b30();
  uVar2 = FUN_00524460(param_1,param_2,param_3,param_4,param_5);
  FUN_00538810();
  FUN_005389c0(0,0,local_4);
  FUN_00526440();
  FUN_00526420(uVar1);
  return uVar2;
}


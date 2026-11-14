// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00505933
// entry: 00505933  size: 160


undefined4 FUN_00505933(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_stack_00000050;
  
  uVar1 = FUN_00526410();
  FUN_00538a00(&stack0x0000000c);
  FUN_00538980(0,0,&stack0x00000004);
  FUN_00526420(0xc6);
  FUN_0053c6f0(8);
  FUN_0053c690(6);
  puVar4 = &DAT_0058c060;
  puVar5 = (undefined4 *)&stack0x00000018;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,&stack0x00000018);
  FUN_005387f0(0);
  uVar2 = FUN_00504730();
  FUN_00538810();
  FUN_00538a50(&stack0x0000000c);
  FUN_005389c0(0,0,&stack0x00000004);
  FUN_00526420(uVar1);
  return uVar2;
}


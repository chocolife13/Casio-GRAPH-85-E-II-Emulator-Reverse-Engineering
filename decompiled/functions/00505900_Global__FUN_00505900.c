// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00505900
// entry: 00505900  size: 51


undefined4 FUN_00505900(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_44 [4];
  undefined1 local_40 [4];
  undefined1 auStack_3c [12];
  undefined4 auStack_30 [12];
  
  iVar1 = param_1;
  FUN_00528a20(*(undefined1 *)(param_1 + 0x8e4),&param_1,local_40);
  if (param_1 == 0) {
    return 0x23;
  }
  uVar2 = FUN_00526410();
  FUN_00538a00(auStack_3c);
  FUN_00538980(0,0,auStack_44);
  FUN_00526420(0xc6);
  FUN_0053c6f0(8);
  FUN_0053c690(6);
  puVar5 = &DAT_0058c060;
  puVar6 = auStack_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00538860(0,auStack_30);
  FUN_005387f0(0);
  uVar3 = FUN_00504730(iVar1,param_2);
  FUN_00538810();
  FUN_00538a50(auStack_3c);
  FUN_005389c0(0,0,auStack_44);
  FUN_00526420(uVar2);
  return uVar3;
}


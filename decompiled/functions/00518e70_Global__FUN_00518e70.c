// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518e70
// entry: 00518e70  size: 247


undefined4 FUN_00518e70(int param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_41c [12];
  undefined1 local_410 [80];
  undefined1 local_3c0 [960];
  
  uVar1 = FUN_00526410();
  FUN_00538a00(local_41c);
  FUN_00538980(0,0x13,local_410);
  if ((*(byte *)(param_1 + 0x8e0) & 0x30) == 0) {
    uVar5 = 5;
  }
  else {
    uVar5 = 10;
  }
  FUN_0053c6f0(uVar5);
  if (param_2 == '\0') {
    FUN_0053c690(0x11);
    uVar5 = 0x11;
  }
  else {
    FUN_0053c690(0x15);
    uVar5 = 0x15;
  }
  iVar2 = FUN_00539970(uVar5,local_3c0);
  FUN_00526420(0xc6);
  iVar3 = 0;
  if (0 < iVar2) {
    puVar4 = local_3c0;
    do {
      FUN_00538860(iVar3,puVar4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x30;
    } while (iVar3 < iVar2);
  }
  FUN_005387f0(0);
  uVar5 = FUN_00502ad0(param_1,param_3);
  FUN_00538810();
  FUN_00538a50(local_41c);
  FUN_005389c0(0,0x13,local_410);
  FUN_00526420(uVar1);
  return uVar5;
}


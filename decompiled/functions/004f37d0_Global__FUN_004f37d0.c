// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f37d0
// entry: 004f37d0  size: 276


undefined4
FUN_004f37d0(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_004e5780(local_24);
  if (param_2[1] == '\n') {
    iVar3 = FUN_004f51f0(param_3,param_5);
    if (iVar3 == 0) {
      return 0;
    }
    uVar2 = *param_1;
    *(undefined1 *)(param_5 + 0x14) = 3;
    *(undefined4 *)(param_5 + 0x18) = uVar2;
    FUN_004fe330(param_2,param_1);
  }
  else if (param_2[1] == '\v') {
    if (*(char *)(param_5 + 0x14) != '\x03') {
      uVar2 = FUN_004f58f0(2,param_3);
      return uVar2;
    }
    iVar3 = FUN_004f5850(param_1,param_2,local_18,1);
    if (iVar3 == 0) {
      uVar2 = FUN_004e4020(local_18,param_3);
      uVar2 = FUN_004f58f0(uVar2);
      return uVar2;
    }
    iVar3 = FUN_004e71d0(local_18,local_24);
    if (iVar3 == 0) {
      puVar1 = *(undefined1 **)(param_5 + 0x18);
      *param_1 = puVar1;
      *param_2 = *puVar1;
      FUN_004fe330(param_2,param_1);
      *param_2 = 0xd;
      return 1;
    }
    FUN_004f51b0(param_5);
    return 1;
  }
  return 1;
}


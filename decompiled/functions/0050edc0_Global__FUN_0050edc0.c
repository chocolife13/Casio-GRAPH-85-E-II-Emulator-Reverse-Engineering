// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050edc0
// entry: 0050edc0  size: 249


undefined4 FUN_0050edc0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c [12];
  
  if ((*(uint *)(param_3 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc)) & 0x4000) == 0) {
    uVar2 = FUN_004e5780(local_c);
    iVar1 = FUN_004e7250(param_2 + 0x884,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_004e7250(param_1,param_2 + 0x86c);
      if (iVar1 != 0) {
        return 0x3000;
      }
      iVar1 = FUN_004e7290(param_1,param_2 + 0x878);
      if (iVar1 == 0) {
        return 0;
      }
      return 0x3000;
    }
    iVar1 = FUN_004e7290(param_1,param_2 + 0x86c);
    if (iVar1 != 0) {
      return 0x3000;
    }
    iVar1 = FUN_004e7250(param_1,param_2 + 0x878);
  }
  else {
    FUN_0051ae90(0,*(int *)(param_2 + 0x8dc),param_3,local_c);
    iVar1 = FUN_004e7250(param_1,local_c);
    if (iVar1 != 0) {
      return 0x3000;
    }
    FUN_0051ae90(1,*(undefined4 *)(param_2 + 0x8dc),param_3,local_c);
    iVar1 = FUN_004e7290(param_1,local_c);
  }
  if (iVar1 != 0) {
    return 0x3000;
  }
  return 0;
}


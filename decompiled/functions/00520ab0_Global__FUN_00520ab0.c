// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00520ab0
// entry: 00520ab0  size: 314


undefined4 FUN_00520ab0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar1 = *(uint *)(param_3 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc));
  if ((uVar1 & 0x100) == 0) {
    if ((*(byte *)(param_2 + 0x8e2) & 1) == 0) {
      iVar2 = FUN_004e7250(param_1,param_2 + 0x83c);
      if (iVar2 != 0) {
        return 0x3000;
      }
      iVar2 = FUN_004e7290(param_1,param_2 + 0x848);
    }
    else {
      iVar2 = FUN_004e7290(param_1,param_2 + 0x83c);
      if (iVar2 != 0) {
        return 0x3000;
      }
      iVar2 = FUN_004e7250(param_1,param_2 + 0x848);
    }
  }
  else {
    if ((uVar1 & 0x4000) != 0) {
      FUN_0051ae90(0,*(int *)(param_2 + 0x8dc),param_3,local_18);
      FUN_0051ae90(1,*(undefined4 *)(param_2 + 0x8dc),param_3,local_c);
      iVar2 = FUN_004e7290(param_1,local_c);
      if (iVar2 != 0) {
        return 0x3000;
      }
      iVar2 = FUN_004e7250(param_1,local_18);
      if (iVar2 != 0) {
        return 0x3000;
      }
    }
    if ((*(byte *)(param_2 + 0x8e2) & 1) == 0) {
      iVar2 = FUN_004e7250(param_1,param_2 + 0x800);
      if (iVar2 != 0) {
        return 0x3000;
      }
      iVar2 = FUN_004e7290(param_1,param_2 + 0x80c);
    }
    else {
      iVar2 = FUN_004e7290(param_1,param_2 + 0x800);
      if (iVar2 != 0) {
        return 0x3000;
      }
      iVar2 = FUN_004e7250(param_1,param_2 + 0x80c);
    }
  }
  if (iVar2 != 0) {
    return 0x3000;
  }
  return 0;
}


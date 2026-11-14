// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00504ed0
// entry: 00504ed0  size: 305


undefined4 FUN_00504ed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if (param_1 == 0x160) {
    FUN_00529560(CONCAT31((int3)((uint)*(int *)(param_2 + 0x8f4) >> 8),
                          *(undefined1 *)(param_2 + 0x8e4)),
                 *(int *)(param_2 + 0x8f4) + -1 + *(int *)(param_2 + 0x8e8),1);
    FUN_00528a20(*(undefined1 *)(iVar2 + 0x8e4),&param_2,&param_1);
    iVar1 = *(int *)(iVar2 + 0x8f4);
    iVar3 = *(int *)(iVar2 + 0x8e8);
    if (iVar3 + -1 + iVar1 == param_2 + 1) {
      if (iVar1 == 1) {
        if (1 < iVar3) {
          *(int *)(iVar2 + 0x8e8) = iVar3 + -1;
          return 0;
        }
      }
      else {
        *(int *)(iVar2 + 0x8f4) = iVar1 + -1;
      }
    }
  }
  else if ((0x160 < param_1) && (param_1 < 0x163)) {
    FUN_00528a20(*(undefined1 *)(param_2 + 0x8e4),&param_2,&param_1);
    if (param_2 < 0xff) {
      iVar3 = FUN_00505010(*(int *)(iVar2 + 0x8f4) + -1 + *(int *)(iVar2 + 0x8e8),
                           *(undefined1 *)(iVar2 + 0x8e4));
      if (iVar3 != 0) {
        FUN_0052b240(4);
        return 1;
      }
      if (iVar1 == 0x162) {
        if (*(int *)(iVar2 + 0x8f4) < 4) {
          *(int *)(iVar2 + 0x8f4) = *(int *)(iVar2 + 0x8f4) + 1;
          return 0;
        }
        *(int *)(iVar2 + 0x8e8) = *(int *)(iVar2 + 0x8e8) + 1;
        return 0;
      }
    }
  }
  return 0;
}


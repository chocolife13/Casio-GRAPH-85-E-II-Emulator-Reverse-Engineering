// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047bfc0
// entry: 0047bfc0  size: 238


int FUN_0047bfc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 1) {
    if (param_1 == 0) {
      if (*(short *)(param_2 + 0x38) == 1) {
        return 4;
      }
      iVar2 = 3;
    }
    else {
      iVar2 = param_1 + -1;
      if (iVar2 == param_1) goto LAB_0047c08f;
    }
    do {
      iVar1 = FUN_0047bf90(iVar2,param_2 + iVar2 * 0xe);
      if (iVar1 == 1) goto LAB_0047c08b;
      if (iVar2 == 0) {
        if (*(short *)(param_2 + 0x38) == 1) goto LAB_0047c086;
        iVar2 = 4;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != param_1);
  }
  else {
    if (param_1 == 3) {
      if (*(short *)(param_2 + 0x38) == 1) {
        return 4;
      }
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 1;
      if (iVar2 == param_1) goto LAB_0047c08f;
    }
    do {
      iVar1 = FUN_0047bf90(iVar2,param_2 + iVar2 * 0xe);
      if (iVar1 == 1) goto LAB_0047c08b;
      if (iVar2 == 3) {
        if (*(short *)(param_2 + 0x38) == 1) goto LAB_0047c086;
        if (param_1 == 0) {
          iVar2 = 0;
          break;
        }
        if (param_1 == -1) {
          iVar2 = -1;
          break;
        }
        iVar2 = -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_1);
  }
  goto LAB_0047c08f;
LAB_0047c086:
  iVar2 = 4;
LAB_0047c08b:
  if (param_1 != iVar2) {
    return iVar2;
  }
LAB_0047c08f:
  if (*(short *)(param_2 + iVar2 * 0xe) != 0) {
    return iVar2;
  }
  return -1;
}


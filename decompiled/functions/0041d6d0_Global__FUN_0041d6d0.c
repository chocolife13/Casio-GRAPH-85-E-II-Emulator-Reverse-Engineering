// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041d6d0
// entry: 0041d6d0  size: 245


int FUN_0041d6d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_3 < 1) {
    return 0;
  }
  iVar1 = FUN_0041bf10(param_1);
  if (iVar1 == -1) {
    return -2;
  }
  if (((&DAT_005d8744)[param_1 * 10] & 0xfff0000) != 0x1200000) {
    return -0x22;
  }
  if (param_4 < 0) {
    iVar1 = FUN_0041d860(param_1,&param_4);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_0041db70(param_1,param_4);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  if (iVar1 != 0) {
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    do {
      iVar2 = FUN_004197b0((&DAT_005d8ba0)[param_1 * 2],param_2 + iVar3,iVar1);
      if (iVar2 != iVar1) {
        return -0x1f;
      }
      param_3 = param_3 - iVar1;
      param_4 = param_4 + iVar1;
      iVar3 = iVar3 + iVar1;
      iVar1 = FUN_0041db70(param_1,param_4);
      if (iVar1 < 0) {
        return iVar1;
      }
      if (iVar1 == 0) {
        return iVar3;
      }
      if (param_3 < iVar1) {
        iVar1 = param_3;
      }
    } while (0 < param_3);
    return iVar3;
  }
  return -2;
}


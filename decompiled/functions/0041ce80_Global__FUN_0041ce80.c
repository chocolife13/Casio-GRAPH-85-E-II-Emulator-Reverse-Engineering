// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041ce80
// entry: 0041ce80  size: 200


int FUN_0041ce80(short param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar1 = FUN_0041bdb0(L"\\\\fls0\\EACTWORK.tmp");
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_1 == 0) {
    sVar3 = 2;
    while (iVar2 = FUN_0041c4f0((&DAT_005d8ba0)[iVar1 * 2]), -1 < iVar2) {
      FUN_0041c2f0(iVar2);
      iVar2 = FUN_0041db70(iVar1,0x10000);
      if ((iVar2 < 0) || (sVar3 = sVar3 + -1, sVar3 == 0)) break;
    }
  }
  else {
    for (param_1 = param_1 + -1; param_1 != 0; param_1 = param_1 + -1) {
      iVar2 = FUN_0041db70(iVar1,0x10000);
      if (iVar2 < 0) goto LAB_0041cf39;
    }
    iVar2 = FUN_0041c4f0((&DAT_005d8ba0)[iVar1 * 2]);
    if (-1 < iVar2) {
      FUN_0041c2f0(iVar2);
      FUN_0041bd80(iVar1);
      return iVar2;
    }
  }
LAB_0041cf39:
  FUN_0041bd80(iVar1);
  return iVar2;
}


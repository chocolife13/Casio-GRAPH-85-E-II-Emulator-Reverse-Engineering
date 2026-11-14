// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041df90
// entry: 0041df90  size: 97


int FUN_0041df90(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0041bdb0(L"\\\\fls0\\EACTWORK.tmp");
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_3 < 0) {
    iVar2 = FUN_0041d860(iVar1,&param_3);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  else {
    iVar2 = FUN_0041db70(iVar1,param_3);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  iVar2 = FUN_0041dea0(iVar1,param_1,param_2);
  FUN_0041bd80(iVar1);
  return iVar2;
}


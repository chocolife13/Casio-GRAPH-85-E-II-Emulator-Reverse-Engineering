// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054d120
// entry: 0054d120  size: 125


void FUN_0054d120(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  
  sVar2 = (short)param_2;
  if ((sVar2 == 1) || (sVar2 == 3)) {
    FUN_0054cf90(param_1,param_2,1,0);
    iVar1 = 2;
    do {
      FUN_0054cf90(param_1,param_2,iVar1,1);
      iVar1 = iVar1 + 1;
    } while ((short)iVar1 < 6);
  }
  else if ((sVar2 == 2) || (sVar2 == 4)) {
    FUN_0054d050(param_1,param_2,1,0);
    iVar1 = 2;
    do {
      FUN_0054d050(param_1,param_2,iVar1,1);
      iVar1 = iVar1 + 1;
    } while ((short)iVar1 < 6);
    return;
  }
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054d1a0
// entry: 0054d1a0  size: 70


void FUN_0054d1a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0054cf90(param_1,1,param_2,0);
  iVar1 = 2;
  do {
    if ((short)iVar1 == 3) {
      FUN_0054cf90(param_1,3);
    }
    else {
      FUN_0054d050(param_1,iVar1,param_2,2);
    }
    iVar1 = iVar1 + 1;
  } while ((short)iVar1 < 5);
  return;
}


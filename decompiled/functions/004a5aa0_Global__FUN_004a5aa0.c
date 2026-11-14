// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a5aa0
// entry: 004a5aa0  size: 76


bool FUN_004a5aa0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0055b770(param_1,&DAT_005c0308);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_0055b770(param_1,&DAT_005c0304);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_0055b770(param_1,&DAT_005c0300);
  return iVar1 == 0;
}


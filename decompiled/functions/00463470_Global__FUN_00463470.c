// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00463470
// entry: 00463470  size: 219


undefined4 FUN_00463470(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_84 [132];
  
  if (param_2 == 0x22) {
    iVar1 = FUN_00515e10(local_84);
    if (iVar1 != 0) {
      iVar1 = FUN_00515f70(1);
      if (iVar1 != 0) {
        FUN_0052b240(iVar1);
        return 0xfffffffe;
      }
      FUN_00515e10(local_84);
    }
    iVar1 = FUN_00465500(param_1,local_84);
    if (iVar1 != 0) {
      FUN_0052b240(iVar1);
      return 0xfffffffe;
    }
    iVar1 = FUN_00515e50(local_84);
    if (iVar1 != 0) {
      FUN_0052b240(iVar1);
      return 0xfffffffe;
    }
  }
  iVar1 = FUN_00514940(param_1,1);
  if (iVar1 != 0) {
    FUN_0052b240(iVar1);
    return 0xfffffffe;
  }
  return 0;
}


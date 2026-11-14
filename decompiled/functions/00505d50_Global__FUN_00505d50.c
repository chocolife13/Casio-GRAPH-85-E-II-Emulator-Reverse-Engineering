// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00505d50
// entry: 00505d50  size: 205


undefined4 FUN_00505d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [24];
  
  thunk_FUN_0040add0();
  FUN_00528a20(param_3,&local_20,local_1c);
  iVar3 = 0;
  iVar2 = local_20;
  if (0 < local_20) {
    do {
      FUN_00528ac0(param_3,iVar2,param_2,local_18);
      iVar1 = FUN_004e4020(local_18);
      if (iVar1 == 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + -1;
    } while (0 < iVar2);
    if (iVar3 != 0) {
      iVar2 = FUN_005284b0(0,param_1,iVar3);
      if (iVar2 != 0) {
        return 4;
      }
      for (; 0 < local_20; local_20 = local_20 + -1) {
        FUN_00528ac0(param_3,local_20,param_2,local_18);
        iVar2 = FUN_004e4020(local_18);
        if (iVar2 == 0) {
          FUN_005278d0(0,param_1,iVar3,local_18);
          iVar3 = iVar3 + -1;
        }
      }
    }
  }
  return 0;
}


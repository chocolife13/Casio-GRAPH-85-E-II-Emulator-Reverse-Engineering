// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004027e0
// entry: 004027e0  size: 66


void FUN_004027e0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00402150(param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_00402330(param_1,param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_004300c0(param_1,param_2,param_3);
      if (iVar1 == 0) {
        *param_1 = (char)param_2;
      }
    }
  }
  return;
}


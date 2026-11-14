// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402880
// entry: 00402880  size: 192


void FUN_00402880(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_3;
  iVar2 = FUN_004021b0(param_1,param_2,param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_004023a0(param_1,param_2,uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_00402410(param_1,param_2,uVar1);
      if (iVar2 == 0) {
        if (((DAT_005d9564 <= param_1) && (param_1 < (undefined4 *)((int)DAT_005d9564 + 0xeU))) ||
           ((DAT_005d9568 <= param_1 && (param_1 < (undefined4 *)((int)DAT_005d9568 + 0xeU))))) {
          param_3 = param_2;
          FUN_00401e40(&param_3);
          *param_1 = param_3;
          return;
        }
        if (((DAT_005d8d40 <= param_1) && (param_1 < DAT_005d8d40 + 3)) ||
           ((DAT_005d9560 <= param_1 && (param_1 < DAT_005d9560 + 3)))) {
          param_3 = param_2;
          FUN_00401e40(&param_3);
          *param_1 = param_3;
          return;
        }
        *param_1 = param_2;
      }
    }
  }
  return;
}


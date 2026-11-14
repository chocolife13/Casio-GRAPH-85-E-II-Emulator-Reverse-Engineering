// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402620
// entry: 00402620  size: 209


undefined4 FUN_00402620(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_2;
  iVar2 = FUN_00402120(param_1,&param_2,param_2);
  if (iVar2 != 0) {
    return param_2;
  }
  iVar2 = FUN_00402290(param_1,&param_2,uVar1);
  if (iVar2 != 0) {
    return param_2;
  }
  iVar2 = FUN_004300c0(param_1,&param_2,uVar1);
  if (iVar2 != 0) {
    return param_2;
  }
  if (((param_1 < DAT_005d9564) || ((undefined4 *)((int)DAT_005d9564 + 0xe) <= param_1)) &&
     ((param_1 < DAT_005d9568 || ((undefined4 *)((int)DAT_005d9568 + 0xe) <= param_1)))) {
    if (((param_1 < DAT_005d8d40) || (DAT_005d8d40 + 3 <= param_1)) &&
       ((param_1 < DAT_005d9560 || (DAT_005d9560 + 3 <= param_1)))) {
      return *param_1;
    }
    param_2 = *param_1;
    FUN_00401e40(&param_2);
    return param_2;
  }
  param_2 = *param_1;
  FUN_00401e40(&param_2);
  return param_2;
}


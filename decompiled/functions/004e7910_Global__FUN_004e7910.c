// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e7910
// entry: 004e7910  size: 63


undefined4 * FUN_004e7910(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  iVar1 = FUN_004e96c0(param_1);
  if (iVar1 != 0) {
    return param_2;
  }
  puVar2 = (undefined4 *)FUN_004e5f10(0x2c,param_1,param_2);
  return puVar2;
}


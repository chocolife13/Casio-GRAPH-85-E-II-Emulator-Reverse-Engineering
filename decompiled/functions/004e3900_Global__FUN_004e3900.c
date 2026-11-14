// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e3900
// entry: 004e3900  size: 120


undefined4 * FUN_004e3900(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_004e4040(param_1);
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  if (iVar1 != -1) {
    iVar2 = FUN_004e4000(param_1);
    if (iVar2 != 0) {
      if (iVar1 == 3) {
        puVar3 = (undefined4 *)FUN_004e5630(3,param_2);
        return puVar3;
      }
      if (iVar1 == 2) {
        puVar3 = (undefined4 *)FUN_004dd480(param_1,param_2);
        return puVar3;
      }
      FUN_004e7730(param_1 + 3,param_2 + 3);
    }
  }
  return param_2;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004871e0
// entry: 004871e0  size: 73


void FUN_004871e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)FUN_004869c0(param_1);
    if (param_4 == (undefined4 *)0x0) {
      return;
    }
  }
  iVar1 = FUN_00486fd0(param_1,param_2,1,&param_4);
  if (iVar1 == 0) {
    return;
  }
  *param_3 = *param_4;
  return;
}


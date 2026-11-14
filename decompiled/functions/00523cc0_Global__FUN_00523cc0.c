// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523cc0
// entry: 00523cc0  size: 135


undefined4 FUN_00523cc0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint local_4;
  
  local_4 = 0;
  iVar1 = FUN_00523c80(&local_4,param_2,param_3,2);
  while( true ) {
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    if (iVar1 != 0) break;
    iVar1 = FUN_0055401d(&local_4);
    *param_1 = iVar1;
    if ((param_4 <= iVar1) && (iVar1 <= param_5)) {
      return 0;
    }
    FUN_0052b240(8);
    iVar1 = FUN_00523c80(&local_4,param_2,param_3,2);
  }
  return 0xfffffffe;
}


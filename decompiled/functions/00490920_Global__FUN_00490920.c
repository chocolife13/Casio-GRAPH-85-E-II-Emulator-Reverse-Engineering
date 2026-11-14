// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00490920
// entry: 00490920  size: 148


undefined4 FUN_00490920(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 local_8 [8];
  
  local_8[0] = 0;
  iVar1 = FUN_00523c80(local_8,param_2,param_3,4);
  while( true ) {
    if (iVar1 == -2) {
      return 0xfffffffe;
    }
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_0055401d(local_8);
    *param_1 = iVar1;
    if ((param_4 <= iVar1) && (iVar1 <= param_5)) break;
    FUN_0052b240(8);
    iVar1 = FUN_00523c80(local_8,param_2,param_3,4);
  }
  return 0;
}


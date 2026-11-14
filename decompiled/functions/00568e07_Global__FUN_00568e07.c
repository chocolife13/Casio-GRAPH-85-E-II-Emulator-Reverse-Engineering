// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568e07
// entry: 00568e07  size: 66


int FUN_00568e07(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_00568e49(param_1,&DAT_0059d918,&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_8 + 0xc))(local_8,param_2,param_3,param_4);
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


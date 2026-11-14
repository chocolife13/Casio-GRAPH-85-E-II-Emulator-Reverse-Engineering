// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041bac0
// entry: 0041bac0  size: 64


uint FUN_0041bac0(undefined2 param_1,uint *param_2)

{
  uint uVar1;
  uint local_4;
  
  local_4 = 0;
  uVar1 = FUN_0041b270(param_1,&local_4);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)(local_4 < DAT_005d8730);
    *param_2 = local_4;
  }
  return uVar1;
}


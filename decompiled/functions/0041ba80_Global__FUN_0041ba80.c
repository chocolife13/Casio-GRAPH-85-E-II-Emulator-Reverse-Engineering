// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041ba80
// entry: 0041ba80  size: 62


uint FUN_0041ba80(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint local_4;
  
  local_4 = 0;
  uVar1 = FUN_0041b1e0(param_1,param_2,&local_4);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)DAT_005d8730;
    *param_3 = local_4;
    uVar1 = (uint)(local_4 < uVar1);
  }
  return uVar1;
}


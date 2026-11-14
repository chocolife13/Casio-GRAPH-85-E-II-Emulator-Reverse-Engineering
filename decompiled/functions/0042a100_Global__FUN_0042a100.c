// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a100
// entry: 0042a100  size: 72


int FUN_0042a100(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004299c0(param_1);
  if (iVar1 != 1) {
    return -5;
  }
  iVar1 = FUN_0041e550(param_1,param_2,param_3,param_4);
  if (-1 < iVar1) {
    *param_2 = *param_2 & 0xf1ffffff | 0x1000000;
  }
  return iVar1;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523a20
// entry: 00523a20  size: 59


int FUN_00523a20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00523a80(param_1 * 4 + -4,param_2 * 8 + -6,param_3,0xffffffff,param_4);
  if (iVar1 != 0) {
    iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + 1;
  }
  return iVar1;
}


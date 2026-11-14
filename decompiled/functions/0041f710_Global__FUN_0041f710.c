// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f710
// entry: 0041f710  size: 70


bool FUN_0041f710(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041f690(param_1);
  if (iVar1 == 0) {
    return false;
  }
  return (((uint)*(byte *)(param_1 + 0x10) * 0x100 + (uint)*(byte *)(param_1 + 0x11)) * 0x100 +
         (uint)*(byte *)(param_1 + 0x12)) * 0x100 + (uint)*(byte *)(param_1 + 0x13) == param_2;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e4000
// entry: 004e4000  size: 32


uint FUN_004e4000(byte *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)(*param_1 >> 7);
}


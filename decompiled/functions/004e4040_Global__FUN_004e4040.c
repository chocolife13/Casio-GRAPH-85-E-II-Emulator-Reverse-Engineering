// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e4040
// entry: 004e4040  size: 51


int FUN_004e4040(byte *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*param_1 & 0x70) == 0x20) {
    return 2;
  }
  return (-(uint)((*param_1 & 0x70) != 0x30) & 0xfffffffe) + 3;
}


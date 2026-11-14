// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00421ef0
// entry: 00421ef0  size: 50


undefined4 FUN_00421ef0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a22f0(param_1,1);
  if (iVar1 == 0x7539) {
    return 1;
  }
  if ((iVar1 != 0x753f) && (iVar1 != 0x754d)) {
    return 3;
  }
  return 4;
}


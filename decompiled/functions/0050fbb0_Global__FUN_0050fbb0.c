// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050fbb0
// entry: 0050fbb0  size: 93


void FUN_0050fbb0(undefined4 param_1,byte param_2)

{
  if ((param_2 & 0x80) == 0) {
    FUN_004125f0(1,param_1,0x7f,param_1);
    return;
  }
  if ((param_2 & 0x40) != 0) {
    FUN_004125f0(0x41,param_1,0x7f,param_1);
    return;
  }
  FUN_004125f0(1,param_1,0x3f,param_1);
  return;
}


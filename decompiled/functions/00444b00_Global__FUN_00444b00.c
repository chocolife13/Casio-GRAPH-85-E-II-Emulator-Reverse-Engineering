// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00444b00
// entry: 00444b00  size: 98


void FUN_00444b00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x27;
  }
  else {
    uVar1 = 0x47;
  }
  FUN_004125f0(0x10,0xe,uVar1,0xe);
  if (param_1 != 1) {
    FUN_004125f0(0x2c,0xe,0x43,0xe);
    if (param_1 != 2) {
      FUN_004125f0(0x48,0xe,0x5f,0xe);
      if (param_1 != 3) {
        FUN_004125f0(100,0xe,0x7b,0xe);
      }
    }
  }
  return;
}


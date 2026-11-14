// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434380
// entry: 00434380  size: 99


void FUN_00434380(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xc;
  uVar1 = 10;
  if (param_1 == 0) {
    uVar1 = 8;
  }
  else {
    uVar2 = 0xe;
  }
  FUN_004125f0(0xc,10,uVar2,uVar1);
  if (param_1 != 0) {
    FUN_004125f0(0x2b,10,0x29,10);
    return;
  }
  FUN_004125f0(0x2b,10,0x2b,8);
  return;
}


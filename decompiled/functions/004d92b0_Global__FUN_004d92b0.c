// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d92b0
// entry: 004d92b0  size: 104


void FUN_004d92b0(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  if (bVar1 == 0xc0) {
    uVar2 = FUN_0052f6b0(0x3b);
    if ((uVar2 & 8) != 0) {
      FUN_0049c7b0(param_2);
      return;
    }
    FUN_004d9320(0,param_2);
    return;
  }
  if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
    FUN_004d9320(bVar1 - 0x40,param_2);
    return;
  }
  FUN_004d9320(0xffffffff,param_2);
  return;
}


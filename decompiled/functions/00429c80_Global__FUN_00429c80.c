// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429c80
// entry: 00429c80  size: 67


int FUN_00429c80(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (int)param_1 >> 0x18 & 0xf;
  if (uVar1 == 1) {
    iVar2 = FUN_0041e040(param_1 & 0xf0ffffff);
  }
  else {
    if (uVar1 != 3) {
      return -5;
    }
    iVar2 = FUN_00555613(param_1 & 0xf0ffffff);
    if (iVar2 < 0) {
      return -2;
    }
  }
  return iVar2;
}


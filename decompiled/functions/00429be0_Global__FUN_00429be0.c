// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429be0
// entry: 00429be0  size: 83


int FUN_00429be0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = (int)param_1 >> 0x18 & 0xf;
  if (uVar1 == 1) {
    FUN_0041bd80(param_1 & 0xf0ffffff);
    iVar2 = 0;
  }
  else {
    if (uVar1 != 3) {
      return -5;
    }
    iVar2 = FUN_005545e3(param_1 & 0xf0ffffff);
    if (iVar2 < 0) {
      piVar3 = (int *)FUN_005542c1();
      return (-(uint)(*piVar3 != 9) & 0xffffffe3) - 2;
    }
  }
  return iVar2;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a180
// entry: 0042a180  size: 81


int FUN_0042a180(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = (int)param_1 >> 0x18 & 0xf;
  if (uVar1 == 1) {
    iVar2 = FUN_0041e650(param_1 & 0xf0ffffff);
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


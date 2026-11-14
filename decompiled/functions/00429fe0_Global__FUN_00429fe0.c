// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429fe0
// entry: 00429fe0  size: 102


int FUN_00429fe0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = (int)param_1 >> 0x18 & 0xf;
  if (uVar1 == 1) {
    iVar2 = FUN_0041dea0(param_1 & 0xf0ffffff,param_2,param_3);
  }
  else {
    if (uVar1 != 3) {
      return -5;
    }
    iVar2 = FUN_0055512d(param_1 & 0xf0ffffff,param_2,param_3);
    if (iVar2 < 0) {
      piVar3 = (int *)FUN_005542c1();
      return (-(uint)(*piVar3 != 9) & 10) - 0xe;
    }
  }
  return iVar2;
}


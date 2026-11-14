// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429cd0
// entry: 00429cd0  size: 86


int FUN_00429cd0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 0x18 & 0xf;
  if (uVar2 == 1) {
    iVar1 = FUN_0041db70(param_1 & 0xf0ffffff,param_2);
  }
  else {
    if (uVar2 != 3) {
      return -5;
    }
    if (param_2 < 0) {
      return -0x13;
    }
    iVar1 = FUN_00555055(param_1 & 0xf0ffffff,param_2,0);
    if (iVar1 < 0) {
      iVar1 = FUN_00429930();
      return iVar1;
    }
  }
  return iVar1;
}


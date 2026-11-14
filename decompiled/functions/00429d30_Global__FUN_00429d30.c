// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429d30
// entry: 00429d30  size: 133


int FUN_00429d30(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = (int)param_1 >> 0x18 & 0xf;
  if (uVar1 == 1) {
    iVar2 = FUN_0041d6d0(param_1 & 0xf0ffffff,param_2,param_3,param_4);
  }
  else {
    if (uVar1 != 3) {
      return -5;
    }
    bVar3 = param_4 < 0;
    if (bVar3) {
      param_4 = 0;
    }
    iVar2 = FUN_00555055(param_1 & 0xf0ffffff,param_4,bVar3);
    if (iVar2 != -1) {
      iVar2 = FUN_00554e17(param_1 & 0xf0ffffff,param_2,param_3);
    }
    if (iVar2 < 0) {
      iVar2 = FUN_00429930();
      return iVar2;
    }
  }
  return iVar2;
}


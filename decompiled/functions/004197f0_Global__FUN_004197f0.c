// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004197f0
// entry: 004197f0  size: 100


int FUN_004197f0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 & 1) == 0) {
    if ((param_1 & 0xffffff) < DAT_0057ddf4) {
      FUN_0052b240(0x353);
      return -1;
    }
    iVar1 = FUN_00555055(DAT_005d8948,param_1,0);
    if ((iVar1 != -1) && (iVar1 = FUN_0055512d(DAT_005d8948,param_2,param_3), iVar1 != -1)) {
      return iVar1;
    }
  }
  return -1;
}


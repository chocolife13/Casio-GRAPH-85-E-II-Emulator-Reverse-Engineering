// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c0b0
// entry: 0041c0b0  size: 48


int FUN_0041c0b0(int param_1,int param_2)

{
  int iVar1;
  
  if ((&DAT_005d8ba4)[param_1 * 8] != -1) {
    if ((param_2 != 0) && (iVar1 = FUN_0041bf70(param_1), iVar1 < 0)) {
      return iVar1;
    }
    (&DAT_005d8ba4)[param_1 * 8] = 0xff;
  }
  return 0;
}


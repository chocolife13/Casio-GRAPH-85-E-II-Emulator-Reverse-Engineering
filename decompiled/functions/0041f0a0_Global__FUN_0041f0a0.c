// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f0a0
// entry: 0041f0a0  size: 119


undefined4 FUN_0041f0a0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041a050(param_1);
  if (iVar1 != 2) {
    return 0xfffffffb;
  }
  *param_2 = 0;
  if (DAT_005d8730 < 0x1a) {
    *param_2 = 0x180000;
  }
  else if (DAT_005d8730 != 0xffe) {
    iVar1 = FUN_0041f120(param_1,1);
    if ((-1 < iVar1) && (((uint)DAT_005d8730 % 0x7ff != 0 || (0x10000 < iVar1)))) {
      *param_2 = iVar1;
      return 0;
    }
  }
  return 0;
}


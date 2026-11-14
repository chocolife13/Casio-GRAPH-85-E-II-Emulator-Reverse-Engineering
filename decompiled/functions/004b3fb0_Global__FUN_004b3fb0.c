// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b3fb0
// entry: 004b3fb0  size: 76


undefined4 FUN_004b3fb0(byte *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b40a0(param_1,2,param_2);
  if (iVar1 == -1) {
    *param_1 = 0xf0;
    return 0;
  }
  if ((*param_1 & 0x80) != 0) {
    iVar1 = FUN_004b40a0(param_1 + 0xc,2,param_2);
    if (iVar1 == -1) {
      param_1[0xc] = 0xf0;
      return 0;
    }
  }
  return 1;
}


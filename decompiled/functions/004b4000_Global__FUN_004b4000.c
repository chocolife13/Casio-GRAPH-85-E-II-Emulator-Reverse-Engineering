// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b4000
// entry: 004b4000  size: 76


undefined4 FUN_004b4000(byte *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b40a0(param_1,3,param_2);
  if (iVar1 == -1) {
    *param_1 = 0xf0;
    return 0;
  }
  if ((*param_1 & 0x80) != 0) {
    iVar1 = FUN_004b40a0(param_1 + 0xc,3,param_2);
    if (iVar1 == -1) {
      param_1[0xc] = 0xf0;
      return 0;
    }
  }
  return 1;
}


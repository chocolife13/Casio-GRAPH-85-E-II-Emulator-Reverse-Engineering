// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041e040
// entry: 0041e040  size: 123


/* WARNING: Type propagation algorithm not settling */

int FUN_0041e040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8 [2];
  
  local_8[1] = 0;
  local_8[0] = 0;
  iVar1 = FUN_0041bf10(param_1);
  if (iVar1 == -1) {
    return -2;
  }
  uVar2 = FUN_0041a0e0(&DAT_005d874c + param_1 * 0x28,0,(&DAT_005d8748)[param_1 * 10] == -1);
  iVar1 = FUN_0041a900(CONCAT22((short)((uint)local_8 >> 0x10),
                                *(undefined2 *)(&DAT_005d8740 + param_1 * 0x28)),uVar2,local_8 + 1,
                       local_8);
  if (-1 < iVar1) {
    iVar1 = local_8[0];
  }
  return iVar1;
}


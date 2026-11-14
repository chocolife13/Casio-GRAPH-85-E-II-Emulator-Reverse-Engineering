// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00413da0
// entry: 00413da0  size: 85


undefined4 FUN_00413da0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00413b10((uint)DAT_005d8681 * 6,(uint)DAT_005d8680 << 3,param_1,param_2,0);
  if (0x7d < iVar1) {
    DAT_005d8681 = 0x14;
    return 0;
  }
  DAT_005d8681 = (char)((ulonglong)((longlong)iVar1 * 0x2aaaaaab) >> 0x20) -
                 (char)((longlong)iVar1 * 0x2aaaaaab >> 0x3f);
  return 0;
}


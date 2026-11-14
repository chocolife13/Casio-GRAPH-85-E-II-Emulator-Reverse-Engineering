// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00576606
// entry: 00576606  size: 69


int FUN_00576606(void)

{
  DWORD DVar1;
  
  if (DAT_005d5314 == 0) {
    DAT_005d5314 = 1;
    DVar1 = GetVersion();
    if (((byte)DVar1 < 4) && ((DVar1 & 0x80000000) != 0)) {
      DAT_005d5310 = 1;
    }
    else {
      DAT_005d5310 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005d5160);
    }
  }
  return DAT_005d5314;
}


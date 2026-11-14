// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00559f17
// entry: 00559f17  size: 34


void FUN_00559f17(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_005d95a0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


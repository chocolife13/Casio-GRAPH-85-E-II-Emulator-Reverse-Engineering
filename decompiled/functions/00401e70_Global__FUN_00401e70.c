// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00401e70
// entry: 00401e70  size: 106


int FUN_00401e70(uint param_1)

{
  return (param_1 & 0xf) +
         (((int)param_1 >> 4 & 0xfU) +
         (((int)param_1 >> 8 & 0xfU) +
         (((int)param_1 >> 0xc & 0xfU) +
         (((int)param_1 >> 0x10 & 0xfU) +
         (((int)param_1 >> 0x14 & 0xfU) +
         (((int)param_1 >> 0x18 & 0xfU) + ((int)param_1 >> 0x1c & 0xfU) * 10) * 10) * 10) * 10) * 10
         ) * 10) * 10;
}


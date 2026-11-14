// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532250
// entry: 00532250  size: 95


uint FUN_00532250(ushort param_1,uint param_2,byte param_3,byte param_4,uint param_5)

{
  if (param_3 == param_4) {
    return (uint)param_1;
  }
  return (int)((((param_2 & 0xffff) - (uint)param_1) * (param_5 & 0xff) -
               (uint)param_3 * (param_2 & 0xffff)) + (uint)param_4 * (uint)param_1) /
         (int)((uint)param_4 - (uint)param_3);
}


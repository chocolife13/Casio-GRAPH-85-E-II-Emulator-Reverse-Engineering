// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005321f0
// entry: 005321f0  size: 94


uint FUN_005321f0(ushort param_1,ushort param_2,uint param_3,uint param_4,uint param_5)

{
  if (param_1 == param_2) {
    return param_3 & 0xff;
  }
  return (int)((((param_4 & 0xff) - (param_3 & 0xff)) * (param_5 & 0xffff) -
               (uint)param_1 * (param_4 & 0xff)) + (uint)param_2 * (param_3 & 0xff)) /
         (int)((uint)param_2 - (uint)param_1);
}


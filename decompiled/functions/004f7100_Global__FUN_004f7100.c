// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f7100
// entry: 004f7100  size: 162


uint FUN_004f7100(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  if ((*(char *)*param_1 == '\x7f') &&
     (((cVar1 = ((char *)*param_1)[1], cVar1 == '4' || (cVar1 == '5')) || (cVar1 == '6')))) {
    FUN_004fe330(&param_1,param_1);
  }
  pbVar3 = (byte *)*puVar4;
  bVar2 = *pbVar3;
  if (bVar2 == 0x7f) {
    return (uint)(byte)(&DAT_005c0b3c)[(pbVar3[1] & 0xf) + (uint)(pbVar3[1] >> 4) * 0x10];
  }
  if (bVar2 == 0xf7) {
    return (uint)(byte)(&DAT_005c0c3c)[(pbVar3[1] & 0xf) + (uint)(pbVar3[1] >> 4) * 0x10];
  }
  if (bVar2 != 0xf9) {
    return CONCAT31((int3)((uint)pbVar3 >> 8),
                    (&DAT_005c0a3c)[(bVar2 & 0xf) + (uint)(bVar2 >> 4) * 0x10]);
  }
  return (uint)(byte)(&DAT_005c0d3c)[(pbVar3[1] & 0xf) + (uint)(pbVar3[1] >> 4) * 0x10];
}


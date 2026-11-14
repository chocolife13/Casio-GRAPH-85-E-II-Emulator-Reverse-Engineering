// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414290
// entry: 00414290  size: 81


void FUN_00414290(int param_1,int param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = FUN_00414270(param_1);
  if (param_3 != '\0') {
    pbVar1 = (byte *)((int)&DAT_005d8280 +
                     param_2 * 0x10 + ((int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3));
    *pbVar1 = *pbVar1 | bVar2;
    return;
  }
  pbVar1 = (byte *)((int)&DAT_005d8280 +
                   param_2 * 0x10 + ((int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3));
  *pbVar1 = *pbVar1 & ~bVar2;
  return;
}


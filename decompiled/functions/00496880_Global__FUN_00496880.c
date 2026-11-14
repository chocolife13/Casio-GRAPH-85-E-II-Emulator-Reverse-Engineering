// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00496880
// entry: 00496880  size: 40


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00496880(undefined4 param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_00495720(param_1);
  if ((*pbVar1 & 0x60) == 0x20) {
    _DAT_005cfd50 = pbVar1 + 0x2c;
    *(undefined **)(pbVar1 + 8) = &DAT_005cfd50;
  }
  return;
}


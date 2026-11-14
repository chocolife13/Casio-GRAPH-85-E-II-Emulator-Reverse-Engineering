// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042fba0
// entry: 0042fba0  size: 263


undefined4 FUN_0042fba0(int param_1,int param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 1) {
    if (DAT_005cdbc8 != 0) {
      return 0;
    }
  }
  else if (0x13 < DAT_005cdbc8) {
    return 0;
  }
  iVar2 = DAT_005cdbc8;
  if (DAT_005cdd14 != 0) {
    do {
      FUN_0040e610(10);
      iVar2 = DAT_005cdbc8;
    } while (DAT_005cdd14 != 0);
  }
  (&DAT_005cdbec)[iVar2] = param_3;
  iVar1 = DAT_005cdd28;
  (&DAT_005cdca4)[iVar2] = param_1;
  (&DAT_005cdc54)[iVar2] = param_2;
  if ((((iVar1 == 0) && ((DAT_005d6c28 & 1) != 0)) && (param_1 == 1)) && (param_2 == 1)) {
    DAT_005d6d64 = 1;
  }
  DAT_005cdbc8 = iVar2 + 1;
  DAT_005cdd14 = 0;
  if (((param_1 != 7) && (param_1 != 6)) || (param_2 != 0xb)) {
    DAT_005cdd1c = 0;
    return 1;
  }
  if (DAT_005cdd1c == 2) {
    DAT_005cdbc8 = iVar2;
    DAT_005cdd1c = 0;
    if (param_1 == 7) {
      return 3;
    }
    if (param_1 == 6) {
      return 2;
    }
  }
  DAT_005cdd1c = 1;
  return 0;
}


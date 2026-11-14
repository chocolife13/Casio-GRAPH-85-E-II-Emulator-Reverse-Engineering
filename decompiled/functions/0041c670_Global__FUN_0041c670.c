// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c670
// entry: 0041c670  size: 103


uint FUN_0041c670(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  iVar1 = FUN_0041a010(param_1);
  if (iVar1 != 2) {
    return 0xfffffffb;
  }
  iVar1 = 0;
  do {
    uVar2 = FUN_0041c0b0(iVar1,0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xd);
  puVar3 = &DAT_005d86a0;
  do {
    *puVar3 = 0xffe;
    puVar3 = puVar3 + 0x12;
  } while ((int)puVar3 < 0x5d8730);
  DAT_005d8730 = 0;
  uVar2 = FUN_0041c540(param_2);
  return uVar2 & (-1 < (int)uVar2) - 1;
}


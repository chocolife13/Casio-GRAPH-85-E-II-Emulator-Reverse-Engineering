// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad4d0
// entry: 004ad4d0  size: 128


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ad4d0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  
  uVar2 = param_1;
  iVar3 = FUN_004ab700(param_1);
  if (iVar3 == 0x1d) {
    return 0x40;
  }
  puVar7 = (undefined4 *)(PTR_DAT_005c421c + iVar3 * 0x18);
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  _DAT_005d5870 = _DAT_005abcf8;
  DAT_005d5874 = DAT_005abcfc;
  uVar5 = 0xffffffff;
  param_1._0_2_ = (ushort)(byte)uVar2;
  DAT_005d5b70 = 0;
  pcVar8 = (char *)&param_1;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = &DAT_005d5760;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return uVar5 & 0xffffff00;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00427250
// entry: 00427250  size: 154


undefined4 FUN_00427250(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  *(undefined4 *)(param_3 + 0xd) = s__GLOBAL_005be058._0_4_;
  *(undefined4 *)(param_3 + 0x11) = s__GLOBAL_005be058._4_4_;
  *(undefined4 *)(param_3 + 0x16) = s_ALPHAMEM_005bdd44._0_4_;
  *(undefined4 *)(param_3 + 0x1a) = s_ALPHAMEM_005bdd44._4_4_;
  param_3[0x1e] = s_ALPHAMEM_005bdd44[8];
  *(undefined4 *)param_3 = s_ALPHAMEM_005bdd44._0_4_;
  *(undefined4 *)(param_3 + 4) = s_ALPHAMEM_005bdd44._4_4_;
  param_3[8] = s_ALPHAMEM_005bdd44[8];
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_005be754;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar5 = param_3;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *(undefined **)(param_3 + 0x20) = PTR_DAT_005c421c;
  param_3[0x24] = -0x48;
  param_3[0x25] = '\x02';
  param_3[0x26] = '\0';
  param_3[0x27] = '\0';
  param_3[0x28] = '\x01';
  param_3[0x29] = '\0';
  param_3[0x1f] = '\0';
  return 0;
}


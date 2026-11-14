// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407980
// entry: 00407980  size: 253


undefined4 __thiscall FUN_00407980(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_005533e9(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00566960(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (param_2 != (char *)0x0) {
    uVar2 = FUN_00553497(param_2,&DAT_005a8d20);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar4 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar3 = s__logReplay_txt_005a8e1c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_00566937(~uVar4 + (~uVar5 - 1));
    uVar4 = 0xffffffff;
    *(char **)(param_1 + 0x20) = pcVar3;
    do {
      pcVar7 = param_2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar7 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_00407fb0(*(undefined4 *)(param_1 + 0x20));
    uVar4 = 0xffffffff;
    pcVar3 = s__logReplay_txt_005a8e1c;
    do {
      pcVar7 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar3 = *(char **)(param_1 + 0x20);
    do {
      pcVar8 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    pcVar3 = pcVar7 + -uVar4;
    pcVar7 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    iVar6 = FUN_00553497(*(undefined4 *)(param_1 + 0x20),&DAT_005a8d1c);
    if (iVar6 != 0) {
      FUN_005533e9(iVar6);
    }
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0xc) >> 8),*(int *)(param_1 + 0xc) != 0);
}


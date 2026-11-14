// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407a80
// entry: 00407a80  size: 455


undefined1 __thiscall FUN_00407a80(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  cVar1 = FUN_00407850();
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_00407fe0();
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00566960(*(int *)(param_1 + 0x14));
      FUN_00566960(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar4 = 0xffffffff;
    pcVar2 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00566937(~uVar4);
    uVar4 = 0xffffffff;
    *(char **)(param_1 + 0x14) = pcVar2;
    pcVar7 = param_2;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar8 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar2 = pcVar2 + 1;
    }
    uVar3 = FUN_00553497(param_2,&DAT_005a8d1c);
    *(undefined4 *)(param_1 + 8) = uVar3;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00566960(*(int *)(param_1 + 0x18));
    }
    uVar4 = 0xffffffff;
    pcVar2 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar2 = s__log_txt_005a8e2c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00566937(~uVar4 + (~uVar5 - 1));
    uVar4 = 0xffffffff;
    *(char **)(param_1 + 0x18) = pcVar2;
    pcVar7 = param_2;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar8 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar2 = pcVar2 + 1;
    }
    FUN_00407fb0(*(undefined4 *)(param_1 + 0x18));
    uVar4 = 0xffffffff;
    pcVar2 = s__log_txt_005a8e2c;
    do {
      pcVar7 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar2 = *(char **)(param_1 + 0x18);
    do {
      pcVar8 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar4;
    pcVar7 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    iVar6 = FUN_00553497(*(undefined4 *)(param_1 + 0x18),&DAT_005a8d1c);
    if (iVar6 != 0) {
      FUN_005533e9(iVar6);
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00566960(*(int *)(param_1 + 0x10));
  }
  uVar4 = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00566937(~uVar4);
  uVar4 = 0xffffffff;
  *(char **)(param_1 + 0x10) = pcVar2;
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
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_00407fb0(*(undefined4 *)(param_1 + 0x10));
  FUN_005533e9(*(undefined4 *)(param_1 + 8));
  return 1;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044f3e0
// entry: 0044f3e0  size: 369


undefined4 * FUN_0044f3e0(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char local_14 [20];
  
  puVar7 = param_1;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0x20202020;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = 0x20;
  bVar3 = 0;
  iVar4 = 9;
  puVar8 = param_2;
  do {
    pcVar6 = local_14 + bVar3;
    FUN_004b79f0(*puVar8,pcVar6);
    if (*pcVar6 == '\0') {
      *pcVar6 = ' ';
    }
    iVar1 = FUN_004b6ab0(*pcVar6);
    if (iVar1 != 0) {
      bVar3 = bVar3 + 1;
    }
    puVar8 = puVar8 + 1;
    bVar3 = bVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_14[bVar3] = '\0';
  uVar2 = FUN_004b6ca0(local_14);
  pcVar6 = local_14;
  pcVar9 = (char *)((int)param_1 + 1);
  for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar4 = FUN_004b7550(param_2 + 9);
  if (iVar4 != 0) {
    *(undefined1 *)((int)param_1 + uVar2 + 2) = 0x2a;
  }
  uVar5 = uVar2;
  if (param_2[0x12] == '\x01') {
    *(undefined1 *)((int)param_1 + uVar2 + 3) = 0xe5;
    uVar5 = uVar2 + 1;
    *(undefined1 *)((int)param_1 + uVar2 + 4) = 0xb5;
  }
  *(undefined1 *)((int)param_1 + uVar5 + 4) = 0x3a;
  FUN_0055c2fe(*(int *)(param_2 + 0x14) + 0x17U & 0xfffffffc,local_14,10);
  bVar3 = FUN_004b6bd0(local_14);
  FUN_004b6ef0((undefined1 *)((uVar5 - bVar3) + 0xb + (int)param_1),local_14);
  if (param_3 == 0) {
    *(undefined1 *)((int)param_1 + uVar5 + 0xb) = 0;
  }
  else {
    if (param_3 == 1) {
      FUN_004b6ef0((undefined1 *)((int)param_1 + uVar5 + 0xb),&DAT_005beb20);
      *(undefined1 *)((int)param_1 + uVar5 + 0xd) = 0;
      return param_1;
    }
    if (param_3 == 2) {
      FUN_004b6ef0((undefined1 *)((int)param_1 + uVar5 + 0xb),&DAT_005beb1c);
      *(undefined1 *)((int)param_1 + uVar5 + 0xd) = 0;
      return param_1;
    }
  }
  return param_1;
}


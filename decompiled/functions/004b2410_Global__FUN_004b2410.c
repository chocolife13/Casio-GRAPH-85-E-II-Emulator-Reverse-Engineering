// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b2410
// entry: 004b2410  size: 332


undefined4 FUN_004b2410(undefined4 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char local_24 [8];
  int local_1c;
  int local_18;
  undefined4 auStack_10 [2];
  undefined4 uStack_6;
  
  iVar2 = FUN_004b45a0(&local_1c,param_1);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  if ((-3 < local_1c) && (local_1c < (int)(6 - (uint)(local_18 != 1)))) {
    if (local_1c < 0) {
      iVar2 = (uint)(local_18 == -1) + (1 - local_1c);
    }
    else {
      iVar2 = (local_18 == -1) + 1;
    }
    iVar6 = -iVar2 + 10;
    if (iVar6 < 0xf) {
      puVar8 = (undefined4 *)((int)&uStack_6 + -iVar2);
      for (uVar4 = 0xfU - iVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = 0xfU - iVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    uVar3 = FUN_004b4710(param_2,&local_1c,iVar6,1);
    *param_3 = uVar3;
    return 0;
  }
  iVar2 = FUN_004b4910(local_24,local_1c,1,0);
  iVar6 = iVar2 + 1;
  if (local_18 == -1) {
    iVar6 = iVar2 + 2;
  }
  iVar6 = 10 - iVar6;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  local_1c = 0;
  if (iVar6 < 0xf) {
    puVar8 = (undefined4 *)((int)auStack_10 + iVar6);
    for (uVar4 = 0xfU - iVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = 0xfU - iVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  uVar3 = FUN_004b4710(param_2,&local_1c,iVar6,1);
  uVar4 = 0xffffffff;
  *param_3 = uVar3;
  pcVar9 = local_24;
  do {
    pcVar7 = pcVar9;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  do {
    pcVar9 = param_2;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar4;
  pcVar9 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return 1;
}


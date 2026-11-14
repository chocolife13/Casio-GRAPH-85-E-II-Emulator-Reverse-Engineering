// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b1a10
// entry: 004b1a10  size: 343


undefined4 FUN_004b1a10(undefined4 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char local_24 [8];
  int local_1c;
  int local_18;
  undefined4 auStack_10 [4];
  
  iVar2 = FUN_004b45a0(&local_1c,param_1);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  iVar2 = -(uint)(local_18 != 1) + 6;
  if ((-3 < local_1c) && (local_1c < iVar2)) {
    if (local_1c != -(uint)(local_18 != 1) + 5) {
      if (local_1c < 0) {
        iVar2 = (uint)(local_18 == -1) + (1 - local_1c);
      }
      else {
        iVar2 = (local_18 == -1) + 1;
      }
      iVar2 = 6 - iVar2;
    }
    if (iVar2 < 0xf) {
      puVar8 = (undefined4 *)((int)auStack_10 + iVar2);
      for (uVar5 = 0xfU - iVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = 0xfU - iVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    uVar3 = FUN_004b4710(param_2,&local_1c,iVar2,1);
    *param_3 = uVar3;
    return 0;
  }
  iVar2 = FUN_004b4910(local_24,local_1c,0,1);
  iVar4 = iVar2 + 1;
  if (local_18 == -1) {
    iVar4 = iVar2 + 2;
  }
  iVar4 = 6 - iVar4;
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  local_1c = 0;
  if (iVar4 < 0xf) {
    puVar8 = (undefined4 *)((int)auStack_10 + iVar4);
    for (uVar5 = 0xfU - iVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = 0xfU - iVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  uVar3 = FUN_004b4710(param_2,&local_1c,iVar4,1);
  uVar5 = 0xffffffff;
  *param_3 = uVar3;
  pcVar9 = local_24;
  do {
    pcVar7 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar2 = -1;
  do {
    pcVar9 = param_2;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar5;
  pcVar9 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return 1;
}


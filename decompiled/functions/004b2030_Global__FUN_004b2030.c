// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b2030
// entry: 004b2030  size: 303


undefined4 FUN_004b2030(undefined4 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char local_24 [8];
  int local_1c [3];
  undefined4 auStack_10 [4];
  
  iVar2 = FUN_004b45a0(local_1c,param_1);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  if ((-3 < local_1c[0]) && (local_1c[0] < 6)) {
    if (local_1c[0] == 5) {
      iVar2 = 6;
    }
    else {
      iVar2 = 1;
      if (local_1c[0] < 0) {
        iVar2 = 1 - local_1c[0];
      }
      iVar2 = 6 - iVar2;
    }
    if (iVar2 < 0xf) {
      puVar7 = (undefined4 *)((int)auStack_10 + iVar2);
      for (uVar4 = 0xfU - iVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = 0xfU - iVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    uVar3 = FUN_004b4710(param_2,local_1c,iVar2,1);
    *param_3 = uVar3;
    return 0;
  }
  iVar2 = FUN_004b4910(local_24,local_1c[0],0,1);
  iVar2 = 5 - iVar2;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  local_1c[0] = 0;
  if (iVar2 < 0xf) {
    puVar7 = (undefined4 *)((int)auStack_10 + iVar2);
    for (uVar4 = 0xfU - iVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = 0xfU - iVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  uVar3 = FUN_004b4710(param_2,local_1c,iVar2,1);
  *param_3 = uVar3;
  uVar4 = 0xffffffff;
  pcVar8 = local_24;
  do {
    pcVar6 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  do {
    pcVar8 = param_2;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar4;
  pcVar8 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return 1;
}


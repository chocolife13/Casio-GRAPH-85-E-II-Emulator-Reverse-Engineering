// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f8990
// entry: 004f8990  size: 420


void FUN_004f8990(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_84 [11];
  char local_58 [43];
  undefined4 local_2d [11];
  
  puVar6 = local_84;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0x20202020;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0x2020;
  pcVar7 = local_58;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  pcVar7[0] = '\0';
  pcVar7[1] = '\0';
  iVar3 = FUN_004b6f30(param_1,0xd);
  *(uint *)(param_2 + 0x128) = *(int *)(param_2 + 0x128) - *param_3;
  if (iVar3 == 0) {
    uVar1 = FUN_004b6ca0(param_1);
    pcVar7 = local_58;
    for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar7 = pcVar7 + 4;
    }
    bVar5 = 1;
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pcVar7 = *param_1;
      param_1 = param_1 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  else {
    uVar1 = FUN_004b6ca0((undefined4 *)(iVar3 + 1));
    puVar6 = (undefined4 *)(iVar3 + 1);
    puVar8 = local_2d;
    for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    bVar5 = 0;
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    cVar2 = *param_1;
    if (cVar2 != '\r') {
      uVar1 = 0;
      do {
        bVar5 = bVar5 + 1;
        local_58[uVar1] = cVar2;
        uVar1 = (uint)bVar5;
        cVar2 = param_1[uVar1];
      } while (cVar2 != '\r');
    }
    bVar5 = 2;
  }
  if (bVar5 != 0) {
    pcVar7 = local_58;
    uVar1 = (uint)bVar5;
    do {
      FUN_004b4f20(local_84,pcVar7,0x15);
      FUN_00554ab0(param_2 + -0x2a + *(int *)(param_2 + 0x128) * 0x2a,local_84,0x2a);
      FUN_005232d0(1,*(undefined4 *)(param_2 + 0x128));
      FUN_00523470(local_84,0x15);
      *(int *)(param_2 + 0x128) = *(int *)(param_2 + 0x128) + 1;
      FUN_004f74c0(param_2,1);
      pcVar7 = pcVar7 + 0x2b;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (((*param_3 != 0) && (FUN_004f8b40(param_2), *param_3 == 2)) && (bVar5 == 1)) {
    FUN_005232d0(1,*(int *)(param_2 + 0x128) + 1);
    FUN_00523470(0,0x15);
  }
  *param_3 = (uint)bVar5;
  FUN_0040ae30();
  return;
}


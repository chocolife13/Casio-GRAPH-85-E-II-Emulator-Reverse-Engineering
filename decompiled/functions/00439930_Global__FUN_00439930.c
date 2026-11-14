// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00439930
// entry: 00439930  size: 243


void FUN_00439930(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar5 = 6;
  iVar2 = *(int *)(param_2 + 0xc);
  iVar7 = *(int *)(param_2 + 8) + -1;
  *(int *)(param_2 + 8) = iVar7;
  puVar9 = (undefined4 *)(param_2 + 0x15c);
  do {
    iVar5 = iVar5 + -1;
    puVar6 = (undefined4 *)((int)puVar9 + -0x2a);
    puVar8 = puVar9;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
    puVar9 = (undefined4 *)((int)puVar9 + -0x2a);
  } while (iVar5 != 0);
  iVar2 = FUN_0043c1d0((iVar7 - iVar2) + (2 - *(int *)(param_2 + 0xc)),param_2);
  iVar2 = iVar2 + *(int *)(param_2 + 0x2d8);
  puVar9 = (undefined4 *)(param_2 + 0x60);
  uVar3 = 0x202020;
  puVar6 = puVar9;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0x20202020;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0x2020;
  iVar5 = 0;
  iVar7 = 0;
  do {
    if (*(char *)(iVar2 + iVar5) == '\0') break;
    iVar4 = FUN_004b6ab0(CONCAT31(uVar3,*(char *)(iVar2 + iVar5)));
    uVar3 = (undefined3)((uint)iVar4 >> 8);
    if (iVar4 == 0) {
      *(undefined1 *)((int)puVar9 + iVar5) = *(undefined1 *)(iVar2 + iVar5);
      if ((*(char *)(iVar2 + iVar5) == '\r') || (*(char *)(iVar2 + iVar5) == '\f')) {
        iVar7 = 0x15;
      }
    }
    else {
      uVar1 = *(undefined1 *)(iVar2 + 1 + iVar5);
      *(undefined1 *)((int)puVar9 + iVar5) = *(undefined1 *)(iVar2 + iVar5);
      *(undefined1 *)(iVar5 + 0x61 + param_2) = uVar1;
      iVar5 = iVar5 + 1;
    }
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x15);
  if ((param_1 == 0) && (*(int *)(param_2 + 0x4c) == 0)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      FUN_005232d0(1,iVar2);
      FUN_00523470(puVar9,0x15);
      puVar9 = (undefined4 *)((int)puVar9 + 0x2a);
    } while (iVar2 < 7);
  }
  return;
}


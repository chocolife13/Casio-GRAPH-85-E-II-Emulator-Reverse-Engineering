// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00439830
// entry: 00439830  size: 246


void FUN_00439830(int param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined3 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  
  iVar4 = param_2[3];
  iVar8 = param_2[2];
  iVar9 = 6;
  param_2[2] = iVar8 + 1;
  piVar13 = param_2 + 0x18;
  piVar12 = piVar13;
  do {
    iVar9 = iVar9 + -1;
    piVar10 = (int *)((int)piVar12 + 0x2a);
    piVar11 = piVar12;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    }
    *(short *)piVar11 = (short)*piVar10;
    piVar12 = (int *)((int)piVar12 + 0x2a);
  } while (iVar9 != 0);
  iVar4 = FUN_0043c1d0(((iVar8 + 1) - iVar4) + (8 - param_2[3]),param_2);
  iVar4 = iVar4 + param_2[0xb6];
  piVar12 = param_2 + 0x57;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar12 = 0x20202020;
    piVar12 = piVar12 + 1;
  }
  *(undefined2 *)piVar12 = 0x2020;
  iVar8 = *param_2;
  if (param_2[1] != iVar8) {
    iVar9 = 0;
    iVar7 = 0;
    do {
      if (*(char *)(iVar9 + iVar4) == '\0') break;
      iVar5 = FUN_004b6ab0(CONCAT31((int3)((uint)iVar8 >> 8),*(char *)(iVar9 + iVar4)));
      uVar1 = *(undefined1 *)(iVar9 + iVar4);
      uVar6 = (undefined3)((uint)iVar5 >> 8);
      iVar8 = CONCAT31(uVar6,uVar1);
      if (iVar5 == 0) {
        *(undefined1 *)((int)param_2 + iVar9 + 0x15c) = uVar1;
        cVar2 = *(char *)(iVar9 + iVar4);
        iVar8 = CONCAT31(uVar6,cVar2);
        if ((cVar2 == '\r') || (cVar2 == '\f')) {
          iVar7 = 0x15;
        }
      }
      else {
        uVar3 = *(undefined1 *)(iVar9 + 1 + iVar4);
        *(undefined1 *)((int)param_2 + iVar9 + 0x15c) = uVar1;
        *(undefined1 *)(iVar9 + 0x15d + (int)param_2) = uVar3;
        iVar9 = iVar9 + 1;
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x15);
  }
  if (param_1 == 0) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      FUN_005232d0(1,iVar4);
      FUN_00523470(piVar13,0x15);
      piVar13 = (int *)((int)piVar13 + 0x2a);
    } while (iVar4 < 7);
  }
  return;
}


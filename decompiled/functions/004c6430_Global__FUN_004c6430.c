// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c6430
// entry: 004c6430  size: 275


undefined4 FUN_004c6430(undefined4 *param_1,undefined1 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar4 = param_2;
  puVar7 = param_1;
  iVar5 = FUN_004e4020(param_2);
  if (iVar5 != 0) {
    return 0;
  }
  piVar3 = *(int **)(param_2 + 8);
  uVar1 = *(ushort *)(param_2 + 2);
  uVar2 = *(ushort *)(param_2 + 4);
  iVar5 = FUN_004e4000(param_1);
  if (iVar5 == 0) {
    param_2 = (undefined1 *)((uint)uVar2 * (uint)uVar1);
    if (0 < (int)param_2) {
      iVar5 = 0;
      do {
        puVar7 = (undefined4 *)(*piVar3 + iVar5);
        iVar5 = iVar5 + 0xc;
        *puVar7 = *param_1;
        puVar7[1] = param_1[1];
        puVar7[2] = param_1[2];
        param_2 = (undefined1 *)((int)param_2 + -1);
      } while (param_2 != (undefined1 *)0x0);
    }
    *(ushort *)(puVar4 + 2) = uVar1;
    *puVar4 = 0x30;
    *(ushort *)(puVar4 + 4) = uVar2;
    return 1;
  }
  param_1 = (undefined4 *)((uint)uVar2 * (uint)uVar1);
  if (0 < (int)param_1) {
    iVar8 = 0;
    iVar5 = (int)param_1 * 0xc;
    do {
      puVar6 = (undefined4 *)(*piVar3 + iVar8);
      iVar8 = iVar8 + 0xc;
      *puVar6 = *puVar7;
      puVar6[1] = puVar7[1];
      puVar6[2] = puVar7[2];
      puVar6 = (undefined4 *)(*piVar3 + iVar5);
      iVar5 = iVar5 + 0xc;
      *puVar6 = puVar7[3];
      puVar6[1] = puVar7[4];
      puVar6[2] = puVar7[5];
      param_1 = (undefined4 *)((int)param_1 + -1);
    } while (param_1 != (undefined4 *)0x0);
  }
  *(ushort *)(param_2 + 2) = uVar1;
  *param_2 = 0xb0;
  *(ushort *)(param_2 + 4) = uVar2;
  return 1;
}


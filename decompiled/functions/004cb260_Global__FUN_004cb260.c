// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004cb260
// entry: 004cb260  size: 507


undefined4 FUN_004cb260(int param_1,ushort *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  
  iVar2 = FUN_004e4000(param_1);
  if (iVar2 == 0) {
    uVar7 = param_3 & 0xffff;
  }
  else {
    uVar7 = (param_3 & 0xffff) * 2;
  }
  uVar8 = param_3 & 0xffff;
  piVar3 = (int *)FUN_004ad630((uVar7 * 3 + 3 & 0x3fff) << 2);
  if (piVar3 == (int *)0x0) {
    FUN_004e5630(4,param_1);
    return 4;
  }
  piVar1 = *(int **)(param_1 + 8);
  param_3 = uVar8;
  if (uVar7 == uVar8) {
    if (uVar8 != 0) {
      iVar2 = 0;
      do {
        puVar6 = (undefined4 *)(*piVar1 + iVar2);
        puVar4 = (undefined4 *)(*piVar3 + iVar2 + 0xc);
        *puVar4 = *puVar6;
        puVar4[1] = puVar6[1];
        puVar4[2] = puVar6[2];
        param_3 = param_3 - 1;
        iVar2 = iVar2 + 0xc;
      } while (param_3 != 0);
      if (uVar8 != 0) {
        iVar2 = 0;
        param_3 = uVar8;
        do {
          param_2 = param_2 + 1;
          puVar4 = (undefined4 *)(*piVar3 + (uint)*param_2 * 0xc);
          puVar6 = (undefined4 *)(*piVar1 + iVar2);
          iVar2 = iVar2 + 0xc;
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
          puVar6[2] = puVar4[2];
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        FUN_004ad6d0(piVar3);
        return 0;
      }
    }
  }
  else if (uVar8 != 0) {
    iVar5 = (uVar8 * 3 + 3) * 4;
    iVar2 = 0;
    do {
      puVar4 = (undefined4 *)(*piVar1 + iVar2);
      puVar6 = (undefined4 *)(*piVar3 + iVar2 + 0xc);
      *puVar6 = *puVar4;
      puVar6[1] = puVar4[1];
      puVar6[2] = puVar4[2];
      puVar4 = (undefined4 *)(*piVar1 + -0xc + iVar5);
      puVar6 = (undefined4 *)(*piVar3 + iVar5);
      iVar5 = iVar5 + 0xc;
      *puVar6 = *puVar4;
      puVar6[1] = puVar4[1];
      puVar6[2] = puVar4[2];
      param_3 = param_3 - 1;
      iVar2 = iVar2 + 0xc;
    } while (param_3 != 0);
    if (uVar8 != 0) {
      param_3 = 0;
      param_1 = uVar8 * 0xc;
      puVar9 = param_2;
      param_2 = (ushort *)uVar8;
      do {
        puVar9 = puVar9 + 1;
        puVar4 = (undefined4 *)(*piVar3 + (uint)*puVar9 * 0xc);
        puVar6 = (undefined4 *)(*piVar1 + param_3);
        *puVar6 = *puVar4;
        puVar6[1] = puVar4[1];
        puVar6[2] = puVar4[2];
        puVar4 = (undefined4 *)(*piVar3 + (*puVar9 + uVar8) * 0xc);
        puVar6 = (undefined4 *)(*piVar1 + param_1);
        *puVar6 = *puVar4;
        puVar6[1] = puVar4[1];
        puVar6[2] = puVar4[2];
        param_3 = param_3 + 0xc;
        param_1 = param_1 + 0xc;
        param_2 = (ushort *)((int)param_2 - 1);
      } while (param_2 != (ushort *)0x0);
    }
  }
  FUN_004ad6d0(piVar3);
  return 0;
}


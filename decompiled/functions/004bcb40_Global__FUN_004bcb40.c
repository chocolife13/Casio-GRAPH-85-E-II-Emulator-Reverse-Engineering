// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004bcb40
// entry: 004bcb40  size: 1082


undefined4 FUN_004bcb40(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_0052f840();
  piVar6 = *(int **)(param_1 + 8);
  piVar1 = *(int **)(param_2 + 8);
  iVar3 = FUN_004e4000(param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_004e4000(param_2), iVar3 == 0)) {
    bVar2 = false;
    if (param_3 != 0) {
      iVar3 = FUN_004e4000(param_3);
      if (iVar3 != 0) goto LAB_004bcf61;
      bVar2 = true;
    }
    uVar9 = (uint)*(ushort *)(param_1 + 2);
    if (*(ushort *)(param_2 + 2) != uVar9) {
      FUN_004e5630(9,param_4);
      return 0;
    }
    if ((bVar2) && (*(ushort *)(param_3 + 2) != uVar9)) {
      FUN_004e5630(9,param_4);
      return 0;
    }
    if (uVar9 == 1) {
      FUN_004e5630(3,param_4);
      return 0;
    }
    iVar3 = FUN_0052f820();
    if (iVar3 != 0) {
      FUN_004e5630(1,param_4);
      return 0;
    }
    iVar3 = (uVar9 * 3 & 0x3fff) << 2;
    piVar4 = (int *)FUN_004ad630(iVar3);
    if (piVar4 == (int *)0x0) {
      FUN_004e5630(4,param_4);
      return 0;
    }
    FUN_004f9690(local_18,piVar4,uVar9,1);
    iVar8 = 0;
    if (uVar9 != 0) {
      iVar10 = 0;
      do {
        puVar7 = (undefined4 *)(*piVar6 + iVar10);
        local_3c = *puVar7;
        local_38 = puVar7[1];
        local_34 = puVar7[2];
        FUN_004e7410(&local_3c,&local_3c);
        iVar5 = FUN_004e4020(&local_3c);
        if (iVar5 != 0) {
          FUN_004e5630(3,param_4);
          FUN_004ad6d0(piVar4);
          return 0;
        }
        puVar7 = (undefined4 *)(iVar10 + *piVar4);
        *puVar7 = local_3c;
        puVar7[1] = local_38;
        puVar7[2] = local_34;
        iVar5 = FUN_0052f820();
        if (iVar5 != 0) {
          FUN_004e5630(1,param_4);
          FUN_004ad6d0(piVar4);
          return 0;
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar8 < (int)uVar9);
    }
    piVar6 = (int *)FUN_004ad630(iVar3);
    if (piVar6 == (int *)0x0) {
      FUN_004e5630(4,param_4);
      FUN_004ad6d0(piVar4);
      return 0;
    }
    FUN_004f9690(local_30,piVar6,uVar9,1);
    iVar3 = 0;
    if (uVar9 != 0) {
      iVar8 = 0;
      do {
        puVar7 = (undefined4 *)(*piVar1 + iVar8);
        local_3c = *puVar7;
        local_38 = puVar7[1];
        local_34 = puVar7[2];
        FUN_004e7410(&local_3c,&local_3c);
        iVar10 = FUN_004e4020(&local_3c);
        if (iVar10 != 0) {
          FUN_004e5630(3,param_4);
          FUN_004ad6d0(piVar4);
          FUN_004ad6d0(piVar6);
          return 0;
        }
        puVar7 = (undefined4 *)(*piVar6 + iVar8);
        *puVar7 = local_3c;
        puVar7[1] = local_38;
        puVar7[2] = local_34;
        iVar10 = FUN_0052f820();
        if (iVar10 != 0) {
          FUN_004e5630(1,param_4);
          FUN_004ad6d0(piVar4);
          FUN_004ad6d0(piVar6);
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 0xc;
      } while (iVar3 < (int)uVar9);
    }
    iVar3 = FUN_004c47e0(local_18,local_30,param_3,param_4);
    if (iVar3 == 0) {
      FUN_004ad6d0(piVar4);
      FUN_004ad6d0(piVar6);
      return 0;
    }
    piVar1 = *(int **)(param_4 + 8);
    iVar3 = *piVar1;
    local_3c = *(undefined4 *)(iVar3 + 0xc);
    local_38 = *(undefined4 *)(iVar3 + 0x10);
    local_34 = *(undefined4 *)(iVar3 + 0x14);
    puVar7 = (undefined4 *)*piVar1;
    puVar7[3] = *puVar7;
    puVar7[4] = puVar7[1];
    puVar7[5] = puVar7[2];
    FUN_004e73d0(&local_3c,&local_3c);
    iVar3 = FUN_004e4020(&local_3c);
    if (iVar3 == 0) {
      puVar7 = (undefined4 *)*piVar1;
      *puVar7 = local_3c;
      puVar7[1] = local_38;
      puVar7[2] = local_34;
      FUN_004e3e70(param_4,param_4);
      iVar3 = FUN_004e4020(param_4);
      if (iVar3 == 0) {
        FUN_004ad6d0(piVar4);
        FUN_004ad6d0(piVar6);
        return 1;
      }
      FUN_004e5630(3,param_4);
      FUN_004ad6d0(piVar4);
      FUN_004ad6d0(piVar6);
      FUN_004ad6d0(piVar1);
      return 0;
    }
    FUN_004e5630(3,param_4);
    FUN_004ad6d0(piVar6);
    FUN_004ad6d0(piVar4);
    FUN_004ad6d0(piVar1);
    return 0;
  }
LAB_004bcf61:
  FUN_004e5630(0x19,param_4);
  return 0;
}


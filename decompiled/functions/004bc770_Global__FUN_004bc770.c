// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004bc770
// entry: 004bc770  size: 975


undefined4 FUN_004bc770(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_0052f840();
  piVar1 = *(int **)(param_1 + 8);
  piVar2 = *(int **)(param_2 + 8);
  iVar4 = FUN_004e4000(param_1);
  if (iVar4 == 0) {
    iVar4 = FUN_004e4000(param_2);
    if (iVar4 == 0) {
      bVar3 = false;
      if (param_3 != 0) {
        iVar4 = FUN_004e4000(param_3);
        if (iVar4 != 0) {
          FUN_004e5630(0x19,param_4);
          return 0;
        }
        bVar3 = true;
      }
      uVar9 = (uint)*(ushort *)(param_1 + 2);
      if (*(ushort *)(param_2 + 2) != uVar9) {
        FUN_004e5630(9,param_4);
        return 0;
      }
      if ((bVar3) && (*(ushort *)(param_3 + 2) != uVar9)) {
        FUN_004e5630(9,param_4);
        return 0;
      }
      if (uVar9 == 1) {
        FUN_004e5630(3,param_4);
        return 0;
      }
      iVar4 = (uVar9 * 3 & 0x3fff) << 2;
      piVar5 = (int *)FUN_004ad630(iVar4);
      if (piVar5 == (int *)0x0) {
        FUN_004e5630(4,param_4);
        return 0;
      }
      FUN_004f9690(local_18,piVar5,uVar9,1);
      piVar6 = (int *)FUN_004ad630(iVar4);
      iVar4 = 0;
      if (piVar6 == (int *)0x0) {
        FUN_004e5630(4,param_4);
        FUN_004ad6d0(piVar5);
        return 0;
      }
      FUN_004f9690(local_30,piVar6,uVar9,1);
      param_1 = 0;
      if (uVar9 != 0) {
        do {
          puVar8 = (undefined4 *)(*piVar1 + iVar4);
          local_48 = *puVar8;
          local_44 = puVar8[1];
          local_40 = puVar8[2];
          puVar8 = (undefined4 *)(iVar4 + *piVar5);
          *puVar8 = local_48;
          puVar8[1] = local_44;
          puVar8[2] = local_40;
          iVar7 = FUN_0052f820();
          if (iVar7 != 0) goto LAB_004bca06;
          iVar4 = iVar4 + 0xc;
          param_1 = param_1 + 1;
        } while (param_1 < (int)uVar9);
      }
      iVar4 = 0;
      param_1 = 0;
      if (uVar9 != 0) {
        do {
          puVar8 = (undefined4 *)(*piVar2 + iVar4);
          local_48 = *puVar8;
          local_44 = puVar8[1];
          local_40 = puVar8[2];
          FUN_004e7410(&local_48,&local_48);
          iVar7 = FUN_004e4020(&local_48);
          if (iVar7 != 0) {
            FUN_004e5630(3,param_4);
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(piVar6);
            return 0;
          }
          puVar8 = (undefined4 *)(*piVar6 + iVar4);
          *puVar8 = local_48;
          puVar8[1] = local_44;
          puVar8[2] = local_40;
          iVar7 = FUN_0052f820();
          if (iVar7 != 0) {
LAB_004bca06:
            FUN_004e5630(1,param_4);
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(piVar6);
            return 0;
          }
          iVar4 = iVar4 + 0xc;
          param_1 = param_1 + 1;
        } while (param_1 < (int)uVar9);
      }
      iVar4 = FUN_004c47e0(local_18,local_30,param_3,param_4);
      if (iVar4 == 0) {
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(piVar6);
        return 0;
      }
      piVar1 = *(int **)(param_4 + 8);
      puVar8 = (undefined4 *)*piVar1;
      local_48 = *puVar8;
      local_44 = puVar8[1];
      local_40 = puVar8[2];
      iVar4 = *piVar1;
      local_3c = *(undefined4 *)(iVar4 + 0xc);
      local_38 = *(undefined4 *)(iVar4 + 0x10);
      local_34 = *(undefined4 *)(iVar4 + 0x14);
      iVar4 = *piVar1;
      *(undefined4 *)(iVar4 + 0xc) = local_48;
      *(undefined4 *)(iVar4 + 0x10) = local_44;
      *(undefined4 *)(iVar4 + 0x14) = local_40;
      FUN_004e73d0(&local_3c,&local_3c);
      iVar4 = FUN_004e4020(&local_3c);
      if (iVar4 != 0) {
        FUN_004e5630(3,param_4);
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(piVar6);
        FUN_004ad6d0(piVar1);
        return 0;
      }
      puVar8 = (undefined4 *)*piVar1;
      *puVar8 = local_3c;
      puVar8[1] = local_38;
      puVar8[2] = local_34;
      FUN_004e3e70(param_4,param_4);
      iVar4 = FUN_004e4020(param_4);
      if (iVar4 != 0) {
        FUN_004e5630(3,param_4);
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(piVar6);
        FUN_004ad6d0(piVar1);
        return 0;
      }
      FUN_004ad6d0(piVar5);
      FUN_004ad6d0(piVar6);
      return 1;
    }
  }
  FUN_004e5630(0x19,param_4);
  return 0;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c3cd0
// entry: 004c3cd0  size: 460


/* WARNING: Removing unreachable block (ram,0x004c3dce) */

undefined4 FUN_004c3cd0(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48 [6];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  piVar2 = *(int **)(param_1 + 8);
  FUN_004e57c0(local_30);
  iVar3 = FUN_004c5600(param_1,local_48);
  if (iVar3 == 0) {
    puVar7 = local_48;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar7;
      puVar7 = puVar7 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 2);
  uVar9 = (uint)uVar1;
  piVar4 = (int *)FUN_004ad630((uVar9 * 3 & 0x3fff) << 2);
  if (piVar4 == (int *)0x0) {
    FUN_004e5630(4,param_2);
    return 0;
  }
  FUN_004f9690(local_18,piVar4,uVar9,1);
  if (uVar9 != 0) {
    iVar3 = 0;
    uVar6 = uVar9;
    do {
      puVar8 = (undefined4 *)(iVar3 + *piVar4);
      puVar7 = (undefined4 *)(*piVar2 + iVar3);
      iVar3 = iVar3 + 0xc;
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
    } while (uVar6 != 0);
  }
  iVar3 = FUN_004c9110(uVar9,piVar4);
  if (iVar3 != 0) {
    FUN_004e5630(iVar3,param_2);
    FUN_004ad6d0(piVar4);
    return 0;
  }
  if ((uVar1 & 1) == 0) {
    iVar5 = ((int)uVar9 >> 1) * 0xc;
    iVar3 = iVar5 + -0xc + *piVar4;
    local_78 = *(undefined4 *)(iVar5 + -0xc + *piVar4);
    local_74 = *(undefined4 *)(iVar3 + 4);
    local_70 = *(undefined4 *)(iVar3 + 8);
    puVar7 = (undefined4 *)(iVar5 + *piVar4);
    local_60 = *puVar7;
    local_5c = puVar7[1];
    local_58 = puVar7[2];
    FUN_004e0880(&local_78,&local_60,&local_78,0);
    FUN_004e0dd0(&local_78,local_30,param_2,0);
  }
  else {
    puVar7 = (undefined4 *)(*piVar4 + ((int)uVar9 >> 1) * 0xc);
    *param_2 = *puVar7;
    param_2[1] = puVar7[1];
    param_2[2] = puVar7[2];
  }
  FUN_004e3e70(param_2,param_2);
  iVar3 = FUN_004e4020(param_2);
  if (iVar3 != 0) {
    FUN_004ad6d0(piVar4);
    return 0;
  }
  FUN_004ad6d0(piVar4);
  return 1;
}


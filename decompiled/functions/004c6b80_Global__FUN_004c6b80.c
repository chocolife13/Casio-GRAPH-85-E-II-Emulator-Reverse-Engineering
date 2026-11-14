// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c6b80
// entry: 004c6b80  size: 463


/* WARNING: Removing unreachable block (ram,0x004c6c74) */

bool FUN_004c6b80(int param_1,undefined4 *param_2)

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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_18 [24];
  
  piVar2 = *(int **)(param_1 + 8);
  iVar3 = FUN_004c5600(param_1,&local_30);
  if (iVar3 == 0) {
    *param_2 = local_30;
    param_2[1] = local_2c;
    param_2[2] = local_28;
    return false;
  }
  uVar1 = *(ushort *)(param_1 + 2);
  uVar9 = (uint)uVar1;
  piVar4 = (int *)FUN_004ad630((uVar9 * 3 & 0x3fff) << 2);
  if (piVar4 != (int *)0x0) {
    FUN_004f9690(local_18,piVar4,uVar9,1);
    if (uVar9 != 0) {
      iVar3 = 0;
      uVar6 = uVar9;
      do {
        puVar8 = (undefined4 *)(*piVar4 + iVar3);
        puVar7 = (undefined4 *)(*piVar2 + iVar3);
        iVar3 = iVar3 + 0xc;
        uVar6 = uVar6 - 1;
        *puVar8 = *puVar7;
        puVar8[1] = puVar7[1];
        puVar8[2] = puVar7[2];
      } while (uVar6 != 0);
    }
    iVar3 = FUN_004c9110(uVar9,piVar4);
    if (iVar3 == 0) {
      if ((uVar1 & 1) == 0) {
        iVar5 = ((int)uVar9 >> 1) * 0xc;
        iVar3 = *piVar4 + -0xc + iVar5;
        local_48 = *(undefined4 *)(*piVar4 + -0xc + iVar5);
        local_44 = *(undefined4 *)(iVar3 + 4);
        local_40 = *(undefined4 *)(iVar3 + 8);
        puVar7 = (undefined4 *)(*piVar4 + iVar5);
        local_60 = *puVar7;
        local_5c = puVar7[1];
        local_58 = puVar7[2];
        FUN_004e0880(&local_48,&local_60,&local_48,1);
        FUN_004e57c0(&local_60);
        FUN_004e0dd0(&local_48,&local_60,param_2,1);
        FUN_004e3e70(param_2,param_2);
        iVar3 = FUN_004e4020(param_2);
        FUN_004ad6d0(piVar4);
        return iVar3 == 0;
      }
      puVar7 = (undefined4 *)(*piVar4 + ((int)uVar9 >> 1) * 0xc);
      *param_2 = *puVar7;
      param_2[1] = puVar7[1];
      param_2[2] = puVar7[2];
      FUN_004ad6d0(piVar4);
      return true;
    }
    FUN_004e5630(iVar3,param_2);
    FUN_004ad6d0(piVar4);
    return false;
  }
  FUN_004e5630(4,param_2);
  return false;
}


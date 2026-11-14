// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c3ec0
// entry: 004c3ec0  size: 709


/* WARNING: Removing unreachable block (ram,0x004c4075) */
/* WARNING: Removing unreachable block (ram,0x004c4091) */

bool FUN_004c3ec0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  piVar2 = *(int **)(param_1 + 8);
  FUN_004e57c0(local_30);
  FUN_0052f840();
  uVar9 = (uint)*(ushort *)(param_1 + 2);
  if (uVar9 != 999 && 0x3e6 < *(ushort *)(param_1 + 2)) {
    FUN_004e5630(3,param_2);
    return false;
  }
  piVar3 = (int *)FUN_004ad630((uVar9 * 3 & 0x3fff) << 2);
  if (piVar3 == (int *)0x0) {
    FUN_004e5630(4,param_2);
    return false;
  }
  FUN_004f9690(local_18,piVar3,uVar9,1);
  iVar4 = FUN_0052f820();
  if (iVar4 == 0) {
    if (uVar9 != 0) {
      iVar4 = 0;
      uVar5 = uVar9;
      do {
        puVar7 = (undefined4 *)(*piVar3 + iVar4);
        puVar6 = (undefined4 *)(*piVar2 + iVar4);
        iVar4 = iVar4 + 0xc;
        uVar5 = uVar5 - 1;
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
        puVar7[2] = puVar6[2];
      } while (uVar5 != 0);
    }
    iVar4 = FUN_0052f820();
    if (iVar4 == 0) {
      iVar4 = FUN_004c9110(uVar9,piVar3);
      if (iVar4 != 0) {
        FUN_004e5630(iVar4,param_2);
        FUN_004ad6d0(piVar3);
        return false;
      }
      if (uVar9 == 1) {
        puVar6 = (undefined4 *)*piVar3;
        *param_2 = *puVar6;
        param_2[1] = puVar6[1];
        param_2[2] = puVar6[2];
        FUN_004ad6d0(piVar3);
        return true;
      }
      if (uVar9 == 2) {
        iVar4 = *piVar3;
        *param_2 = *(undefined4 *)(iVar4 + 0xc);
        param_2[1] = *(undefined4 *)(iVar4 + 0x10);
        param_2[2] = *(undefined4 *)(iVar4 + 0x14);
        FUN_004ad6d0(piVar3);
        return true;
      }
      if (uVar9 != 3) {
        uVar8 = (int)uVar9 >> 1;
        uVar5 = uVar8;
        if ((uVar9 & 0x80000001) == 1) {
          uVar5 = uVar8 + 1;
        }
        iVar4 = uVar5 + ((int)uVar9 >> 2);
        if ((uVar8 & 0x80000001) == 1) {
          iVar4 = iVar4 + 1;
        }
        if ((uVar8 & 0x80000001) == 0) {
          iVar4 = iVar4 * 0xc;
          iVar1 = *piVar3 + -0xc + iVar4;
          local_60 = *(undefined4 *)(*piVar3 + -0xc + iVar4);
          local_5c = *(undefined4 *)(iVar1 + 4);
          local_58 = *(undefined4 *)(iVar1 + 8);
          puVar6 = (undefined4 *)(*piVar3 + iVar4);
          local_48 = *puVar6;
          local_44 = puVar6[1];
          local_40 = puVar6[2];
          FUN_004e0880(&local_60,&local_48,&local_60,0);
          FUN_004e0dd0(&local_60,local_30,param_2,0);
          FUN_004e3e70(param_2,param_2);
          iVar4 = FUN_004e4020(param_2);
          if (iVar4 != 0) {
            FUN_004ad6d0(piVar3);
            return false;
          }
        }
        else {
          puVar6 = (undefined4 *)(*piVar3 + -0xc + iVar4 * 0xc);
          *param_2 = *puVar6;
          param_2[1] = puVar6[1];
          param_2[2] = puVar6[2];
        }
        FUN_004ad6d0(piVar3);
        iVar4 = FUN_004e4020(param_2);
        return iVar4 == 0;
      }
      iVar4 = *piVar3;
      *param_2 = *(undefined4 *)(iVar4 + 0x18);
      param_2[1] = *(undefined4 *)(iVar4 + 0x1c);
      param_2[2] = *(undefined4 *)(iVar4 + 0x20);
      FUN_004ad6d0(piVar3);
      return true;
    }
  }
  FUN_004e5630(1,param_2);
  FUN_004ad6d0(piVar3);
  return false;
}


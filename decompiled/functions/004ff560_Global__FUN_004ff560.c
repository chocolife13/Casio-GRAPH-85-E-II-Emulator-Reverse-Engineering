// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ff560
// entry: 004ff560  size: 622


undefined4 FUN_004ff560(byte *param_1,byte *param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint local_40;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  uVar5 = *(ushort *)(param_1 + 2);
  bVar3 = *param_1;
  local_40 = 0;
  bVar4 = *param_2;
  if (uVar5 != *(ushort *)(param_2 + 2)) {
    uVar7 = FUN_00501e90(param_3);
    return uVar7;
  }
  uVar6 = (uint)uVar5;
  piVar8 = (int *)FUN_004ad630(uVar6 * 0xc);
  if (piVar8 != (int *)0x0) {
    uVar10 = 1;
    if (uVar5 != 0) {
      do {
        FUN_004fdce0(uVar10,param_1,&local_30);
        if (((bVar3 & 0x80) != 0) && (FUN_004e23b0(&local_30,&local_30,0), (char)local_30 == -0x10))
        {
          *param_3 = local_30;
          param_3[1] = local_2c;
          param_3[2] = local_28;
          FUN_004ad6d0(piVar8);
          return 0;
        }
        FUN_004fdce0(uVar10,param_2,&local_18);
        if (((bVar4 & 0x80) != 0) && (FUN_004e23b0(&local_18,&local_18,0), (char)local_18 == -0x10))
        {
          *param_3 = local_18;
          param_3[1] = local_14;
          param_3[2] = local_10;
          FUN_004ad6d0(piVar8);
          return 0;
        }
        if (param_4 == 0) {
          iVar9 = FUN_004e7250(&local_30,&local_18);
        }
        else {
          iVar9 = FUN_004e7290(&local_30,&local_18);
        }
        pbVar11 = param_1;
        if (iVar9 != 0) {
          pbVar11 = param_2;
        }
        FUN_004fdce0(uVar10,pbVar11,&local_30);
        if ((local_30 & 0x80) == 0) {
          puVar1 = (uint *)(*piVar8 + -0xc + (uVar10 & 0xffff) * 0xc);
          *puVar1 = local_30;
          puVar1[1] = local_2c;
          puVar1[2] = local_28;
        }
        else {
          if (local_40 == 0) {
            piVar8 = (int *)FUN_004ad670(piVar8,uVar6 * 0x18);
            if (piVar8 == (int *)0x0) goto LAB_004ff5cf;
            local_40 = 0x80;
          }
          puVar1 = (uint *)(*piVar8 + -0xc + (uVar10 & 0xffff) * 0xc);
          *puVar1 = local_30;
          puVar1[1] = local_2c;
          puVar1[2] = local_28;
          puVar2 = (undefined4 *)(*piVar8 + -0xc + ((uVar10 & 0xffff) + uVar6) * 0xc);
          *puVar2 = local_24;
          puVar2[1] = local_20;
          puVar2[2] = local_1c;
        }
        uVar10 = uVar10 + 1;
      } while ((ushort)uVar10 <= uVar5);
    }
    FUN_004ff510(local_40 | 0x20,uVar5,piVar8,param_3);
    return 1;
  }
LAB_004ff5cf:
  uVar7 = FUN_00501ef0(param_3);
  return uVar7;
}


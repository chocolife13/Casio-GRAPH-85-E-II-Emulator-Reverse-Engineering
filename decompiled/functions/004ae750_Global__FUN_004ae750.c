// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ae750
// entry: 004ae750  size: 1218


int FUN_004ae750(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 local_5e;
  undefined1 local_5d;
  int local_5c;
  undefined4 local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 local_20 [32];
  
  local_5c = 0;
  iVar1 = FUN_00495830();
  local_48 = iVar1;
  if (param_1 == 0x1000) {
    iVar3 = FUN_004105d0(&DAT_005bfd08,s_EACT1_005bfd10,&local_5e,local_40,&local_50,local_44);
    if (iVar3 != 0) goto LAB_004aeab0;
    piVar8 = (int *)(iVar1 + (int)local_50);
    if (*piVar8 == 0) {
      FUN_00531a60();
      FUN_004ada80();
      *piVar8 = -0x54321077;
      return 0;
    }
    local_30 = piVar8[1];
    local_2c = piVar8[2];
    local_28 = piVar8[3];
    local_24 = piVar8[4];
LAB_004ae8f0:
    uVar2 = local_28 & 0xffff;
    local_4c = local_2c + 0x10;
    iVar4 = local_30 - local_4c;
    iVar3 = FUN_00411d60(local_3c);
    iVar1 = local_48;
    puVar7 = (undefined4 *)*DAT_005d6d74;
    puVar9 = puVar7;
    for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    if (param_1 == 0x1000) {
      iVar5 = FUN_004117b0(&DAT_005bfd08,s_EACT1_005bfd10,local_48 + 0x14,local_2c,puVar7);
      iVar3 = local_4c;
      if ((iVar5 != 0) ||
         (iVar1 = FUN_004115f0(&DAT_005bfd08,s_EACT1_005bfd10,iVar1 + 4,local_4c), iVar1 != 0))
      goto LAB_004aeab0;
      FUN_00495ac0(-iVar3);
    }
    else if (param_1 == 0x4000) {
      if (iVar3 - 0x80U <= iVar4 + uVar2 * -0x10) {
        local_5c = 4;
        goto LAB_004aeac2;
      }
      iVar1 = FUN_00429d30(local_58,puVar7,local_2c,0xffffffff);
      if (iVar1 < 0) goto LAB_004aea97;
    }
    else {
      iVar1 = FUN_004117b0(&DAT_005bfd08,s_EDIT_PAC_005c0638,0x10,local_2c,puVar7);
      if ((iVar1 != 0) ||
         (iVar1 = FUN_004115f0(&DAT_005bfd08,s_EDIT_PAC_005c0638,0,local_4c), iVar1 != 0))
      goto LAB_004aeab0;
    }
    FUN_00531ca0(param_1,puVar7,1);
    puVar9 = puVar7;
    for (iVar1 = 0x2000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    if (iVar4 != 0) {
      if (param_1 == 0x1000) {
        iVar1 = local_48 + 4;
        iVar3 = FUN_004117b0(&DAT_005bfd08,s_EACT1_005bfd10,iVar1,iVar4,puVar7);
        if ((iVar3 != 0) ||
           (local_5c = FUN_004115f0(&DAT_005bfd08,s_EACT1_005bfd10,iVar1,iVar4), local_5c != 0))
        goto LAB_004aeab0;
        FUN_00495ac0(-iVar4);
      }
      else if (param_1 == 0x4000) {
        iVar1 = FUN_00429d30(local_58,puVar7,iVar4,0xffffffff);
        if (iVar1 < 0) goto LAB_004aea97;
        FUN_00420d60(&local_30,puVar7,0);
      }
      else {
        iVar1 = FUN_004117b0(&DAT_005bfd08,s_EDIT_PAC_005c0638,0,iVar4,puVar7);
        if (iVar1 != 0) goto LAB_004aeab0;
        FUN_00410e00(&DAT_005bfd08,s_EDIT_PAC_005c0638);
      }
      iVar1 = 0;
      if ((short)local_28 != 0) {
        do {
          local_38 = *puVar7;
          local_34 = puVar7[1];
          iVar3 = puVar7[3];
          iVar4 = FUN_00410440(&local_38,&local_5d);
          if ((((iVar4 != 0) && (iVar4 != 0x42)) ||
              (iVar3 = FUN_004106b0(&local_38,s_UnPack_005c079c,0xce,iVar3 + -0x14,DAT_005d67e8),
              iVar3 != 0)) || (iVar3 = FUN_004103d0(&local_38,&local_54,&local_5d), iVar3 != 0))
          goto LAB_004aeab0;
          uVar2 = puVar7[3];
          puVar9 = puVar7 + 4;
          puVar10 = *(undefined4 **)(local_54 + 8);
          for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          iVar1 = iVar1 + 1;
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          *(undefined2 *)(local_54 + 0xc) = *(undefined2 *)((int)puVar7 + 10);
          *(undefined1 *)(local_54 + 0xe) = *(undefined1 *)(puVar7 + 2);
          *(undefined1 *)(local_54 + 0xf) = *(undefined1 *)((int)puVar7 + 9);
          puVar7 = (undefined4 *)((int)puVar7 + puVar7[3] + 0x10);
        } while (iVar1 < (int)(local_28 & 0xffff));
      }
    }
  }
  else {
    if (param_1 == 0x4000) {
      iVar1 = FUN_0049d690(param_2,&local_58);
      if (iVar1 < 0) {
        if (iVar1 == -1) {
          FUN_00531a60();
          FUN_004ada80();
          goto LAB_004aeac2;
        }
      }
      else {
        iVar3 = FUN_00429d30(local_58,local_20,0x20,0);
        if (iVar3 < 0) {
          if (iVar3 == -2) {
            local_5c = 0x2b;
            goto LAB_004aeac2;
          }
        }
        else {
          iVar3 = FUN_00429d30(local_58,&local_30,0x10,0xffffffff);
          if (-1 < iVar3) {
            FUN_00420ce0(&local_30,0);
            local_5c = FUN_004ae220(local_20,&local_30,iVar1);
            if (local_5c != 0) goto LAB_004aeac2;
            goto LAB_004ae8f0;
          }
        }
LAB_004aea97:
        FUN_00429be0(local_58);
        FUN_0042a080(param_2,0);
      }
    }
    else {
      iVar1 = FUN_004105d0(&DAT_005bfd08,s_EDIT_PAC_005c0638,&local_5e,local_40,&local_50,local_44);
      if (iVar1 == 0) {
        local_30 = *local_50;
        local_2c = local_50[1];
        local_28 = local_50[2];
        local_24 = local_50[3];
        goto LAB_004ae8f0;
      }
    }
LAB_004aeab0:
    local_5c = 0x17;
  }
  if (param_1 != 0x4000) {
    return local_5c;
  }
LAB_004aeac2:
  FUN_00429be0(local_58);
  return local_5c;
}


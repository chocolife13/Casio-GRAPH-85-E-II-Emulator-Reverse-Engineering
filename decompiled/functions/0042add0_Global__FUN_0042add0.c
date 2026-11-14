// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042add0
// entry: 0042add0  size: 3493


short FUN_0042add0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [16];
  undefined4 local_18 [3];
  undefined1 local_c [12];
  
  FUN_0042f560(0,&local_44);
  sVar5 = FUN_0042f750(param_1);
  puVar1 = param_1 + 3;
  sVar6 = FUN_0042f750(puVar1);
  if (sVar5 == 0xf0) goto LAB_0042b190;
  if (sVar6 == 0xf0) {
    *param_1 = *puVar1;
    param_1[1] = param_1[4];
    param_1[2] = param_1[5];
    sVar5 = FUN_0042e840(param_1);
    return sVar5;
  }
  local_4c = FUN_0042f750(param_2);
  puVar10 = param_2 + 3;
  sVar5 = FUN_0042f750(puVar10);
  if ((short)local_4c == 0xf0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    sVar5 = FUN_0042e840(param_1);
    return sVar5;
  }
  if (sVar5 != 0xf0) {
    FUN_0042f560(0,&local_44);
    uVar8 = FUN_0042cff0(puVar1);
    if (((uVar8 & 1) != 0) && (uVar8 = FUN_0042cff0(puVar10), (uVar8 & 1) != 0)) {
      sVar5 = FUN_0042cd50(param_1,param_2);
      return sVar5;
    }
    uVar7 = FUN_0042cff0(puVar10);
    if (uVar7 != 0xf0) {
      if ((uVar7 & 1) != 0) {
        sVar5 = FUN_0042cd50(param_1);
        if (sVar5 != 0) {
          return sVar5;
        }
        sVar5 = FUN_0042cd50(puVar1,param_2);
        if (sVar5 == 0) {
          return 0;
        }
LAB_0042af60:
        *param_1 = *puVar1;
        param_1[1] = param_1[4];
        param_1[2] = param_1[5];
        return sVar5;
      }
      uVar7 = FUN_0042cff0(param_2);
      if (uVar7 == 0xf0) {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        sVar5 = FUN_0042e840(param_1);
        return sVar5;
      }
      if ((uVar7 & 1) != 0) {
        sVar5 = FUN_0042cd50(puVar1,puVar10);
        if (sVar5 == 0) {
          sVar5 = FUN_0042cd50(param_1,puVar10);
          if (sVar5 != 0) {
            return sVar5;
          }
          sVar5 = FUN_0042e640(param_1);
          if (sVar5 == 0) {
            uVar2 = *param_1;
            uVar3 = param_1[1];
            uVar4 = param_1[2];
            *param_1 = *puVar1;
            param_1[1] = param_1[4];
            *puVar1 = uVar2;
            param_1[2] = param_1[5];
            param_1[4] = uVar3;
            param_1[5] = uVar4;
            return 0;
          }
          return sVar5;
        }
        goto LAB_0042af60;
      }
      FUN_00401000(param_1,&local_d8);
      FUN_00401000(param_2,&local_74);
      FUN_00401000(puVar1,&local_c8);
      FUN_00401000(puVar10,&local_64);
      local_54 = FUN_0042f2f0(param_1);
      if ((short)local_54 == 5000) {
        sVar5 = FUN_0042f750(param_1);
        if (sVar5 == 0xf0) {
          sVar5 = FUN_0042e840(param_1);
          return sVar5;
        }
        if (sVar5 != 4) goto LAB_0042b1aa;
      }
      local_50 = FUN_0042f2f0(puVar1);
      if ((short)local_50 == 5000) {
        sVar5 = FUN_0042f750(puVar1);
        if (sVar5 == 0xf0) {
          *param_1 = *puVar1;
          param_1[1] = param_1[4];
          param_1[2] = param_1[5];
          sVar5 = FUN_0042e840(param_1);
          return sVar5;
        }
        if (sVar5 != 4) {
          FUN_0042f540(8,param_1);
          *puVar1 = local_44;
          param_1[4] = local_40;
          param_1[5] = local_3c;
          return 8;
        }
      }
      local_48 = FUN_0042f2f0(param_2);
      if ((short)local_48 == 5000) {
        sVar5 = FUN_0042f750(param_2);
        if (sVar5 == 0xf0) {
          *param_1 = *param_2;
          param_1[1] = param_2[1];
          param_1[2] = param_2[2];
          sVar5 = FUN_0042e840(param_1);
          return sVar5;
        }
        if (sVar5 != 4) {
          FUN_0042f540(8,param_1);
          *puVar1 = local_44;
          param_1[4] = local_40;
          param_1[5] = local_3c;
          return 8;
        }
      }
      iVar9 = FUN_0042f2f0(puVar10);
      local_a8 = iVar9;
      if ((short)iVar9 == 5000) {
        sVar5 = FUN_0042f750(puVar10);
        if (sVar5 == 0xf0) goto LAB_0042b17e;
        if (sVar5 != 4) {
LAB_0042b1aa:
          FUN_0042f540(8,param_1);
          *puVar1 = local_44;
          param_1[4] = local_40;
          param_1[5] = local_3c;
          return 8;
        }
      }
      if ((short)iVar9 <= (short)local_48) {
        iVar9 = local_48;
      }
      iVar11 = -local_54;
      FUN_0042c5f0(&local_d8,iVar11);
      local_2c = -local_50;
      FUN_0042c5f0(&local_c8,local_2c);
      local_30 = -local_48;
      FUN_0042c5f0(&local_74,local_30);
      local_34 = -local_a8;
      FUN_0042c5f0(&local_64,local_34);
      local_a4 = local_74;
      local_9c = local_6c;
      local_a0 = local_70;
      local_98 = local_68;
      local_b4 = local_60;
      local_90 = local_60;
      local_b8 = local_64;
      local_b0 = local_5c;
      local_94 = local_64;
      local_ac = local_58;
      local_8c = local_5c;
      local_88 = local_58;
      FUN_0042c5b0(&local_a4);
      local_4c = local_48 - iVar9;
      FUN_0042c5f0(&local_a4,local_4c * 2);
      FUN_0042c5b0(&local_b8);
      local_38 = local_a8 - iVar9;
      FUN_0042c5f0(&local_b8,local_38 * 2);
      FUN_0042c330(&local_a4,&local_b8);
      FUN_0042c480(&local_64,&local_c8);
      local_a8 = local_a8 + iVar9 * -2;
      FUN_0042c5f0(&local_64,local_a8 + local_50);
      FUN_0042c480(&local_94,&local_d8);
      FUN_0042c5f0(&local_94,local_a8 + local_54);
      FUN_0042c480(&local_d8,&local_74);
      local_a8 = local_48 + iVar9 * -2;
      FUN_0042c5f0(&local_d8,local_a8 + local_54);
      FUN_0042c480(&local_c8,&local_74);
      FUN_0042c5f0(&local_c8,local_a8 + local_50);
      FUN_0042c330(&local_d8,&local_64);
      FUN_0042c410(&local_c8,&local_94);
      if ((char)local_d8 == '\0') {
        local_b4 = local_c4;
        local_b8 = local_c8;
        local_b0 = local_c0;
        local_ac = local_bc;
        FUN_00401000(param_1,&local_d8);
        FUN_00401000(param_2,&local_74);
        FUN_00401000(puVar1,&local_c8);
        FUN_00401000(param_2 + 3,&local_64);
        FUN_0042c5f0(&local_d8,iVar11);
        FUN_0042c5f0(&local_c8,local_2c);
        FUN_0042c5f0(&local_74,local_30);
        FUN_0042c5f0(&local_64,local_34);
        FUN_0042c480(&local_64,&local_c8);
        FUN_0042c5f0(&local_64,local_38 + local_50);
        FUN_0042c480(&local_d8,&local_74);
        FUN_0042c5f0(&local_d8,local_4c + local_54);
        FUN_0042c330(&local_d8,&local_64);
        FUN_0042c5f0(&local_d8,-iVar9);
        local_c8 = local_b8;
        local_c4 = local_b4;
        local_c0 = local_b0;
        local_bc = local_ac;
      }
      if ((char)local_c8 == '\0') {
        local_b4 = local_d4;
        local_b8 = local_d8;
        local_b0 = local_d0;
        local_ac = local_cc;
        FUN_00401000(param_1,&local_d8);
        FUN_00401000(param_2,&local_74);
        FUN_00401000(puVar1,&local_c8);
        FUN_00401000(param_2 + 3,&local_64);
        FUN_0042c5f0(&local_d8,iVar11);
        FUN_0042c5f0(&local_c8,local_2c);
        FUN_0042c5f0(&local_74,local_30);
        FUN_0042c5f0(&local_64,local_34);
        local_90 = local_60;
        local_8c = local_5c;
        local_94 = local_64;
        local_88 = local_58;
        FUN_0042c480(&local_94,&local_d8);
        FUN_0042c5f0(&local_94,local_38 + local_54);
        FUN_0042c480(&local_c8,&local_74);
        FUN_0042c5f0(&local_c8,local_4c + local_50);
        FUN_0042c410(&local_c8,&local_94);
        FUN_0042c5f0(&local_c8,-iVar9);
        local_d8 = local_b8;
        local_d4 = local_b4;
        local_d0 = local_b0;
        local_cc = local_ac;
      }
      FUN_0042c4f0(&local_d8,&local_a4);
      FUN_0042c4f0(&local_c8,&local_a4);
      sVar5 = FUN_004011b0(&local_d8);
      sVar6 = FUN_004011b0(&local_c8);
      if (sVar5 == 4) {
        if (sVar6 != 4) {
LAB_0042b7e7:
          sVar5 = FUN_0042e840(param_1);
          return sVar5;
        }
        FUN_004016b0(&local_d8);
        FUN_004016b0(&local_c8);
        FUN_00401040(&local_d8,param_1);
      }
      else {
        FUN_00401000(param_1,&local_d8);
        FUN_00401000(param_2,&local_74);
        FUN_00401000(puVar1,&local_c8);
        FUN_00401000(param_2 + 3,&local_64);
        puVar10 = param_2;
        puVar12 = local_18;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        FUN_0042d7e0(local_18);
        FUN_0042d7e0(local_c);
        uVar7 = FUN_0042cf20(local_18,local_c);
        if (uVar7 == 0xf0) {
          *param_1 = *param_2;
          param_1[1] = param_2[1];
          param_1[2] = param_2[2];
          goto LAB_0042b7e7;
        }
        if ((uVar7 & 5) == 0) {
          local_a0 = local_70;
          local_9c = local_6c;
          local_a4 = local_74;
          local_98 = local_68;
          FUN_0042c4f0(&local_a4,&local_64);
          local_b4 = local_c4;
          local_b0 = local_c0;
          local_b8 = local_c8;
          local_ac = local_bc;
          FUN_0042c4f0(&local_b8,&local_64);
          local_94 = local_d8;
          local_90 = local_d4;
          local_8c = local_d0;
          local_88 = local_cc;
          puVar10 = &local_64;
        }
        else {
          local_a0 = local_60;
          local_9c = local_5c;
          local_a4 = local_64;
          local_98 = local_58;
          FUN_0042c4f0(&local_a4,&local_74);
          local_b4 = local_d4;
          local_b0 = local_d0;
          local_b8 = local_d8;
          local_ac = local_cc;
          FUN_0042c4f0(&local_b8,&local_74);
          local_94 = local_c8;
          local_90 = local_c4;
          local_8c = local_c0;
          local_88 = local_bc;
          puVar10 = &local_74;
        }
        FUN_0042c4f0(&local_94,puVar10);
        FUN_0042f7c0(1,local_28);
        local_80 = local_a0;
        local_84 = local_a4;
        local_7c = local_9c;
        local_78 = local_98;
        FUN_0042c5b0(&local_84);
        FUN_0042c330(local_28,&local_84);
        local_80 = local_a0;
        local_7c = local_9c;
        local_84 = local_a4;
        local_78 = local_98;
        FUN_0042c480(&local_84,&local_94);
        FUN_0042c4f0(&local_84,local_28);
        local_d8 = local_84;
        local_d0 = local_7c;
        local_cc = local_78;
        local_d4 = local_80;
        local_80 = local_b4;
        local_7c = local_b0;
        local_84 = local_b8;
        local_78 = local_ac;
        FUN_0042c4f0(&local_84,local_28);
        sVar5 = FUN_0042c330(&local_d8,&local_84);
        if (sVar5 != 0) {
          FUN_00401040(&local_d8,param_1);
          FUN_00401040(&local_c8,puVar1);
          return sVar5;
        }
        local_80 = local_a0;
        local_7c = local_9c;
        local_84 = local_a4;
        local_78 = local_98;
        FUN_0042c480(&local_84,&local_b8);
        FUN_0042c4f0(&local_84,local_28);
        local_c4 = local_90;
        local_c0 = local_8c;
        local_c8 = local_94;
        local_bc = local_88;
        FUN_0042c4f0(&local_c8,local_28);
        sVar5 = FUN_0042c410(&local_c8,&local_84);
        if (sVar5 != 0) {
          FUN_00401040(&local_c8,param_1);
          return sVar5;
        }
        if ((uVar7 & 5) == 0) {
          FUN_004015e0(&local_bc);
        }
        FUN_004016b0(&local_d8);
        FUN_004016b0(&local_c8);
        FUN_00401040(&local_d8,param_1);
      }
      FUN_00401040(&local_c8,puVar1);
      return 0;
    }
  }
LAB_0042b17e:
  *param_1 = *puVar10;
  param_1[1] = param_2[4];
  param_1[2] = param_2[5];
LAB_0042b190:
  sVar5 = FUN_0042e840(param_1);
  return sVar5;
}


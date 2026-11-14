// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d5510
// entry: 004d5510  size: 3005


int FUN_004d5510(int param_1,int param_2,int *param_3,int param_4,undefined4 *param_5,
                undefined4 *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
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
  undefined4 local_a8;
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
  undefined4 local_54;
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  char local_38;
  char local_37;
  undefined2 local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  thunk_FUN_0040add0();
  FUN_0052f840();
  local_5c = *param_5;
  local_58 = param_5[1];
  local_54 = param_5[2];
  if ((*(uint *)(*param_3 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc)) & 0x4000) != 0) {
    FUN_004d5130(&local_5c,&local_e4,param_2 + 0x800,0);
    FUN_004d4da0(&local_5c,local_e4,param_2 + 0x800,0);
  }
  FUN_00519cc0(param_1,param_2,param_3,param_4,local_44);
  uVar2 = FUN_004e57c0(&local_e0,local_50);
  FUN_004e6d90(param_2 + 0x824,uVar2);
  local_e4 = 0;
  uVar2 = FUN_004e5070(0,&local_d4,&local_e0);
  FUN_004e6cc0(local_50,uVar2);
  FUN_004e7910(&local_e0,&local_e0);
  FUN_004e69c0(&local_5c,&local_e0,&local_d4);
  FUN_004d4d50(&local_d4,param_2 + 0x824);
  iVar3 = FUN_0050f060(&local_d4,&local_98,param_2,*param_3,param_3[1]);
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_004d5664:
  if (param_4 == 0x7545) {
    local_e4 = local_e4 + 1;
  }
  else {
    local_e4 = local_e4 + -1;
  }
  uVar2 = FUN_004e5070(local_e4,&local_bc,&local_e0);
  FUN_004e6cc0(local_50,uVar2);
  FUN_004e7910(&local_e0,&local_e0);
  FUN_004e69c0(&local_5c,&local_e0,&local_bc);
  FUN_004d4d50(&local_bc,param_2 + 0x824);
  iVar3 = FUN_0050f060(&local_bc,&local_80,param_2,*param_3,param_3[1]);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (param_1 == 0x7621) {
    iVar3 = FUN_004e7290(&local_80,&local_98);
  }
  else {
    iVar3 = FUN_004e7250(&local_80,&local_98);
  }
  iVar4 = FUN_004e71d0(&local_80,&local_98);
  if (iVar4 == 1) {
    iVar3 = 2;
  }
  do {
    if (param_4 == 0x7545) {
      local_e4 = local_e4 + 1;
    }
    else {
      local_e4 = local_e4 + -1;
    }
    uVar2 = FUN_004e5070(local_e4,&local_a4,&local_e0);
    FUN_004e6cc0(local_50,uVar2);
    FUN_004e7910(&local_e0,&local_e0);
    FUN_004e69c0(&local_5c,&local_e0,&local_a4);
    FUN_004d4d50(&local_a4,param_2 + 0x824);
    if (param_4 == 0x7545) {
      bVar1 = *(byte *)(param_2 + 0x8e2);
joined_r0x004d584f:
      if ((bVar1 & 1) == 0) goto LAB_004d57d4;
      iVar4 = FUN_004e7290(&local_a4,local_44);
      if (iVar4 != 0) {
        *param_5 = local_bc;
        param_5[1] = local_b8;
        param_5[2] = local_b4;
        return 0x15;
      }
    }
    else {
      if (param_4 == 0x7544) {
        bVar1 = *(byte *)(param_2 + 0x8e2);
        goto joined_r0x004d584f;
      }
LAB_004d57d4:
      iVar4 = FUN_004e7250(&local_a4,local_44);
      if (iVar4 != 0) {
        *param_5 = local_bc;
        param_5[1] = local_b8;
        param_5[2] = local_b4;
        return 0x15;
      }
    }
    iVar4 = FUN_0050f060(&local_a4,&local_68,param_2,*param_3,param_3[1]);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (iVar3 < 1) {
      if (param_1 == 0x7621) {
        iVar3 = FUN_004e7290(&local_68,&local_80);
      }
      else {
        iVar3 = FUN_004e7250(&local_68,&local_80);
      }
      iVar4 = FUN_004e71d0(&local_68,&local_80);
      if (iVar4 == 1) {
        iVar3 = 2;
      }
    }
    else {
      if (param_1 == 0x7621) {
        iVar4 = FUN_004e7250(&local_68,&local_80);
      }
      else {
        iVar4 = FUN_004e7290(&local_68,&local_80);
      }
      iVar5 = FUN_004e71d0(&local_68,&local_80);
      if ((iVar5 == 1) || (0 < iVar4)) break;
    }
    local_98 = local_80;
    local_94 = local_7c;
    local_90 = local_78;
    local_80 = local_68;
    local_7c = local_64;
    local_78 = local_60;
    local_d4 = local_bc;
    local_d0 = local_b8;
    local_cc = local_b4;
    local_bc = local_a4;
    local_b8 = local_a0;
    local_b4 = local_9c;
  } while( true );
  FUN_004e69c0(&local_d4,&local_bc,&local_c8);
  uVar2 = FUN_004e57c0(&local_e0,&local_c8);
  FUN_004e6d90(&local_c8,uVar2);
  iVar3 = FUN_0050f060(&local_c8,&local_8c,param_2,*param_3,param_3[1]);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = FUN_004e7210(&local_8c,&local_98);
  if (iVar3 == 1) {
    FUN_004e69c0(&local_bc,&local_a4,&local_b0);
    uVar2 = FUN_004e57c0(&local_e0,&local_b0);
    FUN_004e6d90(&local_b0,uVar2);
    iVar3 = FUN_0050f060(&local_b0,&local_74,param_2,*param_3,param_3[1]);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FUN_004e7210(&local_74,&local_68);
    if (iVar3 != 1) goto LAB_004d5f09;
    if (param_4 != 0x7545) {
      if ((param_4 != 0x7544) || (iVar3 = FUN_004e72d0(&local_d4,param_6), iVar3 != 0))
      goto LAB_004d5aa4;
      goto LAB_004d5f1d;
    }
    iVar3 = FUN_004e7310(&local_d4,param_6);
    if (iVar3 != 0) {
LAB_004d5aa4:
      *param_5 = local_bc;
      iVar3 = 0;
      param_5[1] = local_b8;
      param_5[2] = local_b4;
      do {
        if (param_1 == 0x7621) {
          iVar4 = FUN_004e7290(&local_74,&local_80);
        }
        else {
          iVar4 = FUN_004e7250(&local_74,&local_80);
        }
        if (iVar4 == 1) {
          local_98 = local_80;
          local_94 = local_7c;
          local_90 = local_78;
          local_80 = local_74;
          local_7c = local_70;
          local_78 = local_6c;
          local_d4 = local_bc;
          local_d0 = local_b8;
          local_cc = local_b4;
          local_bc = local_b0;
          local_b8 = local_ac;
          local_b4 = local_a8;
        }
        else {
          if (param_1 == 0x7621) {
            iVar4 = FUN_004e7290(&local_8c,&local_80);
          }
          else {
            iVar4 = FUN_004e7250(&local_8c,&local_80);
          }
          if (iVar4 == 1) {
            local_68 = local_80;
            local_64 = local_7c;
            local_60 = local_78;
            local_80 = local_8c;
            local_7c = local_88;
            local_78 = local_84;
            local_a4 = local_bc;
            local_a0 = local_b8;
            local_9c = local_b4;
            local_bc = local_c8;
            local_b8 = local_c4;
            local_b4 = local_c0;
          }
          else {
            local_98 = local_8c;
            local_94 = local_88;
            local_90 = local_84;
            local_68 = local_74;
            local_64 = local_70;
            local_60 = local_6c;
            local_d4 = local_c8;
            local_d0 = local_c4;
            local_cc = local_c0;
            local_a4 = local_b0;
            local_a0 = local_ac;
            local_9c = local_a8;
          }
        }
        FUN_004e69c0(&local_d4,&local_bc,&local_c8);
        uVar2 = FUN_004e57c0(&local_e0,&local_c8);
        FUN_004e6d90(&local_c8,uVar2);
        iVar4 = FUN_0050f060(&local_c8,&local_8c,param_2,*param_3,param_3[1]);
        if (iVar4 != 0) {
          return iVar4;
        }
        if (((byte)local_8c & 0xf0) == 0xf0) goto LAB_004d5f09;
        FUN_004e69c0(&local_bc,&local_a4,&local_b0);
        uVar2 = FUN_004e57c0(&local_e0,&local_b0);
        FUN_004e6d90(&local_b0,uVar2);
        iVar4 = FUN_0050f060(&local_b0,&local_74,param_2,*param_3,param_3[1]);
        if (iVar4 != 0) {
          return iVar4;
        }
        if (((byte)local_74 & 0xf0) == 0xf0) goto LAB_004d5f09;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
      local_e0 = DAT_005c09f0;
      local_dc = DAT_005c09f4;
      local_d8 = DAT_005c09f8;
      local_14 = *(undefined2 *)(*param_3 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc));
      local_10 = &local_e0;
      local_c = &local_98;
      uVar2 = FUN_004e7620(&local_bc,&local_d4,&local_e0);
      iVar3 = FUN_004e7250(uVar2);
      if (iVar3 == 1) {
        FUN_004e5780(&local_e0);
        iVar3 = FUN_0050f060(&local_e0,&local_98,param_2,*param_3,param_3[1]);
        if (iVar3 != 0) {
          return iVar3;
        }
        if (((byte)local_98 & 0xf0) == 0xf0) goto LAB_004d5f09;
        iVar3 = FUN_004d7eb0(&local_38,param_2,*param_3,param_3[1]);
        if (iVar3 != 0) {
          return iVar3;
        }
        if ((local_38 == '\0') && (local_37 == '\0')) {
          *param_6 = local_e0;
          param_6[1] = local_dc;
          param_6[2] = local_d8;
          return 0;
        }
      }
      iVar3 = FUN_004d7e00(&local_bc,&local_e0,6);
      if (iVar3 == 0) {
        iVar3 = FUN_0050f060(&local_e0,&local_98,param_2,*param_3,param_3[1]);
        if (iVar3 != 0) {
          return iVar3;
        }
        if (((byte)local_98 & 0xf0) == 0xf0) goto LAB_004d5f09;
        iVar3 = FUN_004d7eb0(&local_38,param_2,*param_3,param_3[1]);
        if (iVar3 != 0) {
          return iVar3;
        }
        if ((local_38 == '\0') && (local_37 == '\0')) {
          *param_6 = local_e0;
          param_6[1] = local_dc;
          param_6[2] = local_d8;
          return 0;
        }
      }
      iVar3 = FUN_004d7e00(&local_bc,&local_e0,0xb);
      if (iVar3 != 0) {
LAB_004d60ac:
        *param_6 = local_bc;
        param_6[1] = local_b8;
        param_6[2] = local_b4;
        return 0;
      }
      iVar3 = FUN_0050f060(&local_e0,&local_98,param_2,*param_3,param_3[1]);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (((byte)local_98 & 0xf0) != 0xf0) {
        iVar3 = FUN_004d7eb0(&local_38,param_2,*param_3,param_3[1]);
        if (iVar3 != 0) {
          return iVar3;
        }
        if ((local_38 == '\0') && (local_37 == '\0')) {
          *param_6 = local_e0;
          param_6[1] = local_dc;
          param_6[2] = local_d8;
        }
        goto LAB_004d60ac;
      }
      goto LAB_004d5f09;
    }
  }
  else {
LAB_004d5f09:
    if (param_4 != 0x7545) {
LAB_004d5f1d:
      local_e4 = local_e4 + 1;
      goto LAB_004d5f22;
    }
  }
  local_e4 = local_e4 + -1;
LAB_004d5f22:
  uVar2 = FUN_004e5070(local_e4,&local_d4,&local_e0);
  FUN_004e6cc0(local_50,uVar2);
  FUN_004e7910(&local_e0,&local_e0);
  FUN_004e69c0(&local_5c,&local_e0,&local_d4);
  FUN_004d4d50(&local_d4,param_2 + 0x824);
  iVar3 = FUN_0050f060(&local_d4,&local_98,param_2,*param_3,param_3[1]);
  if (iVar3 != 0) {
    return iVar3;
  }
  goto LAB_004d5664;
}


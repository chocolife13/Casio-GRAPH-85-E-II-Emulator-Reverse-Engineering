// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d70f0
// entry: 004d70f0  size: 2718


int FUN_004d70f0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
                undefined4 *param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined4 local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [3];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  byte *local_28;
  undefined4 *local_24;
  byte *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_18 = DAT_005c0a00;
  local_90 = 1;
  local_58 = 0;
  local_54 = 0;
  local_14 = DAT_005c0a04;
  local_10 = DAT_005c0a08;
  if (param_7 == 0x7626) {
    local_8c = *param_6;
    local_88 = param_6[1];
    local_84 = param_6[2];
  }
  if ((*(uint *)(*param_2 * 0x20 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x100) == 0) {
    FUN_004e7620(param_1 + 0x884,&local_9c);
  }
  else {
    local_9c = *(undefined4 *)(param_1 + 0x824);
    local_98 = *(undefined4 *)(param_1 + 0x828);
    local_94 = *(undefined4 *)(param_1 + 0x82c);
  }
  FUN_004d7e30(&local_9c,local_c);
LAB_004d71cd:
  local_a8 = *(undefined4 *)param_5;
  iVar2 = *param_2;
  local_a4 = *(undefined4 *)(param_5 + 4);
  local_a0 = *(undefined4 *)(param_5 + 8);
  if ((*(uint *)(iVar2 * 0x20 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x100) == 0) {
    iVar2 = FUN_0050ebc0(&local_a8,local_80,param_1,iVar2,param_2[1]);
    if (iVar2 != 0) {
      return iVar2;
    }
    local_20 = (byte *)&local_a8;
    local_1c = local_80;
    iVar2 = FUN_004d6f90(&local_50,param_1,*param_2,param_2[1]);
    if (iVar2 != 0) {
      return iVar2;
    }
    local_1c = local_c0;
    local_20 = param_5;
    local_68 = local_44;
    local_64 = local_40;
    local_60 = local_3c;
LAB_004d7387:
    if (param_7 != 0x7620) goto LAB_004d738f;
  }
  else {
    iVar2 = FUN_0050f060(&local_a8,local_80,param_1,iVar2,param_2[1]);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_7 != 0x7624) {
      local_2c = *(undefined2 *)(*param_2 * 0x20 + 0x18 + *(int *)(param_1 + 0x8dc));
      local_28 = (byte *)&local_a8;
      local_24 = local_80;
      iVar2 = FUN_004d7eb0(&local_50,param_1,*param_2,param_2[1]);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_24 = local_c0;
      local_28 = param_5;
      local_68 = local_50;
      local_64 = local_4c;
      local_60 = local_48;
      goto LAB_004d7387;
    }
    iVar2 = FUN_0050f060(&local_a8,&local_8c,param_1,param_2[2],param_2[3]);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_004d6d80(&local_68,&local_a8,param_1,param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
LAB_004d738f:
    FUN_004e6b40(local_80,&local_8c,local_80);
  }
  if (((char)local_80[0] != '\0') || (iVar2 = local_90, (char)((uint)local_80[0] >> 8) != '\0')) {
    local_5c = 1;
    do {
      iVar2 = local_90;
      if (100 < local_5c) break;
      uVar3 = FUN_004e6d90(local_80,&local_68,&local_b4,param_5);
      FUN_004e6b40(&local_a8,uVar3);
      if ((*(byte *)(*param_2 * 0x20 + 0x19 + *(int *)(param_1 + 0x8dc)) & 1) == 0) {
        iVar2 = FUN_0050ebc0(param_5,local_c0,param_1,*param_2,param_2[1]);
        if (iVar2 != 0) {
          return iVar2;
        }
LAB_004d7458:
        if (param_7 != 0x7620) goto LAB_004d7460;
      }
      else {
        iVar2 = FUN_0050f060();
        if (iVar2 != 0) {
          return iVar2;
        }
        if (param_7 != 0x7624) goto LAB_004d7458;
        iVar2 = FUN_0050f060(param_5,&local_8c,param_1,param_2[2],param_2[3]);
        if (iVar2 != 0) {
          return iVar2;
        }
LAB_004d7460:
        FUN_004e6b40(local_c0,&local_8c,local_c0);
      }
      if ((((byte)local_c0[0] & 0xf0) == 0xf0) && ((*param_5 & 0xf0) != 0xf0)) {
LAB_004d76f3:
        local_58 = local_58 + 1;
        if (9 < local_58) goto LAB_004d7997;
        FUN_004e57c0(&local_9c);
        iVar2 = 0;
        goto LAB_004d7714;
      }
      iVar2 = FUN_004e7250(param_5,param_3);
      if (iVar2 != 0) {
LAB_004d79f9:
        if (iVar2 == 1) {
          return 0x15;
        }
        *(undefined4 *)param_5 = local_a8;
        *(undefined4 *)(param_5 + 4) = local_a4;
        *(undefined4 *)(param_5 + 8) = local_a0;
        iVar2 = -1;
        break;
      }
      iVar2 = FUN_004e7290(param_5,param_4);
      if (iVar2 != 0) goto LAB_004d79f9;
      if (((char)local_c0[0] == '\0') && ((char)((uint)local_c0[0] >> 8) == '\0')) {
        iVar2 = 1;
        break;
      }
      FUN_004e6b40(param_5,&local_a8,&local_b4);
      if (((char)local_a8 == '\0') && ((char)((uint)local_a8 >> 8) == '\0')) {
        local_9c = DAT_005c0a10;
        local_98 = DAT_005c0a14;
        local_94 = DAT_005c0a18;
      }
      else {
        local_9c = local_a8;
        local_94 = local_a0;
        local_98 = local_a4;
      }
      uVar3 = FUN_004e6dd0(&local_b4,&local_9c,&local_b4,&local_b4);
      FUN_004e7620(uVar3);
      iVar2 = FUN_004e7250(&local_b4,&local_18);
      if (iVar2 == 1) {
        iVar2 = 2;
        break;
      }
      iVar2 = *param_2;
      if ((*(byte *)(iVar2 * 0x20 + 0x19 + *(int *)(param_1 + 0x8dc)) & 1) == 0) {
        iVar2 = FUN_004d6f90(&local_50,param_1,iVar2,param_2[1]);
        if (iVar2 != 0) {
          return iVar2;
        }
        local_74 = local_44;
        local_70 = local_40;
        local_6c = local_3c;
      }
      else if (param_7 == 0x7624) {
        iVar2 = FUN_004d6d80(&local_74,param_5,param_1,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else {
        iVar2 = FUN_004d7eb0(&local_50,param_1,iVar2,param_2[1]);
        if (iVar2 != 0) {
          return iVar2;
        }
        local_74 = local_50;
        local_70 = local_4c;
        local_6c = local_48;
      }
      iVar2 = FUN_004e4020(&local_74);
      if (iVar2 == 0x1d) goto LAB_004d76f3;
      uVar3 = FUN_004e7620(local_80,&local_9c);
      uVar3 = FUN_004e7620(local_c0,&local_b4,uVar3);
      iVar2 = FUN_004e7310(uVar3);
      if (iVar2 != 0) goto LAB_004d77f7;
      uVar3 = FUN_004e7620(param_5,&local_b4,local_c);
      iVar2 = FUN_004e7250(uVar3);
      if (iVar2 == 1) {
        iVar2 = FUN_004d7b90(param_1,param_2,param_6,param_5,param_7);
        if (iVar2 == 0) {
          iVar2 = 3;
          break;
        }
      }
      local_68 = local_74;
      local_64 = local_70;
      local_60 = local_6c;
      local_a8 = *(undefined4 *)param_5;
      local_80[0] = local_c0[0];
      local_a4 = *(undefined4 *)(param_5 + 4);
      local_a0 = *(undefined4 *)(param_5 + 8);
      local_5c = local_5c + 1;
    } while( true );
  }
  goto LAB_004d79aa;
LAB_004d7714:
  if (8 < iVar2) goto LAB_004d799e;
  FUN_004e69c0(param_5,&local_a8,&local_b4);
  FUN_004e6d90(&local_b4,&local_9c,&local_b4);
  FUN_004d7e00(&local_b4,param_5,5);
  if ((*(byte *)(*param_2 * 0x20 + 0x19 + *(int *)(param_1 + 0x8dc)) & 1) == 0) {
    iVar4 = FUN_0050ebc0(param_5,local_c0,param_1,*param_2,param_2[1]);
    if (iVar4 != 0) {
      return iVar4;
    }
LAB_004d77bf:
    if (param_7 != 0x7620) goto LAB_004d77cc;
  }
  else {
    iVar4 = FUN_0050f060();
    if (iVar4 != 0) {
      return iVar4;
    }
    if (param_7 != 0x7624) goto LAB_004d77bf;
    iVar4 = FUN_0050f060(param_5,&local_8c,param_1,param_2[2],param_2[3]);
    if (iVar4 != 0) {
      return iVar4;
    }
LAB_004d77cc:
    FUN_004e6b40(local_c0,&local_8c,local_c0);
  }
  if (((byte)local_c0[0] & 0xf0) != 0xf0) goto LAB_004d71cd;
  iVar2 = iVar2 + 1;
  goto LAB_004d7714;
LAB_004d799e:
  local_90 = -2;
  iVar2 = local_90;
  goto LAB_004d79aa;
LAB_004d77f7:
  bVar5 = (byte)local_74 & 0xf0;
  if (bVar5 != 0xf0) {
    bVar1 = (byte)local_68 & 0xf0;
    if ((((((bVar1 != 0x50) && (bVar1 != 0x60)) || (bVar5 == 0x50)) || (bVar5 == 0x60)) &&
        (((bVar1 == 0x50 || (bVar1 == 0x60)) || ((bVar5 != 0x50 && (bVar5 != 0x60)))))) &&
       (local_54 = local_54 + 1, local_54 < 0x33)) {
      iVar2 = 0;
      do {
        if (0x1d < iVar2) goto LAB_004d799e;
        local_9c = DAT_005c0a30;
        local_98 = DAT_005c0a34;
        local_94 = DAT_005c0a38;
        FUN_004e6b40(param_5,&local_a8,&local_b4);
        FUN_004e6d90(&local_b4,&local_9c,&local_b4);
        FUN_004e69c0(&local_a8,&local_b4,param_5);
        iVar4 = *param_2;
        if ((*(byte *)(iVar4 * 0x20 + 0x19 + *(int *)(param_1 + 0x8dc)) & 1) == 0) {
          iVar4 = FUN_0050ebc0(param_5,local_c0,param_1,iVar4,param_2[1]);
          if (iVar4 != 0) {
            return iVar4;
          }
LAB_004d7928:
          if (param_7 != 0x7620) goto LAB_004d7935;
        }
        else {
          iVar4 = FUN_0050f060(param_5,local_c0,param_1,iVar4,param_2[1]);
          if (iVar4 != 0) {
            return iVar4;
          }
          if (param_7 != 0x7624) goto LAB_004d7928;
          iVar4 = FUN_0050f060(param_5,&local_8c,param_1,param_2[2],param_2[3]);
          if (iVar4 != 0) {
            return iVar4;
          }
LAB_004d7935:
          FUN_004e6b40(local_c0,&local_8c,local_c0);
        }
        uVar3 = FUN_004e7620(local_80,&local_9c);
        uVar3 = FUN_004e7620(local_c0,&local_b4,uVar3);
        iVar4 = FUN_004e7250(uVar3);
        if (iVar4 == 1) goto LAB_004d71cd;
        iVar2 = iVar2 + 1;
      } while( true );
    }
  }
LAB_004d7997:
  iVar2 = -2;
LAB_004d79aa:
  uVar3 = FUN_004e7620(param_5,&local_9c,local_c);
  iVar4 = FUN_004e7250(uVar3);
  if (iVar4 == 1) {
    iVar4 = FUN_004d7b90(param_1,param_2,param_6,param_5,param_7);
    if (iVar4 == 0) {
      iVar2 = iVar2 + 3;
      goto LAB_004d7a2a;
    }
    if (iVar4 != 0x15) {
      if (0 < iVar4) {
        return iVar4;
      }
      goto LAB_004d7a2a;
    }
  }
  else {
LAB_004d7a2a:
    iVar4 = FUN_004d7cb0(param_1,param_2,param_6,param_5,&local_b4,param_7);
    if (iVar4 == 0) {
      iVar2 = iVar2 + 6;
      *(undefined4 *)param_5 = local_b4;
      *(undefined4 *)(param_5 + 4) = local_b0;
      *(undefined4 *)(param_5 + 8) = local_ac;
    }
    else {
      if (iVar4 == 0x15) goto LAB_004d7a7e;
      if (0 < iVar4) {
        return iVar4;
      }
    }
    if (0 < iVar2) goto LAB_004d7b49;
  }
LAB_004d7a7e:
  uVar3 = FUN_004e5840(&local_b4,&local_b4);
  FUN_004e69c0(param_5,uVar3);
  FUN_004e7680(&local_b4,param_5);
  if ((*(uint *)(*param_2 * 0x20 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x100) == 0) {
    iVar2 = FUN_0050ebc0(param_5,local_c0,param_1,*param_2,param_2[1]);
    if (iVar2 != 0) {
      return iVar2;
    }
LAB_004d7b19:
    if (param_7 != 0x7620) goto LAB_004d7b26;
  }
  else {
    iVar2 = FUN_0050f060();
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_7 != 0x7624) goto LAB_004d7b19;
    iVar2 = FUN_0050f060(param_5,&local_8c,param_1,param_2[2],param_2[3]);
    if (iVar2 != 0) {
      return iVar2;
    }
LAB_004d7b26:
    FUN_004e6b40(local_c0,&local_8c,local_c0);
  }
  if ((char)(undefined2)local_c0[0] != '\0') {
    return 0x15;
  }
  if ((char)((ushort)(undefined2)local_c0[0] >> 8) != '\0') {
    return 0x15;
  }
LAB_004d7b49:
  iVar2 = FUN_004e7250(param_5,param_3);
  if ((iVar2 == 0) && (iVar2 = FUN_004e7290(param_5,param_4), iVar2 == 0)) {
    return 0;
  }
  return 0x15;
}


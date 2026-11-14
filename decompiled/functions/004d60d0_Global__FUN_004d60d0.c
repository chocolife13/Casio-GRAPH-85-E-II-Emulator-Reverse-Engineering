// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d60d0
// entry: 004d60d0  size: 2498


int FUN_004d60d0(int param_1,int *param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                undefined4 *param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_64 = 0;
  thunk_FUN_0040add0();
  FUN_0052f840();
  bVar5 = false;
  local_30 = *param_5;
  local_2c = param_5[1];
  local_28 = param_5[2];
  FUN_00519cc0(param_7,param_1,param_2,param_3,&local_90);
  if (param_7 == 0x7624) {
    if ((*(byte *)(param_1 + 0x8e2) & 1) == 0) {
      if (param_3 == 0x7545) {
        iVar2 = FUN_004e7250(&local_90,param_5);
      }
      else {
        if (param_3 != 0x7544) goto LAB_004d61fb;
        iVar2 = FUN_004e7290(&local_90,param_5);
      }
    }
    else if (param_3 == 0x7545) {
      iVar2 = FUN_004e7290(&local_90,param_5);
    }
    else {
      if (param_3 != 0x7544) goto LAB_004d61fb;
      iVar2 = FUN_004e7250(&local_90,param_5);
    }
    if (iVar2 != 0) {
      return 0x15;
    }
  }
  else if (param_7 == 0x7626) {
    local_3c = *param_4;
    local_38 = param_4[1];
    local_34 = param_4[2];
  }
LAB_004d61fb:
  if ((*(uint *)(*param_2 * 0x20 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x100) == 0) {
    local_54 = *(undefined4 *)(param_1 + 0x884);
    local_50 = *(undefined4 *)(param_1 + 0x888);
    local_4c = *(undefined4 *)(param_1 + 0x88c);
    if ((*(uint *)(*param_2 * 0x20 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x4000) != 0) {
      FUN_004e7620(&local_54,&local_54);
    }
    uVar3 = FUN_004e5780(&local_60);
    iVar2 = FUN_004e7250(&local_54,uVar3);
    bVar5 = iVar2 != 0;
    FUN_004e7620(param_1 + 0x884,&local_60);
  }
  else {
    local_54 = *(undefined4 *)(param_1 + 0x824);
    local_50 = *(undefined4 *)(param_1 + 0x828);
    local_60 = *(undefined4 *)(param_1 + 0x860);
    local_4c = *(undefined4 *)(param_1 + 0x82c);
    local_5c = *(undefined4 *)(param_1 + 0x864);
    local_58 = *(undefined4 *)(param_1 + 0x868);
    if ((*(byte *)(param_1 + 0x8e2) & 1) != 0) {
      bVar5 = true;
    }
  }
  uVar3 = FUN_004e57c0(local_18,local_18);
  FUN_004e6d90(&local_60,uVar3);
  FUN_004e7730(local_18,local_c);
  local_78 = (uint)(param_3 != 0x7545);
  uVar3 = FUN_004e5070(local_78,param_5,&local_60);
  FUN_004e6cc0(&local_54,uVar3);
  FUN_004e7910(&local_60,&local_60);
  FUN_004e69c0(&local_30,&local_60,param_5);
  FUN_004d4d50(param_5,&local_54);
  iVar2 = *param_2;
  if ((*(byte *)(iVar2 * 0x20 + 0x19 + *(int *)(param_1 + 0x8dc)) & 1) == 0) {
    iVar2 = FUN_0050ebc0(param_5,&local_74,param_1,iVar2,param_2[1]);
    if (iVar2 != 0) {
      return iVar2;
    }
LAB_004d63db:
    if (param_7 != 0x7620) goto LAB_004d63e8;
  }
  else {
    iVar2 = FUN_0050f060(param_5,&local_74,param_1,iVar2,param_2[1]);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_7 != 0x7624) goto LAB_004d63db;
    iVar2 = FUN_0050f060(param_5,&local_3c,param_1,param_2[2],param_2[3]);
    if (iVar2 != 0) {
      return iVar2;
    }
LAB_004d63e8:
    FUN_004e6b40(&local_74,&local_3c,&local_74);
  }
  if ((((char)local_74 != '\0') || ((char)((uint)local_74 >> 8) != '\0')) ||
     (iVar2 = FUN_004e7210(param_5,param_6), iVar2 == 0)) goto LAB_004d647a;
  if (bVar5) {
    if (param_3 != 0x7544) goto LAB_004d6430;
LAB_004d6441:
    iVar2 = FUN_004e7290(param_5,param_6);
  }
  else {
    if (param_3 == 0x7545) goto LAB_004d6441;
LAB_004d6430:
    iVar2 = FUN_004e7250(param_5,param_6);
  }
  if ((iVar2 != 0) && (iVar2 = FUN_004d6aa0(param_6,param_5), iVar2 == 0)) {
    *param_6 = *param_5;
    param_6[1] = param_5[1];
    param_6[2] = param_5[2];
    return 0;
  }
LAB_004d647a:
  bVar1 = (byte)local_74 & 0xf0;
  if ((bVar1 == 0x50) || (local_68 = 0, bVar1 == 0x60)) {
    local_68 = 1;
  }
  if (bVar1 == 0xf0) {
    local_68 = -1;
  }
LAB_004d64a4:
  do {
    do {
      local_24 = local_74;
      local_20 = local_70;
      local_1c = local_6c;
      local_84 = *param_5;
      local_80 = param_5[1];
      local_7c = param_5[2];
      if (param_3 == 0x7545) {
        local_78 = local_78 + 1;
      }
      else {
        local_78 = local_78 - 1;
      }
      uVar3 = FUN_004e5070(local_78,param_5,&local_60);
      FUN_004e6cc0(&local_54,uVar3);
      FUN_004e7910(&local_60,&local_60);
      FUN_004e69c0(&local_30,&local_60,param_5);
      FUN_004d4d50(param_5,&local_54);
      if (bVar5) {
        if (param_3 != 0x7544) goto LAB_004d6552;
LAB_004d659d:
        iVar2 = FUN_004e7310(param_5,&local_90);
        if (iVar2 == 1) {
          if (local_64 != 0) {
LAB_004d6970:
            *param_5 = local_90;
            param_5[1] = local_8c;
            param_5[2] = local_88;
            return 0x15;
          }
          local_64 = 1;
          *param_5 = local_90;
          param_5[1] = local_8c;
          param_5[2] = local_88;
        }
        else {
          iVar2 = FUN_004e71d0(param_5,&local_90);
joined_r0x004d65ec:
          if (iVar2 != 0) {
            *param_5 = local_84;
            param_5[1] = local_80;
            param_5[2] = local_7c;
            return 0x15;
          }
        }
      }
      else {
        if (param_3 == 0x7545) goto LAB_004d659d;
LAB_004d6552:
        iVar2 = FUN_004e72d0(param_5,&local_90);
        if (iVar2 != 1) {
          iVar2 = FUN_004e71d0(param_5,&local_90);
          goto joined_r0x004d65ec;
        }
        if (local_64 != 0) goto LAB_004d6970;
        local_64 = 1;
        *param_5 = local_90;
        param_5[1] = local_8c;
        param_5[2] = local_88;
      }
      iVar2 = *param_2;
      if ((*(byte *)(iVar2 * 0x20 + 0x19 + *(int *)(param_1 + 0x8dc)) & 1) == 0) {
        iVar2 = FUN_0050ebc0(param_5,&local_74,param_1,iVar2,param_2[1]);
        if (iVar2 != 0) {
          return iVar2;
        }
LAB_004d6693:
        if (param_7 != 0x7620) goto LAB_004d66a0;
      }
      else {
        iVar2 = FUN_0050f060(param_5,&local_74,param_1,iVar2,param_2[1]);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (param_7 != 0x7624) goto LAB_004d6693;
        iVar2 = FUN_0050f060(param_5,&local_3c,param_1,param_2[2],param_2[3]);
        if (iVar2 != 0) {
          return iVar2;
        }
LAB_004d66a0:
        FUN_004e6b40(&local_74,&local_3c,&local_74);
      }
      if ((((char)local_74 == '\0') && ((char)((uint)local_74 >> 8) == '\0')) &&
         (iVar2 = FUN_004e7210(param_5,param_6), iVar2 != 0)) {
        if (bVar5) {
          if (param_3 == 0x7544) goto LAB_004d6725;
        }
        else if (param_3 == 0x7545) {
LAB_004d6725:
          iVar2 = FUN_004e7290(param_5,param_6);
          if ((iVar2 != 0) && (iVar2 = FUN_004d6aa0(param_6,param_5), iVar2 == 0)) {
            *param_6 = *param_5;
            param_6[1] = param_5[1];
            param_6[2] = param_5[2];
            if (param_3 != 0x7545) {
              return 0;
            }
            *param_5 = local_84;
            param_5[1] = local_80;
            param_5[2] = local_7c;
            return 0;
          }
          goto LAB_004d6708;
        }
        iVar2 = FUN_004e7250(param_5,param_6);
        if ((iVar2 != 0) && (iVar2 = FUN_004d6aa0(param_6,param_5), iVar2 == 0)) {
          *param_6 = *param_5;
          param_6[1] = param_5[1];
          param_6[2] = param_5[2];
          if (param_3 != 0x7545) {
            return 0;
          }
          *param_5 = local_84;
          param_5[1] = local_80;
          param_5[2] = local_7c;
          return 0;
        }
      }
LAB_004d6708:
      bVar1 = (byte)local_74 & 0xf0;
      if ((bVar1 == 0x50) || (bVar1 == 0x60)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
      if (bVar1 == 0xf0) {
        iVar2 = -1;
      }
      if (iVar2 != local_68) {
        uVar3 = *param_6;
        local_44 = param_6[1];
        local_40 = param_6[2];
        local_68 = iVar2;
        iVar2 = FUN_004d6b20(param_1,param_2,param_3,&local_84,param_4,param_6,param_7);
        if (iVar2 != 0x15) {
          if (bVar5) {
            if (param_3 == 0x7544) goto LAB_004d6942;
          }
          else if (param_3 == 0x7545) {
LAB_004d6942:
            iVar4 = FUN_004e7290(param_6,&local_90);
            if (iVar4 != 1) goto LAB_004d6a64;
            *param_6 = uVar3;
            param_6[1] = local_44;
            param_6[2] = local_40;
            goto LAB_004d64a4;
          }
          iVar4 = FUN_004e7250(param_6,&local_90);
          if (iVar4 != 1) {
LAB_004d6a64:
            if (param_3 == 0x7545) {
              *param_5 = local_84;
              param_5[1] = local_80;
              param_5[2] = local_7c;
            }
            return iVar2;
          }
          *param_6 = uVar3;
          param_6[1] = local_44;
          param_6[2] = local_40;
        }
        goto LAB_004d64a4;
      }
      iVar2 = FUN_004e72d0(&local_74,local_18);
    } while (((iVar2 != 1) || (iVar2 = FUN_004e7310(&local_74,local_c), iVar2 != 1)) &&
            ((iVar2 = FUN_004e72d0(&local_24,local_18), iVar2 != 1 ||
             (iVar2 = FUN_004e7310(&local_24,local_c), iVar2 != 1))));
    uVar3 = *param_6;
    local_44 = param_6[1];
    local_40 = param_6[2];
    iVar2 = FUN_004d6b20(param_1,param_2,param_3,&local_84,param_4,param_6,param_7);
  } while (iVar2 == 0x15);
  if (bVar5) {
    if (param_3 == 0x7544) goto LAB_004d6872;
  }
  else if (param_3 == 0x7545) {
LAB_004d6872:
    iVar4 = FUN_004e7290(param_6,&local_90);
    if (iVar4 != 1) goto LAB_004d6a36;
    *param_6 = uVar3;
    param_6[1] = local_44;
    param_6[2] = local_40;
    goto LAB_004d64a4;
  }
  iVar4 = FUN_004e7250(param_6,&local_90);
  if (iVar4 != 1) {
LAB_004d6a36:
    if (param_3 == 0x7545) {
      *param_5 = local_84;
      param_5[1] = local_80;
      param_5[2] = local_7c;
    }
    return iVar2;
  }
  *param_6 = uVar3;
  param_6[1] = local_44;
  param_6[2] = local_40;
  goto LAB_004d64a4;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051dbe0
// entry: 0051dbe0  size: 1478


uint FUN_0051dbe0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined1 local_80 [128];
  
  FUN_0050acb0(param_3);
  iVar1 = FUN_0051e1e0(param_2,&local_b8,&local_b4,param_3);
  iVar2 = local_b4;
  iVar3 = local_b8;
  if (iVar1 != 0) {
    return 0xfffffffa;
  }
  iVar1 = FUN_0051d6e0(&local_b0,&local_ac,&local_a8,param_3,local_b8,local_b4);
  while (iVar1 != 0) {
    if (iVar1 == -1) {
      return 0xfffffffe;
    }
    FUN_0051e8b0(param_2,&local_b8,&local_b4,0x7547,param_3);
    if ((iVar3 == local_b8) && (iVar2 == local_b4)) {
      return 0xfffffffa;
    }
    iVar1 = FUN_0051d6e0(&local_b0,&local_ac,&local_a8,param_3,local_b8,local_b4);
  }
  *param_1 = local_b8;
  param_1[1] = local_b4;
  if (param_2 == 0x7624) {
    iVar1 = 0;
    do {
      if (iVar1 == -1) {
        return 0xfffffffe;
      }
      FUN_0051e8b0(0x7624,&local_b8,&local_b4,0x7547,param_3);
      if ((iVar3 == local_b8) && (iVar2 == local_b4)) {
        return 0xfffffffa;
      }
      iVar1 = FUN_0051d6e0(&local_9c,&local_a0,&local_a4,param_3,local_b8,local_b4);
    } while (iVar1 != 0);
    param_1[2] = local_b8;
    param_1[3] = local_b4;
  }
  while( true ) {
    FUN_0051e8b0(param_2,&local_b8,&local_b4,0x7547,param_3);
    if ((iVar3 == local_b8) && (iVar2 == local_b4)) {
      return 0;
    }
    iVar1 = FUN_0051d6e0(&local_9c,&local_a0,&local_a4,param_3,local_b8,local_b4);
    if (iVar1 == 0) break;
    if (iVar1 == -1) {
      return 0xfffffffe;
    }
  }
  local_b8 = *param_1;
  local_b4 = param_1[1];
  FUN_00519af0(param_2);
  if ((*(byte *)(param_3 + 0x8e0) & 0xc0) != 0) {
    FUN_00510380(param_3,local_b8);
  }
  local_94 = local_b0;
  local_90 = local_ac;
  local_8c = local_a8;
  iVar3 = 0;
  do {
    while( true ) {
      do {
        FUN_0051f7b0(local_80);
        FUN_0051f870();
        FUN_00522580(&local_94);
        iVar2 = FUN_00526620(&local_98);
        FUN_0051e2a0(*(undefined4 *)(param_3 + 0x8dc));
        FUN_00522930(&local_94);
        FUN_0051f7f0(local_80);
        iVar1 = FUN_0051c730();
        if (iVar1 != 0) {
          return 0xfffffffa;
        }
      } while (iVar2 != 0);
      if (0x754e < local_98) break;
      if (local_98 == 0x754e) {
        iVar2 = FUN_005022f0(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                      *(byte *)(param_3 + 0x8e0) >> 4) & 0xffffff03);
joined_r0x0051e004:
        if (iVar2 != 0) {
          return 0xfffffff2;
        }
      }
      else {
        switch(local_98) {
        case 0x7532:
          return 0xfffffffe;
        default:
switchD_0051de89_caseD_7533:
          if (local_98 != 0) {
            if (local_98 < 30000) {
              return local_98;
            }
            if (0x75f7 < local_98) {
              return local_98;
            }
          }
          break;
        case 0x7534:
          if (param_2 == 0x159) {
            if ((local_b8 != *param_1) || (local_b4 != param_1[1])) {
              param_1[2] = local_b8;
              param_1[3] = local_b4;
              return 0;
            }
          }
          else {
            if (param_2 != 0x7624) {
              *param_1 = local_b8;
              param_1[1] = local_b4;
              return 0;
            }
            *param_1 = local_b8;
            param_1[1] = local_b4;
            param_2 = 0x159;
            local_9c = local_b0;
            local_a0 = local_ac;
            local_a4 = local_a8;
          }
          do {
            if (iVar3 == -1) {
              return 0xfffffffe;
            }
            FUN_0051e8b0(0x159,&local_b8,&local_b4,0x7547,param_3);
            iVar3 = FUN_0051d6e0(&local_b0,&local_ac,&local_a8,param_3,local_b8,local_b4);
          } while (iVar3 != 0);
          if ((*(byte *)(param_3 + 0x8e0) & 0xc0) != 0) {
            FUN_00510380(param_3,local_b8);
          }
          if (local_a4 == 0) {
            FUN_00522700(local_9c,local_a0,0);
          }
          local_94 = local_b0;
          local_90 = local_ac;
          local_8c = local_a8;
          break;
        case 0x753f:
          return 0x7956;
        case 0x7542:
        case 0x7547:
          do {
            if (iVar3 == -1) {
              return 0xfffffffe;
            }
            FUN_0051e8b0(param_2,&local_b8,&local_b4,local_98,param_3);
            iVar3 = FUN_0051d6e0(&local_b0,&local_ac,&local_a8,param_3,local_b8,local_b4);
          } while (iVar3 != 0);
LAB_0051e0cc:
          if ((*(byte *)(param_3 + 0x8e0) & 0xc0) != 0) {
            FUN_00510380(param_3,local_b8);
          }
          if ((param_2 == 0x159) && (local_a4 == 0)) {
            FUN_00522700(local_9c,local_a0,0);
          }
          local_94 = local_b0;
          local_90 = local_ac;
          local_8c = local_a8;
          break;
        case 0x754d:
          return 0xffffffff;
        }
      }
    }
    if (local_98 < 0x7635) {
      if (local_98 == 0x7634) {
        FUN_0051af80(0x7634,param_3);
      }
      else {
        if (local_98 != 0x7554) {
          if (local_98 == 0x7555) {
            iVar2 = FUN_00502180();
            goto joined_r0x0051e004;
          }
          if (local_98 == 0x7557) {
            return 0xfffffff5;
          }
          goto switchD_0051de89_caseD_7533;
        }
        iVar2 = FUN_004ab6a0(s__GRAPH_005be2ac);
        if ((iVar2 != 0) && ((*(byte *)(param_3 + 0x8e0) & 0x30) == 0)) {
          return 0x16d;
        }
      }
    }
    else {
      if (local_98 == 0x7635) {
        FUN_0051af80(0x7635,param_3);
        FUN_0050acb0(param_3);
        goto LAB_0051e0cc;
      }
      if (local_98 != 0x7957) goto switchD_0051de89_caseD_7533;
    }
  } while( true );
}


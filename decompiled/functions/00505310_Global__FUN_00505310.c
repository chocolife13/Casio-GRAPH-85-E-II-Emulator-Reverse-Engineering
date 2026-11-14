// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00505310
// entry: 00505310  size: 1399


uint FUN_00505310(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_110;
  int local_10c;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  uint local_100;
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [8];
  uint local_dc;
  undefined1 local_d0 [36];
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [128];
  
  FUN_00538710();
  local_a8 = local_fc;
  local_9c = local_8c;
  local_a0 = local_98;
  local_a4 = local_f0;
  local_ac._0_3_ = (uint3)*(ushort *)(*(int *)(param_1 + 0x8dc) + 0x18);
  local_ac = CONCAT13(*(byte *)(param_1 + 0x8e1) >> 1,(uint3)local_ac) & 0x1ffffff;
  local_ac._0_3_ = CONCAT12(*(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1e),(undefined2)local_ac);
  iVar2 = FUN_00517c00();
  if ((iVar2 != 7) || (bVar1 = false, (local_ac & 0x400) == 0)) {
    bVar1 = true;
  }
  FUN_0050acb0(param_1);
  FUN_00528a20(*(undefined1 *)(param_1 + 0x8e4),&local_110,&local_10c);
  if (local_110 == 0) {
    return 0xfffffffa;
  }
  if (*(int *)(param_1 + 0x8f0) == 1) {
    *(undefined4 *)(param_1 + 0x8f0) = 2;
  }
  FUN_0050a800(param_1,1);
  uVar3 = FUN_00509f80(*(undefined4 *)(param_1 + 0x8ec),param_1);
  FUN_00505090(*(int *)(param_1 + 0x8e8) + -1 + *(int *)(param_1 + 0x8f4),local_fc,local_f0,param_1,
               uVar3);
  uVar3 = FUN_00509f80(*(undefined4 *)(param_1 + 0x8ec),param_1,
                       *(int *)(param_1 + 0x8e8) + -1 + *(int *)(param_1 + 0x8f4));
  FUN_0051f330(local_d0,param_1,uVar3);
  if (!bVar1) {
    uVar3 = FUN_00509f80(*(undefined4 *)(param_1 + 0x8ec),param_1);
    uVar4 = FUN_0050edc0(local_a0,param_1,uVar3);
    if (uVar4 != 0) goto LAB_005054ad;
  }
  uVar4 = FUN_004d5130(local_fc,local_108,param_1 + 0x800,*(undefined1 *)(param_1 + 0x8e2));
  uVar5 = FUN_004d5210(local_f0,local_104,param_1 + 0x800);
  uVar4 = uVar4 | uVar5;
LAB_005054ad:
  if ((*(byte *)(param_1 + 0x8e1) & 4) != 0) {
    FUN_0051eb90(local_d0);
  }
LAB_005054d7:
  do {
    do {
      local_dc = uVar4;
      FUN_0051f7b0(local_80);
      FUN_0051f870();
      FUN_00522500(local_e4);
      iVar2 = FUN_00526620(&local_100);
      FUN_0051e2a0(*(undefined4 *)(param_1 + 0x8dc));
      FUN_00522930(local_e4);
      FUN_0051f7f0(local_80);
      iVar6 = FUN_0051c730();
      if (iVar6 != 0) {
        return 0xfffffffa;
      }
      uVar4 = local_dc;
    } while (iVar2 != 0);
    if (local_100 < 0x754e) {
      if (local_100 != 0x754d) {
        switch(local_100) {
        case 0x7532:
        case 0x753f:
          break;
        default:
          goto switchD_00505562_caseD_7533;
        case 0x7542:
        case 0x7544:
        case 0x7545:
        case 0x7547:
          switch(local_100) {
          case 0x7542:
            iVar2 = *(int *)(param_1 + 0x8f4);
            if (iVar2 == 1) {
              if (*(int *)(param_1 + 0x8e8) != 1) {
                *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8e8) + -1;
              }
            }
            else {
LAB_00505613:
              *(int *)(param_1 + 0x8f4) = iVar2 + -1;
            }
            break;
          case 0x7544:
            if (*(int *)(param_1 + 0x8ec) == 1) {
              iVar2 = *(int *)(param_1 + 0x8f4);
              if (iVar2 != 1) {
                *(undefined4 *)(param_1 + 0x8f0) = 2;
                *(int *)(param_1 + 0x8ec) = local_10c + -1;
                goto LAB_00505613;
              }
              if (*(int *)(param_1 + 0x8e8) != 1) {
                *(undefined4 *)(param_1 + 0x8f0) = 2;
                *(int *)(param_1 + 0x8ec) = local_10c + -1;
                *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8e8) + -1;
              }
            }
            else {
              *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8ec) + -1;
            }
            break;
          case 0x7545:
            iVar2 = *(int *)(param_1 + 0x8f4);
            if (iVar2 == 4) {
              if (*(int *)(param_1 + 0x8ec) == local_10c + -1) {
                if (*(int *)(param_1 + 0x8e8) + 3 != local_110) {
                  *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8e8) + 1;
                  goto LAB_005056b6;
                }
              }
              else {
                *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8ec) + 1;
              }
            }
            else if (*(int *)(param_1 + 0x8ec) == local_10c + -1) {
              if (local_110 != iVar2) {
                *(int *)(param_1 + 0x8f4) = iVar2 + 1;
LAB_005056b6:
                *(undefined4 *)(param_1 + 0x8ec) = 1;
              }
            }
            else {
              *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8ec) + 1;
            }
            break;
          case 0x7547:
            iVar2 = *(int *)(param_1 + 0x8f4);
            iVar6 = *(int *)(param_1 + 0x8e8);
            if (local_110 != iVar6 + -1 + iVar2) {
              if (iVar2 == 4) {
                if (iVar6 + 3 != local_110) {
                  *(int *)(param_1 + 0x8e8) = iVar6 + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x8f4) = iVar2 + 1;
              }
            }
          }
          FUN_0050a800(param_1,1);
          uVar3 = FUN_00509f80(*(undefined4 *)(param_1 + 0x8ec),param_1);
          FUN_00505090(*(int *)(param_1 + 0x8e8) + -1 + *(int *)(param_1 + 0x8f4),local_fc,local_f0,
                       param_1,uVar3);
          uVar3 = FUN_00509f80(*(undefined4 *)(param_1 + 0x8ec),param_1,
                               *(int *)(param_1 + 0x8e8) + -1 + *(int *)(param_1 + 0x8f4));
          FUN_0051f330(local_d0,param_1,uVar3);
          if (bVar1) {
LAB_00505752:
            uVar4 = FUN_004d5130(local_fc,local_108,param_1 + 0x800,*(undefined1 *)(param_1 + 0x8e2)
                                );
            uVar5 = FUN_004d5210(local_f0,local_104,param_1 + 0x800);
            uVar4 = uVar4 | uVar5;
          }
          else {
            uVar3 = FUN_00509f80(*(undefined4 *)(param_1 + 0x8ec),param_1);
            uVar4 = FUN_0050edc0(local_a0,param_1,uVar3);
            if (uVar4 == 0) goto LAB_00505752;
          }
          if ((*(byte *)(param_1 + 0x8e1) & 4) != 0) {
            FUN_0051eb90(local_d0);
          }
          goto LAB_005054d7;
        }
      }
switchD_00505562_caseD_7532:
      FUN_0050a800(param_1,2);
      switch(local_100) {
      case 0x7532:
        return 0xfffffffe;
      case 0x753f:
      case 0x7557:
        return 0xfffffff5;
      case 0x754d:
        return 0xffffffff;
      }
switchD_0050580e_caseD_7533:
      iVar2 = FUN_00502180();
    }
    else {
      if (0x7557 < local_100) {
        if (local_100 != 0x7957) {
switchD_00505562_caseD_7533:
          if (local_100 != 0) {
            if (local_100 < 30000) {
              return local_100;
            }
            if (0x75f7 < local_100) {
              return local_100;
            }
          }
        }
        goto LAB_005054d7;
      }
      if (local_100 == 0x7557) goto switchD_00505562_caseD_7532;
      if (local_100 != 0x754e) {
        if (local_100 != 0x7555) goto switchD_00505562_caseD_7533;
        goto switchD_0050580e_caseD_7533;
      }
      iVar2 = FUN_005022f0(CONCAT31(0x75,*(byte *)(param_1 + 0x8e0) >> 4) & 0xffffff03);
    }
    uVar4 = local_dc;
    if (iVar2 != 0) {
      return 0xfffffff2;
    }
  } while( true );
}


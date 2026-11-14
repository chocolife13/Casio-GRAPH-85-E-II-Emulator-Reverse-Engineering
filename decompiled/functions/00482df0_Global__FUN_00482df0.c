// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482df0
// entry: 00482df0  size: 3615


int FUN_00482df0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  short *psStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined1 local_100 [4];
  undefined4 local_fc [12];
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 auStack_c0 [9];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [60];
  undefined1 auStack_c [12];
  
  iVar10 = 0;
  do {
    FUN_004e5780((int)local_fc + iVar10);
    FUN_004e5780((int)&local_cc + iVar10);
    iVar10 = iVar10 + 0xc;
  } while (iVar10 < 0x30);
  iVar10 = 0;
  *param_4 = 0;
  FUN_00414db0(local_100);
  FUN_00481c20();
  thunk_FUN_0040add0();
  FUN_00526070(0x13,1);
  iVar11 = 1;
  iStack_10c = 0;
  iStack_104 = 0;
  uStack_138 = *param_3;
  iStack_108 = 0;
  iStack_12c = 0;
  uStack_134 = param_3[1];
  uStack_130 = param_3[2];
  uStack_150 = param_3[3];
  uStack_14c = param_3[4];
  uStack_148 = param_3[5];
  uStack_15c = param_3[0xc];
  uStack_158 = param_3[0xd];
  uStack_154 = param_3[0xe];
  uStack_144 = param_3[0xf];
  uStack_140 = param_3[0x10];
  psStack_160 = (short *)(param_2 + 0x14);
  uStack_13c = param_3[0x11];
  do {
    iStack_110 = 0;
    psVar9 = psStack_160 + -3;
    if (psStack_160[-3] != 1) goto switchD_00482f2c_default;
    iVar10 = FUN_00481f20((int)psStack_160[-2],(int)psStack_160[-1],(int)*psStack_160,
                          (int)psStack_160[1]);
    if (iVar10 != 0) goto LAB_00483bd8;
    switch(psStack_160[-2]) {
    case 1:
    case 2:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      goto switchD_00482f2c_caseD_1;
    case 3:
      psStack_160[1] = 0;
      iVar10 = FUN_004805a0(iVar11,psVar9);
      if ((((iVar10 == 0) && (iVar10 = FUN_00480670(iVar11,&uStack_138), iVar10 == 0)) &&
          (iVar10 = FUN_00480650(iVar11,&uStack_150), iVar10 == 0)) &&
         (iVar10 = FUN_004806b0(iVar11,&uStack_15c), iVar10 == 0)) {
        iVar10 = FUN_00480690(iVar11,&uStack_144);
        goto joined_r0x004831e2;
      }
      goto LAB_00483bd8;
    case 4:
    case 8:
      cVar5 = FUN_00526090(0x20);
      iVar7 = iStack_12c;
      if (cVar5 == '\x01') {
        iVar2 = (int)&local_cc + iStack_12c;
        puVar1 = (undefined4 *)((int)local_fc + iStack_12c);
        iVar6 = FUN_00530e20(puVar1,iVar2);
        if (iVar6 != 0) {
          *puVar1 = *param_3;
          *(undefined4 *)((int)local_fc + iVar7 + 4) = param_3[1];
          *(undefined4 *)((int)local_fc + iVar7 + 8) = param_3[2];
          FUN_004e5070(1,iVar2);
        }
      }
      else {
        iVar10 = FUN_004825c0(psVar9,(int)local_fc + iStack_12c,(int)&local_cc + iStack_12c);
        if (iVar10 != 0) goto LAB_00483bd8;
      }
      iStack_108 = iStack_108 + 1;
      iStack_12c = iStack_12c + 0xc;
      break;
    case 5:
      iVar10 = FUN_00480310(iVar11,psVar9);
      if ((iVar10 == 0) && (iVar10 = FUN_00480620(1,iVar11,&uStack_138), iVar10 == 0)) {
        iVar10 = FUN_00480620(5,iVar11,&uStack_150);
        goto LAB_00483153;
      }
      goto LAB_00483bd8;
    case 6:
      iVar10 = FUN_004807f0(iVar11,psVar9);
      if ((iVar10 != 0) || (iVar10 = FUN_00480620(1,iVar11,&uStack_138), iVar10 != 0))
      goto LAB_00483bd8;
      iVar10 = FUN_00480620(7,iVar11,&uStack_150);
LAB_00483153:
      if (iVar10 != 0) goto LAB_00483bd8;
      iStack_110 = 1;
      break;
    case 7:
      iVar10 = FUN_00481010(iVar11,psVar9,&uStack_138,&uStack_150);
      if (iVar10 == 0) {
        FUN_004e5780(&uStack_15c);
        iVar10 = FUN_00481110(iVar11,auStack_9c,auStack_90);
        if (iVar10 == 0) {
          FUN_00482660(7,auStack_9c,auStack_9c,&uStack_144);
          iVar10 = FUN_004e4020(&uStack_144);
          goto joined_r0x004831e2;
        }
      }
      goto LAB_00483bd8;
    case 0x11:
    case 0x12:
      psStack_160[1] = 0;
switchD_00482f2c_caseD_1:
      iVar10 = FUN_00481b70(iVar11,psVar9);
      if (((iVar10 != 0) || (iVar10 = FUN_00483e50((int)psStack_160[-1],&uStack_138), iVar10 != 0))
         || ((iVar10 = FUN_00483e30((int)psStack_160[-1],&uStack_150), iVar10 != 0 ||
             (iVar10 = FUN_00483e50((int)*psStack_160,&uStack_15c), iVar10 != 0))))
      goto LAB_00483bd8;
      iVar10 = FUN_00483e30((int)*psStack_160,&uStack_144);
joined_r0x004831e2:
      if (iVar10 != 0) goto LAB_00483bd8;
    }
switchD_00482f2c_default:
    cVar5 = FUN_00526090(0x20);
    if (((cVar5 == '\0') && (psStack_160[-3] == 1)) &&
       ((psStack_160[-2] != 8 && (psStack_160[-2] != 4)))) {
      if (iStack_10c == 0) {
        *param_3 = uStack_138;
        param_3[1] = uStack_134;
        param_3[2] = uStack_130;
        param_3[3] = uStack_150;
        param_3[4] = uStack_14c;
        param_3[5] = uStack_148;
        if (iStack_110 == 0) {
          iStack_104 = 1;
          param_3[0xc] = uStack_15c;
          param_3[0xd] = uStack_158;
          param_3[0xe] = uStack_154;
          param_3[0xf] = uStack_144;
          param_3[0x10] = uStack_140;
          param_3[0x11] = uStack_13c;
        }
        iStack_10c = 1;
      }
      else {
        iVar7 = FUN_004e72d0(&uStack_138,param_3);
        if (iVar7 == 1) {
          *param_3 = uStack_138;
          param_3[1] = uStack_134;
          param_3[2] = uStack_130;
        }
        iVar7 = FUN_004e72d0(&uStack_150,param_3 + 3);
        if (iVar7 == 0) {
          param_3[3] = uStack_150;
          param_3[4] = uStack_14c;
          param_3[5] = uStack_148;
        }
        if (iStack_110 == 0) {
          if (iStack_104 == 0) {
            param_3[0xc] = uStack_15c;
            param_3[0xd] = uStack_158;
            param_3[0xe] = uStack_154;
            param_3[0xf] = uStack_144;
            param_3[0x10] = uStack_140;
            param_3[0x11] = uStack_13c;
          }
          else {
            iVar7 = FUN_004e72d0(&uStack_15c,param_3 + 0xc);
            if (iVar7 == 1) {
              param_3[0xc] = uStack_15c;
              param_3[0xd] = uStack_158;
              param_3[0xe] = uStack_154;
            }
            iVar7 = FUN_004e72d0(&uStack_144,param_3 + 0xf);
            if (iVar7 == 0) {
              param_3[0xf] = uStack_144;
              param_3[0x10] = uStack_140;
              param_3[0x11] = uStack_13c;
            }
          }
        }
      }
    }
    iVar11 = iVar11 + 1;
    psStack_160 = psStack_160 + 7;
  } while (iVar11 < 4);
  if (iStack_108 == 0) {
LAB_00483857:
    cVar5 = FUN_00526090(0x20);
    if ((cVar5 == '\0') && (iStack_10c != 0)) {
      iVar10 = 1;
      uStack_138 = *param_3;
      uStack_150 = param_3[3];
      uStack_134 = param_3[1];
      uStack_15c = param_3[0xc];
      uStack_130 = param_3[2];
      uStack_14c = param_3[4];
      uStack_148 = param_3[5];
      uStack_154 = param_3[0xe];
      uStack_144 = param_3[0xf];
      uStack_158 = param_3[0xd];
      uStack_13c = param_3[0x11];
      uStack_140 = param_3[0x10];
      psVar9 = (short *)(param_2 + 0x10);
      do {
        if (((psVar9[-1] == 1) && (*psVar9 != 5)) && (*psVar9 != 6)) break;
        iVar10 = iVar10 + 1;
        psVar9 = psVar9 + 7;
      } while (iVar10 < 4);
      FUN_004e6b80(&uStack_150,&uStack_138,&uStack_128);
      FUN_004e5070(6,&uStack_11c);
      FUN_004e6dd0(&uStack_128,&uStack_11c,&uStack_128);
      FUN_004e6b80(&uStack_138,&uStack_128,&uStack_138);
      FUN_004e6a00(&uStack_150,&uStack_128,&uStack_150);
      if (iVar10 < 4) {
        FUN_004e6b80(&uStack_144,&uStack_15c,&uStack_128);
        FUN_004e5070(3,&uStack_11c);
        FUN_004e6dd0(&uStack_128,&uStack_11c,&uStack_128);
        FUN_004e6b80(&uStack_15c,&uStack_128,&uStack_15c);
        FUN_004e6a00(&uStack_144,&uStack_128,&uStack_144);
      }
      iVar10 = FUN_00469e60(&uStack_138,&uStack_150);
      uVar4 = uStack_130;
      uVar3 = uStack_134;
      uVar8 = uStack_138;
      if (0 < iVar10) {
        uStack_138 = uStack_150;
        uStack_134 = uStack_14c;
        uStack_130 = uStack_148;
        uStack_150 = uVar8;
        uStack_14c = uVar3;
        uStack_148 = uVar4;
      }
      iVar10 = FUN_00469e60(&uStack_15c,&uStack_144);
      uVar4 = uStack_154;
      uVar3 = uStack_158;
      uVar8 = uStack_15c;
      if (0 < iVar10) {
        uStack_15c = uStack_144;
        uStack_158 = uStack_140;
        uStack_154 = uStack_13c;
        uStack_144 = uVar8;
        uStack_140 = uVar3;
        uStack_13c = uVar4;
      }
      iVar10 = FUN_00469e60(&uStack_138,&uStack_150);
      if ((iVar10 == 0) || (iVar10 = FUN_00469e60(&uStack_15c,&uStack_144), iVar10 == 0)) {
        iVar10 = 0x1c;
      }
      else {
        FUN_00515e10(auStack_84);
        FUN_004e5640(&uStack_138,auStack_84);
        FUN_004e5640(&uStack_150,auStack_78);
        FUN_004e5640(&uStack_15c,auStack_54);
        FUN_004e5640(&uStack_144,auStack_48);
        FUN_004e6b40(auStack_78,auStack_84,&uStack_128);
        uVar8 = FUN_004e5070(0x7e,&uStack_11c,auStack_60);
        FUN_004e6d90(&uStack_128,uVar8);
        uVar8 = FUN_004e5070(0x3e,&uStack_11c,auStack_c);
        FUN_004e6d90(&uStack_128,uVar8);
        iVar10 = FUN_0051c300(auStack_84);
        if (iVar10 == 0) {
          FUN_00515dd0();
          iVar10 = FUN_00516d00(auStack_84,0);
          if (iVar10 == 0) {
            iVar10 = FUN_00516d00(auStack_78,1);
            if (iVar10 == 0) {
              iVar10 = FUN_00516d00(auStack_54,4);
              if (iVar10 == 0) {
                iVar10 = FUN_00516d00(auStack_48,5);
                if (iVar10 == 0) {
                  FUN_00515e10(param_3);
                  iVar10 = 0;
                }
                else {
                  iVar10 = 4;
                }
              }
              else {
                iVar10 = 4;
              }
            }
            else {
              iVar10 = 4;
            }
          }
          else {
            iVar10 = 4;
          }
        }
      }
    }
  }
  else {
    uStack_128 = local_fc[0];
    uStack_124 = local_fc[1];
    uStack_120 = local_fc[2];
    uStack_11c = local_cc;
    uStack_118 = uStack_c8;
    uStack_114 = uStack_c4;
    if (1 < iStack_108) {
      iVar11 = 0;
      iVar10 = iStack_108 + -1;
      do {
        puVar1 = (undefined4 *)((int)local_fc + iVar11 + 0xc);
        iVar7 = FUN_004e72d0(puVar1,&uStack_128);
        if (iVar7 == 1) {
          uStack_128 = *puVar1;
          uStack_124 = *(undefined4 *)((int)local_fc + iVar11 + 0x10);
          uStack_120 = *(undefined4 *)((int)local_fc + iVar11 + 0x14);
        }
        iVar7 = FUN_004e72d0(&uStack_11c,(undefined4 *)((int)auStack_c0 + iVar11));
        if (iVar7 == 1) {
          uStack_11c = *(undefined4 *)((int)auStack_c0 + iVar11);
          uStack_118 = *(undefined4 *)((int)auStack_c0 + iVar11 + 4);
          uStack_114 = *(undefined4 *)((int)auStack_c0 + iVar11 + 8);
        }
        iVar11 = iVar11 + 0xc;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = FUN_00530f80(&uStack_128,&uStack_11c);
    if (iVar10 == 0) {
      FUN_00414db0(local_100);
      if ((param_1 == 0) && (iVar11 = FUN_00482390(&uStack_128,&uStack_11c), -3 < iVar11)) {
        if (iVar11 < 0) {
          *param_4 = 0xfffffffe;
          return 0;
        }
        if ((iVar11 == 0) && (iVar10 = FUN_00530f80(&uStack_128,&uStack_11c), iVar10 != 0))
        goto LAB_00483bf4;
      }
      FUN_00414db0(local_100);
      FUN_00481c20();
      thunk_FUN_0040add0();
      local_fc[0] = uStack_128;
      local_cc = uStack_11c;
      local_fc[1] = uStack_124;
      local_fc[2] = uStack_120;
      psStack_160 = (short *)(param_2 + 0xe);
      uStack_c8 = uStack_118;
      uStack_c4 = uStack_114;
      iStack_12c = 1;
      iVar11 = iStack_104;
      do {
        if ((*psStack_160 == 1) && ((psStack_160[1] == 8 || (psStack_160[1] == 4)))) {
          iVar10 = FUN_00481150(iStack_12c,psStack_160,local_fc,&local_cc);
          if (iVar10 != 0) goto LAB_00483bd8;
          cVar5 = FUN_00526090(0x20);
          iVar7 = iStack_12c;
          if (cVar5 == '\0') {
            uStack_138 = local_fc[0];
            uStack_134 = local_fc[1];
            uStack_130 = local_fc[2];
            FUN_004816d0(iStack_12c,&uStack_150);
            FUN_004e6a00(&uStack_150,&local_cc,&uStack_150);
            FUN_00481710(iVar7,&uStack_144);
            FUN_00481780(iVar7,&uStack_15c);
            uVar8 = FUN_004e5780(&uStack_128,&uStack_15c);
            iVar7 = FUN_00469e60(uVar8);
            if (iVar7 < 0) {
              FUN_004e5780(&uStack_15c);
            }
            if (iStack_10c == 0) {
              *param_3 = uStack_138;
              param_3[1] = uStack_134;
              param_3[2] = uStack_130;
              param_3[3] = uStack_150;
              param_3[4] = uStack_14c;
              param_3[5] = uStack_148;
              if (iStack_110 == 0) {
                param_3[0xc] = uStack_15c;
                param_3[0xd] = uStack_158;
                param_3[0xe] = uStack_154;
                param_3[0xf] = uStack_144;
                param_3[0x10] = uStack_140;
                param_3[0x11] = uStack_13c;
                iVar11 = 1;
              }
              local_fc[3] = uStack_150;
              local_fc[4] = uStack_14c;
              local_fc[5] = uStack_148;
              iStack_10c = 1;
            }
            else {
              iVar7 = FUN_004e72d0(&uStack_138,param_3);
              if (iVar7 == 1) {
                *param_3 = uStack_138;
                param_3[1] = uStack_134;
                param_3[2] = uStack_130;
              }
              iVar7 = FUN_004e72d0(param_3 + 3,&uStack_150);
              if (iVar7 == 1) {
                param_3[3] = uStack_150;
                param_3[4] = uStack_14c;
                param_3[5] = uStack_148;
              }
              if (iVar11 == 0) {
                iVar11 = 1;
                param_3[0xc] = uStack_15c;
                param_3[0xd] = uStack_158;
                param_3[0xe] = uStack_154;
                param_3[0xf] = uStack_144;
                param_3[0x10] = uStack_140;
                param_3[0x11] = uStack_13c;
              }
              else {
                iVar7 = FUN_004e72d0(&uStack_15c,param_3 + 0xc);
                if (iVar7 == 1) {
                  param_3[0xc] = uStack_15c;
                  param_3[0xd] = uStack_158;
                  param_3[0xe] = uStack_154;
                }
                iVar7 = FUN_004e72d0(&uStack_144,param_3 + 0xf);
                if (iVar7 == 0) {
                  param_3[0xf] = uStack_144;
                  param_3[0x10] = uStack_140;
                  param_3[0x11] = uStack_13c;
                }
              }
              iVar7 = FUN_004e72d0(local_fc + 3,&uStack_150);
              if (iVar7 == 1) {
                local_fc[3] = uStack_150;
                local_fc[4] = uStack_14c;
                local_fc[5] = uStack_148;
              }
            }
          }
        }
        iStack_12c = iStack_12c + 1;
        psStack_160 = psStack_160 + 7;
      } while (iStack_12c < 4);
      iVar11 = 1;
      psVar9 = (short *)(param_2 + 0x10);
      do {
        if (((psVar9[-1] == 1) &&
            (((*psVar9 == 8 || (*psVar9 == 4)) && (cVar5 = FUN_00526090(0x20), cVar5 == '\0')))) &&
           (iVar10 = FUN_004814e0(iVar11,local_fc + 3,&local_cc), iVar10 != 0)) goto LAB_00483bd8;
        iVar11 = iVar11 + 1;
        psVar9 = psVar9 + 7;
      } while (iVar11 < 4);
      goto LAB_00483857;
    }
  }
LAB_00483bd8:
  FUN_00414db0(local_100);
  if (iVar10 == 0) {
    return 0;
  }
  if (param_1 != 0) {
    return iVar10;
  }
LAB_00483bf4:
  FUN_00480280();
  FUN_0052b240(iVar10);
  return iVar10;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054dcb0
// entry: 0054dcb0  size: 2544


undefined4 FUN_0054dcb0(int param_1,uint param_2,short *param_3,byte param_4)

{
  int iVar1;
  bool bVar2;
  short *psVar3;
  undefined1 uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 local_27c;
  int local_278;
  char *local_274;
  undefined4 local_270;
  short local_26c;
  short local_26a;
  short local_268;
  short local_266;
  char *local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258 [24];
  undefined1 local_240 [12];
  char local_234;
  char local_233;
  short local_134;
  short local_132;
  undefined1 local_118 [24];
  undefined1 local_100 [256];
  
  FUN_00538980(0,2,local_240);
  iVar7 = 0;
  iVar8 = 0;
  do {
    iVar1 = (int)&DAT_005d3000 + iVar8;
    iVar10 = 6;
    do {
      *(undefined4 *)((int)&DAT_005d3000 + iVar8) = *(undefined4 *)((int)&DAT_00599f08 + iVar8);
      *(undefined4 *)((int)&DAT_005d3004 + iVar8) = *(undefined4 *)((int)&DAT_00599f0c + iVar8);
      FUN_00538860(iVar7,iVar1);
      iVar8 = iVar8 + 8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar7 = iVar7 + 1;
  } while (iVar8 < 0x90);
  FUN_005387f0(0);
  psVar3 = param_3;
  sVar6 = param_3[3];
  if ((sVar6 == 0) && (param_3[4] == 0)) {
    uVar9 = 0;
    goto LAB_0054e679;
  }
  local_234 = '\0';
  if ((param_1 == 0) && (param_2 == 0x7545)) {
    if ((param_4 & 4) == 0) {
      if ((param_4 & 2) != 0) {
        uVar9 = FUN_00488960((int)sVar6,(int)param_3[4],&local_270);
        iVar7 = FUN_00487bb0(uVar9);
        if (iVar7 == 0) {
          uVar9 = 0xfffffffe;
          goto LAB_0054e679;
        }
        goto LAB_0054ddbb;
      }
      if ((param_4 & 1) != 0) {
        uVar9 = FUN_00488960((int)sVar6,(int)param_3[4],local_118,0);
        iVar7 = FUN_00486570(uVar9);
        if (iVar7 == 0) {
          uVar9 = 0xfffffffe;
          goto LAB_0054e679;
        }
        FUN_004e5470(local_118,&local_234);
      }
    }
    else {
      uVar9 = FUN_00488960((int)sVar6,(int)param_3[4],&local_270);
      iVar7 = FUN_00486c20(uVar9);
      if (iVar7 == 0) {
        uVar9 = 0xfffffffe;
        goto LAB_0054e679;
      }
LAB_0054ddbb:
      FUN_004b6ef0(&local_234,local_270);
    }
    FUN_005232d0(1,7);
    FUN_00527030();
    FUN_005252a0(&local_234,0,0,1,7);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_278 = 0;
  local_27c = 0;
LAB_0054de45:
  FUN_0053c690(0);
  if (param_1 == 0) {
    if (!bVar2) {
      if (param_2 < 0x754a) {
        if (param_2 != 0x7549) {
          if (param_2 < 0x7535) {
            if (param_2 == 0x7534) {
              if (local_234 != '\0') {
                local_274 = &local_234;
                local_264 = &local_234;
                uVar9 = FUN_00488960(0);
                FUN_004865d0(uVar9);
                FUN_00488980(0,0);
                FUN_0052f860();
                thunk_FUN_0040add0();
                local_134 = psVar3[3];
                local_132 = psVar3[4];
                uVar9 = FUN_00488960(1,&local_134);
                FUN_00486c60(uVar9);
                iVar7 = FUN_0054ca00(&local_234);
                if (iVar7 == 1) {
                  uVar4 = FUN_00526090(0x4e);
                  local_260 = CONCAT31(local_260._1_3_,uVar4);
                  FUN_00526070(0x4e,1);
                  iVar7 = FUN_004f64a0(&local_274,2,local_258);
                  FUN_00526070(0x4e,local_260);
                  if (iVar7 != 0) {
                    iVar7 = FUN_004e4000(local_258);
                    if (iVar7 == 1) {
                      FUN_0052b240(3);
                      FUN_00529a50(&local_234,local_274);
                      local_27c = FUN_00523dc0(1,0x15,&local_234,local_278,local_27c);
                      local_27c = FUN_005252a0(&local_234,local_27c,local_278,1,7);
                      goto LAB_0054e232;
                    }
                    iVar7 = FUN_004e4020(local_258);
                    if (iVar7 == 0x20) {
                      iVar7 = FUN_00489280(&local_268,&local_264);
                      if (iVar7 == 0) {
                        FUN_00488980(2,0);
                      }
                      uVar9 = FUN_00488960((int)local_268,(int)local_266,&local_25c);
                      FUN_00487bb0(uVar9);
                      FUN_004b6ef0(local_100,local_25c);
                      uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                      FUN_00547460(uVar9);
                      uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                      FUN_004888a0(uVar9);
                      uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                      FUN_004876e0(uVar9);
                      uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],local_100);
                      iVar7 = FUN_004885d0(uVar9);
                      if (iVar7 != 0) {
                        FUN_00488980(4,0);
                        uVar9 = 0;
                        goto LAB_0054e679;
                      }
                    }
                    else {
                      uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                      FUN_00547460(uVar9);
                      uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                      FUN_004888a0(uVar9);
                      uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                      FUN_004876e0(uVar9);
                      uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],local_258);
                      iVar7 = FUN_00485fc0(uVar9);
                      if (iVar7 != 0) {
                        FUN_0052b240(4);
                        uVar9 = 0;
                        goto LAB_0054e679;
                      }
                    }
                    iVar7 = FUN_004e4020(local_258);
                    if (iVar7 == 1) goto LAB_0054e5b7;
                    cVar5 = FUN_00526090(0x4e);
                    if (cVar5 == '\0') {
                      FUN_0052f860();
                      FUN_0054ed60(0);
                    }
                    iVar7 = FUN_00488980(0,1);
                    if (iVar7 == 0) goto LAB_0054e604;
                    goto LAB_0054e5f3;
                  }
                  iVar7 = FUN_004e4020();
                  if (iVar7 == 0x1f) {
                    FUN_004e5630(2,local_258);
                  }
                  uVar9 = FUN_004e4020(local_258);
                  FUN_0052b240(uVar9);
                  local_278 = FUN_004b7780(&local_234,local_274);
                  local_278 = local_278 - (int)&local_234;
                  local_27c = FUN_00523dc0(1,0x15,&local_234,local_278,local_27c);
                  local_27c = FUN_005252a0(&local_234,local_27c,local_278,1,7);
                  goto LAB_0054e232;
                }
                if (iVar7 == 2) {
                  if (local_233 == '\0') {
                    FUN_0052b240(3);
                    FUN_00529a50(&local_234,local_274);
                    local_27c = FUN_00523dc0(1,0x15,&local_234,local_278,local_27c);
                    local_27c = FUN_005252a0(&local_234,local_27c,local_278,1,7);
                    goto LAB_0054e232;
                  }
                  uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                  FUN_004888a0(uVar9);
                  uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                  FUN_004876e0(uVar9);
                  uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                  FUN_00547460(uVar9);
                  uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],&local_234);
                  iVar7 = FUN_00547440(uVar9);
                  if (iVar7 != 0) {
                    FUN_0052b240(4);
                    uVar9 = 0;
                    goto LAB_0054e679;
                  }
                  cVar5 = FUN_00526090(0x4e);
                  if (cVar5 == '\0') {
                    FUN_0054ed60(0);
                  }
                  else {
                    local_26c = psVar3[3];
                    local_26a = psVar3[4];
                    FUN_00488900(0);
                    FUN_0054ef10(local_258,&local_26c,0);
                    uVar9 = FUN_00488960(0);
                    FUN_004865d0(uVar9);
                  }
                  FUN_004e4020(local_258);
LAB_0054e5b7:
                  iVar7 = FUN_00488980(0,1);
                }
                else {
                  if (iVar7 != 3) {
                    uVar9 = 0;
                    goto LAB_0054e679;
                  }
                  uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                  FUN_004888a0(uVar9);
                  uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                  FUN_004876e0(uVar9);
                  uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],1);
                  FUN_00547460(uVar9);
                  if (*local_274 == '\'') {
                    *local_274 = '\"';
                  }
                  uVar9 = FUN_00488960((int)psVar3[3],(int)psVar3[4],local_274);
                  iVar7 = FUN_004885d0(uVar9);
                  if (iVar7 != 0) {
                    FUN_0052b240(4);
                    uVar9 = 0;
                    goto LAB_0054e679;
                  }
                  iVar7 = FUN_004e4020(local_258);
                  if (iVar7 == 1) goto LAB_0054e5b7;
                  cVar5 = FUN_00526090(0x4e);
                  if (cVar5 != '\0') goto LAB_0054e604;
                  FUN_0052f860();
                  thunk_FUN_0040add0();
                  iVar7 = FUN_0054ed60(0);
                }
                if (iVar7 != 0) {
LAB_0054e5f3:
                  uVar9 = FUN_00488980(0,1);
                  FUN_0052b240(uVar9);
                }
              }
LAB_0054e604:
              cVar5 = FUN_00526090(0x50);
              if (cVar5 == '\0') {
                if (psVar3[4] < 999) {
                  sVar6 = psVar3[4] + 1;
                  psVar3[4] = sVar6;
                  if (psVar3[2] + -1 + (int)*psVar3 < (int)sVar6) {
                    uVar9 = 0;
                    psVar3[2] = psVar3[2] + 1;
                    goto LAB_0054e679;
                  }
                }
              }
              else {
                cVar5 = FUN_00526090(0x50);
                if ((cVar5 == '\x01') && (psVar3[3] < 0x1a)) {
                  sVar6 = psVar3[3] + 1;
                  psVar3[3] = sVar6;
                  if (psVar3[1] + 3 < (int)sVar6) {
                    psVar3[1] = psVar3[1] + 1;
                  }
                }
              }
              uVar9 = 0;
              goto LAB_0054e679;
            }
            if (param_2 == 0x30) {
              iVar7 = FUN_004b6ca0(&local_234);
              if ((iVar7 != 0xff) &&
                 (iVar7 = FUN_0054e750(psVar3,&local_234,&local_27c,&local_278), iVar7 == -1))
              goto LAB_0054e676;
            }
            else if (param_2 == 0x7531) {
              uVar9 = FUN_00526040();
              local_278 = FUN_00525300(&local_234,0xff,local_278,uVar9);
              local_27c = FUN_005252a0(&local_234,local_27c,local_278,1,7);
            }
            else if (param_2 == 0x7532) goto LAB_0054e25a;
          }
          else if ((param_2 == 0x753f) || ((0x7543 < param_2 && (param_2 < 0x7546))))
          goto LAB_0054e197;
          goto LAB_0054e232;
        }
      }
      else {
        if (0x755b < param_2) {
          if (((param_2 < 31000) || ((0x7919 < param_2 && (param_2 != 0x791f)))) ||
             ((iVar7 = FUN_0052a950(param_2,&local_234,&local_278,0xff), iVar7 != -5 &&
              ((iVar7 < -2 || (0 < iVar7)))))) goto LAB_0054e232;
LAB_0054e226:
          local_27c = FUN_005252a0(&local_234,local_27c,local_278,1,7);
          goto LAB_0054e232;
        }
        if (param_2 < 0x755a) {
          if (param_2 != 0x754d) {
            if (param_2 != 0x7554) goto LAB_0054e232;
            goto LAB_0054e197;
          }
LAB_0054e676:
          uVar9 = 0xffffffff;
          goto LAB_0054e679;
        }
      }
LAB_0054e197:
      iVar7 = FUN_005249f0(&local_234,0xff,&local_27c,&local_278,&param_2,1,7);
      if (iVar7 == 0) goto LAB_0054e226;
    }
  }
  else if ((param_2 < 0xd) || (0xe < param_2)) {
    local_278 = FUN_00525300(&local_234,0xff,local_278,param_2);
    local_27c = FUN_005252a0(&local_234,local_27c,local_278,1,7);
  }
LAB_0054e232:
  FUN_00538b30();
  param_1 = FUN_00526620(&param_2);
  bVar2 = false;
  goto LAB_0054de45;
LAB_0054e25a:
  FUN_005232d0(1,7);
  FUN_00523470(&DAT_005cd010,0x15);
  uVar9 = 0xfffffffe;
LAB_0054e679:
  FUN_00538810();
  FUN_005389c0(0,2,local_240);
  FUN_00523740();
  return uVar9;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054ad70
// entry: 0054ad70  size: 3719


undefined4
FUN_0054ad70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5,short param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  int local_478;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  int local_45c;
  undefined1 local_458 [24];
  short local_440;
  short local_43e;
  int local_43c;
  int local_438;
  int local_434;
  byte local_427;
  short local_424;
  short local_422;
  int local_420;
  int local_41c;
  int local_418;
  short local_40e;
  short local_40a;
  undefined1 local_408 [4];
  undefined1 local_404 [4];
  undefined1 local_400 [256];
  undefined1 local_300 [256];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  iVar11 = 0;
  local_460 = 0;
  local_478 = 0;
  if (((short)param_1 != (short)param_2) || (param_1._2_2_ != param_2._2_2_)) {
    iVar8 = (int)(short)param_1 - (int)(short)param_2;
    iVar10 = (int)(short)param_3;
    iVar7 = (int)param_1._2_2_ - (int)param_2._2_2_;
    if (iVar10 <= (short)param_4) {
      do {
        local_464 = 0;
        bVar1 = false;
        iVar9 = (int)param_3._2_2_;
        if (iVar9 <= param_4._2_2_) {
          do {
            FUN_0052f840();
            iVar2 = FUN_0052f820();
            if (iVar2 == 1) {
              return 1;
            }
            local_440 = (short)iVar10;
            local_424 = local_440 + (short)iVar8;
            local_43e = (short)iVar9;
            local_422 = (short)iVar7 + local_43e;
            uVar3 = FUN_00488960(2,&local_440);
            FUN_00486c60(uVar3);
            if ((local_427 & 4) != 0) {
              uVar3 = FUN_00488960(iVar10,iVar9,&local_46c);
              FUN_00486c20(uVar3);
              FUN_004b6ef0(local_100,local_46c);
              local_200[0] = 0;
              if ((param_6 == 1) || (param_6 == 3)) {
                iVar11 = FUN_0054c330(local_100,local_200,iVar8,iVar7,iVar10,iVar9);
                if (iVar11 == 0) {
                  return 4;
                }
                iVar11 = FUN_004b7550(local_200);
                if ((iVar11 + 1U & 3) != 0) {
                  iVar2 = FUN_004b7550(local_200);
                  goto LAB_0054afb5;
                }
                iVar11 = FUN_004b7550(local_200);
                iVar11 = iVar11 + 1;
              }
              else {
                iVar11 = FUN_0054c2b0(local_100,local_200,param_3,param_4,param_5,iVar8,iVar7,iVar10
                                      ,iVar9);
                if (iVar11 == 0) {
                  return 4;
                }
                iVar11 = FUN_004b7550(local_200);
                if ((iVar11 + 1U & 3) == 0) {
                  iVar11 = FUN_004b7550(local_200);
                  iVar11 = iVar11 + 1;
                }
                else {
                  iVar2 = FUN_004b7550(local_200);
LAB_0054afb5:
                  iVar11 = FUN_004b7550(local_200);
                  iVar11 = (5 - (iVar2 + 1U & 3)) + iVar11;
                }
              }
            }
            local_478 = local_478 +
                        (((local_41c - local_434) - local_43c) - iVar11) + local_418 + local_420;
            if ((0 < local_43c) && ((short)local_464 == 0)) {
              iVar2 = FUN_0054e6a0(&local_424);
              local_478 = local_478 - iVar2;
              local_464 = 1;
            }
            if ((local_438 < 1) && (local_434 < 1)) {
              if ((local_422 == local_40e) && ((short)local_460 == 0)) {
                local_460 = 1;
                local_478 = local_478 + ((int)local_422 - (int)local_40a) * 4;
              }
            }
            else if (bVar1) {
              local_478 = local_478 + -4;
            }
            else {
              iVar2 = FUN_0054e6e0(&local_424);
              local_478 = local_478 - iVar2;
              bVar1 = true;
            }
            if ((local_478 < 0) &&
               (FUN_004ad550(local_408,local_404,&local_45c), local_45c + local_478 < 0)) {
              return 4;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 <= param_4._2_2_);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 <= (short)param_4);
    }
    local_464 = 0;
    sVar6 = (short)iVar7 + param_3._2_2_;
    if ((short)((short)iVar8 + (short)param_3) < (short)param_3) {
      if (param_3._2_2_ < sVar6) {
        iVar11 = (int)param_4._2_2_;
        if (param_3._2_2_ <= iVar11) {
          iVar10 = iVar11 + iVar7;
          do {
            iVar9 = (int)(short)param_3;
            if (iVar9 <= (short)param_4) {
              iVar2 = iVar9 + iVar8;
              do {
                uVar3 = FUN_00488960(iVar2,iVar10,1);
                FUN_004888a0(uVar3);
                uVar3 = FUN_00488960(iVar2,iVar10,1);
                FUN_004876e0(uVar3);
                uVar3 = FUN_00488960(iVar2,iVar10,1);
                FUN_00547460(uVar3);
                FUN_0052f840();
                iVar4 = FUN_0052f820();
                if (iVar4 == 1) {
                  return 1;
                }
                uVar3 = FUN_00488960(iVar9,iVar11,&local_46c);
                uVar12 = 0x54;
                iVar4 = FUN_00486c20(uVar3);
                if (iVar4 == 1) {
                  FUN_004b6ef0(local_300,local_46c);
                  local_400[0] = 0;
                  if ((param_6 == 1) || (param_6 == 3)) {
                    FUN_0054c330(local_300,local_400,iVar8,iVar7,iVar9,iVar11);
                  }
                  else {
                    FUN_0054c2b0(local_300,local_400,param_3,param_4,CONCAT22(uVar12,param_5),iVar8,
                                 iVar7,iVar9,iVar11);
                  }
                  uVar3 = FUN_00488960(iVar2,iVar10,local_400);
                  iVar4 = FUN_00547440(uVar3);
                  if (iVar4 != 0) {
                    return 4;
                  }
                  uVar3 = FUN_00488960(iVar9,iVar11);
                  uVar5 = FUN_00486f90(uVar3);
                  if ((uVar5 & 0x80) != 0) {
                    uVar3 = FUN_00488960(iVar2,iVar10);
                    FUN_004886a0(uVar3);
                  }
                  if (param_6 != 2) goto LAB_0054baef;
                  uVar3 = FUN_00488960(iVar9,iVar11,1);
                  FUN_00547460(uVar3);
LAB_0054bafe:
                  uVar3 = FUN_00488960(iVar9,iVar11,local_458,0);
                  iVar4 = FUN_00486570(uVar3);
                  if (iVar4 == 1) {
                    if (param_6 == 2) {
                      uVar3 = FUN_00488960(iVar9,iVar11,1);
                      FUN_004888a0(uVar3);
                    }
                    uVar3 = FUN_00488960(iVar2,iVar10,1);
                    FUN_004876e0(uVar3);
                    uVar3 = FUN_00488960(iVar2,iVar10,local_458);
                    iVar4 = FUN_00485fc0(uVar3);
                    if (iVar4 != 0) {
                      return 4;
                    }
                  }
                  uVar3 = FUN_00488960(iVar9,iVar11,&local_468);
                  iVar4 = FUN_00487bb0(uVar3);
                  if (iVar4 == 1) {
                    if (param_6 == 2) {
                      uVar3 = FUN_00488960(iVar9,iVar11,1);
                      FUN_004876e0(uVar3);
                    }
                    uVar3 = FUN_00488960(iVar2,iVar10,1);
                    FUN_004888a0(uVar3);
                    uVar3 = FUN_00488960(iVar2,iVar10,local_468);
                    iVar4 = FUN_004885d0(uVar3);
                    if (iVar4 != 0) {
                      return 4;
                    }
                  }
                }
                else {
LAB_0054baef:
                  if (param_6 != 3) goto LAB_0054bafe;
                }
                iVar9 = iVar9 + 1;
                iVar2 = iVar2 + 1;
              } while (iVar9 <= (short)param_4);
            }
            iVar11 = iVar11 + -1;
            iVar10 = iVar10 + -1;
          } while (param_3._2_2_ <= iVar11);
        }
      }
      else {
        iVar11 = (int)param_3._2_2_;
        if (iVar11 <= param_4._2_2_) {
          iVar10 = iVar11 + iVar7;
          do {
            iVar9 = (int)(short)param_3;
            if (iVar9 <= (short)param_4) {
              iVar2 = iVar9 + iVar8;
              do {
                uVar3 = FUN_00488960(iVar2,iVar10,1);
                FUN_004888a0(uVar3);
                uVar3 = FUN_00488960(iVar2,iVar10,1);
                FUN_004876e0(uVar3);
                uVar3 = FUN_00488960(iVar2,iVar10,1);
                FUN_00547460(uVar3);
                FUN_0052f840();
                iVar4 = FUN_0052f820();
                if (iVar4 == 1) {
                  return 1;
                }
                uVar3 = FUN_00488960(iVar9,iVar11,&local_46c);
                uVar12 = 0x54;
                iVar4 = FUN_00486c20(uVar3);
                if (iVar4 == 1) {
                  FUN_004b6ef0(local_300,local_46c);
                  local_400[0] = 0;
                  if ((param_6 == 1) || (param_6 == 3)) {
                    FUN_0054c330(local_300,local_400,iVar8,iVar7,iVar9,iVar11);
                  }
                  else {
                    FUN_0054c2b0(local_300,local_400,param_3,param_4,CONCAT22(uVar12,param_5),iVar8,
                                 iVar7,iVar9,iVar11);
                  }
                  uVar3 = FUN_00488960(iVar2,iVar10,local_400);
                  iVar4 = FUN_00547440(uVar3);
                  if (iVar4 != 0) {
                    return 4;
                  }
                  uVar3 = FUN_00488960(iVar9,iVar11);
                  uVar5 = FUN_00486f90(uVar3);
                  if ((uVar5 & 0x80) != 0) {
                    uVar3 = FUN_00488960(iVar2,iVar10);
                    FUN_004886a0(uVar3);
                  }
                  if (param_6 != 2) goto LAB_0054b83f;
                  uVar3 = FUN_00488960(iVar9,iVar11,1);
                  FUN_00547460(uVar3);
LAB_0054b84e:
                  uVar3 = FUN_00488960(iVar9,iVar11,local_458,0);
                  iVar4 = FUN_00486570(uVar3);
                  if (iVar4 == 1) {
                    if (param_6 == 2) {
                      uVar3 = FUN_00488960(iVar9,iVar11,1);
                      FUN_004888a0(uVar3);
                    }
                    uVar3 = FUN_00488960(iVar2,iVar10,1);
                    FUN_004876e0(uVar3);
                    uVar3 = FUN_00488960(iVar2,iVar10,local_458);
                    iVar4 = FUN_00485fc0(uVar3);
                    if (iVar4 != 0) {
                      return 4;
                    }
                  }
                  uVar3 = FUN_00488960(iVar9,iVar11,&local_468);
                  iVar4 = FUN_00487bb0(uVar3);
                  if (iVar4 == 1) {
                    if (param_6 == 2) {
                      uVar3 = FUN_00488960(iVar9,iVar11,1);
                      FUN_004876e0(uVar3);
                    }
                    uVar3 = FUN_00488960(iVar2,iVar10,1);
                    FUN_004888a0(uVar3);
                    uVar3 = FUN_00488960(iVar2,iVar10,local_468);
                    iVar4 = FUN_004885d0(uVar3);
                    if (iVar4 != 0) {
                      return 4;
                    }
                  }
                }
                else {
LAB_0054b83f:
                  if (param_6 != 3) goto LAB_0054b84e;
                }
                iVar9 = iVar9 + 1;
                iVar2 = iVar2 + 1;
              } while (iVar9 <= (short)param_4);
            }
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 1;
            if (param_4._2_2_ < iVar11) {
              return 0;
            }
          } while( true );
        }
      }
    }
    else if (param_3._2_2_ < sVar6) {
      iVar11 = (int)param_4._2_2_;
      if (param_3._2_2_ <= iVar11) {
        iVar10 = iVar11 + iVar7;
        do {
          iVar9 = (int)(short)param_4;
          if ((short)param_3 <= iVar9) {
            iVar2 = iVar9 + iVar8;
            do {
              FUN_0052f840();
              iVar4 = FUN_0052f820();
              if (iVar4 == 1) {
                return 1;
              }
              uVar3 = FUN_00488960(iVar2,iVar10,1);
              FUN_004888a0(uVar3);
              uVar3 = FUN_00488960(iVar2,iVar10,1);
              FUN_004876e0(uVar3);
              uVar3 = FUN_00488960(iVar2,iVar10,1);
              FUN_00547460(uVar3);
              uVar3 = FUN_00488960(iVar9,iVar11,&local_46c);
              uVar12 = 0x54;
              iVar4 = FUN_00486c20(uVar3);
              if (iVar4 == 1) {
                FUN_004b6ef0(local_300,local_46c);
                local_400[0] = 0;
                if ((param_6 == 1) || (param_6 == 3)) {
                  FUN_0054c330(local_300,local_400,iVar8,iVar7,iVar9,iVar11);
                }
                else {
                  FUN_0054c2b0(local_300,local_400,param_3,param_4,CONCAT22(uVar12,param_5),iVar8,
                               iVar7,iVar9,iVar11);
                }
                uVar3 = FUN_00488960(iVar2,iVar10,local_400);
                iVar4 = FUN_00547440(uVar3);
                if (iVar4 != 0) {
                  return 4;
                }
                uVar3 = FUN_00488960(iVar9,iVar11);
                uVar5 = FUN_00486f90(uVar3);
                if ((uVar5 & 0x80) != 0) {
                  uVar3 = FUN_00488960(iVar2,iVar10);
                  FUN_004886a0(uVar3);
                }
                if (param_6 != 2) goto LAB_0054b586;
                uVar3 = FUN_00488960(iVar9,iVar11,1);
                FUN_00547460(uVar3);
LAB_0054b595:
                uVar3 = FUN_00488960(iVar9,iVar11,local_458,0);
                iVar4 = FUN_00486570(uVar3);
                if (iVar4 == 1) {
                  if (param_6 == 2) {
                    uVar3 = FUN_00488960(iVar9,iVar11,1);
                    FUN_004888a0(uVar3);
                  }
                  uVar3 = FUN_00488960(iVar2,iVar10,1);
                  FUN_004876e0(uVar3);
                  uVar3 = FUN_00488960(iVar2,iVar10,local_458);
                  iVar4 = FUN_00485fc0(uVar3);
                  if (iVar4 != 0) {
                    return 4;
                  }
                }
                uVar3 = FUN_00488960(iVar9,iVar11,&local_468);
                iVar4 = FUN_00487bb0(uVar3);
                if (iVar4 == 1) {
                  if (param_6 == 2) {
                    uVar3 = FUN_00488960(iVar9,iVar11,1);
                    FUN_004876e0(uVar3);
                  }
                  uVar3 = FUN_00488960(iVar2,iVar10,1);
                  FUN_004888a0(uVar3);
                  uVar3 = FUN_00488960(iVar2,iVar10,local_468);
                  iVar4 = FUN_004885d0(uVar3);
                  if (iVar4 != 0) {
                    return 4;
                  }
                }
              }
              else {
LAB_0054b586:
                if (param_6 != 3) goto LAB_0054b595;
              }
              iVar9 = iVar9 + -1;
              iVar2 = iVar2 + -1;
            } while ((short)param_3 <= iVar9);
          }
          iVar11 = iVar11 + -1;
          iVar10 = iVar10 + -1;
          if (iVar11 < param_3._2_2_) {
            return 0;
          }
        } while( true );
      }
    }
    else {
      iVar11 = (int)param_3._2_2_;
      if (iVar11 <= param_4._2_2_) {
        iVar10 = iVar11 + iVar7;
        do {
          iVar9 = (int)(short)param_4;
          if ((short)param_3 <= iVar9) {
            iVar2 = iVar9 + iVar8;
            do {
              FUN_0052f840();
              iVar4 = FUN_0052f820();
              if (iVar4 == 1) {
                return 1;
              }
              uVar3 = FUN_00488960(iVar2,iVar10,1);
              FUN_004888a0(uVar3);
              uVar3 = FUN_00488960(iVar2,iVar10,1);
              FUN_004876e0(uVar3);
              uVar3 = FUN_00488960(iVar2,iVar10,1);
              FUN_00547460(uVar3);
              uVar3 = FUN_00488960(iVar9,iVar11,&local_46c);
              uVar12 = 0x54;
              iVar4 = FUN_00486c20(uVar3);
              if (iVar4 == 1) {
                FUN_004b6ef0(local_300,local_46c);
                local_400[0] = 0;
                if ((param_6 == 1) || (param_6 == 3)) {
                  FUN_0054c330(local_300,local_400,iVar8,iVar7,iVar9,iVar11);
                }
                else {
                  FUN_0054c2b0(local_300,local_400,param_3,param_4,CONCAT22(uVar12,param_5),iVar8,
                               iVar7,iVar9,iVar11);
                }
                uVar3 = FUN_00488960(iVar2,iVar10,local_400);
                iVar4 = FUN_00547440(uVar3);
                if (iVar4 != 0) {
                  return 4;
                }
                uVar3 = FUN_00488960(iVar9,iVar11);
                uVar5 = FUN_00486f90(uVar3);
                if ((uVar5 & 0x80) != 0) {
                  uVar3 = FUN_00488960(iVar2,iVar10);
                  FUN_004886a0(uVar3);
                }
                if (param_6 != 2) goto LAB_0054b2d6;
                uVar3 = FUN_00488960(iVar9,iVar11,1);
                FUN_00547460(uVar3);
LAB_0054b2e5:
                uVar3 = FUN_00488960(iVar9,iVar11,local_458,0);
                iVar4 = FUN_00486570(uVar3);
                if (iVar4 == 1) {
                  if (param_6 == 2) {
                    uVar3 = FUN_00488960(iVar9,iVar11,1);
                    FUN_004888a0(uVar3);
                  }
                  uVar3 = FUN_00488960(iVar2,iVar10,1);
                  FUN_004876e0(uVar3);
                  uVar3 = FUN_00488960(iVar2,iVar10,local_458);
                  iVar4 = FUN_00485fc0(uVar3);
                  if (iVar4 != 0) {
                    return 4;
                  }
                }
                uVar3 = FUN_00488960(iVar9,iVar11,&local_468);
                iVar4 = FUN_00487bb0(uVar3);
                if (iVar4 == 1) {
                  if (param_6 == 2) {
                    uVar3 = FUN_00488960(iVar9,iVar11,1);
                    FUN_004876e0(uVar3);
                  }
                  uVar3 = FUN_00488960(iVar2,iVar10,1);
                  FUN_004888a0(uVar3);
                  uVar3 = FUN_00488960(iVar2,iVar10,local_468);
                  iVar4 = FUN_004885d0(uVar3);
                  if (iVar4 != 0) {
                    return 4;
                  }
                }
              }
              else {
LAB_0054b2d6:
                if (param_6 != 3) goto LAB_0054b2e5;
              }
              iVar9 = iVar9 + -1;
              iVar2 = iVar2 + -1;
            } while ((short)param_3 <= iVar9);
          }
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 1;
          if (param_4._2_2_ < iVar11) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054bc00
// entry: 0054bc00  size: 1708


int FUN_0054bc00(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  ushort *puVar1;
  uint *puVar2;
  ushort *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  undefined4 local_138;
  int local_134;
  short local_130;
  short local_12e;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124 [28];
  uint local_108;
  undefined1 local_100 [256];
  
  local_134 = 0;
  if ((short)(ushort)*param_2 < 0) {
    *(ushort *)param_2 = 0;
    return 0x1c;
  }
  puVar1 = (ushort *)((int)param_2 + 2);
  if (999 < (short)*(ushort *)((int)param_2 + 2)) {
    *puVar1 = 999;
    return 0x1c;
  }
  puVar2 = param_2 + 1;
  if ((short)(ushort)param_2[1] < 0) {
    *(ushort *)puVar2 = 0;
    return 0x1c;
  }
  puVar3 = (ushort *)((int)param_2 + 6);
  if (999 < (short)*(ushort *)((int)param_2 + 6)) {
    *puVar3 = 999;
    return 0x1c;
  }
  if ((short)(ushort)param_2[1] < (short)(ushort)*param_2) {
    FUN_00488d30(param_2,puVar2);
  }
  if ((short)*puVar3 < (short)*puVar1) {
    FUN_00488d30(puVar1,puVar3);
  }
  iVar5 = FUN_0054ca00(param_3);
  iVar8 = local_134;
  if (iVar5 == 1) {
    local_128 = param_3;
    iVar5 = FUN_004f64a0(&param_3,2,local_124);
    if (iVar5 == 0) {
      iVar8 = FUN_004e4020(local_124);
      if (iVar8 == 0x1f) {
        return 2;
      }
      iVar8 = FUN_004e4020(local_124);
      return iVar8;
    }
    iVar5 = FUN_004e4020(local_124);
    if (iVar5 == 0x20) {
      iVar5 = FUN_00489280(&local_130,&local_128);
      if (iVar5 == 0) {
        return 2;
      }
      uVar6 = FUN_00488960((int)local_130,(int)local_12e,&local_12c);
      FUN_00487bb0(uVar6);
      FUN_004b6ef0(local_100,local_12c);
    }
    iVar5 = FUN_004e4000(local_124);
    if (iVar5 == 1) {
      return 3;
    }
    uVar10 = (ushort)*param_2;
    if ((short)uVar10 <= (short)(ushort)*puVar2) {
      do {
        uVar11 = *puVar1;
        if ((short)uVar11 <= (short)*puVar3) {
          do {
            FUN_0052f840();
            iVar5 = FUN_0052f820();
            if (iVar5 == 1) {
              return 1;
            }
            iVar9 = (int)(short)uVar11;
            iVar14 = (int)(short)uVar10;
            uVar6 = FUN_00488960(iVar14,iVar9,1);
            FUN_004888a0(uVar6);
            uVar6 = FUN_00488960(iVar14,iVar9,1);
            FUN_004876e0(uVar6);
            uVar6 = FUN_00488960(iVar14,iVar9,1);
            FUN_00547460(uVar6);
            iVar5 = FUN_004e4020(local_124);
            if (iVar5 == 0x20) {
              uVar6 = FUN_00488960(iVar14,iVar9,local_100);
              iVar5 = FUN_004885d0(uVar6);
              if (iVar5 != 0) {
                iVar8 = (int)(short)uVar11;
                iVar5 = (int)(short)uVar10;
                local_134 = 4;
                uVar6 = FUN_00488960(iVar5,iVar8,((short)*puVar3 - iVar8) + 1);
                FUN_004888a0(uVar6);
                uVar6 = FUN_00488960(iVar5,iVar8,((short)*puVar3 - iVar8) + 1);
                FUN_004876e0(uVar6);
                uVar6 = FUN_00488960(iVar5,iVar8,((short)*puVar3 - iVar8) + 1);
                FUN_00547460(uVar6);
                iVar8 = local_134;
                if (((short)uVar10 < (short)(ushort)*puVar2) &&
                   (sVar12 = uVar10 + 1, sVar12 <= (short)(ushort)*puVar2)) {
                  do {
                    iVar5 = (int)sVar12;
                    uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                                         ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
                    FUN_004888a0(uVar6);
                    uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                                         ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
                    FUN_004876e0(uVar6);
                    uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                                         ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
                    FUN_00547460(uVar6);
                    sVar12 = sVar12 + 1;
                  } while (sVar12 <= (short)(ushort)*puVar2);
                }
                goto LAB_0054c252;
              }
            }
            else {
              uVar6 = FUN_00488960(iVar14,iVar9,local_124);
              iVar5 = FUN_00485fc0(uVar6);
              if (iVar5 != 0) {
                iVar8 = (int)(short)uVar11;
                iVar5 = (int)(short)uVar10;
                local_134 = 4;
                uVar6 = FUN_00488960(iVar5,iVar8,((short)*puVar3 - iVar8) + 1);
                FUN_004888a0(uVar6);
                uVar6 = FUN_00488960(iVar5,iVar8,((short)*puVar3 - iVar8) + 1);
                FUN_004876e0(uVar6);
                uVar6 = FUN_00488960(iVar5,iVar8,((short)*puVar3 - iVar8) + 1);
                FUN_00547460(uVar6);
                iVar8 = local_134;
                if (((short)uVar10 < (short)(ushort)*puVar2) &&
                   (sVar12 = uVar10 + 1, sVar12 <= (short)(ushort)*puVar2)) {
                  do {
                    iVar5 = (int)sVar12;
                    uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                                         ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
                    FUN_004888a0(uVar6);
                    uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                                         ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
                    FUN_004876e0(uVar6);
                    uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                                         ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
                    FUN_00547460(uVar6);
                    sVar12 = sVar12 + 1;
                  } while (sVar12 <= (short)(ushort)*puVar2);
                }
                goto LAB_0054c252;
              }
            }
            uVar11 = uVar11 + 1;
          } while ((short)uVar11 <= (short)*puVar3);
        }
        uVar10 = uVar10 + 1;
      } while ((short)uVar10 <= (short)(ushort)*puVar2);
    }
  }
  else if (iVar5 == 2) {
    thunk_FUN_0040add0();
    local_108 = *param_2;
    uVar13 = local_108 & 0xffff;
    if ((short)local_108 <= (short)(ushort)*puVar2) {
      do {
        iVar5 = (int)(short)uVar13;
        uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                             ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
        FUN_004888a0(uVar6);
        uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                             ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
        FUN_004876e0(uVar6);
        uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                             ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
        FUN_00547460(uVar6);
        uVar13 = uVar13 + 1;
      } while ((short)uVar13 <= (short)(ushort)*puVar2);
    }
    uVar13 = (uint)(short)*puVar1;
    uVar6 = FUN_00488960((int)(short)(ushort)*param_2,uVar13,param_3);
    iVar5 = FUN_00547440(uVar6);
    if (iVar5 == 0) {
      uVar7 = (uint)(ushort)*param_2;
      if ((short)(ushort)*param_2 <= (short)(ushort)*puVar2) {
        do {
          uVar10 = *puVar1;
          if ((short)uVar10 <= (short)*puVar3) {
            local_138 = uVar7 & 0xffff;
            do {
              local_138 = CONCAT22(uVar10,(undefined2)local_138);
              uVar13 = uVar13 & 0xffff0000;
              iVar8 = FUN_0054ad70(local_138,*param_2,local_108,local_108,uVar13,3);
              if (iVar8 != 0) goto LAB_0054c252;
              uVar10 = uVar10 + 1;
            } while ((short)uVar10 <= (short)*puVar3);
          }
          uVar7 = uVar7 + 1;
          iVar8 = local_134;
        } while ((short)uVar7 <= (short)(ushort)*puVar2);
      }
    }
    else {
LAB_0054be5c:
      local_134 = 4;
      iVar8 = local_134;
    }
  }
  else if (iVar5 == 3) {
    uVar10 = (ushort)*param_2;
    if ((short)uVar10 <= (short)(ushort)*puVar2) {
      do {
        iVar5 = (int)(short)uVar10;
        uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                             ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
        FUN_004888a0(uVar6);
        uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                             ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
        FUN_004876e0(uVar6);
        uVar6 = FUN_00488960(iVar5,(int)(short)*puVar1,
                             ((int)(short)*puVar3 - (int)(short)*puVar1) + 1);
        FUN_00547460(uVar6);
        uVar10 = uVar10 + 1;
      } while ((short)uVar10 <= (short)(ushort)*puVar2);
    }
    uVar10 = (ushort)*param_2;
    if ((short)uVar10 <= (short)(ushort)*puVar2) {
      do {
        uVar11 = *puVar1;
        if ((short)uVar11 <= (short)*puVar3) {
          do {
            FUN_0052f840();
            iVar5 = FUN_0052f820();
            if (iVar5 == 1) {
              return 1;
            }
            uVar6 = FUN_00488960((int)(short)uVar10,(int)(short)uVar11,param_3);
            iVar5 = FUN_004885d0(uVar6);
            if (iVar5 != 0) goto LAB_0054be5c;
            uVar11 = uVar11 + 1;
          } while ((short)uVar11 <= (short)*puVar3);
        }
        uVar10 = uVar10 + 1;
      } while ((short)uVar10 <= (short)(ushort)*puVar2);
    }
  }
LAB_0054c252:
  local_134 = iVar8;
  FUN_00488980(0,0);
  uVar6 = FUN_00488960(0);
  FUN_004865d0(uVar6);
  uVar4 = FUN_00526090(0x4e);
  FUN_00526070(0x4e,0);
  iVar8 = FUN_0054ed60(0);
  FUN_00526070(0x4e,uVar4);
  if (local_134 == 0) {
    local_134 = iVar8;
  }
  return local_134;
}


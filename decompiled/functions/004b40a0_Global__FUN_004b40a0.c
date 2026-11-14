// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b40a0
// entry: 004b40a0  size: 770


undefined4 FUN_004b40a0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  byte local_34 [12];
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c [3];
  char acStack_10 [16];
  
  bVar7 = true;
  bVar2 = FUN_0052f6b0(0x3d);
  if ((*param_1 & 0xf) == 10) {
    return 1;
  }
  iVar3 = FUN_004b45a0(local_1c,param_1);
  if (iVar3 == -1) {
    return 0;
  }
  iVar3 = 0;
  do {
    if (acStack_10[iVar3] != '\0') break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xf);
  if (iVar3 == 0xf) {
    return 0;
  }
  if (param_2 == 2) {
    uVar5 = local_1c[0] + 2 + param_3;
    if (0xb < (int)uVar5) goto LAB_004b4180;
    if (0 < (int)uVar5) goto LAB_004b4185;
    bVar2 = (byte)*param_1;
code_r0x004b4260:
    FUN_004e5780(param_1);
    if ((bVar2 & 0x80) != 0) {
      *(byte *)param_1 = (byte)*param_1 | 0x80;
      return 1;
    }
  }
  else {
    if (param_2 == 3) {
      if (param_3 == 0) {
LAB_004b4180:
        uVar5 = 0xb;
      }
      else {
        uVar5 = param_3 + 1;
      }
    }
    else {
      if ((((-1 < local_1c[0]) ||
           (iVar3 = (-(uint)(param_2 != 0) & 0xfffffff9) - 2, local_1c[0] < iVar3)) ||
          ((bVar2 & 0x70) != 0)) || (-3 < local_1c[0])) goto LAB_004b4180;
      bVar7 = iVar3 != -9;
      uVar5 = local_1c[0] + 0xd;
      if ((int)uVar5 < 1) {
        uVar5 = 1;
        bVar7 = false;
      }
    }
LAB_004b4185:
    iVar3 = (local_1c[0] - uVar5) + 1;
    if (((iVar3 < -0x6d) || (99 < iVar3)) || (!bVar7)) {
      FUN_00554ab0(local_34,param_1,0xc);
    }
    else {
      uVar1 = *param_1;
      local_24 = param_1[1];
      local_20 = param_1[2];
      local_28 = *param_1 & 0xffffff7f;
      FUN_004e7af0(&local_28,local_34,uVar5);
      if ((uVar1 & 0x80) != 0) {
        local_34[0] = local_34[0] | 0x80;
      }
      iVar3 = FUN_004e4020(local_34);
      if (iVar3 != 0) {
        FUN_00554ab0(local_34,param_1,0xc);
      }
      iVar3 = FUN_004b45a0(local_1c,local_34);
      if (iVar3 == -1) {
        return 0;
      }
      if (param_2 == 2) {
        uVar5 = local_1c[0] + 2 + param_3;
        if ((int)uVar5 < 0xc) {
          if ((int)uVar5 < 1) {
            bVar2 = (byte)*param_1;
            goto code_r0x004b4260;
          }
        }
        else {
          uVar5 = 0xb;
        }
      }
      else if (param_2 == 3) {
        if (param_3 == 0) {
          uVar5 = 0xb;
        }
        else {
          uVar5 = param_3 + 1;
        }
      }
      else if (((local_1c[0] < 0) &&
               ((int)((-(uint)(param_2 != 0) & 0xfffffff9) - 2) <= local_1c[0])) &&
              ((bVar2 & 0x70) == 0)) {
        if (local_1c[0] < -2) {
          uVar5 = local_1c[0] + 0xd;
          if ((int)uVar5 < 1) {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 0xb;
        }
      }
      else {
        uVar5 = 0xb;
      }
    }
    iVar3 = (int)uVar5 / 2;
    iVar4 = iVar3 + 1;
    uVar5 = uVar5 & 0x80000001;
    bVar7 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar7 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar7) {
      local_34[iVar3 + 1] = local_34[iVar3 + 1] & 0xf0;
      iVar4 = iVar3 + 2;
    }
    if (iVar4 < 9) {
      pbVar6 = local_34 + iVar4;
      for (uVar5 = 9U - iVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        pbVar6[3] = 0;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar5 = 9U - iVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar6 = 0;
        pbVar6 = pbVar6 + 1;
      }
    }
    iVar3 = FUN_004b45a0(local_1c,local_34);
    if (iVar3 == -1) {
      return 0;
    }
    iVar3 = 0;
    do {
      if (acStack_10[iVar3] != '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xf);
    if (iVar3 == 0xf) {
      local_34[0] = local_34[0] & 0xf0;
      local_34[1] = local_34[1] & 0xf;
    }
    FUN_00554ab0(param_1,local_34,0xc);
  }
  return 1;
}


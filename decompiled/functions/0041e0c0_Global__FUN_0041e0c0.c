// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041e0c0
// entry: 0041e0c0  size: 886


bool FUN_0041e0c0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 uVar7;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 uVar8;
  short *psVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  short local_38 [14];
  short local_1c [14];
  
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[10] = 0;
  local_1c[0xb] = 0;
  local_1c[0xc] = 0;
  FUN_0042a4c0(local_38,param_1,0xc);
  FUN_0042ab20(local_38,0,0xc);
  psVar3 = local_38;
  FUN_0042ab70(local_38,1);
  FUN_0042a4c0(local_1c,param_2,0xc);
  FUN_0042ab20(local_1c,0,0xc);
  psVar9 = local_1c;
  FUN_0042ab70(local_1c,1);
  while (sVar1 = *psVar3, sVar1 != 0x2a) {
    if (sVar1 == 0x3f) {
      if (*psVar9 == 0x2e) {
        return false;
      }
      if (*psVar9 == 0) {
        return false;
      }
      psVar3 = psVar3 + 1;
      psVar9 = psVar9 + 1;
    }
    else {
      if ((sVar1 == 0x2e) || (sVar1 == 0)) {
        uVar10 = FUN_0041a0c0(CONCAT22(extraout_var,*psVar9));
        uVar8 = (undefined2)((ulonglong)uVar10 >> 0x30);
        uVar7 = extraout_var_03;
        while ((int)uVar10 != 0) {
          psVar4 = psVar9 + 1;
          psVar9 = psVar9 + 1;
          uVar10 = FUN_0041a0c0(*psVar4);
          uVar8 = (undefined2)((ulonglong)uVar10 >> 0x30);
          uVar7 = extraout_var_04;
        }
        sVar1 = *psVar9;
        psVar4 = (short *)0x0;
joined_r0x0041e2c0:
        if ((sVar1 != 0x2e) && (sVar1 != 0)) {
          return false;
        }
        goto LAB_0041e2c7;
      }
      sVar2 = *psVar9;
      if ((sVar2 == 0x2e) || (sVar2 == 0)) {
        iVar5 = FUN_0041a0c0(CONCAT22(extraout_var_09,*psVar3));
        uVar8 = extraout_var_11;
        uVar7 = extraout_var_01;
        while (uVar6 = (undefined2)((uint)iVar5 >> 0x10), iVar5 != 0) {
          psVar4 = psVar3 + 1;
          psVar3 = psVar3 + 1;
          iVar5 = FUN_0041a0c0(CONCAT22(uVar6,*psVar4));
          uVar8 = extraout_var_12;
          uVar7 = extraout_var_02;
        }
        sVar1 = *psVar3;
        psVar4 = (short *)CONCAT22(uVar6,sVar1);
        goto joined_r0x0041e2c0;
      }
      if (sVar1 != sVar2) {
        return false;
      }
      psVar3 = psVar3 + 1;
      psVar9 = psVar9 + 1;
    }
  }
  iVar5 = FUN_0042ac10(psVar3,0x2e);
  if (iVar5 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x2e;
  }
  psVar3 = (short *)FUN_0042ac10(psVar3,uVar11);
  iVar5 = FUN_0042ac10(psVar9,0x2e);
  if (iVar5 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x2e;
  }
  psVar4 = (short *)FUN_0042ac10(psVar9,uVar11);
  psVar9 = psVar4;
  uVar8 = extraout_var_10;
  uVar7 = extraout_var_00;
  if (*psVar3 == 0) {
    return true;
  }
LAB_0041e2c7:
  uVar6 = (undefined2)((uint)psVar4 >> 0x10);
  if (*psVar3 == 0x2e) {
    iVar5 = FUN_0041a0c0(CONCAT22(uVar6,psVar3[1]));
    uVar8 = extraout_var_13;
    uVar7 = extraout_var_05;
    psVar4 = psVar3;
    while (iVar5 != 0) {
      iVar5 = FUN_0041a0c0(psVar4[2]);
      uVar8 = extraout_var_14;
      uVar7 = extraout_var_06;
      psVar4 = psVar4 + 1;
    }
    uVar6 = 0;
    if ((psVar4[1] == 0) && (*psVar9 == 0)) {
      return true;
    }
  }
  if (*psVar9 == 0x2e) {
    iVar5 = FUN_0041a0c0(CONCAT22(uVar8,psVar9[1]));
    uVar7 = extraout_var_07;
    psVar4 = psVar9;
    while( true ) {
      uVar6 = (undefined2)((uint)iVar5 >> 0x10);
      if (iVar5 == 0) break;
      iVar5 = FUN_0041a0c0(CONCAT22(uVar6,psVar4[2]));
      uVar7 = extraout_var_08;
      psVar4 = psVar4 + 1;
    }
    if ((psVar4[1] == 0) && (*psVar3 == 0)) {
      return true;
    }
  }
  sVar1 = *psVar3;
  if (sVar1 == *psVar9) {
    if (sVar1 == 0) {
      return true;
    }
  }
  else if (sVar1 == 0) goto LAB_0041e383;
  psVar3 = psVar3 + 1;
LAB_0041e383:
  if (*psVar9 != 0) {
    psVar9 = psVar9 + 1;
  }
  while( true ) {
    while( true ) {
      sVar1 = *psVar3;
      if (sVar1 == 0x2a) {
        return true;
      }
      if (sVar1 != 0x3f) break;
      if (*psVar9 == 0) {
        return false;
      }
      psVar3 = psVar3 + 1;
      psVar9 = psVar9 + 1;
    }
    if (sVar1 == 0) {
      iVar5 = FUN_0041a0c0(CONCAT22(uVar6,*psVar9));
      while (iVar5 != 0) {
        psVar3 = psVar9 + 1;
        psVar9 = psVar9 + 1;
        iVar5 = FUN_0041a0c0(*psVar3);
      }
      return *psVar9 == 0;
    }
    if (*psVar9 == 0) break;
    if (sVar1 != *psVar9) {
      return false;
    }
    psVar3 = psVar3 + 1;
    psVar9 = psVar9 + 1;
  }
  iVar5 = FUN_0041a0c0(CONCAT22(uVar7,*psVar3));
  while (iVar5 != 0) {
    psVar9 = psVar3 + 1;
    psVar3 = psVar3 + 1;
    iVar5 = FUN_0041a0c0(*psVar9);
  }
  return *psVar3 == 0;
}


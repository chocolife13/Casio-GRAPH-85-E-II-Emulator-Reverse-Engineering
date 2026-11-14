// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054a8a0
// entry: 0054a8a0  size: 1227


undefined4 FUN_0054a8a0(short *param_1,int param_2,undefined4 param_3,int *param_4)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  short *psVar11;
  short *psVar12;
  undefined2 uVar13;
  uint local_50;
  undefined4 local_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [24];
  undefined1 local_2c [44];
  
  psVar3 = param_1;
  local_4c = FUN_00526410();
  FUN_00538980(0,0,local_48);
  puVar7 = &DAT_00599ba0;
  puVar9 = &DAT_005d2a30;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_00538860(0,&DAT_005d2a30);
  FUN_005387f0(0);
  *param_4 = 0;
  if (param_2 == 2) {
    sVar5 = param_1[3];
    if (sVar5 == 0) {
      param_1[0xd] = 0x1a;
      param_1[0xf] = 1;
      param_1[0xb] = 1;
      param_1[0xc] = param_1[4];
      param_1[0xe] = param_1[4];
    }
    else if (param_1[4] == 0) {
      param_1[0xb] = sVar5;
      param_1[0xf] = 1;
      param_1[0xc] = 1;
      param_1[0xd] = sVar5;
      param_1[0xe] = 999;
    }
  }
  else if (param_2 == 3) {
    param_1[5] = 1;
    param_1[0xf] = 1;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_1 + 8);
  }
  else {
    param_1[0xf] = 1;
    param_1[0xd] = param_1[3];
    param_1[0xb] = param_1[3];
    param_1[0xe] = param_1[4];
    param_1[0xc] = param_1[4];
  }
LAB_0054a998:
  do {
    do {
      puVar10 = local_2c;
      FUN_0054d3b0(psVar3,0,0,puVar10,local_44);
      uVar13 = (undefined2)((uint)puVar10 >> 0x10);
      FUN_0054da30(psVar3,0,1);
      FUN_00538b30();
      FUN_00526420(0x27);
      iVar6 = FUN_00526620(&local_50);
    } while (iVar6 != 0);
    if (0x7544 < local_50) {
      if (local_50 != 0x7545) {
        if (local_50 == 0x7547) {
          if (((psVar3[3] < 1) || (sVar5 = psVar3[4], 0x3e6 < sVar5)) || (sVar5 == 0)) {
            if (((psVar3[3] == 0) && (sVar5 = psVar3[4], sVar5 < 999)) && (sVar5 != 0)) {
              psVar3[9] = psVar3[9] + 1;
              psVar3[4] = sVar5 + 1;
              if (psVar3[2] + -1 + (int)*psVar3 < (int)(short)(sVar5 + 1)) {
                psVar3[2] = psVar3[2] + 1;
              }
            }
          }
          else {
            psVar3[4] = sVar5 + 1;
            if (psVar3[2] + -1 + (int)*psVar3 < (int)(short)(sVar5 + 1)) {
              psVar3[2] = psVar3[2] + 1;
            }
          }
        }
        else if (local_50 == 0x754d) {
          uVar8 = 0xffffffff;
          goto LAB_0054ad41;
        }
        goto LAB_0054a998;
      }
      sVar5 = psVar3[3];
      if (sVar5 == 0) {
LAB_0054acfd:
        if (((0x19 < sVar5) || (sVar5 == 0)) || (psVar3[4] != 0)) goto LAB_0054a998;
        psVar3[8] = psVar3[8] + 1;
        psVar3[3] = sVar5 + 1;
      }
      else {
        if (0x19 < sVar5) goto LAB_0054a998;
        if (psVar3[4] == 0) goto LAB_0054acfd;
        psVar3[3] = sVar5 + 1;
      }
      if (psVar3[1] + 3 < (int)(short)(sVar5 + 1)) {
        psVar3[1] = psVar3[1] + 1;
      }
      goto LAB_0054a998;
    }
    if (local_50 == 0x7544) {
      sVar5 = psVar3[3];
      if (1 < sVar5) {
        if (psVar3[4] < 1) {
          if ((sVar5 < 2) || (psVar3[4] != 0)) goto LAB_0054a998;
          psVar3[8] = psVar3[8] + -1;
          psVar3[3] = sVar5 + -1;
        }
        else {
          psVar3[3] = sVar5 + -1;
        }
        if ((0 < (short)(sVar5 + -1)) && ((short)(sVar5 + -1) < psVar3[1])) {
          psVar3[1] = psVar3[1] + -1;
        }
      }
      goto LAB_0054a998;
    }
    if (local_50 == 0x31) {
      psVar1 = psVar3 + 0xb;
      if (psVar3[0xd] < psVar3[0xb]) {
        psVar11 = psVar1;
        FUN_00488d30(psVar1,psVar3 + 0xd);
        uVar13 = (undefined2)((uint)psVar11 >> 0x10);
      }
      psVar11 = psVar3 + 0xc;
      if (psVar3[0xe] < psVar3[0xc]) {
        psVar12 = psVar11;
        FUN_00488d30(psVar11,psVar3 + 0xe);
        uVar13 = (undefined2)((uint)psVar12 >> 0x10);
      }
      if (((int)psVar3[3] - (int)*psVar1) + (int)psVar3[0xd] < 0x1b) {
        sVar5 = psVar3[4];
        if (999 < ((int)sVar5 - (int)*psVar11) + (int)psVar3[0xe]) goto LAB_0054abac;
        sVar2 = 1;
        if (psVar3[3] != 0) {
          sVar2 = psVar3[3];
        }
        param_1 = (short *)CONCAT22(1,sVar2);
        if (sVar5 != 0) {
          param_1 = (short *)CONCAT22(sVar5,sVar2);
        }
        param_2 = CONCAT22(*psVar11,*psVar1);
        FUN_0052f860();
        thunk_FUN_0040add0();
        iVar6 = FUN_0054ad70(param_1,param_2,*(undefined4 *)psVar1,*(undefined4 *)(psVar3 + 0xd),
                             CONCAT22(uVar13,psVar3[0xf]),param_3);
        *param_4 = iVar6;
        if (iVar6 == 1) {
          FUN_0052b240(1);
          goto LAB_0054ad37;
        }
        cVar4 = FUN_00526090(0x4e);
        if (cVar4 == '\0') {
          uVar8 = FUN_00488960(0);
          FUN_004865d0(uVar8);
          FUN_00488980(0,0);
          iVar6 = FUN_0054ed60(0);
          if ((iVar6 != 0) && (*param_4 == 0)) {
            iVar6 = FUN_00488980(0,1);
            *param_4 = iVar6;
          }
          iVar6 = *param_4;
          if (iVar6 != 0) goto LAB_0054ab95;
        }
        else {
          iVar6 = *param_4;
LAB_0054ab95:
          FUN_0052b240(iVar6);
        }
        if ((short)param_3 == 2) {
LAB_0054ad37:
          uVar8 = 0xfffffff4;
LAB_0054ad41:
          FUN_00526420(local_4c);
          FUN_00538810();
          FUN_005389c0(0,0,local_48);
          return uVar8;
        }
      }
      else {
LAB_0054abac:
        FUN_0052b240(0x1c);
      }
      goto LAB_0054a998;
    }
    if (local_50 == 0x7532) {
      uVar8 = 0xfffffffe;
      goto LAB_0054ad41;
    }
  } while (local_50 != 0x7542);
  if ((psVar3[3] < 1) || (psVar3[4] < 2)) {
    if ((psVar3[3] != 0) || (psVar3[4] < 2)) goto LAB_0054a998;
    sVar5 = psVar3[4] + -1;
    psVar3[9] = psVar3[9] + -1;
    psVar3[4] = sVar5;
  }
  else {
    sVar5 = psVar3[4] + -1;
    psVar3[4] = sVar5;
  }
  if ((0 < sVar5) && (sVar5 < psVar3[2])) {
    psVar3[2] = psVar3[2] + -1;
  }
  goto LAB_0054a998;
}


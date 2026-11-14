// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00489760
// entry: 00489760  size: 698


int FUN_00489760(short *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  psVar3 = param_1;
  FUN_00485e40(local_24);
  iVar6 = 0;
  sVar1 = *param_1;
  sVar2 = param_1[2];
  if (sVar1 == sVar2) {
LAB_0048979f:
    iVar7 = (int)param_1[1];
    sVar1 = param_1[3];
    local_28 = (int)sVar1;
    iVar8 = iVar7;
    if (local_28 < iVar7) {
      param_1[3] = param_1[1];
      param_1[1] = sVar1;
      iVar8 = local_28;
      local_28 = iVar7;
    }
  }
  else {
    if (param_1[1] != param_1[3]) {
      iVar6 = 0x21;
      goto LAB_004899e9;
    }
    if (sVar1 == sVar2) goto LAB_0048979f;
    iVar7 = (int)sVar1;
    local_28 = (int)sVar2;
    iVar8 = iVar7;
    if (local_28 < iVar7) {
      param_1[2] = sVar1;
      *param_1 = sVar2;
      iVar8 = local_28;
      local_28 = iVar7;
    }
  }
  FUN_00528480(param_2,param_3);
  param_1 = (short *)0x1;
  if (local_28 < iVar8) {
    return 0;
  }
  do {
    if (999 < iVar8) break;
    FUN_0052f840();
    iVar7 = FUN_0052f820();
    if (iVar7 == 1) {
      iVar6 = 1;
      goto LAB_004899e9;
    }
    if (*psVar3 != psVar3[2]) {
      iVar7 = FUN_00486f70(local_24,iVar8,(int)psVar3[1]);
      if (iVar7 != 1) {
        iVar5 = (int)psVar3[1];
        iVar7 = iVar8;
        goto LAB_0048987c;
      }
LAB_00489a0c:
      iVar6 = 2;
      goto LAB_004899e9;
    }
    iVar7 = FUN_00486f70(local_24,(int)*psVar3,iVar8);
    if (iVar7 == 1) goto LAB_00489a0c;
    iVar7 = (int)*psVar3;
    iVar5 = iVar8;
LAB_0048987c:
    bVar4 = FUN_00486fb0(local_24,iVar7,iVar5);
    if ((bVar4 & 4) == 0) {
      if ((bVar4 & 2) == 0) {
        if (bVar4 == 1) {
          if (*psVar3 == psVar3[2]) {
            iVar6 = (int)*psVar3;
            iVar7 = iVar8;
          }
          else {
            iVar7 = (int)psVar3[1];
            iVar6 = iVar8;
          }
          iVar6 = FUN_00486570(local_24,iVar6,iVar7,local_18,0);
          if (iVar6 == 1) {
            iVar6 = FUN_004e4020(local_18);
            if (iVar6 == 0) goto LAB_004899b4;
          }
          else {
            iVar6 = 4;
          }
          if ((param_4 & 0xf000) == 0x1000) break;
          if ((param_4 & 0xf000) == 0x2000) {
LAB_004899ac:
            FUN_004e5780(local_c);
            goto LAB_004899b4;
          }
        }
        else {
          if ((param_4 & 0xf00) == 0x100) goto LAB_00489a0c;
          if ((param_4 & 0xf00) == 0x200) goto LAB_004899ac;
        }
      }
      else {
        if ((param_4 & 0xf) == 1) goto LAB_00489a0c;
        if ((param_4 & 0xf) == 2) goto LAB_004899ac;
      }
    }
    else {
      if ((param_4 & 0xf0) == 0x10) goto LAB_00489a0c;
      if ((param_4 & 0xf0) == 0x2000) goto LAB_004899ac;
      if ((bVar4 & 1) == 0) goto LAB_004899d8;
      if (*psVar3 == psVar3[2]) {
        iVar6 = (int)*psVar3;
        iVar7 = iVar8;
      }
      else {
        iVar7 = (int)psVar3[1];
        iVar6 = iVar8;
      }
      iVar6 = FUN_00486570(local_24,iVar6,iVar7,local_18,0);
      if (iVar6 == 1) {
        iVar6 = FUN_004e4020(local_18);
        if (iVar6 != 0) goto LAB_00489a0c;
        iVar6 = 0;
      }
      else {
        iVar6 = 4;
      }
LAB_004899b4:
      iVar7 = FUN_00527b90(param_2,param_3,param_1,local_18);
      if (iVar7 != 0) {
        iVar6 = 4;
        goto LAB_004899e9;
      }
      param_1 = (short *)((int)param_1 + 1);
    }
LAB_004899d8:
    iVar8 = iVar8 + 1;
  } while (iVar8 <= local_28);
  if (iVar6 == 0) {
    return 0;
  }
LAB_004899e9:
  FUN_00528480(param_2,param_3);
  return iVar6;
}


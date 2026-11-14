// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fd5b0
// entry: 004fd5b0  size: 943


int FUN_004fd5b0(char *param_1,char *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *local_4;
  
  puVar3 = param_3;
  pcVar2 = param_1;
  pbVar1 = (byte *)param_3[1];
  bVar4 = *pbVar1;
  if (((1 < bVar4) && (pbVar1[bVar4] == 0xbb)) && (pbVar1[bVar4 - 1] == 0xbb)) {
    FUN_004fd9e0(param_1);
    pcVar2 = param_2;
    FUN_004fd9e0(param_2);
    iVar6 = FUN_00501f30(pcVar2);
    return iVar6;
  }
  iVar6 = FUN_004fe150(param_1);
  pcVar10 = param_2;
  if ((iVar6 == 0) || (iVar6 = FUN_004fe150(param_2), iVar6 == 0)) {
    iVar6 = FUN_00501f30(pcVar10);
    return iVar6;
  }
  if ((*pcVar10 == '\0') && (pcVar10[1] == '\0')) {
    iVar6 = FUN_00501ed0(pcVar10);
    return iVar6;
  }
  if ((*pcVar2 != '\0') || (pcVar2[1] != '\0')) {
    cVar5 = FUN_00526090(0x17);
    if (cVar5 == '\0') {
      cVar5 = FUN_00526090(0x2a);
      FUN_004e0ef0(pcVar2,pcVar10,pcVar10,(int)cVar5);
      iVar6 = FUN_004e4020(pcVar10);
      if (iVar6 != 0) {
        return 0;
      }
      iVar6 = FUN_005008e0(pbVar1,&param_1);
      if (iVar6 == 0) {
        if (*pbVar1 != 0) {
          *pbVar1 = *pbVar1 + 1;
        }
        return 1;
      }
      if ((char)param_1 != -0x45) {
        iVar6 = FUN_004b7370(param_1);
        if (iVar6 != 0) {
          *pbVar1 = *pbVar1 + 1;
        }
        *pbVar1 = *pbVar1 + 1;
        return 1;
      }
      iVar6 = FUN_004fe120(pcVar2);
      if ((iVar6 != 0) && (iVar6 = FUN_004fe120(pcVar10), iVar6 != 0)) {
        FUN_00500880(&local_4,*puVar3);
        iVar6 = FUN_004fe120(local_4);
        if (iVar6 != 0) {
          param_1 = (char *)CONCAT31(param_1._1_3_,0x89);
          iVar6 = FUN_004fd530(local_4);
          iVar7 = FUN_004fd530(pcVar10);
          cVar5 = FUN_00526090(0x2a);
          cVar5 = FUN_00526090(0x13,(int)cVar5);
          iVar8 = FUN_004ee060(&param_1,local_4,pcVar10,pcVar10,(int)cVar5);
          if (iVar8 == 0) {
            return 0;
          }
          if (iVar6 + iVar7 != 1) {
            return iVar8;
          }
          iVar6 = FUN_004fd960(pcVar10);
          return iVar6;
        }
      }
    }
    else {
      param_1 = (char *)CONCAT31(param_1._1_3_,0xb9);
      cVar5 = FUN_00526090(0x2a);
      cVar5 = FUN_00526090(0x13,(int)cVar5);
      iVar6 = FUN_004ee060(&param_1,pcVar2,pcVar10,pcVar10,(int)cVar5);
      if (iVar6 == 0) {
        return 0;
      }
      iVar7 = FUN_005008e0(pbVar1,&param_1);
      if (iVar7 == 0) {
        if (*pbVar1 != 0) {
          *pbVar1 = *pbVar1 + 1;
        }
        return iVar6;
      }
      if ((char)param_1 != -0x45) {
        *pbVar1 = *pbVar1 + 1;
        return iVar6;
      }
      iVar7 = FUN_004fe120(pcVar2);
      if ((iVar7 != 0) && (iVar7 = FUN_004fe120(pcVar10), iVar7 != 0)) {
        param_1 = (char *)CONCAT31(param_1._1_3_,0x89);
        FUN_00500880(&local_4,*param_3);
        iVar7 = FUN_004fe120(local_4);
        if (iVar7 == 0) {
          iVar6 = FUN_00501ed0(pcVar10);
          return iVar6;
        }
        iVar7 = FUN_004fd530(local_4);
        iVar8 = FUN_004fd530(pcVar10);
        cVar5 = FUN_00526090(0x2a);
        cVar5 = FUN_00526090(0x13,(int)cVar5);
        iVar9 = FUN_004ee060(&param_1,local_4,pcVar10,pcVar10,(int)cVar5);
        if (iVar9 != 0) {
          if (iVar7 + iVar8 == 1) {
            iVar6 = FUN_004fd960(pcVar10);
          }
          return iVar6;
        }
        return 0;
      }
    }
LAB_004fd8a1:
    iVar6 = FUN_00501ed0(pcVar10);
    return iVar6;
  }
  iVar6 = FUN_005008e0(pbVar1,&param_1);
  if (iVar6 == 0) {
    bVar4 = *pbVar1;
    if (bVar4 == 0) goto LAB_004fd6be;
  }
  else {
    if ((char)param_1 == -0x45) {
      iVar6 = FUN_004fe120(pcVar2);
      if ((iVar6 != 0) && (iVar6 = FUN_004fe120(pcVar10), iVar6 != 0)) {
        FUN_00500880(&local_4,*puVar3);
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pcVar10 = *local_4;
          local_4 = local_4 + 1;
          pcVar10 = pcVar10 + 4;
        }
        return 1;
      }
      goto LAB_004fd8a1;
    }
    bVar4 = *pbVar1;
  }
  *pbVar1 = bVar4 + 1;
LAB_004fd6be:
  FUN_004e5780(pcVar10);
  return 1;
}


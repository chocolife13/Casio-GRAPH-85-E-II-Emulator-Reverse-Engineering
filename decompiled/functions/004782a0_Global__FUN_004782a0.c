// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004782a0
// entry: 004782a0  size: 1514


undefined4
FUN_004782a0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  local_6c = 0;
  FUN_004b6ef0(local_68,s_StatGraph_005bf54c);
  uVar2 = FUN_0055c2fe(param_1,local_70,10);
  FUN_004b6e70(local_68,uVar2);
  FUN_005232d0(1,1);
  if (param_2 == 1) {
    FUN_00523490(local_68);
    if (param_8 != 0) {
      FUN_005383e0(0);
    }
  }
  else {
    FUN_00523470(local_68,0x15);
  }
  if (param_4 == 0) {
    pcVar5 = s_Graph_Type___005bf5f0;
  }
  else {
    pcVar5 = s_Graph_Type__005bf600;
  }
  FUN_004b6ef0(local_68,pcVar5);
  FUN_004b6e70(local_68,param_6);
  FUN_005232d0(1,2);
  if (param_2 == 2) {
    FUN_00523490(local_68);
    if (param_8 != 0) {
      FUN_005383e0(1);
    }
  }
  else {
    FUN_00523470(local_68,0x15);
  }
  if (param_4 == 0) {
    FUN_004781e0(s_XList___005bf5d4,(int)*(short *)(param_3 + 4),local_68);
  }
  else {
    if (param_2 == 3) {
      local_6c = 1;
    }
    FUN_004b6ef0(local_68,s_XCellRange__005bf5e4);
    iVar3 = FUN_00477d70(param_4 + 4,param_4 + 8,local_34);
    if (iVar3 != 0) {
      FUN_004b6e70(local_68,local_34);
    }
  }
  FUN_005232d0(1,3);
  if (param_2 == 3) {
    FUN_00523490(local_68);
    if (param_8 != 0) {
      FUN_005383e0(6);
    }
  }
  else {
    FUN_00523470(local_68,0x15);
  }
  iVar3 = param_7 + -1;
  switch(iVar3) {
  case 0:
  case 3:
    if (param_4 == 0) {
      sVar1 = *(short *)(param_3 + 6);
LAB_004785d0:
      pcVar5 = s_YList___005bf580;
LAB_004785d5:
      FUN_004781e0(pcVar5,(int)sVar1,local_68);
    }
    else {
      if (param_2 == 4) {
        local_6c = 2;
      }
      FUN_004b6ef0(local_68,s_YCellRange__005bf5ac);
      iVar4 = FUN_00477d70(param_4 + 0xc,param_4 + 0x10,local_34);
      if (iVar4 != 0) {
        FUN_004b6e70(local_68,local_34);
      }
    }
    break;
  case 1:
    if (param_4 == 0) {
      FUN_00478240(s_Mark_Type___005bf5b8,(int)*(short *)(param_3 + 10),local_68);
    }
    else {
      FUN_00478240(s_Mark_Type___005bf5c8,(int)*(short *)(param_3 + 10),local_68);
    }
    break;
  case 2:
  case 4:
    if ((*(short *)(param_3 + 2) < 0x11) || (0x12 < *(short *)(param_3 + 2))) {
      if (param_4 == 0) {
        sVar1 = *(short *)(param_3 + 8);
        pcVar5 = s_Frequency___005bf590;
        goto LAB_004785d5;
      }
      if (param_2 == 4) {
        local_6c = 3;
      }
      FUN_004b6ef0(local_68,s_Frequency___005bf5a0);
      iVar4 = FUN_00477d70(param_4 + 0x14,param_4 + 0x18,local_34);
      if (iVar4 != 0) {
        FUN_004b6e70(local_68,local_34);
      }
    }
    else {
      if (param_4 == 0) {
        sVar1 = *(short *)(param_3 + 6);
        goto LAB_004785d0;
      }
      if (param_2 == 4) {
        local_6c = 2;
      }
      FUN_004b6ef0(local_68,s_YCellRange__005bf5ac);
      iVar4 = FUN_00477d70(param_4 + 0xc,param_4 + 0x10,local_34);
      if (iVar4 != 0) {
        FUN_004b6e70(local_68,local_34);
      }
    }
  }
  FUN_005232d0(1,4);
  if (param_2 == 4) {
    FUN_00523490(local_68);
    switch(iVar3) {
    case 0:
    case 3:
switchD_00478602_caseD_0:
      if (param_8 != 0) {
        FUN_005383e0(7);
      }
      break;
    case 1:
      if (param_8 != 0) {
        FUN_005383e0(9);
      }
      break;
    case 2:
    case 4:
      if ((0x10 < *(short *)(param_3 + 2)) && (*(short *)(param_3 + 2) < 0x13))
      goto switchD_00478602_caseD_0;
      if (param_8 != 0) {
        FUN_005383e0(8);
      }
    }
  }
  else {
    FUN_00523470(local_68,0x15);
  }
  switch(iVar3) {
  case 0:
  case 3:
    if (param_4 == 0) {
      FUN_004781e0(s_Frequency___005bf590,(int)*(short *)(param_3 + 8),local_68);
    }
    else {
      if (param_2 == 5) {
        local_6c = 3;
      }
      FUN_004b6ef0(local_68,s_Frequency___005bf5a0);
      iVar3 = FUN_00477d70(param_4 + 0x14,param_4 + 0x18,local_34);
      if (iVar3 != 0) {
        puVar6 = local_34;
        goto LAB_00478772;
      }
    }
    break;
  case 1:
  case 2:
    FUN_004b6ef0(local_68,&DAT_005cd010);
    break;
  case 4:
    if (param_4 == 0) {
      FUN_004b6ef0(local_68,s_Outliers___005bf564);
      if (*(short *)(param_3 + 2) == 5) {
        puVar6 = &DAT_005bf30c;
      }
      else {
        puVar6 = &DAT_005bf310;
      }
    }
    else {
      if (param_2 == 5) {
        local_6c = 3;
      }
      FUN_004b6ef0(local_68,s_Outliers___005bf574);
      if (*(short *)(param_4 + 2) == 5) {
        puVar6 = &DAT_005bf30c;
      }
      else {
        puVar6 = &DAT_005bf310;
      }
    }
LAB_00478772:
    FUN_004b6e70(local_68,puVar6);
  }
  FUN_005232d0(1,5);
  if (param_2 == 5) {
    FUN_00523490(local_68);
    if (param_8 == 0) goto LAB_004787da;
    if (param_7 != 5) {
      FUN_005383e0(8);
      goto LAB_004787da;
    }
    FUN_005383e0(10);
  }
  else {
    FUN_00523470(local_68,0x15);
LAB_004787da:
    if (param_7 == 1) {
      if (param_4 == 0) {
        pcVar5 = s_Mark_Type___005bf5b8;
      }
      else {
        pcVar5 = s_Mark_Type___005bf5c8;
      }
      FUN_00478240(pcVar5,(int)*(short *)(param_3 + 10),local_68);
      goto LAB_00478822;
    }
    if ((param_7 < 2) || (5 < param_7)) goto LAB_00478822;
  }
  FUN_004b6ef0(local_68,&DAT_005cd010);
LAB_00478822:
  FUN_005232d0(1,6);
  if (param_2 == 6) {
    FUN_00523490(local_68);
    if (param_8 != 0) {
      FUN_005383e0(9);
    }
  }
  else {
    FUN_00523470(local_68,0x15);
  }
  FUN_005232d0(1,7);
  FUN_00523470(&DAT_005cd010,0x15);
  return local_6c;
}


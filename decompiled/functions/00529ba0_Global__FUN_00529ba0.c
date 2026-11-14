// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00529ba0
// entry: 00529ba0  size: 968


void FUN_00529ba0(int *param_1,uint *param_2,int *param_3,uint *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = FUN_00529a70(*param_3);
  iVar3 = 0;
  iVar5 = *param_1;
  uVar4 = (*param_2 != 1) + 1;
  if (uVar4 < 8) {
    do {
      iVar3 = FUN_00529a70(iVar5);
      uVar6 = uVar4;
      if (iVar3 == 0x409) {
        uVar6 = uVar4 + 1;
        if (uVar4 == 6) {
          iVar3 = 1;
        }
        else {
          if (uVar4 != 7) goto LAB_00529bff;
          iVar3 = 2;
        }
      }
      else {
LAB_00529bff:
        iVar3 = 0;
      }
      uVar4 = uVar6 + 1;
      iVar5 = iVar5 + 1;
    } while ((int)uVar4 < 8);
  }
  iVar5 = iVar5 + -1;
  iVar2 = 0;
  if (param_5 == 0x7542) {
    if (iVar1 == 0x409) {
      uVar4 = (uint)(*param_4 != 0);
      iVar2 = uVar4 + 100;
      if ((*param_1 == *param_3) && (*param_2 == *param_4)) {
        iVar2 = uVar4 + 0x6e;
      }
    }
    else {
      iVar2 = (-(uint)(*param_1 != *param_3) & 0xfffffff7) + 10;
    }
  }
  else if (param_5 == 0x7547) {
    if (iVar1 == 0x409) {
      uVar4 = *param_4;
      iVar2 = (uVar4 != 1) + 200;
      if (iVar5 == *param_3) {
        if (iVar3 == 1) {
          if (uVar4 == 1) {
LAB_00529ca6:
            iVar2 = (uVar4 != 1) + 0xd2;
          }
        }
        else if ((iVar3 == 2) && (uVar4 == 0)) goto LAB_00529ca6;
      }
    }
    else {
      iVar2 = 0xb;
      if (iVar5 == *param_3) {
        iVar2 = 0xc;
      }
    }
  }
  switch(iVar2) {
  case 1:
    iVar5 = *param_3;
    *param_3 = iVar5 + -1;
    iVar5 = FUN_00529a70(iVar5 + -1);
    if (iVar5 != 0x409) break;
  case 0xc9:
    *param_4 = 1;
    FUN_0042fb70();
    return;
  case 10:
    if (1 < *param_1) {
      iVar5 = *param_3;
      *param_3 = iVar5 + -1;
      iVar5 = FUN_00529a70(iVar5 + -1);
      if (iVar5 == 0x409) {
        *param_2 = 1;
        *param_4 = 1;
      }
      *param_1 = *param_1 + -1;
      FUN_0042fb70();
      return;
    }
    break;
  case 0xb:
    if (*param_3 < 0x14) {
      iVar5 = *param_3 + 1;
      *param_3 = iVar5;
      iVar5 = FUN_00529a70(iVar5);
      if (iVar5 == 0x409) {
        *param_4 = 0;
        FUN_0042fb70();
        return;
      }
    }
    break;
  case 0xc:
    if (*param_3 < 0x14) {
      iVar5 = *param_3 + 1;
      *param_3 = iVar5;
      iVar5 = FUN_00529a70(iVar5);
      if (iVar5 == 0x409) {
        *param_4 = 0;
      }
      iVar5 = FUN_00529a70(*param_1);
      if ((iVar5 != 0x409) || (*param_2 != 0)) {
LAB_00529f38:
        *param_1 = *param_1 + 1;
        *param_2 = 0;
        FUN_0042fb70();
        return;
      }
LAB_00529dbc:
      *param_2 = 1;
      FUN_0042fb70();
      return;
    }
    break;
  case 100:
    if (1 < *param_3) {
      iVar5 = *param_3 + -1;
      *param_3 = iVar5;
      iVar5 = FUN_00529a70(iVar5);
      *param_4 = (uint)(iVar5 == 0x409);
      FUN_0042fb70();
      return;
    }
    goto LAB_00529e4e;
  case 0x65:
switchD_00529c6a_caseD_65:
    *param_4 = 0;
    FUN_0042fb70();
    return;
  case 0x6e:
    if (1 < *param_1) {
      *param_1 = *param_1 + -1;
      iVar5 = *param_3;
      *param_3 = iVar5 + -1;
      iVar5 = FUN_00529a70(iVar5 + -1);
      if (iVar5 == 0x409) {
        *param_4 = 1;
        *param_2 = 1;
        FUN_0042fb70();
        return;
      }
      *param_4 = 0;
      *param_2 = 0;
      FUN_0042fb70();
      return;
    }
LAB_00529e4e:
    *param_3 = 1;
    *param_4 = 0;
    FUN_0042fb70();
    return;
  case 0x6f:
    *param_4 = 0;
    *param_2 = 0;
    FUN_0042fb70();
    return;
  case 200:
    if (*param_3 < 0x14) {
      iVar5 = *param_3 + 1;
      *param_3 = iVar5;
      FUN_00529a70(iVar5);
      goto switchD_00529c6a_caseD_65;
    }
    break;
  case 0xd2:
    if (iVar5 < 0x14) {
      iVar5 = *param_3;
      *param_3 = iVar5 + 1;
      FUN_00529a70(iVar5 + 1);
      *param_4 = 0;
      iVar5 = FUN_00529a70(*param_1);
      if (iVar5 != 0x409) {
        *param_1 = *param_1 + 1;
        *param_2 = 0;
        FUN_0042fb70();
        return;
      }
      if (*param_2 == 1) {
        *param_1 = *param_1 + 1;
        *param_2 = 0;
        FUN_0042fb70();
        return;
      }
      goto LAB_00529dbc;
    }
    break;
  case 0xd3:
    *param_4 = 1;
    iVar5 = FUN_00529a70(*param_1);
    if (iVar5 == 0x409) {
      if (*param_2 == 1) goto LAB_00529f38;
      goto LAB_00529dbc;
    }
    *param_1 = *param_1 + 1;
    *param_2 = 0;
  }
  FUN_0042fb70();
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043a310
// entry: 0043a310  size: 811


undefined4 FUN_0043a310(int param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  
  uVar6 = 0;
  local_8 = 0;
  if (param_2[1] == 1) {
    param_2[8] = 1;
  }
  if (((param_2[0xe] == 0) && (param_3 == 0)) && (param_2[8] == 1)) {
    if (param_2[0xd] == 1) {
      if (param_1 == 0x7542) {
        return 0;
      }
      if (param_1 == 0x7547) {
        return 0;
      }
    }
    iVar4 = FUN_004b8320();
    if (iVar4 == 0) {
      return 0;
    }
    FUN_00523740();
    FUN_0052f840();
    param_2[2] = 1;
    iVar4 = FUN_00439f30(param_1,param_2);
    if (iVar4 != 0) {
      FUN_0052f880();
      return 0xffffffff;
    }
    if ((param_1 == 0x7544) || (param_1 == 0x7545)) {
      param_2[8] = 0;
      param_2[10] = 0;
      param_2[9] = 0;
      param_2[0xd] = 0;
    }
    FUN_0052f880();
    return 0;
  }
  iVar4 = FUN_0043c1d0((param_2[2] - param_2[3]) + 1,param_2);
  iVar4 = iVar4 + param_2[0xb6];
  switch(param_1) {
  case 0x7542:
    if ((uint)param_2[4] < 2) {
      return 0;
    }
    uVar2 = param_2[6];
    bVar3 = false;
    iVar7 = 0;
    do {
      if (param_2[4] == 1) break;
      iVar8 = FUN_00439bb0(iVar4,0x7544,0,param_2);
      if (uVar2 < (uint)param_2[6]) {
        bVar3 = true;
      }
      iVar8 = iVar8 - uVar6;
      uVar6 = FUN_00439aa0(param_2[4] + -1,0x7544,1,param_2);
      iVar7 = iVar7 + iVar8 + uVar6;
    } while (iVar7 < 0x15);
    if (bVar3) {
LAB_0043a4f2:
      if ((uVar6 < (uint)param_2[6]) && (param_2[4] != 1)) {
LAB_0043a505:
        FUN_00439bb0(iVar4,0x7544,0,param_2);
      }
    }
    else {
      cVar1 = *(char *)(param_2[0xb7] + -1 + param_2[4]);
      if ((cVar1 != '\r') && (cVar1 != '\f')) {
        if (param_2[4] == 1) goto LAB_0043a4f2;
        goto LAB_0043a505;
      }
    }
    goto LAB_0043a621;
  case 0x7544:
    if (1 < (uint)param_2[4]) {
      FUN_00439bb0(iVar4,param_1,0,param_2);
      FUN_005232d0(param_2[6],param_2[7]);
      return 0;
    }
    break;
  case 0x7545:
    if (param_2[4] != param_2[5]) {
      FUN_00439d70(iVar4,param_1,0,param_2);
      FUN_005232d0(param_2[6],param_2[7]);
      return 0;
    }
    break;
  case 0x7547:
    if (param_2[0xd] == 1) {
      return 0;
    }
    if (param_2[4] == param_2[5]) {
      return 0;
    }
    uVar2 = param_2[6];
    iVar7 = param_2[7];
    bVar3 = false;
    iVar8 = 0;
    do {
      if (param_2[4] == param_2[5]) break;
      param_2[0x17] = iVar8;
      local_8 = FUN_00439d70(iVar4,param_1,0,param_2);
      if ((uint)param_2[6] < uVar2) {
        bVar3 = true;
      }
      iVar5 = local_8 - uVar6;
      uVar6 = FUN_00439aa0(param_2[4] + -1,param_1,1,param_2);
      iVar8 = iVar8 + iVar5 + uVar6;
    } while (iVar8 < 0x15);
    iVar8 = param_2[6];
    if ((0x14 < iVar8 + -1 + uVar6) && (param_2[7] != iVar7)) {
      FUN_005232d0(iVar8,param_2[7]);
      return 0;
    }
    if ((((bVar3) || (iVar8 != 1)) &&
        ((iVar8 == 0x15 ||
         ((cVar1 = *(char *)(param_2[0xb6] + -1 + *param_2), cVar1 != '\r' && (cVar1 != '\f'))))))
       && (((!bVar3 && (param_2[4] != param_2[5])) ||
           ((local_8 < 0x16U - iVar8 && (param_2[4] != param_2[5])))))) {
      FUN_00439d70(iVar4,param_1,0,param_2);
    }
LAB_0043a621:
    FUN_005232d0(param_2[6],param_2[7]);
  }
  return 0;
}


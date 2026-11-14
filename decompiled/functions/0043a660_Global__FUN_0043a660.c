// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043a660
// entry: 0043a660  size: 979


undefined4 FUN_0043a660(undefined4 param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_34;
  undefined1 local_2c;
  byte bStack_2b;
  undefined1 local_24 [36];
  
  local_34 = 0;
  if (param_2[0xc] == 1) {
    return 0;
  }
  if (param_2[9] == 1) {
    return 0;
  }
  if (param_2[0xd] == 1) {
    return 0;
  }
  iVar4 = FUN_0043c1d0((param_2[2] - param_2[3]) + 1,param_2);
  if (param_2[0xb] == 0) {
    if (*(char *)param_2[0xb7] == '\0') {
      return 0;
    }
    if (((char *)param_2[0xb7])[param_2[4] + -1] == '\0') {
      FUN_00439bb0(iVar4 + param_2[0xb6],0x7544,0,param_2);
    }
    iVar4 = param_2[4];
    param_2[0xb9] = *param_2;
    param_2[0xbb] = *param_2;
    param_2[0xb8] = iVar4;
    param_2[0xba] = iVar4;
    iVar5 = FUN_004b7370(*(undefined1 *)(iVar4 + -1 + param_2[0xb7]));
    iVar4 = param_2[0xb7];
    iVar8 = param_2[0xb8];
    if (iVar5 == 0) {
      local_2c = *(undefined1 *)(iVar8 + -1 + iVar4);
      bStack_2b = 0;
    }
    else {
      bStack_2b = *(byte *)(iVar8 + -1 + iVar4);
      local_2c = *(undefined1 *)(iVar8 + iVar4);
    }
    FUN_004b79f0((uint)bStack_2b << 8 | CONCAT11(bStack_2b,local_2c) & 0xff,local_24);
    iVar4 = FUN_004b6ca0(local_24);
    param_2[0x14] = iVar4;
    param_2[0xb] = 1;
    FUN_0043c2b0(param_2);
    FUN_00523690(0xb);
    FUN_005232d0(param_2[6],param_2[7]);
    return 0;
  }
  FUN_00523690(0xb);
  iVar4 = FUN_0043c1d0((param_2[2] - param_2[3]) + 1,param_2);
  iVar4 = iVar4 + param_2[0xb6];
  switch(param_1) {
  case 0x7542:
  case 0x7559:
    if ((uint)param_2[4] < 2) break;
    uVar2 = param_2[6];
    iVar8 = 0;
    uVar7 = 0;
    bVar3 = false;
    do {
      if (param_2[4] == 1) break;
      iVar5 = FUN_00439bb0(iVar4,0x7544,0,param_2);
      if (uVar2 < (uint)param_2[6]) {
        bVar3 = true;
      }
      iVar5 = iVar5 - uVar7;
      uVar7 = FUN_00439aa0(param_2[4] + -1,0x7544,1,param_2);
      iVar8 = iVar8 + iVar5 + uVar7;
    } while (iVar8 < 0x15);
    if (bVar3) {
LAB_0043a8bb:
      if (((uint)param_2[6] <= uVar7) || (param_2[4] == 1)) break;
    }
    else {
      cVar1 = *(char *)(param_2[0xb7] + -1 + param_2[4]);
      if ((cVar1 == '\r') || (cVar1 == '\f')) break;
      if (param_2[4] == 1) goto LAB_0043a8bb;
    }
    FUN_00439bb0(iVar4,0x7544,0,param_2);
    break;
  case 0x7544:
  case 0x755a:
    if (1 < (uint)param_2[4]) {
      FUN_00439bb0(iVar4,param_1,0,param_2);
    }
    break;
  case 0x7545:
  case 0x755b:
    if (param_2[4] != param_2[5]) {
      FUN_00439d70(iVar4,param_1,0,param_2);
    }
    break;
  case 0x7547:
  case 0x755c:
    if (param_2[4] != param_2[5]) {
      uVar2 = param_2[6];
      iVar8 = param_2[7];
      iVar9 = 0;
      iVar5 = 0;
      bVar3 = false;
      do {
        if (param_2[4] == param_2[5]) break;
        param_2[0x17] = iVar9;
        local_34 = FUN_00439d70(iVar4,param_1,0,param_2);
        if ((uint)param_2[6] < uVar2) {
          bVar3 = true;
        }
        iVar6 = local_34 - iVar5;
        iVar5 = FUN_00439aa0(param_2[4] + -1,param_1,1,param_2);
        iVar9 = iVar9 + iVar6 + iVar5;
      } while (iVar9 < 0x15);
      iVar9 = param_2[6];
      if ((((((uint)(iVar9 + -1 + iVar5) < 0x15) || (param_2[7] == iVar8)) &&
           ((bVar3 || (iVar9 != 1)))) &&
          ((param_2[1] + -1 != *param_2 ||
           ((cVar1 = *(char *)(*param_2 + -1 + param_2[0xb6]), cVar1 != '\r' && (cVar1 != '\f'))))))
         && (((!bVar3 && (param_2[4] != param_2[5])) ||
             ((local_34 < 0x16U - iVar9 && (param_2[4] != param_2[5])))))) {
        FUN_00439d70(iVar4,param_1,0,param_2);
      }
    }
  }
  if (*(char *)(param_2[0xb7] + -1 + param_2[4]) == '\0') {
    FUN_00439bb0(iVar4,0x7544,0,param_2);
  }
  param_2[0xba] = param_2[4];
  param_2[0xbb] = *param_2;
  FUN_0043c2b0(param_2);
  FUN_005232d0(param_2[6],param_2[7]);
  param_2[0xb] = 1;
  return 0;
}


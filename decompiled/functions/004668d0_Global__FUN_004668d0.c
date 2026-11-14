// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004668d0
// entry: 004668d0  size: 573


int FUN_004668d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined4 local_30 [6];
  undefined1 local_18 [12];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e57a0(local_48);
  iVar2 = param_1 + 0x54;
  iVar1 = FUN_004e71d0(iVar2,local_48);
  if (iVar1 != 0) {
    FUN_004e4c30(&DAT_005bed74,param_1 + 0x60);
    return 0;
  }
  FUN_004e4c30(s_1e_15_005bed6c,local_48);
  iVar1 = FUN_004e72d0(iVar2,local_48);
  if (iVar1 != 0) {
    FUN_004e5780(param_1 + 0x60);
    return 0;
  }
  FUN_004e4c30(&DAT_005bed68,local_48);
  iVar1 = FUN_004e7290(param_1 + 0x3c,local_48);
  if (iVar1 != 0) {
    iVar2 = FUN_00466b90(param_1);
    return iVar2;
  }
  iVar1 = FUN_004e7290(param_1 + 0x48,local_48);
  if (iVar1 == 0) {
    FUN_004e5780(local_30);
    FUN_004e5780(local_30 + 3);
    FUN_004e57a0(local_18);
    FUN_004e5840(&local_c);
    iVar1 = FUN_0052f820();
    while( true ) {
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00466f10(param_1,local_30);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_004e4020(param_1 + 0x30);
      if (iVar1 != 0) {
        return 3;
      }
      iVar3 = 2;
      iVar1 = FUN_004e72d0(param_1 + 0x30,iVar2);
      if (iVar1 != 0) {
        iVar3 = 1;
      }
      local_30[iVar3 * 3] = local_c;
      local_30[iVar3 * 3 + 1] = local_8;
      local_30[iVar3 * 3 + 2] = local_4;
      local_30[0] = local_c;
      local_30[1] = local_8;
      local_30[2] = local_4;
      FUN_004e6a00(local_30 + 3,local_18,local_48);
      FUN_004e57c0(local_3c);
      FUN_004e6dd0(local_48,local_3c,&local_c);
      FUN_004e6b80(&local_c,local_30,local_48);
      FUN_004e7620(local_48,local_48);
      FUN_004e4c30(&DAT_005bed60,local_3c);
      iVar1 = FUN_004e7290(local_48,local_3c);
      if (iVar1 == 0) break;
      iVar1 = FUN_0052f820();
    }
    iVar2 = FUN_00466b10(param_1,local_30);
    return iVar2;
  }
  iVar2 = FUN_00466b90(param_1);
  return iVar2;
}


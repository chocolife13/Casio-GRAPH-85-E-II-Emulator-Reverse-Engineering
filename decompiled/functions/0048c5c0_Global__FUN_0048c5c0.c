// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048c5c0
// entry: 0048c5c0  size: 474


undefined4 FUN_0048c5c0(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  pcVar1 = (char *)(param_1 + 0x12);
  FUN_004e7620(pcVar1,&local_18);
  iVar3 = FUN_00469e60(&local_18,param_1 + 0x18);
  if (iVar3 < 0) {
    param_1[0x18] = local_18;
    param_1[0x19] = local_14;
    param_1[0x1a] = local_10;
    param_1[0x1b] = param_1[6];
    param_1[0x1c] = param_1[7];
    param_1[0x1d] = param_1[8];
  }
  if ((*pcVar1 == '\0') && (*(char *)((int)param_1 + 0x49) == '\0')) {
    *param_2 = param_1[6];
    uVar4 = param_1[7];
    param_1 = param_1 + 6;
  }
  else {
    FUN_004e6dd0(pcVar1,param_1 + 0x15,&local_18);
    puVar2 = param_1 + 6;
    FUN_004e6b80(puVar2,&local_18,param_1);
    FUN_004e6b80(puVar2,param_1,&local_18);
    FUN_004e6dd0(&local_18,param_1,&local_18);
    FUN_004e57a0(local_c);
    FUN_004e7be0(local_c,local_c,0xfffffff7);
    FUN_004e7620(&local_18,&local_18);
    iVar3 = FUN_00469e60(&local_18,local_c);
    if (0 < iVar3) {
      *puVar2 = *param_1;
      param_1[7] = param_1[1];
      param_1[8] = param_1[2];
      iVar3 = param_1[0x25];
      param_1[0x25] = iVar3 + 1;
      if (0xff < iVar3 + 1) {
        *puVar2 = param_1[0x1b];
        param_1[7] = param_1[0x1c];
        param_1[8] = param_1[0x1d];
        FUN_004e5630(3,param_2);
        return 3;
      }
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      return 1;
    }
    *param_2 = *param_1;
    uVar4 = param_1[1];
  }
  param_2[1] = uVar4;
  param_2[2] = param_1[2];
  FUN_004e57a0(&local_18);
  FUN_004e7730(&local_18,&local_18);
  iVar3 = FUN_00469e60(param_2,&local_18);
  if (iVar3 < 1) {
    FUN_004e5630(3,param_2);
    return 3;
  }
  FUN_004e7be0(param_2,param_2,2);
  return 0;
}


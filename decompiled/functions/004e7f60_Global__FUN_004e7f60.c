// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e7f60
// entry: 004e7f60  size: 323


undefined4 * FUN_004e7f60(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_c [12];
  
  FUN_004e5780(&local_3c);
  FUN_004e57a0(&local_18);
  FUN_004e57c0(local_c);
  local_48 = local_3c;
  local_44 = local_38;
  local_40 = local_34;
  iVar3 = 0x20;
  if (param_3 == 1) {
    iVar3 = 0x10;
  }
  if (iVar3 != 0) {
    piVar4 = (int *)(param_1 + -4 + iVar3 * 4);
    iVar2 = iVar3;
    do {
      if (*piVar4 == 0) {
        local_30 = local_3c;
        local_2c = local_38;
      }
      else {
        local_30 = local_18;
        local_2c = local_14;
      }
      uVar1 = FUN_004e6d00(&local_48,local_c,local_24,&local_30,&local_48);
      FUN_004e6a00(uVar1);
      piVar4 = piVar4 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *param_2 = local_48;
  param_2[1] = local_44;
  param_2[2] = local_40;
  if (iVar3 == 0x20) {
    FUN_004e58f0(local_24);
  }
  else {
    FUN_004e5860(local_24);
  }
  iVar2 = FUN_004e72d0(param_2,local_24);
  if (iVar2 == 0) {
    if (iVar3 == 0x20) {
      FUN_004e5950(local_24);
    }
    else {
      FUN_004e58c0(local_24);
    }
    FUN_004e6b80(param_2,local_24,param_2);
  }
  return param_2;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c57b0
// entry: 004c57b0  size: 223


bool FUN_004c57b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_18 [24];
  
  iVar2 = FUN_004e4020(param_1);
  if (iVar2 != 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return false;
  }
  iVar2 = FUN_004e4000(param_1);
  if (iVar2 != 0) {
    FUN_004e5630(0x19,param_2);
    return false;
  }
  uVar1 = *(undefined2 *)((int)param_1 + 2);
  iVar2 = FUN_004c5890(param_1,&local_48);
  if (iVar2 == 0) {
    *param_2 = local_48;
    param_2[1] = local_44;
    param_2[2] = local_40;
    return false;
  }
  FUN_004e5070(uVar1,local_18);
  FUN_004e0dd0(&local_48,local_18,&local_30,0);
  *param_2 = local_30;
  param_2[1] = local_2c;
  param_2[2] = local_28;
  iVar2 = FUN_004e4020(&local_30);
  return iVar2 == 0;
}


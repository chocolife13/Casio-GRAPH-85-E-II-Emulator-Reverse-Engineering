// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005137b0
// entry: 005137b0  size: 404


undefined4 FUN_005137b0(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = (int)param_2;
  iVar1 = param_1;
  iVar6 = (int)param_2 * 0x20;
  param_2 = *(char **)(iVar6 + *(int *)(param_1 + 0x8dc));
  FUN_00513f50(&param_2,local_34);
  if (((*(uint *)(iVar6 + 0x18 + *(int *)(iVar1 + 0x8dc)) & 0x40d) == 0x40d) &&
     (*(char *)((int)param_2 + -1) == ')')) {
    param_2 = (char *)((int)param_2 + 1);
  }
  param_2 = (char *)((int)param_2 + 1);
  if (((*(uint *)(iVar6 + 0x18 + *(int *)(iVar1 + 0x8dc)) & 0x100) == 0) || (*param_2 != ',')) {
    iVar4 = FUN_0050deb0(&param_2,&param_1,&local_30);
    if (iVar4 == 0) {
      uVar5 = FUN_004e4020(&local_30);
      return uVar5;
    }
    local_14 = local_2c;
    local_18 = local_30;
    local_10 = local_28;
    if ((char)param_1 != ',') {
      return 2;
    }
  }
  else {
    FUN_00501a80(&local_18);
    param_2 = param_2 + 1;
  }
  if (((*(uint *)(iVar6 + 0x18 + *(int *)(iVar1 + 0x8dc)) & 0x100) == 0) ||
     ((*param_2 != ']' && (*param_2 != '\0')))) {
    iVar6 = FUN_0050deb0(&param_2,&param_1,&local_30);
    if (iVar6 == 0) {
      uVar5 = FUN_004e4020(&local_30);
      return uVar5;
    }
    local_c = local_30;
    local_8 = local_2c;
    local_4 = local_28;
    cVar3 = (char)param_1;
  }
  else {
    FUN_00501a60(&local_c);
    cVar3 = *param_2;
    param_2 = param_2 + 1;
    param_1 = CONCAT31(param_1._1_3_,cVar3);
  }
  if (cVar3 == ']') {
    cVar3 = *param_2;
    param_2 = param_2 + 1;
    param_1 = CONCAT31(param_1._1_3_,cVar3);
  }
  if (cVar3 != '\0') {
    return 2;
  }
  uVar5 = FUN_00513950(iVar1,iVar2,&local_18);
  return uVar5;
}


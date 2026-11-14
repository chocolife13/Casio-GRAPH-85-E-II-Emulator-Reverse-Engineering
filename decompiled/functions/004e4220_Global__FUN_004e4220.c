// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e4220
// entry: 004e4220  size: 522


undefined4 * FUN_004e4220(char *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48 [24];
  char local_30 [24];
  char local_18 [24];
  
  FUN_004e5780(&local_60);
  uVar3 = 0xffffffff;
  iVar2 = 0;
  iVar7 = 0;
  pcVar9 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  iVar5 = 0;
  if (-1 < iVar4) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar5 = iVar2;
      if ((cVar1 == 'a') || (cVar1 == 'A')) break;
      local_48[iVar2] = cVar1;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + 1;
      iVar5 = 0;
    } while (iVar2 <= iVar4);
  }
  local_48[iVar7] = '\0';
  if (iVar5 == 0) {
    puVar11 = param_2 + 1;
    *param_2 = 1;
    FUN_004e5630(3,puVar11);
    param_2[7] = *puVar11;
    param_2[8] = param_2[2];
    param_2[9] = param_2[3];
    param_2[4] = *puVar11;
    param_2[5] = param_2[2];
    param_2[6] = param_2[3];
    return param_2;
  }
  iVar7 = 0;
  iVar2 = iVar5;
  while (iVar2 = iVar2 + 1, iVar6 = iVar5, iVar2 <= iVar4) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar6 = iVar2;
    if ((cVar1 == 'a') || (cVar1 == 'A')) break;
    local_30[iVar7] = cVar1;
    iVar7 = iVar7 + 1;
    if (iVar2 == iVar4) {
      iVar5 = 0;
    }
  }
  local_30[iVar7] = '\0';
  if (0 < iVar6) {
    iVar2 = iVar6 + 1;
    iVar7 = 0;
    if (iVar2 <= iVar4) {
      iVar7 = (iVar4 - iVar2) + 1;
      iVar5 = iVar2;
      do {
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        local_18[iVar5 - iVar2] = cVar1;
        iVar5 = iVar5 + 1;
      } while (iVar5 <= iVar4);
    }
    local_18[iVar7] = '\0';
  }
  uVar8 = 1;
  if (iVar6 == 0) {
    local_78 = local_60;
    local_74 = local_5c;
    local_70 = local_58;
    FUN_004e4c30(local_48,&local_6c);
    FUN_004e4c30(local_30,&local_54);
    iVar2 = FUN_004e7250(&local_6c,&local_60);
    if (iVar2 == 0) goto LAB_004e43d2;
    puVar11 = &local_6c;
    puVar10 = &local_6c;
  }
  else {
    FUN_004e4c30(local_48,&local_78);
    FUN_004e4c30(local_30,&local_6c);
    FUN_004e4c30(local_18,&local_54);
    iVar2 = FUN_004e7250(&local_78,&local_60);
    if (iVar2 == 0) goto LAB_004e43d2;
    puVar11 = &local_78;
    puVar10 = &local_78;
  }
  uVar8 = 0xffffffff;
  FUN_004e75d0(puVar10,puVar11);
LAB_004e43d2:
  *param_2 = uVar8;
  param_2[1] = local_78;
  param_2[2] = local_74;
  param_2[3] = local_70;
  param_2[4] = local_6c;
  param_2[5] = local_68;
  param_2[6] = local_64;
  param_2[7] = local_54;
  param_2[8] = local_50;
  param_2[9] = local_4c;
  return param_2;
}


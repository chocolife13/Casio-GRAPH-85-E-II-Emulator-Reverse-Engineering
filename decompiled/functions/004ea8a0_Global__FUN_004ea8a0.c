// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ea8a0
// entry: 004ea8a0  size: 416


void FUN_004ea8a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined4 local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e5780(&local_30);
  FUN_004e5780(&local_54);
  FUN_004e5780(&local_48);
  local_18[3] = local_30;
  local_8 = local_2c;
  local_4 = local_28;
  iVar3 = FUN_004e71d0(param_1,&local_30);
  iVar4 = FUN_004e71d0(param_1 + 0xc,&local_30);
  if (iVar3 == 0) {
    FUN_004e7620(param_1,&local_54);
  }
  if (iVar4 == 0) {
    FUN_004e7620(param_1 + 0xc,&local_48);
  }
  if (iVar3 == 1) {
    local_18[0] = local_48;
    local_18[1] = local_44;
    local_18[2] = local_40;
  }
  else if (iVar4 == 1) {
    local_18[0] = local_54;
    local_18[1] = local_50;
    local_18[2] = local_4c;
  }
  else {
    FUN_004e57a0(local_24);
    iVar3 = FUN_004e7250(&local_54,&local_48);
    uVar2 = local_40;
    uVar1 = local_44;
    uVar5 = local_48;
    if (iVar3 != 0) {
      local_48 = local_54;
      local_44 = local_50;
      local_3c = uVar5;
      local_38 = uVar1;
      local_34 = local_40;
      local_40 = local_4c;
      local_54 = uVar5;
      local_50 = uVar1;
      local_4c = uVar2;
    }
    FUN_004e6dd0(&local_48,&local_54,&local_3c);
    uVar5 = FUN_004e6d00(&local_3c,&local_3c,&local_3c,&local_3c,&local_3c,local_18);
    uVar5 = FUN_004e6a00(local_24,uVar5);
    uVar5 = FUN_004e7390(uVar5);
    FUN_004e6d00(&local_54,uVar5);
  }
  puVar6 = local_18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = *puVar6;
    puVar6 = puVar6 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


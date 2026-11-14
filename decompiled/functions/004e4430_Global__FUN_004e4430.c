// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e4430
// entry: 004e4430  size: 426


undefined4 * FUN_004e4430(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
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
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_30);
  puVar4 = param_1 + 7;
  puVar1 = param_1 + 4;
  iVar2 = FUN_004e7310(puVar1,puVar4);
  if (iVar2 != 0) {
    uVar3 = FUN_004e6d90(puVar1,puVar4,local_24,&local_3c);
    FUN_004e76a0(uVar3);
    FUN_004e69c0(param_1 + 1,&local_3c,param_1 + 1);
    uVar3 = FUN_004e6cc0(&local_3c,puVar4,local_24,puVar1);
    FUN_004e6b40(puVar1,uVar3);
    iVar2 = FUN_004e7250(puVar1,&local_30);
    if (iVar2 != 0) {
      *puVar1 = local_30;
      param_1[5] = local_2c;
      param_1[6] = local_28;
    }
  }
  iVar2 = FUN_004e71d0(puVar1,&local_30);
  if (iVar2 != 0) {
    puVar4 = param_2;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    return param_2;
  }
  local_54 = *puVar1;
  local_50 = param_1[5];
  local_48 = *puVar4;
  local_4c = param_1[6];
  local_44 = param_1[8];
  local_40 = param_1[9];
  do {
    uVar3 = FUN_004e6d90(&local_48,&local_54,local_24,local_c,local_18,&local_3c);
    uVar3 = FUN_004e7680(uVar3);
    uVar3 = FUN_004e6cc0(&local_54,uVar3);
    FUN_004e6b40(&local_48,uVar3);
    local_48 = local_54;
    local_44 = local_50;
    local_54 = local_3c;
    local_50 = local_38;
    local_40 = local_4c;
    local_4c = local_34;
    iVar2 = FUN_004e7290(&local_3c,&local_30);
  } while (iVar2 == 1);
  FUN_004e6d90(puVar1,&local_48,param_2 + 4);
  FUN_004e6d90(puVar4,&local_48,param_2 + 7);
  return param_2;
}


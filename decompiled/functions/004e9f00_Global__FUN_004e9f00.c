// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e9f00
// entry: 004e9f00  size: 774


void FUN_004e9f00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
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
  undefined4 *local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  FUN_004e5780(&local_88);
  FUN_004e57a0(&local_7c);
  iVar1 = FUN_004e71d0(param_1,&local_88);
  local_4c = param_1 + 3;
  iVar2 = FUN_004e71d0(local_4c,&local_88);
  if ((iVar1 == 1) && (iVar2 == 1)) {
    iVar1 = FUN_004e72d0(param_2,&local_88);
    if (iVar1 == 0) {
      param_3[3] = local_88;
      param_3[4] = local_84;
      param_3[5] = local_80;
      *param_3 = local_88;
      param_3[1] = local_84;
      param_3[2] = local_80;
      return;
    }
    FUN_004e5630(3,param_3);
    return;
  }
  iVar2 = FUN_004e71d0(param_2,&local_88);
  iVar3 = FUN_004e71d0(param_2 + 0xc,&local_88);
  if ((iVar2 == 1) && (iVar3 == 1)) {
    *param_3 = local_7c;
    param_3[1] = local_78;
    param_3[2] = local_74;
    param_3[3] = local_88;
    param_3[4] = local_84;
    param_3[5] = local_80;
    return;
  }
  iVar2 = FUN_004e71d0(param_2,&local_7c);
  if ((iVar2 == 1) && (iVar3 == 1)) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
    return;
  }
  iVar2 = FUN_004e9680(param_2);
  if (((iVar1 == 1) && (iVar3 == 1)) && (iVar2 == 1)) {
    FUN_004e7730(&local_7c,&local_58);
    FUN_004e5070(4,local_3c);
    FUN_004e6fb0(local_4c,param_2,local_30);
    local_64 = local_88;
    local_70 = local_88;
    local_24 = local_88;
    local_60 = local_84;
    local_6c = local_84;
    local_20 = local_84;
    local_5c = local_80;
    local_68 = local_80;
    local_1c = local_80;
    FUN_004e7950(param_2,local_3c,local_48);
    iVar1 = FUN_004e7250(local_48,&local_88);
    if (iVar1 != 0) {
      FUN_004e6a00(local_48,local_3c,local_48);
    }
    uVar4 = FUN_004e50a0(local_48);
    switch(uVar4) {
    case 0:
      local_70 = local_7c;
      local_6c = local_78;
      local_68 = local_74;
      break;
    case 1:
      local_64 = local_7c;
      local_60 = local_78;
      local_5c = local_74;
      break;
    case 2:
      local_70 = local_58;
      local_6c = local_54;
      local_68 = local_50;
      break;
    case 3:
      local_64 = local_58;
      local_60 = local_54;
      local_5c = local_50;
    }
    FUN_004e9760(local_30,&local_70,param_3);
    return;
  }
  uVar4 = FUN_004ea6f0(param_1,local_18,local_18,param_3);
  uVar4 = FUN_004e9760(param_2,uVar4);
  FUN_004ea620(uVar4);
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ea6f0
// entry: 004ea6f0  size: 348


void FUN_004ea6f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [3];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_3c);
  iVar4 = FUN_004e71d0(param_1,&local_3c);
  iVar6 = param_1 + 0xc;
  iVar5 = FUN_004e71d0(iVar6,&local_3c);
  if ((iVar4 != 0) && (iVar5 != 0)) {
    FUN_004e5630(3,param_2);
    return;
  }
  FUN_004e7620(param_1,&local_24);
  FUN_004e7620(iVar6,&local_30);
  iVar4 = FUN_004e7250(&local_24,&local_30);
  uVar3 = local_28;
  uVar2 = local_2c;
  uVar1 = local_30;
  if (iVar4 != 0) {
    local_30 = local_24;
    local_2c = local_20;
    local_3c = uVar1;
    local_38 = uVar2;
    local_34 = local_28;
    local_28 = local_1c;
    local_24 = uVar1;
    local_20 = uVar2;
    local_1c = uVar3;
  }
  FUN_004e6dd0(&local_30,&local_24,&local_3c);
  FUN_004e6d00(&local_3c,&local_3c,&local_3c);
  FUN_004e7970(&local_3c,&local_3c);
  FUN_004e57c0(&local_30);
  FUN_004e6dd0(&local_3c,&local_30,&local_3c);
  FUN_004e7410(&local_24,local_18);
  FUN_004e6a00(local_18,&local_3c,local_18);
  FUN_004e79d0(iVar6,param_1,local_c,1);
  puVar7 = local_18;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


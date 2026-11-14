// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045f630
// entry: 0045f630  size: 470


undefined4 FUN_0045f630(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_18);
  FUN_004e57a0(local_30);
  FUN_004e5840(local_3c);
  FUN_004e5070(0x5f,local_48);
  FUN_004e7be0(local_48,local_48,0xffffffff);
  FUN_004e5b40(local_24);
  iVar1 = FUN_004e7250(param_1,local_18);
  if (iVar1 != 0) {
    uVar2 = FUN_004e5920(local_54);
    return uVar2;
  }
  local_84 = *param_1;
  local_78 = *param_1;
  local_80 = param_1[1];
  local_74 = param_1[1];
  local_7c = param_1[2];
  local_70 = param_1[2];
  FUN_004e6ab0(&local_84,local_48,local_60);
  FUN_004e6ab0(&local_84,local_3c,local_54);
  uVar2 = FUN_004e7410(local_60,local_c,local_6c);
  FUN_004e6d00(local_54,uVar2);
  FUN_004e6c30(local_6c,local_60,local_60);
  local_90 = DAT_005811a0;
  local_8c = DAT_005811a4;
  local_88 = DAT_005811a8;
  iVar1 = 10;
  puVar3 = &DAT_005811ac;
  do {
    FUN_004e6ab0(&local_78,local_30,&local_78);
    FUN_004e6dd0(puVar3,&local_78,local_6c);
    FUN_004e6ab0(&local_90,local_6c,&local_90);
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 0xc;
  } while (iVar1 != 0);
  FUN_004e6d00(local_24,&local_90,local_6c);
  uVar2 = FUN_004e6dd0(local_6c,&local_84,param_2,local_54);
  FUN_004e7410(uVar2);
  FUN_004e6ab0(local_60,local_54,param_2);
  return param_2;
}


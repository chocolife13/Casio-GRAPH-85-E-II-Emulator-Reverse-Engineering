// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00460d50
// entry: 00460d50  size: 668


void FUN_00460d50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  FUN_004e57a0(local_3c);
  FUN_004e5840(local_24);
  FUN_004e57c0(local_18);
  FUN_004e7be0(local_3c,local_30,0xfffffff1);
  FUN_004e5070(3,local_54);
  FUN_004e7be0(local_54,local_54,1);
  FUN_004e6d00(local_18,param_1,local_60);
  iVar1 = FUN_004e72d0(local_60,local_30);
  if (iVar1 == 0) {
    iVar1 = FUN_004e7290(local_60,local_54);
    if (iVar1 == 0) {
      FUN_0045f630(param_1,local_9c);
      uVar2 = FUN_004e6ab0(param_1,local_24,local_6c,local_90);
      FUN_0045f630(uVar2);
      uVar2 = FUN_004e6c30(local_9c,local_90,local_6c,&DAT_0058127c,&local_84);
      FUN_004e6ab0(uVar2);
    }
    else {
      uVar2 = FUN_004e6dd0(local_3c,local_60,local_48,local_48,local_78);
      FUN_004e6d00(uVar2);
      FUN_004e6d00(&DAT_00581228,local_78,local_9c);
      uVar2 = FUN_004e6ab0(local_9c,&DAT_00581234,local_90,local_78,local_9c);
      FUN_004e6d00(uVar2);
      uVar2 = FUN_004e6ab0(local_9c,&DAT_00581240,local_90,local_78,local_9c);
      FUN_004e6d00(uVar2);
      uVar2 = FUN_004e6ab0(local_9c,&DAT_0058124c,local_90,local_78,local_9c);
      FUN_004e6d00(uVar2);
      uVar2 = FUN_004e6ab0(local_9c,&DAT_00581258,local_90,local_48,local_9c);
      FUN_004e6d00(uVar2);
      uVar2 = FUN_004e7410(param_1,local_6c,local_90);
      FUN_004e6d00(&DAT_00581264,uVar2);
      uVar2 = FUN_004e6ab0(local_9c,local_90,local_6c,&DAT_00581270,local_9c);
      FUN_004e6dd0(uVar2);
      FUN_004e6ab0(&DAT_0058127c,local_9c,&local_84);
    }
  }
  else {
    uVar2 = FUN_004e7410(param_1,local_9c,&local_84);
    FUN_004e7730(uVar2);
  }
  *param_2 = local_84;
  param_2[1] = local_80;
  param_2[2] = local_7c;
  return;
}


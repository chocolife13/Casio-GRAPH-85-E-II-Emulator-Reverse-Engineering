// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00460ff0
// entry: 00460ff0  size: 1087


undefined4 FUN_00460ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
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
  
  FUN_004e57a0(local_a8);
  FUN_004e5840(local_c);
  FUN_004e7be0(local_a8,local_18,0xffffffff);
  FUN_004e5070(7,local_24);
  FUN_004e7390(param_2,local_48);
  uVar1 = FUN_004e7620(param_1,local_60,local_48);
  iVar2 = FUN_004e7290(uVar1);
  if (iVar2 == 0) {
    FUN_004e6dd0(local_60,local_48,local_84);
    uVar1 = FUN_004e6d00(local_84,local_84,local_78,local_b4);
    FUN_004e6ab0(local_a8,uVar1);
    FUN_004e7390(local_b4,local_54);
    iVar2 = FUN_004e7250(local_84,local_18);
    if (iVar2 == 0) {
      uVar1 = FUN_004e7410(local_54,local_90,local_b4);
      FUN_004e6d00(param_2,uVar1);
      FUN_004e7730(local_b4,local_6c);
    }
    else {
      FUN_004e6dd0(local_78,local_24,local_b4);
      uVar1 = FUN_004e6c30(local_24,local_a8,local_90,local_9c);
      FUN_004e6dd0(local_a8,uVar1);
      uVar1 = FUN_004e6c30(local_b4,local_9c,local_3c,local_78,local_b4);
      FUN_004e6d00(uVar1);
      uVar1 = FUN_004e6c30(local_90,local_a8,local_30,local_9c);
      FUN_004e6dd0(local_a8,uVar1);
      uVar1 = FUN_004e6ab0(local_b4,local_9c,local_3c,local_78,local_b4);
      FUN_004e6d00(uVar1);
      uVar1 = FUN_004e6c30(local_30,local_a8,local_90,local_9c);
      FUN_004e6dd0(local_a8,uVar1);
      uVar1 = FUN_004e6c30(local_b4,local_9c,local_3c,local_78,local_b4);
      FUN_004e6d00(uVar1);
      uVar1 = FUN_004e6c30(local_90,local_a8,local_30,local_9c);
      FUN_004e6dd0(local_a8,uVar1);
      uVar1 = FUN_004e6ab0(local_b4,local_9c,local_3c,local_78,local_b4);
      FUN_004e6d00(uVar1);
      uVar1 = FUN_004e6c30(local_30,local_a8,local_90,local_9c);
      FUN_004e6dd0(local_a8,uVar1);
      uVar1 = FUN_004e6c30(local_b4,local_9c,local_3c,local_78,local_b4);
      FUN_004e6d00(uVar1);
      FUN_004e6ab0(local_b4,local_a8,local_90);
      uVar1 = FUN_004e6d00(local_60,local_c,local_30,local_60,local_9c);
      FUN_004e6d00(uVar1);
      uVar1 = FUN_004e7730(local_9c,local_b4,local_90,local_6c);
      FUN_004e6d00(uVar1);
    }
    puVar3 = local_48;
  }
  else {
    FUN_004e6dd0(local_48,local_60,local_84);
    uVar1 = FUN_004e6d00(local_84,local_84,local_78,local_b4);
    FUN_004e6ab0(local_a8,uVar1);
    uVar1 = FUN_004e7390(local_b4,local_54,local_6c);
    FUN_004e6dd0(local_84,uVar1);
    uVar1 = FUN_004e7410(local_6c,local_b4,local_6c);
    FUN_004e6d00(param_2,uVar1);
    puVar3 = local_60;
  }
  uVar1 = FUN_004e6d00(puVar3,local_54,local_90,local_b4);
  FUN_004e7410(uVar1);
  FUN_004e6c30(local_6c,local_b4,param_3);
  return param_3;
}


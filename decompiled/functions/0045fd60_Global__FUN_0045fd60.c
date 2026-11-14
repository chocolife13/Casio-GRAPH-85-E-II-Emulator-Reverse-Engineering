// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045fd60
// entry: 0045fd60  size: 463


undefined4 FUN_0045fd60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
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
  FUN_004e6ab0(param_1,local_a8,local_b4);
  iVar1 = FUN_004e7250(param_2,local_b4);
  if (iVar1 != 0) {
    FUN_0045f630(local_b4,local_c0);
    FUN_0045fba0(param_1,param_2,local_cc);
    FUN_004e7730(param_2,local_78);
    FUN_004e7410(param_2,local_60);
    FUN_004e6d00(param_1,local_60,local_48);
    FUN_004e6ab0(local_78,local_48,local_18);
    FUN_004e6c30(local_18,local_c0,local_9c);
    FUN_004e73d0(local_9c,local_30);
    FUN_004e6d00(local_30,local_cc,param_3);
    return param_3;
  }
  FUN_0045f630(param_1,local_c0);
  FUN_0045f810(param_1,param_2,local_cc);
  FUN_004e7730(param_2,local_6c);
  FUN_004e7410(param_2,local_90);
  FUN_004e6d00(param_1,local_90,local_84);
  FUN_004e6ab0(local_6c,local_84,local_54);
  FUN_004e6c30(local_54,local_c0,local_3c);
  FUN_004e73d0(local_3c,local_24);
  FUN_004e6d00(local_24,local_cc,local_c);
  FUN_004e6c30(local_a8,local_c,param_3);
  return param_3;
}


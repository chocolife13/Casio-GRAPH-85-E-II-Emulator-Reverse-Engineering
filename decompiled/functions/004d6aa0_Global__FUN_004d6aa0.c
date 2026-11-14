// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d6aa0
// entry: 004d6aa0  size: 115


bool FUN_004d6aa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_18 [12];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = DAT_005c0a20;
  local_8 = DAT_005c0a24;
  local_4 = DAT_005c0a28;
  FUN_004e6b80(param_1,param_2,local_18);
  uVar1 = FUN_004e6dd0(local_18,param_1,local_18,local_18);
  FUN_004e7620(uVar1);
  iVar2 = FUN_004e7250(local_18,&local_c);
  return iVar2 == 1;
}


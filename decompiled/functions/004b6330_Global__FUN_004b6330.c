// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b6330
// entry: 004b6330  size: 222


void FUN_004b6330(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  
  local_7 = 0x52;
  local_6 = 0x52;
  local_4 = 0x52;
  local_8 = 0x45;
  local_5 = 0x4f;
  local_3 = 0;
  local_10 = 0;
  FUN_004b6410(local_14,local_18,local_1c,&local_20,local_c);
  bVar1 = FUN_0052f6b0(0x3d);
  if (param_3 == 1) {
    bVar1 = bVar1 | 0x80;
  }
  else {
    bVar1 = bVar1 & 0x7f;
  }
  if ((bVar1 & 0x70) != 0x20) {
    bVar1 = bVar1 & 0x90 | 0x10;
  }
  FUN_0052f6c0(0x3d,bVar1);
  iVar2 = FUN_004b3ee0(param_1);
  if (iVar2 == 0) {
    FUN_004b6ef0(param_2,&local_8);
    return;
  }
  local_20 = 0;
  FUN_004b5620(param_1,param_2,&local_10,local_14,local_18,local_1c,&local_20);
  return;
}


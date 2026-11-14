// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2460
// entry: 004a2460  size: 149


void FUN_004a2460(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  local_10 = 0x5b;
  local_f = 0x20;
  local_e = 0x20;
  local_d = 0x20;
  local_c = 0x20;
  local_b = 0x20;
  local_a = 0x20;
  local_9 = 0x20;
  local_8 = 0x20;
  local_7 = 0x20;
  local_6 = 0x20;
  local_5 = 0x20;
  local_4 = 0x20;
  local_3 = 0x5d;
  local_2 = 0;
  iVar1 = FUN_0042a410(param_1);
  if (iVar1 < 0xd) {
    uVar2 = FUN_0042a410(param_1);
    FUN_0042aa50(&local_f,param_1,uVar2);
  }
  else {
    FUN_0042aa50(&local_f,param_1,0xc);
  }
  FUN_004a22f0(&local_10,param_2);
  return;
}


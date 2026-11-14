// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a7620
// entry: 004a7620  size: 324


int FUN_004a7620(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  if (param_2 == 1) {
    FUN_005232d0(1,param_1);
    uVar1 = FUN_0052f6f0(0x284,&local_34,0x15);
    FUN_00523470(uVar1);
    iVar2 = param_1 + 1;
LAB_004a766b:
    local_34 = 0x20;
    local_33 = FUN_004a7290(0);
    local_32 = FUN_004a7290(1);
    local_31 = 0x2e;
    local_30 = FUN_004a7290(0);
    local_2f = FUN_004a7290(2);
    local_2e = 0x2e;
    local_2d = FUN_004a7290(0);
    local_2c = FUN_004a7290(0);
    local_2b = FUN_004a7290(0);
    local_2a = FUN_004a7290(0);
    local_29 = 0;
    param_1 = iVar2 + 1;
    FUN_005232d0(1,iVar2);
    FUN_00523470(&local_34,0x14);
    if (param_2 == 2) {
      FUN_00523470(&DAT_005beb20,0x15);
      goto LAB_004a7719;
    }
    FUN_00523470(&DAT_005ad48c,0x15);
  }
  else {
    iVar2 = param_1;
    if (param_2 < 3) goto LAB_004a766b;
  }
  if (3 < param_2) {
    return param_1;
  }
LAB_004a7719:
  FUN_005232d0(1,param_1);
  FUN_00523470(&DAT_005cd010,0x14);
  if (param_2 != 3) {
    FUN_00523470(&DAT_005ad48c,0x15);
    return param_1 + 1;
  }
  FUN_00523470(&DAT_005beb20,0x15);
  return param_1 + 1;
}


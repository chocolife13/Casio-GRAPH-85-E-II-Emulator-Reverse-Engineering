// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049cb10
// entry: 0049cb10  size: 246


void FUN_0049cb10(undefined4 param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined1 local_34 [52];
  
  if (((*param_2 & 0xf0) == 0) || ((*param_2 & 0xf0) != 0x10)) {
    uVar1 = 0x2a0;
  }
  else {
    uVar1 = 0x217;
  }
  FUN_0052f6f0(uVar1,local_34);
  FUN_005232d0(1,1);
  FUN_00523470(param_1,0x15);
  FUN_005232d0(1,2);
  FUN_00523470(&DAT_00584ed8,0x15);
  FUN_005232d0(1,3);
  FUN_00523470(&DAT_00584ed8,0x15);
  FUN_005232d0(1,4);
  FUN_00523470(local_34,0x15);
  FUN_005232d0(1,5);
  FUN_00523470(&DAT_00584ed8,0x15);
  FUN_005232d0(1,6);
  FUN_00523470(&DAT_00584ed8,0x15);
  FUN_005232d0(1,7);
  FUN_00523470(&DAT_00584ed8,0x15);
  if (param_2[0x29] < 6) {
    FUN_004a1310(param_2 + 0x24);
  }
  FUN_004a2900(0);
  return;
}


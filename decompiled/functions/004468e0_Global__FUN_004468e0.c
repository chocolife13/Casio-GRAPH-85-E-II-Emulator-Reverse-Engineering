// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004468e0
// entry: 004468e0  size: 357


void FUN_004468e0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  local_4 = 0x2020;
  if (param_1 == 3) {
    FUN_004125f0(0xf,0x12,0xd,0x12);
    FUN_004125f0(0xd,0x12,0xd,0x16);
    FUN_004125f0(0xd,0x16,0xf,0x16);
    FUN_004125f0(0x61,0x12,99,0x12);
    FUN_004125f0(99,0x12,99,0x16);
    uVar2 = 0x61;
    uVar1 = 99;
  }
  else {
    if (param_1 != 4) goto LAB_004469a5;
    FUN_004125f0(0xf,0x12,0xd,0x12);
    FUN_004125f0(0xd,0x12,0xd,0x16);
    FUN_004125f0(0xd,0x16,0xf,0x16);
    FUN_004125f0(0x7d,0x12,0x7f,0x12);
    FUN_004125f0(0x7f,0x12,0x7f,0x16);
    uVar2 = 0x7d;
    uVar1 = 0x7f;
  }
  FUN_004125f0(uVar1,0x16,uVar2,0x16);
LAB_004469a5:
  if (param_3 == param_1 + -4) {
    if (4 < param_1) {
      FUN_00523a60(0x78,8,&local_4,0x10);
      FUN_004125f0(0x7d,0x12,0x7f,0x12);
      FUN_004125f0(0x7f,0x12,0x7f,0x16);
      FUN_004125f0(0x7f,0x16,0x7d,0x16);
    }
  }
  else if (4 < param_1) {
    FUN_00523960(0x78,8,0xf69d,0x10);
  }
  if (param_3 == 0) {
    if (3 < param_1) {
      FUN_00523a60(0xc,8,&local_4,0x10);
      return;
    }
  }
  else if (3 < param_1) {
    FUN_00523960(0xc,8,0xf69c,0x10);
  }
  return;
}


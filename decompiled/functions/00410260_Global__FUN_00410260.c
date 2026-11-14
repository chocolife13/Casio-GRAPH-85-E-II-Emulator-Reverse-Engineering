// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00410260
// entry: 00410260  size: 365


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00410260(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined2 local_1b;
  int local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  piVar1 = DAT_005d67e8;
  local_14 = _DAT_005abcf8;
  local_b = 0x4c;
  local_7 = 0x4c;
  local_10 = DAT_005abcfc;
  local_c = 0x40;
  local_a = 0x4f;
  local_9 = 0x43;
  local_8 = 0x41;
  local_6 = 0;
  local_5 = 0;
  local_4 = 0;
  local_1c = 0;
  local_1b = 0;
  FUN_00410130(0,DAT_005d67e8,(int)DAT_005d67e8 + 0xffff);
  FUN_00410210(DAT_005d67e8 + 0x40,"system",0x50);
  iVar3 = 0x8c;
  piVar2 = DAT_005d67e8 + 0x54;
  do {
    FUN_00410210(piVar2,&DAT_0057d500,0x10);
    piVar2 = piVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0x28;
  piVar2 = DAT_005d67e8 + 0x54;
  do {
    local_6 = 0;
    FUN_004b7260(iVar3,&local_1c);
    FUN_004b6eb0(&local_c,&local_1c,3);
    FUN_00410210(piVar2,&local_c,8);
    piVar2 = piVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  FUN_00410210(DAT_005d67e8 + 0x284,&DAT_0057d510,0x20);
  iVar3 = 0x93;
  local_18 = (int)(DAT_005d67e8 + 0x28c);
  piVar2 = DAT_005d67e8 + 0x42;
  do {
    *piVar2 = local_18;
    piVar2 = piVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *piVar1 = local_18;
  iVar3 = FUN_00410580(&local_14,&local_18,&local_1d);
  if (iVar3 == 0) {
    FUN_00411f40();
    piVar1[4] = 0;
    *(undefined1 *)(piVar1 + 5) = 0;
    FUN_00411f20();
  }
  return iVar3;
}


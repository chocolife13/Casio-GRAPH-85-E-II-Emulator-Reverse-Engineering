// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8200
// entry: 004a8200  size: 110


void FUN_004a8200(void)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  iVar1 = 0xb;
  do {
    local_c = 2;
    local_b = 2;
    local_a = 1;
    local_9 = 1;
    local_1c = 0x40;
    local_18 = 0x25;
    local_10 = 6;
    local_14 = iVar1;
    FUN_00412210(&local_1c);
    FUN_0040ae30();
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0x76);
  FUN_00526620(local_20);
  return;
}


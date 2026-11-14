// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517d50
// entry: 00517d50  size: 158


undefined4 FUN_00517d50(void)

{
  char cVar1;
  char local_15;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  cVar1 = FUN_004ad2a0(0xffffffff,&DAT_005bdc58,local_14);
  if (cVar1 != '\0') {
    return 4;
  }
  FUN_004ad3f0(0x11,1,&local_15);
  if (local_15 == '\x02') {
    FUN_004ad3f0(9,8,&local_10);
    FUN_004ac2f0(0x10,&local_10,0);
    local_15 = '\x01';
    FUN_004ac2f0(1,&local_15,0x10);
    return 0;
  }
  if (local_15 == '\x01') {
    FUN_00517e40();
  }
  return 0;
}


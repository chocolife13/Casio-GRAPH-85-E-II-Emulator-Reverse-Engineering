// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517c90
// entry: 00517c90  size: 188


undefined4 FUN_00517c90(undefined4 param_1)

{
  char cVar1;
  char local_15;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  local_15 = '\x01';
  cVar1 = FUN_004ad2a0(0xffffffff,&DAT_005bdc58,local_14);
  if (cVar1 == '\0') {
    FUN_004ad3f0(1,8,local_10);
    FUN_004ac2f0(8,local_10,8);
    FUN_004ad3f0(0x11,1,&local_15);
    if (local_15 == '\x01') {
      local_15 = '\x02';
      FUN_004ac2f0(1,&local_15,0x10);
    }
    FUN_004ac2f0(8,param_1,0);
    return 0;
  }
  cVar1 = FUN_004aba60(0xffffffff,&DAT_005bdc58,0x11,param_1);
  if (cVar1 != '\0') {
    return 4;
  }
  FUN_004ac2f0(1,&local_15,0x10);
  return 0;
}


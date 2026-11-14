// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00531170
// entry: 00531170  size: 142


undefined4 FUN_00531170(uint *param_1)

{
  char cVar1;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [12];
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052fbc0(0xfe,0,local_1c);
  local_24 = 0;
  cVar1 = FUN_004ad2a0(5,local_1c,local_20);
  if (cVar1 == '\0') {
    cVar1 = FUN_004ad3f0(1,0x10,&local_10);
    if (cVar1 == '\0') {
      FUN_00527400(local_10,local_c,local_8,local_4,&local_24);
      *param_1 = local_10 & 0xff;
    }
  }
  return local_24;
}


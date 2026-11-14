// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517b40
// entry: 00517b40  size: 105


undefined4 FUN_00517b40(byte param_1)

{
  char cVar1;
  undefined4 in_EAX;
  uint local_8;
  undefined1 local_4 [4];
  
  local_8 = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_1);
  cVar1 = FUN_004ad2a0(0xffffffff,s_GRPMODE_005bdc60,local_4);
  if (cVar1 == '\0') {
    FUN_004ac2f0(1,&param_1,1);
  }
  else {
    local_8 = (local_8 & 0xff) << 8;
    cVar1 = FUN_004aba60(0xffffffff,s_GRPMODE_005bdc60,2,&local_8);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  return 0;
}


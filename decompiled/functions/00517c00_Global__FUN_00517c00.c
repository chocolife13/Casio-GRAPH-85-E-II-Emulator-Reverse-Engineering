// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517c00
// entry: 00517c00  size: 63


uint FUN_00517c00(void)

{
  char cVar1;
  uint local_8;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad2a0(0xffffffff,s_GRPMODE_005bdc60,local_4);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_004ad3f0(1,1,&local_8);
  return local_8 & 0xff;
}


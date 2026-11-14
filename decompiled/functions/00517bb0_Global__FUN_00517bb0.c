// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517bb0
// entry: 00517bb0  size: 76


undefined4 FUN_00517bb0(void)

{
  char cVar1;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  local_8 = 0;
  cVar1 = FUN_004ad2a0(0xffffffff,s_GRPMODE_005bdc60,local_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_004aba60(0xffffffff,s_GRPMODE_005bdc60,2,&local_8);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  return 0;
}


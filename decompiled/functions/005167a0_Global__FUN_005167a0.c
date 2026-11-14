// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005167a0
// entry: 005167a0  size: 85


undefined4 FUN_005167a0(undefined4 param_1)

{
  char cVar1;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad2a0(0xffffffff,s_SCREEN_005bdc8c,local_4);
  if (cVar1 == '\0') {
    FUN_004ac2f0(0x800,param_1,0);
  }
  else {
    cVar1 = FUN_004aba60(0xffffffff,s_SCREEN_005bdc8c,0x800,param_1);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  return 0;
}


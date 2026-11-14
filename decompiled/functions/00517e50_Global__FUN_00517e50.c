// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517e50
// entry: 00517e50  size: 77


byte FUN_00517e50(undefined4 param_1)

{
  char cVar1;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad2a0(0xffffffff,s_BOXZOOM_005c31d4,local_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_004aba60(0xffffffff,s_BOXZOOM_005c31d4,0x10,param_1);
    return -(cVar1 != '\0') & 4;
  }
  FUN_004ac2f0(0x10,param_1,0);
  return 0;
}


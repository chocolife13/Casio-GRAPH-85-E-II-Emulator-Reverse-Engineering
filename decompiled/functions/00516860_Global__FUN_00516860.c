// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516860
// entry: 00516860  size: 105


undefined4 FUN_00516860(void)

{
  char cVar1;
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57c0(local_18);
  FUN_004e57c0(local_c);
  cVar1 = FUN_004ad2a0(5,s_FACTOR_005bdcb8,local_1c);
  if (cVar1 == '\0') {
    FUN_004ac2f0(0x18,local_18,0);
  }
  else {
    cVar1 = FUN_004aba60(5,s_FACTOR_005bdcb8,0x18,local_18);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  return 0;
}


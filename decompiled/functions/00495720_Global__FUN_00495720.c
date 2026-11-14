// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495720
// entry: 00495720  size: 77


int FUN_00495720(int param_1)

{
  char cVar1;
  int *local_8;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,local_4,&local_8);
  if (cVar1 != '\0') {
    return 0;
  }
  if (*local_8 <= param_1) {
    return 0;
  }
  return (local_8[param_1 + 1] & 0xffffffU) + (int)local_8;
}


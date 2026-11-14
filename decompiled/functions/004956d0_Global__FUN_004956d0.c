// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004956d0
// entry: 004956d0  size: 75


uint FUN_004956d0(int param_1)

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
  return local_8[param_1 + 1] & 0xff000000;
}


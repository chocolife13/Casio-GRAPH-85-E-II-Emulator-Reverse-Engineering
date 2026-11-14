// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004955f0
// entry: 004955f0  size: 53


bool FUN_004955f0(uint param_1)

{
  char cVar1;
  uint local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad550(local_4,local_8,&local_c);
  if (cVar1 != '\0') {
    return false;
  }
  return param_1 <= local_c;
}


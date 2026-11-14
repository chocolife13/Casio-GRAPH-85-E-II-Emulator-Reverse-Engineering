// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f61f0
// entry: 004f61f0  size: 89


undefined4 FUN_004f61f0(void)

{
  char cVar1;
  undefined1 local_12 [2];
  int local_10;
  uint local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad550(local_4,local_8,&local_c);
  if (cVar1 == '\0') {
    FUN_004ab610(&local_10,local_12);
    if ((-(uint)(local_10 != 0) & 4000) + 1000 < local_c) {
      return 1;
    }
  }
  return 0;
}


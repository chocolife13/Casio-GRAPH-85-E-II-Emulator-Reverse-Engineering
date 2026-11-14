// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9a40
// entry: 004f9a40  size: 69


undefined4 FUN_004f9a40(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_004b7370(*param_1);
  bVar1 = *param_1;
  if (iVar2 == 0) {
    if (bVar1 == 0xd0) {
      return 1;
    }
    if ((0xbf < bVar1) && (bVar1 < 0xcb)) {
      return 1;
    }
  }
  else if ((bVar1 == 0x7f) && (param_1[1] == 0x50)) {
    return 1;
  }
  return 0;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515010
// entry: 00515010  size: 25


uint FUN_00515010(void)

{
  char cVar1;
  
  cVar1 = FUN_00526090(0x54);
  if (cVar1 != 0) {
    return (int)cVar1 - 1U & 0xffffff00;
  }
  return CONCAT31(cVar1 >> 7,1);
}


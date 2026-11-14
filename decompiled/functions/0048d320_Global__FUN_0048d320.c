// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048d320
// entry: 0048d320  size: 64


undefined4 FUN_0048d320(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1 & 0xf0;
  if ((((bVar1 != 0x50) && (bVar1 != 0x60)) ||
      (((*param_2 & 0xf0) != 0x50 && ((*param_2 & 0xf0) != 0x60)))) &&
     ((((bVar1 == 0x50 || (bVar1 == 0x60)) || ((*param_2 & 0xf0) == 0x50)) ||
      ((*param_2 & 0xf0) == 0x60)))) {
    return 1;
  }
  return 0;
}


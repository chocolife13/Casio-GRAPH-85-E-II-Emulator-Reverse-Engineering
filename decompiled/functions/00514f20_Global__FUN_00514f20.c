// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514f20
// entry: 00514f20  size: 25


uint FUN_00514f20(void)

{
  char cVar1;
  
  cVar1 = FUN_00526090(0x23);
  if (cVar1 != 0) {
    return (int)cVar1 - 1U & 0xffffff00;
  }
  return CONCAT31(cVar1 >> 7,1);
}


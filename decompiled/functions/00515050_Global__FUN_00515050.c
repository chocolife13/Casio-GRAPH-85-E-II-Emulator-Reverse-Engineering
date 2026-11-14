// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515050
// entry: 00515050  size: 37


undefined4 FUN_00515050(void)

{
  char cVar1;
  int3 iVar2;
  
  cVar1 = FUN_00526090(0x56);
  iVar2 = (int3)(cVar1 >> 7);
  switch(cVar1) {
  default:
    return CONCAT31(iVar2,2);
  case '\x01':
    return CONCAT31(iVar2,3);
  case '\x02':
    return CONCAT31(iVar2,5);
  case '\x03':
    return CONCAT31(iVar2,8);
  }
}


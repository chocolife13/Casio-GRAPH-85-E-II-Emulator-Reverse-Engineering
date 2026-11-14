// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514f60
// entry: 00514f60  size: 27


undefined4 FUN_00514f60(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00526090(0x21);
  iVar2 = (int)cVar1;
  if ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


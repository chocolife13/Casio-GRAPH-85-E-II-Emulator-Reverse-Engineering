// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514ee0
// entry: 00514ee0  size: 27


undefined4 FUN_00514ee0(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00526090(0x1b);
  iVar2 = (int)cVar1;
  if ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


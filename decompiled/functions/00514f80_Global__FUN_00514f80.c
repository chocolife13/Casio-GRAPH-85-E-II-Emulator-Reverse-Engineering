// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514f80
// entry: 00514f80  size: 27


uint FUN_00514f80(void)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_00526090(0x19);
  uVar2 = (uint)cVar1;
  if ((uVar2 != 0) && (uVar2 = uVar2 - 1, uVar2 == 0)) {
    return 1;
  }
  return uVar2 & 0xffffff00;
}


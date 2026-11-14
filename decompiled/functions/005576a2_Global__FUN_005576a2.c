// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005576a2
// entry: 005576a2  size: 46


int FUN_005576a2(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005576d0(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_0055bb67(*(undefined4 *)(param_1 + 0x10));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


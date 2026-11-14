// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495830
// entry: 00495830  size: 127


int FUN_00495830(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *local_8;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad800(&DAT_005bfd08,s_EACT1_005bfd10,local_4,&local_8);
  if (cVar1 != '\0') {
    return -1;
  }
  if (*local_8 <= DAT_005d6d78) {
    return -1;
  }
  if ((local_8[DAT_005d6d78 + 1] & 0xff000000U) != 0x6000000) {
    return -1;
  }
  uVar3 = local_8[DAT_005d6d78 + 1] & 0xffffff;
  iVar2 = FUN_004b7550(uVar3 + 0x10 + (int)local_8);
  return (iVar2 + 4U & 0xfffffffc) + 0x10 + uVar3;
}


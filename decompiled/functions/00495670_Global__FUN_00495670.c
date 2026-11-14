// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495670
// entry: 00495670  size: 85


int FUN_00495670(int param_1)

{
  char cVar1;
  uint uVar2;
  int local_8;
  uint local_4;
  
  cVar1 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,&local_4,&local_8);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = *(uint *)(local_8 + 8 + param_1 * 4);
  if (uVar2 == 0) {
    uVar2 = local_4;
  }
  return (uVar2 & 0xffffff) - (*(uint *)(local_8 + 4 + param_1 * 4) & 0xffffff);
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495ac0
// entry: 00495ac0  size: 78


void FUN_00495ac0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int local_8;
  undefined1 local_4 [4];
  
  cVar3 = FUN_004ad800(&DAT_005bfd08,s_EACT1_005bfd10,local_4,&local_8);
  if (cVar3 == '\0') {
    piVar4 = (int *)(local_8 + 8 + DAT_005d6d78 * 4);
    iVar2 = *(int *)(local_8 + 8 + DAT_005d6d78 * 4);
    while (iVar2 != 0) {
      *piVar4 = iVar2 + param_1;
      piVar1 = piVar4 + 1;
      piVar4 = piVar4 + 1;
      iVar2 = *piVar1;
    }
  }
  return;
}


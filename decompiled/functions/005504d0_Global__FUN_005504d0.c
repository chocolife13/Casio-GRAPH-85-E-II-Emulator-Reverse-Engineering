// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005504d0
// entry: 005504d0  size: 72


int FUN_005504d0(void)

{
  char cVar1;
  int iVar2;
  char local_c [12];
  
  iVar2 = 0;
  cVar1 = FUN_004aceb0(s__SSHEET_005be210,0,1);
  while (cVar1 == '\0') {
    cVar1 = FUN_004ad250(local_c);
    if ((cVar1 == '\0') && (local_c[0] != '@')) {
      iVar2 = iVar2 + 1;
    }
    cVar1 = FUN_004ad000(1);
  }
  return iVar2;
}


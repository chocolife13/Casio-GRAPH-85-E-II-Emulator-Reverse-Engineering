// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00503cf0
// entry: 00503cf0  size: 75


void FUN_00503cf0(void)

{
  char cVar1;
  int iVar2;
  undefined1 local_c [12];
  
  FUN_00538710();
  iVar2 = 1;
  do {
    cVar1 = FUN_00517450(iVar2,0x80);
    if (cVar1 != '\0') {
      FUN_0055c2fe(iVar2,local_c,10);
      FUN_00517810(2,local_c,1,0x40);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x15);
  return;
}


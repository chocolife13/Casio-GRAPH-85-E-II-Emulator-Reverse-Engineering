// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00503d40
// entry: 00503d40  size: 80


void FUN_00503d40(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = 1;
  do {
    cVar1 = FUN_00517450(iVar2,0x40);
    if (cVar1 != '\0') {
      FUN_0055c2fe(iVar2,local_c,10);
      FUN_00517810(2,local_c,0,0x40);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x15);
  FUN_00503cf0(param_1);
  return;
}


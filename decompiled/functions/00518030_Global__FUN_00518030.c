// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518030
// entry: 00518030  size: 72


int FUN_00518030(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = FUN_00517f00(param_1,local_c);
  if (iVar2 != 0) {
    return 0;
  }
  cVar1 = FUN_004ad2a0(0xffffffff,local_c,&param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  return param_1 + -4;
}


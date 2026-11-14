// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00490630
// entry: 00490630  size: 54


int FUN_00490630(int param_1)

{
  int iVar1;
  
  iVar1 = 7000;
  while( true ) {
    for (; -1 < param_1; param_1 = param_1 - iVar1) {
    }
    param_1 = param_1 + iVar1;
    if (iVar1 == 7) break;
    iVar1 = iVar1 / 10;
  }
  iVar1 = param_1 + -6;
  if (iVar1 < 0) {
    iVar1 = param_1 + 1;
  }
  return iVar1;
}


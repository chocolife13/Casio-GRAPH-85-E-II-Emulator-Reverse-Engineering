// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b73a0
// entry: 004b73a0  size: 100


bool FUN_004b73a0(undefined1 *param_1)

{
  char cVar1;
  
  switch(*param_1) {
  case 0x7f:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xf7:
  case 0xf9:
    return false;
  default:
    cVar1 = param_1[-1];
    return cVar1 == '\x7f' ||
           (cVar1 == -7 || (cVar1 == -9 || (cVar1 == -0x19 || (cVar1 == -0x1a || cVar1 == -0x1b))));
  }
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044cd40
// entry: 0044cd40  size: 69


void FUN_0044cd40(int *param_1,int param_2)

{
  if ((*(int *)(param_2 + 0x214) == 1) && (*param_1 != 0x7558)) {
    switch(*param_1) {
    case 0x7549:
    case 0x7553:
    case 0x7559:
    case 0x755a:
    case 0x755b:
    case 0x755c:
    case 0x7563:
      break;
    default:
      FUN_0044ab00(param_2);
      *param_1 = 0;
    }
  }
  return;
}


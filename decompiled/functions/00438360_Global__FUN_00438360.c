// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00438360
// entry: 00438360  size: 66


void FUN_00438360(int *param_1,int param_2)

{
  if ((*(int *)(param_2 + 0x2c) == 1) && (*param_1 != 0x7558)) {
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
      FUN_0043aa70(param_2);
      *param_1 = 0;
    }
  }
  return;
}


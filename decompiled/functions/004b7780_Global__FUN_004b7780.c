// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7780
// entry: 004b7780  size: 50


undefined1 * FUN_004b7780(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_1 < param_2) {
    puVar1 = param_2 + -1;
    puVar2 = puVar1;
    if (param_1 != puVar1) {
      puVar2 = param_2 + -2;
      switch(*puVar2) {
      case 0x7f:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xf7:
      case 0xf9:
        break;
      default:
        return puVar1;
      }
    }
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}


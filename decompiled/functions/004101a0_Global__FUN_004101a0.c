// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004101a0
// entry: 004101a0  size: 111


undefined4 FUN_004101a0(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(DAT_005d67e8 + 0x10);
  if (param_2 < param_1) {
    if ((param_1 <= puVar1) && (puVar1 <= param_1 + param_3)) {
      *(undefined1 **)(DAT_005d67e8 + 0x10) = param_2 + ((int)puVar1 - (int)param_1);
    }
    if (param_3 != 0) {
      do {
        *param_2 = *param_1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
  }
  else {
    if ((param_1 + -param_3 <= puVar1) && (puVar1 <= param_1)) {
      *(undefined1 **)(DAT_005d67e8 + 0x10) = param_2 + ((int)puVar1 - (int)param_1);
    }
    if (param_3 != 0) {
      do {
        *param_2 = *param_1;
        param_2 = param_2 + -1;
        param_1 = param_1 + -1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return 0;
}


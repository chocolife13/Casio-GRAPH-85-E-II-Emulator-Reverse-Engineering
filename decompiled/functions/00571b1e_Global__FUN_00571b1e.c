// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00571b1e
// entry: 00571b1e  size: 32


undefined4 FUN_00571b1e(HWND__ *param_1,HWND__ *param_2)

{
  do {
    if (param_1 == param_2) {
      return 1;
    }
    param_2 = AfxGetParentOwner(param_2);
  } while (param_2 != (HWND__ *)0x0);
  return 0;
}


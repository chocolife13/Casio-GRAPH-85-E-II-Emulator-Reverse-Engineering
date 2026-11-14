// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055beb8
// entry: 0055beb8  size: 137


int FUN_0055beb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_005d5658 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_005d5658 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_005d5658 != (FARPROC)0x0) {
        DAT_005d565c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_005d5660 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_0055bf07;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_0055bf07:
    if (DAT_005d565c != (FARPROC)0x0) {
      iVar1 = (*DAT_005d565c)();
      if ((iVar1 != 0) && (DAT_005d5660 != (FARPROC)0x0)) {
        iVar1 = (*DAT_005d5660)(iVar1);
      }
    }
    iVar1 = (*DAT_005d5658)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


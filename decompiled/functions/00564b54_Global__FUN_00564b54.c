// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564b54
// entry: 00564b54  size: 50


void __thiscall FUN_00564b54(int param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  int iVar1;
  HWND hWnd;
  
  if (param_3 == (LPCSTR)0x0) {
    iVar1 = FUN_0057497f();
    param_3 = *(LPCSTR *)(iVar1 + 0x10);
  }
  if (param_1 == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)(param_1 + 0x1c);
  }
  MessageBoxA(hWnd,param_2,param_3,param_4);
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564d07
// entry: 00564d07  size: 48


void __thiscall FUN_00564d07(int *param_1,int param_2,LPINT param_3,LPINT param_4)

{
  int iVar1;
  HWND hWnd;
  
  iVar1 = (**(code **)(*param_1 + 0x68))(param_2);
  if (iVar1 == 0) {
    hWnd = (HWND)param_1[7];
  }
  else {
    param_2 = 2;
    hWnd = *(HWND *)(iVar1 + 0x1c);
  }
  GetScrollRange(hWnd,param_2,param_3,param_4);
  return;
}


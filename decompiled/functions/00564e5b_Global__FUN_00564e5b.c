// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564e5b
// entry: 00564e5b  size: 166


void __thiscall FUN_00564e5b(int param_1,int param_2,int param_3,RECT *param_4,RECT *param_5)

{
  BOOL BVar1;
  HWND hWnd;
  UINT uCmd;
  tagRECT local_14;
  
  BVar1 = IsWindowVisible(*(HWND *)(param_1 + 0x1c));
  if (((BVar1 == 0) && (param_4 == (RECT *)0x0)) && (param_5 == (RECT *)0x0)) {
    uCmd = 5;
    hWnd = *(HWND *)(param_1 + 0x1c);
    while( true ) {
      hWnd = GetWindow(hWnd,uCmd);
      if (hWnd == (HWND)0x0) break;
      GetWindowRect(hWnd,&local_14);
      FUN_0056a3c5(&local_14);
      SetWindowPos(hWnd,(HWND)0x0,local_14.left + param_2,local_14.top + param_3,0,0,0x15);
      uCmd = 2;
    }
  }
  else {
    ScrollWindow(*(HWND *)(param_1 + 0x1c),param_2,param_3,param_4,param_5);
  }
  if ((*(int **)(param_1 + 0x34) != (int *)0x0) && (param_4 == (RECT *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x58))(param_2,param_3);
  }
  return;
}


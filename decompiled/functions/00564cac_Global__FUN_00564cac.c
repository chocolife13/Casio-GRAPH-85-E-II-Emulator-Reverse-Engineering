// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564cac
// entry: 00564cac  size: 40


void __thiscall FUN_00564cac(int *param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_retaddr;
  HWND hWnd;
  
  iVar1 = (**(code **)(*param_1 + 0x68))(param_2);
  if (iVar1 == 0) {
    hWnd = (HWND)param_1[7];
  }
  else {
    unaff_retaddr = 2;
    hWnd = *(HWND *)(iVar1 + 0x1c);
  }
  GetScrollPos(hWnd,unaff_retaddr);
  return;
}


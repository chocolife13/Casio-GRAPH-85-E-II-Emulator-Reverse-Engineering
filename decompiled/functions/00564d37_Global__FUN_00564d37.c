// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564d37
// entry: 00564d37  size: 67


void __thiscall FUN_00564d37(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int wBar;
  
  wBar = param_2;
  if (param_2 == 3) {
    FUN_00564d37(0,param_3);
    wBar = 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x68))(wBar);
  if (iVar1 == 0) {
    ShowScrollBar((HWND)param_1[7],wBar,param_2);
  }
  else {
    FUN_00566384(param_2);
  }
  return;
}


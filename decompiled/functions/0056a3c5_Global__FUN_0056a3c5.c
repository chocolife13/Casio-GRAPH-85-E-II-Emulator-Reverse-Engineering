// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a3c5
// entry: 0056a3c5  size: 60


void __thiscall FUN_0056a3c5(int param_1,LPPOINT param_2)

{
  LPPOINT lpPoint;
  LONG LVar1;
  uint uVar2;
  
  ScreenToClient(*(HWND *)(param_1 + 0x1c),param_2);
  lpPoint = param_2 + 1;
  ScreenToClient(*(HWND *)(param_1 + 0x1c),lpPoint);
  uVar2 = FUN_005661f8();
  if ((uVar2 & 0x400000) != 0) {
    LVar1 = param_2->x;
    param_2->x = lpPoint->x;
    lpPoint->x = LVar1;
  }
  return;
}


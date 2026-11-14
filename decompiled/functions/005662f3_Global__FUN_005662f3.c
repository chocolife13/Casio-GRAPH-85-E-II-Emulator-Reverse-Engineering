// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005662f3
// entry: 005662f3  size: 79


void __thiscall
FUN_005662f3(int param_1,HWND param_2,int param_3,int param_4,int param_5,int param_6,UINT param_7)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    if (param_2 != (HWND)0x0) {
      param_2 = (HWND)param_2[7].unused;
    }
    SetWindowPos(*(HWND *)(param_1 + 0x1c),param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x9c))
              (param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


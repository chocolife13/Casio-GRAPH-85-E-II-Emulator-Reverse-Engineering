// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00563de1
// entry: 00563de1  size: 72


void __thiscall FUN_00563de1(int param_1,undefined4 param_2)

{
  int iVar1;
  LPSTR lpString;
  int nMaxCount;
  
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    iVar1 = GetWindowTextLengthA(*(HWND *)(param_1 + 0x1c));
    nMaxCount = iVar1 + 1;
    lpString = (LPSTR)FUN_0056773e(iVar1);
    GetWindowTextA(*(HWND *)(param_1 + 0x1c),lpString,nMaxCount);
    FUN_00567716(0xffffffff);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x88))(param_2);
  }
  return;
}


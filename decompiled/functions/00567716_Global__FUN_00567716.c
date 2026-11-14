// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567716
// entry: 00567716  size: 40


void __thiscall FUN_00567716(int *param_1,int param_2)

{
  FUN_00567341();
  if (param_2 == -1) {
    param_2 = lstrlenA((LPCSTR)*param_1);
  }
  *(int *)(*param_1 + -8) = param_2;
  *(undefined1 *)(*param_1 + param_2) = 0;
  return;
}


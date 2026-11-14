// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ebe2
// entry: 0056ebe2  size: 70


void __thiscall FUN_0056ebe2(int *param_1,undefined4 param_2,LONG param_3,LONG param_4)

{
  int iVar1;
  
  if ((param_1[0x1c] != 0) &&
     (iVar1 = (**(code **)(*param_1 + 100))(param_3,param_4,0), iVar1 == -1)) {
    ClientToScreen((HWND)param_1[7],(LPPOINT)&param_3);
    (*(code *)**(undefined4 **)param_1[0x1d])(param_3,param_4);
    return;
  }
  FUN_0056339a();
  return;
}


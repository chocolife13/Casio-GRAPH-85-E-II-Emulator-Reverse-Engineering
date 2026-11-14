// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005660e9
// entry: 005660e9  size: 67


int __thiscall FUN_005660e9(int *param_1,HWND param_2)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = FUN_00563478(param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x50))();
    piVar2 = (int *)(**(code **)(*param_1 + 0x80))();
    LVar3 = FUN_0056350e();
    LVar3 = SetWindowLongA(param_2,-4,LVar3);
    if (*piVar2 == 0) {
      *piVar2 = LVar3;
    }
    iVar1 = 1;
  }
  return iVar1;
}


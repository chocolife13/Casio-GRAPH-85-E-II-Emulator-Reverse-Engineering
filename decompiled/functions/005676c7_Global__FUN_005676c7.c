// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005676c7
// entry: 005676c7  size: 79


int __thiscall FUN_005676c7(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((1 < *(int *)(iVar1 + -0xc)) || (*(int *)(iVar1 + -4) < param_2)) {
    iVar2 = *(int *)(iVar1 + -8);
    if (param_2 < iVar2) {
      param_2 = iVar2;
    }
    FUN_00567205(param_2);
    FUN_00555c70(*param_1,iVar1,iVar2 + 1);
    *(int *)(*param_1 + -8) = iVar2;
    FUN_00567300(iVar1 + -0xc);
  }
  return *param_1;
}


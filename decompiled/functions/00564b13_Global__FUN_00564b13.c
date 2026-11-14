// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564b13
// entry: 00564b13  size: 65


int * __fastcall FUN_00564b13(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (int *)0x0) && (param_1[7] != 0)) {
    iVar2 = (**(code **)(*param_1 + 0xb0))();
    piVar3 = param_1;
    if (iVar2 == 0) {
      param_1 = (int *)FUN_005649b3();
      piVar3 = param_1;
    }
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar3 = (int *)FUN_005649b3();
      param_1 = piVar1;
    }
    return param_1;
  }
  return (int *)0x0;
}


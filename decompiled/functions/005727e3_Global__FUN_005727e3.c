// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005727e3
// entry: 005727e3  size: 37


undefined4 __fastcall FUN_005727e3(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0057497f();
  piVar1 = *(int **)(iVar2 + 4);
  if ((piVar1 != (int *)0x0) && (piVar1[7] == param_1)) {
    uVar3 = (**(code **)(*piVar1 + 0x88))();
    return uVar3;
  }
  return 1;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569b48
// entry: 00569b48  size: 118


undefined4 FUN_00569b48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  CWinThread *pCVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  pCVar2 = AfxGetThread();
  iVar3 = FUN_0057497f();
  piVar1 = *(int **)(iVar3 + 4);
  iVar3 = FUN_00577094(param_1,param_2,param_3,param_4);
  if ((iVar3 != 0) &&
     ((piVar1 == (int *)0x0 || (iVar3 = (**(code **)(*piVar1 + 0x84))(), iVar3 != 0)))) {
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x50))();
    if (iVar3 == 0) {
      if (*(int **)(pCVar2 + 0x1c) != (int *)0x0) {
        (**(code **)(**(int **)(pCVar2 + 0x1c) + 0x58))();
      }
      uVar4 = (**(code **)(*(int *)pCVar2 + 0x68))();
    }
    else {
      uVar4 = (**(code **)(*(int *)pCVar2 + 0x54))();
    }
  }
  FUN_0057a646();
  return uVar4;
}


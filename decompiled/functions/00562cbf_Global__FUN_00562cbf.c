// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562cbf
// entry: 00562cbf  size: 136


int __fastcall FUN_00562cbf(int *param_1)

{
  int *piVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  
  (**(code **)(*param_1 + 0xcc))();
  iVar2 = FUN_0057497f();
  piVar1 = *(int **)(iVar2 + 0x1038);
  if ((piVar1 != (int *)0x0) && (iVar2 = param_1[0x16], iVar2 != 0)) {
    if (param_1[0x13] == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x20))(param_1,param_1[0x10],iVar2);
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x1c))(param_1,param_1[0x13],iVar2);
    }
    if (iVar2 == 0) {
      FUN_00562c77(0xffffffff);
      return 0;
    }
  }
  iVar2 = FUN_0056339a();
  if ((iVar2 != 0) && ((*(byte *)((int)param_1 + 0x25) & 1) != 0)) {
    pHVar3 = GetNextDlgTabItem((HWND)param_1[7],(HWND)0x0,0);
    iVar4 = FUN_00563433(pHVar3);
    if (iVar4 != 0) {
      FUN_005663ab();
      iVar2 = 0;
    }
  }
  return iVar2;
}


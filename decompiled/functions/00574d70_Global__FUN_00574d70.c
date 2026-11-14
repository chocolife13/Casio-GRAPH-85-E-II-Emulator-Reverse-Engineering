// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00574d70
// entry: 00574d70  size: 112


void __thiscall FUN_00574d70(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  HWND hWnd;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int local_10 [3];
  
  FUN_0056f161(param_2,param_3);
  uVar2 = FUN_005661de();
  if ((uVar2 & 0x100) != 0) {
    hWnd = GetParent((HWND)param_1[7]);
    BVar3 = IsZoomed(hWnd);
    if (BVar3 == 0) {
      (**(code **)(*param_1 + 0xa0))(0x407,0,local_10);
      iVar4 = GetSystemMetrics(5);
      iVar1 = *(int *)(param_2 + 8);
      iVar5 = GetSystemMetrics(2);
      *(int *)(param_2 + 8) = ((iVar1 + iVar4 * -2) - local_10[0]) - iVar5;
    }
  }
  return;
}


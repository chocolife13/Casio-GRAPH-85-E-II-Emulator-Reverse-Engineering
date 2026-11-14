// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d429
// entry: 0056d429  size: 135


void __thiscall FUN_0056d429(int param_1,LPRECT param_2,int param_3)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  BOOL bMenu;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  if (param_3 == 1) {
    DVar3 = FUN_005661f8();
    AdjustWindowRectEx(param_2,0,0,DVar3);
    if (*(int *)(param_1 + 0x40) != -1) {
      iVar4 = param_2->right - param_2->left;
      iVar6 = param_2->bottom - param_2->top;
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar2 = *(int *)(param_1 + 0x50);
      FUN_0056d120(&local_c);
      if (iVar2 != iVar6 && -1 < iVar2 - iVar6) {
        param_2->right = param_2->right + local_c;
      }
      if (iVar1 != iVar4 && -1 < iVar1 - iVar4) {
        param_2->bottom = param_2->bottom + local_8;
      }
    }
  }
  else {
    uVar5 = FUN_005661f8();
    uVar5 = uVar5 & 0xfffffdff;
    bMenu = 0;
    DVar3 = FUN_005661de();
    AdjustWindowRectEx(param_2,DVar3,bMenu,uVar5);
  }
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005707f6
// entry: 005707f6  size: 360


void __thiscall FUN_005707f6(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  HWND hWnd;
  BOOL BVar4;
  int iVar5;
  undefined4 uVar6;
  tagRECT local_3c;
  RECT local_2c;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - *(int *)(param_1 + 4);
  iVar5 = param_3 - *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x8c);
  uVar6 = 2;
  if (iVar2 == 10) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar1;
  }
  else {
    if (iVar2 != 0xb) {
      uVar6 = 0x22;
      if (iVar2 == 0xc) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar5;
      }
      else {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar5;
      }
      iVar2 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x2c);
      goto LAB_0057084e;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
  }
  iVar2 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
LAB_0057084e:
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xbc))(&local_1c.right,iVar2,uVar6);
  local_c = *piVar3;
  local_8 = piVar3[1];
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,&local_3c);
  local_2c.left = *(int *)(param_1 + 0x48);
  local_2c.top = *(int *)(param_1 + 0x4c);
  local_2c.right = *(int *)(param_1 + 0x50);
  local_2c.bottom = *(int *)(param_1 + 0x54);
  if ((*(int *)(param_1 + 0x8c) == 10) || (*(int *)(param_1 + 0x8c) == 0xc)) {
    local_2c.left =
         ((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60)) - local_c) + local_2c.right;
    local_2c.top = ((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100)) - local_8) +
                   local_2c.bottom;
    BVar4 = IntersectRect(&local_1c,&local_3c,&local_2c);
    if (BVar4 != 0) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x40) - local_c;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x44) - local_8;
      *(LONG *)(param_1 + 0x48) = local_2c.left;
      *(LONG *)(param_1 + 0x4c) = local_2c.top;
    }
  }
  else {
    local_2c.right = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58)) + local_2c.left + local_c
    ;
    local_2c.bottom = (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c)) + local_2c.top + local_8;
    BVar4 = IntersectRect(&local_1c,&local_3c,&local_2c);
    if (BVar4 != 0) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x38) + local_c;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x3c) + local_8;
      *(LONG *)(param_1 + 0x50) = local_2c.right;
      *(LONG *)(param_1 + 0x54) = local_2c.bottom;
    }
  }
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  FUN_00570b84(0);
  return;
}


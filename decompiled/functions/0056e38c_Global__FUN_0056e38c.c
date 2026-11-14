// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e38c
// entry: 0056e38c  size: 368


void __thiscall FUN_0056e38c(int *param_1,int param_2)

{
  POINT Point;
  SHORT SVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HWND pHVar5;
  int *piVar6;
  BOOL BVar7;
  HWND pHVar8;
  tagPOINT local_14;
  int local_c;
  int local_8;
  
  SVar1 = GetKeyState(1);
  if (SVar1 < 0) {
    return;
  }
  iVar2 = FUN_00574748();
  local_c = iVar2;
  GetCursorPos(&local_14);
  ScreenToClient((HWND)param_1[7],&local_14);
  local_8 = (**(code **)(*param_1 + 100))(local_14.x,local_14.y,0);
  if (local_8 < 0) {
    *(undefined4 *)(iVar2 + 0x104) = 0xffffffff;
  }
  else {
    iVar3 = FUN_00564a36();
    iVar4 = FUN_00564aa2();
    if ((iVar4 == 0) || (iVar4 = FUN_00566369(), iVar4 == 0)) {
      local_8 = -1;
    }
    if (*(int *)(iVar2 + 0xcc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0xcc) + 0x1c);
    }
    pHVar5 = GetCapture();
    piVar6 = (int *)FUN_00563433(pHVar5);
    if (piVar6 != param_1) {
      if (piVar6 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = piVar6[7];
      }
      if ((iVar4 != iVar2) && (iVar2 = FUN_00564a36(), iVar2 == iVar3)) {
        local_8 = -1;
      }
    }
  }
  if (-1 < local_8) {
    ClientToScreen((HWND)param_1[7],&local_14);
    Point.y = local_14.y;
    Point.x = local_14.x;
    pHVar5 = WindowFromPoint(Point);
    if (pHVar5 == (HWND)0x0) {
LAB_0056e49c:
      local_8 = -1;
      *(undefined4 *)(local_c + 0x104) = 0xffffffff;
    }
    else if ((pHVar5 != (HWND)param_1[7]) && (BVar7 = IsChild((HWND)param_1[7],pHVar5), BVar7 == 0))
    {
      pHVar8 = *(HWND *)(local_c + 0xcc);
      if (pHVar8 != (HWND)0x0) {
        pHVar8 = (HWND)pHVar8[7].unused;
      }
      if (pHVar8 != pHVar5) goto LAB_0056e49c;
    }
    if (-1 < local_8) goto LAB_0056e4d2;
  }
  if (*(int *)(local_c + 0x104) == -1) {
    KillTimer((HWND)param_1[7],0xe001);
  }
  (**(code **)(*param_1 + 0xdc))(0xffffffff);
LAB_0056e4d2:
  if ((param_2 == 0xe000) && (KillTimer((HWND)param_1[7],0xe000), -1 < local_8)) {
    (**(code **)(*param_1 + 0xdc))(local_8);
  }
  return;
}


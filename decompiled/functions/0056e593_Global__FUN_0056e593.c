// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e593
// entry: 0056e593  size: 505


undefined4 __thiscall FUN_0056e593(CWnd *param_1,int param_2)

{
  SHORT SVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_48;
  byte local_41;
  int local_24;
  tagPOINT local_1c;
  CWnd *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = FUN_00563cfa(param_2);
  if (iVar2 != 0) {
    return 1;
  }
  uVar4 = *(uint *)(param_2 + 4);
  local_14 = CWnd::GetOwner(param_1);
  if ((((((byte)param_1[100] & 0x20) == 0) && (uVar4 != 0x201)) && (uVar4 != 0x202)) ||
     (((uVar4 < 0x200 || (0x209 < uVar4)) && ((uVar4 < 0xa0 || (0xa9 < uVar4))))))
  goto LAB_0056e739;
  local_10 = FUN_00574748();
  local_1c.x = *(LONG *)(param_2 + 0x14);
  local_1c.y = *(LONG *)(param_2 + 0x18);
  ScreenToClient(*(HWND *)(param_1 + 0x1c),&local_1c);
  _memset(&local_48,0,0x2c);
  local_48 = 0x28;
  local_8 = (**(code **)(*(int *)param_1 + 100))(local_1c.x,local_1c.y,&local_48);
  if (local_24 != -1) {
    FUN_00553b50(local_24);
  }
  if ((uVar4 == 0x201) && ((local_41 & 0x80) != 0)) {
    local_c = 1;
  }
  else {
    local_c = 0;
    if ((uVar4 != 0x201) && (SVar1 = GetKeyState(1), SVar1 < 0)) {
      local_8 = *(int *)(local_10 + 0x104);
    }
  }
  if ((local_8 < 0) || (local_c != 0)) {
    SVar1 = GetKeyState(1);
    if ((-1 < SVar1) || (local_c != 0)) {
      (**(code **)(*(int *)param_1 + 0xdc))(0xffffffff);
      KillTimer(*(HWND *)(param_1 + 0x1c),0xe001);
    }
  }
  else if (uVar4 == 0x202) {
    (**(code **)(*(int *)param_1 + 0xdc))(0xffffffff);
    uVar5 = 200;
    uVar4 = 0xe001;
LAB_0056e6bb:
    CControlBar::ResetTimer((CControlBar *)param_1,uVar4,uVar5);
  }
  else if ((((byte)param_1[0x60] & 8) == 0) && (SVar1 = GetKeyState(1), -1 < SVar1)) {
    if (local_8 != *(int *)(local_10 + 0x104)) {
      uVar5 = 300;
      uVar4 = 0xe000;
      goto LAB_0056e6bb;
    }
  }
  else {
    (**(code **)(*(int *)param_1 + 0xdc))(local_8);
  }
  *(int *)(local_10 + 0x104) = local_8;
LAB_0056e739:
  iVar2 = FUN_00564b13();
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x50) == 0)) {
    while (local_14 != (CWnd *)0x0) {
      iVar2 = (**(code **)(*(int *)local_14 + 0x90))(param_2);
      if (iVar2 != 0) {
        return 1;
      }
      local_14 = (CWnd *)FUN_005649b3();
    }
    uVar3 = FUN_00565b9d(param_2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


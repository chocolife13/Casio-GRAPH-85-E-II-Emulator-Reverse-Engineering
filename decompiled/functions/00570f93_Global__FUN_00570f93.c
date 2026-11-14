// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00570f93
// entry: 00570f93  size: 555


void __thiscall FUN_00570f93(int param_1,int param_2,RECT *param_3)

{
  byte bVar1;
  BOOL BVar2;
  uint uVar3;
  HWND pHVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_130 [260];
  tagRECT local_2c;
  int local_1c;
  undefined4 local_18;
  tagRECT local_14;
  
  GetWindowRect(*(HWND *)(param_2 + 0x1c),&local_2c);
  if (*(int *)(param_2 + 0x70) == param_1) {
    if (param_3 == (RECT *)0x0) {
      return;
    }
    BVar2 = EqualRect(&local_2c,param_3);
    if (BVar2 != 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0x78) != 0) && ((*(byte *)(param_2 + 0x68) & 0x40) != 0)) {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x40;
  }
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffffff9;
  uVar3 = *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = *(uint *)(param_2 + 100) & 6 | uVar3;
  if ((uVar3 & 0x40) == 0) {
    FUN_0056629b(local_130,0x104);
    FUN_0056c213(*(undefined4 *)(param_1 + 0x1c),local_130);
  }
  uVar7 = *(undefined4 *)(param_2 + 100);
  bVar1 = (byte)((uint)uVar7 >> 8);
  uVar3 = CONCAT22((short)((uint)uVar7 >> 0x10),
                   CONCAT11(((byte)((uint)*(undefined4 *)(param_1 + 100) >> 8) ^ bVar1) & 0xf0 ^
                            bVar1,(char)uVar7));
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar3 = uVar3 & 0xfffffffe | 0xf00;
  }
  else {
    uVar3 = uVar3 | 0xf01;
  }
  FUN_005767ef(uVar3);
  local_1c = 0;
  if ((*(int *)(param_2 + 0x70) != param_1) &&
     (BVar2 = IsWindowVisible(*(HWND *)(param_2 + 0x1c)), BVar2 != 0)) {
    FUN_005662f3(0,0,0,0,0,0x97);
    local_1c = 1;
  }
  local_18 = 0xffffffff;
  if (param_3 == (RECT *)0x0) {
    FUN_00561fb6(*(undefined4 *)(param_1 + 0x84),param_2);
    FUN_00561fb6(*(undefined4 *)(param_1 + 0x84),0);
    FUN_005662f3(0,-DAT_005d50b8,-DAT_005d50bc,0,0,0x115);
  }
  else {
    CopyRect(&local_14,param_3);
    FUN_0056a3c5(&local_14);
    local_18 = FUN_0057155e(param_2,local_14.left,local_14.top,local_14.right,local_14.bottom,
                            (local_14.right - local_14.left) / 2 + local_14.left,
                            (local_14.bottom - local_14.top) / 2 + local_14.top);
    FUN_005662f3(0,local_14.left,local_14.top,local_14.right - local_14.left,
                 local_14.bottom - local_14.top,0x114);
  }
  pHVar4 = GetParent(*(HWND *)(param_2 + 0x1c));
  iVar5 = FUN_00563433(pHVar4);
  if (iVar5 != param_1) {
    if (param_1 == 0) {
      pHVar4 = (HWND)0x0;
    }
    else {
      pHVar4 = *(HWND *)(param_1 + 0x1c);
    }
    pHVar4 = SetParent(*(HWND *)(param_2 + 0x1c),pHVar4);
    FUN_00563433(pHVar4);
  }
  iVar5 = *(int *)(param_2 + 0x70);
  if (iVar5 == param_1) {
    uVar7 = 0;
    uVar6 = local_18;
  }
  else {
    if (iVar5 == 0) goto LAB_0057118b;
    if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(iVar5 + 0x78) != 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    uVar6 = 0xffffffff;
  }
  FUN_00571406(param_2,uVar6,uVar7);
LAB_0057118b:
  *(int *)(param_2 + 0x70) = param_1;
  if (local_1c != 0) {
    FUN_005662f3(0,0,0,0,0,0x57);
  }
  FUN_005713a5(param_2);
  iVar5 = FUN_005738c5();
  *(uint *)(iVar5 + 0xb8) = *(uint *)(iVar5 + 0xb8) | 0xc;
  return;
}


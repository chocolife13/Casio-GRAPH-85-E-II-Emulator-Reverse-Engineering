// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005711be
// entry: 005711be  size: 487


void __thiscall FUN_005711be(int param_1,int param_2,RECT *param_3)

{
  byte bVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  undefined4 uVar7;
  undefined1 local_128 [260];
  tagRECT local_24;
  tagRECT local_14;
  
  GetWindowRect(*(HWND *)(param_2 + 0x1c),&local_24);
  if (*(int *)(param_2 + 0x70) == param_1) {
    if (param_3 == (RECT *)0x0) {
      return;
    }
    BVar2 = EqualRect(&local_24,param_3);
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
    FUN_0056629b(local_128,0x104);
    FUN_0056c213(*(undefined4 *)(param_1 + 0x1c),local_128);
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
  uVar7 = 0xffffffff;
  uVar3 = GetDlgCtrlID(*(HWND *)(param_2 + 0x1c));
  iVar4 = FUN_00571514(uVar3 & 0xffff,uVar7);
  if (0 < iVar4) {
    *(int *)(*(int *)(param_1 + 0x80) + iVar4 * 4) = param_2;
  }
  if (param_3 == (RECT *)0x0) {
    if (iVar4 < 1) {
      FUN_00561fb6(*(undefined4 *)(param_1 + 0x84),param_2);
      FUN_00561fb6(*(undefined4 *)(param_1 + 0x84),0);
    }
    uVar7 = 0x115;
    iVar4 = 0;
    local_14.top = -DAT_005d50bc;
    iVar5 = 0;
    local_14.left = -DAT_005d50b8;
  }
  else {
    CopyRect(&local_14,param_3);
    FUN_0056a3c5(&local_14);
    if (iVar4 < 1) {
      FUN_0057155e(param_2,local_14.left,local_14.top,local_14.right,local_14.bottom,
                   (local_14.right - local_14.left) / 2 + local_14.left,
                   (local_14.bottom - local_14.top) / 2 + local_14.top);
    }
    uVar7 = 0x114;
    iVar4 = local_14.bottom - local_14.top;
    iVar5 = local_14.right - local_14.left;
  }
  FUN_005662f3(0,local_14.left,local_14.top,iVar5,iVar4,uVar7);
  pHVar6 = GetParent(*(HWND *)(param_2 + 0x1c));
  iVar4 = FUN_00563433(pHVar6);
  if (iVar4 != param_1) {
    if (param_1 == 0) {
      pHVar6 = (HWND)0x0;
    }
    else {
      pHVar6 = *(HWND *)(param_1 + 0x1c);
    }
    pHVar6 = SetParent(*(HWND *)(param_2 + 0x1c),pHVar6);
    FUN_00563433(pHVar6);
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    FUN_00571406(param_2,0xffffffff,0);
  }
  *(int *)(param_2 + 0x70) = param_1;
  iVar4 = FUN_005738c5();
  *(uint *)(iVar4 + 0xb8) = *(uint *)(iVar4 + 0xb8) | 0xc;
  return;
}


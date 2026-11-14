// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00563edb
// entry: 00563edb  size: 84


void __thiscall
FUN_00563edb(int param_1,UINT param_2,int param_3,int param_4,HWND param_5,RECT *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_00574748();
  uVar1 = *(undefined4 *)(iVar3 + 0x54);
  uVar2 = *(undefined4 *)(iVar3 + 0x50);
  if (param_5 != (HWND)0x0) {
    param_5 = (HWND)param_5[7].unused;
  }
  *(HWND *)(iVar3 + 0x50) = param_5;
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 4);
  TrackPopupMenu(*(HMENU *)(param_1 + 4),param_2,param_3,param_4,0,param_5,param_6);
  *(undefined4 *)(iVar3 + 0x50) = uVar2;
  *(undefined4 *)(iVar3 + 0x54) = uVar1;
  return;
}


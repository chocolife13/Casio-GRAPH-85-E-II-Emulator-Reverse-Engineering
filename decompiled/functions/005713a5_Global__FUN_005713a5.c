// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005713a5
// entry: 005713a5  size: 97


void __thiscall FUN_005713a5(int param_1,uint param_2)

{
  int iVar1;
  
  if ((short)(param_2 >> 0x10) != 0) {
    param_2 = GetDlgCtrlID(*(HWND *)(param_2 + 0x1c));
    param_2 = param_2 & 0xffff;
  }
  iVar1 = FUN_00571514(param_2,0xffffffff);
  if (0 < iVar1) {
    FUN_0056206f(iVar1,1);
    if ((*(int *)(*(int *)(param_1 + 0x80) + -4 + iVar1 * 4) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x80) + iVar1 * 4) == 0)) {
      FUN_0056206f(iVar1,1);
    }
  }
  return;
}


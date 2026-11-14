// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056054c
// entry: 0056054c  size: 219


int __fastcall FUN_0056054c(CDialog *param_1)

{
  bool bVar1;
  int iVar2;
  HWND hWnd;
  HWND__ *pHVar3;
  BOOL BVar4;
  int iVar5;
  
  iVar2 = lstrlenA(*(LPCSTR *)(param_1 + 0x78));
  _memset((void *)(iVar2 + 1 + *(int *)(param_1 + 0x78)),0,*(int *)(param_1 + 0x7c) - (iVar2 + 1));
  hWnd = GetFocus();
  bVar1 = false;
  pHVar3 = CDialog::PreModal(param_1);
  *(HWND__ **)(param_1 + 0x60) = pHVar3;
  FUN_00563931();
  if (*(HWND *)(param_1 + 0x60) != (HWND)0x0) {
    BVar4 = IsWindowEnabled(*(HWND *)(param_1 + 0x60));
    if (BVar4 != 0) {
      bVar1 = true;
      EnableWindow(*(HWND *)(param_1 + 0x60),0);
    }
  }
  iVar2 = FUN_00574748();
  if (((byte)param_1[0x92] & 8) == 0) {
    FUN_005638e5(param_1);
  }
  else {
    *(CDialog **)(iVar2 + 0x18) = param_1;
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar5 = GetSaveFileNameA((LPOPENFILENAMEA)(param_1 + 0x5c));
  }
  else {
    iVar5 = GetOpenFileNameA((LPOPENFILENAMEA)(param_1 + 0x5c));
  }
  *(undefined4 *)(iVar2 + 0x18) = 0;
  if (bVar1) {
    EnableWindow(*(HWND *)(param_1 + 0x60),1);
  }
  BVar4 = IsWindow(hWnd);
  if (BVar4 != 0) {
    SetFocus(hWnd);
  }
  CDialog::PostModal(param_1);
  if (iVar5 == 0) {
    iVar5 = 2;
  }
  return iVar5;
}


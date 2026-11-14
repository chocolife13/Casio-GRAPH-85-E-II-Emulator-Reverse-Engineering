// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040b9b0
// entry: 0040b9b0  size: 205


undefined4 FUN_0040b9b0(undefined4 param_1)

{
  BOOL BVar1;
  HANDLE hMem;
  LPVOID pvVar2;
  undefined *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0057a9ff;
  pvStack_c = ExceptionList;
  local_10 = 0;
  local_14 = PTR_DAT_005cba44;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 == 0) {
    FUN_0056710d(&local_14);
  }
  else {
    BVar1 = IsClipboardFormatAvailable(1);
    if (BVar1 != 0) {
      hMem = GetClipboardData(1);
      pvVar2 = GlobalLock(hMem);
      FUN_0056116d(&local_14,&DAT_005a92c4,pvVar2);
      GlobalUnlock(hMem);
    }
    CloseClipboard();
    FUN_0056710d(&local_14);
  }
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_00567398();
  ExceptionList = pvStack_c;
  return param_1;
}


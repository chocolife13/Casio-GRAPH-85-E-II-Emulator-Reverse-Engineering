// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005670cd
// entry: 005670cd  size: 64


BOOL __fastcall FUN_005670cd(int *param_1)

{
  LPMSG lpMsg;
  BOOL BVar1;
  int iVar2;
  
  lpMsg = (LPMSG)(param_1 + 0xc);
  BVar1 = GetMessageA(lpMsg,(HWND)0x0,0,0);
  if (BVar1 != 0) {
    if (param_1[0xd] != 0x36a) {
      iVar2 = (**(code **)(*param_1 + 0x58))(lpMsg);
      if (iVar2 == 0) {
        TranslateMessage(lpMsg);
        DispatchMessageA(lpMsg);
      }
    }
    BVar1 = 1;
  }
  return BVar1;
}


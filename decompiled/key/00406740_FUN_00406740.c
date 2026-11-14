// decompiled from GRAPH85emulator.exe
// function: FUN_00406740 @ 00406740


undefined4 __fastcall FUN_00406740(int param_1)

{
  undefined *lpWindowName;
  DWORD DVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [36];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057a7ea;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00575bee();
  CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,*(LPCSTR *)(param_1 + 0x88));
  DVar1 = GetLastError();
  lpWindowName = PTR_DAT_005cba44;
  if (DVar1 == 0xb7) {
    uStack_4 = 0;
    FUN_005677ee(0xf006);
    pHVar2 = FindWindowA((LPCSTR)0x0,lpWindowName);
    iVar3 = FUN_00563433(pHVar2);
    if (iVar3 != 0) {
      SetForegroundWindow(*(HWND *)(iVar3 + 0x1c));
    }
    uStack_4 = 0xffffffff;
    FUN_00567398();
    ExceptionList = pvStack_c;
    return 0;
  }
  FUN_00574f20(s_CASIO_005a8d60);
  FUN_00575320(4);
  iVar3 = FUN_00566937(0x68);
  uStack_4 = 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0056a7c8(0x80,&PTR_s_CNewGraphDoc_0057cd08,&PTR_s_CMainFrame_0057c880,
                         &PTR_s_CNewGraphView_0057cdf0);
  }
  uStack_4 = 0xffffffff;
  FUN_0056e209(uVar4);
  FUN_005753ef();
  uStack_4 = 2;
  FUN_0057539c(auStack_30);
  iVar3 = FUN_0057588b(auStack_30);
  if (iVar3 == 0) {
    uStack_4 = 0xffffffff;
    FUN_0057544a();
    ExceptionList = pvStack_c;
    return 0;
  }
  FUN_00566342(5);
  UpdateWindow(*(HWND *)(*(int *)(param_1 + 0x1c) + 0x1c));
  uStack_4 = 0xffffffff;
  FUN_0057544a();
  ExceptionList = pvStack_c;
  return 1;
}


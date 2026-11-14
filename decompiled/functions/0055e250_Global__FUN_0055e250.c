// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055e250
// entry: 0055e250  size: 430


void FUN_0055e250(int param_1,HWND param_2,int *param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  uint uVar5;
  int iVar6;
  HWND pHVar7;
  int iVar8;
  bool bVar9;
  int iStack_4;
  
  DVar3 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  if (DAT_005da9b4 != DVar3) {
    iVar8 = 0;
    bVar9 = DAT_005da9bc == 0;
    if (0 < DAT_005da9bc) {
      pDVar4 = &DAT_005da9c4;
      do {
        DVar2 = DVar3;
        iVar1 = iVar8;
        if (*pDVar4 == DVar3) break;
        pDVar4 = pDVar4 + 5;
        iVar8 = iVar8 + 1;
        DVar2 = DAT_005da9b4;
        iVar1 = DAT_005da9b8;
      } while (iVar8 < DAT_005da9bc);
      DAT_005da9b8 = iVar1;
      DAT_005da9b4 = DVar2;
      bVar9 = iVar8 == DAT_005da9bc;
    }
    if (bVar9) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
      CallNextHookEx((HHOOK)0x0,param_1,(WPARAM)param_2,(LPARAM)param_3);
      return;
    }
  }
  iVar8 = DAT_005da9b8;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  if (param_1 != 3) goto LAB_0055e3dc;
  iVar1 = *param_3;
  if (*(int *)(iVar1 + 0x28) != 0x8002) {
    if (((&DAT_005da9d0)[iVar8 * 0x14] & 1) == 0) goto LAB_0055e3dc;
    iVar6 = FUN_0055e210(*(undefined4 *)(iVar1 + 0xc));
    if (iVar6 == 0) {
      if ((*(HWND *)(iVar1 + 0xc) == (HWND)0x0) || (DAT_005da982 == 0x18)) goto LAB_0055e3dc;
      pHVar7 = GetParent(*(HWND *)(iVar1 + 0xc));
      iVar6 = FUN_0055e210(pHVar7);
      if (iVar6 == 0) goto LAB_0055e3dc;
    }
    FUN_0055e5e0(param_2,0xffff,1,*(undefined4 *)(iVar1 + 0xc));
    goto LAB_0055e3dc;
  }
  if (DAT_005da982 != 0x20) {
    FUN_0055cbf0(param_2,FUN_0055dee0);
    goto LAB_0055e3dc;
  }
  if (DAT_005da980 < 0x35f) {
LAB_0055e330:
    iStack_4 = 1;
  }
  else {
    uVar5 = GetWindowLongA(param_2,-0x10);
    iStack_4 = 0;
    if ((uVar5 & 4) == 0) goto LAB_0055e330;
  }
  SendMessageA(param_2,0x11f0,0,(LPARAM)&iStack_4);
  if (iStack_4 != 0) {
    FUN_0055ca50(param_2,FUN_0055dee0);
  }
LAB_0055e3dc:
  CallNextHookEx((HHOOK)(&DAT_005da9c8)[iVar8 * 5],param_1,(WPARAM)param_2,(LPARAM)param_3);
  return;
}


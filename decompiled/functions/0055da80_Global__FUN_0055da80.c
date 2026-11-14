// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055da80
// entry: 0055da80  size: 487


uint FUN_0055da80(void)

{
  undefined **lpClassName;
  HDC hdc;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  tagWNDCLASSA tStack_28;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0xc);
  iVar2 = GetDeviceCaps(hdc,0xe);
  DAT_005da960 = (uint)(3 < iVar1 * iVar2);
  iVar1 = GetSystemMetrics(1);
  if ((iVar1 == 0x15e) && (iVar1 = GetSystemMetrics(0), iVar1 == 0x280)) {
    DAT_005da960 = 0;
  }
  ReleaseDC((HWND)0x0,hdc);
  if (DAT_005da960 != 0) {
    DAT_005da968 = GlobalAddAtomA(&DAT_005ccb10);
    if ((DAT_005da968 != 0) && (DAT_005da96e = GlobalAddAtomA(s_C3dNew_005ccaf8), DAT_005da96e != 0)
       ) {
      DAT_005da96c = GlobalAddAtomA(&DAT_005ccb08);
      DAT_005da96a = GlobalAddAtomA(&DAT_005ccb00);
      if ((DAT_005da96c == 0) || (DAT_005da96a == 0)) {
        DAT_005da960 = 0;
        return 0;
      }
      DAT_005da972 = GlobalAddAtomA(s_C3dLNew_005ccaf0);
      DAT_005da970 = GlobalAddAtomA(s_C3dHNew_005ccae8);
      if ((DAT_005da972 == 0) || (DAT_005da970 == 0)) {
        DAT_005da960 = 0;
        return 0;
      }
      DAT_005da974 = GlobalAddAtomA(&DAT_005ccb14);
      if (DAT_005da974 != 0) {
        iVar1 = GetSystemMetrics(0x2a);
        DAT_005db465 = (char)iVar1;
        FUN_0055d9e0();
        iVar1 = FUN_0055dd50(1);
        if (iVar1 != 0) {
          ppuVar5 = &PTR_FUN_0059d94c;
          puVar4 = &DAT_005db3c0;
          do {
            lpClassName = ppuVar5 + -5;
            *puVar4 = *ppuVar5;
            ppuVar5 = ppuVar5 + 8;
            GetClassInfoA((HINSTANCE)0x0,(LPCSTR)lpClassName,&tStack_28);
            puVar4[1] = tStack_28.lpfnWndProc;
            puVar4 = puVar4 + 6;
          } while (ppuVar5 < &DAT_0059da0c);
          BVar3 = GetClassInfoA((HINSTANCE)0x0,(LPCSTR)0x8002,&tStack_28);
          if (BVar3 == 0) {
            DAT_005db450 = DefDlgProcA_exref;
          }
          else {
            DAT_005db450 = tStack_28.lpfnWndProc;
          }
          goto LAB_0055db1b;
        }
      }
    }
    DAT_005da960 = 0;
  }
LAB_0055db1b:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  return DAT_005da960;
}


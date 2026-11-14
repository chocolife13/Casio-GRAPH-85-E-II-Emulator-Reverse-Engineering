// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00565a98
// entry: 00565a98  size: 261


void FUN_00565a98(void)

{
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  CCmdUI::CCmdUI((CCmdUI *)(unaff_EBP + -0x38));
  FUN_00563012();
  pHVar1 = *(HWND *)(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pHVar1 = GetTopWindow(pHVar1);
  do {
    if (pHVar1 == (HWND)0x0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x58) = 0;
      CWnd::~CWnd((CWnd *)(unaff_EBP + -0x74));
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(HWND *)(unaff_EBP + -0x58) = pHVar1;
    uVar2 = GetDlgCtrlID(pHVar1);
    *(uint *)(unaff_EBP + -0x34) = uVar2 & 0xffff;
    *(int *)(unaff_EBP + -0x24) = unaff_EBP + -0x74;
    iVar3 = FUN_0056345a(pHVar1);
    if (((iVar3 == 0) || (iVar3 = FUN_00566555(0,0xbd11ffff,unaff_EBP + -0x38,0), iVar3 == 0)) &&
       (iVar3 = FUN_00566555(*(undefined4 *)(unaff_EBP + -0x34),0xffffffff,unaff_EBP + -0x38,0),
       iVar3 == 0)) {
      iVar3 = *(int *)(unaff_EBP + 0xc);
      if (iVar3 != 0) {
        uVar2 = SendMessageA(*(HWND *)(unaff_EBP + -0x58),0x87,0,0);
        if ((uVar2 & 0x2000) != 0) {
          uVar2 = FUN_005661de();
          uVar2 = uVar2 & 0xf;
          if (((uVar2 != 3) && (uVar2 != 6)) && ((uVar2 != 7 && (uVar2 != 9)))) goto LAB_00565b5e;
        }
        iVar3 = 0;
      }
LAB_00565b5e:
      FUN_005668bc(*(undefined4 *)(unaff_EBP + 8),iVar3);
    }
    pHVar1 = GetWindow(pHVar1,2);
  } while( true );
}


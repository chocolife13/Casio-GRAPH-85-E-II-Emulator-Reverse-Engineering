// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00574bd3
// entry: 00574bd3  size: 313


int FUN_00574bd3(void)

{
  int *piVar1;
  int iVar2;
  HGDIOBJ pvVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar5;
  int *piVar6;
  
  FUN_00555ab8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iVar2 = FUN_00574d0c(*(undefined4 *)(unaff_EBP + 0xc),0x14);
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    if (*(int *)(unaff_EBP + 8) != 0) {
      pvVar3 = (HGDIOBJ)SendMessageA(*(HWND *)(extraout_ECX + 0x1c),0x31,0,0);
      FUN_0056a43d(0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (pvVar3 != (HGDIOBJ)0x0) {
        pvVar3 = SelectObject(*(HDC *)(unaff_EBP + -0x34),pvVar3);
        *(HGDIOBJ *)(unaff_EBP + -0x14) = pvVar3;
      }
      piVar6 = *(int **)(extraout_ECX + 0x5c);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (0 < *(int *)(unaff_EBP + 0xc)) {
        piVar5 = piVar6 + 4;
        do {
          piVar1 = *(int **)(unaff_EBP + 8);
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
          iVar2 = *piVar1;
          piVar5[-1] = piVar5[-1] | 1;
          *piVar6 = iVar2;
          if (iVar2 != 0) {
            iVar2 = FUN_005677ee(iVar2);
            if (iVar2 != 0) {
              GetTextExtentPoint32A
                        (*(HDC *)(unaff_EBP + -0x30),(LPCSTR)*piVar5,*(int *)((LPCSTR)*piVar5 + -8),
                         (LPSIZE)(unaff_EBP + -0x24));
              piVar5[-3] = *(int *)(unaff_EBP + -0x24);
              iVar2 = FUN_0056d8f2(*(undefined4 *)(unaff_EBP + -0x10),*piVar5,0);
              if (iVar2 != 0) goto LAB_00574cb7;
            }
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            break;
          }
          iVar4 = GetSystemMetrics(0);
          iVar2 = *(int *)(unaff_EBP + -0x10);
          piVar5[-3] = iVar4 / 4;
          if (iVar2 == 0) {
            piVar5[-2] = piVar5[-2] | 0x8000100;
          }
LAB_00574cb7:
          piVar6 = piVar6 + 5;
          piVar5 = piVar5 + 5;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + 0xc));
      }
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        SelectObject(*(HDC *)(unaff_EBP + -0x34),*(HGDIOBJ *)(unaff_EBP + -0x14));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FID_conflict__CClientDC();
    }
    FUN_00574de0(1,1);
    iVar2 = *(int *)(unaff_EBP + -0x18);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


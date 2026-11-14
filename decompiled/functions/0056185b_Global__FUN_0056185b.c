// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056185b
// entry: 0056185b  size: 1132


void FUN_0056185b(void)

{
  SHORT SVar1;
  int *piVar2;
  HWND pHVar3;
  int iVar4;
  undefined4 uVar5;
  CWnd *pCVar6;
  int iVar7;
  LRESULT LVar8;
  int iVar9;
  int *extraout_ECX;
  uint uVar10;
  CWnd *this;
  int unaff_EBP;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  FUN_00555ab8();
  puVar11 = *(undefined4 **)(unaff_EBP + 8);
  uVar10 = puVar11[1];
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *(uint *)(unaff_EBP + -0x1c) = uVar10;
  if ((((uVar10 == 0x200) || (uVar10 == 0xa0)) || (uVar10 == 0x202)) ||
     ((uVar10 == 0x205 || (uVar10 == 0x208)))) {
    SVar1 = GetKeyState(1);
    if (-1 < SVar1) {
      SVar1 = GetKeyState(2);
      if (-1 < SVar1) {
        SVar1 = GetKeyState(4);
        if (-1 < SVar1) {
          pHVar3 = (HWND)*puVar11;
          while( true ) {
            piVar2 = (int *)FUN_00563433(pHVar3);
            if ((piVar2 == (int *)0x0) || ((*(ushort *)(piVar2 + 9) & 0x401) != 0)) break;
            pHVar3 = GetParent((HWND)piVar2[7]);
          }
          if (piVar2 != extraout_ECX) {
            if (piVar2 == (int *)0x0) {
              iVar4 = FUN_005762a6(&LAB_0057431a);
              *(undefined4 *)(iVar4 + 0xd0) = 0;
              *(undefined4 *)(iVar4 + 0xd4) = 0xffffffff;
            }
            goto LAB_00561cb6;
          }
          iVar4 = FUN_005762a6(&LAB_0057431a);
          *(int *)(unaff_EBP + -0x18) = iVar4;
          this = *(CWnd **)(iVar4 + 0xcc);
          uVar5 = FUN_00564a5e();
          *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
          if (this == (CWnd *)0x0) {
LAB_0056196f:
            iVar7 = FUN_00566937(0x58);
            *(int *)(unaff_EBP + -0x1c) = iVar7;
            this = (CWnd *)0x0;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            if (iVar7 != 0) {
              this = (CWnd *)FUN_005614f8();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar7 = FUN_0056154d(*(undefined4 *)(unaff_EBP + -0x14),1);
            if (iVar7 == 0) {
              if (this != (CWnd *)0x0) {
                (**(code **)(*(int *)this + 4))(1);
              }
              goto LAB_00561cb6;
            }
            SendMessageA(*(HWND *)(this + 0x1c),0x401,0,0);
            piVar2 = *(int **)(unaff_EBP + -0x10);
            *(CWnd **)(iVar4 + 0xcc) = this;
          }
          else {
            pCVar6 = CWnd::GetOwner(this);
            if (pCVar6 != *(CWnd **)(unaff_EBP + -0x14)) {
              (**(code **)(*(int *)this + 0x58))();
              (**(code **)(*(int *)this + 4))(1);
              this = (CWnd *)0x0;
              *(undefined4 *)(iVar4 + 0xcc) = 0;
            }
            piVar2 = extraout_ECX;
            if (this == (CWnd *)0x0) goto LAB_0056196f;
          }
          _memset((void *)(unaff_EBP + -0x54),0,0x2c);
          iVar7 = piVar2[7];
          *(int *)(unaff_EBP + -0x4c) = iVar7;
          *(int *)(unaff_EBP + -0x48) = iVar7;
          *(undefined4 *)(unaff_EBP + -0x54) = 0x28;
          *(undefined4 *)(unaff_EBP + -0x50) = 1;
          LVar8 = SendMessageA(*(HWND *)(this + 0x1c),0x408,0,unaff_EBP + -0x54);
          if (LVar8 == 0) {
            SendMessageA(*(HWND *)(this + 0x1c),0x404,0,unaff_EBP + -0x54);
          }
          uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x14);
          *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x18);
          *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
          ScreenToClient((HWND)piVar2[7],(LPPOINT)(unaff_EBP + -0x28));
          _memset((void *)(unaff_EBP + -0x80),0,0x2c);
          iVar7 = *piVar2;
          *(undefined4 *)(unaff_EBP + -0x80) = 0x28;
          iVar9 = (**(code **)(iVar7 + 100))
                            (*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                             unaff_EBP + -0x80);
          *(int *)(unaff_EBP + -0x1c) = iVar9;
          uVar10 = -(uint)(iVar9 != -1) & (uint)piVar2;
          iVar7 = *(int *)(iVar4 + 0xd4);
          *(uint *)(unaff_EBP + -0x14) = uVar10;
          if ((iVar7 == iVar9) && (*(uint *)(iVar4 + 0xd0) == uVar10)) {
            if ((*(byte *)((int)piVar2 + 0x25) & 4) == 0) {
              if (iVar9 != -1) {
                FUN_005617c9(this,*(undefined4 *)(unaff_EBP + 8));
              }
            }
            else {
              GetCursorPos((LPPOINT)(unaff_EBP + -0x20));
              SendMessageA(*(HWND *)(this + 0x1c),0x412,0,
                           CONCAT22(*(undefined2 *)(unaff_EBP + -0x1c),
                                    *(undefined2 *)(unaff_EBP + -0x20)));
            }
          }
          else {
            if (iVar9 == -1) {
              SendMessageA(*(HWND *)(this + 0x1c),0x401,0,0);
            }
            else {
              uVar10 = *(uint *)(unaff_EBP + -0x7c) & 0x3fffffff;
              puVar11 = (undefined4 *)(unaff_EBP + -0x80);
              puVar12 = (undefined4 *)(unaff_EBP + -0x54);
              for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
              }
              *(uint *)(unaff_EBP + -0x50) = uVar10;
              if ((*(uint *)(*(int *)(unaff_EBP + -0x10) + 0x24) & 0x400) != 0) {
                *(uint *)(unaff_EBP + -0x50) = uVar10 | 0x20;
              }
              SendMessageA(*(HWND *)(this + 0x1c),0x404,0,unaff_EBP + -0x54);
              if ((*(byte *)(unaff_EBP + -0x79) & 0x40) == 0) {
                iVar4 = FUN_00564aa2();
                if (iVar4 != 0) goto LAB_00561b29;
              }
              else {
LAB_00561b29:
                SendMessageA(*(HWND *)(this + 0x1c),0x401,1,0);
                if ((*(uint *)(*(int *)(unaff_EBP + -0x10) + 0x24) & 0x400) != 0) {
                  SendMessageA(*(HWND *)(this + 0x1c),0x411,1,unaff_EBP + -0x54);
                }
                SetWindowPos(*(HWND *)(this + 0x1c),(HWND)0x0,0,0,0,0,0x213);
              }
              iVar4 = *(int *)(unaff_EBP + -0x18);
            }
            FUN_005617c9(this,*(undefined4 *)(unaff_EBP + 8));
            if (0x27 < *(uint *)(iVar4 + 0xd8)) {
              SendMessageA(*(HWND *)(this + 0x1c),0x405,0,(LPARAM)(iVar4 + 0xd8));
            }
            *(undefined4 *)(iVar4 + 0xd0) = *(undefined4 *)(unaff_EBP + -0x14);
            *(undefined4 *)(iVar4 + 0xd4) = *(undefined4 *)(unaff_EBP + -0x1c);
            puVar11 = (undefined4 *)(unaff_EBP + -0x80);
            puVar12 = (undefined4 *)(iVar4 + 0xd8);
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar12 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            }
          }
          if ((*(int *)(unaff_EBP + -0x5c) != -1) && (*(int *)(unaff_EBP + -0x60) == 0)) {
            FUN_00553b50(*(undefined4 *)(unaff_EBP + -0x5c));
          }
          goto LAB_00561cb6;
        }
      }
    }
    uVar10 = *(uint *)(unaff_EBP + -0x1c);
  }
  if ((*(ushort *)(extraout_ECX + 9) & 0x401) != 0) {
    pHVar3 = (HWND)*puVar11;
    while( true ) {
      piVar2 = (int *)FUN_00563433(pHVar3);
      if (piVar2 == (int *)0x0) break;
      if (piVar2 == extraout_ECX) goto LAB_00561c1f;
      if ((*(ushort *)(piVar2 + 9) & 0x401) != 0) break;
      pHVar3 = GetParent((HWND)piVar2[7]);
    }
    if (piVar2 == extraout_ECX) {
LAB_00561c1f:
      if (((uVar10 < 0x100) || (0x108 < uVar10)) && ((uVar10 < 0x104 || (0x107 < uVar10)))) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      if (((*(byte *)((int)extraout_ECX + 0x25) & 4) == 0) &&
         ((((((iVar4 != 0 || (uVar10 == 0x201)) || (uVar10 == 0x203)) ||
            ((uVar10 == 0x204 || (uVar10 == 0x206)))) ||
           ((((uVar10 == 0x207 || ((uVar10 == 0x209 || (uVar10 == 0xa1)))) || (uVar10 == 0xa3)) ||
            (((uVar10 == 0xa4 || (uVar10 == 0xa6)) || (uVar10 == 0xa7)))))) || (uVar10 == 0xa9)))) {
        FUN_00563d19(iVar4);
      }
    }
  }
LAB_00561cb6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


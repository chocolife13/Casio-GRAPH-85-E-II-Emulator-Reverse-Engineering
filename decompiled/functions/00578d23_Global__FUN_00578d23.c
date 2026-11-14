// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578d23
// entry: 00578d23  size: 1647


void FUN_00578d23(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  HDC pHVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int xRight;
  int *extraout_ECX;
  uint uVar9;
  int unaff_EBP;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  
  FUN_00555ab8();
  *(int **)(unaff_EBP + -0x24) = extraout_ECX;
  FUN_0057940c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00563365();
  if (*(short *)(iVar4 + 8) == -0x1ef8) {
    iVar4 = FUN_0057497f();
    iVar4 = *(int *)(*(int *)(iVar4 + 4) + 0xac);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x10) == 3)) {
      pHVar5 = CreateDCA(*(LPCSTR *)(iVar4 + 0x1c),*(LPCSTR *)(iVar4 + 0x18),
                         *(LPCSTR *)(iVar4 + 0x20),(DEVMODEA *)0x0);
      *(HDC *)(*(int *)(*(int *)(unaff_EBP + -0x80) + 0x5c) + 0x10) = pHVar5;
      if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x80) + 0x5c) + 0x10) == 0) {
        FUN_0056e108(0xf106,0,0xffffffff);
        goto LAB_00579377;
      }
    }
    *(undefined4 *)(unaff_EBP + -0x74) = 1;
  }
  iVar4 = (**(code **)(*extraout_ECX + 0xf4))(unaff_EBP + -0x80);
  if (iVar4 == 0) goto LAB_00579377;
  *(undefined **)(unaff_EBP + -0x3c) = PTR_DAT_005cba44;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x80) + 0x5c) + 0x14) & 0x20) == 0) ||
     (*(int *)(unaff_EBP + -0x7c) != 0)) {
LAB_00578f25:
    *(undefined **)(unaff_EBP + -0x14) = PTR_DAT_005cba44;
    iVar4 = extraout_ECX[0xf];
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar4 == 0) {
      iVar4 = unaff_EBP + -0x14;
      FUN_005649b3(iVar4);
      FUN_00563de1(iVar4);
    }
    else {
      FUN_00567485(iVar4 + 0x1c);
    }
    if (0x1f < *(int *)(*(int *)(unaff_EBP + -0x14) + -8)) {
      FUN_00567716(0x1f);
    }
    _memset((void *)(unaff_EBP + -0x94),0,0x14);
    *(undefined4 *)(unaff_EBP + -0x90) = *(undefined4 *)(unaff_EBP + -0x14);
    puVar3 = PTR_DAT_005cba44;
    *(undefined4 *)(unaff_EBP + -0x94) = 0x14;
    *(undefined **)(unaff_EBP + -0x38) = puVar3;
    iVar4 = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(iVar4 + -8) == 0) {
      *(undefined4 *)(unaff_EBP + -0x8c) = 0;
      uVar6 = FUN_0056143d(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00567485(uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00567398();
      uVar6 = 0xf040;
    }
    else {
      *(int *)(unaff_EBP + -0x8c) = iVar4;
      uVar12 = 0x104;
      uVar6 = FUN_005676c7(0x104);
      FUN_0056937c(iVar4,uVar6,uVar12);
      uVar6 = 0xf049;
    }
    FUN_00569bbe();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int *)(unaff_EBP + -0x7c) == 0) {
      FUN_00569c75(*(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x80) + 0x5c) + 0x10));
      *(undefined4 *)(unaff_EBP + -0x28) = 1;
    }
    (**(code **)(*extraout_ECX + 0xf8))(unaff_EBP + -0x34,unaff_EBP + -0x80);
    if (*(int *)(unaff_EBP + -0x7c) == 0) {
      SetAbortProc(*(HDC *)(unaff_EBP + -0x30),FUN_00578b9f);
    }
    uVar12 = 0;
    FUN_00552b70(0);
    FUN_00566384(uVar12);
    FUN_00579392(extraout_ECX);
    *(undefined **)(unaff_EBP + -0x20) = PTR_DAT_005cba44;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0056617c(0xc9,*(undefined4 *)(unaff_EBP + -0x14));
    puVar7 = (undefined4 *)FUN_005613ff(unaff_EBP + -0x18);
    uVar12 = *puVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_0056617c(0xca,uVar12);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00567398();
    FUN_0056ff16(unaff_EBP + -0x20,uVar6,*(undefined4 *)(unaff_EBP + -0x38));
    FUN_0056617c(0xcb,*(undefined4 *)(unaff_EBP + -0x20));
    FUN_00566342(5);
    UpdateWindow(*(HWND *)(unaff_EBP + -0xd4));
    if ((*(int *)(unaff_EBP + -0x7c) == 0) &&
       (iVar4 = StartDocA(*(HDC *)(unaff_EBP + -0x30),(DOCINFOA *)(unaff_EBP + -0x94)), iVar4 == -1)
       ) {
      uVar6 = 1;
      FUN_00552b70(1);
      FUN_00566384(uVar6);
      (**(code **)(*extraout_ECX + 0x100))(unaff_EBP + -0x34,unaff_EBP + -0x80);
      FUN_00563c62();
      CDC::Detach((CDC *)(unaff_EBP + -0x34));
      FUN_0056e108(0xf106,0,0xffffffff);
    }
    else {
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x80) + 0x5c);
      uVar1 = *(ushort *)(iVar4 + 0x1a);
      uVar9 = (uint)*(ushort *)(iVar4 + 0x1c);
      uVar2 = *(ushort *)(iVar4 + 0x18);
      *(uint *)(unaff_EBP + -0x10) = (uint)uVar1;
      if (uVar1 < uVar9) {
        *(uint *)(unaff_EBP + -0x10) = uVar9;
      }
      uVar8 = (uint)*(ushort *)(iVar4 + 0x1e);
      if (uVar8 < *(uint *)(unaff_EBP + -0x10)) {
        *(uint *)(unaff_EBP + -0x10) = uVar8;
      }
      uVar10 = (uint)uVar2;
      if (uVar2 < uVar9) {
        uVar10 = uVar9;
      }
      if (uVar8 < uVar10) {
        uVar10 = uVar8;
      }
      iVar4 = (-(uint)(*(uint *)(unaff_EBP + -0x10) < uVar10) & 0xfffffffe) + 1;
      *(int *)(unaff_EBP + -0x18) = iVar4;
      if (*(int *)(unaff_EBP + -0x10) == 0xffff) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0xffff;
      }
      else {
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar4;
      }
      FUN_005677ee(0xf043);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      piVar11 = extraout_ECX;
      if (*(int *)(unaff_EBP + -0x7c) == 0) {
        *(uint *)(unaff_EBP + -0x6c) = uVar10;
        if (uVar10 != *(uint *)(unaff_EBP + -0x10)) {
          do {
            (**(code **)(*piVar11 + 0xdc))(unaff_EBP + -0x34,unaff_EBP + -0x80);
            if (*(int *)(unaff_EBP + -0x70) == 0) break;
            wsprintfA((LPSTR)(unaff_EBP + -0x140),*(LPCSTR *)(unaff_EBP + -0x20),
                      *(undefined4 *)(unaff_EBP + -0x6c));
            FUN_0056617c(0xcc,unaff_EBP + -0x140);
            iVar4 = GetDeviceCaps(*(HDC *)(unaff_EBP + -0x2c),10);
            xRight = GetDeviceCaps(*(HDC *)(unaff_EBP + -0x2c),8);
            SetRect((LPRECT)(unaff_EBP + -0x5c),0,0,xRight,iVar4);
            DPtoLP(*(HDC *)(unaff_EBP + -0x2c),(LPPOINT)(unaff_EBP + -0x5c),2);
            iVar4 = StartPage(*(HDC *)(unaff_EBP + -0x30));
            if (iVar4 < 0) {
LAB_005792c8:
              piVar11 = *(int **)(unaff_EBP + -0x24);
              *(undefined4 *)(unaff_EBP + -0x1c) = 1;
              break;
            }
            piVar11 = *(int **)(unaff_EBP + -0x24);
            if (DAT_005d5110 != 0) {
              (**(code **)(*piVar11 + 0xdc))(unaff_EBP + -0x34,unaff_EBP + -0x80);
            }
            (**(code **)(*piVar11 + 0xfc))(unaff_EBP + -0x34,unaff_EBP + -0x80);
            iVar4 = EndPage(*(HDC *)(unaff_EBP + -0x30));
            if ((iVar4 < 0) ||
               (iVar4 = FUN_00578b9f(*(undefined4 *)(unaff_EBP + -0x30),0), iVar4 == 0))
            goto LAB_005792c8;
            piVar11 = *(int **)(unaff_EBP + -0x24);
            *(int *)(unaff_EBP + -0x6c) = *(int *)(unaff_EBP + -0x6c) + *(int *)(unaff_EBP + -0x18);
          } while (*(int *)(unaff_EBP + -0x6c) != *(int *)(unaff_EBP + -0x10));
          goto LAB_005792d2;
        }
LAB_005792dc:
        EndDoc(*(HDC *)(unaff_EBP + -0x30));
      }
      else {
        (**(code **)(*extraout_ECX + 0xdc))(unaff_EBP + -0x34,unaff_EBP + -0x80);
        (**(code **)(*extraout_ECX + 0xfc))(unaff_EBP + -0x34,unaff_EBP + -0x80);
LAB_005792d2:
        if (*(int *)(unaff_EBP + -0x7c) == 0) {
          if (*(int *)(unaff_EBP + -0x1c) == 0) goto LAB_005792dc;
          AbortDoc(*(HDC *)(unaff_EBP + -0x30));
        }
      }
      uVar6 = 1;
      FUN_00552b70(1);
      FUN_00566384(uVar6);
      (**(code **)(*piVar11 + 0x100))(unaff_EBP + -0x34,unaff_EBP + -0x80);
      FUN_00563c62();
      CDC::Detach((CDC *)(unaff_EBP + -0x34));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    *(undefined ***)(unaff_EBP + -0xf0) = &PTR_LAB_0059c15c;
    CDialog::~CDialog((CDialog *)(unaff_EBP + -0xf0));
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00569cf3();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    FUN_00567406(0xf045);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00567406(0xf046);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00567406(0xf047);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00567406(0xf048);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_005603ea(0,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x40),6,
                 *(undefined4 *)(unaff_EBP + -0x44),0);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    *(undefined4 *)(unaff_EBP + -0x2ac) = *(undefined4 *)(unaff_EBP + -0x10);
    iVar4 = FUN_0056054c();
    if (iVar4 == 1) {
      uVar6 = FUN_00560627(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00567485(uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00567398();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00567398();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      CDialog::~CDialog((CDialog *)(unaff_EBP + -0x338));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00567398();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00567398();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00567398();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00567398();
      goto LAB_00578f25;
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    CDialog::~CDialog((CDialog *)(unaff_EBP + -0x338));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00567398();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
LAB_00579377:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00579494();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


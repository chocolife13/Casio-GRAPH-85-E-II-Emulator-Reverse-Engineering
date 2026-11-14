// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578052
// entry: 00578052  size: 995


void FUN_00578052(void)

{
  int *piVar1;
  uint uVar2;
  DWORD DVar3;
  HPEN pHVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  HBRUSH hbr;
  int *extraout_ECX;
  int unaff_EBP;
  CDC *this;
  uint uVar8;
  
  FUN_00555ab8();
  if ((extraout_ECX[0x1c] != 0) && (extraout_ECX[0x1f] != 0)) {
    this = *(CDC **)(unaff_EBP + 8);
    GetViewportOrgEx(*(HDC *)(this + 8),(LPPOINT)(unaff_EBP + -0x24));
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined ***)(unaff_EBP + -0x3c) = &PTR_LAB_0059aec4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    DVar3 = GetSysColor(6);
    pHVar4 = CreatePen(0,2,DVar3);
    FUN_0056a6e5(pHVar4);
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined ***)(unaff_EBP + -0x34) = &PTR_LAB_0059aec4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    DVar3 = GetSysColor(0x10);
    pHVar4 = CreatePen(0,3,DVar3);
    FUN_0056a6e5(pHVar4);
    iVar6 = extraout_ECX[0x45];
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 1;
    if (extraout_ECX[0x3e] != 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      while( true ) {
        uVar5 = (**(code **)(extraout_ECX[0x1e] + 0x1c))();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        if (this == (CDC *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(this + 4);
        }
        (**(code **)(*(int *)extraout_ECX[0x1d] + 0x10))(uVar5);
        *(int *)(extraout_ECX[0x45] + 0x14) = extraout_ECX[0x3d] + *(int *)(unaff_EBP + -0x10);
        if ((uint)(extraout_ECX[0x3d] + *(int *)(unaff_EBP + -0x10)) <=
            (uint)*(ushort *)(*(int *)(*(int *)extraout_ECX[0x45] + 0x5c) + 0x1e)) {
          (**(code **)(*(int *)extraout_ECX[0x1c] + 0xdc))
                    (extraout_ECX[0x1d],(int *)extraout_ECX[0x45]);
        }
        iVar6 = GetDeviceCaps(*(HDC *)(extraout_ECX[0x1d] + 8),10);
        *(int *)(unaff_EBP + -0x1c) = iVar6;
        iVar6 = GetDeviceCaps(*(HDC *)(extraout_ECX[0x1d] + 8),8);
        SetRect((LPRECT)(extraout_ECX[0x45] + 0x24),0,0,iVar6,*(int *)(unaff_EBP + -0x1c));
        DPtoLP(*(HDC *)(extraout_ECX[0x1d] + 8),(LPPOINT)(extraout_ECX[0x45] + 0x24),2);
        (**(code **)(*(int *)this + 0x1c))();
        iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x18 + extraout_ECX[0x24]);
        piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + extraout_ECX[0x24]);
        *(int **)(unaff_EBP + -0x1c) = piVar1;
        if ((iVar6 == 0) &&
           ((**(code **)(*extraout_ECX + 0x10c))(*(undefined4 *)(unaff_EBP + -0x10)),
           extraout_ECX[0x3b] != 0)) {
          piVar7 = (int *)FUN_0056cf91(unaff_EBP + -0x44);
          iVar6 = piVar7[1];
          *(int *)(unaff_EBP + -0x2c) = -*piVar7;
          *(int *)(unaff_EBP + -0x28) = -iVar6;
        }
        (**(code **)(*(int *)this + 0x34))(1);
        (**(code **)(*(int *)this + 0x38))
                  (unaff_EBP + -0x4c,*(undefined4 *)(unaff_EBP + -0x2c),
                   *(undefined4 *)(unaff_EBP + -0x28));
        FUN_0056a0cf(unaff_EBP + -0x54,0,0);
        (**(code **)(*(int *)this + 0x24))(5);
        FUN_00569e09(unaff_EBP + -0x3c);
        Rectangle(*(HDC *)(this + 4),*piVar1,piVar1[1],piVar1[2],piVar1[3]);
        FUN_00569e09(unaff_EBP + -0x34);
        FUN_0056a293(unaff_EBP + -0x5c,piVar1[2] + 1,piVar1[1] + 3);
        CDC::LineTo(this,piVar1[2] + 1,piVar1[3] + 1);
        FUN_0056a293(unaff_EBP + -100,*piVar1 + 3,piVar1[3] + 1);
        CDC::LineTo(this,piVar1[2] + 1,piVar1[3] + 1);
        *(int *)(unaff_EBP + -0x74) = *piVar1;
        *(int *)(unaff_EBP + -0x70) = piVar1[1];
        *(int *)(unaff_EBP + -0x6c) = piVar1[2];
        *(int *)(unaff_EBP + -0x68) = piVar1[3];
        *(int *)(unaff_EBP + -0x74) = *(int *)(unaff_EBP + -0x74) + 1;
        *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + -0x70) + 1;
        *(int *)(unaff_EBP + -0x6c) = *(int *)(unaff_EBP + -0x6c) + -2;
        *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x68) + -2;
        hbr = (HBRUSH)GetStockObject(0);
        piVar1 = *(int **)(unaff_EBP + 8);
        FillRect((HDC)piVar1[1],(RECT *)(unaff_EBP + -0x74),hbr);
        (**(code **)(*piVar1 + 0x20))(0xffffffff);
        if (((int *)extraout_ECX[0x45])[4] == 0) break;
        iVar6 = *(int *)(unaff_EBP + -0x10);
        if ((uint)*(ushort *)(*(int *)(*(int *)extraout_ECX[0x45] + 0x5c) + 0x1e) <
            (uint)(extraout_ECX[0x3d] + iVar6)) goto LAB_005783c0;
        uVar8 = iVar6 + 1;
        (**(code **)(*extraout_ECX + 0x110))(extraout_ECX[0x3d],uVar8);
        piVar1 = *(int **)(unaff_EBP + -0x1c);
        CPreviewDC::SetScaleRatio((CPreviewDC *)extraout_ECX[0x1d],piVar1[6],piVar1[7]);
        (**(code **)(*(int *)extraout_ECX[0x1d] + 0x70))(0xd,0,0,unaff_EBP + -0x24);
        FUN_0057a4d9(unaff_EBP + -0x24);
        iVar6 = piVar1[1];
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + *piVar1;
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + iVar6;
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x2c);
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -0x28);
        FUN_0057a441(*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
        FUN_0057a457();
        (**(code **)(*(int *)extraout_ECX[0x1c] + 0xfc))(extraout_ECX[0x1d],extraout_ECX[0x45]);
        (**(code **)(*(int *)extraout_ECX[0x1d] + 0x18))();
        (**(code **)(extraout_ECX[0x1e] + 0x20))(*(undefined4 *)(unaff_EBP + -0x18));
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x28;
        uVar2 = extraout_ECX[0x3e];
        *(uint *)(unaff_EBP + -0x10) = uVar8;
        if (uVar2 <= uVar8) goto LAB_005783ee;
        this = *(CDC **)(unaff_EBP + 8);
      }
      iVar6 = *(int *)(unaff_EBP + -0x10);
LAB_005783c0:
      (**(code **)(*(int *)extraout_ECX[0x1d] + 0x18))();
      (**(code **)(extraout_ECX[0x1e] + 0x20))(*(undefined4 *)(unaff_EBP + -0x18));
      if ((iVar6 == 0) && (1 < (uint)extraout_ECX[0x3d])) {
        FUN_00578891(extraout_ECX[0x3d] - 1,1);
      }
    }
LAB_005783ee:
    FUN_0056a73c();
    FUN_0056a73c();
    *(undefined ***)(unaff_EBP + -0x34) = &PTR_LAB_0059aee4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0056a73c();
    *(undefined ***)(unaff_EBP + -0x3c) = &PTR_LAB_0059aee4;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_0056a73c();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577644
// entry: 00577644  size: 436


undefined4 FUN_00577644(void)

{
  undefined2 uVar1;
  CFrameWnd *this;
  CView *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  this = (CFrameWnd *)FUN_00552b70();
  _memset((void *)(unaff_EBP + -0x30),0,0x14);
  uVar4 = *(undefined4 *)(extraout_ECX + 0x3c);
  *(CFrameWnd **)(unaff_EBP + -0x20) = this;
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  pCVar2 = (CView *)FUN_00567a5e();
  if (pCVar2 != (CView *)0x0) {
    uVar4 = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(pCVar2 + 0x88) = uVar4;
    (**(code **)(*(int *)this + 0xd0))(1,uVar4);
    iVar3 = FUN_00566937(0x88);
    *(int *)(unaff_EBP + 0x10) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0056ff2d();
    }
    uVar1 = *(undefined2 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(pCVar2 + 0x8c) = uVar4;
    iVar3 = FUN_0056ffa1(this,uVar1,0x2800,0xe802);
    if (iVar3 == 0) {
      (**(code **)(*(int *)this + 0xd0))(0,*(undefined4 *)(unaff_EBP + 0x14));
      if (*(int **)(pCVar2 + 0x8c) != (int *)0x0) {
        (**(code **)(**(int **)(pCVar2 + 0x8c) + 4))(1);
      }
      *(undefined4 *)(pCVar2 + 0x8c) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(pCVar2 + 0x8c) + 0x3c) = 1;
      iVar3 = *(int *)pCVar2;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar3 = (**(code **)(iVar3 + 0x54))
                        (0,0,0x50800000,unaff_EBP + -0x1c,this,0xe900,unaff_EBP + -0x30);
      if (iVar3 != 0) {
        uVar4 = FUN_005729b9();
        *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 0xc) = uVar4;
        (**(code **)(*(int *)this + 0xc0))();
        piVar5 = (int *)FUN_005729b9();
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xe4))(0,piVar5,piVar5);
        }
        iVar3 = FUN_005779a7(*(undefined4 *)(unaff_EBP + 0xc));
        if (iVar3 == 0) {
          FUN_00577c9f();
        }
        else {
          CFrameWnd::SetActiveView(this,pCVar2,1);
          SendMessageA(*(HWND *)(*(int *)(pCVar2 + 0x8c) + 0x1c),0x363,1,0);
          (**(code **)(*(int *)this + 200))(1);
          UpdateWindow(*(HWND *)(this + 0x1c));
        }
        uVar4 = 1;
        goto LAB_005777e7;
      }
      (**(code **)(*(int *)this + 0xd0))(0,*(undefined4 *)(unaff_EBP + 0x14));
    }
    *(undefined4 *)(pCVar2 + 0x88) = 0;
    (**(code **)(*(int *)pCVar2 + 4))(1);
  }
  uVar4 = 0;
LAB_005777e7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


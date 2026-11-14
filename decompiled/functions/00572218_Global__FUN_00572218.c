// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00572218
// entry: 00572218  size: 198


void __thiscall FUN_00572218(CFrameWnd *param_1,int *param_2,int param_3)

{
  int iVar1;
  CView *pCVar2;
  undefined4 uVar3;
  CView *pCVar4;
  
  pCVar4 = (CView *)0x0;
  iVar1 = FUN_005729b9();
  if (iVar1 == 0) {
    pCVar2 = (CView *)FUN_00564b86(*(undefined4 *)(param_1 + 0x1c),0xe900,1);
    if (pCVar2 != (CView *)0x0) {
      iVar1 = FUN_00567a2c(&PTR_s_CView_0059aff0);
      if (iVar1 != 0) {
        CFrameWnd::SetActiveView(param_1,pCVar2,0);
        pCVar4 = pCVar2;
      }
    }
  }
  if (param_3 != 0) {
    FUN_00564bff(*(undefined4 *)(param_1 + 0x1c),0x364,0,0,1,1);
    if (pCVar4 != (CView *)0x0) {
      (**(code **)(*(int *)pCVar4 + 0xe8))(0,param_1);
    }
    uVar3 = 0xffffffff;
    iVar1 = FUN_0057497f();
    iVar1 = *(int *)(iVar1 + 4);
    if ((iVar1 != 0) && (*(CFrameWnd **)(iVar1 + 0x1c) == param_1)) {
      uVar3 = *(undefined4 *)(iVar1 + 0x74);
      *(undefined4 *)(iVar1 + 0x74) = 0xffffffff;
    }
    (**(code **)(*(int *)param_1 + 0xcc))(uVar3);
    if (pCVar4 != (CView *)0x0) {
      (**(code **)(*(int *)pCVar4 + 0xe4))(1,pCVar4,pCVar4);
    }
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xa0))();
  }
  (**(code **)(*(int *)param_1 + 0xe0))(1);
  return;
}


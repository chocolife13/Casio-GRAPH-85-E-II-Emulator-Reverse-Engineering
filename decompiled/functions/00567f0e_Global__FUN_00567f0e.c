// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567f0e
// entry: 00567f0e  size: 250


bool FUN_00567f0e(size_t param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  CWinThread *pCVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x10) != 0) &&
     (iVar2 = *(int *)(pAVar1 + 0x10) + -1, *(int *)(pAVar1 + 0x10) = iVar2, iVar2 == 0)) {
    if (param_1 != 0) {
      if (param_1 != -1) {
        pCVar3 = AfxGetThread();
        if ((pCVar3 != (CWinThread *)0x0) && (*(code **)(pCVar3 + 0x54) != (code *)0x0)) {
          (**(code **)(pCVar3 + 0x54))(0,0);
        }
      }
      FUN_0056812c();
      FUN_0056812c();
      FUN_0056812c();
      FUN_0056812c();
      FUN_0056812c();
    }
    iVar2 = FUN_0057497f();
    iVar2 = *(int *)(iVar2 + 4);
    iVar4 = FUN_005762a6(&LAB_0057431a);
    if (iVar2 != 0) {
      if (*(int *)(iVar4 + 0xc) != 0) {
        uVar5 = FUN_00556c93(*(int *)(iVar4 + 0xc));
        if (*(uint *)(iVar2 + 0xb8) <= uVar5) goto LAB_00567ff9;
      }
      if (*(int *)(iVar2 + 0xb8) != 0) {
        param_1 = 0;
        if (*(int *)(iVar4 + 0xc) != 0) {
          param_1 = FUN_00556c93(*(int *)(iVar4 + 0xc));
          FUN_00553b50(*(undefined4 *)(iVar4 + 0xc));
        }
        pvVar6 = _malloc(*(size_t *)(iVar2 + 0xb8));
        *(void **)(iVar4 + 0xc) = pvVar6;
        if ((pvVar6 == (void *)0x0) && (param_1 != 0)) {
          pvVar6 = _malloc(param_1);
          *(void **)(iVar4 + 0xc) = pvVar6;
        }
      }
    }
  }
LAB_00567ff9:
  return *(int *)(pAVar1 + 0x10) != 0;
}


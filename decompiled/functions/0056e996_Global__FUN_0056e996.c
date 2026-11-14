// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e996
// entry: 0056e996  size: 83


undefined4 __fastcall FUN_0056e996(void *param_1)

{
  int iVar1;
  HWND pHVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0056339a();
  if (iVar1 == -1) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((*(byte *)((int)param_1 + 100) & 0x10) != 0) {
      FUN_005617bb(1);
    }
    pHVar2 = GetParent(*(HWND *)((int)param_1 + 0x1c));
    piVar3 = (int *)FUN_00563433(pHVar2);
    iVar1 = (**(code **)(*piVar3 + 0xb0))();
    if (iVar1 != 0) {
      *(int **)((int)param_1 + 0x6c) = piVar3;
      CPtrList::AddTail((CPtrList *)(piVar3 + 0x1b),param_1);
    }
    uVar4 = 0;
  }
  return uVar4;
}


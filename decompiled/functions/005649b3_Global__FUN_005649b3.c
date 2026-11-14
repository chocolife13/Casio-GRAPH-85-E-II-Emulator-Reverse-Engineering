// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005649b3
// entry: 005649b3  size: 62


int * __fastcall FUN_005649b3(int param_1)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != 0) && (pHVar1 = *(HWND *)(param_1 + 0x1c), pHVar1 != (HWND)0x0)) {
    while( true ) {
      pHVar1 = GetParent(pHVar1);
      piVar2 = (int *)FUN_00563433(pHVar1);
      if (piVar2 == (int *)0x0) break;
      iVar3 = (**(code **)(*piVar2 + 0xb0))();
      if (iVar3 != 0) {
        return piVar2;
      }
      pHVar1 = (HWND)piVar2[7];
    }
  }
  return (int *)0x0;
}


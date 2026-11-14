// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00572771
// entry: 00572771  size: 114


void __thiscall FUN_00572771(int param_1,HDROP param_2)

{
  int *piVar1;
  HWND pHVar2;
  int iVar3;
  UINT iFile;
  CHAR local_10c [260];
  UINT local_8;
  
  pHVar2 = SetActiveWindow(*(HWND *)(param_1 + 0x1c));
  FUN_00563433(pHVar2);
  iFile = 0;
  local_8 = DragQueryFileA(param_2,0xffffffff,(LPSTR)0x0,0);
  iVar3 = FUN_0057497f();
  piVar1 = *(int **)(iVar3 + 4);
  if (local_8 != 0) {
    do {
      DragQueryFileA(param_2,iFile,local_10c,0x104);
      (**(code **)(*piVar1 + 0x7c))(local_10c);
      iFile = iFile + 1;
    } while (iFile < local_8);
  }
  DragFinish(param_2);
  return;
}


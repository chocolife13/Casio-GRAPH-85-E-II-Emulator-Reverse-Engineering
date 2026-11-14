// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578b17
// entry: 00578b17  size: 136


undefined4 __thiscall FUN_00578b17(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  HCURSOR pHVar3;
  int *piVar4;
  tagPOINT local_c;
  
  local_c.x = param_1;
  local_c.y = param_1;
  if (param_3 == 1) {
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(param_1 + 0x1c),&local_c);
    if ((*(int *)(param_1 + 0xec) == 2) || (iVar2 = FUN_005785bf(&local_c,&param_3), iVar2 == 0)) {
      pHVar3 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    }
    else {
      piVar4 = (int *)(param_1 + 0x100);
      if (*piVar4 == 0) {
        iVar2 = FUN_0057497f();
        pHVar3 = LoadCursorA(*(HINSTANCE *)(iVar2 + 0xc),(LPCSTR)0x7902);
        *piVar4 = (int)pHVar3;
      }
      pHVar3 = (HCURSOR)*piVar4;
    }
    SetCursor(pHVar3);
    return 0;
  }
  uVar1 = FUN_0056339a();
  return uVar1;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055d4d0
// entry: 0055d4d0  size: 176


void FUN_0055d4d0(HWND param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  HANDLE pvVar2;
  int iStack_4;
  
  iVar1 = FUN_0055c9e0(param_1);
  if (iVar1 == 0) {
    FUN_0055e5e0(param_1,param_2,0,param_3);
    return;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da974);
  if (pvVar2 == (HANDLE)0x0) {
    iStack_4 = 0x29a;
    SendMessageA(param_1,0x1944,0,(LPARAM)&iStack_4);
    if (iStack_4 == 0x29a) {
      SendMessageA(param_1,0x1943,0,(LPARAM)&iStack_4);
      if (iStack_4 == 0x29a) {
        RemovePropA(param_1,(LPCSTR)(uint)DAT_005da96e);
        FUN_0055e5e0(param_1,param_2 & 0xffff,0,param_3);
      }
    }
  }
  return;
}


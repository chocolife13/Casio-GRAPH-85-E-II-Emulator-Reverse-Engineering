// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040e4a0
// entry: 0040e4a0  size: 364


void __thiscall FUN_0040e4a0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  HWND pHVar4;
  int local_4;
  
  piVar1 = (int *)(param_1 + 0x8c);
  local_4 = param_1;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_00566960(*(int *)(param_1 + 0x8c));
    *piVar1 = 0;
  }
  iVar3 = param_2;
  if (*(int *)(param_1 + 0x5c) == 2) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    return;
  }
  cVar2 = FUN_004096e0(param_2,param_3,&local_4,&param_2);
  if (cVar2 != '\0') {
    if ((short)iVar3 == 0x41) {
      FUN_0040bbe0();
    }
    if (*(int *)(param_1 + 0x5c) == 1) {
      iVar3 = FUN_0040ad00();
      if (((iVar3 == 1) && (local_4 == 1)) && (param_2 == 1)) {
        if (param_1 == 0) {
          pHVar4 = (HWND)0x0;
        }
        else {
          pHVar4 = *(HWND *)(param_1 + 0x1c);
        }
        iVar3 = MessageBoxA(pHVar4,&DAT_005a92ec,(LPCSTR)0x0,0x34);
        if (iVar3 == 7) {
          return;
        }
      }
      cVar2 = FUN_004080b0(local_4,param_2,0,piVar1);
      while (cVar2 == '\0') {
        if (param_1 == 0) {
          pHVar4 = (HWND)0x0;
        }
        else {
          pHVar4 = *(HWND *)(param_1 + 0x1c);
        }
        iVar3 = MessageBoxA(pHVar4,&DAT_005a92c8,(LPCSTR)0x0,0x35);
        if (iVar3 != 4) {
          if (iVar3 != 3) {
            if (*piVar1 == 0) {
              return;
            }
            FUN_00566960(*piVar1);
            *piVar1 = 0;
            return;
          }
          *(undefined4 *)(param_1 + 0x5c) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          if (*(int *)(param_1 + 0x88) == 0) {
            return;
          }
          FUN_00407fe0();
          return;
        }
        cVar2 = FUN_004080b0(local_4,param_2,0,piVar1);
      }
    }
    FUN_0042fba0(local_4,param_2,param_3,0);
  }
  return;
}


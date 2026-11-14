// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005754ca
// entry: 005754ca  size: 190


void __thiscall FUN_005754ca(int param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = lstrcmpA(param_2,&DAT_005a8c70);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  else {
    iVar1 = lstrcmpA(param_2,&DAT_005bf060);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
    else {
      iVar1 = lstrcmpiA(param_2,"Unregister");
      if ((iVar1 != 0) && (iVar1 = lstrcmpiA(param_2,"Unregserver"), iVar1 != 0)) {
        iVar1 = lstrcmpA(param_2,"dde");
        if (iVar1 == 0) {
          FUN_00573910(0);
          *(undefined4 *)(param_1 + 0x10) = 4;
          return;
        }
        iVar1 = lstrcmpiA(param_2,"Embedding");
        if (iVar1 == 0) {
          FUN_00573910(0);
          *(undefined4 *)(param_1 + 8) = 1;
        }
        else {
          iVar1 = lstrcmpiA(param_2,"Automation");
          if (iVar1 != 0) {
            return;
          }
          FUN_00573910(0);
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        *(undefined4 *)(param_1 + 4) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = 5;
    }
  }
  return;
}


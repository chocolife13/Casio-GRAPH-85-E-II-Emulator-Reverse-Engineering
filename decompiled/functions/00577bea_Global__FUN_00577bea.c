// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577bea
// entry: 00577bea  size: 102


void __thiscall FUN_00577bea(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0xf0) != 0) {
      iVar2 = 0;
      do {
        uVar1 = uVar1 + 1;
        *(undefined4 *)(iVar2 + 0x18 + *(int *)(param_1 + 0x90)) = 0;
        iVar2 = iVar2 + 0x28;
      } while (uVar1 < *(uint *)(param_1 + 0xf0));
    }
    FUN_0056339a();
  }
  else {
    *(int *)(param_1 + 0x54) = param_3;
    *(int *)(param_1 + 0x58) = param_4;
    *(int *)(param_1 + 0x5c) = param_3 / 10;
    *(int *)(param_1 + 0x60) = param_4 / 10;
    FUN_0056d05c(param_2,param_3,param_4);
  }
  return;
}


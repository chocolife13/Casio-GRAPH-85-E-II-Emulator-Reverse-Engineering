// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00574d0c
// entry: 00574d0c  size: 100


int __thiscall FUN_00574d0c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      FUN_00567398();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x58));
  }
  iVar2 = FUN_00576820(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      iVar1 = *(int *)(param_1 + 0x5c) + 0x10;
      do {
        FUN_00555c70(iVar1,&PTR_DAT_005cba44,4);
        iVar1 = iVar1 + 0x14;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x58));
    }
    iVar2 = 1;
  }
  return iVar2;
}


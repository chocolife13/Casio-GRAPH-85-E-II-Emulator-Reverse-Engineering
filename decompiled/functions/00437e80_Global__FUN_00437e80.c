// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00437e80
// entry: 00437e80  size: 108


void FUN_00437e80(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar1 = 1;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      FUN_00528ac0(*param_1,param_2,iVar1,local_18);
      FUN_00528ac0(*param_1,param_3,iVar1,local_30);
      FUN_00528bf0(*param_1,param_2,iVar1,local_30);
      FUN_00528bf0(*param_1,param_3,iVar1,local_18);
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(param_1 + 0x18));
  }
  return;
}


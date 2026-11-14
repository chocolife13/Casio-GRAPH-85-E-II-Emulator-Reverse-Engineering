// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056cae8
// entry: 0056cae8  size: 124


void __fastcall FUN_0056cae8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 8) == 0) {
      if (iVar1 != iVar2) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x38))(iVar2,iVar1 - iVar2);
      }
    }
    else {
      if (iVar1 != iVar2) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x50))(2,iVar1 - iVar2,0,0);
      }
      (**(code **)(**(int **)(param_1 + 0x20) + 0x50))
                (1,*(undefined4 *)(param_1 + 0x1c),(undefined4 *)(param_1 + 0x2c),param_1 + 0x28);
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x24)) {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x28))
                (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x28),1);
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
  }
  return;
}


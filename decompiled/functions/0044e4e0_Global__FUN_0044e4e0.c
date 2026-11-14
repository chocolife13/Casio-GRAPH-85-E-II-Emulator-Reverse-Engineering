// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044e4e0
// entry: 0044e4e0  size: 43


void FUN_0044e4e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 0x1c);
    FUN_00407170(iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  *param_1 = 0;
  return;
}


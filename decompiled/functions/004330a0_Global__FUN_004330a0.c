// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004330a0
// entry: 004330a0  size: 51


int FUN_004330a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00529b70(param_1);
  if (iVar1 != param_1) {
    iVar2 = FUN_004b7550(iVar1);
    *(undefined1 *)(iVar1 + -1) = 0;
    return iVar2 + 1;
  }
  return 1;
}


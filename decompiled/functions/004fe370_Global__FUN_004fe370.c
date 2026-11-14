// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fe370
// entry: 004fe370  size: 44


void FUN_004fe370(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = *(undefined1 *)(*param_2 + -2);
  *param_1 = uVar1;
  param_1[1] = *(undefined1 *)(*param_2 + -1);
  iVar2 = FUN_004b7370(uVar1);
  if (iVar2 == 0) {
    *param_1 = param_1[1];
  }
  return;
}


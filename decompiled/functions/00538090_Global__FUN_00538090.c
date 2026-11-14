// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538090
// entry: 00538090  size: 77


void FUN_00538090(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  
  *param_1 = 0;
  sVar2 = FUN_004e4040(param_2);
  if (sVar2 == 2) {
    FUN_00537c80(param_1,param_2);
    return;
  }
  if (sVar2 == 3) {
    FUN_00537e20();
    return;
  }
  cVar1 = FUN_00537aa0(param_1,param_2);
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  return;
}


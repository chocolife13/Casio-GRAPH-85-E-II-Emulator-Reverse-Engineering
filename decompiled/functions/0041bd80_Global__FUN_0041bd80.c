// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041bd80
// entry: 0041bd80  size: 45


void FUN_0041bd80(int param_1)

{
  int iVar1;
  
  FUN_0041bbb0(param_1);
  iVar1 = FUN_0041bf10(param_1);
  if (iVar1 == 0) {
    (&DAT_005d8ba0)[param_1 * 2] = 0xffffffff;
    (&DAT_005d8ba4)[param_1 * 8] = 0xff;
  }
  return;
}


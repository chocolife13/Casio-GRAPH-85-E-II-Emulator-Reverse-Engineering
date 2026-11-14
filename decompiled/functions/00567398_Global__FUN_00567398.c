// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567398
// entry: 00567398  size: 42


void __fastcall FUN_00567398(int *param_1)

{
  LONG LVar1;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_005cba48) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_00567287();
    }
  }
  return;
}


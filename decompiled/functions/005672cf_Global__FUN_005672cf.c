// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005672cf
// entry: 005672cf  size: 49


void __fastcall FUN_005672cf(int *param_1)

{
  LONG LVar1;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_005cba48) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_00567287();
    }
    *param_1 = (int)PTR_DAT_005cba44;
  }
  return;
}


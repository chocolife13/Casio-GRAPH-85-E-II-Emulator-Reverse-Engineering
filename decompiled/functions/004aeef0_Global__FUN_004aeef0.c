// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aeef0
// entry: 004aeef0  size: 69


void FUN_004aeef0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  thunk_FUN_0040add0();
  if (param_1 == 0x8000) {
    FUN_004aec20();
    return;
  }
  if ((param_1 == 0x4000) && (iVar1 = FUN_004aee70(param_2,1), iVar1 != 0)) {
    return;
  }
  FUN_004ae280(param_1,param_2,0);
  return;
}


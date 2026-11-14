// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aef40
// entry: 004aef40  size: 83


void FUN_004aef40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  thunk_FUN_0040add0();
  FUN_004ade30(param_1);
  FUN_004add50(0);
  if (param_1 == 0x8000) {
    FUN_004aecb0();
    return;
  }
  if ((param_1 == 0x4000) && (iVar1 = FUN_004aee70(param_2,0), iVar1 != 0)) {
    return;
  }
  FUN_004ae750(param_1,param_2);
  return;
}


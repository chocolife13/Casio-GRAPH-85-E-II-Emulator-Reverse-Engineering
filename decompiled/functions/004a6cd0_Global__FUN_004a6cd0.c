// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a6cd0
// entry: 004a6cd0  size: 145


void FUN_004a6cd0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 local_34 [52];
  
  FUN_0052f840();
  FUN_00525b40(5);
  if (param_1 != 0) {
    FUN_005232d0(1,2);
    uVar1 = FUN_0052f6f0(param_1,local_34);
    FUN_005233e0(uVar1);
  }
  if (param_2 != 0) {
    FUN_005232d0(1,3);
    uVar1 = FUN_0052f6f0(param_2,local_34);
    FUN_005233e0(uVar1);
  }
  if (param_3 != 0) {
    FUN_005232d0(1,4);
    uVar1 = FUN_0052f6f0(param_3,local_34);
    FUN_005233e0(uVar1);
  }
  FUN_0040ae30();
  thunk_FUN_0040add0();
  return;
}


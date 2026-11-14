// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004980c0
// entry: 004980c0  size: 72


undefined4 FUN_004980c0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_400 [1024];
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_004b7750(local_400,param_1);
  local_400[param_2] = 0;
  uVar1 = FUN_004b7490(local_400);
  return uVar1;
}


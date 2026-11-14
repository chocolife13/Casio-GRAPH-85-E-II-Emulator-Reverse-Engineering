// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00557e7f
// entry: 00557e7f  size: 165


undefined4
FUN_00557e7f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0059d460;
  puStack_10 = &LAB_0055a424;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005582d3();
  FUN_005582d3();
  iVar1 = FUN_005582d3();
  *(undefined4 *)(iVar1 + 0x6c) = param_1;
  iVar1 = FUN_005582d3();
  *(undefined4 *)(iVar1 + 0x70) = param_3;
  local_8 = 1;
  uVar2 = FUN_00553571(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_00557f4c();
  ExceptionList = local_14;
  return uVar2;
}


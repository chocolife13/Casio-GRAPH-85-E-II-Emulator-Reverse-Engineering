// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00451710
// entry: 00451710  size: 96


uint FUN_00451710(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_18);
  uVar1 = FUN_004e4020(param_1);
  if (uVar1 == 0) {
    iVar2 = FUN_004e72d0(param_1,local_18);
    if (iVar2 != 0) {
      return 3;
    }
    FUN_004e7680(param_1,local_c);
    iVar2 = FUN_004e7210(param_1,local_c);
    uVar1 = -(uint)(iVar2 != 0) & 3;
  }
  return uVar1;
}


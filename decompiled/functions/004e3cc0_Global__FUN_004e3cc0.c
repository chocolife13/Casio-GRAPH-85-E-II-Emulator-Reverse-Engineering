// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e3cc0
// entry: 004e3cc0  size: 135


undefined4 FUN_004e3cc0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004e4040(param_1);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 == 3) {
    FUN_004e5600(param_1);
    FUN_004e5630(3,param_1);
    return 0;
  }
  if (iVar1 != 2) {
    iVar1 = FUN_004e4000(param_1);
    if (iVar1 != 0) {
      FUN_004e5630(3);
      return 0;
    }
    uVar2 = FUN_004e8d00(param_1);
    return uVar2;
  }
  iVar1 = FUN_004e4000(param_1);
  if (iVar1 != 0) {
    FUN_004e5600();
    FUN_004e5630(0x19,param_1);
    return 0;
  }
  uVar2 = FUN_004de0e0(param_1);
  return uVar2;
}


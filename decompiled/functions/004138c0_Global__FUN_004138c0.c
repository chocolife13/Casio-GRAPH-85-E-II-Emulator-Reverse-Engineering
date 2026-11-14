// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004138c0
// entry: 004138c0  size: 133


undefined4 FUN_004138c0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 & 0xff00;
  if (uVar1 == 0) {
    uVar2 = FUN_0040fe70(param_1);
    return uVar2;
  }
  if (uVar1 == 0x7f00) {
    uVar2 = FUN_0040fef0(param_1);
    return uVar2;
  }
  if (uVar1 == 0xf700) {
    uVar2 = FUN_0040ff10(param_1);
    return uVar2;
  }
  if (uVar1 == 0xe500) {
    uVar2 = FUN_0040fed0(param_1);
    return uVar2;
  }
  if (uVar1 == 0xe600) {
    uVar2 = FUN_0040feb0(param_1);
    return uVar2;
  }
  if (uVar1 == 0xe700) {
    uVar2 = FUN_0040fe90(param_1);
    return uVar2;
  }
  if (uVar1 == 0xf900) {
    uVar2 = FUN_0040fea0(param_1);
    return uVar2;
  }
  return 0;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00413950
// entry: 00413950  size: 177


undefined4 FUN_00413950(uint param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 & 0xff00;
  if (uVar1 == 0) {
    uVar2 = FUN_0040ff20(param_1,param_2);
    return uVar2;
  }
  if (uVar1 == 0x7f00) {
    uVar2 = FUN_0040ff50(param_1,param_2);
    return uVar2;
  }
  if (uVar1 == 0xf700) {
    uVar2 = FUN_0040ffb0(param_1,param_2);
    return uVar2;
  }
  if (uVar1 == 0xe500) {
    uVar2 = FUN_0040ffd0(param_1,param_2);
    return uVar2;
  }
  if (uVar1 == 0xe600) {
    uVar2 = FUN_004100a0(param_1,param_2);
    return uVar2;
  }
  if (uVar1 == 0xe700) {
    uVar2 = FUN_004100f0(param_1,param_2);
    return uVar2;
  }
  if (uVar1 == 0xf900) {
    uVar2 = FUN_00410110(param_1,param_2);
    return uVar2;
  }
  *param_2 = 0;
  return 0;
}


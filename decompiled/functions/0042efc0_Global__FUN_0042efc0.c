// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042efc0
// entry: 0042efc0  size: 140


undefined2 FUN_0042efc0(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0(param_1);
    return uVar2;
  }
  sVar1 = FUN_00401170(param_2);
  if (sVar1 != 0xf0) {
    uVar3 = FUN_00401560(param_1);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_00401560(param_2), (uVar3 & 1) != 0)) {
      FUN_0042f560(0,param_1);
      return 0;
    }
    FUN_0042f560(1,param_1);
    return 0;
  }
  uVar2 = FUN_004010f0(param_2);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return uVar2;
}


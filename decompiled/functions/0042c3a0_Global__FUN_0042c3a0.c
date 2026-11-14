// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042c3a0
// entry: 0042c3a0  size: 101


undefined2 FUN_0042c3a0(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined2 uVar2;
  
  sVar1 = FUN_004011b0(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_00401130(param_1);
    return uVar2;
  }
  sVar1 = FUN_004011b0(param_2);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_00401130();
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return uVar2;
  }
  FUN_00401230(param_1,param_2);
  return 0;
}


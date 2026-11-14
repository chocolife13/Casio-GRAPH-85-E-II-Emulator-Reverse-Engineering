// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00483e70
// entry: 00483e70  size: 101


undefined4
FUN_00483e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_00527570(param_1,param_2,param_3,&local_18);
  if (iVar1 != 0) {
    return 4;
  }
  iVar1 = FUN_004e4000(&local_18);
  if (iVar1 == 1) {
    return 0x19;
  }
  *param_4 = local_18;
  param_4[1] = local_14;
  param_4[2] = local_10;
  return 0;
}


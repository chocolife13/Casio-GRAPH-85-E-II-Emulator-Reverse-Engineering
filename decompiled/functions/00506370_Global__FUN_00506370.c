// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00506370
// entry: 00506370  size: 128


undefined4 FUN_00506370(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_00501ca0(param_1,param_2,&local_18,0,0x8700);
  if (iVar1 == 0) {
    uVar2 = FUN_004e4020(&local_18);
    return uVar2;
  }
  if (((byte)local_18 & 0x60) == 0x20) {
    FUN_004fd9e0(&local_18);
    FUN_004e5630(2,param_3);
    return 2;
  }
  *param_3 = local_18;
  param_3[1] = local_14;
  param_3[2] = local_10;
  return 0;
}


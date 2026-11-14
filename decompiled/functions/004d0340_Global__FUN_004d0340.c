// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d0340
// entry: 004d0340  size: 351


bool FUN_004d0340(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 3;
  FUN_004e7af0(param_1 + 0x24,puVar1,6);
  iVar2 = FUN_004e4020(puVar1);
  if (iVar2 != 0) {
    return true;
  }
  *param_1 = *puVar1;
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  iVar2 = FUN_004d06d0(0,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar2 == 0) {
    return (bool)2;
  }
  iVar2 = FUN_004d06d0(1,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar2 == 0) {
    return (bool)2;
  }
  iVar2 = FUN_004e71d0(param_1 + 0xf,param_1 + 0x12);
  if (iVar2 == 1) {
    return false;
  }
  FUN_004e7af0(param_1 + 0x24,puVar1,0xb);
  iVar2 = FUN_004e4020(puVar1);
  if (iVar2 != 0) {
    return true;
  }
  *param_1 = *puVar1;
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  iVar2 = FUN_004d06d0(0,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar2 == 0) {
    return (bool)2;
  }
  iVar2 = FUN_004d06d0(1,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar2 == 0) {
    return (bool)2;
  }
  iVar2 = FUN_004e71d0(param_1 + 0xf,param_1 + 0x12);
  return iVar2 != 1;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5850
// entry: 004f5850  size: 146


undefined4 FUN_004f5850(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00501720(param_1,param_2,param_3,1);
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *param_3;
  if ((bVar1 & 0x60) == 0x20) {
    uVar3 = FUN_004f58f0(2,param_3);
    return uVar3;
  }
  if (((param_4 != 1) && ((bVar1 & 0x80) != 0)) && ((bVar1 & 0xf0) != 0xf0)) {
    if (param_4 == 2) {
      uVar3 = FUN_004f58f0(2,param_3);
      return uVar3;
    }
    uVar3 = FUN_004f58f0(3,param_3);
    return uVar3;
  }
  if ((param_4 == 2) || (param_4 == 3)) {
    iVar2 = FUN_004e96c0(param_3);
    if (iVar2 != 0) {
      FUN_004e5640(param_3,param_3);
    }
  }
  return 1;
}


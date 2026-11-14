// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5c60
// entry: 004f5c60  size: 97


undefined4 FUN_004f5c60(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*param_1 & 0x70) == 0x20) {
    iVar1 = FUN_00528550(0,*param_2,param_1);
    if (iVar1 != 0) {
      FUN_004e5630(iVar1,param_1);
      return 0;
    }
  }
  else if ((*param_1 & 0x70) == 0x30) {
    iVar1 = FUN_004f5cd0(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    FUN_0052f780(0xc0,param_1);
  }
  return 1;
}


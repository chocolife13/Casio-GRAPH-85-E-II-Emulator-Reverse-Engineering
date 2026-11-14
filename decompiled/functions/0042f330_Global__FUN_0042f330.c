// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042f330
// entry: 0042f330  size: 105


uint FUN_0042f330(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0();
    return uVar2;
  }
  uVar2 = FUN_004014a0(param_1);
  if ((uVar2 & 1) != 0) {
    return uVar2 & 0xffff0000;
  }
  if (0x7ce < (short)param_2) {
    uVar2 = FUN_0042f540(3,param_1);
    return uVar2;
  }
  if ((short)param_2 < -0x7ce) {
    uVar2 = FUN_0042f560(0,param_1);
    return uVar2 & 0xffff0000;
  }
  uVar2 = FUN_00401760(param_1,param_2);
  return uVar2;
}


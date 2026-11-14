// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a150
// entry: 0042a150  size: 47


undefined4 FUN_0042a150(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (((int)param_1 >> 0x18 & 0xfU) != 1) {
    return 0xfffffffb;
  }
  uVar1 = FUN_0041e600(param_1 & 0xf0ffffff,param_2,param_3);
  return uVar1;
}


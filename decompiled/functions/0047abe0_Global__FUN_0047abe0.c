// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047abe0
// entry: 0047abe0  size: 90


undefined4
FUN_0047abe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00529a70(*param_6);
  if (((uVar1 < 0x1a9) && (uVar1 != 0x1a8)) && (uVar1 == 0x108)) {
    uVar2 = FUN_00433130(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  return 0xfffffffa;
}


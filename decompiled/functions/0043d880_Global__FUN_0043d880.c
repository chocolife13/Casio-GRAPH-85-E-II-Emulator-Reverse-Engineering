// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043d880
// entry: 0043d880  size: 85


undefined4
FUN_0043d880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00529a70(*param_6);
  if ((uVar1 != 0x108) && ((uVar1 < 0x409 || (0x40a < uVar1)))) {
    return 0xfffffffa;
  }
  uVar2 = FUN_00433130(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar2;
}


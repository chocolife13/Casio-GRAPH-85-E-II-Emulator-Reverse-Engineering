// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f3db0
// entry: 004f3db0  size: 83


undefined4 FUN_004f3db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  
  if ((char)param_3 != '\x10') {
    uVar2 = FUN_004f3d60(param_1,param_2,param_3);
    return uVar2;
  }
  sVar1 = FUN_005172b0(param_1);
  if (((sVar1 != 0x108) && (sVar1 != 0x40a)) && (sVar1 != 0x409)) {
    return 0;
  }
  uVar2 = FUN_004f3d60(param_1,param_2,0x10);
  return uVar2;
}


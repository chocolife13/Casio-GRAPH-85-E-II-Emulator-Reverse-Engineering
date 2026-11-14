// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042f050
// entry: 0042f050  size: 74


undefined2 FUN_0042f050(undefined4 param_1)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0();
    return uVar2;
  }
  uVar3 = FUN_00401560(param_1);
  if ((uVar3 & 6) != 0) {
    FUN_0042f560(0,param_1);
    return 0;
  }
  FUN_0042f560(1,param_1);
  return 0;
}


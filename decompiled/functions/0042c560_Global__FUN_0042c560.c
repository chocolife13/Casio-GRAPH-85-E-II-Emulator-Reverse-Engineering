// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042c560
// entry: 0042c560  size: 73


undefined2 FUN_0042c560(undefined4 param_1)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  
  sVar1 = FUN_004011b0(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_00401130();
    return uVar2;
  }
  uVar3 = FUN_004014e0(param_1);
  if ((uVar3 & 2) != 0) {
    FUN_0042fa50(0x11);
    return 0x11;
  }
  FUN_00401370(param_1);
  return 0;
}


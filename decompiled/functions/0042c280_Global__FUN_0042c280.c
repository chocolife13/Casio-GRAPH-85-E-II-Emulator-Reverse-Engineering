// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042c280
// entry: 0042c280  size: 59


undefined2 FUN_0042c280(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  
  sVar1 = FUN_004010f0(param_1);
  if (sVar1 != 0) {
    return 0xf0;
  }
  sVar1 = FUN_004010f0(param_1 + 0xc);
  if (sVar1 != 0) {
    return 0xf0;
  }
  uVar2 = FUN_004015a0(param_1 + 0xc);
  return uVar2;
}


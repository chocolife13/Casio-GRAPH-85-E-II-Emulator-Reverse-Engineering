// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042f2f0
// entry: 0042f2f0  size: 58


undefined2 FUN_0042f2f0(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    return 5000;
  }
  uVar2 = FUN_00401560(param_1);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar3 = FUN_00401720(param_1 + 10);
  return uVar3;
}


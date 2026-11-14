// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056eeb1
// entry: 0056eeb1  size: 52


void __thiscall FUN_0056eeb1(int param_1,int param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffc;
  if (param_2 == 0) {
    uVar1 = FUN_005661de();
    if ((uVar1 & 0x10000000) != 0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
    }
  }
  else {
    uVar1 = FUN_005661de();
    if ((uVar1 & 0x10000000) == 0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
    }
  }
  return;
}


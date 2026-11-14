// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056dc2a
// entry: 0056dc2a  size: 57


void __thiscall FUN_0056dc2a(int param_1,int param_2)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar1 = FUN_0056d88f(*(undefined4 *)(param_1 + 8));
  uVar1 = uVar1 & 0xfbffffff;
  if (param_2 == 0) {
    uVar1 = uVar1 | 0x4000000;
  }
  FUN_0056d8a0(*(undefined4 *)(param_1 + 8),uVar1);
  return;
}


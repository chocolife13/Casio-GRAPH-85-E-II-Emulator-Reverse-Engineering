// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056dc63
// entry: 0056dc63  size: 46


void __thiscall FUN_0056dc63(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0056d88f(*(undefined4 *)(param_1 + 8));
  uVar1 = uVar1 & 0xfffffdff;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x200;
  }
  FUN_0056d8a0(*(undefined4 *)(param_1 + 8),uVar1);
  return;
}


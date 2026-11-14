// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056db53
// entry: 0056db53  size: 32


void __thiscall FUN_0056db53(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = uVar1 & 0xfffff0ff;
  FUN_0056e895(param_2);
  *(uint *)(param_1 + 100) = uVar1;
  return;
}


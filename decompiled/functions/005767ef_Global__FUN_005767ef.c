// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005767ef
// entry: 005767ef  size: 46


void __thiscall FUN_005767ef(int *param_1,uint param_2)

{
  uint uVar1;
  
  FUN_005617bb(param_2 & 0x10);
  uVar1 = param_1[0x19];
  if (uVar1 != param_2) {
    param_1[0x19] = param_2;
    (**(code **)(*param_1 + 0xd4))(uVar1,param_2);
  }
  return;
}


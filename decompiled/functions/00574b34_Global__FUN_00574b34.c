// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00574b34
// entry: 00574b34  size: 112


void __thiscall
FUN_00574b34(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  tagRECT local_14;
  
  uVar2 = CONCAT31((uint3)(param_4 >> 8) & 0xffbf00,0x4e);
  *(uint *)(param_1 + 100) = param_4 & 0x40ffff;
  uVar1 = FUN_005661de();
  if ((uVar1 & 0x40000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  FUN_00565e0f(0x1000);
  SetRectEmpty(&local_14);
  FUN_00563a59("msctls_statusbar32",0,param_3 | uVar2,&local_14,param_2,param_5,0);
  return;
}


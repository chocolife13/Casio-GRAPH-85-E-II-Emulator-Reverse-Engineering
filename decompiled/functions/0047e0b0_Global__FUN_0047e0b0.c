// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047e0b0
// entry: 0047e0b0  size: 72


void __thiscall FUN_0047e0b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_004d52d0(param_2,param_3,param_4 + 0x800,
                       CONCAT31((int3)((uint)param_1 >> 8),*(byte *)(param_4 + 0x8e0) >> 4) &
                       0xffffff03);
  if (iVar1 == 0x400) {
    *param_3 = 0xff;
  }
  else if (iVar1 == 0x800) {
    *param_3 = 0xffffff81;
    return;
  }
  return;
}


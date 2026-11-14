// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00463330
// entry: 00463330  size: 171


void FUN_00463330(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  *(byte *)(param_1 + 0x8e1) = *(byte *)(param_1 + 0x8e1) & 0xfb;
  bVar1 = FUN_005260a0();
  *(byte *)(param_1 + 0x8e0) = (bVar1 & 3) << 2 | *(byte *)(param_1 + 0x8e0) & 0xf3;
  bVar1 = FUN_00514f80();
  *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0x3f;
  *(undefined1 *)(param_1 + 0x8e2) = 0;
  *(byte *)(param_1 + 0x8e1) = *(byte *)(param_1 + 0x8e1) & 0xec ^ bVar1 & 1;
  bVar1 = FUN_00514f40();
  *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0xcf;
  *(byte *)(param_1 + 0x8e1) = (bVar1 & 1) << 3 | *(byte *)(param_1 + 0x8e1) & 0x97;
  uVar2 = FUN_00515050();
  *(undefined1 *)(param_1 + 0x8e3) = uVar2;
  *(undefined4 *)(param_1 + 0x8f4) = 1;
  *(undefined4 *)(param_1 + 0x8f0) = 1;
  *(undefined4 *)(param_1 + 0x8ec) = 1;
  *(undefined4 *)(param_1 + 0x8e8) = 1;
  return;
}


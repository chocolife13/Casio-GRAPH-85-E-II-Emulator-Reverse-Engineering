// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00503490
// entry: 00503490  size: 321


void FUN_00503490(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  
  bVar1 = FUN_00514ee0();
  *(byte *)(param_1 + 0x8e1) = (bVar1 & 1) << 2 | *(byte *)(param_1 + 0x8e1) & 0xfb;
  bVar1 = FUN_005260a0();
  *(byte *)(param_1 + 0x8e0) = (bVar1 & 3) << 2 | *(byte *)(param_1 + 0x8e0) & 0xf3;
  bVar1 = FUN_00514f80();
  *(byte *)(param_1 + 0x8e1) = (*(byte *)(param_1 + 0x8e1) ^ bVar1) & 1 ^ *(byte *)(param_1 + 0x8e1)
  ;
  cVar2 = FUN_00514f60();
  *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0x3f | cVar2 << 6;
  bVar1 = FUN_00514f20();
  *(undefined1 *)(param_1 + 0x8e2) = 0;
  *(byte *)(param_1 + 0x8e1) = (bVar1 & 1) << 4 | *(byte *)(param_1 + 0x8e1) & 0xef;
  bVar1 = FUN_00514ec0();
  *(byte *)(param_1 + 0x8e1) = (bVar1 & 1) << 1 | *(byte *)(param_1 + 0x8e1) & 0xfd;
  bVar1 = FUN_00514f40();
  *(byte *)(param_1 + 0x8e1) = (bVar1 & 1) << 3 | *(byte *)(param_1 + 0x8e1) & 0xf7;
  bVar1 = FUN_00514fa0();
  *(byte *)(param_1 + 0x8e0) = (bVar1 & 3) << 4 | *(byte *)(param_1 + 0x8e0) & 0xcf;
  bVar1 = FUN_00515010();
  *(byte *)(param_1 + 0x8e1) = (bVar1 & 1) << 5 | *(byte *)(param_1 + 0x8e1) & 0xdf;
  bVar1 = FUN_00515030();
  *(byte *)(param_1 + 0x8e1) = (bVar1 & 1) << 6 | *(byte *)(param_1 + 0x8e1) & 0xbf;
  uVar3 = FUN_00515050();
  *(undefined1 *)(param_1 + 0x8e3) = uVar3;
  *(undefined4 *)(param_1 + 0x8f4) = 1;
  *(undefined4 *)(param_1 + 0x8f0) = 1;
  *(undefined4 *)(param_1 + 0x8ec) = 1;
  *(undefined4 *)(param_1 + 0x8e8) = 1;
  return;
}


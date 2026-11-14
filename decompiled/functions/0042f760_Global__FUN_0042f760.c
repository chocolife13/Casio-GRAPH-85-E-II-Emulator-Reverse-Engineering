// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042f760
// entry: 0042f760  size: 65


undefined4 FUN_0042f760(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  FUN_00401000(param_1,local_10);
  FUN_00401430(local_10);
  FUN_00401040(local_10,local_1c);
  uVar1 = FUN_00401560(local_1c);
  uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),~(byte)uVar1) & 0xffffff01;
  return CONCAT22((short)(uVar2 >> 0x10),(ushort)(byte)uVar2);
}


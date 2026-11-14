// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005613a3
// entry: 005613a3  size: 31


undefined4 __fastcall FUN_005613a3(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0056148b(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc),
                       *(undefined4 *)(*(int *)(param_1 + 0x5c) + 8));
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10) = uVar1;
  return *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10);
}


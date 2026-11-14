// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515a70
// entry: 00515a70  size: 108


undefined4 FUN_00515a70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_3e0 [992];
  
  *(undefined1 **)(param_1 + 0x8dc) = local_3e0;
  *(byte *)(param_1 + 0x8e1) = *(byte *)(param_1 + 0x8e1) & 0xee;
  iVar1 = FUN_00505f10(param_1,8);
  if (iVar1 == 0) {
    return 0x1e;
  }
  *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0xfc;
  uVar2 = FUN_00510270(param_1);
  *(undefined1 **)(param_1 + 0x8dc) = local_3e0;
  return uVar2;
}


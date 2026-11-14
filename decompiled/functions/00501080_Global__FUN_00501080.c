// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00501080
// entry: 00501080  size: 86


undefined4 FUN_00501080(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  bVar1 = *param_2;
  if (bVar1 == 10) {
    return 0;
  }
  if (bVar1 == 0) {
    uVar2 = FUN_0052f6b0(0x3b);
    FUN_0052f6c0(0x3b,uVar2 | 1);
    puVar3 = (undefined4 *)FUN_0052f6e0(0xc);
    *puVar3 = param_1;
  }
  *(undefined4 *)(param_2 + (uint)bVar1 * 4 + 0x18) = param_1;
  *param_2 = bVar1 + 1;
  return 1;
}


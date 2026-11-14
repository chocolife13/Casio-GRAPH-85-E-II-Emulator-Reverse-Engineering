// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00500e70
// entry: 00500e70  size: 131


char FUN_00500e70(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  if (bVar1 == 0x28) {
    return '\x0f';
  }
  iVar2 = FUN_004f9ba0(param_1);
  if (iVar2 != 0) {
    return '\x0f';
  }
  if (bVar1 == 0x7f) {
    bVar1 = param_1[1];
    if (bVar1 == 0x54) {
      return '\x05';
    }
    if (bVar1 == 0xb0) {
      return '\t';
    }
    return ((bVar1 != 0xb1) - 1U & 7) + 3;
  }
  if (0x7f < bVar1) {
    return *(char *)((int)&PTR_FUN_005c2d70 + (uint)bVar1);
  }
  iVar2 = FUN_004f9a90(param_1);
  if (iVar2 != 0) {
    return '\b';
  }
  return '\x03';
}


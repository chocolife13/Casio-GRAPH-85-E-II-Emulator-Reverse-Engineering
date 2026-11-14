// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056120b
// entry: 0056120b  size: 175


undefined4 * FUN_0056120b(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00562a62(0,*(undefined4 *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x17] = extraout_ECX + 0x18;
  *extraout_ECX = &PTR_LAB_0059c78c;
  _memset(extraout_ECX + 0x18,0,0x42);
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)extraout_ECX[0x17] = 0x42;
  *(undefined4 *)(extraout_ECX[0x17] + 0x14) = uVar1;
  if (DAT_005d5104 == 0) {
    iVar2 = FUN_00562d47();
    if (iVar2 != 0) {
      *(byte *)(extraout_ECX[0x17] + 0x15) = *(byte *)(extraout_ECX[0x17] + 0x15) | 0x38;
      *(code **)(extraout_ECX[0x17] + 0x2a) = FUN_00560a3b;
      *(code **)(extraout_ECX[0x17] + 0x2e) = FUN_00560a3b;
    }
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    extraout_ECX[0xf] = 0x7008;
    *(byte *)(extraout_ECX[0x17] + 0x15) = *(byte *)(extraout_ECX[0x17] + 0x15) | 1;
  }
  else {
    extraout_ECX[0xf] = 0x7009;
    *(uint *)(extraout_ECX[0x17] + 0x14) = *(uint *)(extraout_ECX[0x17] + 0x14) | 0x40;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(byte *)(extraout_ECX[0x17] + 0x15) = *(byte *)(extraout_ECX[0x17] + 0x15) & 0xfd;
  return extraout_ECX;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005603ea
// entry: 005603ea  size: 326


undefined4 * FUN_005603ea(void)

{
  LPSTR lpString1;
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00562a62(0,*(undefined4 *)(unaff_EBP + 0x1c));
  puVar2 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x2b] = puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_LAB_0059bb60;
  _memset(extraout_ECX + 0x17,0,0x4c);
  iVar3 = *(int *)(unaff_EBP + 8);
  extraout_ECX[0x2a] = iVar3;
  lpString1 = (LPSTR)(extraout_ECX + 0x3c);
  *lpString1 = '\0';
  extraout_ECX[0xf] = 0x7005 - (uint)(iVar3 != 0);
  extraout_ECX[0x26] = *(undefined4 *)(unaff_EBP + 0xc);
  uVar1 = *(uint *)(unaff_EBP + 0x14);
  *(undefined1 *)(extraout_ECX + 0x2c) = 0;
  extraout_ECX[0x24] = extraout_ECX[0x24] | uVar1 | 0x800020;
  extraout_ECX[0x7d] = 0;
  extraout_ECX[0x17] = 0x4c;
  extraout_ECX[0x1e] = lpString1;
  extraout_ECX[0x1f] = 0x104;
  extraout_ECX[0x20] = extraout_ECX + 0x2c;
  extraout_ECX[0x21] = 0x40;
  if (DAT_005d5104 == 0) {
    iVar3 = FUN_00562d47();
    if (iVar3 != 0) {
      extraout_ECX[0x24] = extraout_ECX[0x24] | 0x10;
    }
    if (DAT_005d5104 == 0) goto LAB_005604c4;
  }
  *(byte *)((int)extraout_ECX + 0x92) = *(byte *)((int)extraout_ECX + 0x92) | 8;
  iVar3 = FUN_0057497f();
  extraout_ECX[0x19] = *(undefined4 *)(iVar3 + 0xc);
LAB_005604c4:
  iVar3 = *(int *)(unaff_EBP + 0x10);
  extraout_ECX[0x28] = FUN_00560a3b;
  if (iVar3 != 0) {
    lstrcpynA(lpString1,*(LPCSTR *)(unaff_EBP + 0x10),0x104);
  }
  if (*(int *)(unaff_EBP + 0x18) != 0) {
    FUN_005674d5(*(undefined4 *)(unaff_EBP + 0x18));
    puVar4 = (undefined1 *)FUN_005676c7(0);
    while( true ) {
      puVar4 = (undefined1 *)FUN_00555bcc(puVar4,0x7c);
      if (puVar4 == (undefined1 *)0x0) break;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    extraout_ECX[0x1a] = extraout_ECX[0x2b];
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


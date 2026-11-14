// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c50a
// entry: 0056c50a  size: 253


void * FUN_0056c50a(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  void *extraout_ECX;
  int unaff_EBP;
  bool bVar4;
  
  FUN_00555ab8();
  *(void **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00566409();
  puVar2 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined **)((int)extraout_ECX + 0x60) = puVar2;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)((int)extraout_ECX + 0x40) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x3c) = uVar1;
  *(undefined4 *)((int)extraout_ECX + 0x4c) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)((int)extraout_ECX + 0x50) = *(undefined4 *)(unaff_EBP + 0x10);
  uVar1 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)((int)extraout_ECX + 0x44) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x48) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x54) = uVar1;
  *(undefined4 *)((int)extraout_ECX + 0x58) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x5c) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x20) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x24) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x28) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x2c) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x30) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x34) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x38) = 0;
  bVar4 = DAT_005cb964 == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar4) {
    *(undefined4 *)((int)extraout_ECX + 0x1c) = 1;
    FUN_0056c607();
  }
  else {
    *(undefined4 *)((int)extraout_ECX + 0x1c) = 0;
    if (DAT_005d4e38 == (CPtrList *)0x0) {
      iVar3 = FUN_00566937(0x1c);
      *(int *)(unaff_EBP + 8) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar3 == 0) {
        DAT_005d4e38 = (CPtrList *)0x0;
      }
      else {
        DAT_005d4e38 = (CPtrList *)FUN_00561cc7(10);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    if (DAT_005d4e34 == 0) {
      iVar3 = FUN_00566937(0x20);
      *(int *)(unaff_EBP + 8) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar3 == 0) {
        DAT_005d4e34 = 0;
      }
      else {
        DAT_005d4e34 = FUN_00576976();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    CPtrList::AddTail(DAT_005d4e38,extraout_ECX);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5eb0
// entry: 004f5eb0  size: 288


undefined4 FUN_004f5eb0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 local_41c [12];
  undefined1 local_410 [80];
  undefined1 local_3c0 [960];
  
  iVar1 = FUN_00525ca0(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_00526410();
    FUN_00538a00(local_41c);
    FUN_00538980(0,0x13,local_410);
    FUN_0053c690(5);
    FUN_00526420(0xd7);
    iVar1 = FUN_00539970(5,local_3c0);
    iVar4 = 0;
    if (0 < iVar1) {
      puVar3 = local_3c0;
      do {
        FUN_00538860(iVar4,puVar3);
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 0x30;
      } while (iVar4 < iVar1);
    }
    FUN_005387f0(0);
    FUN_0040ae30();
    do {
      FUN_00525ca0(param_1);
      FUN_0051f870();
      iVar1 = FUN_00526620(param_2);
      while (iVar1 != 0) {
        FUN_0051f870();
        iVar1 = FUN_00526620(param_2);
      }
      switch(*param_2) {
      case 0x7532:
      case 0x7534:
      case 0x753f:
      case 0x754d:
      case 0x7557:
        FUN_00538810();
        FUN_00538a50(local_41c);
        FUN_005389c0(0,0x13,local_410);
        FUN_00526420(uVar2);
        return 0;
      }
    } while( true );
  }
  return 4;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00572f91
// entry: 00572f91  size: 139


void FUN_00572f91(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_00555ab8();
  FUN_00561cc7(10);
  puVar4 = *(undefined4 **)(extraout_ECX + 0x70);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar4;
    piVar3 = (int *)puVar4[2];
    iVar2 = (**(code **)(*piVar3 + 0xd0))();
    puVar4 = puVar1;
    if (iVar2 != 0) {
      CPtrList::AddTail((CPtrList *)(unaff_EBP + -0x28),piVar3);
    }
  }
  puVar4 = *(undefined4 **)(unaff_EBP + -0x24);
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar4;
    if (((int *)puVar4[2])[0x1e] == 0) {
      (**(code **)(*(int *)puVar4[2] + 0x58))();
      puVar4 = puVar1;
    }
    else {
      piVar3 = (int *)FUN_005649b3();
      (**(code **)(*piVar3 + 0x58))();
      puVar4 = puVar1;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00561d26();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


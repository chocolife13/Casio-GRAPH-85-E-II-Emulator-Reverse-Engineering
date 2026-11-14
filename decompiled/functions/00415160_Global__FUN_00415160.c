// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00415160
// entry: 00415160  size: 204


undefined4 FUN_00415160(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_404;
  undefined1 local_400 [1024];
  
  uVar1 = FUN_00538390();
  uVar2 = FUN_00523790(5);
  FUN_00538350(uVar2);
  FUN_00502110(local_400);
  FUN_00525b40(5);
  FUN_005232d0(3,2);
  FUN_005233e0(s_Optimization_was_005bd6a4);
  FUN_005232d0(3,3);
  FUN_005233e0(s_stopped__005bd698);
  FUN_005232d0(3,5);
  FUN_005233e0(s_Continue___F1__005bd684);
  FUN_005232d0(3,6);
  FUN_005233e0(s_Initialize__F6__005bd670);
  while( true ) {
    do {
      iVar3 = FUN_00526620(&local_404);
    } while (iVar3 != 0);
    if (local_404 == 0x7539) break;
    if (local_404 == 0x753e) {
      uVar2 = 0x753e;
LAB_00415209:
      FUN_00502140(local_400);
      FUN_00538340();
      FUN_00538350(uVar1);
      return uVar2;
    }
  }
  uVar2 = 0x7539;
  goto LAB_00415209;
}


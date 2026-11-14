// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043af70
// entry: 0043af70  size: 264


undefined4 FUN_0043af70(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_404;
  undefined1 local_400 [1024];
  
  FUN_00502110(local_400);
  FUN_0052d2d0(s__RUNMAT_005be2d4,&local_404);
  FUN_00502140(local_400);
  if (local_404 == 1) {
    cVar1 = FUN_00526090(0x17);
    if (cVar1 == '\0') {
      if (*(int *)(param_2 + 0x30) == 1) {
        *(undefined4 *)(param_2 + 0x30) = 0;
        uVar3 = 0;
LAB_0043afdc:
        FUN_0052f6c0(10,uVar3);
        FUN_004b8990();
        FUN_00414240();
        *(undefined4 *)(param_2 + 0x34) = 0;
        FUN_00438a60(param_2);
        *(undefined4 *)(param_2 + 0x54) = 1;
        *(undefined4 *)(param_2 + 0x1c) = 1;
        FUN_005232d0(*(undefined4 *)(param_2 + 0x18),1);
        FUN_00527030();
        *(undefined4 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x24) = 0;
        return 0;
      }
    }
    else if (*(int *)(param_2 + 0x30) == 0) {
      *(undefined4 *)(param_2 + 0x30) = 1;
      uVar3 = 1;
      goto LAB_0043afdc;
    }
    if (*(int *)(param_2 + 0x34) != 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0x24) != 0) {
      return 0;
    }
    FUN_00523740();
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    if (*(int *)(param_2 + 0x34) != 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0x24) != 0) {
      return 0;
    }
    FUN_00523740();
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
  }
  FUN_005232d0(uVar2,uVar3);
  FUN_00527030();
  return 0;
}


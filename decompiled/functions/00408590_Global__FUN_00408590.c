// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00408590
// entry: 00408590  size: 254


undefined4
FUN_00408590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00553497(param_1,&DAT_005a8ff8);
  iVar2 = FUN_00553497(param_2,&DAT_005a8ff8);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    uVar5 = 2;
  }
  else {
    iVar3 = FUN_005533b8(iVar1);
    while (iVar3 != -1) {
      iVar4 = FUN_005533b8(iVar2);
      if (iVar4 == -1) goto LAB_0040860b;
      if (iVar3 != iVar4) {
        uVar5 = 1;
        FUN_005533e9(iVar1);
        FUN_005533e9(iVar2);
        iVar1 = FUN_00553497(param_1,&DAT_005a8ff8);
        iVar2 = FUN_00553497(param_2,&DAT_005a8ff8);
        FUN_00408b90(iVar1,iVar2,param_3,param_4,param_5);
        goto LAB_0040866b;
      }
      iVar3 = FUN_005533b8(iVar1);
    }
    iVar3 = FUN_005533b8(iVar2);
    if (iVar3 == -1) {
      uVar5 = 0;
    }
    else {
LAB_0040860b:
      uVar5 = 3;
    }
  }
LAB_0040866b:
  if (iVar1 != 0) {
    FUN_005533e9(iVar1);
  }
  if (iVar2 != 0) {
    FUN_005533e9(iVar2);
  }
  return uVar5;
}


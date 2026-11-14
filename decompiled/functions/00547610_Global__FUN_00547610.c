// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00547610
// entry: 00547610  size: 421


int FUN_00547610(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [24];
  
  iVar2 = FUN_00486470(param_4,param_5);
  if (iVar2 == 0) {
    return 0x15;
  }
  iVar3 = 0;
  iVar2 = FUN_00527440(param_2,param_3);
  cVar1 = FUN_00526090(0x50);
  if (cVar1 == '\x01') {
    iVar2 = iVar2 + param_4;
    iVar4 = param_4;
    if (param_4 <= iVar2) {
      do {
        FUN_004888a0(param_1,iVar4,param_5,1);
        FUN_00547460(param_1,iVar4,param_5,1);
        FUN_004876e0(param_1,iVar4,param_5,1);
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar2);
    }
    iVar4 = param_4;
    if (param_4 < iVar2) {
      do {
        if (0x1a < iVar4) goto LAB_00547797;
        iVar3 = FUN_00527570(param_2,param_3,(iVar4 - param_4) + 1,local_18);
      } while (((iVar3 == 0) && (iVar3 = FUN_00485fc0(param_1,iVar4,param_5,local_18), iVar3 == 0))
              && (iVar4 = iVar4 + 1, iVar4 < iVar2));
    }
  }
  else {
    FUN_004888a0(param_1,param_4,param_5,iVar2);
    FUN_004876e0(param_1,param_4,param_5,iVar2);
    FUN_00547460(param_1,param_4,param_5,iVar2);
    iVar4 = 1;
    if (0 < iVar2) {
      do {
        if (999 < param_5 + -1 + iVar4) goto LAB_00547797;
        iVar3 = FUN_00527570(param_2,param_3,iVar4,local_18);
      } while (((iVar3 == 0) &&
               (iVar3 = FUN_00485fc0(param_1,param_4,param_5 + -1 + iVar4,local_18), iVar3 == 0)) &&
              (iVar4 = iVar4 + 1, iVar4 <= iVar2));
    }
  }
LAB_00547799:
  FUN_00528480(param_2,param_3);
  return iVar3;
LAB_00547797:
  iVar3 = 0;
  goto LAB_00547799;
}


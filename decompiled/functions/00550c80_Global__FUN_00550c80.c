// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00550c80
// entry: 00550c80  size: 293


undefined4 FUN_00550c80(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_200 [512];
  
  FUN_004b7750(local_200,param_2);
  iVar6 = 2;
  iVar5 = 2;
  iVar3 = 1;
  if (1 < param_1) {
    iVar2 = param_1 + -1;
    do {
      cVar1 = *(char *)(iVar6 + param_2);
      while ((cVar1 != ',' && (cVar1 != '\0'))) {
        iVar3 = FUN_004b7370(cVar1);
        if (iVar3 != 0) {
          local_200[iVar5] = *(undefined1 *)(iVar6 + param_2);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 1;
        }
        local_200[iVar5] = *(undefined1 *)(iVar6 + param_2);
        iVar3 = iVar6 + 1;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 1;
        cVar1 = *(char *)(iVar3 + param_2);
      }
      local_200[iVar5] = *(undefined1 *)(iVar6 + param_2);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
      iVar3 = param_1;
    } while (iVar2 != 0);
  }
  FUN_004b7750(local_200 + iVar5,param_3);
  if (iVar3 < param_1 + 1) {
    iVar3 = (param_1 + 1) - iVar3;
    do {
      cVar1 = *(char *)(iVar6 + param_2);
      while ((cVar1 != ',' && (cVar1 != '\0'))) {
        iVar5 = FUN_004b7370(cVar1);
        if (iVar5 != 0) {
          iVar6 = iVar6 + 1;
        }
        iVar5 = iVar6 + 1;
        iVar6 = iVar6 + 1;
        cVar1 = *(char *)(iVar5 + param_2);
      }
      if (*(char *)(iVar6 + param_2) != '\0') {
        FUN_004b7710(local_200,iVar6 + param_2);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar4 = FUN_004b7550(local_200);
  if (uVar4 < 0x100) {
    FUN_004b7750(param_2,local_200);
    return 1;
  }
  return 0;
}


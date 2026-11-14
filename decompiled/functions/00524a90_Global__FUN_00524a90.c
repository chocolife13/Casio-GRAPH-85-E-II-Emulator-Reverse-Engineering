// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00524a90
// entry: 00524a90  size: 516


void FUN_00524a90(undefined1 *param_1,uint param_2,uint *param_3,uint *param_4,undefined4 param_5,
                 int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  
  switch(param_5) {
  case 0x753f:
    *param_3 = 0;
    *param_4 = 0;
    *param_1 = 0;
    return;
  case 0x7544:
    if (*param_3 < 2) {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
    uVar4 = *param_3 - 1;
    *param_3 = uVar4;
    iVar2 = FUN_004b7610(param_1,uVar4);
    if (iVar2 == 2) {
      *param_3 = *param_3 - 1;
    }
    if (*param_3 < *param_4) {
      *param_4 = *param_3;
    }
    break;
  case 0x7545:
    if (param_6 != 0) {
      param_2 = param_2 - 1;
    }
    uVar4 = *param_3;
    if ((uVar4 < param_2) && (cVar1 = param_1[uVar4], cVar1 != '\0')) {
      *param_3 = uVar4 + 1;
      iVar2 = FUN_004b7370(cVar1);
      if (iVar2 != 0) {
        *param_3 = *param_3 + 1;
        return;
      }
    }
    break;
  case 0x7549:
    iVar2 = FUN_005262f0();
    if ((iVar2 != 1) && (uVar4 = *param_3, uVar4 != 0)) {
      if (uVar4 == 1) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_004b73a0(param_1 + (uVar4 - 1));
        iVar2 = (iVar2 != 0) + 1;
      }
      iVar6 = *param_3 - iVar2;
      iVar3 = FUN_004b7550(param_1 + *param_3);
      if (0 < iVar3) {
        puVar5 = param_1 + iVar6;
        iVar6 = iVar6 + iVar3;
        do {
          *puVar5 = puVar5[iVar2];
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_1[iVar6] = 0;
      *param_3 = *param_3 - iVar2;
      return;
    }
    iVar2 = FUN_004b7370(param_1[*param_3]);
    if (iVar2 == 0) {
      uVar4 = *param_3;
      if (param_1[uVar4] == '\0') {
        if (uVar4 < 2) {
          *param_3 = 0;
          *param_4 = 0;
          *param_1 = 0;
          return;
        }
        iVar2 = FUN_004b73a0(param_1 + uVar4 + -1);
        if (iVar2 == 0) {
          uVar4 = *param_3;
          *param_3 = uVar4 - 1;
          param_1[uVar4 - 1] = 0;
          return;
        }
        uVar4 = *param_3;
        *param_3 = uVar4 - 1;
        param_1[uVar4 - 1] = 0;
        uVar4 = *param_3;
        *param_3 = uVar4 - 1;
        param_1[uVar4 - 1] = 0;
        if (*param_3 < *param_4) {
          *param_4 = *param_3;
          return;
        }
      }
      else {
        iVar2 = FUN_004b7550(param_1 + uVar4);
        if (0 < iVar2) {
          param_1 = param_1 + uVar4;
          do {
            *param_1 = param_1[1];
            param_1 = param_1 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return;
        }
      }
    }
    else {
      param_1 = param_1 + *param_3;
      iVar2 = FUN_004b7550(param_1);
      iVar2 = iVar2 + -1;
      if (0 < iVar2) {
        do {
          *param_1 = param_1[2];
          param_1 = param_1 + 1;
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
        return;
      }
    }
  }
  return;
}


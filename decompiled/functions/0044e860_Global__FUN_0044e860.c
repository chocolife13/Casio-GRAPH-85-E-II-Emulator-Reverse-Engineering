// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044e860
// entry: 0044e860  size: 431


void FUN_0044e860(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  piVar1 = param_1;
  iVar2 = *param_1;
  if ((iVar2 != 0) && (iVar3 = param_1[2], iVar3 != 0)) {
    if (*(int *)(iVar3 + 0x18) == 0) {
      iVar2 = FUN_0044e510(iVar3,1);
      if (iVar2 != 0) {
        FUN_0052b240(4);
        return;
      }
      iVar2 = FUN_0044e590(&param_1,0xffffffff);
      if (iVar2 == 0) {
        *(int **)(piVar1[2] + 0x18) = param_1;
        param_1[7] = piVar1[2];
        *piVar1 = (int)param_1;
      }
    }
    else if (*(int *)(iVar3 + 0x18) != iVar2) {
      do {
        iVar3 = *(int *)(iVar2 + 0x1c);
        *piVar1 = iVar3;
        *(undefined4 *)(iVar3 + 0x18) = 0;
        param_1 = (int *)iVar2;
        FUN_00407170(iVar2);
        iVar2 = *piVar1;
      } while (*(int *)(piVar1[2] + 0x18) != iVar2);
    }
    iVar2 = 1;
    param_1 = (int *)*piVar1;
    do {
      iVar3 = *(int *)((int)param_1 + 0x1c);
      if (iVar3 == 0) break;
      iVar2 = iVar2 + 1;
      param_1 = (int *)iVar3;
    } while (iVar2 < 8);
    if ((char)piVar1[4] == '\0') {
      if (iVar2 < 8) {
        iVar3 = FUN_0044e510(param_1,1);
        if (iVar3 != 0) {
          FUN_0052b240(4);
          return;
        }
        do {
          iVar3 = FUN_0044e590(&local_4,1);
          if (iVar3 != 0) {
            return;
          }
          iVar2 = iVar2 + 1;
          *(int **)(local_4 + 0x18) = param_1;
          *(int *)((int)param_1 + 0x1c) = local_4;
          param_1 = (int *)local_4;
        } while (iVar2 < 8);
      }
    }
    else if (iVar2 == 7) {
      iVar2 = FUN_0044e510(param_1,1);
      if (iVar2 != 0) {
        FUN_0052b240(4);
        return;
      }
      iVar2 = FUN_0044e590(&local_4,1);
      if (iVar2 != 0) {
        return;
      }
      *(int **)(local_4 + 0x18) = param_1;
      *(int *)((int)param_1 + 0x1c) = local_4;
      param_1 = (int *)local_4;
    }
    iVar2 = *(int *)((int)param_1 + 0x1c);
    if (iVar2 != 0) {
      *(undefined4 *)((int)param_1 + 0x1c) = 0;
      param_1 = (int *)iVar2;
      while (param_1 != (int *)0x0) {
        local_4 = *(int *)((int)param_1 + 0x1c);
        FUN_00407170(param_1);
        param_1 = (int *)local_4;
      }
    }
  }
  return;
}


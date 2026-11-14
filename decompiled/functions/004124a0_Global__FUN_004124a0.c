// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004124a0
// entry: 004124a0  size: 247


void FUN_004124a0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  piVar1 = param_2;
  iVar3 = 0;
  iVar4 = param_2[2];
  local_4 = iVar4 * -2 + 2;
  if (-1 < iVar4) {
    param_2 = (int *)0x2;
    do {
      *(int *)(param_1 + 4) = *piVar1 + iVar3;
      *(int *)(param_1 + 8) = piVar1[1] - iVar4;
      FUN_004136b0(param_1,piVar1);
      *(int *)(param_1 + 4) = *piVar1 + iVar3;
      *(int *)(param_1 + 8) = piVar1[1] + iVar4;
      FUN_004136b0(param_1,piVar1);
      *(int *)(param_1 + 4) = *piVar1 - iVar3;
      *(int *)(param_1 + 8) = piVar1[1] + iVar4;
      FUN_004136b0(param_1,piVar1);
      *(int *)(param_1 + 4) = *piVar1 - iVar3;
      *(int *)(param_1 + 8) = piVar1[1] - iVar4;
      FUN_004136b0(param_1,piVar1);
      if (local_4 < 0) {
        if ((iVar4 + local_4) * 2 + -1 < 1) {
          iVar3 = iVar3 + 1;
          param_2 = (int *)((int)param_2 + 2);
          local_4 = local_4 + 1 + iVar3 * 2;
        }
        else {
LAB_00412571:
          iVar3 = iVar3 + 1;
          param_2 = (int *)((int)param_2 + 2);
          iVar4 = iVar4 + -1;
          local_4 = local_4 + (int)param_2 + iVar4 * -2;
        }
      }
      else {
        if ((local_4 < 1) || (iVar2 = local_4 * 2 + iVar3 * -2, iVar2 == 1 || iVar2 + -1 < 0))
        goto LAB_00412571;
        iVar4 = iVar4 + -1;
        local_4 = local_4 + iVar4 * -2 + 1;
      }
    } while (-1 < iVar4);
  }
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004122a0
// entry: 004122a0  size: 311


void FUN_004122a0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 8) = param_2[1];
  iVar3 = *param_2;
  iVar6 = param_2[2];
  if (iVar6 < iVar3) {
    local_c = -1;
    iVar5 = iVar3 - iVar6;
  }
  else {
    local_c = 1;
    iVar5 = iVar6 - iVar3;
  }
  iVar4 = param_2[1];
  iVar2 = param_2[3];
  if (iVar2 < iVar4) {
    param_1 = -1;
    iVar2 = iVar4 - iVar2;
  }
  else {
    param_1 = 1;
    iVar2 = iVar2 - iVar4;
  }
  if (iVar3 == iVar6) {
    local_c = 0;
  }
  if (iVar4 == param_2[3]) {
    param_1 = 0;
  }
  iVar3 = iVar2;
  iVar6 = iVar5;
  if (iVar5 < iVar2) {
    iVar3 = iVar5;
    iVar6 = iVar2;
  }
  iVar4 = -iVar6;
  local_8 = iVar6;
  if (0 < iVar6) {
    do {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      FUN_004136b0(iVar1,param_2);
      for (iVar4 = iVar3 * 2 + iVar4; -1 < iVar4; iVar4 = iVar4 + iVar6 * -2) {
        if (iVar2 <= iVar5) {
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + param_1;
        }
        else {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + local_c;
        }
      }
      if (iVar2 <= iVar5) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + local_c;
      }
      else {
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + param_1;
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  FUN_004136b0(iVar1,param_2);
  return;
}


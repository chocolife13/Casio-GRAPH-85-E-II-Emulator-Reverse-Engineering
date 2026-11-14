// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004123e0
// entry: 004123e0  size: 192


void FUN_004123e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_2[2];
  iVar2 = param_2[3];
  uVar3 = *param_2;
  iVar4 = param_2[1];
  param_2[3] = iVar4;
  FUN_004122a0(param_1,param_2);
  *(int *)(param_1 + 8) = iVar4;
  if (iVar4 < iVar2) {
    iVar5 = iVar4 + 1;
    *(int *)(param_1 + 8) = iVar5;
    while (iVar5 <= iVar2) {
      *(undefined4 *)(param_1 + 4) = uVar3;
      FUN_004136b0(param_1,param_2);
      *(undefined4 *)(param_1 + 4) = uVar1;
      FUN_004136b0(param_1,param_2);
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
    }
  }
  else {
    iVar5 = iVar4 + -1;
    *(int *)(param_1 + 8) = iVar5;
    while (iVar2 <= iVar5) {
      *(undefined4 *)(param_1 + 4) = uVar3;
      FUN_004136b0(param_1,param_2);
      *(undefined4 *)(param_1 + 4) = uVar1;
      FUN_004136b0(param_1,param_2);
      iVar5 = *(int *)(param_1 + 8) + -1;
      *(int *)(param_1 + 8) = iVar5;
    }
  }
  *param_2 = uVar3;
  param_2[2] = uVar1;
  param_2[1] = iVar2;
  param_2[3] = iVar2;
  FUN_004122a0(param_1,param_2);
  param_2[1] = iVar4;
  return;
}


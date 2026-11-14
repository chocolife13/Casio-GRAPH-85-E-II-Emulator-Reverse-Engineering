// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044e6f0
// entry: 0044e6f0  size: 353


void FUN_0044e6f0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  bool bVar9;
  
  piVar3 = param_2;
  FUN_0044e4e0(param_2);
  uVar8 = param_3;
  cVar7 = (char)param_3;
  piVar3[1] = 0;
  *piVar3 = 0;
  if ((char)param_3 == '\0') {
    cVar7 = '\x01';
    param_3 = CONCAT31(param_3._1_3_,1);
    uVar8 = param_3;
  }
  else {
    iVar5 = FUN_0044e510(param_1,param_3);
    if (iVar5 != 0) {
      return;
    }
  }
  if (param_1 != 0) {
    iVar5 = FUN_0044e590(&param_2,-cVar7);
    if (iVar5 == 0) {
      *piVar3 = (int)param_2;
      piVar3[1] = (int)param_2;
      cVar4 = FUN_004ad000(1);
      bVar9 = cVar4 == '\0';
    }
    else {
      iVar5 = FUN_0044e510(0,uVar8);
      bVar9 = iVar5 == 0;
    }
    if (!bVar9) {
      FUN_0052b240(4);
      return;
    }
  }
  iVar5 = FUN_0044e590(&param_2,0);
  if (iVar5 == 0) {
    if (*piVar3 == 0) {
      *piVar3 = (int)param_2;
    }
    else {
      *(int **)(piVar3[1] + 0x1c) = param_2;
      param_2[6] = piVar3[1];
    }
    piVar3[1] = (int)param_2;
    piVar3[2] = (int)param_2;
    iVar5 = 2;
    do {
      iVar6 = FUN_0044e590(&param_2,uVar8);
      if (iVar6 != 0) break;
      iVar5 = iVar5 + 1;
      *(int **)(piVar3[1] + 0x1c) = param_2;
      param_2[6] = piVar3[1];
      piVar3[1] = (int)param_2;
    } while (iVar5 < 8);
    if (cVar7 == -1) {
      iVar5 = piVar3[1];
      *piVar3 = iVar5;
      iVar6 = *(int *)(iVar5 + 0x18);
      iVar2 = 0;
      while (iVar1 = iVar5, iVar6 != 0) {
        *(int *)(iVar1 + 0x1c) = iVar6;
        *(int *)(iVar1 + 0x18) = iVar2;
        iVar5 = *(int *)(iVar1 + 0x1c);
        iVar2 = iVar1;
        iVar6 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x18);
      }
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x18);
      *(int *)(iVar1 + 0x18) = iVar2;
      piVar3[1] = iVar1;
    }
  }
  return;
}


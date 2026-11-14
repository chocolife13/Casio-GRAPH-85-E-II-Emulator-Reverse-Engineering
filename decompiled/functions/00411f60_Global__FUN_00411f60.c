// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00411f60
// entry: 00411f60  size: 436


int * FUN_00411f60(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_4 [4];
  
  iVar3 = DAT_005d67e8;
  uVar4 = FUN_00411d60(local_4);
  if (uVar4 < param_1 + 8) {
    return (int *)0x0;
  }
  if ((param_1 & 3) != 0) {
    return (int *)0x0;
  }
  if (param_1 == 0) {
    return (int *)0x0;
  }
  iVar5 = *(int *)(iVar3 + 8);
  iVar1 = *(int *)(iVar3 + 0xc);
  if (iVar5 == iVar1) {
    piVar6 = (int *)(iVar1 + -8);
    *(int **)(iVar3 + 0xc) = piVar6;
    *(uint *)(iVar1 + -4) = param_1;
    *piVar6 = (int)piVar6 - param_1;
    *(uint *)(iVar3 + 8) = (int)piVar6 - param_1;
    FUN_00410170(*piVar6,0,param_1);
    return piVar6;
  }
  piVar6 = (int *)(DAT_005d67e8 + 0xfff8);
  piVar7 = piVar6;
  if (*(int **)(iVar3 + 0xc) <= piVar6) {
    do {
      if (*piVar7 == 0) break;
      piVar7 = piVar7 + -2;
    } while (*(int **)(iVar3 + 0xc) <= piVar7);
  }
  piVar2 = *(int **)(iVar3 + 0xc);
  if (piVar7 < piVar2) {
    FUN_004101a0(iVar5,iVar5 + -8,(int)piVar2 - iVar5);
    iVar5 = (iVar5 + -8) - param_1;
    *piVar7 = iVar5;
    piVar7[1] = param_1;
    FUN_00410170(iVar5,0,param_1);
    if (*(int **)(iVar3 + 0xc) <= piVar6) {
      do {
        if (*piVar6 != 0) {
          *piVar6 = *piVar6 + -8;
        }
        piVar6 = piVar6 + -2;
      } while (*(int **)(iVar3 + 0xc) <= piVar6);
    }
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -8;
    *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + (-8 - param_1);
    return piVar6;
  }
  if (piVar7 == piVar6) {
    FUN_004101a0(iVar5,iVar5 - param_1,(int)piVar2 - iVar5);
    iVar5 = *(int *)(iVar3 + 0xc) - param_1;
    *piVar7 = iVar5;
    piVar7[1] = param_1;
    FUN_00410170(iVar5,0,param_1);
    piVar6 = piVar7 + -2;
    if (*(int **)(iVar3 + 0xc) <= piVar6) {
      do {
        if (*piVar6 != 0) {
          *piVar6 = *piVar6 - param_1;
        }
        piVar6 = piVar6 + -2;
      } while (*(int **)(iVar3 + 0xc) <= piVar6);
      *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) - param_1;
      return piVar7;
    }
  }
  else {
    FUN_004101a0(iVar5,iVar5 - param_1,piVar7[2] - iVar5);
    *piVar7 = piVar7[2] - param_1;
    piVar7[1] = param_1;
    FUN_00410170(piVar7[2] - param_1,0,param_1);
    piVar6 = piVar7 + -2;
    if (*(int **)(iVar3 + 0xc) <= piVar6) {
      do {
        if (*piVar6 != 0) {
          *piVar6 = *piVar6 - param_1;
        }
        piVar6 = piVar6 + -2;
      } while (*(int **)(iVar3 + 0xc) <= piVar6);
    }
  }
  *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) - param_1;
  return piVar7;
}


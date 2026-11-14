// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b65f0
// entry: 004b65f0  size: 125


undefined4 FUN_004b65f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  
  *(undefined1 *)(param_2 + 8) = 0;
  pcVar8 = (char *)(param_2 + 7);
  iVar7 = 0;
  piVar6 = (int *)(param_1 + 8);
  do {
    iVar1 = piVar6[-2];
    if (((((iVar1 != 0) && (iVar1 != 1)) || ((iVar2 = piVar6[-1], iVar2 != 0 && (iVar2 != 1)))) ||
        ((iVar3 = *piVar6, iVar3 != 0 && (iVar3 != 1)))) ||
       ((iVar4 = piVar6[1], iVar4 != 0 && (iVar4 != 1)))) {
      return 1;
    }
    iVar1 = iVar1 + (iVar2 + (iVar3 + iVar4 * 2) * 2) * 2;
    cVar5 = (char)iVar1;
    if (iVar1 < 10) {
      cVar5 = cVar5 + '0';
    }
    else {
      cVar5 = cVar5 + '\x10';
    }
    *pcVar8 = cVar5;
    iVar7 = iVar7 + 4;
    piVar6 = piVar6 + 4;
    pcVar8 = pcVar8 + -1;
  } while (iVar7 < 0x20);
  return 0;
}


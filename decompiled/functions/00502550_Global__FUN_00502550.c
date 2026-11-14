// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00502550
// entry: 00502550  size: 396


undefined4 FUN_00502550(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char **ppcVar9;
  undefined4 *puVar10;
  char *local_40 [6];
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_4;
  
  if ((*(byte *)(param_1 + 0x8e0) & 0x30) != 0) {
    return 0xfffffffa;
  }
  iVar3 = FUN_004b7d80();
  if (iVar3 != 0) {
    pcVar4 = (char *)FUN_004b8050();
    cVar2 = *pcVar4;
    while (cVar2 == ' ') {
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar1;
    }
    cVar2 = *pcVar4;
    if ((cVar2 == 'Y') && (pcVar4[1] == '=')) {
      pcVar4 = pcVar4 + 2;
    }
    else if ((cVar2 == 'y') && (pcVar4[1] == '=')) {
      pcVar4 = pcVar4 + 2;
    }
    else if (((cVar2 == '\x7f') && (pcVar4[1] == -0x10)) && (pcVar4[2] == '=')) {
      pcVar4 = pcVar4 + 3;
    }
    iVar5 = FUN_004b8050();
    iVar3 = *(int *)(param_1 + 0x8dc);
    local_24 = 2;
    local_28 = 0x100;
    local_23 = 5;
    local_4 = 0;
    *(char ***)(param_1 + 0x8dc) = local_40;
    local_40[0] = pcVar4;
    iVar6 = FUN_00510270(param_1);
    *(int *)(param_1 + 0x8dc) = iVar3;
    if (iVar6 == 0) {
      iVar6 = iVar3 + 0x1c;
      iVar8 = 0;
      if (*(char *)(iVar3 + 0x1c) != '\0') {
        do {
          pcVar1 = (char *)(iVar6 + 0x20);
          iVar6 = iVar6 + 0x20;
          iVar8 = iVar8 + 1;
        } while (*pcVar1 != '\0');
        if (0x1d < iVar8) {
          return 0;
        }
      }
      iVar3 = FUN_004b8050(0x104,2);
      iVar3 = FUN_00517920(pcVar4 + (iVar3 - iVar5));
      if (iVar3 == 0) {
        iVar3 = FUN_004b8050();
        FUN_005178b0(pcVar4 + (iVar3 - iVar5));
        iVar8 = iVar8 * 0x20;
        ppcVar9 = local_40;
        puVar10 = (undefined4 *)(iVar8 + *(int *)(param_1 + 0x8dc));
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar10 = *ppcVar9;
          ppcVar9 = ppcVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined4 *)(iVar8 + 0x18 + *(int *)(param_1 + 0x8dc)) = 0x104;
        uVar7 = FUN_00517fb0();
        *(undefined4 *)(iVar8 + 8 + *(int *)(param_1 + 0x8dc)) = uVar7;
        *(undefined1 *)(iVar8 + 0x1e + *(int *)(param_1 + 0x8dc)) = 1;
        *(undefined1 *)(iVar8 + 0x3c + *(int *)(param_1 + 0x8dc)) = 0;
        return 0;
      }
      return 0xfffffffa;
    }
    FUN_0052b240(iVar6);
    FUN_00515dd0();
    return 0xfffffff5;
  }
  return 0xfffffffa;
}


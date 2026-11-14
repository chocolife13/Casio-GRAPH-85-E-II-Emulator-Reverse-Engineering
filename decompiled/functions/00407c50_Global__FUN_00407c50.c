// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407c50
// entry: 00407c50  size: 296


void __thiscall FUN_00407c50(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00566960(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (param_2 != (char *)0x0) {
    uVar10 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)FUN_00566937(~uVar10);
    uVar10 = 0xffffffff;
    *(char **)(param_1 + 0x1c) = pcVar5;
    do {
      pcVar12 = param_2;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar12 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar12;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar12 = pcVar12 + -uVar10;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar5 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar5 = pcVar5 + 1;
    }
    iVar6 = FUN_00553497(*(undefined4 *)(param_1 + 0x1c),&DAT_005a8d1c);
    if (iVar6 != 0) {
      FUN_00553f04(iVar6,&DAT_005a8e68,param_3);
      FUN_00560ccd(&param_3);
      puVar7 = (undefined4 *)FUN_00560ce0(0);
      uVar2 = *puVar7;
      iVar8 = FUN_00560ce0(0);
      uVar3 = *(undefined4 *)(iVar8 + 4);
      iVar8 = FUN_00560ce0(0);
      param_3 = *(undefined4 *)(iVar8 + 8);
      iVar8 = FUN_00560ce0(0);
      uVar4 = *(undefined4 *)(iVar8 + 0xc);
      iVar8 = FUN_00560ce0(0);
      iVar8 = *(int *)(iVar8 + 0x10);
      iVar9 = FUN_00560ce0(0);
      FUN_00553f04(iVar6,&DAT_005a8e38,*(int *)(iVar9 + 0x14) + 0x76c,iVar8 + 1,uVar4,param_3,uVar3,
                   uVar2);
      FUN_005533e9(iVar6);
    }
  }
  return;
}


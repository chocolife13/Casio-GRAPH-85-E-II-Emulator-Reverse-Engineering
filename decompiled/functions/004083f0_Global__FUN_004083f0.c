// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004083f0
// entry: 004083f0  size: 408


undefined4
FUN_004083f0(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  
  uVar8 = 0xffffffff;
  pcVar10 = param_1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00566937(~uVar8 + 9);
  uVar8 = 0xffffffff;
  pcVar10 = param_1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar9 = 0xffffffff;
  pcVar10 = s__replay_005a8ff0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00566937(~uVar8 + ~uVar9 + 8);
  uVar8 = 0xffffffff;
  pcVar10 = param_1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar9 = 0xffffffff;
  pcVar10 = s__error_005a8fe8;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar4 = FUN_00566937(~uVar8 + ~uVar9 + 8);
  uVar8 = 0xffffffff;
  do {
    pcVar10 = param_1;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar10 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar10;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar10 = pcVar10 + -uVar8;
  pcVar11 = pcVar2;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  FUN_00407fb0(pcVar2);
  uVar8 = 0xffffffff;
  pcVar10 = s__Cap_Screen_005a8dfc;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar5 = FUN_0055401d(~uVar8 + param_2);
  FUN_00553f40(uVar3,s__s_s__04d_bmp_005a8fd8,pcVar2,s__replay_005a8ff0,uVar5);
  FUN_00553f40(uVar4,s__s_s__04d_bmp_005a8fd8,pcVar2,s__error_005a8fe8,uVar5);
  FUN_00553f40(pcVar2,s__s__04d_bmp_005a8fcc,pcVar2,uVar5);
  FUN_00408f80(uVar3,param_3,param_4,param_5);
  iVar6 = FUN_00408590(pcVar2,uVar3,uVar4,param_3,param_4);
  FUN_00566960(uVar4);
  FUN_00566960(uVar3);
  FUN_00566960(pcVar2);
  if (iVar6 == 0) {
    FUN_00407d80(uVar5,1,1,0);
    return 1;
  }
  if (iVar6 == 2) {
    bVar7 = 1;
  }
  else {
    bVar7 = (iVar6 != 3) - 1U & 2;
  }
  FUN_00407d80(uVar5,0,1,bVar7);
  return 0;
}


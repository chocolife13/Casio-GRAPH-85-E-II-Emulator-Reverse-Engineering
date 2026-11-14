// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040f560
// entry: 0040f560  size: 399


void FUN_0040f560(char *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_118 [19];
  undefined1 auStack_105 [261];
  
  uVar7 = 0xffffffff;
  pcVar10 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = 0xffffffff;
  pcVar10 = s___bmp_005a94a4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar2 = FUN_00566937(~uVar7 + ~uVar8);
  uVar7 = 0xffffffff;
  pcVar10 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = 0xffffffff;
  pcVar10 = s___bmp_005a94a4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_00566937(~uVar7 + ~uVar8);
  iVar9 = -1;
  pcVar10 = param_1;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  if (iVar9 == -2) {
    FUN_00553f40(pcVar3,&DAT_005cd010);
  }
  else {
    uVar7 = 0xffffffff;
    pcVar10 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_1[~uVar7 - 2] == '\\') {
      FUN_00553f40(pcVar3,&DAT_005a92c4,param_1);
    }
    else {
      FUN_00553f40(pcVar3,&PTR_DAT_005a94a0,param_1);
    }
  }
  FUN_00553f40(uVar2,s__s__bmp_005a9498,pcVar3);
  iVar4 = FUN_005548ab(uVar2,local_118);
  iVar9 = 0;
  iVar5 = iVar4;
  while (iVar5 != -1) {
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_005a9490;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_0055c3c0(auStack_105 + 1,&DAT_005a9490,~uVar7 - 1);
    if (iVar5 == 0) {
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_005a9490;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_0055401d(auStack_105 + ~uVar7);
      if (iVar9 < iVar5) {
        iVar9 = iVar5;
      }
    }
    iVar5 = FUN_00554978(iVar4,local_118);
  }
  uVar7 = 0xffffffff;
  pcVar10 = pcVar3;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_005a9490;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = FUN_00566937(~uVar7 + ~uVar8 + 0x12);
  *param_2 = uVar6;
  FUN_00553f40(uVar6,s__s_s_05d_bmp_005a9480,pcVar3,&DAT_005a9490,iVar9 + 1);
  FUN_00566960(pcVar3);
  FUN_00566960(uVar2);
  return;
}


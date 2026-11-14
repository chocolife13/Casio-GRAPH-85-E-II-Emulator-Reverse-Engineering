// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00435560
// entry: 00435560  size: 1017


undefined4 FUN_00435560(int *param_1,undefined4 *param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 **ppuVar10;
  char *pcVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  uint *puVar16;
  int local_154;
  undefined4 local_150;
  uint local_14c [4];
  char *local_13c;
  char local_138 [16];
  undefined4 *local_128 [2];
  int local_120;
  int local_11c;
  undefined4 local_f8 [13];
  undefined4 local_c4 [49];
  
  local_154 = 2;
  ppuVar10 = local_128;
  iVar9 = 4;
  piVar1 = (int *)(param_1[1] + *(int *)(*param_1 + 4) * 8);
  puVar7 = local_c4;
  do {
    *ppuVar10 = puVar7;
    puVar14 = puVar7;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar14 = 0x20202020;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)(puVar7 + 0xc) = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 0x31);
    ppuVar10 = ppuVar10 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_0052f6f0(0xa9,local_f8);
  puVar7 = local_f8;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *local_128[0] = *puVar7;
    puVar7 = puVar7 + 1;
    local_128[0] = local_128[0] + 1;
  }
  FUN_0052f6f0(0xaa,local_f8);
  iVar9 = local_120;
  puVar7 = local_f8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *local_128[1] = *puVar7;
    puVar7 = puVar7 + 1;
    local_128[1] = local_128[1] + 1;
  }
  *(undefined1 *)(local_120 + 2) = 0x6d;
  *(undefined1 *)(local_120 + 5) = 0x3a;
  *(undefined1 *)(local_11c + 2) = 0x6e;
  *(undefined1 *)(local_11c + 5) = 0x3a;
  iVar3 = *piVar1;
  iVar8 = 1;
  if (iVar3 != 0) {
    iVar8 = iVar3;
  }
  iVar3 = piVar1[1];
  local_150 = 0;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  uVar4 = 0xffffffff;
  pcVar11 = "%-11d";
  do {
    pcVar15 = pcVar11;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar15 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar15;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar11 = pcVar15 + -uVar4;
  pcVar15 = local_138;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar15 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_00434ca0(iVar9 + 6,local_138,iVar8);
  FUN_00434ca0(local_11c + 6,local_138,iVar3);
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_00434b80(local_128,1,2,3,4);
  FUN_00434b80(&local_120,3,4,5,4);
  iVar9 = param_5;
switchD_00435854_caseD_7533:
  do {
    while( true ) {
      if (param_3 == 1) {
        param_3 = 0;
      }
      else {
        iVar9 = FUN_00526620(&param_4);
      }
      if (iVar9 != 0) break;
      switch(param_4) {
      case 0x7532:
      case 0x754d:
        uVar13 = 0;
        *param_2 = 0;
        param_2[1] = 0;
LAB_00435942:
        FUN_00523800(5);
        return uVar13;
      case 0x7534:
        uVar13 = FUN_0055401d(local_120 + 6);
        *param_2 = uVar13;
        uVar13 = FUN_0055401d(local_11c + 6);
        param_2[1] = uVar13;
        thunk_FUN_0040add0();
        iVar3 = FUN_00435990(param_1,param_2);
        if (iVar3 == 1) {
          uVar13 = 1;
          goto LAB_00435942;
        }
        break;
      case 0x7542:
      case 0x7547:
        FUN_00434bd0(local_128,2,3,&local_154,param_4);
        break;
      case 0x7545:
        local_14c[0] = 0;
        local_14c[1] = 0;
        local_14c[2] = 0;
        local_14c[3] = 0;
        uVar13 = FUN_0055401d((int)local_128[local_154] + 6);
        FUN_0055c2fe(uVar13,local_138,10);
        uVar4 = 0xffffffff;
        pcVar11 = local_138;
        do {
          pcVar15 = pcVar11;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar15 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar15;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        param_3 = 1;
        puVar12 = (uint *)(pcVar15 + -uVar4);
        puVar16 = local_14c;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar16 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        }
        iVar9 = 1;
        local_150 = 0;
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)puVar16 = (char)*puVar12;
          puVar12 = (uint *)((int)puVar12 + 1);
          puVar16 = (uint *)((int)puVar16 + 1);
        }
      }
    }
    if (param_4 != 0x7545) {
      if ((param_4 < 0x30) || (0x39 < param_4)) goto switchD_00435854_caseD_7533;
      local_150 = 1;
      local_14c[0] = param_4 & 0xff;
      local_14c[1] = 0;
      local_14c[2] = 0;
      local_14c[3] = 0;
    }
    FUN_00434b80(local_128 + local_154,3,local_154 + 2,local_154 + 2,0);
    while (iVar3 = FUN_00523b00(local_14c,9,local_154 + 2,3,local_150), iVar3 == 0) {
      iVar3 = FUN_004b7550(local_14c);
      if (iVar3 != 0) {
        uVar4 = FUN_0055401d(local_14c);
        if ((uVar4 != 0) && (uVar4 < 0x100)) {
          uVar5 = 0xffffffff;
          local_13c = local_138;
          pcVar11 = "%-11d";
          goto code_r0x004357af;
        }
        FUN_0052b240(8);
        local_150 = 0;
      }
    }
    iVar3 = local_154 + 2;
    FUN_00434b80(local_128 + local_154,3,iVar3,iVar3,iVar3);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    pcVar15 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar15;
    if (cVar2 == '\0') break;
code_r0x004357af:
    pcVar15 = pcVar11;
    if (uVar5 == 0) break;
  }
  uVar5 = ~uVar5;
  pcVar11 = pcVar15 + -uVar5;
  pcVar15 = local_13c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar15 = pcVar15 + 4;
  }
  puVar7 = local_128[local_154];
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar15 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_00434ca0((int)puVar7 + 6,local_138,uVar4);
  iVar3 = 3;
  if (local_154 != 2) {
    iVar3 = local_154;
  }
  FUN_00434b80(local_128 + local_154,3,local_154 + 2,iVar3 + 2,iVar3 + 2);
  local_154 = iVar3;
  goto switchD_00435854_caseD_7533;
}


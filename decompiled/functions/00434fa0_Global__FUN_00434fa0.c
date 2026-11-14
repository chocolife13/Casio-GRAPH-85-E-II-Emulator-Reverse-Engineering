// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434fa0
// entry: 00434fa0  size: 465


void FUN_00434fa0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [3];
  char local_40 [12];
  undefined1 local_34 [52];
  
  puVar2 = param_1;
  FUN_0052f6f0(0xa2,local_34);
  FUN_004b6ef0(*param_1,local_34);
  param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
  do {
    iVar4 = FUN_00528a20(param_1,&local_54,&local_50);
    if (iVar4 == 0) {
      uVar5 = 0xffffffff;
      pcVar9 = "%3d%c%3d ";
      do {
        pcVar11 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar11 + -uVar5;
      pcVar11 = (char *)(local_4c + 3);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00434d40(local_4c,local_4c + 3,local_54,local_50);
    }
    else {
      uVar5 = 0xffffffff;
      pcVar9 = "None    ";
      do {
        pcVar11 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar11 + -uVar5;
      pcVar11 = (char *)local_4c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_54 = 0;
      local_50 = 0;
    }
    if ((char)param_1 == '\0') {
      uVar5 = 0x1b;
    }
    else {
      uVar5 = (uint)param_1 & 0xff;
    }
    uVar6 = 0xffffffff;
    pcVar9 = "Mat ";
    do {
      pcVar11 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar9 = pcVar11 + -uVar6;
    pcVar11 = (char *)(local_4c + 3);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = FUN_004b6ca0(local_4c + 3);
    puVar8 = local_4c + 3;
    puVar10 = (undefined4 *)puVar2[uVar5];
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    if (uVar5 == 0x1b) {
      uVar6 = 0xffffffff;
      pcVar9 = "Ans";
      do {
        pcVar11 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar11 + -uVar6;
      pcVar11 = (char *)(local_4c + 3);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar6 = FUN_004b6ca0(local_4c + 3);
      puVar8 = (undefined4 *)puVar2[0x1b];
      puVar10 = local_4c + 3;
      for (uVar7 = uVar6 >> 2; puVar8 = puVar8 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *puVar10;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    else {
      *(char *)(puVar2[uVar5] + 4) = (char)uVar5 + '@';
    }
    *(undefined1 *)(puVar2[uVar5] + 0xc) = 0x3a;
    iVar4 = puVar2[uVar5];
    *(undefined4 *)(iVar4 + 0xd) = local_4c[0];
    *(undefined4 *)(iVar4 + 0x11) = local_4c[1];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[uVar5 * 2] = local_54;
    param_2[uVar5 * 2 + 1] = local_50;
    bVar3 = (char)param_1 + 1;
    param_1 = (undefined4 *)CONCAT31(param_1._1_3_,bVar3);
    if (0x1a < bVar3) {
      return;
    }
  } while( true );
}


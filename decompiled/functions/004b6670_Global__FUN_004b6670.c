// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b6670
// entry: 004b6670  size: 956


undefined4 FUN_004b6670(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 local_76;
  undefined1 local_75;
  uint local_74;
  undefined4 local_70;
  int local_6c [4];
  undefined1 local_5c [20];
  byte local_48 [2];
  uint local_46;
  char local_24 [36];
  
  pbVar7 = param_1;
  puVar11 = param_2;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    puVar11 = puVar11 + 1;
  }
  bVar1 = *param_1;
  local_76 = 0xbb;
  local_75 = 0;
  local_70 = 0;
  if ((bVar1 & 0xf) == 10) {
    uVar10 = 0;
    pbVar7 = local_48;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      pbVar7 = pbVar7 + 4;
    }
    pbVar7 = local_48;
    do {
      bVar2 = param_1[uVar10];
      *pbVar7 = bVar2 >> 4;
      uVar10 = uVar10 + 1;
      pbVar7[1] = bVar2 & 0xf;
      pbVar7 = pbVar7 + 2;
    } while (uVar10 < 9);
    iVar6 = 0;
    uVar10 = (local_46 & 0xff) + 3;
    local_6c[3] = 0;
    local_6c[2] = 0;
    local_6c[1] = 0;
    local_6c[0] = 0;
    local_74 = 0;
    if (2 < uVar10) {
      piVar9 = local_6c;
      do {
        bVar2 = local_48[uVar10];
        if (bVar2 == 10) {
          iVar6 = 0;
          local_74 = local_74 + 1;
          piVar9 = piVar9 + 1;
        }
        else {
          iVar5 = FUN_004b6a30(iVar6);
          iVar6 = iVar6 + 1;
          *piVar9 = *piVar9 + iVar5 * (uint)bVar2;
        }
        uVar10 = uVar10 - 1;
      } while (2 < uVar10);
      if (1 < local_74) {
        pcVar12 = local_24;
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar12[0] = '\0';
          pcVar12[1] = '\0';
          pcVar12[2] = '\0';
          pcVar12[3] = '\0';
          pcVar12 = pcVar12 + 4;
        }
        FUN_0055c387(local_6c[0] * local_6c[2] + local_6c[1],local_24,10);
        FUN_004b6e70(local_24,&local_76);
        FUN_0055c387(local_6c[0],local_5c,10);
        FUN_004b6e70(local_24,local_5c);
        uVar10 = FUN_004b6bd0(local_24);
        if (uVar10 < 0x10) {
          cVar4 = FUN_004b6bd0(local_24);
          pbVar7 = local_48;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            pbVar7[0] = 0;
            pbVar7[1] = 0;
            pbVar7[2] = 0;
            pbVar7[3] = 0;
            pbVar7 = pbVar7 + 4;
          }
          uVar10 = 0;
          do {
            cVar3 = local_24[uVar10];
            if (cVar3 == '\0') break;
            if (cVar3 == -0x45) {
              local_48[uVar10] = 10;
            }
            else {
              local_48[uVar10] = cVar3 - 0x30;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < 0x24);
          uVar10 = 2;
          *(byte *)((int)param_2 + 1) = (cVar4 + '\x0f') * '\x10' ^ local_48[0] & 0xf;
          pbVar7 = local_48 + 1;
          do {
            *(byte *)(uVar10 + (int)param_2) = *pbVar7 << 4;
            *(byte *)(uVar10 + (int)param_2) = *(byte *)(uVar10 + (int)param_2) | pbVar7[1] & 0xf;
            uVar10 = uVar10 + 1;
            pbVar7 = pbVar7 + 2;
          } while (uVar10 < 9);
        }
      }
    }
    local_70 = 1;
  }
  if ((bVar1 & 0x80) != 0) {
    *param_1 = *param_1 | 0x80;
  }
  if (((*param_1 & 0x80) != 0) && (pbVar7 = param_1 + 0xc, (param_1[0xc] & 0xf) == 10)) {
    pbVar8 = local_48;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      pbVar8 = pbVar8 + 4;
    }
    pbVar8 = local_48;
    do {
      bVar1 = *pbVar7;
      *pbVar8 = bVar1 >> 4;
      pbVar7 = pbVar7 + 1;
      pbVar8[1] = bVar1 & 0xf;
      pbVar8 = pbVar8 + 2;
    } while (pbVar7 + (-0xc - (int)param_1) < (byte *)0x9);
    iVar6 = 0;
    local_6c[3] = 0;
    uVar10 = (local_46 & 0xff) + 3;
    local_6c[2] = 0;
    local_6c[1] = 0;
    local_6c[0] = 0;
    local_74 = 0;
    if (2 < uVar10) {
      piVar9 = local_6c;
      do {
        bVar1 = local_48[uVar10];
        if (bVar1 == 10) {
          iVar6 = 0;
          local_74 = local_74 + 1;
          piVar9 = piVar9 + 1;
        }
        else {
          iVar5 = FUN_004b6a30(iVar6);
          *piVar9 = *piVar9 + iVar5 * (uint)bVar1;
          iVar6 = iVar6 + 1;
        }
        uVar10 = uVar10 - 1;
      } while (2 < uVar10);
      if (1 < local_74) {
        pcVar12 = local_24;
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar12[0] = '\0';
          pcVar12[1] = '\0';
          pcVar12[2] = '\0';
          pcVar12[3] = '\0';
          pcVar12 = pcVar12 + 4;
        }
        FUN_0055c387(local_6c[0] * local_6c[2] + local_6c[1],local_24,10);
        FUN_004b6e70(local_24,&local_76);
        FUN_0055c387(local_6c[0],local_5c,10);
        FUN_004b6e70(local_24,local_5c);
        uVar10 = FUN_004b6bd0(local_24);
        if (uVar10 < 0x10) {
          cVar4 = FUN_004b6bd0(local_24);
          pbVar7 = local_48;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            pbVar7[0] = 0;
            pbVar7[1] = 0;
            pbVar7[2] = 0;
            pbVar7[3] = 0;
            pbVar7 = pbVar7 + 4;
          }
          uVar10 = 0;
          do {
            cVar3 = local_24[uVar10];
            if (cVar3 == '\0') break;
            if (cVar3 == -0x45) {
              local_48[uVar10] = 10;
            }
            else {
              local_48[uVar10] = cVar3 - 0x30;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < 0x24);
          *(byte *)((int)param_2 + 0xd) = (cVar4 + '\x0f') * '\x10' ^ local_48[0] & 0xf;
          pbVar7 = (byte *)((int)param_2 + 0xe);
          pbVar8 = local_48 + 1;
          do {
            *pbVar7 = *pbVar8 << 4;
            *pbVar7 = *pbVar7 | pbVar8[1] & 0xf;
            pbVar7 = pbVar7 + 1;
            pbVar8 = pbVar8 + 2;
          } while (pbVar7 + (-0xc - (int)param_2) < (byte *)0x9);
          local_70 = 1;
        }
      }
    }
  }
  return local_70;
}


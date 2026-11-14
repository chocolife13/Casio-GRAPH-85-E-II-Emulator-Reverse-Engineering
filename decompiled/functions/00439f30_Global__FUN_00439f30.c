// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00439f30
// entry: 00439f30  size: 870


undefined4 FUN_00439f30(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  byte local_2c;
  byte bStack_2b;
  undefined2 uStack_2a;
  undefined1 local_24 [36];
  
  puVar3 = param_2;
  uVar11 = 0;
  uVar4 = FUN_004b8320();
  if (uVar4 == 0) {
    return 0;
  }
  uVar8 = param_2[10];
  if (uVar8 == 0) {
    if (param_1 == 0x7547) {
      param_2[10] = 1;
    }
    else {
      param_2[10] = uVar4;
    }
  }
  else if (param_1 == 0x7547) {
    if (uVar8 < uVar4) {
      param_2[10] = uVar8 + 1;
    }
    else {
LAB_00439f93:
      uVar11 = 0xffffffff;
    }
  }
  else {
    if ((param_1 != 0x7542) || (uVar8 < 2)) goto LAB_00439f93;
    param_2[10] = uVar8 - 1;
  }
  iVar5 = FUN_0043a2b0(param_1,uVar4,uVar11,param_2);
  if (iVar5 == 0) {
    param_2[7] = 1;
    param_2[0x15] = 1;
    FUN_00438a60(param_2);
    iVar5 = FUN_004b8440(param_2[10]);
    param_2[5] = iVar5 + 1;
    iVar5 = FUN_004071b0(param_2[0xb7],iVar5 + 0x100U & 0xffffff00);
    param_2[0xb7] = iVar5;
    if (iVar5 == 0) {
LAB_00439fed:
      FUN_0052b240(4);
      return 0xffffffff;
    }
    FUN_004b8550(param_2[10],iVar5);
    uVar4 = 0;
    iVar5 = 0;
    param_2[1] = 1;
    param_2[2] = 1;
    param_2[3] = 1;
    if (param_2[5] != 1) {
      do {
        iVar6 = FUN_004b7370(*(undefined1 *)(param_2[0xb7] + uVar4));
        if (iVar6 == 0) {
          bStack_2b = 0;
          local_2c = *(byte *)(param_2[0xb7] + uVar4);
          uVar4 = uVar4 + 1;
        }
        else {
          pbVar7 = (byte *)(param_2[0xb7] + uVar4);
          uVar4 = uVar4 + 2;
          bStack_2b = *pbVar7;
          local_2c = pbVar7[1];
        }
        FUN_004b79f0((uint)bStack_2b << 8 | CONCAT11(bStack_2b,local_2c) & 0xff,local_24);
        uVar8 = FUN_004b6ca0(local_24);
        iVar6 = param_2[1];
        param_2[1] = iVar6 + uVar8;
        iVar6 = FUN_004071b0(param_2[0xb6],iVar6 + uVar8 + 0xff & 0xffffff00);
        param_2[0xb6] = iVar6;
        if (iVar6 == 0) goto LAB_00439fed;
        uVar9 = 0;
        if (uVar8 != 0) {
          do {
            *(undefined1 *)(param_2[0xb6] + iVar5) = local_24[uVar9];
            iVar5 = iVar5 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
      } while (uVar4 < param_2[5] - 1);
    }
    *(undefined1 *)(param_2[1] + -1 + param_2[0xb6]) = 0;
    if (param_2[5] != 1) {
      puVar12 = param_2 + 0x18;
      puVar13 = puVar12;
      for (iVar5 = 0x49; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = 0x20202020;
        puVar13 = puVar13 + 1;
      }
      *(undefined2 *)puVar13 = 0x2020;
      iVar5 = 0;
      local_2c = 0;
      bStack_2b = 0;
      uStack_2a = 0;
      do {
        if (*(char *)(puVar3[0xb6] + iVar5) == '\0') break;
        iVar6 = 0;
        param_2 = (undefined4 *)0x0;
        do {
          cVar2 = *(char *)(puVar3[0xb6] + iVar5);
          if (cVar2 == '\0') break;
          iVar10 = FUN_004b6ab0(CONCAT31((int3)((uint)puVar3[0xb6] >> 8),cVar2));
          *(undefined1 *)((int)puVar12 + iVar6) = *(undefined1 *)(puVar3[0xb6] + iVar5);
          if (iVar10 == 0) {
            iVar5 = iVar5 + 1;
            cVar2 = *(char *)(puVar3[0xb6] + -1 + iVar5);
            if ((cVar2 == '\r') || (cVar2 == '\f')) {
              param_2 = (undefined4 *)0x15;
            }
          }
          else {
            iVar6 = iVar6 + 1;
            puVar1 = (undefined1 *)(puVar3[0xb6] + 1 + iVar5);
            iVar5 = iVar5 + 2;
            *(undefined1 *)((int)puVar12 + iVar6) = *puVar1;
          }
          param_2 = (undefined4 *)((int)param_2 + 1);
          iVar6 = iVar6 + 1;
        } while (param_2 < 0x15);
        puVar12 = (undefined4 *)((int)puVar12 + 0x2a);
        uVar4 = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c)) + 1;
        local_2c = (byte)uVar4;
        bStack_2b = (byte)(uVar4 >> 8);
        uStack_2a = (undefined2)(uVar4 >> 0x10);
      } while (uVar4 < 7);
      if (param_1 == 0x7544) {
        *puVar3 = 1;
        puVar3[2] = 1;
        puVar3[4] = 1;
        puVar3[7] = 1;
        puVar3[6] = 1;
        puVar3[0x16] = 1;
        puVar3[3] = 1;
        if (puVar3[5] != 1) {
          do {
            FUN_00439d70(puVar3[0xb6],0x7545,1,puVar3);
          } while (puVar3[4] != puVar3[5]);
        }
      }
      uVar4 = 0;
      puVar12 = puVar3 + 0x18;
      do {
        uVar4 = uVar4 + 1;
        FUN_005232d0(1,uVar4);
        FUN_00523470(puVar12,0x15);
        puVar12 = (undefined4 *)((int)puVar12 + 0x2a);
      } while (uVar4 < 7);
      puVar3[9] = 1;
    }
  }
  switch(param_1) {
  case 0x7542:
  case 0x7547:
    puVar3[4] = 1;
    *puVar3 = 1;
    puVar3[3] = 1;
    puVar3[6] = 1;
    puVar3[0x16] = 1;
    puVar3[7] = 1;
    FUN_005232d0(1,1);
    FUN_00523740();
    return 0;
  default:
    goto switchD_0043a231_caseD_7543;
  case 0x7544:
    uVar11 = puVar3[7];
    uVar14 = puVar3[6];
    break;
  case 0x7545:
    uVar11 = 1;
    puVar3[4] = 1;
    *puVar3 = 1;
    puVar3[3] = 1;
    puVar3[6] = 1;
    puVar3[0x16] = 1;
    puVar3[7] = 1;
    uVar14 = 1;
  }
  FUN_005232d0(uVar14,uVar11);
  FUN_00527030();
switchD_0043a231_caseD_7543:
  return 0;
}


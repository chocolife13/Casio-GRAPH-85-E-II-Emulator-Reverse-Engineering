// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ec130
// entry: 004ec130  size: 1181


undefined1 FUN_004ec130(byte param_1,undefined4 param_2,char *param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  ushort uVar10;
  short sVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  char local_81;
  int local_80;
  int local_7c;
  uint local_78;
  int *local_74;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  uint local_4c;
  undefined4 local_48 [18];
  uint uVar11;
  
  bVar8 = 1;
  cVar2 = FUN_00526090(0x2a);
  if (cVar2 != '\0') {
    bVar8 = 2;
  }
  local_81 = '\x01';
  if (param_1 == 2) {
    cVar2 = FUN_004ec5d0();
  }
  else {
    cVar2 = FUN_004ec8c0(param_2,local_48,&local_81);
  }
  if (cVar2 == '\0') {
    puVar5 = local_48;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)param_3 = *puVar5;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 4;
    }
    puVar5 = local_48;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *param_4 = *puVar5;
      puVar5 = puVar5 + 1;
      param_4 = param_4 + 1;
    }
    return 0;
  }
  local_78 = CONCAT31(local_78._1_3_,param_1);
  if (param_1 == 2) {
    if ((bVar8 == 1) && (local_81 == '\x02')) {
      uVar15 = 0x23;
      goto LAB_004ec22a;
    }
  }
  else if ((bVar8 == 1) && (local_81 == '\x02')) {
    local_78 = CONCAT31(local_78._1_3_,1);
  }
  iVar6 = FUN_0052f820();
  if (iVar6 == 0) {
    piVar13 = (int *)(local_78 & 0xff);
    local_58 = piVar13;
    piVar4 = (int *)FUN_004ad630((int)piVar13 * 0x18);
    if (piVar4 != (int *)0x0) {
      local_50 = piVar4;
      local_74 = (int *)FUN_004ad630((int)piVar13 * 0x18);
      if (local_74 == (int *)0x0) {
        FUN_004ad6d0(piVar4);
        FUN_004e5630(4,local_70);
        puVar5 = local_70;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)param_3 = *puVar5;
          puVar5 = puVar5 + 1;
          param_3 = param_3 + 4;
        }
        puVar5 = local_70;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *param_4 = *puVar5;
          puVar5 = puVar5 + 1;
          param_4 = param_4 + 1;
        }
        return 0;
      }
      local_7c = 0;
      if ((byte)local_78 != '\0') {
        local_80 = param_1 - 1;
        do {
          sVar12 = (short)local_80;
          puVar5 = local_48 + sVar12 * 6;
          FUN_004e3e70(puVar5,puVar5);
          iVar6 = FUN_004e4020(puVar5);
          if (iVar6 != 0) {
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(local_74);
            puVar5 = local_48 + sVar12 * 6;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined4 *)param_3 = *puVar5;
              puVar5 = puVar5 + 1;
              param_3 = param_3 + 4;
            }
            puVar5 = local_48 + sVar12 * 6;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *param_4 = *puVar5;
              puVar5 = puVar5 + 1;
              param_4 = param_4 + 1;
            }
            return 0;
          }
          puVar14 = (undefined4 *)(*piVar4 + (short)local_7c * 0x18);
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar14 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar14 = puVar14 + 1;
          }
          local_7c = local_7c + 1;
          local_80 = local_80 + -1;
          piVar13 = local_58;
        } while ((short)local_7c < (short)(ushort)(byte)local_78);
      }
      piVar1 = local_74;
      FUN_004e5780(local_70);
      bVar3 = FUN_004ed0e0(piVar4,piVar1,piVar13,local_70);
      local_78 = CONCAT31(local_78._1_3_,bVar3);
      uVar10 = (ushort)bVar3;
      uVar11 = (uint)uVar10;
      local_4c = CONCAT22(local_4c._2_2_,uVar10);
      piVar13 = (int *)FUN_004ad630(bVar8 * uVar11 * 0xc);
      local_54 = piVar13;
      if (piVar13 != (int *)0x0) {
        local_58 = (int *)FUN_004ad630(uVar11 * 0xc);
        iVar6 = 0;
        if (local_58 != (int *)0x0) {
          if (uVar10 != 0) {
            local_7c = (int)(short)uVar10;
            local_80 = 0;
            iVar9 = 0;
            do {
              puVar5 = (undefined4 *)(*local_50 + iVar6);
              puVar14 = local_70;
              for (iVar7 = 6; piVar4 = local_58, iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar14 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar14 = puVar14 + 1;
              }
              puVar5 = (undefined4 *)(iVar9 + *local_54);
              *puVar5 = local_70[0];
              puVar5[1] = local_70[1];
              puVar5[2] = local_70[2];
              if (bVar8 == 2) {
                puVar5 = (undefined4 *)(*local_54 + ((local_78 & 0xff) + local_80) * 0xc);
                *puVar5 = local_70[3];
                puVar5[1] = local_60;
                puVar5[2] = local_5c;
              }
              puVar5 = (undefined4 *)(*local_74 + iVar6);
              iVar6 = iVar6 + 0x18;
              puVar14 = local_70;
              for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar14 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar14 = puVar14 + 1;
              }
              puVar5 = (undefined4 *)(iVar9 + *piVar4);
              local_80 = local_80 + 1;
              iVar9 = iVar9 + 0xc;
              *puVar5 = local_70[0];
              puVar5[1] = local_70[1];
              puVar5[2] = local_70[2];
              local_7c = local_7c + -1;
            } while (local_7c != 0);
            local_7c = 0;
            piVar4 = local_50;
            uVar11 = local_4c;
            piVar13 = local_54;
          }
          FUN_004ad6d0(piVar4);
          FUN_004ad6d0(local_74);
          *(short *)(param_3 + 2) = (short)uVar11;
          param_3[4] = '\x01';
          param_3[5] = '\0';
          *param_3 = (-(bVar8 != 1) & 0x80U) + 0x30;
          *(int **)(param_3 + 8) = piVar13;
          *(short *)((int)param_4 + 2) = (short)uVar11;
          *(undefined1 *)param_4 = 0x30;
          *(undefined2 *)(param_4 + 1) = 1;
          param_4[2] = local_58;
          return 1;
        }
        FUN_004ad6d0(piVar4);
        FUN_004ad6d0(local_74);
        FUN_004ad6d0(piVar13);
        FUN_004e5630(4,local_70);
        puVar5 = local_70;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)param_3 = *puVar5;
          puVar5 = puVar5 + 1;
          param_3 = param_3 + 4;
        }
        puVar5 = local_70;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *param_4 = *puVar5;
          puVar5 = puVar5 + 1;
          param_4 = param_4 + 1;
        }
        return 0;
      }
      FUN_004ad6d0(piVar4);
      FUN_004ad6d0(local_74);
      FUN_004e5630(4,local_70);
      puVar5 = local_70;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)param_3 = *puVar5;
        puVar5 = puVar5 + 1;
        param_3 = param_3 + 4;
      }
      puVar5 = local_70;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *param_4 = *puVar5;
        puVar5 = puVar5 + 1;
        param_4 = param_4 + 1;
      }
      return 0;
    }
    uVar15 = 4;
    local_50 = (int *)0x0;
  }
  else {
    uVar15 = 1;
  }
LAB_004ec22a:
  FUN_004e5630(uVar15,local_70);
  puVar5 = local_70;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)param_3 = *puVar5;
    puVar5 = puVar5 + 1;
    param_3 = param_3 + 4;
  }
  puVar5 = local_70;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_4 = *puVar5;
    puVar5 = puVar5 + 1;
    param_4 = param_4 + 1;
  }
  return 0;
}


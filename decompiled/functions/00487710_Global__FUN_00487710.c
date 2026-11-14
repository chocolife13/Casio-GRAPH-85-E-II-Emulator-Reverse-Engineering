// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00487710
// entry: 00487710  size: 802


void FUN_00487710(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined4 *local_14;
  undefined2 local_10;
  ushort uStack_e;
  ushort local_c;
  ushort uStack_a;
  undefined4 local_8;
  int local_4;
  
  iVar11 = param_2;
  iVar6 = FUN_00486470(param_2,param_3);
  if ((iVar6 != 0) &&
     ((puVar7 = param_4, param_4 != (undefined4 *)0x0 ||
      (puVar7 = (undefined4 *)FUN_004869c0(param_1), puVar7 != (undefined4 *)0x0)))) {
    local_10 = (undefined2)*puVar7;
    uStack_e = (ushort)((uint)*puVar7 >> 0x10);
    param_4 = (undefined4 *)puVar7[1];
    local_c = (ushort)param_4;
    uStack_a = (ushort)((uint)param_4 >> 0x10);
    local_8._0_2_ = (undefined2)puVar7[2];
    local_8._2_2_ = (undefined2)((uint)puVar7[2] >> 0x10);
    local_4 = puVar7[3];
    if (param_5 == 0) {
      param_4 = (undefined4 *)CONCAT22(local_c,uStack_e);
      param_2 = 0x10;
    }
    else if (param_5 == 1) {
      param_4 = (undefined4 *)CONCAT22((undefined2)local_8,uStack_a);
      param_2 = ((int)(short)local_c + (int)(short)uStack_e) * 4 + 0x10;
    }
    else {
      if (param_5 != 2) {
        return;
      }
      param_2 = (short)uStack_e * 4 + 0x10;
    }
    iVar6 = (int)(short)param_4;
    if ((iVar11 <= iVar6) && (0 < param_3)) {
      if (iVar6 < iVar11 + -1 + param_3) {
        param_3 = (iVar6 - iVar11) + 1;
      }
      iVar1 = iVar11 + -1 + param_3;
      bVar14 = iVar6 == iVar1;
      uVar12 = 0;
      if (iVar11 <= iVar1) {
        piVar9 = (int *)(param_2 + iVar11 * 4 + -4 + (int)puVar7);
        iVar6 = (iVar1 - iVar11) + 1;
        do {
          uVar12 = uVar12 + *piVar9;
          piVar9 = piVar9 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_14 = puVar7;
      uVar8 = FUN_00486fd0(param_1,iVar11,param_5,&local_14);
      if ((uVar8 != 0) && (cVar5 = FUN_004acb90(uVar12 & 0xffff,uVar8 & 0xffff), cVar5 == '\0')) {
        local_10 = (undefined2)*puVar7;
        uStack_e = (ushort)((uint)*puVar7 >> 0x10);
        local_c = (ushort)puVar7[1];
        uStack_a = (ushort)((uint)puVar7[1] >> 0x10);
        local_8 = puVar7[2];
        local_4 = puVar7[3];
        sVar2 = (short)iVar11;
        if (param_5 == 0) {
          local_8 = local_8 - uVar12;
          if (bVar14) {
            uStack_e = sVar2 - 1;
          }
        }
        else if (param_5 == 2) {
          local_4 = local_4 - uVar12;
          if (bVar14) {
            local_c = sVar2 - 1;
          }
        }
        else if ((param_5 == 1) && (bVar14)) {
          uStack_a = sVar2 - 1;
        }
        *puVar7 = CONCAT22(uStack_e,local_10);
        puVar7[1] = CONCAT22(uStack_a,local_c);
        puVar7[2] = local_8;
        puVar7[3] = local_4;
        if (bVar14) {
          cVar5 = FUN_004acb90(param_3 * 4 & 0xffff,param_2 + 0xfffc + iVar11 * 4 & 0xffff);
          if (cVar5 != '\0') {
            return;
          }
        }
        else if (iVar11 <= iVar1) {
          puVar13 = (undefined4 *)(param_2 + iVar11 * 4 + -4 + (int)puVar7);
          for (iVar6 = (iVar1 - iVar11) + 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
        }
        if (param_5 == 0) {
          param_4 = (undefined4 *)CONCAT22(local_c,uStack_e);
          param_2 = 0x10;
        }
        else if (param_5 == 1) {
          param_4 = (undefined4 *)(uint)uStack_a;
          param_2 = ((int)(short)local_c + (int)(short)uStack_e) * 4 + 0x10;
        }
        else if (param_5 == 2) {
          param_4 = (undefined4 *)CONCAT22(uStack_a,local_c);
          param_2 = (short)uStack_e * 4 + 0x10;
        }
        iVar6 = (int)(short)param_4;
        iVar11 = iVar6;
        if (0 < iVar6) {
          piVar9 = (int *)(param_2 + iVar6 * 4 + -4 + (int)puVar7);
          do {
            if (*piVar9 != 0) break;
            iVar11 = iVar11 + -1;
            piVar9 = piVar9 + -1;
          } while (0 < iVar11);
        }
        if (iVar6 != iVar11 && -1 < iVar6 - iVar11) {
          cVar5 = FUN_004acb90((iVar11 * 0x3fff + (int)param_4 & 0x3fffU) << 2,
                               param_2 + iVar11 * 4 & 0xffff);
          if (cVar5 == '\0') {
            uVar10 = (ushort)iVar11;
            uVar3 = uVar10;
            uVar4 = local_c;
            if (((param_5 != 0) && (uVar3 = uStack_e, uVar4 = uVar10, param_5 != 2)) &&
               (uVar4 = local_c, param_5 == 1)) {
              uStack_a = uVar10;
            }
            local_c = uVar4;
            uStack_e = uVar3;
            *puVar7 = CONCAT22(uStack_e,local_10);
            puVar7[1] = CONCAT22(uStack_a,local_c);
            puVar7[2] = local_8;
            puVar7[3] = local_4;
          }
        }
      }
    }
  }
  return;
}


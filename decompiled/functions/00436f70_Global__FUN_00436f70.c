// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00436f70
// entry: 00436f70  size: 1228


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00436f70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  uint local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  int local_8c;
  int local_88;
  undefined1 local_84 [4];
  int local_80;
  undefined1 local_7c [24];
  undefined1 local_64 [100];
  
  FUN_004b6ef0(local_64,param_2);
  local_80 = FUN_004b6f30(local_64,0xd);
  iVar6 = -(uint)(local_80 != 0) + 5;
  if ((param_1[1] + 4 == param_1[3]) && (iVar6 == 4)) {
    param_1[1] = param_1[1] + 1;
  }
  local_8c = iVar6;
  FUN_00437440(param_1,-(uint)(local_80 != 0) + 6);
  FUN_005232d0(1,1);
  if (*param_1 == 0) {
    local_c0 = DAT_0057f01a;
    local_bc = DAT_0057f01e;
    local_b8 = DAT_0057f022;
    FUN_00523a20(1,1,&local_c0,0x20);
  }
  else {
    local_bc = DAT_0057efd8;
    local_b8 = DAT_0057efdc;
    local_c0 = CONCAT31((int3)((uint)DAT_0057efd4 >> 8),(char)*param_1 + (char)DAT_0057efd4 + -1);
    FUN_005233e0(&local_c0);
    local_c0 = DAT_0057efde;
    local_bc = CONCAT31(local_bc._1_3_,DAT_0057efe2);
    FUN_00523a20(3,1,&local_c0,0x20);
  }
  if (param_1[2] == 1) {
    local_c0 = DAT_0057efe8;
    local_bc = DAT_0057efec;
    local_b8 = DAT_0057eff0;
  }
  else {
    local_c0 = DAT_0057f006;
    local_bc = DAT_0057f00a;
    local_b8 = DAT_0057f00e;
  }
  FUN_00523a60(0xc,1,&local_c0,0x20);
  iVar8 = param_1[2];
  if (iVar8 <= param_1[6]) {
    do {
      if (param_1[2] + 4 <= iVar8) break;
      FUN_0055c2fe(iVar8,local_84,10);
      if (iVar8 < 10) {
        local_c0 = DAT_0057efe8;
        local_bc = DAT_0057efec;
        local_b8 = DAT_0057eff0;
      }
      else if (iVar8 < 100) {
        local_c0 = DAT_0057efde;
        local_bc = _DAT_0057efe2;
        local_b8 = DAT_0057efe6;
      }
      else {
        local_c0 = local_c0 & 0xffffff00;
      }
      FUN_004b6e70(&local_c0,local_84);
      if (iVar8 == param_1[2] + 3) {
        if (iVar8 < param_1[6]) {
          iVar2 = FUN_004b6ca0(&local_c0);
          puVar3 = (undefined4 *)((int)&local_c0 + iVar2);
          *puVar3 = DAT_0057f010;
          *(undefined4 *)((int)&local_bc + iVar2) = DAT_0057f014;
          uVar5 = DAT_0057f018;
        }
        else {
          iVar2 = FUN_004b6ca0(&local_c0);
          puVar3 = (undefined4 *)((int)&local_c0 + iVar2);
          *puVar3 = DAT_0057eff2;
          *(undefined4 *)((int)&local_bc + iVar2) = DAT_0057eff6;
          uVar5 = DAT_0057effa;
        }
      }
      else {
        iVar2 = FUN_004b6ca0(&local_c0);
        puVar3 = (undefined4 *)((int)&local_c0 + iVar2);
        *puVar3 = DAT_0057f024;
        *(undefined4 *)((int)&local_bc + iVar2) = DAT_0057f028;
        uVar5 = DAT_0057f02c;
      }
      *(undefined2 *)(puVar3 + 2) = uVar5;
      FUN_00523a60((iVar8 - param_1[2]) * 0x1c + 0x14,1,&local_c0,0x20);
      iVar8 = iVar8 + 1;
    } while (iVar8 <= param_1[6]);
  }
  local_bc = DAT_0057f032;
  iVar4 = param_1[2];
  local_c0 = DAT_0057f02e;
  local_b8 = DAT_0057f036;
  iVar2 = iVar4 + 4;
  bVar9 = SBORROW4(iVar8,iVar2);
  iVar1 = iVar8 - iVar2;
  if (iVar8 <= iVar2) {
    do {
      if (bVar9 == iVar1 < 0) break;
      FUN_00523a20((iVar8 - iVar4) * 7 + 5,1,&local_c0,0x20);
      iVar4 = param_1[2];
      iVar8 = iVar8 + 1;
      iVar2 = iVar4 + 4;
      bVar9 = SBORROW4(iVar8,iVar2);
      iVar1 = iVar8 - iVar2;
    } while (iVar8 <= iVar2);
  }
  iVar2 = param_1[1];
  iVar4 = 1;
  iVar8 = 1;
  if (0 < (param_1[5] - iVar2) + 1) {
    do {
      iVar8 = iVar4;
      if (iVar6 < iVar4) break;
      iVar8 = iVar4 + 1;
      FUN_004374e0(1,iVar8,iVar2 + -1 + iVar4);
      iVar6 = 1;
      local_88 = 0xb;
      do {
        if (param_1[6] < param_1[2] + iVar6 + -1) break;
        FUN_00528ac0(CONCAT31((int3)((uint)local_7c >> 8),(char)*param_1),param_1[1] + -1 + iVar4,
                     param_1[2] + iVar6 + -1,local_7c);
        if ((param_1[4] == param_1[2] + -1 + iVar6) && (param_1[3] == param_1[1] + -1 + iVar4)) {
          cVar7 = (-(iVar4 != 1) & 0x10U) + 0x12;
        }
        else {
          cVar7 = (-(iVar4 != 1) & 0x10U) + 0x10;
        }
        FUN_00437750(local_7c,&local_c0);
        iVar2 = local_88;
        FUN_00523a20(local_88 + -6,iVar8,&local_c0,cVar7);
        if (param_1[2] + -1 + iVar6 != param_1[6]) {
          local_c0 = CONCAT22(local_c0._2_2_,(undefined2)DAT_0057efde);
          FUN_00523a20(iVar2,iVar8,&local_c0,0x20);
        }
        local_88 = iVar2 + 7;
        iVar6 = iVar6 + 1;
      } while (local_88 < 0x21);
      local_c0 = DAT_0057f02e;
      local_bc = DAT_0057f032;
      local_b8 = DAT_0057f036;
      if (iVar6 < 5) {
        iVar6 = iVar6 * 7 + -2;
        do {
          FUN_00523a20(iVar6,iVar8,&local_c0,0x20);
          iVar6 = iVar6 + 7;
        } while (iVar6 < 0x1b);
      }
      iVar2 = param_1[1];
      iVar6 = local_8c;
      iVar4 = iVar8;
    } while (iVar8 <= (param_1[5] - iVar2) + 1);
  }
  local_c0 = CONCAT22(local_c0._2_2_,DAT_0057f038);
  if (iVar8 <= iVar6) {
    iVar2 = (iVar6 - iVar8) + 1;
    do {
      iVar8 = iVar8 + 1;
      FUN_005232d0(1,iVar8);
      FUN_00523470(&local_c0,0x15);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 != 0) {
    FUN_004377e0(iVar6,local_64,local_80);
  }
  return iVar6;
}


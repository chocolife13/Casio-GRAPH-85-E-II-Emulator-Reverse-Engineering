// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044b890
// entry: 0044b890  size: 719


void FUN_0044b890(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *local_4c;
  undefined2 *local_44;
  undefined2 *local_40;
  undefined2 *local_3c;
  undefined2 *local_34;
  undefined2 *local_30;
  undefined2 *local_2c;
  undefined1 local_24 [36];
  
  puVar5 = param_1;
  bVar3 = false;
  bVar4 = false;
  local_4c = *(undefined2 **)(param_1 + 0x10e);
  local_40 = *(undefined2 **)(param_1 + 0x110);
  if ((int)local_40 < 1) {
    local_40 = (undefined2 *)0x1;
    local_4c = (undefined2 *)0x1;
  }
  else if (6 < (int)local_40) {
    local_40 = (undefined2 *)0x6;
    local_4c = (undefined2 *)0x16;
  }
  if (*(uint *)(param_1 + 0x112) < *(uint *)(param_1 + 0x10c)) {
    local_2c = *(undefined2 **)(param_1 + 0x114);
    local_30 = *(undefined2 **)(param_1 + 0x116);
    local_3c = local_4c;
    puVar8 = local_4c;
  }
  else {
    local_2c = local_4c;
    iVar6 = FUN_0044e420(*(uint *)(param_1 + 0x112),param_1,local_24);
    local_3c = (undefined2 *)(iVar6 + (int)*(undefined2 **)(puVar5 + 0x114));
    local_30 = local_40;
    if ((int)local_3c < 0x16) {
      puVar8 = *(undefined2 **)(puVar5 + 0x114);
      local_40 = *(undefined2 **)(puVar5 + 0x116);
    }
    else if (*(int *)(puVar5 + 0x116) == 6) {
      local_3c = (undefined2 *)0x16;
      puVar8 = (undefined2 *)0x0;
      local_40 = (undefined2 *)0x6;
    }
    else {
      local_3c = (undefined2 *)((uint)local_3c % 0x15);
      puVar8 = (undefined2 *)(*(int *)(puVar5 + 0x116) + 1);
      local_40 = puVar8;
    }
  }
  local_34 = puVar5;
  puVar10 = (undefined2 *)0x1;
  do {
    puVar1 = (undefined2 *)((int)puVar10 + 1);
    puVar9 = (undefined2 *)0x1;
    local_44 = local_34;
    do {
      iVar6 = FUN_004b6ab0(CONCAT31((int3)((uint)puVar8 >> 8),*(undefined1 *)local_44));
      if (iVar6 == 0) {
        param_1 = (undefined2 *)
                  (CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)local_44) & 0xffff00ff);
      }
      else {
        uVar2 = *local_44;
        local_44 = (undefined2 *)((int)local_44 + 1);
        param_1 = (undefined2 *)(CONCAT22((short)((uint)param_1 >> 0x10),uVar2) & 0xff00ffff);
      }
      if ((puVar10 == local_30) && (puVar9 == local_2c)) {
        bVar3 = true;
      }
      if ((puVar10 == local_40) && (puVar9 == local_3c)) {
        bVar3 = false;
      }
      FUN_005232d0(puVar9,puVar1);
      if (bVar3) {
        FUN_00523400(&param_1);
LAB_0044bae0:
      }
      else {
        puVar8 = *(undefined2 **)(puVar5 + 0x110);
        if (((int)puVar8 < 1) || (6 < (int)puVar8)) {
          FUN_005233e0(&param_1);
          goto LAB_0044bae0;
        }
        puVar7 = (undefined2 *)(*(int *)(puVar5 + 0x120) + (int)local_4c);
        if ((int)puVar7 < 0x16) {
          if (puVar10 == puVar8) {
            if (puVar9 == local_4c) {
              bVar4 = true;
            }
            if (puVar9 == puVar7) {
              bVar4 = false;
              FUN_005233e0(&param_1);
              goto LAB_0044babd;
            }
          }
LAB_0044baa0:
          if (bVar4) {
            FUN_00523400(&param_1);
          }
          else {
            FUN_005233e0(&param_1);
          }
        }
        else {
          if ((puVar10 == puVar8) && (puVar9 == local_4c)) {
            bVar4 = true;
          }
          if (((undefined2 *)((int)puVar8 + 1U) != puVar10) ||
             (puVar9 != (undefined2 *)((int)puVar7 % 0x15))) goto LAB_0044baa0;
          bVar4 = false;
          FUN_005233e0(&param_1);
        }
LAB_0044babd:
        if (((char)param_1 == '\f') || ((char)param_1 == '\r')) {
          bVar4 = false;
        }
      }
      puVar9 = (undefined2 *)((int)puVar9 + 1);
      if (((char)param_1 == '\f') || ((char)param_1 == '\r')) {
        param_1 = (undefined2 *)CONCAT22(param_1._2_2_,0x20);
        if ((puVar10 == local_40) && (puVar9 == local_3c)) {
          bVar3 = false;
        }
        for (; puVar9 < (undefined2 *)0x16; puVar9 = (undefined2 *)((int)puVar9 + 1)) {
          FUN_005232d0(puVar9,puVar1);
          FUN_005233e0(&param_1);
        }
      }
      puVar8 = (undefined2 *)((int)local_44 + 1);
      local_44 = puVar8;
    } while (puVar9 < (undefined2 *)0x16);
    puVar8 = local_34 + 0x15;
    puVar10 = puVar1;
    local_34 = puVar8;
    if ((undefined2 *)0x6 < puVar1) {
      return;
    }
  } while( true );
}


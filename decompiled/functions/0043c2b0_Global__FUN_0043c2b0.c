// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043c2b0
// entry: 0043c2b0  size: 614


void FUN_0043c2b0(uint param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_34;
  uint local_30;
  undefined1 local_2c;
  byte bStack_2b;
  undefined2 uStack_2a;
  undefined1 local_24 [36];
  
  uVar4 = param_1;
  if (*(uint *)(param_1 + 0x2e8) < *(uint *)(param_1 + 0x2e0)) {
    local_30 = *(uint *)(param_1 + 0x2ec);
    iVar6 = *(int *)(param_1 + 0x2e4) + -1;
    local_2c = (undefined1)iVar6;
    bStack_2b = (byte)((uint)iVar6 >> 8);
    uStack_2a = (undefined2)((uint)iVar6 >> 0x10);
  }
  else {
    iVar5 = FUN_004b7370(*(undefined1 *)
                          (*(int *)(param_1 + 0x2dc) + -1 + *(uint *)(param_1 + 0x2e8)));
    local_30 = *(uint *)(uVar4 + 0x2e4);
    iVar6 = *(int *)(uVar4 + 0x2dc);
    iVar3 = *(int *)(uVar4 + 0x2e8);
    if (iVar5 == 0) {
      local_2c = *(undefined1 *)(iVar6 + -1 + iVar3);
      bStack_2b = 0;
    }
    else {
      bStack_2b = *(byte *)(iVar3 + -1 + iVar6);
      local_2c = *(undefined1 *)(iVar3 + iVar6);
    }
    FUN_004b79f0((uint)bStack_2b << 8 | CONCAT11(bStack_2b,local_2c) & 0xff,local_24);
    iVar6 = FUN_004b6ca0(local_24);
    iVar6 = iVar6 + -1 + *(int *)(uVar4 + 0x2ec);
    local_2c = (undefined1)iVar6;
    bStack_2b = (byte)((uint)iVar6 >> 8);
    uStack_2a = (undefined2)((uint)iVar6 >> 0x10);
  }
  iVar3 = *(int *)(uVar4 + 0xc);
  iVar6 = (*(int *)(uVar4 + 8) - iVar3) + 1;
  if ((iVar6 - iVar3) + 7U < 7) {
    iVar6 = 1;
    uVar9 = iVar3 * 2 - *(int *)(uVar4 + 8);
  }
  else {
    if (iVar3 != 1) {
      iVar6 = (iVar6 - iVar3) + 1;
    }
    uVar9 = 1;
  }
  uVar7 = FUN_0043c1d0(iVar6,uVar4);
  local_34 = 1;
  if (uVar9 < 8) {
    uVar8 = uVar7 + 1;
    do {
      if (*(int *)(uVar4 + 4) - 1U <= uVar7) {
        return;
      }
      param_1 = param_1 & 0xff000000;
      FUN_005232d0(local_34,uVar9);
      if ((uVar8 < local_30) || (CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c)) < uVar8)) {
        iVar6 = FUN_004b6ab0(*(undefined1 *)(*(int *)(uVar4 + 0x2d8) + uVar7));
        if (iVar6 == 0) {
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + 1;
          param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(*(int *)(uVar4 + 0x2d8) + -1 + uVar7));
          cVar2 = *(char *)(*(int *)(uVar4 + 0x2d8) + -1 + uVar7);
          if ((cVar2 == '\r') || (cVar2 == '\f')) {
            local_34 = 0x16;
          }
        }
        else {
          puVar1 = (undefined1 *)(*(int *)(uVar4 + 0x2d8) + uVar7);
          iVar6 = *(int *)(uVar4 + 0x2d8) + uVar7;
          uVar7 = uVar7 + 2;
          uVar8 = uVar8 + 2;
          param_1._0_2_ = CONCAT11(*(undefined1 *)(iVar6 + 1),*puVar1);
        }
        if ((uVar7 < *(uint *)(uVar4 + 0x2e4)) ||
           (*(int *)(uVar4 + 0x50) + *(uint *)(uVar4 + 0x2e4) <= uVar7)) {
          FUN_005233e0(&param_1);
        }
        else {
          FUN_00523400(&param_1);
        }
      }
      else {
        iVar6 = FUN_004b6ab0(*(undefined1 *)(*(int *)(uVar4 + 0x2d8) + uVar7));
        if (iVar6 == 0) {
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + 1;
          param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(*(int *)(uVar4 + 0x2d8) + -1 + uVar7));
          cVar2 = *(char *)(*(int *)(uVar4 + 0x2d8) + -1 + uVar7);
          if ((cVar2 == '\r') || (cVar2 == '\f')) {
            local_34 = 0x16;
            FUN_00523400(&param_1);
            goto LAB_0043c4eb;
          }
        }
        else {
          puVar1 = (undefined1 *)(*(int *)(uVar4 + 0x2d8) + uVar7);
          iVar6 = *(int *)(uVar4 + 0x2d8) + uVar7;
          uVar7 = uVar7 + 2;
          uVar8 = uVar8 + 2;
          param_1._0_2_ = CONCAT11(*(undefined1 *)(iVar6 + 1),*puVar1);
        }
        FUN_00523400(&param_1);
      }
LAB_0043c4eb:
      local_34 = local_34 + 1;
      if (0x15 < local_34) {
        local_34 = 1;
        uVar9 = uVar9 + 1;
      }
    } while (uVar9 < 8);
  }
  return;
}


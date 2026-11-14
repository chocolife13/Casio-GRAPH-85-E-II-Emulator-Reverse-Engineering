// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486650
// entry: 00486650  size: 533


undefined4 FUN_00486650(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 local_a4;
  short sStack_a2;
  undefined2 local_a0;
  undefined2 uStack_9e;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  uint local_90;
  int local_8c;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined4 local_80 [32];
  
  iVar3 = FUN_00486470(param_2,param_3);
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)*param_4;
    local_a4 = (undefined2)*puVar5;
    sStack_a2 = (short)((uint)*puVar5 >> 0x10);
    local_a0 = (undefined2)puVar5[1];
    uStack_9e = (undefined2)((uint)puVar5[1] >> 0x10);
    local_9c = puVar5[2];
    local_98 = puVar5[3];
    FUN_004ad550(local_84,local_88,&local_90);
    sVar1 = sStack_a2;
    if ((0 < param_2) && (param_2 < 0x1b)) {
      if (sStack_a2 < param_2) {
        if (local_90 < (sStack_a2 * 0x3fffffff + param_2) * 4 + 0x8cU) {
          return 0;
        }
        puVar5 = (undefined4 *)*param_4;
        *puVar5 = CONCAT22((short)param_2,local_a4);
        iVar3 = (int)sStack_a2;
        puVar5[1] = CONCAT22(uStack_9e,local_a0);
        puVar5[2] = local_9c;
        puVar5[3] = local_98;
        sStack_a2 = (short)param_2;
        cVar2 = FUN_004abdd0(s__SSHEET_005be210,param_1,(iVar3 * 0x3fffffff + param_2) * 4,
                             &DAT_005cd010,iVar3 * 4 + 0x10);
        if (cVar2 != '\0') {
          puVar5 = (undefined4 *)*param_4;
          *puVar5 = CONCAT22(sVar1,local_a4);
          puVar5[1] = CONCAT22(uStack_9e,local_a0);
          puVar5[2] = local_9c;
          puVar5[3] = local_98;
          return 0;
        }
        iVar4 = FUN_00486410(param_1,1,0,&local_a4,&local_94);
        *param_4 = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
        if (iVar3 < param_2) {
          iVar4 = iVar3 * 4 + 0x10;
          iVar3 = param_2 - iVar3;
          do {
            *(undefined4 *)(iVar4 + *param_4) = 0;
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else if (local_90 < 0x8c) {
        return 0;
      }
      local_8c = *param_4;
      local_94 = *(int *)(local_8c + 0xc + param_2 * 4);
      if (local_94 == 0) {
        iVar3 = FUN_00486310(param_1,param_2,&local_8c);
        if (iVar3 != 0) {
          puVar5 = local_80;
          for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          cVar2 = FUN_004abeb0(0x80,local_80,iVar3);
          if (cVar2 != '\0') {
            return 0;
          }
          puVar5 = (undefined4 *)*param_4;
          local_a4 = (undefined2)*puVar5;
          sStack_a2 = (short)((uint)*puVar5 >> 0x10);
          local_a0 = (undefined2)puVar5[1];
          uStack_9e = (undefined2)((uint)puVar5[1] >> 0x10);
          local_9c = puVar5[2];
          local_98 = puVar5[3];
          FUN_00486870(0,param_2,0x80,puVar5,&local_a4);
        }
        return 1;
      }
    }
  }
  return 0;
}


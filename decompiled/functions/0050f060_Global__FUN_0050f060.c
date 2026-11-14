// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050f060
// entry: 0050f060  size: 607


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050f060(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar4 = param_3;
  puVar2 = param_1;
  iVar7 = param_4 * 0x20;
  local_18 = *param_1;
  uVar6 = 0x100;
  local_14 = param_1[1];
  local_10 = param_1[2];
  if ((*(uint *)(*(int *)(param_3 + 0x8dc) + 0x18 + iVar7) & 0x100) == 0) {
    param_3 = CONCAT31(param_3._1_3_,0x59);
  }
  else {
    uVar6 = 0;
    param_3 = CONCAT31(param_3._1_3_,0x58);
  }
  FUN_0052f780(param_3,&local_18);
  uVar1 = *(uint *)(*(int *)(iVar4 + 0x8dc) + 0x18 + iVar7);
  if ((uVar1 & 0x1000) == 0) {
    if ((uVar1 & 2) != 0) {
      uVar6 = 0;
      FUN_0052f780(0x58,&local_18);
    }
    param_1 = *(undefined4 **)(*(int *)(iVar4 + 0x8dc) + iVar7);
    uVar1 = *(uint *)(*(int *)(iVar4 + 0x8dc) + iVar7 + 0x18);
    if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0x8000) == 0) {
        iVar5 = FUN_004d4b60(&param_1,&local_18,uVar6);
        if (iVar5 == 0) {
          *param_2 = local_18;
          param_2[1] = local_14;
          param_2[2] = local_10;
          goto LAB_0050f28c;
        }
      }
      else {
        FUN_00513f50(&param_1,local_1c);
        param_1 = (undefined4 *)((int)param_1 + 3);
        if (1 < param_5) {
          iVar5 = param_5 + -1;
          do {
            FUN_00513f50(&param_1,local_1c);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar5 = FUN_004d4b60(&param_1,&local_18,2);
        if (iVar5 == 0) {
          FUN_0052f780(*(undefined1 *)(*(int *)(iVar4 + 0x8dc) + 0xd + iVar7),&local_18);
          param_1 = *(undefined4 **)(*(int *)(iVar4 + 0x8dc) + iVar7);
          iVar5 = FUN_004d4b60(&param_1,&local_18,uVar6);
          if (iVar5 == 0) {
            *param_2 = local_18;
            param_2[1] = local_14;
            param_2[2] = local_10;
            goto LAB_0050f28c;
          }
        }
      }
    }
    else {
      _DAT_005d6804 = (undefined2)param_5;
      iVar5 = FUN_004d4b60(&param_1,&local_18,uVar6 | 1);
      if (iVar5 == 0) {
        FUN_0050f460(&local_18,param_2,param_5);
        goto LAB_0050f28c;
      }
    }
  }
  else {
    FUN_0052f840();
    iVar5 = FUN_0052f820();
    puVar3 = param_2;
    if (iVar5 == 0) {
      (**(code **)(*(int *)(iVar4 + 0x8dc) + iVar7))(puVar2,param_2,iVar4,param_4);
      local_18 = *puVar3;
      local_14 = puVar3[1];
      local_10 = puVar3[2];
LAB_0050f28c:
      param_3 = CONCAT31(param_3._1_3_,
                         (char)((uint)*(undefined4 *)(*(int *)(iVar4 + 0x8dc) + 0x18 + iVar7) >> 8))
                & 0xffffff01 | 0x58;
      FUN_0052f780(param_3,&local_18);
      return 0;
    }
    iVar5 = 1;
  }
  FUN_004e5630(iVar5,param_2);
  return iVar5;
}


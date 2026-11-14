// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050f2c0
// entry: 0050f2c0  size: 405


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050f2c0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = param_3;
  puVar2 = param_1;
  local_18 = *param_1;
  uVar7 = 0x100;
  local_14 = param_1[1];
  iVar6 = param_4 * 0x20;
  local_10 = param_1[2];
  if ((*(uint *)(*(int *)(param_3 + 0x8dc) + 0x18 + iVar6) & 0x100) == 0) {
    param_1 = (undefined4 *)CONCAT31(param_1._1_3_,0x59);
  }
  else {
    uVar7 = 0;
    param_1 = (undefined4 *)CONCAT31(param_1._1_3_,0x58);
  }
  FUN_0052f780(param_1,&local_18);
  uVar1 = *(uint *)(*(int *)(iVar3 + 0x8dc) + 0x18 + iVar6);
  if ((uVar1 & 0x1000) == 0) {
    if ((uVar1 & 2) != 0) {
      uVar7 = 0;
      FUN_0052f780(0x58,&local_18);
    }
    uVar4 = param_5;
    param_3 = *(int *)(*(int *)(iVar3 + 0x8dc) + iVar6);
    if ((*(uint *)(*(int *)(iVar3 + 0x8dc) + iVar6 + 0x18) & 0x2000) == 0) {
      iVar5 = FUN_004d4b60(&param_3,&local_18,uVar7);
      if (iVar5 == 0) {
        *param_2 = local_18;
        param_2[1] = local_14;
        param_2[2] = local_10;
        goto LAB_0050f424;
      }
    }
    else {
      _DAT_005d6804 = (undefined2)param_5;
      iVar5 = FUN_004d4b60(&param_3,&local_18,uVar7 | 1);
      if (iVar5 == 0) {
        FUN_0050f460(&local_18,param_2,uVar4);
LAB_0050f424:
        param_1 = (undefined4 *)
                  (CONCAT31(param_1._1_3_,
                            (char)((uint)*(undefined4 *)(*(int *)(iVar3 + 0x8dc) + 0x18 + iVar6) >>
                                  8)) & 0xffffff01 | 0x58);
        FUN_0052f780(param_1,&local_18);
        return 0;
      }
    }
  }
  else {
    iVar5 = FUN_0052f820();
    if (iVar5 == 0) {
      (**(code **)(*(int *)(iVar3 + 0x8dc) + iVar6))(puVar2,param_2,iVar3,param_4);
      local_18 = *param_2;
      local_14 = param_2[1];
      local_10 = param_2[2];
      goto LAB_0050f424;
    }
    iVar5 = 1;
  }
  FUN_004e5630(iVar5,param_2);
  return iVar5;
}


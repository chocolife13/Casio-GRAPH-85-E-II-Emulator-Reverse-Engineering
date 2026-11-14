// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050ebc0
// entry: 0050ebc0  size: 510


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050ebc0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar3 = param_1;
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  FUN_0052f780(0xce,&local_18);
  iVar5 = param_5;
  iVar7 = param_4;
  iVar4 = param_3;
  iVar6 = param_4 * 0x20;
  puVar1 = (undefined4 *)(*(int *)(param_3 + 0x8dc) + iVar6);
  if ((*(uint *)(*(int *)(param_3 + 0x8dc) + 0x18 + iVar6) & 0x1000) == 0) {
    param_1 = (undefined4 *)*puVar1;
    uVar2 = puVar1[6];
    if ((uVar2 & 0x8000) == 0) {
      if ((uVar2 & 0x2000) != 0) {
        _DAT_005d6804 = (undefined2)param_5;
        iVar7 = FUN_004d4b60(&param_1,&local_18,0x201);
        if (iVar7 == 0) {
          FUN_0050f460(&local_18,&local_24,iVar5);
          local_18 = local_24;
          local_14 = local_20;
          local_10 = local_1c;
          goto LAB_0050ec3e;
        }
        goto LAB_0050eda6;
      }
      iVar7 = FUN_004d4b60(&param_1,&local_18,0x200);
    }
    else {
      FUN_00513f50(&param_1,local_28);
      param_1 = (undefined4 *)((int)param_1 + 3);
      if (1 < param_5) {
        iVar7 = param_5 + -1;
        do {
          FUN_00513f50(&param_1,local_28);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar7 = FUN_004d4b60(&param_1,&local_18,2);
      if (iVar7 != 0) goto LAB_0050eda6;
      FUN_0052f780(*(undefined1 *)(*(int *)(iVar4 + 0x8dc) + 0xd + iVar6),&local_18);
      param_1 = *(undefined4 **)(*(int *)(iVar4 + 0x8dc) + iVar6);
      iVar7 = FUN_004d4b60(&param_1,&local_18,0x200);
    }
    if (iVar7 != 0) {
LAB_0050eda6:
      FUN_004e5630(iVar7,param_2);
      return iVar7;
    }
  }
  else {
    FUN_0052f840();
    iVar5 = FUN_0052f820();
    if (iVar5 != 0) {
      iVar7 = 1;
      goto LAB_0050eda6;
    }
    (**(code **)(*(int *)(iVar4 + 0x8dc) + iVar6))(puVar3,&local_18,iVar4,iVar7);
  }
LAB_0050ec3e:
  FUN_0052f780(0xcd,&local_18);
  *param_2 = local_18;
  param_2[1] = local_14;
  param_2[2] = local_10;
  return 0;
}


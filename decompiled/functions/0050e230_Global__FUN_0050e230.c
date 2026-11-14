// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050e230
// entry: 0050e230  size: 1444


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050e230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                char *param_5,int param_6,int param_7)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar7 = param_6;
  pcVar4 = param_5;
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  iVar6 = param_6 * 0x20;
  if ((*(byte *)(*(int *)(param_5 + 0x8dc) + 0x18 + iVar6) & 1) == 0) {
    uVar8 = 0xce;
  }
  else {
    uVar8 = 0x54;
  }
  FUN_0052f780(uVar8,&local_18);
  iVar5 = param_7;
  puVar1 = (undefined4 *)(*(int *)(pcVar4 + 0x8dc) + iVar6);
  if ((*(uint *)(*(int *)(pcVar4 + 0x8dc) + 0x18 + iVar6) & 0x1000) != 0) {
    FUN_0052f840();
    iVar5 = FUN_0052f820();
    if (iVar5 == 0) {
      puVar1 = (undefined4 *)(*(int *)(pcVar4 + 0x8dc) + iVar6);
      if ((*(byte *)(*(int *)(pcVar4 + 0x8dc) + 0x18 + iVar6) & 1) == 0) {
        (*(code *)*puVar1)(param_1,&local_18,pcVar4,iVar7);
      }
      else {
        (*(code *)*puVar1)(param_1,param_2,param_3);
      }
      goto LAB_0050e2e5;
    }
    iVar7 = 1;
    goto LAB_0050e7a6;
  }
  param_5 = (char *)*puVar1;
  uVar3 = puVar1[6];
  if ((uVar3 & 0x8000) == 0) {
    if ((uVar3 & 0x2000) != 0) {
      _DAT_005d6804 = (undefined2)param_7;
      if ((*(byte *)(*(int *)(pcVar4 + 0x8dc) + 0x18 + iVar6) & 1) != 0) {
        iVar7 = FUN_004d4b60(&param_5,&local_18,0x301);
        if (iVar7 == 0) {
          param_6 = FUN_0050f460(&local_18,param_2,iVar5);
          param_5 = *(char **)(*(int *)(pcVar4 + 0x8dc) + iVar6);
          cVar2 = *param_5;
          uVar8 = CONCAT31((int3)((uint)param_5 >> 8),cVar2);
          while ((cVar2 != -10 && ((char)uVar8 != '\0'))) {
            iVar7 = FUN_004b7370(uVar8);
            if (iVar7 == 0) {
              param_5 = param_5 + 1;
            }
            else {
              param_5 = param_5 + 2;
            }
            cVar2 = *param_5;
            uVar8 = CONCAT31((int3)((uint)param_5 >> 8),cVar2);
          }
          param_5 = param_5 + 1;
          if ((*(byte *)(*(int *)(pcVar4 + 0x8dc) + 0x18 + iVar6) & 4) == 0) {
            uVar8 = 0x301;
          }
          else {
            uVar8 = 0x401;
          }
          iVar7 = FUN_004d4b60(&param_5,&local_18,uVar8);
          if (iVar7 == 0) {
            iVar7 = FUN_0050f460(&local_18,param_3,iVar5);
            if (((param_6 != 0) && (iVar7 != 0)) && (param_6 != iVar7)) {
              FUN_004e5630(9,param_2);
              FUN_004e5630(9,param_3);
            }
            goto LAB_0050e2e5;
          }
        }
        goto LAB_0050e7a6;
      }
      iVar7 = FUN_004d4b60(&param_5,&local_18,0x201);
      if (iVar7 != 0) goto LAB_0050e7a6;
      FUN_0050f460(&local_18,&local_24,iVar5);
      local_18 = local_24;
      local_14 = local_20;
      local_10 = local_1c;
      goto LAB_0050e2e5;
    }
    if ((uVar3 & 1) != 0) {
      iVar7 = FUN_004d4b60(&param_5,&local_18,0x300);
      if (iVar7 == 0) {
        *param_2 = local_18;
        param_2[1] = local_14;
        param_2[2] = local_10;
        param_5 = *(char **)(*(int *)(pcVar4 + 0x8dc) + iVar6);
        cVar2 = *param_5;
        uVar8 = CONCAT31((int3)((uint)param_5 >> 8),cVar2);
        while ((cVar2 != -10 && ((char)uVar8 != '\0'))) {
          iVar7 = FUN_004b7370(uVar8);
          if (iVar7 == 0) {
            param_5 = param_5 + 1;
          }
          else {
            param_5 = param_5 + 2;
          }
          cVar2 = *param_5;
          uVar8 = CONCAT31((int3)((uint)param_5 >> 8),cVar2);
        }
        param_5 = param_5 + 1;
        if ((*(byte *)(*(int *)(pcVar4 + 0x8dc) + 0x18 + iVar6) & 4) == 0) {
          uVar8 = 0x300;
        }
        else {
          uVar8 = 0x400;
        }
        iVar7 = FUN_004d4b60(&param_5,&local_18,uVar8);
        if (iVar7 == 0) {
          *param_3 = local_18;
          param_3[1] = local_14;
          param_3[2] = local_10;
          goto LAB_0050e2e5;
        }
      }
      goto LAB_0050e7a6;
    }
    iVar7 = FUN_004d4b60(&param_5,&local_18,0x200);
  }
  else {
    FUN_00513f50(&param_5,&param_6);
    if (((*(uint *)(*(int *)(pcVar4 + 0x8dc) + 0x18 + iVar6) & 0x40d) == 0x40d) &&
       (param_5[-1] == ')')) {
      param_5 = param_5 + 1;
    }
    param_5 = param_5 + 3;
    if (1 < param_7) {
      iVar7 = param_7 + -1;
      do {
        FUN_00513f50(&param_5,&param_6);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = FUN_004d4b60(&param_5,&local_18,2);
    if (iVar7 != 0) goto LAB_0050e7a6;
    FUN_0052f780(*(undefined1 *)(*(int *)(pcVar4 + 0x8dc) + 0xd + iVar6),&local_18);
    param_5 = *(char **)(*(int *)(pcVar4 + 0x8dc) + iVar6);
    if ((*(byte *)((undefined4 *)(*(int *)(pcVar4 + 0x8dc) + iVar6) + 6) & 1) != 0) {
      iVar7 = FUN_004d4b60(&param_5,&local_18,0x300);
      if (iVar7 == 0) {
        *param_2 = local_18;
        param_2[1] = local_14;
        param_2[2] = local_10;
        param_5 = *(char **)(*(int *)(pcVar4 + 0x8dc) + iVar6);
        cVar2 = *param_5;
        uVar8 = CONCAT31((int3)((uint)param_5 >> 8),cVar2);
        while ((cVar2 != -10 && ((char)uVar8 != '\0'))) {
          iVar7 = FUN_004b7370(uVar8);
          if (iVar7 == 0) {
            param_5 = param_5 + 1;
          }
          else {
            param_5 = param_5 + 2;
          }
          cVar2 = *param_5;
          uVar8 = CONCAT31((int3)((uint)param_5 >> 8),cVar2);
        }
        param_5 = param_5 + 1;
        if ((*(byte *)(*(int *)(pcVar4 + 0x8dc) + 0x18 + iVar6) & 4) == 0) {
          uVar8 = 0x300;
        }
        else {
          uVar8 = 0x400;
        }
        iVar7 = FUN_004d4b60(&param_5,&local_18,uVar8);
        if (iVar7 == 0) {
          *param_3 = local_18;
          param_3[1] = local_14;
          param_3[2] = local_10;
          goto LAB_0050e2e5;
        }
      }
      goto LAB_0050e7a6;
    }
    iVar7 = FUN_004d4b60(&param_5,&local_18,0x200);
  }
  if (iVar7 == 0) {
LAB_0050e2e5:
    if ((*(byte *)(*(int *)(pcVar4 + 0x8dc) + 0x18 + iVar6) & 2) != 0) {
      FUN_0052f780(0xcd,&local_18);
      *param_4 = local_18;
      param_4[1] = local_14;
      param_4[2] = local_10;
      FUN_004d5480(param_4,param_1,param_2,param_3,((byte)pcVar4[0x8e0] & 0xc) >> 2);
    }
    FUN_0052f780(0x58,param_2);
    FUN_0052f780(0x59,param_3);
    return 0;
  }
LAB_0050e7a6:
  FUN_004e5630(iVar7,param_2);
  FUN_004e5630(iVar7,param_3);
  FUN_004e5630(iVar7,param_4);
  return iVar7;
}


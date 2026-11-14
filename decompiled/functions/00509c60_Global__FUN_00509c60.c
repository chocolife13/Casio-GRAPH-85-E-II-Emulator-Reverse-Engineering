// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00509c60
// entry: 00509c60  size: 797


int FUN_00509c60(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined3 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int local_64;
  int local_60;
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined2 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined1 *local_4;
  
  uVar3 = param_3;
  iVar2 = param_2;
  thunk_FUN_0040add0();
  local_c = local_5c;
  local_14 = *(undefined2 *)(*(int *)(param_2 + 0x8dc) + 0x18);
  FUN_00501f70(CONCAT31((int3)((uint)*(int *)(param_2 + 0x8dc) >> 8),
                        *(undefined1 *)(param_2 + 0x8e4)),param_3,1,param_1);
  iVar4 = *(int *)(param_2 + 0x8dc);
  iVar8 = 0;
  if (*(char *)(iVar4 + 0x1c) != '\0') {
    param_2 = 2;
    local_60 = 0;
    local_64 = 3;
    param_3 = 5;
    do {
      uVar5 = *(uint *)(local_60 + 0x18 + iVar4);
      if ((uVar5 & 0x100) == 0) {
        if ((uVar5 & 0x400) != 0) {
          local_10 = local_50;
          local_8 = param_1;
          iVar4 = FUN_0050e230(param_1,local_50,local_5c,local_44,iVar2,iVar8,1);
          if (iVar4 != 0) goto LAB_00509f6e;
          uVar6 = (undefined3)((uint)local_60 >> 8);
          if ((*(byte *)(local_60 + 0x18 + *(int *)(iVar2 + 0x8dc)) & 1) == 0) {
            puVar7 = local_44;
            uVar6 = (undefined3)((uint)*(int *)(iVar2 + 0x8dc) >> 8);
            if ((*(byte *)(iVar2 + 0x8e1) & 2) == 0) {
              uVar5 = CONCAT31(uVar6,*(undefined1 *)(iVar2 + 0x8e4));
              iVar4 = iVar8 + 2;
              goto LAB_00509f17;
            }
            FUN_00501f70(CONCAT31(uVar6,*(undefined1 *)(iVar2 + 0x8e4)),uVar3,local_64 + -1,puVar7);
            local_4 = local_44;
            iVar4 = FUN_004d8070(local_38,iVar2,iVar8,1);
            if (iVar4 != 0) goto LAB_00509f6e;
            FUN_00501f70(*(undefined1 *)(iVar2 + 0x8e4),uVar3,local_64,local_2c);
            puVar7 = local_38;
            iVar4 = local_64;
          }
          else {
            if ((*(byte *)(iVar2 + 0x8e1) & 2) != 0) {
              FUN_00501f70(CONCAT31(uVar6,*(undefined1 *)(iVar2 + 0x8e4)),uVar3,param_3 + -3,
                           local_50);
              FUN_00501f70(*(undefined1 *)(iVar2 + 0x8e4),uVar3,param_3 + -2,local_5c);
              iVar4 = FUN_004d8260(local_38,iVar2,iVar8,1);
              if (iVar4 != 0) goto LAB_00509f6e;
              FUN_00501f70(*(undefined1 *)(iVar2 + 0x8e4),uVar3,param_3 + -1,local_2c);
              FUN_00501f70(*(undefined1 *)(iVar2 + 0x8e4),uVar3,param_3,local_20);
              FUN_00501f70(*(undefined1 *)(iVar2 + 0x8e4),uVar3,param_3 + 1,local_38);
              goto LAB_00509f1f;
            }
            FUN_00501f70(CONCAT31(uVar6,*(undefined1 *)(iVar2 + 0x8e4)),uVar3,param_2,local_50);
            puVar7 = local_5c;
            iVar4 = param_2;
          }
          FUN_00501f70(*(undefined1 *)(iVar2 + 0x8e4),uVar3,iVar4 + 1,puVar7);
        }
      }
      else {
        iVar4 = FUN_0050f060(param_1,local_5c,iVar2,iVar8,1);
        if (iVar4 != 0) {
LAB_00509f6e:
          FUN_00518160();
          return iVar4;
        }
        if ((*(byte *)(iVar2 + 0x8e1) & 2) == 0) {
          uVar5 = (uint)*(byte *)(iVar2 + 0x8e4);
          puVar7 = local_5c;
          iVar4 = iVar8 + 2;
        }
        else {
          FUN_00501f70(*(undefined1 *)(iVar2 + 0x8e4),uVar3,param_2,local_5c);
          local_10 = param_1;
          iVar4 = FUN_004d7eb0(local_38,iVar2,iVar8,1);
          if (iVar4 != 0) goto LAB_00509f6e;
          uVar5 = (uint)*(byte *)(iVar2 + 0x8e4);
          puVar7 = local_38;
          iVar4 = param_2 + 1;
        }
LAB_00509f17:
        FUN_00501f70(uVar5,uVar3,iVar4,puVar7);
      }
LAB_00509f1f:
      param_3 = param_3 + 5;
      local_64 = local_64 + 3;
      param_2 = param_2 + 2;
      iVar4 = *(int *)(iVar2 + 0x8dc);
      iVar8 = iVar8 + 1;
      iVar1 = local_60 + 0x3c;
      local_60 = local_60 + 0x20;
    } while (*(char *)(iVar1 + iVar4) != '\0');
  }
  return 0;
}


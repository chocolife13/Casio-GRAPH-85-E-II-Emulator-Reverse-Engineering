// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00476a90
// entry: 00476a90  size: 1026


int FUN_00476a90(int param_1,uint *param_2,int param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int local_268;
  int local_260;
  undefined1 local_25c [4];
  int local_258;
  int local_254;
  int local_250;
  uint local_24c;
  undefined1 local_248 [52];
  char local_214 [20];
  undefined4 local_200 [6];
  undefined1 local_1e8 [100];
  undefined4 local_184 [30];
  undefined1 local_10c [268];
  
  cVar1 = FUN_00526090();
  iVar2 = -(uint)(cVar1 != '\0') + 1;
  FUN_004b6ef0(local_1e8,param_5);
  local_254 = FUN_004b6f30(local_1e8,0xd);
  if (local_254 == 0) {
    iVar5 = 5;
    local_268 = 5;
    if ((int)*param_2 < (int)(-(uint)(cVar1 != '\0') + 0x3e5)) {
      FUN_00476940(5);
    }
    else {
      FUN_00476940(5);
      FUN_005232d0(1,6);
      FUN_00523470(&DAT_005cd010,0x15);
    }
  }
  else {
    local_268 = 4;
    FUN_00476940(5);
    iVar5 = 4;
  }
  if (((*param_2 - iVar2) + 4 == param_4) && (iVar5 == 4)) {
    *param_2 = *param_2 + 1;
  }
  FUN_00523a20(1,1,&DAT_005bf3e8);
  if (iVar2 == 1) {
    FUN_00523a20(1,2,&PTR_LAB_005a8cc4);
    uVar3 = *param_2;
    uVar6 = uVar3;
    if ((int)uVar3 < (int)((uVar3 - 1) + iVar5)) {
      do {
        if (999 < (int)uVar6) break;
        FUN_00476ef0(1,(uVar6 - uVar3) + 3);
        uVar3 = *param_2;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)((uVar3 - 1) + iVar5));
    }
  }
  else {
    uVar3 = *param_2;
    uVar6 = uVar3;
    if ((int)uVar3 < (int)(uVar3 + iVar5)) {
      do {
        if (999 < (int)uVar6) break;
        FUN_00476ef0(1,(uVar6 - uVar3) + 2);
        uVar3 = *param_2;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)(uVar3 + iVar5));
    }
  }
  local_260 = param_1;
  if (param_1 < param_1 + 4) {
    do {
      FUN_0055c2fe(local_260,local_25c,10);
      if (local_260 < 10) {
        pcVar10 = s_List_005bf3e0;
      }
      else {
        pcVar10 = &DAT_005bf314;
      }
      FUN_004b6ef0(local_248,pcVar10);
      FUN_004b6e70(local_248,local_25c);
      FUN_004b6e70(local_248,&DAT_005ad48c);
      if ((param_3 != local_260) || (uVar4 = 0x22, param_4 != 0)) {
        uVar4 = 0x20;
      }
      iVar7 = local_260 - param_1;
      iVar5 = iVar7 * 0x1c + 0x10;
      local_258 = iVar7;
      FUN_005239e0(iVar5,2,local_248,0x18,uVar4);
      local_24c = FUN_005286a0(0,local_260,local_214);
      if (local_214[0] == '\0') {
        FUN_004b6ef0(local_10c,s__005bf334);
      }
      else {
        FUN_004b7b40(local_214,local_10c,0xc);
      }
      if (iVar2 == 1) {
        if ((param_3 != local_260) || (uVar4 = 0x12, param_4 != 0xffffffff)) {
          uVar4 = 0x10;
        }
        FUN_005239e0(iVar5,10,local_10c,0x18,uVar4);
      }
      local_250 = FUN_00527690(0,local_260,*param_2,local_184);
      uVar3 = *param_2;
      uVar6 = uVar3;
      if ((int)uVar3 < (int)((uVar3 - iVar2) + local_268)) {
        do {
          if ((param_3 == local_260) && (param_4 == uVar6)) {
            iVar5 = uVar6 - uVar3;
            cVar1 = (-(iVar5 != 0) & 0x10U) + 0x12;
          }
          else {
            iVar5 = uVar6 - uVar3;
            cVar1 = (-(iVar5 != 0) & 0x10U) + 0x10;
          }
          if (local_24c < uVar6) {
            pcVar10 = s__005bf334;
LAB_00476def:
            FUN_004b6ef0(local_248,pcVar10);
          }
          else {
            if (local_250 < iVar5 + 1) {
              pcVar10 = &DAT_005cd010;
              goto LAB_00476def;
            }
            puVar8 = local_184 + iVar5 * 6;
            puVar9 = local_200;
            for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            FUN_00476ea0(local_200,local_248);
            iVar7 = local_258;
          }
          if (iVar2 == 1) {
            iVar5 = (uVar6 - *param_2) + 3;
          }
          else {
            iVar5 = (uVar6 - *param_2) + 2;
          }
          FUN_00523a20(iVar7 * 7 + 5,iVar5,local_248,cVar1);
          uVar3 = *param_2;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)((uVar3 - iVar2) + local_268));
      }
      local_260 = local_260 + 1;
      iVar5 = local_268;
    } while (local_260 < param_1 + 4);
  }
  if (&stack0x00000000 != (undefined1 *)0x1e8) {
    FUN_00476f70(iVar5,local_1e8);
  }
  return iVar5;
}


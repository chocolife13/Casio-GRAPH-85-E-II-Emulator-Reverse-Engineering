// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00468f50
// entry: 00468f50  size: 695


void FUN_00468f50(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  undefined **ppuVar6;
  int iVar7;
  int iVar8;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  iVar1 = param_2;
  FUN_00523a20(1,3,&DAT_005bf348,0x10);
  FUN_00523a20(1,4,&DAT_005bf344,0x20);
  FUN_004e5780(&local_4c);
  FUN_005232d0(1,1);
  FUN_00523470(s_ANOVA_005bf33c,0x15);
  iVar7 = 5;
  if (param_2 == 1) {
    ppuVar6 = &PTR_s_df_005bef20;
    do {
      FUN_00523a20(iVar7,2,*ppuVar6,0x20);
      ppuVar6 = ppuVar6 + 1;
      iVar7 = iVar7 + 7;
    } while ((int)ppuVar6 < 0x5bef30);
  }
  else {
    ppuVar6 = &PTR_DAT_005bef30;
    do {
      FUN_00523a20(iVar7,2,*ppuVar6,0x20);
      ppuVar6 = ppuVar6 + 1;
      iVar7 = iVar7 + 7;
    } while ((int)ppuVar6 < 0x5bef40);
  }
  iVar7 = param_2 + 4;
  if (param_2 <= iVar7) {
    iVar4 = param_2 * 7;
    do {
      iVar8 = 1;
      do {
        switch(param_2) {
        case 1:
          if (iVar8 == 1) {
            puVar3 = (undefined4 *)(param_1 + 0xc);
LAB_004690f4:
            local_4c = *puVar3;
            local_48 = puVar3[1];
            local_44 = puVar3[2];
          }
          else if (iVar8 == 2) {
            local_4c = *(undefined4 *)(param_1 + 0x48);
            local_48 = *(undefined4 *)(param_1 + 0x4c);
            local_44 = *(undefined4 *)(param_1 + 0x50);
          }
          break;
        case 2:
          if (iVar8 == 1) {
            puVar3 = (undefined4 *)(param_1 + 0x18);
            goto LAB_004690f4;
          }
          if (iVar8 == 2) {
            local_4c = *(undefined4 *)(param_1 + 0x54);
            local_48 = *(undefined4 *)(param_1 + 0x58);
            local_44 = *(undefined4 *)(param_1 + 0x5c);
          }
          break;
        case 3:
          if (iVar8 == 1) {
            puVar3 = (undefined4 *)(param_1 + 0x24);
            goto LAB_004690f4;
          }
          if (iVar8 == 2) {
            local_4c = *(undefined4 *)(param_1 + 0x60);
            local_48 = *(undefined4 *)(param_1 + 100);
            local_44 = *(undefined4 *)(param_1 + 0x68);
          }
          break;
        case 4:
          if (iVar8 == 1) {
            local_4c = *(undefined4 *)(param_1 + 0x30);
            local_48 = *(undefined4 *)(param_1 + 0x34);
            local_44 = *(undefined4 *)(param_1 + 0x38);
          }
          break;
        case 5:
          if (iVar8 == 1) {
            puVar3 = (undefined4 *)(param_1 + 0x3c);
            goto LAB_004690f4;
          }
        }
        if ((param_3 == param_2) && (param_4 == iVar8)) {
          local_40 = local_4c;
          local_3c = local_48;
          local_38 = local_44;
          cVar5 = (-(iVar8 != 0) & 0x10U) + 0x12;
        }
        else {
          cVar5 = (-(iVar8 != 1) & 0x10U) + 0x10;
        }
        if (((iVar4 == 0x1c) || (iVar4 == 0x23)) && (iVar8 == 2)) {
          FUN_004b6ef0(local_34,s__005bf334);
        }
        else {
          FUN_004b1890(&local_4c,local_34);
        }
        iVar2 = FUN_0055b770(local_34,s_error_005bf32c);
        if (iVar2 == 0) {
          FUN_004b6ef0(local_34,s_ERROR_005bf324);
        }
        FUN_00523a20(iVar4 + iVar1 * -7 + 5,iVar8 + 2,local_34,cVar5);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 7;
    } while (param_2 <= iVar7);
  }
  FUN_004b5030(&local_40,local_34);
  FUN_005232d0(1,7);
  FUN_0054dc70(local_34);
  return;
}


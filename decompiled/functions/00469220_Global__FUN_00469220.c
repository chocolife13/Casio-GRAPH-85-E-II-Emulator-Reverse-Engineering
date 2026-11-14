// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00469220
// entry: 00469220  size: 1108


void FUN_00469220(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined **ppuVar8;
  bool bVar9;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  iVar1 = param_1;
  FUN_00523a20(1,3,&DAT_005bf348,0x10);
  FUN_00523a20(1,4,&DAT_005bf350,0x20);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00523a20(1,5,&DAT_005bf34c,0x20);
    FUN_00523a20(1,6,&DAT_005bf344,0x20);
  }
  else {
    FUN_00523a20(1,5,&DAT_005bf344,0x20);
  }
  FUN_005232d0(1,1);
  FUN_00523470(s_ANOVA_005bf33c,0x15);
  FUN_004e5780(&local_4c);
  iVar5 = 5;
  if (param_2 == 1) {
    ppuVar8 = &PTR_s_df_005bef40;
    do {
      FUN_00523a20(iVar5,2,*ppuVar8,0x20);
      ppuVar8 = ppuVar8 + 1;
      iVar5 = iVar5 + 7;
    } while ((int)ppuVar8 < 0x5bef50);
  }
  else {
    ppuVar8 = &PTR_DAT_005bef50;
    do {
      FUN_00523a20(iVar5,2,*ppuVar8,0x20);
      ppuVar8 = ppuVar8 + 1;
      iVar5 = iVar5 + 7;
    } while ((int)ppuVar8 < 0x5bef60);
  }
  uVar2 = (uint)(*(int *)(param_1 + 0x10) != 1);
  param_1 = param_2;
  if (param_2 <= param_2 + 4) {
    iVar5 = param_2 * 7;
    do {
      iVar6 = 1;
      if (uVar2 != 0xfffffffd) {
        do {
          switch(param_1) {
          case 1:
            switch(iVar6) {
            case 1:
              puVar4 = (undefined4 *)(iVar1 + 0x14);
              goto LAB_0046953d;
            case 2:
              local_4c = *(undefined4 *)(iVar1 + 0x50);
              local_48 = *(undefined4 *)(iVar1 + 0x54);
              local_44 = *(undefined4 *)(iVar1 + 0x58);
              break;
            case 3:
              if (*(int *)(iVar1 + 0x10) == 1) goto switchD_00469384_caseD_4;
              local_4c = *(undefined4 *)(iVar1 + 0x8c);
              local_48 = *(undefined4 *)(iVar1 + 0x90);
              local_44 = *(undefined4 *)(iVar1 + 0x94);
              break;
            case 4:
switchD_00469384_caseD_4:
              puVar4 = (undefined4 *)(iVar1 + 200);
              goto LAB_0046953d;
            }
            break;
          case 2:
            switch(iVar6) {
            case 1:
              local_4c = *(undefined4 *)(iVar1 + 0x20);
              local_48 = *(undefined4 *)(iVar1 + 0x24);
              local_44 = *(undefined4 *)(iVar1 + 0x28);
              break;
            case 2:
              puVar4 = (undefined4 *)(iVar1 + 0x5c);
              goto LAB_0046953d;
            case 3:
              if (*(int *)(iVar1 + 0x10) == 1) goto switchD_004693ef_caseD_4;
              puVar4 = (undefined4 *)(iVar1 + 0x98);
LAB_0046953d:
              local_4c = *puVar4;
              local_48 = puVar4[1];
              local_44 = puVar4[2];
              break;
            case 4:
switchD_004693ef_caseD_4:
              local_4c = *(undefined4 *)(iVar1 + 0xd4);
              local_48 = *(undefined4 *)(iVar1 + 0xd8);
              local_44 = *(undefined4 *)(iVar1 + 0xdc);
            }
            break;
          case 3:
            switch(iVar6) {
            case 1:
              puVar4 = (undefined4 *)(iVar1 + 0x2c);
              goto LAB_0046953d;
            case 2:
              local_4c = *(undefined4 *)(iVar1 + 0x68);
              local_48 = *(undefined4 *)(iVar1 + 0x6c);
              local_44 = *(undefined4 *)(iVar1 + 0x70);
              break;
            case 3:
              if (*(int *)(iVar1 + 0x10) == 1) goto switchD_0046945a_caseD_4;
              local_4c = *(undefined4 *)(iVar1 + 0xa4);
              local_48 = *(undefined4 *)(iVar1 + 0xa8);
              local_44 = *(undefined4 *)(iVar1 + 0xac);
              break;
            case 4:
switchD_0046945a_caseD_4:
              puVar4 = (undefined4 *)(iVar1 + 0xe0);
              goto LAB_0046953d;
            }
            break;
          case 4:
            if (iVar6 == 1) {
              local_4c = *(undefined4 *)(iVar1 + 0x38);
              local_48 = *(undefined4 *)(iVar1 + 0x3c);
              local_44 = *(undefined4 *)(iVar1 + 0x40);
            }
            else {
              if (iVar6 == 2) {
                puVar4 = (undefined4 *)(iVar1 + 0x74);
                goto LAB_0046953d;
              }
              if (iVar6 == 3) {
                local_4c = *(undefined4 *)(iVar1 + 0xb0);
                local_48 = *(undefined4 *)(iVar1 + 0xb4);
                local_44 = *(undefined4 *)(iVar1 + 0xb8);
              }
            }
            break;
          case 5:
            if (iVar6 == 1) {
              puVar4 = (undefined4 *)(iVar1 + 0x44);
              goto LAB_0046953d;
            }
            if (iVar6 == 2) {
              local_4c = *(undefined4 *)(iVar1 + 0x80);
              local_48 = *(undefined4 *)(iVar1 + 0x84);
              local_44 = *(undefined4 *)(iVar1 + 0x88);
            }
            else if (iVar6 == 3) {
              puVar4 = (undefined4 *)(iVar1 + 0xbc);
              goto LAB_0046953d;
            }
          }
          if ((param_3 == param_1) && (param_4 == iVar6)) {
            local_40 = local_4c;
            local_3c = local_48;
            local_38 = local_44;
            cVar7 = (-(iVar6 != 0) & 0x10U) + 0x12;
          }
          else {
            cVar7 = (-(iVar6 != 1) & 0x10U) + 0x10;
          }
          if (*(int *)(iVar1 + 0x10) == 0) {
            if ((iVar5 != 0x1c) && (iVar5 != 0x23)) goto LAB_004695c6;
            bVar9 = iVar6 == 4;
LAB_004695b3:
            if (!bVar9) goto LAB_004695c6;
            FUN_004b6ef0(local_34,s__005bf334);
          }
          else {
            if ((iVar5 == 0x1c) || (iVar5 == 0x23)) {
              bVar9 = iVar6 == 3;
              goto LAB_004695b3;
            }
LAB_004695c6:
            FUN_00476ea0(&local_4c,local_34);
          }
          iVar3 = FUN_0055b770(local_34,s_error_005bf32c);
          if (iVar3 == 0) {
            FUN_004b6ef0(local_34,s_ERROR_005bf324);
          }
          FUN_00523a20(iVar5 + param_2 * -7 + 5,iVar6 + 2,local_34,cVar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 <= (int)(uVar2 + 3));
      }
      param_1 = param_1 + 1;
      iVar5 = iVar5 + 7;
    } while (param_1 <= param_2 + 4);
  }
  FUN_004b5030(&local_40,local_34);
  FUN_005232d0(1,7);
  FUN_0054dc70(local_34);
  return;
}


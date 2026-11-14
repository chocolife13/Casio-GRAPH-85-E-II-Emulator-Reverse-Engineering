// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c8290
// entry: 004c8290  size: 2158


undefined4
FUN_004c8290(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int *local_c8;
  undefined4 local_c4 [6];
  undefined4 local_ac [6];
  undefined4 local_94 [6];
  int *local_7c;
  undefined4 local_78 [6];
  undefined4 local_60 [6];
  undefined4 local_48 [6];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_0052f840();
  puVar5 = local_78;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_60;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_ac;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_004e57a0(local_30);
  iVar4 = FUN_004e4000(param_1);
  if ((iVar4 == 0) && (iVar4 = FUN_004e4000(param_2), iVar4 == 0)) {
    uVar2 = (uint)*(ushort *)(param_1 + 2);
    uVar6 = (uint)*(ushort *)(param_2 + 2);
    if ((uVar2 == uVar6) && ((uVar2 != 0 && (uVar2 < 1000)))) {
      iVar4 = FUN_0052f820();
      if (iVar4 == 0) {
        puVar5 = local_48;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        iVar4 = FUN_004c7060(param_2,local_94);
        if (iVar4 == 0) {
          uVar9 = 3;
        }
        else {
          FUN_004e5780(local_ac);
          iVar4 = FUN_004e71d0(local_ac,local_94);
          if (iVar4 == 1) {
            FUN_004c95b0(3,param_3,param_4,param_5,param_6,param_7,param_8);
            *param_3 = local_ac[0];
            param_3[1] = local_ac[1];
            param_3[2] = local_ac[2];
            return 1;
          }
          piVar1 = *(int **)(param_1 + 8);
          local_c8 = *(int **)(param_2 + 8);
          iVar4 = 0;
          local_7c = piVar1;
          if (uVar6 != 0) {
            iVar7 = 0;
            do {
              puVar5 = (undefined4 *)(iVar7 + *piVar1);
              local_e0 = *puVar5;
              local_dc = puVar5[1];
              local_d8 = puVar5[2];
              puVar5 = (undefined4 *)(iVar7 + *local_c8);
              local_c4[0] = *puVar5;
              local_c4[1] = puVar5[1];
              local_c4[2] = puVar5[2];
              FUN_004e0880(local_48,local_c4,local_48,0);
              FUN_004e0c40(&local_e0,local_c4,local_94,0);
              FUN_004e0880(local_78,local_94,local_78,0);
              FUN_004e2770(&local_e0,local_18,0);
              FUN_004e0c40(local_18,local_c4,local_94,0);
              FUN_004e0880(local_60,local_94,local_60,0);
              iVar3 = FUN_0052f820();
              if (iVar3 != 0) {
                uVar9 = 1;
                goto LAB_004c8ae9;
              }
              iVar4 = iVar4 + 1;
              iVar7 = iVar7 + 0xc;
            } while (iVar4 < (int)uVar6);
          }
          FUN_004e7910(local_48,local_48);
          FUN_004e7910(local_78,local_78);
          FUN_004e7910(local_60,local_60);
          *param_3 = local_48[0];
          param_3[1] = local_48[1];
          param_3[2] = local_48[2];
          *param_5 = local_78[0];
          param_5[1] = local_78[1];
          param_5[2] = local_78[2];
          *param_6 = local_60[0];
          param_6[1] = local_60[1];
          param_6[2] = local_60[2];
          iVar4 = FUN_004e4020(local_48);
          if (iVar4 == 0) {
            iVar4 = FUN_004e4020(local_78);
            if (iVar4 != 0) {
              FUN_004e5630(3,param_4);
              FUN_004e5630(3,param_5);
              FUN_004e5630(3,param_6);
              FUN_004e5630(3,param_7);
              FUN_004e5630(3,param_8);
              return 1;
            }
            iVar4 = FUN_004e71d0(param_3,local_ac);
            if (iVar4 == 1) {
              FUN_004e5630(3,param_4);
              FUN_004e5630(3,param_7);
              FUN_004e5630(3,param_8);
              return 0;
            }
            iVar4 = FUN_0052f820();
            if (iVar4 == 0) {
              FUN_004e0dd0(param_5,param_3,param_4,0);
              FUN_004e3e70(param_4,param_4);
              iVar4 = FUN_004e4020(local_60);
              if (iVar4 != 0) {
                FUN_004e5630(3,param_6);
                FUN_004e5630(3,param_7);
                FUN_004e5630(3,param_8);
                return 1;
              }
              puVar5 = local_94;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar5 = 0;
                puVar5 = puVar5 + 1;
              }
              iVar4 = 0;
              if (uVar6 != 0) {
                iVar7 = 0;
                do {
                  puVar5 = (undefined4 *)(iVar7 + *local_7c);
                  local_e0 = *puVar5;
                  local_dc = puVar5[1];
                  local_d8 = puVar5[2];
                  puVar5 = (undefined4 *)(iVar7 + *local_c8);
                  local_c4[0] = *puVar5;
                  local_c4[1] = puVar5[1];
                  local_c4[2] = puVar5[2];
                  FUN_004e0b00(&local_e0,param_4,&local_e0,0);
                  FUN_004e2770(&local_e0,&local_e0,0);
                  FUN_004e0c40(&local_e0,local_c4,&local_e0,0);
                  FUN_004e0880(&local_e0,local_94,local_94,0);
                  iVar3 = FUN_0052f820();
                  if (iVar3 != 0) goto LAB_004c8a31;
                  iVar4 = iVar4 + 1;
                  iVar7 = iVar7 + 0xc;
                } while (iVar4 < (int)uVar6);
              }
              puVar5 = local_94;
              puVar8 = local_c4;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
              }
              FUN_004e0dd0(local_c4,param_3,&local_e0,0);
              FUN_004e0b00(param_3,local_30,local_94,0);
              FUN_004e0dd0(local_c4,local_94,local_c4,0);
              iVar4 = FUN_004e7250(param_3,local_ac);
              if (iVar4 == 1) {
                iVar4 = FUN_004e7310(&local_e0,local_ac);
                if (iVar4 == 1) {
                  FUN_004e5780(param_7);
                }
                else {
                  FUN_004e5630(3,param_7);
                }
                iVar4 = FUN_004e7310(local_c4,local_ac);
                if (iVar4 != 1) {
                  FUN_004e5630(3,param_8);
                  return 1;
                }
                FUN_004e5780(param_8);
                return 1;
              }
              iVar4 = FUN_004e72d0(&local_e0,local_ac);
              if (iVar4 == 1) {
                FUN_004e5780(&local_e0);
              }
              iVar4 = FUN_004e72d0(local_c4,local_ac);
              if (iVar4 == 1) {
                FUN_004e5780(local_c4);
              }
              FUN_004e1790(&local_e0,param_7,0);
              FUN_004e3e70(param_7,param_7);
              iVar4 = FUN_0052f820();
              if (iVar4 == 0) {
                iVar4 = FUN_004e72d0(param_3,local_30);
                if (iVar4 != 1) {
                  FUN_004e1790(local_c4,param_8,0);
                  FUN_004e3e70(param_8,param_8);
                  return 1;
                }
                FUN_004e5630(3,param_8);
                return 1;
              }
LAB_004c8a31:
              uVar9 = 1;
            }
            else {
              uVar9 = 1;
            }
          }
          else {
            uVar9 = 3;
          }
        }
      }
      else {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 9;
    }
  }
  else {
    uVar9 = 0x19;
  }
LAB_004c8ae9:
  FUN_004c95b0(uVar9,param_3,param_4,param_5,param_6,param_7,param_8);
  return 0;
}


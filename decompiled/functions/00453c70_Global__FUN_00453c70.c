// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00453c70
// entry: 00453c70  size: 1911


int FUN_00453c70(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_004e5ae0(local_c);
  FUN_004e5840(local_98);
  FUN_004e7730(local_98,local_3c);
  FUN_004e5780(&local_18);
  FUN_004e57a0(local_5c);
  FUN_004e57c0(local_48);
  FUN_004e5070(0x10,local_80);
  local_a4 = *(undefined4 *)(param_2 + 0x38);
  local_a0 = *(undefined4 *)(param_2 + 0x3c);
  local_9c = *(undefined4 *)(param_2 + 0x40);
  iVar5 = FUN_00451810(&local_a4);
  if (iVar5 == 0) {
    local_4c = (undefined4 *)(param_2 + 0x14);
    local_bc = *local_4c;
    local_b8 = *(undefined4 *)(param_2 + 0x18);
    local_b4 = *(undefined4 *)(param_2 + 0x1c);
    local_50 = (undefined4 *)(param_2 + 0x20);
    local_d4 = *local_50;
    local_d0 = *(undefined4 *)(param_2 + 0x24);
    local_cc = *(undefined4 *)(param_2 + 0x28);
    iVar5 = FUN_004e7250(&local_a4,local_5c);
    if (iVar5 == 0) {
      FUN_004e6dd0(param_2 + 0x44,&local_a4,local_8c);
      uVar6 = FUN_004e6dd0(&local_bc,&local_a4,&local_c8,local_8c,&local_bc);
      FUN_004e6c30(uVar6);
      uVar6 = FUN_004e6dd0(&local_d4,&local_a4,&local_c8,local_8c,&local_d4);
      FUN_004e6c30(uVar6);
    }
    else {
      uVar6 = FUN_004e6c30(&local_bc,param_2 + 0x44,&local_c8,&local_a4,&local_bc);
      FUN_004e6dd0(uVar6);
      uVar6 = FUN_004e6c30(&local_d4,param_2 + 0x44,&local_c8,&local_a4,&local_d4);
      FUN_004e6dd0(uVar6);
    }
    iVar5 = FUN_004e4020(&local_bc);
    if ((iVar5 == 0) && (iVar5 = FUN_004e4020(&local_d4), iVar5 == 0)) {
      puVar7 = (undefined4 *)(param_2 + 0x80);
      puVar2 = (undefined4 *)(param_2 + 0x8c);
      puVar1 = (undefined4 *)(param_2 + 0x5c);
      *puVar7 = local_bc;
      *(undefined4 *)(param_2 + 0x84) = local_b8;
      *(undefined4 *)(param_2 + 0x88) = local_b4;
      local_a8 = local_10;
      *puVar2 = local_d4;
      *(undefined4 *)(param_2 + 0x90) = local_d0;
      *(undefined4 *)(param_2 + 0x94) = local_cc;
      *puVar1 = local_18;
      local_b0 = local_18;
      local_ac = local_14;
      *(undefined4 *)(param_2 + 0x60) = local_14;
      *(undefined4 *)(param_2 + 100) = local_10;
      FUN_004e7910(puVar7,puVar7);
      FUN_004e7910(puVar2,puVar2);
      iVar5 = FUN_004e71d0(&local_bc,&local_d4);
      if (iVar5 == 0) {
        iVar5 = FUN_004e72d0(local_4c,local_50);
        uVar4 = local_b4;
        uVar3 = local_b8;
        uVar6 = local_bc;
        if (iVar5 == 0) {
          local_bc = local_d4;
          local_b8 = local_d0;
          puVar9 = local_3c;
          local_c8 = uVar6;
          local_c4 = uVar3;
          local_c0 = local_b4;
          local_b4 = local_cc;
          local_d4 = uVar6;
          local_d0 = uVar3;
          local_cc = uVar4;
        }
        else {
          puVar9 = local_98;
        }
        FUN_004e6dd0(&local_bc,local_c,&local_c8);
        local_bc = local_c8;
        local_b8 = local_c4;
        local_b4 = local_c0;
        FUN_004e6dd0(&local_d4,local_c,&local_c8);
        local_d4 = local_c8;
        local_d0 = local_c4;
        local_cc = local_c0;
        uVar6 = FUN_004e7730(local_80,&local_c8);
        iVar5 = FUN_004e7250(&local_d4,uVar6);
        if ((iVar5 == 0) && (iVar5 = FUN_004e7290(&local_bc,local_80), iVar5 == 0)) {
          uVar6 = FUN_004e7620(&local_bc,&local_c8,local_98);
          iVar5 = FUN_004e72d0(uVar6);
          if (iVar5 == 0) {
            puVar8 = local_74;
            uVar6 = 1;
            puVar7 = (undefined4 *)FUN_004e7620(&local_bc,&local_c8,1,puVar8);
          }
          else {
            puVar8 = local_24;
            puVar7 = &local_bc;
            uVar6 = 0;
          }
          FUN_0045e860(puVar7,uVar6,puVar8);
          uVar6 = FUN_004e7620(&local_d4,&local_c8,local_98);
          iVar5 = FUN_004e72d0(uVar6);
          if (iVar5 == 0) {
            puVar8 = local_68;
            uVar6 = 1;
            puVar7 = (undefined4 *)FUN_004e7620(&local_d4,&local_c8,1,puVar8);
          }
          else {
            puVar8 = local_30;
            puVar7 = &local_d4;
            uVar6 = 0;
          }
          FUN_0045e860(puVar7,uVar6,puVar8);
          uVar6 = FUN_004e7730(local_80,&local_c8);
          iVar5 = FUN_004e72d0(&local_bc,uVar6);
          if (iVar5 == 0) {
            iVar5 = FUN_004e7250(&local_bc,local_3c);
            if (iVar5 == 0) {
              iVar5 = FUN_004e72d0(&local_bc,local_98);
              if (iVar5 == 0) {
                iVar5 = FUN_004e7250(&local_d4,local_80);
                if (iVar5 == 0) {
                  puVar7 = &local_b0;
                  puVar8 = local_74;
                }
                else {
                  puVar7 = &local_b0;
                  puVar8 = (undefined1 *)FUN_004e6c30(local_74,local_68,local_8c,puVar9,puVar7);
                }
              }
              else {
                iVar5 = FUN_004e72d0(&local_d4,local_98);
                if (iVar5 == 0) {
                  iVar5 = FUN_004e7250(&local_d4,local_80);
                  if (iVar5 == 0) {
                    puVar7 = &local_b0;
                    puVar8 = (undefined1 *)FUN_004e6c30(local_5c,local_24,local_8c,puVar9,puVar7);
                  }
                  else {
                    FUN_004e6ab0(local_68,local_24,&local_c8);
                    puVar7 = &local_b0;
                    puVar8 = (undefined1 *)FUN_004e6c30(local_5c,&local_c8,local_8c,puVar9,puVar7);
                  }
                }
                else {
                  puVar7 = &local_b0;
                  puVar8 = (undefined1 *)FUN_004e6c30(local_30,local_24,&local_c8,puVar9,puVar7);
                }
              }
            }
            else {
              iVar5 = FUN_004e7250(&local_d4,local_3c);
              if (iVar5 == 0) {
                iVar5 = FUN_004e72d0(&local_d4,local_98);
                if (iVar5 == 0) {
                  iVar5 = FUN_004e7250(&local_d4,local_80);
                  if (iVar5 == 0) {
                    puVar7 = &local_b0;
                    puVar8 = (undefined1 *)FUN_004e6c30(local_48,local_74,&local_c8,puVar9,puVar7);
                  }
                  else {
                    FUN_004e6ab0(local_68,local_74,&local_c8);
                    puVar7 = &local_b0;
                    puVar8 = (undefined1 *)FUN_004e6c30(local_48,&local_c8,local_8c,puVar9,puVar7);
                  }
                }
                else {
                  FUN_004e6c30(local_30,local_74,&local_c8);
                  puVar7 = &local_b0;
                  puVar8 = (undefined1 *)FUN_004e6ab0(local_5c,&local_c8,local_8c,puVar9,puVar7);
                }
              }
              else {
                puVar7 = &local_b0;
                puVar8 = (undefined1 *)FUN_004e6c30(local_68,local_74,&local_c8,puVar9,puVar7);
              }
            }
          }
          else {
            iVar5 = FUN_004e7250(&local_d4,local_3c);
            if (iVar5 == 0) {
              iVar5 = FUN_004e72d0(&local_d4,local_98);
              if (iVar5 == 0) {
                iVar5 = FUN_004e7250(&local_d4,local_80);
                if (iVar5 == 0) {
                  puVar7 = &local_b0;
                  puVar8 = local_48;
                }
                else {
                  puVar7 = &local_b0;
                  puVar8 = (undefined1 *)FUN_004e6c30(local_48,local_68,&local_c8,puVar9,puVar7);
                }
              }
              else {
                puVar7 = &local_b0;
                puVar8 = (undefined1 *)FUN_004e6ab0(local_30,local_5c,&local_c8,puVar9,puVar7);
              }
            }
            else {
              puVar7 = &local_b0;
              puVar8 = local_68;
            }
          }
          FUN_004e6d00(puVar8,puVar9,puVar7);
          uVar6 = FUN_004e7620(&local_b0,&local_c8);
          iVar5 = FUN_004518b0(uVar6);
          if (iVar5 != 0) {
            return iVar5;
          }
          *puVar1 = local_b0;
          *(undefined4 *)(param_2 + 0x60) = local_ac;
          *(undefined4 *)(param_2 + 100) = local_a8;
          FUN_004e7910(puVar1,puVar1);
        }
      }
      iVar5 = 0;
    }
  }
  return iVar5;
}


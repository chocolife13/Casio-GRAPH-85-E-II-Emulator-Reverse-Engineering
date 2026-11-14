// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004bec40
// entry: 004bec40  size: 2838


undefined4
FUN_004bec40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_100 [6];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc [6];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_ac [6];
  undefined4 local_94;
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48 [6];
  undefined1 local_30 [24];
  undefined1 local_18 [8];
  undefined4 local_10;
  
  piVar2 = (int *)param_8[2];
  FUN_004e5780(&local_e8);
  FUN_004e57a0(local_78);
  FUN_004e7be0(local_78,local_78,0xfffffff2);
  uVar1 = *(undefined2 *)(param_1 + 2);
  piVar4 = (int *)FUN_004ad630(0x6c);
  if (piVar4 == (int *)0x0) {
    FUN_004e5630(4,param_5);
    *param_6 = *param_5;
    param_6[1] = param_5[1];
    param_6[2] = param_5[2];
    *param_7 = *param_5;
    param_7[1] = param_5[1];
    param_7[2] = param_5[2];
    *param_8 = *param_5;
    param_8[1] = param_5[1];
    param_8[2] = param_5[2];
    return 0;
  }
  FUN_004f96c0(local_30,piVar4,3,3,1);
  iVar5 = FUN_004be790(param_1,param_3,param_4,param_5,param_6);
  if (iVar5 == 0) {
    puVar8 = param_5;
    puVar9 = local_ac;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_004ad6d0(piVar4);
    goto LAB_004bf680;
  }
  FUN_004e5070(uVar1,local_100);
  puVar8 = (undefined4 *)*piVar4;
  *puVar8 = local_100[0];
  puVar8[1] = local_100[1];
  puVar8[2] = local_100[2];
  FUN_004c7060(param_3,local_100);
  iVar5 = *piVar4;
  *(undefined4 *)(iVar5 + 0xc) = local_100[0];
  *(undefined4 *)(iVar5 + 0x10) = local_100[1];
  *(undefined4 *)(iVar5 + 0x14) = local_100[2];
  iVar5 = *piVar4;
  *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar5 + 0xc);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar5 + 0x10);
  *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(iVar5 + 0x14);
  FUN_004c7060(param_4,local_100);
  iVar5 = *piVar4;
  *(undefined4 *)(iVar5 + 0x18) = local_100[0];
  *(undefined4 *)(iVar5 + 0x1c) = local_100[1];
  *(undefined4 *)(iVar5 + 0x20) = local_100[2];
  iVar5 = *piVar4;
  *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar5 + 0x18);
  *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(iVar5 + 0x1c);
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar5 + 0x20);
  FUN_004e0c40(param_3,param_3,local_dc,0);
  iVar5 = FUN_004e4020(local_dc);
  if (iVar5 != 0) {
    puVar8 = local_dc;
    puVar9 = local_ac;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_004ad6d0(piVar4);
    goto LAB_004bf680;
  }
  FUN_004c7060(local_dc,local_100);
  iVar5 = FUN_004e4020(local_100);
  if (iVar5 == 0) {
    FUN_004ad6d0(local_dc[2]);
    iVar5 = *piVar4;
    *(undefined4 *)(iVar5 + 0x30) = local_100[0];
    *(undefined4 *)(iVar5 + 0x34) = local_100[1];
    *(undefined4 *)(iVar5 + 0x38) = local_100[2];
    iVar5 = *piVar4;
    local_c4 = *(undefined4 *)(iVar5 + 0xc);
    local_c0 = *(undefined4 *)(iVar5 + 0x10);
    local_bc = *(undefined4 *)(iVar5 + 0x14);
    uVar6 = FUN_004e23b0(local_100,local_100,0,local_78,local_100,0);
    FUN_004e0c40(uVar6);
    FUN_004e23b0(&local_c4,&local_c4,0);
    iVar5 = FUN_004e7250(&local_c4,local_100);
    if (iVar5 == -1) {
      FUN_004e5630(3,local_ac);
      goto LAB_004bf680;
    }
    if (iVar5 != 0) {
      iVar5 = *piVar4;
      *(undefined4 *)(iVar5 + 0xc) = local_e8;
      *(undefined4 *)(iVar5 + 0x10) = local_e4;
      *(undefined4 *)(iVar5 + 0x14) = local_e0;
      iVar5 = *piVar4;
      *(undefined4 *)(iVar5 + 0x24) = local_e8;
      *(undefined4 *)(iVar5 + 0x28) = local_e4;
      *(undefined4 *)(iVar5 + 0x2c) = local_e0;
    }
    FUN_004e0c40(param_4,param_4,local_dc,0);
    iVar5 = FUN_004e4020(local_dc);
    if (iVar5 != 0) {
      puVar8 = local_dc;
      puVar9 = local_ac;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_004ad6d0(piVar4);
      goto LAB_004bf680;
    }
    FUN_004c7060(local_dc,local_100);
    iVar5 = FUN_004e4020(local_100);
    if (iVar5 == 0) {
      FUN_004ad6d0(local_dc[2]);
      iVar5 = *piVar4;
      *(undefined4 *)(iVar5 + 0x60) = local_100[0];
      *(undefined4 *)(iVar5 + 100) = local_100[1];
      *(undefined4 *)(iVar5 + 0x68) = local_100[2];
      iVar5 = *piVar4;
      local_c4 = *(undefined4 *)(iVar5 + 0x18);
      local_c0 = *(undefined4 *)(iVar5 + 0x1c);
      local_bc = *(undefined4 *)(iVar5 + 0x20);
      uVar6 = FUN_004e23b0(local_100,local_100,0,local_78,local_100,0);
      FUN_004e0c40(uVar6);
      FUN_004e23b0(&local_c4,&local_c4,0);
      iVar5 = FUN_004e7250(&local_c4,local_100);
      if (iVar5 == -1) {
LAB_004bf3fb:
        FUN_004e5630(3,local_ac);
        goto LAB_004bf680;
      }
      if (iVar5 != 0) {
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 0x18) = local_e8;
        *(undefined4 *)(iVar5 + 0x1c) = local_e4;
        *(undefined4 *)(iVar5 + 0x20) = local_e0;
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 0x48) = local_e8;
        *(undefined4 *)(iVar5 + 0x4c) = local_e4;
        *(undefined4 *)(iVar5 + 0x50) = local_e0;
      }
      FUN_004e0c40(param_3,param_4,local_dc,0);
      iVar5 = FUN_004e4020(local_dc);
      if (iVar5 != 0) {
        puVar8 = local_dc;
        puVar9 = local_ac;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        FUN_004ad6d0(piVar4);
        goto LAB_004bf680;
      }
      FUN_004c7060(local_dc,local_100);
      iVar5 = FUN_004e4020(local_100);
      if (iVar5 == 0) {
        FUN_004ad6d0(local_dc[2]);
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 0x3c) = local_100[0];
        *(undefined4 *)(iVar5 + 0x40) = local_100[1];
        *(undefined4 *)(iVar5 + 0x44) = local_100[2];
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar5 + 0x3c);
        *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar5 + 0x40);
        *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(iVar5 + 0x44);
        iVar5 = *piVar4;
        local_c4 = *(undefined4 *)(iVar5 + 0x30);
        local_c0 = *(undefined4 *)(iVar5 + 0x34);
        local_bc = *(undefined4 *)(iVar5 + 0x38);
        uVar6 = FUN_004e23b0(&local_c4,&local_c4,0,local_78,&local_c4,0);
        FUN_004e0c40(uVar6);
        FUN_004e23b0(local_100,local_100,0);
        iVar5 = FUN_004e7250(local_100,&local_c4);
        if (iVar5 == -1) {
          FUN_004e5630(3,local_ac);
          goto LAB_004bf680;
        }
        if (iVar5 != 0) {
          iVar5 = *piVar4;
          *(undefined4 *)(iVar5 + 0x3c) = local_e8;
          *(undefined4 *)(iVar5 + 0x40) = local_e4;
          *(undefined4 *)(iVar5 + 0x44) = local_e0;
          iVar5 = *piVar4;
          *(undefined4 *)(iVar5 + 0x54) = local_e8;
          *(undefined4 *)(iVar5 + 0x58) = local_e4;
          *(undefined4 *)(iVar5 + 0x5c) = local_e0;
        }
        FUN_004c7060(param_2,local_100);
        iVar5 = FUN_004e4020(local_100);
        if (iVar5 == 0) {
          puVar8 = (undefined4 *)*piVar2;
          *puVar8 = local_100[0];
          puVar8[1] = local_100[1];
          puVar8[2] = local_100[2];
          FUN_004e0c40(param_2,param_3,local_dc,0);
          iVar5 = FUN_004e4020(local_dc);
          if (iVar5 != 0) {
            puVar8 = local_dc;
            puVar9 = local_ac;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            FUN_004ad6d0(piVar4);
            goto LAB_004bf680;
          }
          FUN_004c7060(local_dc,local_100);
          iVar5 = FUN_004e4020(local_100);
          if (iVar5 == 0) {
            FUN_004ad6d0(local_dc[2]);
            iVar5 = *piVar2;
            *(undefined4 *)(iVar5 + 0xc) = local_100[0];
            *(undefined4 *)(iVar5 + 0x10) = local_100[1];
            *(undefined4 *)(iVar5 + 0x14) = local_100[2];
            FUN_004e0c40(param_2,param_4,local_dc,0);
            iVar5 = FUN_004e4020(local_dc);
            if (iVar5 != 0) {
              puVar8 = local_dc;
              puVar9 = local_ac;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar9 = puVar9 + 1;
              }
              FUN_004ad6d0(piVar4);
              goto LAB_004bf680;
            }
            FUN_004c7060(local_dc,local_100);
            iVar5 = FUN_004e4020(local_100);
            if (iVar5 == 0) {
              FUN_004ad6d0(local_dc[2]);
              iVar5 = *piVar2;
              *(undefined4 *)(iVar5 + 0x18) = local_100[0];
              *(undefined4 *)(iVar5 + 0x1c) = local_100[1];
              *(undefined4 *)(iVar5 + 0x20) = local_100[2];
              uVar6 = FUN_004e23b0(local_100,local_100,0,local_78,local_100,0);
              FUN_004e0c40(uVar6);
              puVar8 = (undefined4 *)*piVar2;
              local_c4 = *puVar8;
              local_c0 = puVar8[1];
              local_bc = puVar8[2];
              FUN_004e23b0(&local_c4,&local_c4,0);
              iVar5 = FUN_004e7290(local_100,&local_c4);
              if (iVar5 == -1) {
                FUN_004e5630(3,local_ac);
                goto LAB_004bf680;
              }
              if (iVar5 != 0) {
                puVar8 = (undefined4 *)*piVar2;
                *puVar8 = local_e8;
                puVar8[1] = local_e4;
                puVar8[2] = local_e0;
              }
              iVar5 = *piVar2;
              local_c4 = *(undefined4 *)(iVar5 + 0xc);
              local_c0 = *(undefined4 *)(iVar5 + 0x10);
              local_bc = *(undefined4 *)(iVar5 + 0x14);
              FUN_004e23b0(&local_c4,&local_c4,0);
              iVar5 = FUN_004e7290(local_100,&local_c4);
              if (iVar5 != -1) {
                if (iVar5 != 0) {
                  iVar5 = *piVar2;
                  *(undefined4 *)(iVar5 + 0xc) = local_e8;
                  *(undefined4 *)(iVar5 + 0x10) = local_e4;
                  *(undefined4 *)(iVar5 + 0x14) = local_e0;
                }
                FUN_004eab60(3,local_30,param_8);
                iVar5 = FUN_004eaee0(3,local_30,param_8,local_48);
                if (iVar5 == 0) {
                  puVar8 = local_48;
                  puVar9 = local_ac;
                  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar9 = *puVar8;
                    puVar8 = puVar8 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  FUN_004ad6d0(piVar4);
                }
                else {
                  FUN_004ad6d0(piVar2);
                  FUN_004ad6d0(piVar4);
                  puVar8 = local_48;
                  puVar9 = param_8;
                  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar9 = *puVar8;
                    puVar8 = puVar8 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  piVar2 = (int *)param_8[2];
                  puVar8 = (undefined4 *)*piVar2;
                  local_100[0] = *puVar8;
                  local_100[1] = puVar8[1];
                  local_100[2] = puVar8[2];
                  iVar5 = *piVar2;
                  local_c4 = *(undefined4 *)(iVar5 + 0xc);
                  local_c0 = *(undefined4 *)(iVar5 + 0x10);
                  local_bc = *(undefined4 *)(iVar5 + 0x14);
                  iVar5 = *piVar2;
                  local_60 = *(undefined4 *)(iVar5 + 0x18);
                  local_5c = *(undefined4 *)(iVar5 + 0x1c);
                  local_58 = *(undefined4 *)(iVar5 + 0x20);
                  FUN_004e0b00(param_2,local_100,local_dc,0);
                  uVar6 = local_dc[2];
                  FUN_004e0c40(param_3,&local_c4,local_90,0);
                  uVar3 = local_88;
                  FUN_004e0b00(local_dc,local_90,local_dc,0);
                  FUN_004ad6d0(uVar3);
                  FUN_004e0c40(param_4,&local_60,local_90,0);
                  uVar3 = local_88;
                  FUN_004e0b00(local_dc,local_90,local_18,0);
                  local_94 = local_10;
                  FUN_004ad6d0(uVar6);
                  FUN_004ad6d0(uVar3);
                  FUN_004e0c40(param_4,&local_c4,local_dc,0);
                  FUN_004e0c40(param_3,&local_60,local_90,0);
                  FUN_004e0b00(local_dc,local_90,local_dc,0);
                  FUN_004e0c40(local_18,local_dc,local_dc,0);
                  FUN_004e0c40(local_dc,param_1,local_dc,0);
                  FUN_004c7060(local_dc,local_100);
                  iVar5 = FUN_004e4020(local_100);
                  iVar7 = 6;
                  puVar8 = local_100;
                  puVar9 = param_7;
                  if (iVar5 == 0) {
                    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                      *puVar9 = *puVar8;
                      puVar8 = puVar8 + 1;
                      puVar9 = puVar9 + 1;
                    }
                    FUN_004ad6d0(local_94);
                    FUN_004ad6d0(local_dc[2]);
                    FUN_004ad6d0(local_88);
                    iVar5 = FUN_0052f820();
                    if (iVar5 == 0) {
                      return 1;
                    }
                    FUN_004e5630(1,local_ac);
                    *param_5 = local_ac[0];
                    param_5[1] = local_ac[1];
                    param_5[2] = local_ac[2];
                    *param_6 = local_ac[0];
                    param_6[1] = local_ac[1];
                    param_6[2] = local_ac[2];
                    *param_7 = local_ac[0];
                    param_7[1] = local_ac[1];
                    param_7[2] = local_ac[2];
                    return 0;
                  }
                  puVar9 = local_ac;
                  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar9 = *puVar8;
                    puVar8 = puVar8 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  FUN_004ad6d0(local_94);
                  FUN_004ad6d0(local_dc[2]);
                  FUN_004ad6d0(local_88);
                }
                goto LAB_004bf680;
              }
              goto LAB_004bf3fb;
            }
          }
        }
      }
    }
  }
  puVar8 = local_100;
  puVar9 = local_ac;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_004ad6d0(piVar4);
LAB_004bf680:
  *param_5 = local_ac[0];
  param_5[1] = local_ac[1];
  param_5[2] = local_ac[2];
  *param_6 = local_ac[0];
  param_6[1] = local_ac[1];
  param_6[2] = local_ac[2];
  *param_7 = local_ac[0];
  param_7[1] = local_ac[1];
  param_7[2] = local_ac[2];
  return 0;
}


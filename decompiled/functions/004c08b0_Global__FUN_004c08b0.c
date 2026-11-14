// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c08b0
// entry: 004c08b0  size: 2763


undefined4
FUN_004c08b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_168 [2];
  undefined4 local_160;
  undefined4 local_150 [6];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124 [24];
  undefined4 local_10c [2];
  undefined4 local_104;
  undefined1 local_f4 [24];
  int *local_dc;
  undefined4 local_d8 [2];
  undefined4 local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18 [6];
  
  FUN_004e57a0(local_18);
  FUN_004e57c0(local_f4);
  piVar1 = (int *)param_3[2];
  piVar2 = *(int **)(param_5 + 8);
  local_dc = *(int **)(param_4 + 8);
  puVar4 = (undefined4 *)*piVar1;
  local_128 = 0;
  local_138 = 0;
  local_90 = *puVar4;
  local_12c = 0;
  local_134 = 0;
  local_8c = puVar4[1];
  local_130 = 0;
  local_88 = puVar4[2];
  iVar3 = *piVar1;
  local_30 = *(undefined4 *)(iVar3 + 0xc);
  local_2c = *(undefined4 *)(iVar3 + 0x10);
  local_28 = *(undefined4 *)(iVar3 + 0x14);
  iVar3 = *piVar1;
  local_c0 = *(undefined4 *)(iVar3 + 0x18);
  local_bc = *(undefined4 *)(iVar3 + 0x1c);
  local_b8 = *(undefined4 *)(iVar3 + 0x20);
  FUN_004e26b0(&local_30,local_150,0);
  FUN_004e0c40(local_150,param_1,local_a8,0);
  FUN_004e1880(local_a8,local_a8,0);
  iVar3 = FUN_004e4020(local_a8);
  if (iVar3 == 0) {
    puVar4 = local_18;
    puVar5 = local_150;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_134 = local_a0;
    FUN_004e0c40(&local_90,local_a8,local_10c,0);
    FUN_004e0880(local_150,local_10c,local_10c,0);
    FUN_004e0dd0(local_150,local_10c,local_10c,0);
    iVar3 = FUN_004e4020(local_10c);
    if (iVar3 == 0) {
      local_12c = local_104;
      FUN_004e0c40(&local_c0,local_10c,local_48,0);
      iVar3 = FUN_004e4020(local_48);
      if (iVar3 == 0) {
        local_130 = local_40;
        FUN_004e0c40(local_10c,local_10c,local_168,0);
        FUN_004e0c40(local_a8,local_168,local_d8,0);
        iVar3 = FUN_004e4020(local_d8);
        if (iVar3 == 0) {
          FUN_004ad6d0(local_160);
          local_138 = local_d0;
          FUN_004e0b00(param_2,local_48,local_78,0);
          FUN_004e0c40(local_78,local_10c,local_168,0);
          iVar3 = FUN_004e4020(local_168);
          if (iVar3 == 0) {
            FUN_004c7060(local_168,local_150);
            FUN_004ad6d0(local_160);
            FUN_004e26b0(local_f4,local_124,0);
            FUN_004e0c40(local_124,local_150,local_150,0);
            piVar1 = local_dc;
            puVar4 = (undefined4 *)*local_dc;
            *puVar4 = local_150[0];
            puVar4[1] = local_150[1];
            puVar4[2] = local_150[2];
            local_128 = local_70;
            FUN_004e0c40(local_78,local_d8,local_168,0);
            iVar3 = FUN_004e4020(local_168);
            if (iVar3 == 0) {
              FUN_004c7060(local_168,local_150);
              FUN_004ad6d0(local_160);
              FUN_004e0c40(local_f4,&local_c0,local_124,0);
              FUN_004e0c40(local_124,local_150,local_150,0);
              iVar3 = *piVar1;
              *(undefined4 *)(iVar3 + 0xc) = local_150[0];
              *(undefined4 *)(iVar3 + 0x10) = local_150[1];
              *(undefined4 *)(iVar3 + 0x14) = local_150[2];
              FUN_004e0c40(local_78,local_d8,local_168,0);
              FUN_004e0c40(local_168,param_1,local_168,0);
              iVar3 = FUN_004e4020(local_168);
              if (iVar3 == 0) {
                FUN_004c7060(local_168,local_150);
                FUN_004ad6d0(local_160);
                FUN_004e0c40(local_f4,&local_c0,local_124,0);
                FUN_004e0c40(local_124,&local_90,local_124,0);
                FUN_004e26b0(local_124,local_124,0);
                FUN_004e0c40(local_124,local_150,local_150,0);
                iVar3 = *piVar1;
                *(undefined4 *)(iVar3 + 0x18) = local_150[0];
                *(undefined4 *)(iVar3 + 0x1c) = local_150[1];
                *(undefined4 *)(iVar3 + 0x20) = local_150[2];
                FUN_004e0c40(local_10c,local_10c,local_168,0);
                iVar3 = FUN_004e4020(local_168);
                if (iVar3 != 0) {
                  puVar4 = local_10c;
                  goto LAB_004c124e;
                }
                FUN_004c7060(local_168,local_150);
                FUN_004ad6d0(local_160);
                FUN_004e0c40(local_f4,local_150,local_150,0);
                puVar4 = (undefined4 *)*piVar2;
                *puVar4 = local_150[0];
                puVar4[1] = local_150[1];
                puVar4[2] = local_150[2];
                FUN_004e0c40(local_f4,local_48,local_168,0);
                FUN_004e0b00(param_2,local_168,local_168,0);
                FUN_004e0c40(local_168,local_d8,local_168,0);
                FUN_004c7060(local_168,local_150);
                FUN_004e0c40(local_f4,local_150,local_150,0);
                iVar3 = *piVar2;
                *(undefined4 *)(iVar3 + 0xc) = local_150[0];
                *(undefined4 *)(iVar3 + 0x10) = local_150[1];
                *(undefined4 *)(iVar3 + 0x14) = local_150[2];
                iVar3 = *piVar2;
                *(undefined4 *)(iVar3 + 0x24) = local_150[0];
                *(undefined4 *)(iVar3 + 0x28) = local_150[1];
                *(undefined4 *)(iVar3 + 0x2c) = local_150[2];
                FUN_004e0c40(local_168,param_1,local_168,0);
                FUN_004e26b0(local_168,local_168,0);
                iVar3 = FUN_004e4020(local_168);
                if (iVar3 == 0) {
                  FUN_004c7060(local_168,local_150);
                  FUN_004ad6d0(local_160);
                  FUN_004e0c40(local_f4,&local_90,local_124,0);
                  FUN_004e0c40(local_124,local_150,local_150,0);
                  iVar3 = *piVar2;
                  *(undefined4 *)(iVar3 + 0x18) = local_150[0];
                  *(undefined4 *)(iVar3 + 0x1c) = local_150[1];
                  *(undefined4 *)(iVar3 + 0x20) = local_150[2];
                  iVar3 = *piVar2;
                  *(undefined4 *)(iVar3 + 0x48) = local_150[0];
                  *(undefined4 *)(iVar3 + 0x4c) = local_150[1];
                  *(undefined4 *)(iVar3 + 0x50) = local_150[2];
                  FUN_004e0c40(local_78,local_a8,local_168,0);
                  FUN_004e0c40(local_168,local_10c,local_168,0);
                  FUN_004e0c40(local_168,local_f4,local_168,0);
                  FUN_004e0c40(&local_c0,local_d8,local_60,0);
                  FUN_004e0b00(local_60,local_168,local_168,0);
                  FUN_004e0c40(local_168,local_d8,local_168,0);
                  iVar3 = FUN_004e4020(local_168);
                  if (iVar3 == 0) {
                    FUN_004c7060(local_168,local_150);
                    FUN_004ad6d0(local_160);
                    FUN_004ad6d0(local_58);
                    FUN_004e0c40(local_f4,&local_c0,local_124,0);
                    FUN_004e0c40(local_124,local_150,local_150,0);
                    iVar3 = *piVar2;
                    *(undefined4 *)(iVar3 + 0x30) = local_150[0];
                    *(undefined4 *)(iVar3 + 0x34) = local_150[1];
                    *(undefined4 *)(iVar3 + 0x38) = local_150[2];
                    FUN_004e26b0(&local_c0,local_150,0);
                    FUN_004e0c40(local_150,&local_90,local_150,0);
                    FUN_004e0c40(local_150,local_d8,local_60,0);
                    FUN_004e0c40(local_10c,local_a8,local_168,0);
                    FUN_004e0c40(&local_90,local_f4,local_150,0);
                    FUN_004e0c40(local_168,local_150,local_168,0);
                    FUN_004e0b00(local_168,local_18,local_168,0);
                    FUN_004e0c40(local_168,local_78,local_168,0);
                    FUN_004e0880(local_60,local_168,local_168,0);
                    FUN_004e0c40(local_168,local_d8,local_168,0);
                    FUN_004e0c40(local_168,param_1,local_168,0);
                    iVar3 = FUN_004e4020(local_168);
                    if (iVar3 == 0) {
                      FUN_004c7060(local_168,local_150);
                      FUN_004ad6d0(local_58);
                      FUN_004e0c40(local_f4,&local_c0,local_124,0);
                      FUN_004e0c40(local_124,local_150,local_150,0);
                      iVar3 = *piVar2;
                      *(undefined4 *)(iVar3 + 0x3c) = local_150[0];
                      *(undefined4 *)(iVar3 + 0x40) = local_150[1];
                      *(undefined4 *)(iVar3 + 0x44) = local_150[2];
                      iVar3 = *piVar2;
                      *(undefined4 *)(iVar3 + 0x54) = local_150[0];
                      *(undefined4 *)(iVar3 + 0x58) = local_150[1];
                      *(undefined4 *)(iVar3 + 0x5c) = local_150[2];
                      FUN_004e0c40(local_168,param_1,local_168,0);
                      FUN_004e26b0(local_168,local_168,0);
                      iVar3 = FUN_004e4020(local_168);
                      if (iVar3 == 0) {
                        FUN_004c7060(local_168,local_150);
                        FUN_004ad6d0(local_160);
                        FUN_004e0c40(local_f4,&local_c0,local_124,0);
                        FUN_004e0c40(local_124,&local_90,local_124,0);
                        FUN_004e0c40(local_124,local_150,local_150,0);
                        iVar3 = *piVar2;
                        *(undefined4 *)(iVar3 + 0x60) = local_150[0];
                        *(undefined4 *)(iVar3 + 100) = local_150[1];
                        *(undefined4 *)(iVar3 + 0x68) = local_150[2];
                        FUN_004ad6d0(local_130);
                        FUN_004ad6d0(local_134);
                        FUN_004ad6d0(local_12c);
                        FUN_004ad6d0(local_138);
                        FUN_004ad6d0(local_128);
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
          puVar4 = local_168;
        }
        else {
          puVar4 = local_d8;
        }
      }
      else {
        puVar4 = local_48;
      }
    }
    else {
      puVar4 = local_10c;
    }
  }
  else {
    puVar4 = local_a8;
  }
LAB_004c124e:
  puVar5 = param_3;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004ad6d0(local_130);
  FUN_004ad6d0(local_134);
  FUN_004ad6d0(local_12c);
  FUN_004ad6d0(local_138);
  FUN_004ad6d0(local_128);
  iVar3 = FUN_0052f820();
  if (iVar3 != 0) {
    FUN_004e5630(1,param_3);
  }
  return 0;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004cb460
// entry: 004cb460  size: 2952


bool FUN_004cb460(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c [4];
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78 [6];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [6];
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  iVar2 = FUN_004e4000(param_1);
  local_80 = (uint)(iVar2 != 0);
  local_7c = (uint)(iVar2 == 0);
  uVar5 = (uint)*(ushort *)(param_1 + 2);
  uVar8 = (uint)*(ushort *)(param_1 + 4);
  if (uVar5 != uVar8) {
    FUN_004e5630(9,param_2);
    return false;
  }
  FUN_004e5780(&local_60);
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = uVar8 * uVar5;
  local_50 = 0;
  if (0 < iVar2) {
    local_84 = 0;
    local_4c = iVar2;
    do {
      puVar6 = (undefined4 *)(local_84 + *piVar1);
      local_9c[0] = *puVar6;
      local_9c[1] = puVar6[1];
      local_9c[2] = puVar6[2];
      iVar3 = FUN_004e4000(local_9c);
      if ((iVar3 != 0) || (iVar3 = FUN_004e7210(local_9c,&local_60), iVar3 != 0)) {
        if (uVar5 == 2) {
          puVar6 = (undefined4 *)*piVar1;
          local_9c[0] = *puVar6;
          local_9c[1] = puVar6[1];
          local_9c[2] = puVar6[2];
          iVar2 = *piVar1;
          local_9c[3] = *(undefined4 *)(iVar2 + 0x30);
          local_8c = *(undefined4 *)(iVar2 + 0x34);
          local_88 = *(undefined4 *)(iVar2 + 0x38);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x24);
          local_b0 = *(undefined4 *)(iVar2 + 0x28);
          local_ac = *(undefined4 *)(iVar2 + 0x2c);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0x54);
          local_a4 = *(undefined4 *)(iVar2 + 0x58);
          local_a0 = *(undefined4 *)(iVar2 + 0x5c);
          FUN_004e0c40(local_9c,&local_b4,local_78,1);
          iVar2 = *piVar1;
          local_9c[0] = *(undefined4 *)(iVar2 + 0xc);
          local_9c[1] = *(undefined4 *)(iVar2 + 0x10);
          local_9c[2] = *(undefined4 *)(iVar2 + 0x14);
          iVar2 = *piVar1;
          local_9c[3] = *(undefined4 *)(iVar2 + 0x3c);
          local_8c = *(undefined4 *)(iVar2 + 0x40);
          local_88 = *(undefined4 *)(iVar2 + 0x44);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x18);
          local_b0 = *(undefined4 *)(iVar2 + 0x1c);
          local_ac = *(undefined4 *)(iVar2 + 0x20);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0x48);
          local_a4 = *(undefined4 *)(iVar2 + 0x4c);
          local_a0 = *(undefined4 *)(iVar2 + 0x50);
          FUN_004e0c40(local_9c,&local_b4,local_9c,1);
          FUN_004e0b00(local_78,local_9c,local_9c,1);
          FUN_004e3e70(local_9c,local_9c);
          puVar6 = local_9c;
          puVar7 = param_2;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          iVar2 = FUN_004e4020(param_2);
          return iVar2 == 0;
        }
        if (uVar5 == 3) {
          puVar6 = (undefined4 *)*piVar1;
          local_9c[0] = *puVar6;
          local_9c[1] = puVar6[1];
          local_9c[2] = puVar6[2];
          iVar2 = *piVar1;
          local_9c[3] = *(undefined4 *)(iVar2 + 0x6c);
          local_8c = *(undefined4 *)(iVar2 + 0x70);
          local_88 = *(undefined4 *)(iVar2 + 0x74);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x30);
          local_b0 = *(undefined4 *)(iVar2 + 0x34);
          local_ac = *(undefined4 *)(iVar2 + 0x38);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0x9c);
          local_a4 = *(undefined4 *)(iVar2 + 0xa0);
          local_a0 = *(undefined4 *)(iVar2 + 0xa4);
          FUN_004e0c40(local_9c,&local_b4,local_78,1);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x60);
          local_b0 = *(undefined4 *)(iVar2 + 100);
          local_ac = *(undefined4 *)(iVar2 + 0x68);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0xcc);
          local_a4 = *(undefined4 *)(iVar2 + 0xd0);
          local_a0 = *(undefined4 *)(iVar2 + 0xd4);
          FUN_004e0c40(local_78,&local_b4,local_78,1);
          puVar6 = local_78;
          puVar7 = param_2;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          iVar2 = *piVar1;
          local_9c[0] = *(undefined4 *)(iVar2 + 0xc);
          local_9c[1] = *(undefined4 *)(iVar2 + 0x10);
          local_9c[2] = *(undefined4 *)(iVar2 + 0x14);
          iVar2 = *piVar1;
          local_9c[3] = *(undefined4 *)(iVar2 + 0x78);
          local_8c = *(undefined4 *)(iVar2 + 0x7c);
          local_88 = *(undefined4 *)(iVar2 + 0x80);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x3c);
          local_b0 = *(undefined4 *)(iVar2 + 0x40);
          local_ac = *(undefined4 *)(iVar2 + 0x44);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0xa8);
          local_a4 = *(undefined4 *)(iVar2 + 0xac);
          local_a0 = *(undefined4 *)(iVar2 + 0xb0);
          FUN_004e0c40(local_9c,&local_b4,local_78,1);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x48);
          local_b0 = *(undefined4 *)(iVar2 + 0x4c);
          local_ac = *(undefined4 *)(iVar2 + 0x50);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0xb4);
          local_a4 = *(undefined4 *)(iVar2 + 0xb8);
          local_a0 = *(undefined4 *)(iVar2 + 0xbc);
          FUN_004e0c40(local_78,&local_b4,local_78,1);
          FUN_004e0880(param_2,local_78,param_2,1);
          iVar2 = *piVar1;
          local_9c[0] = *(undefined4 *)(iVar2 + 0x18);
          local_9c[1] = *(undefined4 *)(iVar2 + 0x1c);
          local_9c[2] = *(undefined4 *)(iVar2 + 0x20);
          iVar2 = *piVar1;
          local_9c[3] = *(undefined4 *)(iVar2 + 0x84);
          local_8c = *(undefined4 *)(iVar2 + 0x88);
          local_88 = *(undefined4 *)(iVar2 + 0x8c);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x24);
          local_b0 = *(undefined4 *)(iVar2 + 0x28);
          local_ac = *(undefined4 *)(iVar2 + 0x2c);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0x90);
          local_a4 = *(undefined4 *)(iVar2 + 0x94);
          local_a0 = *(undefined4 *)(iVar2 + 0x98);
          FUN_004e0c40(local_9c,&local_b4,local_78,1);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x54);
          local_b0 = *(undefined4 *)(iVar2 + 0x58);
          local_ac = *(undefined4 *)(iVar2 + 0x5c);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0xc0);
          local_a4 = *(undefined4 *)(iVar2 + 0xc4);
          local_a0 = *(undefined4 *)(iVar2 + 200);
          FUN_004e0c40(local_78,&local_b4,local_78,1);
          FUN_004e0880(param_2,local_78,param_2,1);
          iVar2 = *piVar1;
          local_9c[0] = *(undefined4 *)(iVar2 + 0x18);
          local_9c[1] = *(undefined4 *)(iVar2 + 0x1c);
          local_9c[2] = *(undefined4 *)(iVar2 + 0x20);
          iVar2 = *piVar1;
          local_9c[3] = *(undefined4 *)(iVar2 + 0x84);
          local_8c = *(undefined4 *)(iVar2 + 0x88);
          local_88 = *(undefined4 *)(iVar2 + 0x8c);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x30);
          local_b0 = *(undefined4 *)(iVar2 + 0x34);
          local_ac = *(undefined4 *)(iVar2 + 0x38);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0x9c);
          local_a4 = *(undefined4 *)(iVar2 + 0xa0);
          local_a0 = *(undefined4 *)(iVar2 + 0xa4);
          FUN_004e0c40(local_9c,&local_b4,local_78,1);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x48);
          local_b0 = *(undefined4 *)(iVar2 + 0x4c);
          local_ac = *(undefined4 *)(iVar2 + 0x50);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0xb4);
          local_a4 = *(undefined4 *)(iVar2 + 0xb8);
          local_a0 = *(undefined4 *)(iVar2 + 0xbc);
          FUN_004e0c40(local_78,&local_b4,local_78,1);
          FUN_004e0b00(param_2,local_78,param_2,1);
          iVar2 = *piVar1;
          local_9c[0] = *(undefined4 *)(iVar2 + 0xc);
          local_9c[1] = *(undefined4 *)(iVar2 + 0x10);
          local_9c[2] = *(undefined4 *)(iVar2 + 0x14);
          iVar2 = *piVar1;
          local_9c[3] = *(undefined4 *)(iVar2 + 0x78);
          local_8c = *(undefined4 *)(iVar2 + 0x7c);
          local_88 = *(undefined4 *)(iVar2 + 0x80);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x24);
          local_b0 = *(undefined4 *)(iVar2 + 0x28);
          local_ac = *(undefined4 *)(iVar2 + 0x2c);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0x90);
          local_a4 = *(undefined4 *)(iVar2 + 0x94);
          local_a0 = *(undefined4 *)(iVar2 + 0x98);
          FUN_004e0c40(local_9c,&local_b4,local_78,1);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x60);
          local_b0 = *(undefined4 *)(iVar2 + 100);
          local_ac = *(undefined4 *)(iVar2 + 0x68);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0xcc);
          local_a4 = *(undefined4 *)(iVar2 + 0xd0);
          local_a0 = *(undefined4 *)(iVar2 + 0xd4);
          FUN_004e0c40(local_78,&local_b4,local_78,1);
          FUN_004e0b00(param_2,local_78,param_2,1);
          puVar6 = (undefined4 *)*piVar1;
          local_9c[0] = *puVar6;
          local_9c[1] = puVar6[1];
          local_9c[2] = puVar6[2];
          iVar2 = *piVar1;
          local_9c[3] = *(undefined4 *)(iVar2 + 0x6c);
          local_8c = *(undefined4 *)(iVar2 + 0x70);
          local_88 = *(undefined4 *)(iVar2 + 0x74);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x3c);
          local_b0 = *(undefined4 *)(iVar2 + 0x40);
          local_ac = *(undefined4 *)(iVar2 + 0x44);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0xa8);
          local_a4 = *(undefined4 *)(iVar2 + 0xac);
          local_a0 = *(undefined4 *)(iVar2 + 0xb0);
          FUN_004e0c40(local_9c,&local_b4,local_78,1);
          iVar2 = *piVar1;
          local_b4 = *(undefined4 *)(iVar2 + 0x54);
          local_b0 = *(undefined4 *)(iVar2 + 0x58);
          local_ac = *(undefined4 *)(iVar2 + 0x5c);
          iVar2 = *piVar1;
          local_a8 = *(undefined4 *)(iVar2 + 0xc0);
          local_a4 = *(undefined4 *)(iVar2 + 0xc4);
          local_a0 = *(undefined4 *)(iVar2 + 200);
          FUN_004e0c40(local_78,&local_b4,local_78,1);
          FUN_004e0b00(param_2,local_78,param_2,1);
          FUN_004e3e70(param_2,param_2);
          iVar2 = FUN_004e4020(param_2);
          return iVar2 == 0;
        }
        piVar4 = (int *)FUN_004ad630(((local_80 + 1) * uVar8 * uVar5 * 3 & 0x3fff) << 2);
        if (piVar4 == (int *)0x0) {
          FUN_004e5630(4,param_2);
          return false;
        }
        FUN_004f96c0(local_3c,piVar4,uVar5,uVar8,local_7c);
        local_84 = FUN_004ad630((uVar5 * 3 & 0x3fff) << 2);
        if (local_84 != 0) {
          FUN_004f9690(local_18,local_84,uVar5,1);
          uVar5 = (local_80 + 1) * uVar8 * uVar5;
          if (0 < (int)uVar5) {
            iVar2 = 0;
            local_7c = uVar5;
            do {
              puVar7 = (undefined4 *)(iVar2 + *piVar1);
              puVar6 = (undefined4 *)(iVar2 + *piVar4);
              iVar2 = iVar2 + 0xc;
              *puVar6 = *puVar7;
              puVar6[1] = puVar7[1];
              puVar6[2] = puVar7[2];
              local_7c = local_7c - 1;
            } while (local_7c != 0);
          }
          local_54 = 0;
          iVar2 = FUN_004cd860(local_3c,0,local_18,&local_54);
          if (iVar2 == 1) {
            iVar2 = FUN_004cde80(local_3c,local_18,&local_54);
            if (iVar2 == 1) {
              iVar2 = FUN_0052f820();
              if (iVar2 != 0) {
                FUN_004ad6d0(piVar4);
                FUN_004ad6d0(local_84);
                FUN_004e5630(1,param_2);
                return false;
              }
              FUN_004e57a0(&local_48);
              local_9c[0] = local_48;
              local_9c[1] = local_44;
              local_9c[2] = local_40;
              if (local_80 == 0) {
                if (uVar8 != 0) {
                  iVar2 = uVar8 * 3;
                  iVar3 = 0;
                  do {
                    puVar6 = (undefined4 *)(iVar3 + *piVar4);
                    local_b4 = *puVar6;
                    local_b0 = puVar6[1];
                    local_ac = puVar6[2];
                    FUN_004e0c40(local_9c,&local_b4,local_9c,1);
                    iVar3 = iVar3 + (iVar2 + 3) * 4;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
              }
              else if (uVar8 != 0) {
                local_80 = 0;
                iVar3 = (uVar8 * 3 + 3) * 4;
                iVar2 = local_4c * 0xc;
                do {
                  puVar6 = (undefined4 *)(local_80 + *piVar4);
                  local_b4 = *puVar6;
                  local_b0 = puVar6[1];
                  local_ac = puVar6[2];
                  puVar6 = (undefined4 *)(iVar2 + *piVar4);
                  local_a8 = *puVar6;
                  local_a4 = puVar6[1];
                  local_a0 = puVar6[2];
                  FUN_004e0c40(local_9c,&local_b4,local_9c,1);
                  local_80 = local_80 + iVar3;
                  iVar2 = iVar2 + iVar3;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              FUN_004ad6d0(piVar4);
              FUN_004ad6d0(local_84);
              FUN_004e5070(local_54,&local_b4);
              FUN_004e57c0(local_24);
              FUN_004e6dd0(&local_b4,local_24,&local_b4);
              FUN_004e76c0(&local_b4,&local_b4);
              iVar2 = FUN_004e7210(&local_b4,&local_60);
              if (iVar2 == -1) {
                FUN_004e5630(3,param_2);
                return false;
              }
              if (iVar2 != 0) {
                FUN_004e26b0(local_9c,local_9c,1);
              }
              FUN_004e3e70(local_9c,local_9c);
              puVar6 = local_9c;
              puVar7 = param_2;
              for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
              iVar2 = FUN_004e4020(param_2);
              return iVar2 == 0;
            }
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(local_84);
          }
          else {
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(local_84);
          }
          if (iVar2 == 2) {
            *param_2 = local_60;
            param_2[1] = local_5c;
            param_2[2] = local_58;
            return true;
          }
          puVar6 = local_3c;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *param_2 = *puVar6;
            puVar6 = puVar6 + 1;
            param_2 = param_2 + 1;
          }
          return false;
        }
        FUN_004e5630(4,param_2);
        FUN_004ad6d0(piVar4);
        return false;
      }
      local_50 = local_50 + 1;
      local_84 = local_84 + 0xc;
    } while (local_50 < iVar2);
  }
  *param_2 = local_60;
  param_2[1] = local_5c;
  param_2[2] = local_58;
  return true;
}


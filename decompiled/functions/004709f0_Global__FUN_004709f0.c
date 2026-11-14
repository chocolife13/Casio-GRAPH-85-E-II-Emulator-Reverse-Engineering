// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004709f0
// entry: 004709f0  size: 1859


undefined4 FUN_004709f0(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined1 local_1d4 [4];
  undefined4 local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  int local_1c4;
  undefined1 local_1c0 [12];
  undefined4 local_1b4 [9];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_13c [24];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
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
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78 [21];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1cc = 1;
  local_1d0 = 1;
  do {
    if (*(short *)(param_1 + 4) == 0) {
      *(undefined2 *)(param_1 + 8) = 0xb;
      puVar10 = &DAT_00582250;
      local_124 = *(undefined4 *)(param_1 + 0x60);
      local_120 = *(undefined4 *)(param_1 + 100);
      local_118 = *(undefined4 *)(param_1 + 0xb4);
      local_11c = *(undefined4 *)(param_1 + 0x68);
      local_114 = *(undefined4 *)(param_1 + 0xb8);
      local_110 = *(undefined4 *)(param_1 + 0xbc);
      local_10c = *(undefined4 *)(param_1 + 0x78);
      local_108 = *(undefined4 *)(param_1 + 0x7c);
      local_100 = *(undefined4 *)(param_1 + 0x6c);
      local_104 = *(undefined4 *)(param_1 + 0x80);
      local_fc = *(undefined4 *)(param_1 + 0x70);
      local_f8 = *(undefined4 *)(param_1 + 0x74);
      local_f4 = *(undefined4 *)(param_1 + 0xc0);
      local_f0 = *(undefined4 *)(param_1 + 0xc4);
      local_e8 = *(undefined4 *)(param_1 + 0x84);
      local_ec = *(undefined4 *)(param_1 + 200);
      local_e4 = *(undefined4 *)(param_1 + 0x88);
      local_e0 = *(undefined4 *)(param_1 + 0x8c);
    }
    else {
      *(undefined2 *)(param_1 + 8) = 9;
      puVar10 = &DAT_0058222c;
      local_124 = *(undefined4 *)(param_1 + 0x30);
      local_120 = *(undefined4 *)(param_1 + 0x34);
      local_11c = *(undefined4 *)(param_1 + 0x38);
    }
    iVar3 = FUN_004673d0(&local_1cc,&local_1d0,param_1,local_13c,puVar10);
    switch(iVar3) {
    case 2:
switchD_00470b46_caseD_2:
      return 0xffffffff;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      cVar2 = FUN_005260a0();
      local_dc = (int)cVar2;
      local_d8 = (int)*(short *)(param_1 + 6);
      puVar9 = (undefined4 *)(param_1 + 0x78);
      local_d4 = *(undefined4 *)(param_1 + 0x60);
      local_d0 = *(undefined4 *)(param_1 + 100);
      local_cc = *(undefined4 *)(param_1 + 0x68);
      local_c8 = *(undefined4 *)(param_1 + 0x6c);
      local_c4 = *(undefined4 *)(param_1 + 0x70);
      local_c0 = *(undefined4 *)(param_1 + 0x74);
      local_bc = *(undefined4 *)(param_1 + 0xb4);
      local_b8 = *(undefined4 *)(param_1 + 0xb8);
      local_b4 = *(undefined4 *)(param_1 + 0xbc);
      local_b0 = *(undefined4 *)(param_1 + 0xc0);
      local_ac = *(undefined4 *)(param_1 + 0xc4);
      local_a4 = *puVar9;
      local_a8 = *(undefined4 *)(param_1 + 200);
      local_a0 = *(undefined4 *)(param_1 + 0x7c);
      local_9c = *(undefined4 *)(param_1 + 0x80);
      local_98 = *(undefined4 *)(param_1 + 0x84);
      local_94 = *(undefined4 *)(param_1 + 0x88);
      local_90 = *(undefined4 *)(param_1 + 0x8c);
      local_8c = (int)*(short *)(param_1 + 0xe);
      local_88 = (int)*(short *)(param_1 + 0x10);
      local_84 = (int)*(short *)(param_1 + 0x16);
      local_80 = (int)*(short *)(param_1 + 0x18);
      local_7c = (int)*(short *)(param_1 + 10);
      FUN_00414db0(local_1d4);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar4 = FUN_00459290((int)*(short *)(param_1 + 4),&local_dc);
      if (iVar4 == 0) {
        FUN_00414db0(local_1d4);
        local_1c4 = (int)*(short *)(param_1 + 6);
        sVar1 = *(short *)(param_1 + 4);
        puVar6 = local_78;
        puVar7 = local_1b4;
        for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        if (sVar1 == 0) {
          local_190 = *(undefined4 *)(param_1 + 0x60);
          local_18c = *(undefined4 *)(param_1 + 100);
          local_188 = *(undefined4 *)(param_1 + 0x68);
          local_184 = *(undefined4 *)(param_1 + 0x6c);
          local_180 = *(undefined4 *)(param_1 + 0x70);
          local_17c = *(undefined4 *)(param_1 + 0x74);
          local_178 = *(undefined4 *)(param_1 + 0xb4);
          local_174 = *(undefined4 *)(param_1 + 0xb8);
          local_170 = *(undefined4 *)(param_1 + 0xbc);
          local_16c = *(undefined4 *)(param_1 + 0xc0);
          local_168 = *(undefined4 *)(param_1 + 0xc4);
          local_164 = *(undefined4 *)(param_1 + 200);
          if (*(short *)(param_1 + 10) == 0) {
            local_15c = *(undefined4 *)(param_1 + 0x7c);
            local_160 = *puVar9;
            local_158 = *(undefined4 *)(param_1 + 0x80);
            local_150 = *(undefined4 *)(param_1 + 0x88);
            local_154 = *(undefined4 *)(param_1 + 0x84);
            local_14c = *(undefined4 *)(param_1 + 0x8c);
            local_1c8 = 10;
          }
          else {
            local_15c = local_8;
            local_150 = *(undefined4 *)(param_1 + 0x7c);
            local_160 = local_c;
            local_154 = *puVar9;
            local_158 = local_4;
            local_14c = *(undefined4 *)(param_1 + 0x80);
            local_144 = *(undefined4 *)(param_1 + 0x88);
            local_148 = *(undefined4 *)(param_1 + 0x84);
            local_140 = *(undefined4 *)(param_1 + 0x8c);
            local_1c8 = 0xb;
          }
          iVar4 = FUN_0046e960((int)*(short *)(param_1 + 0x22),local_1c8 + -1,local_1b4);
          if (iVar4 != 0) break;
          if ((iVar3 == 5) || (iVar3 == 6)) {
            if (*(short *)(param_1 + 10) == 0) {
              iVar4 = 0;
              if (0 < local_1c8) {
                puVar8 = local_1c0;
                puVar9 = &DAT_005822d0;
                do {
                  FUN_0046e7f0(puVar8,param_1,*puVar9);
                  iVar4 = iVar4 + 1;
                  puVar9 = puVar9 + 1;
                  puVar8 = puVar8 + 0xc;
                } while (iVar4 < local_1c8);
              }
            }
            else {
              iVar4 = 0;
              if (0 < local_1c8) {
                puVar8 = local_1c0;
                puVar9 = &DAT_005822f8;
                do {
                  FUN_0046e7f0(puVar8,param_1,*puVar9);
                  iVar4 = iVar4 + 1;
                  puVar9 = puVar9 + 1;
                  puVar8 = puVar8 + 0xc;
                } while (iVar4 < local_1c8);
              }
            }
            uVar5 = FUN_00463c40((int)*(short *)(param_1 + 4),&local_dc,(iVar3 != 5) + '\"');
            switch(uVar5) {
            case 0xfffffff2:
            case 0xfffffffa:
            case 0xfffffffe:
            case 0:
switchD_00471105_caseD_fffffff2:
              *(undefined2 *)(param_1 + 2) = 0;
              break;
            case 0xfffffff5:
switchD_00470e83_caseD_fffffff5:
              *(undefined2 *)(param_1 + 2) = 1;
              break;
            case 0xffffffff:
              goto switchD_00470b46_caseD_2;
            }
            break;
          }
          if (*(short *)(param_1 + 10) == 0) {
            puVar9 = &DAT_005822d0;
          }
          else {
            puVar9 = &DAT_005822f8;
          }
        }
        else {
          if (*(short *)(param_1 + 10) == 0) {
            local_1c8 = 10;
          }
          else {
            local_15c = local_8;
            local_160 = local_c;
            local_158 = local_4;
            local_150 = local_20;
            local_154 = local_24;
            local_14c = local_1c;
            local_144 = local_14;
            local_148 = local_18;
            local_140 = local_10;
            local_1c8 = 0xb;
          }
          iVar4 = FUN_0046e960((int)*(short *)(param_1 + 0x22),local_1c8 + -1,local_1b4);
          if (iVar4 != 0) break;
          if ((iVar3 == 5) || (iVar3 == 6)) {
            if (*(short *)(param_1 + 10) == 0) {
              iVar4 = 0;
              if (0 < local_1c8) {
                puVar8 = local_1c0;
                puVar9 = &DAT_0058227c;
                do {
                  FUN_0046e7f0(puVar8,param_1,*puVar9);
                  iVar4 = iVar4 + 1;
                  puVar9 = puVar9 + 1;
                  puVar8 = puVar8 + 0xc;
                } while (iVar4 < local_1c8);
              }
            }
            else {
              iVar4 = 0;
              if (0 < local_1c8) {
                puVar8 = local_1c0;
                puVar9 = &DAT_005822a4;
                do {
                  FUN_0046e7f0(puVar8,param_1,*puVar9);
                  iVar4 = iVar4 + 1;
                  puVar9 = puVar9 + 1;
                  puVar8 = puVar8 + 0xc;
                } while (iVar4 < local_1c8);
              }
            }
            uVar5 = FUN_00463c40((int)*(short *)(param_1 + 4),&local_dc,(iVar3 != 5) + '\"');
            switch(uVar5) {
            case 0xfffffff2:
            case 0xfffffffa:
            case 0xfffffffe:
            case 0:
              goto switchD_00471105_caseD_fffffff2;
            case 0xfffffff5:
              goto switchD_00470e83_caseD_fffffff5;
            case 0xffffffff:
              goto switchD_00470b46_caseD_2;
            }
            break;
          }
          if (*(short *)(param_1 + 10) == 0) {
            puVar9 = &DAT_0058227c;
          }
          else {
            puVar9 = &DAT_005822a4;
          }
        }
        iVar3 = FUN_00468630(&local_1c8,puVar9,0,param_1);
        if (iVar3 == 2) {
          return 0xffffffff;
        }
        break;
      }
      FUN_00414db0(local_1d4);
      FUN_0052b240(iVar4);
      break;
    case 6:
      if (*(short *)(param_1 + 2) == 1) {
        uVar5 = FUN_00463c40((int)*(short *)(param_1 + 4),&local_dc,0x23);
        switch(uVar5) {
        case 0xfffffff2:
          goto switchD_00471105_caseD_fffffff2;
        case 0xfffffff5:
        case 0xfffffffa:
        case 0xfffffffe:
        case 0:
          *(undefined2 *)(param_1 + 2) = 1;
          break;
        case 0xffffffff:
          goto switchD_00470b46_caseD_2;
        }
      }
    }
  } while( true );
}


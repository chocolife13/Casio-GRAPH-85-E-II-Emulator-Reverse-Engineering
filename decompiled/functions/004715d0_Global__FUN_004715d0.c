// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004715d0
// entry: 004715d0  size: 1245


undefined4 FUN_004715d0(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined1 local_1b8 [4];
  undefined4 local_1b4;
  undefined4 local_1b0;
  int local_1ac;
  int local_1a8;
  undefined1 local_1a4 [12];
  undefined4 local_198 [6];
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
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
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
  undefined4 local_dc;
  undefined4 local_d8 [6];
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
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1b0 = 1;
  local_1b4 = 1;
  do {
    *(undefined2 *)(param_1 + 8) = 8;
    if (*(short *)(param_1 + 4) == 0) {
      puVar10 = &DAT_0058239c;
      local_48 = *(undefined4 *)(param_1 + 0xb4);
      local_44 = *(undefined4 *)(param_1 + 0xb8);
      local_3c = *(undefined4 *)(param_1 + 0x78);
      local_40 = *(undefined4 *)(param_1 + 0xbc);
      local_38 = *(undefined4 *)(param_1 + 0x7c);
      local_34 = *(undefined4 *)(param_1 + 0x80);
      local_30 = *(undefined4 *)(param_1 + 0xc0);
      local_2c = *(undefined4 *)(param_1 + 0xc4);
      local_24 = *(undefined4 *)(param_1 + 0x84);
      local_28 = *(undefined4 *)(param_1 + 200);
      local_20 = *(undefined4 *)(param_1 + 0x88);
      local_1c = *(undefined4 *)(param_1 + 0x8c);
    }
    else {
      puVar10 = &DAT_0058237c;
    }
    iVar3 = FUN_004673d0(&local_1b0,&local_1b4,param_1,local_60,puVar10);
    switch(iVar3) {
    case 2:
switchD_004716d3_caseD_2:
      return 0xffffffff;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      cVar2 = FUN_005260a0();
      local_118 = (int)*(short *)(param_1 + 0xe);
      local_120 = (int)cVar2;
      local_11c = (int)*(short *)(param_1 + 6);
      local_114 = (int)*(short *)(param_1 + 0x10);
      local_110 = (int)*(short *)(param_1 + 0x16);
      local_10c = (int)*(short *)(param_1 + 0x18);
      local_108 = *(undefined4 *)(param_1 + 0xb4);
      local_104 = *(undefined4 *)(param_1 + 0xb8);
      local_100 = *(undefined4 *)(param_1 + 0xbc);
      local_fc = *(undefined4 *)(param_1 + 0xc0);
      local_f8 = *(undefined4 *)(param_1 + 0xc4);
      local_f4 = *(undefined4 *)(param_1 + 200);
      local_f0 = *(undefined4 *)(param_1 + 0x78);
      local_ec = *(undefined4 *)(param_1 + 0x7c);
      local_e8 = *(undefined4 *)(param_1 + 0x80);
      local_e4 = *(undefined4 *)(param_1 + 0x84);
      local_e0 = *(undefined4 *)(param_1 + 0x88);
      local_dc = *(undefined4 *)(param_1 + 0x8c);
      FUN_00414db0(local_1b8);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar4 = FUN_0045ad00((int)*(short *)(param_1 + 4),&local_120);
      if (iVar4 == 0) {
        FUN_00414db0(local_1b8);
        sVar1 = *(short *)(param_1 + 4);
        iVar4 = 9;
        puVar9 = local_d8;
        puVar7 = local_198;
        for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
        }
        local_1a8 = (int)*(short *)(param_1 + 6);
        local_1ac = 9;
        if (sVar1 == 0) {
          local_180 = *(undefined4 *)(param_1 + 0xb4);
          local_17c = *(undefined4 *)(param_1 + 0xb8);
          local_178 = *(undefined4 *)(param_1 + 0xbc);
          local_174 = *(undefined4 *)(param_1 + 0xc0);
          local_170 = *(undefined4 *)(param_1 + 0xc4);
          local_16c = *(undefined4 *)(param_1 + 200);
          local_168 = *(undefined4 *)(param_1 + 0x78);
          local_164 = *(undefined4 *)(param_1 + 0x7c);
          local_160 = *(undefined4 *)(param_1 + 0x80);
          local_15c = *(undefined4 *)(param_1 + 0x84);
          local_158 = *(undefined4 *)(param_1 + 0x88);
          iVar4 = 7;
          local_1ac = 7;
          local_154 = *(undefined4 *)(param_1 + 0x8c);
        }
        else {
          local_180 = local_a8;
          local_17c = local_a4;
          local_178 = local_a0;
          local_174 = local_9c;
          local_170 = local_98;
          local_16c = local_94;
          local_168 = local_c0;
          local_164 = local_bc;
          local_160 = local_b8;
          local_15c = local_b4;
          local_158 = local_b0;
          local_154 = local_ac;
        }
        iVar4 = FUN_0046e960((int)*(short *)(param_1 + 0x22),iVar4 + -1,local_198);
        if (iVar4 == 0) {
          if ((iVar3 != 5) && (iVar3 != 6)) {
            if (*(short *)(param_1 + 4) == 0) {
              puVar9 = &DAT_005823e0;
            }
            else {
              puVar9 = &DAT_005823bc;
            }
            iVar3 = FUN_00468630(&local_1ac,puVar9,0,param_1);
            if (iVar3 == 2) {
              return 0xffffffff;
            }
            break;
          }
          if (*(short *)(param_1 + 4) == 0) {
            iVar4 = 0;
            if (0 < local_1ac) {
              puVar8 = local_1a4;
              puVar9 = &DAT_005823e0;
              do {
                FUN_0046e7f0(puVar8,param_1,*puVar9);
                iVar4 = iVar4 + 1;
                puVar9 = puVar9 + 1;
                puVar8 = puVar8 + 0xc;
              } while (iVar4 < local_1ac);
            }
          }
          else {
            iVar4 = 0;
            if (0 < local_1ac) {
              puVar8 = local_1a4;
              puVar9 = &DAT_005823bc;
              do {
                FUN_0046e7f0(puVar8,param_1,*puVar9);
                iVar4 = iVar4 + 1;
                puVar9 = puVar9 + 1;
                puVar8 = puVar8 + 0xc;
              } while (iVar4 < local_1ac);
            }
          }
          uVar5 = FUN_00463e90((int)*(short *)(param_1 + 4),&local_120,(iVar3 != 5) + '\"');
          switch(uVar5) {
          case 0xfffffff2:
          case 0xfffffffa:
          case 0xfffffffe:
          case 0:
            goto switchD_00471a7f_caseD_fffffff2;
          default:
            break;
          case 0xfffffff5:
            *(undefined2 *)(param_1 + 2) = 1;
            break;
          case 0xffffffff:
            goto switchD_004716d3_caseD_2;
          }
        }
      }
      else {
        FUN_00414db0(local_1b8);
        FUN_0052b240(iVar4);
      }
      break;
    case 6:
      if (*(short *)(param_1 + 2) == 1) {
        uVar5 = FUN_00463e90((int)*(short *)(param_1 + 4),&local_120,0x23);
        switch(uVar5) {
        case 0xfffffff2:
switchD_00471a7f_caseD_fffffff2:
          *(undefined2 *)(param_1 + 2) = 0;
          break;
        case 0xfffffff5:
        case 0xfffffffa:
        case 0xfffffffe:
        case 0:
          *(undefined2 *)(param_1 + 2) = 1;
          break;
        case 0xffffffff:
          goto switchD_004716d3_caseD_2;
        }
      }
    }
  } while( true );
}


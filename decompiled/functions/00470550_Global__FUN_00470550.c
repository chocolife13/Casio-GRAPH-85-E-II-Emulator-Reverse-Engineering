// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00470550
// entry: 00470550  size: 1096


undefined4 FUN_00470550(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined1 local_174 [4];
  undefined4 local_170;
  undefined4 local_16c;
  int local_168;
  int local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154 [6];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_dc [24];
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
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c [15];
  
  local_16c = 1;
  local_170 = 1;
  do {
    if (*(short *)(param_1 + 4) == 0) {
      puVar8 = &DAT_005821dc;
      *(undefined2 *)(param_1 + 8) = 8;
      local_c4 = *(undefined4 *)(param_1 + 0x30);
      local_c0 = *(undefined4 *)(param_1 + 0x34);
      local_b8 = *(undefined4 *)(param_1 + 0x60);
      local_bc = *(undefined4 *)(param_1 + 0x38);
      local_b4 = *(undefined4 *)(param_1 + 100);
      local_b0 = *(undefined4 *)(param_1 + 0x68);
      local_ac = *(undefined4 *)(param_1 + 0xb4);
      local_a8 = *(undefined4 *)(param_1 + 0xb8);
      local_a0 = *(undefined4 *)(param_1 + 0x78);
      local_a4 = *(undefined4 *)(param_1 + 0xbc);
      local_9c = *(undefined4 *)(param_1 + 0x7c);
      local_98 = *(undefined4 *)(param_1 + 0x80);
    }
    else {
      puVar8 = &DAT_005821bc;
      *(undefined2 *)(param_1 + 8) = 7;
      local_c4 = *(undefined4 *)(param_1 + 0x30);
      local_c0 = *(undefined4 *)(param_1 + 0x34);
      local_bc = *(undefined4 *)(param_1 + 0x38);
    }
    iVar3 = FUN_004673d0(&local_16c,&local_170,param_1,local_dc,puVar8);
    switch(iVar3) {
    case 2:
switchD_00470677_caseD_2:
      return 0xffffffff;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      cVar2 = FUN_005260a0();
      local_78 = (int)*(short *)(param_1 + 6);
      local_7c = (int)cVar2;
      local_74 = *(undefined4 *)(param_1 + 0x30);
      local_70 = *(undefined4 *)(param_1 + 0x34);
      local_68 = *(undefined4 *)(param_1 + 0x60);
      local_6c = *(undefined4 *)(param_1 + 0x38);
      local_64 = *(undefined4 *)(param_1 + 100);
      local_60 = *(undefined4 *)(param_1 + 0x68);
      local_5c = *(undefined4 *)(param_1 + 0xb4);
      local_58 = *(undefined4 *)(param_1 + 0xb8);
      local_54 = *(undefined4 *)(param_1 + 0xbc);
      local_50 = *(undefined4 *)(param_1 + 0x78);
      local_4c = *(undefined4 *)(param_1 + 0x7c);
      local_44 = (int)*(short *)(param_1 + 0xe);
      local_48 = *(undefined4 *)(param_1 + 0x80);
      local_40 = (int)*(short *)(param_1 + 0x16);
      FUN_00414db0(local_174);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar4 = FUN_00458ea0((int)*(short *)(param_1 + 4),&local_7c);
      if (iVar4 == 0) {
        FUN_00414db0(local_174);
        local_160 = *(undefined4 *)(param_1 + 0x30);
        local_158 = *(undefined4 *)(param_1 + 0x38);
        local_15c = *(undefined4 *)(param_1 + 0x34);
        local_164 = (int)*(short *)(param_1 + 6);
        sVar1 = *(short *)(param_1 + 4);
        puVar7 = local_3c;
        puVar6 = local_154;
        for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
        }
        if (sVar1 == 0) {
          local_13c = *(undefined4 *)(param_1 + 0x60);
          local_138 = *(undefined4 *)(param_1 + 100);
          local_134 = *(undefined4 *)(param_1 + 0x68);
          local_130 = *(undefined4 *)(param_1 + 0xb4);
          local_12c = *(undefined4 *)(param_1 + 0xb8);
          local_128 = *(undefined4 *)(param_1 + 0xbc);
          local_124 = *(undefined4 *)(param_1 + 0x78);
          local_120 = *(undefined4 *)(param_1 + 0x7c);
          local_11c = *(undefined4 *)(param_1 + 0x80);
        }
        local_168 = 6;
        iVar4 = FUN_0046e960((int)*(short *)(param_1 + 0x22),5,local_154);
        if (iVar4 == 0) {
          if ((iVar3 != 5) && (iVar3 != 6)) {
            if (*(short *)(param_1 + 4) == 0) {
              puVar7 = &DAT_00582214;
            }
            else {
              puVar7 = &DAT_005821fc;
            }
            iVar3 = FUN_00468630(&local_168,puVar7,1,param_1);
            if (iVar3 == 2) {
              return 0xffffffff;
            }
            break;
          }
          if (*(short *)(param_1 + 4) == 0) {
            iVar4 = 0;
            if (0 < local_168) {
              puVar7 = &local_160;
              puVar6 = &DAT_00582214;
              do {
                FUN_0046e7f0(puVar7,param_1,*puVar6);
                iVar4 = iVar4 + 1;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 3;
              } while (iVar4 < local_168);
            }
          }
          else {
            iVar4 = 0;
            if (0 < local_168) {
              puVar7 = &local_160;
              puVar6 = &DAT_005821fc;
              do {
                FUN_0046e7f0(puVar7,param_1,*puVar6);
                iVar4 = iVar4 + 1;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 3;
              } while (iVar4 < local_168);
            }
          }
          uVar5 = FUN_00463a90((int)*(short *)(param_1 + 4),&local_7c,(iVar3 != 5) + '\"');
          switch(uVar5) {
          case 0xfffffff2:
          case 0xfffffffa:
          case 0xfffffffe:
          case 0:
            goto switchD_0047096a_caseD_fffffff2;
          default:
            break;
          case 0xfffffff5:
            *(undefined2 *)(param_1 + 2) = 1;
            break;
          case 0xffffffff:
            goto switchD_00470677_caseD_2;
          }
        }
      }
      else {
        FUN_00414db0(local_174);
        FUN_0052b240(iVar4);
      }
      break;
    case 6:
      if (*(short *)(param_1 + 2) == 1) {
        uVar5 = FUN_00463a90((int)*(short *)(param_1 + 4),&local_7c,0x23);
        switch(uVar5) {
        case 0xfffffff2:
switchD_0047096a_caseD_fffffff2:
          *(undefined2 *)(param_1 + 2) = 0;
          break;
        case 0xfffffff5:
        case 0xfffffffa:
        case 0xfffffffe:
        case 0:
          *(undefined2 *)(param_1 + 2) = 1;
          break;
        case 0xffffffff:
          goto switchD_00470677_caseD_2;
        }
      }
    }
  } while( true );
}


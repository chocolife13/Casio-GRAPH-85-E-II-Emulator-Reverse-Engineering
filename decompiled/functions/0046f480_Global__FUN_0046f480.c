// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046f480
// entry: 0046f480  size: 1058


undefined4 FUN_0046f480(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined1 local_15c [4];
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [24];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
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
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8 [15];
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [6];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_158 = 1;
  local_154 = 1;
  do {
    *(undefined2 *)(param_1 + 8) = 8;
    puVar7 = (undefined4 *)(param_1 + 0x30);
    if (*(short *)(param_1 + 4) == 0) {
      puVar8 = &DAT_00582078;
      local_138 = *puVar7;
      local_134 = *(undefined4 *)(param_1 + 0x34);
      local_12c = *(undefined4 *)(param_1 + 0x48);
      local_130 = *(undefined4 *)(param_1 + 0x38);
      local_128 = *(undefined4 *)(param_1 + 0x4c);
      local_124 = *(undefined4 *)(param_1 + 0x50);
      local_120 = *(undefined4 *)(param_1 + 0x60);
      local_11c = *(undefined4 *)(param_1 + 100);
      local_114 = *(undefined4 *)(param_1 + 0x78);
      local_118 = *(undefined4 *)(param_1 + 0x68);
      local_110 = *(undefined4 *)(param_1 + 0x7c);
      local_10c = *(undefined4 *)(param_1 + 0x80);
    }
    else {
      puVar8 = &DAT_00582058;
      local_138 = *puVar7;
      local_134 = *(undefined4 *)(param_1 + 0x34);
      local_12c = *(undefined4 *)(param_1 + 0x48);
      local_130 = *(undefined4 *)(param_1 + 0x38);
      local_128 = *(undefined4 *)(param_1 + 0x4c);
      local_124 = *(undefined4 *)(param_1 + 0x50);
    }
    iVar3 = FUN_004673d0(&local_158,&local_154,param_1,local_150,puVar8);
    switch(iVar3) {
    case 2:
switchD_0046f57e_caseD_2:
      return 0xffffffff;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      cVar2 = FUN_005260a0();
      local_104 = (int)*(short *)(param_1 + 6);
      local_108 = (int)cVar2;
      local_100 = *puVar7;
      local_f4 = *(undefined4 *)(param_1 + 0x48);
      local_fc = *(undefined4 *)(param_1 + 0x34);
      local_f0 = *(undefined4 *)(param_1 + 0x4c);
      local_f8 = *(undefined4 *)(param_1 + 0x38);
      local_ec = *(undefined4 *)(param_1 + 0x50);
      local_e8 = *(undefined4 *)(param_1 + 0x60);
      local_e4 = *(undefined4 *)(param_1 + 100);
      local_e0 = *(undefined4 *)(param_1 + 0x68);
      local_dc = *(undefined4 *)(param_1 + 0x78);
      local_d8 = *(undefined4 *)(param_1 + 0x7c);
      local_d4 = *(undefined4 *)(param_1 + 0x80);
      local_d0 = (int)*(short *)(param_1 + 0xe);
      local_cc = (int)*(short *)(param_1 + 0x16);
      FUN_00414db0(local_15c);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar4 = FUN_00457760((int)*(short *)(param_1 + 4),&local_108);
      if (iVar4 == 0) {
        FUN_00414db0(local_15c);
        local_88 = (int)*(short *)(param_1 + 6);
        local_7c = *(undefined4 *)(param_1 + 0x38);
        sVar1 = *(short *)(param_1 + 4);
        local_84 = *puVar7;
        local_80 = *(undefined4 *)(param_1 + 0x34);
        puVar7 = local_c8;
        puVar6 = local_78;
        for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
        }
        if (sVar1 == 0) {
          local_5c = *(undefined4 *)(param_1 + 100);
          local_60 = *(undefined4 *)(param_1 + 0x60);
          local_58 = *(undefined4 *)(param_1 + 0x68);
          local_50 = *(undefined4 *)(param_1 + 0x7c);
          local_54 = *(undefined4 *)(param_1 + 0x78);
          local_4c = *(undefined4 *)(param_1 + 0x80);
          local_8c = 5;
        }
        else {
          local_8c = 6;
        }
        iVar4 = FUN_0046e960((int)*(short *)(param_1 + 0x22),local_8c + -1,local_78);
        if (iVar4 == 0) {
          if ((iVar3 != 5) && (iVar3 != 6)) {
            if (*(short *)(param_1 + 4) == 0) {
              puVar7 = &DAT_005820b0;
            }
            else {
              puVar7 = &DAT_00582098;
            }
            iVar3 = FUN_00468630(&local_8c,puVar7,1,param_1);
            if (iVar3 == 2) {
              return 0xffffffff;
            }
            break;
          }
          if (*(short *)(param_1 + 4) == 0) {
            iVar4 = 0;
            if (0 < local_8c) {
              puVar7 = &local_84;
              puVar6 = &DAT_005820b0;
              do {
                FUN_0046e7f0(puVar7,param_1,*puVar6);
                iVar4 = iVar4 + 1;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 3;
              } while (iVar4 < local_8c);
            }
          }
          else {
            iVar4 = 0;
            if (0 < local_8c) {
              puVar7 = &local_84;
              puVar6 = &DAT_00582098;
              do {
                FUN_0046e7f0(puVar7,param_1,*puVar6);
                iVar4 = iVar4 + 1;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 3;
              } while (iVar4 < local_8c);
            }
          }
          uVar5 = FUN_00463590((int)*(short *)(param_1 + 4),&local_108,(iVar3 != 5) + '\"');
          switch(uVar5) {
          case 0xfffffff2:
          case 0xfffffffa:
          case 0xfffffffe:
          case 0:
            goto switchD_0046f874_caseD_fffffff2;
          default:
            break;
          case 0xfffffff5:
            *(undefined2 *)(param_1 + 2) = 1;
            break;
          case 0xffffffff:
            goto switchD_0046f57e_caseD_2;
          }
        }
      }
      else {
        FUN_00414db0(local_15c);
        FUN_0052b240(iVar4);
      }
      break;
    case 6:
      if (*(short *)(param_1 + 2) == 1) {
        uVar5 = FUN_00463590((int)*(short *)(param_1 + 4),&local_108,0x23);
        switch(uVar5) {
        case 0xfffffff2:
switchD_0046f874_caseD_fffffff2:
          *(undefined2 *)(param_1 + 2) = 0;
          break;
        case 0xfffffff5:
        case 0xfffffffa:
        case 0xfffffffe:
        case 0:
          *(undefined2 *)(param_1 + 2) = 1;
          break;
        case 0xffffffff:
          goto switchD_0046f57e_caseD_2;
        }
      }
    }
  } while( true );
}


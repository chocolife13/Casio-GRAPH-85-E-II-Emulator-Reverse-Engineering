// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004701b0
// entry: 004701b0  size: 838


undefined4 FUN_004701b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 local_164 [4];
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c [15];
  undefined1 local_e0 [12];
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
  int local_8c;
  int local_88;
  undefined1 local_84 [12];
  undefined4 local_78 [15];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_15c = 1;
  local_158 = 1;
switchD_00470293_default:
  do {
    puVar4 = (undefined4 *)(param_1 + 0x78);
    *(undefined2 *)(param_1 + 8) = 7;
    local_d4 = *(undefined4 *)(param_1 + 0x90);
    local_d0 = *(undefined4 *)(param_1 + 0x94);
    local_c8 = *puVar4;
    local_cc = *(undefined4 *)(param_1 + 0x98);
    local_c4 = *(undefined4 *)(param_1 + 0x7c);
    local_c0 = *(undefined4 *)(param_1 + 0x80);
    local_bc = *(undefined4 *)(param_1 + 0x9c);
    local_b8 = *(undefined4 *)(param_1 + 0xa0);
    local_b0 = *(undefined4 *)(param_1 + 0x84);
    local_b4 = *(undefined4 *)(param_1 + 0xa4);
    local_ac = *(undefined4 *)(param_1 + 0x88);
    local_a8 = *(undefined4 *)(param_1 + 0x8c);
    local_160 = FUN_004673d0(&local_15c,&local_158,param_1,local_e0,&DAT_00582180);
    switch(local_160) {
    case 2:
      goto switchD_00470293_caseD_2;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      cVar1 = FUN_005260a0();
      local_150 = (int)*(short *)(param_1 + 6);
      local_154 = (int)cVar1;
      local_14c = *(undefined4 *)(param_1 + 0x90);
      local_140 = *(undefined4 *)(param_1 + 0x9c);
      local_148 = *(undefined4 *)(param_1 + 0x94);
      local_13c = *(undefined4 *)(param_1 + 0xa0);
      local_144 = *(undefined4 *)(param_1 + 0x98);
      local_138 = *(undefined4 *)(param_1 + 0xa4);
      local_134 = *puVar4;
      local_130 = *(undefined4 *)(param_1 + 0x7c);
      local_12c = *(undefined4 *)(param_1 + 0x80);
      local_128 = *(undefined4 *)(param_1 + 0x84);
      local_124 = *(undefined4 *)(param_1 + 0x88);
      local_120 = *(undefined4 *)(param_1 + 0x8c);
      FUN_00414db0(local_164);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_004588d0(0,&local_154);
      if (iVar2 == 0) {
        FUN_00414db0(local_164);
        local_3c = *puVar4;
        local_38 = *(undefined4 *)(param_1 + 0x7c);
        puVar4 = local_11c;
        puVar5 = local_78;
        for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_34 = *(undefined4 *)(param_1 + 0x80);
        local_8c = 8;
        local_30 = *(undefined4 *)(param_1 + 0x84);
        local_2c = *(undefined4 *)(param_1 + 0x88);
        local_28 = *(undefined4 *)(param_1 + 0x8c);
        local_88 = (int)*(short *)(param_1 + 6);
        iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),7,local_78);
        if (iVar2 == 0) {
          if ((local_160 == 5) || (local_160 == 6)) {
            iVar2 = 0;
            if (0 < local_8c) {
              puVar6 = local_84;
              puVar4 = &DAT_0058219c;
              do {
                FUN_0046e7f0(puVar6,param_1,*puVar4);
                iVar2 = iVar2 + 1;
                puVar4 = puVar4 + 1;
                puVar6 = puVar6 + 0xc;
              } while (iVar2 < local_8c);
            }
            uVar3 = FUN_00463950((int)*(short *)(param_1 + 4),&local_154,(local_160 != 5) + '\"');
            switch(uVar3) {
            case 0xfffffff2:
            case 0xfffffffa:
            case 0xfffffffe:
            case 0:
              goto switchD_004704c6_caseD_fffffff2;
            case 0xfffffff5:
              goto switchD_004704c6_caseD_fffffff5;
            case 0xffffffff:
              goto switchD_00470293_caseD_2;
            }
          }
          else {
            iVar2 = FUN_00468630(&local_8c,&DAT_0058219c,3,param_1);
            if (iVar2 == 2) {
              return 0xffffffff;
            }
          }
        }
      }
      else {
        FUN_00414db0(local_164);
        FUN_0052b240(iVar2);
      }
      break;
    case 6:
      goto switchD_00470293_caseD_6;
    }
  } while( true );
switchD_00470293_caseD_6:
  if (*(short *)(param_1 + 2) == 1) {
    uVar3 = FUN_00463950((int)*(short *)(param_1 + 4),&local_154,0x23);
    switch(uVar3) {
    case 0xfffffff2:
switchD_004704c6_caseD_fffffff2:
      *(undefined2 *)(param_1 + 2) = 0;
      break;
    case 0xfffffff5:
    case 0xfffffffa:
    case 0xfffffffe:
    case 0:
switchD_004704c6_caseD_fffffff5:
      *(undefined2 *)(param_1 + 2) = 1;
      break;
    case 0xffffffff:
switchD_00470293_caseD_2:
      return 0xffffffff;
    }
  }
  goto switchD_00470293_default;
}


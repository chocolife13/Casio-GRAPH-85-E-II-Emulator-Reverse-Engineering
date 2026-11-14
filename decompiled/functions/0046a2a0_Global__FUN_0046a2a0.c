// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046a2a0
// entry: 0046a2a0  size: 692


undefined4 FUN_0046a2a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_158 [4];
  int local_154;
  undefined4 local_150;
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
  uint local_124 [2];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_8c [2];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  
  local_150 = 1;
  local_14c = 1;
switchD_0046a33b_default:
  do {
    *(undefined2 *)(param_1 + 8) = 5;
    local_148 = *(undefined4 *)(param_1 + 0x90);
    local_144 = *(undefined4 *)(param_1 + 0x94);
    local_13c = *(undefined4 *)(param_1 + 0x48);
    local_140 = *(undefined4 *)(param_1 + 0x98);
    local_138 = *(undefined4 *)(param_1 + 0x4c);
    local_134 = *(undefined4 *)(param_1 + 0x50);
    local_130 = *(undefined4 *)(param_1 + 0x24);
    local_12c = *(undefined4 *)(param_1 + 0x28);
    local_128 = *(undefined4 *)(param_1 + 0x2c);
    local_154 = FUN_004673d0(&local_150,&local_14c,param_1,&local_148,&DAT_00581cc4);
    switch(local_154) {
    case 2:
      goto switchD_0046a33b_caseD_2;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      local_124[0] = FUN_005260a0();
      local_124[0] = local_124[0] & 0xff;
      local_11c = *(undefined4 *)(param_1 + 0x90);
      local_ec = *(undefined4 *)(param_1 + 0x48);
      local_118 = *(undefined4 *)(param_1 + 0x94);
      local_e0 = *(undefined4 *)(param_1 + 0x24);
      local_114 = *(undefined4 *)(param_1 + 0x98);
      local_e8 = *(undefined4 *)(param_1 + 0x4c);
      local_e4 = *(undefined4 *)(param_1 + 0x50);
      local_dc = *(undefined4 *)(param_1 + 0x28);
      local_d8 = *(undefined4 *)(param_1 + 0x2c);
      FUN_00414db0(local_158);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar1 = FUN_00453a80(0,local_124);
      if (iVar1 == 0) {
        FUN_00414db0(local_158);
        local_84 = local_d4;
        local_80 = local_d0;
        local_8c[0] = 1;
        local_7c = local_cc;
        iVar1 = FUN_0046e960((int)*(short *)(param_1 + 0x22),1,&local_84);
        if (iVar1 == 0) {
          if ((local_154 == 5) || (local_154 == 6)) {
            iVar1 = 0;
            if (0 < local_8c[0]) {
              puVar3 = &local_84;
              puVar4 = &DAT_00581cd8;
              do {
                FUN_0046e7f0(puVar3,param_1,*puVar4);
                iVar1 = iVar1 + 1;
                puVar4 = puVar4 + 1;
                puVar3 = puVar3 + 3;
              } while (iVar1 < local_8c[0]);
            }
            uVar2 = FUN_004642f0((int)*(short *)(param_1 + 4),local_124,(local_154 != 5) + '\"');
            switch(uVar2) {
            case 0xfffffff2:
            case 0xfffffffa:
            case 0xfffffffe:
            case 0:
              goto switchD_0046a524_caseD_fffffff2;
            case 0xfffffff5:
              goto switchD_0046a524_caseD_fffffff5;
            case 0xffffffff:
              goto switchD_0046a33b_caseD_2;
            }
          }
          else {
            iVar1 = FUN_00468630(local_8c,&DAT_00581cd8,4,param_1);
            if (iVar1 == 2) {
              return 0xffffffff;
            }
          }
        }
      }
      else {
        FUN_00414db0(local_158);
        FUN_0052b240(iVar1);
      }
      break;
    case 6:
      goto switchD_0046a33b_caseD_6;
    }
  } while( true );
switchD_0046a33b_caseD_6:
  if (*(short *)(param_1 + 2) == 1) {
    uVar2 = FUN_004642f0((int)*(short *)(param_1 + 4),local_124,0x23);
    switch(uVar2) {
    case 0xfffffff2:
switchD_0046a524_caseD_fffffff2:
      *(undefined2 *)(param_1 + 2) = 0;
      break;
    case 0xfffffff5:
    case 0xfffffffa:
    case 0xfffffffe:
    case 0:
switchD_0046a524_caseD_fffffff5:
      *(undefined2 *)(param_1 + 2) = 1;
      break;
    case 0xffffffff:
switchD_0046a33b_caseD_2:
      return 0xffffffff;
    }
  }
  goto switchD_0046a33b_default;
}


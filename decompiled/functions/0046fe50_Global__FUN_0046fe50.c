// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046fe50
// entry: 0046fe50  size: 778


undefined4 FUN_0046fe50(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_134 [4];
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [9];
  undefined1 local_d4 [12];
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
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [9];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_12c = 1;
  local_128 = 1;
switchD_0046ff08_default:
  do {
    puVar4 = (undefined4 *)(param_1 + 0x3c);
    *(undefined2 *)(param_1 + 8) = 6;
    local_c8 = *puVar4;
    local_c4 = *(undefined4 *)(param_1 + 0x40);
    local_bc = *(undefined4 *)(param_1 + 0x90);
    local_c0 = *(undefined4 *)(param_1 + 0x44);
    local_b8 = *(undefined4 *)(param_1 + 0x94);
    local_b4 = *(undefined4 *)(param_1 + 0x98);
    local_b0 = *(undefined4 *)(param_1 + 0x78);
    local_ac = *(undefined4 *)(param_1 + 0x7c);
    local_a8 = *(undefined4 *)(param_1 + 0x80);
    local_130 = FUN_004673d0(&local_12c,&local_128,param_1,local_d4,&DAT_00582154);
    switch(local_130) {
    case 2:
      goto switchD_0046ff08_caseD_2;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      cVar1 = FUN_005260a0();
      local_120 = (int)*(short *)(param_1 + 6);
      local_124 = (int)cVar1;
      local_11c = *puVar4;
      local_110 = *(undefined4 *)(param_1 + 0x90);
      local_118 = *(undefined4 *)(param_1 + 0x40);
      local_10c = *(undefined4 *)(param_1 + 0x94);
      local_114 = *(undefined4 *)(param_1 + 0x44);
      local_108 = *(undefined4 *)(param_1 + 0x98);
      local_104 = *(undefined4 *)(param_1 + 0x78);
      local_100 = *(undefined4 *)(param_1 + 0x7c);
      local_fc = *(undefined4 *)(param_1 + 0x80);
      FUN_00414db0(local_134);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_004583a0(0,&local_124);
      if (iVar2 == 0) {
        FUN_00414db0(local_134);
        local_84 = *puVar4;
        local_80 = *(undefined4 *)(param_1 + 0x40);
        puVar4 = local_f8;
        puVar5 = local_78;
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_7c = *(undefined4 *)(param_1 + 0x44);
        local_8c = 5;
        local_54 = *(undefined4 *)(param_1 + 0x78);
        local_50 = *(undefined4 *)(param_1 + 0x7c);
        local_4c = *(undefined4 *)(param_1 + 0x80);
        local_88 = (int)*(short *)(param_1 + 6);
        iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),4,local_78);
        if (iVar2 == 0) {
          if ((local_130 == 5) || (local_130 == 6)) {
            iVar2 = 0;
            if (0 < local_8c) {
              puVar4 = &local_84;
              puVar5 = &DAT_0058216c;
              do {
                FUN_0046e7f0(puVar4,param_1,*puVar5);
                iVar2 = iVar2 + 1;
                puVar5 = puVar5 + 1;
                puVar4 = puVar4 + 3;
              } while (iVar2 < local_8c);
            }
            uVar3 = FUN_00463810((int)*(short *)(param_1 + 4),&local_124,(local_130 != 5) + '\"');
            switch(uVar3) {
            case 0xfffffff2:
            case 0xfffffffa:
            case 0xfffffffe:
            case 0:
              goto switchD_0047012c_caseD_fffffff2;
            case 0xfffffff5:
              *(undefined2 *)(param_1 + 2) = 1;
              break;
            case 0xffffffff:
              goto switchD_0046ff08_caseD_2;
            }
          }
          else {
            iVar2 = FUN_00468630(&local_8c,&DAT_0058216c,1,param_1);
            if (iVar2 == 2) {
              return 0xffffffff;
            }
          }
        }
      }
      else {
        FUN_00414db0(local_134);
        FUN_0052b240(iVar2);
      }
      break;
    case 6:
      goto switchD_0046ff08_caseD_6;
    }
  } while( true );
switchD_0046ff08_caseD_6:
  if (*(short *)(param_1 + 2) == 1) {
    uVar3 = FUN_00463810((int)*(short *)(param_1 + 4),&local_124,0x23);
    switch(uVar3) {
    case 0xfffffff2:
switchD_0047012c_caseD_fffffff2:
      *(undefined2 *)(param_1 + 2) = 0;
      break;
    case 0xfffffff5:
    case 0xfffffffa:
    case 0xfffffffe:
    case 0:
      *(undefined2 *)(param_1 + 2) = 1;
      break;
    case 0xffffffff:
switchD_0046ff08_caseD_2:
      return 0xffffffff;
    }
  }
  goto switchD_0046ff08_default;
}


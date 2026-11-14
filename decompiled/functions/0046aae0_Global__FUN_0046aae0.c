// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046aae0
// entry: 0046aae0  size: 627


undefined4 FUN_0046aae0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_124 [4];
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_8c [2];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  
  local_11c = 1;
  local_118 = 1;
switchD_0046ab65_default:
  do {
    *(undefined2 *)(param_1 + 8) = 4;
    local_114 = *(undefined4 *)(param_1 + 0x90);
    local_110 = *(undefined4 *)(param_1 + 0x94);
    local_108 = *(undefined4 *)(param_1 + 0x108);
    local_10c = *(undefined4 *)(param_1 + 0x98);
    local_104 = *(undefined4 *)(param_1 + 0x10c);
    local_100 = *(undefined4 *)(param_1 + 0x110);
    local_120 = FUN_004673d0(&local_11c,&local_118,param_1,&local_114,&DAT_00581d24);
    switch(local_120) {
    case 2:
      goto switchD_0046ab65_caseD_2;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      cVar1 = FUN_005260a0();
      local_fc = (int)cVar1;
      local_f8 = *(undefined4 *)(param_1 + 0x90);
      local_c8 = *(undefined4 *)(param_1 + 0x108);
      local_f4 = *(undefined4 *)(param_1 + 0x94);
      local_c4 = *(undefined4 *)(param_1 + 0x10c);
      local_f0 = *(undefined4 *)(param_1 + 0x98);
      local_c0 = *(undefined4 *)(param_1 + 0x110);
      FUN_00414db0(local_124);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_00454a40(0,&local_fc);
      if (iVar2 == 0) {
        FUN_00414db0(local_124);
        local_84 = local_bc;
        local_80 = local_b8;
        local_7c = local_b4;
        local_8c[0] = 1;
        iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),1,&local_84);
        if (iVar2 == 0) {
          if ((local_120 == 5) || (local_120 == 6)) {
            iVar2 = 0;
            if (0 < local_8c[0]) {
              puVar4 = &local_84;
              puVar5 = &DAT_00581d34;
              do {
                FUN_0046e7f0(puVar4,param_1,*puVar5);
                iVar2 = iVar2 + 1;
                puVar5 = puVar5 + 1;
                puVar4 = puVar4 + 3;
              } while (iVar2 < local_8c[0]);
            }
            uVar3 = FUN_004643b0((int)*(short *)(param_1 + 4),&local_fc,(local_120 != 5) + '\"');
            switch(uVar3) {
            case 0xfffffff2:
            case 0xfffffffa:
            case 0xfffffffe:
            case 0:
              goto switchD_0046ad25_caseD_fffffff2;
            case 0xfffffff5:
              goto switchD_0046ad25_caseD_fffffff5;
            case 0xffffffff:
              goto switchD_0046ab65_caseD_2;
            }
          }
          else {
            iVar2 = FUN_00468630(local_8c,&DAT_00581d34,4,param_1);
            if (iVar2 == 2) {
              return 0xffffffff;
            }
          }
        }
      }
      else {
        FUN_00414db0(local_124);
        FUN_0052b240(iVar2);
      }
      break;
    case 6:
      goto switchD_0046ab65_caseD_6;
    }
  } while( true );
switchD_0046ab65_caseD_6:
  if (*(short *)(param_1 + 2) == 1) {
    uVar3 = FUN_004643b0((int)*(short *)(param_1 + 4),&local_fc,0x23);
    switch(uVar3) {
    case 0xfffffff2:
switchD_0046ad25_caseD_fffffff2:
      *(undefined2 *)(param_1 + 2) = 0;
      break;
    case 0xfffffff5:
    case 0xfffffffa:
    case 0xfffffffe:
    case 0:
switchD_0046ad25_caseD_fffffff5:
      *(undefined2 *)(param_1 + 2) = 1;
      break;
    case 0xffffffff:
switchD_0046ab65_caseD_2:
      return 0xffffffff;
    }
  }
  goto switchD_0046ab65_default;
}


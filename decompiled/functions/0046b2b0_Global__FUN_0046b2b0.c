// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046b2b0
// entry: 0046b2b0  size: 466


undefined4 FUN_0046b2b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_108 [4];
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
  int local_d8 [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c [2];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  
  local_104 = 1;
  local_100 = 1;
  while( true ) {
    *(undefined2 *)(param_1 + 8) = 5;
    local_fc = *(undefined4 *)(param_1 + 0xe4);
    local_f8 = *(undefined4 *)(param_1 + 0xe8);
    local_f0 = *(undefined4 *)(param_1 + 0xf0);
    local_f4 = *(undefined4 *)(param_1 + 0xec);
    local_ec = *(undefined4 *)(param_1 + 0xf4);
    local_e8 = *(undefined4 *)(param_1 + 0xf8);
    local_e4 = *(undefined4 *)(param_1 + 0x108);
    local_e0 = *(undefined4 *)(param_1 + 0x10c);
    local_dc = *(undefined4 *)(param_1 + 0x110);
    iVar2 = FUN_004673d0(&local_104,&local_100,param_1,&local_fc,&DAT_00581d6c);
    if (iVar2 == 2) {
      return 0xffffffff;
    }
    if (iVar2 == 3) break;
    if (iVar2 == 4) {
      cVar1 = FUN_005260a0();
      local_d8[0] = (int)cVar1;
      local_c8 = *(undefined4 *)(param_1 + 0xe4);
      local_c4 = *(undefined4 *)(param_1 + 0xe8);
      local_bc = *(undefined4 *)(param_1 + 0xf0);
      local_c0 = *(undefined4 *)(param_1 + 0xec);
      local_b0 = *(undefined4 *)(param_1 + 0x108);
      local_b8 = *(undefined4 *)(param_1 + 0xf4);
      local_ac = *(undefined4 *)(param_1 + 0x10c);
      local_b4 = *(undefined4 *)(param_1 + 0xf8);
      local_a8 = *(undefined4 *)(param_1 + 0x110);
      FUN_00414db0(local_108);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_00455200(0,local_d8);
      if (iVar2 == 0) {
        FUN_00414db0(local_108);
        local_84 = local_98;
        local_80 = local_94;
        local_7c = local_90;
        local_8c[0] = 1;
        iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),1,&local_84);
        if ((iVar2 == 0) && (iVar2 = FUN_00468630(local_8c,&DAT_00581d80,4,param_1), iVar2 == 2)) {
          return 0xffffffff;
        }
      }
      else {
        FUN_00414db0(local_108);
        FUN_0052b240(iVar2);
      }
    }
  }
  return 0xfffffffe;
}


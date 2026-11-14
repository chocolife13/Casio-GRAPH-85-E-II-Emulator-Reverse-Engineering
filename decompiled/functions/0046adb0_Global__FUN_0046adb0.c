// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046adb0
// entry: 0046adb0  size: 552


undefined4 FUN_0046adb0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_12c [4];
  undefined4 local_128;
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
  int local_fc [4];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c [2];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  local_128 = 1;
  local_124 = 1;
  while( true ) {
    *(undefined2 *)(param_1 + 8) = 5;
    local_120 = *(undefined4 *)(param_1 + 0xe4);
    local_11c = *(undefined4 *)(param_1 + 0xe8);
    local_114 = *(undefined4 *)(param_1 + 0xf0);
    local_118 = *(undefined4 *)(param_1 + 0xec);
    local_110 = *(undefined4 *)(param_1 + 0xf4);
    local_10c = *(undefined4 *)(param_1 + 0xf8);
    local_108 = *(undefined4 *)(param_1 + 0x108);
    local_104 = *(undefined4 *)(param_1 + 0x10c);
    local_100 = *(undefined4 *)(param_1 + 0x110);
    iVar2 = FUN_004673d0(&local_128,&local_124,param_1,&local_120,&DAT_00581d38);
    if (iVar2 == 2) {
      return 0xffffffff;
    }
    if (iVar2 == 3) break;
    if (iVar2 == 4) {
      cVar1 = FUN_005260a0();
      local_fc[0] = (int)cVar1;
      local_ec = *(undefined4 *)(param_1 + 0xe4);
      local_e8 = *(undefined4 *)(param_1 + 0xe8);
      local_e0 = *(undefined4 *)(param_1 + 0xf0);
      local_e4 = *(undefined4 *)(param_1 + 0xec);
      local_c8 = *(undefined4 *)(param_1 + 0x108);
      local_dc = *(undefined4 *)(param_1 + 0xf4);
      local_c4 = *(undefined4 *)(param_1 + 0x10c);
      local_d8 = *(undefined4 *)(param_1 + 0xf8);
      local_c0 = *(undefined4 *)(param_1 + 0x110);
      FUN_00414db0(local_12c);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_00454b60(0,local_fc);
      if (iVar2 == 0) {
        FUN_00414db0(local_12c);
        local_84 = local_b0;
        local_80 = local_ac;
        local_78 = local_a4;
        local_74 = local_a0;
        local_7c = local_a8;
        local_6c = local_98;
        local_68 = local_94;
        local_70 = local_9c;
        local_64 = local_90;
        local_8c[0] = 3;
        iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),3,&local_84);
        if ((iVar2 == 0) && (iVar2 = FUN_00468630(local_8c,&DAT_00581d4c,0,param_1), iVar2 == 2)) {
          return 0xffffffff;
        }
      }
      else {
        FUN_00414db0(local_12c);
        FUN_0052b240(iVar2);
      }
    }
  }
  return 0xfffffffe;
}


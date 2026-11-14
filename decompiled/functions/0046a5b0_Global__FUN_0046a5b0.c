// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046a5b0
// entry: 0046a5b0  size: 615


undefined4 FUN_0046a5b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
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
  int local_124 [5];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
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
  
  local_15c = 1;
  local_158 = 1;
  while( true ) {
    *(undefined2 *)(param_1 + 8) = 6;
    local_154 = *(undefined4 *)(param_1 + 0xe4);
    local_150 = *(undefined4 *)(param_1 + 0xe8);
    local_148 = *(undefined4 *)(param_1 + 0xf0);
    local_14c = *(undefined4 *)(param_1 + 0xec);
    local_144 = *(undefined4 *)(param_1 + 0xf4);
    local_140 = *(undefined4 *)(param_1 + 0xf8);
    local_13c = *(undefined4 *)(param_1 + 0x48);
    local_138 = *(undefined4 *)(param_1 + 0x4c);
    local_130 = *(undefined4 *)(param_1 + 0x24);
    local_134 = *(undefined4 *)(param_1 + 0x50);
    local_12c = *(undefined4 *)(param_1 + 0x28);
    local_128 = *(undefined4 *)(param_1 + 0x2c);
    iVar2 = FUN_004673d0(&local_15c,&local_158,param_1,&local_154,&DAT_00581cdc);
    if (iVar2 == 2) {
      return 0xffffffff;
    }
    if (iVar2 == 3) break;
    if (iVar2 == 4) {
      cVar1 = FUN_005260a0();
      local_124[0] = (int)cVar1;
      local_110 = *(undefined4 *)(param_1 + 0xe4);
      local_10c = *(undefined4 *)(param_1 + 0xe8);
      local_104 = *(undefined4 *)(param_1 + 0xf0);
      local_108 = *(undefined4 *)(param_1 + 0xec);
      local_ec = *(undefined4 *)(param_1 + 0x48);
      local_100 = *(undefined4 *)(param_1 + 0xf4);
      local_e8 = *(undefined4 *)(param_1 + 0x4c);
      local_fc = *(undefined4 *)(param_1 + 0xf8);
      local_e4 = *(undefined4 *)(param_1 + 0x50);
      local_e0 = *(undefined4 *)(param_1 + 0x24);
      local_dc = *(undefined4 *)(param_1 + 0x28);
      local_d8 = *(undefined4 *)(param_1 + 0x2c);
      FUN_00414db0(local_160);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_00453c70(0,local_124);
      if (iVar2 == 0) {
        FUN_00414db0(local_160);
        local_84 = local_c8;
        local_80 = local_c4;
        local_78 = local_a4;
        local_74 = local_a0;
        local_7c = local_c0;
        local_6c = local_98;
        local_68 = local_94;
        local_70 = local_9c;
        local_64 = local_90;
        local_8c[0] = 3;
        iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),3,&local_84);
        if ((iVar2 == 0) && (iVar2 = FUN_00468630(local_8c,&DAT_00581cf4,0,param_1), iVar2 == 2)) {
          return 0xffffffff;
        }
      }
      else {
        FUN_00414db0(local_160);
        FUN_0052b240(iVar2);
      }
    }
  }
  return 0xfffffffe;
}


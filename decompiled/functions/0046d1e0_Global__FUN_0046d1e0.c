// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046d1e0
// entry: 0046d1e0  size: 775


undefined4 FUN_0046d1e0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_178 [4];
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
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
  int local_fc;
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
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc [12];
  undefined4 local_8c [2];
  undefined4 local_84 [12];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  local_144 = 0x13;
  local_16c = 0x13;
  local_154 = 0xb;
  local_150 = 0xe;
  local_14c = 0x12;
  local_148 = 0xf;
  local_140 = 0x3d;
  local_13c = 0x3f;
  local_168 = 0x14;
  local_164 = 0x10;
  local_160 = 0x11;
  local_15c = 0xd;
  local_158 = 0xe;
  local_170 = 1;
  local_174 = 1;
  puVar1 = (undefined4 *)(param_1 + 0x78);
  while( true ) {
    *(undefined2 *)(param_1 + 8) = 7;
    local_138 = *(undefined4 *)(param_1 + 0xd8);
    local_134 = *(undefined4 *)(param_1 + 0xdc);
    local_12c = *(undefined4 *)(param_1 + 0x90);
    local_130 = *(undefined4 *)(param_1 + 0xe0);
    local_128 = *(undefined4 *)(param_1 + 0x94);
    local_124 = *(undefined4 *)(param_1 + 0x98);
    local_120 = *puVar1;
    local_11c = *(undefined4 *)(param_1 + 0x7c);
    local_114 = *(undefined4 *)(param_1 + 0x9c);
    local_118 = *(undefined4 *)(param_1 + 0x80);
    local_110 = *(undefined4 *)(param_1 + 0xa0);
    local_10c = *(undefined4 *)(param_1 + 0xa4);
    local_108 = *(undefined4 *)(param_1 + 0x84);
    local_104 = *(undefined4 *)(param_1 + 0x88);
    local_100 = *(undefined4 *)(param_1 + 0x8c);
    iVar3 = FUN_004673d0(&local_170,&local_174,param_1,&local_138,&local_154);
    if (iVar3 == 2) {
      return 0xffffffff;
    }
    if (iVar3 == 3) break;
    if (iVar3 == 4) {
      cVar2 = FUN_005260a0();
      local_fc = (int)cVar2;
      local_f8 = *(undefined4 *)(param_1 + 0xd8);
      local_ec = *(undefined4 *)(param_1 + 0x90);
      local_f4 = *(undefined4 *)(param_1 + 0xdc);
      local_e8 = *(undefined4 *)(param_1 + 0x94);
      local_f0 = *(undefined4 *)(param_1 + 0xe0);
      local_e4 = *(undefined4 *)(param_1 + 0x98);
      local_e0 = *(undefined4 *)(param_1 + 0x9c);
      local_dc = *(undefined4 *)(param_1 + 0xa0);
      local_d8 = *(undefined4 *)(param_1 + 0xa4);
      local_d4 = *puVar1;
      local_d0 = *(undefined4 *)(param_1 + 0x7c);
      local_cc = *(undefined4 *)(param_1 + 0x80);
      local_c8 = *(undefined4 *)(param_1 + 0x84);
      local_c4 = *(undefined4 *)(param_1 + 0x88);
      local_c0 = *(undefined4 *)(param_1 + 0x8c);
      FUN_00414db0(local_178);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar3 = FUN_004527e0(0,&local_fc);
      if (iVar3 == 0) {
        FUN_00414db0(local_178);
        puVar4 = local_bc;
        puVar5 = local_84;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_8c[0] = 6;
        local_54 = *puVar1;
        local_50 = *(undefined4 *)(param_1 + 0x7c);
        local_4c = *(undefined4 *)(param_1 + 0x80);
        local_48 = *(undefined4 *)(param_1 + 0x84);
        local_44 = *(undefined4 *)(param_1 + 0x88);
        local_40 = *(undefined4 *)(param_1 + 0x8c);
        iVar3 = FUN_0046e960((int)*(short *)(param_1 + 0x22),6,local_84);
        if ((iVar3 == 0) && (iVar3 = FUN_00468630(local_8c,&local_16c,0,param_1), iVar3 == 2)) {
          return 0xffffffff;
        }
      }
      else {
        FUN_00414db0(local_178);
        FUN_0052b240(iVar3);
      }
    }
  }
  return 0xfffffffe;
}


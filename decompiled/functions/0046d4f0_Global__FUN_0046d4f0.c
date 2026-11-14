// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046d4f0
// entry: 0046d4f0  size: 1050


undefined4 FUN_0046d4f0(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8 [4];
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [12];
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
  undefined4 local_c8 [6];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_8c [2];
  undefined4 local_84 [6];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_188 = 0xb;
  local_17c = 0x3d;
  local_178 = 0x3f;
  local_170 = 0xb;
  local_160 = 0x3d;
  local_15c = 0x3f;
  local_1b4 = 0x13;
  local_1a0 = 0x13;
  local_18c = 1;
  local_184 = 0x23;
  local_180 = 0x1a;
  local_174 = 1;
  local_16c = 0x17;
  local_168 = 0x2b;
  local_164 = 0x11;
  local_1b0 = 0x14;
  local_1ac = 6;
  local_1a8 = 9;
  local_1a4 = 0xc;
  local_19c = 0x14;
  local_198 = 6;
  local_194 = 9;
  local_190 = 0xc;
  local_1c0 = 1;
  local_1bc = 1;
  do {
    do {
      while( true ) {
        do {
          if (*(short *)(param_1 + 4) == 0) {
            *(undefined2 *)(param_1 + 8) = 7;
            local_14c = *(undefined4 *)(param_1 + 0xd8);
            local_148 = *(undefined4 *)(param_1 + 0xdc);
            local_140 = *(undefined4 *)(param_1 + 0x60);
            local_144 = *(undefined4 *)(param_1 + 0xe0);
            local_13c = *(undefined4 *)(param_1 + 100);
            local_138 = *(undefined4 *)(param_1 + 0x68);
            local_134 = *(undefined4 *)(param_1 + 0xb4);
            local_130 = *(undefined4 *)(param_1 + 0xb8);
            local_128 = *(undefined4 *)(param_1 + 0x78);
            local_12c = *(undefined4 *)(param_1 + 0xbc);
            local_124 = *(undefined4 *)(param_1 + 0x7c);
            puVar4 = &local_174;
            local_120 = *(undefined4 *)(param_1 + 0x80);
          }
          else {
            *(undefined2 *)(param_1 + 8) = 6;
            local_14c = *(undefined4 *)(param_1 + 0xd8);
            puVar4 = &local_18c;
            local_148 = *(undefined4 *)(param_1 + 0xdc);
            local_144 = *(undefined4 *)(param_1 + 0xe0);
          }
          iVar3 = FUN_004673d0(&local_1c0,&local_1bc,param_1,local_158,puVar4);
          if (iVar3 == 2) {
            return 0xffffffff;
          }
          if (iVar3 == 3) {
            return 0xfffffffe;
          }
        } while (iVar3 != 4);
        cVar2 = FUN_005260a0();
        local_100 = *(undefined4 *)(param_1 + 0xd8);
        local_104 = (int)cVar2;
        local_fc = *(undefined4 *)(param_1 + 0xdc);
        local_f8 = *(undefined4 *)(param_1 + 0xe0);
        local_f4 = *(undefined4 *)(param_1 + 0x60);
        local_f0 = *(undefined4 *)(param_1 + 100);
        local_e8 = *(undefined4 *)(param_1 + 0xb4);
        local_ec = *(undefined4 *)(param_1 + 0x68);
        local_e4 = *(undefined4 *)(param_1 + 0xb8);
        local_e0 = *(undefined4 *)(param_1 + 0xbc);
        local_dc = *(undefined4 *)(param_1 + 0x78);
        local_d8 = *(undefined4 *)(param_1 + 0x7c);
        local_d0 = (int)*(short *)(param_1 + 0xe);
        local_d4 = *(undefined4 *)(param_1 + 0x80);
        local_cc = (int)*(short *)(param_1 + 0x16);
        FUN_00414db0(local_1b8);
        thunk_FUN_0040add0();
        FUN_0052f840();
        iVar3 = FUN_00452c10((int)*(short *)(param_1 + 4),&local_104);
        if (iVar3 == 0) break;
        FUN_00414db0(local_1b8);
        FUN_0052b240(iVar3);
      }
      FUN_00414db0(local_1b8);
      sVar1 = *(short *)(param_1 + 4);
      puVar4 = local_c8;
      puVar5 = local_84;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_8c[0] = 5;
      if (sVar1 == 0) {
        local_6c = *(undefined4 *)(param_1 + 0x60);
        local_68 = *(undefined4 *)(param_1 + 100);
        local_64 = *(undefined4 *)(param_1 + 0x68);
        local_60 = *(undefined4 *)(param_1 + 0xb4);
        local_5c = *(undefined4 *)(param_1 + 0xb8);
        local_58 = *(undefined4 *)(param_1 + 0xbc);
        local_54 = *(undefined4 *)(param_1 + 0x78);
        local_50 = *(undefined4 *)(param_1 + 0x7c);
        local_4c = *(undefined4 *)(param_1 + 0x80);
      }
      else {
        local_6c = local_a4;
        local_68 = local_a0;
        local_64 = local_9c;
        local_60 = local_b0;
        local_5c = local_ac;
        local_58 = local_a8;
      }
      iVar3 = FUN_0046e960((int)*(short *)(param_1 + 0x22),5,local_84);
    } while (iVar3 != 0);
    if (*(short *)(param_1 + 4) == 0) {
      puVar4 = &local_1a0;
    }
    else {
      puVar4 = &local_1b4;
    }
    iVar3 = FUN_00468630(local_8c,puVar4,0,param_1);
  } while (iVar3 != 2);
  return 0xffffffff;
}


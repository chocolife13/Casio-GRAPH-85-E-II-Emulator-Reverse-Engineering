// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046d910
// entry: 0046d910  size: 2398


undefined4 FUN_0046d910(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_2e8 [4];
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc [2];
  undefined4 local_2d4 [9];
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  int local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  undefined4 local_1e4 [9];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
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
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84 [12];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_124 = 1;
  local_b0 = 1;
  local_120 = 0xb;
  local_10c = 0xc;
  local_108 = 0x3d;
  local_104 = 0x3f;
  local_ac = 0xb;
  local_94 = 0x13;
  local_90 = 0xc;
  local_8c = 0x3d;
  local_88 = 0x3f;
  local_16c = 0x13;
  local_154 = 0xb;
  local_148 = 0x13;
  local_100 = 0x13;
  local_d8 = 0x13;
  local_15c = 8;
  local_138 = 8;
  local_f0 = 8;
  local_c8 = 8;
  local_11c = 0x24;
  local_118 = 0x25;
  local_114 = 0x28;
  local_110 = 0x29;
  local_a8 = 0x18;
  local_a4 = 0x2c;
  local_a0 = 0x12;
  local_9c = 0x19;
  local_98 = 0x2d;
  local_168 = 0x14;
  local_164 = 0x15;
  local_160 = 7;
  local_158 = 10;
  local_150 = 0xd;
  local_14c = 0xe;
  local_144 = 0x14;
  local_140 = 0x15;
  local_13c = 7;
  local_134 = 10;
  local_130 = 0xb;
  local_12c = 0xd;
  local_128 = 0xe;
  local_fc = 0x14;
  local_f8 = 0x15;
  local_f4 = 7;
  local_ec = 10;
  local_e8 = 0xb;
  local_e4 = 0x25;
  local_e0 = 0xd;
  local_dc = 0xe;
  local_d4 = 0x14;
  local_d0 = 0x15;
  local_cc = 7;
  local_c4 = 10;
  local_c0 = 0xb;
  local_bc = 0x25;
  local_b8 = 0xd;
  local_b4 = 0xe;
  local_2e4 = 1;
  local_2e0 = 1;
  do {
    do {
      while( true ) {
        while( true ) {
          do {
            if (*(short *)(param_1 + 4) == 0) {
              *(undefined2 *)(param_1 + 8) = 0xb;
              local_78 = *(undefined4 *)(param_1 + 0xd8);
              local_74 = *(undefined4 *)(param_1 + 0xdc);
              local_6c = *(undefined4 *)(param_1 + 0x60);
              local_70 = *(undefined4 *)(param_1 + 0xe0);
              local_68 = *(undefined4 *)(param_1 + 100);
              local_64 = *(undefined4 *)(param_1 + 0x68);
              local_60 = *(undefined4 *)(param_1 + 0xb4);
              local_5c = *(undefined4 *)(param_1 + 0xb8);
              local_54 = *(undefined4 *)(param_1 + 0x78);
              local_58 = *(undefined4 *)(param_1 + 0xbc);
              local_50 = *(undefined4 *)(param_1 + 0x7c);
              local_4c = *(undefined4 *)(param_1 + 0x80);
              local_48 = *(undefined4 *)(param_1 + 0x6c);
              local_44 = *(undefined4 *)(param_1 + 0x70);
              local_3c = *(undefined4 *)(param_1 + 0xc0);
              local_40 = *(undefined4 *)(param_1 + 0x74);
              local_38 = *(undefined4 *)(param_1 + 0xc4);
              local_34 = *(undefined4 *)(param_1 + 200);
              local_30 = *(undefined4 *)(param_1 + 0x84);
              puVar6 = &local_b0;
              local_2c = *(undefined4 *)(param_1 + 0x88);
              local_28 = *(undefined4 *)(param_1 + 0x8c);
            }
            else {
              *(undefined2 *)(param_1 + 8) = 9;
              local_78 = *(undefined4 *)(param_1 + 0xd8);
              puVar6 = &local_124;
              local_74 = *(undefined4 *)(param_1 + 0xdc);
              local_70 = *(undefined4 *)(param_1 + 0xe0);
            }
            iVar3 = FUN_004673d0(&local_2e4,&local_2e0,param_1,local_84,puVar6);
            if (iVar3 == 2) {
              return 0xffffffff;
            }
            if (iVar3 == 3) {
              return 0xfffffffe;
            }
          } while (iVar3 != 4);
          cVar2 = FUN_005260a0();
          local_24c = *(undefined4 *)(param_1 + 0xd8);
          puVar6 = (undefined4 *)(param_1 + 0x60);
          local_250 = (int)cVar2;
          local_248 = *(undefined4 *)(param_1 + 0xdc);
          local_244 = *(undefined4 *)(param_1 + 0xe0);
          local_240 = *puVar6;
          local_23c = *(undefined4 *)(param_1 + 100);
          local_234 = *(undefined4 *)(param_1 + 0x6c);
          local_238 = *(undefined4 *)(param_1 + 0x68);
          local_230 = *(undefined4 *)(param_1 + 0x70);
          local_22c = *(undefined4 *)(param_1 + 0x74);
          local_228 = *(undefined4 *)(param_1 + 0xb4);
          local_224 = *(undefined4 *)(param_1 + 0xb8);
          local_220 = *(undefined4 *)(param_1 + 0xbc);
          local_21c = *(undefined4 *)(param_1 + 0xc0);
          local_218 = *(undefined4 *)(param_1 + 0xc4);
          local_214 = *(undefined4 *)(param_1 + 200);
          local_210 = *(undefined4 *)(param_1 + 0x78);
          local_20c = *(undefined4 *)(param_1 + 0x7c);
          local_208 = *(undefined4 *)(param_1 + 0x80);
          local_204 = *(undefined4 *)(param_1 + 0x84);
          local_200 = *(undefined4 *)(param_1 + 0x88);
          local_1f8 = (int)*(short *)(param_1 + 0xe);
          local_1fc = *(undefined4 *)(param_1 + 0x8c);
          local_1f4 = (int)*(short *)(param_1 + 0x10);
          local_1f0 = (int)*(short *)(param_1 + 0x16);
          local_1ec = (int)*(short *)(param_1 + 0x18);
          local_1e8 = (int)*(short *)(param_1 + 10);
          FUN_00414db0(local_2e8);
          thunk_FUN_0040add0();
          FUN_0052f840();
          iVar3 = FUN_00452fd0((int)*(short *)(param_1 + 4),&local_250);
          if (iVar3 == 0) break;
          FUN_00414db0(local_2e8);
          FUN_0052b240(iVar3);
        }
        FUN_00414db0(local_2e8);
        if (*(short *)(param_1 + 10) != 0) break;
        sVar1 = *(short *)(param_1 + 4);
        puVar4 = local_1e4;
        puVar5 = local_2d4;
        for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_2dc[0] = 9;
        if (sVar1 == 0) {
          local_2b0 = *puVar6;
          local_2ac = *(undefined4 *)(param_1 + 100);
          local_2a8 = *(undefined4 *)(param_1 + 0x68);
          local_2a4 = *(undefined4 *)(param_1 + 0x6c);
          local_2a0 = *(undefined4 *)(param_1 + 0x70);
          local_29c = *(undefined4 *)(param_1 + 0x74);
          local_298 = *(undefined4 *)(param_1 + 0xb4);
          local_294 = *(undefined4 *)(param_1 + 0xb8);
          local_290 = *(undefined4 *)(param_1 + 0xbc);
          local_28c = *(undefined4 *)(param_1 + 0xc0);
          local_288 = *(undefined4 *)(param_1 + 0xc4);
          local_284 = *(undefined4 *)(param_1 + 200);
          local_280 = *(undefined4 *)(param_1 + 0x78);
          local_27c = *(undefined4 *)(param_1 + 0x7c);
          local_278 = *(undefined4 *)(param_1 + 0x80);
          local_274 = *(undefined4 *)(param_1 + 0x84);
          local_270 = *(undefined4 *)(param_1 + 0x88);
          local_26c = *(undefined4 *)(param_1 + 0x8c);
        }
        else {
          local_2b0 = local_1a8;
          local_2ac = local_1a4;
          local_2a8 = local_1a0;
          local_2a4 = local_19c;
          local_2a0 = local_198;
          local_29c = local_194;
          local_298 = local_1c0;
          local_294 = local_1bc;
          local_290 = local_1b8;
          local_28c = local_1b4;
          local_288 = local_1b0;
          local_284 = local_1ac;
        }
        iVar3 = FUN_0046e960((int)*(short *)(param_1 + 0x22),9,local_2d4);
        if (iVar3 == 0) {
          if (*(short *)(param_1 + 4) == 0) {
            puVar6 = &local_148;
          }
          else {
            puVar6 = &local_16c;
          }
          iVar3 = FUN_00468630(local_2dc,puVar6,0,param_1);
          if (iVar3 == 2) {
            return 0xffffffff;
          }
        }
      }
      sVar1 = *(short *)(param_1 + 4);
      puVar4 = local_1e4;
      puVar5 = local_2d4;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_2dc[0] = 10;
      if (sVar1 == 0) {
        local_2b0 = *puVar6;
        local_2ac = *(undefined4 *)(param_1 + 100);
        local_2a8 = *(undefined4 *)(param_1 + 0x68);
        local_2a4 = *(undefined4 *)(param_1 + 0x6c);
        local_2a0 = *(undefined4 *)(param_1 + 0x70);
        local_29c = *(undefined4 *)(param_1 + 0x74);
        local_298 = *(undefined4 *)(param_1 + 0xb4);
        local_294 = *(undefined4 *)(param_1 + 0xb8);
        local_290 = *(undefined4 *)(param_1 + 0xbc);
        local_28c = *(undefined4 *)(param_1 + 0xc0);
        local_288 = *(undefined4 *)(param_1 + 0xc4);
        local_284 = *(undefined4 *)(param_1 + 200);
        local_274 = *(undefined4 *)(param_1 + 0x78);
        local_270 = *(undefined4 *)(param_1 + 0x7c);
        local_26c = *(undefined4 *)(param_1 + 0x80);
        local_268 = *(undefined4 *)(param_1 + 0x84);
        local_264 = *(undefined4 *)(param_1 + 0x88);
        local_260 = *(undefined4 *)(param_1 + 0x8c);
      }
      else {
        local_2b0 = local_1a8;
        local_2ac = local_1a4;
        local_2a8 = local_1a0;
        local_2a4 = local_19c;
        local_2a0 = local_198;
        local_29c = local_194;
        local_298 = local_1c0;
        local_294 = local_1bc;
        local_290 = local_1b8;
        local_28c = local_1b4;
        local_288 = local_1b0;
        local_284 = local_1ac;
        local_274 = local_190;
        local_270 = local_18c;
        local_26c = local_188;
        local_268 = local_184;
        local_264 = local_180;
        local_260 = local_17c;
      }
      local_278 = local_170;
      local_27c = local_174;
      local_280 = local_178;
      iVar3 = FUN_0046e960((int)*(short *)(param_1 + 0x22),10,local_2d4);
    } while (iVar3 != 0);
    if (*(short *)(param_1 + 4) == 0) {
      puVar6 = &local_d8;
    }
    else {
      puVar6 = &local_100;
    }
    iVar3 = FUN_00468630(local_2dc,puVar6,0,param_1);
  } while (iVar3 != 2);
  return 0xffffffff;
}


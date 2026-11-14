// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046c660
// entry: 0046c660  size: 801


undefined4 FUN_0046c660(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined1 local_164 [4];
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
  
  local_160 = 1;
  local_15c = 1;
  do {
    do {
      while( true ) {
        do {
          *(undefined2 *)(param_1 + 8) = 7;
          puVar4 = (undefined4 *)(param_1 + 0xd8);
          if (*(short *)(param_1 + 4) == 0) {
            puVar6 = &DAT_00581f50;
            local_14c = *puVar4;
            local_148 = *(undefined4 *)(param_1 + 0xdc);
            local_140 = *(undefined4 *)(param_1 + 0x48);
            local_144 = *(undefined4 *)(param_1 + 0xe0);
            local_13c = *(undefined4 *)(param_1 + 0x4c);
            local_138 = *(undefined4 *)(param_1 + 0x50);
            local_134 = *(undefined4 *)(param_1 + 0x60);
            local_130 = *(undefined4 *)(param_1 + 100);
            local_128 = *(undefined4 *)(param_1 + 0x78);
            local_12c = *(undefined4 *)(param_1 + 0x68);
            local_124 = *(undefined4 *)(param_1 + 0x7c);
            local_120 = *(undefined4 *)(param_1 + 0x80);
          }
          else {
            puVar6 = &DAT_00581f34;
            local_14c = *puVar4;
            local_148 = *(undefined4 *)(param_1 + 0xdc);
            local_140 = *(undefined4 *)(param_1 + 0x48);
            local_144 = *(undefined4 *)(param_1 + 0xe0);
            local_13c = *(undefined4 *)(param_1 + 0x4c);
            local_138 = *(undefined4 *)(param_1 + 0x50);
          }
          iVar3 = FUN_004673d0(&local_160,&local_15c,param_1,local_158,puVar6);
          if (iVar3 == 2) {
            return 0xffffffff;
          }
          if (iVar3 == 3) {
            return 0xfffffffe;
          }
        } while (iVar3 != 4);
        cVar2 = FUN_005260a0();
        local_100 = *puVar4;
        local_fc = *(undefined4 *)(param_1 + 0xdc);
        local_104 = (int)cVar2;
        local_f4 = *(undefined4 *)(param_1 + 0x48);
        local_f8 = *(undefined4 *)(param_1 + 0xe0);
        local_f0 = *(undefined4 *)(param_1 + 0x4c);
        local_ec = *(undefined4 *)(param_1 + 0x50);
        local_e8 = *(undefined4 *)(param_1 + 0x60);
        local_e4 = *(undefined4 *)(param_1 + 100);
        local_e0 = *(undefined4 *)(param_1 + 0x68);
        local_dc = *(undefined4 *)(param_1 + 0x78);
        local_d8 = *(undefined4 *)(param_1 + 0x7c);
        local_d4 = *(undefined4 *)(param_1 + 0x80);
        local_d0 = (int)*(short *)(param_1 + 0xe);
        local_cc = (int)*(short *)(param_1 + 0x16);
        FUN_00414db0(local_164);
        thunk_FUN_0040add0();
        FUN_0052f840();
        iVar3 = FUN_00451910((int)*(short *)(param_1 + 4),&local_104);
        if (iVar3 == 0) break;
        FUN_00414db0(local_164);
        FUN_0052b240(iVar3);
      }
      FUN_00414db0(local_164);
      sVar1 = *(short *)(param_1 + 4);
      puVar4 = local_c8;
      puVar5 = local_84;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      if (sVar1 == 0) {
        local_64 = *(undefined4 *)(param_1 + 0x68);
        local_6c = *(undefined4 *)(param_1 + 0x60);
        local_68 = *(undefined4 *)(param_1 + 100);
        local_58 = *(undefined4 *)(param_1 + 0x80);
        local_60 = *(undefined4 *)(param_1 + 0x78);
        local_5c = *(undefined4 *)(param_1 + 0x7c);
        local_8c[0] = 4;
      }
      else {
        local_64 = local_9c;
        local_6c = local_a4;
        local_68 = local_a0;
        local_58 = local_a8;
        local_60 = local_b0;
        local_5c = local_ac;
        local_8c[0] = 5;
      }
      iVar3 = FUN_0046e960((int)*(short *)(param_1 + 0x22),local_8c[0],local_84);
    } while (iVar3 != 0);
    if (*(short *)(param_1 + 4) == 0) {
      puVar6 = &DAT_00581f80;
    }
    else {
      puVar6 = &DAT_00581f6c;
    }
    iVar3 = FUN_00468630(local_8c,puVar6,0,param_1);
  } while (iVar3 != 2);
  return 0xffffffff;
}


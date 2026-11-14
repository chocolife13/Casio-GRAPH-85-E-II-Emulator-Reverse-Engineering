// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046a820
// entry: 0046a820  size: 694


undefined4 FUN_0046a820(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [12];
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_8c [2];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  local_15c = 1;
  local_158 = 1;
  while( true ) {
    *(undefined2 *)(param_1 + 8) = 6;
    local_148 = *(undefined4 *)(param_1 + 0xfc);
    local_144 = *(undefined4 *)(param_1 + 0x100);
    local_13c = *(undefined4 *)(param_1 + 0x48);
    local_140 = *(undefined4 *)(param_1 + 0x104);
    local_138 = *(undefined4 *)(param_1 + 0x4c);
    local_134 = *(undefined4 *)(param_1 + 0x50);
    local_130 = *(undefined4 *)(param_1 + 0x24);
    local_12c = *(undefined4 *)(param_1 + 0x28);
    local_128 = *(undefined4 *)(param_1 + 0x2c);
    iVar2 = FUN_004673d0(&local_15c,&local_158,param_1,local_154,&DAT_00581d00);
    if (iVar2 == 2) {
      return 0xffffffff;
    }
    if (iVar2 == 3) break;
    if (iVar2 == 4) {
      cVar1 = FUN_005260a0();
      local_120 = (int)*(short *)(param_1 + 0x20);
      local_124 = (int)cVar1;
      local_f8 = *(undefined4 *)(param_1 + 0xfc);
      local_f4 = *(undefined4 *)(param_1 + 0x100);
      local_ec = *(undefined4 *)(param_1 + 0x48);
      local_f0 = *(undefined4 *)(param_1 + 0x104);
      local_e0 = *(undefined4 *)(param_1 + 0x24);
      local_e8 = *(undefined4 *)(param_1 + 0x4c);
      local_dc = *(undefined4 *)(param_1 + 0x28);
      local_e4 = *(undefined4 *)(param_1 + 0x50);
      local_d8 = *(undefined4 *)(param_1 + 0x2c);
      FUN_00414db0(local_160);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_004543f0(0,&local_124);
      if (iVar2 == 0) {
        FUN_00414db0(local_160);
        local_84 = local_bc;
        local_80 = local_b8;
        local_7c = local_b4;
        local_78 = local_b0;
        local_74 = local_ac;
        local_70 = local_a8;
        if (*(short *)(param_1 + 0x20) == 0) {
          local_8c[0] = 2;
          iVar2 = FUN_00469e60(&local_bc,&local_b0);
          if (0 < iVar2) {
            local_84 = local_b0;
            local_80 = local_ac;
            local_7c = local_a8;
            local_78 = local_bc;
            local_74 = local_b8;
            local_70 = local_b4;
          }
        }
        else {
          local_8c[0] = 1;
        }
        iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),local_8c[0],&local_84);
        if (iVar2 == 0) {
          if (*(short *)(param_1 + 0x20) == 0) {
            puVar3 = &DAT_00581d1c;
            uVar4 = 0;
          }
          else {
            uVar4 = 4;
            puVar3 = &DAT_00581d18;
          }
          iVar2 = FUN_00468630(local_8c,puVar3,uVar4,param_1);
          if (iVar2 == 2) {
            return 0xffffffff;
          }
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


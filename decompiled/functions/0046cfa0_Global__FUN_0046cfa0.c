// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046cfa0
// entry: 0046cfa0  size: 576


undefined4 FUN_0046cfa0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_144 [4];
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
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [9];
  undefined4 local_8c [2];
  undefined4 local_84 [9];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  local_128 = 0xb;
  local_124 = 0xd;
  local_120 = 0x11;
  local_11c = 0x3d;
  local_118 = 0x3f;
  local_138 = 0x13;
  local_134 = 0x14;
  local_130 = 0xf;
  local_12c = 0xc;
  local_13c = 1;
  local_140 = 1;
  puVar1 = (undefined4 *)(param_1 + 0x78);
  while( true ) {
    *(undefined2 *)(param_1 + 8) = 5;
    local_114 = *(undefined4 *)(param_1 + 0xd8);
    local_110 = *(undefined4 *)(param_1 + 0xdc);
    local_108 = *(undefined4 *)(param_1 + 0x90);
    local_10c = *(undefined4 *)(param_1 + 0xe0);
    local_104 = *(undefined4 *)(param_1 + 0x94);
    local_100 = *(undefined4 *)(param_1 + 0x98);
    local_fc = *puVar1;
    local_f8 = *(undefined4 *)(param_1 + 0x7c);
    local_f4 = *(undefined4 *)(param_1 + 0x80);
    iVar3 = FUN_004673d0(&local_13c,&local_140,param_1,&local_114,&local_128);
    if (iVar3 == 2) {
      return 0xffffffff;
    }
    if (iVar3 == 3) break;
    if (iVar3 == 4) {
      cVar2 = FUN_005260a0();
      local_d4 = *(undefined4 *)(param_1 + 0xd8);
      local_d8 = (int)cVar2;
      local_d0 = *(undefined4 *)(param_1 + 0xdc);
      local_c8 = *(undefined4 *)(param_1 + 0x90);
      local_cc = *(undefined4 *)(param_1 + 0xe0);
      local_c4 = *(undefined4 *)(param_1 + 0x94);
      local_c0 = *(undefined4 *)(param_1 + 0x98);
      local_bc = *puVar1;
      local_b8 = *(undefined4 *)(param_1 + 0x7c);
      local_b4 = *(undefined4 *)(param_1 + 0x80);
      FUN_00414db0(local_144);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar3 = FUN_00452510(0,&local_d8);
      if (iVar3 == 0) {
        FUN_00414db0(local_144);
        puVar4 = local_b0;
        puVar5 = local_84;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_8c[0] = 4;
        local_60 = *puVar1;
        local_5c = *(undefined4 *)(param_1 + 0x7c);
        local_58 = *(undefined4 *)(param_1 + 0x80);
        iVar3 = FUN_0046e960((int)*(short *)(param_1 + 0x22),4,local_84);
        if ((iVar3 == 0) && (iVar3 = FUN_00468630(local_8c,&local_138,0,param_1), iVar3 == 2)) {
          return 0xffffffff;
        }
      }
      else {
        FUN_00414db0(local_144);
        FUN_0052b240(iVar3);
      }
    }
  }
  return 0xfffffffe;
}


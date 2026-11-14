// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046bc10
// entry: 0046bc10  size: 590


undefined4 FUN_0046bc10(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 local_100 [4];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4 [12];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
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
  undefined4 local_8c [2];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  
  local_fc = 1;
  local_f8 = 1;
  while( true ) {
    *(undefined2 *)(param_1 + 8) = 6;
    if (*(short *)(param_1 + 4) == 0) {
      puVar3 = &DAT_00581e04;
      local_e8 = *(undefined4 *)(param_1 + 0x90);
      local_e4 = *(undefined4 *)(param_1 + 0x94);
      local_dc = *(undefined4 *)(param_1 + 300);
      local_e0 = *(undefined4 *)(param_1 + 0x98);
      local_d8 = *(undefined4 *)(param_1 + 0x130);
      local_d4 = *(undefined4 *)(param_1 + 0x134);
      local_d0 = *(undefined4 *)(param_1 + 0xcc);
      local_cc = *(undefined4 *)(param_1 + 0xd0);
      local_c8 = *(undefined4 *)(param_1 + 0xd4);
    }
    else {
      puVar3 = &DAT_00581dec;
      local_dc = *(undefined4 *)(param_1 + 300);
      local_d8 = *(undefined4 *)(param_1 + 0x130);
      local_d0 = *(undefined4 *)(param_1 + 0xcc);
      local_d4 = *(undefined4 *)(param_1 + 0x134);
      local_cc = *(undefined4 *)(param_1 + 0xd0);
      local_c8 = *(undefined4 *)(param_1 + 0xd4);
    }
    iVar2 = FUN_004673d0(&local_fc,&local_f8,param_1,local_f4,puVar3);
    if (iVar2 == 2) break;
    if (iVar2 == 3) {
      return 0xfffffffe;
    }
    if (iVar2 == 4) {
      cVar1 = FUN_005260a0();
      local_bc = *(undefined4 *)(param_1 + 300);
      local_c4 = (int)cVar1;
      local_c0 = (int)*(short *)(param_1 + 0xe);
      local_b8 = *(undefined4 *)(param_1 + 0x130);
      local_b0 = *(undefined4 *)(param_1 + 0xcc);
      local_b4 = *(undefined4 *)(param_1 + 0x134);
      local_ac = *(undefined4 *)(param_1 + 0xd0);
      local_a8 = *(undefined4 *)(param_1 + 0xd4);
      local_a4 = *(undefined4 *)(param_1 + 0x90);
      local_a0 = *(undefined4 *)(param_1 + 0x94);
      local_9c = *(undefined4 *)(param_1 + 0x98);
      FUN_00414db0(local_100);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_00456660((int)*(short *)(param_1 + 4),&local_c4);
      if (iVar2 == 0) {
        FUN_00414db0(local_100);
        if (*(short *)(param_1 + 4) == 0) {
          local_84 = local_98;
          local_80 = local_94;
          local_7c = local_90;
          local_8c[0] = 1;
          iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),1,&local_84);
          if ((iVar2 == 0) && (iVar2 = FUN_00468630(local_8c,&DAT_00581e1c,4,param_1), iVar2 == 2))
          {
            return 0xffffffff;
          }
        }
        else {
          iVar2 = FUN_0046ea30((int)*(short *)(param_1 + 0x22));
          if ((iVar2 == 0) && (iVar2 = FUN_00469790(0x4d), iVar2 == 2)) {
            return 0xffffffff;
          }
        }
      }
      else {
        FUN_00414db0(local_100);
        FUN_0052b240(iVar2);
      }
    }
  }
  return 0xffffffff;
}


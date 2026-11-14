// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046be60
// entry: 0046be60  size: 504


undefined4 FUN_0046be60(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 local_e8 [4];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc [12];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
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
  
  local_e4 = 1;
  local_e0 = 1;
  while( true ) {
    *(undefined2 *)(param_1 + 8) = 5;
    if (*(short *)(param_1 + 4) == 0) {
      puVar3 = &DAT_00581e34;
      local_d0 = *(undefined4 *)(param_1 + 0x90);
      local_cc = *(undefined4 *)(param_1 + 0x94);
      local_c4 = *(undefined4 *)(param_1 + 0x24);
      local_c8 = *(undefined4 *)(param_1 + 0x98);
      local_c0 = *(undefined4 *)(param_1 + 0x28);
      local_bc = *(undefined4 *)(param_1 + 0x2c);
    }
    else {
      puVar3 = &DAT_00581e20;
      local_c4 = *(undefined4 *)(param_1 + 0x24);
      local_c0 = *(undefined4 *)(param_1 + 0x28);
      local_bc = *(undefined4 *)(param_1 + 0x2c);
    }
    iVar2 = FUN_004673d0(&local_e4,&local_e0,param_1,local_dc,puVar3);
    if (iVar2 == 2) break;
    if (iVar2 == 3) {
      return 0xfffffffe;
    }
    if (iVar2 == 4) {
      cVar1 = FUN_005260a0();
      local_b0 = *(undefined4 *)(param_1 + 0x24);
      local_b4 = (int)*(short *)(param_1 + 0xe);
      local_b8 = (int)cVar1;
      local_ac = *(undefined4 *)(param_1 + 0x28);
      local_a8 = *(undefined4 *)(param_1 + 0x2c);
      local_a4 = *(undefined4 *)(param_1 + 0x90);
      local_a0 = *(undefined4 *)(param_1 + 0x94);
      local_9c = *(undefined4 *)(param_1 + 0x98);
      FUN_00414db0(local_e8);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_004569d0((int)*(short *)(param_1 + 4),&local_b8);
      if (iVar2 == 0) {
        FUN_00414db0(local_e8);
        if (*(short *)(param_1 + 4) == 0) {
          local_84 = local_98;
          local_80 = local_94;
          local_7c = local_90;
          local_8c[0] = 1;
          iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),1,&local_84);
          if ((iVar2 == 0) && (iVar2 = FUN_00468630(local_8c,&DAT_00581e48,4,param_1), iVar2 == 2))
          {
            return 0xffffffff;
          }
        }
        else {
          iVar2 = FUN_0046ea30((int)*(short *)(param_1 + 0x22));
          if ((iVar2 == 0) && (iVar2 = FUN_00469790(0x4e), iVar2 == 2)) {
            return 0xffffffff;
          }
        }
      }
      else {
        FUN_00414db0(local_e8);
        FUN_0052b240(iVar2);
      }
    }
  }
  return 0xffffffff;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054f340
// entry: 0054f340  size: 1233


int FUN_0054f340(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  int local_180;
  int local_17c [26];
  undefined1 local_114 [44];
  undefined2 local_e8 [16];
  undefined2 local_c8;
  undefined2 local_a8;
  undefined2 local_88;
  undefined2 local_68;
  undefined1 local_48 [72];
  
  local_17c[1] = 0x14;
  local_17c[6] = 0xe;
  local_17c[0x11] = 0xe;
  local_17c[0x12] = 0x14;
  local_17c[0] = 10;
  local_17c[2] = 0xb;
  local_17c[9] = 10;
  local_17c[0xb] = 0xb;
  local_17c[3] = 0x13;
  local_17c[4] = 0xc;
  local_17c[5] = 0x15;
  local_17c[7] = 9;
  local_17c[8] = 0xf;
  local_17c[10] = 0x10;
  local_17c[0xc] = 0x11;
  local_17c[0xd] = 0xc;
  local_17c[0xe] = 0x12;
  local_17c[0xf] = 0xd;
  local_17c[0x10] = 0x13;
  local_17c[0x13] = 0xf;
  local_17c[0x14] = 0x15;
  local_17c[0x15] = 0x10;
  local_17c[0x16] = 0x16;
  local_17c[0x17] = 0x11;
  local_17c[0x18] = 0x17;
  local_17c[0x19] = 0x12;
  if (param_2 != (undefined4 *)0x0) {
    local_18c = *param_2;
    local_188 = param_2[1];
    local_184 = *(undefined2 *)(param_2 + 2);
  }
  iVar1 = FUN_00489440(local_e8);
  if (iVar1 != 0) {
    iVar1 = FUN_0054f120();
    if (iVar1 != 0) {
      FUN_0052b240(4);
      FUN_0047fa20();
      return -2;
    }
    iVar1 = FUN_00489440(local_e8);
    if (iVar1 != 0) {
      FUN_0052b240(4);
      FUN_0047fa20();
      return -2;
    }
  }
  iVar1 = FUN_00489400(local_114);
  if (iVar1 != 0) {
    iVar1 = FUN_00489370();
    if (iVar1 != 0) {
      FUN_0052b240(4);
      FUN_0047fa20();
      return -2;
    }
    iVar1 = FUN_00489400(local_114);
    if (iVar1 != 0) {
      FUN_0052b240(4);
      FUN_0047fa20();
      return -2;
    }
  }
  if (param_1 == 0) {
    FUN_0047faf0(local_48,local_e8);
    local_180 = FUN_0047b070(local_48,0);
    goto LAB_0054f749;
  }
  local_68 = 0;
  local_e8[0] = 0;
  FUN_00489480(local_e8);
  switch(param_1) {
  case 5:
  case 6:
  case 7:
    local_c8 = 0;
    local_a8 = 0;
    local_88 = 0;
    if (param_1 == 5) {
      local_c8 = 1;
    }
    else if (param_1 == 6) {
      local_a8 = 1;
    }
    else if (param_1 == 7) {
      local_88 = 1;
    }
    if (param_2 != (undefined4 *)0x0) {
      FUN_0054f1b0(local_e8,&local_18c);
    }
    FUN_00489480(local_e8);
    iVar1 = FUN_0047faf0(local_48,local_e8);
    if (iVar1 != 0) {
      FUN_0052b240(iVar1);
      FUN_0047fa20();
      return -0x15;
    }
    local_180 = FUN_0047b070(local_48,1);
    goto LAB_0054f749;
  case 8:
    if (param_2 != (undefined4 *)0x0) {
      FUN_0054f1b0(local_e8,&local_18c);
    }
    FUN_00489480(local_e8);
    local_180 = FUN_00477f00(0,local_e8);
    if (local_180 == -10) {
      iVar1 = FUN_0047faf0(local_48,local_e8);
      if (iVar1 != 0) {
        FUN_0052b240(iVar1);
        FUN_0047fa20();
        return -0x15;
      }
      local_180 = FUN_0047b070(local_48,1);
    }
    else {
      if (local_180 == -2) goto switchD_0054f7f4_caseD_ffffffeb;
      if (local_180 == -1) goto switchD_0054f7f4_caseD_ffffffff;
    }
    goto LAB_0054f749;
  case 9:
    if (param_2 != (undefined4 *)0x0) {
      FUN_0054f1b0(local_e8,&local_18c);
    }
    FUN_00489480(local_e8);
    iVar1 = FUN_00478960(0,local_e8);
    goto LAB_0054f728;
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    if (param_2 != (undefined4 *)0x0) {
      FUN_0054f260(local_114,&local_18c);
    }
    FUN_00489560(local_114);
    iVar1 = 0;
    piVar3 = local_17c;
    do {
      if (*piVar3 == param_1) break;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar1 < 0xd);
    uVar2 = FUN_0047af30(local_17c[iVar1 * 2 + 1],1);
    switch(uVar2) {
    case 0xffffffeb:
    case 0xfffffff3:
    case 0xfffffff4:
    case 0xfffffffe:
    case 0:
      goto switchD_0054f7f4_caseD_ffffffeb;
    case 0xffffffff:
      goto switchD_0054f7f4_caseD_ffffffff;
    }
    break;
  case 0xd:
    if (param_2 != (undefined4 *)0x0) {
      FUN_0054f260(local_114,&local_18c);
    }
    FUN_00489560(local_114);
    iVar1 = FUN_00479b10(0,local_114);
LAB_0054f728:
    if (iVar1 == -2) {
switchD_0054f7f4_caseD_ffffffeb:
      FUN_0047fa20();
      return -0x15;
    }
    if (iVar1 == -1) {
switchD_0054f7f4_caseD_ffffffff:
      FUN_0047fa20();
      return -0x16;
    }
    if (iVar1 == 0) goto switchD_0054f7f4_caseD_ffffffeb;
  }
LAB_0054f749:
  if (local_180 != -0x17) {
    FUN_0047fa20();
  }
  return local_180;
}


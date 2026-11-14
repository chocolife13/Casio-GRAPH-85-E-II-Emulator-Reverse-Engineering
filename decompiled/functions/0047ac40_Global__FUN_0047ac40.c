// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047ac40
// entry: 0047ac40  size: 655


int FUN_0047ac40(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_54 [12];
  undefined2 local_48 [7];
  undefined2 local_3a;
  undefined2 local_2c;
  undefined2 local_1e;
  undefined2 local_10;
  
  iVar3 = -0x15;
  iVar1 = FUN_00530de0(local_48);
  if (iVar1 != 0) {
    iVar1 = FUN_00530d40();
    if (iVar1 != 0) {
      FUN_0052b240(4);
      return -0x15;
    }
    iVar1 = FUN_00530de0(local_48);
    if (iVar1 != 0) {
      FUN_0052b240(4);
      return -0x15;
    }
  }
  iVar1 = FUN_00530e70(local_54);
  if (iVar1 != 0) {
    iVar1 = FUN_00530da0();
    if (iVar1 != 0) {
      FUN_0052b240(4);
      return -0x15;
    }
    iVar1 = FUN_00530e70(local_54);
    if (iVar1 != 0) {
      FUN_0052b240(4);
      return -0x15;
    }
  }
  if (param_1 == 0) {
    uVar4 = 0;
LAB_0047ae2d:
    iVar1 = FUN_0047b070(local_48,uVar4);
    return iVar1;
  }
  local_10 = 0;
  local_48[0] = 0;
  FUN_00530eb0(local_48);
  switch(param_1) {
  case 5:
    local_3a = 1;
    local_2c = 0;
    local_1e = 0;
    FUN_00530eb0(local_48);
    iVar1 = FUN_0047b070(local_48,1);
    return iVar1;
  case 6:
    local_3a = 0;
    local_2c = 1;
    local_1e = 0;
    FUN_00530eb0(local_48);
    iVar1 = FUN_0047b070(local_48,1);
    return iVar1;
  case 7:
    local_3a = 0;
    local_2c = 0;
    local_1e = 1;
    FUN_00530eb0(local_48);
    iVar1 = FUN_0047b070(local_48,1);
    return iVar1;
  case 8:
    if (param_2 == 1) {
      iVar1 = FUN_0047b070(local_48,1);
      return iVar1;
    }
    iVar3 = FUN_00477f00(local_48,0);
    if (iVar3 == -10) {
      uVar4 = 1;
      goto LAB_0047ae2d;
    }
    if (iVar3 == -2) {
      return -0x15;
    }
    if (iVar3 == -1) {
      return -0x16;
    }
    break;
  case 9:
    iVar1 = FUN_00478960(local_48,0);
    goto LAB_0047ae5b;
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
    iVar1 = 0;
    piVar2 = &DAT_0058316c;
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + 1;
    } while ((int)piVar2 < 0x5831cd);
    uVar4 = FUN_0047af30((&DAT_00583170)[iVar1 * 2],0);
    switch(uVar4) {
    case 0xffffffeb:
    case 0xfffffff3:
    case 0xfffffff4:
    case 0xfffffffe:
    case 0:
      goto switchD_0047aeac_caseD_ffffffeb;
    case 0xfffffff1:
      iVar3 = -0x1d;
      break;
    case 0xffffffff:
      goto switchD_0047aeac_caseD_ffffffff;
    }
    break;
  case 0xd:
    iVar1 = FUN_00479b10(local_54,0);
LAB_0047ae5b:
    if (iVar1 != -2) {
      if (iVar1 == -1) {
switchD_0047aeac_caseD_ffffffff:
        return -0x16;
      }
      if (iVar1 != 0) {
        return -0x15;
      }
    }
switchD_0047aeac_caseD_ffffffeb:
    return -0x15;
  }
  return iVar3;
}


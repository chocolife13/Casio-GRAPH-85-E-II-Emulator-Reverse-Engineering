// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00496210
// entry: 00496210  size: 510


void FUN_00496210(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int local_8 [2];
  
  iVar7 = 1;
  local_14 = 1;
  FUN_0052f840();
  DAT_005d6d80 = 1;
  cVar1 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,local_c,local_10);
  if (cVar1 != '\0') {
    return;
  }
  iVar6 = param_1 + -1;
  iVar2 = FUN_004956d0(iVar6);
  iVar3 = FUN_004956d0(param_1);
  iVar4 = FUN_004956d0(param_1 + 1);
  iVar5 = FUN_0055b770(DAT_005d6d84,s_EACT1_005bfd10);
  if (iVar5 == 0) {
    iVar7 = 2;
  }
  if (iVar3 == 0x3000000) {
    if (iVar4 == 0x4000000) {
LAB_004962b8:
      iVar7 = iVar7 + 1;
      local_14 = 2;
    }
  }
  else if ((iVar3 == 0x4000000) && (iVar2 == 0x3000000)) goto LAB_004962b8;
  if (DAT_005d6dbc == iVar7) {
    iVar7 = FUN_004955f0(4);
    if (iVar7 == 0) {
      return;
    }
    FUN_004ac750(DAT_005d6dc0,DAT_005d6d84);
    FUN_00495fe0(DAT_005d6d84);
    return;
  }
  if (iVar3 == 0x4000000) {
    if (iVar2 != 0x3000000) goto LAB_0049632d;
  }
  else if ((iVar3 != 0x3000000) || (iVar6 = param_1, iVar4 != 0x4000000)) goto LAB_0049632d;
  FUN_004958b0(iVar6);
  param_1 = iVar6;
LAB_0049632d:
  if (param_1 == DAT_005d6dbc + -1) {
    FUN_004958b0(param_1);
    local_8[0] = 0;
    local_8[1] = 0x80006;
    iVar7 = FUN_0055b770(DAT_005d6d84,s_RUN2D1_005be2c4);
    local_8[0] = (-(uint)(iVar7 != 0) & 0x7e000000) + 0x3000000;
    FUN_00495b10(param_1,local_8,&DAT_005cd010);
  }
  else {
    FUN_004958b0(param_1);
  }
  iVar7 = FUN_0055b770(DAT_005d6d84,s_EACT1_005bfd10);
  if (iVar7 == 0) {
    if (DAT_005d6d78 == param_1) {
      FUN_004a9d00();
    }
    if (param_1 <= DAT_005d6d78) {
      DAT_005d6d78 = DAT_005d6d78 - local_14;
    }
  }
  if (param_1 < DAT_005d6d88) {
    DAT_005d6d88 = param_1;
    iVar7 = FUN_00495970(param_1);
    DAT_005d6d90 = DAT_005d6d90 - iVar7;
  }
  if (DAT_005d6dbc <= DAT_005d6d88) {
    DAT_005d6d88 = DAT_005d6dbc + -1;
  }
  return;
}


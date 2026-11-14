// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00522a10
// entry: 00522a10  size: 408


void FUN_00522a10(int param_1,int param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 local_9;
  char local_8;
  char local_7;
  undefined1 local_6;
  int local_4;
  
  local_9 = DAT_005cd010;
  iVar2 = 2;
  do {
    FUN_005232d0(1,iVar2);
    FUN_00523470(&local_9,0x15);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  local_4 = 0;
  if (1 < param_1) {
    param_3 = param_3 + param_1 * 0x98 + -0x98;
    local_4 = param_1 * 0x13 + -0x13;
  }
  iVar2 = 2;
  do {
    FUN_005232d0(1,iVar2);
    FUN_00523420(&DAT_005ad48c);
    iVar3 = 2;
    do {
      pcVar1 = param_3 + 4;
      if (param_3[4] == '\0') {
        local_8 = (char)((uint)*(undefined4 *)param_3 >> 8);
        if (local_8 == '\0') {
          local_8 = *param_3;
          local_7 = '\0';
        }
        else {
          local_7 = *param_3;
          local_6 = 0;
        }
        pcVar1 = &local_8;
        if (local_8 == '\0') goto joined_r0x00522b10;
      }
      FUN_005232d0(iVar3,iVar2);
      if (local_4 == param_2) {
        FUN_00523460();
      }
      else {
        FUN_00523420(pcVar1);
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 8;
      local_4 = local_4 + 1;
    } while (iVar3 < 0x15);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
joined_r0x00522b10:
  for (; iVar3 < 0x15; iVar3 = iVar3 + 1) {
    FUN_005232d0(iVar3,iVar2);
    FUN_00523420(&DAT_005ad48c);
  }
  while (iVar2 = iVar2 + 1, iVar2 < 8) {
    FUN_005232d0(1,iVar2);
    FUN_00523420(&DAT_005ad48c);
    iVar3 = 0;
    do {
      FUN_005232d0(iVar3,iVar2);
      FUN_00523420(&DAT_005ad48c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x15);
  }
  if (0x71 < param_4) {
    if (param_1 < 2) {
      FUN_00523420(&DAT_005beb1c);
      return;
    }
    FUN_005232d0(0x15,2);
    FUN_00523420(&DAT_005beb20);
  }
  return;
}


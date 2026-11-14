// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00433980
// entry: 00433980  size: 902


undefined4 FUN_00433980(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_210 [12];
  int local_204;
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  FUN_004ab670(local_210);
  iVar1 = FUN_00529a70(param_1);
  local_204 = iVar1;
  if ((iVar1 == 0x409) && (iVar4 = FUN_0055b770(local_210,s__STAT_005be2bc), iVar4 != 0)) {
    FUN_00517360(param_1,local_100);
    puVar2 = (undefined1 *)FUN_00529b70(local_100);
    if (param_2 == 0) {
      iVar1 = FUN_004b7550(puVar2);
      iVar4 = FUN_004b7550(param_3);
      if (0xfe < iVar4 + (uint)(puVar2 == local_100) + iVar1) {
        return 4;
      }
      FUN_004b7750(local_200,param_3);
      iVar1 = FUN_004b7550(local_200);
      local_200[iVar1 + 1] = 0;
      iVar1 = FUN_004b7550(local_200);
      local_200[iVar1] = 0xf6;
      FUN_004b7710(local_200,puVar2);
      iVar1 = local_204;
    }
    else if (puVar2 == local_100) {
      iVar4 = FUN_004b7550(param_3);
      if (0xfe < iVar4 + (uint)(puVar2 == local_100)) {
        return 4;
      }
      local_200[0] = 0xf6;
      local_200[1] = 0;
      FUN_004b7710(local_200,param_3);
    }
    else {
      puVar2[-1] = 0;
      iVar4 = FUN_004b7550(param_3);
      iVar3 = FUN_004b7550(local_100);
      if (0xfe < (uint)(iVar4 + iVar3)) {
        return 4;
      }
      iVar4 = FUN_004b7550(local_100);
      local_100[iVar4 + 1] = 0;
      iVar4 = FUN_004b7550(local_100);
      local_100[iVar4] = 0xf6;
      FUN_004b7710(local_100,param_3);
      FUN_004b7750(local_200,local_100);
    }
  }
  else {
    FUN_004b7750(local_200,param_3);
  }
  iVar4 = FUN_005174c0(param_1,local_200);
  if (iVar4 != 0) {
    return 4;
  }
  if ((iVar1 == 0x188) || (iVar1 == 0x198)) {
    uVar5 = 8;
  }
  else {
    uVar5 = 2;
  }
  FUN_00517660(param_1,uVar5);
  FUN_00517710(param_1,iVar1);
  FUN_005177d0(param_1,0,0xff);
  iVar1 = FUN_0055b770(local_210,s__GRAPH_005be2ac);
  if (iVar1 == 0) {
    FUN_005177d0(param_1,0,0xc0);
    FUN_005177d0(param_1,1,0x80);
    return 0;
  }
  iVar1 = FUN_0055b770(local_210,&DAT_005be2a4);
  if (iVar1 == 0) {
    FUN_005177d0(param_1,1,0x10);
    return 0;
  }
  iVar1 = FUN_0055b770(local_210,s__STAT_005be2bc);
  if ((iVar1 != 0) && (iVar1 = FUN_0055b770(local_210,s__SSHEET_005be210), iVar1 != 0)) {
    iVar1 = FUN_0055b770(local_210,s__RECUR_005be280);
    if (iVar1 == 0) {
      FUN_005177d0(param_1,1,0x10);
      return 0;
    }
    iVar1 = FUN_0055b770(local_210,s__TABLE_005be208);
    if (iVar1 != 0) {
      return 0;
    }
    FUN_005177d0(param_1,1,0x20);
    return 0;
  }
  FUN_005177d0(param_1,1,8);
  FUN_00517710(param_1,0x108);
  return 0;
}


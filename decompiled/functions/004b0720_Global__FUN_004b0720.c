// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b0720
// entry: 004b0720  size: 350


undefined4 FUN_004b0720(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  byte local_155;
  undefined4 *local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [4];
  undefined4 local_144 [6];
  undefined1 local_12c [44];
  char local_100 [21];
  undefined1 local_eb [235];
  
  local_14c = 0;
  iVar1 = FUN_004105d0(param_1,param_2,&local_155,local_148,&local_154,&local_150);
  if (iVar1 != 0) {
    FUN_0052b240(4);
    return 0;
  }
  pcVar3 = local_100;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  if ((0x80 < local_155) && (local_155 < 0x83)) {
    puVar4 = local_144;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *local_154;
      local_154 = local_154 + 1;
      puVar4 = puVar4 + 1;
    }
    if (local_155 == 0x81) {
      local_144[3] = 0;
      local_144[4] = 0;
      local_144[5] = 0;
    }
    FUN_004b5060(local_144,local_12c,&local_14c);
    puVar2 = (undefined1 *)FUN_004b6f30(local_12c,0xd);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
    }
    FUN_004b71f0(local_100,local_12c,0x15);
    if (puVar2 != (undefined1 *)0x0) {
      FUN_004b71f0(local_eb,puVar2 + 1,0x15);
    }
    if (local_100[0] != '\0') {
      FUN_00414240();
      iVar1 = 0;
      do {
        FUN_005232d0(1,iVar1 / 0x15 + 1);
        FUN_00523470(local_100 + iVar1,0x15);
        iVar1 = iVar1 + 0x15;
      } while (iVar1 < 0xff);
    }
    FUN_004af080();
    return 0;
  }
  FUN_004afa10(local_154,local_150);
  return 0;
}


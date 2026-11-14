// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b8440
// entry: 004b8440  size: 183


undefined4 FUN_004b8440(uint param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  char local_118 [4];
  char local_114 [2];
  char local_112;
  int local_110;
  undefined1 local_10c [12];
  undefined4 local_100 [64];
  
  local_118 = (char  [4])s_REPLAY_005bdc50._0_4_;
  local_114 = (char  [2])s_REPLAY_005bdc50._4_2_;
  local_112 = s_REPLAY_005bdc50[6];
  FUN_004ab670(local_10c);
  cVar1 = FUN_004aceb0(local_10c,local_118,1);
  if (cVar1 != '\0') {
    return 0xffffffff;
  }
  cVar1 = FUN_004ad350(local_10c,local_118,&local_110);
  if (cVar1 != '\0') {
    return 0xffffffff;
  }
  if (local_110 == 0) {
    return 0;
  }
  puVar6 = local_100;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  cVar1 = FUN_004ad3f0(0,local_110,local_100);
  if (cVar1 == '\0') {
    uVar2 = FUN_004b8320();
    uVar5 = uVar2;
    if (param_1 != 0) {
      uVar5 = param_1;
    }
    puVar6 = local_100;
    for (uVar7 = 1; (uVar2 != 0 && ((uVar7 & 0xffff) != uVar5)); uVar7 = uVar7 + 1) {
      iVar4 = FUN_004b7550(puVar6);
      uVar2 = uVar2 - 1;
      puVar6 = (undefined4 *)((int)puVar6 + iVar4 + 1);
    }
    uVar3 = FUN_004b7550(puVar6);
    return uVar3;
  }
  return 0xffffffff;
}


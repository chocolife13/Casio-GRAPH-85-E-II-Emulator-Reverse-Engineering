// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b8550
// entry: 004b8550  size: 180


int FUN_004b8550(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
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
    return 0;
  }
  cVar1 = FUN_004ad350(local_10c,local_118,&local_110);
  if (cVar1 != '\0') {
    return 0;
  }
  if (local_110 == 0) {
    return 0;
  }
  puVar5 = local_100;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  cVar1 = FUN_004ad3f0(0,local_110,local_100);
  if (cVar1 == '\0') {
    uVar2 = FUN_004b8320();
    uVar4 = uVar2;
    if (param_1 != 0) {
      uVar4 = param_1;
    }
    puVar5 = local_100;
    for (uVar6 = 1; (uVar2 != 0 && ((uVar6 & 0xffff) != uVar4)); uVar6 = uVar6 + 1) {
      iVar3 = FUN_004b7550(puVar5);
      uVar2 = uVar2 - 1;
      puVar5 = (undefined4 *)((int)puVar5 + iVar3 + 1);
    }
    FUN_004b7750(param_2,puVar5);
    iVar3 = FUN_004b7550(puVar5);
    *(undefined1 *)(iVar3 + param_2) = 0;
    return param_2;
  }
  return 0;
}


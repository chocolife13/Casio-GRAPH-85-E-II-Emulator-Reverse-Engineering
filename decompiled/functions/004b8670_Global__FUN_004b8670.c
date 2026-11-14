// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b8670
// entry: 004b8670  size: 788


byte FUN_004b8670(undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint local_228;
  char local_224 [4];
  char local_220 [2];
  char local_21e;
  uint local_21c;
  int local_218;
  undefined1 local_214 [12];
  undefined1 local_208 [4];
  undefined1 local_204 [2];
  char acStack_202 [2];
  undefined4 local_200 [64];
  undefined4 local_100 [64];
  
  local_224 = (char  [4])s_REPLAY_005bdc50._0_4_;
  local_220 = (char  [2])s_REPLAY_005bdc50._4_2_;
  local_21e = s_REPLAY_005bdc50[6];
  FUN_004ab670(local_214);
  bVar1 = FUN_004aceb0(local_214,local_224,1);
  if (bVar1 == 0) {
    bVar1 = FUN_004ad350(local_214,local_224,&local_228);
    if (bVar1 != 0) {
      return bVar1;
    }
    puVar7 = local_200;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar7 = local_100;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    bVar1 = FUN_004ad3f0(0,local_228,local_200);
    if (bVar1 != 0) {
      return bVar1;
    }
    cVar2 = acStack_202[local_228 + 1];
    for (uVar3 = local_228; (cVar2 == '\0' && (acStack_202[uVar3] == '\0')); uVar3 = uVar3 - 1) {
      cVar2 = acStack_202[uVar3];
    }
    local_228 = uVar3;
    local_21c = uVar3;
    iVar6 = FUN_004b7550(param_1);
    local_228 = local_228 + 1 + iVar6;
    iVar6 = FUN_004b8320();
    puVar7 = local_200;
    for (; 0x100 < local_228; local_228 = local_228 - uVar5) {
      iVar4 = FUN_004b7550(puVar7);
      uVar5 = iVar4 + 1U & 0xffff;
      puVar7 = (undefined4 *)((int)puVar7 + uVar5);
      iVar6 = iVar6 + -1;
    }
    bVar1 = FUN_004ad550(local_204,local_208,&local_218);
    if (bVar1 != 0) {
      return bVar1;
    }
    if (local_218 + uVar3 < local_228) {
      return 0x30;
    }
    puVar10 = local_100;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      FUN_004b7750(puVar10,puVar7);
      uVar3 = FUN_004b7550(puVar7);
      puVar8 = (undefined1 *)((int)puVar7 + (uVar3 & 0xffff));
      puVar9 = (undefined1 *)((int)puVar10 + (uVar3 & 0xffff));
      puVar10 = (undefined4 *)(puVar9 + 1);
      puVar7 = (undefined4 *)(puVar8 + 1);
      *puVar9 = *puVar8;
    }
    FUN_004b7750(puVar10,param_1);
    iVar6 = FUN_004b7550(param_1);
    *(undefined1 *)(iVar6 + (int)puVar10) = 0;
    bVar1 = FUN_004aca70(local_214,local_224,local_21c,0);
    if (bVar1 != 0) {
      return bVar1;
    }
    bVar1 = FUN_004ac130(local_214,local_224,local_228,local_100,0);
    if (0xf < bVar1) {
      return bVar1;
    }
  }
  else {
    if (((bVar1 != 0x41) && (bVar1 != 0x40)) && (bVar1 != 0x42)) {
      return bVar1;
    }
    iVar6 = FUN_004b7550(param_1);
    local_228 = iVar6 + 1;
    puVar7 = local_100;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    FUN_004b7750(local_100,param_1);
    bVar1 = FUN_004abb50(local_214,local_224,local_228 + 3 & 0xfffffffc,local_100);
    cVar2 = FUN_00526090(0x17);
    local_21c = CONCAT31(local_21c._1_3_,cVar2 != '\0');
    FUN_0052f6c0(10,local_21c);
    if (bVar1 != 0) {
      return bVar1;
    }
  }
  return 0;
}


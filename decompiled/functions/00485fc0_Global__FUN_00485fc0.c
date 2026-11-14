// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485fc0
// entry: 00485fc0  size: 577


uint FUN_00485fc0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *local_9c;
  undefined4 *local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80 [128];
  
  iVar2 = FUN_00486470(param_2,param_3);
  if (iVar2 == 0) {
    return 0x15;
  }
  local_94 = 0;
  iVar2 = FUN_004e4000(param_4);
  if (iVar2 < -1) {
    return 0;
  }
  if (0 < iVar2) {
    if (iVar2 != 1) {
      return 0;
    }
    FUN_004e3800(param_4,param_4);
  }
  local_9c = (undefined4 *)FUN_004869c0(param_1);
  if (local_9c != (undefined4 *)0x0) {
    local_98 = local_9c;
    iVar2 = FUN_004862f0(param_1,param_2,local_80);
    if (iVar2 == 0) {
      iVar2 = FUN_00486650(param_1,param_2,param_3,&local_9c);
      if (iVar2 == 0) {
        return 0x32;
      }
      iVar2 = FUN_00486fd0(param_1,param_2,0,&local_9c);
      if (iVar2 == 0) {
        return 0x32;
      }
      puVar7 = local_9c;
      pbVar8 = local_80;
      for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pbVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        pbVar8 = pbVar8 + 4;
      }
    }
    uVar6 = param_3 - 1;
    iVar2 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3;
    uVar6 = uVar6 & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    bVar1 = local_80[iVar2];
    iVar3 = FUN_00486310(param_1,param_2,0);
    iVar4 = FUN_004870d0(iVar2,uVar6,local_80);
    local_80[iVar2] = local_80[iVar2] | '\x01' << (7U - (char)uVar6 & 0x1f);
    if ((bVar1 >> (7U - (char)uVar6 & 0x1f) & 1) == 0) {
      uVar5 = FUN_004abeb0(0xc,param_4,iVar3 + iVar4);
      uVar6 = uVar5 & 0xff;
      if ((uVar5 & 0xff) == 0) {
        local_9c = local_98;
        local_90 = *local_98;
        local_8c = local_98[1];
        local_88 = local_98[2];
        local_84 = local_98[3];
        FUN_00487180(param_1,param_2,0xc,local_98,&local_90,local_80);
        return 0;
      }
    }
    else {
      local_9c = local_98;
      puVar7 = (undefined4 *)(iVar3 + iVar4 + (int)local_98);
      *puVar7 = *param_4;
      puVar7[1] = param_4[1];
      puVar7[2] = param_4[2];
      FUN_00486310(param_1,param_2,&local_98);
      uVar6 = local_94;
    }
    return uVar6;
  }
  return 0x40;
}


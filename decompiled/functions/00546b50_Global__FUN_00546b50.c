// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00546b50
// entry: 00546b50  size: 386


undefined4 FUN_00546b50(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte local_90 [8];
  undefined4 *local_88;
  uint local_84;
  byte local_80 [128];
  
  local_90[0] = 0x7f;
  local_90[1] = 0xbf;
  local_90[2] = 0xdf;
  local_90[3] = 0xef;
  local_90[4] = 0xf7;
  local_90[5] = 0xfb;
  local_90[6] = 0xfd;
  local_90[7] = 0xfe;
  iVar1 = FUN_00486470(param_2,param_3);
  if (iVar1 == 0) {
    return 0x17;
  }
  local_88 = (undefined4 *)FUN_004862f0(param_1,param_2,local_80);
  if (local_88 == (undefined4 *)0x0) {
    return 0;
  }
  uVar2 = FUN_00487bf0(local_80);
  if (0 < (int)uVar2) {
    if ((int)uVar2 < param_3) {
      return 0;
    }
    if (999 < (int)(uVar2 + param_4)) {
      return 0x21;
    }
    do {
      uVar4 = uVar2 - 1;
      if ((int)uVar2 < param_3) {
        bVar3 = 0;
      }
      else {
        local_84 = uVar4 & 0x80000007;
        if ((int)local_84 < 0) {
          local_84 = (local_84 - 1 | 0xfffffff8) + 1;
        }
        iVar1 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
        bVar3 = local_80[iVar1] >> (7U - (char)local_84 & 0x1f) & 1;
        local_80[iVar1] = local_90[local_84] & local_80[iVar1];
      }
      uVar2 = param_4 + uVar4;
      uVar5 = uVar2 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      iVar1 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
      local_80[iVar1] = bVar3 << (7U - (char)uVar5 & 0x1f) | local_90[uVar5] & local_80[iVar1];
      uVar2 = uVar4;
    } while (param_3 <= (int)uVar4);
    pbVar6 = local_80;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_88 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      local_88 = local_88 + 1;
    }
  }
  return 0;
}


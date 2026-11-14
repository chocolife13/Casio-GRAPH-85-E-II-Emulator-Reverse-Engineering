// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00547130
// entry: 00547130  size: 418


undefined4
FUN_00547130(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte local_98 [8];
  int local_90;
  int local_8c;
  uint local_88;
  undefined4 *local_84;
  byte local_80 [128];
  
  local_98[0] = 0x7f;
  local_98[1] = 0xbf;
  local_98[2] = 0xdf;
  local_98[3] = 0xef;
  local_98[4] = 0xf7;
  local_98[5] = 0xfb;
  local_98[6] = 0xfd;
  local_98[7] = 0xfe;
  iVar3 = FUN_00486470(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  if (0 < param_4) {
    iVar3 = FUN_004862f0(param_1,param_2,local_80);
    if (iVar3 != 0) {
      local_90 = FUN_00487bf0(local_80);
      if ((0 < local_90) && (param_3 <= local_90)) {
        FUN_004886c0(param_1,param_2,param_3,param_4,param_5);
        local_84 = (undefined4 *)FUN_004862f0(param_1,param_2,local_80);
        if (local_84 != (undefined4 *)0x0) {
          if (param_3 <= local_90) {
            uVar4 = param_3 - 1;
            local_8c = 1 - param_4;
            uVar5 = param_3 + -1 + param_4;
            do {
              uVar1 = uVar5 + 1;
              if (999 < (int)uVar1) break;
              local_88 = uVar5 & 0x80000007;
              if ((int)local_88 < 0) {
                local_88 = (local_88 - 1 | 0xfffffff8) + 1;
              }
              iVar3 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
              bVar2 = local_80[iVar3];
              local_80[iVar3] = local_98[local_88] & bVar2;
              uVar5 = uVar4 & 0x80000007;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
              }
              iVar3 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
              local_80[iVar3] =
                   (bVar2 >> (7U - (char)local_88 & 0x1f) & 1) << (7U - (char)uVar5 & 0x1f) |
                   local_98[uVar5] & local_80[iVar3];
              uVar4 = uVar4 + 1;
              uVar5 = uVar1;
            } while ((int)((1 - param_4) + uVar1) <= local_90);
          }
          pbVar6 = local_80;
          for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
            *local_84 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            local_84 = local_84 + 1;
          }
        }
      }
    }
  }
  return 1;
}


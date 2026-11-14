// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004886c0
// entry: 004886c0  size: 476


void FUN_004886c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *local_a8;
  byte local_a4 [8];
  undefined4 *local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80 [128];
  
  local_a4[0] = 0x7f;
  local_a4[1] = 0xbf;
  local_a4[2] = 0xdf;
  local_a4[3] = 0xef;
  local_a4[4] = 0xf7;
  local_a4[5] = 0xfb;
  local_a4[6] = 0xfd;
  local_a4[7] = 0xfe;
  if ((((0 < param_4) && (iVar1 = FUN_00486470(param_2,param_3), iVar1 != 0)) &&
      (local_a8 = (undefined4 *)FUN_00486920(param_1,param_2,local_80,&local_9c),
      local_a8 != (undefined4 *)0x0)) &&
     ((iVar1 = FUN_00487bf0(local_80), 0 < iVar1 && (param_3 <= iVar1)))) {
    if (param_3 < 1) {
      param_3 = 1;
    }
    local_94 = param_3 + -1 + param_4;
    iVar1 = 0;
    local_98 = 0;
    if (param_3 <= local_94) {
      uVar3 = param_3 - 1;
      do {
        if (999 < local_94) break;
        iVar4 = (int)(uVar3 + ((int)uVar3 >> 0x1f & 7U)) >> 3;
        uVar2 = uVar3 & 0x80000007;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
        }
        if ((local_80[iVar4] >> (7U - (char)uVar2 & 0x1f) & 1) != 0) {
          if (iVar1 == 0) {
            local_98 = FUN_004870d0(iVar4,uVar2,local_80);
          }
          iVar1 = iVar1 + 0xc;
          local_80[iVar4] = local_80[iVar4] & local_a4[uVar2];
        }
        iVar4 = uVar3 + 2;
        uVar3 = uVar3 + 1;
      } while (iVar4 <= local_94);
      if (iVar1 != 0) {
        local_a8 = local_9c;
        iVar4 = FUN_00486310(param_1,param_2,&local_a8);
        FUN_004acb90(iVar1,local_98 + iVar4);
        local_a8 = local_9c;
        local_90 = *local_9c;
        local_8c = local_9c[1];
        local_88 = local_9c[2];
        local_84 = local_9c[3];
        FUN_00487180(param_1,param_2,-iVar1,local_9c,&local_90,local_80);
        iVar1 = FUN_00487bf0(local_80);
        if (iVar1 == 0) {
          FUN_00487710(param_1,param_2,1,local_a8,param_5);
        }
      }
    }
  }
  return;
}


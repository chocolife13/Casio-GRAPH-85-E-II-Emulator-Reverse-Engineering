// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040d4e0
// entry: 0040d4e0  size: 396


void FUN_0040d4e0(int param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int local_14;
  byte local_8 [8];
  
  local_8[0] = 0x7f;
  local_8[1] = 0xbf;
  local_8[2] = 0xdf;
  local_8[3] = 0xef;
  local_8[4] = 0xf7;
  local_8[5] = 0xfb;
  local_8[6] = 0xfd;
  local_8[7] = 0xfe;
  local_14 = param_4;
  if (param_4 <= param_4 + 6) {
    iVar6 = param_4 << 7;
    do {
      uVar8 = param_3;
      if ((int)param_3 <= (int)(param_3 + 5)) {
        do {
          if (param_1 == 0) {
            cVar1 = FUN_00413870(uVar8,local_14);
          }
          else {
            cVar1 = FUN_00409f80(uVar8 - param_3,local_14 - param_4,param_2);
          }
          if ((param_2 == 0) && (param_1 != 0)) {
            uVar4 = uVar8 & 0x80000007;
            pbVar7 = (byte *)((int)&DAT_005cd75c +
                             ((int)(uVar8 + ((int)uVar8 >> 0x1f & 7U)) >> 3) +
                             ((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3));
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
            }
            bVar5 = cVar1 << (7U - (char)uVar4 & 0x1f) | ~*pbVar7;
LAB_0040d615:
            if ((uVar8 == param_3) || (uVar8 == param_3 + 1)) {
              *pbVar7 = ~bVar5;
            }
          }
          else {
            uVar4 = uVar8 & 0x80000007;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
            }
            iVar3 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
            iVar2 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 7U)) >> 3;
            pbVar7 = (byte *)((int)&DAT_005cd75c + iVar2 + iVar3);
            bVar5 = cVar1 << (7U - (char)uVar4 & 0x1f) |
                    local_8[uVar4] & ~*(byte *)((int)&DAT_005cd75c + iVar2 + iVar3);
            if (param_2 == 0) goto LAB_0040d615;
            *pbVar7 = ~bVar5;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 <= (int)(param_3 + 5));
      }
      local_14 = local_14 + 1;
      iVar6 = iVar6 + 0x80;
    } while (local_14 <= param_4 + 6);
  }
  return;
}


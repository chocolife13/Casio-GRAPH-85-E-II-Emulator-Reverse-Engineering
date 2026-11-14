// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040d670
// entry: 0040d670  size: 144


void FUN_0040d670(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte local_8 [8];
  
  uVar2 = param_2 & 0x80000007;
  local_8[0] = 0x7f;
  local_8[1] = 0xbf;
  local_8[2] = 0xdf;
  local_8[3] = 0xef;
  local_8[4] = 0xf7;
  local_8[5] = 0xfb;
  local_8[6] = 0xfd;
  local_8[7] = 0xfe;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  pbVar1 = (byte *)((int)&DAT_005cd75c +
                   ((int)(param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3) +
                   ((int)(param_3 * 0x80 + (param_3 * 0x80 >> 0x1f & 7U)) >> 3));
  *pbVar1 = ~((param_1 != 0) << (7U - (char)uVar2 & 0x1f) | local_8[uVar2] & ~*pbVar1);
  return;
}


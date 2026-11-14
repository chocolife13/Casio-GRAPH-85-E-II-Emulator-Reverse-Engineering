// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00408b90
// entry: 00408b90  size: 994


undefined4
FUN_00408b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_90 [120];
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_90[0x12] = 0x80;
  local_90[0x3a] = 0x80;
  local_90[0x3c] = 0x80;
  local_90[0x3e] = 0x80;
  local_90[0x3f] = 0x80;
  local_90[0x42] = 0x80;
  local_90[0x43] = 0x80;
  local_90[0x44] = 0x80;
  iVar3 = 0;
  local_90[0] = 0x42;
  local_90[1] = 0x4d;
  local_90[2] = 0x76;
  local_90[3] = 0x10;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[10] = 0x76;
  local_90[0xb] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[0xe] = 0x28;
  local_90[0xf] = 0;
  local_90[0x10] = 0;
  local_90[0x11] = 0;
  local_90[0x13] = 0;
  local_90[0x14] = 0;
  local_90[0x15] = 0;
  local_90[0x16] = 0x40;
  local_90[0x17] = 0;
  local_90[0x18] = 0;
  local_90[0x19] = 0;
  local_90[0x1a] = 1;
  local_90[0x1b] = 0;
  local_90[0x1c] = 4;
  local_90[0x1d] = 0;
  local_90[0x1e] = 0;
  local_90[0x1f] = 0;
  local_90[0x20] = 0;
  local_90[0x21] = 0;
  local_90[0x22] = 0;
  local_90[0x23] = 0x10;
  local_90[0x24] = 0;
  local_90[0x25] = 0;
  local_90[0x26] = 0;
  local_90[0x27] = 0;
  local_90[0x28] = 0;
  local_90[0x29] = 0;
  local_90[0x2a] = 0;
  local_90[0x2b] = 0;
  local_90[0x2c] = 0;
  local_90[0x2d] = 0;
  local_90[0x2e] = 0x10;
  local_90[0x2f] = 0;
  local_90[0x30] = 0;
  local_90[0x31] = 0;
  local_90[0x32] = 0;
  local_90[0x33] = 0;
  local_90[0x34] = 0;
  local_90[0x35] = 0;
  local_90[0x36] = 0;
  local_90[0x37] = 0;
  local_90[0x38] = 0;
  local_90[0x39] = 0;
  local_90[0x3b] = 0;
  local_90[0x3d] = 0;
  local_90[0x40] = 0;
  local_90[0x41] = 0;
  local_90[0x45] = 0;
  local_90[0x46] = 0xc0;
  local_90[0x47] = 0xc0;
  local_90[0x48] = 0xc0;
  local_90[0x4c] = 0xff;
  local_90[0x4f] = 0xff;
  local_90[0x53] = 0xff;
  local_90[0x54] = 0xff;
  local_90[0x56] = 0xff;
  local_90[0x5a] = 0xff;
  local_90[0x5c] = 0xff;
  local_90[0x5e] = 0xff;
  local_90[0x5f] = 0xff;
  local_90[0x62] = 0xff;
  local_90[99] = 0xff;
  local_90[100] = 0xff;
  local_90[0x49] = 0;
  local_90[0x4a] = 0;
  local_90[0x4b] = 0;
  local_90[0x4d] = 0;
  local_90[0x4e] = 0;
  local_90[0x50] = 0;
  local_90[0x51] = 0;
  local_90[0x52] = 0;
  local_90[0x55] = 0;
  local_90[0x57] = 0;
  local_90[0x58] = 0;
  local_90[0x59] = 0;
  local_90[0x5b] = 0;
  local_90[0x5d] = 0;
  local_90[0x60] = 0;
  local_90[0x61] = 0;
  local_90[0x65] = 0;
  local_90[0x66] = 10;
  local_90[0x67] = 0xfa;
  local_90[0x68] = 0xaa;
  local_90[0x69] = 0xaa;
  local_90[0x6a] = 0xaa;
  local_90[0x6b] = 0xaa;
  local_90[0x6c] = 0xaa;
  local_90[0x6d] = 0xaa;
  local_90[0x6e] = 0xaa;
  local_90[0x6f] = 0xaa;
  local_90[0x70] = 0xaa;
  local_90[0x71] = 0xaf;
  local_90[0x72] = 0xaa;
  local_90[0x73] = 0xaa;
  local_90[0x74] = 0xaa;
  local_90[0x75] = 10;
  iVar4 = 0x3e;
  do {
    FUN_005533b8(param_1);
    FUN_005533b8(param_2);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = FUN_00553497(param_3,&DAT_005a9040);
  if (iVar4 != 0) {
    iVar5 = 0;
    local_c = iVar4;
    do {
      FUN_00553f04(iVar4,&DAT_005a903c,local_90[iVar5]);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x76);
    param_4 = param_4 * param_5;
    iVar4 = (int)(param_4 * 4 + (param_4 * 4 >> 0x1f & 7U)) >> 3;
    local_8 = iVar4;
    iVar5 = FUN_00566937(iVar4);
    iVar1 = (int)(param_4 + (param_4 >> 0x1f & 7U)) >> 3;
    if (0 < iVar1) {
      iVar4 = -1;
      local_10 = iVar1;
      do {
        local_18 = FUN_005533b8(param_1);
        local_4 = FUN_005533b8(param_2);
        local_4 = local_4 ^ local_18;
        iVar1 = 1;
        local_14 = 7;
        do {
          bVar2 = (byte)local_14;
          if (((int)local_4 >> (bVar2 & 0x1f) & 1U) == 0) {
            if (((int)local_18 >> (bVar2 & 0x1f) & 1U) == 0) {
              uVar6 = 0xb;
            }
            else {
              uVar6 = 0;
            }
          }
          else if (((int)local_18 >> (bVar2 & 0x1f) & 1U) == 0) {
            uVar6 = 8;
          }
          else {
            uVar6 = 5;
          }
          FUN_00408b40(iVar1 + iVar4,iVar5,uVar6);
          iVar1 = iVar1 + 1;
          local_14 = local_14 + -1;
        } while (-1 < local_14);
        iVar4 = iVar4 + 8;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_10 = 0;
      iVar4 = local_8;
    }
    if (0 < iVar4) {
      do {
        FUN_00553f04(local_c,&DAT_005a903c,(int)*(char *)(iVar3 + iVar5));
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    FUN_00566960(iVar5);
    FUN_005533e9(local_c);
    return 1;
  }
  return 1;
}


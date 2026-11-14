// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00408f80
// entry: 00408f80  size: 468


void FUN_00408f80(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_40 [64];
  
  local_40[0x1a] = 1;
  local_40[0x1c] = 1;
  local_40[0x27] = 0xe;
  local_40[0x2b] = 0xe;
  local_40[0x2e] = 2;
  local_40[0x32] = 2;
  local_40[3] = 4;
  local_40[0x36] = 0xff;
  local_40[0x37] = 0xff;
  local_40[0x38] = 0xff;
  local_40[0x23] = 4;
  local_40[0] = 0x42;
  local_40[1] = 0x4d;
  local_40[2] = 0x3e;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0x3e;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0x28;
  local_40[0xf] = 0;
  local_40[0x10] = 0;
  local_40[0x11] = 0;
  local_40[0x12] = 0x80;
  local_40[0x13] = 0;
  local_40[0x14] = 0;
  local_40[0x15] = 0;
  local_40[0x16] = 0x40;
  local_40[0x17] = 0;
  local_40[0x18] = 0;
  local_40[0x19] = 0;
  local_40[0x1b] = 0;
  local_40[0x1d] = 0;
  local_40[0x1e] = 0;
  local_40[0x1f] = 0;
  local_40[0x20] = 0;
  local_40[0x21] = 0;
  local_40[0x22] = 0;
  local_40[0x24] = 0;
  local_40[0x25] = 0;
  local_40[0x26] = 0xc4;
  local_40[0x28] = 0;
  local_40[0x29] = 0;
  local_40[0x2a] = 0xc4;
  local_40[0x2c] = 0;
  local_40[0x2d] = 0;
  local_40[0x2f] = 0;
  local_40[0x30] = 0;
  local_40[0x31] = 0;
  local_40[0x33] = 0;
  local_40[0x34] = 0;
  local_40[0x35] = 0;
  local_40[0x39] = 0;
  local_40[0x3a] = 0;
  local_40[0x3b] = 0;
  local_40[0x3c] = 0;
  local_40[0x3d] = 0;
  iVar1 = FUN_00553497(param_1,&DAT_005a9040);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00553f04(iVar1,&DAT_005a903c,local_40[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x3e);
    if (-1 < param_3 + -1) {
      iVar2 = (param_3 + -1) * param_2;
      do {
        if (0 < param_2) {
          uVar4 = param_2 + 7U >> 3;
          iVar3 = iVar2;
          do {
            FUN_00553f04(iVar1,&DAT_005a903c,
                         (int)*(char *)(((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) + param_4));
            iVar3 = iVar3 + 8;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        iVar2 = iVar2 - param_2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    FUN_005533e9(iVar1);
  }
  return;
}


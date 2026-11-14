// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00531880
// entry: 00531880  size: 434


uint FUN_00531880(char param_1)

{
  uint in_EAX;
  undefined1 local_64 [100];
  
  local_64[0] = 0;
  local_64[1] = 0;
  local_64[2] = 0;
  local_64[3] = 0;
  local_64[4] = 0;
  local_64[5] = 0;
  local_64[6] = 0;
  local_64[7] = 0;
  local_64[8] = 0;
  local_64[9] = 0;
  local_64[10] = 0;
  local_64[0xb] = 0;
  local_64[0xc] = 0;
  local_64[0xd] = 0;
  local_64[0xe] = 0;
  local_64[0xf] = 0;
  local_64[0x10] = 0;
  local_64[0x11] = 0;
  local_64[0x12] = 0;
  local_64[0x13] = 1;
  local_64[0x14] = 0;
  local_64[0x15] = 2;
  local_64[0x16] = 0;
  local_64[0x17] = 0;
  local_64[0x18] = 0;
  local_64[0x19] = 0;
  local_64[0x1a] = 1;
  local_64[0x1b] = 0;
  local_64[0x1c] = 1;
  local_64[0x1d] = 0;
  local_64[0x1e] = 1;
  local_64[0x1f] = 0;
  local_64[0x20] = 0;
  local_64[0x21] = 0;
  local_64[0x22] = 3;
  local_64[0x23] = 1;
  local_64[0x24] = 1;
  local_64[0x25] = 1;
  local_64[0x26] = 1;
  local_64[0x27] = 1;
  local_64[0x28] = 0;
  local_64[0x29] = 0;
  local_64[0x2a] = 0;
  local_64[0x2b] = 0;
  local_64[0x2c] = 0;
  local_64[0x2d] = 0;
  local_64[0x2e] = 1;
  local_64[0x2f] = 0;
  local_64[0x30] = 1;
  local_64[0x31] = 1;
  local_64[0x32] = 0;
  local_64[0x33] = 0;
  local_64[0x34] = 0;
  local_64[0x35] = 0;
  local_64[0x36] = 0;
  local_64[0x37] = 0;
  local_64[0x38] = 0;
  local_64[0x39] = 0;
  local_64[0x3a] = 0;
  local_64[0x3b] = 0;
  local_64[0x3c] = 0;
  local_64[0x3d] = 0;
  local_64[0x3e] = 0;
  local_64[0x3f] = 0;
  local_64[0x40] = 0;
  local_64[0x41] = 0;
  local_64[0x42] = 0;
  local_64[0x43] = 0;
  local_64[0x44] = 0;
  local_64[0x45] = 0;
  local_64[0x46] = 0;
  local_64[0x47] = 0;
  local_64[0x48] = 0;
  local_64[0x49] = 0;
  local_64[0x4a] = 0;
  local_64[0x4b] = 0;
  local_64[0x4c] = 0;
  local_64[0x4d] = 0;
  local_64[0x4e] = 0;
  local_64[0x4f] = 0;
  local_64[0x50] = 0;
  local_64[0x51] = 0;
  local_64[0x55] = 0;
  local_64[0x56] = 0;
  local_64[0x57] = 0;
  local_64[0x58] = 0;
  local_64[0x59] = 0;
  local_64[0x5b] = 0;
  local_64[0x5c] = 0;
  local_64[0x5d] = 0;
  local_64[0x5e] = 0;
  local_64[0x5f] = 0;
  local_64[0x60] = 0;
  local_64[0x61] = 0;
  local_64[0x62] = 0;
  local_64[99] = 0;
  local_64[0x52] = 1;
  local_64[0x53] = 1;
  local_64[0x54] = 1;
  local_64[0x5a] = 1;
  if ('d' < param_1) {
    return in_EAX & 0xffffff00;
  }
  return CONCAT31(param_1 >> 7,local_64[param_1]);
}


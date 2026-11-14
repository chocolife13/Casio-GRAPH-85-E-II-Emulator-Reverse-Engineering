// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fde10
// entry: 004fde10  size: 773


undefined4 FUN_004fde10(uint param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  uint local_10;
  undefined4 local_c;
  byte local_8 [8];
  
  bVar4 = false;
  local_8[0] = 0;
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_10._0_1_ = '\0';
  local_c = 0x80000000;
  if ((param_1 & 0x80000000) != 0) {
    local_10._0_1_ = 'P';
    param_1 = ~param_1 + 1;
  }
  do {
    bVar2 = (local_8[0] & 0xf) * '\x02';
    if (9 < bVar2) {
      bVar2 = bVar2 + 6;
    }
    if ((uint)(bVar2 >> 4) +
        ((CONCAT12(local_8[2],CONCAT11(local_8[1],local_8[0])) & 0xff) >> 4) * 2 < 10) {
      local_8[0] = (local_8[0] & 0xf0) * '\x02' + bVar2;
    }
    else {
      bVar4 = true;
      local_8[0] = bVar2 + (local_8[0] & 0xf0) * '\x02' + 0x60;
    }
    bVar2 = (local_8[1] & 0xf) * '\x02' + bVar4;
    if (9 < bVar2) {
      bVar2 = bVar2 + 6;
    }
    bVar4 = (uint)(bVar2 >> 4) +
            ((CONCAT12(local_8[3],CONCAT11(local_8[2],local_8[1])) & 0xff) >> 4) * 2 < 10;
    if (bVar4) {
      local_8[1] = (local_8[1] & 0xf0) * '\x02' + bVar2;
    }
    else {
      local_8[1] = bVar2 + (local_8[1] & 0xf0) * '\x02' + 0x60;
    }
    bVar2 = (local_8[2] & 0xf) * '\x02' + !bVar4;
    if (9 < bVar2) {
      bVar2 = bVar2 + 6;
    }
    bVar4 = (uint)(bVar2 >> 4) +
            ((CONCAT12(local_8[4],CONCAT11(local_8[3],local_8[2])) & 0xff) >> 4) * 2 < 10;
    if (bVar4) {
      local_8[2] = (local_8[2] & 0xf0) * '\x02' + bVar2;
    }
    else {
      local_8[2] = bVar2 + (local_8[2] & 0xf0) * '\x02' + 0x60;
    }
    bVar2 = (local_8[3] & 0xf) * '\x02' + !bVar4;
    if (9 < bVar2) {
      bVar2 = bVar2 + 6;
    }
    bVar4 = (uint)(bVar2 >> 4) + ((CONCAT11(local_8[4],local_8[3]) & 0xff) >> 4) * 2 < 10;
    if (bVar4) {
      local_8[3] = (local_8[3] & 0xf0) * '\x02' + bVar2;
    }
    else {
      local_8[3] = bVar2 + (local_8[3] & 0xf0) * '\x02' + 0x60;
    }
    bVar2 = (local_8[4] & 0xf) * '\x02' + !bVar4;
    if (9 < bVar2) {
      bVar2 = bVar2 + 6;
    }
    bVar4 = (byte)((bVar2 >> 4) + (local_8[4] >> 4) * '\x02') < 10;
    if (bVar4) {
      bVar2 = (local_8[4] & 0xf0) * '\x02' + bVar2;
    }
    else {
      bVar2 = (local_8[4] & 0xf0) * '\x02' + bVar2 + 0x60;
    }
    bVar4 = !bVar4;
    if ((local_c & param_1) != 0) {
      local_8[0] = local_8[0] + 1;
    }
    local_c = local_c >> 1;
    local_8[4] = bVar2;
  } while (local_c != 0);
  FUN_004e5780(param_2);
  iVar3 = 4;
  do {
    if (local_8[iVar3] != 0) {
      if (-1 < iVar3) {
        bVar1 = local_8[iVar3];
        *param_2 = (char)local_10 + '\x10';
        cVar5 = (char)iVar3 * ' ';
        param_2[1] = cVar5;
        if ((bVar1 & 0xf0) != 0) {
          param_2[1] = cVar5 + '\x10';
          local_8[5] = bVar2 >> 4;
          local_8[4] = bVar2 * '\x10' + (local_8[3] >> 4);
          local_8[3] = local_8[3] * '\x10' + (local_8[2] >> 4);
          local_8[2] = local_8[2] * '\x10' + (local_8[1] >> 4);
          local_8[1] = local_8[1] * '\x10' + (local_8[0] >> 4);
          local_8[0] = local_8[0] << 4;
          iVar3 = iVar3 + 1;
        }
        param_2[1] = param_2[1] | local_8[iVar3];
        local_10 = 2;
        while (-1 < iVar3 + -1) {
          param_2[local_10] = local_8[iVar3 + -1];
          local_10 = (uint)(byte)((char)local_10 + 1);
          iVar3 = iVar3 + -1;
        }
      }
      return 1;
    }
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return 1;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523870
// entry: 00523870  size: 192


int FUN_00523870(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_60 [24];
  
  piVar2 = local_60;
  local_60[2] = 1;
  local_60[5] = 1;
  local_60[0xb] = 0x12;
  local_60[0xc] = 0x12;
  local_60[3] = 2;
  local_60[0xe] = 0x13;
  local_60[0xf] = 0x13;
  local_60[4] = 2;
  local_60[0x10] = 0x20;
  local_60[0x11] = 0x20;
  local_60[10] = 0x11;
  local_60[0xd] = 0x11;
  local_60[0x13] = 0x22;
  local_60[0x14] = 0x22;
  local_60[6] = 3;
  local_60[7] = 3;
  iVar1 = 0;
  local_60[0x12] = 0x21;
  local_60[0x15] = 0x21;
  local_60[0x16] = 0x23;
  local_60[0x17] = 0x23;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[8] = 0x10;
  local_60[9] = 0x10;
  do {
    if (*piVar2 == param_1) {
      return local_60[iVar1 * 2 + 1];
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 0xc);
  return 0x10;
}


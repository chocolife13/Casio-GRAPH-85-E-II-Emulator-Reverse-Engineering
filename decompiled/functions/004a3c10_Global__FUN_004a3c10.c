// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a3c10
// entry: 004a3c10  size: 211


void FUN_004a3c10(int param_1)

{
  char cVar1;
  char local_10 [16];
  
  local_10[0] = '\0';
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  local_10[4] = 0;
  local_10[5] = 0;
  local_10[6] = 0;
  local_10[7] = 0;
  local_10[8] = 0;
  local_10[9] = 0;
  local_10[10] = 0;
  local_10[0xb] = 0;
  local_10[0xc] = 0;
  cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 2) * 0x1c,7);
  if (cVar1 != '\0') {
    _strncpy((char *)(param_1 + 4),
             (char *)(*(int *)(param_1 + 0x20) + 0x10 + (uint)*(ushort *)(param_1 + 2) * 0x1c),0xc);
    _strncpy(local_10,(char *)(*(int *)(param_1 + 0x20) + 0x10 +
                              (uint)*(ushort *)(param_1 + 2) * 0x1c),0xc);
    FUN_004a02e0(param_1,local_10,
                 *(int *)(param_1 + 0x20) + 0x2c + (uint)*(ushort *)(param_1 + 2) * 0x1c,1);
  }
  return;
}


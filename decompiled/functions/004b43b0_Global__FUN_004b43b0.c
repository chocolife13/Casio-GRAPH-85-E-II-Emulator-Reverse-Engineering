// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b43b0
// entry: 004b43b0  size: 107


void FUN_004b43b0(byte *param_1,byte *param_2,byte *param_3)

{
  byte local_18 [12];
  byte local_c [12];
  
  FUN_00554ab0(local_c,param_1,0xc);
  FUN_00554ab0(local_18,param_2,0xc);
  local_18[0] = local_18[0] & 0x7f;
  local_c[0] = local_c[0] & 0x7f;
  FUN_004e6b80(local_c,local_18,param_3);
  if (((*param_1 & 0x80) != 0) || ((*param_2 & 0x80) != 0)) {
    *param_3 = *param_3 | 0x80;
  }
  return;
}


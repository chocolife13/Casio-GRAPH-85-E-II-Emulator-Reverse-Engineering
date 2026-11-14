// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b4500
// entry: 004b4500  size: 67


void FUN_004b4500(byte *param_1,byte *param_2)

{
  byte local_c [12];
  
  FUN_00554ab0(local_c,param_1,0xc);
  local_c[0] = local_c[0] & 0x7f;
  FUN_004e76a0(local_c,param_2);
  if ((*param_1 & 0x80) != 0) {
    *param_2 = *param_2 | 0x80;
  }
  return;
}


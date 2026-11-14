// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00556e4e
// entry: 00556e4e  size: 109


byte * FUN_00556e4e(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  if (param_1 < param_2) {
    if (DAT_005da6fc == 0) {
      param_2 = param_2 + -1;
    }
    else {
      FUN_00558590(0x19);
      pbVar1 = param_2 + -1;
      if (((&DAT_005da801)[param_2[-1]] & 4) == 0) {
        do {
          pbVar1 = pbVar1 + -1;
          if (pbVar1 < param_1) break;
        } while (((&DAT_005da801)[*pbVar1] & 4) != 0);
        FUN_005585f1(0x19);
        param_2 = param_2 + (-1 - ((int)param_2 - (int)pbVar1 & 1U));
      }
      else {
        FUN_005585f1(0x19);
        param_2 = param_2 + -2;
      }
    }
  }
  else {
    param_2 = (byte *)0x0;
  }
  return param_2;
}


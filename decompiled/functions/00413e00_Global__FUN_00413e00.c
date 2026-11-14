// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00413e00
// entry: 00413e00  size: 72


void FUN_00413e00(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((((bVar1 == 0x7f) || (bVar1 == 0xf7)) || (bVar1 == 0xe5)) ||
     (((bVar1 == 0xe6 || (bVar1 == 0xe7)) || (bVar1 == 0xf9)))) {
    param_1._0_2_ = CONCAT11(param_1[1],bVar1);
    param_1 = (byte *)(CONCAT22(param_1._2_2_,(ushort)param_1) & 0xff00ffff);
  }
  else {
    param_1._0_2_ = (ushort)bVar1;
  }
  FUN_00413da0(&param_1,param_2);
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00410580
// entry: 00410580  size: 77


int FUN_00410580(undefined4 param_1,undefined4 *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005d67e8;
  iVar2 = FUN_004103d0(param_1,param_2,param_3);
  if (iVar2 == 0) {
    if ((*param_3 == 1) || (0x66 < *param_3)) {
      return 0x46;
    }
    FUN_00411f00();
    *(undefined4 *)(iVar1 + 4) = *param_2;
  }
  return iVar2;
}


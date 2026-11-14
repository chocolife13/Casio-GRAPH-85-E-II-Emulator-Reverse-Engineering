// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00506440
// entry: 00506440  size: 103


undefined4 FUN_00506440(undefined4 param_1,byte *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004f9d60(param_2);
  if (iVar1 != 0) {
    iVar1 = *param_2 - 0x30;
    FUN_004fe330(param_2,param_1);
    iVar2 = FUN_004f9d40(param_2);
    if (iVar2 != 0) {
      iVar1 = (*param_2 - 0x30) + iVar1 * 10;
      FUN_004fe330(param_2,param_1);
    }
    if ((iVar1 != 0) && (iVar1 < 0x15)) {
      *param_3 = iVar1;
      return 0;
    }
  }
  return 8;
}


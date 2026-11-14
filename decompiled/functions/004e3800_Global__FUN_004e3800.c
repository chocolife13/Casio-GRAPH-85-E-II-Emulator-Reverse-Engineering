// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e3800
// entry: 004e3800  size: 105


byte * FUN_004e3800(undefined4 *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = FUN_004e4040(param_1);
  *(undefined4 *)param_2 = *param_1;
  *(undefined4 *)(param_2 + 4) = param_1[1];
  *(undefined4 *)(param_2 + 8) = param_1[2];
  if (iVar1 != -1) {
    if (iVar1 == 3) {
      pbVar2 = (byte *)FUN_004e5630(3,param_2);
      return pbVar2;
    }
    if (iVar1 == 2) {
      pbVar2 = (byte *)FUN_004dd120(param_1,param_2);
      return pbVar2;
    }
    iVar1 = FUN_004e4000(param_1);
    if (iVar1 != 0) {
      *param_2 = *param_2 & 0x7f;
    }
  }
  return param_2;
}


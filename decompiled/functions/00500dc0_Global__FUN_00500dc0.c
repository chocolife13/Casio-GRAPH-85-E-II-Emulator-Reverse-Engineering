// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00500dc0
// entry: 00500dc0  size: 170


bool FUN_00500dc0(char *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  pbVar1 = param_2;
  bVar2 = *param_2;
  if (bVar2 == 0) {
    return true;
  }
  if (param_2[bVar2] == 0x20) {
    return true;
  }
  param_2 = (byte *)CONCAT31(param_2._1_3_,param_2[bVar2]);
  iVar4 = FUN_004b7370(param_2);
  if (iVar4 != 0) {
    param_2._0_2_ = CONCAT11(pbVar1[bVar2 - 1],(char)param_2);
  }
  bVar2 = FUN_00500e70(&param_2);
  if (bVar2 == 0xf) {
    return true;
  }
  bVar3 = FUN_00500e70(param_1);
  if (*param_1 == -0x45) {
    if ((char)param_2 == -0x45) {
      return true;
    }
  }
  else if ((char)param_2 == -0x45) {
    return bVar3 == 0;
  }
  return bVar3 < bVar2;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fce70
// entry: 004fce70  size: 162


undefined4 FUN_004fce70(byte *param_1,undefined2 *param_2,byte param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  pbVar1 = param_1;
  cVar4 = '\0';
  FUN_004e5640(param_1,param_1);
  if ((pbVar1[1] & 0xf) == 0) {
    return 1;
  }
  if ((*pbVar1 & 0x40) != 0) {
    cVar4 = 'P';
    *pbVar1 = *pbVar1 + 0xb0;
  }
  if (param_3 < 6) {
    param_1 = (byte *)CONCAT22(param_1._2_2_,*param_2);
    iVar2 = FUN_004fc120(pbVar1,&param_1);
    if (iVar2 != 0) {
      *pbVar1 = *pbVar1 + cVar4;
      return 1;
    }
    FUN_004e5780(pbVar1);
    return 1;
  }
  iVar2 = FUN_004fc1d0(pbVar1,param_2);
  if (iVar2 != 0) {
    *pbVar1 = *pbVar1 + cVar4;
    return 1;
  }
  uVar3 = FUN_00501ed0(pbVar1);
  return uVar3;
}


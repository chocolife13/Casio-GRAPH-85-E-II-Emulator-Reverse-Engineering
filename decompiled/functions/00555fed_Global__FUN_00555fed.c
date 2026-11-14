// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00555fed
// entry: 00555fed  size: 149


uint FUN_00555fed(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_005da6fc == 0) {
    uVar2 = FUN_0055ada0(param_1,param_2);
    return uVar2;
  }
  FUN_00558590(0x19);
  bVar1 = *param_1;
  while (bVar1 != 0) {
    bVar1 = *param_2;
    pbVar3 = param_2;
    while (bVar1 != 0) {
      bVar1 = *pbVar3;
      if (((&DAT_005da801)[bVar1] & 4) == 0) {
        pbVar4 = pbVar3;
        if (bVar1 == *param_1) break;
      }
      else if (((bVar1 == *param_1) && (pbVar3[1] == param_1[1])) ||
              (pbVar4 = pbVar3 + 1, pbVar3[1] == 0)) break;
      pbVar3 = pbVar4 + 1;
      bVar1 = *pbVar3;
    }
    if ((*pbVar3 != 0) ||
       ((((&DAT_005da801)[*param_1] & 4) != 0 && (param_1 = param_1 + 1, *param_1 == 0)))) break;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  FUN_005585f1(0x19);
  return -(uint)(*param_1 != 0) & (uint)param_1;
}


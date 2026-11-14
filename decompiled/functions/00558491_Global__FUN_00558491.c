// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00558491
// entry: 00558491  size: 154


byte * FUN_00558491(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (DAT_005da6fc == 0) {
    param_1 = (byte *)_strncpy((char *)param_1,(char *)param_2,param_3);
  }
  else {
    FUN_00558590(0x19);
    uVar3 = param_3;
    pbVar5 = param_1;
    pbVar4 = param_1;
    if (param_3 != 0) {
      do {
        bVar1 = *param_2;
        param_3 = uVar3 - 1;
        bVar2 = (&DAT_005da801)[bVar1];
        *pbVar4 = bVar1;
        if ((bVar2 & 4) == 0) {
          pbVar5 = pbVar4 + 1;
          param_2 = param_2 + 1;
          if (bVar1 == 0) goto LAB_00558502;
        }
        else {
          pbVar5 = pbVar4 + 1;
          if (param_3 == 0) {
            *pbVar4 = 0;
            goto LAB_00558502;
          }
          bVar1 = param_2[1];
          param_3 = uVar3 - 2;
          *pbVar5 = bVar1;
          pbVar5 = pbVar4 + 2;
          param_2 = param_2 + 2;
          if (bVar1 == 0) {
            *pbVar4 = 0;
            goto LAB_00558502;
          }
        }
        uVar3 = param_3;
        pbVar4 = pbVar5;
      } while (param_3 != 0);
      param_3 = 0;
    }
LAB_00558502:
    if (param_3 != 0) {
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        pbVar5[3] = 0;
        pbVar5 = pbVar5 + 4;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *pbVar5 = 0;
        pbVar5 = pbVar5 + 1;
      }
    }
    FUN_005585f1(0x19);
  }
  return param_1;
}


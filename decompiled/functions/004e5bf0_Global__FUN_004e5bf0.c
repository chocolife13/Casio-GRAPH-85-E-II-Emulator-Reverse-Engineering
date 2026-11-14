// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e5bf0
// entry: 004e5bf0  size: 148


void FUN_004e5bf0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  
  if ((*param_1 & 0xf0) == 0) {
    if (*param_1 == 0) {
LAB_004e5c29:
      FUN_004e5780(param_2);
      return;
    }
    bVar2 = param_1[10];
    bVar3 = param_1[0xb] & 0xf;
    bVar4 = param_1[0xb] & 0xf0;
    if ((bVar4 == 0x10) || (bVar4 == 0x60)) {
      if (bVar3 == 0) {
LAB_004e5c4d:
        pbVar1 = param_2 + 1;
        iVar5 = 8;
        pbVar6 = pbVar1;
        do {
          bVar3 = *param_1;
          param_1 = param_1 + 1;
          *pbVar6 = bVar3;
          pbVar6 = pbVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *param_2 = bVar2 >> 4 | bVar4;
        *pbVar1 = *pbVar1 | bVar2 << 4;
        return;
      }
    }
    else if ((bVar4 == 0) || (bVar4 == 0x50)) {
      if ((bVar3 == 9) && (bVar2 != 0)) goto LAB_004e5c4d;
      goto LAB_004e5c29;
    }
  }
  FUN_004e5630(3,param_2);
  return;
}


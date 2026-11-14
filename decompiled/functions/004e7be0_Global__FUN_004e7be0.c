// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e7be0
// entry: 004e7be0  size: 288


byte * FUN_004e7be0(undefined4 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined4 *)param_2 = *param_1;
  *(undefined4 *)(param_2 + 4) = param_1[1];
  *(undefined4 *)(param_2 + 8) = param_1[2];
  iVar2 = FUN_004e4020(param_1);
  if (iVar2 != 0) {
    return param_2;
  }
  FUN_004e5640(param_2,param_2);
  if (param_3 == 0) {
    return param_2;
  }
  bVar1 = *param_2;
  bVar4 = bVar1 >> 4;
  uVar5 = (uint)(param_2[1] >> 4);
  if (((bVar4 == 0) && ((bVar1 & 0xf) == 0)) && (uVar5 == 0)) {
    return param_2;
  }
  iVar2 = 1;
  if ((bVar4 == 5) || (bVar4 == 6)) {
    iVar2 = -1;
  }
  iVar6 = uVar5 + (bVar1 & 0xf) * 10;
  if ((bVar4 == 0) || (bVar4 == 5)) {
    iVar6 = iVar6 + -100;
  }
  iVar6 = iVar6 + param_3;
  if (99 < iVar6) {
    pbVar3 = (byte *)FUN_004e5630(3,param_2);
    return pbVar3;
  }
  if (iVar6 < -99) {
    pbVar3 = (byte *)FUN_004e5780(param_2);
    return pbVar3;
  }
  if (iVar2 == 1) {
    if (-1 < iVar6) {
      bVar4 = 1;
      goto LAB_004e7cc9;
    }
    bVar4 = 0;
  }
  else {
    if (iVar2 == -1) {
      if (iVar6 < 0) {
        bVar4 = 5;
        goto LAB_004e7ccd;
      }
      bVar4 = 6;
    }
LAB_004e7cc9:
    if (-1 < iVar6) goto LAB_004e7cd0;
  }
LAB_004e7ccd:
  iVar6 = iVar6 + 100;
LAB_004e7cd0:
  bVar1 = (byte)(iVar6 / 10);
  *param_2 = bVar4 << 4 | bVar1;
  param_2[1] = ((char)iVar6 + bVar1 * -10) * '\x10' | param_2[1] & 0xf;
  return param_2;
}


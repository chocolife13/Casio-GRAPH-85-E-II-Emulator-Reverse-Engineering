// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004bacd0
// entry: 004bacd0  size: 230


undefined4 FUN_004bacd0(int *param_1,int *param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_3 < param_4) {
    iVar6 = param_3 * 0xc;
    iVar4 = param_4 - param_3;
    do {
      iVar2 = FUN_004c55f0(*param_2 + iVar6);
      uVar5 = uVar5 + iVar2;
      iVar6 = iVar6 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (int)uVar5 >> 1;
  if (param_3 < param_4) {
    iVar6 = param_3 * 0xc;
    do {
      iVar2 = FUN_004c55f0(*param_2 + iVar6);
      iVar4 = iVar4 - iVar2;
      if (iVar4 < 1) break;
      param_3 = param_3 + 1;
      iVar6 = iVar6 + 0xc;
    } while (param_3 < param_4);
  }
  if (iVar4 != 0) {
    puVar1 = (undefined4 *)(*param_1 + param_3 * 0xc);
    *param_5 = *puVar1;
    param_5[1] = puVar1[1];
    param_5[2] = puVar1[2];
    return 1;
  }
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_004babe0(param_1,param_3,0,param_5);
    return uVar3;
  }
  puVar1 = (undefined4 *)(*param_1 + (param_3 * 3 + 3) * 4);
  *param_5 = *puVar1;
  param_5[1] = puVar1[1];
  param_5[2] = puVar1[2];
  return 1;
}


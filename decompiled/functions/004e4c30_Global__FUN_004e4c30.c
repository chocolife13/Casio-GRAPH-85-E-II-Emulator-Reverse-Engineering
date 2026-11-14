// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e4c30
// entry: 004e4c30  size: 455


void FUN_004e4c30(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte local_20 [4];
  undefined4 local_1c;
  undefined1 local_18;
  byte abStack_13 [3];
  char *local_10;
  char *local_c;
  char *local_8;
  undefined2 local_4;
  
  pcVar2 = _strchr((char *)param_1,0x61);
  if ((pcVar2 != (char *)0x0) || (local_10 = _strchr((char *)param_1,0x41), local_10 != (char *)0x0)
     ) {
    FUN_004e4e00(param_1,param_2);
    return;
  }
  local_1c = 0;
  local_c = local_10;
  local_18 = 0;
  local_8 = local_10;
  uVar3 = 0xffffffff;
  iVar5 = 0;
  pbVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  iVar4 = ~uVar3 - 1;
  iVar7 = 0;
  local_4 = 0;
  if (0 < iVar4) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      if ((bVar1 == 0x65) || (bVar1 == 0x45)) break;
      if (((bVar1 != 0x2e) && (((bVar1 != 0x2d && (0x2f < bVar1)) && (bVar1 < 0x3a)))) &&
         ((bVar1 != 0x30 || (iVar5 != 0)))) {
        abStack_13[iVar5] = bVar1 & 0xf;
        iVar5 = iVar5 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (iVar7 + 1 < iVar4) {
    iVar4 = iVar4 - (iVar7 + 1);
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar5 = 2;
  pbVar6 = abStack_13;
  do {
    pbVar6 = pbVar6 + 2;
    local_20[iVar5] = pbVar6[-1] << 4 | *pbVar6;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 9);
  *param_2 = 0;
  param_2[1] = local_1c;
  *(undefined1 *)(param_2 + 2) = local_18;
  return;
}


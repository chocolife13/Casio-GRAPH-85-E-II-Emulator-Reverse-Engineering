// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00479620
// entry: 00479620  size: 389


undefined4 FUN_00479620(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte local_c;
  byte local_b [11];
  
  uVar4 = FUN_004b6ca0(param_4);
  if (9 < uVar4) {
    return 0;
  }
  FUN_004b6ef0(&local_c,param_4);
  if ((local_c < 0x41) || (0x5a < local_c)) {
    if (param_1 != 3) {
      return 0;
    }
    iVar6 = FUN_0055401d(&local_c);
    if (iVar6 == 1) {
      *(undefined2 *)param_2 = 0;
      *(undefined2 *)((int)param_2 + 2) = 0;
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      return 1;
    }
    return 0;
  }
  for (iVar6 = 0; ((bVar1 = local_b[iVar6], bVar1 != 0 || (param_1 != 1)) && (bVar1 != 0x3a));
      iVar6 = iVar6 + 1) {
    if (bVar1 < 0x30) {
      return 0;
    }
    if (0x39 < bVar1) {
      return 0;
    }
  }
  local_b[iVar6] = 0;
  sVar3 = FUN_0055401d(local_b);
  param_4 = CONCAT22(sVar3,local_c - 0x40);
  if (sVar3 < 1) {
    return 0;
  }
  if (sVar3 < 1000) {
    if (param_1 == 1) {
      if (bVar1 == 0) {
        *param_2 = param_4;
        return 1;
      }
      return 0;
    }
    bVar1 = local_b[iVar6 + 1];
    if (0x40 < bVar1) {
      if (0x5a < bVar1) {
        return 0;
      }
      bVar2 = local_b[iVar6 + 2];
      pbVar5 = local_b + iVar6 + 2;
      while( true ) {
        if (bVar2 == 0) {
          sVar3 = FUN_0055401d(local_b + iVar6 + 2);
          param_1 = CONCAT22(sVar3,bVar1 - 0x40);
          if ((0 < sVar3) && (sVar3 < 1000)) {
            *param_2 = param_4;
            *param_3 = param_1;
            return 1;
          }
          return 0;
        }
        if (bVar2 < 0x30) {
          return 0;
        }
        if (0x39 < *pbVar5) break;
        bVar2 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      }
      return 0;
    }
    return 0;
  }
  return 0;
}


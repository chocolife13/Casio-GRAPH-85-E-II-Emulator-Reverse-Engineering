// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b4710
// entry: 004b4710  size: 504


undefined4 FUN_004b4710(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int local_1c;
  undefined4 local_18;
  byte abStack_10 [16];
  
  FUN_00554ab0(&local_1c,param_2,0x1c);
  iVar2 = 0;
  if (0 < param_3) {
    do {
      if (abStack_10[iVar2] != 0) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  if (iVar2 == param_3) {
    *param_1 = DAT_00586f74;
    puVar3 = param_1 + 1;
    if ((param_4 != 1) && (param_4 != 3)) {
      if (param_3 == 1) {
        if (param_4 == 2) {
          *puVar3 = 0x2e;
          puVar3 = param_1 + 2;
        }
      }
      else {
        *puVar3 = 0x2e;
        param_3 = param_3 + -1;
        puVar3 = param_1 + 2;
        if (0 < param_3) {
          do {
            *puVar3 = DAT_00586f74;
            puVar3 = puVar3 + 1;
            param_3 = param_3 + -1;
          } while (param_3 != 0);
          *puVar3 = 0;
          return 0;
        }
      }
    }
    *puVar3 = 0;
    return 0;
  }
  if (param_3 < local_1c) {
    iVar2 = 0;
    if (-1 < local_1c) {
      do {
        uVar4 = DAT_00586f74;
        if (iVar2 < param_3) {
          uVar4 = (&DAT_00586f74)[abStack_10[iVar2]];
        }
        *param_1 = uVar4;
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= local_1c);
    }
    if ((param_4 == 2) || (param_4 == 3)) {
      *param_1 = 0x2e;
      param_1 = param_1 + 1;
    }
    *param_1 = 0;
    return local_18;
  }
  if (local_1c < 0) {
    if ((param_4 == 1) || (param_4 == 3)) {
      for (iVar2 = param_3 + -1; (0 < iVar2 && (abStack_10[iVar2] == 0)); iVar2 = iVar2 + -1) {
        param_3 = param_3 + -1;
      }
    }
    *param_1 = DAT_00586f74;
    param_1[1] = 0x2e;
    local_1c = -1 - local_1c;
    param_1 = param_1 + 2;
    if (0 < local_1c) {
      do {
        *param_1 = DAT_00586f74;
        param_1 = param_1 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    iVar2 = 0;
    if (0 < param_3) {
      do {
        uVar4 = DAT_00586f74;
        if (iVar2 < 0x10) {
          uVar4 = (&DAT_00586f74)[abStack_10[iVar2]];
        }
        *param_1 = uVar4;
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    *param_1 = 0;
    return local_18;
  }
  if ((param_4 == 1) || (param_4 == 3)) {
    for (iVar2 = param_3 + -1; (local_1c < iVar2 && (abStack_10[iVar2] == 0)); iVar2 = iVar2 + -1) {
      param_3 = param_3 + -1;
    }
  }
  if (param_3 + -1 == local_1c) {
    iVar2 = 0;
    puVar3 = param_1;
    if (0 < local_1c + 1) {
      do {
        param_1 = puVar3 + 1;
        pbVar1 = abStack_10 + iVar2;
        iVar2 = iVar2 + 1;
        *puVar3 = (&DAT_00586f74)[*pbVar1];
        puVar3 = param_1;
      } while (iVar2 < local_1c + 1);
    }
    if ((param_4 == 2) || (param_4 == 3)) {
      *param_1 = 0x2e;
      param_1[1] = 0;
      return local_18;
    }
  }
  else {
    iVar2 = 0;
    puVar3 = param_1;
    if (0 < param_3) {
      do {
        param_1 = puVar3 + 1;
        *puVar3 = (&DAT_00586f74)[abStack_10[iVar2]];
        if (iVar2 == local_1c) {
          *param_1 = 0x2e;
          param_1 = puVar3 + 2;
        }
        iVar2 = iVar2 + 1;
        puVar3 = param_1;
      } while (iVar2 < param_3);
    }
  }
  *param_1 = 0;
  return local_18;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00524da0
// entry: 00524da0  size: 1204


uint FUN_00524da0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7,int param_8,int param_9)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_88;
  undefined1 local_82;
  undefined1 local_81;
  uint local_80;
  uint local_7c;
  undefined1 local_78 [36];
  undefined1 local_54 [84];
  
  local_82 = 0x20;
  local_81 = 0;
  FUN_00523740();
  if (param_4 < param_3) {
    local_88 = param_4;
  }
  else {
    local_88 = param_3;
  }
  local_54[0] = 0;
  pcVar3 = (char *)(param_2 + local_88);
  uVar5 = local_88;
  uVar6 = param_6;
  if ((int)param_6 <= param_8) {
    do {
      if (*pcVar3 == '\0') break;
      uVar1 = FUN_004b78f0(pcVar3);
      uVar1 = FUN_004b79f0(uVar1,local_78);
      iVar2 = FUN_004b6bd0(uVar1);
      if (iVar2 == 0) break;
      uVar6 = uVar6 + iVar2;
      FUN_004b6e70(local_54,local_78);
      iVar2 = FUN_004b7370(*pcVar3);
      if (iVar2 == 0) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar5 = uVar5 + 2;
      }
      pcVar3 = (char *)FUN_004b7840(pcVar3);
    } while ((int)uVar6 <= param_8);
  }
  if (uVar5 < param_4) {
    local_88 = FUN_00523dc0(param_6,param_8,param_2,param_4,local_88);
    local_54[0] = 0;
    pcVar3 = (char *)(param_2 + local_88);
    uVar5 = local_88;
    uVar6 = param_6;
    if ((int)param_6 <= param_8) {
      do {
        if (*pcVar3 == '\0') break;
        uVar1 = FUN_004b78f0(pcVar3);
        uVar1 = FUN_004b79f0(uVar1,local_78);
        iVar2 = FUN_004b6bd0(uVar1);
        if (iVar2 == 0) break;
        uVar6 = uVar6 + iVar2;
        FUN_004b6e70(local_54,local_78);
        iVar2 = FUN_004b7370(*pcVar3);
        if (iVar2 == 0) {
          uVar5 = uVar5 + 1;
        }
        else {
          uVar5 = uVar5 + 2;
        }
        pcVar3 = (char *)FUN_004b7840(pcVar3);
      } while ((int)uVar6 <= param_8);
    }
    if (param_4 <= uVar5) goto LAB_00524f1b;
  }
  else {
LAB_00524f1b:
    if ((uVar5 != param_4) || ((int)uVar6 <= param_8)) goto LAB_00524ffd;
  }
  iVar2 = uVar6 - param_8;
  pcVar3 = (char *)(param_2 + local_88);
  if (0 < iVar2) {
    while (*pcVar3 != '\0') {
      uVar1 = FUN_004b78f0(pcVar3);
      iVar4 = FUN_004b7370(*pcVar3);
      if (iVar4 == 0) {
        local_88 = local_88 + 1;
      }
      else {
        local_88 = local_88 + 2;
      }
      pcVar3 = (char *)FUN_004b7840(pcVar3);
      uVar1 = FUN_004b79f0(uVar1,local_78);
      iVar4 = FUN_004b6bd0(uVar1);
      if ((iVar4 == 0) || (iVar2 = iVar2 - iVar4, iVar2 < 1)) break;
    }
  }
  local_54[0] = 0;
  uVar5 = param_6;
  if ((int)param_6 <= param_8) {
    do {
      if (*pcVar3 == '\0') break;
      uVar1 = FUN_004b78f0(pcVar3);
      uVar1 = FUN_004b79f0(uVar1,local_78);
      iVar2 = FUN_004b6bd0(uVar1);
      if (iVar2 == 0) break;
      uVar5 = uVar5 + iVar2;
      FUN_004b6e70(local_54,local_78);
      pcVar3 = (char *)FUN_004b7840(pcVar3);
    } while ((int)uVar5 <= param_8);
  }
LAB_00524ffd:
  FUN_005232d0(param_6,param_7);
  iVar2 = FUN_004b6bd0(local_54);
  uVar5 = param_8 - param_9;
  local_7c = uVar5;
  if ((int)(iVar2 + param_6) <= (int)uVar5) {
    iVar2 = (uVar5 - (iVar2 + param_6)) + 1;
    do {
      FUN_004b6e70(local_54,&local_82);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_1 == 0) {
    FUN_00523470(local_54,uVar5);
  }
  else {
    if (param_4 < param_5) {
      local_80 = param_5;
      param_5 = param_4;
    }
    else {
      local_80 = param_4;
    }
    if (param_5 < local_88) {
      param_5 = local_88;
    }
    pcVar3 = (char *)(param_2 + local_88);
    uVar5 = local_88;
    uVar6 = param_6;
    while ((uVar5 < param_5 && (*pcVar3 != '\0'))) {
      uVar1 = FUN_004b78f0(pcVar3);
      uVar1 = FUN_004b79f0(uVar1,local_78);
      FUN_005233e0(uVar1);
      iVar2 = FUN_004b7370(*pcVar3);
      if (iVar2 == 0) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar5 = uVar5 + 2;
      }
      pcVar3 = (char *)FUN_004b7840(pcVar3);
      iVar2 = FUN_004b6bd0(local_78);
      uVar6 = uVar6 + iVar2;
    }
    if (uVar5 <= local_80) {
      do {
        if (*pcVar3 == '\0') break;
        if (local_7c < uVar6) goto LAB_005251d1;
        uVar1 = FUN_004b78f0(pcVar3);
        uVar1 = FUN_004b79f0(uVar1,local_78);
        FUN_00523400(uVar1);
        iVar2 = FUN_004b7370(*pcVar3);
        if (iVar2 == 0) {
          uVar5 = uVar5 + 1;
        }
        else {
          uVar5 = uVar5 + 2;
        }
        pcVar3 = (char *)FUN_004b7840(pcVar3);
        iVar2 = FUN_004b6bd0(local_78);
        uVar6 = uVar6 + iVar2;
      } while (uVar5 <= local_80);
    }
    uVar5 = local_7c;
    if (uVar6 <= local_7c) {
      do {
        if (*pcVar3 == '\0') break;
        uVar1 = FUN_004b78f0(pcVar3);
        uVar1 = FUN_004b79f0(uVar1,local_78);
        FUN_005233e0(uVar1);
        FUN_004b7370(*pcVar3);
        pcVar3 = (char *)FUN_004b7840(pcVar3);
        iVar2 = FUN_004b6bd0(local_78);
        uVar6 = uVar6 + iVar2;
      } while (uVar6 <= uVar5);
      if (uVar6 <= uVar5) {
        iVar2 = (uVar5 - uVar6) + 1;
        do {
          FUN_005233e0(&local_82);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
LAB_005251d1:
  if ((int)param_6 <= param_8) {
    pcVar3 = (char *)(local_88 + param_2);
    uVar5 = local_88;
    do {
      if ((param_4 <= uVar5) || (*pcVar3 == '\0')) break;
      uVar1 = FUN_004b78f0(pcVar3);
      uVar1 = FUN_004b79f0(uVar1,local_78);
      iVar2 = FUN_004b6bd0(uVar1);
      if (iVar2 == 0) break;
      param_6 = param_6 + iVar2;
      iVar2 = FUN_004b7370(*pcVar3);
      if (iVar2 == 0) {
        uVar5 = uVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
      else {
        uVar5 = uVar5 + 2;
        pcVar3 = pcVar3 + 2;
      }
    } while ((int)param_6 <= param_8);
  }
  FUN_005232d0(param_6,param_7);
  FUN_00527030();
  return local_88;
}


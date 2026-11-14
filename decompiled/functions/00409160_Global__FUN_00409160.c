// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00409160
// entry: 00409160  size: 753


void __thiscall FUN_00409160(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined **ppuVar9;
  char *pcVar10;
  undefined *local_2dc [4];
  undefined *local_2cc;
  undefined *local_2c8;
  undefined1 local_2c4 [16];
  char local_2b4 [128];
  undefined1 local_234 [46];
  char acStack_206 [258];
  undefined1 local_104;
  char local_100 [256];
  
  local_2dc[0] = &DAT_005a8fb8;
  local_2dc[1] = &DAT_005a8fb0;
  local_2dc[2] = &DAT_005a8fa8;
  local_2dc[3] = &DAT_005a8fa0;
  local_2cc = &DAT_005a8f98;
  local_2c8 = &DAT_005a8f90;
  iVar8 = 0;
  ppuVar9 = local_2dc;
  do {
    iVar2 = _strncmp(param_2,*ppuVar9,4);
    if (iVar2 == 0) break;
    iVar8 = iVar8 + 1;
    ppuVar9 = ppuVar9 + 1;
  } while (iVar8 < 6);
  _strncpy(acStack_206 + 2,param_2,0x100);
  uVar6 = 0xffffffff;
  local_104 = 0;
  pcVar5 = acStack_206 + 2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (acStack_206[~uVar6] == '\n') {
    uVar6 = 0xffffffff;
    pcVar5 = acStack_206 + 2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    acStack_206[~uVar6] = '\0';
  }
  local_100[0] = '\0';
  iVar2 = FUN_00430010();
  iVar3 = FUN_00430030();
  FUN_00430000(0);
  FUN_00430020(0);
  if (iVar2 != 0) {
    FUN_004b79f0(iVar2,local_234);
  }
  uVar6 = 0xffffffff;
  pcVar5 = &DAT_005cd010;
  do {
    pcVar10 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar5 = pcVar10 + -uVar6;
  pcVar10 = local_2b4;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_00408040(local_2b4);
  if (iVar8 < 6) {
    iVar4 = FUN_00553497(*(undefined4 *)(param_1 + 0x20),&DAT_005a8e6c);
    if (iVar4 == 0) {
      return;
    }
    pcVar5 = (char *)FUN_00430060(iVar8);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar5 = pcVar10 + -uVar6;
    pcVar10 = local_100;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    if (iVar2 == 0) {
      FUN_00553f04(iVar4,s__s_<_s_s>__s_005a9070,acStack_206 + 2,s_FMENU___005a8f80,local_100,
                   local_2b4);
    }
    else {
      FUN_00553f04(iVar4,s__s_<_s_s>_<_s_04x[_s]>__s_005a9080,acStack_206 + 2,s_FMENU___005a8f80,
                   local_100,s_ICODE___005a909c,iVar2,local_234,local_2b4);
    }
  }
  else {
    iVar4 = FUN_00553497(*(undefined4 *)(param_1 + 0x20),&DAT_005a8e6c);
    if (iVar4 == 0) {
      return;
    }
    iVar8 = FUN_0042fec0(local_2c4);
    if (iVar8 == 0) {
      if (iVar2 == 0) {
        if ((iVar3 == 0) || (iVar8 = FUN_00409460(iVar3), iVar8 == 0)) {
          FUN_00553f04(iVar4,s__s__s_005a9044,acStack_206 + 2,local_2b4);
        }
        else {
          FUN_00553f04(iVar4,s__s_<_s_s>__s_005a9070,acStack_206 + 2,s_EXEC___005a904c,iVar8,
                       local_2b4);
        }
      }
      else {
        FUN_00553f04(iVar4,s__s_<_s_04x[_s]>__s_005a9054,acStack_206 + 2,s_ICODE___005a909c,iVar2,
                     local_234,local_2b4);
      }
    }
    else {
      FUN_00553f04(iVar4,s__s_<_s_s>__s_005a9070,acStack_206 + 2,s_APPLI___005a9068,local_2c4,
                   local_2b4);
    }
  }
  FUN_005533e9(iVar4);
  return;
}


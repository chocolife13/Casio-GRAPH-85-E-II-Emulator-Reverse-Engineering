// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004acd20
// entry: 004acd20  size: 395


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004acd20(undefined4 param_1,char *param_2,char param_3)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  size_t _MaxCount;
  char *pcVar11;
  undefined1 local_9;
  int local_8;
  char *local_4;
  
  _MaxCount = 0;
  local_4 = (char *)FUN_004ab740(param_1);
  cVar7 = (char)param_1;
  if (cVar7 == '\0') {
    return 0x10;
  }
  DAT_005d6048 = FUN_004103d0(local_4,&local_8,&local_9);
  if (DAT_005d6048 != 0) {
    uVar3 = FUN_004ab770(DAT_005d6048);
    return uVar3;
  }
  uVar1 = *(ushort *)(local_8 + 0xc);
  if (uVar1 == 0) {
    return 0x41;
  }
  if (param_2 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar8 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    _MaxCount = ~uVar5 - 1;
  }
  uVar3 = 0;
  if (param_3 < '\x01') {
    iVar9 = 1;
    pcVar8 = (char *)(*(int *)(local_8 + 8) + -0x14 + (uint)uVar1 * 0x14);
    DAT_005d6048 = 0;
    if (uVar1 != 0) {
      do {
        cVar2 = FUN_004ab990(pcVar8[0x10]);
        if (cVar2 == cVar7) {
          if (param_2 == (char *)0x0) goto LAB_004ace5b;
          iVar4 = _strncmp(pcVar8,param_2,_MaxCount);
          if (iVar4 == 0) goto LAB_004ace5b;
        }
        iVar9 = iVar9 + 1;
        pcVar8 = pcVar8 + -0x14;
        if ((int)(uint)*(ushort *)(local_8 + 0xc) < iVar9) {
          return 0x40;
        }
      } while( true );
    }
  }
  else {
    pcVar8 = *(char **)(local_8 + 8);
    iVar9 = 1;
    DAT_005d6048 = uVar3;
    if (uVar1 != 0) {
      do {
        cVar2 = FUN_004ab990(pcVar8[0x10]);
        if (cVar2 == cVar7) {
          if (param_2 == (char *)0x0) goto LAB_004ace5b;
          iVar4 = _strncmp(pcVar8,param_2,_MaxCount);
          if (iVar4 == 0) goto LAB_004ace5b;
        }
        iVar9 = iVar9 + 1;
        pcVar8 = pcVar8 + 0x14;
        uVar3 = DAT_005d6048;
      } while (iVar9 <= (int)(uint)*(ushort *)(local_8 + 0xc));
    }
  }
  DAT_005d6048 = uVar3;
  return 0x40;
LAB_004ace5b:
  uVar5 = 0xffffffff;
  do {
    pcVar10 = local_4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = local_4 + 1;
    cVar2 = *local_4;
    local_4 = pcVar10;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  pcVar10 = pcVar10 + -uVar5;
  pcVar11 = &DAT_005d5870;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  _DAT_005d5760 = *(undefined4 *)pcVar8;
  DAT_005d5b70 = cVar7;
  _DAT_005d5764 = *(undefined4 *)(pcVar8 + 4);
  DAT_005d5768 = 0;
  return 0;
}


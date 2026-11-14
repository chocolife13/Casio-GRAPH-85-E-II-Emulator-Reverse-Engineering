// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aceb0
// entry: 004aceb0  size: 336


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004aceb0(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *_Str1;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_5;
  int local_4;
  
  DAT_005d6048 = FUN_004103d0(param_1,&local_4,&local_5);
  if (DAT_005d6048 != 0) {
    uVar3 = FUN_004ab770(DAT_005d6048);
    return uVar3;
  }
  uVar2 = *(ushort *)(local_4 + 0xc);
  if (uVar2 == 0) {
    return 0x41;
  }
  DAT_005d6048 = 0;
  if (param_3 < '\x01') {
    _Str1 = (char *)(*(int *)(local_4 + 8) + -0x14 + (uint)uVar2 * 0x14);
    if (param_2 != (char *)0x0) {
      uVar5 = 0xffffffff;
      iVar7 = 1;
      pcVar8 = param_2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (uVar2 == 0) {
        DAT_005d6048 = 0;
        return 0x40;
      }
      while (iVar4 = _strncmp(_Str1,param_2,~uVar5 - 1), iVar4 != 0) {
        iVar7 = iVar7 + 1;
        _Str1 = _Str1 + -0x14;
        if ((int)(uint)*(ushort *)(local_4 + 0xc) < iVar7) {
          return 0x40;
        }
      }
    }
  }
  else {
    _Str1 = *(char **)(local_4 + 8);
    if (param_2 != (char *)0x0) {
      uVar5 = 0xffffffff;
      iVar7 = 1;
      pcVar8 = param_2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (uVar2 != 0) {
        do {
          iVar4 = _strncmp(_Str1,param_2,~uVar5 - 1);
          if (iVar4 == 0) goto LAB_004acfb3;
          iVar7 = iVar7 + 1;
          _Str1 = _Str1 + 0x14;
        } while (iVar7 <= (int)(uint)*(ushort *)(local_4 + 0xc));
      }
      return 0x40;
    }
  }
LAB_004acfb3:
  uVar5 = 0xffffffff;
  do {
    pcVar8 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar8 + -uVar5;
  pcVar9 = &DAT_005d5870;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  _DAT_005d5760 = *(undefined4 *)_Str1;
  _DAT_005d5764 = *(undefined4 *)(_Str1 + 4);
  DAT_005d5768 = 0;
  DAT_005d5b70 = 0xfe;
  return 0;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad000
// entry: 004ad000  size: 484


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ad000(char param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 uVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *_Str1;
  bool bVar12;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  bVar2 = false;
  if (DAT_005d5b70 == '\0') {
    return 0x57;
  }
  DAT_005d6048 = FUN_004103d0(&DAT_005d5870,&local_8,&local_9);
  if (DAT_005d6048 != 0) {
    uVar4 = FUN_004ab770(DAT_005d6048);
    return uVar4;
  }
  uVar7 = 0xffffffff;
  pcVar11 = &DAT_005d5760;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  local_4 = ~uVar7 - 1;
  uVar4 = 0;
  if (param_1 < '\x01') {
    iVar9 = 1;
    _Str1 = (byte *)(*(int *)(local_8 + 8) + -0x14 + (uint)*(ushort *)(local_8 + 0xc) * 0x14);
    DAT_005d6048 = 0;
    if (*(ushort *)(local_8 + 0xc) != 0) {
      do {
        cVar3 = FUN_004ab990(_Str1[0x10]);
        if (cVar3 == DAT_005d5b70) {
          if (bVar2) goto LAB_004ad1c3;
          if (local_4 == 8) {
            iVar5 = _strncmp((char *)_Str1,&DAT_005d5760,8);
          }
          else {
            pbVar10 = &DAT_005d5760;
            pbVar6 = _Str1;
            do {
              bVar1 = *pbVar6;
              bVar12 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_004ad195:
                iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto joined_r0x004ad19c;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar12 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_004ad195;
              pbVar6 = pbVar6 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
          }
joined_r0x004ad19c:
          if (iVar5 == 0) {
            bVar2 = true;
          }
        }
        iVar9 = iVar9 + 1;
        _Str1 = _Str1 + -0x14;
        if ((int)(uint)*(ushort *)(local_8 + 0xc) < iVar9) {
          return 0x40;
        }
      } while( true );
    }
  }
  else {
    iVar9 = 1;
    _Str1 = *(byte **)(local_8 + 8);
    uVar8 = extraout_var;
    DAT_005d6048 = uVar4;
    if (*(short *)(local_8 + 0xc) != 0) {
      do {
        cVar3 = FUN_004ab990(CONCAT31(uVar8,_Str1[0x10]));
        uVar8 = extraout_var_00;
        if (cVar3 == DAT_005d5b70) {
          if (bVar2) {
LAB_004ad1c3:
            _DAT_005d5760 = *(undefined4 *)_Str1;
            _DAT_005d5764 = *(undefined4 *)(_Str1 + 4);
            DAT_005d5768 = 0;
            return 0;
          }
          if (local_4 == 8) {
            iVar5 = _strncmp((char *)_Str1,&DAT_005d5760,8);
            uVar8 = extraout_var_01;
          }
          else {
            pbVar10 = &DAT_005d5760;
            pbVar6 = _Str1;
            do {
              bVar1 = *pbVar6;
              bVar12 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_004ad0e8:
                iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto joined_r0x004ad0ef;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar12 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_004ad0e8;
              pbVar6 = pbVar6 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
          }
joined_r0x004ad0ef:
          if (iVar5 == 0) {
            bVar2 = true;
          }
        }
        iVar9 = iVar9 + 1;
        _Str1 = _Str1 + 0x14;
        uVar4 = DAT_005d6048;
      } while (iVar9 <= (int)(uint)*(ushort *)(local_8 + 0xc));
    }
  }
  DAT_005d6048 = uVar4;
  return 0x40;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00426640
// entry: 00426640  size: 1234


int FUN_00426640(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *_Str1;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  char *_Source;
  int iVar11;
  bool bVar12;
  int local_4c;
  undefined4 *local_48;
  char *local_44;
  int local_40;
  int local_3c;
  char *local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  char local_20 [16];
  char local_10 [16];
  
  local_10[0] = '\0';
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  local_20[0] = '\0';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_10[4] = '\0';
  local_10[5] = '\0';
  local_10[6] = '\0';
  local_10[7] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_10[8] = '\0';
  local_10[9] = '\0';
  local_10[10] = '\0';
  local_10[0xb] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_40 = 0;
  local_10[0xc] = 0;
  local_20[0xc] = 0;
  if (param_1 < 1) {
    return 0;
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_2 + 4) = s_SETUP_005be050._0_4_;
    *(undefined2 *)(param_2 + 8) = s_SETUP_005be050._4_2_;
    *(undefined4 *)(param_2 + 0x10) = s_SETUP_005be050._0_4_;
    *(undefined2 *)(param_2 + 0x14) = s_SETUP_005be050._4_2_;
    FUN_004a0920(param_2,100);
    if (param_1 == 1) {
      return 1;
    }
    *(undefined4 *)(param_2 + 0x20) = s_ALPHA_MEM_005be3a8._0_4_;
    *(undefined4 *)(param_2 + 0x24) = s_ALPHA_MEM_005be3a8._4_4_;
    *(undefined2 *)(param_2 + 0x28) = s_ALPHA_MEM_005be3a8._8_2_;
    *(undefined4 *)(param_2 + 0x2c) = s_ALPHA_MEM_005be3a8._0_4_;
    *(undefined4 *)(param_2 + 0x30) = s_ALPHA_MEM_005be3a8._4_4_;
    *(undefined2 *)(param_2 + 0x34) = s_ALPHA_MEM_005be3a8._8_2_;
    FUN_004a0920(param_2 + 0x1c,0x2b8);
  }
  iVar8 = 2;
  local_4c = 2;
  if ((param_4 == 0) && (param_1 == 2)) {
    return 2;
  }
  local_34 = (char *)(DAT_005d67e8 + 0x100);
  do {
    if ((*local_34 != '\0') && (iVar3 = FUN_004b79b0(local_34,s__LOCAL_005be3a0,6), iVar3 != 0)) {
      _Source = *(char **)(local_34 + 8);
      local_3c = 0;
      if (*(short *)(local_34 + 0xc) != 0) {
        iVar3 = param_2 + iVar8 * 0x1c;
        local_44 = (char *)(iVar3 + 0x10);
        local_48 = (undefined4 *)(iVar3 + 4);
        do {
          _strncpy(local_10,local_34,8);
          _strncpy(local_20,_Source,8);
          pbVar4 = (byte *)FUN_00423560(local_10,local_20);
          iVar11 = iVar3;
          iVar8 = local_4c;
          puVar7 = local_48;
          pcVar10 = local_44;
          if (pbVar4 != (byte *)0x0) {
            _Str1 = (byte *)FUN_00424920(local_10,local_20);
            if (param_4 == 0) {
              *local_48 = *(undefined4 *)pbVar4;
              local_48[1] = *(undefined4 *)(pbVar4 + 4);
              local_48[2] = *(undefined4 *)(pbVar4 + 8);
              *(undefined4 *)local_44 = *(undefined4 *)_Str1;
              *(undefined4 *)(local_44 + 4) = *(undefined4 *)(_Str1 + 4);
              *(undefined4 *)(local_44 + 8) = *(undefined4 *)(_Str1 + 8);
              local_40 = *(int *)(_Source + 0xc) + 0x14;
              FUN_004a0920(iVar3,local_40);
              pbVar5 = pbVar4;
              pbVar9 = _Str1;
              do {
                bVar1 = *pbVar5;
                bVar12 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_00426864:
                  iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00426869;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar12 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_00426864;
                pbVar5 = pbVar5 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar8 = 0;
LAB_00426869:
              if (iVar8 != 0) {
                FUN_004a0620(iVar3,6,1);
              }
            }
            pcVar10 = s_PROGRAM_005be048;
            pbVar5 = pbVar4;
            do {
              bVar1 = *pbVar5;
              bVar12 = bVar1 < (byte)*pcVar10;
              if (bVar1 != *pcVar10) {
LAB_004268a5:
                iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_004268aa;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar12 = bVar1 < ((byte *)pcVar10)[1];
              if (bVar1 != ((byte *)pcVar10)[1]) goto LAB_004268a5;
              pbVar5 = pbVar5 + 2;
              pcVar10 = (char *)((byte *)pcVar10 + 2);
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_004268aa:
            if (iVar8 == 0) {
              pcVar10 = s_PROGRAM_005be048;
              pbVar5 = _Str1;
              do {
                bVar1 = *pbVar5;
                bVar12 = bVar1 < (byte)*pcVar10;
                if (bVar1 != *pcVar10) {
LAB_004268dd:
                  iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_004268e2;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar12 = bVar1 < ((byte *)pcVar10)[1];
                if (bVar1 != ((byte *)pcVar10)[1]) goto LAB_004268dd;
                pbVar5 = pbVar5 + 2;
                pcVar10 = (char *)((byte *)pcVar10 + 2);
              } while (bVar1 != 0);
              iVar8 = 0;
LAB_004268e2:
              if (iVar8 == 0) {
                FUN_004a0620(iVar3,6,1);
              }
              local_2c = 0;
              local_28 = 0;
              local_24 = 0;
              cVar2 = FUN_004ad2a0(1,_Str1,local_30);
              if (cVar2 == '\0') {
                FUN_004ad3f0(1,10,&local_2c);
              }
              if (param_4 == 0) {
                FUN_004a0620(iVar3,0xc,(char)local_2c != '\0');
                FUN_004a0620(iVar3,0xb,(char)local_24 != '\0');
              }
            }
            iVar8 = local_4c + 1;
            iVar11 = iVar3 + 0x1c;
            puVar7 = local_48 + 7;
            pcVar10 = local_44 + 0x1c;
            if ((param_4 == 0) && (iVar8 == param_1)) goto LAB_00426aab;
            iVar6 = _strncmp((char *)_Str1,s_LISTFILE_005be394,9);
            if ((iVar6 == 0) &&
               (bVar1 = _Str1[9], cVar2 = FUN_00526090(0x2e), (int)cVar2 == bVar1 - 0x30)) {
              if (param_4 == 0) {
                *puVar7 = *(undefined4 *)pbVar4;
                local_48[8] = *(undefined4 *)(pbVar4 + 4);
                local_48[9] = *(undefined4 *)(pbVar4 + 8);
                *(undefined4 *)pcVar10 = s_LIST_005be038._0_4_;
                *(undefined2 *)(local_44 + 0x20) = s_LIST_005be038._4_2_;
                FUN_005554f0(pcVar10,local_20 + 5,6);
                FUN_004a0920(iVar11,local_40);
                FUN_004a0620(iVar11,6,1);
              }
              iVar8 = local_4c + 2;
              iVar11 = iVar3 + 0x38;
              puVar7 = local_48 + 0xe;
              pcVar10 = local_44 + 0x38;
              if ((param_4 == 0) && (iVar8 == param_1)) goto LAB_00426aab;
            }
          }
          local_44 = pcVar10;
          local_48 = puVar7;
          local_4c = iVar8;
          local_3c = local_3c + 1;
          _Source = _Source + 0x14;
          iVar8 = local_4c;
          iVar3 = iVar11;
        } while (local_3c < (int)(uint)*(ushort *)(local_34 + 0xc));
      }
    }
    local_34 = local_34 + 0x10;
    iVar3 = FUN_004b79b0(local_34,s__APLWORK_005abd00,8);
  } while (iVar3 != 0);
LAB_00426aab:
  if (param_3 == 0) {
    if (param_4 != 0) {
LAB_00426b05:
      return iVar8 + 0x20;
    }
    FUN_0055531d(param_2,iVar8,0x1c,&LAB_00425f50);
  }
  else if (param_4 != 0) goto LAB_00426b05;
  local_4c = FUN_00425f90(param_2,iVar8);
  if (param_3 == 0) {
    local_4c = FUN_00426240(param_2,local_4c,param_1);
  }
  return local_4c;
}


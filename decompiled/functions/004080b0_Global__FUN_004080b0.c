// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004080b0
// entry: 004080b0  size: 823


undefined4 __thiscall
FUN_004080b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char local_80 [128];
  
  cVar1 = FUN_00407850();
  if (cVar1 == '\0') {
    return 1;
  }
  pcVar2 = (char *)FUN_00407600(param_2,param_3);
  if ((pcVar2 != (char *)0x0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar3 = FUN_00553497(*(int *)(param_1 + 0x14),&DAT_005a8e6c);
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 != 0) {
      iVar3 = FUN_00553497(*(undefined4 *)(param_1 + 0x18),&DAT_005a8e6c);
      if (*(int *)(param_1 + 8) != 0) {
        if ((param_4 < 1) || (2 < param_4)) {
          FUN_0055332b(pcVar2,*(int *)(param_1 + 8));
          if (param_5 != (undefined4 *)0x0) {
            uVar7 = 0xffffffff;
            pcVar4 = pcVar2;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            pcVar4 = (char *)FUN_00566937(~uVar7);
            uVar7 = 0xffffffff;
            *param_5 = pcVar4;
            pcVar9 = pcVar2;
            do {
              pcVar10 = pcVar9;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar10 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar9 = pcVar10 + -uVar7;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar4 = pcVar4 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar4 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar4 = pcVar4 + 1;
            }
          }
          if (iVar3 != 0) {
            uVar7 = 0xffffffff;
            pcVar4 = &DAT_005cd010;
            do {
              pcVar9 = pcVar4;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar9 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar9;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar4 = pcVar9 + -uVar7;
            pcVar9 = local_80;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar9 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar9 = pcVar9 + 1;
            }
            FUN_00408040(local_80);
            iVar5 = _strncmp(pcVar2,&DAT_005a8fb8,4);
            if ((((iVar5 == 0) || (iVar5 = _strncmp(pcVar2,&DAT_005a8fb0,4), iVar5 == 0)) ||
                (iVar5 = _strncmp(pcVar2,&DAT_005a8fa8,4), iVar5 == 0)) ||
               (((iVar5 = _strncmp(pcVar2,&DAT_005a8fa0,4), iVar5 == 0 ||
                 (iVar5 = _strncmp(pcVar2,&DAT_005a8f98,4), iVar5 == 0)) ||
                (iVar5 = _strncmp(pcVar2,&DAT_005a8f90,4), iVar5 == 0)))) {
              uVar6 = FUN_004300a0(pcVar2[2] + -0x31,local_80);
              FUN_00553f04(iVar3,s__s_<_s_s>__s_005a8f70,pcVar2,s_FMENU___005a8f80,uVar6);
            }
            else {
              FUN_00553f04(iVar3,s__s__s_005a8f88,pcVar2,local_80);
            }
          }
        }
        else {
          uVar7 = 0xffffffff;
          pcVar4 = pcVar2;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          pcVar4 = (char *)FUN_00566937(~uVar7 + 7);
          uVar7 = 0xffffffff;
          do {
            pcVar9 = pcVar2;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar9 = pcVar2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar9;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          pcVar2 = pcVar9 + -uVar7;
          pcVar9 = pcVar4;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
            pcVar2 = pcVar2 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar9 = *pcVar2;
            pcVar2 = pcVar2 + 1;
            pcVar9 = pcVar9 + 1;
          }
          uVar7 = 0xffffffff;
          pcVar2 = pcVar4;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          pcVar4[~uVar7 - 2] = '\0';
          if (param_4 == 1) {
            uVar6 = *(undefined4 *)(param_1 + 0x24);
          }
          else {
            uVar6 = *(undefined4 *)(param_1 + 0x28);
          }
          FUN_00553f40(pcVar4,s__s__04d__005a8fc0,pcVar4,uVar6);
          FUN_0055332b(pcVar4,*(undefined4 *)(param_1 + 8));
          if (iVar3 != 0) {
            FUN_0055332b(pcVar4,iVar3);
          }
          if (param_5 != (undefined4 *)0x0) {
            uVar7 = 0xffffffff;
            pcVar2 = pcVar4;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
            pcVar2 = (char *)FUN_00566937(~uVar7);
            uVar7 = 0xffffffff;
            *param_5 = pcVar2;
            pcVar9 = pcVar4;
            do {
              pcVar10 = pcVar9;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar10 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar9 = pcVar10 + -uVar7;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar2 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar2 = pcVar2 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar2 = pcVar2 + 1;
            }
          }
          FUN_00566960(pcVar4);
        }
        FUN_0055332b(&DAT_005a8c5c,*(undefined4 *)(param_1 + 8));
        if (iVar3 != 0) {
          FUN_0055332b(&DAT_005a8c5c,iVar3);
        }
      }
      FUN_005533e9(*(undefined4 *)(param_1 + 8));
      if (iVar3 != 0) {
        FUN_005533e9(iVar3);
      }
      return 1;
    }
  }
  return 0;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00427630
// entry: 00427630  size: 334


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00427630(char *param_1,int param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  uint local_4;
  
  local_4 = local_4 & 0xffffff00;
  iVar2 = _strncmp(param_1,s_DYNA_MEM_005be290,0xc);
  if (iVar2 == 0) {
    local_8 = param_2 + 1;
    if (local_8 < 4) {
      param_1 = &DAT_0057e442 + local_8 * 2;
      pcVar5 = "@TABLE" + local_8 * 9 + 1;
      do {
        *(undefined4 *)(param_3 + 0xd) = _DAT_005be2a4;
        uVar3 = 0xffffffff;
        *(undefined2 *)(param_3 + 0x11) = DAT_005be2a8;
        pcVar6 = pcVar5;
        do {
          pcVar8 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar8 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar8;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar8 + -uVar3;
        pcVar8 = param_3 + 0x16;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar8 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        }
        *(undefined4 *)param_3 = s_DYNAMEM_005be76c._0_4_;
        uVar3 = 0xffffffff;
        *(undefined4 *)(param_3 + 4) = s_DYNAMEM_005be76c._4_4_;
        pcVar6 = &DAT_005be754;
        do {
          pcVar8 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar8 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar8;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar2 = -1;
        pcVar6 = param_3;
        do {
          pcVar7 = pcVar6;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        pcVar6 = pcVar8 + -uVar3;
        pcVar8 = pcVar7 + -1;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar8 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        }
        *(undefined2 *)(param_3 + 0x28) = *(undefined2 *)param_1;
        iVar2 = FUN_004271f0(param_3,&local_4,param_4);
        if (iVar2 == 0) {
          cVar1 = FUN_004ab990(local_4);
          param_3[0x1f] = cVar1;
          if (2 < local_8) {
            return 0;
          }
          return param_2 + 1;
        }
        local_8 = local_8 + 1;
        pcVar5 = pcVar5 + 9;
        param_1 = (char *)((int)param_1 + 2);
        param_2 = param_2 + 1;
      } while ((int)pcVar5 < 0x57e43b);
    }
  }
  return -1;
}


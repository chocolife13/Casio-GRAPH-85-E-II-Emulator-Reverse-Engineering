// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a29a0
// entry: 004a29a0  size: 671


void FUN_004a29a0(byte *param_1,int param_2)

{
  undefined2 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  int local_24;
  char local_1c;
  undefined4 local_1b [6];
  
  local_1c = '\0';
  puVar8 = local_1b;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  param_2 = param_2 + 1;
  local_24 = 0;
  puVar7 = (ushort *)(param_1 + 0x12);
  do {
    FUN_0042a3b0(param_2 + -1,&DAT_00584ed8,0x30);
    if ((*puVar7 != 0xffff) && (local_24 < (int)(uint)param_1[0x29])) {
      cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*puVar7 * 0x1c,7);
      if (cVar2 == '\0') {
        FUN_0042a3b0(&local_1c,*(int *)(param_1 + 0x20) + 0x10 + (uint)*puVar7 * 0x1c,0xc);
        if (param_1[0x28] != 0) {
          pcVar3 = _strrchr(&local_1c,0x2e);
          if (pcVar3 == (char *)0x0) {
            uVar5 = 0xffffffff;
            pcVar3 = &local_1c;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar2 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar2 != '\0');
            iVar4 = ~uVar5 - 1;
          }
          else {
            pcVar3 = _strrchr(&local_1c,0x2e);
            iVar4 = (int)pcVar3 - (int)&local_1c;
          }
          *(undefined1 *)((int)local_1b + iVar4 + -1) = DAT_005cd010;
        }
        FUN_004b7b40(&local_1c,param_2,0xc);
        uVar5 = 0xffffffff;
        pcVar3 = &DAT_005be9dc;
        do {
          pcVar10 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar10;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar4 = -1;
        pcVar3 = (char *)(param_2 + -1);
        do {
          pcVar9 = pcVar3;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar9 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar2 != '\0');
        pcVar3 = pcVar10 + -uVar5;
        pcVar10 = pcVar9 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar10 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar3 = (char *)(param_2 + -1);
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        FUN_004a0c00(*(int *)(param_1 + 0x20) + (uint)*puVar7 * 0x1c,(~uVar5 - 2) + param_2);
      }
      else {
        if ((*param_1 & 0xf) == 0) {
          local_1c = '<';
          FUN_0042a3b0(local_1b,*(int *)(param_1 + 0x20) + 0x10 + (uint)*puVar7 * 0x1c,0xb);
          uVar1 = DAT_005be9ec;
          uVar5 = 0xffffffff;
          pcVar3 = (char *)(*(int *)(param_1 + 0x20) + 0x10 + (uint)*puVar7 * 0x1c);
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          *(undefined1 *)(param_2 + 0xc) = 0x3a;
          iVar4 = *(int *)(param_1 + 0x20);
          *(undefined2 *)((int)local_1b + (~uVar5 - 1)) = uVar1;
          FUN_004a0c00(iVar4 + (uint)*puVar7 * 0x1c,param_2 + 0xd);
        }
        else {
          local_1c = '[';
          FUN_0042a3b0(local_1b,*(int *)(param_1 + 0x20) + 0x10 + (uint)*puVar7 * 0x1c,0xb);
          uVar5 = 0xffffffff;
          pcVar3 = (char *)(*(int *)(param_1 + 0x20) + 0x10 + (uint)*puVar7 * 0x1c);
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          *(undefined2 *)((int)local_1b + (~uVar5 - 1)) = DAT_005a8df8;
        }
        uVar5 = 0xffffffff;
        pcVar3 = &local_1c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        FUN_0042a3b0(param_2,&local_1c,~uVar5 - 1);
      }
    }
    puVar7 = puVar7 + 1;
    local_24 = local_24 + 1;
    param_2 = param_2 + 0x30;
    if (5 < local_24) {
      return;
    }
  } while( true );
}


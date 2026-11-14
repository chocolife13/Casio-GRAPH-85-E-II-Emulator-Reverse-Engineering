// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518a70
// entry: 00518a70  size: 386


int FUN_00518a70(int param_1,char *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int local_8;
  int local_4;
  
  iVar7 = 0;
  local_4 = 0;
  local_8 = 1;
  piVar9 = (int *)(param_1 + 8);
  pcVar8 = param_2;
  do {
    cVar2 = FUN_00518560(local_8);
    if (cVar2 == '\0') {
      if (local_8 == param_3) {
switchD_00518b62_caseD_a1:
        return -1;
      }
    }
    else {
      pcVar4 = (char *)FUN_00518580(local_8);
      cVar2 = *pcVar4;
      pcVar6 = pcVar8;
      while (cVar2 != '\0') {
        if (cVar2 == '\x7f') {
          switch(pcVar4[1]) {
          case -0x60:
            if (local_8 != 1) {
              return -1;
            }
            *pcVar6 = 'X';
            pcVar6 = pcVar6 + 1;
            pcVar4 = pcVar4 + 2;
            break;
          case -0x5f:
          case -0x5e:
          case -0x5d:
          case -0x58:
          case -0x57:
            goto switchD_00518b62_caseD_a1;
          default:
            goto switchD_00518b62_caseD_a4;
          case -0x59:
            if (local_8 != 2) {
              return -1;
            }
            *pcVar6 = 'X';
            pcVar6 = pcVar6 + 1;
            pcVar4 = pcVar4 + 2;
          }
        }
        else {
          if (cVar2 == -9) {
switchD_00518b62_caseD_a4:
            *pcVar6 = cVar2;
            pcVar6 = pcVar6 + 1;
            pcVar4 = pcVar4 + 1;
          }
          else if (cVar2 == -7) {
            bVar1 = pcVar4[1];
            if (bVar1 == 0x12) {
              if (local_8 != 3) {
                return -1;
              }
              *pcVar6 = 'X';
              pcVar6 = pcVar6 + 1;
              pcVar4 = pcVar4 + 2;
              goto LAB_00518aeb;
            }
            if ((0x12 < bVar1) && (bVar1 < 0x15)) {
              return -1;
            }
            goto switchD_00518b62_caseD_a4;
          }
          *pcVar6 = *pcVar4;
          pcVar6 = pcVar6 + 1;
          pcVar4 = pcVar4 + 1;
        }
LAB_00518aeb:
        cVar2 = *pcVar4;
      }
      *pcVar6 = '\0';
      piVar9[4] = 0x100;
      *piVar9 = local_8;
      piVar9[-2] = (int)pcVar8;
      *(undefined1 *)((int)piVar9 + 0x15) = 10;
      *(char *)((int)piVar9 + 0x16) = (char)local_8 + '\x04';
      uVar3 = FUN_00518540(local_8);
      iVar7 = local_4 + 1;
      *(undefined1 *)(piVar9 + 5) = uVar3;
      pcVar8 = pcVar8 + 0x100;
      piVar9 = piVar9 + 8;
      local_4 = iVar7;
    }
    local_8 = local_8 + 1;
    if (3 < local_8) {
      if (iVar7 != 0) {
        puVar5 = (undefined4 *)(param_1 + iVar7 * 0x20);
        param_2 = param_2 + iVar7 * 0x100;
        puVar5[6] = 0x100;
        *puVar5 = param_2;
        *(undefined1 *)((int)puVar5 + 0x1d) = 5;
        *(undefined1 *)((int)puVar5 + 0x1e) = 1;
        *(undefined1 *)(puVar5 + 7) = 2;
        *(undefined1 *)(puVar5 + 0xf) = 0;
        *param_2 = 'X';
        param_2[1] = '\0';
      }
      return iVar7;
    }
  } while( true );
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a570
// entry: 0042a570  size: 1247


/* WARNING: Type propagation algorithm not settling */

void FUN_0042a570(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [4];
  char local_30 [16];
  char local_20 [16];
  int local_10 [4];
  
  uVar4 = 0xffffffff;
  pcVar10 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  builtin_strncpy(local_30,"            ",0xd);
  builtin_strncpy(local_20,"            ",0xd);
  local_10[0] = 1;
  local_10[1] = 0x34;
  local_10[2] = 0xa90;
  local_10[3] = 0x22540;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_48 = 0;
  local_44 = 0;
  local_40[0] = 0;
  if (~uVar4 - 1 < 0xd) {
    uVar4 = 0xffffffff;
    pcVar10 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
  }
  else {
    uVar4 = 0xc;
  }
  pcVar10 = local_30;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *param_1;
    param_1 = param_1 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar10 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  if (~uVar4 - 1 < 0xd) {
    uVar4 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
  }
  else {
    uVar4 = 0xc;
  }
  pcVar10 = local_20;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  piVar3 = local_40 + 3;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *param_2;
    param_2 = param_2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  param_2 = (char *)0x3;
  pbVar11 = (byte *)(local_30 + 0xb);
  do {
    iVar9 = 4;
    piVar7 = local_10;
    pbVar8 = pbVar11 + -4;
    do {
      bVar2 = *pbVar11;
      if (bVar2 == 0x20) {
        iVar6 = *piVar7;
LAB_0042a84d:
        *piVar3 = *piVar3 + iVar6;
      }
      else {
        if (bVar2 == 0x22) {
          iVar6 = *piVar7 << 1;
          goto LAB_0042a84d;
        }
        if (bVar2 == 0x27) {
          iVar6 = *piVar7 * 3;
          goto LAB_0042a84d;
        }
        if (bVar2 == 0x2e) {
          iVar6 = *piVar7;
LAB_0042a84a:
          iVar6 = iVar6 << 2;
          goto LAB_0042a84d;
        }
        if ((bVar2 < 0x3a) && (0x2f < bVar2)) {
          iVar6 = (bVar2 - 0x2b) * *piVar7;
          goto LAB_0042a84d;
        }
        if (bVar2 == 0x3d) {
          iVar6 = *piVar7 * 0xf;
          goto LAB_0042a84d;
        }
        if ((bVar2 < 0x5b) && (0x40 < bVar2)) {
          iVar6 = (bVar2 - 0x31) * *piVar7;
          goto LAB_0042a84d;
        }
        if ((bVar2 < 0x7b) && (0x60 < bVar2)) {
          iVar6 = (bVar2 - 0x51) * *piVar7;
          goto LAB_0042a84d;
        }
        if (bVar2 == 0x5b) {
          iVar6 = *piVar7 * 0x2a;
          goto LAB_0042a84d;
        }
        if (bVar2 == 0x5d) {
          iVar6 = *piVar7 * 0x2b;
          goto LAB_0042a84d;
        }
        if (bVar2 == 0x7b) {
          iVar6 = *piVar7 * 0xb;
          goto LAB_0042a84a;
        }
        if (bVar2 == 0x7d) {
          iVar6 = *piVar7 * 0x2d;
          goto LAB_0042a84d;
        }
        if (bVar2 == 0x7e) {
          *piVar3 = *piVar3 + *piVar7 * 0x2e;
        }
        else {
          if (bVar2 != 0x2b) {
            if (bVar2 == 0x2d) {
              iVar6 = *piVar7 * 0x30;
            }
            else {
              if (bVar2 == 0xa9) {
                *piVar3 = *piVar3 + *piVar7 * 0x31;
                goto LAB_0042a84f;
              }
              if (bVar2 == 0xb9) {
                iVar6 = *piVar7 * 0x32;
              }
              else {
                if (bVar2 != 0xcd) {
                  if (bVar2 == 0xce) {
                    iVar6 = *piVar7 * 0xd;
                    goto LAB_0042a84a;
                  }
                  goto LAB_0042a84f;
                }
                iVar6 = *piVar7 * 0x33;
              }
            }
            goto LAB_0042a84d;
          }
          *piVar3 = *piVar3 + *piVar7 * 0x2f;
        }
      }
LAB_0042a84f:
      pbVar11 = pbVar11 + -1;
      piVar7 = piVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    piVar3 = piVar3 + -1;
    param_2 = (char *)((int)param_2 + -1);
    pbVar11 = pbVar8;
  } while (param_2 != (char *)0x0);
  piVar3 = local_40;
  param_2 = (char *)0x3;
  pbVar11 = (byte *)(local_20 + 0xb);
  do {
    iVar9 = 4;
    piVar7 = local_10;
    pbVar8 = pbVar11 + -4;
    do {
      bVar2 = *pbVar11;
      if (bVar2 == 0x20) {
        iVar6 = *piVar7;
LAB_0042aa16:
        *piVar3 = *piVar3 + iVar6;
      }
      else {
        if (bVar2 == 0x22) {
          iVar6 = *piVar7 << 1;
          goto LAB_0042aa16;
        }
        if (bVar2 == 0x27) {
          iVar6 = *piVar7 * 3;
          goto LAB_0042aa16;
        }
        if (bVar2 == 0x2e) {
          iVar6 = *piVar7;
LAB_0042aa13:
          iVar6 = iVar6 << 2;
          goto LAB_0042aa16;
        }
        if ((bVar2 < 0x3a) && (0x2f < bVar2)) {
          iVar6 = (bVar2 - 0x2b) * *piVar7;
          goto LAB_0042aa16;
        }
        if (bVar2 == 0x3d) {
          iVar6 = *piVar7 * 0xf;
          goto LAB_0042aa16;
        }
        if ((bVar2 < 0x5b) && (0x40 < bVar2)) {
          iVar6 = (bVar2 - 0x31) * *piVar7;
          goto LAB_0042aa16;
        }
        if ((bVar2 < 0x7b) && (0x60 < bVar2)) {
          iVar6 = (bVar2 - 0x51) * *piVar7;
          goto LAB_0042aa16;
        }
        if (bVar2 == 0x5b) {
          iVar6 = *piVar7 * 0x2a;
          goto LAB_0042aa16;
        }
        if (bVar2 == 0x5d) {
          iVar6 = *piVar7 * 0x2b;
          goto LAB_0042aa16;
        }
        if (bVar2 == 0x7b) {
          iVar6 = *piVar7 * 0xb;
          goto LAB_0042aa13;
        }
        if (bVar2 == 0x7d) {
          iVar6 = *piVar7 * 0x2d;
          goto LAB_0042aa16;
        }
        if (bVar2 == 0x7e) {
          *piVar3 = *piVar3 + *piVar7 * 0x2e;
        }
        else {
          if (bVar2 != 0x2b) {
            if (bVar2 == 0x2d) {
              iVar6 = *piVar7 * 0x30;
            }
            else {
              if (bVar2 == 0xa9) {
                *piVar3 = *piVar3 + *piVar7 * 0x31;
                goto LAB_0042aa18;
              }
              if (bVar2 == 0xb9) {
                iVar6 = *piVar7 * 0x32;
              }
              else {
                if (bVar2 != 0xcd) {
                  if (bVar2 == 0xce) {
                    iVar6 = *piVar7 * 0xd;
                    goto LAB_0042aa13;
                  }
                  goto LAB_0042aa18;
                }
                iVar6 = *piVar7 * 0x33;
              }
            }
            goto LAB_0042aa16;
          }
          *piVar3 = *piVar3 + *piVar7 * 0x2f;
        }
      }
LAB_0042aa18:
      pbVar11 = pbVar11 + -1;
      piVar7 = piVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    piVar3 = piVar3 + -1;
    param_2 = (char *)((int)param_2 + -1);
    pbVar11 = pbVar8;
    if (param_2 == (char *)0x0) {
      FUN_0042a520(local_40 + 1,&local_48);
      return;
    }
  } while( true );
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00505f10
// entry: 00505f10  size: 789


int FUN_00505f10(uint param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_14;
  uint local_10;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  iVar3 = param_1;
  iVar9 = 0;
  local_14 = 0;
  cVar2 = param_2;
  switch(param_2) {
  case '\x01':
  case '\x02':
  case ' ':
    FUN_00528a20(0x23,&local_8,local_4);
    cVar2 = ' ';
    break;
  default:
switchD_00505f3c_caseD_3:
    param_1 = 0;
    local_10 = 0;
    goto LAB_00505fd3;
  case -0x80:
    if ((*(byte *)(param_1 + 0x8e0) & 0x30) != 0x20) goto switchD_00505f3c_caseD_3;
  }
  cVar4 = FUN_00526090(0x18);
  if (cVar4 == '\0') {
    param_1 = 0x100;
    local_10 = 0x80;
  }
  else if (cVar4 == '\x01') {
    param_1 = 0x402;
    local_10 = 0;
  }
  else {
    if (cVar4 != '\x02') {
      *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c) = 0;
      return 0;
    }
    param_1 = 0x401;
    local_10 = 0;
  }
LAB_00505fd3:
  iVar8 = 1;
  do {
    cVar4 = FUN_00517450(iVar8,cVar2);
    if (cVar4 != '\0') {
      uVar6 = FUN_005172b0(iVar8);
      *(uint *)(iVar9 + 0x18 + *(int *)(iVar3 + 0x8dc)) = uVar6 & 0xffff;
      uVar6 = *(uint *)(iVar9 + 0x18 + *(int *)(iVar3 + 0x8dc));
      if (((uVar6 & param_1) == param_1) && ((local_10 & uVar6) == 0)) {
        if ((param_2 == '\x01') || (param_2 == '\x02')) {
          *(uint *)(iVar9 + 0x18 + *(int *)(iVar3 + 0x8dc)) = param_1 | 0x810;
          if (param_2 == '\x01') {
            *(undefined1 *)(iVar9 + 0x10 + *(int *)(iVar3 + 0x8dc)) = 0;
          }
          else {
            *(undefined1 *)(iVar9 + 0x10 + *(int *)(iVar3 + 0x8dc)) = 1;
          }
          *(undefined1 *)(iVar9 + 0x11 + *(int *)(iVar3 + 0x8dc)) = 0;
          *(undefined4 *)(iVar9 + 4 + *(int *)(iVar3 + 0x8dc)) = local_8;
        }
        else {
          uVar7 = FUN_00517250(iVar8);
          *(undefined4 *)(iVar9 + *(int *)(iVar3 + 0x8dc)) = uVar7;
        }
        *(int *)(iVar9 + 8 + *(int *)(iVar3 + 0x8dc)) = iVar8;
        if (param_2 == '\x10') {
          *(undefined1 *)(iVar9 + 0x1c + *(int *)(iVar3 + 0x8dc)) = 0xb;
        }
        else {
          uVar5 = FUN_005173e0(iVar8);
          *(undefined1 *)(iVar9 + 0x1c + *(int *)(iVar3 + 0x8dc)) = uVar5;
        }
        iVar1 = iVar9 + *(int *)(iVar3 + 0x8dc);
        uVar6 = *(uint *)(iVar9 + 0x18 + *(int *)(iVar3 + 0x8dc)) & 0x703;
        if (uVar6 < 0x402) {
          if (uVar6 == 0x401) {
            *(undefined1 *)(iVar1 + 0x1d) = 3;
            *(undefined1 *)(iVar9 + 0x1e + *(int *)(iVar3 + 0x8dc)) = 3;
          }
          else if (uVar6 == 0x100) {
            *(undefined1 *)(iVar1 + 0x1d) = 1;
            *(undefined1 *)(iVar9 + 0x1e + *(int *)(iVar3 + 0x8dc)) = 1;
          }
          else if ((0x1ff < uVar6) && (uVar6 < 0x202)) {
            *(undefined1 *)(iVar1 + 0x1d) = 2;
            *(undefined1 *)(iVar9 + 0x1e + *(int *)(iVar3 + 0x8dc)) = 1;
          }
        }
        else if (uVar6 == 0x402) {
          *(undefined1 *)(iVar1 + 0x1d) = 4;
          *(undefined1 *)(iVar9 + 0x1e + *(int *)(iVar3 + 0x8dc)) = 2;
        }
        local_14 = local_14 + 1;
        iVar9 = iVar9 + 0x20;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x15);
  iVar9 = FUN_004ab6a0(s__GRAPH_005be2ac);
  if (((iVar9 != 0) && ((*(byte *)(iVar3 + 0x8e0) & 0x30) == 0)) &&
     (iVar9 = FUN_00517fb0(), 0 < iVar9)) {
    iVar8 = local_14 << 5;
    do {
      if (0x3bf < iVar8) break;
      uVar6 = FUN_005180c0(iVar9);
      *(uint *)(iVar8 + 0x18 + *(int *)(iVar3 + 0x8dc)) = uVar6 & 0xffff;
      if (*(int *)(iVar8 + 0x18 + *(int *)(iVar3 + 0x8dc)) != 0) {
        FUN_00517ff0(iVar9,iVar8 + *(int *)(iVar3 + 0x8dc));
        uVar5 = FUN_00518080(iVar9);
        *(undefined1 *)(iVar8 + 0x1c + *(int *)(iVar3 + 0x8dc)) = uVar5;
        *(undefined1 *)(iVar8 + 0x1d + *(int *)(iVar3 + 0x8dc)) = 5;
        *(int *)(iVar8 + 8 + *(int *)(iVar3 + 0x8dc)) = iVar9;
        *(undefined1 *)(iVar8 + 0x1e + *(int *)(iVar3 + 0x8dc)) = 1;
        local_14 = local_14 + 1;
        iVar8 = iVar8 + 0x20;
      }
      iVar9 = iVar9 + -1;
    } while (0 < iVar9);
  }
  *(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + local_14 * 0x20) = 0;
  return local_14;
}


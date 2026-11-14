// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044ab70
// entry: 0044ab70  size: 1019


undefined4 FUN_0044ab70(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8;
  undefined4 local_7;
  
  iVar4 = param_3;
  iVar3 = param_2;
  if (*(int *)(param_2 + 0x214) == 1) {
    FUN_0044ab00(param_2);
    return 0;
  }
  iVar6 = FUN_0044ab50(param_1,param_3);
  if (iVar6 == -1) {
    return 0;
  }
  if (*(char *)(*(int *)(iVar4 + 4) + 0x12) == '\x01') {
    switch(param_1) {
    case 0x81:
      param_1 = 0x1d;
      break;
    case 0x82:
      param_1 = 0x1e;
      break;
    case 0x83:
      param_1 = 0x1f;
      break;
    default:
      goto switchD_0044abd6_caseD_84;
    case 0x85:
      param_1 = 0x1c;
      break;
    case 0x95:
      param_1 = 0x1b;
    }
  }
  else {
switchD_0044abd6_caseD_84:
    if (((param_1 == 0xd) && (iVar6 = FUN_005262f0(), iVar6 == 1)) && (*(int *)(iVar3 + 0x238) == 0)
       ) {
      iVar6 = *(int *)(iVar3 + 0x200);
      if (*(int *)(iVar3 + 0x204) != iVar6) {
        do {
          cVar1 = *(char *)(*(int *)(iVar3 + 0x1fc) + -1 + iVar6);
          if ((cVar1 == '\f') || (cVar1 == '\r')) break;
          FUN_0044a770(0x7545,iVar3);
          if (*(int *)(iVar3 + 0x23c) == 1) {
            FUN_0044dfc0(iVar3,*(undefined4 *)(iVar3 + 0x200),*(undefined4 *)(iVar3 + 0x208),
                         *(undefined4 *)(iVar3 + 0x20c));
          }
          iVar6 = *(int *)(iVar3 + 0x200);
        } while (*(int *)(iVar3 + 0x204) != iVar6);
      }
      if (*(char *)(*(int *)(iVar3 + 0x1fc) + -1 + *(int *)(iVar3 + 0x200)) == '\f') {
        param_1 = 0xc;
      }
    }
  }
  local_8 = (undefined1)param_1;
  local_7 = CONCAT31(local_7._1_3_,(char)((uint)param_1 >> 8));
  iVar6 = FUN_004b7370(local_7);
  uVar5 = local_8;
  if (iVar6 == 0) {
    uVar9 = 1;
  }
  else {
    local_8 = (undefined1)local_7;
    local_7 = CONCAT31(local_7._1_3_,uVar5);
    uVar9 = 2;
  }
  if (*(int *)(iVar3 + 0x204) == *(int *)(iVar3 + 0x200)) {
    uVar5 = FUN_004abc40(1,*(undefined4 *)(iVar4 + 4),uVar9,&local_8,*(int *)(iVar3 + 0x200) + 9);
    iVar6 = FUN_0044e3e0(iVar3,uVar5);
    if (iVar6 == -1) {
      return 0xffffffff;
    }
    *(uint *)(iVar3 + 0x204) = *(int *)(iVar3 + 0x204) + uVar9;
    uVar10 = *(undefined4 *)(iVar4 + 4);
  }
  else {
    iVar6 = FUN_005262f0();
    if (iVar6 == 2) {
      uVar5 = FUN_004abc40(1,*(undefined4 *)(iVar4 + 4),uVar9,&local_8,*(int *)(iVar3 + 0x200) + 9);
      iVar6 = FUN_0044e3e0(iVar3,uVar5);
      if (iVar6 == -1) {
        return 0xffffffff;
      }
      *(uint *)(iVar3 + 0x204) = *(int *)(iVar3 + 0x204) + uVar9;
      uVar10 = *(undefined4 *)(iVar4 + 4);
    }
    else {
      iVar6 = FUN_004b7370(*(undefined1 *)(*(int *)(iVar3 + 0x1fc) + -1 + *(int *)(iVar3 + 0x200)));
      uVar8 = (iVar6 != 0) + 1;
      if (uVar9 == uVar8) {
        uVar5 = FUN_004abff0(1,*(undefined4 *)(iVar4 + 4),uVar9,&local_8,*(int *)(iVar3 + 0x200) + 9
                            );
        iVar6 = FUN_0044e3e0(iVar3,uVar5);
        if (iVar6 == -1) {
          return 0xffffffff;
        }
      }
      else {
        if (uVar8 < uVar9) {
          FUN_004ad550(local_c,local_10,&param_3);
          FUN_004ad2a0(1,*(undefined4 *)(iVar4 + 4),&local_14);
          if ((param_3 == 0) || (local_14 == 0xffe4)) {
            FUN_0052b240(0xd);
            *(undefined4 *)(iVar3 + 0x234) = 1;
            return 0xffffffff;
          }
        }
        uVar5 = FUN_004ac8b0(1,*(undefined4 *)(iVar4 + 4),uVar8,*(int *)(iVar3 + 0x200) + 9);
        iVar6 = FUN_0044e3e0(iVar3,uVar5);
        if (iVar6 == -1) {
          return 0xffffffff;
        }
        uVar5 = FUN_004abeb0(uVar9,&local_8,*(int *)(iVar3 + 0x200) + 9);
        iVar6 = FUN_0044e3e0(iVar3,uVar5);
        if (iVar6 == -1) {
          return 0xffffffff;
        }
        if (uVar8 < uVar9) {
          iVar6 = *(int *)(iVar3 + 0x204) + 1;
        }
        else {
          iVar6 = *(int *)(iVar3 + 0x204) + -1;
        }
        *(int *)(iVar3 + 0x204) = iVar6;
      }
      uVar10 = *(undefined4 *)(iVar4 + 4);
    }
  }
  uVar7 = FUN_0044e480(uVar10,&param_2);
  uVar10 = *(undefined4 *)(iVar3 + 0x200);
  uVar2 = *(undefined4 *)(iVar3 + 0x208);
  iVar6 = *(int *)(iVar3 + 0x20c);
  *(undefined4 *)(iVar3 + 0x1fc) = uVar7;
  FUN_0044a770(0x7545,iVar3);
  if (*(int *)(iVar3 + 0x23c) == 1) {
    iVar6 = iVar6 + -1;
  }
  FUN_0044dfc0(iVar3,uVar10,uVar2,iVar6);
  *(uint *)(*(int *)(iVar4 + 4) + 0x14) = param_2 + 3U & 0xfffffffc;
  return 0;
}


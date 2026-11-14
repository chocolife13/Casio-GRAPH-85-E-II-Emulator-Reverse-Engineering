// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044b530
// entry: 0044b530  size: 824


undefined4 FUN_0044b530(undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_8;
  
  iVar8 = 0;
  local_8 = 0;
  switch(param_1) {
  case 0x7541:
  case 0x7543:
  case 0x7546:
  case 0x7548:
    goto switchD_0044b554_caseD_7541;
  case 0x7542:
    if (1 < *(uint *)(param_2 + 0x200)) {
      uVar2 = *(uint *)(param_2 + 0x208);
      uVar7 = 0;
      iVar8 = 0;
      bVar4 = false;
      do {
        if (*(int *)(param_2 + 0x200) == 1) break;
        iVar9 = FUN_0044a900(0x7544,param_2);
        if (*(int *)(param_2 + 0x23c) == 1) {
          FUN_0044dfc0(param_2,*(undefined4 *)(param_2 + 0x200),*(undefined4 *)(param_2 + 0x208),
                       *(undefined4 *)(param_2 + 0x20c));
        }
        if (uVar2 < *(uint *)(param_2 + 0x208)) {
          bVar4 = true;
        }
        iVar9 = iVar9 - uVar7;
        uVar7 = FUN_0044b400(0x7544,param_2);
        iVar8 = iVar8 + iVar9 + uVar7;
      } while (iVar8 < 0x15);
      if (bVar4) {
LAB_0044b650:
        if ((uVar7 < *(uint *)(param_2 + 0x208)) && (*(int *)(param_2 + 0x200) != 1)) {
LAB_0044b669:
          FUN_0044a900(0x7544,param_2);
        }
      }
      else {
        cVar1 = *(char *)(*(int *)(param_2 + 0x1fc) + -1 + *(int *)(param_2 + 0x200));
        if ((cVar1 != '\r') && (cVar1 != '\f')) {
          if (*(int *)(param_2 + 0x200) == 1) goto LAB_0044b650;
          goto LAB_0044b669;
        }
      }
    }
    break;
  case 0x7544:
    if (1 < *(uint *)(param_2 + 0x200)) {
      FUN_0044a900(param_1,param_2);
    }
    break;
  case 0x7545:
    if (*(int *)(param_2 + 0x200) != *(int *)(param_2 + 0x204)) {
LAB_0044b7fe:
      FUN_0044a770(param_1,param_2);
    }
    break;
  case 0x7547:
    if (*(int *)(param_2 + 0x200) != *(int *)(param_2 + 0x204)) {
      iVar9 = *(int *)(param_2 + 0x20c);
      uVar2 = *(uint *)(param_2 + 0x208);
      iVar6 = 0;
      bVar4 = false;
      do {
        if (*(int *)(param_2 + 0x200) == *(int *)(param_2 + 0x204)) break;
        uVar3 = *(undefined4 *)(param_2 + 0x208);
        *(int *)(param_2 + 0x210) = *(int *)(param_2 + 0x200) + -1;
        local_8 = FUN_0044a770(param_1,param_2);
        cVar1 = *(char *)(*(int *)(param_2 + 0x1fc) + *(int *)(param_2 + 0x210));
        if (((cVar1 == '\f') || (cVar1 == '\r')) && (0x15 < (int)(iVar8 + -1 + local_8))) {
          *(int *)(param_2 + 0x20c) = *(int *)(param_2 + 0x20c) + -1;
          *(int *)(param_2 + 0x200) = *(int *)(param_2 + 0x200) + -1;
          *(undefined4 *)(param_2 + 0x208) = uVar3;
        }
        if (*(int *)(param_2 + 0x23c) == 1) {
          FUN_0044dfc0(param_2,*(undefined4 *)(param_2 + 0x200),*(undefined4 *)(param_2 + 0x208),
                       *(undefined4 *)(param_2 + 0x20c));
        }
        if (*(uint *)(param_2 + 0x208) < uVar2) {
          bVar4 = true;
        }
        iVar5 = local_8 - iVar6;
        iVar6 = FUN_0044b400(0x7545,param_2);
        iVar8 = iVar8 + iVar5 + iVar6;
      } while (iVar8 < 0x15);
      iVar8 = *(int *)(param_2 + 0x208);
      if ((((((uint)(iVar8 + -1 + iVar6) < 0x15) || (*(int *)(param_2 + 0x20c) == iVar9)) &&
           ((bVar4 || (iVar8 != 1)))) &&
          ((iVar8 == 0x15 ||
           ((cVar1 = *(char *)(*(int *)(param_2 + 0x1fc) + -1 + *(int *)(param_2 + 0x200)),
            cVar1 != '\r' && (cVar1 != '\f')))))) &&
         (((!bVar4 && (*(int *)(param_2 + 0x200) != *(int *)(param_2 + 0x204))) ||
          ((local_8 < 0x16U - iVar8 && (*(int *)(param_2 + 0x200) != *(int *)(param_2 + 0x204)))))))
      goto LAB_0044b7fe;
    }
  }
  FUN_0044dfc0(param_2,*(undefined4 *)(param_2 + 0x200),*(undefined4 *)(param_2 + 0x208),
               *(undefined4 *)(param_2 + 0x20c));
  iVar9 = 0;
  iVar8 = param_2;
  do {
    FUN_005232d0(1,iVar9 + 2);
    FUN_00523470(iVar8,0x15);
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0x2a;
  } while (iVar9 < 6);
  FUN_005232d0(*(undefined4 *)(param_2 + 0x208),*(int *)(param_2 + 0x20c) + 1);
switchD_0044b554_caseD_7541:
  return 0;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044bb60
// entry: 0044bb60  size: 1028


undefined4 FUN_0044bb60(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_24 [36];
  
  iVar8 = 0;
  if (*(int *)(param_2 + 0x214) == 0) {
    if (**(char **)(param_2 + 0x1fc) == '\0') {
      return 0;
    }
    if ((*(char **)(param_2 + 0x1fc))[*(int *)(param_2 + 0x200) + -1] == '\0') {
      FUN_0044b530(0x7544,param_2);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x200);
    *(undefined4 *)(param_2 + 0x220) = *(undefined4 *)(param_2 + 0x20c);
    *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(param_2 + 0x20c);
    *(undefined4 *)(param_2 + 0x218) = uVar4;
    *(undefined4 *)(param_2 + 0x21c) = *(undefined4 *)(param_2 + 0x208);
    *(undefined4 *)(param_2 + 0x224) = uVar4;
    *(undefined4 *)(param_2 + 0x228) = *(undefined4 *)(param_2 + 0x208);
    *(undefined4 *)(param_2 + 0x214) = 1;
    uVar4 = FUN_0044e420(uVar4,param_2,local_24);
    *(undefined4 *)(param_2 + 0x240) = uVar4;
    FUN_0044b890(param_2);
    FUN_005232d0(*(undefined4 *)(param_2 + 0x208),*(int *)(param_2 + 0x20c) + 1);
    FUN_00523690(0xb);
    return 0;
  }
  FUN_00523690(0xb);
  switch(param_1) {
  case 0x7542:
  case 0x7559:
    if (*(uint *)(param_2 + 0x200) < 2) break;
    uVar2 = *(uint *)(param_2 + 0x208);
    uVar5 = 0;
    iVar8 = 0;
    bVar3 = false;
    do {
      if (*(int *)(param_2 + 0x200) == 1) break;
      iVar7 = FUN_0044a900(0x7544,param_2);
      if (*(int *)(param_2 + 0x23c) == 1) {
        FUN_0044dfc0(param_2,*(undefined4 *)(param_2 + 0x200),*(undefined4 *)(param_2 + 0x208),
                     *(undefined4 *)(param_2 + 0x20c));
      }
      if (uVar2 < *(uint *)(param_2 + 0x208)) {
        bVar3 = true;
      }
      iVar7 = iVar7 - uVar5;
      uVar5 = FUN_0044b400(0x7544,param_2);
      iVar8 = iVar8 + iVar7 + uVar5;
    } while (iVar8 < 0x15);
    if (bVar3) {
LAB_0044bd43:
      if ((*(uint *)(param_2 + 0x208) <= uVar5) || (*(int *)(param_2 + 0x200) == 1)) break;
    }
    else {
      cVar1 = *(char *)(*(int *)(param_2 + 0x1fc) + -1 + *(int *)(param_2 + 0x200));
      if ((cVar1 == '\r') || (cVar1 == '\f')) break;
      if (*(int *)(param_2 + 0x200) == 1) goto LAB_0044bd43;
    }
    FUN_0044a900(0x7544,param_2);
    break;
  case 0x7544:
  case 0x755a:
    if (1 < *(uint *)(param_2 + 0x200)) {
      FUN_0044a900(param_1,param_2);
    }
    break;
  case 0x7545:
  case 0x755b:
    if (*(int *)(param_2 + 0x200) == *(int *)(param_2 + 0x204)) break;
    goto LAB_0044bed4;
  case 0x7547:
  case 0x755c:
    if (*(int *)(param_2 + 0x200) == *(int *)(param_2 + 0x204)) break;
    uVar2 = *(uint *)(param_2 + 0x208);
    iVar7 = 0;
    bVar3 = false;
    uVar5 = param_1;
    do {
      if (*(int *)(param_2 + 0x200) == *(int *)(param_2 + 0x204)) break;
      uVar4 = *(undefined4 *)(param_2 + 0x208);
      *(int *)(param_2 + 0x210) = *(int *)(param_2 + 0x200) + -1;
      uVar5 = FUN_0044a770(param_1,param_2);
      cVar1 = *(char *)(*(int *)(param_2 + 0x1fc) + *(int *)(param_2 + 0x210));
      if (((cVar1 == '\f') || (cVar1 == '\r')) && (0x15 < (int)(iVar8 + -1 + uVar5))) {
        *(int *)(param_2 + 0x200) = *(int *)(param_2 + 0x200) + -1;
        *(int *)(param_2 + 0x20c) = *(int *)(param_2 + 0x20c) + -1;
        *(undefined4 *)(param_2 + 0x208) = uVar4;
      }
      if (*(int *)(param_2 + 0x23c) == 1) {
        FUN_0044dfc0(param_2,*(undefined4 *)(param_2 + 0x200),*(undefined4 *)(param_2 + 0x208),
                     *(undefined4 *)(param_2 + 0x20c));
      }
      if (*(uint *)(param_2 + 0x208) < uVar2) {
        bVar3 = true;
      }
      iVar6 = uVar5 - iVar7;
      iVar7 = FUN_0044b400(0x7545,param_2);
      iVar8 = iVar8 + iVar6 + iVar7;
    } while (iVar8 < 0x15);
    if ((((!bVar3) && (*(int *)(param_2 + 0x208) == 1)) ||
        ((*(int *)(param_2 + 0x208) != 0x15 &&
         ((cVar1 = *(char *)(*(int *)(param_2 + 0x1fc) + -1 + *(int *)(param_2 + 0x200)),
          cVar1 == '\r' || (cVar1 == '\f')))))) ||
       (((bVar3 || (*(int *)(param_2 + 0x200) == *(int *)(param_2 + 0x204))) &&
        ((0x16U - *(int *)(param_2 + 0x208) <= uVar5 ||
         (*(int *)(param_2 + 0x200) == *(int *)(param_2 + 0x204))))))) break;
LAB_0044bed4:
    FUN_0044a770(param_1,param_2);
  }
  if (*(char *)(*(int *)(param_2 + 0x1fc) + -1 + *(int *)(param_2 + 0x200)) == '\0') {
    FUN_0044a900(0x7544,param_2);
  }
  FUN_0044dfc0(param_2,*(undefined4 *)(param_2 + 0x200),*(undefined4 *)(param_2 + 0x208),
               *(undefined4 *)(param_2 + 0x20c));
  *(undefined4 *)(param_2 + 0x224) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_2 + 0x228) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(param_2 + 0x20c);
  FUN_0044b890(param_2);
  FUN_005232d0(*(undefined4 *)(param_2 + 0x208),*(int *)(param_2 + 0x20c) + 1);
  return 0;
}


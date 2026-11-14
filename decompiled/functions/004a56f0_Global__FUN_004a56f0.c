// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a56f0
// entry: 004a56f0  size: 546


void FUN_004a56f0(undefined4 param_1,int *param_2,int *param_3,undefined4 *param_4,int param_5,
                 int *param_6,int *param_7)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar2 = param_7;
  piVar1 = param_6;
  if ((*param_6 == 1) || (*param_7 == 1)) {
    uVar3 = FUN_004ab0a0(param_1,&param_6);
    *param_4 = uVar3;
    *piVar2 = 0;
  }
  FUN_005232d0(1,2);
  FUN_005233e0(&DAT_00585420);
  FUN_005233e0(*param_4);
  FUN_005233e0(&DAT_00585424);
  if (param_5 < 6) {
    if (*piVar1 == 1) {
      iVar4 = 0;
      puVar5 = param_4;
      if (0 < param_5) {
        do {
          uVar3 = FUN_004ab060(param_1,iVar4);
          puVar5[1] = uVar3;
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 < param_5);
      }
      *piVar1 = 0;
    }
    iVar4 = 0;
    if (0 < param_5) {
      do {
        param_4 = param_4 + 1;
        FUN_005232d0(1,iVar4 + 3);
        if (iVar4 == *param_2) {
          FUN_00523400();
          FUN_00523490(*param_4,0x15);
        }
        else {
          FUN_005233e0(&DAT_00585428);
          FUN_00523470(*param_4,0x15);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_5);
      return;
    }
  }
  else {
    if (*piVar1 == 1) {
      iVar4 = 0;
      puVar5 = param_4;
      if (0 < param_5) {
        do {
          if (5 < iVar4) break;
          uVar3 = FUN_004ab060(param_1,*param_3 + iVar4);
          puVar5[1] = uVar3;
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 < param_5);
      }
      *piVar1 = 0;
    }
    iVar4 = 0;
    do {
      param_4 = param_4 + 1;
      FUN_005232d0(1,iVar4 + 3);
      if (iVar4 == *param_2) {
        FUN_00523400();
        FUN_00523490(*param_4,0x15);
      }
      else {
        FUN_005233e0(&DAT_00585428);
        FUN_00523470(*param_4,0x15);
      }
      if (*param_3 < 1) {
        if (*param_2 < 5) {
          FUN_005232d0(0x15,7);
          if (*param_2 != 4) goto LAB_004a58f8;
          FUN_00523460(&DAT_005854cc);
        }
      }
      else {
        FUN_005232d0(0x15,3);
        if (*param_2 == 0) {
          FUN_00523460();
        }
        else {
          FUN_00523420(&DAT_005854c8);
        }
        if (*param_3 < param_5 + -5) {
          FUN_005232d0(0x15,7);
          if (*param_2 == 4) {
            FUN_00523460();
          }
          else {
LAB_004a58f8:
            FUN_00523420(&DAT_005854cc);
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
  }
  return;
}


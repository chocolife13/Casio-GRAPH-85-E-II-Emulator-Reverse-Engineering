// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040eaa0
// entry: 0040eaa0  size: 667


void __thiscall FUN_0040eaa0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  int local_610;
  undefined1 local_60c [4];
  CDialog local_608 [502];
  char acStack_412 [1030];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ab9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005603ea(1,&DAT_005a8cbc,0,0x1000,&DAT_005a942c,0);
  local_4 = 0;
  iVar2 = FUN_0056054c();
  if (iVar2 == 1) {
    piVar3 = (int *)FUN_00560627(local_60c);
    local_4._0_1_ = 1;
    pcVar4 = (char *)FUN_00566937(*(int *)(*piVar3 + -8) + 1);
    local_4._0_1_ = 0;
    FUN_00567398();
    puVar5 = (undefined4 *)FUN_00560627(&local_610);
    uVar8 = 0xffffffff;
    pcVar10 = (char *)*puVar5;
    do {
      pcVar11 = pcVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar10 = pcVar11 + -uVar8;
    pcVar11 = pcVar4;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00567398();
    if (*(int *)(param_1 + 0x88) == 0) {
      local_610 = FUN_00566937(0x2c);
      local_4._0_1_ = 2;
      if (local_610 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00407860(0);
      }
      local_4._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x88) = uVar6;
    }
    cVar1 = FUN_00407850();
    if (cVar1 == '\0') {
      FUN_0040e740();
    }
    cVar1 = FUN_00407850();
    if (cVar1 == '\0') {
      FUN_0056e0d0(&DAT_005a93f0,0,0);
      FUN_00566960(pcVar4);
      local_4 = 3;
      goto LAB_0040ed00;
    }
    uVar8 = 0xffffffff;
    pcVar10 = pcVar4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_0055b770(pcVar4 + (~uVar8 - 5),&DAT_005a93e8);
    if (iVar2 == 0) {
      iVar2 = FUN_00553497(pcVar4,&DAT_005a8d20);
      if (iVar2 != 0) {
        iVar7 = FUN_00553ea2(acStack_412 + 2,0x400,iVar2);
        while (iVar7 != 0) {
          uVar8 = 0xffffffff;
          pcVar10 = acStack_412 + 2;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          if (acStack_412[~uVar8] == '\n') {
            uVar8 = 0xffffffff;
            pcVar10 = acStack_412 + 2;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            acStack_412[~uVar8] = '\0';
          }
          if (acStack_412[2] != '\0') {
            FUN_0040ed40(acStack_412 + 2,param_2);
          }
          iVar7 = FUN_00553ea2(acStack_412 + 2,0x400,iVar2);
        }
        FUN_005533e9(iVar2);
      }
    }
    else {
      FUN_0040ed40(pcVar4,param_2);
    }
    FUN_00566960(pcVar4);
    FUN_0056e0d0(&DAT_005a93cc,0,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  local_4 = 4;
LAB_0040ed00:
  FUN_00567398();
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_608);
  ExceptionList = local_c;
  return;
}


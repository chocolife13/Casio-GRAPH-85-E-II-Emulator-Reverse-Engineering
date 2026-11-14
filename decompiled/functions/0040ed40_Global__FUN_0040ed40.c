// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040ed40
// entry: 0040ed40  size: 923


void __thiscall FUN_0040ed40(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  SHORT SVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  code *pcVar11;
  char *pcVar12;
  int local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  char *pcStack_34;
  char *local_30;
  undefined1 local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057abc0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x5c) = 2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  cVar2 = FUN_00407980(param_2);
  if (cVar2 != '\0') {
    FUN_0042faf0();
    uVar7 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    iVar4 = FUN_0055b770(param_2 + (~uVar7 - 5),&DAT_005a9028);
    if (iVar4 == 0) {
      uVar7 = 0xffffffff;
      pcVar10 = param_2;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      local_30 = (char *)FUN_00566937(~uVar7);
      uVar7 = 0xffffffff;
      pcVar10 = param_2;
      do {
        pcVar12 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar12 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar12 + -uVar7;
      pcVar12 = local_30;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar10 = param_2;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_005a9478;
      do {
        pcVar12 = pcVar10;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8;
      pcVar10 = pcVar12 + -uVar8;
      pcVar12 = local_30 + (~uVar7 - 5);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00407c50(local_30,param_2);
      FUN_00566960(local_30);
    }
    FUN_00409610(0);
    local_4 = 0;
    FUN_00409610(0);
    local_4 = CONCAT31(local_4._1_3_,1);
    local_44 = 1;
    while( true ) {
      pcVar11 = Sleep_exref;
      if (param_3 == 1) {
        if (*(int *)(param_1 + 0x50) == 0) {
          do {
            pcVar11 = Sleep_exref;
            Sleep(500);
            SVar3 = GetAsyncKeyState(0xd);
            if (SVar3 != 0) {
              *(undefined4 *)(param_1 + 0x50) = 1;
            }
          } while (*(int *)(param_1 + 0x50) == 0);
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
      }
      iVar4 = FUN_004096d0();
      if (iVar4 != 0) {
        uVar5 = FUN_004096d0();
        FUN_00409160(uVar5);
      }
      iVar4 = FUN_004095b0(local_44);
      if (iVar4 == 0) break;
      iVar6 = FUN_004096d0();
      if (iVar6 != 0) {
        FUN_00409670(0);
      }
      iVar6 = FUN_004096d0();
      if (iVar6 != 0) {
        uVar5 = FUN_004096d0();
        FUN_00409670(uVar5);
      }
      iVar6 = FUN_004096d0();
      if (iVar6 != 0) {
        FUN_00409670(0);
      }
      FUN_00409670(iVar4);
      cVar2 = FUN_00407650(&uStack_3c,&uStack_40,iVar4);
      if (cVar2 == '\0') {
LAB_0040f045:
        local_44 = local_44 + 1;
      }
      else {
        iVar6 = FUN_0042fba0(uStack_3c,uStack_40,0,1);
        while (iVar6 == 0) {
          (*pcVar11)(10);
          iVar6 = FUN_0042fba0(uStack_3c,uStack_40,0,1);
        }
        if (iVar6 != 2) {
          if (iVar6 == 3) {
            cVar2 = FUN_00430400(&pcStack_34,&pcStack_38);
            uVar7 = 0xffffffff;
            pcVar10 = pcStack_34;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            uVar8 = 0xffffffff;
            pcVar10 = pcStack_38;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            uVar5 = FUN_00566937(~uVar7 + ~uVar8 + 3);
            FUN_00553f40(uVar5,s__c__s__s_005a946c,(int)cVar2,pcStack_34,pcStack_38);
            FUN_00408760(param_2,iVar4,uVar5);
            FUN_00566960(uVar5);
          }
          goto LAB_0040f045;
        }
        uVar5 = FUN_004138b0();
        FUN_004083f0(param_2,iVar4,0x80,0x40,uVar5);
        local_44 = local_44 + 1;
      }
    }
    iVar4 = FUN_004096d0();
    if (iVar4 != 0) {
      iVar4 = FUN_0042fb90();
      while (iVar4 != 0) {
        (*pcVar11)(10);
        iVar4 = FUN_0042fb90();
      }
      (*pcVar11)(10);
      FUN_00409580(local_2c);
    }
    FUN_00408020();
    FUN_0042fb00();
    local_4 = local_4 & 0xffffff00;
    FUN_00409630();
    local_4 = 0xffffffff;
    FUN_00409630();
  }
  FUN_00407ed0();
  *(undefined4 *)(param_1 + 0x5c) = 0;
  ExceptionList = pvStack_c;
  return;
}


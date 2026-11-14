// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040f6f0
// entry: 0040f6f0  size: 701


void __fastcall FUN_0040f6f0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int local_210;
  undefined4 local_20c;
  int local_208;
  CDialog local_204 [504];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057ac8d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004138b0();
  local_210 = iVar2;
  if ((*(int *)(param_1 + 0x88) == 0) || (iVar3 = FUN_00408ad0(0x80,0x40,iVar2), iVar3 == 0)) {
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_005603ea(0,&DAT_005a94ac,0,0x1000,s_bitmap_file___bmp____bmp_all_____005a94b0,0);
      local_4 = 0;
      iVar2 = FUN_0056054c();
      if (iVar2 == 1) {
        piVar4 = (int *)FUN_00560627(&local_20c);
        local_4._0_1_ = 1;
        pcVar5 = (char *)FUN_00566937(*(int *)(*piVar4 + -8) + 1);
        local_4._0_1_ = 0;
        FUN_00567398();
        puVar6 = (undefined4 *)FUN_00560627(&local_208);
        uVar8 = 0xffffffff;
        pcVar7 = (char *)*puVar6;
        do {
          pcVar10 = pcVar7;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar10 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar10;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar7 = pcVar10 + -uVar8;
        pcVar10 = pcVar5;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar10 = pcVar10 + 1;
        }
        FUN_00567398();
        local_208 = FUN_00566937(0x2c);
        local_4._0_1_ = 2;
        if (local_208 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_00407860(0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00408f80(pcVar5,0x80,0x40,local_210);
        if (iVar2 != 0) {
          FUN_004078c0();
          FUN_00566960(iVar2);
        }
        FUN_00566960(pcVar5);
      }
      local_4 = 3;
      FUN_00567398();
      local_4 = 0xffffffff;
      CDialog::~CDialog(local_204);
      ExceptionList = local_c;
      return;
    }
    if (*(int *)(param_1 + 0x78) == 0) {
      pcVar7 = (char *)FUN_00566937(0x3c);
      *pcVar7 = '\0';
    }
    else {
      pcVar7 = (char *)FUN_00566937(*(int *)(*(int *)(param_1 + 0x78) + -8) + 0x3c);
      uVar8 = 0xffffffff;
      pcVar5 = *(char **)(param_1 + 0x78);
      do {
        pcVar10 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar10 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar5 = pcVar10 + -uVar8;
      pcVar10 = pcVar7;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar8 & 3; iVar2 = local_210, uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    local_208 = FUN_00566937(0x2c);
    local_4 = 4;
    if (local_208 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00407860(0);
    }
    local_4 = 0xffffffff;
    FUN_0040f560(pcVar7,&local_20c);
    FUN_00408f80(local_20c,0x80,0x40,iVar2);
    FUN_005649b3();
    FUN_00572f63(local_20c);
    FUN_00566960(local_20c);
    FUN_00566960(pcVar7);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    FUN_004078c0();
  }
  else {
    local_210 = 0;
    FUN_004080b0(6,0xb,1,&local_210);
    FUN_005649b3();
    FUN_00572f63(local_210);
    iVar3 = local_210;
    if (local_210 == 0) {
      ExceptionList = local_c;
      return;
    }
  }
  FUN_00566960(iVar3);
  ExceptionList = local_c;
  return;
}


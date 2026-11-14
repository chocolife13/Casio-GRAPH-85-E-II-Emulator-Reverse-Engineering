// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040b1e0
// entry: 0040b1e0  size: 567


undefined4 * __fastcall FUN_0040b1e0(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *local_18;
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a939;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = param_1;
  FUN_0056bb5b();
  param_1[0x1e] = PTR_DAT_005cba44;
  piVar1 = param_1 + 0x1f;
  *piVar1 = (int)PTR_DAT_005cba44;
  local_4 = 2;
  *param_1 = &PTR_LAB_0057d2d8;
  param_1[0x20] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  DAT_005d8948 = FUN_0040aba0();
  puVar8 = &DAT_005cd75c;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  FUN_0042fb10();
  FUN_004aac20();
  iVar4 = FUN_004aefb0();
  if (iVar4 == 1) {
    thunk_FUN_004aecb0(0);
  }
  FUN_004070e0();
  FUN_0057497f();
  uVar3 = FUN_00575035(s_GY363_005a8d50,s_LCDDISP_005a92bc,0);
  param_1[0x13] = uVar3;
  FUN_0057497f();
  uVar3 = FUN_00575035(s_GY363_005a8d50,s_DISPZOOM_005a92b0,2);
  param_1[0x18] = uVar3;
  FUN_0057497f();
  uVar3 = FUN_005750a1(&local_18,s_GY363_005a8d50,s_CAPFOLDER_005a92a4,0);
  local_4._0_1_ = 3;
  FUN_00567485(uVar3);
  local_4._0_1_ = 2;
  FUN_00567398();
  FUN_0057497f();
  uVar3 = FUN_00575035(s_GY363_005a8d50,s_CAPFILE_005a929c,1);
  param_1[0x1d] = uVar3;
  FUN_0057497f();
  uVar3 = FUN_00575035(s_GY363_005a8d50,s_CAPSLOCK_005a9290,1);
  param_1[0x15] = uVar3;
  FUN_0057497f();
  uVar3 = FUN_005750a1(&local_18,s_GY363_005a8d50,s_KEYTABLE_005a9284,0);
  local_4._0_1_ = 4;
  FUN_00567485(uVar3);
  local_4._0_1_ = 2;
  FUN_00567398();
  iVar4 = FUN_005546c3(*piVar1,&DAT_005cd010);
  if (iVar4 != 0) {
    local_18 = (char *)FUN_00566937(*(int *)(*piVar1 + -8) + 1);
    uVar5 = 0xffffffff;
    pcVar7 = (char *)*piVar1;
    do {
      pcVar9 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar9 + -uVar5;
    pcVar9 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_10 = FUN_00566937(0x2c);
    local_4._0_1_ = 5;
    if (local_10 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00407860(0);
    }
    pcVar7 = local_18;
    local_4 = CONCAT31(local_4._1_3_,2);
    param_1[0x22] = uVar3;
    FUN_00407280(local_18);
    FUN_00566960(pcVar7);
  }
  ExceptionList = local_c;
  return param_1;
}


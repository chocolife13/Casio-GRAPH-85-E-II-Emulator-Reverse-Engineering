// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00409460
// entry: 00409460  size: 279


undefined1 * FUN_00409460(undefined1 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_60 [4];
  char *local_5c;
  int local_58;
  undefined *local_54;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  char *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  puVar3 = local_60;
  puVar2 = (undefined1 *)0x7555;
  local_5c = s_Setup_005a90fc;
  local_58 = 0x7553;
  local_54 = &DAT_005a90f4;
  local_50 = 0x7554;
  local_4c = s_Paste_005a90ec;
  local_48 = 0x754b;
  local_44 = s_Alpha_Lock_005a90e0;
  local_40 = 0x754d;
  local_3c = &DAT_005a90d8;
  local_38 = 0x754e;
  local_34 = s_V_Window_005a90cc;
  local_30 = 0x7551;
  local_2c = &DAT_005a90c8;
  local_28 = 0x7563;
  local_24 = &DAT_005a90c4;
  local_20 = 0x7567;
  local_1c = s_Capture_005a90bc;
  local_18 = 0x7569;
  local_14 = s_Module_Change_005a90ac;
  local_10 = 0x7594;
  local_c = s_Catalog_005a90a4;
  local_8 = 0;
  local_4 = &DAT_005cd010;
  iVar6 = 0;
  while (param_1 != puVar2) {
    puVar2 = *(undefined1 **)(puVar3 + 8);
    puVar3 = puVar3 + 8;
    iVar6 = iVar6 + 1;
    if (puVar2 == (undefined1 *)0x0) {
      return puVar2;
    }
  }
  uVar4 = 0xffffffff;
  pcVar7 = (&local_5c)[iVar6 * 2];
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = &DAT_005cd038;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return &DAT_005cd038;
}


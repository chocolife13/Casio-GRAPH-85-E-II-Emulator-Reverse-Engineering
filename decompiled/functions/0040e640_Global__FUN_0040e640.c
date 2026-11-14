// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040e640
// entry: 0040e640  size: 247


void __fastcall FUN_0040e640(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0057aad3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x7c) != 0) {
    ExceptionList = &local_c;
    FUN_005674d5(&DAT_005cd010);
  }
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 != 0) {
    FUN_004078c0();
    FUN_00566960(iVar3);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  FUN_00567485(&stack0x00000004);
  pcVar2 = (char *)FUN_00566937(*(int *)(*(int *)(param_1 + 0x7c) + -8) + 1);
  uVar5 = 0xffffffff;
  pcVar7 = *(char **)(param_1 + 0x7c);
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = pcVar2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar3 = FUN_00566937(0x2c);
  local_4._0_1_ = 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00407860(0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  FUN_00407280(pcVar2);
  FUN_00566960(pcVar2);
  local_4 = 0xffffffff;
  FUN_00567398();
  ExceptionList = local_c;
  return;
}


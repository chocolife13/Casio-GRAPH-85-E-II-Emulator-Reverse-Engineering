// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00408690
// entry: 00408690  size: 202


undefined4 __thiscall FUN_00408690(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined *puVar7;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar2 = FUN_00566937(~uVar5 + 4);
  FUN_00553f40(uVar2,s__s_ans_005a9008,param_2);
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar7 = &DAT_005a8d1c;
  }
  else {
    puVar7 = &DAT_005a8e6c;
  }
  iVar3 = FUN_00553497(uVar2,puVar7);
  if (iVar3 == 0) {
    FUN_00566960(uVar2);
    return 0xffffffff;
  }
  uVar5 = 0xffffffff;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  pcVar6 = param_3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = FUN_00566937(~uVar5 + 9);
  FUN_00553f40(uVar4,s_Ans_04d__s_005a8ffc,*(undefined4 *)(param_1 + 0x28),param_3);
  FUN_0055332b(uVar4,iVar3);
  FUN_00566960(uVar4);
  FUN_00566960(uVar2);
  FUN_005533e9(iVar3);
  return *(undefined4 *)(param_1 + 0x28);
}


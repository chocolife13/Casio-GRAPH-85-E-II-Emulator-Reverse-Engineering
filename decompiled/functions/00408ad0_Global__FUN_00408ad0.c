// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00408ad0
// entry: 00408ad0  size: 104


undefined4 __thiscall
FUN_00408ad0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar5 = *(char **)(param_1 + 0x10);
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = FUN_00566937(~uVar4 + 0xf);
  iVar3 = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x24) = iVar3;
  FUN_00553f40(uVar2,s__s__04d_bmp_005a8fcc,*(undefined4 *)(param_1 + 0x10),iVar3);
  FUN_00408f80(uVar2,param_2,param_3,param_4);
  FUN_00566960(uVar2);
  return *(undefined4 *)(param_1 + 0x24);
}


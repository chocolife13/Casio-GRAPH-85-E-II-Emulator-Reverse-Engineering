// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049d5c0
// entry: 0049d5c0  size: 194


void FUN_0049d5c0(undefined1 *param_1,uint param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  FUN_004a2c40(*param_1,param_3);
  pcVar1 = param_1 + 4;
  iVar3 = -1;
  pcVar5 = pcVar1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  if (iVar3 == -2) {
    iVar3 = FUN_0042a410(param_3,*(int *)(param_1 + 0x20) + 0x10 + (param_2 & 0xffff) * 0x1c,0xc);
  }
  else {
    uVar4 = 0xffffffff;
    pcVar5 = pcVar1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    iVar3 = FUN_0042a410(param_3,pcVar1,~uVar4 - 1);
    FUN_0042aac0(param_3 + iVar3 * 2);
    iVar3 = FUN_0042a410(param_3);
    *(undefined2 *)(param_3 + iVar3 * 2) = 0x5c;
    iVar3 = FUN_0042a410(param_3,*(int *)(param_1 + 0x20) + 0x10 + (param_2 & 0xffff) * 0x1c,0xc);
  }
  FUN_0042aac0(param_3 + iVar3 * 2);
  FUN_0042ab20(param_3,0,0x105);
  return;
}


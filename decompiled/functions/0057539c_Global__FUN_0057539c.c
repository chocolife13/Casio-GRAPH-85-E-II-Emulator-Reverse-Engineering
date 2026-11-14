// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057539c
// entry: 0057539c  size: 83


void FUN_0057539c(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar2 = 1;
  if (1 < DAT_005d5358) {
    do {
      iVar1 = iVar2 + 1;
      uVar4 = 0;
      pcVar3 = *(char **)(DAT_005d535c + iVar2 * 4);
      if ((*pcVar3 == '-') || (*pcVar3 == '/')) {
        pcVar3 = pcVar3 + 1;
        uVar4 = 1;
      }
      (**(code **)(*param_1 + 0xc))(pcVar3,uVar4,iVar1 == DAT_005d5358);
      iVar2 = iVar1;
    } while (iVar1 < DAT_005d5358);
  }
  return;
}


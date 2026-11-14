// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b6570
// entry: 004b6570  size: 124


undefined4 FUN_004b6570(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  *(undefined1 *)(param_2 + 0xb) = 0;
  iVar3 = 0;
  pcVar4 = (char *)(param_2 + 10);
  do {
    iVar2 = *(int *)(param_1 + iVar3 * 4);
    if ((((iVar2 != 0) && (iVar2 != 1)) ||
        ((iVar2 = *(int *)(param_1 + 4 + iVar3 * 4), iVar2 != 0 && (iVar2 != 1)))) ||
       (((iVar2 = *(int *)(param_1 + 8 + iVar3 * 4), iVar2 != 0 && (iVar2 != 1)) && (iVar3 < 0x1e)))
       ) {
      return 1;
    }
    if (iVar3 == 0x1e) {
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    iVar2 = iVar3 * 4;
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 3;
    *pcVar4 = (((char)*(undefined4 *)(param_1 + 8 + iVar2) + '\f') * '\x02' +
              (char)*(undefined4 *)(param_1 + 4 + iVar1)) * '\x02' +
              (char)*(undefined4 *)(param_1 + -0xc + iVar3 * 4);
    pcVar4 = pcVar4 + -1;
  } while (iVar3 < 0x21);
  return 0;
}


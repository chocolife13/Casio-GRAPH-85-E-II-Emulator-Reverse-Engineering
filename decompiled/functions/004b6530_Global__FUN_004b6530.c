// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b6530
// entry: 004b6530  size: 57


undefined4 FUN_004b6530(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  pcVar3 = (char *)(param_2 + 0xf);
  while ((*param_1 == 0 || (*param_1 == 1))) {
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    *pcVar3 = (char)iVar1 + '0';
    pcVar3 = pcVar3 + -1;
    if (0xf < iVar2) {
      return 0;
    }
  }
  return 1;
}


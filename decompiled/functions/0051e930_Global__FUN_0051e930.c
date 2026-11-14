// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051e930
// entry: 0051e930  size: 265


undefined4 FUN_0051e930(int *param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = 0;
  iVar4 = *param_1;
  iVar6 = *param_2;
  iVar5 = *(int *)(param_4 + 0x8dc);
  if (param_3 == 0x7542) {
    if ((*(uint *)(iVar4 * 0x20 + 0x18 + iVar5) & 0xa000) == 0) {
      if (iVar4 == 0) {
        pcVar2 = (char *)(iVar5 + 0x1c);
        iVar3 = 0;
        if (*(char *)(iVar5 + 0x1c) != (char)iVar4) {
          do {
            pcVar2 = pcVar2 + 0x20;
            iVar3 = iVar3 + 1;
            iVar4 = iVar3;
          } while (*pcVar2 != '\0');
        }
        uVar1 = 0xffffffff;
      }
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + iVar4 * 0x20;
      if ((*(uint *)(iVar5 + 0x18) & 0xa000) != 0) {
        iVar6 = *(int *)(iVar5 + 0x10);
        *param_1 = iVar4;
        *param_2 = iVar6;
        return uVar1;
      }
    }
    else {
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar6 = 1;
        if (iVar4 == 0) {
          pcVar2 = (char *)(iVar5 + 0x1c);
          iVar3 = 0;
          if (*(char *)(iVar5 + 0x1c) != (char)iVar4) {
            do {
              pcVar2 = pcVar2 + 0x20;
              iVar3 = iVar3 + 1;
              iVar4 = iVar3;
            } while (*pcVar2 != '\0');
          }
          uVar1 = 0xffffffff;
        }
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + iVar4 * 0x20;
        if ((*(uint *)(iVar5 + 0x18) & 0xa000) != 0) {
          iVar6 = *(int *)(iVar5 + 0x10);
          *param_1 = iVar4;
          *param_2 = iVar6;
          return uVar1;
        }
      }
    }
  }
  else {
    iVar3 = iVar4 * 0x20 + iVar5;
    if ((*(byte *)(iVar3 + 0x19) & 0xa0) == 0) {
      iVar4 = iVar4 + 1;
      if (*(char *)(iVar4 * 0x20 + 0x1c + iVar5) == '\0') {
        *param_1 = 0;
        *param_2 = iVar6;
        return 1;
      }
    }
    else {
      iVar6 = iVar6 + 1;
      if (*(int *)(iVar3 + 0x10) < iVar6) {
        iVar4 = iVar4 + 1;
        iVar6 = 1;
        if (*(char *)(iVar4 * 0x20 + 0x1c + iVar5) == '\0') {
          iVar4 = 0;
          uVar1 = 1;
        }
      }
    }
  }
  *param_1 = iVar4;
  *param_2 = iVar6;
  return uVar1;
}


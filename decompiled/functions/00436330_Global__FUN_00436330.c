// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00436330
// entry: 00436330  size: 242


void FUN_00436330(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2 - 0x7542;
  if (uVar1 < 6) {
    do {
      switch((&switchD_0043634d::switchdataD_00436424)[uVar1]) {
      case (undefined *)0x436354:
        if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x18)) {
          iVar2 = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x10) = iVar2;
          if (iVar2 <= *(int *)(param_1 + 8) + 3) {
            return;
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          return;
        }
        *(undefined4 *)(param_1 + 0x10) = 1;
        *(undefined4 *)(param_1 + 8) = 1;
        iVar2 = 0x7547;
        break;
      case (undefined *)0x43636f:
        if (*(int *)(param_1 + 0x10) != 1) {
          iVar2 = *(int *)(param_1 + 0x10) + -1;
          *(int *)(param_1 + 0x10) = iVar2;
          if (*(int *)(param_1 + 8) <= iVar2) {
            return;
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          return;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x18);
        iVar2 = *(int *)(param_1 + 0x18) + -3;
        *(int *)(param_1 + 8) = iVar2;
        if (iVar2 < 1) {
          *(undefined4 *)(param_1 + 8) = 1;
        }
        iVar2 = 0x7542;
        break;
      case (undefined *)0x43639d:
        if (*(int *)(param_1 + 0xc) == 1) {
          iVar2 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0xc) = iVar2;
          if (iVar2 < 6) {
            *(undefined4 *)(param_1 + 4) = 1;
            return;
          }
          *(int *)(param_1 + 4) = iVar2 + -4;
          return;
        }
        iVar2 = *(int *)(param_1 + 0xc) + -1;
        *(int *)(param_1 + 0xc) = iVar2;
        if (*(int *)(param_1 + 4) <= iVar2) {
          return;
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        return;
      case (undefined *)0x4363cd:
        if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0xc)) {
          *(undefined4 *)(param_1 + 0xc) = 1;
          *(undefined4 *)(param_1 + 4) = 1;
          return;
        }
        iVar2 = *(int *)(param_1 + 0xc) + 1;
        *(int *)(param_1 + 0xc) = iVar2;
        if (*(int *)(param_1 + 4) + 4 < iVar2) {
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
          return;
        }
      case (undefined *)0x436420:
        goto switchD_0043634d_caseD_436420;
      }
      uVar1 = iVar2 - 0x7542;
      if (5 < uVar1) {
        return;
      }
    } while( true );
  }
switchD_0043634d_caseD_436420:
  return;
}


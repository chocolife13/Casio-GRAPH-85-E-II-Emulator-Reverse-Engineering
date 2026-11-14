// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005059e0
// entry: 005059e0  size: 842


void FUN_005059e0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    switch(param_2) {
    case 0x7542:
      iVar2 = *(int *)(param_1 + 0x8f4);
      if (iVar2 != 1) {
LAB_00505ba1:
        *(int *)(param_1 + 0x8f4) = iVar2 + -1;
        return;
      }
      if (*(int *)(param_1 + 0x8e8) != 1) {
        *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8e8) + -1;
        return;
      }
      break;
    case 0x7544:
      if ((*(byte *)(param_1 + 0x8e0) & 0x30) == 0) {
        iVar2 = *(int *)(param_1 + 0x8f0);
        if (iVar2 == 2) {
          iVar2 = *(int *)(param_1 + 0x8ec);
          if (iVar2 == 1) {
            *(undefined4 *)(param_1 + 0x8f0) = 1;
            return;
          }
LAB_00505b77:
          *(int *)(param_1 + 0x8ec) = iVar2 + -1;
          return;
        }
        if (iVar2 != 1) {
          *(int *)(param_1 + 0x8f0) = iVar2 + -1;
          return;
        }
        iVar2 = *(int *)(param_1 + 0x8f4);
        if (iVar2 != 1) {
          if (3 < param_4) {
            *(int *)(param_1 + 0x8ec) = param_4 + -3;
            *(undefined4 *)(param_1 + 0x8f0) = 4;
            *(int *)(param_1 + 0x8f4) = iVar2 + -1;
            return;
          }
          *(int *)(param_1 + 0x8f0) = param_4;
          *(int *)(param_1 + 0x8f4) = iVar2 + -1;
          return;
        }
        iVar2 = *(int *)(param_1 + 0x8e8);
        if (iVar2 != 1) {
          if (3 < param_4) {
            *(int *)(param_1 + 0x8ec) = param_4 + -3;
            *(undefined4 *)(param_1 + 0x8f0) = 4;
            *(int *)(param_1 + 0x8e8) = iVar2 + -1;
            return;
          }
          *(int *)(param_1 + 0x8f0) = param_4;
          *(int *)(param_1 + 0x8e8) = iVar2 + -1;
          return;
        }
      }
      else {
        if (*(int *)(param_1 + 0x8f0) != 1) {
          iVar2 = *(int *)(param_1 + 0x8ec);
          if (iVar2 == 1) {
            *(int *)(param_1 + 0x8f0) = *(int *)(param_1 + 0x8f0) + -1;
            return;
          }
          goto LAB_00505b77;
        }
        iVar2 = *(int *)(param_1 + 0x8f4);
        if (iVar2 != 1) {
          *(undefined4 *)(param_1 + 0x8f0) = 2;
          *(int *)(param_1 + 0x8ec) = param_4 + -1;
          goto LAB_00505ba1;
        }
        if (*(int *)(param_1 + 0x8e8) != 1) {
          *(int *)(param_1 + 0x8ec) = param_4 + -1;
          *(undefined4 *)(param_1 + 0x8f0) = 2;
          *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8e8) + -1;
          return;
        }
      }
      break;
    case 0x7545:
      if ((*(byte *)(param_1 + 0x8e0) & 0x30) == 0) {
        iVar2 = *(int *)(param_1 + 0x8f0);
        if ((iVar2 != 4) && (iVar2 != param_4)) {
          *(int *)(param_1 + 0x8f0) = iVar2 + 1;
          return;
        }
        if ((*(int *)(param_1 + 0x8ec) != param_4 + -3) && (iVar2 != param_4)) {
          *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8ec) + 1;
          return;
        }
        iVar2 = *(int *)(param_1 + 0x8f4);
        if (iVar2 == 4) {
          if (*(int *)(param_1 + 0x8e8) + 3 != param_3) {
            *(undefined4 *)(param_1 + 0x8f0) = 1;
            *(undefined4 *)(param_1 + 0x8ec) = 1;
            *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8e8) + 1;
            return;
          }
        }
        else if ((param_3 - *(int *)(param_1 + 0x8e8)) + 1 != iVar2) {
          *(undefined4 *)(param_1 + 0x8f0) = 1;
          *(undefined4 *)(param_1 + 0x8ec) = 1;
          *(int *)(param_1 + 0x8f4) = iVar2 + 1;
          return;
        }
      }
      else {
        if (*(int *)(param_1 + 0x8f0) == 1) {
          *(undefined4 *)(param_1 + 0x8f0) = 2;
          return;
        }
        iVar2 = *(int *)(param_1 + 0x8f4);
        if (iVar2 == 4) {
          if (*(int *)(param_1 + 0x8ec) != param_4 + -1) {
            *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8ec) + 1;
            return;
          }
          if (*(int *)(param_1 + 0x8e8) + 3 != param_3) {
            *(undefined4 *)(param_1 + 0x8f0) = 1;
            *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8e8) + 1;
            *(undefined4 *)(param_1 + 0x8ec) = 1;
          }
        }
        else {
          if (*(int *)(param_1 + 0x8ec) != param_4 + -1) {
            *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8ec) + 1;
            return;
          }
          if ((param_3 - *(int *)(param_1 + 0x8e8)) + 1 != iVar2) {
            *(undefined4 *)(param_1 + 0x8f0) = 1;
            *(undefined4 *)(param_1 + 0x8ec) = 1;
            *(int *)(param_1 + 0x8f4) = iVar2 + 1;
            return;
          }
        }
      }
      break;
    case 0x7547:
      iVar2 = *(int *)(param_1 + 0x8f4);
      iVar1 = *(int *)(param_1 + 0x8e8);
      if (param_3 != iVar1 + -1 + iVar2) {
        if (iVar2 != 4) {
          *(int *)(param_1 + 0x8f4) = iVar2 + 1;
          return;
        }
        if (iVar1 + 3 != param_3) {
          *(int *)(param_1 + 0x8e8) = iVar1 + 1;
          return;
        }
      }
    }
  }
  return;
}


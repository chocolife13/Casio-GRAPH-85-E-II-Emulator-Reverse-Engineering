// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00525590
// entry: 00525590  size: 676


undefined4 FUN_00525590(int param_1,int *param_2,int param_3,char *param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int local_8;
  undefined1 local_4 [4];
  
  if (param_5 == 0) {
    return 0;
  }
  FUN_00414db0(local_4);
  thunk_FUN_0040add0();
  local_8 = FUN_004b7550(param_1);
  local_8 = param_3 - local_8;
  if (param_6 == 0) {
    iVar2 = FUN_005262f0();
  }
  else {
    iVar2 = 2;
  }
  if (iVar2 == 1) {
    bVar1 = false;
    if (param_5 != 0) {
      pcVar4 = (char *)(param_1 + *param_2);
      iVar5 = *param_2 + 1;
      iVar2 = 0;
      do {
        iVar2 = FUN_004b7370(CONCAT31((int3)((uint)iVar2 >> 8),*param_4));
        if (iVar2 == 0) {
          iVar2 = FUN_004b7370(*pcVar4);
          if (iVar2 == 0) {
            if (*pcVar4 == '\0') {
              local_8 = local_8 + -1;
              if (local_8 < 0) break;
              bVar1 = true;
            }
          }
          else {
            iVar3 = FUN_004b7550(param_1);
            for (iVar2 = iVar5; (iVar2 <= iVar3 && (iVar2 <= param_3)); iVar2 = iVar2 + 1) {
              *(undefined1 *)(iVar2 + param_1) = *(undefined1 *)(iVar2 + 1 + param_1);
            }
            *(undefined1 *)(param_1 + param_3) = 0;
            local_8 = local_8 + 1;
          }
          *pcVar4 = *param_4;
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 1;
          param_4 = param_4 + 1;
          *param_2 = *param_2 + 1;
          iVar2 = param_5 + -1;
        }
        else {
          iVar2 = FUN_004b7370(*pcVar4);
          if (iVar2 == 0) {
            if (local_8 < 1) break;
            if (*pcVar4 == '\0') {
              if (local_8 < 2) break;
              local_8 = local_8 + -2;
              bVar1 = true;
            }
            else {
              iVar3 = FUN_004b7550(param_1);
              iVar2 = iVar3 + 1;
              if (param_3 < iVar3 + 1) {
                iVar2 = param_3;
              }
              for (; iVar5 <= iVar2; iVar2 = iVar2 + -1) {
                *(undefined1 *)(iVar2 + param_1) = *(undefined1 *)(iVar2 + -1 + param_1);
              }
              local_8 = local_8 + -1;
            }
          }
          *pcVar4 = *param_4;
          iVar5 = iVar5 + 2;
          pcVar4[1] = param_4[1];
          pcVar4 = pcVar4 + 2;
          param_4 = param_4 + 2;
          *param_2 = *param_2 + 2;
          iVar2 = param_5 + -2;
        }
        if (bVar1) {
          *pcVar4 = '\0';
        }
        param_5 = iVar2;
      } while (iVar2 != 0);
    }
  }
  else if (iVar2 == 2) {
    while ((0 < local_8 && (param_5 != 0))) {
      iVar2 = FUN_004b7370(*param_4);
      if (iVar2 == 0) {
        iVar2 = FUN_004b7550(param_1);
        if (param_3 <= iVar2) {
          iVar2 = param_3 + -1;
        }
        if (*param_2 <= iVar2) {
          do {
            *(undefined1 *)(param_1 + 1 + iVar2) = *(undefined1 *)(param_1 + iVar2);
            iVar2 = iVar2 + -1;
          } while (*param_2 <= iVar2);
        }
        *(char *)(*param_2 + param_1) = *param_4;
        param_4 = param_4 + 1;
        local_8 = local_8 + -1;
        *param_2 = *param_2 + 1;
        param_5 = param_5 + -1;
      }
      else {
        if (local_8 < 2) break;
        iVar2 = FUN_004b7550(param_1);
        if (param_3 < iVar2 + 2) {
          iVar2 = param_3 + -2;
        }
        if (*param_2 <= iVar2) {
          do {
            *(undefined1 *)(param_1 + 2 + iVar2) = *(undefined1 *)(param_1 + iVar2);
            iVar2 = iVar2 + -1;
          } while (*param_2 <= iVar2);
        }
        *(char *)(*param_2 + param_1) = *param_4;
        iVar2 = *param_2;
        *param_2 = iVar2 + 1;
        *(char *)(iVar2 + 1 + param_1) = param_4[1];
        *param_2 = *param_2 + 1;
        local_8 = local_8 + -2;
        param_4 = param_4 + 2;
        param_5 = param_5 + -2;
      }
    }
  }
  FUN_00414db0(local_4);
  return 0;
}


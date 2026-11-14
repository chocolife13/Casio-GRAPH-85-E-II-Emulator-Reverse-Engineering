// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577e4c
// entry: 00577e4c  size: 322


void __thiscall FUN_00577e4c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  LPRECT lprc;
  int local_14 [2];
  int local_c;
  int local_8;
  
  iVar5 = param_2 * 0x28 + *(int *)(param_1 + 0x90);
  piVar3 = (int *)FUN_00577dc8(local_14);
  local_c = *piVar3;
  local_8 = piVar3[1];
  iVar4 = *(int *)(iVar5 + 0x24);
  iVar1 = *(int *)(param_1 + 0xec);
  bVar2 = iVar4 <= *(int *)(iVar5 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar5 + 0x24);
  }
  else {
    if (iVar1 == 1) {
      *(int *)(iVar5 + 0x1c) = iVar4;
      if (bVar2) {
        iVar4 = *(int *)(iVar5 + 0x20) * 3 - iVar4;
      }
      else {
        iVar4 = *(int *)(iVar5 + 0x20) + iVar4;
      }
      iVar4 = iVar4 / 2;
    }
    else {
      if (iVar1 != 2) goto LAB_00577edb;
      if (bVar2) {
        *(int *)(iVar5 + 0x1c) = iVar4;
        iVar4 = *(int *)(iVar5 + 0x20) * 2 - *(int *)(iVar5 + 0x24);
      }
      else {
        iVar4 = 1;
        *(undefined4 *)(iVar5 + 0x1c) = 1;
      }
    }
    *(int *)(iVar5 + 0x18) = iVar4;
  }
LAB_00577edb:
  local_14[0] = MulDiv(*(int *)(iVar5 + 0x10),*(int *)(iVar5 + 0x18),*(int *)(iVar5 + 0x1c));
  iVar5 = MulDiv(*(int *)(iVar5 + 0x14),*(int *)(iVar5 + 0x18),*(int *)(iVar5 + 0x1c));
  lprc = (LPRECT)(param_2 * 0x28 + *(int *)(param_1 + 0x90));
  SetRect(lprc,8,8,local_14[0] + 0xb,iVar5 + 0xb);
  if (*(int *)(param_1 + 0xec) == 0) {
    OffsetRect(lprc,(local_c - (lprc->right - lprc->left)) / 2 + -1,
               (local_8 - (lprc->bottom - lprc->top)) / 2 + -1);
    if (param_2 == 1) {
      OffsetRect(lprc,*(int *)(param_1 + 0xfc),0);
    }
  }
  else {
    FUN_0056ce5f(1,(lprc->right - lprc->left) + 0x10,(lprc->bottom - lprc->top) + 0x10,&local_c,
                 &DAT_0059ccc0);
  }
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005785bf
// entry: 005785bf  size: 202


undefined4 __thiscall FUN_005785bf(int param_1,POINT *param_2,uint *param_3)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_c;
  int iStack_8;
  
  local_c = param_1;
  iStack_8 = param_1;
  if (*(int *)(param_1 + 0xec) != 0) {
    piVar1 = (int *)FUN_0056cf91(&local_c);
    iVar3 = piVar1[1];
    param_2->x = param_2->x + *piVar1;
    param_2->y = param_2->y + iVar3;
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0xf8) != 0) {
    do {
      BVar2 = PtInRect((RECT *)(*(int *)(param_1 + 0x90) + *param_3 * 0x28),*param_2);
      if (BVar2 != 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x90) + 4 + *param_3 * 0x28);
        param_2->x = param_2->x - *(int *)(*(int *)(param_1 + 0x90) + *param_3 * 0x28);
        param_2->y = param_2->y - iVar3;
        iVar3 = MulDiv(param_2->x,*(int *)(*(int *)(param_1 + 0x90) + *param_3 * 0x28 + 0x1c),
                       *(int *)(*(int *)(param_1 + 0x90) + 0x18 + *param_3 * 0x28));
        param_2->x = iVar3;
        iVar3 = MulDiv(param_2->y,*(int *)(*(int *)(param_1 + 0x90) + *param_3 * 0x28 + 0x1c),
                       *(int *)(*(int *)(param_1 + 0x90) + 0x18 + *param_3 * 0x28));
        param_2->y = iVar3;
        return 1;
      }
      *param_3 = *param_3 + 1;
    } while (*param_3 < *(uint *)(param_1 + 0xf8));
  }
  return 0;
}


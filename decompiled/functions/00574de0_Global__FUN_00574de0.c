// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00574de0
// entry: 00574de0  size: 314


void __thiscall FUN_00574de0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  tagRECT local_2c;
  int local_1c;
  int local_14;
  undefined1 *local_10;
  int local_c;
  int *local_8;
  
  if (param_2 != 0) {
    GetWindowRect((HWND)param_1[7],&local_2c);
    OffsetRect(&local_2c,-local_2c.left,-local_2c.top);
    FUN_00574d70();
    (**(code **)(*param_1 + 0xa0))();
    param_2 = 0;
    iVar4 = param_1[0x16];
    iVar5 = (local_2c.right - local_2c.left) + local_14;
    if (0 < iVar4) {
      piVar1 = (int *)(param_1[0x17] + 4);
      iVar3 = iVar4;
      do {
        if ((*(byte *)((int)piVar1 + 7) & 8) != 0) {
          param_2 = param_2 + 1;
        }
        iVar2 = *piVar1;
        piVar1 = piVar1 + 5;
        iVar5 = iVar5 + ((-6 - iVar2) - local_14);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00553a90();
    local_c = 0;
    local_10 = &stack0xffffffbc;
    if (0 < iVar4) {
      iVar4 = param_1[0x17] + 8;
      local_10 = &stack0xffffffbc;
      local_8 = (int *)&stack0xffffffbc;
      do {
        iVar3 = local_1c + 6 + *(int *)(iVar4 + -4);
        if (((*(byte *)(iVar4 + 3) & 8) != 0) && (0 < iVar5)) {
          iVar2 = iVar5 / param_2;
          iVar3 = iVar3 + iVar2;
          param_2 = param_2 + -1;
          iVar5 = iVar5 - iVar2;
        }
        iVar4 = iVar4 + 0x14;
        piVar1 = local_8 + 1;
        *local_8 = iVar3;
        local_8 = piVar1;
        local_1c = iVar3 + local_14;
        local_c = local_c + 1;
      } while (local_c < param_1[0x16]);
    }
    (**(code **)(*param_1 + 0xa0))(0x404,param_1[0x16],local_10);
  }
  iVar4 = 0;
  if ((param_3 != 0) && (0 < param_1[0x16])) {
    iVar5 = param_1[0x17] + 0x10;
    do {
      if ((*(byte *)(iVar5 + -4) & 1) != 0) {
        FUN_0056d8f2();
      }
      iVar5 = iVar5 + 0x14;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[0x16]);
  }
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ccf5
// entry: 0056ccf5  size: 223


void __thiscall FUN_0056ccf5(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  tagRECT local_1c;
  int local_c [2];
  
  if (*(int *)(param_1 + 0x40) == -1) {
    (**(code **)(*param_2 + 0x34))(8);
    (**(code **)(*param_2 + 0x48))
              (local_c,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
    (**(code **)(*param_2 + 0x40))
              (local_c,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  else {
    (**(code **)(*param_2 + 0x34))(*(int *)(param_1 + 0x40));
  }
  iVar2 = 0;
  local_c[0] = 0;
  if (param_2[3] == 0) {
    piVar1 = (int *)FUN_0056cf91(&local_1c.right);
    local_c[0] = -*piVar1;
    iVar2 = -piVar1[1];
    if (*(int *)(param_1 + 100) != 0) {
      GetClientRect(*(HWND *)(param_1 + 0x1c),&local_1c);
      if (*(int *)(param_1 + 0x4c) < local_1c.right - local_1c.left) {
        local_c[0] = ((local_1c.right - *(int *)(param_1 + 0x4c)) - local_1c.left) / 2;
      }
      if (*(int *)(param_1 + 0x50) < local_1c.bottom - local_1c.top) {
        iVar2 = ((local_1c.bottom - *(int *)(param_1 + 0x50)) - local_1c.top) / 2;
      }
    }
  }
  (**(code **)(*param_2 + 0x38))(&local_1c.right,local_c[0],iVar2);
  FUN_0056bfe0(param_2,param_3);
  return;
}


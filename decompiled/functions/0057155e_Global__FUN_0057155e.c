// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057155e
// entry: 0057155e  size: 316


int __thiscall
FUN_0057155e(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  tagRECT local_24;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  uVar3 = *(uint *)(param_1 + 100) & 0xa000;
  local_14 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      piVar1 = (int *)FUN_00571542(local_8);
      if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 200))(), iVar2 == 0)) {
        iVar2 = local_c - DAT_005d50bc;
        local_c = 0;
        local_14 = local_14 + iVar2;
        iVar2 = param_8;
        if (uVar3 == 0) {
          iVar2 = param_7;
        }
        if (iVar2 < local_14) {
          if (local_8 == 0) {
            FUN_00561fdd(local_10 + 1,0,1);
          }
          iVar2 = local_10 + 1;
          goto LAB_00571666;
        }
LAB_00571630:
        local_10 = local_8;
      }
      else {
        GetWindowRect((HWND)piVar1[7],&local_24);
        FUN_0056a3c5(&local_24);
        if (uVar3 == 0) {
          iVar2 = (local_24.right - local_24.left) + -1;
        }
        else {
          iVar2 = local_24.bottom - local_24.top;
        }
        if (local_c <= iVar2) {
          if (uVar3 == 0) {
            local_c = (local_24.right - local_24.left) + -1;
          }
          else {
            local_c = local_24.bottom - local_24.top;
          }
        }
        if (uVar3 == 0) {
          bVar5 = SBORROW4(param_4,local_24.top);
          iVar2 = param_4 - local_24.top;
          bVar4 = param_4 == local_24.top;
        }
        else {
          bVar5 = SBORROW4(param_3,local_24.left);
          iVar2 = param_3 - local_24.left;
          bVar4 = param_3 == local_24.left;
        }
        if (!bVar4 && bVar5 == iVar2 < 0) goto LAB_00571630;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x84));
  }
  iVar2 = local_10 + 1;
  FUN_00561fdd(iVar2,0,1);
LAB_00571666:
  FUN_00561fdd(iVar2,param_2,1);
  return iVar2;
}


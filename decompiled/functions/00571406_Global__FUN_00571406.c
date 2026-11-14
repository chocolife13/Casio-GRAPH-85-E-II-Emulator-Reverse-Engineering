// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00571406
// entry: 00571406  size: 270


undefined4 __thiscall FUN_00571406(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_00571514(param_2,param_3);
  if (param_4 == 1) {
    iVar3 = param_1[0x20];
    uVar2 = GetDlgCtrlID(*(HWND *)(param_2 + 0x1c));
    *(uint *)(iVar3 + iVar1 * 4) = uVar2 & 0xffff;
    iVar3 = FUN_00571514(*(undefined4 *)(param_1[0x20] + iVar1 * 4),iVar1);
    if (0 < iVar3) {
      FUN_0056206f(iVar1,1);
      if ((*(int *)(param_1[0x20] + -4 + iVar1 * 4) == 0) &&
         (*(int *)(param_1[0x20] + iVar1 * 4) == 0)) {
        FUN_0056206f(iVar1,1);
      }
    }
  }
  else {
    FUN_0056206f(iVar1,1);
    if ((*(int *)(param_1[0x20] + -4 + iVar1 * 4) == 0) &&
       (*(int *)(param_1[0x20] + iVar1 * 4) == 0)) {
      FUN_0056206f(iVar1,1);
    }
    if (param_4 != -1) {
      FUN_005713a5(param_2);
    }
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    piVar4 = (int *)FUN_005738c5();
    if ((param_1[0x1e] == 0) || (iVar1 = (**(code **)(*param_1 + 0xe0))(), iVar1 != 0)) {
      piVar4[0x2e] = piVar4[0x2e] | 0xc;
    }
    else {
      iVar1 = FUN_00570f66();
      if (iVar1 == 0) {
        (**(code **)(*piVar4 + 0x58))();
        return 1;
      }
      FUN_00566342(0);
    }
  }
  return 0;
}


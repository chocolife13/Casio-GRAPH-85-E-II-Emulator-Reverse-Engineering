// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057a4d9
// entry: 0057a4d9  size: 89


void __thiscall FUN_0057a4d9(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  tagSIZE local_14;
  tagSIZE local_c;
  
  GetViewportExtEx(*(HDC *)(param_1 + 8),&local_c);
  GetWindowExtEx(*(HDC *)(param_1 + 8),&local_14);
  uVar1 = FUN_005794ef(*param_2,local_14.cx,*(undefined4 *)(param_1 + 0x38),local_c.cx,
                       *(undefined4 *)(param_1 + 0x30));
  *param_2 = uVar1;
  uVar1 = FUN_005794ef(param_2[1],local_14.cy,*(undefined4 *)(param_1 + 0x3c),local_c.cy,
                       *(undefined4 *)(param_1 + 0x34));
  param_2[1] = uVar1;
  return;
}


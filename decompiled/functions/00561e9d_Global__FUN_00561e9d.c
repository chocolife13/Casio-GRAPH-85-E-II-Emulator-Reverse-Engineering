// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00561e9d
// entry: 00561e9d  size: 281


void __thiscall FUN_00561e9d(int param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  
  if (param_3 != -1) {
    *(int *)(param_1 + 0x10) = param_3;
  }
  if (param_2 == 0) {
    FUN_00566960(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    _Dst = (void *)FUN_00566937(param_2 << 2);
    *(void **)(param_1 + 4) = _Dst;
    _memset(_Dst,0,param_2 << 2);
    *(int *)(param_1 + 0xc) = param_2;
LAB_00561ef4:
    *(int *)(param_1 + 8) = param_2;
    return;
  }
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 < param_2) {
      _memset((void *)(*(int *)(param_1 + 4) + iVar1 * 4),0,(iVar1 * 0x3fffffff + param_2) * 4);
    }
    goto LAB_00561ef4;
  }
  param_3 = *(int *)(param_1 + 0x10);
  if (param_3 != 0) goto LAB_00561f52;
  param_3 = *(int *)(param_1 + 8) / 8;
  if (3 < param_3) {
    if (0x400 < param_3) {
      param_3 = 0x400;
      goto LAB_00561f52;
    }
    if (3 < param_3) goto LAB_00561f52;
  }
  param_3 = 4;
LAB_00561f52:
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  if (param_3 <= param_2) {
    param_3 = param_2;
  }
  iVar1 = FUN_00566937(param_3 << 2);
  FUN_00555c70(iVar1,*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) << 2);
  _memset((void *)(iVar1 + *(int *)(param_1 + 8) * 4),0,
          (*(int *)(param_1 + 8) * 0x3fffffff + param_2) * 4);
  FUN_00566960(*(undefined4 *)(param_1 + 4));
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578c37
// entry: 00578c37  size: 236


undefined4 FUN_00578c37(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_1 + 0x5c);
  if (*(ushort *)(iVar1 + 0x1e) < *(ushort *)(iVar1 + 0x1c)) {
    *(ushort *)(iVar1 + 0x1e) = *(ushort *)(iVar1 + 0x1c);
  }
  iVar1 = FUN_0057497f();
  iVar1 = *(int *)(iVar1 + 4);
  if (((param_1[2] == 0) && (param_1[3] == 0)) &&
     ((param_1[1] == 0 || ((*(byte *)(param_1 + 0xe) & 2) != 0)))) {
    *(undefined2 *)(*(int *)(*param_1 + 0x5c) + 0x18) =
         *(undefined2 *)(*(int *)(*param_1 + 0x5c) + 0x1c);
    *(undefined2 *)(*(int *)(*param_1 + 0x5c) + 0x1a) =
         *(undefined2 *)(*(int *)(*param_1 + 0x5c) + 0x1e);
    iVar2 = FUN_005774cd(*param_1);
    if (iVar2 != 1) {
      return 0;
    }
  }
  else {
    if (*(int *)(*(int *)(*param_1 + 0x5c) + 0x10) == 0) {
      iVar2 = FUN_00577270(*(int *)(*param_1 + 0x5c));
      if ((iVar2 == 0) &&
         (((param_1[1] == 0 || ((*(byte *)(param_1 + 0xe) & 1) != 0)) &&
          (iVar2 = FUN_005774cd(*param_1), iVar2 != 1)))) {
        return 0;
      }
      if ((*(int *)(*(int *)(*param_1 + 0x5c) + 0x10) == 0) && (iVar2 = FUN_005613a3(), iVar2 == 0))
      {
        return 0;
      }
    }
    *(undefined2 *)(*(int *)(*param_1 + 0x5c) + 0x18) =
         *(undefined2 *)(*(int *)(*param_1 + 0x5c) + 0x1c);
    *(undefined2 *)(*(int *)(*param_1 + 0x5c) + 0x1a) =
         *(undefined2 *)(*(int *)(*param_1 + 0x5c) + 0x1e);
  }
  if (*(int *)(*(int *)(*param_1 + 0x5c) + 0x10) == 0) {
    return 0;
  }
  param_1[6] = *(int *)(iVar1 + 0xb4);
  FUN_005677ee(0xf044);
  return 1;
}


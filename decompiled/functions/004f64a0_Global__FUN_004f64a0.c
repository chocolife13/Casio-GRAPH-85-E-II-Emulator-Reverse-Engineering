// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f64a0
// entry: 004f64a0  size: 374


undefined4 FUN_004f64a0(undefined4 *param_1,int param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  char local_14e [2];
  undefined1 local_14c [4];
  undefined1 local_148 [328];
  
  local_14e[0] = *(char *)*param_1;
  FUN_00523740();
  FUN_0052f840();
  thunk_FUN_0040add0();
  iVar1 = FUN_00501720(param_1,local_14e,param_3,1);
  iVar2 = FUN_0052f820();
  if (iVar2 != 0) {
    FUN_004f58f0(1,param_3);
    return 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      if (((*param_3 & 0x80) != 0) && ((*param_3 & 0xf0) != 0xf0)) {
        FUN_004fe3e0(local_14e,param_1);
        FUN_004f58f0(3,param_3);
        return 0;
      }
    }
    else if (param_2 != 5) goto LAB_004f65c6;
  }
  if ((*param_3 & 0x60) == 0x20) {
    FUN_004fe3e0(local_14e,param_1);
    FUN_004f58f0(2,param_3);
    return 0;
  }
  if ((param_2 == 3) || (param_2 == 5)) {
    if (local_14e[0] == '\x0e') {
      iVar1 = FUN_004f4200(param_1,local_14e,param_3,local_148,local_14c);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else if ((local_14e[0] == '\0') && (param_2 == 3)) {
      iVar1 = FUN_004f5c60(param_3,0);
      if (iVar1 == 0) {
        return 0;
      }
      goto LAB_004f65c6;
    }
    if (param_2 == 5) {
      FUN_004e56c0(param_3,param_3);
      iVar1 = FUN_004e4020(param_3);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
LAB_004f65c6:
  if (local_14e[0] != '\0') {
    FUN_004f58f0(2,param_3);
    return 0;
  }
  return 1;
}


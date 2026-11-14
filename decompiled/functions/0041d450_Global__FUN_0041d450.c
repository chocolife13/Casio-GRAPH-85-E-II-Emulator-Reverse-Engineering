// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041d450
// entry: 0041d450  size: 458


uint FUN_0041d450(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_28;
  undefined2 local_24;
  undefined1 local_1c [4];
  uint local_18;
  undefined2 local_14 [2];
  undefined2 local_10;
  undefined1 local_e [2];
  undefined1 local_c [2];
  short local_a [5];
  
  local_28 = 0;
  if (param_4 < 1) {
    return 0xfffffffe;
  }
  if ((param_2 & 0xfff0000) != 0x1200000) {
    return 0xffffffde;
  }
  local_18 = param_2 & 0xfffffff;
  local_14[0] = (undefined2)param_3;
  do {
    uVar1 = FUN_0041d050(param_3,param_4,local_e,local_c);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    local_a[0] = (short)uVar1 + -1;
    param_4 = param_4 - uVar1;
    uVar1 = FUN_0041b590(local_1c);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    local_24 = (undefined2)uVar1;
    local_28 = local_28 + 1;
    local_10 = (undefined2)local_28;
    uVar1 = FUN_00418e50(uVar1 & 0xffff);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    FUN_00419700(0);
    FUN_004193e0(local_1c,4);
    FUN_00419700(4);
    FUN_004193e0(&local_18,4);
    FUN_00419700(8);
    FUN_004193e0(local_14,2);
    FUN_00419700(0xc);
    FUN_004193e0(&local_10,2);
    FUN_00419700(0xe);
    FUN_004193e0(local_e,2);
    FUN_00419700(0x10);
    FUN_004193e0(local_c,2);
    FUN_00419700(0x12);
    FUN_004193e0(local_a,2);
    FUN_00419120();
    FUN_00418f90();
    DAT_005d8730 = DAT_005d8730 + 1;
  } while (0 < param_4);
  uVar1 = param_1 + 1;
  uVar2 = uVar1 & 0xffff;
  if (uVar2 <= (local_28 & 0xffff) + (param_1 & 0xffff)) {
    do {
      uVar2 = FUN_00418e50(uVar2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      FUN_00419700(10);
      FUN_004193e0(&local_28,2);
      FUN_00419120();
      FUN_00418f90();
      uVar1 = uVar1 + 1;
      uVar2 = uVar1 & 0xffff;
    } while (uVar2 <= (local_28 & 0xffff) + (param_1 & 0xffff));
  }
  return 0;
}


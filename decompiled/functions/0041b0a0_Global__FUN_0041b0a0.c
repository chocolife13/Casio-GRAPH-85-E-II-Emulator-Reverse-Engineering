// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041b0a0
// entry: 0041b0a0  size: 318


/* WARNING: Type propagation algorithm not settling */

int FUN_0041b0a0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_18 [5];
  undefined2 local_4;
  
  local_18[0] = -1;
  uVar3 = 0;
  do {
    if (DAT_005d8730 <= uVar3) {
      return -1;
    }
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    local_18[4] = 0;
    local_4 = 0;
    iVar2 = FUN_00418e50(uVar3);
    if (iVar2 < 0) {
      return iVar2;
    }
    FUN_00419650(0);
    FUN_00419220(param_2,4);
    uVar1 = *param_2;
    *param_2 = uVar1 & 0xfffffff;
    if (((uVar1 & 0xfff0000) == 0x1100000) && ((uVar1 & 0xffff) != 0)) {
      FUN_00419650(4);
      FUN_00419220(local_18,4);
      if (local_18[0] == -1) {
        FUN_00419650(8);
        FUN_00419220(local_18 + 1,0x10);
        FUN_0042ab20(local_18 + 1,0,9);
        iVar2 = FUN_0042a3d0(param_1,local_18 + 1,0x10);
        if (iVar2 != 0) {
          FUN_00418f90();
          return 0;
        }
      }
    }
    FUN_00418f90();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xffe);
  return -6;
}


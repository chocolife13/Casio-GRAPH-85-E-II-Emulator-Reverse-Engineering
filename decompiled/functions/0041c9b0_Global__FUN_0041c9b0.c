// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c9b0
// entry: 0041c9b0  size: 396


int FUN_0041c9b0(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_4;
  
  uVar3 = 0;
  local_4 = 0xffffffff;
  iVar1 = FUN_0041c160(DAT_0057ddf4,0x10000);
  if (-1 < iVar1) {
    DAT_005d8730 = 1;
    iVar1 = FUN_00418e50(0);
    if (iVar1 < 0) {
      return iVar1;
    }
    while( true ) {
      local_4 = DAT_005d8730 | 0x42000000;
      FUN_00419700(0);
      FUN_004193e0(&local_4,4);
      uVar2 = (uint)uVar3;
      local_4 = (&DAT_0057ddf4)[uVar2];
      FUN_00419700(4);
      FUN_004193e0(&local_4,4);
      if (uVar2 == 0) {
        local_4 = 0xff0001;
        FUN_00419700(8);
      }
      else if (uVar2 == 1) {
        local_4 = 0xfffffff;
        FUN_00419700(0xc);
      }
      else {
        local_4 = 0xffffffff;
        FUN_00419700(8);
      }
      FUN_004193e0(&local_4,4);
      local_4 = *(int *)(param_1 + uVar2 * 4) + 1;
      FUN_00419700(0x10);
      FUN_004193e0(&local_4,4);
      FUN_00419120();
      FUN_00418f90();
      uVar4 = uVar3 + 1;
      if (0x18 < uVar4) break;
      DAT_005d8730 = uVar3 + 2;
      iVar1 = FUN_00418e50(uVar4);
      uVar3 = uVar4;
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    iVar1 = FUN_00418cd0(1);
    if (iVar1 < 0) {
      return -6;
    }
    local_4 = 0x1000001;
    FUN_00419700(0);
    FUN_004193e0(&local_4,4);
    FUN_00418fd0();
    FUN_00418f90();
  }
  return 0;
}


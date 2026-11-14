// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041cf50
// entry: 0041cf50  size: 252


uint FUN_0041cf50(undefined4 param_1,int param_2,undefined2 *param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar3 = param_3;
  if (param_2 == 1) {
    local_8 = 0x1200000;
    local_4 = 0x18;
  }
  else {
    if (param_2 != 5) {
      return 0xfffffffe;
    }
    local_8 = 0x1100000;
    local_4 = 0x10;
  }
  param_2 = param_1;
  puVar1 = (undefined4 *)(param_3 + 4);
  uVar4 = FUN_0041b7d0(&param_2,puVar1);
  if (-1 < (int)uVar4) {
    puVar2 = puVar3 + 6;
    FUN_0042a4c0(puVar2,param_2,0xd);
    uVar4 = FUN_0041b2e0(*puVar1,puVar2,local_8,puVar3 + 2);
    if (-1 < (int)uVar4) {
      *puVar3 = (short)uVar4;
      uVar4 = FUN_00418e50(uVar4 & 0xffff);
      if (-1 < (int)uVar4) {
        FUN_00419700(0);
        FUN_004193e0(puVar3 + 2,4);
        FUN_00419700(4);
        FUN_004193e0(puVar1,4);
        FUN_00419700(8);
        FUN_00418fc0(0);
        FUN_004193e0(puVar2,local_4);
        FUN_00419120();
        FUN_00418f90();
        DAT_005d8730 = DAT_005d8730 + 1;
      }
    }
  }
  return uVar4;
}


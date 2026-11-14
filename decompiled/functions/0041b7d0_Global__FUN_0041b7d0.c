// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041b7d0
// entry: 0041b7d0  size: 264


uint FUN_0041b7d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined2 local_2;
  
  local_10 = 0;
  local_e = 0;
  local_c = 0;
  local_a = 0;
  local_8 = 0;
  local_6 = 0;
  local_4 = 0;
  local_2 = 0;
  iVar1 = FUN_0041a050(*param_1);
  if (iVar1 != 1) {
    return 0xfffffffb;
  }
  iVar1 = *param_1;
  iVar2 = FUN_0042ac10(iVar1,0x5c);
  if (iVar1 + 0xc == iVar2) {
    *param_2 = 0xffffffff;
  }
  else {
    iVar1 = *param_1;
    iVar2 = FUN_0042abd0(iVar1 + 0xe,0x5c);
    if (0x10 < (int)(iVar2 + (-0xe - iVar1) & 0xfffffffeU)) {
      return 0xfffffffd;
    }
    iVar1 = *param_1;
    iVar2 = FUN_0042abd0(iVar1 + 0xe,0x5c);
    FUN_0042a4c0(&local_10,iVar1 + 0xe,iVar2 + (-0xe - iVar1) >> 1);
    uVar3 = FUN_0041b0a0(&local_10,param_2);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  iVar1 = FUN_0042ac10(*param_1,0x5c);
  *param_1 = iVar1 + 2;
  iVar1 = FUN_0042a410(iVar1 + 2);
  return (iVar1 < 0xd) - 1 & 0xfffffffd;
}


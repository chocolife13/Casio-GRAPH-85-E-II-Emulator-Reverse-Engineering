// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042fa70
// entry: 0042fa70  size: 125


uint FUN_0042fa70(undefined4 param_1,short param_2)

{
  short sVar1;
  uint uVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort uVar3;
  undefined1 local_10 [16];
  
  sVar1 = FUN_004011b0(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_00401130();
    return uVar2;
  }
  FUN_00401d60(param_1);
  if (param_2 == 1) {
    FUN_0042f9b0(local_10);
    uVar2 = FUN_004012f0(param_1,local_10);
    return uVar2 & 0xffff0000;
  }
  uVar3 = extraout_var;
  if (param_2 == 0) {
    FUN_0042f970(local_10);
    FUN_004012f0(param_1,local_10);
    uVar3 = extraout_var_00;
  }
  return (uint)uVar3 << 0x10;
}


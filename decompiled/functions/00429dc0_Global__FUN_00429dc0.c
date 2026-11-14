// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429dc0
// entry: 00429dc0  size: 117


uint FUN_00429dc0(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = FUN_004299c0(param_1);
  if (iVar1 == 1) {
    uVar2 = FUN_0041f3f0(param_1,param_2);
    return uVar2;
  }
  if (iVar1 != 3) {
    return 0xfffffffb;
  }
  iVar1 = FUN_0055569d(*param_1 + -0x40,local_10);
  if (iVar1 == 0) {
    return -(uint)((uint)(local_4 * local_8 * local_c) < param_2) & 0xfffffffc;
  }
  return 0xffffffe1;
}


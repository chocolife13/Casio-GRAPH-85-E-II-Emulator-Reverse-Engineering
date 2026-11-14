// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00483c40
// entry: 00483c40  size: 212


undefined4 FUN_00483c40(short *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  if (param_3 == 0) {
    FUN_00531380();
    FUN_00531390();
  }
  switch((int)*param_1) {
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    if (param_3 != 0) {
      if (param_3 != 1) {
        return 0;
      }
      uVar2 = FUN_00485750((int)*param_1,param_2);
      return uVar2;
    }
    iVar1 = FUN_004801d0();
    break;
  default:
    return 0xfffffffe;
  case 0x14:
    if (param_3 != 0) {
      if (param_3 != 1) {
        return 0;
      }
      uVar2 = FUN_00485750(0x14,param_2);
      return uVar2;
    }
    iVar1 = FUN_0047fcc0();
    *param_2 = iVar1;
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    return 0;
  case 0x15:
    if (param_3 != 0) {
      if (param_3 != 1) {
        return 0;
      }
      uVar2 = FUN_00485750(0x15,param_2);
      return uVar2;
    }
    iVar1 = FUN_0047ff60();
  }
  *param_2 = iVar1;
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  return 0;
}


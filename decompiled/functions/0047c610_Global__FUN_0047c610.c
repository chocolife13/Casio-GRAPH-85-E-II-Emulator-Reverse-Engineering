// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047c610
// entry: 0047c610  size: 260


undefined4 FUN_0047c610(short *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xfffffffe;
  *param_2 = 0;
  FUN_00531380();
  FUN_00531390();
  switch(*param_1) {
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
    if (param_4 == 0) {
      iVar1 = FUN_004801d0();
      *param_2 = iVar1;
    }
    else {
      iVar1 = FUN_00480200();
      *param_2 = iVar1;
    }
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    if (param_3 == 1) {
      uVar2 = FUN_0047c740((int)*param_1,param_2,param_4);
      return uVar2;
    }
    break;
  default:
    goto switchD_0047c648_caseD_13;
  case 0x14:
    if (param_4 == 0) {
      iVar1 = FUN_0047fcc0();
      *param_2 = iVar1;
    }
    else {
      iVar1 = FUN_0047fd20();
      *param_2 = iVar1;
    }
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    if (param_3 == 1) {
      uVar2 = FUN_0047c740(0x14,param_2,param_4);
      return uVar2;
    }
    break;
  case 0x15:
    if (param_4 == 0) {
      iVar1 = FUN_0047ff60();
      *param_2 = iVar1;
    }
    else {
      iVar1 = FUN_0047ff90();
      *param_2 = iVar1;
    }
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    if (param_3 == 1) {
      uVar2 = FUN_0047c740(0x15,param_2,param_4);
      return uVar2;
    }
  }
  uVar2 = 0;
switchD_0047c648_caseD_13:
  return uVar2;
}


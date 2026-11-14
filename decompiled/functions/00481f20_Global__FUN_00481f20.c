// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00481f20
// entry: 00481f20  size: 196


undefined4 FUN_00481f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  switch(param_1) {
  case 1:
  case 2:
    iVar1 = FUN_00482050(0,param_2,param_3,param_4);
    if (iVar1 == 0) {
      uVar2 = 9;
    }
    iVar1 = FUN_00482010(param_2,param_3,param_4);
    if (iVar1 != 0) {
      return uVar2;
    }
    return 0x19;
  case 3:
    param_4 = 0;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    goto LAB_00481fc8;
  case 0x11:
  case 0x12:
    param_4 = 0;
LAB_00481fc8:
    uVar2 = FUN_00481e10(param_1,param_2,param_3,param_4);
  default:
    goto switchD_00481f3d_default;
  }
  iVar1 = FUN_004820a0(0,param_2,0,param_4);
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  iVar1 = FUN_00482010(param_2,0,param_4);
  if (iVar1 == 0) {
    return 0x19;
  }
switchD_00481f3d_default:
  return uVar2;
}


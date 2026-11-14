// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00481e10
// entry: 00481e10  size: 213


undefined4 FUN_00481e10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((0x10 < param_1) && (param_1 < 0x13)) {
    param_4 = 0;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    iVar1 = FUN_00482050(0,param_2,param_3,param_4);
  }
  else {
    iVar1 = FUN_004820a0(0,param_2,param_3,param_4);
  }
  if (iVar1 != 0) {
    iVar2 = FUN_00482010(param_2,param_3,param_4);
    if (iVar2 == 0) {
      return 0x19;
    }
    uVar3 = 0;
    switch(param_1) {
    case 9:
    case 0xe:
    case 0xf:
    case 0x10:
      if (iVar1 < 2) {
        return 3;
      }
      break;
    case 10:
    case 0xb:
    case 0x12:
      if (iVar1 < 3) {
        return 3;
      }
      break;
    case 0xc:
    case 0x11:
      if (iVar1 < 4) {
        return 3;
      }
      break;
    case 0xd:
      if (iVar1 < 5) {
        uVar3 = 3;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
      if (iVar1 < 1) {
        return 3;
      }
    }
    return uVar3;
  }
  return 9;
}


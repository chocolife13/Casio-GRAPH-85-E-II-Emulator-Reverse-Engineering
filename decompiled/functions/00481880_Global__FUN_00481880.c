// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00481880
// entry: 00481880  size: 697


int FUN_00481880(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [216];
  
  iVar1 = FUN_00481e10(param_3,param_4,param_5,param_6);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 == 0) {
    FUN_00531380();
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 3) goto LAB_004818ee;
      FUN_00531380();
    }
    FUN_004802a0(param_2);
    param_2 = param_2 * 10;
  }
LAB_004818ee:
  switch(param_3) {
  case 9:
  case 0xe:
  case 0xf:
  case 0x10:
    iVar4 = 4;
    iVar1 = 1;
    break;
  case 10:
    iVar4 = 8;
    iVar1 = 0;
    break;
  case 0xb:
  case 0x12:
    iVar4 = 3;
    iVar1 = 2;
    break;
  case 0xc:
  case 0x11:
    iVar4 = 4;
    iVar1 = 2;
    break;
  case 0xd:
    iVar4 = 5;
    iVar1 = 2;
    break;
  default:
    return 0;
  }
  iVar2 = FUN_004840c0(param_3,param_4,param_5,param_6,local_d8);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_1 == 3)) {
      iVar1 = FUN_00531340(param_3,iVar4 + iVar1);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = 1;
      if (iVar4 != 0) {
        puVar3 = local_d8;
        do {
          iVar2 = FUN_005278d0(0xfe,0,iVar1,puVar3);
          if (iVar2 != 0) {
            return 4;
          }
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 0x18;
        } while (iVar1 <= iVar4);
      }
      if (param_3 != 10) {
        iVar1 = FUN_0047cd20(param_3,param_4,param_5,param_6,local_108,local_f0);
        if (iVar1 != 0) {
          FUN_004e5630(3,local_108);
          FUN_004e5630(3,local_f0);
        }
        if ((param_3 == 9) || ((0xd < param_3 && (param_3 < 0x11)))) {
          iVar1 = iVar4 + 1;
        }
        else {
          iVar1 = FUN_005278d0(0xfe,0,iVar4 + 1,local_f0);
          if (iVar1 != 0) {
            return 4;
          }
          iVar1 = iVar4 + 2;
        }
        iVar1 = FUN_005278d0(0xfe,0,iVar1,local_108);
        if (iVar1 != 0) {
          return 4;
        }
      }
      iVar1 = FUN_00484690(param_4,param_5,param_3,local_d8);
      if (iVar1 != 0) {
        FUN_00531380();
        return iVar1;
      }
      iVar2 = 0;
    }
    if ((((param_1 == 1) || (param_1 == 3)) &&
        (iVar2 = FUN_00531200(param_3,param_2,iVar4), iVar2 == 0)) && (iVar1 = 1, iVar4 != 0)) {
      puVar3 = local_d8;
      do {
        iVar2 = FUN_005278d0(0xff,param_2,iVar1,puVar3);
        if (iVar2 != 0) {
          return 4;
        }
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 0x18;
      } while (iVar1 <= iVar4);
      return 0;
    }
  }
  return iVar2;
}


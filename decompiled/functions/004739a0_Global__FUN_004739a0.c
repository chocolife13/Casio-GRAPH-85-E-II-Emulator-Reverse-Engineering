// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004739a0
// entry: 004739a0  size: 384


int FUN_004739a0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined2 local_2;
  
  iVar1 = FUN_00530e70(&local_c);
  if (iVar1 != 0) {
    if (param_1 == 1) {
      return 4;
    }
    local_10 = FUN_00530da0();
    if (local_10 != 0) {
      return 4;
    }
    iVar1 = FUN_00530e70(&local_c);
    if (iVar1 != 0) {
      return 4;
    }
  }
  if (param_1 == 0) {
    local_c = (undefined2)param_2;
    switch(param_2) {
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
    case 0x15:
      if (param_3 != -1) {
        local_6 = (short)param_3;
      }
      if (param_4 != -1) {
        local_4 = (undefined2)param_4;
      }
      if (param_5 != -1) {
        local_2 = (short)param_5;
      }
      break;
    default:
      return 0;
    case 0x14:
      if (param_3 != -1) {
        local_a = (short)param_3;
      }
      if (param_5 != -1) {
        local_8 = (short)param_5;
      }
    }
    local_10 = FUN_00531110(&local_c);
    if (local_10 != 0) {
      return local_10;
    }
  }
  else if ((param_1 == 1) && (iVar1 = FUN_00531730(0,0), iVar1 < 0)) {
    return 4;
  }
  uVar2 = FUN_00483c40(&local_c,&local_10,param_1);
  *param_6 = uVar2;
  switch(uVar2) {
  case 0xffffffeb:
  case 0xfffffff2:
  case 0xfffffffa:
  case 0xfffffffe:
    *param_6 = 0x7532;
    break;
  case 0xfffffff3:
    *param_6 = 0x753f;
    break;
  case 0xfffffff4:
  case 0:
    *param_6 = 0x7534;
    break;
  case 0xfffffff5:
    *param_6 = 0x7557;
    break;
  case 0xffffffff:
    *param_6 = 0x754d;
  }
  if (local_10 != 0) {
    FUN_00531380();
    FUN_00531390();
  }
  return local_10;
}


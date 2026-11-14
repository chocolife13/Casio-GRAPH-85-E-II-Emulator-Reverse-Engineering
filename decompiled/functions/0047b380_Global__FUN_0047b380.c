// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047b380
// entry: 0047b380  size: 669


int FUN_0047b380(int param_1,int param_2,int param_3,undefined2 *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 local_10 [4];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined2 local_2;
  
  iVar1 = FUN_004ab6a0(s__SSHEET_005be210);
  uVar3 = (undefined2)param_3;
  if (param_1 == 0) {
    iVar2 = FUN_00530e70(&local_c);
    if (iVar2 != 0) {
      iVar2 = FUN_00530da0();
      if (iVar2 != 0) {
        FUN_00480280();
        FUN_0052b240(4);
        return 0;
      }
      FUN_00530e70(&local_c);
    }
    FUN_00531380();
    FUN_00531390();
    FUN_00414db0(local_10);
    thunk_FUN_0040add0();
    FUN_0052f840();
    local_c = uVar3;
    switch(uVar3) {
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
      local_6 = param_4[param_2 * 7 + 2];
      local_4 = param_4[param_2 * 7 + 3];
      local_2 = param_4[param_2 * 7 + 4];
      FUN_0047b1c0(&local_c,param_2,2);
      if (param_3 == 0x15) {
        if (iVar1 == 1) {
          iVar1 = FUN_0047ff90();
        }
        else {
          iVar1 = FUN_0047ff60();
        }
      }
      else {
        iVar1 = FUN_00481ba0(&local_c);
      }
      break;
    default:
      return -0x15;
    case 0x14:
      local_a = param_4[param_2 * 7 + 2];
      local_8 = param_4[param_2 * 7 + 4];
      FUN_0047b1c0(&local_c,param_2,1);
      if (iVar1 == 1) {
        iVar1 = FUN_0047fd20();
      }
      else {
        iVar1 = FUN_0047fcc0();
      }
    }
    *param_4 = 0;
    FUN_0047b310(param_4);
    if (iVar1 != 0) {
      FUN_00414db0(local_10);
      FUN_00480280();
      FUN_00531380();
      FUN_00531390();
      goto LAB_0047b5ec;
    }
  }
  iVar2 = FUN_0047bce0(param_3);
  if (iVar2 == -0x1c) {
    FUN_0050acb0(param_5);
    if ((param_3 != 0x14) && (param_3 != 0x15)) {
      *param_4 = 1;
      param_4[1] = uVar3;
      param_4[2] = param_4[param_2 * 7 + 2];
      param_4[3] = param_4[param_2 * 7 + 3];
      param_4[4] = param_4[param_2 * 7 + 4];
      FUN_0047b310(param_4);
      FUN_00482c30(0);
      FUN_00414db0(local_10);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar1 = FUN_0047e790(0,param_4,param_5,0);
      if (iVar1 != 0) {
        FUN_00414db0(local_10);
        FUN_00480280();
LAB_0047b5ec:
        FUN_0052b240(iVar1);
        return 0;
      }
      FUN_0050acb0(param_5);
    }
  }
  else if (iVar2 == -0x17) {
    FUN_0050acb0(param_5);
    return -0x17;
  }
  return iVar2;
}


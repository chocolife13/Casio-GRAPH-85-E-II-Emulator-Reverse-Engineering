// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482ca0
// entry: 00482ca0  size: 276


int FUN_00482ca0(short *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*param_1 != 1) goto switchD_00482ced_default;
    FUN_00482c30(iVar2);
    FUN_0040ae30();
    FUN_0052f880();
    FUN_0052f840();
    thunk_FUN_0040add0();
    switch(param_1[1]) {
    case 1:
      iVar1 = FUN_0047e560(iVar2,param_1,param_2);
      goto joined_r0x00482d1d;
    case 2:
      iVar1 = FUN_0047e5b0(iVar2,param_1,param_2);
joined_r0x00482d1d:
      if (iVar1 == 0) goto switchD_00482ced_default;
      goto LAB_00482da4;
    case 3:
      iVar1 = FUN_0047eac0(iVar2,param_1,param_2);
      break;
    case 4:
      iVar1 = FUN_0047f4e0(iVar2,param_1,param_2);
      break;
    case 5:
      iVar1 = FUN_0047edb0(iVar2,param_1,param_2);
      break;
    case 6:
      iVar1 = FUN_0047ee40(iVar2,param_1,param_2);
      break;
    case 7:
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
      iVar1 = FUN_0047e790(iVar2,param_1,param_2,0);
      break;
    case 8:
      iVar1 = FUN_0047f720(iVar2,param_1,param_2);
      break;
    default:
      goto switchD_00482ced_default;
    }
    if (iVar1 != 0) break;
switchD_00482ced_default:
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 7;
  } while (iVar2 < 4);
LAB_00482da4:
  FUN_0050acb0(param_2);
  return iVar1;
}


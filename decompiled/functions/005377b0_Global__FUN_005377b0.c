// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005377b0
// entry: 005377b0  size: 189


undefined4
FUN_005377b0(undefined4 param_1,undefined1 param_2,undefined2 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  DAT_005d5728 = *param_3;
  DAT_005d5724 = param_1;
  DAT_005d5720 = param_1;
  FUN_004b7750(DAT_005d5748,param_1);
  DAT_005d574c = DAT_005d5728;
  switch(*param_4) {
  case 0x753f:
  case 0x7542:
  case 0x7544:
  case 0x7545:
  case 0x7547:
  case 0x7549:
    uVar1 = FUN_00536df0(*param_4);
    *param_3 = DAT_005d5728;
    return uVar1;
  default:
    *param_3 = DAT_005d5728;
    return 1;
  case 0x7554:
    break;
  }
  iVar2 = FUN_00537790(param_2);
  if (iVar2 != 0) {
    FUN_0052b240(iVar2);
    *param_3 = DAT_005d5728;
    return 0xfffffffe;
  }
  *param_3 = DAT_005d5728;
  return 0;
}


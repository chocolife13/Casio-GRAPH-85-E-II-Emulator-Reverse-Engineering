// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ef1b0
// entry: 004ef1b0  size: 358


bool FUN_004ef1b0(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(*param_1) {
  case 0x8b:
    FUN_004e2770(param_2,param_3,param_5);
    iVar1 = FUN_004e4020(param_3);
    return iVar1 == 0;
  default:
    FUN_004e5630(8,param_3);
    return false;
  case 0x9b:
    FUN_004e2790(param_2,param_3,param_5);
    iVar1 = FUN_004e4020(param_3);
    return iVar1 == 0;
  case 0x9c:
    FUN_004e2ef0(param_2,param_3,param_4);
    iVar1 = FUN_004e4020(param_3);
    return iVar1 == 0;
  case 0xab:
    FUN_004e2c90(param_2,param_3);
    iVar1 = FUN_004e4020(param_3);
    return iVar1 == 0;
  case 0xac:
    FUN_004e2fa0(param_2,param_3,param_4);
    iVar1 = FUN_004e4020(param_3);
    return iVar1 == 0;
  case 0xbc:
    FUN_004e3050(param_2,param_3,param_4);
    iVar1 = FUN_004e4020(param_3);
    return iVar1 == 0;
  case 0xcb:
    FUN_004e3d50(param_2);
    break;
  case 0xcc:
    FUN_004e3de0(param_2);
  }
  puVar2 = param_3;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_004e4020(param_3);
  return iVar1 == 0;
}


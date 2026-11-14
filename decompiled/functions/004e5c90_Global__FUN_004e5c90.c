// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e5c90
// entry: 004e5c90  size: 511


undefined4 *
FUN_004e5c90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004e4020(param_2);
  if (iVar1 != 0) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    return param_4;
  }
  iVar1 = FUN_004e4020(param_3);
  if (iVar1 != 0) {
    *param_4 = *param_3;
    param_4[1] = param_3[1];
    param_4[2] = param_3[2];
    return param_4;
  }
  FUN_004e5b70(param_2,local_18);
  FUN_004e5b70(param_3,local_c);
  switch(param_1) {
  case 0:
    FUN_0042ca30(local_18,local_c);
    break;
  case 1:
    FUN_0042cb70(local_18,local_c);
    break;
  case 2:
    FUN_0042ccb0(local_18,local_c);
    break;
  case 3:
    FUN_0042cd50(local_18,local_c);
    break;
  case 4:
    FUN_0042cdf0(local_18,local_c);
    break;
  case 5:
    FUN_0042d070(local_18,local_c);
    break;
  case 6:
    FUN_0042d0f0(local_18,local_c);
    break;
  case 7:
    FUN_0042d1c0(local_18,local_c);
    break;
  case 8:
    FUN_0042d240(local_18,local_c);
    break;
  case 9:
    FUN_0042d2c0(local_18,local_c);
    break;
  case 10:
    FUN_0042d340(local_18,local_c);
    break;
  case 0x24:
    FUN_0042e8a0(local_18,local_c);
    break;
  case 0x25:
    FUN_0042ea70(local_18,local_c);
    break;
  case 0x29:
    FUN_0042ef30(local_18,local_c);
    break;
  case 0x2a:
    FUN_0042efc0(local_18,local_c);
    break;
  case 0x2d:
    FUN_0042f0d0(local_18,local_c);
    break;
  case 0x30:
    FUN_0042cad0(local_18,local_c);
    break;
  case 0x31:
    FUN_0042cc10(local_18,local_c);
  }
  FUN_004e5bf0(local_18,param_4);
  return param_4;
}


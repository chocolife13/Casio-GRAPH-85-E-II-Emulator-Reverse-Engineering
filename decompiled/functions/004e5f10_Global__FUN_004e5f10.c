// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e5f10
// entry: 004e5f10  size: 446


undefined4 * FUN_004e5f10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = FUN_004e4020(param_2);
  if (iVar1 != 0) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    return param_3;
  }
  FUN_004e5b70(param_2,local_c);
  switch(param_1) {
  case 0xb:
    FUN_0042d3c0(local_c);
    break;
  case 0xc:
    FUN_0042d440(local_c);
    break;
  case 0xd:
    FUN_0042d500(local_c);
    break;
  case 0xe:
    FUN_0042d590(local_c);
    break;
  case 0x15:
    FUN_0042e180(local_c);
    break;
  case 0x16:
    FUN_0042e230(local_c);
    break;
  case 0x17:
    FUN_0042e290(local_c);
    break;
  case 0x18:
    FUN_0042e340(local_c);
    break;
  case 0x19:
    FUN_0042e440(local_c);
    break;
  case 0x1a:
    FUN_0042e500(local_c);
    break;
  case 0x1b:
    FUN_0042d7e0(local_c);
    break;
  case 0x1c:
    FUN_0042f0a0(local_c);
    break;
  case 0x1d:
    FUN_0042e5f0(local_c);
    break;
  case 0x1e:
    FUN_0042d810(local_c);
    break;
  case 0x1f:
    FUN_0042d860(local_c);
    break;
  case 0x21:
    FUN_0042d4a0(local_c);
    break;
  case 0x22:
    FUN_0042e6c0(local_c);
    break;
  case 0x23:
    FUN_0042e850(local_c);
    break;
  case 0x2b:
    FUN_0042f050(local_c);
    break;
  case 0x2c:
    FUN_0042f720(local_c);
    break;
  case 0x2e:
    FUN_0042d620(local_c);
    break;
  case 0x2f:
    FUN_0042d740(local_c);
    break;
  case 0x32:
    FUN_0042e640(local_c);
    break;
  case 0x40:
    FUN_0042d6c0(local_c);
  }
  FUN_004e5bf0(local_c,param_3);
  return param_3;
}


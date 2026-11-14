// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046e7f0
// entry: 0046e7f0  size: 108


void FUN_0046e7f0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  switch(param_3) {
  case 6:
  case 7:
    puVar1 = (undefined4 *)(param_2 + 0x60);
    break;
  case 8:
    puVar1 = (undefined4 *)(param_2 + 0x6c);
    break;
  case 9:
  case 10:
    puVar1 = (undefined4 *)(param_2 + 0xb4);
    break;
  case 0xb:
    puVar1 = (undefined4 *)(param_2 + 0xc0);
    break;
  case 0xc:
  case 0xd:
    puVar1 = (undefined4 *)(param_2 + 0x78);
    break;
  case 0xe:
    puVar1 = (undefined4 *)(param_2 + 0x84);
    break;
  default:
    goto switchD_0046e809_caseD_f;
  case 0x15:
    puVar1 = (undefined4 *)(param_2 + 0x108);
  }
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
switchD_0046e809_caseD_f:
  FUN_0046e270(param_2);
  return;
}


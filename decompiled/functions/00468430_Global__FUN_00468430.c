// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00468430
// entry: 00468430  size: 349


void FUN_00468430(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  switch(param_2) {
  case 2:
    puVar2 = (undefined4 *)(param_1 + 0x3c);
    break;
  case 3:
    puVar2 = (undefined4 *)(param_1 + 0xcc);
    break;
  case 4:
    puVar2 = (undefined4 *)(param_1 + 300);
    break;
  case 5:
    puVar2 = (undefined4 *)(param_1 + 0xe4);
    break;
  case 6:
    puVar2 = (undefined4 *)(param_1 + 0xf0);
    break;
  case 7:
    puVar2 = (undefined4 *)(param_1 + 0x114);
    break;
  case 8:
    puVar2 = (undefined4 *)(param_1 + 0x120);
    break;
  case 9:
    puVar2 = (undefined4 *)(param_1 + 0x108);
    break;
  case 10:
    puVar2 = (undefined4 *)(param_1 + 0xfc);
    break;
  case 0xb:
    puVar2 = (undefined4 *)(param_1 + 0xd8);
    break;
  default:
    goto switchD_00468449_caseD_c;
  case 0xd:
  case 0xe:
    puVar2 = (undefined4 *)(param_1 + 0x90);
    break;
  case 0xf:
    puVar2 = (undefined4 *)(param_1 + 0x9c);
    break;
  case 0x11:
  case 0x12:
    puVar2 = (undefined4 *)(param_1 + 0x78);
    break;
  case 0x13:
    puVar2 = (undefined4 *)(param_1 + 0x84);
    break;
  case 0x14:
  case 0x15:
    puVar2 = (undefined4 *)(param_1 + 0x48);
    break;
  case 0x16:
    puVar2 = (undefined4 *)(param_1 + 0x54);
    break;
  case 0x17:
  case 0x18:
    puVar2 = (undefined4 *)(param_1 + 0x60);
    break;
  case 0x19:
    puVar2 = (undefined4 *)(param_1 + 0x6c);
    break;
  case 0x2b:
  case 0x2c:
    puVar2 = (undefined4 *)(param_1 + 0xb4);
    break;
  case 0x2d:
    puVar2 = (undefined4 *)(param_1 + 0xc0);
    break;
  case 0x35:
    puVar2 = (undefined4 *)(param_1 + 0x30);
    break;
  case 0x36:
  case 0x37:
    puVar2 = (undefined4 *)(param_1 + 0x24);
    break;
  case 0x38:
    puVar2 = (undefined4 *)(param_1 + 0xa8);
  }
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  uVar1 = param_3[2];
  *(undefined2 *)(param_1 + 2) = 0;
  puVar2[2] = uVar1;
  FUN_0046e270(param_1);
switchD_00468449_caseD_c:
  return;
}


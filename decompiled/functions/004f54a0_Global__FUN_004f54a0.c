// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f54a0
// entry: 004f54a0  size: 174


undefined4 FUN_004f54a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0x15:
    param_1 = 5;
    break;
  case 0x16:
    param_1 = 8;
    break;
  case 0x17:
    param_1 = 0xb;
    break;
  case 0x18:
    param_1 = 0xe;
    break;
  default:
    break;
  case 0x95:
    param_1 = 1;
    break;
  case 0x96:
    param_1 = 2;
    break;
  case 0xa4:
    param_1 = 3;
    break;
  case 0xa5:
    param_1 = 6;
    break;
  case 0xa6:
    param_1 = 9;
    break;
  case 0xaa:
    param_1 = 4;
    break;
  case 0xab:
    param_1 = 7;
    break;
  case 0xac:
    param_1 = 10;
    break;
  case 0xad:
    param_1 = 0xc;
    break;
  case 0xae:
    param_1 = 0xd;
  }
  iVar1 = FUN_004427c0(param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_004f58f0(iVar1,param_2);
    return uVar2;
  }
  return 1;
}


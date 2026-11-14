// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523690
// entry: 00523690  size: 116


void FUN_00523690(undefined1 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  default:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    uVar1 = 8;
    break;
  case 6:
    uVar1 = 0x10;
    break;
  case 7:
    uVar1 = 0x11;
    break;
  case 9:
    uVar1 = 0x12;
    break;
  case 10:
    uVar1 = 0x14;
    break;
  case 0xb:
    uVar1 = 0x18;
    break;
  case 0xc:
    uVar1 = 0x40;
  }
  FUN_00413a40(uVar1);
  FUN_00413ac0(1);
  DAT_005cdba4 = 0;
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532ea0
// entry: 00532ea0  size: 93


undefined1 FUN_00532ea0(byte *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = (uint)*param_1;
  if (uVar2 == 0x7f) {
    if (param_1[1] < 0xf0) {
      uVar1 = (&DAT_005996e0)[param_1[1]];
    }
  }
  else if (uVar2 == 0xf7) {
    switch(param_1[1]) {
    case 0x11:
    case 0x12:
    case 0xaf:
    case 0xb0:
    case 0xb1:
      return 10;
    }
  }
  else if (uVar2 != 0xf9) {
    return (&DAT_005995e0)[uVar2];
  }
  return uVar1;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab990
// entry: 004ab990  size: 71


undefined1 FUN_004ab990(undefined1 param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0x80;
  switch(param_1) {
  case 0x82:
    return 0;
  case 0x85:
    return 4;
  case 0x8a:
    return 5;
  case 0x8c:
    return 6;
  case 199:
    return 1;
  case 200:
    return 2;
  case 0xcd:
    return 10;
  case 0xce:
    return 7;
  case 0xd3:
    return 0xff;
  case 0xd4:
    uVar1 = 0xfe;
    break;
  case 0xd5:
    return 3;
  }
  return uVar1;
}


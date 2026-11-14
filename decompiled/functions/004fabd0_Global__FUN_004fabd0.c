// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fabd0
// entry: 004fabd0  size: 431


uint FUN_004fabd0(char *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_2 == '\x7f') {
    switch(param_2[1]) {
    case '\x1d':
      uVar1 = 0x13;
      break;
    case '\x1e':
      uVar1 = 0x14;
      break;
    case '\x1f':
      uVar1 = 0x15;
      break;
    default:
switchD_004fabfa_caseD_20:
      uVar3 = FUN_00501f50(param_1);
      return uVar3;
    case 'v':
      uVar1 = 0x18;
      break;
    case 'w':
      uVar1 = 0x1a;
      break;
    case 'x':
      uVar1 = 0x1e;
      break;
    case 'y':
      uVar1 = 0x1f;
      break;
    case 'z':
      uVar1 = 0x20;
      break;
    case '{':
      uVar1 = 0x21;
      break;
    case '|':
      uVar1 = 0x22;
      break;
    case '}':
      uVar1 = 0x23;
      break;
    case -0x69:
      uVar1 = 0x1c;
      break;
    case -0x68:
      uVar1 = 0x1d;
      break;
    case -0x2a:
      uVar1 = 0x17;
      break;
    case -0x23:
      uVar1 = 0x24;
    }
  }
  else {
    switch(*param_2) {
    case -0x71:
      uVar1 = 4;
      break;
    default:
      goto switchD_004fabfa_caseD_20;
    case -0x62:
      uVar1 = 0x19;
      break;
    case -0x61:
      uVar1 = 3;
      break;
    case -0x53:
      uVar1 = 0xe;
      break;
    case -0x52:
      uVar1 = 7;
      break;
    case -0x51:
      uVar1 = 1;
      break;
    case -0x43:
      uVar1 = 0xf;
      break;
    case -0x42:
      uVar1 = 8;
      break;
    case -0x41:
      uVar1 = 0xb;
      break;
    case -0x3e:
      uVar1 = 2;
      break;
    case -0x3d:
      uVar1 = 9;
      break;
    case -0x3c:
      uVar1 = 5;
      break;
    case -0x3b:
      uVar1 = 6;
      break;
    case -0x3a:
      uVar1 = 0xc;
      break;
    case -0x39:
      uVar1 = 0xd;
      break;
    case -0x38:
      uVar1 = 0x11;
      break;
    case -0x37:
      uVar1 = 0x12;
      break;
    case -0x36:
      uVar1 = 0x16;
      break;
    case -0x31:
      uVar1 = 10;
      break;
    case -0x21:
      uVar1 = 0x10;
    }
  }
  iVar2 = FUN_00531730(uVar1,param_1);
  if (iVar2 == -2) {
    uVar3 = FUN_00501ef0(param_1);
    return uVar3;
  }
  return (uint)(*param_1 != -0x10);
}


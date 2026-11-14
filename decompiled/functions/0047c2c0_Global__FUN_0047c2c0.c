// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047c2c0
// entry: 0047c2c0  size: 758


int FUN_0047c2c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 0xd:
    FUN_00483e70(0xff,param_1 * 10,5,local_c);
  case 0xc:
  case 0x11:
    FUN_00483e70(0xff,param_1 * 10,4,local_18);
  case 0xb:
  case 0x12:
    FUN_00483e70(0xff,param_1 * 10,3,local_24);
  case 9:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
    FUN_00483e70(0xff,param_1 * 10,1,local_30);
    FUN_00483e70(0xff,param_1 * 10,2,local_3c);
  default:
    switch(*(undefined2 *)(param_2 + 2)) {
    case 9:
    case 10:
      FUN_004e6d00(local_30,param_3,param_4);
      FUN_004e6a00(local_3c,param_4,param_4);
      break;
    case 0xb:
      FUN_004e6d00(local_30,param_3,param_4);
      FUN_004e6a00(local_3c,param_4,param_4);
      FUN_004e6d00(param_4,param_3,param_4);
      FUN_004e6a00(local_24,param_4,param_4);
      break;
    case 0xc:
      FUN_004e6d00(local_30,param_3,param_4);
      FUN_004e6a00(local_3c,param_4,param_4);
      FUN_004e6d00(param_4,param_3,param_4);
      FUN_004e6a00(local_24,param_4,param_4);
      FUN_004e6d00(param_4,param_3,param_4);
      FUN_004e6a00(local_18,param_4,param_4);
      break;
    case 0xd:
      FUN_004e6d00(local_30,param_3,param_4);
      FUN_004e6a00(local_3c,param_4,param_4);
      FUN_004e6d00(param_4,param_3,param_4);
      FUN_004e6a00(local_24,param_4,param_4);
      FUN_004e6d00(param_4,param_3,param_4);
      FUN_004e6a00(local_18,param_4,param_4);
      FUN_004e6d00(param_4,param_3,param_4);
      FUN_004e6a00(local_c,param_4,param_4);
      break;
    case 0xe:
      FUN_004e7410(param_3,param_4);
      FUN_004e6d00(local_3c,param_4,param_4);
      FUN_004e6a00(local_30,param_4,param_4);
      break;
    case 0xf:
      FUN_004e6d00(local_3c,param_3,param_4);
      FUN_004e73d0(param_4,param_4);
      FUN_004e6d00(local_30,param_4,param_4);
      break;
    case 0x10:
      FUN_004e6fb0(param_3,local_3c,param_4);
      FUN_004e6d00(local_30,param_4,param_4);
      break;
    case 0x11:
      FUN_004e6d00(param_3,local_3c,param_4);
      FUN_004e6a00(param_4,local_24,param_4);
      cVar1 = FUN_005260a0();
      FUN_004e7450(param_4,param_4,(int)cVar1);
      FUN_004e6d00(param_4,local_30,param_4);
      FUN_004e6a00(param_4,local_18,param_4);
      break;
    case 0x12:
      FUN_004e6d00(param_3,local_3c,param_4);
      uVar2 = FUN_004e7730(param_4,param_4,param_4);
      FUN_004e73d0(uVar2);
      FUN_004e6d00(local_30,param_4,param_4);
      uVar2 = FUN_004e57a0(local_c,param_4,param_4);
      FUN_004e6a00(uVar2);
      FUN_004e6dd0(local_24,param_4,param_4);
    }
    iVar3 = FUN_004e4020(param_4);
    if (iVar3 == 0) {
      FUN_004e7910(param_4,param_4);
    }
    return iVar3;
  }
}


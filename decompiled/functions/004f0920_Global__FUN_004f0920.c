// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f0920
// entry: 004f0920  size: 596


undefined4 FUN_004f0920(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  pcVar1 = param_2;
  cVar6 = '\x02';
  switch(param_2[1]) {
  case '4':
    iVar5 = 0x11;
    break;
  default:
    iVar5 = param_1;
    break;
  case '6':
    iVar5 = 0x12;
    break;
  case '@':
    iVar5 = 0x14;
    cVar6 = '\x01';
    break;
  case 'A':
    iVar5 = 0x15;
    break;
  case 'B':
    iVar5 = 9;
    break;
  case 'C':
    iVar5 = 10;
    break;
  case 'D':
    iVar5 = 0xb;
    break;
  case 'E':
    iVar5 = 0xc;
    break;
  case 'F':
    iVar5 = 0xd;
    break;
  case 'G':
    iVar5 = 0xe;
    break;
  case 'H':
    iVar5 = 0xf;
    break;
  case 'I':
    iVar5 = 0x10;
  }
  FUN_004fe330(param_2,param_1);
  uVar3 = param_3;
  iVar2 = FUN_004f5d60(param_1,pcVar1,param_3,&local_8);
  if (iVar2 == 0) {
    return 0;
  }
  if (cVar6 == '\x02') {
    iVar2 = FUN_004f5290(pcVar1,uVar3,1);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_004fe330(pcVar1,param_1);
    iVar2 = FUN_004f5d60(param_1,pcVar1,uVar3,&local_c);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    local_c = 0;
  }
  if (((iVar5 == 0x11) || (iVar5 == 0x12)) || (iVar2 = FUN_004f9b40(pcVar1), iVar2 != 0)) {
    param_2 = (char *)0x0;
  }
  else {
    iVar2 = FUN_004f5290(pcVar1,uVar3,1);
    if (iVar2 != 0) {
      FUN_004fe330(pcVar1,param_1);
      if (*pcVar1 == '1') {
        param_2 = (char *)0x0;
        FUN_004fe330(pcVar1,param_1);
      }
      else {
        iVar2 = FUN_004f5d60(param_1,pcVar1,uVar3,&param_2);
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
  }
  iVar2 = FUN_004f9b40(pcVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_004f58f0(2,uVar3);
    return uVar3;
  }
  iVar2 = FUN_00527440(0,local_8);
  if ((local_c != 0) && (iVar4 = FUN_00527440(0,local_c), iVar2 != iVar4)) {
    uVar3 = FUN_004f58f0(9,uVar3);
    return uVar3;
  }
  if ((param_2 != (char *)0x0) && (iVar4 = FUN_00527440(0,param_2), iVar2 != iVar4)) {
    uVar3 = FUN_004f58f0(9,uVar3);
    return uVar3;
  }
  *(undefined4 *)(param_4 + 0x138) = 10;
  iVar5 = FUN_004739a0(0,iVar5,local_8,local_c,param_2,local_4);
  if (iVar5 != 0) {
    uVar3 = FUN_004f58f0(iVar5,uVar3);
    return uVar3;
  }
  FUN_004fe3e0(pcVar1,param_1);
  return 1;
}


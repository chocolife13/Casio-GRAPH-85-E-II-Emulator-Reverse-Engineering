// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004366c0
// entry: 004366c0  size: 180


undefined4 FUN_004366c0(undefined4 param_1,char param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [5];
  int local_8;
  undefined1 local_4 [4];
  
  if ((param_2 < 'A') || ('Z' < param_2)) {
    local_1c[0] = 0;
  }
  else {
    local_1c[0] = param_2 + -0x40;
  }
  iVar1 = FUN_00528a20(local_1c[0],&local_8,local_4);
  if (iVar1 != 0) {
    return 4;
  }
  if ((param_4 != 0) && ((param_4 < 0 || (local_8 < param_4)))) {
    return 9;
  }
  if ((param_5 != 0) && ((param_5 < 0 || (local_8 < param_5)))) {
    return 9;
  }
  switch(param_1) {
  case 0xb:
  case 0xe:
    local_28 = param_4;
    local_24 = param_5;
    break;
  case 0xc:
  case 0xd:
    local_24 = param_4;
    local_20 = param_5;
  }
  uVar2 = FUN_00436a70(local_1c,param_1,param_3,&local_28);
  return uVar2;
}


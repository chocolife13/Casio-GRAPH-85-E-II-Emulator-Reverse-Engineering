// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442340
// entry: 00442340  size: 120


uint FUN_00442340(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  switch(((param_5 & 0x70) - 0x10) + param_4) {
  case 0:
  case 0x20:
  case 0x40:
  case 0x60:
    uVar2 = FUN_00442c10(param_2,param_1,1,param_6);
    break;
  case 1:
  case 0x21:
  case 0x41:
  case 0x61:
    uVar2 = FUN_00442c10(param_2,param_1,1,param_6);
    uVar1 = FUN_00442c10(param_3,param_1,2,param_6);
    return uVar2 | uVar1;
  }
  return uVar2;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442430
// entry: 00442430  size: 184


uint FUN_00442430(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  switch(((param_5 & 0x70) - 0x20) + param_4) {
  case 0:
  case 0x40:
    uVar3 = 1;
    break;
  case 1:
  case 0x41:
    uVar2 = FUN_00442c10(param_2,param_1,1,param_6);
    uVar1 = FUN_00442c10(param_3,param_1,2,param_6);
    return uVar2 | uVar1;
  default:
    goto switchD_00442455_caseD_2;
  case 0x10:
  case 0x50:
    uVar3 = 2;
    break;
  case 0x11:
  case 0x51:
    uVar2 = FUN_00442c10(param_2,param_1,3,param_6);
    uVar1 = FUN_00442c10(param_3,param_1,4,param_6);
    return uVar2 | uVar1;
  }
  uVar2 = FUN_00442c10(param_2,param_1,uVar3,param_6);
switchD_00442455_caseD_2:
  return uVar2;
}


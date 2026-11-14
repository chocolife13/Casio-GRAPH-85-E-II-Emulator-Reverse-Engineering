// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442550
// entry: 00442550  size: 242


uint FUN_00442550(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  switch(((param_5 & 0x70) - 0x40) + param_4) {
  case 0:
    uVar3 = 1;
    break;
  case 1:
    uVar2 = FUN_00442c10(param_2,param_1,1,param_6);
    uVar1 = FUN_00442c10(param_3,param_1,2,param_6);
    return uVar2 | uVar1;
  default:
    goto switchD_00442575_caseD_2;
  case 0x10:
  case 0x20:
    uVar3 = 2;
    break;
  case 0x11:
  case 0x21:
    uVar2 = FUN_00442c10(param_2,param_1,3,param_6);
    uVar1 = FUN_00442c10(param_3,param_1,4,param_6);
    return uVar2 | uVar1;
  case 0x30:
    uVar3 = 3;
    break;
  case 0x31:
    uVar2 = FUN_00442c10(param_2,param_1,5,param_6);
    uVar1 = FUN_00442c10(param_3,param_1,6,param_6);
    return uVar2 | uVar1;
  }
  uVar2 = FUN_00442c10(param_2,param_1,uVar3,param_6);
switchD_00442575_caseD_2:
  return uVar2;
}


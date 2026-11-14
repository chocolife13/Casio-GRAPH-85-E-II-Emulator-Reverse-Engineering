// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047b070
// entry: 0047b070  size: 81


undefined4 FUN_0047b070(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00473b70(&param_2,param_1,param_2);
  switch(uVar1) {
  case 0:
    FUN_00480280();
    return 0xffffffeb;
  case 0xffffffe5:
  case 0xffffffea:
  case 0xffffffeb:
    FUN_00480280();
    return uVar1;
  default:
    uVar1 = 0xffffffea;
switchD_0047b09a_caseD_ffffffe9:
    return uVar1;
  case 0xffffffe9:
    goto switchD_0047b09a_caseD_ffffffe9;
  }
}


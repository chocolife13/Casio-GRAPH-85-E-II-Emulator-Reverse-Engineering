// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518990
// entry: 00518990  size: 188


undefined4 FUN_00518990(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_404;
  undefined1 local_400 [1024];
  
  uVar1 = FUN_00517c00();
  switch(uVar1) {
  case 5:
    uVar1 = 0x20;
    break;
  case 6:
    uVar1 = 0x21;
    break;
  default:
    return 0xfffffffa;
  case 8:
    uVar1 = 0x28;
    break;
  case 9:
    uVar1 = 0x26;
    break;
  case 10:
    FUN_00518a70(*(undefined4 *)(param_1 + 0x8dc),local_400,0);
    local_404 = 1;
    goto LAB_00518a09;
  }
  FUN_00518f70(*(undefined4 *)(param_1 + 0x8dc),uVar1);
  local_404 = 0;
LAB_00518a09:
  FUN_00516760(param_1);
  FUN_0050ad60(param_1);
  uVar1 = FUN_00518e70(param_1,local_404,param_2);
  FUN_005167a0(param_1);
  return uVar1;
}


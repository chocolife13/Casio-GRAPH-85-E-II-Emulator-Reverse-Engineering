// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518d10
// entry: 00518d10  size: 309


undefined4 FUN_00518d10(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int local_8;
  undefined1 local_4 [4];
  
  FUN_00528a20(0x24,local_4,&local_8);
  if (local_8 == 0) {
    return 0xfffffffa;
  }
  iVar1 = FUN_00517c00();
  if (iVar1 == 5) {
    if (param_1 == 0x20) {
      return 0x23;
    }
  }
  else {
    if (iVar1 == 6) {
      bVar3 = param_1 == 0x21;
    }
    else {
      if (iVar1 != 9) {
        if ((iVar1 == 8) && (param_1 == 0x28)) {
          return 0x23;
        }
        goto LAB_00518d5d;
      }
      bVar3 = param_1 == 0x26;
    }
    if (bVar3) {
      return 0x23;
    }
  }
LAB_00518d5d:
  iVar1 = FUN_00516800(param_2);
  if (iVar1 != 0) {
    FUN_0052b240(4);
    return 0xfffffff5;
  }
  FUN_00518f70(*(undefined4 *)(param_2 + 0x8dc),param_1);
  iVar1 = FUN_00514820(param_2);
  if (iVar1 == 0) {
    FUN_0050ad60(param_2);
    iVar1 = FUN_00510270(param_2);
    FUN_0050acb0(param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
      switch(param_1) {
      case 0x20:
        uVar2 = 5;
        break;
      case 0x21:
        uVar2 = 6;
        break;
      case 0x26:
        uVar2 = 9;
        break;
      case 0x28:
        uVar2 = 8;
      }
      FUN_00517ac0(uVar2);
      uVar2 = FUN_00518e70(param_2,0,param_3);
      FUN_005167a0(param_2);
      return uVar2;
    }
  }
  FUN_00515dd0();
  FUN_0052b240(iVar1);
  return 0xfffffff5;
}


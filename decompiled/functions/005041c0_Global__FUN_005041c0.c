// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005041c0
// entry: 005041c0  size: 454


undefined4 FUN_005041c0(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  undefined1 local_4 [4];
  
  iVar2 = FUN_00517c00();
  if (iVar2 == 5) {
    if (param_1 == 0x20) {
      return 0x23;
    }
  }
  else if ((iVar2 == 6) && (param_1 == 0x21)) {
    return 0x23;
  }
  bVar1 = *(byte *)(param_2 + 0x8e0) >> 4 & 3;
  if ((bVar1 != 0) && (bVar1 < 3)) {
    FUN_00526070(0x22,2);
    *(byte *)(param_2 + 0x8e0) = *(byte *)(param_2 + 0x8e0) | 0x30;
    FUN_00515dd0();
    FUN_00518160();
  }
  FUN_00528a20(*(undefined1 *)(param_2 + 0x8e4),local_4,&local_8);
  if (local_8 == 0) {
    iVar2 = FUN_00505f10(param_2,0x20);
    if (iVar2 == 0) {
      FUN_0052b240(0x1e);
      return 0xfffffff5;
    }
    iVar2 = FUN_00509890(param_2);
    if (iVar2 != 0) {
      FUN_0052b240(iVar2);
      return 0xfffffff5;
    }
  }
  iVar2 = FUN_00516800(param_2);
  if (iVar2 != 0) {
    FUN_0052b240(4);
    return 0xfffffff5;
  }
  if ((*(byte *)(param_2 + 0x8e0) & 0x30) != 0) {
    *(byte *)(param_2 + 0x8e2) = *(byte *)(param_2 + 0x8e2) | 0x80;
  }
  if (param_1 == 0x20) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  FUN_00505f10(param_2,uVar3);
  iVar2 = FUN_00514820(param_2);
  if (iVar2 == 0) {
    FUN_0050ad60(param_2);
    *(byte *)(param_2 + 0x8e0) = *(byte *)(param_2 + 0x8e0) & 0xfc;
    iVar2 = FUN_00510270(param_2);
    FUN_0050acb0(param_2);
    if (iVar2 == 0) {
      if (param_1 == 0x20) {
        uVar3 = 5;
      }
      else {
        uVar3 = 6;
      }
      FUN_00517ac0(uVar3);
      if ((*(byte *)(param_2 + 0x8e0) & 0x30) == 0) {
        uVar3 = FUN_005033c0(param_2,param_3);
      }
      else {
        uVar3 = FUN_005032f0(param_2,param_3);
      }
      FUN_005167a0(param_2);
      return uVar3;
    }
  }
  FUN_0052b240(iVar2);
  FUN_00515dd0();
  return 0xfffffff5;
}


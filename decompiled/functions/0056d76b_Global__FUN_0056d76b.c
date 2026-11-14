// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d76b
// entry: 0056d76b  size: 252


undefined4 __thiscall FUN_0056d76b(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar1 = FUN_005661de();
  iVar2 = (**(code **)(*param_1 + 0x68))(1);
  if (iVar2 == 0) {
    uVar3 = uVar1 & 0x200000;
  }
  else {
    uVar3 = FUN_00566369();
  }
  if (uVar3 == 0) {
    param_3 = 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x68))(0);
  if (iVar2 == 0) {
    uVar1 = uVar1 & 0x100000;
  }
  else {
    uVar1 = FUN_00566369();
  }
  if (uVar1 == 0) {
    param_2 = 0;
  }
  iVar2 = FUN_00564cac(0);
  iVar4 = FUN_00564e14(0);
  param_2 = iVar2 + param_2;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (iVar4 < param_2) {
    param_2 = iVar4;
  }
  iVar4 = FUN_00564cac(1);
  iVar5 = FUN_00564e14(1);
  param_3 = iVar4 + param_3;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (iVar5 < param_3) {
    param_3 = iVar5;
  }
  if ((param_2 == iVar2) && (param_3 == iVar4)) {
    uVar6 = 0;
  }
  else {
    if (param_4 != 0) {
      FUN_00564e5b(iVar2 - param_2,iVar4 - param_3,0,0);
      if (param_2 != iVar2) {
        FUN_00564c7c(0,param_2,1);
      }
      if (param_3 != iVar4) {
        FUN_00564c7c(1,param_3,1);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


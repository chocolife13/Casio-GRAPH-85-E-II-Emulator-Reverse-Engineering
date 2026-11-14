// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00531730
// entry: 00531730  size: 279


int FUN_00531730(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar3 = param_1;
  if (param_1 == 0) {
    iVar3 = FUN_00531170(&param_1);
    if (iVar3 == 0) {
      return -2;
    }
  }
  else {
    if ((0x1b < param_1) && (param_1 < 0x1e)) {
      iVar1 = FUN_00530e20(local_24,local_c);
      if (iVar1 != 0) {
        return -2;
      }
      iVar1 = FUN_00531170(&param_1);
      if (iVar1 == 0) {
        param_1 = -1;
      }
      if (iVar3 != 0x1c) {
        uVar2 = FUN_004e5780(local_18,param_2);
        FUN_004e4120(local_c,uVar2);
        return param_1;
      }
      uVar2 = FUN_004e5780(local_18,param_2);
      FUN_004e4120(local_24,uVar2);
      return param_1;
    }
    iVar1 = FUN_00531170(&param_1);
    if (iVar1 == 0) {
      return -2;
    }
    iVar3 = FUN_00531440(param_1,iVar3);
    if (iVar3 == 0) {
      return -2;
    }
    iVar3 = FUN_00527570(0xfe,0,iVar3,param_2);
    if (iVar3 != 0) {
      return -2;
    }
  }
  return param_1;
}


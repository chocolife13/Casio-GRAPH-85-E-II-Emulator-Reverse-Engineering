// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005180c0
// entry: 005180c0  size: 51


uint FUN_005180c0(undefined4 param_1)

{
  uint uVar1;
  undefined1 local_c [12];
  
  uVar1 = FUN_00517f00(param_1,local_c);
  if (uVar1 != 0) {
    return uVar1 & 0xffff0000;
  }
  uVar1 = FUN_005172e0(0xffffffff,local_c);
  return uVar1;
}


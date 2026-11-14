// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518080
// entry: 00518080  size: 50


uint FUN_00518080(undefined4 param_1)

{
  uint uVar1;
  undefined1 local_c [12];
  
  uVar1 = FUN_00517f00(param_1,local_c);
  if (uVar1 != 0) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_00517410(0xffffffff,local_c);
  return uVar1;
}


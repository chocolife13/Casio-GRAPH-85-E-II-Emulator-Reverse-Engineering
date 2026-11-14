// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047ca80
// entry: 0047ca80  size: 49


undefined4 FUN_0047ca80(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x1b) {
    uVar1 = FUN_00527440(0,param_1);
    return uVar1;
  }
  if (param_1 < 0x65) {
    return 0x17;
  }
  uVar1 = FUN_00527440(0xff,(char)param_1 + -100);
  return uVar1;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051c420
// entry: 0051c420  size: 123


void FUN_0051c420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x24);
  if ((uVar1 & 0x100) != 0) {
    FUN_004d7eb0(param_1,param_2,param_3,param_4);
    return;
  }
  if ((uVar1 & 0x200) != 0) {
    FUN_004d7eb0(param_1,param_2,param_3,param_4);
    return;
  }
  if ((uVar1 & 1) != 0) {
    FUN_004d8260(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_004d8070(param_1,param_2,param_3,param_4);
  return;
}


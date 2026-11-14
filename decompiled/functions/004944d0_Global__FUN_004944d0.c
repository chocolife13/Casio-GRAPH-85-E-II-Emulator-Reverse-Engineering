// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004944d0
// entry: 004944d0  size: 144


undefined4 FUN_004944d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57a0(local_18);
  iVar1 = FUN_00469e60(param_1,local_18);
  if (iVar1 < 0) {
    return 0x1c;
  }
  FUN_004e7be0(local_18,local_18,4);
  iVar1 = FUN_00469e60(param_1,local_18);
  if (-1 < iVar1) {
    return 3;
  }
  FUN_004e5780(local_c);
  FUN_004e7620(param_1 + 0x24,local_18);
  uVar2 = FUN_00494560(local_c,param_1,local_c,local_18);
  return uVar2;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040bd60
// entry: 0040bd60  size: 66


void __fastcall FUN_0040bd60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_4;
  
  local_4 = param_1;
  uVar1 = FUN_0040d910(&stack0x00000008,0,0xffffffff,&local_4);
  iVar2 = FUN_0040b760(uVar1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    FUN_0040e4a0(uVar1,local_4);
  }
  return;
}


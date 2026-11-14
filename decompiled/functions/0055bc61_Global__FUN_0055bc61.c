// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055bc61
// entry: 0055bc61  size: 89


undefined4 FUN_0055bc61(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_005d9594);
  bVar2 = DAT_005d9590 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_005d9594);
    FUN_00558590(0x13);
  }
  uVar1 = FUN_0055bcba(param_1,param_2);
  if (bVar2) {
    FUN_005585f1(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_005d9594);
  }
  return uVar1;
}


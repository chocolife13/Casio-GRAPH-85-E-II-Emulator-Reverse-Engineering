// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004adc40
// entry: 004adc40  size: 30


void FUN_004adc40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*DAT_005d6d74;
  for (iVar1 = 0x2000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_005d6d74 = (undefined4 *)0x0;
  thunk_FUN_00411f40();
  return;
}


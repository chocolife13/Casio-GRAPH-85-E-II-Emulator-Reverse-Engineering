// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042fb10
// entry: 0042fb10  size: 51


void FUN_0042fb10(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_005d67e8 = (undefined4 *)_malloc(0x20000);
  puVar2 = DAT_005d67e8;
  for (iVar1 = 0x8000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x5a5a5a5a;
    puVar2 = puVar2 + 1;
  }
  DAT_005d67e8 = DAT_005d67e8 + 0x2000;
  return;
}


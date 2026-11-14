// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538250
// entry: 00538250  size: 88


void FUN_00538250(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005d6060;
  for (iVar1 = 99; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_005d03d8 = 0;
  FUN_00538340();
  DAT_005d03ca = 0;
  DAT_005d03cc = 0;
  DAT_005d03ce = 0;
  DAT_005d03d0 = 0;
  DAT_005d03d2 = 0;
  DAT_005d03d4 = 0;
  DAT_005d03d6 = 0;
  DAT_005c4220 = 1;
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055686d
// entry: 0055686d  size: 41


void FUN_0055686d(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_005da800;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_005da6e4 = 0;
  DAT_005da6fc = 0;
  DAT_005da904 = 0;
  DAT_005da6f0 = 0;
  DAT_005da6f4 = 0;
  DAT_005da6f8 = 0;
  return;
}


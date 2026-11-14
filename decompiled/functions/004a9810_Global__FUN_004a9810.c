// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9810
// entry: 004a9810  size: 49


undefined4 FUN_004a9810(ushort param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 < 0x11) {
    puVar2 = &DAT_005869c8 + (uint)param_1 * 5;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  }
  return 0;
}


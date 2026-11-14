// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9de0
// entry: 004a9de0  size: 24


void FUN_004a9de0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_004138b0();
  puVar3 = &DAT_005d6820;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


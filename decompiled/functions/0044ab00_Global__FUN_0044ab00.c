// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044ab00
// entry: 0044ab00  size: 80


void FUN_0044ab00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = param_1 + 0x3f;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0044a5a0(param_1);
  param_1[0x85] = 0;
  FUN_005232d0(param_1[0x82],param_1[0x83] + 1);
  FUN_00527030();
  param_1[0x86] = 0;
  param_1[0x89] = 0;
  return;
}


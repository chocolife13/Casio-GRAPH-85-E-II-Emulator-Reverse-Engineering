// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f6c0
// entry: 0041f6c0  size: 69


bool FUN_0041f6c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_20 [3];
  char local_12;
  
  puVar2 = param_1;
  puVar3 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0041f660(local_20);
  iVar1 = FUN_0041f690(param_1);
  if (iVar1 == 0) {
    return false;
  }
  return local_12 == '\x01';
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00525e80
// entry: 00525e80  size: 73


void FUN_00525e80(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_400 [256];
  
  puVar1 = (undefined4 *)FUN_00414640(7);
  puVar2 = local_400;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0052b240(param_1);
  puVar2 = (undefined4 *)FUN_00414640(7);
  puVar1 = local_400;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f51b0
// entry: 004f51b0  size: 64


void FUN_004f51b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_28 [10];
  
  puVar4 = *(undefined4 **)(param_1 + 0x38);
  puVar3 = (undefined4 *)*puVar4;
  puVar5 = local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004ad6d0(puVar4);
  cVar1 = *(char *)(param_1 + 0x11);
  puVar4 = local_28;
  puVar3 = (undefined4 *)(param_1 + 0x14);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  *(char *)(param_1 + 0x11) = cVar1 + -1;
  return;
}


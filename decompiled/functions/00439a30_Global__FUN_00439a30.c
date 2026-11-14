// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00439a30
// entry: 00439a30  size: 110


void FUN_00439a30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_2c;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x60);
  do {
    puVar4 = &local_2c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    puVar4 = (undefined4 *)((int)puVar3 + 0x126);
    puVar5 = &local_2c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar2 = iVar2 + 1;
    *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
    FUN_005232d0(1,iVar2);
    FUN_00523470(&local_2c,0x15);
    puVar4 = &local_2c;
    puVar5 = puVar3;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (undefined4 *)((int)puVar3 + 0x2a);
    *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  } while (iVar2 < 7);
  return;
}


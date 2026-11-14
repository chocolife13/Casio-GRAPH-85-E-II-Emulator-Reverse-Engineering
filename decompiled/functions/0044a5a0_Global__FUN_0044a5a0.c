// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044a5a0
// entry: 0044a5a0  size: 106


void FUN_0044a5a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_2c;
  
  iVar2 = 0;
  do {
    puVar3 = &local_2c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    puVar3 = param_1 + 0x3f;
    puVar4 = &local_2c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
    FUN_005232d0(1,iVar2 + 2);
    FUN_00523470(&local_2c,0x15);
    puVar3 = &local_2c;
    puVar4 = param_1;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = (undefined4 *)((int)param_1 + 0x2a);
    *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  } while (iVar2 < 6);
  return;
}


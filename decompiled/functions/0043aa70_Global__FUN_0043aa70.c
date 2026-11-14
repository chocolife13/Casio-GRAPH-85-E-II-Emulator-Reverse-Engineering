// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043aa70
// entry: 0043aa70  size: 85


void FUN_0043aa70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x60);
  puVar3 = (undefined4 *)(param_1 + 0x186);
  for (iVar1 = 0x49; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  FUN_00439a30(param_1);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_005232d0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  FUN_00527030();
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f74c0
// entry: 004f74c0  size: 157


void FUN_004f74c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (7 < *(int *)(param_1 + 0x128)) {
    iVar2 = 6;
    iVar1 = param_1;
    do {
      FUN_00554ab0(iVar1,iVar1 + 0x2a,0x2a);
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x2a;
    } while (iVar2 != 0);
    puVar3 = (undefined4 *)(param_1 + 0xfc);
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0x20202020;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0x2020;
    if (param_2 != 0) {
      iVar1 = 0;
      iVar2 = param_1;
      do {
        iVar1 = iVar1 + 1;
        FUN_005232d0(1,iVar1);
        FUN_00523470(iVar2,0x15);
        iVar2 = iVar2 + 0x2a;
      } while (iVar1 < 7);
    }
    *(undefined4 *)(param_1 + 0x128) = 7;
    return;
  }
  puVar3 = (undefined4 *)(param_1 + -0x2a + *(int *)(param_1 + 0x128) * 0x2a);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0x20202020;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0x2020;
  return;
}


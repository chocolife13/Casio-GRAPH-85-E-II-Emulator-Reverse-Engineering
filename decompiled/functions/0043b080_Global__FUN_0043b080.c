// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043b080
// entry: 0043b080  size: 98


undefined4 FUN_0043b080(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00414240();
  *(undefined4 *)(param_2 + 0x1c) = 1;
  *(undefined4 *)(param_2 + 0x54) = 1;
  FUN_00438a60(param_2);
  FUN_00527030();
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  puVar2 = (undefined4 *)(param_2 + 0x60);
  for (iVar1 = 0x49; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x20202020;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0x2020;
  puVar2 = (undefined4 *)(param_2 + 0x2ac);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x20202020;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0x2020;
  return 0;
}


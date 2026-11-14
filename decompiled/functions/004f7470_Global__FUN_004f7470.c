// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f7470
// entry: 004f7470  size: 66


void FUN_004f7470(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00414260();
  if (param_2 != '\0') {
    FUN_00523690(0);
  }
  puVar2 = param_1;
  for (iVar1 = 0x49; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x20202020;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0x2020;
  param_1[0x4a] = 1;
  param_1[0x50] = 0;
  return;
}


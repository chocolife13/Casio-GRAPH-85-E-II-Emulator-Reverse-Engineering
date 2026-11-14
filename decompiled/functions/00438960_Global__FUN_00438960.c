// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00438960
// entry: 00438960  size: 242


undefined4 FUN_00438960(undefined4 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_00414240();
  puVar4 = param_1 + 0x18;
  for (iVar3 = 0x49; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0x20202020;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0x2020;
  puVar2 = (undefined1 *)FUN_00407130(0x100);
  param_1[0xb6] = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    FUN_0052b240(4);
    return 0xffffffff;
  }
  *puVar2 = 0;
  param_1[1] = 1;
  *param_1 = 1;
  puVar2 = (undefined1 *)FUN_00407130(0x100);
  param_1[0xb7] = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    FUN_0052b240(4);
    return 0xffffffff;
  }
  *puVar2 = 0;
  param_1[4] = 1;
  param_1[5] = 1;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[6] = 1;
  param_1[0x16] = 1;
  param_1[7] = 1;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  cVar1 = FUN_00526090(0x17);
  param_1[0xc] = (uint)(cVar1 != '\0');
  FUN_005232d0(param_1[6],param_1[7]);
  FUN_00527030();
  puVar4 = param_1 + 0xab;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  return 0;
}


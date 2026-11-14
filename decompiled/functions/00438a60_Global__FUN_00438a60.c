// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00438a60
// entry: 00438a60  size: 180


void FUN_00438a60(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = param_1[7];
  param_1[6] = 1;
  param_1[0x16] = 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[3] = uVar1;
  param_1[2] = uVar1;
  FUN_005232d0(1,uVar1);
  param_1[8] = 1;
  puVar2 = (undefined1 *)FUN_004071b0(param_1[0xb6],0x100);
  if (puVar2 == (undefined1 *)0x0) {
    FUN_0052b240(4);
    return;
  }
  param_1[0xb6] = puVar2;
  *puVar2 = 0;
  param_1[1] = 1;
  *param_1 = 1;
  puVar2 = (undefined1 *)FUN_004071b0(param_1[0xb7],0x100);
  if (puVar2 == (undefined1 *)0x0) {
    FUN_0052b240(4);
    return;
  }
  param_1[0xb7] = puVar2;
  *puVar2 = 0;
  param_1[4] = 1;
  param_1[5] = 1;
  if (param_1[0xd] != 1) {
    puVar4 = param_1 + 0x18;
    for (iVar3 = 0x49; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0x20202020;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0x2020;
  }
  return;
}


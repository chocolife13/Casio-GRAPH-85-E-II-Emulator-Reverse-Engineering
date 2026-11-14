// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00513a50
// entry: 00513a50  size: 197


void FUN_00513a50(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x8dc) + 0xd + param_2 * 0x20) & 0x40) == 0) {
    iVar1 = FUN_004e7250(param_3,(undefined4 *)(param_1 + 0x890));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x890) = *param_3;
      *(undefined4 *)(param_1 + 0x894) = param_3[1];
      *(undefined4 *)(param_1 + 0x898) = param_3[2];
    }
    iVar1 = FUN_004e7290(param_3 + 3,(undefined4 *)(param_1 + 0x89c));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x89c) = param_3[3];
      *(undefined4 *)(param_1 + 0x8a0) = param_3[4];
      *(undefined4 *)(param_1 + 0x8a4) = param_3[5];
    }
  }
  else {
    iVar1 = FUN_004e7250(param_3,(undefined4 *)(param_1 + 0x89c));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x89c) = *param_3;
      *(undefined4 *)(param_1 + 0x8a0) = param_3[1];
      *(undefined4 *)(param_1 + 0x8a4) = param_3[2];
    }
    iVar1 = FUN_004e7290(param_3 + 3,(undefined4 *)(param_1 + 0x890));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x890) = param_3[3];
      *(undefined4 *)(param_1 + 0x894) = param_3[4];
      *(undefined4 *)(param_1 + 0x898) = param_3[5];
      return;
    }
  }
  return;
}


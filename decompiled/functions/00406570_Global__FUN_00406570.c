// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00406570
// entry: 00406570  size: 144


undefined4 FUN_00406570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00571ec1(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x168;
  *(undefined4 *)(param_1 + 0x10) = 0x340;
  FUN_0057497f();
  uVar2 = FUN_00575035(s_GY363_005a8d50,s_POS_TOP_005a8d58,*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  FUN_0057497f();
  iVar1 = FUN_00575035(s_GY363_005a8d50,s_POS_LEFT_005a8d44,*(undefined4 *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x1c) = iVar1;
  if (*(int *)(param_1 + 0x18) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = GetSystemMetrics(4);
  *(int *)(param_1 + 0x10) = iVar1 + 0x2dc;
  return 1;
}


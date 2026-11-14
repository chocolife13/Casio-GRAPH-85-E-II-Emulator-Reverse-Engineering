// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2610
// entry: 004a2610  size: 90


void FUN_004a2610(undefined2 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  puVar2 = (undefined4 *)(param_1 + 6);
  for (iVar1 = 200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
    *param_2 = DAT_00584ed8;
    param_2[1] = DAT_00584edc;
    param_2[2] = DAT_00584ee0;
    param_2[3] = s__00584ee4._0_4_;
    *(undefined1 *)(param_2 + 4) = 0;
    param_2 = param_2 + 0xc;
  } while (iVar1 != 0);
  return;
}


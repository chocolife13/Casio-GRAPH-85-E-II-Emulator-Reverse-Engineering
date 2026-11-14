// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562394
// entry: 00562394  size: 82


void __fastcall FUN_00562394(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar1 * 4);
            puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
          FUN_00567398();
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 8));
    }
    FUN_00566960(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00561e87();
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


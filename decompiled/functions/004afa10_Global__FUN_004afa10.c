// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004afa10
// entry: 004afa10  size: 373


void FUN_004afa10(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98 [13];
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined4 local_57;
  undefined4 local_53;
  
  local_9c = (param_2 >> 3) + 1;
  local_a8 = 7;
  local_ac = 0;
  do {
    FUN_00414240();
    local_a4 = 0;
    uVar2 = local_ac;
    do {
      puVar3 = &local_64;
      for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0x20202020;
        puVar3 = puVar3 + 1;
      }
      puVar3 = local_98;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0x20202020;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)puVar3 = 0x2020;
      FUN_004af130(uVar2,&local_64);
      local_60 = 0x3a;
      iVar1 = 0;
      puVar3 = local_98;
      uVar4 = uVar2;
      do {
        if (param_2 < uVar4) break;
        FUN_004af110(*(undefined1 *)(uVar4 + param_1),puVar3);
        iVar1 = iVar1 + 1;
        uVar4 = uVar4 + 1;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      } while (iVar1 < 8);
      local_5b = local_98[1];
      local_5f = local_98[0];
      local_57 = local_98[2];
      local_a4 = local_a4 + 1;
      local_53 = local_98[3];
      FUN_005232d0(1,local_a4);
      FUN_00523470(&local_64,0x15);
      uVar2 = uVar2 + 8;
    } while (local_a4 < 7);
    iVar1 = FUN_00526620(&local_a0);
    if (iVar1 == 0) {
      switch(local_a0) {
      case 0x7532:
      case 0x753f:
      case 0x754d:
        return;
      case 0x7542:
        if (local_ac != 0) {
          local_ac = local_ac - 8;
          local_a8 = local_a8 + -1;
        }
        break;
      case 0x7547:
        if (local_a8 < local_9c) {
          local_ac = local_ac + 8;
          local_a8 = local_a8 + 1;
        }
      }
    }
  } while( true );
}


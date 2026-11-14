// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004afbc0
// entry: 004afbc0  size: 289


void FUN_004afbc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98 [13];
  undefined4 local_64;
  undefined1 local_60;
  undefined2 local_5f;
  
  local_a4 = 0;
  local_a0 = 8;
  iVar2 = 1;
  do {
    do {
      FUN_00414240();
      iVar3 = 8;
      iVar4 = local_a4;
      do {
        puVar5 = &local_64;
        for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = 0x20202020;
          puVar5 = puVar5 + 1;
        }
        puVar5 = local_98;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = 0x20202020;
          puVar5 = puVar5 + 1;
        }
        *(undefined2 *)puVar5 = 0x2020;
        FUN_004af130(iVar4,&local_64);
        local_60 = 0x3a;
        FUN_004af110(*(undefined1 *)(iVar4 + param_1),local_98);
        local_5f = (undefined2)local_98[0];
        FUN_005232d0(1,iVar2 + iVar4);
        FUN_00523470(&local_64,0x15);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar4 = FUN_00526620(&local_9c);
    } while (iVar4 != 0);
    switch(local_9c) {
    case 0x7532:
    case 0x753f:
    case 0x754d:
      return;
    case 0x7542:
      if (iVar2 < 1) {
        local_a4 = local_a4 + -1;
        iVar2 = iVar2 + 1;
        local_a0 = local_a0 + -1;
      }
      break;
    case 0x7547:
      if (local_a0 < param_2) {
        local_a4 = local_a4 + 1;
        iVar2 = iVar2 + -1;
        local_a0 = local_a0 + 1;
      }
    }
  } while( true );
}


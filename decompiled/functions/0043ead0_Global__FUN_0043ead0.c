// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043ead0
// entry: 0043ead0  size: 482


undefined4 FUN_0043ead0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_a0;
  undefined1 local_9c [4];
  undefined1 local_98 [52];
  undefined4 local_64 [12];
  undefined1 local_34 [52];
  
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_9c);
  puVar4 = &DAT_0057f468;
  puVar5 = local_64;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,local_64);
  FUN_005387f0(0);
  FUN_005232d0(1,1);
  uVar2 = FUN_0052f6f0(0xaf,local_98);
  FUN_005233e0(uVar2);
  FUN_0043ecc0();
  *param_2 = 0;
  do {
    while( true ) {
      do {
        FUN_00538b30();
        FUN_005232d0(1,2);
        FUN_0052f6f0(0xb0,local_98);
        FUN_004b6e70(local_98,&DAT_005beb2c);
        uVar2 = FUN_0043ed70((int)*(short *)(param_1 + 0x24),local_34);
        FUN_004b6e70(local_98,uVar2);
        FUN_00523470(local_98,0x15);
        iVar3 = FUN_00526620(&local_a0);
      } while (iVar3 != 0);
      if (4 < local_a0) break;
      if (local_a0 == 4) {
        *(undefined2 *)(param_1 + 0x24) = 4;
        *(undefined2 *)(param_1 + 0x28) = 0;
        *(undefined2 *)(param_1 + 0x2a) = 0;
        *param_2 = 1;
        FUN_005302a0(param_1);
      }
      else if (local_a0 == 1) {
        *(undefined2 *)(param_1 + 0x24) = 1;
        *(undefined2 *)(param_1 + 0x28) = 0;
        *(undefined2 *)(param_1 + 0x2a) = 0;
        *param_2 = 1;
        FUN_005302a0(param_1);
      }
      else if (local_a0 == 2) {
        *(undefined2 *)(param_1 + 0x24) = 2;
        *(undefined2 *)(param_1 + 0x28) = 0;
        *(undefined2 *)(param_1 + 0x2a) = 0;
        *param_2 = 1;
        FUN_005302a0(param_1);
      }
      else if (local_a0 == 3) {
        *(undefined2 *)(param_1 + 0x24) = 3;
        *(undefined2 *)(param_1 + 0x28) = 0;
        *(undefined2 *)(param_1 + 0x2a) = 0;
        *param_2 = 1;
        FUN_005302a0(param_1);
      }
    }
    if (local_a0 == 0x7532) {
      uVar2 = 0xfffffffe;
LAB_0043ec7a:
      FUN_005302a0(param_1);
      goto LAB_0043ec83;
    }
    if (local_a0 == 0x7534) {
      uVar2 = 0;
      goto LAB_0043ec7a;
    }
  } while (local_a0 != 0x754d);
  uVar2 = 0xffffffff;
LAB_0043ec83:
  FUN_00538810();
  FUN_005389c0(0,0,local_9c);
  FUN_00526440();
  FUN_00526420(uVar1);
  return uVar2;
}


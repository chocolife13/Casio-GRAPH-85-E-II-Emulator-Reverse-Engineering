// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049c2e0
// entry: 0049c2e0  size: 259


undefined4 FUN_0049c2e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 local_2c8 [12];
  undefined1 local_2bc [12];
  undefined1 local_2b0 [12];
  undefined1 local_2a4 [52];
  undefined4 local_270 [36];
  undefined1 local_1e0 [96];
  undefined1 local_180 [48];
  undefined1 local_150 [336];
  
  DAT_005d6dc0 = local_2b0;
  DAT_005d6d84 = local_2bc;
  uVar1 = FUN_00526410();
  FUN_00538a00(local_2c8);
  FUN_00538980(0,0xc,local_2a4);
  uVar2 = FUN_00495fe0(s_EACT1_005bfd10);
  puVar4 = &DAT_005849e8;
  puVar5 = local_270;
  for (iVar3 = 0x9c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,local_270);
  FUN_00538860(1,local_1e0);
  FUN_00538860(2,local_180);
  iVar3 = 6;
  puVar6 = local_150;
  do {
    FUN_00538860(iVar3 + -3,puVar6);
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 0x30;
  } while (iVar3 < 0xd);
  FUN_00526420(100);
  FUN_0053c6f0(9);
  FUN_0053edf0(1);
  FUN_005387f0(0);
  uVar2 = FUN_0049b6a0(uVar2,local_270);
  FUN_00538810();
  FUN_00538a50(local_2c8);
  FUN_005389c0(0,0xc,local_2a4);
  FUN_00526420(uVar1);
  return uVar2;
}


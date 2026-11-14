// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049c180
// entry: 0049c180  size: 29


undefined4 FUN_0049c180(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined4 auStack_120 [72];
  
  DAT_005d6dc0 = local_138;
  DAT_005d6d84 = local_12c;
  FUN_00538d10();
  uVar1 = FUN_00495fe0(s_RUN2D1_005be2c4);
  iVar4 = 0;
  DAT_005d6d80 = 1;
  iVar3 = 0;
  do {
    puVar5 = (undefined4 *)(&UNK_005847d8 + iVar3);
    puVar6 = (undefined4 *)((int)auStack_120 + iVar3);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00538860(iVar4,(undefined4 *)((int)auStack_120 + iVar3));
    iVar3 = iVar3 + 0x30;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x120);
  FUN_00526420(100);
  FUN_0053c6f0(9);
  FUN_0053edf0(1);
  FUN_005383a0(0);
  FUN_0049b6a0(uVar1,auStack_120);
  return 1;
}


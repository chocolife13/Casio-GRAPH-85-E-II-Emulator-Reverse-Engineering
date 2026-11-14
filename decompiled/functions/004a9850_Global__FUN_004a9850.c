// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9850
// entry: 004a9850  size: 99


undefined4 FUN_004a9850(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  psVar4 = (short *)((int)&DAT_005869c8 + 2);
  sVar1 = *(short *)((int)param_1 + 2);
  while( true ) {
    iVar2 = FUN_004b79b0(*(undefined4 *)(psVar4 + 1),param_1[1],8);
    if ((iVar2 == 0) && (sVar1 == *psVar4)) break;
    psVar4 = psVar4 + 10;
    iVar3 = iVar3 + 1;
    if (0x586b1d < (int)psVar4) {
      param_1[4] = &DAT_005866b0;
      return 0;
    }
  }
  puVar5 = &DAT_005869c8 + iVar3 * 5;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  return 1;
}


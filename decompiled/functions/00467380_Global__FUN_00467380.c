// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00467380
// entry: 00467380  size: 79


void FUN_00467380(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_34 [52];
  
  piVar1 = &DAT_00581544;
  iVar3 = 0;
  do {
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)piVar1 < 0x581635);
  FUN_005232d0(1,1);
  uVar2 = FUN_0052f6f0(*(undefined4 *)(&UNK_00581548 + iVar3 * 8),local_34,0x15);
  FUN_00523470(uVar2);
  return;
}


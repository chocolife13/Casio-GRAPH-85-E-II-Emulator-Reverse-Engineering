// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052f7b0
// entry: 0052f7b0  size: 92


void FUN_0052f7b0(void)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 local_18 [6];
  
  bVar2 = 0x41;
  puVar3 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    FUN_004ac270(bVar2,local_18);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 0x5b);
  FUN_004ac270(0xce,local_18);
  FUN_004ac270(0xcd,local_18);
  return;
}


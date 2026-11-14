// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00573fb2
// entry: 00573fb2  size: 85


void FUN_00573fb2(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
    puVar1 = &DAT_0059d2a4;
    do {
      if (((*puVar1 ^ *(uint *)(param_1 + 100)) & 0xf000) == 0) {
        FUN_0057301c((&DAT_0059d2a0)[iVar2 * 2]);
        break;
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + 1;
    } while ((int)puVar1 < 0x59d2c4);
  }
  FUN_00570f93(param_1,param_3);
  return;
}


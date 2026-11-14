// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495f40
// entry: 00495f40  size: 148


void FUN_00495f40(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  FUN_004b6ef0(param_1,s________005bec28);
  sVar1 = *param_2;
  while (sVar1 != 0) {
    param_2 = param_2 + 1;
    sVar1 = *param_2;
  }
  sVar1 = *param_2;
  while (sVar1 != 0x5c) {
    param_2 = param_2 + -1;
    sVar1 = *param_2;
  }
  param_2 = param_2 + 1;
  iVar2 = FUN_004b6ca0(param_1);
  puVar3 = (undefined1 *)(iVar2 + param_1);
  sVar1 = *param_2;
  while (sVar1 != 0) {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *puVar3 = (char)sVar1;
    puVar3 = puVar3 + 1;
    sVar1 = *param_2;
  }
  puVar3[-4] = 0;
  uVar4 = FUN_004b6bd0(param_1);
  while (uVar4 < 0xe) {
    FUN_004b6e70(param_1,&DAT_005ad48c);
    uVar4 = FUN_004b6bd0(param_1);
  }
  FUN_004b6e70(param_1,s_________005bfd18);
  return;
}


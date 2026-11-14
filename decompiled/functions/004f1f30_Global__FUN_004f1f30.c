// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1f30
// entry: 004f1f30  size: 157


void FUN_004f1f30(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  
  bVar2 = FUN_0052f6b0(0x47);
  if (bVar2 < 2) {
    FUN_004f1b90(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if (*(byte *)(param_5 + 0x11) != 0) {
    uVar4 = (uint)*(byte *)(param_5 + 0x11);
    do {
      FUN_004f51b0(param_5);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  cVar3 = FUN_0052f6b0(0x47);
  FUN_0052f6c0(0x47,cVar3 + -1);
  puVar1 = *(undefined1 **)(param_5 + -0x38);
  *param_1 = puVar1;
  *param_2 = *puVar1;
  FUN_004fe330(param_2,param_1);
  FUN_004f71b0(param_1,param_2,param_3,param_4,param_5 + -0x3c);
  return;
}


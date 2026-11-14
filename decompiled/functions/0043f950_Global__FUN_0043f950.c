// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043f950
// entry: 0043f950  size: 197


undefined4 FUN_0043f950(uint *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = FUN_0043fa20(1);
  uVar4 = FUN_0043fa20(2);
  uVar5 = FUN_0043fa20(3);
  bVar1 = (byte)uVar3;
  if ((bVar1 & 2) == 2) {
    uVar3 = uVar3 | uVar4;
  }
  if ((bVar1 & 4) == 4) {
    uVar3 = uVar3 | uVar5;
  }
  bVar1 = (byte)uVar4;
  if ((bVar1 & 1) == 1) {
    uVar4 = uVar4 | uVar3;
  }
  if ((bVar1 & 4) == 4) {
    uVar4 = uVar4 | uVar5;
  }
  bVar1 = (byte)uVar5;
  if ((bVar1 & 1) == 1) {
    uVar5 = uVar5 | uVar3;
  }
  if ((bVar1 & 2) == 2) {
    uVar5 = uVar5 | uVar4;
  }
  *param_1 = 0;
  cVar2 = FUN_00518560(1);
  if (cVar2 == '\x01') {
    *param_1 = *param_1 + 0x10 | uVar3 | 1;
  }
  cVar2 = FUN_00518560(2);
  if (cVar2 == '\x01') {
    *param_1 = *param_1 + 0x20 | uVar4 | 2;
  }
  cVar2 = FUN_00518560(3);
  if (cVar2 == '\x01') {
    *param_1 = *param_1 + 0x40 | uVar5 | 4;
  }
  return 0;
}


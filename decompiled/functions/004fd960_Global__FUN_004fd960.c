// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fd960
// entry: 004fd960  size: 114


undefined4 FUN_004fd960(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  
  if ((param_1[1] != 0) || (*param_1 != 0)) {
    bVar1 = *param_1;
    if ((bVar1 & 0x80) != 0) {
      bVar2 = param_1[0xc] & 0xf0;
      bVar3 = bVar2 + 0x50;
      if (0x9f < bVar3) {
        bVar3 = bVar2 + 0xb0;
      }
      param_1[0xc] = param_1[0xc] & 0xf | bVar3;
    }
    if ((bVar1 & 0x60) == 0x20) {
      uVar4 = FUN_00501ed0(param_1);
      return uVar4;
    }
    bVar2 = bVar1;
    if (param_1[1] != 0) {
      bVar2 = (bVar1 & 0x70) + 0x50;
      if (0x9f < bVar2) {
        bVar2 = (bVar1 & 0x70) + 0xb0;
      }
      bVar2 = bVar1 & 0xf | bVar2;
      if ((bVar1 & 0x80) != 0) {
        bVar2 = bVar2 | 0x80;
      }
    }
    *param_1 = bVar2;
  }
  return 1;
}


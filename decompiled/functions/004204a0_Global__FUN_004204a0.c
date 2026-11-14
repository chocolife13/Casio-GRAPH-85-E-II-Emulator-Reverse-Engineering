// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004204a0
// entry: 004204a0  size: 138


void FUN_004204a0(uint *param_1,char param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_2 == '\0') {
    uVar1 = *param_1;
    *param_1 = (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  }
  iVar3 = 1;
  puVar2 = param_1;
  if (0 < (int)*param_1) {
    do {
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 1;
      *(ushort *)puVar2 = CONCAT11((char)(short)*puVar2,(char)((ushort)(short)*puVar2 >> 8));
    } while (iVar3 <= (int)*param_1);
  }
  if (param_2 == '\x01') {
    uVar1 = *param_1;
    *param_1 = (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  }
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e5b70
// entry: 004e5b70  size: 128


void FUN_004e5b70(undefined4 param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte local_c;
  uint local_b;
  uint local_7;
  
  FUN_004e5640(param_1,&local_c);
  *param_2 = local_b;
  param_2[1] = local_7;
  bVar4 = (byte)*param_2 & 0xf;
  *(byte *)param_2 = bVar4;
  *(byte *)(param_2 + 2) = 0;
  *(byte *)((int)param_2 + 9) = 0;
  if (bVar4 == 0) {
    ((byte *)((int)param_2 + 10))[0] = 0;
    ((byte *)((int)param_2 + 10))[1] = 0;
    return;
  }
  uVar2 = local_b & 0xff | (uint)local_c << 8;
  uVar3 = uVar2 >> 4;
  uVar1 = (ushort)uVar3 & 0xff;
  *(ushort *)((int)param_2 + 10) = (ushort)uVar2 & 0xf000;
  if (((local_c & 0xf0) == 0) || ((local_c & 0xf0) == 0x50)) {
    uVar1 = CONCAT11(9,(char)uVar3);
  }
  *(ushort *)((int)param_2 + 10) = *(ushort *)((int)param_2 + 10) | uVar1;
  return;
}


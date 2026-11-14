// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b3ee0
// entry: 004b3ee0  size: 196


undefined4 FUN_004b3ee0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_18 [6];
  
  bVar2 = *param_1;
  if ((bVar2 & 0xf) != 10) {
    if ((param_1[0xc] & 0xf) != 10) {
      return 1;
    }
    if ((bVar2 & 0xf) != 10) goto LAB_004b3f3c;
  }
  bVar1 = bVar2 >> 4 & 7;
  if ((bVar1 != 1) && (bVar1 != 6)) {
    *param_1 = 0xf0;
    return 0;
  }
  if (10 < (byte)((param_1[1] >> 4) + 1)) {
    *param_1 = 0xf0;
    return 0;
  }
LAB_004b3f3c:
  if (((bVar2 & 0x80) != 0) && ((param_1[0xc] & 0xf) == 10)) {
    bVar2 = param_1[0xc] >> 4 & 7;
    if ((bVar2 != 1) && (bVar2 != 6)) {
      param_1[0xc] = 0xf0;
      return 0;
    }
    if (10 < (byte)((param_1[0xd] >> 4) + 1)) {
      param_1[0xc] = 0xf0;
      return 0;
    }
  }
  FUN_004e56c0(param_1,local_18);
  puVar4 = local_18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 4;
  }
  return 1;
}


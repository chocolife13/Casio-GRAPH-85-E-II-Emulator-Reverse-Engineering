// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414480
// entry: 00414480  size: 185


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414480(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = param_1 * 8 + 8;
  if (0 < iVar2) {
    pbVar1 = (byte *)((int)&DAT_005d8284 + 1);
    do {
      pbVar1[-4] = pbVar1[-4] & 0xf8 | 8;
      *pbVar1 = *pbVar1 & 0xf | 0x80;
      pbVar1[3] = pbVar1[3] & 0xf8 | 8;
      pbVar1[7] = pbVar1[7] & 0xf | 0x80;
      iVar2 = iVar2 + -1;
      pbVar1[10] = pbVar1[10] & 0xf8 | 8;
      pbVar1 = pbVar1 + 0x10;
    } while (iVar2 != 0);
  }
  _DAT_005d8302 = 0xffffffff;
  _DAT_005d8306 = 0xffffffff;
  _DAT_005d830a = 0xffffffff;
  DAT_005d8300 = 0;
  DAT_005d830e = 0xff;
  DAT_005d8301 = 0xf;
  DAT_005d830f = 0xf8;
  if (param_2 != 0) {
    DAT_005d8380 = 0;
    _DAT_005d8382 = 0xffffffff;
    DAT_005d8381 = 0xf;
    _DAT_005d8386 = 0xffffffff;
    DAT_005d838f = 0xf8;
    _DAT_005d838a = 0xffffffff;
    DAT_005d838e = 0xff;
  }
  return;
}


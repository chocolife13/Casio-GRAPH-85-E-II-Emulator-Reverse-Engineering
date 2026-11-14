// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00573949
// entry: 00573949  size: 115


void FUN_00573949(void)

{
  byte bVar1;
  undefined2 *puVar2;
  HBITMAP hbm;
  int iVar3;
  undefined2 local_14 [8];
  
  FUN_00576699(8);
  if (DAT_005d5324 == (HBRUSH)0x0) {
    iVar3 = 0;
    puVar2 = local_14;
    do {
      bVar1 = (byte)iVar3;
      iVar3 = iVar3 + 1;
      *puVar2 = (short)(0x5555 << (bVar1 & 1));
      puVar2 = puVar2 + 1;
    } while (iVar3 < 8);
    hbm = CreateBitmap(8,8,1,1,local_14);
    if (hbm != (HBITMAP)0x0) {
      DAT_005d5324 = CreatePatternBrush(hbm);
      DeleteObject(hbm);
    }
  }
  FUN_00576709(8);
  FUN_0056a6d0(DAT_005d5324);
  return;
}


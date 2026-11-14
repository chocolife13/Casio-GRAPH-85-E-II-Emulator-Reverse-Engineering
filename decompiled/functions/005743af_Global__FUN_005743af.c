// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005743af
// entry: 005743af  size: 224


void FUN_005743af(void)

{
  byte bVar1;
  LONG LVar2;
  uint uVar3;
  undefined1 *puVar4;
  int nWidth;
  int iVar5;
  int iVar6;
  undefined1 local_94 [132];
  int local_10;
  int local_c;
  byte *local_8;
  
  LVar2 = GetMenuCheckMarkDimensions();
  nWidth = (int)(short)LVar2;
  local_10 = (int)(short)((uint)LVar2 >> 0x10);
  if (0x20 < nWidth) {
    nWidth = 0x20;
  }
  iVar5 = nWidth + 0xf >> 4;
  iVar6 = ((nWidth + -4) / 2 + iVar5 * 0x10) - nWidth;
  if (0xc < iVar6) {
    iVar6 = 0xc;
  }
  if (0x20 < local_10) {
    local_10 = 0x20;
  }
  _memset(local_94,0xff,0x80);
  local_8 = &DAT_0059a9fc;
  local_c = 5;
  puVar4 = local_94 + (local_10 + -6 >> 1) * iVar5 * 2;
  do {
    bVar1 = *local_8;
    uVar3 = (uint)local_8 >> 0x10;
    local_8 = local_8 + 1;
    uVar3 = ~(CONCAT22((short)uVar3,(ushort)bVar1) << ((byte)iVar6 & 0x1f));
    puVar4[1] = (char)uVar3;
    *puVar4 = (char)(uVar3 >> 8);
    puVar4 = puVar4 + iVar5 * 2;
    local_c = local_c + -1;
  } while (local_c != 0);
  DAT_005d50f8 = CreateBitmap(nWidth,local_10,1,1,local_94);
  if (DAT_005d50f8 == (HBITMAP)0x0) {
    DAT_005d50f8 = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7fe3);
  }
  return;
}


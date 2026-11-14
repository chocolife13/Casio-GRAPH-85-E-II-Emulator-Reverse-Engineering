// decompiled from GRAPH85emulator.exe
// function: Global::_memcmp
// entry: 00555b20  size: 172


/* Library Function - Single Match
    _memcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  sVar2 = _Size;
  if (_Size != 0) {
    if ((((uint)_Buf1 | (uint)_Buf2) & 3) == 0) {
      sVar2 = _Size & 3;
      uVar5 = _Size >> 2;
      bVar9 = uVar5 == 0;
      puVar7 = (uint *)_Buf1;
      puVar8 = (uint *)_Buf2;
      if (!bVar9) {
        do {
          _Buf1 = puVar7;
          _Buf2 = puVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          _Buf2 = puVar8 + 1;
          _Buf1 = puVar7 + 1;
          bVar9 = *puVar7 == *puVar8;
          puVar7 = (uint *)_Buf1;
          puVar8 = (uint *)_Buf2;
        } while (bVar9);
        if (!bVar9) {
          uVar5 = *(uint *)((int)_Buf1 + -4);
          uVar1 = *(uint *)((int)_Buf2 + -4);
          bVar9 = (byte)uVar5 < (byte)uVar1;
          if ((((byte)uVar5 == (byte)uVar1) &&
              (bVar4 = (byte)(uVar5 >> 8), bVar6 = (byte)(uVar1 >> 8), bVar9 = bVar4 < bVar6,
              bVar4 == bVar6)) &&
             (bVar4 = (byte)(uVar5 >> 0x10), bVar6 = (byte)(uVar1 >> 0x10), bVar9 = bVar4 < bVar6,
             bVar4 == bVar6)) {
            bVar9 = (byte)(uVar5 >> 0x18) < (byte)(uVar1 >> 0x18);
          }
          goto LAB_00555b9a;
        }
      }
      if (sVar2 != 0) {
                    /* WARNING: Load size is inaccurate */
        uVar5 = *_Buf1;
                    /* WARNING: Load size is inaccurate */
        uVar1 = *_Buf2;
        bVar9 = (byte)uVar5 < (byte)uVar1;
        if ((byte)uVar5 != (byte)uVar1) {
LAB_00555b9a:
          return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        iVar3 = sVar2 - 1;
        if (iVar3 != 0) {
          bVar6 = (byte)(uVar5 >> 8);
          bVar4 = (byte)(uVar1 >> 8);
          bVar9 = bVar6 < bVar4;
          if (bVar6 != bVar4) goto LAB_00555b9a;
          iVar3 = sVar2 - 2;
          if (iVar3 != 0) {
            bVar9 = (uVar5 & 0xff0000) < (uVar1 & 0xff0000);
            if ((uVar5 & 0xff0000) != (uVar1 & 0xff0000)) goto LAB_00555b9a;
            iVar3 = sVar2 - 3;
          }
        }
        return iVar3;
      }
    }
    else {
      if ((_Size & 1) == 0) goto LAB_00555b4d;
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
      bVar9 = *_Buf1 < *_Buf2;
      if (*_Buf1 != *_Buf2) goto LAB_00555b9a;
      _Buf1 = (void *)((int)_Buf1 + 1);
      _Buf2 = (void *)((int)_Buf2 + 1);
      for (_Size = _Size - 1; sVar2 = _Size, _Size != 0; _Size = _Size - 2) {
LAB_00555b4d:
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
        bVar9 = *_Buf1 < *_Buf2;
        if ((*_Buf1 != *_Buf2) ||
           (bVar9 = *(byte *)((int)_Buf1 + 1) < *(byte *)((int)_Buf2 + 1),
           *(byte *)((int)_Buf1 + 1) != *(byte *)((int)_Buf2 + 1))) goto LAB_00555b9a;
        _Buf2 = (void *)((int)_Buf2 + 2);
        _Buf1 = (void *)((int)_Buf1 + 2);
      }
    }
  }
  return sVar2;
}


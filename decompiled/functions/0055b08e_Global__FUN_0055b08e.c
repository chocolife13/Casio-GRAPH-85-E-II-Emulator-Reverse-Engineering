// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055b08e
// entry: 0055b08e  size: 647


void FUN_0055b08e(void)

{
  char cVar1;
  char cVar2;
  char *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  char *_Source;
  int local_8;
  
  FUN_00558590(0xc);
  DAT_005cc8b8 = 0xffffffff;
  DAT_005cc8a8 = 0xffffffff;
  DAT_005d5568 = 0;
  _Str1 = (char *)FUN_0055bf41(&DAT_0059d8a0);
  if (_Str1 == (char *)0x0) {
    FUN_005585f1(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_005d5570);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_005cc810 = DAT_005d5570 * 0x3c;
    DAT_005d5568 = 1;
    if (DAT_005d55b6 != 0) {
      DAT_005cc810 = DAT_005cc810 + DAT_005d55c4 * 0x3c;
    }
    if ((DAT_005d560a == 0) || (DAT_005d5618 == 0)) {
      DAT_005cc814 = 0;
      DAT_005cc818 = 0;
    }
    else {
      DAT_005cc814 = 1;
      DAT_005cc818 = (DAT_005d5618 - DAT_005d55c4) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_005d563c,0x220,(LPCWSTR)&DAT_005d5574,-1,PTR_DAT_005cc89c,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_005cc89c = 0;
    }
    else {
      PTR_DAT_005cc89c[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_005d563c,0x220,(LPCWSTR)&DAT_005d55c8,-1,PTR_DAT_005cc8a0,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_005cc8a0[0x3f] = 0;
      return;
    }
LAB_0055b2ff:
    *PTR_DAT_005cc8a0 = 0;
  }
  else {
    if ((*_Str1 != '\0') &&
       ((DAT_005d561c == (char *)0x0 || (iVar4 = _strcmp(_Str1,DAT_005d561c), iVar4 != 0)))) {
      FUN_00553b50(DAT_005d561c);
      sVar5 = _strlen(_Str1);
      DAT_005d561c = (char *)_malloc(sVar5 + 1);
      if (DAT_005d561c != (char *)0x0) {
        FUN_0055a500(DAT_005d561c,_Str1);
        FUN_005585f1(0xc);
        _strncpy(PTR_DAT_005cc89c,_Str1,3);
        _Source = _Str1 + 3;
        PTR_DAT_005cc89c[3] = 0;
        cVar2 = *_Source;
        if (cVar2 == '-') {
          _Source = _Str1 + 4;
        }
        iVar4 = FUN_00553f92(_Source);
        DAT_005cc810 = iVar4 * 0xe10;
        for (; (cVar1 = *_Source, cVar1 == '+' || (('/' < cVar1 && (cVar1 < ':'))));
            _Source = _Source + 1) {
        }
        if (*_Source == ':') {
          _Source = _Source + 1;
          iVar4 = FUN_00553f92(_Source);
          DAT_005cc810 = DAT_005cc810 + iVar4 * 0x3c;
          for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
          }
          if (*_Source == ':') {
            _Source = _Source + 1;
            iVar4 = FUN_00553f92(_Source);
            DAT_005cc810 = DAT_005cc810 + iVar4;
            for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
            }
          }
        }
        if (cVar2 == '-') {
          DAT_005cc810 = -DAT_005cc810;
        }
        DAT_005cc814 = (int)*_Source;
        if (DAT_005cc814 != 0) {
          _strncpy(PTR_DAT_005cc8a0,_Source,3);
          PTR_DAT_005cc8a0[3] = 0;
          return;
        }
        goto LAB_0055b2ff;
      }
    }
    FUN_005585f1(0xc);
  }
  return;
}


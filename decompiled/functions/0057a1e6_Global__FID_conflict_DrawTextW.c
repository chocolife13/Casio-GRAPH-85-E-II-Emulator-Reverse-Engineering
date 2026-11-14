// decompiled from GRAPH85emulator.exe
// function: Global::FID_conflict:DrawTextW
// entry: 0057a1e6  size: 70


/* Library Function - Multiple Matches With Different Base Names
    public: virtual int __thiscall CPreviewDC::DrawTextA(char const *,int,struct tagRECT *,unsigned
   int)
    public: virtual int __thiscall CPreviewDC::DrawTextW(wchar_t const *,int,struct tagRECT
   *,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int FID_conflict_DrawTextW(HDC hdc,LPCWSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  int in_ECX;
  tagPOINT local_c;
  
  local_c.x = in_ECX;
  local_c.y = in_ECX;
  iVar1 = DrawTextA(*(HDC *)(in_ECX + 4),(LPCSTR)hdc,(int)lpchText,(LPRECT)cchText,(UINT)lprc);
  GetCurrentPositionEx(*(HDC *)(in_ECX + 4),&local_c);
  MoveToEx(*(HDC *)(in_ECX + 8),local_c.x,local_c.y,(LPPOINT)0x0);
  return iVar1;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040fc60
// entry: 0040fc60  size: 109


undefined4 FUN_0040fc60(LPCSTR param_1)

{
  HRESULT HVar1;
  undefined4 uVar2;
  ULONG UStack_214;
  LPITEMIDLIST pIStack_210;
  IShellFolder *local_20c;
  WCHAR aWStack_208 [260];
  
  HVar1 = SHGetDesktopFolder(&local_20c);
  if (-1 < HVar1) {
    MultiByteToWideChar(0,1,param_1,-1,aWStack_208,0x104);
    uVar2 = 0;
    HVar1 = (*local_20c->lpVtbl->ParseDisplayName)
                      (local_20c,(HWND)0x0,(IBindCtx *)0x0,aWStack_208,&UStack_214,&pIStack_210,
                       &UStack_214);
    if (-1 < HVar1) {
      return uVar2;
    }
  }
  return 0;
}


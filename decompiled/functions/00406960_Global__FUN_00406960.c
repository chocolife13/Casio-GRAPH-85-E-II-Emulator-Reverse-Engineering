// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00406960
// entry: 00406960  size: 294


undefined4 FUN_00406960(char *param_1)

{
  char cVar1;
  int iVar2;
  HRESULT HVar3;
  LPSTR pszPath;
  LPITEMIDLIST pidl;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  int *unaff_EBP;
  int *unaff_ESI;
  HWND hwnd;
  char *pcVar7;
  undefined4 uVar8;
  LPSTR pCVar9;
  IMalloc *local_28;
  LPITEMIDLIST pIStack_24;
  _browseinfoA _Stack_20;
  
  uVar8 = 0;
  local_28 = (IMalloc *)0x0;
  iVar2 = FUN_0057497f();
  iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x74))();
  if (iVar2 == 0) {
    hwnd = (HWND)0x0;
  }
  else {
    hwnd = *(HWND *)(iVar2 + 0x1c);
  }
  HVar3 = SHGetMalloc(&local_28);
  if (HVar3 < 0) {
    return 0;
  }
  pszPath = (LPSTR)(*local_28->lpVtbl->Alloc)(local_28,0x104);
  if (pszPath == (LPSTR)0x0) {
    return 0;
  }
  HVar3 = SHGetSpecialFolderLocation(hwnd,0,&pIStack_24);
  if (HVar3 < 0) {
    (*local_28->lpVtbl->Free)(local_28,pszPath);
    return 0;
  }
  _Stack_20.pidlRoot = pIStack_24;
  _Stack_20.lpszTitle = (LPCSTR)0x0;
  _Stack_20.ulFlags = 0;
  _Stack_20.lpfn = (BFFCALLBACK)&LAB_00406a90;
  _Stack_20.lParam = (LPARAM)param_1;
  _Stack_20.hwndOwner = hwnd;
  _Stack_20.pszDisplayName = pszPath;
  pidl = SHBrowseForFolderA(&_Stack_20);
  if (pidl != (LPITEMIDLIST)0x0) {
    BVar4 = SHGetPathFromIDListA(pidl,pszPath);
    if (BVar4 != 0) {
      uVar5 = 0xffffffff;
      pCVar9 = pszPath;
      do {
        pcVar7 = pCVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar7 = pCVar9 + 1;
        cVar1 = *pCVar9;
        pCVar9 = pcVar7;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar7 + -uVar5;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)param_1 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        param_1 = param_1 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        param_1 = param_1 + 1;
      }
      uVar8 = 1;
    }
    (*local_28->lpVtbl->Free)(local_28,pidl);
  }
  (*local_28->lpVtbl->Free)(local_28,pIStack_24);
  (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,pszPath);
  (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  return uVar8;
}


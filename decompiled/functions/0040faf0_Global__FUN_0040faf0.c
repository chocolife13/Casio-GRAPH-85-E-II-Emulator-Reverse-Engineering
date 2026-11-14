// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040faf0
// entry: 0040faf0  size: 290


undefined4 FUN_0040faf0(undefined4 param_1,HWND param_2,int param_3,LPCSTR param_4,LPARAM param_5)

{
  LPCITEMIDLIST pIVar1;
  LPITEMIDLIST pidl;
  BOOL BVar2;
  int iVar3;
  _browseinfoA *p_Var4;
  undefined *local_138;
  undefined4 local_134;
  _browseinfoA local_130;
  CHAR aCStack_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0057ace5;
  pvStack_c = ExceptionList;
  local_134 = 0;
  local_138 = PTR_DAT_005cba44;
  local_4 = 1;
  p_Var4 = &local_130;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    p_Var4->hwndOwner = (HWND)0x0;
    p_Var4 = (_browseinfoA *)&p_Var4->pidlRoot;
  }
  if (param_3 == 0) {
    pIVar1 = (LPCITEMIDLIST)0x0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    pIVar1 = (LPCITEMIDLIST)FUN_0040fc60(param_3);
  }
  local_130.hwndOwner = param_2;
  local_130.pszDisplayName = (LPSTR)0x0;
  local_130.lpszTitle = param_4;
  local_130.ulFlags = 1;
  local_130.lpfn = (BFFCALLBACK)&LAB_0040fc20;
  local_130.lParam = param_5;
  local_130.pidlRoot = pIVar1;
  pidl = SHBrowseForFolderA(&local_130);
  if (pidl != (LPITEMIDLIST)0x0) {
    BVar2 = SHGetPathFromIDListA(pidl,aCStack_110);
    if (BVar2 == 1) {
      FUN_0056116d(&local_138,&DAT_005a92c4,aCStack_110);
    }
  }
  FUN_0040fcd0(pIVar1);
  FUN_0056710d(&local_138);
  local_134 = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_00567398();
  ExceptionList = pvStack_c;
  return param_1;
}


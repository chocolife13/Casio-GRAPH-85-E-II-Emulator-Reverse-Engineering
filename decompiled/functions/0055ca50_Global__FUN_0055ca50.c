// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055ca50
// entry: 0055ca50  size: 229


void FUN_0055ca50(HWND param_1,LONG param_2)

{
  HANDLE pvVar1;
  int iVar2;
  BOOL BVar3;
  CHAR aCStack_10 [16];
  
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da968);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da96e);
    if (pvVar1 == (HANDLE)0x0) {
      pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da972);
      if (pvVar1 == (HANDLE)0x0) {
        pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da96c);
        if (pvVar1 == (HANDLE)0x0) {
          pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da970);
          if (pvVar1 == (HANDLE)0x0) {
            pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da96a);
            if (pvVar1 == (HANDLE)0x0) {
              iVar2 = FUN_0055c9e0(param_1);
              if (iVar2 == 0) {
                if (DAT_005db465 != '\0') {
                  BVar3 = IsWindowUnicode(param_1);
                  if (BVar3 == 0) {
                    GetClassNameA(param_1,aCStack_10,0x10);
                    lstrcmpiA(aCStack_10,&DAT_005ccaa0);
                  }
                }
                pvVar1 = (HANDLE)SetWindowLongA(param_1,-4,param_2);
                SetPropA(param_1,(LPCSTR)(uint)DAT_005da96e,pvVar1);
              }
            }
          }
        }
      }
    }
  }
  return;
}


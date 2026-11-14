// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568f55
// entry: 00568f55  size: 172


bool FUN_00568f55(HKEY param_1)

{
  LSTATUS LVar1;
  LPBYTE lpData;
  bool bVar2;
  DWORD local_14 [2];
  HKEY local_c;
  HKEY local_8;
  
  bVar2 = false;
  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyA((HKEY)0x80000000,"CLSID",&local_c);
  if (LVar1 == 0) {
    local_8 = (HKEY)0x0;
    LVar1 = RegOpenKeyA(local_c,(LPCSTR)param_1,&local_8);
    if (LVar1 == 0) {
      param_1 = (HKEY)0x0;
      LVar1 = RegOpenKeyA(local_8,"InProcServer32",&param_1);
      if (LVar1 == 0) {
        lpData = (LPBYTE)FUN_005676c7(0x104);
        local_14[1] = 0x104;
        LVar1 = RegQueryValueExA(param_1,&DAT_005cd010,(LPDWORD)0x0,local_14,lpData,local_14 + 1);
        FUN_00567716(0xffffffff);
        bVar2 = LVar1 == 0;
        RegCloseKey(param_1);
      }
      RegCloseKey(local_8);
    }
    RegCloseKey(local_c);
  }
  return bVar2;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005693d2
// entry: 005693d2  size: 90


void FUN_005693d2(HMODULE param_1)

{
  LPSTR lpszShortPath;
  DWORD DVar1;
  CHAR local_108 [260];
  
  GetModuleFileNameA(param_1,local_108,0x104);
  DVar1 = 0x104;
  lpszShortPath = (LPSTR)FUN_005676c7(0x104);
  DVar1 = GetShortPathNameA(local_108,lpszShortPath,DVar1);
  if (DVar1 == 0) {
    FUN_005674d5(local_108);
  }
  FUN_00567716(0xffffffff);
  return;
}


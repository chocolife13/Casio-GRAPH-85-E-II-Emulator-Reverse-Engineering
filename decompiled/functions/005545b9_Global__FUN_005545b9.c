// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005545b9
// entry: 005545b9  size: 42


undefined4 FUN_005545b9(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  if (DVar2 != 0) {
    FUN_0055424e(DVar2);
    return 0xffffffff;
  }
  return 0;
}


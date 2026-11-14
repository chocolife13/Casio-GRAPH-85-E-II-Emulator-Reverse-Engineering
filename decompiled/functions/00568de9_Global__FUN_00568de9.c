// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568de9
// entry: 00568de9  size: 30


void FUN_00568de9(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    FUN_0056942c(DVar2,BVar1);
  }
  return;
}


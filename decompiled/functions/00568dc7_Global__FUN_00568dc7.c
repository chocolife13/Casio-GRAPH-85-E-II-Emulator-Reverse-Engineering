// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568dc7
// entry: 00568dc7  size: 34


void FUN_00568dc7(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    FUN_0056942c(DVar2,BVar1);
  }
  return;
}


// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568bb8
// entry: 00568bb8  size: 58


DWORD __thiscall FUN_00568bb8(int param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    BVar1 = ReadFile(*(HANDLE *)(param_1 + 4),param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      FUN_0056942c(DVar2,BVar1);
    }
  }
  return param_3;
}

